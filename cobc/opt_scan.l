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

%option noyywrap warn debug
%{
  #include "opt_parse.tab.h"
  #include "options.h"

  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wunused-parameter"

%}

I			"I"
LINK			"L"
LIB			"l"
D			"D"
FREE	        	"free		"
FIXED			"fixed"
STD			"std"
DEBUG			"debug"
G			"g"
O			"O"
O2			"O2"
OS			"Os"
FTRACE			"ftrace"
FTRACEALL		"ftraceall"
FDEBUGGING_LINE		"fdebugging-line"
FSOURCE_LOCATION	"fsource-location"
FIMPLICIT_INIT		"fimplicit-init"
FSTACK_CHECK		"fstack-check"
FNOTRUNC		"fnotrunc"
EXT			"ext"
FMFCOMMENT		"fmfcomment"
ACUCOMMENT		"acucomment"
FSIGN			"fsign"
FFOLD_COPY		"ffold-copy"
SAVE_TEMPS		"save-temps"
TLINES			"tlines"
FTSYMBOLS		"ftsymbols"
FNO_THEADER		"fno-theader"
FNO_TMESSAGES		"fno-tmessages"
FNO_TSOURCE		"fno-tsource"
XREF			"Xref"

ALL			"(no-)?all"
ARCHAIC			"(no-)?archaic"
CALL_PARAMS		"(no-)?call-params"
COLUMN_OVERFLOW		"(no-)?column-overflow"
CONSTANT		"(no-)?constant"
IMPLICIT_DEFINE		"(no-)?implicit-define"
LINKAGE			"(no-)?linkage"
OBSOLETE		"(no-)?obsolete"
PARENTHESES		"(no-)?parentheses"
REDEFINITION		"(no-)?redefinition"
STRICT_TYPING		"(no-)?strict-typing"
TERMINATOR		"(no-)?terminator"
TRUNCATE		"(no-)?truncate"
UNREACHABLE		"(no-)?unreachable"

COMMENT #.*$

EQ [[:space:]]*=[[:space:]]*

INTEGER         [[:digit:]]+

VALUE [^[:space:]]+[[:space:]]*$

COBOL85		"cobol85"
XOPEN		"xopen"
COBOL2002	"cobol2002"
COBOL2014	"cobol2014"
IBM_STRICT	"ibm-strict"
IBM		"ibm"
MVS_STRICT	"mvs-strict"
MVS		"mvs"
MF_STRICT	"mf-strict"
MF		"mf"
BS2000_STRICT	"bs2000-strict"
BS2000		"bs2000"
ACU_STRICT	"acu-strict"
ACU		"acu"
RM_STRICT	"rm-strict"
RM		"rm"

ASCII		"ASCII"
EBCDIC		"EBCDIC"
LOWER		"LOWER"
UPPER		"UPPER"

%%

^[[:space:]]*{I}		{ yylval = yytext; return I; }
^[[:space:]]*{LINK}		{ yylval = yytext; return LINK; }
^[[:space:]]*{LIB} 		{ yylval = yytext; return LIB; }
^[[:space:]]*{D} 		{ yylval = yytext; return D; }
^[[:space:]]*{FREE} 		{ yylval = yytext; return FREE; }
^[[:space:]]*{FIXED}		{ yylval = yytext; return FIXED; }
^[[:space:]]*{STD} 		{ yylval = yytext; return STD; }
^[[:space:]]*{DEBUG} 		{ yylval = yytext; return DEBUG; }
^[[:space:]]*{G} 		{ yylval = yytext; return G; }
^[[:space:]]*{O} 		{ yylval = yytext; return O; }
^[[:space:]]*{O2} 		{ yylval = yytext; return O2; }
^[[:space:]]*{OS} 		{ yylval = yytext; return OS; }
^[[:space:]]*{FTRACE} 		{ yylval = yytext; return FTRACE; }
^[[:space:]]*{FTRACEALL}	{ yylval = yytext; 
                                  return FTRACEALL; }
^[[:space:]]*{FDEBUGGING_LINE} 	{ yylval = yytext;
                                  return FDEBUGGING_LINE; }
^[[:space:]]*{FSOURCE_LOCATION} { yylval = yytext;
                                  return FSOURCE_LOCATION; }
^[[:space:]]*{FIMPLICIT_INIT} 	{ yylval = yytext; 
                                  return FIMPLICIT_INIT; }
^[[:space:]]*{FSTACK_CHECK} 	{ yylval = yytext; 
                                  return FSTACK_CHECK; }
^[[:space:]]*{FNOTRUNC} 	{ yylval = yytext; 
                                  return FNOTRUNC; }
^[[:space:]]*{EXT} 		{ yylval = yytext; return EXT; }
^[[:space:]]*{FMFCOMMENT} 	{ yylval = yytext; 
                                  return FMFCOMMENT; }
^[[:space:]]*{ACUCOMMENT} 	{ yylval = yytext; 
                                  return ACUCOMMENT; }
^[[:space:]]*{FSIGN} 		{ yylval = yytext; return FSIGN; }
^[[:space:]]*{FFOLD_COPY} 	{ yylval = yytext; 
                                  return FFOLD_COPY; }
^[[:space:]]*{SAVE_TEMPS} 	{ yylval = yytext; 
                                  return SAVE_TEMPS; }
^[[:space:]]*{TLINES} 		{ yylval = yytext; return TLINES; }
^[[:space:]]*{FTSYMBOLS} 	{ yylval = yytext; 
                                  return FTSYMBOLS; }
^[[:space:]]*{FNO_THEADER} 	{ yylval = yytext; 
                                  return FNO_THEADER; }
^[[:space:]]*{FNO_TMESSAGES} 	{ yylval = yytext; 
                                  return FNO_TMESSAGES; }
^[[:space:]]*{FNO_TSOURCE} 	{ yylval = yytext; 
                                  return FNO_TSOURCE; }
^[[:space:]]*{XREF} 		{ yylval = yytext; return XREF; }

^[[:space:]]*W 			{ return WARNING; }

^[[:space:]]*{COMMENT} 		{ return COMMENT; }

{EQ} 				{ return EQ; }

{INTEGER}[[:space:]]*$          { yylval = yytext; return INTEGER; }

{VALUE} 			{ yylval = yytext; return VALUE; }

{COBOL85}	{ yylval = yytext; return COBOL85; }
{XOPEN}	   	{ yylval = yytext; return XOPEN; }
{COBOL2002}     { yylval = yytext; return COBOL2002; }
{COBOL2014}     { yylval = yytext; return COBOL2014; }
{IBM_STRICT}    { yylval = yytext; return IBM_STRICT; }
{IBM}		{ yylval = yytext; return IBM; }
{MVS_STRICT}    { yylval = yytext; return MVS_STRICT; }
{MVS}     	{ yylval = yytext; return MVS; }
{MF_STRICT}     { yylval = yytext; return MF_STRICT; }
{MF}      	{ yylval = yytext; return MF; }
{BS2000_STRICT} { yylval = yytext; return BS2000_STRICT; }
{BS2000}	{ yylval = yytext; return BS2000; }
{ACU_STRICT}	{ yylval = yytext; return ACU_STRICT; }
{ACU}		{ yylval = yytext; return ACU; }
{RM_STRICT}	{ yylval = yytext; return RM_STRICT; }
{RM}		{ yylval = yytext; return RM; }

{ASCII}		{ yylval = yytext; return ASCII; }
{EBCDIC}	{ yylval = yytext; return EBCDIC; }
{LOWER}		{ yylval = yytext; return LOWER; }
{UPPER}		{ yylval = yytext; return UPPER; }

{ALL}			 { yylval = yytext; return ALL; }
{ARCHAIC}		 { yylval = yytext; return ARCHAIC; }
{CALL_PARAMS}		 { yylval = yytext; return CALL_PARAMS; }
{COLUMN_OVERFLOW}	 { yylval = yytext; return COLUMN_OVERFLOW; }
{CONSTANT}		 { yylval = yytext; return CONSTANT; }
{IMPLICIT_DEFINE}	 { yylval = yytext; return IMPLICIT_DEFINE; }
{LINKAGE}		 { yylval = yytext; return LINKAGE; }
{OBSOLETE}		 { yylval = yytext; return OBSOLETE; }
{PARENTHESES}		 { yylval = yytext; return PARENTHESES; }
{REDEFINITION}		 { yylval = yytext; return REDEFINITION; }
{STRICT_TYPING}		 { yylval = yytext; return STRICT_TYPING; }
{TERMINATOR}		 { yylval = yytext; return TERMINATOR; }
{TRUNCATE}		 { yylval = yytext; return TRUNCATE; }
{UNREACHABLE}		 { yylval = yytext; return UNREACHABLE; }

%%
    
