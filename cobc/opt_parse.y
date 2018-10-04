/*
   Copyright (C) 2018 Free Software Foundation, Inc.
   Written by James K. Lowden

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
   along with GnuCOBOL.  If not, see <http://www.gnu.org/licenses/>.
*/

%token I LINK LIB D 
%token FREE FIXED 
%token STD
%token DEBUG G O O2 OS 
%token FTRACE FTRACEALL FDEBUGGING_LINE FSOURCE_LOCATION FIMPLICIT_INIT 
%token FSTACK_CHECK FNOTRUNC
%token EXT
%token FMFCOMMENT ACUCOMMENT

%token FSIGN FFOLD_COPY 
%token SAVE_TEMPS TLINES
%token FTSYMBOLS FNO_THEADER FNO_TMESSAGES FNO_TSOURCE XREF

 /* warnings */
%token WARNING
%token ALL ARCHAIC CALL_PARAMS COLUMN_OVERFLOW CONSTANT IMPLICIT_DEFINE 
%token LINKAGE OBSOLETE PARENTHESES REDEFINITION STRICT_TYPING TERMINATOR 
%token TRUNCATE UNREACHABLE 

%token COMMENT EQ VALUE INTEGER

 /* standards */
%token COBOL85 XOPEN COBOL2002 COBOL2014 IBM_STRICT IBM MVS_STRICT MVS
%token MF_STRICT MF BS2000_STRICT BS2000 ACU_STRICT ACU RM_STRICT RM

%token ASCII EBCDIC
%token LOWER UPPER

%define parse.error verbose
%define api.value.type {const char *}

%{
 #include <err.h>
 #include <limits.h>
 #include "options.h"
 int yylex(void);
 static void yyerror( const char message[] );

 enum yytokentype current_token;
%}
			
%%

line:
		COMMENT
	|	option
	|	option_arg
	|	option_eq_arg
	|	warning
	|	option COMMENT
	|	option_arg COMMENT
	|	option_eq_arg COMMENT
	|	warning COMMENT
	;

option:		FREE			{ option_set(FREE, $1); }
	| 	FIXED 			{ option_set(FIXED, $1); }
	| 	DEBUG			{ option_set(DEBUG, $1); }
	| 	G			{ option_set(G, $1); }
	| 	O			{ option_set(O, $1); }
	| 	O2			{ option_set(O2, $1); }
	| 	OS			{ option_set(OS, $1); }
	| 	FTRACE			{ option_set(FTRACE, $1); }
	| 	FTRACEALL		{ option_set(FTRACEALL, $1); }
	| 	FDEBUGGING_LINE		{ option_set(FDEBUGGING_LINE, $1); }
	| 	FSOURCE_LOCATION	{ option_set(FSOURCE_LOCATION, $1); }
	| 	FIMPLICIT_INIT		{ option_set(FIMPLICIT_INIT, $1); }
	| 	FSTACK_CHECK		{ option_set(FSTACK_CHECK, $1); }
	| 	FNOTRUNC		{ option_set(FNOTRUNC, $1); }
	|	FMFCOMMENT		{ option_set(FMFCOMMENT, $1); }
	|	ACUCOMMENT		{ option_set(ACUCOMMENT, $1); }
	|	FTSYMBOLS		{ option_set(FTSYMBOLS, $1); }
	| 	FNO_THEADER		{ option_set(FNO_THEADER, $1); }
	|  	FNO_TMESSAGES		{ option_set(FNO_TMESSAGES, $1); }
	| 	FNO_TSOURCE		{ option_set(FNO_TSOURCE, $1); }
	|	XREF			{ option_set(XREF, $1); }
		;

option_arg:
		I VALUE			{ option_arg_set(I, $1, $2); }
	|	LINK VALUE		{ option_arg_set(LINK, $1, $2); }
	| 	LIB VALUE		{ option_arg_set(LIB, $1, $2); }
	| 	D VALUE			{ option_arg_set(D, $1, $2); }
	|	EXT VALUE		{ option_arg_set(EXT, $1, $2); }
		;

option_eq_arg:
		STD EQ std		{ option_arg_set(STD , $1, $2); }
	| 	FSIGN EQ fsign		{ option_arg_set(FSIGN, $1, $2); }
	| 	FFOLD_COPY EQ ffold_copy { option_arg_set(FFOLD_COPY, $1, $2); }
	|	SAVE_TEMPS EQ VALUE	{ option_arg_set(SAVE_TEMPS, $1, $2); }
	|	TLINES EQ INTEGER	{ option_arg_set(TLINES, $1, $2); }
		;

std:
		COBOL85
	|  	XOPEN
	|  	COBOL2002
	|  	COBOL2014
	|  	IBM_STRICT
	|  	IBM
	|  	MVS_STRICT
	|  	MVS
	|  	MF_STRICT
	|  	MF
	|  	BS2000_STRICT
	|  	BS2000
	|  	ACU_STRICT
	|  	ACU
	|  	RM_STRICT
	|  	RM
		;

fsign:
		ASCII
	| 	EBCDIC
	;

ffold_copy:
		LOWER
	| 	UPPER
	;

warning:
		WARNING warning_type
		{
		    warning_set(WARNING, $1);
		}
		;

warning_type:
		ALL
	| 	ARCHAIC
	| 	CALL_PARAMS
	| 	COLUMN_OVERFLOW
	| 	CONSTANT
	| 	IMPLICIT_DEFINE
	|	LINKAGE
	| 	OBSOLETE
	| 	PARENTHESES
	| 	REDEFINITION
	| 	STRICT_TYPING
	| 	TERMINATOR
	| 	TRUNCATE
	| 	UNREACHABLE 
	;
%%

static void
yyerror (const char message[])
{
 warnx ("opt_parse: %s\n", message);
}
		
