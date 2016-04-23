/*
   Copyright (C) 2001-2012, 2014-2016 Free Software Foundation, Inc.
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


%option 8bit
%option case-insensitive
%option never-interactive

%option noyy_scan_buffer
%option noyy_scan_bytes
%option noyy_scan_string

%option noyyget_extra
%option noyyset_extra
%option noyyget_leng
%option noyyget_text
%option noyyget_lineno
%option noyyset_lineno
%option noyyget_in
%option noyyset_in
%option noyyget_out
%option noyyset_out
%option noyyget_lval
%option noyyset_lval
%option noyyget_lloc
%option noyyset_lloc
%option noyyget_debug
%option noyyset_debug
%{

#undef	YY_READ_BUF_SIZE
#define	YY_READ_BUF_SIZE	32768
#undef	YY_BUF_SIZE
#define	YY_BUF_SIZE		32768

#define	YY_SKIP_YYWRAP
static int yywrap (void) {
    return 1;
}

#define YY_INPUT(buf,result,max_size)	\
	{	\
		if (fgets (buf, (int)max_size, yyin) == NULL) { \
			result = YY_NULL; \
		} else { \
			result = strlen (buf); \
		} \
	}

#define	YY_USER_INIT	\
	if (!plexbuff) {					\
		plexsize = COB_MINI_BUFF;			\
		plexbuff = cobc_malloc (plexsize);	\
	}							\
	if (!picbuff1) {					\
		pic1size = COB_MINI_BUFF;			\
		picbuff1 = cobc_malloc (pic1size);	\
	}							\
	if (!picbuff2) {					\
		pic2size = COB_MINI_BUFF;			\
		picbuff2 = cobc_malloc (pic2size);	\
	}

#include "config.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifdef	HAVE_UNISTD_H
#include <unistd.h>
#else
#define	YY_NO_UNISTD_H	1
#endif

#define	COB_IN_SCANNER	1
#include "cobc.h"
#include "tree.h"

#define YYSTYPE			cb_tree
#include "parser.h"

/* CONSTANT (78 level) structure */
struct cb_level_78 {
	struct cb_level_78	*next;		/* Next in chain */
	struct cb_level_78	*globnext;	/* Continued next in chain */
	struct cb_level_78	*last;		/* Last in chain */
	struct cb_field		*fld78;		/* Pointer to field */
	struct cb_program	*prog;		/* Program where defined */
	const char		*pic_replace;	/* Can replace in PICTURE */
	cob_u32_t		name_len;	/* Length of name */
	cob_u32_t		pic_len;	/* Length of pic_replace */
	cob_u32_t		not_const;	/* Invalid usage check */
	cob_u32_t		chk_const;	/* Check global level use */
};

struct cb_top_level_78 {
	struct cb_top_level_78	*next;
	struct cb_level_78	*lev78ptr;
};

/* Local variables */
static struct cb_level_78	*top78ptr = NULL;
static struct cb_level_78	*const78ptr = NULL;
static struct cb_level_78	*lev78ptr = NULL;
static struct cb_level_78	*globlev78ptr = NULL;
static char			*plexbuff = NULL;
static char			*picbuff1 = NULL;
static char			*picbuff2 = NULL;
static size_t			plexsize;
static size_t			pic1size;
static size_t			pic2size;
static unsigned int		last_token_is_dot = 0;
static unsigned int		integer_is_label = 0;
static unsigned int		inside_bracket = 0;
static unsigned int		literal_error;
static char			err_msg[COB_MINI_BUFF];

#ifdef	HAVE_DESIGNATED_INITS
static const unsigned char	valid_char[256] = {
	['-'] = 1,
	['0'] = 1,
	['1'] = 1,
	['2'] = 1,
	['3'] = 1,
	['4'] = 1,
	['5'] = 1,
	['6'] = 1,
	['7'] = 1,
	['8'] = 1,
	['9'] = 1,
	['A'] = 1,
	['B'] = 1,
	['C'] = 1,
	['D'] = 1,
	['E'] = 1,
	['F'] = 1,
	['G'] = 1,
	['H'] = 1,
	['I'] = 1,
	['J'] = 1,
	['K'] = 1,
	['L'] = 1,
	['M'] = 1,
	['N'] = 1,
	['O'] = 1,
	['P'] = 1,
	['Q'] = 1,
	['R'] = 1,
	['S'] = 1,
	['T'] = 1,
	['U'] = 1,
	['V'] = 1,
	['W'] = 1,
	['X'] = 1,
	['Y'] = 1,
	['Z'] = 1,
	['_'] = 1,
	['a'] = 1,
	['b'] = 1,
	['c'] = 1,
	['d'] = 1,
	['e'] = 1,
	['f'] = 1,
	['g'] = 1,
	['h'] = 1,
	['i'] = 1,
	['j'] = 1,
	['k'] = 1,
	['l'] = 1,
	['m'] = 1,
	['n'] = 1,
	['o'] = 1,
	['p'] = 1,
	['q'] = 1,
	['r'] = 1,
	['s'] = 1,
	['t'] = 1,
	['u'] = 1,
	['v'] = 1,
	['w'] = 1,
	['x'] = 1,
	['y'] = 1,
	['z'] = 1
};
#else
static unsigned char		valid_char[256];
static const unsigned char	pvalid_char[] =
	"-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz";
#endif

/* Function declarations */
static void	read_literal (const char);
static int	scan_x (const char *);
static int	scan_z (const char *, const cob_u32_t);
static int	scan_h (const char *, const cob_u32_t);
static int	scan_b (const char *, const cob_u32_t);
static int	scan_o (const char *);
static int	scan_numeric (const char *);
static int	scan_floating_numeric (const char *);
static void	scan_picture (const char *);
static void	count_lines (const char *);
static void	scan_define_options (const char *);
static void	scan_options (const char *, const unsigned int);

%}

%s DECIMAL_IS_PERIOD DECIMAL_IS_COMMA
%x PICTURE_STATE FUNCTION_STATE

%%

%{
	if (likely(current_program)) {
		if (current_program->decimal_point == '.') {
			BEGIN DECIMAL_IS_PERIOD;
		} else {
			BEGIN DECIMAL_IS_COMMA;
		}
	}

	/* We treat integer literals immediately after '.' as labels;
	   that is, they must be level numbers or section names. */
	if (last_token_is_dot) {
		integer_is_label = 1;
		last_token_is_dot = 0;
	} else {
		integer_is_label = 0;
	}
%}


<*>^[ ]?"#DEFLIT".*\n {
	scan_define_options (yytext);
}

<*>^[ ]?"#OPTION".*\n {
	scan_options (yytext, 1);
}

<*>^[ ]?"#DEFOFF".*\n {
	scan_options (yytext, 2);
}

<*>^[ ]?"#DEFENV".*\n {
	scan_options (yytext, 3);
}

<*>\n {
	cb_source_line++;
}

^"#LINE"[ ]?[0-9]+" ".* {
	/* Line directive */
	char		*p1;
	char		*p2;

	p1 = strchr (yytext, '"');
	if (p1) {
		p2 = cobc_strdup (p1 + 1);
		p1 = strrchr (p2, '"');
		if (p1) {
			*p1 = 0;
			cb_source_file = cobc_parse_strdup (p2);
			cb_source_line = (int)strtol (yytext + 5, NULL, 10) - 1;
		}
		cobc_free (p2);
	}
}

^"#".* {
	/* Ignore */
}

"PIC" |
"PICTURE" {
	BEGIN PICTURE_STATE;
}

"FUNCTION" {
	if (cobc_in_repository || cobc_cs_check == CB_CS_EXIT) {
		yylval = NULL;
		return FUNCTION;
	}
	BEGIN FUNCTION_STATE;
}

[\'\"] {
	/* String literal */
	cobc_force_literal = 0;
	read_literal (yytext[0]);
	return LITERAL;
}

X\'[^\'\n]*\' |
X\"[^\"\n]*\" {
	/* X string literal */
	cobc_force_literal = 0;
	return scan_x (yytext + 2);
}

Z\'[^\'\n]*\' |
Z\"[^\"\n]*\" {
	/* Z string literal */
	cobc_force_literal = 0;
	return scan_z (yytext + 2, 0);
}

L\'[^\'\n]*\' |
L\"[^\"\n]*\" {
	/* L string literal */
	cobc_force_literal = 0;
	return scan_z (yytext + 2, 1);
}

H\'[^\'\n]*\' |
H\"[^\"\n]*\" {
	/* H numeric literal */
	cobc_force_literal = 0;
	return scan_h (yytext + 2, 1);
}

B\'[^\'\n]*\' |
B\"[^\"\n]*\" {
	/* B boolean/numeric literal */
	cobc_force_literal = 0;
	return scan_b (yytext + 2, 1);
}

B#[0-9]* {
	/*
	  To avoid subtle silent errors, such as B#021, this rule (and the ones
	  following) here admit some invalid literals which emit errors when
	  they are processed.
	*/
	/* ACUCOBOL binary numeric literal */
	cobc_force_literal = 0;
	return scan_b (yytext + 2, 0);
}

O#[0-9]* {
	/* ACUCOBOL octal numeric literal */
	cobc_force_literal = 0;
	return scan_o (yytext + 2);
}

X#[0-9A-Za-z]* |
H#[0-9A-Za-z]* {
	/* ACUCOBOL hexadecimal numeric literal */
	cobc_force_literal = 0;
	return scan_h (yytext + 2, 0);
}

\( {
	inside_bracket++;
	return TOK_OPEN_PAREN;
}

\) {
	if (inside_bracket > 0) {
		inside_bracket--;
	}
	return TOK_CLOSE_PAREN;
}

[0-9]+ {
	cobc_force_literal = 0;
	if (integer_is_label) {
		/* Integer label or level number */
		yylval = cb_build_reference (yytext);
		return WORD;
	}
	/* Numeric literal or referenced integer label */
	/* All transformations/checks are postponed to tree.c */
	yylval = cb_build_numeric_literal (0, yytext, 0);
	return LITERAL;
}

[+-][0-9]+ {
	/* Numeric literal (signed) */
	return scan_numeric (yytext);
}

<*>[ ]+ {
	/* Ignore */
}

<*>;+ {
	if (inside_bracket) {
		return SEMI_COLON;
	}
	/* Ignore */
}

<DECIMAL_IS_PERIOD>[+-]?[0-9]*\.[0-9]+E[+-]?[0-9]+ {
	/* Numeric floating point literal */
	return scan_floating_numeric (yytext);
}

<DECIMAL_IS_PERIOD>[+-]?[0-9]*\.[0-9]+E[+-]?[0-9]*\.[0-9]+ {
	/* Invalid numeric floating point literal */
	return scan_floating_numeric (yytext);
}

<DECIMAL_IS_PERIOD>[+-]?[0-9]*\.[0-9]+ {
	/* Numeric literal */
	return scan_numeric (yytext);
}

<DECIMAL_IS_PERIOD>,+ {
	if (inside_bracket) {
		return COMMA_DELIM;
	}
	/* Ignore */
}

<DECIMAL_IS_COMMA>[+-]?[0-9]*,[0-9]+E[+-]?[0-9]+ {
	/* Numeric floating point literal */
	return scan_floating_numeric (yytext);
}

<DECIMAL_IS_COMMA>[+-]?[0-9]*,[0-9]+E[+-]?[0-9]*,[0-9]+ {
	/* Invalid numeric floating point literal */
	return scan_floating_numeric (yytext);
}

<DECIMAL_IS_COMMA>[+-]?[0-9]*,[0-9]+ {
	/* Numeric literal */
	return scan_numeric (yytext);
}

<DECIMAL_IS_COMMA>,{2,} {
	unput (',');
}

<DECIMAL_IS_COMMA>, {
	if (inside_bracket) {
		return COMMA_DELIM;
	}
	/* Ignore */
}

"END"[ ,;\n]+"PROGRAM" {
	cobc_force_literal = 1;
	count_lines (yytext);
	return END_PROGRAM;
}

"END"[ ,;\n]+"FUNCTION" {
	cobc_force_literal = 1;
	count_lines (yytext);
	return END_FUNCTION;
}

"PICTURE"[ ,;\n]+"SYMBOL" {
	count_lines (yytext);
	return PICTURE_SYMBOL;
}

"FROM"[ ,;\n]+"CRT" {
	count_lines (yytext);
	return FROM_CRT;
}

"SCREEN"[ ,;\n]+"CONTROL" {
	count_lines (yytext);
	return SCREEN_CONTROL;
}

"EVENT"[ ,;\n]+"STATUS" {
	count_lines (yytext);
	return EVENT_STATUS;
}

"READY"[ ,;\n]+"TRACE" {
	count_lines (yytext);
	return READY_TRACE;
}

"RESET"[ ,;\n]+"TRACE" {
	count_lines (yytext);
	return RESET_TRACE;
}

"GREATER"[ ,;\n]+"OR"[ ,;\n]+"EQUAL"[ ,;\n]+"TO"[ ,;\n] |
"GREATER"[ ,;\n]+"OR"[ ,;\n]+"EQUAL"[ ,;\n] |
"GREATER"[ ,;\n]+"THAN"[ ,;\n]+"OR"[ ,;\n]+"EQUAL"[ ,;\n]+"TO"[ ,;\n] |
"GREATER"[ ,;\n]+"THAN"[ ,;\n]+"OR"[ ,;\n]+"EQUAL"[ ,;\n] {
	count_lines (yytext);
	return GREATER_OR_EQUAL;
}

"GREATER"[ ,;\n]+"THAN"[ ,;\n] {
	count_lines (yytext);
	return GREATER;
}

"LESS"[ ,;\n]+"OR"[ ,;\n]+"EQUAL"[ ,;\n]+"TO"[ ,;\n] |
"LESS"[ ,;\n]+"OR"[ ,;\n]+"EQUAL"[ ,;\n] |
"LESS"[ ,;\n]+"THAN"[ ,;\n]+"OR"[ ,;\n]+"EQUAL"[ ,;\n]+"TO"[ ,;\n] |
"LESS"[ ,;\n]+"THAN"[ ,;\n]+"OR"[ ,;\n]+"EQUAL"[ ,;\n] {
	count_lines (yytext);
	return LESS_OR_EQUAL;
}

"LESS"[ ,;\n]+"THAN"[ ,;\n] {
	count_lines (yytext);
	return LESS;
}

"EQUAL"[ ,;\n]+"TO"[ ,;\n] {
	count_lines (yytext);
	return EQUAL;
}

"THEN"[ ,;\n]+"REPLACING"[ ,;\n] {
	count_lines (yytext);
	return REPLACING;
}

"LINES"[ ,;\n]+"AT"[ ,;\n]+"TOP"[ ,;\n] |
"LINES"[ ,;\n]+"TOP"[ ,;\n] |
"AT"[ ,;\n]+"TOP"[ ,;\n] {
	count_lines (yytext);
	return TOP;
}

"LINES"[ ,;\n]+"AT"[ ,;\n]+"BOTTOM"[ ,;\n] |
"LINES"[ ,;\n]+"BOTTOM"[ ,;\n] |
"AT"[ ,;\n]+"BOTTOM"[ ,;\n] {
	count_lines (yytext);
	return BOTTOM;
}

"WITH"[ ,;\n]+"NO"[ ,;\n]+"ADVANCING" |
"NO"[ ,;\n]+"ADVANCING" {
	count_lines (yytext);
	return NO_ADVANCING;
}

"ON"[ ,;\n]+"NEXT"[ ,;\n]+"PAGE"[ ,;\n] |
"NEXT"[ ,;\n]+"PAGE"[ ,;\n] {
	count_lines (yytext);
	return NEXT_PAGE;
}

"NOT"[ ,;\n]+"ON"[ ,;\n]+"SIZE"[ ,;\n]+"ERROR"[ ,;\n] |
"NOT"[ ,;\n]+"SIZE"[ ,;\n]+"ERROR"[ ,;\n] {
	count_lines (yytext);
	return NOT_SIZE_ERROR;
}

"ON"[ ,;\n]+"SIZE"[ ,;\n]+"ERROR"[ ,;\n] |
"SIZE"[ ,;\n]+"ERROR"[ ,;\n] {
	count_lines (yytext);
	return SIZE_ERROR;
}

"NOT"[ ,;\n]+"ON"[ ,;\n]+"ESCAPE"[ ,;\n] |
"NOT"[ ,;\n]+"ESCAPE"[ ,;\n] {
	count_lines (yytext);
	return NOT_ESCAPE;
}

"NOT"[ ,;\n]+"ON"[ ,;\n]+"EXCEPTION"[ ,;\n] |
"NOT"[ ,;\n]+"EXCEPTION"[ ,;\n] {
	count_lines (yytext);
	return NOT_EXCEPTION;
}

"ON"[ ,;\n]+"ESCAPE"[ ,;\n] {
	count_lines (yytext);
	return ESCAPE;
}

"ON"[ ,;\n]+"EXCEPTION"[ ,;\n] {
	count_lines (yytext);
	return EXCEPTION;
}

"NOT"[ ,;\n]+"ON"[ ,;\n]+"OVERFLOW"[ ,;\n] |
"NOT"[ ,;\n]+"OVERFLOW"[ ,;\n] {
	count_lines (yytext);
	return NOT_OVERFLOW;
}

"NOT"[ ,;\n]+"AT"[ ,;\n]+"END"[ ,;\n] |
"NOT"[ ,;\n]+"END"[ ,;\n] {
	count_lines (yytext);
	return NOT_END;
}

"AT"[ ,;\n]+"END"[ ,;\n] {
	count_lines (yytext);
	return END;
}

"ON"[ ,;\n]+"OVERFLOW"[ ,;\n] |
"OVERFLOW"[ ,;\n] {
	count_lines (yytext);
	return TOK_OVERFLOW;
}

"NOT"[ ,;\n]+"AT"[ ,;\n]+"END-OF-PAGE"[ ,;\n] |
"NOT"[ ,;\n]+"AT"[ ,;\n]+"EOP"[ ,;\n] |
"NOT"[ ,;\n]+"END-OF-PAGE"[ ,;\n] |
"NOT"[ ,;\n]+"EOP"[ ,;\n] {
	count_lines (yytext);
	return NOT_EOP;
}

"AT"[ ,;\n]+"END-OF-PAGE"[ ,;\n] |
"AT"[ ,;\n]+"EOP"[ ,;\n] |
"END-OF-PAGE"[ ,;\n] |
"EOP"[ ,;\n] {
	count_lines (yytext);
	return EOP;
}

"NOT"[ ,;\n]+"INVALID"[ ,;\n]+"KEY"[ ,;\n] {
	count_lines (yytext);
	return NOT_INVALID_KEY;
}

"NOT"[ ,;\n]+"INVALID"[ ,;\n] {
	count_lines (yytext);
	return NOT_INVALID_KEY;
}

"INVALID"[ ,;\n]+"KEY"[ ,;\n] {
	count_lines (yytext);
	return INVALID_KEY;
}

"INVALID"[ ,;\n] {
	count_lines (yytext);
	return INVALID_KEY;
}

"UPON"[ ,;\n]+"ENVIRONMENT-NAME" {
	count_lines (yytext);
	return UPON_ENVIRONMENT_NAME;
}

"UPON"[ ,;\n]+"ENVIRONMENT-VALUE" {
	count_lines (yytext);
	return UPON_ENVIRONMENT_VALUE;
}

"UPON"[ ,;\n]+"ARGUMENT-NUMBER" {
	count_lines (yytext);
	return UPON_ARGUMENT_NUMBER;
}

"UPON"[ ,;\n]+"COMMAND-LINE" {
	count_lines (yytext);
	return UPON_COMMAND_LINE;
}

"AFTER"[ ,;\n]+"EXCEPTION"[ ,;\n]+"CONDITION"[ ,;\n] {
	count_lines (yytext);
	return EXCEPTION_CONDITION;
}

"EXCEPTION"[ ,;\n]+"CONDITION"[ ,;\n] {
	count_lines (yytext);
	return EXCEPTION_CONDITION;
}

"AFTER"[ ,;\n]+"EC"[ ,;\n] {
	count_lines (yytext);
	return EC;
}

"LENGTH"[ ,;\n]+"OF"[ ,;\n] {
	count_lines (yytext);
	return LENGTH_OF;
}

"SWITCH"[ ]+([0-9][0-9]?|[A-Z])[ ,;\n] {
	/* ACUCOBOL extension: switch-names with space and with letter */
	char suffix[3] = "";
	char name[10] = "";

	unput (yytext[yyleng-1]); /* unput seperator */
	if (cobc_in_procedure) {
		 /* unput characters */
		yylval = cb_build_reference ("SWITCH");
		if (isdigit((unsigned char)yytext[yyleng-3])) {
			unput (yytext[yyleng-2]);
			unput (yytext[yyleng-3]);
		} else {
			unput (yytext[yyleng-2]);
		}
	} else {
		 /* we need to return a single word, reverted later in parser.y */
		if (yytext[yyleng-3] == ' ' && isdigit((unsigned char)yytext[yyleng-2])) {
			/* SWITCH 0  to SWITCH 9 */
			suffix[0] = yytext[yyleng-2];
		} else if (isdigit((unsigned char)yytext[yyleng-3])) {
			/* SWITCH 00 to SWITCH 99 */
			suffix[0] = yytext[yyleng-3];
			suffix[1] = yytext[yyleng-2];
		} else {
			suffix[0] = yytext[yyleng-2];
		}
		strncpy(name, yytext, 6);
		strcat(name, "_");
		strcat(name, suffix);
		yylval = cb_build_reference (name);
	}
	return WORD;
}

[A-Z0-9\x80-\xFF]([_A-Z0-9\x80-\xFF-]*[A-Z0-9\x80-\xFF]+)? {
	struct cb_level_78		*p78;
	struct cb_intrinsic_table	*cbp;
	struct cobc_reserved		*resptr;
	struct cb_text_list		*tlp;
	cb_tree				x;
	cb_tree				l;
	struct cb_program		*program;

	/* Check word length */
	if (unlikely(yyleng > cb_word_length)) {
		if (yyleng > COB_MAX_WORDLEN) {
			/* Absolute limit */
			cb_error (_("Word length exceeds maximum of %d characters - '%s'"),
				  COB_MAX_WORDLEN, yytext);
		} else if (!cb_relaxed_syntax_check) {
			cb_error (_("Word length exceeds %d characters - '%s'"),
				  cb_word_length, yytext);
		} else if (warningopt) {
			cb_warning (_("Word length exceeds %d characters - '%s'"),
				  cb_word_length, yytext);
		}
	}

	/* Check Intrinsic FUNCTION name without keyword */
	if ((cobc_in_procedure && (functions_are_all || cb_intrinsic_list ||
	     current_program->function_spec_list)) || cobc_in_repository) {
		cbp = lookup_intrinsic (yytext, 1, 0);
		if (cbp) {
			if (cobc_in_repository) {
				yylval = cb_build_alphanumeric_literal (yytext, (size_t)yyleng);
				return FUNCTION_NAME;
			}
			if (functions_are_all) {
				yylval = cb_build_reference (yytext);
				return (enum yytokentype)(cbp->token);
			}
			for (tlp = cb_intrinsic_list; tlp; tlp = tlp->next) {
				if (!strcasecmp (yytext, tlp->text)) {
					yylval = cb_build_reference (yytext);
					return (enum yytokentype)(cbp->token);
				}
			}
			l = current_program->function_spec_list;
			for (; l; l = CB_CHAIN(l)) {
				x = CB_VALUE (l);
				if (!strcasecmp (yytext,
						 (char *)(CB_LITERAL(x)->data))) {
					yylval = cb_build_reference (yytext);
					return (enum yytokentype)(cbp->token);
				}
			}
		}
	}

	/* Bail early for (END) PROGRAM-ID when not a literal */
	if (unlikely(cobc_force_literal)) {
		/* Force PROGRAM-ID / END PROGRAM */
		cobc_force_literal = 0;
		if (cb_fold_call) {
			yylval = cb_build_reference (yytext);
			return PROGRAM_NAME;
		} else {
			yylval = cb_build_alphanumeric_literal (yytext, (size_t)yyleng);
			return LITERAL;
		}
	}

	/* Check reserved word */
	resptr = lookup_reserved_word (yytext);
	if (resptr != NULL) {
		if (resptr->nodegen) {
			/* Save location for terminator checking */
			/* Misuse comment tree to mark statement */
			yylval = cb_build_comment (NULL);
		} else {
			yylval = NULL;
		}
		return resptr->token;
	}

	/* Check user function */
	if (cobc_in_repository) {
		yylval = cb_build_reference (yytext);
		return WORD;
	} else {
		if (current_program->prog_type == CB_FUNCTION_TYPE &&
		    !functions_are_all &&
		    !strcasecmp (yytext, current_program->orig_program_id)) {
			/* Direct recursive reference */
			yylval = cb_build_reference (yytext);
			return USER_FUNCTION_NAME;
		}
		for (l = current_program->user_spec_list; l; l = CB_CHAIN(l)) {
			x = CB_VALUE (l);
			if (!strcasecmp (yytext, CB_FUNC_PROTOTYPE (x)->name)) {
				yylval = cb_build_reference (yytext);
				return USER_FUNCTION_NAME;
			}
		}
	}

	/* Check user programs */
        program = cb_find_defined_program_by_name (yytext);
	if (program) {
		yylval = cb_build_reference (yytext);
		return PROGRAM_NAME;
	}

	/* User word */

	/* Check local, global and source global CONSTANT (78) items */

	for (p78 = top78ptr; p78; p78 = p78->globnext) {
		if (strcasecmp (yytext, p78->fld78->name) == 0) {
			if (unlikely(non_const_word)) {
				if (p78->prog == current_program) {
					cb_error (_("A constant may not be used here - '%s'"), yytext);
					yylval = cb_error_node;
					return WORD;
				}
				if (p78->chk_const) {
					p78->not_const = 1;
				}
				break;
			}
			if (p78->chk_const && p78->not_const) {
				break;
			}
			yylval = CB_VALUE (p78->fld78->values);
			return LITERAL;
		}
	}

	yylval = cb_build_reference (yytext);

	/* Special name handling */
	if (CB_WORD_COUNT (yylval) > 0 && CB_WORD_ITEMS (yylval)) {
		x = CB_VALUE (CB_WORD_ITEMS (yylval));
		if (CB_SYSTEM_NAME_P (x)) {
			return MNEMONIC_NAME;
		}
	}

	return WORD;
}

"<=" {
	yylval = NULL;
	return LESS_OR_EQUAL;
}

">=" {
	yylval = NULL;
	return GREATER_OR_EQUAL;
}

"<>" {
	yylval = NULL;
	return NOT_EQUAL;
}

"**" {
	yylval = NULL;
	return EXPONENTIATION;
}

"." {
	last_token_is_dot = 1;
	yylval = NULL;
	return TOK_DOT;
}

"&" {
	yylval = NULL;
	return TOK_AMPER;
}

":" {
	yylval = NULL;
	return TOK_COLON;
}

"=" {
	yylval = NULL;
	return TOK_EQUAL;
}

"/" {
	yylval = NULL;
	return TOK_DIV;
}

"*" {
	yylval = NULL;
	return TOK_MUL;
}

"+" {
	yylval = NULL;
	return TOK_PLUS;
}

"-" {
	yylval = NULL;
	return TOK_MINUS;
}

"<" {
	yylval = NULL;
	return TOK_LESS;
}

">" {
	yylval = NULL;
	return TOK_GREATER;
}

. {
	int	c;

	cb_error (_("Invalid symbol: %s - Skipping word"), yytext);
	while ((c = input ()) != EOF) {
		if (c == '\n' || c == ' ') {
			break;
		}
	}
	if (c != EOF) {
		unput (c);
	}
}


<PICTURE_STATE>{
  "IS" {
	/* Ignore */
  }
  [^ \n;]+ {
	BEGIN INITIAL;
	scan_picture (yytext);
	return PICTURE;
  }
}

<FUNCTION_STATE>{
  [A-Z0-9-]+ {
	struct cb_intrinsic_table	*cbp;
	cb_tree				l;
        cb_tree				x;

	BEGIN INITIAL;
	yylval = cb_build_reference (yytext);
	for (l = current_program->user_spec_list; l; l = CB_CHAIN(l)) {
		x = CB_VALUE (l);
		if (!strcasecmp (yytext, CB_FUNC_PROTOTYPE (x)->name)) {
			return USER_FUNCTION_NAME;
		}
	}
	cbp = lookup_intrinsic (yytext, 1, 0);
	if (cbp) {
		return (enum yytokentype)(cbp->token);
	}
	return FUNCTION_NAME;
  }
  . {
	yylval = NULL;
	return yytext[0];
  }
}

<<EOF>> {
	struct cb_level_78	*p78;
	struct cb_level_78	*p782;

	/* At EOF - Clear variables */
	for (p78 = lev78ptr; p78; ) {
		p782 = p78->next;
		cobc_free (p78);
		p78 = p782;
	}
	for (p78 = globlev78ptr; p78; ) {
		p782 = p78->next;
		cobc_free (p78);
		p78 = p782;
	}
	for (p78 = const78ptr; p78; ) {
		p782 = p78->next;
		cobc_free (p78);
		p78 = p782;
	}
	top78ptr = NULL;
	last_token_is_dot = 0;
	integer_is_label = 0;
	inside_bracket = 0;
	lev78ptr = NULL;
	globlev78ptr = NULL;
	cobc_force_literal = 0;
	yyterminate ();
}

%%

static void
error_literal (const char *type, const char *literal)
{
	char		lit_out[39];

	if (!literal_error) {
		/* snip literal for output, if too long */
		strncpy (lit_out, literal, 38);
		if (strlen (literal) > 38) {
			strcpy (lit_out + 35, "...");
		} else {
			lit_out[38] = '\0';
		}
		if (strcmp (type, "") == 0) {
			cb_error (_("Invalid literal: '%s'"), lit_out);
		} else if (strcmp (type, "hex") == 0) {
			cb_error (_("Invalid hexadecimal literal: '%s'"), lit_out);
		} else if (strcmp (type, "num") == 0) {
			cb_error (_("Invalid numeric literal: '%s'"), lit_out);
		} else if (strcmp (type, "float") == 0) {
			cb_error (_("Invalid floating-point literal: '%s'"), lit_out);
		} else {
			cb_error (_("Invalid %s literal: '%s'"), type, lit_out);
		}
	}
	literal_error++;
	cb_error ("%s", err_msg);
}

static void
read_literal (const char mark)
{
	size_t		i;
	int		c;

	literal_error = 0;

	i = 0;
	while ((c = input ()) != EOF) {
		if (!literal_error) {
			if (unlikely(i == plexsize)) {
				plexsize *= 2;
				if (unlikely (plexsize > (cb_lit_length + 1))) {
					plexsize = cb_lit_length + 1;
				}
				plexbuff = cobc_realloc (plexbuff, plexsize);
			}
			plexbuff[i] = (cob_u8_t)c;
		}
		if (c == mark && (c = input ()) != (int)mark) {
			if (c == '-') {
				/* Free format continuation ("a"- 'b'- ) */
				/* Hack it as concatenation */
				unput ('&');
			} else {
				unput (c);
			}
			break;
		}
		/* check literal size here as we have to adjust and check
		   for (escaped) mark before checking the max length */
		if (unlikely (i++ == cb_lit_length)) {
			plexbuff[i] = 0;
			snprintf (err_msg, COB_MINI_MAX,
				_ ("Literal length exceeds %d characters"),
				cb_lit_length);
			error_literal ("", plexbuff);
		}
	}
	/* fixme: cobol 2014 allows this (and needs it for DYNAMIC LENGTH items),
	   while other versions do not allow this at all
	   --> add a compiler support configuration for "OK" => zero length,
	   "warning" => current implementation, "error" (for example in cobol2002),
	   "ignore" => assume a space without warning; make sure zero length items
	   work everywhere (should do as we support zero lengths via ODO items already)
	*/
	if (!i) {
		cb_warning (_("Alphanumeric literal has zero length"));
		cb_warning (_("A SPACE will be assumed"));
		plexbuff[0] = ' ';
		i = 1;
	}
	plexbuff[i] = 0;
	yylval = cb_build_alphanumeric_literal (plexbuff, i);
}

static int
scan_x (const char *text)
{
	char		*p;
	char		*e;
	char		*dst;
	size_t		currlen;
	int			high = 1;
	int			c;

	literal_error = 0;

	/* currlen includes the terminating quote */
	currlen = strlen (text);
	if (unlikely(currlen - 1 > cb_lit_length)) {
		currlen--;
		snprintf (err_msg, COB_MINI_MAX,
			_("Literal length %d exceeds %d characters"),
			  (int) currlen, cb_lit_length);
		error_literal ("X", text);
		goto error;
	}
	if (unlikely(currlen > plexsize)) {
		plexsize = currlen;
		plexbuff = cobc_realloc (plexbuff, plexsize);
	}
	p = (char *)text;
	e = (char *)p + currlen - 1;
	dst = plexbuff;
	for (; *p != *e; p++) {
		c = (int)*p;
		if ('0' <= c && c <= '9') {
			c = c - '0';
		} else if ('A' <= c && c <= 'F') {
			c = c - 'A' + 10;
		} else if ('a' <= c && c <= 'f') {
			c = c - 'a' + 10;
		} else {
			snprintf (err_msg, COB_MINI_MAX,
				_("Literal contains invalid character '%c'"), c);
			if (likely (literal_error == 0)) {
				memcpy (plexbuff, text, currlen);
				plexbuff[currlen - 1] = 0;
			}
			error_literal ("X", plexbuff);
			continue;
			/* By not breaking immediately, we detect any following
			   invalid chars
			*/
		}
		if (likely (literal_error == 0)) {
			if (high) {
				*dst = (cob_u8_t)(c << 4);
			} else {
				*dst++ += (cob_u8_t)c;
			}
		}
		high = 1 - high;
	}

	if (!high) {
		/* This is non-standard behaviour */
		snprintf (err_msg, COB_MINI_MAX,
			_("Literal does not have an even number of digits"));
		if (likely (literal_error == 0)) {
			memcpy (plexbuff, text, currlen);
			plexbuff[currlen - 1] = 0;
		}
		error_literal ("X", plexbuff);
	}

	if (unlikely(literal_error != 0)) {
		goto error;
	}

	yylval = cb_build_alphanumeric_literal (plexbuff, (size_t)(dst - plexbuff));
	return LITERAL;

error:
	yylval = cb_error_node;
	return LITERAL;
}

static int
scan_z (const char *text, const cob_u32_t llit)
{
	size_t		currlen;

	literal_error = 0;

	/* currlen includes the terminating quote */
	currlen = strlen (text);
	if (unlikely((currlen - 1) > cb_lit_length)) {
		currlen--;
		snprintf (err_msg, COB_MINI_MAX,
			_("Literal length %d exceeds %d characters"),
			  (int) currlen, cb_lit_length);
		if (llit) {
			error_literal ("L", text);
		} else {
			error_literal ("Z", text);
		}
		yylval = cb_error_node;
		return LITERAL;
	}
	if (unlikely(currlen > plexsize)) {
		plexsize = currlen;
		plexbuff = cobc_realloc (plexbuff, plexsize);
	}
	memcpy (plexbuff, text, currlen);
	plexbuff[currlen - 1] = 0;

	/* Count is correct here as the trailing quote is now a null */
	yylval = cb_build_alphanumeric_literal (plexbuff, currlen);
	CB_LITERAL(yylval)->llit = llit;
	return LITERAL;
}

static int
scan_h (const char *text, const cob_u32_t with_mark)
{
	size_t		currlen;
	char		*p;
	cob_u64_t	val = 0;
	int		c;

	literal_error = 0;

	if (!with_mark &&
		!cb_verify (cb_acucobol_literals, _("ACUCOBOL numeric literal"))) {
		goto error;
	}


	/* currlen can include the terminating quote */
	currlen = strlen (text);
	memcpy (plexbuff, text, currlen + 1);
	if (with_mark) {
		currlen--;
		plexbuff[currlen] = 0;
	}
	if (unlikely(currlen > 16)) {
		snprintf (err_msg, COB_MINI_MAX,
			_("Literal length %d exceeds %d characters"),
			  (int) currlen,  16);
		error_literal ("hex", plexbuff);
		goto error;
	}

	for (p = plexbuff; *p != 0; p++) {
		c = (int)*p;
		if ('0' <= c && c <= '9') {
			c = c - '0';
		} else if ('A' <= c && c <= 'F') {
			c = c - 'A' + 10;
		} else if ('a' <= c && c <= 'f') {
			c = c - 'a' + 10;
		} else {
			snprintf (err_msg, COB_MINI_MAX,
				_("Literal contains invalid character '%c'"), c);
			error_literal ("hex", plexbuff);
			continue;
		}

		val = (val << 4) + c;
	}

	if (literal_error) {
		goto error;
	}

	/* Duplication? */
	sprintf ((char *)plexbuff, CB_FMT_LLU, val);
	yylval = cb_build_numeric_literal (0, (const void *)plexbuff, 0);

	return LITERAL;

error:
	yylval = cb_error_node;
	return LITERAL;
}

static int
scan_b (const char *text, const cob_u32_t with_mark)
{
	size_t		currlen;
	char		*p;
	cob_u64_t	val = 0;
	int		c;

	literal_error = 0;

	if (( with_mark &&
		 !cb_verify (cb_numeric_boolean, _ ("Numeric boolean literal"))) ||
		(!with_mark &&
		 !cb_verify (cb_acucobol_literals, _ ("ACUCOBOL numeric literal")))) {
		goto error;
	}

	/* currlen can include the terminating quote */
	currlen = strlen (text);
	memcpy (plexbuff, text, currlen + 1);
	if (with_mark) {
		currlen--;
		plexbuff[currlen] = 0;
	}
	if (unlikely(currlen > 64)) {
		snprintf (err_msg, COB_MINI_MAX,
			_("Literal length %d exceeds %d characters"),
			  (int) currlen, 64);
		error_literal ("B", plexbuff);
		goto error;
	}

	for (p = plexbuff; *p != 0; p++) {
		c = (int) *p;
		if (c == '0') {
			c = 0;
		} else if (c == '1') {
			c = 1;
		} else {
			snprintf (err_msg, COB_MINI_MAX,
				_("Literal contains invalid character '%c'"), c);
			error_literal ("B", plexbuff);
			continue;
		}

		val = (val << 1) + c;
	}

	if (literal_error) {
		goto error;
	}

	sprintf ((char *)plexbuff, CB_FMT_LLU, val);
	yylval = cb_build_numeric_literal (0, (const void *)plexbuff, 0);

	return LITERAL;

 error:
	yylval = cb_error_node;
	return LITERAL;
}

static int
scan_o (const char *text)
{
	size_t		currlen;
	char		*p;
	cob_u64_t	val = 0;
	int		c;

	literal_error = 0;

	if (!cb_verify (cb_acucobol_literals, _("ACUCOBOL numeric literal"))) {
		goto error;
	}

	currlen = strlen (text);
	memcpy (plexbuff, text, currlen + 1);
	if (unlikely(currlen > 22)) {
		snprintf (err_msg, COB_MINI_MAX,
			  _("Literal length %d exceeds %d characters"),
			  (int) currlen, 22);
		error_literal ("O", plexbuff);
		goto error;
	}

	for (p = plexbuff; *p != 0; p++) {
		c = (int) *p;
		if (!('0' <= c && c <= '7')) {
			snprintf (err_msg, COB_MINI_MAX,
				_("Literal contains invalid character '%c'"), c);
			error_literal ("O", plexbuff);
			continue;
		}

		c = c - '0';
		val = (val << 3) + c;
	}

	if (literal_error) {
		goto error;
	}

	sprintf ((char *)plexbuff, CB_FMT_LLU, val);
	yylval = cb_build_numeric_literal (0, (const void *)plexbuff, 0);

	return LITERAL;

 error:
	yylval = cb_error_node;
	return LITERAL;
}

static int
get_sign (const char sign)
{
	if (sign == '+') {
		return 1;
	} else if (sign == '-') {
		return -1;
	} else {
		return 0;
	}
}

#define INCREMENT_IF_SIGNED(text, sign) \
	do {				\
		if (sign) {		\
			(text)++;	\
		}			\
	} ONCE_COB

static int
scan_numeric (const char *text)
{
	char		*p = (char *)text;
	char		*s;
	int 		sign;
	int 		scale;

	/* Get sign */
	sign = get_sign (*p);
	INCREMENT_IF_SIGNED (p, sign);

	/* Get decimal point */
	s = strchr (p, current_program->decimal_point);
	if (s) {
		scale = (int)strlen (s) - 1;
		/* Remove decimal point */
		/* Moves trailing null */
		memmove (s, s + 1, (size_t)(scale + 1));
	} else {
		scale = 0;
	}

	/* leading zeroes should be removed here, shouldn't they ? */

	if (unlikely(strlen (p) > COB_MAX_DIGITS)) {
		/* Absolute limit */
		snprintf (err_msg, COB_MINI_MAX,
			  _("Literal length %d exceeds maximum of %d digits"),
			  (int) strlen (p), COB_MAX_DIGITS);
		error_literal ("num", text);
		yylval = cb_error_node;
	} else if (unlikely(strlen (p) > cb_numlit_length)) {
		snprintf (err_msg, COB_MINI_MAX,
			  _("Literal length %d exceeds %d digits"),
			  (int) strlen (p), cb_numlit_length);
		error_literal ("num", text);
		yylval = cb_error_node;
	} else {
		yylval = cb_build_numeric_literal (sign, p, scale);
	}
	return LITERAL;
}

static int
all_zeroes (const char *str)
{
	int	i;

	for (i = 0; str[i] != '\0'; ++i) {
		if (str[i] != '0') {
			return 0;
		}
	}

	return 1;
}

static int
significand_is_zero (const char *int_part, const char *dec_part)
{
	return all_zeroes (int_part)
		&& all_zeroes (dec_part);
}

static int
scan_floating_numeric (const char *text)
{
	size_t		sig_int_len;
	size_t		sig_dec_len;
	int		sig_sign;
	int		exp_sign;
	int		scale;
	int		exponent;
	int		n;
	char		significand_str[37];
	char		*significand_pos;
	char		significand_dec[36];
	char		significand_int[36];
	char		exponent_str[8];
	char		*exponent_pos;

	char		result[128];

	literal_error = 0;

	/* Separate into significand and exponent */
	n = sscanf (text, "%36[0-9.,+-]%*[Ee]%7[0-9.,+-]",
		significand_str, exponent_str);
	/* We check the return for silencing warnings,
		this should never happen as the flex rule ensures this */
	if (n == 0) {
		yylval = cb_error_node;
		return LITERAL;
	}

	/* Get signs and adjust string positions accordingly */
	significand_pos = &significand_str[0];
	sig_sign = get_sign (*significand_pos);
	INCREMENT_IF_SIGNED (significand_pos, sig_sign);

	exponent_pos = &exponent_str[0];
	exp_sign = get_sign (*exponent_pos);
	INCREMENT_IF_SIGNED (exponent_pos, exp_sign);

	/* Separate into integer and decimal */
	n = sscanf (significand_pos, "%35[0-9]%*[.,]%35[0-9]",
			significand_int, significand_dec);
	if (n == 0) { /* no integer part, copy after decimal-point */
		significand_int[0] = 0;
		strncpy (significand_dec, significand_pos + 1, 35);
		significand_dec[35] = 0;
	} else {
	/* silencing some warnings */
		significand_int[35] = significand_dec[35] = 0;
	}

	/* Validation */
	sig_int_len = strlen (significand_int);
	sig_dec_len = strlen (significand_dec);
	if (sig_int_len + sig_dec_len > 34U) {
		snprintf (err_msg, COB_MINI_MAX,
			_("Significand has more than 34 digits"));
		error_literal ("float", text);
	}
	if (strchr (exponent_pos, current_program->decimal_point)) {
		snprintf (err_msg, COB_MINI_MAX,
			_("Exponent has decimal point"));
		error_literal ("float", text);
		exponent = 0;
	} else {
		if (strlen (exponent_pos) > 4) {
			snprintf (err_msg, COB_MINI_MAX,
				_("Exponent has more than 4 digits"));
			error_literal ("float", text);
		}
		n = sscanf (exponent_pos, "%d", &exponent);
		/* We check the return for silencing warnings,
		   this should never happen as the flex rule ensures this */
		if (n == 0) {
			yylval = cb_error_node;
			return LITERAL;
		}

		if (exp_sign == -1) {
			exponent = -exponent;
		}

		if (!(-78 <= exponent && exponent <= 76)) {
			snprintf (err_msg, COB_MINI_MAX,
				_("Exponent not between -78 and 76"));
			error_literal ("float", text);
		}
	}

	if (significand_is_zero (significand_int, significand_dec)) {
		if (sig_sign == -1) {
			snprintf (err_msg, COB_MINI_MAX,
				_("Significand of 0 must be positive"));
			error_literal ("float", text);
		}
		if (exponent != 0) {
			snprintf (err_msg, COB_MINI_MAX,
				_("Exponent of 0 must be 0"));
			error_literal ("float", text);
		}
		if (exp_sign == -1) {
			snprintf (err_msg, COB_MINI_MAX,
				_("Exponent of 0 must be positive"));
			error_literal ("float", text);
		}
	}

	if (literal_error) {
		yylval = cb_error_node;
		return LITERAL;
	}

	/* Determine scale */
	/* Base scale is decimal part of the significant */
	scale = (int)sig_dec_len;
	/* Adjust according to exponent */
	if (exponent < 0) {
		/* Decimals; power down by scale difference */
		exponent = -exponent;
		scale += exponent;
		result[0] = 0;
		if (exponent > (int)sig_int_len) {
			n = exponent - (int)sig_int_len;
			for (; n; --n) {
				strcat (result, "0");
			}
		}
		strcat (result, significand_int);
		strcat (result, significand_dec);
	} else if (exponent > 0) {
		/* No decimals; power up by scale difference */
		strcpy (result, significand_int);
		strcat (result, significand_dec);
		if (exponent >= scale) {
			n = exponent - scale;
			for (; n; --n) {
				strcat (result, "0");
			}
			scale = 0;
		} else {
			scale -= exponent;
		}
	} else {
		/* Exponent is 0; take as is */
		strcpy (result, significand_int);
		strcat (result, significand_dec);
	}

	yylval = cb_build_numeric_literal (sig_sign, result,
					   scale);
	return LITERAL;
}

static int
can_replace (const char *src1, const char *src2, const size_t size,
	     const size_t iteration)
{
	const unsigned char	*p;

	/* Check if we can do a replacement */
	if (strncasecmp (src1, src2, size)) {
		return 0;
	}
	p = (const unsigned char *)src1 + size;
	if (valid_char[*p]) {
		return 0;
	}
	if (iteration) {
		p = (const unsigned char *)src1 - 1;
		if (valid_char[*p]) {
			return 0;
		}
	}
	return 1;
}

static const char *
check_78_replace (const cb_tree p)
{
	/* Check if we can do a constant replacement within PICTURE */
	if (CB_LITERAL_P (p)) {
		if (CB_LITERAL(p)->size > 50) {
			return NULL;
		}
		return (const char *)(CB_LITERAL(p)->data);
	}
	if (p == cb_low) {
		return "LOW-VALUE";
	}
	if (p == cb_high) {
		return "HIGH-VALUE";
	}
	if (p == cb_space) {
		return "SPACE";
	}
	if (p == cb_zero) {
		return "ZERO";
	}
	if (p == cb_quote) {
		return "QUOTE";
	}
	if (p == cb_null) {
		return "NULL";
	}
	return NULL;
}

static void
scan_picture (const char *text)
{
	unsigned char			*p;
	const struct cb_level_78	*p78;
	size_t				n;
	size_t				i;
	size_t				size;
	size_t				sizep;

	/* Scan a PICTURE clause */
	/* Normalize the input */
	for (p = (unsigned char *)text; *p; p++) {
		/* unput trailing '.' or ',' */
		if (p[1] == 0 && (*p == '.' || *p == ',')) {
			unput (*p);
			*p = 0;
			break;
		}
		*p = (unsigned char)toupper (*p);
	}

	if (!top78ptr) {
		yylval = cb_build_picture (text);
		return;
	}

	memset (picbuff1, 0, pic1size);
	memset (picbuff2, 0, pic2size);
	strcpy (picbuff1, text);
	for (p78 = top78ptr; p78; p78 = p78->globnext) {
		if (!p78->pic_replace) {
			strcpy (picbuff2, picbuff1);
			continue;
		}
		size = p78->name_len;
		sizep = p78->pic_len;
		i = 0;
		for (n = 0; n < strlen (picbuff1); n++) {
			if (can_replace (&picbuff1[n], p78->fld78->name, size, n)) {
				memcpy (&picbuff2[i], p78->pic_replace, sizep);
				n += size - 1;
				i += sizep;
			} else {
				picbuff2[i++] = picbuff1[n];
			}
		}
		picbuff2[i] = 0;
		strcpy (picbuff1, picbuff2);
	}
	yylval = cb_build_picture (picbuff2);
}

static void
count_lines (const char *text)
{
	const char	*p;

	/* Count newlines in text */
	for (p = text; *p; p++) {
		if (*p == '\n') {
			cb_source_line++;
		}
	}
}

static void
cb_add_const_var (const char *name, cb_tree value)
{
	cb_tree			x;
	struct cb_level_78	*p78;
	struct cb_field		*f;


	/* Add an inline constant */
	x = cb_build_constant (cb_build_reference (name), value);
	f = CB_FIELD (x);
	f->flag_item_78 = 1;
	f->flag_is_global = 1;
	f->level = 1;
	(void)cb_validate_78_item (f, 1);

	/* Add constant item */
	p78 = cobc_malloc (sizeof(struct cb_level_78));
	p78->fld78 = f;
	p78->prog = NULL;
	p78->pic_replace = check_78_replace (CB_VALUE(f->values));
	if (p78->pic_replace) {
		p78->pic_len = (cob_u32_t)strlen (p78->pic_replace);
	}
	p78->name_len = (cob_u32_t)strlen (f->name);
	/* RXWRXW - Check this */
	p78->chk_const = 0;
	if (!const78ptr) {
		p78->last = p78;
	} else {
		p78->last = const78ptr->last;
	}
	p78->next = const78ptr;
	p78->globnext = const78ptr;
	const78ptr = p78;
	if (globlev78ptr) {
		globlev78ptr->last->globnext = const78ptr;
	} else if (lev78ptr) {
		lev78ptr->last->globnext = const78ptr;
	} else {
		top78ptr = const78ptr;
	}
}

static void
scan_options (const char *text, const unsigned int optype)
{
	COB_UNUSED (text);
	COB_UNUSED (optype);
}

static void
scan_define_options (const char *text)
{
	char				*p;
	char				*s;
	char				*var;
	const struct cb_level_78	*p78;
	char				*q;
	unsigned char			*t;
	cb_tree				x;
	size_t				size;
	int				scale;
	int				sign;

	/* Scan a source inline define */
	p = cobc_strdup (text);

	/* Ignore first part */
	s = strtok (p, " ");

	/* Variable name */
	s = strtok (NULL, " \n");
	if (!s) {
		cobc_free (p);
		return;
	}

	/* Check for already defined constant */
	for (p78 = top78ptr; p78; p78 = p78->globnext) {
		if (strcasecmp (s, p78->fld78->name) == 0) {
			cobc_free (p);
			return;
		}
	}

	var = cobc_strdup (s);

	/* Value */
	s = strtok (NULL, "\n");
	if (!s) {
		cb_error (_("Invalid CONSTANT - %s"), var);
		goto freevar;
	}

	if (*s == '"' || *s == '\'') {
		/* Alphanumeric literal */
		sign = *s;
		size = strlen (s);
		q = s + size - 1;
		if (q == s || *q != sign) {
			cb_error (_("Invalid alphanumeric CONSTANT - %s"), s);
			goto freevar;
		}
		if (size < 3) {
			cb_error (_("Empty alphanumeric CONSTANT - %s"), s);
			goto freevar;
		}
		*q = 0;
		size -= 2;
		x = cb_build_alphanumeric_literal (s + 1, size);
	} else {
		/* Get sign */
		sign = get_sign (*s);
		INCREMENT_IF_SIGNED (s, sign);

		/* Get decimal point */
		scale = 0;
		q = strchr (s, '.');
		if (q) {
			scale = (int)strlen (q) - 1;
			if (scale < 1) {
				cb_error (_("Invalid numeric CONSTANT - %s"), s);
				goto freevar;
			}
			/* Remove decimal point */
			memmove (q, q + 1, (size_t)(scale + 1));
		}
		for (t = (unsigned char *)s; *t; ++t) {
			if (*t < '0' || *t  > '9') {
				cb_error (_("Invalid numeric CONSTANT - %s"), s);
				goto freevar;
			}
		}
		if (strlen (s) > COB_MAX_DIGITS) {
			cb_error (_("Invalid numeric CONSTANT - %s"), s);
			goto freevar;
		}

		x = cb_build_numeric_literal (sign, s, scale);
	}
	/* Add to constant list */
	cb_add_const_var (var, x);

freevar:
	cobc_free (p);
	cobc_free (var);
}

#undef INCREMENT_IF_SIGNED

/* Global functions */

void
ylex_clear_all (void)
{
	/* Clear buffers after parsing all source elements */
	if (picbuff2) {
		cobc_free (picbuff2);
		picbuff2 = NULL;
	}
	if (picbuff1) {
		cobc_free (picbuff1);
		picbuff1 = NULL;
	}
	if (plexbuff) {
		cobc_free (plexbuff);
		plexbuff = NULL;
	}
	plexsize = 0;
	pic1size = 0;
	pic2size = 0;
}

void
ylex_call_destroy (void)
{
	/* Release flex buffers */
	(void)yylex_destroy ();
	const78ptr = NULL;
}

void
cb_unput_dot (void)
{
	unput ('.');
}

void
cb_reset_78 (void)
{
	struct cb_level_78	*p78;
	struct cb_level_78	*p782;

	/* Remove constant (78 level) items for current program */
	for (p78 = lev78ptr; p78; ) {
		p782 = p78->next;
		cobc_free (p78);
		p78 = p782;
	}
	lev78ptr = NULL;
	for (p78 = globlev78ptr; p78; p78 = p78->next) {
		p78->not_const = 0;
	}
	if (globlev78ptr) {
		top78ptr = globlev78ptr;
	} else {
		top78ptr = const78ptr;
	}
}

void
cb_reset_global_78 (void)
{
	struct cb_level_78	*p78;
	struct cb_level_78	*p782;

	/* Remove constant (78 level) items for top program */
	for (p78 = globlev78ptr; p78; ) {
		p782 = p78->next;
		cobc_free (p78);
		p78 = p782;
	}
	globlev78ptr = NULL;
	top78ptr = const78ptr;
}

void
cb_add_78 (struct cb_field *f)
{
	struct cb_level_78	*p78;

	/* Add a constant (78 level) item */
	p78 = cobc_malloc (sizeof(struct cb_level_78));
	p78->fld78 = f;
	p78->prog = current_program;
	p78->pic_replace = check_78_replace (CB_VALUE(f->values));
	if (p78->pic_replace) {
		p78->pic_len = (cob_u32_t)strlen (p78->pic_replace);
	}
	p78->name_len = (cob_u32_t)strlen (f->name);
	if (f->flag_is_global) {
		if (!globlev78ptr) {
			p78->last = p78;
		} else {
			p78->last = globlev78ptr->last;
		}
		p78->last->globnext = const78ptr;
		p78->next = globlev78ptr;
		p78->globnext = globlev78ptr;
		p78->chk_const = 1;
		globlev78ptr = p78;
		if (lev78ptr) {
			lev78ptr->last->globnext = globlev78ptr;
		} else {
			top78ptr = globlev78ptr;
		}
	} else {
		if (!lev78ptr) {
			p78->last = p78;
		} else {
			p78->last = lev78ptr->last;
		}
		if (globlev78ptr) {
			p78->last->globnext = globlev78ptr;
		} else {
			p78->last->globnext = const78ptr;
		}
		p78->next = lev78ptr;
		p78->globnext = lev78ptr;
		lev78ptr = p78;
		top78ptr = lev78ptr;
	}
}

struct cb_field *
check_level_78 (const char *name)
{
	const struct cb_level_78	*p78;

	/* Check against a current constant (78 level) */
	for (p78 = lev78ptr; p78; p78 = p78->next) {
		if (strcasecmp (name, p78->fld78->name) == 0) {
			return p78->fld78;
		}
	}
	/* Check against a global constant (78 level) */
	for (p78 = globlev78ptr; p78; p78 = p78->next) {
		if (strcasecmp (name, p78->fld78->name) == 0) {
			return p78->fld78;
		}
	}
	return NULL;
}

/*
  Find program with the program-name name in defined_prog_list. If it is not
  there, return NULL.
*/
struct cb_program *
cb_find_defined_program_by_name (const char *name)
{
	int	(*cmp_func)(const char *, const char *);
	cb_tree	l;
	cb_tree	x;
	
	if (cb_fold_call) {
		cmp_func = &strcasecmp;
	} else {
		cmp_func = &strcmp;
	}
	
	for (l = defined_prog_list; l; l = CB_CHAIN (l)) {
		x = CB_VALUE (l);
		if ((*cmp_func)(name, CB_PROGRAM (x)->program_name) == 0) {
			return CB_PROGRAM (x);
		}
	}

	return NULL;
}

struct cb_program *
cb_find_defined_program_by_id (const char *orig_id)
{
	cb_tree	l;
	cb_tree	x;
	
	for (l = defined_prog_list; l; l = CB_CHAIN (l)) {
		x = CB_VALUE (l);
		if (strcmp (orig_id, CB_PROGRAM (x)->orig_program_id) == 0) {
			return CB_PROGRAM (x);
		}
	}

	return NULL;
}

#ifndef	HAVE_DESIGNATED_INITS
void
cobc_init_scanner (void)
{
	const unsigned char	*p;

	memset (valid_char, 0, sizeof(valid_char));
	for (p = pvalid_char; *p; ++p) {
		valid_char[*p] = 1;
	}
}
#endif
