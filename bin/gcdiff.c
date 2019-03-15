/*
   Copyright (C) 2017 Free Software Foundation, Inc.
   Written by Ron Norman, Simon Sobisch

   This file is part of GnuCOBOL.

   The GnuCOBOL diff helper program is free software: you can redistribute it
   and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   GnuCOBOL is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GnuCOBOL.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
     Program:  gcdiff.c

     Function: This program is used to compare GnuCOBOL test results 
	           and handle expected difference such as Date/Time
*/

#include	"config.h"
#include	<stdio.h>
#include	<stdlib.h>
#ifdef	HAVE_UNISTD_H
#include	<unistd.h>
#endif
#include	<string.h> 
#include	<time.h> 
#ifdef	HAVE_SYS_TIME_H
#include	<sys/time.h>
#endif
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<ctype.h>
#include	<libcob.h>
#include	"tarstamp.h"
#include	"libcob/cobgetopt.h"

/* needed for time checks */
#ifdef	HAVE_LOCALE_H
#include <locale.h>
#endif


#if	defined(ENABLE_NLS) && defined(COB_NLS_RUNTIME)
#include	"defaults.h" /* get LOCALEDIR */
#include	"lib/gettext.h"
#define _(s)		gettext(s)
#define N_(s)		gettext_noop(s)
#else
#define _(s)		s
#define N_(s)		s
#endif

/* Support for gcdiff from stdin */
#define GCD_DASH			"-"

static char	ign_char = '~';		/* This 'char' in reference file ignores same byte position in test file */
static int	ign_spaces = 0;		/* If '1' then all spaces are ignored */
static int	be_quiet = 0;		/* Be less wordy */
static struct stat st_ref;
static struct stat st_test;

static const char short_options[] = "hqwr:t:c:e:I:V";

#define	CB_NO_ARG	no_argument
#define	CB_RQ_ARG	required_argument
#define	CB_OP_ARG	optional_argument

static const struct option long_options[] = {
	{"help",		CB_NO_ARG, NULL, 'h'},
	{"version",   	CB_NO_ARG, NULL, 'V'},
	{"quiet",		CB_NO_ARG, NULL, 'q'},
	{"spaces",		CB_NO_ARG, NULL, 'w'},
	{"ref",			CB_RQ_ARG, NULL, 'r'},
	{"test",		CB_RQ_ARG, NULL, 't'},
	{"ign-char",	CB_RQ_ARG, NULL, 'c'},
	{"ignore",		CB_RQ_ARG, NULL, 'e'},
	{"skip",		CB_RQ_ARG, NULL, 'I'},
	{NULL, 0, NULL, 0}
};


#define MAX_TEMPLATES 64
static struct {
	short	len;				/* Length of 'pat' */
	short	is_num;				/* Alpha letters are really Digits */
	enum {
		CREATE_DATE  = 1,		/* Compare to 'testfile' creation date */
		MODIFY_DATE = 2			/* Comapre to 'testfile' modification date */
	} is_date;					/* Reconstruct and verify date */
	char	*pat;
} templates[MAX_TEMPLATES] = {
	{10,1,0,(char*)"YYYY/MM/DD"},
	{ 8,1,0,(char*)"YY/MM/DD"},
	{ 8,1,0,(char*)"HH:MM:SS"},
	{ 5,1,0,(char*)"HH:MM"},
	{ 4,1,0,(char*)"YYYY"},
	{ 3,0,0,(char*)"MMM"},
	{ 2,1,0,(char*)"DD"},
	{ 3,0,0,(char*)"DDD"},
	{-1,0,0,(char*)0}, {-1,0,0,(char*)0}
};

#define MAX_SKIP 64
static struct {
	short	len;
	char	*pat;
} skip_lines[MAX_TEMPLATES] = {
	{-1,(char*)0}, {-1,(char*)0}
};

/* Bubble sort Templates for longest first */
static void
sort_templates()
{
	int		i,j,k,n;
	char	*p;
	for (i=1; i; ) {
		i = 0;
		for (j=0; templates[j].len != -1; j++) {
			if (templates[j+1].len != -1
			 && templates[j].len < templates[j+1].len) {
				i = 1;		/* Swap is being done */
				p = templates[j].pat;
				k = templates[j].len;
				n = templates[j].is_num;
				templates[j].pat = templates[j+1].pat;
				templates[j].len = templates[j+1].len;
				templates[j].is_num = templates[j+1].is_num;
				templates[j+1].pat = p;
				templates[j+1].len = k;
				templates[j+1].is_num = n;
			}
		}
	}
}

/*
* Output version information
*/
static void
gcd_print_version (void)
{
	char	cob_build_stamp[COB_MINI_BUFF];
	char	month[64];
	int status, day, year;

	/* Set up build time stamp */
	memset (cob_build_stamp, 0, (size_t)COB_MINI_BUFF);
	memset (month, 0, sizeof(month));
	day = 0;
	year = 0;
	status = sscanf (__DATE__, "%s %d %d", month, &day, &year);
	if (status == 3) {
		snprintf (cob_build_stamp, (size_t)COB_MINI_MAX,
			"%s %2.2d %4.4d %s", month, day, year, __TIME__);
	} else {
		snprintf (cob_build_stamp, (size_t)COB_MINI_MAX,
			"%s %s", __DATE__, __TIME__);
	}

	printf ("gcdiff (%s) %s.%d\n",
		PACKAGE_NAME, PACKAGE_VERSION, PATCH_LEVEL);
	puts ("Copyright (C) 2017 Free Software Foundation, Inc.");
	puts (_("License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>"));
	puts (_("This is free software; see the source for copying conditions.  There is NO\n"
		"warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE."));
	printf (_("Written by %s"), "Ron Norman, Simon Sobisch");
	putchar ('\n');
	printf (_("Built     %s"), cob_build_stamp);
	putchar ('\n');
	printf (_("Packaged  %s"), COB_TAR_DATE);
	putchar ('\n');
}

/*
 * Display program usage information
*/
static void
gcd_usage (char *prog, char * referencefile)
{
	int		i;

	puts (_("Compare GnuCOBOL test case files"));
	putchar ('\n');
	printf (_("usage: %s [options] referencefile testfile"), prog);
	putchar ('\n');
	putchar ('\n');
	puts (_("Options:"));
	printf (_("  -c x            character 'x' indicates ignore"));
	if (ign_char) {
		printf ("; %s: '%c'", _("default"), ign_char);
	}
	putchar ('\n');
	puts (_("  -e STR          string STR is ignored"));
	puts (_("  -n STR          string STR is ignored; alpha chars are DIGITS in testfile"));
	puts (_("  -I STR          if STR is on line of referencefile, ignore complete line"));
	puts (_("  -w              ignore all spaces"));
	puts (_("  -h, -help       display this help and exit"));
	puts (_("  -V, -version    display version and exit"));
	puts (_("  referencefile   base text file (reference case) to compare with"));
	puts (_("  testfile        text file created by the test case to be compared"));
	if (referencefile) {
		sort_templates();
		putchar ('\n');
		printf(_("default strings to be ignored when found in  '%s'"),
			referencefile[0] > ' '?referencefile:"referencefile");
		putchar ('\n');
		for (i=0; i < MAX_TEMPLATES-1 && templates[i].len > 0; i++) {
			if (templates[i].is_num) {
				printf("%.*s  ",templates[i].len,templates[i].pat);
			} else {
				printf("'%.*s' ",templates[i].len,templates[i].pat);
			}

		}
		putchar ('\n');
		if (skip_lines[0].len > 0) {
			putchar ('\n');
			puts (_("default strings to cause line to be ignored"));
			for (i=0; i < MAX_SKIP-1 && skip_lines[i].len > 0; i++) {
				printf("%.*s  ",skip_lines[i].len,skip_lines[i].pat);
			}
			putchar ('\n');
		}
	}
	putchar ('\n');
	printf (_("Report bugs to: %s or\n"
		"use the preferred issue tracker via home page"), "bug-gnucobol@gnu.org");
	putchar ('\n');
	puts (_("GnuCOBOL home page: <http://www.gnu.org/software/gnucobol/>"));
	puts (_("General help using GNU software: <http://www.gnu.org/gethelp/>"));
}

/*
 * Compare 'ref' to 'rslt'
 */
static int
compare_file(FILE *ref, FILE *rslt, FILE *rpt)
{
	char	rbuf[4096], nbuf[4096];
	int		i, j, k, n, t, numdiff, linenum;
	if (ref == NULL
	 || ferror(ref)
	 || feof(ref))
		return 2;
	if (rslt == NULL
	 || ferror(rslt)
	 || feof(rslt))
		return 2;
	linenum = numdiff = 0;
	memset(nbuf,0,sizeof(nbuf));
	memset(rbuf,0,sizeof(rbuf));
	while (fgets(rbuf,sizeof(rbuf),ref) != NULL) {
		for (k=strlen(rbuf); rbuf[k-1] == '\r' || rbuf[k-1] == '\n' || rbuf[k-1] == ' '; k--);
		rbuf[k] = 0;
		if (fgets(nbuf,sizeof(nbuf),rslt) == NULL)
			break;
		for (j=strlen(nbuf); nbuf[j-1] == '\r' || nbuf[j-1] == '\n' || rbuf[j-1] == ' '; j--);
		nbuf[j] = 0;
		linenum++;

		for (t=0; skip_lines[t].len > 0; t++) {
			if (strstr(rbuf, skip_lines[t].pat) != NULL)	/* Is string on the line */
				break;
		}
		if (skip_lines[t].len > 0)			/* Ignore complete line */
			continue;
		for (i=j=0; i < k; i++,j++) {
			if (ign_spaces) {
				 while (rbuf[i] == ' ' && i < k) i++;
				 while (nbuf[j] == ' ' && j < k) j++;
			}
			for (t=0; templates[t].len > 0; t++) {
				if (memcmp(templates[t].pat, &rbuf[i], templates[t].len) == 0)
					break;
			}
			if (templates[t].len > 0) {
				if (templates[t].is_num) {	/* Numeric data expected */
					for (n=0; n < templates[t].len; i++,j++,n++) {
						if (rbuf[i] == nbuf[j])
							continue;
						if (!isdigit(nbuf[j])) {
							while (n < templates[t].len-1)
								i++,j++,n++;
							goto mis_match;
						}
					}
				} else {
					i += templates[t].len;
					j += templates[t].len;
				}
				i--; j--;
				continue;
			}
			if (rbuf[i] == nbuf[j])
				continue;
			if (rbuf[i] == ign_char)
				continue;
mis_match:
			numdiff++;
			if (!be_quiet) {
				fprintf(rpt,"%dc%d\n",linenum,linenum);
				fprintf(rpt,"< %s\n",rbuf);
				fprintf(rpt,"---\n");
				fprintf(rpt,"> %s\n",nbuf);
			}
			break;
		}
	}
	if (!feof(rslt) )
		fgets(nbuf,sizeof(nbuf),rslt);
	if (numdiff > 0)
		return 1;
	if (feof(ref)
	 && feof(rslt))
		return 0;
	return 1;
}

/*
 * M A I N L I N E   Starts here
 */
int
main(
	int		argc,
	char	*argv[])
{
	int		opt,idx,i,k;
	FILE	*ref,*rslt;
	char	referencefile[256];
	char	testfile[256];

#ifdef	HAVE_SETLOCALE
	setlocale (LC_ALL, "");
#endif

	for (i=0; i < MAX_TEMPLATES; i++) {
		if (templates[i].len == -1) {
			while (i < MAX_TEMPLATES) {
				templates[i].len = -1;
				templates[i].pat = NULL;
				i++;
			}
		}
	}
	for (i=0; i < MAX_SKIP; i++) {
		skip_lines[i].len = -1;
		skip_lines[i].pat = NULL;
	}
	memset(referencefile,0,sizeof(referencefile));
	memset(testfile,0,sizeof(testfile));
	idx = 0;
	cob_optind = 1;
	while ((opt = cob_getopt_long_long (argc, argv, short_options,
					  long_options, &idx, 1)) >= 0) {
		switch(opt) {
		case 'w':
			ign_spaces = 1;
			break;
		case 'q':
			be_quiet = 1;
			break;
		case 'c':
			ign_char = cob_optarg[0];
			break;
		case 'r':
			strcpy(referencefile,cob_optarg);
			break;
		case 't':
			strcpy(testfile,cob_optarg);
			break;

		case 'e':		/* Ignore this 'string' */
			for (i=0; i < MAX_TEMPLATES-1; i++) {
				if (templates[i].len == -1) {
					templates[i].pat = strdup(cob_optarg);
					templates[i].len = strlen(cob_optarg);
					templates[i].is_num = 0;
					break;
				}
			}
			break;

		case 'n':		/* Ignore this 'string', ALPHA chars are really digits */
			for (i=0; i < MAX_TEMPLATES-1; i++) {
				if (templates[i].len == -1) {
					templates[i].pat = strdup(cob_optarg);
					templates[i].len = strlen(cob_optarg);
					templates[i].is_num = 1;
					break;
				}
			}
			break;

		case 'I':		/* Ignore complete line based on given 'string' */
			for (i=0; i < MAX_SKIP-1; i++) {
				if (skip_lines[i].len == -1) {
					skip_lines[i].pat = strdup(cob_optarg);
					skip_lines[i].len = strlen(cob_optarg);
					break;
				}
			}
			break;

		case '?':
		default:
			gcd_usage(argv[0], NULL);
			exit(2);
			break;

		case 'h':
			gcd_usage((char*)"gcdiff", referencefile);
			exit(2);
			break;

		case 'V':
			gcd_print_version ();
			exit(2);
			break;
		}
	}
	if (cob_optind < argc
	 && referencefile[0] <= ' ') {
		strcpy(referencefile,argv[cob_optind++]);
	}
	if (cob_optind < argc
	 && testfile[0] <= ' ') {
		strcpy(testfile,argv[cob_optind++]);
	}
	if (referencefile[0] <= ' ') {
		puts (_("missing 'referencefile'"));
		putchar ('\n');
		gcd_usage(argv[0], NULL);
		exit(2);
	}
	if (testfile[0] <= ' ') {
		puts (_("missing 'testfile'"));
		putchar ('\n');
		gcd_usage(argv[0], NULL);
		exit(2);
	}

	sort_templates();
	stat(referencefile, &st_ref);
	stat(testfile, &st_test);

	if (strcmp(referencefile, GCD_DASH) == 0) {
		ref = stdin;
	} else {
		ref = fopen(referencefile,"r");
	}
	if (ref == NULL) {
		perror(referencefile);
		exit(2);
	}
	if (strcmp(testfile, GCD_DASH) == 0) {
		rslt = stdin;
	} else {
		rslt = fopen(testfile,"r");
	}
	if (rslt == NULL) {
		perror(testfile);
		exit(2);
	}
	k = compare_file(ref, rslt, stdout);
	fclose(ref);
	fclose(rslt);
	exit(k);
	return k;
}
