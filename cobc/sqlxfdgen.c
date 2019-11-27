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

/* Local functions */

/* Write out the DDL and XFD files */
void
output_xfd_file (struct cb_file *fl)
{
	char	outname[COB_FILE_BUFF], tblname[48], time_stamp[32];
	FILE	*fx, *fs;
	struct tm		*loctime;
	time_t	sectime;

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
	sprintf(outname,"%s%s%s.xd",cob_schema_dir,SLASH_STR,tblname);
	fx = fopen(outname,"w");
	sprintf(outname,"%s%s%s.ddl",cob_schema_dir,SLASH_STR,tblname);
	fs = fopen(outname,"w");
	if(fs) {
		fprintf(fs,"CREATE TABLE %s (\n",tblname);
		fprintf(fs,");\n");
	}
	if(fx) {
		fprintf(fx,"# Generated at %s from %s\n",time_stamp,cb_source_file);
		fprintf(fx,"H,1,%s,',','.',0\n",tblname);
	}

	if(fs)
		fclose(fs);
	if(fx)
		fclose(fx);
}
