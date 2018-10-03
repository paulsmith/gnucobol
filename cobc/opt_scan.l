/*
   Copyright (C) 2003-2012, 2014-2017 Free Software Foundation, Inc.
   Written by Keisuke Nishida, Roger While, Simon Sobisch

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

^[[:space:]]*{I}			{ return I; }
^[[:space:]]*{LINK}			{ return LINK; }
^[[:space:]]*{LIB} 			{ return LIB; }
^[[:space:]]*{D} 			{ return D; }
^[[:space:]]*{FREE} 		{ return FREE; }
^[[:space:]]*{FIXED}		{ return FIXED; }
^[[:space:]]*{STD} 		{ return STD; }
^[[:space:]]*{DEBUG} 		{ return DEBUG; }
^[[:space:]]*{G} 			{ return G; }
^[[:space:]]*{O} 			{ return O; }
^[[:space:]]*{O2} 		{ return O2; }
^[[:space:]]*{OS} 		{ return OS; }
^[[:space:]]*{FTRACE} 		{ return FTRACE; }
^[[:space:]]*{FTRACEALL} 		{ return FTRACEALL; }
^[[:space:]]*{FDEBUGGING_LINE} 	{ return FDEBUGGING_LINE; }
^[[:space:]]*{FSOURCE_LOCATION} 	{ return FSOURCE_LOCATION; }
^[[:space:]]*{FIMPLICIT_INIT} 	{ return FIMPLICIT_INIT; }
^[[:space:]]*{FSTACK_CHECK} 	{ return FSTACK_CHECK; }
^[[:space:]]*{FNOTRUNC} 		{ return FNOTRUNC; }
^[[:space:]]*{EXT} 		{ return EXT; }
^[[:space:]]*{FMFCOMMENT} 	{ return FMFCOMMENT; }
^[[:space:]]*{ACUCOMMENT} 	{ return ACUCOMMENT; }
^[[:space:]]*{FSIGN} 		{ return FSIGN; }
^[[:space:]]*{FFOLD_COPY} 	{ return FFOLD_COPY; }
^[[:space:]]*{SAVE_TEMPS} 	{ return SAVE_TEMPS; }
^[[:space:]]*{TLINES} 		{ return TLINES; }
^[[:space:]]*{FTSYMBOLS} 		{ return FTSYMBOLS; }
^[[:space:]]*{FNO_THEADER} 	{ return FNO_THEADER; }
^[[:space:]]*{FNO_TMESSAGES} 	{ return FNO_TMESSAGES; }
^[[:space:]]*{FNO_TSOURCE} 	{ return FNO_TSOURCE; }
^[[:space:]]*{XREF} 		{ return XREF; }

^[[:space:]]*W 			{ return WARNING; }

^[[:space:]]*{COMMENT} 		{ return COMMENT; }

{EQ} 				{ return EQ; }

{INTEGER}[[:space:]]*$         { return INTEGER; }

{VALUE} 			{ return VALUE; }

{COBOL85}		{ return COBOL85; }
{XOPEN}   	{ return XOPEN; }
{COBOL2002}       { return COBOL2002; }
{COBOL2014}       { return COBOL2014; }
{IBM_STRICT}      { return IBM_STRICT; }
{IBM}     	{ return IBM; }
{MVS_STRICT}      { return MVS_STRICT; }
{MVS}     	{ return MVS; }
{MF_STRICT}       { return MF_STRICT; }
{MF}      	{ return MF; }
{BS2000_STRICT}   { return BS2000_STRICT; }
{BS2000}		{ return BS2000; }
{ACU_STRICT}	{ return ACU_STRICT; }
{ACU}		{ return ACU; }
{RM_STRICT}	{ return RM_STRICT; }
{RM}		{ return RM; }

{ASCII}		{ return ASCII; }
{EBCDIC}		{ return EBCDIC; }
{LOWER}		{ return LOWER; }
{UPPER}		{ return UPPER; }

{ALL}			 { return ALL; }
{ARCHAIC}		 { return ARCHAIC; }
{CALL_PARAMS}		 { return CALL_PARAMS; }
{COLUMN_OVERFLOW}	 { return COLUMN_OVERFLOW; }
{CONSTANT}		 { return CONSTANT; }
{IMPLICIT_DEFINE}	 { return IMPLICIT_DEFINE; }
{LINKAGE}		 { return LINKAGE; }
{OBSOLETE}		 { return OBSOLETE; }
{PARENTHESES}		 { return PARENTHESES; }
{REDEFINITION}		 { return REDEFINITION; }
{STRICT_TYPING}		 { return STRICT_TYPING; }
{TERMINATOR}		 { return TERMINATOR; }
{TRUNCATE}		 { return TRUNCATE; }
{UNREACHABLE}		 { return UNREACHABLE; }

%%

