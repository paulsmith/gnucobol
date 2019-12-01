/*
   Copyright (C) 2003-2019 Free Software Foundation, Inc.
   Written by Keisuke Nishida, Roger While, Ron Norman, Simon Sobisch,
   Edward Hart

   This file is part of GnuCOBOL.

   The GnuCOBOL compiler is free software: you can redistribute it
   and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   GnuCOBOL is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GnuCOBOL.  If not, see <https://www.gnu.org/licenses/>.
*/


#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

#include "tarstamp.h"

#include "cobc.h"
#include "tree.h"

#define MAX_XFD 24
static int	hasxfd = 0;
static char xfd[MAX_XFD][80];

#define MAX_OCC_NEST 16
static char eol[6] = "";
static char prefix[8] = "";
static int	prefixlen = 0;
static int	next_lbl = 1;
static short COMPtoDig[10]   = {3,8,11,13,16,18,21,23,27};	/* SQL storage size for Binary field */

/* Local functions */
void
cb_save_xfd (char *str)
{
	if (cb_sqldb_name == NULL) {
		hasxfd = 0;
		return;
	}
	if (hasxfd >= MAX_XFD) {
		cb_error (_("XFD table overflow at: %s"), str);
		return;
	}
	strcpy(xfd[hasxfd],str);
	hasxfd++;
}

static char *
cb_get_param (char *p, char *prm, int skipeq)
{
	char	eq = 0x01;
	char	qt = 0x00;
	if (skipeq)
		eq = '=';
	while (isspace(*p) || *p == eq) p++;
	if (*p == '"' || *p == '\'') {
		qt = *p;
		do {
			*prm++ = *p++;
		} while (*p != 0 && *p != qt);
		if (*p == qt)
			*prm++ = *p++;
	} else {
		while (*p != 0 && *p != ',' 
			&& *p != eq && !isspace(*p)) {
			*prm++ = *p++;
		}
	}
	*prm = 0;
	while (*p == ',' || isspace(*p)) p++;
	return p;
}

static void
cb_use_name (struct cb_field *f, char *n)
{
	if(*n > ' ') {
		if (f->sql_name) {
			cb_warning (warningopt, _("XFD replaced %s with %s for %s"), f->sql_name, n, f->name);
		}
		f->sql_name = cobc_parse_strdup (n);
	}
}

void
cb_parse_xfd (struct cb_file *fn, struct cb_field *f)
{
	int		k, skipeq;
	char	*p, p1[64], p2[64], p3[64], p4[64], expr[512];
	if (hasxfd <= 0)
		return;
	if (!fn->flag_sql_xfd) {
		fn->max_sql_name_len = 24;
		fn->flag_sql_trim_prefix = 1;
		fn->flag_sql_xfd = 1;
	}
	for(k=0; k < hasxfd; k++) {
		p = cb_get_param (xfd[k], p1, 1);
		if (strcasecmp(p1,"WHEN") == 0
		 || strcasecmp(p1,"AND") == 0
		 || strcasecmp(p1,"OR") == 0)
			skipeq = 0;
		else
			skipeq = 1;
		p = cb_get_param (p, p2, skipeq);
		p = cb_get_param (p, p3, skipeq);
		p = cb_get_param (p, p4, skipeq);
		if (strcasecmp(p1,"USE") == 0) {
			strcpy(p1,p2);
			strcpy(p2,p3);
			strcpy(p3,"");
		}
		if (strcasecmp(p1,"NAME") == 0 
		 && p2[0] > ' ') {
			if (f->level == 1
			 && fn->sql_name == NULL) {
				fn->sql_name = cobc_parse_strdup (p2);
			} else {
				cb_use_name (f, p2);
			}
		} else if (strcasecmp(p1,"GROUP") == 0) {
			f->flag_sql_group = 1;
			cb_use_name (f, p2);
		} else if (strcasecmp(p1,"BINARY") == 0) {
			f->flag_sql_binary = 1;
			cb_use_name (f, p2);
		} else if (strcasecmp(p1,"CHAR") == 0) {
			f->flag_sql_char = 1;
			cb_use_name (f, p2);
		} else if (strcasecmp(p1,"VARCHAR") == 0) {
			f->flag_sql_varchar = 1;
			cb_use_name (f, p2);
		} else if (strcasecmp(p1,"NUMERIC") == 0) {
			f->flag_sql_numeric = 1;
			cb_use_name (f, p2);
		} else if (strcasecmp(p1,"DATE") == 0) {
			f->flag_sql_date = 1;
			if(p2[0] > ' ')
				f->sql_date_format = cobc_parse_strdup (p2);
			cb_use_name (f, p3);
		} else if (strcasecmp(p1,"WHEN") == 0) {
			if (f->sql_when == NULL) {
				snprintf(expr,sizeof(expr)-1,"%s %s %s",p2,p3,p4);
			} else {
				snprintf(expr,sizeof(expr)-1,"%s OR %s %s %s",f->sql_when,p2,p3,p4);
				cobc_parse_free (f->sql_when);
			}
			f->sql_when = cobc_parse_strdup (expr);
		} else if (strcasecmp(p1,"AND") == 0
				|| strcasecmp(p1,"OR") == 0) {
			if (f->sql_when == NULL) {
				snprintf(expr,sizeof(expr)-1,"%s %s %s",p2,p3,p4);
			} else {
				snprintf(expr,sizeof(expr)-1,"%s %s %s %s %s",f->sql_when,p1,p2,p3,p4);
				cobc_parse_free (f->sql_when);
			}
			f->sql_when = cobc_parse_strdup (expr);
		} else {
			cb_warning (warningopt, _("XFD unknown %s %s"), p1, p2);
		}
	}
	hasxfd = 0;
}
static struct cb_field *
cb_code_field (cb_tree x)
{
	if (likely(CB_REFERENCE_P (x))) {
		if (unlikely(!CB_REFERENCE (x)->value)) {
			return CB_FIELD (cb_ref (x));
		}
		return CB_FIELD (CB_REFERENCE (x)->value);
	}
	if (CB_LIST_P (x)) {
		return cb_code_field (CB_VALUE (x));
	}
	return CB_FIELD (x);
}

static int
is_all_dispx (struct cb_field *f)
{
	if (f->children
	 && !is_all_dispx (f->children))
		return 0;
	if (f->usage != CB_USAGE_DISPLAY) 
		return 0;
	if (f->sister
	 && !is_all_dispx (f->sister))
		return 0;
	return 1;
}

/* Is this field all DISPLAY data */
static int
is_all_display (struct cb_field *f)
{
	if (f->children) 
		return is_all_dispx (f->children);
	if (f->usage != CB_USAGE_DISPLAY) 
		return 0;
	return 1;
}

/* Return the SQL column name */
static char *
get_col_name (struct cb_file *fl, struct cb_field *f, int sub, int idx[])
{
	static char name[85];
	int		i,j;
	if (f->sql_name) {
		strcpy(name,f->sql_name);
	} else {
		i = 0;
		if (prefixlen > 0
		 && strncasecmp(f->name, prefix, prefixlen) == 0)
			i = prefixlen;
		for(j=0; f->name[i] != 0; i++) {
			if(f->name[i] == '-') {
				if (!fl->flag_sql_trim_dash)
					name[j++] = '_';
			} else {
				name[j++] = f->name[i];
			}
		}
		name[j] = 0;
	}
	j = strlen(name);
	if (j > fl->max_sql_name_len)
		name[j=fl->max_sql_name_len] = 0;
	for(i=0; i < j; i++) {
		if(isupper(name[i]))
			name[i] = tolower(name[i]);
	}
	for (i=0; i < sub; i++) {
		j += sprintf(&name[j],"_%02d",idx[i]);
	}
	return name;
}

/* Return the SQL column data type */
static char *
get_col_type (struct cb_field *f)
{
	static char datatype[85];
	if (f->flag_sql_binary) {
		sprintf(datatype,"BINARY(%d)",f->size);
	} else
	if (f->flag_sql_char) {
		sprintf(datatype,"CHAR(%d)",f->size);
	} else
	if (f->flag_sql_varchar) {
		sprintf(datatype,"VARCHAR(%d)",f->size);
	} else
	if (f->flag_sql_group) {
		sprintf(datatype,"CHAR(%d)",f->size);
	} else
	if (f->flag_sql_date) {
		sprintf(datatype,"DATE");
	} else {
		switch (f->usage) {
		case CB_USAGE_BINARY:
		case CB_USAGE_COMP_5:
		case CB_USAGE_COMP_X:
		case CB_USAGE_COMP_N:
		case CB_USAGE_PACKED:
		case CB_USAGE_COMP_6:
			if (f->pic) {
				if (f->pic->scale > 0)
					sprintf(datatype,"DECIMAL(%d,%d)",f->pic->digits,f->pic->scale);
				else
					sprintf(datatype,"DECIMAL(%d)",f->pic->digits);
			} else {
				sprintf(datatype,"DECIMAL(%d)",f->size);
			}
			return datatype;
		case CB_USAGE_DISPLAY:
			if (f->pic
			&& f->pic->category == CB_CATEGORY_NUMERIC) {
				if (f->pic->scale > 0)
					sprintf(datatype,"DECIMAL(%d,%d)",f->pic->digits,f->pic->scale);
				else
					sprintf(datatype,"DECIMAL(%d)",f->pic->digits);
			} else {
				sprintf(datatype,"CHAR(%d)",f->size);
			}
			return datatype;
		case CB_USAGE_FLOAT:
			return (char*)"FLOAT";
		case CB_USAGE_DOUBLE:
			return (char*)"DOUBLE";
		case CB_USAGE_UNSIGNED_CHAR:
		case CB_USAGE_SIGNED_CHAR:
		case CB_USAGE_UNSIGNED_SHORT:
		case CB_USAGE_SIGNED_SHORT:
		case CB_USAGE_UNSIGNED_INT:
		case CB_USAGE_SIGNED_INT:
		case CB_USAGE_UNSIGNED_LONG:
		case CB_USAGE_SIGNED_LONG:
			return (char*)"INTEGER";
		default:
			cb_error (_("%s unexpected USAGE: %d"), __FILE__, f->usage);
		}
		sprintf(datatype,"Char(%d)",f->size);
	}
	return datatype;
}

/* Return the XFD data type value */
static char *
get_xfd_type (struct cb_field *f)
{
	int		sqlsz = f->size + 1;
	int		sqltype = COB_XFDT_PICX;
	static char datatype[85];
	if (f->flag_sql_binary) {
		sqltype = COB_XFDT_BIN;
	} else
	if (f->flag_sql_char) {
		sqltype = COB_XFDT_PICX;
	} else
	if (f->flag_sql_varchar) {
		sqltype = COB_XFDT_PICX;
	} else
	if (f->flag_sql_group) {
		sqltype = COB_XFDT_PICX;
	} else {
		switch (f->usage) {
		case CB_USAGE_BINARY:
			if (f->pic
			&& f->pic->category == CB_CATEGORY_NUMERIC) {
				sqlsz = f->pic->digits + 3;
				if (f->pic->have_sign > 0)
					sqltype = COB_XFDT_COMPS;
				else
					sqltype = COB_XFDT_COMPU;
			} else {
				sqlsz = COMPtoDig[f->size];
				sqltype = COB_XFDT_COMPU;
			}
			break;
		case CB_USAGE_COMP_5:
			if (f->pic
			&& f->pic->category == CB_CATEGORY_NUMERIC) {
				sqlsz = f->pic->digits + 3;
				if (f->pic->have_sign > 0)
					sqltype = COB_XFDT_COMP5S;
				else
					sqltype = COB_XFDT_COMP5U;
			} else {
				sqlsz = COMPtoDig[f->size];
				sqltype = COB_XFDT_COMP5U;
			}
			break;
		case CB_USAGE_COMP_X:
			sqlsz = COMPtoDig[f->size];
			sqltype = COB_XFDT_COMPX;
			break;
		case CB_USAGE_PACKED:
			if (f->pic) {
				sqlsz = f->pic->digits + 3;
				if (f->pic->have_sign > 0)
					sqltype = COB_XFDT_PACKS;
				else
					sqltype = COB_XFDT_PACKU;
			} else {
				sqlsz = f->size * 2 + 2;
				sqltype = COB_XFDT_PACKU;
			}
			break;
		case CB_USAGE_COMP_6:
			sqltype = COB_XFDT_COMP6;
			break;
		case CB_USAGE_DISPLAY:
			if (f->pic
			&& f->pic->category == CB_CATEGORY_NUMERIC) {
				sqlsz = f->size + 3;
				if (f->pic->have_sign > 0)
					sqltype = COB_XFDT_PIC9S;
				else
					sqltype = COB_XFDT_PIC9U;
			} else {
				sqltype = COB_XFDT_PICX;
			}
			break;
		case CB_USAGE_FLOAT:
		case CB_USAGE_DOUBLE:
			sqlsz = 36;
			sqltype = COB_XFDT_FLOAT;
			break;
		case CB_USAGE_UNSIGNED_CHAR:
		case CB_USAGE_UNSIGNED_SHORT:
		case CB_USAGE_UNSIGNED_INT:
		case CB_USAGE_UNSIGNED_LONG:
			sqlsz = COMPtoDig[f->size];
			sqltype = COB_XFDT_COMP5U;
			break;
		case CB_USAGE_SIGNED_CHAR:
		case CB_USAGE_SIGNED_SHORT:
		case CB_USAGE_SIGNED_INT:
		case CB_USAGE_SIGNED_LONG:
			sqlsz = COMPtoDig[f->size];
			sqltype = COB_XFDT_COMP5S;
			break;
		default:
			cb_error (_("%s unexpected USAGE: %d"), __FILE__, f->usage);
			sqltype = COB_XFDT_BIN;
		}
	}
	sprintf(datatype,"%02d,%04d",sqltype,sqlsz);
	return datatype;
}

/* Is the field also used as a 'key' for the file */
static int
is_key_field (struct cb_file *fl, struct cb_field *f)
{
	struct cb_alt_key	*l;
	struct cb_key_component *c;

	if (fl->component_list) {
		for (c = fl->component_list; c; c = c->next) {
			if (f == cb_code_field (c->component))
				return 1;
		}
	} else if(fl->key) {
		if (f == cb_code_field (fl->key))
			return 1;
	}
	for (l = fl->alt_key_list; l; l = l->next) {
		if (l->component_list) {
			for (c = l->component_list; c; c = c->next) {
				if (f == cb_code_field (c->component))
					return 1;
			}
		} else {
			if (f == cb_code_field (l->key))
				return 1;
		}
	}
	return 0;
}

static struct cb_field *
find_field (struct cb_field *f, char *name)
{
	struct cb_field *s;
	if (strcasecmp(f->name,name) == 0)
		return f;
	if (f->children) {
		if ((s = find_field (f->children, name)) != NULL)
			return s;
	}
	for (f=f->sister; f; f = f->sister) {
		if ((s = find_field (f, name)) != NULL)
			return s;
	}
	return NULL;
}

static struct cb_field *
check_redefines (FILE *fx, struct cb_file *fl, struct cb_field *f, int sub, int idx[])
{
	int		i, j, k;
	int		numrdf, numwhen, numother, numdisp, toother;
	int		dowhen = 1, savelbl;
	char	expr[1024], name[80];
	struct cb_field *s, *l, *n, *oth, *x;

	if (f->flag_sql_binary
	 || f->flag_sql_char
	 || f->flag_sql_varchar) {
		f->flag_sql_group = 1;
	}
	if (f->flag_sql_group)
		return f;
	n = f;
	savelbl = next_lbl;
	if (f->sister
	 && f->sister->redefines == f) {
		numrdf = numwhen = numother = numdisp = 0;
		s = f;
		oth = NULL;
		/* Check REDEFINES */
		do {
			l = s;
			numrdf++;
			if (is_all_display (s))
				numdisp++;
			if (s->sql_when) {
				k = strlen(s->sql_when);
				while (k > 0 
					&& s->sql_when[k-1] == ' ')
					s->sql_when[--k] = 0;
				if (strcasecmp(s->sql_when,"OTHER") == 0)
					numother++;
				else
					numwhen++;
			} else {
				oth = s;
			}
			if (fx)
				s->step_count = next_lbl++;
			if (s->sister == NULL)
				break;
			s = s->sister;
		} while (s->redefines == f);
		if (fx)
			l->next_group_line = next_lbl++;

		if (numdisp == numrdf
		 && numwhen == 0) {		/* Just PIC X REDEFINES PIC X */
			n = l;
			dowhen = 0;
		} else
		if (numother == 0
		 && numrdf - numwhen == 1) {
			if (oth)
				oth->sql_when = cobc_parse_strdup ("OTHER");
		} else
		if ((numwhen+numother) != numrdf) {
			if (!f->flag_sql_binary) {
				if ((numwhen + numother) > 0)
					cb_warning (warningopt, _("%s has incomplete WHEN rules"),f->name);
				f->flag_sql_binary = 1;
				f->flag_sql_group = 1;
				dowhen = 0;
				cb_warning (warningopt, _("Process %s as BINARY data"),f->name);
			}
		}
		/* Emit When Conditions */
		if (!dowhen) {
			next_lbl = savelbl;
			s = f;
			do {
				s->step_count = 0;
				s->next_group_line = 0;
				if (s->sister == NULL)
					break;
				s = s->sister;
			} while (s->redefines == f);
		} else
		if (fx) {
			s = f;
			toother = 0;
			do {
				if (s->sql_when) {
					if (strcasecmp(s->sql_when,"OTHER") == 0) {
						toother = s->step_count;
					} else {
						expr[0] = 0;
						for (i=j=0; s->sql_when[i] != 0; ) {
							if (s->sql_when[i] == ' '
							 && s->sql_when[i+1] == ' ') {
								i++;
								continue;
							}
							if (s->sql_when[i] == ' ') {
								strcat(expr," ");
								i++;
								continue;
							}
							if (s->sql_when[i] == '\''
							 || s->sql_when[i] == '"') {
								char	qt = s->sql_when[i];
								k = strlen(expr);
								do {
									expr[k++] = s->sql_when[i++];
								} while (s->sql_when[i] != qt
									&& s->sql_when[i] != 0);
								if (s->sql_when[i] != 0)
									expr[k++] = s->sql_when[i++];
								expr[k] = 0;
								continue;
							}
							if (isalnum(s->sql_when[i])) {
								j = 0;
								while(isalnum(s->sql_when[i])
									|| s->sql_when[i] == '-') 
									name[j++] = s->sql_when[i++];
								name[j] = 0;
								x = find_field (fl->record, name);
								if (x) {
									strcat(expr,get_col_name(fl,x,sub,idx));
								} else {
									strcat(expr,name);
								}
								continue;
							}
							k = strlen(expr);
							expr[k] = s->sql_when[i++];
							expr[k+1] = 0;
						}
						fprintf(fx,"C,%d,%s\n",s->step_count,expr);
					}
					s->report_decl_id = l->next_group_line;
				}
				if (s->sister == NULL)
					break;
				s = s->sister;
			} while (s->redefines == f);
			if (toother > 0)
				fprintf(fx,"G,%d\n",toother);
		}
	}
	return n;
}

static void
write_xfd (FILE *fx, struct cb_file *fl, struct cb_field *f, int sub, int idx[])
{
	fprintf(fx,"D,%04d,%04d,",(int)f->offset,(int)f->size);
	fprintf(fx,"%s,",get_xfd_type (f));
	if (f->pic
	 && f->pic->category == CB_CATEGORY_NUMERIC) {
		fprintf(fx,"%d,%d,",(int)f->pic->digits,(int)f->pic->scale);
	} else {
		fprintf(fx,"0,0,");
	}
	if (f->sql_date_format)
		fprintf(fx,"'%s'",f->sql_date_format);
	fprintf(fx,",%02d,%s\n",f->level,get_col_name(fl,f,sub,idx));
}

static void
write_field (struct cb_file *fl, struct cb_field *f, FILE *fs, FILE *fx, int sub, int idx[])
{
	struct cb_field *s;
	do {
		if (f->level < 1
		 || f->level >= 66) {
			f = f->sister;
			if (f == NULL)
				return;
			continue;
		}
		if (f->redefines == NULL
		 && f->sister
		 && f->sister->redefines == f)
			check_redefines (fx, fl, f, sub, idx);

		if (f->step_count > 0) {
			fprintf(fx,"L,%d\n",f->step_count);
			f->step_count = 0;
		}
		if (f->occurs_max > 1
		 && f->flag_occurs) {
			idx[sub] = 1;
			f->flag_occurs = 0;
			while (idx[sub] <= f->occurs_max) {
				if (sub >= MAX_OCC_NEST) {
					cb_error (_("%s nested occurs exceeds: %d"), __FILE__, MAX_OCC_NEST);
				}
				write_field (fl,f,fs,fx,sub+1,idx);
				idx[sub]++;
			}
			f->flag_occurs = 1;
			f = f->sister;
			if (f == NULL)
				return;
			continue;
		}
		if (f->children
		 && is_key_field (fl,f)
		 && is_all_display (f)) {
			f->flag_sql_group = 1;
		}
		if (f->flag_sql_group) {
			fprintf(fs,"%s   %-40s %s",eol,get_col_name(fl,f,sub,idx),get_col_type (f));
			write_xfd (fx,fl,f,sub,idx);
			strcpy(eol,",\n");
			s = f;
			while (s->sister
			 && s->sister->redefines == f) {	/* Skip Group Redefines */
				s = s->sister;
			}
			f = s;
		} else if (f->children) {
			write_field (fl,f->children,fs,fx,sub,idx);
		} else {
			fprintf(fs,"%s   %-40s %s",eol,get_col_name(fl,f,sub,idx),get_col_type (f));
			strcpy(eol,",\n");
			write_xfd (fx,fl,f,sub,idx);
		}
		if (f->occurs_max > 1
		 && !f->flag_occurs) 
			return;
		f = check_redefines (NULL, fl, f, sub, idx);
		if (f->report_decl_id > 0) {
			if (f->report_decl_id != f->next_group_line)
				fprintf(fx,"G,%d\n",f->report_decl_id);
			f->report_decl_id = 0;
		}
		if (f->next_group_line > 0) {
			fprintf(fx,"L,%d\n",f->next_group_line);
			f->next_group_line = 0;
		}
		f = f->sister;
	} while (f);
}

static void
check_prefix (struct cb_field *f)
{
	if (prefixlen <= 0)
		return;
	do {
		if (f->children && f->sister == NULL) {
			check_prefix (f->children);
		} else if (!f->flag_filler) {
			if (strncasecmp(f->name,prefix,prefixlen) != 0) {
				prefixlen = 0;
				return;
			}
		}
		if (f->children)
			check_prefix (f->children);
		f = f->sister;
	} while (f);
}

/* Write out the DDL and XFD files */
void
output_xfd_file (struct cb_file *fl)
{
	char	outname[COB_FILE_BUFF], tblname[64], time_stamp[32];
	FILE	*fx, *fs;
	struct tm	*loctime;
	time_t		sectime;
	struct cb_field		*f;
	struct cb_alt_key	*l;
	struct cb_key_component *c;
	int		i,k,sub,idx[MAX_OCC_NEST];

	f = fl->record;
	if(f->level < 1)
		f = f->sister;
	if(f->storage != CB_STORAGE_FILE)
		return;
	for (sub=0; sub < MAX_OCC_NEST; sub++)
		idx[sub] = 0;
	sub = 0;
	next_lbl = 1;
	sectime = time (NULL);
	loctime = localtime (&sectime);
	if (loctime) {
		strftime (time_stamp, (size_t)COB_MINI_MAX,
			  		"%b %d %Y %H:%M:%S", loctime);
	} else {
		strcpy(time_stamp,"Time unknown");
	}
	if (fl->sql_name)
		strcpy(tblname,fl->sql_name);
	else
		strcpy(tblname,fl->cname);
	k = strlen(tblname);
	for(i=0; i < k; i++) {
		if (tblname[i] == '-')
			tblname[i] = '_';
		else if(isupper(tblname[i]))
			tblname[i] = tolower(tblname[i]);
	}
	strcpy(prefix,"");
	prefixlen = 0;
	if (fl->flag_sql_trim_prefix) {
		f = fl->record;
		while (f 
			&& (f->level <= 1 || f->flag_filler)) {
			if (f->children)
				f = f->children;
			else 
				f = f->sister;
		}
		while (f && f->children && f->sister == NULL) {
			f = f->children;
		}
		while (f 
			&& (f->level <= 1 || f->flag_filler)) {
			if (f->children)
				f = f->children;
			else 
				f = f->sister;
		}
		if (f) {
			for(k=0; k < 7; k++) {
				prefix[k] = f->name[k];
				if (prefix[k] == 0)
					break;
				if (prefix[k] == '-') {
					k++;
					prefix[k] = 0;
					break;
				}
			}
			prefixlen = k;
		}
		if (prefixlen > 0) {
			f = fl->record;
			if(f->level < 1 && f->sister)
				f = f->sister;
			check_prefix (f);
		}
	}

	sprintf(outname,"%s%s%s.xd",cob_schema_dir,SLASH_STR,tblname);
	fx = fopen(outname,"w");
	if (fx == NULL) {
		cb_warning (warningopt, _("Unable to open %s; '%s'"),outname,cb_get_strerror ());
		return;
	}
	sprintf(outname,"%s%s%s.ddl",cob_schema_dir,SLASH_STR,tblname);
	fs = fopen(outname,"w");
	if (fs == NULL) {
		cb_warning (warningopt, _("Unable to open %s; '%s'"),outname,cb_get_strerror ());
		return;
	}
	fprintf(fx,"# Generated on %s from %s\n",time_stamp,cb_source_file);
	fprintf(fx,"H,1,%s,',','.',0\n",tblname);
	fprintf(fs,"CREATE TABLE %s (\n",tblname);
	sub = 0;
	strcpy(eol,"");
	for (f=fl->record->sister; f; f = f->sister) {
		write_field (fl, f, fs, fx, sub, idx);
	}
	if (fl->organization == COB_ORG_RELATIVE) {
		fprintf(fs,"%srow_%s  IDENTITY",eol,tblname);
	}
	fprintf(fs,"\n);\n");
	if (fl->organization == COB_ORG_INDEXED) {
		fprintf(fs,"CREATE UNIQUE INDEX pk_%s ON %s ",tblname,tblname);
		fprintf(fx,"K,0,N,N,,");
		if (fl->component_list) {
			fprintf(fs,"(");
			strcpy(eol,"");
			for (c = fl->component_list; c; c = c->next) {
				f = cb_code_field (c->component);
				fprintf(fs,"%s%s",eol,get_col_name(fl,f,0,idx));
				fprintf(fx,"%s%s",eol,get_col_name(fl,f,0,idx));
				strcpy(eol,",");
			}
			fprintf(fs,");\n");
			fprintf(fx,"\n");
		} else if(fl->key) {
			f = cb_code_field (fl->key);
			fprintf(fs,"(%s);\n",get_col_name(fl,f,0,idx));
			fprintf(fx,"%s\n",get_col_name(fl,f,0,idx));
		}
		k = 1;
		for (l = fl->alt_key_list; l; l = l->next) {
			fprintf(fs,"CREATE %sINDEX k%d_%s ON %s ",l->duplicates?"":"UNIQUE ",k,tblname,tblname);
			fprintf(fx,"K,%d,%s,",k,l->duplicates?"Y":"N");
			if (l->tf_suppress) {
				fprintf(fx,"Y,0x%02X,",l->char_suppress);
			} else {
				fprintf(fx,"N,,");
			}
			if (l->component_list) {
				fprintf(fs,"(");
				strcpy(eol,"");
				for (c = l->component_list; c; c = c->next) {
					f = cb_code_field (c->component);
					fprintf(fs,"%s%s",eol,get_col_name(fl,f,0,idx));
					fprintf(fx,"%s%s",eol,get_col_name(fl,f,0,idx));
					strcpy(eol,",");
				}
				fprintf(fs,");\n");
				fprintf(fx,"\n");
			} else {
				f = cb_code_field (l->key);
				fprintf(fs,"(%s);\n",get_col_name(fl,f,0,idx));
				fprintf(fx,"%s\n",get_col_name(fl,f,0,idx));
			}
			k++;
		}
	}
	fclose(fs);
	fclose(fx);
}