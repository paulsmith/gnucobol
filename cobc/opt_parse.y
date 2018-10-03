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

%{
 #include <limits.h>
 static char optarg[PATH_MAX];
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

option:		FREE
	| 	FIXED 
	| 	DEBUG
	| 	G
	| 	O
	| 	O2
	| 	OS
	| 	FTRACE
	| 	FTRACEALL
	| 	FDEBUGGING_LINE
	| 	FSOURCE_LOCATION
	| 	FIMPLICIT_INIT
	| 	FSTACK_CHECK
	| 	FNOTRUNC
	|	FMFCOMMENT
	|	ACUCOMMENT
	|	FTSYMBOLS
	| 	FNO_THEADER
	|  	FNO_TMESSAGES
	| 	FNO_TSOURCE
	|	XREF
		{
		    if( !option_set($1, yytext, NULL) ) {
			warnx("could not set option '%s'", yytext);
		    }
		}
	;


option_arg:
		I option_arg_value
	|	LINK option_arg_value
	| 	LIB option_arg_value
	| 	D option_arg_value
	|	EXT option_arg_value
		{
		    if( !option_set($1, yytext, optarg) ) {
			warnx("could not set option '%s'", yytext);
		    }
		}
	;

option_arg_value:
		VALUE
		{
		    assert(strlen(yytext) < sizeof(optarg));
		    strcpy(optarg, yytext);
		}
	;
option_eq_arg:
		STD std 
	| 	FSIGN fsign
	| 	FFOLD_COPY ffold_copy
	|	SAVE_TEMPS save_temps
	|	TLINES tlines
		{
		    if( !option_set($1, yytext, optarg) ) {
			warnx("could not set option '%s'", yytext);
		    }
		}
	;

std :
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
		{
		    assert(strlen(yytext) < sizeof(optarg));
		    strcpy(optarg, yytext);
		}
;

fsign:
		ASCII
	| 	EBCDIC
		{
		    assert(strlen(yytext) < sizeof(optarg));
		    strcpy(optarg, yytext);
		}
		
	;

ffold_copy:
		LOWER
	| 	UPPER
		{
		    assert(strlen(yytext) < sizeof(optarg));
		    strcpy(optarg, yytext);
		}

	;

save_temps:
		VALUE
		{
		    assert(strlen(yytext) < sizeof(optarg));
		    strcpy(optarg, yytext);
		}

	;
tlines:
		INTEGER
		{
		    assert(strlen(yytext) < sizeof(optarg));
		    strcpy(optarg, yytext);
		}

	;

warning:
		WARNING warning_type
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
		{
		    bool yn = false;
		    if( yytext == strstr("no-", yytext) ) {
			yn = true;
			yytext += 3;
		    }
		    if( !warning_set($1, yn, yytext) ) {
			warnx("could not set warning '%s %s'",
			      yytext, yn? "on" : "off");
		    }
		}
		    
	;
