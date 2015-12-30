/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 27 "parser.y" /* yacc.c:339  */

#include "config.h"

#include <stdlib.h>
#include <string.h>

#define	COB_IN_PARSER	1
#include "cobc.h"
#include "tree.h"

#ifndef	_STDLIB_H
#define	_STDLIB_H 1
#endif

#define YYSTYPE			cb_tree
#define yyerror			cb_error

#define PENDING(x)		cb_warning (_("'%s' not implemented"), x)

#define emit_statement(x) \
do { \
  if (!skip_statements) { \
	CB_ADD_TO_CHAIN (x, current_program->exec_list); \
  } \
} while (0)

#define push_expr(type, node) \
  current_expr = cb_build_list (cb_int (type), node, current_expr)

/* Statement terminator definitions */
#define TERM_NONE		0
#define TERM_ACCEPT		1U
#define TERM_ADD		2U
#define TERM_CALL		3U
#define TERM_COMPUTE		4U
#define TERM_DELETE		5U
#define TERM_DISPLAY		6U
#define TERM_DIVIDE		7U
#define TERM_EVALUATE		8U
#define TERM_IF			9U
#define TERM_MULTIPLY		10U
#define TERM_PERFORM		11U
#define TERM_READ		12U
#define TERM_RECEIVE		13U
#define TERM_RETURN		14U
#define TERM_REWRITE		15U
#define TERM_SEARCH		16U
#define TERM_START		17U
#define TERM_STRING		18U
#define TERM_SUBTRACT		19U
#define TERM_UNSTRING		20U
#define TERM_WRITE		21U
#define TERM_MAX		22U

#define	TERMINATOR_WARNING(x,z)	terminator_warning (x, TERM_##z, #z)
#define	TERMINATOR_ERROR(x,z)	terminator_error (x, TERM_##z, #z)
#define	TERMINATOR_CLEAR(x,z)	terminator_clear (x, TERM_##z)

/* Defines for duplicate checks */
/* Note - We use <= 16 for common item definitons and */
/* > 16 for non-common item definitions eg. REPORT and SCREEN */
#define	SYN_CLAUSE_1		(1U << 0)
#define	SYN_CLAUSE_2		(1U << 1)
#define	SYN_CLAUSE_3		(1U << 2)
#define	SYN_CLAUSE_4		(1U << 3)
#define	SYN_CLAUSE_5		(1U << 4)
#define	SYN_CLAUSE_6		(1U << 5)
#define	SYN_CLAUSE_7		(1U << 6)
#define	SYN_CLAUSE_8		(1U << 7)
#define	SYN_CLAUSE_9		(1U << 8)
#define	SYN_CLAUSE_10		(1U << 9)
#define	SYN_CLAUSE_11		(1U << 10)
#define	SYN_CLAUSE_12		(1U << 11)
#define	SYN_CLAUSE_13		(1U << 12)
#define	SYN_CLAUSE_14		(1U << 13)
#define	SYN_CLAUSE_15		(1U << 14)
#define	SYN_CLAUSE_16		(1U << 15)
#define	SYN_CLAUSE_17		(1U << 16)
#define	SYN_CLAUSE_18		(1U << 17)
#define	SYN_CLAUSE_19		(1U << 18)
#define	SYN_CLAUSE_20		(1U << 19)
#define	SYN_CLAUSE_21		(1U << 20)
#define	SYN_CLAUSE_22		(1U << 21)
#define	SYN_CLAUSE_23		(1U << 22)
#define	SYN_CLAUSE_24		(1U << 23)
#define	SYN_CLAUSE_25		(1U << 24)
#define	SYN_CLAUSE_26		(1U << 25)
#define	SYN_CLAUSE_27		(1U << 26)
#define	SYN_CLAUSE_28		(1U << 27)
#define	SYN_CLAUSE_29		(1U << 28)
#define	SYN_CLAUSE_30		(1U << 29)
#define	SYN_CLAUSE_31		(1U << 30)
#define	SYN_CLAUSE_32		(1U << 31)

#define	EVAL_DEPTH		32
#define	PROG_DEPTH		16

/* Global variables */

struct cb_program		*current_program = NULL;
struct cb_statement		*current_statement = NULL;
struct cb_label			*current_section = NULL;
struct cb_label			*current_paragraph = NULL;
char				*cobc_glob_line = NULL;
int				cb_exp_line = 0;

cb_tree				cobc_printer_node = NULL;
int				functions_are_all = 0;
int				non_const_word = 0;
unsigned int			cobc_in_procedure = 0;
unsigned int			cobc_in_repository = 0;
unsigned int			cobc_force_literal = 0;
unsigned int			cobc_cs_check = 0;

/* Local variables */

static struct cb_statement	*main_statement;

static cb_tree			current_expr;
static struct cb_field		*current_field;
static struct cb_field		*description_field;
static struct cb_file		*current_file;
static struct cb_report		*current_report;
static struct cb_report		*report_instance;

static struct cb_file		*linage_file;
static cb_tree			next_label_list;

static char			*stack_progid[PROG_DEPTH];

static enum cb_storage		current_storage;

static cb_tree			perform_stack;
static cb_tree			qualifier;

static cb_tree			save_tree;
static cb_tree			start_tree;

static unsigned int		check_unreached;
static unsigned int		in_declaratives;
static unsigned int		in_debugging;
static unsigned int		current_linage;
static unsigned int		report_count;
static unsigned int		prog_end;
static unsigned int		use_global_ind;
static unsigned int		samearea;
static unsigned int		inspect_keyword;
static unsigned int		main_flag_set;
static int			next_label_id;
static int			eval_level;
static int			eval_inc;
static int			eval_inc2;
static int			depth;
static int			call_mode;
static int			size_mode;
static int			setattr_val_on;
static int			setattr_val_off;
static unsigned int		check_duplicate;
static unsigned int		check_pic_duplicate;
static unsigned int		check_comp_duplicate;
static unsigned int		skip_statements;
static unsigned int		start_debug;
static unsigned int		save_debug;
static unsigned int		needs_field_debug;
static unsigned int		needs_debug_item;
static unsigned int		env_div_seen;
static unsigned int		header_check;

static int			term_array[TERM_MAX];
static cb_tree			eval_check[EVAL_DEPTH][EVAL_DEPTH];

/* Defines for header presence */

#define	COBC_HD_ENVIRONMENT_DIVISION	(1U << 0)
#define	COBC_HD_CONFIGURATION_SECTION	(1U << 1)
#define	COBC_HD_SPECIAL_NAMES		(1U << 2)
#define	COBC_HD_INPUT_OUTPUT_SECTION	(1U << 3)
#define	COBC_HD_FILE_CONTROL		(1U << 4)
#define	COBC_HD_I_O_CONTROL		(1U << 5)
#define	COBC_HD_DATA_DIVISION		(1U << 6)
#define	COBC_HD_FILE_SECTION		(1U << 7)
#define	COBC_HD_WORKING_STORAGE_SECTION	(1U << 8)
#define	COBC_HD_LOCAL_STORAGE_SECTION	(1U << 9)
#define	COBC_HD_LINKAGE_SECTION		(1U << 10)
#define	COBC_HD_COMMUNICATIONS_SECTION	(1U << 11)
#define	COBC_HD_REPORT_SECTION		(1U << 12)
#define	COBC_HD_SCREEN_SECTION		(1U << 13)
#define	COBC_HD_PROCEDURE_DIVISION	(1U << 14)
#define	COBC_HD_PROGRAM_ID		(1U << 15)

/* Static functions */

static void
begin_statement (const char *name, const unsigned int term)
{
	if (cb_warn_unreachable && check_unreached) {
		cb_warning (_("Unreachable statement '%s'"), name);
	}
	current_paragraph->flag_statement = 1;
	current_statement = cb_build_statement (name);
	CB_TREE (current_statement)->source_file = cb_source_file;
	CB_TREE (current_statement)->source_line = cb_source_line;
	current_statement->statement = cobc_glob_line;
	current_statement->flag_in_debug = in_debugging;
	emit_statement (CB_TREE (current_statement));
	if (term) {
		term_array[term]++;
	}
	main_statement = current_statement;
}

static void
begin_implicit_statement (void)
{
	current_statement = cb_build_statement (NULL);
	current_statement->flag_in_debug = !!in_debugging;
	main_statement->body = cb_list_add (main_statement->body,
					    CB_TREE (current_statement));
}

# if 0 /* activate only for debugging purposes for attribs */
static
void printBits(unsigned int num){
	unsigned int size = sizeof(unsigned int);
	unsigned int maxPow = 1<<(size*8-1);
	int i=0;

	for(;i<size*8;++i){
		// print last bit and shift left.
		fprintf(stderr, "%u ",num&maxPow ? 1 : 0);
		num = num<<1;
	}
	fprintf(stderr, "\n");
}
#endif

static void
emit_entry (const char *name, const int encode, cb_tree using_list)
{
	cb_tree		l;
	cb_tree		label;
	cb_tree		x;
	struct cb_field	*f;
	int		parmnum;
	char		buff[COB_MINI_BUFF];

	snprintf (buff, (size_t)COB_MINI_MAX, "E$%s", name);
	label = cb_build_label (cb_build_reference (buff), NULL);
	if (encode) {
		CB_LABEL (label)->name = cb_encode_program_id (name);
		CB_LABEL (label)->orig_name = name;
	} else {
		CB_LABEL (label)->name = name;
		CB_LABEL (label)->orig_name = current_program->orig_program_id;
	}
	CB_LABEL (label)->flag_begin = 1;
	CB_LABEL (label)->flag_entry = 1;
	label->source_file = cb_source_file;
	label->source_line = cb_source_line;
	emit_statement (label);

	if (current_program->flag_debugging) {
		emit_statement (cb_build_debug (cb_debug_contents,
						"START PROGRAM", NULL));
	}

	parmnum = 1;
	for (l = using_list; l; l = CB_CHAIN (l)) {
		x = CB_VALUE (l);
		if (CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
			f = CB_FIELD (cb_ref (x));
			if (f->level != 01 && f->level != 77) {
				cb_error_x (x, _("'%s' not level 01 or 77"), cb_name (x));
			}
			if (!current_program->flag_chained) {
				if (f->storage != CB_STORAGE_LINKAGE) {
					cb_error_x (x, _("'%s' is not in LINKAGE SECTION"), cb_name (x));
				}
				if (f->flag_item_based || f->flag_external) {
					cb_error_x (x, _("'%s' can not be BASED/EXTERNAL"), cb_name (x));
				}
				f->flag_is_pdiv_parm = 1;
			} else {
				if (f->storage != CB_STORAGE_WORKING) {
					cb_error_x (x, _("'%s' is not in WORKING-STORAGE SECTION"), cb_name (x));
				}
				f->flag_chained = 1;
				f->param_num = parmnum;
				parmnum++;
			}
			if (f->redefines) {
				cb_error_x (x, _("'%s' REDEFINES field not allowed here"), cb_name (x));
			}
		}
	}

	/* Check dangling LINKAGE items */
	if (cb_warn_linkage) {
		for (f = current_program->linkage_storage; f; f = f->sister) {
			if (current_program->returning) {
				if (cb_ref (current_program->returning) != cb_error_node) {
					if (f == CB_FIELD (cb_ref (current_program->returning))) {
						continue;
					}
				}
			}
			for (l = using_list; l; l = CB_CHAIN (l)) {
				x = CB_VALUE (l);
				if (CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
					if (f == CB_FIELD (cb_ref (x))) {
						break;
					}
				}
			}
			if (!l && !f->redefines) {
				cb_warning (_("LINKAGE item '%s' is not a PROCEDURE USING parameter"), f->name);
			}
		}
	}

	/* Check returning item against using items when FUNCTION */
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		for (l = using_list; l; l = CB_CHAIN (l)) {
			x = CB_VALUE (l);
			if (CB_VALID_TREE (x) && current_program->returning &&
			    cb_ref (x) == cb_ref (current_program->returning)) {
				cb_error_x (x, _("'%s' USING item duplicates RETURNING item"), cb_name (x));
			}
		}
	}

	for (l = current_program->entry_list; l; l = CB_CHAIN (l)) {
		if (strcmp ((const char *)name,
			    (const char *)(CB_LABEL(CB_PURPOSE(l))->name)) == 0) {
			cb_error_x (CB_TREE (current_statement),
				    _("ENTRY '%s' duplicated"), name);
		}
	}

	current_program->entry_list =
		cb_list_append (current_program->entry_list,
				CB_BUILD_PAIR (label, using_list));
}

static size_t
increment_depth (void)
{
	if (++depth >= PROG_DEPTH) {
		cb_error (_("Maximum nested program depth exceeded (%d)"),
			  PROG_DEPTH);
		return 1;
	}
	return 0;
}

static void
terminator_warning (cb_tree stmt, const unsigned int termid,
		    const char *name)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
		if (cb_warn_terminator) {
			cb_warning_x (stmt,
				_("%s statement not terminated by END-%s"),
				name, name);
		}
	}
	/* Free tree assocated with terminator */
	cobc_parse_free (stmt);
}

static void
terminator_error (cb_tree stmt, const unsigned int termid, const char *name)
{
	check_unreached = 0;
	cb_error_x (CB_TREE (current_statement),
			_("%s statement not terminated by END-%s"),
			name, name);
	if (term_array[termid]) {
		term_array[termid]--;
	}
	/* Free tree assocated with terminator */
	cobc_parse_free (stmt);
}

static void
terminator_clear (cb_tree stmt, const unsigned int termid)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
	}
	/* Free tree assocated with terminator */
	cobc_parse_free (stmt);
}

static int
literal_value (cb_tree x)
{
	if (x == cb_space) {
		return ' ';
	} else if (x == cb_zero) {
		return '0';
	} else if (x == cb_quote) {
		return cb_flag_apostrophe ? '\'' : '"';
	} else if (x == cb_null) {
		return 0;
	} else if (x == cb_low) {
		return 0;
	} else if (x == cb_high) {
		return 255;
	} else if (CB_TREE_CLASS (x) == CB_CLASS_NUMERIC) {
		return cb_get_int (x);
	} else {
		return CB_LITERAL (x)->data[0];
	}
}

static void
setup_use_file (struct cb_file *fileptr)
{
	struct cb_file	*newptr;

	if (fileptr->organization == COB_ORG_SORT) {
		cb_error (_("USE statement invalid for SORT file"));
	}
	if (fileptr->flag_global) {
		newptr = cobc_parse_malloc (sizeof(struct cb_file));
		*newptr = *fileptr;
		newptr->handler = current_section;
		newptr->handler_prog = current_program;
		if (!use_global_ind) {
			current_program->local_file_list =
				cb_list_add (current_program->local_file_list,
					     CB_TREE (newptr));
		} else {
			current_program->global_file_list =
				cb_list_add (current_program->global_file_list,
					     CB_TREE (newptr));
		}
	} else {
		fileptr->handler = current_section;
	}
}

static void
build_nested_special (const int ndepth)
{
	cb_tree		x;
	cb_tree		y;

	if (!ndepth) {
		return;
	}

	/* Inherit special name mnemonics from parent */
	for (x = current_program->mnemonic_spec_list; x; x = CB_CHAIN (x)) {
		y = cb_build_reference (cb_name(CB_PURPOSE(x)));
		if (CB_SYSTEM_NAME_P (CB_VALUE(x))) {
			cb_define (y, CB_VALUE(x));
		} else {
			cb_build_constant (y, CB_VALUE(x));
		}
	}
}

static void
clear_initial_values (void)
{
	perform_stack = NULL;
	current_statement = NULL;
	main_statement = NULL;
	qualifier = NULL;
	in_declaratives = 0;
	in_debugging = 0;
	use_global_ind = 0;
	check_duplicate = 0;
	check_pic_duplicate = 0;
	check_comp_duplicate = 0;
	skip_statements = 0;
	start_debug = 0;
	save_debug = 0;
	needs_field_debug = 0;
	needs_debug_item = 0;
	env_div_seen = 0;
	header_check = 0;
	next_label_id = 0;
	current_linage = 0;
	setattr_val_on = 0;
	setattr_val_off = 0;
	report_count = 0;
	current_storage = CB_STORAGE_WORKING;
	eval_level = 0;
	eval_inc = 0;
	eval_inc2 = 0;
	inspect_keyword = 0;
	check_unreached = 0;
	cobc_in_procedure = 0;
	cobc_in_repository = 0;
	cobc_force_literal = 0;
	non_const_word = 0;
	samearea = 1;
	memset ((void *)eval_check, 0, sizeof(eval_check));
	memset ((void *)term_array, 0, sizeof(term_array));
	linage_file = NULL;
	current_file = NULL;
	current_report = NULL;
	report_instance = NULL;
	next_label_list = NULL;
	if (cobc_glob_line) {
		cobc_free (cobc_glob_line);
		cobc_glob_line = NULL;
	}
}

static void
check_repeated (const char *clause, const unsigned int bitval)
{
	if (check_duplicate & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		check_duplicate |= bitval;
	}
}

static void
check_pic_repeated (const char *clause, const unsigned int bitval)
{
	if (check_pic_duplicate & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		check_pic_duplicate |= bitval;
	}
}

static void
check_comp_repeated (const char *clause, const unsigned int bitval)
{
	if (check_comp_duplicate & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		check_comp_duplicate |= bitval;
	}
}

static void
check_screen_attr (const char *clause, const int bitval)
{
	if (current_field->screen_flag & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		current_field->screen_flag |= bitval;
	}
}

static void
bit_set_attr (const cb_tree onoff, const int attrval)
{
	if (onoff == cb_int1) {
		setattr_val_on |= attrval;
	} else {
		setattr_val_off |= attrval;
	}
}

static void
check_attribs (cb_tree fgc, cb_tree bgc, cb_tree scroll,
	       cb_tree timeout, cb_tree prompt, cb_tree size_is, int attrib)
{
	/* Attach attribute to current_statement */
	if (!current_statement->attr_ptr) {
		current_statement->attr_ptr =
			cobc_parse_malloc (sizeof(struct cb_attr_struct));
	}
	/* [WITH] FOREGROUND-COLOR [IS] */
	if (fgc) {
		current_statement->attr_ptr->fgc = fgc;
	}
	/* [WITH] BACKGROUND-COLOR [IS] */
	if (bgc) {
		current_statement->attr_ptr->bgc = bgc;
	}
	/* [WITH] SCROLL UP | DOWN */
	if (scroll) {
		current_statement->attr_ptr->scroll = scroll;
	}
	/* [WITH] TIMEOUT [AFTER] */
	if (timeout) {
		current_statement->attr_ptr->timeout = timeout;
	}
	/* [WITH] PROMPT CHARACTER [IS] */
	if (prompt) {
		current_statement->attr_ptr->prompt = prompt;
	}
	/* [WITH] SIZE [IS] */
	if (size_is) {
		current_statement->attr_ptr->size_is = size_is;
	}
	/* Attribute */
	current_statement->attr_ptr->dispattrs |= attrib;
}

static void
remove_attrib (int attrib)
{
	/* Remove attribute from current_statement */
	if (!current_statement->attr_ptr) {
		return;
	}
	current_statement->attr_ptr->dispattrs ^= attrib;
}

static void
check_set_usage (const enum cb_usage usage)
{
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	current_field->usage = usage;
}

static void
check_relaxed_syntax (const unsigned int lev)
{
	const char	*s;

	switch (lev) {
	case COBC_HD_ENVIRONMENT_DIVISION:
		s = "ENVIRONMENT DIVISION";
		break;
	case COBC_HD_CONFIGURATION_SECTION:
		s = "CONFIGURATION SECTION";
		break;
	case COBC_HD_SPECIAL_NAMES:
		s = "SPECIAL-NAMES";
		break;
	case COBC_HD_INPUT_OUTPUT_SECTION:
		s = "INPUT-OUTPUT SECTION";
		break;
	case COBC_HD_FILE_CONTROL:
		s = "FILE-CONTROL";
		break;
	case COBC_HD_I_O_CONTROL:
		s = "I-O-CONTROL";
		break;
	case COBC_HD_DATA_DIVISION:
		s = "DATA DIVISION";
		break;
	case COBC_HD_FILE_SECTION:
		s = "FILE SECTION";
		break;
	case COBC_HD_WORKING_STORAGE_SECTION:
		s = "WORKING-STORAGE SECTION";
		break;
	case COBC_HD_LOCAL_STORAGE_SECTION:
		s = "LOCAL-STORAGE SECTION";
		break;
	case COBC_HD_LINKAGE_SECTION:
		s = "LINKAGE SECTION";
		break;
	case COBC_HD_COMMUNICATIONS_SECTION:
		s = "COMMUNICATIONS SECTION";
		break;
	case COBC_HD_REPORT_SECTION:
		s = "REPORT SECTION";
		break;
	case COBC_HD_SCREEN_SECTION:
		s = "SCREEN SECTION";
		break;
	case COBC_HD_PROCEDURE_DIVISION:
		s = "PROCEDURE DIVISION";
		break;
	case COBC_HD_PROGRAM_ID:
		s = "PROGRAM-ID";
		break;
	default:
		s = "Unknown";
		break;
	}
	if (cb_relaxed_syntax_check) {
		cb_warning (_("%s header missing - assumed"), s);
	} else {
		cb_error (_("%s header missing"), s);
	}
}

static void
check_headers_present (const unsigned int lev1, const unsigned int lev2,
		       const unsigned int lev3, const unsigned int lev4)
{
	/* Lev1 is always present and checked */
	/* Lev2/3/4, if non-zero (forced) may be present */
	if (!(header_check & lev1)) {
		header_check |= lev1;
		check_relaxed_syntax (lev1);
	}
	if (lev2) {
		if (!(header_check & lev2)) {
			header_check |= lev2;
			check_relaxed_syntax (lev2);
		}
	}
	if (lev3) {
		if (!(header_check & lev3)) {
			header_check |= lev3;
			check_relaxed_syntax (lev3);
		}
	}
	if (lev4) {
		if (!(header_check & lev4)) {
			header_check |= lev4;
			check_relaxed_syntax (lev4);
		}
	}
}

static int
has_relative_pos (struct cb_field const *field)
{
	return !!(field->screen_flag
		& (COB_SCREEN_LINE_PLUS | COB_SCREEN_LINE_MINUS
		   | COB_SCREEN_COLUMN_PLUS | COB_SCREEN_COLUMN_MINUS));
}


#line 807 "parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_EOF = 0,
    ACCEPT = 258,
    ACCESS = 259,
    ADD = 260,
    ADDRESS = 261,
    ADVANCING = 262,
    AFTER = 263,
    ALL = 264,
    ALLOCATE = 265,
    ALPHABET = 266,
    ALPHABETIC = 267,
    ALPHABETIC_LOWER = 268,
    ALPHABETIC_UPPER = 269,
    ALPHANUMERIC = 270,
    ALPHANUMERIC_EDITED = 271,
    ALSO = 272,
    ALTER = 273,
    ALTERNATE = 274,
    AND = 275,
    ANY = 276,
    ARE = 277,
    AREA = 278,
    ARGUMENT_NUMBER = 279,
    ARGUMENT_VALUE = 280,
    AS = 281,
    ASCENDING = 282,
    ASCII = 283,
    ASSIGN = 284,
    AT = 285,
    ATTRIBUTE = 286,
    AUTO = 287,
    AUTOMATIC = 288,
    AWAY_FROM_ZERO = 289,
    BACKGROUND_COLOR = 290,
    BASED = 291,
    BEFORE = 292,
    BELL = 293,
    BINARY = 294,
    BINARY_C_LONG = 295,
    BINARY_CHAR = 296,
    BINARY_DOUBLE = 297,
    BINARY_LONG = 298,
    BINARY_SHORT = 299,
    BLANK = 300,
    BLINK = 301,
    BLOCK = 302,
    BOTTOM = 303,
    BY = 304,
    BYTE_LENGTH = 305,
    CALL = 306,
    CANCEL = 307,
    CAPACITY = 308,
    CF = 309,
    CH = 310,
    CHAINING = 311,
    CHARACTER = 312,
    CHARACTERS = 313,
    CLASS = 314,
    CLASSIFICATION = 315,
    CLOSE = 316,
    CODE = 317,
    CODE_SET = 318,
    COLLATING = 319,
    COL = 320,
    COLS = 321,
    COLUMN = 322,
    COLUMNS = 323,
    COMMA = 324,
    COMMAND_LINE = 325,
    COMMA_DELIM = 326,
    COMMIT = 327,
    COMMON = 328,
    COMP = 329,
    COMPUTE = 330,
    COMP_1 = 331,
    COMP_2 = 332,
    COMP_3 = 333,
    COMP_4 = 334,
    COMP_5 = 335,
    COMP_6 = 336,
    COMP_X = 337,
    CONCATENATE_FUNC = 338,
    CONDITION = 339,
    CONFIGURATION = 340,
    CONSTANT = 341,
    CONTAINS = 342,
    CONTENT = 343,
    CONTINUE = 344,
    CONTROL = 345,
    CONTROLS = 346,
    CONVERSION = 347,
    CONVERTING = 348,
    COPY = 349,
    CORRESPONDING = 350,
    COUNT = 351,
    CRT = 352,
    CRT_UNDER = 353,
    CURRENCY = 354,
    CURRENT_DATE_FUNC = 355,
    CURSOR = 356,
    CYCLE = 357,
    DATA = 358,
    DATE = 359,
    DAY = 360,
    DAY_OF_WEEK = 361,
    DE = 362,
    DEBUGGING = 363,
    DECIMAL_POINT = 364,
    DECLARATIVES = 365,
    DEFAULT = 366,
    DELETE = 367,
    DELIMITED = 368,
    DELIMITER = 369,
    DEPENDING = 370,
    DESCENDING = 371,
    DETAIL = 372,
    DISC = 373,
    DISK = 374,
    DISPLAY = 375,
    DISPLAY_OF_FUNC = 376,
    DIVIDE = 377,
    DIVISION = 378,
    DOWN = 379,
    DUPLICATES = 380,
    DYNAMIC = 381,
    EBCDIC = 382,
    EC = 383,
    ELSE = 384,
    END = 385,
    END_ACCEPT = 386,
    END_ADD = 387,
    END_CALL = 388,
    END_COMPUTE = 389,
    END_DELETE = 390,
    END_DISPLAY = 391,
    END_DIVIDE = 392,
    END_EVALUATE = 393,
    END_FUNCTION = 394,
    END_IF = 395,
    END_MULTIPLY = 396,
    END_PERFORM = 397,
    END_PROGRAM = 398,
    END_READ = 399,
    END_RETURN = 400,
    END_REWRITE = 401,
    END_SEARCH = 402,
    END_START = 403,
    END_STRING = 404,
    END_SUBTRACT = 405,
    END_UNSTRING = 406,
    END_WRITE = 407,
    ENTRY = 408,
    ENVIRONMENT = 409,
    ENVIRONMENT_NAME = 410,
    ENVIRONMENT_VALUE = 411,
    EOL = 412,
    EOP = 413,
    EOS = 414,
    EQUAL = 415,
    ERASE = 416,
    ERROR = 417,
    ESCAPE = 418,
    EVALUATE = 419,
    EVENT_STATUS = 420,
    EXCEPTION = 421,
    EXCEPTION_CONDITION = 422,
    EXCLUSIVE = 423,
    EXIT = 424,
    EXPONENTIATION = 425,
    EXTEND = 426,
    EXTERNAL = 427,
    FD = 428,
    FILE_CONTROL = 429,
    FILE_ID = 430,
    FILLER = 431,
    FINAL = 432,
    FIRST = 433,
    FLOAT_BINARY_128 = 434,
    FLOAT_BINARY_32 = 435,
    FLOAT_BINARY_64 = 436,
    FLOAT_DECIMAL_16 = 437,
    FLOAT_DECIMAL_34 = 438,
    FLOAT_DECIMAL_7 = 439,
    FLOAT_EXTENDED = 440,
    FLOAT_LONG = 441,
    FLOAT_SHORT = 442,
    FOOTING = 443,
    FOR = 444,
    FOREGROUND_COLOR = 445,
    FOREVER = 446,
    FORMATTED_DATE_FUNC = 447,
    FORMATTED_DATETIME_FUNC = 448,
    FORMATTED_TIME_FUNC = 449,
    FREE = 450,
    FROM = 451,
    FROM_CRT = 452,
    FULL = 453,
    FUNCTION = 454,
    FUNCTION_ID = 455,
    FUNCTION_NAME = 456,
    GENERATE = 457,
    GIVING = 458,
    GLOBAL = 459,
    GO = 460,
    GOBACK = 461,
    GREATER = 462,
    GREATER_OR_EQUAL = 463,
    GROUP = 464,
    HEADING = 465,
    HIGHLIGHT = 466,
    HIGH_VALUE = 467,
    ID = 468,
    IDENTIFICATION = 469,
    IF = 470,
    IGNORE = 471,
    IGNORING = 472,
    IN = 473,
    INDEX = 474,
    INDEXED = 475,
    INDICATE = 476,
    INITIALIZE = 477,
    INITIALIZED = 478,
    INITIATE = 479,
    INPUT = 480,
    INPUT_OUTPUT = 481,
    INSPECT = 482,
    INTO = 483,
    INTRINSIC = 484,
    INVALID = 485,
    INVALID_KEY = 486,
    IS = 487,
    I_O = 488,
    I_O_CONTROL = 489,
    JUSTIFIED = 490,
    KEPT = 491,
    KEY = 492,
    KEYBOARD = 493,
    LABEL = 494,
    LAST = 495,
    LEADING = 496,
    LEFT = 497,
    LEFTLINE = 498,
    LENGTH = 499,
    LENGTH_OF = 500,
    LESS = 501,
    LESS_OR_EQUAL = 502,
    LIMIT = 503,
    LIMITS = 504,
    LINAGE = 505,
    LINAGE_COUNTER = 506,
    LINE = 507,
    LINE_COUNTER = 508,
    LINES = 509,
    LINKAGE = 510,
    LITERAL = 511,
    LOCALE = 512,
    LOCALE_DATE_FUNC = 513,
    LOCALE_TIME_FUNC = 514,
    LOCALE_TIME_FROM_FUNC = 515,
    LOCAL_STORAGE = 516,
    LOCK = 517,
    LOWER = 518,
    LOWER_CASE_FUNC = 519,
    LOWLIGHT = 520,
    LOW_VALUE = 521,
    MANUAL = 522,
    MEMORY = 523,
    MERGE = 524,
    MINUS = 525,
    MNEMONIC_NAME = 526,
    MODE = 527,
    MOVE = 528,
    MULTIPLE = 529,
    MULTIPLY = 530,
    NAME = 531,
    NATIONAL = 532,
    NATIONAL_EDITED = 533,
    NATIONAL_OF_FUNC = 534,
    NATIVE = 535,
    NEAREST_AWAY_FROM_ZERO = 536,
    NEAREST_EVEN = 537,
    NEAREST_TOWARD_ZERO = 538,
    NEGATIVE = 539,
    NEXT = 540,
    NEXT_PAGE = 541,
    NO = 542,
    NO_ECHO = 543,
    NORMAL = 544,
    NOT = 545,
    NOT_END = 546,
    NOT_EOP = 547,
    NOT_ESCAPE = 548,
    NOT_EQUAL = 549,
    NOT_EXCEPTION = 550,
    NOT_INVALID_KEY = 551,
    NOT_OVERFLOW = 552,
    NOT_SIZE_ERROR = 553,
    NO_ADVANCING = 554,
    NUMBER = 555,
    NUMBERS = 556,
    NUMERIC = 557,
    NUMERIC_EDITED = 558,
    NUMVALC_FUNC = 559,
    OBJECT_COMPUTER = 560,
    OCCURS = 561,
    OF = 562,
    OFF = 563,
    OMITTED = 564,
    ON = 565,
    ONLY = 566,
    OPEN = 567,
    OPTIONAL = 568,
    OR = 569,
    ORDER = 570,
    ORGANIZATION = 571,
    OTHER = 572,
    OUTPUT = 573,
    OVERLINE = 574,
    PACKED_DECIMAL = 575,
    PADDING = 576,
    PAGE = 577,
    PAGE_COUNTER = 578,
    PARAGRAPH = 579,
    PERFORM = 580,
    PH = 581,
    PF = 582,
    PICTURE = 583,
    PICTURE_SYMBOL = 584,
    PLUS = 585,
    POINTER = 586,
    POSITION = 587,
    POSITIVE = 588,
    PRESENT = 589,
    PREVIOUS = 590,
    PRINTER = 591,
    PRINTING = 592,
    PROCEDURE = 593,
    PROCEDURES = 594,
    PROCEED = 595,
    PROGRAM = 596,
    PROGRAM_ID = 597,
    PROGRAM_NAME = 598,
    PROGRAM_POINTER = 599,
    PROHIBITED = 600,
    PROMPT = 601,
    PROTECTED = 602,
    QUOTE = 603,
    RANDOM = 604,
    RD = 605,
    READ = 606,
    READY_TRACE = 607,
    RECORD = 608,
    RECORDING = 609,
    RECORDS = 610,
    RECURSIVE = 611,
    REDEFINES = 612,
    REEL = 613,
    REFERENCE = 614,
    REFERENCES = 615,
    RELATIVE = 616,
    RELEASE = 617,
    REMAINDER = 618,
    REMOVAL = 619,
    RENAMES = 620,
    REPLACE = 621,
    REPLACING = 622,
    REPORT = 623,
    REPORTING = 624,
    REPORTS = 625,
    REPOSITORY = 626,
    REPO_FUNCTION = 627,
    REQUIRED = 628,
    RESERVE = 629,
    RESET = 630,
    RESET_TRACE = 631,
    RETURN = 632,
    RETURNING = 633,
    REVERSE_FUNC = 634,
    REVERSE_VIDEO = 635,
    REVERSED = 636,
    REWIND = 637,
    REWRITE = 638,
    RF = 639,
    RH = 640,
    RIGHT = 641,
    ROLLBACK = 642,
    ROUNDED = 643,
    RUN = 644,
    SAME = 645,
    SCREEN = 646,
    SCREEN_CONTROL = 647,
    SCROLL = 648,
    SD = 649,
    SEARCH = 650,
    SECTION = 651,
    SECURE = 652,
    SEGMENT_LIMIT = 653,
    SELECT = 654,
    SEMI_COLON = 655,
    SENTENCE = 656,
    SEPARATE = 657,
    SEQUENCE = 658,
    SEQUENTIAL = 659,
    SET = 660,
    SHARING = 661,
    SIGN = 662,
    SIGNED = 663,
    SIGNED_INT = 664,
    SIGNED_LONG = 665,
    SIGNED_SHORT = 666,
    SIZE = 667,
    SIZE_ERROR = 668,
    SORT = 669,
    SORT_MERGE = 670,
    SOURCE = 671,
    SOURCE_COMPUTER = 672,
    SPACE = 673,
    SPECIAL_NAMES = 674,
    STANDARD = 675,
    STANDARD_1 = 676,
    STANDARD_2 = 677,
    START = 678,
    STATIC = 679,
    STATUS = 680,
    STDCALL = 681,
    STEP = 682,
    STOP = 683,
    STRING = 684,
    SUBSTITUTE_FUNC = 685,
    SUBSTITUTE_CASE_FUNC = 686,
    SUBTRACT = 687,
    SUM = 688,
    SUPPRESS = 689,
    SYMBOLIC = 690,
    SYNCHRONIZED = 691,
    SYSTEM_DEFAULT = 692,
    SYSTEM_OFFSET = 693,
    TAB = 694,
    TALLYING = 695,
    TAPE = 696,
    TERMINATE = 697,
    TEST = 698,
    THAN = 699,
    THEN = 700,
    THRU = 701,
    TIME = 702,
    TIMEOUT = 703,
    TIMES = 704,
    TO = 705,
    TOK_AMPER = 706,
    TOK_CLOSE_PAREN = 707,
    TOK_COLON = 708,
    TOK_DIV = 709,
    TOK_DOT = 710,
    TOK_EQUAL = 711,
    TOK_FALSE = 712,
    TOK_FILE = 713,
    TOK_GREATER = 714,
    TOK_INITIAL = 715,
    TOK_LESS = 716,
    TOK_MINUS = 717,
    TOK_MUL = 718,
    TOK_NULL = 719,
    TOK_OVERFLOW = 720,
    TOK_OPEN_PAREN = 721,
    TOK_PLUS = 722,
    TOK_TRUE = 723,
    TOP = 724,
    TOWARD_GREATER = 725,
    TOWARD_LESSER = 726,
    TRAILING = 727,
    TRANSFORM = 728,
    TRIM_FUNC = 729,
    TRUNCATION = 730,
    TYPE = 731,
    UNDERLINE = 732,
    UNIT = 733,
    UNLOCK = 734,
    UNSIGNED = 735,
    UNSIGNED_INT = 736,
    UNSIGNED_LONG = 737,
    UNSIGNED_SHORT = 738,
    UNSTRING = 739,
    UNTIL = 740,
    UP = 741,
    UPDATE = 742,
    UPON = 743,
    UPON_ARGUMENT_NUMBER = 744,
    UPON_COMMAND_LINE = 745,
    UPON_ENVIRONMENT_NAME = 746,
    UPON_ENVIRONMENT_VALUE = 747,
    UPPER = 748,
    UPPER_CASE_FUNC = 749,
    USAGE = 750,
    USE = 751,
    USER = 752,
    USER_DEFAULT = 753,
    USER_FUNCTION_NAME = 754,
    USER_REPO_FUNCTION = 755,
    USING = 756,
    VALUE = 757,
    VARYING = 758,
    WAIT = 759,
    WHEN = 760,
    WHEN_COMPILED_FUNC = 761,
    WITH = 762,
    WORD = 763,
    WORDS = 764,
    WORKING_STORAGE = 765,
    WRITE = 766,
    YYYYDDD = 767,
    YYYYMMDD = 768,
    ZERO = 769,
    SHIFT_PREFER = 770
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 1375 "parser.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8713

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  516
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  821
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1916
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2753

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   770

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1390,  1390,  1390,  1422,  1423,  1427,  1428,  1432,  1433,
    1437,  1437,  1460,  1467,  1474,  1480,  1481,  1482,  1486,  1487,
    1491,  1515,  1516,  1520,  1554,  1560,  1572,  1546,  1582,  1581,
    1619,  1651,  1652,  1656,  1657,  1660,  1661,  1665,  1674,  1683,
    1684,  1688,  1692,  1701,  1702,  1710,  1711,  1721,  1722,  1726,
    1727,  1728,  1729,  1730,  1737,  1736,  1749,  1750,  1753,  1754,
    1768,  1767,  1777,  1778,  1779,  1780,  1784,  1785,  1789,  1790,
    1791,  1792,  1796,  1803,  1810,  1817,  1828,  1832,  1836,  1840,
    1847,  1848,  1855,  1854,  1865,  1866,  1867,  1874,  1875,  1879,
    1883,  1895,  1899,  1900,  1905,  1908,  1915,  1920,  1931,  1944,
    1945,  1953,  1954,  1958,  1959,  1960,  1961,  1962,  1963,  1964,
    1965,  1966,  1967,  1968,  1969,  1977,  1976,  2004,  2014,  2027,
    2035,  2038,  2039,  2043,  2058,  2079,  2078,  2102,  2108,  2114,
    2120,  2126,  2132,  2142,  2146,  2153,  2157,  2162,  2161,  2172,
    2176,  2183,  2184,  2185,  2186,  2187,  2188,  2192,  2193,  2200,
    2215,  2218,  2225,  2233,  2237,  2248,  2268,  2276,  2287,  2288,
    2294,  2315,  2316,  2320,  2324,  2345,  2368,  2450,  2453,  2462,
    2481,  2497,  2515,  2533,  2550,  2566,  2567,  2574,  2575,  2583,
    2584,  2594,  2595,  2600,  2599,  2620,  2630,  2631,  2635,  2636,
    2637,  2638,  2639,  2640,  2641,  2642,  2643,  2644,  2645,  2646,
    2647,  2654,  2660,  2670,  2683,  2696,  2712,  2713,  2714,  2715,
    2718,  2719,  2725,  2726,  2730,  2734,  2735,  2740,  2743,  2744,
    2751,  2759,  2760,  2761,  2768,  2792,  2794,  2799,  2809,  2820,
    2827,  2829,  2830,  2836,  2836,  2843,  2848,  2853,  2860,  2861,
    2862,  2866,  2877,  2878,  2882,  2887,  2892,  2897,  2908,  2919,
    2929,  2937,  2938,  2939,  2945,  2956,  2963,  2964,  2970,  2978,
    2979,  2980,  2986,  2987,  2988,  2995,  2996,  3000,  3001,  3007,
    3035,  3036,  3037,  3038,  3045,  3044,  3060,  3061,  3065,  3068,
    3069,  3075,  3076,  3084,  3085,  3093,  3094,  3098,  3119,  3118,
    3135,  3142,  3146,  3152,  3153,  3157,  3167,  3182,  3183,  3184,
    3185,  3186,  3187,  3188,  3189,  3190,  3197,  3204,  3204,  3204,
    3210,  3230,  3264,  3295,  3296,  3303,  3304,  3308,  3309,  3316,
    3327,  3332,  3343,  3344,  3348,  3349,  3355,  3366,  3384,  3385,
    3389,  3390,  3391,  3395,  3402,  3409,  3418,  3430,  3482,  3497,
    3498,  3502,  3512,  3551,  3553,  3552,  3568,  3571,  3571,  3588,
    3589,  3591,  3595,  3597,  3596,  3631,  3644,  3652,  3657,  3663,
    3672,  3682,  3685,  3697,  3698,  3699,  3700,  3704,  3708,  3712,
    3716,  3720,  3724,  3728,  3732,  3736,  3740,  3744,  3748,  3752,
    3763,  3764,  3768,  3769,  3773,  3774,  3775,  3779,  3780,  3784,
    3810,  3814,  3823,  3827,  3836,  3837,  3838,  3839,  3840,  3841,
    3842,  3843,  3844,  3845,  3846,  3847,  3848,  3849,  3856,  3880,
    3908,  3911,  3920,  3945,  3956,  3957,  3961,  3965,  3969,  3973,
    3977,  3981,  3985,  3989,  3993,  3997,  4001,  4005,  4009,  4014,
    4019,  4023,  4027,  4035,  4039,  4043,  4051,  4055,  4059,  4063,
    4067,  4071,  4075,  4079,  4083,  4091,  4099,  4103,  4107,  4111,
    4115,  4119,  4127,  4128,  4132,  4133,  4139,  4145,  4157,  4175,
    4176,  4185,  4206,  4227,  4228,  4232,  4233,  4236,  4237,  4243,
    4244,  4251,  4252,  4259,  4283,  4284,  4301,  4302,  4305,  4306,
    4313,  4314,  4319,  4330,  4341,  4352,  4363,  4392,  4391,  4400,
    4401,  4405,  4406,  4409,  4410,  4423,  4436,  4457,  4466,  4480,
    4482,  4481,  4501,  4503,  4502,  4518,  4520,  4519,  4528,  4529,
    4536,  4535,  4548,  4549,  4550,  4557,  4562,  4566,  4567,  4573,
    4580,  4584,  4585,  4591,  4628,  4632,  4637,  4643,  4644,  4649,
    4650,  4651,  4652,  4653,  4657,  4664,  4671,  4678,  4685,  4691,
    4692,  4697,  4696,  4703,  4704,  4708,  4709,  4710,  4711,  4712,
    4713,  4714,  4715,  4716,  4717,  4718,  4719,  4720,  4721,  4722,
    4723,  4727,  4734,  4735,  4736,  4737,  4738,  4739,  4740,  4743,
    4744,  4745,  4748,  4749,  4753,  4760,  4766,  4767,  4771,  4772,
    4776,  4783,  4787,  4794,  4795,  4799,  4806,  4807,  4811,  4812,
    4816,  4817,  4818,  4822,  4823,  4827,  4828,  4832,  4839,  4846,
    4854,  4856,  4855,  4876,  4877,  4881,  4882,  4886,  4888,  4887,
    4947,  4965,  4966,  4970,  4974,  4978,  4982,  4986,  4990,  4994,
    4998,  5002,  5006,  5010,  5015,  5020,  5024,  5028,  5032,  5036,
    5041,  5045,  5049,  5054,  5059,  5064,  5069,  5070,  5071,  5072,
    5073,  5074,  5075,  5076,  5077,  5084,  5089,  5098,  5099,  5103,
    5104,  5109,  5112,  5116,  5124,  5127,  5131,  5139,  5150,  5158,
    5160,  5170,  5159,  5197,  5197,  5230,  5234,  5233,  5247,  5246,
    5266,  5267,  5272,  5287,  5289,  5293,  5303,  5305,  5313,  5321,
    5329,  5358,  5391,  5394,  5407,  5412,  5439,  5441,  5440,  5477,
    5478,  5482,  5483,  5484,  5501,  5502,  5513,  5512,  5562,  5563,
    5567,  5615,  5628,  5631,  5650,  5655,  5649,  5668,  5668,  5698,
    5705,  5706,  5707,  5708,  5709,  5710,  5711,  5712,  5713,  5714,
    5715,  5716,  5717,  5718,  5719,  5720,  5721,  5722,  5723,  5724,
    5725,  5726,  5727,  5728,  5729,  5730,  5731,  5732,  5733,  5734,
    5735,  5736,  5737,  5738,  5739,  5740,  5741,  5742,  5743,  5744,
    5745,  5746,  5747,  5748,  5749,  5750,  5751,  5752,  5753,  5754,
    5768,  5780,  5779,  5795,  5801,  5805,  5809,  5814,  5819,  5824,
    5829,  5833,  5837,  5841,  5845,  5850,  5854,  5858,  5862,  5866,
    5870,  5874,  5881,  5882,  5889,  5890,  5894,  5895,  5899,  5900,
    5901,  5902,  5903,  5907,  5911,  5912,  5915,  5916,  5919,  5920,
    5926,  5927,  5931,  5932,  5936,  5940,  5946,  5950,  5954,  5958,
    5962,  5966,  5970,  5974,  5978,  5982,  5986,  5990,  5994,  5998,
    6002,  6006,  6010,  6014,  6018,  6024,  6028,  6032,  6036,  6040,
    6044,  6048,  6055,  6056,  6060,  6064,  6082,  6081,  6090,  6094,
    6098,  6104,  6105,  6112,  6116,  6127,  6126,  6135,  6139,  6151,
    6152,  6160,  6159,  6168,  6169,  6173,  6179,  6179,  6186,  6185,
    6195,  6215,  6219,  6224,  6229,  6250,  6254,  6253,  6270,  6271,
    6276,  6284,  6308,  6310,  6314,  6323,  6336,  6339,  6343,  6347,
    6370,  6371,  6375,  6376,  6381,  6384,  6392,  6396,  6404,  6408,
    6419,  6418,  6426,  6430,  6441,  6440,  6448,  6453,  6461,  6462,
    6463,  6464,  6465,  6473,  6472,  6481,  6488,  6492,  6502,  6513,
    6531,  6530,  6539,  6543,  6547,  6552,  6560,  6564,  6575,  6574,
    6584,  6588,  6592,  6596,  6600,  6604,  6605,  6614,  6616,  6615,
    6623,  6632,  6639,  6643,  6647,  6651,  6661,  6663,  6667,  6668,
    6671,  6673,  6680,  6681,  6685,  6686,  6691,  6695,  6699,  6703,
    6707,  6711,  6715,  6719,  6723,  6727,  6731,  6735,  6739,  6743,
    6747,  6751,  6755,  6762,  6766,  6777,  6776,  6785,  6789,  6793,
    6797,  6801,  6808,  6812,  6823,  6822,  6831,  6850,  6849,  6873,
    6881,  6882,  6887,  6898,  6909,  6923,  6927,  6934,  6935,  6940,
    6949,  6958,  6963,  6972,  6973,  6978,  7040,  7041,  7042,  7046,
    7047,  7051,  7055,  7066,  7065,  7077,  7078,  7099,  7113,  7135,
    7157,  7177,  7200,  7201,  7209,  7208,  7217,  7228,  7227,  7237,
    7244,  7243,  7256,  7265,  7269,  7280,  7296,  7295,  7304,  7308,
    7312,  7319,  7323,  7334,  7333,  7341,  7349,  7350,  7354,  7355,
    7356,  7361,  7364,  7371,  7375,  7383,  7390,  7391,  7392,  7393,
    7394,  7395,  7396,  7401,  7404,  7414,  7413,  7422,  7428,  7440,
    7439,  7448,  7452,  7456,  7460,  7467,  7468,  7469,  7470,  7477,
    7476,  7490,  7500,  7509,  7510,  7514,  7515,  7516,  7517,  7518,
    7519,  7523,  7524,  7528,  7533,  7540,  7541,  7542,  7543,  7544,
    7548,  7576,  7579,  7586,  7590,  7600,  7599,  7612,  7611,  7619,
    7623,  7634,  7633,  7642,  7646,  7653,  7657,  7668,  7667,  7675,
    7696,  7720,  7721,  7722,  7723,  7727,  7728,  7732,  7733,  7734,
    7735,  7747,  7746,  7757,  7763,  7762,  7773,  7781,  7789,  7796,
    7800,  7813,  7820,  7832,  7835,  7840,  7844,  7855,  7862,  7863,
    7867,  7868,  7871,  7872,  7877,  7888,  7887,  7896,  7923,  7924,
    7929,  7932,  7936,  7940,  7944,  7948,  7952,  7959,  7960,  7964,
    7965,  7969,  7973,  7983,  7994,  7993,  8001,  8011,  8022,  8021,
    8030,  8037,  8041,  8052,  8051,  8063,  8072,  8075,  8079,  8086,
    8090,  8100,  8112,  8111,  8120,  8124,  8133,  8134,  8139,  8142,
    8150,  8154,  8161,  8169,  8173,  8184,  8183,  8197,  8198,  8199,
    8200,  8201,  8202,  8206,  8207,  8211,  8212,  8218,  8227,  8234,
    8235,  8239,  8243,  8247,  8251,  8255,  8259,  8263,  8267,  8276,
    8280,  8289,  8298,  8299,  8303,  8312,  8313,  8317,  8321,  8332,
    8331,  8340,  8339,  8370,  8373,  8393,  8394,  8397,  8398,  8406,
    8407,  8412,  8417,  8427,  8443,  8448,  8458,  8475,  8474,  8484,
    8497,  8500,  8508,  8511,  8516,  8521,  8529,  8530,  8531,  8532,
    8533,  8534,  8538,  8546,  8547,  8551,  8555,  8566,  8565,  8575,
    8588,  8591,  8595,  8603,  8615,  8618,  8625,  8626,  8627,  8628,
    8635,  8634,  8643,  8650,  8651,  8655,  8656,  8657,  8661,  8662,
    8666,  8670,  8681,  8680,  8689,  8693,  8697,  8704,  8708,  8718,
    8729,  8730,  8737,  8736,  8745,  8751,  8763,  8762,  8770,  8784,
    8783,  8791,  8804,  8806,  8807,  8815,  8814,  8823,  8831,  8832,
    8837,  8838,  8843,  8850,  8851,  8856,  8863,  8864,  8868,  8869,
    8873,  8874,  8878,  8882,  8893,  8892,  8901,  8902,  8903,  8904,
    8905,  8909,  8936,  8939,  8951,  8961,  8966,  8971,  8976,  8984,
    9022,  9023,  9027,  9067,  9077,  9100,  9101,  9102,  9103,  9107,
    9116,  9122,  9132,  9141,  9150,  9151,  9158,  9157,  9169,  9179,
    9180,  9185,  9188,  9192,  9196,  9203,  9204,  9208,  9209,  9213,
    9217,  9229,  9232,  9233,  9242,  9243,  9247,  9248,  9257,  9258,
    9262,  9265,  9266,  9275,  9276,  9287,  9290,  9291,  9300,  9301,
    9313,  9316,  9318,  9328,  9329,  9341,  9342,  9346,  9347,  9348,
    9352,  9361,  9372,  9373,  9374,  9378,  9387,  9398,  9403,  9404,
    9413,  9414,  9425,  9429,  9439,  9446,  9453,  9453,  9464,  9465,
    9466,  9470,  9479,  9480,  9482,  9483,  9484,  9485,  9486,  9488,
    9489,  9490,  9491,  9492,  9493,  9495,  9496,  9497,  9499,  9500,
    9501,  9502,  9503,  9506,  9507,  9511,  9512,  9516,  9517,  9521,
    9522,  9526,  9530,  9536,  9540,  9546,  9547,  9548,  9552,  9553,
    9554,  9558,  9559,  9560,  9564,  9568,  9572,  9573,  9574,  9577,
    9578,  9588,  9600,  9609,  9621,  9630,  9642,  9657,  9658,  9663,
    9672,  9678,  9698,  9702,  9723,  9764,  9778,  9779,  9784,  9790,
    9791,  9796,  9808,  9809,  9810,  9817,  9828,  9829,  9833,  9841,
    9849,  9853,  9860,  9869,  9870,  9876,  9890,  9907,  9911,  9918,
    9919,  9920,  9927,  9931,  9938,  9939,  9940,  9941,  9942,  9946,
    9950,  9954,  9958,  9962,  9983,  9987,  9994,  9995,  9996, 10000,
   10001, 10002, 10003, 10004, 10008, 10012, 10019, 10020, 10024, 10025,
   10029, 10030, 10034, 10035, 10046, 10047, 10051, 10052, 10053, 10057,
   10058, 10059, 10066, 10067, 10071, 10072, 10076, 10077, 10078, 10084,
   10088, 10092, 10093, 10097, 10101, 10108, 10115, 10122, 10132, 10139,
   10149, 10159, 10169, 10182, 10186, 10194, 10202, 10206, 10216, 10230,
   10253, 10275, 10291, 10292, 10293, 10294, 10295, 10296, 10300, 10304,
   10321, 10325, 10332, 10333, 10334, 10335, 10336, 10337, 10338, 10344,
   10348, 10352, 10356, 10360, 10364, 10368, 10372, 10376, 10380, 10384,
   10388, 10395, 10396, 10400, 10401, 10402, 10406, 10407, 10408, 10409,
   10413, 10417, 10421, 10428, 10432, 10436, 10443, 10450, 10457, 10467,
   10474, 10484, 10491, 10501, 10505, 10518, 10522, 10537, 10545, 10546,
   10550, 10551, 10555, 10556, 10561, 10564, 10572, 10575, 10582, 10584,
   10585, 10589, 10590, 10594, 10595, 10596, 10601, 10604, 10617, 10621,
   10629, 10633, 10637, 10641, 10645, 10649, 10653, 10657, 10664, 10665,
   10671, 10672, 10673, 10674, 10675, 10676, 10677, 10678, 10679, 10680,
   10681, 10682, 10683, 10684, 10685, 10686, 10687, 10688, 10689, 10690,
   10691, 10692, 10693, 10694, 10695, 10696, 10697, 10698, 10699, 10700,
   10701, 10702, 10703, 10704, 10705, 10706, 10707, 10708, 10709, 10710,
   10711, 10712, 10713, 10714, 10715, 10716, 10717, 10718, 10719, 10720,
   10721, 10722, 10723, 10724, 10725, 10726, 10727, 10728, 10729, 10730,
   10731, 10732, 10733, 10734, 10735, 10736, 10737, 10738, 10739, 10740,
   10747, 10747, 10748, 10748, 10749, 10749, 10750, 10750, 10751, 10751,
   10752, 10752, 10753, 10753, 10754, 10754, 10755, 10755, 10756, 10756,
   10757, 10757, 10758, 10758, 10759, 10759, 10760, 10760, 10761, 10761,
   10762, 10762, 10763, 10763, 10764, 10764, 10764, 10765, 10765, 10766,
   10766, 10767, 10767, 10768, 10768, 10769, 10769, 10769, 10770, 10770,
   10771, 10771, 10771, 10772, 10772, 10772, 10773, 10773, 10773, 10774,
   10774, 10775, 10775, 10776, 10776, 10777, 10777, 10777, 10778, 10778,
   10779, 10779, 10780, 10780, 10780, 10780, 10781, 10781, 10782, 10782,
   10783, 10783, 10784, 10784, 10785, 10785, 10786, 10786, 10787, 10787,
   10788, 10788, 10788, 10789, 10789, 10790, 10790, 10791, 10791, 10792,
   10792, 10793, 10793, 10794, 10794, 10795, 10795, 10796, 10796, 10796,
   10797, 10797, 10798, 10798, 10799, 10799, 10803, 10803, 10804, 10804,
   10805, 10805, 10806, 10806, 10807, 10807, 10808, 10808, 10809, 10809,
   10810, 10810, 10811, 10811, 10812, 10812, 10813, 10813, 10814, 10814,
   10815, 10815, 10816, 10816, 10817, 10817, 10818, 10818, 10821, 10822,
   10823, 10827, 10827, 10828, 10828, 10829, 10829, 10830, 10830, 10831,
   10831, 10832, 10832, 10833, 10833, 10834, 10834
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "ACCEPT", "ACCESS", "ADD",
  "ADDRESS", "ADVANCING", "AFTER", "ALL", "ALLOCATE", "ALPHABET",
  "ALPHABETIC", "\"ALPHABETIC-LOWER\"", "\"ALPHABETIC-UPPER\"",
  "ALPHANUMERIC", "\"ALPHANUMERIC-EDITED\"", "ALSO", "ALTER", "ALTERNATE",
  "AND", "ANY", "ARE", "AREA", "\"ARGUMENT-NUMBER\"", "\"ARGUMENT-VALUE\"",
  "AS", "ASCENDING", "ASCII", "ASSIGN", "AT", "ATTRIBUTE", "AUTO",
  "AUTOMATIC", "\"AWAY-FROM-ZERO\"", "\"BACKGROUND-COLOR\"", "BASED",
  "BEFORE", "BELL", "BINARY", "\"BINARY-C-LONG\"", "\"BINARY-CHAR\"",
  "\"BINARY-DOUBLE\"", "\"BINARY-LONG\"", "\"BINARY-SHORT\"", "BLANK",
  "BLINK", "BLOCK", "BOTTOM", "BY", "\"BYTE-LENGTH\"", "CALL", "CANCEL",
  "CAPACITY", "CF", "CH", "CHAINING", "CHARACTER", "CHARACTERS", "CLASS",
  "CLASSIFICATION", "CLOSE", "CODE", "\"CODE-SET\"", "COLLATING", "COL",
  "COLS", "COLUMN", "COLUMNS", "COMMA", "\"COMMAND-LINE\"",
  "\"comma delimiter\"", "COMMIT", "COMMON", "COMP", "COMPUTE",
  "\"COMP-1\"", "\"COMP-2\"", "\"COMP-3\"", "\"COMP-4\"", "\"COMP-5\"",
  "\"COMP-6\"", "\"COMP-X\"", "\"FUNCTION CONCATENATE\"", "CONDITION",
  "CONFIGURATION", "CONSTANT", "CONTAINS", "CONTENT", "CONTINUE",
  "CONTROL", "CONTROLS", "CONVERSION", "CONVERTING", "COPY",
  "CORRESPONDING", "COUNT", "CRT", "\"CRT-UNDER\"", "CURRENCY",
  "\"FUNCTION CURRENT-DATE\"", "CURSOR", "CYCLE", "DATA", "DATE", "DAY",
  "\"DAY-OF-WEEK\"", "DE", "DEBUGGING", "\"DECIMAL-POINT\"",
  "DECLARATIVES", "DEFAULT", "DELETE", "DELIMITED", "DELIMITER",
  "DEPENDING", "DESCENDING", "DETAIL", "DISC", "DISK", "DISPLAY",
  "\"FUNCTION DISPLAY-OF\"", "DIVIDE", "DIVISION", "DOWN", "DUPLICATES",
  "DYNAMIC", "EBCDIC", "EC", "ELSE", "END", "\"END-ACCEPT\"",
  "\"END-ADD\"", "\"END-CALL\"", "\"END-COMPUTE\"", "\"END-DELETE\"",
  "\"END-DISPLAY\"", "\"END-DIVIDE\"", "\"END-EVALUATE\"",
  "\"END FUNCTION\"", "\"END-IF\"", "\"END-MULTIPLY\"", "\"END-PERFORM\"",
  "\"END PROGRAM\"", "\"END-READ\"", "\"END-RETURN\"", "\"END-REWRITE\"",
  "\"END-SEARCH\"", "\"END-START\"", "\"END-STRING\"", "\"END-SUBTRACT\"",
  "\"END-UNSTRING\"", "\"END-WRITE\"", "ENTRY", "ENVIRONMENT",
  "\"ENVIRONMENT-NAME\"", "\"ENVIRONMENT-VALUE\"", "EOL", "EOP", "EOS",
  "EQUAL", "ERASE", "ERROR", "ESCAPE", "EVALUATE", "\"EVENT STATUS\"",
  "EXCEPTION", "\"EXCEPTION CONDITION\"", "EXCLUSIVE", "EXIT",
  "\"Exponentiation operator\"", "EXTEND", "EXTERNAL", "FD",
  "\"FILE-CONTROL\"", "\"FILE-ID\"", "FILLER", "FINAL", "FIRST",
  "\"FLOAT-BINARY-128\"", "\"FLOAT-BINARY-32\"", "\"FLOAT-BINARY-64\"",
  "\"FLOAT-DECIMAL-16\"", "\"FLOAT-DECIMAL-34\"", "\"FLOAT-DECIMAL-7\"",
  "\"FLOAT-EXTENDED\"", "\"FLOAT-LONG\"", "\"FLOAT-SHORT\"", "FOOTING",
  "FOR", "\"FOREGROUND-COLOR\"", "FOREVER", "\"FUNCTION FORMATTED-DATE\"",
  "\"FUNCTION FORMATTED-DATETIME\"", "\"FUNCTION FORMATTED-TIME\"", "FREE",
  "FROM", "\"FROM CRT\"", "FULL", "FUNCTION", "\"FUNCTION-ID\"",
  "\"FUNCTION\"", "GENERATE", "GIVING", "GLOBAL", "GO", "GOBACK",
  "GREATER", "\"GREATER OR EQUAL\"", "GROUP", "HEADING", "HIGHLIGHT",
  "\"HIGH-VALUE\"", "ID", "IDENTIFICATION", "IF", "IGNORE", "IGNORING",
  "IN", "INDEX", "INDEXED", "INDICATE", "INITIALIZE", "INITIALIZED",
  "INITIATE", "INPUT", "\"INPUT-OUTPUT\"", "INSPECT", "INTO", "INTRINSIC",
  "INVALID", "\"INVALID KEY\"", "IS", "\"I-O\"", "\"I-O-CONTROL\"",
  "JUSTIFIED", "KEPT", "KEY", "KEYBOARD", "LABEL", "LAST", "LEADING",
  "LEFT", "LEFTLINE", "LENGTH", "\"LENGTH OF\"", "LESS",
  "\"LESS OR EQUAL\"", "LIMIT", "LIMITS", "LINAGE", "\"LINAGE-COUNTER\"",
  "LINE", "\"LINE-COUNTER\"", "LINES", "LINKAGE", "\"Literal\"", "LOCALE",
  "\"FUNCTION LOCALE-DATE\"", "\"FUNCTION LOCALE-TIME\"",
  "\"FUNCTION LOCALE-TIME-FROM-SECONDS\"", "\"LOCAL-STORAGE\"", "LOCK",
  "LOWER", "\"FUNCTION LOWER-CASE\"", "LOWLIGHT", "\"LOW-VALUE\"",
  "MANUAL", "MEMORY", "MERGE", "MINUS", "\"MNEMONIC NAME\"", "MODE",
  "MOVE", "MULTIPLE", "MULTIPLY", "NAME", "NATIONAL",
  "\"NATIONAL-EDITED\"", "\"FUNCTION NATIONAL-OF\"", "NATIVE",
  "\"NEAREST-AWAY-FROM-ZERO\"", "\"NEAREST-EVEN\"",
  "\"NEAREST-TOWARD-ZERO\"", "NEGATIVE", "NEXT", "\"NEXT PAGE\"", "NO",
  "\"NO-ECHO\"", "NORMAL", "NOT", "\"NOT END\"", "\"NOT EOP\"",
  "\"NOT ESCAPE\"", "\"NOT EQUAL\"", "\"NOT EXCEPTION\"",
  "\"NOT INVALID KEY\"", "\"NOT OVERFLOW\"", "\"NOT SIZE ERROR\"",
  "\"NO ADVANCING\"", "NUMBER", "NUMBERS", "NUMERIC", "\"NUMERIC-EDITED\"",
  "\"FUNCTION NUMVAL-C\"", "\"OBJECT-COMPUTER\"", "OCCURS", "OF", "OFF",
  "OMITTED", "ON", "ONLY", "OPEN", "OPTIONAL", "OR", "ORDER",
  "ORGANIZATION", "OTHER", "OUTPUT", "OVERLINE", "\"PACKED-DECIMAL\"",
  "PADDING", "PAGE", "\"PAGE-COUNTER\"", "PARAGRAPH", "PERFORM", "PH",
  "PF", "PICTURE", "\"PICTURE SYMBOL\"", "PLUS", "POINTER", "POSITION",
  "POSITIVE", "PRESENT", "PREVIOUS", "PRINTER", "PRINTING", "PROCEDURE",
  "PROCEDURES", "PROCEED", "PROGRAM", "\"PROGRAM-ID\"", "\"Program name\"",
  "\"PROGRAM-POINTER\"", "PROHIBITED", "PROMPT", "\"PROTECTED\"", "QUOTE",
  "RANDOM", "RD", "READ", "\"READY TRACE\"", "RECORD", "RECORDING",
  "RECORDS", "RECURSIVE", "REDEFINES", "REEL", "REFERENCE", "REFERENCES",
  "RELATIVE", "RELEASE", "REMAINDER", "REMOVAL", "RENAMES", "REPLACE",
  "REPLACING", "REPORT", "REPORTING", "REPORTS", "REPOSITORY",
  "\"Intrinsic function name\"", "REQUIRED", "RESERVE", "RESET",
  "\"RESET TRACE\"", "RETURN", "RETURNING", "\"FUNCTION REVERSE\"",
  "\"REVERSE-VIDEO\"", "REVERSED", "REWIND", "REWRITE", "RF", "RH",
  "RIGHT", "ROLLBACK", "ROUNDED", "RUN", "SAME", "SCREEN",
  "\"SCREEN-CONTROL\"", "SCROLL", "SD", "SEARCH", "SECTION", "SECURE",
  "\"SEGMENT-LIMIT\"", "SELECT", "\"semi-colon\"", "SENTENCE", "SEPARATE",
  "SEQUENCE", "SEQUENTIAL", "SET", "SHARING", "SIGN", "SIGNED",
  "\"SIGNED-INT\"", "\"SIGNED-LONG\"", "\"SIGNED-SHORT\"", "SIZE",
  "\"SIZE ERROR\"", "SORT", "\"SORT-MERGE\"", "SOURCE",
  "\"SOURCE-COMPUTER\"", "SPACE", "\"SPECIAL-NAMES\"", "STANDARD",
  "\"STANDARD-1\"", "\"STANDARD-2\"", "START", "STATIC", "STATUS",
  "STDCALL", "STEP", "STOP", "STRING", "\"FUNCTION SUBSTITUTE\"",
  "\"FUNCTION SUBSTITUTE-CASE\"", "SUBTRACT", "SUM", "SUPPRESS",
  "SYMBOLIC", "SYNCHRONIZED", "\"SYSTEM-DEFAULT\"", "\"SYSTEM-OFFSET\"",
  "TAB", "TALLYING", "TAPE", "TERMINATE", "TEST", "THAN", "THEN", "THRU",
  "TIME", "TIMEOUT", "TIMES", "TO", "\"&\"", "\")\"", "\":\"", "\"/\"",
  "\".\"", "\"=\"", "\"FALSE\"", "\"FILE\"", "\">\"", "\"INITIAL\"",
  "\"<\"", "\"-\"", "\"*\"", "\"NULL\"", "\"OVERFLOW\"", "\"(\"", "\"+\"",
  "\"TRUE\"", "TOP", "\"TOWARD-GREATER\"", "\"TOWARD-LESSER\"", "TRAILING",
  "TRANSFORM", "\"FUNCTION TRIM\"", "TRUNCATION", "TYPE", "UNDERLINE",
  "UNIT", "UNLOCK", "UNSIGNED", "\"UNSIGNED-INT\"", "\"UNSIGNED-LONG\"",
  "\"UNSIGNED-SHORT\"", "UNSTRING", "UNTIL", "UP", "UPDATE", "UPON",
  "\"UPON ARGUMENT-NUMBER\"", "\"UPON COMMAND-LINE\"",
  "\"UPON ENVIRONMENT-NAME\"", "\"UPON ENVIRONMENT-VALUE\"", "UPPER",
  "\"FUNCTION UPPER-CASE\"", "USAGE", "USE", "USER", "\"USER-DEFAULT\"",
  "\"User FUNCTION\"", "\"User FUNCTION name\"", "USING", "VALUE",
  "VARYING", "WAIT", "WHEN", "\"FUNCTION WHEN-COMPILED\"", "WITH",
  "\"Identifier\"", "WORDS", "\"WORKING-STORAGE\"", "WRITE", "YYYYDDD",
  "YYYYMMDD", "ZERO", "SHIFT_PREFER", "$accept", "start", "$@1",
  "nested_list", "nested_progs", "source_element", "simple_prog", "$@2",
  "program_definition", "program_mandatory", "function_definition",
  "nested_prog", "end_program", "end_mandatory", "end_function",
  "end_function_mandatory", "program_body", "$@3", "$@4", "$@5",
  "program_identification", "$@6", "function_identification",
  "program_name", "as_literal", "program_type", "program_type_clause",
  "_init_or_recurs", "environment_header", "configuration_header",
  "configuration_list", "configuration_paragraph",
  "source_computer_paragraph", "$@7", "source_computer_entry",
  "with_debugging_mode", "object_computer_paragraph", "$@8",
  "object_computer_entry", "object_clauses_list", "object_clauses",
  "object_computer_memory", "object_computer_sequence",
  "object_computer_segment", "object_computer_class", "locale_class",
  "computer_words", "repository_paragraph", "$@9", "repository_entry",
  "repository_list", "repository_name", "user_or_intrinsic",
  "_as_literal_intrinsic", "repository_name_list",
  "special_names_paragraph", "special_names_entry", "special_name_list",
  "special_name", "mnemonic_name_clause", "$@10", "mnemonic_choices",
  "special_name_mnemonic_on_off", "on_off_clauses", "alphabet_name_clause",
  "@11", "alphabet_definition", "alphabet_literal_list",
  "alphabet_literal", "@12", "alphabet_also_sequence", "alphabet_lits",
  "space_or_zero", "symbolic_characters_clause", "sym_in_word",
  "symbolic_collection", "symbolic_chars_list", "symbolic_chars_phrase",
  "char_list", "integer_list", "class_name_clause", "class_item_list",
  "class_item", "locale_clause", "currency_sign_clause", "with_pic_symbol",
  "decimal_point_clause", "numeric_sign_clause", "cursor_clause",
  "crt_status_clause", "screen_control", "event_status",
  "input_output_header", "file_control_header", "i_o_control_header",
  "file_control_sequence", "file_control_entry", "$@13",
  "select_clause_sequence", "select_clause", "assign_clause",
  "device_name", "_line_adv_file", "_ext_clause", "assignment_name",
  "opt_assignment_name", "access_mode_clause", "access_mode",
  "alternative_record_key_clause", "suppress_clause",
  "collating_sequence_clause", "file_status_clause", "file_or_sort",
  "lock_mode_clause", "$@14", "lock_mode", "lock_with",
  "organization_clause", "organization", "padding_character_clause",
  "record_delimiter_clause", "record_key_clause", "opt_splitk",
  "relative_key_clause", "reserve_clause", "no_or_integer",
  "sharing_clause", "sharing_option", "opt_i_o_control",
  "i_o_control_list", "i_o_control_clause", "same_clause", "same_option",
  "multiple_file_tape_clause", "$@15", "multiple_file_list",
  "multiple_file", "multiple_file_position", "data_division_header",
  "file_section_header", "file_description_sequence", "file_description",
  "file_description_entry", "$@16", "file_type",
  "file_description_clause_sequence", "file_description_clause",
  "block_contains_clause", "_records_or_characters", "record_clause",
  "record_depending", "opt_from_integer", "opt_to_integer",
  "label_records_clause", "value_of_clause", "file_id", "valueof_name",
  "data_records_clause", "linage_clause", "linage_sequence",
  "linage_lines", "linage_footing", "linage_top", "linage_bottom",
  "recording_mode_clause", "code_set_clause", "report_clause",
  "report_keyword", "rep_name_list", "working_storage_section", "$@17",
  "record_description_list", "$@18", "record_description_list_2",
  "data_description", "$@19", "level_number", "entry_name", "const_name",
  "const_global", "lit_or_length", "con_identifier", "fp32_usage",
  "fp64_usage", "fp128_usage", "pointer_len", "constant_entry",
  "constant_source", "data_description_clause_sequence",
  "data_description_clause", "redefines_clause", "external_clause",
  "as_extname", "global_clause", "picture_clause", "usage_clause", "usage",
  "float_usage", "double_usage", "sign_clause", "report_occurs_clause",
  "occurs_step", "occurs_clause", "occurs_to_integer",
  "occurs_from_integer", "occurs_depending", "capacity_in",
  "occurs_initialized", "occurs_keys", "occurs_key_list",
  "ascending_or_descending", "occurs_indexed", "occurs_index_list",
  "occurs_index", "justified_clause", "synchronized_clause",
  "blank_clause", "based_clause", "value_clause", "$@20",
  "value_item_list", "value_item", "false_is", "renames_clause",
  "any_length_clause", "local_storage_section", "$@21", "linkage_section",
  "$@22", "report_section", "$@23", "report_description_sequence",
  "report_description", "$@24", "report_description_options",
  "report_description_option", "control_clause", "control_field_list",
  "identifier_list", "page_limit_clause", "page_line_column",
  "page_heading_list", "page_detail", "heading_clause", "first_detail",
  "last_heading", "last_detail", "footing_clause",
  "report_group_description_list", "report_group_description_entry",
  "$@25", "report_group_options", "report_group_option", "type_clause",
  "type_option", "control_final", "or_page", "next_group_clause",
  "sum_clause_list", "reset_clause", "data_or_final",
  "present_when_condition", "varying_clause", "line_clause",
  "line_keyword_clause", "column_clause", "col_keyword_clause",
  "report_line_integer_list", "line_or_plus", "report_col_integer_list",
  "col_or_plus", "source_clause", "group_indicate_clause",
  "report_usage_clause", "screen_section", "$@26",
  "opt_screen_description_list", "screen_description_list",
  "screen_description", "$@27", "screen_options", "screen_option",
  "plus_plus", "minus_minus", "screen_line_plus_minus",
  "screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "procedure_division", "$@28", "$@29", "$@30", "procedure_using_chaining",
  "$@31", "$@32", "procedure_param_list", "procedure_param",
  "procedure_type", "size_optional", "procedure_optional",
  "procedure_returning", "procedure_declaratives", "$@33",
  "procedure_list", "procedure", "section_header", "$@34",
  "opt_use_statement", "paragraph_header", "invalid_statement",
  "opt_segment", "statement_list", "@35", "@36", "statements", "$@37",
  "statement", "accept_statement", "$@38", "accept_body",
  "accp_identifier", "lines_or_number", "opt_at_line_column",
  "at_line_column", "line_number", "column_number", "opt_at_from",
  "opt_at_block", "opt_accp_attr", "accp_attrs", "accp_attr",
  "update_default", "end_accept", "add_statement", "$@39", "add_body",
  "add_to", "end_add", "allocate_statement", "$@40", "allocate_body",
  "allocate_returning", "alter_statement", "$@41", "alter_body",
  "alter_entry", "_proceed_to", "call_statement", "$@42", "call_body",
  "mnemonic_conv", "call_using", "$@43", "call_param_list", "call_param",
  "call_type", "call_returning", "return_give", "null_or_omitted",
  "call_on_exception", "call_not_on_exception", "end_call",
  "cancel_statement", "$@44", "cancel_body", "close_statement", "$@45",
  "close_body", "close_option", "compute_statement", "$@46",
  "compute_body", "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "$@47", "delete_body", "delete_file_list",
  "end_delete", "display_statement", "$@48", "display_body",
  "display_list", "$@49", "display_atom", "display_upon",
  "display_upon_crt", "crt_under", "with_clause", "with_no_adv_clause",
  "disp_attrs", "disp_attr", "end_display", "divide_statement", "$@50",
  "divide_body", "end_divide", "entry_statement", "$@51", "entry_body",
  "evaluate_statement", "$@52", "evaluate_body", "evaluate_subject_list",
  "evaluate_subject", "evaluate_condition_list", "evaluate_case_list",
  "evaluate_case", "evaluate_other", "evaluate_when_list",
  "evaluate_object_list", "evaluate_object", "opt_evaluate_thru_expr",
  "end_evaluate", "exit_statement", "$@53", "exit_body",
  "exit_program_returning", "free_statement", "$@54", "free_body",
  "generate_statement", "$@55", "generate_body", "goto_statement", "$@56",
  "go_body", "goto_depending", "goback_statement", "if_statement", "$@57",
  "if_else_statements", "end_if", "initialize_statement", "$@58",
  "initialize_body", "initialize_filler", "initialize_value",
  "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "$@59", "initiate_body", "inspect_statement",
  "$@60", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@61", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region",
  "inspect_before_after", "merge_statement", "$@62", "move_statement",
  "$@63", "move_body", "multiply_statement", "$@64", "multiply_body",
  "end_multiply", "open_statement", "$@65", "open_body", "open_mode",
  "open_sharing", "open_option", "perform_statement", "$@66",
  "perform_body", "$@67", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "read_statement", "$@68",
  "read_body", "read_into", "with_lock", "read_key", "read_handler",
  "end_read", "ready_statement", "release_statement", "$@69",
  "release_body", "reset_statement", "return_statement", "$@70",
  "return_body", "end_return", "rewrite_statement", "$@71", "rewrite_body",
  "write_lock", "end_rewrite", "rollback_statement", "search_statement",
  "$@72", "search_body", "search_varying", "search_at_end", "search_whens",
  "search_when", "end_search", "set_statement", "$@73", "set_body",
  "on_or_off", "up_or_down", "set_environment", "set_attr",
  "set_attr_clause", "set_attr_one", "set_to", "set_up_down",
  "set_to_on_off_sequence", "set_to_on_off", "set_to_true_false_sequence",
  "set_to_true_false", "sort_statement", "$@74", "sort_body", "@75",
  "sort_key_list", "opt_key_list", "sort_duplicates", "sort_collating",
  "sort_input", "sort_output", "start_statement", "$@76", "start_body",
  "sizelen_clause", "start_key", "start_op", "disallowed_op",
  "not_equal_op", "end_start", "stop_statement", "$@77", "stop_returning",
  "_opt_status", "stop_literal", "string_statement", "$@78", "string_body",
  "string_item_list", "string_item", "opt_with_pointer", "end_string",
  "subtract_statement", "$@79", "subtract_body", "end_subtract",
  "suppress_statement", "_printing", "terminate_statement", "$@80",
  "terminate_body", "transform_statement", "$@81", "transform_body",
  "unlock_statement", "$@82", "unlock_body", "opt_record",
  "unstring_statement", "$@83", "unstring_body", "unstring_delimited",
  "unstring_delimited_list", "unstring_delimited_item", "unstring_into",
  "unstring_into_item", "unstring_into_delimiter", "unstring_into_count",
  "unstring_tallying", "end_unstring", "use_statement", "$@84",
  "use_phrase", "use_file_exception", "use_global",
  "use_file_exception_target", "use_debugging", "debugging_list",
  "debugging_target", "all_refs", "use_start_end", "program_start_end",
  "use_reporting", "use_exception", "use_ex_keyw", "write_statement",
  "$@85", "write_body", "from_option", "write_option", "before_or_after",
  "write_handler", "end_write", "on_accp_exception",
  "opt_on_accp_exception", "escape_or_exception",
  "opt_not_on_accp_exception", "not_escape_or_not_exception",
  "on_disp_exception", "opt_on_disp_exception",
  "opt_not_on_disp_exception", "on_size_error", "opt_on_size_error",
  "opt_not_on_size_error", "on_overflow", "opt_on_overflow",
  "opt_not_on_overflow", "return_at_end", "at_end", "at_end_clause",
  "not_at_end_clause", "at_eop", "at_eop_clause", "not_at_eop_clause",
  "invalid_key", "opt_invalid_key_sentence",
  "opt_not_invalid_key_sentence", "_opt_scroll_lines", "condition", "expr",
  "partial_expr", "$@86", "expr_tokens", "expr_token", "eq", "gt", "lt",
  "ge", "le", "exp_list", "e_sep", "exp", "exp_term", "exp_factor",
  "exp_unary", "exp_atom", "line_linage_page_counter", "arithmetic_x_list",
  "arithmetic_x", "record_name", "table_name", "file_name_list",
  "file_name", "report_name", "mnemonic_name_list", "mnemonic_name",
  "procedure_name_list", "procedure_name", "label", "integer_label",
  "reference_list", "reference", "single_reference", "opt_reference_list",
  "opt_reference", "reference_or_literal", "undefined_word", "unique_word",
  "target_x_list", "target_x", "x_list", "x", "report_x_list", "expr_x",
  "arith_x", "prog_or_entry", "alnum_or_id", "simple_value",
  "simple_all_value", "id_or_lit", "id_or_lit_or_func", "num_id_or_lit",
  "positive_id_or_lit", "pos_num_id_or_lit", "from_parameter",
  "sub_identifier", "sort_identifier", "sub_identifier_1", "identifier",
  "identifier_1", "target_identifier", "target_identifier_1",
  "qualified_word", "subref", "refmod", "integer", "symbolic_integer",
  "report_integer", "class_value", "literal", "basic_literal",
  "basic_value", "function", "func_no_parm", "func_one_parm",
  "func_multi_parm", "func_refmod", "func_args", "trim_args",
  "numvalc_args", "locale_dt_args", "formatted_datetime_args",
  "formatted_time_args", "not_const_word", "flag_all", "flag_duplicates",
  "flag_initialized", "flag_initialized_to", "to_init_val", "flag_next",
  "flag_not", "flag_optional", "flag_rounded", "round_mode",
  "round_choice", "flag_separate", "error_stmt_recover", "_advancing",
  "_after", "_are", "_area", "_as", "_at", "_binary", "_by", "_character",
  "_characters", "_contains", "_data", "_file", "_final", "_for", "_from",
  "_in", "_in_order", "_indicate", "_initial", "_into", "_is", "_is_are",
  "_key", "_left_or_right", "_line_or_lines", "_limits", "_lines", "_mode",
  "_number", "_numbers", "_of", "_on", "_onoff_status", "_other",
  "_procedure", "_program", "_record", "_right", "_sign", "_signed",
  "_sign_is", "_size", "_standard", "_status", "_tape", "_then", "_times",
  "_to", "_to_using", "_when", "_when_set_to", "_with", "coll_sequence",
  "column_or_col", "columns_or_cols", "comp_equal", "exception_or_error",
  "exception_or_overflow", "in_of", "label_option", "line_or_lines",
  "lock_records", "object_char_or_word", "records", "reel_or_unit",
  "scroll_line_or_lines", "size_or_length", "with_dups",
  "prog_coll_sequence", "detail_keyword", "ch_keyword", "cf_keyword",
  "ph_keyword", "pf_keyword", "rh_keyword", "rf_keyword",
  "control_keyword", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770
};
# endif

#define YYPACT_NINF -2400

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2400)))

#define YYTABLE_NINF -1865

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2400,   763,   532, -2400,   382,   468, -2400,   532, -2400, -2400,
     813, -2400, -2400,   813,   813,   -10,   -10, -2400,   720, -2400,
     906,   674,   924, -2400, -2400,  1147,  1147,   750,   842, -2400,
   -2400,   171,   813,   -10, -2400, -2400,   989,   814, -2400, -2400,
     818,  1353,   -10, -2400, -2400, -2400,   674,   850, -2400, -2400,
     440, -2400,   789,   789,   929,  1011,  1189,  1189,  1189,  1044,
     789,  1041,   930,  1001,  1189,  1006,  1009,  1416, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400,   117, -2400, -2400, -2400, -2400,
    1270, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
    1323,  1051,   171, -2400, -2400,  1054,    80, -2400, -2400,  1189,
    1189, -2400,  1189,  1017,  1466,  1017,  1083,  1189,  1189, -2400,
   -2400,  1017, -2400, -2400, -2400,  1033,   939,  1091, -2400, -2400,
    1069, -2400,  1096, -2400, -2400, -2400, -2400,  -116, -2400, -2400,
   -2400,  1213, -2400,  1189,  1028,  1017,  1306,     5, -2400, -2400,
   -2400, -2400, -2400,  1324,  1111,   592,  1399, -2400,  1100, -2400,
    1033, -2400,    49, -2400, -2400, -2400, -2400, -2400,   -24,    38,
    1189,    13, -2400, -2400, -2400,   450, -2400, -2400, -2400,    55,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400,  1028, -2400,  1159,
   -2400,  -130, -2400, -2400,  1017, -2400,  1246, -2400,  1248,  1240,
    1589,  1189, -2400, -2400, -2400,   892, -2400, -2400, -2400, -2400,
   -2400,   664,  1597,  1189,    63, -2400,    92, -2400, -2400,   109,
   -2400, -2400, -2400, -2400,  1407,    38, -2400,  1435,   789,   789,
   -2400,   -24,  1215,    66,   399, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,   952, -2400,
      77, -2400,  1028, -2400, -2400,  1346, -2400, -2400, -2400,  1189,
    1269,  1421, -2400, -2400, -2400, -2400,   900,  1189,  1176,  1454,
      15, -2400,  1659,   475,  1231, -2400, -2400,  1232,  1583, -2400,
    1407, -2400,   789, -2400, -2400, -2400, -2400,   -24, -2400,  1241,
    1384, -2400,   789, -2400,   571, -2400,   140, -2400, -2400, -2400,
   -2400, -2400,   952, -2400,  1443,  1421, -2400, -2400, -2400,   686,
   -2400, -2400, -2400,  1444, -2400, -2400, -2400, -2400, -2400,  1429,
   -2400, -2400, -2400, -2400, -2400,  1245, -2400, -2400, -2400,  1683,
    1604,  1254, -2400, -2400,   952, -2400, -2400,    22, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400,  1271, -2400,  1521,
    1590,  1256, -2400,  1698, -2400, -2400, -2400, -2400,  1836, -2400,
    1629, -2400,  1209,  1266,  1326, -2400,   952,  1446,  1370,   600,
    1327, -2400,  1325,  1189,  1668,   661,   -60,   477, -2400,  1219,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,  1302,
   -2400,  1469, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
    1693,  1189, -2400,  1209, -2400,  1209, -2400, -2400,  1281,    35,
   -2400, -2400,  1189, -2400,  1500, -2400, -2400,   627, -2400, -2400,
     922,  1189,  1189, -2400,  1189,  1189, -2400,  1683, -2400,   128,
    1189,  1446, -2400,  1336,  1233,  1209, -2400,  1410, -2400, -2400,
   -2400, -2400,  1229, -2400,  1235,    65,   442,  1189, -2400, -2400,
     816, -2400, -2400,   -78,  1329,  1017,  1017, -2400,  1430,  1430,
    1437, -2400,  1017,  1189, -2400, -2400, -2400,  1421, -2400,  1350,
    1491, -2400, -2400,  1298, -2400, -2400, -2400, -2400, -2400,  1017,
   -2400, -2400,   -68,   -68,  1748,   -68, -2400, -2400,   -68,   -61,
   -2400, -2400, -2400, -2400, -2400,   729, -2400, -2400, -2400, -2400,
   -2400, -2400,   636, -2400,  1301,  1361,  1503,  -184,  1304,  6807,
   -2400,  1253, -2400, -2400,   -13, -2400, -2400, -2400, -2400,  1245,
   -2400, -2400, -2400, -2400, -2400,  1189,  1017,  1259, -2400,  1259,
   -2400, -2400,  1308,  1372,  1401, -2400,  1319, -2400,  1328, -2400,
    1690, -2400,  1691, -2400,   619, -2400,  1653,  1347, -2400, -2400,
    1017,  1017, -2400,   403, -2400, -2400,  1235, -2400,  1332,  1393,
    1400, -2400, -2400, -2400,   885,  1629,  1189,   836,   836,  1189,
      34,  1446,  1189,  1768, -2400,  1485, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400,   789,   958, -2400,  1288,
   -2400,  1017, -2400,  1484, -2400, -2400,  1235, -2400,  1342,  1409,
   -2400,  7019,   637,  1602,  1421,  1309,  1189,  1768,  1310,   374,
     -78,  1421,  1313,  1189, -2400, -2400, -2400,   -19,   789, -2400,
   -2400, -2400,    68,   -33, -2400,  1235, -2400,  1364,   983,   778,
   -2400, -2400,  -157,  -151,  -149,  -125,   451,  1315, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400,  1436, -2400,   111, -2400, -2400,
   -2400, -2400,  1017,  1017,  1591, -2400, -2400, -2400,   -35, -2400,
   -2400, -2400,  1189,   158, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400,   972,   -62, -2400,  1316, -2400,   965, -2400,  1371,
   -2400, -2400, -2400, -2400,  1310, -2400, -2400, -2400, -2400,  1572,
      58,  1609,  1320,  1189, -2400, -2400,  1189, -2400,  1175, -2400,
   -2400, -2400,  1019, -2400, -2400, -2400, -2400, -2400, -2400,  1706,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400,  1318, -2400, -2400,  1777,
    1381, -2400,  1369,  1390, -2400, -2400, -2400, -2400,  6623,   430,
    1811, -2400,  1440,  1440, -2400,  1175,  1531, -2400,  1212,  1212,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,  1388, -2400,
    1421,    71, -2400, -2400, -2400,  1421, -2400, -2400,  1431, -2400,
      48,    48, -2400, -2400,  1494,  1338,    52,  3504,  3996, -2400,
    1609,  1649,  1421,  1402,  7874,  1382, -2400,  1017, -2400,   430,
   -2400,  1403,  1594, -2400,  1668, -2400, -2400, -2400, -2400,  1212,
    1397, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400,  1175, -2400, -2400, -2400, -2400,    27,
    1416, -2400,   599, -2400, -2400, -2400, -2400,  1348, -2400,  6548,
   -2400, -2400,  1338,  1404, -2400, -2400,  1476,  4314, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400,    33, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400,  1457, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,   561,
   -2400, -2400,  1525, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
    1356,  1421,  1381, -2400, -2400,  1752, -2400, -2400, -2400,  1408,
    1411,  1412,  3286,     5,     5,  1413,  1414,  1415, -2400,  1417,
       5, -2400, -2400, -2400,  7979,  7874,  7979,  1419, -2400,  1412,
   -2400,   218,   998,   974, -2400,  1699, -2400, -2400, -2400, -2400,
   -2400,  1388, -2400,  1420,  1422,  1424,  7874, -2400, -2400,   724,
   -2400,   430, -2400, -2400, -2400, -2400, -2400,   -78,   -78, -2400,
   -2400, -2400, -2400,  1680, -2400, -2400,  1371,  1421, -2400, -2400,
    1418, -2400,  1427, -2400,    42,    42,  1362,  1438, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,   336,
    5046,  7874,   112,   631,   129,  1209,   685,   638,  6040,  6138,
    1619,   602,   955,   685,  1017,  1426, -2400, -2400,  6138, -2400,
   -2400,   685,  1348,  2391,  1017,  5062,  6138, -2400,   751,  3089,
    1209,  1017,  1209,  1017,    59,   633,  1017,  1209, -2400, -2400,
   -2400, -2400, -2400, -2400,  5321,  5337, -2400, -2400,  1348,    90,
    1017,  1209,  1017,  1017, -2400, -2400,  1669,  1581, -2400,  7874,
    7874,  7348, -2400, -2400,  1388, -2400,  1386,  1389,  7874,  7874,
    7874,  3286,  1395, -2400,   904, -2400,  3286, -2400, -2400, -2400,
   -2400,  7874,  7371,  7874,  7874,  7874,  7874,  7874,  7874, -2400,
    3286,  7874,   998,  1490, -2400,  1439, -2400, -2400, -2400,  1868,
    1416, -2400,   470, -2400, -2400, -2400, -2400,   155, -2400,  -133,
     350,   406, -2400, -2400, -2400,  1770,   747,  1709,  1531,  1017,
    3286, -2400,  1774, -2400,  5533, -2400, -2400, -2400, -2400, -2400,
     152,   796, -2400,   112, -2400,  1458, -2400,     5, -2400, -2400,
   -2400, -2400,  1778,  2412, -2400,   129, -2400, -2400,  1209,  1000,
    1531,  1776,   570, -2400,  1524, -2400, -2400,  1369,  1388,  1209,
    1779,  1370,  1080,  1781,  5613, -2400,  5755,   102,  1142,  1190,
    1782,   137,  1428, -2400, -2400, -2400,  1775,    53, -2400, -2400,
   -2400,  4402, -2400, -2400,  1813,    33, -2400, -2400, -2400,   685,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400,  1473, -2400, -2400,
     244,  1348, -2400, -2400,    30, -2400, -2400, -2400, -2400, -2400,
   -2400,  1455,  6138, -2400,  1470,  1784,  1873, -2400, -2400, -2400,
   -2400,   751,  1522, -2400,  1481, -2400,  4041,    12,  -211,  1486,
    1482, -2400,  -173, -2400,  1496,  1789,   823, -2400,  1738, -2400,
    1792,  1370,  1794,  1738,  1017,  1795,  1441, -2400,   968, -2400,
   -2400, -2400, -2400, -2400, -2400,  1670, -2400,   685, -2400,   -79,
   -2400,   392,  1912, -2400,   130, -2400,  1797,   764,   597,  1897,
    1799,  4770, -2400, -2400,  1017,  1800,  5879,  1348, -2400, -2400,
     514, -2400, -2400, -2400, -2400,  3603, -2400,  1753, -2400,  1118,
    1802,  1841,  1804,  1738, -2400, -2400, -2400,  1017,  1737,   216,
     254,   681,  1507,   255,  1510, -2400,   331, -2400, -2400,   530,
    1511,  1512,  1514,   341, -2400,  1388, -2400,  1520, -2400, -2400,
     386,  1527,   681, -2400,  1043,   974,   974, -2400, -2400, -2400,
    1078,  1528,   388,  1515,  1189, -2400,   -78,  1856,  1518,   553,
    7326, -2400,  1189,  1570,  1671, -2400, -2400,  1876, -2400, -2400,
     412,  1786, -2400,   797,  1508,    21,  1538, -2400,  1388, -2400,
   -2400, -2400,  6262,  1787, -2400,  1766, -2400,  1613, -2400,  1654,
    1741, -2400, -2400, -2400,  1428, -2400,  1000, -2400, -2400, -2400,
      11,   439,  1017, -2400, -2400, -2400, -2400, -2400,  7874,  1721,
   -2400,  1382, -2400,  1209, -2400, -2400, -2400,  1767, -2400, -2400,
   -2400,  6138, -2400,  1704,    14,  1703,  2141,  1516,  1840,  1840,
    1840,  1840, -2400, -2400,  6138,  6262, -2400, -2400, -2400, -2400,
     602,    81, -2400,  1502, -2400,  1504, -2400, -2400, -2400, -2400,
    1426, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400,  2560, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400,    -1, -2400,  1879,  1322,  1835, -2400,   968,
      69, -2400, -2400,  1645, -2400, -2400,    73,  7874, -2400,  1563,
     685, -2400, -2400,  6262,  1522,  1219,  1209, -2400, -2400, -2400,
   -2400, -2400,  1846,  1017,   112, -2400,  1068, -2400, -2400, -2400,
   -2400,  1370,  2391, -2400, -2400, -2400,  1790, -2400, -2400,   609,
    1887, -2400, -2400,  1017,  1887,  1573, -2400,  1388, -2400, -2400,
     463,   -24, -2400, -2400,  4721, -2400,  1978,   847,   134, -2400,
   -2400, -2400,  1189, -2400,   -32,  6138, -2400,    41,  5916, -2400,
   -2400,  1017, -2400,  1834, -2400, -2400,  6262, -2400,  1421, -2400,
   -2400,   968, -2400, -2400, -2400, -2400, -2400,  1897,  1805, -2400,
   -2400,  1068,  1737, -2400,  1897, -2400, -2400, -2400,  1500,  7509,
    1420,  7647,  1420, -2400,  1017,  1420,  1420,  1420,  3286, -2400,
     -45,  1420, -2400,  7795,  1420,  1420, -2400,   430, -2400,  1581,
   -2400, -2400,  1189,  1189,  1768,   508, -2400, -2400, -2400, -2400,
    1828,  1857, -2400,  1189, -2400,   -89, -2400, -2400, -2400,  1334,
    1189,  2391, -2400, -2400, -2400,  1735, -2400,  1421, -2400,  1980,
   -2400, -2400, -2400,  1017, -2400, -2400,  1017, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400,  1838,  1735,   742,  1189,
   -2400,  1530,  1584, -2400, -2400, -2400, -2400, -2400, -2400,  1772,
    1735,  1735,   160,  1788,  1735, -2400,  1239, -2400, -2400, -2400,
    1532,  1536, -2400,   968,  1239,  1812,  1625,  1751, -2400, -2400,
    1791, -2400, -2400, -2400, -2400, -2400, -2400,   153, -2400,  1017,
    1531,   689, -2400,    32,   -43,   685,  1607,  1613,   685, -2400,
    1608,   112, -2400,    33, -2400, -2400,  1672,  1696, -2400,  -159,
    1189, -2400, -2400, -2400, -2400, -2400,  1769, -2400, -2400, -2400,
    2032, -2400, -2400, -2400, -2400, -2400, -2400, -2400,  1840,  1189,
   -2400,   -50, -2400, -2400,  1355,  1189, -2400, -2400, -2400, -2400,
      -4,  1189, -2400,  1026, -2400,  1238,  1772, -2400, -2400, -2400,
   -2400,  1861,   689,  1865,    64, -2400, -2400, -2400, -2400,  2052,
   -2400,  1627,   203, -2400, -2400,    81, -2400, -2400, -2400, -2400,
    1581, -2400, -2400, -2400,  1945,  1935,  1426, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400,  1710,  1426, -2400,  1626, -2400,  2029,
   -2400, -2400, -2400,   854, -2400,   968,   945, -2400,    82,   216,
       3,   685,   685,   689,  1877,  1209,   128,   961,  1939, -2400,
   -2400, -2400,  2074, -2400,  1888, -2400, -2400, -2400, -2400,  1790,
   -2400, -2400, -2400, -2400,  1017,  1953,  1767,   480, -2400,  1582,
   -2400,  1585,   968,   916, -2400,   153, -2400, -2400, -2400,  6138,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   847, -2400,
     589,  1767,   -51, -2400,  1661,  1661, -2400, -2400,  -100,  1017,
     689,  1886,  1636, -2400,  1643,  2085,  1017,   503,   609,  2088,
   -2400,  1593,  1189, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400,  1046, -2400, -2400, -2400,
    1017,   129, -2400, -2400,  1189,  1768,  1843,  1338, -2400, -2400,
   -2400,  1017,   412, -2400, -2400, -2400, -2400,   412, -2400, -2400,
    1189,  1402,  1189, -2400, -2400, -2400,  1189, -2400, -2400, -2400,
     139, -2400, -2400, -2400,  1189,  1596,   412,   412, -2400, -2400,
     412, -2400, -2400, -2400,  1264, -2400, -2400, -2400,  1239, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400,  1524,    21, -2400,
   -2400,  1806,    46,  1894,   689,   133, -2400, -2400, -2400, -2400,
   -2400,     0,    79, -2400, -2400, -2400,   490, -2400, -2400, -2400,
   -2400, -2400, -2400,   412, -2400, -2400, -2400, -2400,   412,   368,
     368,   412, -2400, -2400, -2400, -2400, -2400,  1598,   685, -2400,
     685,  4571, -2400,   -96,   121,    81, -2400, -2400, -2400,  2052,
    1017, -2400, -2400, -2400, -2400,  1605,  1112,   190,  1606,   133,
     968, -2400, -2400,  2057, -2400, -2400, -2400, -2400,   945, -2400,
    1920, -2400,  1189,  1500,  1798, -2400, -2400,   685, -2400,   685,
     961, -2400, -2400, -2400,   481, -2400, -2400,  1017,  6138,   675,
   -2400, -2400, -2400,  1823, -2400, -2400,  1853, -2400, -2400, -2400,
   -2400,  1585, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400,     2, -2400,  1017, -2400, -2400, -2400,
    1133, -2400, -2400, -2400,  7874, -2400,  6138,  6138,  1651,  1793,
    1524, -2400,   685, -2400,   133, -2400,  1803, -2400,   968, -2400,
    2004,  1679, -2400,   822, -2400,   722, -2400,  1593, -2400,  1017,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400,  1321,   -17, -2400,
    1017, -2400, -2400, -2400,   755, -2400,   129,   755, -2400, -2400,
   -2400,    99,  2073,  1673,  1239, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400,  1712,  1919, -2400, -2400, -2400,  1923,
   -2400, -2400, -2400, -2400, -2400, -2400,  1832, -2400,  1531, -2400,
   -2400, -2400, -2400,  1017, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400,  3107, -2400, -2400, -2400,  1337, -2400,
   -2400, -2400, -2400,  2141, -2400,   689,  1773,   689,  1780, -2400,
   -2400,  6138, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400,  1112, -2400,  2026, -2400,  1426, -2400, -2400, -2400,   133,
    1153, -2400, -2400,  1153,   -57,  1017, -2400, -2400,   689, -2400,
   -2400,  1749, -2400,  2083,  1871,  1898,  1030, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
     681, -2400, -2400, -2400, -2400, -2400,  1844,  1189,  1712,   689,
    1644, -2400,  2085, -2400,  1609,  2048,  1609,  1651, -2400, -2400,
   -2400, -2400,  1854, -2400, -2400, -2400, -2400,  1343, -2400,  1017,
    1279, -2400, -2400,  1843, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400,   412, -2400, -2400, -2400,   412,    -6, -2400,
   -2400,  1189, -2400, -2400, -2400, -2400,  1189, -2400, -2400, -2400,
   -2400, -2400,     8, -2400, -2400,  2090,  1733, -2400, -2400,     1,
   -2400,  1189, -2400,  2140, -2400, -2400, -2400,  1673, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400,  1017, -2400, -2400,
   -2400, -2400,  2141, -2400,   685, -2400,   685, -2400, -2400, -2400,
    2100,  2040,  1153,  1153, -2400,  1694,  1694, -2400,  1817,  1209,
      16, -2400,  1017, -2400, -2400,  6138, -2400,  1189,   709,  1896,
    1899, -2400,  1900, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
    1017, -2400, -2400, -2400, -2400,  1701, -2400,  1017,  1609, -2400,
    1017, -2400, -2400, -2400, -2400, -2400, -2400, -2400,   170,  1189,
    1189,  1387, -2400, -2400, -2400, -2400, -2400, -2400,  1549, -2400,
   -2400, -2400,  2049,   412,   412, -2400,  1189,  1189,   368,   368,
     412, -2400,   380, -2400, -2400, -2400,  1712,  1712,  6138, -2400,
    1153, -2400,  6138,  6138,  1189,  1209,  1209,  1825, -2400, -2400,
    1682,  1017, -2400, -2400,  1823, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400,  1335, -2400, -2400,  1017, -2400, -2400, -2400,  1189,
    1843,  1843, -2400,  1958,  1189,  1189, -2400,  1519,  1714, -2400,
   -2400,   129,   412, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400,   112,  1209,  1189, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400,  1207, -2400, -2400, -2400, -2400,
   -2400,  1830,  2067, -2400,  1843, -2400, -2400, -2400,  1843,  1843,
    1956,  1107,  1768,  1969,  1421,  1675,  1189,  1531, -2400,  1189,
    1189,  1017, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400,   -11, -2400,     9, -2400, -2400,
   -2400,  1107,  1768, -2400, -2400, -2400, -2400,   112, -2400,  1814,
    1761,    43,  1581, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
     158, -2400,  1189,  1381, -2400,  8199,  8199,  1222,  2064,  1992,
   -2400,  1421,   -11, -2400, -2400,  1421,     9, -2400, -2400,   158,
   -2400, -2400,  1017, -2400,  1066, -2400, -2400, -2400,    97, -2400,
     -11,  1402, -2400,  1524,  8119, -2400, -2400,   946,  1097, -2400,
   -2400,  1113, -2400, -2400, -2400, -2400,   -20,   -20, -2400, -2400,
   -2400, -2400, -2400,  8199, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400,  1852,   663,    97, -2400, -2400, -2400,  1752, -2400,
    1581, -2400, -2400, -2400, -2400, -2400, -2400, -2400,  1880, -2400,
    1880, -2400,  2142, -2400,  1581, -2400, -2400,  1889,  1017, -2400,
    1796,    -2,  1878, -2400, -2400,  8199,   696, -2400, -2400,  1421,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400,  1209, -2400
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,     5,     6,     4,
      43,     8,     9,    43,    43,     0,     0,     7,     0,    11,
      45,    15,    21,    32,    31,    33,    33,     0,     0,    47,
      16,    18,    43,     0,    14,    22,     0,     0,    28,    44,
       0,   175,     0,    17,    12,    19,    15,     0,    34,    30,
    1793,    46,     0,     0,     0,  1836,  1793,  1793,  1793,     0,
       0,     0,     0,     0,  1793,     0,     0,  1768,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1794,     0,     0,  1515,   125,  1793,
    1793,  1837,  1793,     0,     0,     0,     0,  1793,  1793,    60,
      82,     0,    54,    98,  1769,     0,  1793,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1830,    39,  1793,     0,     0,     0,  1583,   171,  1508,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1516,
     152,   153,  1795,   156,  1588,  1204,  1203,   116,   120,  1822,
    1793,     0,   100,   151,   178,   179,    38,  1831,    36,     0,
    1595,  1591,  1596,  1594,  1592,  1597,  1593,   160,   161,   163,
     172,   167,  1878,  1879,     0,   165,     0,  1767,     0,     0,
       0,  1793,  1900,    80,    61,  1766,    66,    68,    69,    70,
      71,  1766,     0,  1793,     0,    83,     0,    87,    55,    58,
     154,  1797,  1796,   157,     0,  1822,  1825,  1824,     0,     0,
     117,   121,     0,     0,   262,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1865,   166,     0,  1584,   170,  1899,  1793,
       0,     0,    65,    67,    63,    81,  1766,  1793,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1589,
     155,   158,     0,  1823,   123,   118,   119,   122,   180,     0,
       0,  1664,     0,   274,   270,    24,     0,   265,   267,   268,
     134,   137,     0,   164,     0,     0,  1898,    74,    64,     0,
    1509,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1665,   183,  1774,   271,   272,   273,  1756,
     281,     0,   263,   266,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1775,  1849,  1757,  1778,
       0,   283,   264,   138,   139,  1886,  1887,    72,  1832,  1850,
    1770,  1779,     0,     0,     0,   285,     0,  1811,  1832,  1857,
       0,   244,     0,  1793,  1766,  1798,   246,     0,  1867,  1864,
     232,   184,   231,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   243,   195,   196,   197,   198,   199,   200,
    1762,  1793,  1771,     0,  1494,   269,  1492,   282,     0,    25,
     140,  1812,  1793,  1833,  1798,  1858,  1859,   212,  1866,   247,
    1832,  1793,  1793,  1799,  1793,  1793,   256,  1756,   257,     0,
    1793,  1811,  1763,     0,     0,   275,   276,   279,  1493,   284,
     291,   292,   343,   286,   346,     0,     0,  1793,   214,   213,
     210,   246,   242,     0,     0,     0,     0,   255,  1826,  1826,
       0,   258,     0,  1793,   245,   228,   277,     0,   278,     0,
     499,   287,  1647,     0,   288,   222,   223,   221,   220,     0,
     206,   207,   217,   217,     0,   217,   209,   208,   217,     0,
    1514,  1513,   248,   249,   250,   251,   254,  1827,   259,   260,
     261,   229,     0,   280,     0,     0,   502,   348,     0,     0,
     352,     0,   290,   293,  1650,   218,   203,   219,   204,  1774,
     205,   202,   215,   201,   216,  1793,     0,   238,   237,   238,
     234,   344,     0,     0,   505,   351,     0,   349,     0,   358,
     359,   353,     0,   356,  1793,  1897,     0,   225,  1651,   211,
       0,   252,  1506,     0,   236,   235,   346,   500,     0,     0,
     600,   350,   355,   392,   361,  1770,  1793,     0,     0,  1793,
    1770,  1811,  1793,  1754,   289,     0,   294,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,     0,  1896,     0,
     224,   253,  1507,     0,   241,   345,   346,   503,     0,     0,
      26,  1793,  1758,     0,     0,     0,  1793,  1754,     0,     0,
       0,     0,     0,  1793,   339,  1755,   340,     0,   338,   341,
     295,   296,     0,     0,   501,   346,   506,     0,   663,     0,
     486,   416,  1838,  1838,  1838,  1838,  1838,  1860,   417,   452,
     454,   420,   421,   422,   423,   424,   425,   448,   446,   447,
     449,   450,   455,   453,   426,  1834,   451,     0,   427,   413,
     428,   429,     0,     0,  1841,   431,   432,   430,  1800,   434,
     435,   433,  1793,  1795,   393,   394,   395,   396,   397,   398,
     414,   418,   419,   399,   400,   401,   402,   403,   404,   405,
     406,   407,     0,     0,  1759,     0,   389,     0,   362,   317,
     337,  1888,  1889,  1512,   326,  1510,  1881,  1880,   319,  1809,
    1768,  1782,     0,  1793,   323,   322,  1793,   342,     0,   147,
     148,   227,     0,  1884,  1885,   239,   504,   508,   601,     0,
      27,   707,   497,   498,  1839,   445,   444,   437,   436,   443,
     442,   441,   440,   439,   438,  1861,     0,  1835,   483,   469,
     463,   408,  1577,   495,  1842,  1801,  1802,   484,     0,     0,
     410,   412,  1678,  1678,   391,     0,  1818,  1606,     0,     0,
    1602,  1607,  1605,  1603,  1608,  1604,   390,   363,  1598,  1600,
       0,   307,  1511,  1810,   328,     0,   310,  1783,  1843,   336,
       0,     0,   226,   240,   507,   603,   665,     0,     0,   485,
    1782,   465,     0,  1853,     0,  1575,  1576,     0,   415,   487,
     489,   491,     0,   409,  1766,   456,   457,  1599,  1819,     0,
       0,   372,   368,   371,   370,   369,   384,   380,   382,   383,
     385,   381,   386,   387,   388,   365,   376,   377,   378,   373,
     374,   375,   367,   364,     0,   318,   309,   308,   306,   327,
    1768,  1844,   315,   324,   321,   325,   320,     0,   509,     0,
     607,   602,   604,     0,   668,   666,   684,     0,   761,   836,
     845,   851,   858,   890,   894,   908,   903,   909,   910,   918,
     965,   974,   977,  1003,  1014,  1017,  1020,  1012,  1026,  1033,
    1055,  1059,  1095,  1097,  1101,     0,  1107,  1121,  1145,  1163,
    1164,  1167,  1168,  1173,  1181,  1182,  1195,  1229,  1247,     0,
    1280,  1292,  1300,  1302,   689,  1306,  1309,  1315,  1366,   709,
     710,   711,   712,   713,   714,   715,   716,   718,   717,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
     750,   751,   752,   753,   754,   755,   756,   757,   758,   708,
       0,     0,   463,   464,  1854,   467,  1626,  1621,  1627,     0,
       0,  1633,     0,  1481,  1483,     0,     0,     0,  1624,     0,
    1485,  1625,  1628,  1629,     0,     0,     0,     0,  1623,  1633,
    1622,  1465,  1463,  1470,  1473,  1475,  1478,  1542,  1480,  1539,
    1573,  1540,  1541,  1630,     0,     0,     0,  1574,   496,   493,
     490,     0,   411,  1679,   366,   379,  1601,     0,     0,   329,
     330,   331,   332,     0,   311,  1781,   317,     0,  1495,   510,
       0,   608,     0,   605,   673,   673,     0,     0,  1681,  1682,
    1683,  1684,  1685,  1686,  1687,  1688,  1689,  1690,  1691,  1692,
    1693,  1694,  1730,  1731,  1732,  1733,  1734,  1735,  1736,  1737,
    1738,  1739,  1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,
    1748,  1749,  1695,  1696,  1697,  1698,  1699,  1700,  1701,  1702,
    1703,  1704,  1705,  1706,  1707,  1708,  1709,  1710,  1711,  1712,
    1713,  1714,  1715,  1716,  1717,  1718,  1719,  1720,  1721,  1722,
    1723,  1724,  1725,  1680,  1726,  1727,  1728,  1729,   760,     0,
       0,     0,     0,   861,     0,     0,     0,     0,     0,     0,
       0,  1426,  1005,     0,     0,  1855,   881,   880,     0,  1025,
    1426,     0,     0,     0,     0,     0,     0,   759,     0,  1133,
       0,     0,     0,     0,     0,     0,     0,     0,  1276,  1279,
    1267,  1277,  1278,  1269,     0,     0,  1301,  1299,     0,   707,
       0,     0,     0,     0,   470,   466,   471,  1820,   474,     0,
       0,     0,  1619,  1543,  1544,  1545,     0,     0,     0,     0,
       0,     0,     0,  1477,     0,  1476,     0,  1620,  1466,  1467,
    1585,     0,     0,     0,     0,     0,     0,     0,     0,  1609,
       0,     0,     0,     0,   488,     0,   492,   335,   334,  1760,
    1768,   316,     0,   610,   611,   606,  1765,   673,   670,   676,
       0,   673,   685,   660,   783,   834,   786,   782,  1818,     0,
       0,  1533,   843,  1527,   841,  1522,  1524,  1525,  1526,   846,
       0,  1652,  1505,   852,   853,     0,  1501,  1503,  1502,   864,
     862,   863,   888,     0,  1555,   891,   892,  1554,   895,   898,
    1818,   906,     0,  1487,  1666,  1519,  1578,  1582,  1520,     0,
     916,  1832,  1602,   963,  1391,   927,   931,  1522,     0,  1524,
     972,     0,   865,   975,   984,   983,  1001,     0,   980,   982,
    1425,     0,  1007,  1011,  1009,  1012,  1010,  1004,  1015,  1016,
    1517,  1018,  1019,  1856,  1021,  1499,  1013,  1851,  1424,  1034,
    1036,  1056,  1057,  1060,     0,  1062,  1063,  1064,  1096,  1233,
    1570,  1571,     0,  1098,     0,  1105,     0,  1114,  1111,  1113,
    1112,  1108,  1115,  1135,  1505,  1122,  1133,  1124,     0,  1131,
       0,  1556,  1502,  1558,     0,  1161,  1658,  1165,  1369,  1490,
    1171,  1832,  1179,  1369,     0,  1193,  1186,  1491,     0,  1498,
    1196,  1197,  1198,  1199,  1200,  1201,  1222,  1202,  1225,     0,
    1496,     0,     0,  1569,  1582,  1230,  1265,  1252,  1270,  1764,
    1290,     0,  1283,  1285,     0,  1297,     0,  1303,  1304,   695,
     701,   690,   691,   692,   694,     0,  1307,     0,  1310,  1312,
    1332,  1318,  1379,  1369,   472,   474,  1821,     0,   478,   473,
    1465,  1463,     0,  1465,     0,  1635,  1465,  1482,  1484,  1465,
       0,     0,     0,  1465,  1536,  1537,  1538,     0,  1486,  1479,
    1465,     0,  1464,  1586,     0,  1469,  1468,  1472,  1471,  1474,
       0,     0,  1465,     0,  1793,  1761,     0,   313,     0,  1793,
    1840,   671,  1793,     0,   682,   674,   675,   686,   835,   762,
    1761,   796,   787,     0,     0,     0,     0,  1528,  1529,  1530,
     844,   837,     0,     0,  1523,  1654,  1653,   849,   854,   856,
       0,   889,   859,  1557,   865,   893,   898,  1890,  1891,   896,
       0,   899,     0,   907,   904,  1873,  1872,  1488,     0,  1668,
    1489,  1580,  1581,   913,   914,   917,   911,  1418,   964,   919,
     704,     0,   925,  1393,     0,   942,     0,   936,  1391,  1391,
    1391,  1391,   973,   966,     0,     0,   866,   976,  1002,   978,
    1426,  1426,   979,   986,   987,   704,  1450,  1451,  1452,  1446,
    1855,  1438,  1458,  1461,  1460,  1462,  1454,  1445,  1444,  1449,
    1448,  1447,  1453,  1433,  1437,  1455,  1457,  1459,  1435,  1436,
    1432,  1434,  1427,  1428,  1439,  1440,  1441,  1442,  1443,  1431,
    1008,  1006,  1518,  1023,  1852,   704,  1038,     0,  1058,     0,
    1085,  1069,  1061,  1066,  1067,  1068,  1237,     0,  1572,     0,
       0,  1106,  1102,     0,  1115,  1864,     0,  1123,  1129,  1130,
     704,  1126,  1426,     0,     0,  1134,     0,  1162,  1146,  1659,
    1660,  1832,     0,  1166,  1172,  1169,  1148,  1180,  1174,  1176,
    1188,  1194,  1183,     0,  1188,     0,  1550,  1551,  1223,  1226,
       0,     0,  1497,  1206,     0,  1205,     0,     0,  1580,  1266,
    1248,  1254,  1793,  1255,  1250,     0,  1268,     0,     0,  1291,
    1281,     0,  1284,     0,  1298,  1293,     0,  1305,   702,   700,
     693,     0,  1313,  1314,  1311,  1333,  1316,  1764,     0,  1380,
    1367,  1371,   478,   468,  1764,   461,   476,   477,  1798,     0,
    1630,     0,  1630,  1634,     0,  1630,  1630,  1630,     0,  1613,
       0,  1630,  1587,     0,  1630,  1630,  1863,     0,   333,  1820,
     312,   514,  1793,  1793,  1754,  1806,   539,   513,   517,   518,
       0,  1776,   625,  1793,   615,  1860,   616,  1869,  1868,     0,
    1793,     0,   628,   619,   624,  1813,   620,     0,   623,   630,
     627,   621,   626,     0,   631,   622,     0,   642,   636,   640,
     639,   637,   641,   612,   643,   638,     0,  1813,     0,  1793,
     683,     0,     0,   661,  1561,   792,  1559,  1560,   797,   798,
    1813,  1813,   790,   791,  1813,   778,  1382,  1871,  1870,   775,
     767,   769,   770,     0,  1382,     0,     0,     0,   784,   773,
       0,   781,   764,   780,   765,  1547,  1546,     0,  1532,     0,
    1818,  1396,   842,  1582,  1520,     0,  1656,   849,     0,   847,
       0,     0,  1504,   876,   897,   902,     0,     0,  1521,  1396,
    1793,  1667,  1579,   915,   704,   912,  1420,  1392,   705,   929,
    1760,   704,  1390,   935,   934,   933,   932,   943,  1391,  1793,
     946,     0,   949,   950,     0,  1793,   953,   954,   955,   956,
       0,  1793,   958,  1391,   944,     0,   798,   922,   923,   920,
     921,     0,  1396,     0,   872,   981,   996,   998,   997,   991,
     993,   999,  1426,   988,   985,  1426,   989,  1456,  1429,  1430,
    1820,  1022,  1500,   704,  1030,  1031,  1855,  1046,  1047,  1049,
    1051,  1052,  1048,  1050,  1041,  1855,  1037,     0,  1086,     0,
    1088,  1087,  1089,  1071,  1081,     0,     0,  1065,  1239,     0,
    1784,     0,  1099,  1396,     0,     0,     0,  1117,  1127,  1140,
    1136,  1141,  1137,  1142,     0,  1132,  1376,  1375,  1139,  1148,
    1370,  1566,  1567,  1568,     0,     0,  1418,     0,   704,     0,
    1187,     0,     0,     0,  1224,     0,  1228,  1227,  1220,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1208,  1209,
    1661,  1418,     0,  1271,  1847,  1847,  1286,  1287,  1288,     0,
    1396,     0,     0,   703,     0,  1648,     0,  1288,  1176,  1750,
     462,     0,  1793,  1644,  1617,  1646,  1618,  1642,  1614,  1615,
    1616,  1640,  1637,  1638,  1612,  1631,     0,  1610,  1611,   494,
       0,     0,  1915,  1916,  1793,  1754,     0,   511,   515,  1777,
     519,     0,     0,   613,   614,   617,   618,     0,   645,  1814,
    1793,  1853,  1793,   646,   644,   658,  1793,   677,   678,   681,
       0,   672,   687,   689,  1793,   800,     0,     0,   788,   789,
       0,  1384,  1385,   779,  1386,   704,   766,   768,  1382,   776,
     771,   772,   785,   774,  1549,  1531,  1548,  1666,     0,   704,
     838,  1398,  1580,  1581,  1396,     0,  1655,   848,   850,   857,
     855,   884,  1791,   901,   900,   905,     0,  1419,   704,  1417,
     707,  1394,   924,     0,   947,   948,   951,   952,     0,  1422,
    1422,     0,   945,   926,   938,   939,   937,   940,     0,   967,
       0,   867,   868,   676,     0,  1426,  1426,   995,   704,   992,
       0,  1029,   704,  1032,  1027,     0,     0,  1053,     0,     0,
       0,  1082,  1084,     0,  1077,  1091,  1078,  1079,  1070,  1073,
    1091,  1231,  1793,  1798,     0,  1785,  1238,  1100,  1103,     0,
    1117,  1116,  1120,  1109,     0,  1128,  1125,     0,     0,  1150,
    1149,   704,  1170,  1406,  1175,  1177,     0,  1189,  1426,  1426,
    1184,  1190,  1207,  1219,  1221,  1211,  1212,  1213,  1217,  1214,
    1218,  1215,  1216,  1210,  1662,  1264,     0,  1261,  1262,  1256,
       0,  1249,  1895,  1894,     0,  1848,  1274,  1274,  1401,     0,
    1666,  1294,     0,   696,     0,  1649,  1319,  1320,     0,  1323,
    1326,  1330,  1324,  1418,  1751,     0,   482,   479,   480,     0,
    1632,   314,   516,  1807,  1808,  1590,   527,   524,   357,   540,
     520,   521,   635,   634,   651,   657,     0,   654,   679,   680,
     689,   707,     0,     0,  1382,   793,   795,   794,  1388,  1389,
    1381,   704,  1383,   777,  1396,  1521,  1397,   704,  1395,  1579,
     839,  1657,  1552,  1553,  1876,  1877,   886,   704,  1818,  1792,
     883,   882,   878,     0,  1670,  1671,  1672,  1673,  1674,  1675,
    1676,  1677,  1669,  1421,     0,   960,   959,   962,     0,  1564,
    1565,   961,   957,     0,   930,  1396,  1487,  1396,  1487,   869,
     870,     0,   874,   873,   875,   994,  1000,   990,  1024,  1028,
    1039,  1042,  1043,  1772,  1035,  1855,  1040,  1091,  1091,     0,
    1076,  1074,  1075,  1080,  1241,     0,  1235,  1786,  1396,  1110,
    1119,     0,  1143,     0,     0,  1157,     0,  1410,   704,  1405,
    1178,   704,   704,  1191,  1263,  1253,  1257,  1258,  1259,  1260,
    1251,  1272,  1275,  1273,   704,  1282,  1403,  1793,  1396,  1396,
     698,  1308,  1648,  1322,  1782,  1328,  1782,  1401,   704,   704,
    1368,  1378,  1413,  1414,  1377,  1374,  1373,  1803,   481,   475,
     523,  1882,  1883,   526,   359,   541,   522,   649,   647,   650,
     648,   652,   653,     0,   629,   655,   656,     0,   707,   799,
     804,  1793,   806,   807,   808,   833,  1793,   809,   810,   811,
     812,   813,     0,   814,   815,   817,     0,   818,   819,     0,
     820,  1793,   805,  1752,   823,   832,   826,   801,   802,   825,
     763,  1387,   840,  1399,   704,   860,   885,     0,   877,  1892,
    1893,  1423,   941,   969,     0,   968,     0,   871,  1044,  1773,
       0,     0,  1072,  1083,  1091,  1789,  1789,  1092,     0,     0,
    1244,  1240,  1234,  1104,  1118,     0,  1151,  1793,  1418,     0,
       0,  1152,     0,  1156,  1411,  1185,  1192,  1402,   704,  1400,
       0,  1296,  1295,  1334,   697,     0,  1321,     0,  1782,  1325,
       0,  1317,  1415,  1416,  1412,  1804,  1805,  1372,     0,  1793,
    1793,     0,   528,   529,   530,   531,   532,   533,     0,   543,
     632,   633,     0,     0,     0,   824,  1793,  1793,  1422,  1422,
       0,  1753,     0,   803,   887,   879,  1396,  1396,     0,  1054,
    1090,  1790,     0,     0,  1793,  1242,     0,     0,  1232,  1236,
       0,     0,  1147,  1160,  1408,  1409,  1159,  1155,  1153,  1154,
    1404,  1289,  1342,   699,  1327,     0,  1331,  1902,  1901,  1793,
       0,     0,  1904,     0,  1793,  1793,   525,  1840,     0,   828,
     827,     0,     0,   830,   829,   822,   831,  1562,  1563,   971,
     970,  1045,  1094,  1093,     0,  1245,  1793,  1426,  1158,  1407,
    1365,  1364,  1343,  1335,  1336,  1752,  1337,  1338,  1339,  1340,
    1363,     0,     0,  1329,     0,   538,   534,  1903,     0,     0,
    1787,  1815,  1754,     0,     0,     0,  1793,  1818,   542,  1793,
    1793,     0,   548,   550,   559,   551,   553,   556,   544,   545,
     546,   555,   557,   560,   547,     0,   552,     0,   554,   558,
     549,  1815,  1754,   688,   816,   821,  1243,     0,  1144,     0,
    1845,     0,  1820,   535,   537,   536,  1788,   598,  1816,  1817,
    1795,   584,  1793,   463,  1426,     0,     0,     0,     0,     0,
     592,     0,   582,   588,   591,     0,   585,   593,   596,  1795,
     587,  1246,     0,  1846,     0,  1361,  1360,  1359,     0,   583,
       0,  1853,   580,  1666,   576,  1534,  1906,     0,     0,  1908,
    1910,     0,  1914,  1912,   561,   565,   569,   569,   563,   567,
     562,   568,   599,     0,   590,   589,   595,   594,   586,  1362,
    1875,  1874,  1828,  1355,  1349,  1350,  1352,   574,   467,   597,
    1820,   575,  1535,  1905,  1909,  1907,  1913,  1911,   572,   564,
     572,   566,     0,  1829,  1820,  1358,  1353,  1356,     0,  1351,
     459,     0,     0,   571,   570,     0,     0,  1357,  1354,     0,
     458,   579,   577,   578,   573,   581,  1348,  1345,  1347,  1346,
    1341,  1344,   460
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2400, -2400, -2400, -2400, -2400,  2188, -2400, -2400, -2400,   217,
   -2400,  2153, -2400,  2109, -2400, -2400,  1314, -2400, -2400, -2400,
    1263, -2400, -2400,  1317,  2177, -2400, -2400,  2077, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,  2005,
     773, -2400, -2400, -2400, -2400, -2400,  2059, -2400, -2400, -2400,
   -2400,  2003, -2400, -2400, -2400, -2400, -2400, -2400,  2136, -2400,
   -2400, -2400, -2400,  1993, -2400, -2400, -2400, -2400,  1975, -2400,
   -2400,   943, -2400, -2400, -2400, -2400, -2400,  2065, -2400, -2400,
   -2400, -2400,  2039, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400,  1077, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400,  1700, -2400,  1808, -2400,
   -2400, -2400,  1755, -2400, -2400, -2400, -2400,   314, -2400, -2400,
    1940, -2400, -2400, -2400, -2400, -2400,  1807, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400,  1195, -2400, -2400, -2400,  1447, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400,   500, -2400, -2400,  1728, -2400,  -755,  -833, -2400, -2400,
   -2400,   411, -2400, -2400, -2400, -2400,   -82, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -1416,   777,  1483,   551,   594, -1415,
   -2400, -2400, -2400,  -949, -2400,  -479, -2400, -2400,   825, -2400,
     335,   563, -2400,    40, -1414, -2400, -1412, -2400, -1411, -2400,
   -2400,  1442, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400,  -447,  -477, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -1724, -2400,
    -412, -2400, -2400, -2400, -2400, -2400, -2400, -2400,  1394, -2400,
   -2400, -2400,    28,    36, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400,  1214,   228, -2400,   154, -2400,
   -2400, -2400, -2400, -1347, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400,   -39, -2400, -2400,  -703, -2400,  1460, -2400, -2400, -2400,
   -2400, -2400, -2400,  1025,   489,   493, -2400,   413, -2400, -2400,
    -150,  -134, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400,   465, -2400, -2400, -2400,  1020, -2400, -2400, -2400, -2400,
   -2400,   776, -2400, -2400,   173, -2400, -2400, -1277, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,   779, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400,   756, -2400, -2400, -2400, -2400,
   -2400,    -7, -1790, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400,   738, -2400, -2400,   736, -2400,
   -2400,   410,   181, -2400, -2400, -2400, -2400, -2400,   982, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400,    -5,   702, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400,   697, -2400, -2400,   163, -2400,   391,
   -2400, -2400, -1482, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400,   954,   693,   159, -2400,
   -2400, -2400, -2400, -2400, -2400, -1762,   956, -2400, -2400, -2400,
     151, -2400, -2400, -2400,   371, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400,   325, -2400, -2400, -2400, -2400, -2400, -2400,   672,   146,
   -2400, -2400, -2400, -2400, -2400,  -132, -2400, -2400, -2400, -2400,
     351, -2400, -2400, -2400,   933, -2400,   936, -2400, -2400,  1154,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,   127,
   -2400, -2400, -2400, -2400, -2400,   925,   338, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,   -34,
   -2400,   345, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400,  -393, -2400, -2400, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400,  -178, -2400,   642, -2400, -2400, -1638,
   -2400, -2400, -2400, -2400,  -427, -2400, -2400, -1760, -2400, -2400,
     -31, -2400, -2400, -2400, -2400,  -131, -2218, -2400, -2400,   -38,
   -1865, -2400, -2400, -1971, -1561, -1066, -1469, -2400, -2400,   753,
   -1801,   148,   149,   156,   157,   315,   107,  -774,   328,   426,
   -2400,   652,  -481, -1403, -1094,   118,   970, -1569,  -392,   -85,
   -2400, -1313, -2400, -1062, -2399,   845,  -533,   -88,  2023, -2400,
    1634,  -556,    45,  2178, -1072, -1071,  -858,  -374, -2400, -1104,
   -1235, -2400,   394, -1301, -1926, -1107,  1079, -1923, -2400, -2400,
     612, -1121, -2400,   215,   449,  -624, -2400, -2400,  -103, -1204,
    -766,  -111,  2066, -1938,  2092,  -673,  1513,   344,  -373, -2400,
   -2400, -2400,   -26,  1349, -2400, -2400,   349, -2400, -2400, -2400,
   -2400, -2400, -2400, -2400, -2400, -2400, -2400, -2400, -1993, -2400,
   -2400,  1587, -2400, -2400,  -240,  -591,  1924, -2400, -1188, -2400,
   -1315,  -249,  -635,   865, -2400,  1833, -2400, -1451, -2400,  -778,
   -2400, -2400,   -99, -2400,    31,  -659,  -356, -2400, -2400, -2400,
   -2400,   271,  -334,  -278, -1209, -1555,  2131,  1901, -2400, -2400,
    -333, -2400, -2400,   978, -2400, -2400, -2400,   393, -2400,   240,
   -1966, -1494, -2400, -2400, -2400,  -172,   453, -1408, -1535, -2400,
   -2400, -2400,  -712, -2400, -2400,  1637, -2400,  1809, -2400, -2400,
   -2400,   767, -2400, -2261,  -293, -2400, -2400, -2400, -2400, -2400,
   -2400
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    30,
      12,    31,    44,    45,    34,    35,    19,   320,   432,   618,
      32,    50,    14,    25,    37,    95,   131,   132,    20,    29,
      41,    69,    70,   148,   208,   267,    71,   145,   194,   195,
     196,   197,   198,   199,   200,   331,   201,    72,   146,   205,
     206,   207,   262,   304,   263,    73,    74,    75,    76,    77,
     116,   157,   276,   158,    78,   133,   237,   238,   239,   324,
     343,   240,   711,    79,   121,    80,   150,   151,   152,   270,
      81,   177,   178,    82,    83,   244,    84,    85,    86,    87,
      88,    89,    90,   123,   224,   165,   225,   335,   348,   373,
     374,   478,   479,   440,   513,   506,   375,   468,   376,   580,
     377,   378,   379,   380,   381,   520,   544,   382,   383,   384,
     385,   386,   484,   387,   388,   417,   389,   451,   285,   286,
     287,   288,   319,   289,   315,   425,   426,   458,   341,   355,
     399,   433,   434,   503,   435,   534,   566,   567,   838,   568,
    1700,  1026,   771,   569,   570,   706,   844,   571,   572,   839,
    1019,  1020,  1021,  1022,   573,   574,   575,   576,   608,   460,
     546,   461,   462,   497,   498,   553,   499,   531,   532,   592,
     766,   825,   826,   827,   828,   829,   500,   686,   591,   664,
     665,   666,   803,   667,   668,   669,   670,   671,   672,   673,
    2604,  2740,   674,   793,   962,  1168,   791,  1405,  1408,  1409,
    1678,  1675,  2197,  2198,   675,   676,   677,   678,   679,  1009,
     799,   800,  1204,   680,   681,   496,   586,   524,   615,   550,
     717,   784,   848,  1212,  1449,  1707,  1708,  2000,  2210,  1709,
    2206,  2360,  2482,  2483,  2484,  2485,  2486,  2487,  1997,  2209,
    2489,  2547,  2608,  2609,  2684,  2719,  2733,  2610,  2611,  2711,
    2742,  2612,  2613,  2614,  2615,  2616,  2617,  2652,  2653,  2656,
    2657,  2618,  2619,  2620,   590,   785,   851,   852,   853,  1214,
    1450,  1743,  2371,  2372,  2373,  2377,  1744,  1745,   720,  1457,
    2023,   721,   856,  1035,  1034,  1217,  1218,  1219,  1454,  1751,
    1037,  1753,  2220,  1159,  1391,  1392,  2340,  2464,  1393,  1394,
    1962,  1817,  1818,  2070,  1395,   788,   909,   910,  1109,  1225,
    1226,  1782,  1461,  1517,  1762,  1763,  1759,  2025,  2224,  2407,
    2408,  2409,  1459,   911,  1110,  1232,  1473,  1471,   912,  1111,
    1239,  1799,   913,  1112,  1243,  1244,  1801,   914,  1113,  1252,
    1253,  1527,  1854,  2091,  2092,  2093,  2061,  1128,  2252,  2246,
    2415,  1482,   915,  1114,  1255,   916,  1115,  1258,  1489,   917,
    1116,  1261,  1494,   918,   919,   920,  1117,  1270,  1503,  1506,
     921,  1118,  1273,  1274,  1511,  1275,  1515,  1846,  2086,  2274,
    1828,  1843,  1844,  1509,   922,  1119,  1280,  1523,   923,  1120,
    1283,   924,  1121,  1286,  1287,  1288,  1532,  1533,  1534,  1864,
    1535,  1859,  1860,  2097,  1529,   925,  1122,  1297,  1129,   926,
    1123,  1298,   927,  1124,  1301,   928,  1125,  1304,  1871,   929,
     930,  1130,  1875,  2104,   931,  1131,  1309,  1576,  1884,  2107,
    2291,  2292,  2293,  2294,   932,  1132,  1311,   933,  1133,  1313,
    1314,  1582,  1583,  1896,  1584,  1585,  2118,  2119,  1893,  1894,
    1895,  2112,  2300,  2437,   934,  1134,   935,  1135,  1323,   936,
    1136,  1325,  1592,   937,  1138,  1331,  1332,  1596,  2133,   938,
    1139,  1335,  1600,  2136,  1601,  1336,  1337,  1338,  1910,  1912,
    1913,   939,  1140,  1345,  1925,  2315,  2448,  2522,  1608,   940,
     941,  1141,  1347,   942,   943,  1142,  1350,  1615,   944,  1143,
    1352,  1926,  1618,   945,   946,  1144,  1355,  1624,  1929,  2150,
    2151,  1622,   947,  1145,  1360,   159,  1636,  1361,  1362,  1948,
    1949,  1363,  1364,  1365,  1366,  1367,  1368,   948,  1146,  1318,
    2304,  1586,  2442,  1898,  2121,  2440,  2518,   949,  1147,  1376,
    1951,  1644,  2166,  2167,  2168,  1640,   950,  1378,  1646,  2331,
    1153,   951,  1154,  1380,  1381,  1382,  2178,  1650,   952,  1155,
    1385,  1655,   953,  1157,   954,  1158,  1387,   955,  1160,  1396,
     956,  1161,  1398,  1664,   957,  1162,  1400,  1668,  2186,  2187,
    1967,  2189,  2345,  2469,  2347,  1666,  2465,  2532,  2573,  2574,
    2575,  2750,  2576,  2704,  2705,  2728,  2577,  2667,  2578,  2579,
    2580,   958,  1163,  1402,  1613,  1968,  1918,  2350,  1670,  2033,
    2034,  2035,  2230,  2231,  1512,  1513,  1822,  2050,  2051,  2238,
    2335,  2336,  2459,  2142,  2523,  2143,  2319,  2351,  2352,  2353,
    1815,  1816,  2069,  2267,  1307,  1308,  1290,  1291,  1562,  1563,
    1564,  1565,  1566,  1567,  1568,   991,  1191,  1411,   993,   994,
     995,   996,  1233,  1262,  1497,  1348,  1356,   395,   396,  1029,
    1369,  1370,  1573,  1339,  1246,  1247,   541,   481,   301,   694,
     695,   482,    98,   153,  1299,  1264,  1234,  1474,  2674,  1423,
     998,  1787,  2045,  2120,  2241,  1256,  1340,  1755,  2556,  2268,
    1920,  1756,  1319,  1373,  1236,  1000,  1265,  1266,   742,   795,
     796,  1757,   271,  2654,   179,  1237,   768,   769,  1238,  1003,
    1004,  1005,  1199,  1172,  1431,  1427,  1420,  1412,  1414,   501,
    2188,   537,  1477,  1797,  2056,  1611,  2170,   282,  1500,  1811,
    2262,   805,  1108,  2195,  2502,   606,   339,   687,  1463,   423,
    1220,   202,   115,   393,  2430,   337,  2001,   352,  1027,   778,
    2126,  2637,  2512,  2253,    96,   214,   414,   747,  2477,  1996,
     774,   402,  2010,  2640,   809,  1407,   218,   488,  2724,   168,
     390,   738,   102,   726,   683,   842,  2664,  2176,   350,  1575,
     965,  1305,   407,   736,  1205,  1344,   391,  1764,  1784,  1498,
    2702,  2247,   184,   698,  2363,   715,   347,   598,  1491,  2421,
    2174,   538,   203,  2539,  2545,  2687,  2688,  2689,  2690,  2691,
    1711
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     139,   427,   139,   428,   749,   160,   692,   581,   139,   245,
     415,  1278,   960,  1166,   767,   138,  1031,   141,   787,  1465,
     992,  1446,  1263,   147,  1372,   404,   215,  1907,   741,  1007,
     849,  1899,   139,   427,  1737,  1739,  1740,   268,  1741,  1742,
    1807,  1911,  1747,   464,   699,  2215,  1867,   180,   437,  2065,
    1245,  1492,  1300,  2082,  2234,  1289,  1632,  1625,  2207,  1310,
    1300,  2144,  1861,  1501,  1648,   776,   463,   279,  1354,  1791,
    1530,   211,   259,  1371,  1300,  1017,   801,   708,  1888,  2212,
     345,   246,  1430,   226,  2213,  2248,  2171,   103,   104,   105,
    -664,  1216,  2089,   264,   291,   111,  1441,   849,    99,  -662,
   -1820,  1645,  1856,  2225,  2226,   107,  2703,  2227,   854,  2271,
     220,  1823,   535,  1216,  1870,   411,   114,  1588,   117,  2385,
    2079,   392,  1852,  1579,  2492,  2498,   801,  1889,    52,   836,
     134,   135,  1460,   136,   832,   832,  2039,   448,   143,   144,
     297,   321,   755,  2128,  1990,   215,   360,   161,  1485,  2169,
    2265,  1783, -1764,   127,  1598,  2266,   703,  2718,  2272,   529,
   -1598, -1571,  1540,  2003,   169, -1572,  2244, -1760,  2438, -1760,
    1638,  2218, -1798,  2665,  1785,  2741,    53,   413,   480,   752,
     211,  1245,   227,  2297,   327,   832,  1524,  2338,   505, -1820,
    1903,   219,  1359,  2172,   704,   512,  1982,   419,   535, -1864,
    2181,  1826,  2074,  1954,  1216,  1024,   221,   745,   430,  2282,
    1475,  1184, -1864,  2280,    54, -1864,    55, -1864,    56,  2516,
    2544,  2124,   251,   182,  1856,  1717,    57,  1718,  1572,  -664,
    2525, -1864,  1202,  -664,   258, -1577,  1126,   739,  -662,  1572,
     129,   712,  -662,  1676,   -96,  2205,    23,  1890,    43, -1575,
    1260,   724,   128,  1960,  2049,  1242,   418,   724,  2341,   724,
    1276,  1176,  1177,   274,   275,  2205,    94,   228,  1182,  2706,
     216,   525,  2357,  1805,  1602,  2650, -1577,  2537,  1887,  1452,
     295,   212,    58,   724,   155,  1359,   156,  2538,   299,  1188,
    -664,   204,  1603,   794,  2240,  1630,  1300,  1386,  1806,  -662,
    1572, -1851,  2004,  1193,   843,  2706,  2569,  2249,  1194,    43,
    1891,   229,   183,   997,    42,  2100,  1452,   311,  2125,  2651,
     713,   230,   714,   725, -1647,  1188,  1188,   314,  2354,   727,
    1955,   729,  1677,    24,  2517,   231,  2130,  1240,  1206,  2655,
     139,  2075,   139,   139,   130,   757,   493,  1453,  1173,   139,
    1824,   746,  1965,  1242, -1760,   731,   280,   485,   486,  1971,
    1964,  2173,  1786,  2324,   491,  1525,   139,   154,  1242,   507,
     507,  1631,   507,  2434,    60,   507,   514,   243,  1263,   281,
   -1864,   485,  2105,  1406,  1453,  1254,  2685,   -96,  2250,   760,
     212,  2108,  2054,  1861,   410,   154,  1861,  1580,  1260,   761,
    2233, -1764,  1188,   232,  1419,  1419,  1419,   243,   834,  2044,
     753,  1127,  1188,   139,   283,   449,   735,  1432,  1434,    61,
   -1864,  1002,   424, -1764,  1440,  2488,   837,  1983,   542,   431,
     137,  1263,  -664,   436, -1760,   260,   129,   139,   139,   755,
     137,  -662,   443,   444,  2439,   445,   446,   137, -1798,  1389,
    2490,   452,   542,   582,  2491,  1216,   757,  1188,  1555,  1188,
    1316,  1207,  1208,   217,  1289,  2245,  2666,  1599,   469,  1260,
    1581,  1448,  2038,   233,  2412,   243,   234,   235,   139,   450,
    2283,   762,  2080,   689,   492,   368,   709,  2499,   137,   705,
     700,  2364,  1761,   582,   536,  2405,  1018,   139,   794,  1263,
     760,  1502,  1390,   997,   997,   997,   137,   137,   775,    64,
     761,  1872,  1006,     5, -1764,  2423,  1633,  2425,  1902,  1300,
    2098,    97,  1825,   292,  2254,   997,  2062,  2553,  2554,   137,
     284,   346,  -512,  -669,   243,  1480,   740, -1793,  1857,  2094,
     130,  1892,  1915,  2251, -1764,  1389,   540,   265,  2443,  1858,
     743,   763,    67,   855,  1389,  1013,   137,   149,  1531,  1572,
    -512,  -512,  1263,   261,  2558,   577, -1764,   137,   465,   236,
    2549,  2550,   118,   394, -1663,  1447,  1260,  2555,  2461,  2462,
     536,  2048,   710,  2526,  1981,   593,  2410,   595,  2322,  2052,
     600,   602,   762,   604,  2113,   322,   794,   764,  1390,  1175,
    1006,  1188,  2585,  2586,   757,   137,  1467,  1390,  1502,  1516,
    -669,  1002,  1002,  1002,  1193,  1702,   243,   255,  1189,  1194,
     137,   609,   682,  2284,   154,    68,  1861,   691,   351,  2625,
     997,  2152,  2082,  1002,   702,  1574,  2205,   137,  2303,  1260,
   -1851,   137,   757,  1703,  1704,  1224,  2633,   765,   760,   187,
    2634,  2635, -1766,   707,  1189,  1189,   188, -1764,   761,   835,
    1857,   137,   763,   684,   840,   583,   555,  1023,   154,   517,
    1190,  1858,    94,   283,  -512,   757,  2221,   845,   845,  2658,
    2709,   963,   556,   696,   222,  2275,   760,  2277,   997,   997,
     997,  1260,   453,   748,  1008,  1260,   761,   997,   997,   997,
   -1833,  1263,  -512,   850,   305,  2708, -1643, -1645,   764,  1455,
     997,   997,   997,   997,   997,   997,   997,   997,  2658,   760,
     997,   187,   557,  1259,  1809,  1271,  2308,  2058,   188,   761,
    1495,  1189,     4,   154,   780,  1812,  1235,   781,  1002,  2060,
     762,  1189,  2145,  2310,  1277,  1281,  2559,  2560,  1346,  1540,
    1351,   243,   137,   438,  1306,  1377,  1994,  1995,   765, -1864,
    1317,  1324,  1326,     3,   416, -1764,  1343,  2146,  2311,  1399,
     850,  2255,  2256,  2257,  2017,   412,  2094,  1460,   762,  2339,
    1383,  1235,   757,  1683,  -667,    94,  1189,  1358,  1189,   284,
     584,   466,  -512, -1639,   697,  1025,  1002,  1002,  1002,   439,
    1126,  2431,  2626, -1778,   518,  1002,  1002,  1002,  1426,  2298,
     763,   762, -1760,  1426, -1760,  2432,  2433,  1148,  1002,  1002,
    1002,  1002,  1002,  1002,  1002,  1002,   760,  1426,  1002,  2127,
    1300,  1572,   603,   685, -1864,  2258,   761,    15, -1636,  2141,
    1695,  1788,  1634,    27,   137,   757,   467,   306,   763,   223,
    1165,    94,  1456,  2018, -1539, -1780,   764,  1469,   558,   724,
     189,  -667,  1717,  1888,  1718,  2661,  1486,  2746,  1808,   559,
    2515, -1864,  1812,  2378,     5,  1705,   137,  1504,  1635,  2164,
    1343,   763,  2356,  2165,  2202,  1940, -1864,  2343,   137,   760,
    1698, -1864,  2314,  1941,   764,   -35, -1864,   757,   413,   761,
     137,   757,  1249,   519,  1359,  1432,   765,  1432, -1764,  1149,
    1658, -1864,  1889,  1933,   139,   139,  1211,  1569,   762,  1986,
     137,  2747,  1327,    16,   316,  -512,  1754,   764,  2695,  2748,
    1189,   733,   189,   190,   470,   471,   472, -1864,  1507,  1922,
    1814,   760,  1641,   328,   765,   760,  2707,  2565,  1589,   187,
    1150,   761,  2510,  2546,  2114,   761,   188,   187,  2269,  2269,
    2259,  2260, -1864,  1343,   188,  2261, -1539,    18,   253,  1659,
    2725,   137,   560,   561,   755,  1127,  1328,   765,   154,  1151,
    2348,   762, -1641,  -659,  1329,   317,   318,   562,   763,   563,
     191,    28,  1193,  1359,  2276,   192,  2278,  1194,   154, -1760,
    2318,  1642,  2726,  2115,  1643,   190,  2628,  1383,  1706,  1248,
     243,   137,  2622,  1267,  2749,   756,     5,   997,  1616,  1476,
    1267,  1302,   722,  2727,  1989,  2367,  1496,  2053,  1267,   253,
    2286,  1321,  1890,   762,   764,  1263,  1342,   762,  1349,  2417,
    1349,  1357,  1374,  1321,  2355,  1555,   585,  1312,  1922,  1760,
     405,   763,   782,  1814,   473,  1250,  1572,  1251,  1942,  1284,
    1349,  1829,   191,    33,  1830, -1833, -1085,   192,   474,  1330,
    1285,  1831,  1832,  1388,   564,  1152,  1916,  2668,   137, -1760,
     723,  2582,  2321,  2672,   765,  2368,   614,  1490,  1263, -1793,
    1943,  1847,  1848,  1849,  1850,  1891,  1269,   764,  1792,   807,
     193,   406,  2049,   763,   243,  1917,   997,   763,  1609,  2374,
   -1085,  1813,  1944,  1993,  2349,   716,   243,    94,  1833,   254,
   -1085,   565,  -659,   329,  1877,  1002,  -659,  1878,  1879,  1761,
     610,  2602,  2603,  2605,  2713,  2606,  2607,  1820,  1577,  2621,
    1248,   137,   361,  1193,   750,   515,   394,   765,  1194,   764,
    1851,  1853,   475,   764,  1292,  2731,  2587,   757,  1610,  1267,
     189,  2435,   611,  2046,   228,   476,  1945,  2751,   189,  2736,
     833,    94,   255,    36,   362,  1619,   751,   757,  1016, -1864,
     757, -1862,   243,  -659,   330,   516,  2116,  1834,  1569,   596,
    2436,   597,  1510,   137,   300,   154,  1267,   137,   997,   765,
     997,   760, -1085,   765,   394,    39,  1647,  1267,   229,   758,
     759,   761,   997,   810,  1002,  2501,  1835,  2369,   230,  1904,
    1014,   760,  2370, -1864,   760,  1671,  1578,  1946,  2700,  1203,
     137,   761,  2701,   190,   761,   325,  1754,  1836,    40,  1923,
     170,   190,  2208,   999,  2629,    48,  2449,   155, -1864,   156,
   -1539,  1357,   811,   812,   813,   814,   815,   477, -1539, -1539,
    1938,  1353, -1864, -1539,  1267,    13,  2450,   344,  1267,    49,
      13,  1953, -1085,    51,  1957,   403,  2676,  2542,  1919,  1293,
    1294,  1403,  1961,   441,   171,  2714,  2239, -1864,   629,   630,
     191,  1837,  2451,   762,   172,   192,  1295,    97,   191,   400,
     232,  2716,  1657,   192,   139,    93,  1002,  2715,  1002,   830,
     830,  2046,  2677,   762,  1490,  1426,   762,  2452, -1085,  1673,
    1002,   719,  1972,  2717,  1947,  -659,  1892,    21,    22,  2537,
    2506,  1876,  2507,    26,  1877,  2084,  2085,  1878,  1879,  2538,
    1542,  1543,  2132,   139,  2581,  1838,    46,   252,  1923,  1320,
      47,  1296,   831,   831,   100,   298,  1429,  1321,  1487,    91,
     830,  1320, -1085,   763,    52,  1445,  1193,  2264, -1085,  1793,
     233,  1194,   713,  1936,   714,  2365,   173,  2269,  2269,  1544,
    1545,  2557,  2243,   763,  1937,   109,   763,   757,  2646,  1880,
    1881,   816,   817,   818,   819,   820,   821,   822,   642,   643,
    2330,  2072,  2031,   831,  2204,  2032,  1839,  2638,  2639,   764,
    2673,  2675,    53,  2016,  1882,  1883,  2083,  2117,   101,  1840,
     594,    94,  1793,  1906,  2235,   601,  2026,  2027,  1195,   764,
    2030,   760,   764,   999,   999,   999,  2243,  1196,  1841,  2712,
     106,   761,  2542, -1778,  2624,  1451,   174,  1927,   108,  1451,
      54,  1192,    55,   137,    56,   999,   110,  2478,  2722,   765,
    1193,   112,    57,  2570,   113,  1194,   236,  2479,   243,   394,
    1248,  1662,  1952,  1663,   114,  1697,   137,  2543,  1488,   765,
    1710,  1746,   765,  1748,  1410,  1413,  1416,  1267,   120,  2480,
    1793,  2005,   175,  2006,  2537,  1692,  1866,   122,  2200,  1934,
    2745,  1248,  2571,  1842,  2538,  1193,   124,   243,  1193,   126,
    1194,  2243,  2076,  1194,  2077,   428,  1442,  1679,    58,  2481,
    1681,  1435,  1436,   762,   351,   137,  1684,  1267,  1421,  1422,
    1688,  1693,  1765,  1766,  2453,   140,  1874,  1690,   142,  2572,
    1193,   149,   176,   823,  2678,  1194,   162,  1963,  2679,  2680,
     508,   164,   510,  1793,   167,   511,   824,  2228,  1227,  2229,
    1241,  1908,   181,  1257,   627,  2154,  2467,  1279,  2470, -1555,
   -1555, -1555, -1555,  2361,  1767,  2362,  1768,   163,  1769,    59,
     185,   139,  1315,   186,  1717,  1767,  1718,  1768,  1341,  2419,
    2681,  2420,  1556,   763,  1557,  2475,  1977,  2476,   204,  1880,
    1881,   728,   730,   732,   734,   242,  2682,  2683,   193,  1397,
      60,  1401,  1770,  1771,  1772,  1767,  2011,  1768,   999,   999,
     999,  1437,  1438,  1439,  1882,  1883,  2243,   999,   999,   999,
    1424,  1518,  1519,  1520,  1521,  1424,  1183,  2019,  1185,   764,
     999,   999,   999,   999,   999,   999,   999,   999,   247,  1424,
     999,   248,   249,   250,  1974,    61,  1976,   257,    62,  1978,
    1979,  1980,  1773,   269,  1774,  1984,  2359,   273,  1987,  1988,
     278,  1775,   296,  1950,  1776,   294, -1760,   154,  1466, -1554,
   -1554, -1554, -1554,   302,   300,   303,   307,   308,  1267,   765,
    2535,   309,  1267,   997,  2671,  1267,   312,   313,  1248,   326,
     333,   334,  1341,   336,  1257,  2380,   338,   340,  2381,   342,
     351,  2382,   349,   353,   354,   356,   392,   394,   401,  2383,
     137,   397,   398,   403,    63,   187,   243,   420,  2590,   409,
     408,   421,   422,  1991,  1992,  2134,   429,   413,   428,   459,
     454,   455,   457,  -347,  2002,    64,   494,   487,   490,  1267,
     483,  2007,   495,   502,   645,   509,   521,   522,   523,   527,
    1777,   533,  1778,   547,  2313,  2384,   543,  2306,   548,   549,
      65,  2591,    66,  2592,   551,  2067,  -360,   554,   578,  1359,
    2020,   579,  2071,   552,  2385,  1341,  2179,   587,    67,   588,
     605,   589,   607,   612,   613,  2179,  1927,   616,  1267,  1267,
    1267,  1002,  2332,  2332,  2593,   617,   688,  1626,  2155,  2156,
    2157,  2158,  2159,  2160,  2161,  2162,   701,   690,   693,   718,
     735,   770,   737,   744,   754,  2594,   773,   777,   779,   786,
     790,   792,   789,  1653,  2101,   794,   797,   802,   808,   834,
     357,  2066,   804,   841,   847,   961, -1647,   649,  1006,  1011,
    1012,   964,  1015,  2595,  1036,   358,  1028,  1267,  1137,  1033,
    2073,    68,  1156,  2386,  1164,   359,  2078,  1167,  1209,  1197,
    1222,  2387,  2081,  1213,  1169,  1282,  1303,  1170,  1171,  1178,
    1179,  1180,  1215,  1181,  2388,  1186,  1198,   139,  1200,  2147,
    1201,  1406,  1404,  1223,  1417,  1443,  1444,  1418,  1445,  1321,
     360,  1458,  2201,  1428,  1321,  1464,  1470,  2427,  1479,  2219,
    1493,  1481,  1499,  1528,  1505,  1570,  2389,  1508,  1574,  1522,
    1590,  1587,  1593,  1321,  1321,  1591,   654,  1321,  1595,  1526,
   -1557,  1605,  1604,  1607,  1612,  2596,  2390,  1614,  2391,  1606,
    1617,  1359,  1621,  1637,  1623,  1639,  1216,   999,  1649,  1661,
    1654,  1267,  2597,  1665,  1667,  1779,  1669,  1674,  2134,  1680,
    2392,  2393,  1682,  1685,  1686,  1696,  1687,  2316,  2270,  2270,
    1321,  1699,  1689,  1701,  2598,  1321,  1321,  1321,  1321,  1691,
    1694,  2669,  1749,  1758,  1750,  1267,  1752,  1267,  1789,  1796,
    1795,  1798,  2394,  1810,  1800,  2599,  2232,  1242,  1814,  1821,
    2698,  2641,  1827,  2199,  1845,  1780,  1510,  1862,  1873,  1865,
    2236,  1886,  1580,  1901,  2600,  1909,  1781,  1928,  1924,  2395,
    2396,   663,  2601,  1932,  1267,  2203,  1267,  1939,  1626,  2263,
    1959,  2660,  1998,  1966,  1999,  2009,   999,  2012,  2021,  2022,
    1760,  2214,  2015,  2216,  2024,  2036,  2397,  2217,  2037,  2040,
    2041,  2042,  1914,  2398,  2063,  2222,   361,  2055,  2059,  2287,
    2064,  1921,  1460,  2289,  2088,  2068,  2399,  2043,  2090,  2095,
    2400,  2520,  1930,  2096,  2102,  2103,  2109,  2106,  2110,  1267,
    2129,  2135,  2137,  2141,  2138,  2401,  2175,  2148,   362,  2182,
    2149,  2183,  1321,  2184,  2185,  2194,   139, -1576,  -233,  2205,
    1958,  2196,  2317,  2223,  2237,  2273,  2299,  2290,  2296,  2302,
    1626,   542,  2402,  2307,  2318,  2320,  2334,  2342,  2344,  2346,
    2379,  2403, -1532,   428,  2337,  2049, -1574,  2414,   999,  2429,
     999,  2444,  2445,  2446,  2561,  2447,  2424,  1424,  2562,  2563,
    2463,  2458,   999,  2426,  2468,  2497,  2349,  2496,  2501,  2508,
    2404,  2509,   363,  2305,  2511,  2514,  2533,   364,  2527,  2548,
    2405,  2528,  2529,  2566,   997,   997,  2406,  2567,  2587,  2623,
    1921,  2631,  1267,   428,  1267,  2632,  1829,  2636,  2642,  1830,
    2644,  2663,  2013,  2662,  2692,  2014,  1831,  1832,  2693,   365,
    2723,  2735,  2411,   997,  2732,    17,  2737,   366,  2413,    92,
    2744,   125,   139,    38,   166,  1267,   256,   209,  2416,   266,
     367,   119,   997,   290,   277,   210,   241,  2441,   442,   545,
    2131,  1210,  1626,  2739,   504,   526,   323,  1738,   846,  2730,
    1672,   798,   456,  1833,  2123,  1970,  1267,  2358,  2047,   368,
    2721,  1010,   369,  2734,  2697,  2375,  1032,  2281,   959,  1221,
     370,  1462,  2029,  2376,   997,  2028,   139,  2503,  2495,  2087,
    1803,  -230,  2057,  1478,  2279,  1804,  2422,  1819,  1855,  1863,
    1321,   582,  1002,  1002,  1321,  2099,  2285,  1571,  1885,  2454,
    1897,  2301,  2455,  2456,  2111,  1594,  2428,  1905,  2312,  2309,
    2139,   371,  1597,  2193,   372,  2457,  1931,  2323,  1628,  2163,
    1375,  1002,  1834,  1629,  2333,  2191,  1652,  1001,  2466,  2472,
    2473,  2729,  2192,  1969,  2474,  1869,  2471,  2524,  2326,  2327,
    1002,  1267,   332,  1267,  1620,  1802,  2328,  2329,   772,  2153,
     213,  1835,  1484,  2008,   293,  2630,   310,  2513,  1187,  2519,
     806,   447,   539,  2659,  1626,  1626,   272,  2295,  2177,   783,
     489,  2122,  1836,  1900,  2686,     0,     0,     0,     0,   428,
       0,     0,  1002,     0,     0,     0,     0,   599,  2460,     0,
       0,     0,     0,  2140,     0,  2504,     0,     0,     0,     0,
       0,  1626,     0,     0,     0,     0,     0,  2270,  2270,     0,
    1321,  1321,     0,     0,     0,  1321,  1321,  1321,     0,  1321,
     755,     0,     0,     0,     0,     0,  1837,     0,  2180,     0,
       0,     0,  2493,     0,     0,  2190,  2190,  2494,     0,  2530,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2500,     0,     0,     0,     0,     0,     0,     0,
    1257,     0,     0,     0,     0,     0,     0,     0,     0,  1321,
    2211,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1838,  1248,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   966,     0,     0,     0,  2521,     0,
       0,     0,     0,  2643,     0,  1174,     0,     0,     0,     0,
       0,   967,     0,     0,     0,   966,     0,  1001,  1001,  1001,
       0,     0,     0,     0,  2242,     0,     0,     0,     0,     0,
    2540,  2541,   967,     0,     0,     0,     0,     0,     0,  1001,
       0,  1839,     0,     0,  1248,     0,     0,  2551,  2552,     0,
       0,     0,     0,     0,  1840,     0,     0,     0,     0,     0,
    2694,     0,     0,     0,  2696,  2564,     0,     0,     0,  2288,
       0,     0,     0,  1841,     0,     0,     0,     0,  2242,  1626,
       0,     0,     0,     0,     0,  1248,  1228,  1626,     0,   755,
    2584,     0,  1536,  1537,  1538,  2588,  2589,     0,     0,     0,
    1539,     0,     0,   968,   969,   970,  1914,     0,     0,     0,
       0,     0,   971,     0,     0,     0,     0,  2627,     0,     0,
       0,  1248,     0,   757,   968,   969,   970,     0,     0,     0,
       0,     0,     0,   971,     0,  2325,     0,     0,  1842,     0,
       0,     0,     0,   999,  1001,  2738,     0,  2645,  2752,  1268,
    2647,  2648,     0,  2242,     0,     0,  1268,  1626,     0,     0,
       0,     0,     0,   966,  1268,     0,     0,   760,     0,   975,
     976,   977,     0,     0,     0,   978,     0,   761,  1268,  2366,
     967,     0,     0,     0,     0,  1257,     0,     0,  1483,     0,
     975,   976,   977,  2670,     0,     0,   978,     0,     0,     0,
       0,     0,  1001,  1001,  1001,     0,     0,     0,     0,     0,
       0,  1001,  1001,  1001,  1425,   979,     0,     0,     0,  1425,
       0,     0,  2418,     0,  1001,  1001,  1001,  1001,  1001,  1001,
    1001,  1001,     0,  1425,  1001,     0,   979,     0,     0,     0,
    1540,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1541,     0,     0,     0,     0,     0,     0,     0,     0,   762,
       0,     0,     0,  1468,     0,     0,     0,     0,  2242,     0,
       0,     0,   968,   969,   970,     0,     0,     0,     0,     0,
       0,   971,     0,     0,     0,     0,     0,  1542,  1543,     0,
     981,     0,   757,     0,     0,  1268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   981,  1868,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1230,  1544,  1545,     0,   763,
       0,   973,  1268,   974,     0,     0,   760,     0,   975,   976,
     977,   982,   983,  1268,   978,     0,   761,     0,     0,     0,
       0,  1231,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   982,   983,  1546,     0,     0,     0,     0,     0,
    1547,     0,     0,     0,  1548,   764,     0,     0,     0,     0,
       0,     0,  1549,     0,   979,   987,  2505,     0,     0,  1550,
       0,  1627,     0,     0,  1551,     0,     0,     0,     0,     0,
    1268,     0,     0,   980,  1268,   988,   987,     0,     0,     0,
     989,     0,     0,  1552,     0,     0,     0,   990,     0,   137,
       0,     0,     0,     0,     0,   765,   988,     0,   762,  2531,
       0,   989,     0,     0,     0,     0,  2534,     0,   990,  2536,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   981,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2568,     0,     0,     0,     0,     0,     0,     0,   763,     0,
       0,     0,     0,     0,  2583,  1794,     0,     0,     0,     0,
     982,   983,     0,     0,     0,     0,     0,     0,     0,     0,
    1257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1001,  1553,     0,  1554,     0,  1555,     0,     0,  1556,
       0,  1557,  1558,  1559,   764,     0,  1560,  1561,     0,     0,
       0,     0,     0,     0,   987,     0,     0,     0,  1794,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2649,     0,     0,     0,   988,     0,     0,     0,     0,   989,
       0,     0,     0,     0,     0,     0,   990,     0,   137,     0,
       0,     0,     0,     0,   765,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1627,     0,   999,   999,     0,     0,     0,     0,
    1001,     0,     0,  1268,     0,     0,  1794,     0,   857,     0,
     858,  2699,   859,     0,     0,     0,     0,   860,     0,     0,
       0,     0,     0,   999,     0,   861,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2720,  2720,     0,     0,     0,
       0,     0,   999,  1268,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   862,   863,
       0,     0,     0,     0,     0,     0,     0,     0,   864,  1794,
       0,     0,   966,     0,  1627,     0,     0,     0,     0,   865,
    2743,     0,   866,     0,   999,     0,     0,     0,     0,   967,
       0,     0,  1001,     0,  1001,     0,   867,     0,     0,     0,
       0,  1425,     0,     0,     0,     0,  1001,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   868,
       0,     0,     0,     0,     0,     0,     0,   869,     0,   870,
       0,     0,     0,     0,     0,     0,  -706,     0,  -706,  -706,
    -706,  -706,  -706,  -706,  -706,  -706,     0,  -706,  -706,  -706,
       0,  -706,  -706,  -706,  -706,  -706,  -706,  -706,  -706,  -706,
     871,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   872,     0,     0,     0,     0,   873,     0,     0,     0,
    1333,   968,   969,   970,     0,     0,  1627,     0,     0,     0,
     971,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   874,     0,  1268,     0,     0,     0,  1268,   875,
       0,  1268,   876,   877,     0,     0,     0,     0,     0,     0,
       0,     0,   878,     0,     0,     0,     0,     0,     0,   879,
       0,   880,     0,     0,   881,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1334,     0,   975,   976,   977,
       0,     0,     0,   978,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1268,     0,     0,     0,   966,
       0,     0,     0,     0,     0,     0,   882,     0,     0,     0,
     883,     0,   884,     0,     0,     0,   967,     0,     0,     0,
       0,     0,   885,   979,     0,     0,     0,     0,  -706,  -706,
    -706,     0,  -706,  -706,  -706,  -706,     0,     0,  1627,  1627,
       0,     0,     0,     0,  1268,  1268,  1268,     0,     0,   886,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   887,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1627,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   888,   889,
       0,     0,     0,     0,     0,     0,     0,     0,   981,   890,
       0,     0,     0,  1268,     0,     0,     0,     0,   968,   969,
     970,     0,     0,   891,   892,     0,     0,   971,     0,     0,
     893,     0,     0,     0,   894,     0,     0,     0,   757,     0,
       0,     0,   895,     0,     0,   857,     0,   858,     0,   859,
       0,     0,   896,     0,   860,     0,     0,     0,     0,   982,
     983,   897,   861,     0,     0,     0,     0,     0,     0,     0,
     898,     0, -1864,     0,     0,   899,   900,     0,     0,   901,
       0,   902,   760,     0,   975,   976,   977,     0,     0,   903,
     978,     0,   761,     0,     0,   862,   863,     0,     0,     0,
       0,     0,  -706,   987,     0,   864,     0,  1268,     0,     0,
       0,     0,     0,     0, -1138,     0,   865,     0,     0,   866,
     905,     0,     0,   988,     0,     0,   906,     0,   989,     0,
     979,   907, -1138,   867,     0,   990,   243,   137,     0,     0,
       0,  1268,     0,  1268,   857,     0,   858,     0,   859,     0,
       0,     0,  -706,   860,     0,     0,   868,     0,   908,     0,
       0,   861,     0,  1627,   869,     0,   870,     0,     0,     0,
       0,  1627,     0,     0,   762,     0,     0,     0,     0,     0,
    1268,     0,  1268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   862,   863,     0,   871,     0,     0,
       0,     0,     0,     0,   864,   981,     0,     0,   872,     0,
       0,     0,     0,   873,     0,   865,     0,     0,   866,     0,
       0,     0,     0,     0,     0,     0,     0,  1001,     0,     0,
       0,     0,   867,     0,     0,  1268,     0,     0,     0,   874,
       0,  1627,     0,     0,   763,     0,   875,     0,     0,   876,
     877,     0,     0,     0,     0,   868,   982,   983,     0,   878,
       0,     0,     0,   869,     0,   870,   879,     0,   880,     0,
       0,   881,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,     0,     0,     0,     0,   871,     0,     0,     0,
     987,     0,     0,     0,     0,     0,     0,   872,     0,     0,
       0,     0,   873,   882,     0,     0,     0,   883,     0,   884,
     988,     0,     0,     0,     0,   989,     0,     0,  1268,   885,
    1268,     0,   990,     0,   137,     0,     0,     0,   874,     0,
     765,     0,     0,     0,     0,   875,     0,     0,   876,   877,
       0,     0,     0,     0,     0,     0,   886,     0,   878,     0,
       0,  1268,     0,     0,     0,   879,     0,   880,     0,   887,
     881,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1268,     0,     0,   888,   889,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   890,     0,     0,     0,
       0,     0,   882,     0,     0,     0,   883,     0,   884,     0,
     891,   892,     0,     0,     0,     0,     0,   893,   885,     0,
       0,   894,     0,     0,     0,     0,     0,     0,     0,   895,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   896,
       0,     0,     0,     0,     0,   886,     0,     0,   897,     0,
       0,     0,     0,     0,     0,     0,     0,   898,   887,     0,
       0,     0,   899,   900,     0,     0,   901,  1268,   902,  1268,
       0,     0,     0,     0,     0,     0,   903,     0,     0,     0,
       0,     0,     0,     0,   888,   889,     0,     0,     0,   904,
       0,     0,     0,     0,     0,   890,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   905,     0,   891,
     892,     0,     0,   906,     0,     0,   893,     0,   907,     0,
     894,     0,     0,     0,     0,     0,     0,   857,   895,   858,
       0,   859,     0,     0,     0,     0,   860,     0,   896,     0,
       0,     0,     0,     0,   861,   908,     0,   897,     0,     0,
       0,     0,     0,     0,     0,     0,   898,     0,     0,     0,
       0,   899,   900,     0,     0,   901,     0,   902,     0,     0,
       0,     0,     0,     0,     0,   903,     0,   862,   863,     0,
       0,     0,     0,     0,     0,     0,     0,   864,  1660,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   865,     0,
       0,   866,     0,     0,     0,     0,   905,     0,     0,     0,
       0,     0,   906,     0,     0,   867,     0,   907,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   868,     0,
       0,     0,     0,     0,   908,     0,   869,     0,   870,     0,
       0,     0,     0,     0,   966,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   967,     0,     0,     0,     0,     0,     0,     0,   871,
       0,     0,     0,     0,     0,     0,     0,     0,  1001,  1001,
     872,     0,     0,     0,     0,   873,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1001,     0,     0,
       0,   874,     0,     0,     0,     0,     0,     0,   875,     0,
       0,   876,   877,     0,     0,     0,  1001,     0,     0,     0,
       0,   878,     0,     0,     0,     0,     0,     0,   879,     0,
     880,     0,     0,   881,     0,     0,     0,     0,     0,     0,
       0,     0,  1333,   968,   969,   970,     0,     0,     0,     0,
       0,     0,   971,     0,     0,     0,     0,     0,  1001,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   882,     0,     0,     0,   883,
       0,   884,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   885,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1483,     0,   975,
     976,   977,     0,     0,     0,   978,     0,     0,   886,     0,
       0,     0,     0,     0,     0,     0,     0,  1038,     0,  1039,
       0,   887,     0,     0,  1040,     0,     0,     0,     0,     0,
       0,     0,  1041,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   979,     0,   888,   889,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   890,     0,
       0,     0,     0,     0,     0,  1042,  1043,     0,     0,     0,
       0,     0,   891,   892,     0,  1044,     0,     0,     0,   893,
       0,     0,     0,   894,     0,     0,  1045,     0,     0,  1046,
       0,   895,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   896,     0,  1047,     0,     0,     0,     0,  1228,     0,
     897,   755,     0,     0,  1536,  1537,  1538,     0,     0,   898,
     981,     0,  1539,     0,   899,   900,  1048,     0,   901,     0,
     902,     0,     0,     0,  1049,     0,  1050,     0,   903,     0,
       0,     0,     0,  1051,     0,  1052,  1053,  1054,  1055,  1056,
    1057,  1058,  1059,     0,  1060,  1061,  1062,     0,  1063,  1064,
    1065,  1066,  1067,  1068,  1069,  1070,  1071,  1072,     0,   905,
       0,   982,   983,     0,     0,   906,     0,     0,  1073,     0,
     907,     0,     0,  1074, -1864,   966,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   967,     0,     0,     0,     0,   908,     0,  1075,
       0,     0,     0,     0,     0,   987,  1076,     0,     0,  1077,
    1078,     0,     0,     0,     0,     0, -1138,     0,     0,  1079,
       0,     0,     0,     0,     0,   988,  1080,     0,  1081,     0,
     989,  1082,     0,     0, -1138,     0,     0,   990,   243,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1540,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1541,     0,     0,     0,     0,  -872,     0,     0,
    -872,     0,     0,  1083,     0,     0,     0,  1084,     0,  1085,
       0,     0,     0,     0,   968,   969,   970,     0,     0,  1086,
       0,     0,     0,   971,     0,     0,     0,     0,     0,  1542,
    1543,     0,     0,     0,   757,     0,     0,     0,     0,     0,
    1216,     0,     0,     0,     0,     0,  1087,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1088,
       0,     0,     0,     0,     0,     0,     0,  1230,  1544,  1545,
       0,     0,     0,   973,  -872,   974,     0,     0,   760, -1764,
     975,   976,   977,     0,     0,  1089,   978,     0,   761,     0,
       0,  -872,     0,  1231,     0,     0,  1090,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1546,     0,     0,     0,
       0,  1091,  1547,     0,     0,     0,  1548,  1092,     0,     0,
       0,  1093,     0,     0,  1549,     0,   979,     0,     0,  1094,
       0,  1550,     0,     0,     0,     0,  1551,     0,     0,  1095,
       0,     0,     0,     0,     0,   980,     0,  1228,  1096,     0,
     755,     0,     0,     0,     0,  1552,     0,  1097,     0,     0,
       0,     0,  1098,  1099,     0,     0,  1100,     0,  1101,     0,
     762,     0,     0,     0,     0,     0,  1102,     0,     0,     0,
       0,     0,     0,  -872,  -872,  -872,     0,     0,     0,  1103,
       0,     0,  -872,     0,     0,     0,  1228,     0,     0,   755,
       0,   981,     0,  -872,     0,     0,     0,  1104,     0,     0,
       0,     0,     0,  1105,     0,     0,     0,     0,  1106,     0,
       0,     0,     0,     0,   966,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -872,     0,     0,     0,
     763,   967,  -872,     0,  -872,  1107,     0,  -872,     0,  -872,
    -872,  -872,   982,   983,     0,  -872,     0,  -872,     0,     0,
       0,     0,  -872,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   966,  1553,     0,  1554,     0,  1555,     0,
       0,  1556,     0,  1557,  1558,  1559,   764,     0,  1560,  1561,
     967,     0,     0,     0,  1935,  -872,   987,     0,     0,     0,
    -872,     0,     0,  1379,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -872,     0,   988,     0,     0,     0,
       0,   989,     0,     0,     0,     0,     0,     0,   990,     0,
     137,     0,     0,   968,   969,   970,   765,     0,     0,  -872,
       0,     0,   971,     0,     0,     0,     0,     0,     0,     0,
   -1764,     0,     0,   757,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -872,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   968,   969,   970,     0,  1230,     0,     0,     0,
       0,   971,   973,     0,   974,     0,     0,   760,     0,   975,
     976,   977,   757,  -872,     0,   978,     0,   761,     0,  -872,
       0,     0,  1231,     0,     0,     0,     0,     0,  1651,     0,
       0,  -872,  -872,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1230,     0,     0,     0,     0,
       0,   973,     0,   974,     0,   979,   760,     0,   975,   976,
     977,     0,     0,     0,   978,  -872,   761,     0,     0,     0,
       0,  1231,     0,     0,   980,  -872,     0,     0,     0,     0,
       0,  -872,  1228,     0,     0,   755,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -872,     0,     0,  1228,   762,
    -872,   755,     0, -1764,   979,     0,     0,  -872,     0,  -872,
       0,     0,     0,     0,     0,  -872,     0,     0,     0,     0,
       0,     0,     0,   980,     0,     0,     0,     0,     0,     0,
     981,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   762,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   966,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   763,
       0,  1229,     0,     0,     0,   966,   967,     0,     0,   981,
       0,   982,   983,     0,     0,     0,     0,  1322,     0,     0,
       0,     0,   967,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1936,     0,
       0,     0,     0,     0,     0,   764,     0,     0,   763,  1937,
       0,     0,     0,     0,     0,   987,     0,     0,     0,     0,
     982,   983,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   988,     0,     0,     0,     0,
     989,     0,     0,     0,     0,     0,     0,   990,     0,   137,
       0,     0,     0,     0,   764,   765,     0,     0,   968,   969,
     970,     0,     0,     0,   987,     0,     0,   971,     0,     0,
       0,     0,     0,     0,   968,   969,   970,     0,   757,     0,
       0,     0,     0,   971,   988,     0,     0,     0,     0,   989,
       0,     0,     0,     0,   757,     0,   990,     0,   137,     0,
       0,     0,     0,     0,   765,     0,     0,     0,     0,     0,
       0,  1230,     0,     0,     0,     0,     0,   973,     0,   974,
       0,     0,   760,     0,   975,   976,   977,  1230,     0,     0,
     978,     0,   761,   973,     0,   974,     0,  1231,   760,     0,
     975,   976,   977,     0,     0,     0,   978,  1228,   761,     0,
     755,     0,     0,  1231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1228,     0,     0,   755,     0,     0,     0,
     979,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   979,     0,     0,   980,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   980,     0,     0,     0,     0,
       0,     0,     0,     0,   762,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   966,     0,     0,     0,     0,     0,
     762,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     966,   967,     0,     0,     0,   981,     0,     0,     0,     0,
       0,     0,  1384,     0,  1379,     0,     0,   967,     0,     0,
       0,   981,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   982,   983,     0,     0,
     763,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   982,   983,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,     0,   968,   969,   970,     0,     0,     0,     0,
     987,     0,   971,     0,     0,     0,   764,     0,     0,   968,
     969,   970,     0,   757,     0,     0,   987,     0,   971,  1228,
     988,     0,   755,     0,     0,   989,     0,     0,     0,   757,
       0,     0,   990,     0,   137,     0,   988,     0,     0,     0,
     765,   989,     0,     0,     0,     0,  1230,     0,   990,     0,
     137,     0,   973,     0,   974,     0,   765,   760,     0,   975,
     976,   977,  1230,     0,     0,   978,     0,   761,   973,     0,
     974,     0,  1231,   760,     0,   975,   976,   977,     0,     0,
       0,   978,     0,   761,     0,     0,     0,     0,  1231,     0,
       0,     0,     0,     0,     0,     0,   966,     0,     0,  -928,
       0,     0,  -928,     0,     0,   979,     0,     0,     0,     0,
       0,     0,     0,   967,     0,     0,     0,     0,     0,     0,
       0,   979,     0,     0,   980,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     980,     0,     0,     0,     0,     0,     0,     0,     0,   762,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   762,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -928,     0,     0,     0,
     981,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -928,     0,     0,   981,     0,     0,     0,
       0,     0,     0,     0,     0,   968,   969,   970,     0,     0,
       0,     0,     0,     0,   971,     0,     0,     0,     0,   763,
       0,     0,     0,     0,     0,   757,     0,     0,     0,     0,
       0,   982,   983,     0,     0,   763,     0,     0,     0,     0,
       0,  1228,     0,     0,   755,     0,     0,   982,   983,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1230,  1510,
       0,     0,     0,     0,   973,   764,   974,     0,     0,   760,
       0,   975,   976,   977,     0,   987,     0,   978,     0,   761,
       0,   764,     0,     0,  1231,  -928,  -928,  -928,     0,     0,
       0,   987,     0,     0,  -928,   988,     0,     0,     0,     0,
     989,     0,     0,     0,     0,  -928,     0,   990,     0,   137,
       0,   988,     0,     0,     0,   765,   989,   979,   966,     0,
       0,     0,     0,   990,     0,   137,     0,     0,     0,     0,
       0,   765,     0,     0,     0,   967,   980,     0,  -928,     0,
       0,     0,     0,     0,  -928,     0,  -928,     0,     0,  -928,
       0,  -928,  -928,  -928,     0,     0,     0,  -928,     0,  -928,
       0,   762,     0,     0,  -928,  1228,     0,     0,   755,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   981,     0,     0,     0,     0,  -928,     0,     0,
       0,     0,  1228,     0,     0,   755,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -928,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   968,   969,   970,
       0,   763,     0,     0,     0,     0,   971,     0,     0,     0,
       0,  -928,   966,   982,   983,     0,     0,   757,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   967,
       0,     0,     0,  1472,     0,     0,     0,     0,     0,     0,
       0,     0,  -928,     0,     0,     0,     0,   764,     0,   966,
    1230,     0,     0,     0,     0,     0,   973,   987,   974,     0,
       0,   760,     0,   975,   976,   977,   967,     0,     0,   978,
       0,   761,     0,     0,     0,     0,  1231,   988,     0,     0,
       0,  -928,   989,     0,     0,     0,     0,     0,     0,   990,
       0,   137,     0,  -928,  -928,     0,  1228,   765,     0,   755,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   979,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   968,   969,   970,     0,  1656,     0,  -928,   980,     0,
     971,     0,     0,     0,     0,     0,     0,  -928,     0,     0,
       0,   757,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   762,     0,     0,     0,  -928,   968,   969,
     970,     0,  -928,     0,     0,     0,     0,   971,     0,  -928,
       0,  -928,     0,   966,  1230,     0,     0,  -928,   757,     0,
     973,     0,   974,     0,   981,   760,     0,   975,   976,   977,
     967,     0,     0,   978,  1228,   761,     0,   755,     0,     0,
    1231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1230,     0,     0,     0,     0,     0,   973,     0,   974,
       0,     0,   760,   763,   975,   976,   977,     0,     0,     0,
     978,     0,   761,   979,     0,   982,   983,  1231,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   980,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   764,
     979,   966,     0,     0,     0,     0,     0,   762,     0,   987,
       0,     0,   968,   969,   970,     0,     0,     0,   967,   980,
       0,   971,     0,  1514,     0,     0,     0,     0,     0,   988,
       0,     0,   757,     0,   989,     0,     0,     0,   981,     0,
       0,   990,     0,   137,   762,     0,     0,     0,  1790,   765,
       0,   755,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1230,     0,     0,     0,     0,
       0,   973,     0,   974,     0,   981,  1272,   763,   975,   976,
     977,     0,     0,     0,   978,     0,   761,     0,     0,   982,
     983,  1231,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1956,     0,
     968,   969,   970,     0,   763,     0,     0,     0,     0,   971,
       0,     0,     0,   764,   979,   966,   982,   983,     0,     0,
     757,     0,     0,   987,     0,     0,     0,     0,     0,     0,
       0,     0,   967,   980,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,     0,     0,     0,   989,     0,
     764,     0,     0,  1230,     0,   990,     0,   137,   762,   973,
     987,   974,     0,   765,   760,     0,   975,   976,   977,     0,
       0,     0,   978,     0,   761,     0,     0,     0,     0,  1231,
     988,     0,     0,     0,     0,   989,     0,     0,     0,   981,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   979,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   968,   969,   970,     0,   763,     0,
       0,   980,     0,   971,     0,     0,     0,     0,     0,     0,
     982,   983,     0,     0,   757,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   762,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   764,     0,     0,  1230,     0,     0,
       0,     0,     0,   973,   987,   974,     0,   981,   760,     0,
     975,   976,   977,     0,     0,     0,   978,     0,   761,     0,
       0,     0,     0,  1231,   988,     0,     0,     0,     0,   989,
       0,     0,     0,     0,     0,     0,   990,     0,   137,  1030,
       0,     0,     0,     0,   765,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   979,     0,   982,   983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,     0,  -357,     0,   980,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,  -357,  -357,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
     762,     0,   987,  -357,     0,  -357,     0,     0,     0,     0,
       0,     0,  -357,     0,  -357,  -357,  -357,  -357,  -357,  -357,
    -357,     0,   988,     0,     0,     0,     0,   989,     0,     0,
       0,   981,     0,     0,   990,     0,   137,     0,     0,     0,
       0,     0,   765,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   621,   622,   623,   624,   625,   626,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     763,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   982,   983,     0,     0,     0,   628,     0,   629,
     630,   631,   632,   633,   634,   635,     0,     0,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   529,     0,   764,  -357,  -357,  -357,
    -357,  -357,     0,     0,  -357,  -357,   987,     0,  -357,     0,
       0,     0,     0,   636,  -357,     0,  -357,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,   988,     0,     0,  -357,
       0,   989,     0,     0,     0,     0,     0,  -357,   990,     0,
     137,     0,     0,     0,     0,     0,   765,     0,     0,     0,
    -357,     0,     0,  -357,     0,     0,     0,     0,     0,  -357,
       0,  -357,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,   637,   638,   639,   640,   641,     0,   528,   642,
     643,     0,     0,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   644,  -357,     0,     0,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,  -357,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,  -357,
       0,  -357,     0,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
       0,     0,  -357,     0,  -357,     0,     0,     0,     0,     0,
     646,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -357,     0,     0,     0,     0,     0,  -357,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   648,     0,  -357,     0,     0,     0,     0,
       0,     0,     0,     0,   650,  -357,     0,  -357,  -357,  -357,
       0,     0,     0,     0,     0,     0,     0,   651,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,     0,   529,     0,     0,  -357,  -357,  -357,  -357,
    -357,     0,     0,  -357,  -357,     0,     0,     0,  -357,     0,
       0,     0,     0,  -357,     0,     0,     0,     0,  -357,     0,
       0,  -357,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,     0,     0,     0,  -357,  -357,     0,     0,  -357,
    -357,  -357,   655,   656,   657,     0,     0,     0,     0,  -357,
     619,     0,  -357,  -357,     0,     0,     0,     0,  -357,  -357,
    -357,     0,     0,     0,     0,   620,   530,     0,   621,   622,
     623,   624,   625,   626,   627,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,   628,     0,   629,   630,   631,   632,   633,
     634,   635,     0,     0,   659,   660,   661,     0,     0,     0,
       0,     0,     0,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,  -357,   636,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -357,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   637,   638,
     639,   640,   641,     0,     0,   642,   643,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,  -357,  -357,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   644,     0,
       0,     0,     0,  -357,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,   645,     0,     0,     0,     0,     0,
   -1840,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,  -357,
    -357,     0,     0,     0,     0,     0,   646,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,     0,   530,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   647,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   648,
       0,     0,     0,     0,     0,     0,     0,   649,     0,     0,
     650,     0,     0,     0,     0,     0,     0,     0,  1712,     0,
       0,  1713,     0,   651,  1714,   621,   622,   623,   624,   625,
     626,  1715,  1716,     0,     0,     0,   652,     0,     0,     0,
       0,     0,     0,     0,   653,     0,     0,     0,     0,     0,
       0,  1717,     0,  1718,     0,     0,     0,     0,     0,     0,
     628,     0,   629,   630,   631,   632,   633,   634,   635,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   654,     0,   655,   656,
     657,   966,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   636,     0,   967,     0,
       0,     0,     0,     0,   966,   658,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   967,     0,     0,  -354,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1719,     0,     0,
       0, -1840,     0,     0,     0,     0,     0,     0,     0,     0,
     659,   660,   661,     0,     0,   637,   638,   639,   640,   641,
       0,     0,   642,   643,   662,     0,  1720,     0,     0,     0,
       0,   663,  1721,     0,  1722,     0,     0,     0,     0,     0,
   -1793,     0,     0,     0,     0,     0,     0,  1723,     0,     0,
     968,   969,   970,     0,     0,   644,     0,     0,     0,   971,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
     757,   645,     0,   968,   969,   970,     0,     0,     0,  1724,
       0,     0,   971,     0,     0,     0,     0,     0,  1725,     0,
       0,     0,     0,   757,     0,     0,     0,     0,     0,     0,
       0,  1726,   966,   972,     0,     0,     0,     0,     0,   973,
       0,   974,     0,   646,   760,     0,   975,   976,   977,   967,
       0,     0,   978,     0,   761,     0,   972,     0,     0,     0,
       0,     0,   973,     0,   974,     0,     0,   760,     0,   975,
     976,   977,  1727,     0,     0,   978,     0,   761,     0,     0,
       0,     0,     0,     0,     0,  1728,   648,     0,     0,     0,
       0,     0,   979,     0,   649,     0,     0,   650,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     651,   980,  1729,     0,     0,   979,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   980,     0,   762,     0,     0,  1730,
       0,   968,   969,   970,     0,     0,  1731,     0,     0,     0,
     971,     0,     0,     0,     0,     0,     0,     0,     0,   762,
       0,   757,     0,  1732,     0,     0,     0,   981,     0,     0,
     966,     0,     0,   654,     0,   655,   656,   657,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   967,     0,     0,
     981,     0,     0,     0,   972,     0,     0,     0,     0,     0,
     973,     0,   974,     0,     0,   760,   763,   975,   976,   977,
       0,     0,     0,   978,     0,   761,  1733,     0,   982,   983,
       0,  -609,     0,     0,     0,     0,  1734,     0,     0,   763,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1415,   982,   983,  1735,     0,     0,     0,   659,   660,   661,
     984,     0,   764,   979,   985,   986,     0,     0,     0,     0,
       0,   662,   987,  1433,     0,     0,     0,  1736,   663,     0,
       0,     0,   980,   984,     0,   764,     0,   985,   986,   968,
     969,   970,   988,     0,     0,   987,     0,   989,   971,     0,
       0,     0,     0,     0,   990,     0,   137,   762,     0,   757,
       0,     0,   765,     0,     0,   988,     0,     0,     0,     0,
     989,     0,     0,     0,     0,     0,     0,   990,   966,   137,
       0,     0,     0,     0,     0,   765,     0,     0,   981,     0,
       0,     0,   972,     0,     0,   967,     0,     0,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,     0,     0,
       0,   978,     0,   761,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   982,
     983,     0,     0,     0,     0,     0,     0,  1973,     0,     0,
       0,   979,     0,     0,     0,     0,     0,   966,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     980,   984,     0,   764,   967,   985,   986,     0,     0,     0,
       0,     0,     0,   987,     0,     0,     0,   968,   969,   970,
       0,     0,     0,     0,     0,   762,   971,     0,     0,     0,
       0,     0,     0,   988,     0,     0,     0,   757,   989,     0,
       0,     0,     0,     0,     0,   990,     0,   137,     0,     0,
       0,     0,     0,   765,     0,     0,   981,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     972,     0,     0,     0,     0,     0,   973,     0,   974,     0,
       0,   760,     0,   975,   976,   977,     0,     0,     0,   978,
       0,   761,   966,     0,     0,   763,   968,   969,   970,     0,
       0,     0,     0,     0,     0,   971,     0,   982,   983,   967,
       0,     0,     0,     0,     0,  1975,   757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   979,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   984,
       0,   764,     0,   985,   986,     0,     0,     0,   980,   972,
       0,   987,     0,     0,     0,   973,     0,   974,     0,     0,
     760,     0,   975,   976,   977,     0,     0,     0,   978,     0,
     761,   988,     0,   762,     0,     0,   989,     0,     0,     0,
       0,     0,     0,   990,     0,   137,     0,     0,     0,     0,
       0,   765,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   968,   969,   970,   981,     0,     0,     0,   979,     0,
     971,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   757,     0,     0,     0,     0,     0,   980,     0,     0,
       0,     0,   966,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,   967,
       0,     0,   762,     0,   972,   982,   983,     0,     0,     0,
     973,     0,   974,     0,     0,   760,     0,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,  1985,     0,     0,
       0,     0,     0,   981,     0,     0,     0,   984,     0,   764,
       0,   985,   986,     0,     0,     0,     0,     0,     0,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   966,   979,     0,     0,     0,     0,     0,   988,
       0,     0,   763,     0,   989,     0,     0,     0,     0,   967,
       0,   990,   980,   137,   982,   983,     0,     0,     0,   765,
       0,   968,   969,   970,     0,     0,     0,     0,     0,     0,
     971,     0,     0,     0,     0,     0,     0,   762,     0,     0,
       0,   757,     0,     0,     0,     0,   984,     0,   764,     0,
     985,   986,     0,     0,     0,     0,     0,     0,   987,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   981,     0,
       0,     0,     0,     0,   972,     0,     0,     0,   988,     0,
     973,     0,   974,   989,     0,   760,     0,   975,   976,   977,
     990,     0,   137,   978,     0,   761,     0,     0,   765,     0,
       0,   968,   969,   970,     0,     0,     0,   763,     0,     0,
     971,     0,     0,     0,     0,     0,     0,     0,     0,   982,
     983,   757,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   979,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   980,   764,   972,   985,     0,     0,     0,     0,
     973,     0,   974,   987,     0,   760,     0,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,   762,     0,     0,
       0,     0,     0,   988,     0,     0,     0,     0,   989,     0,
       0,     0,     0,     0,     0,   990,     0,   137,     0,     0,
       0,     0,     0,   765,  2710,     0,     0,     0,   981,     0,
       0,     0,     0,   979,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   980,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,     0,   982,
     983,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   981,     0,
       0,     0,     0,   764,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   987,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,     0,     0,   763,   989,     0,
       0,     0,     0,     0,     0,   990,     0,   137,     0,   982,
     983,     0,     0,   765,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   764,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   987,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,     0,     0,     0,   989,     0,
       0,     0,     0,     0,     0,   990,     0,   137,     0,     0,
       0,     0,     0,   765
};

static const yytype_int16 yycheck[] =
{
     103,   393,   105,   395,   663,   116,   597,   540,   111,   181,
     366,  1118,   790,   962,   687,   103,   849,   105,   721,  1228,
     794,  1209,  1116,   111,  1145,   358,   158,  1596,   652,   795,
     785,  1586,   135,   425,  1450,  1450,  1450,   209,  1450,  1450,
    1491,  1602,  1450,   435,   600,  2011,  1540,   135,   404,  1809,
    1112,  1260,  1123,  1843,  2047,  1121,  1369,  1358,  1996,  1131,
    1131,  1926,  1531,  1267,  1379,   700,     1,     1,     9,  1472,
      17,    22,     9,  1145,  1145,    48,   749,     9,     9,  2002,
      58,   184,  1186,    28,  2007,     6,  1951,    56,    57,    58,
       0,    49,  1852,     1,    17,    64,  1200,   852,    53,     0,
      27,  1378,    21,  2026,  2027,    60,     9,  2030,    56,  2080,
      97,    97,   125,    49,   115,   364,    58,  1321,     1,   111,
     124,    87,  1525,    93,   130,   124,   799,    58,    11,    58,
      99,   100,    30,   102,   758,   759,  1774,     9,   107,   108,
     251,     1,     9,  1903,  1699,   277,    64,   116,  1255,  1950,
    2073,  1464,    88,    73,   142,  2078,   175,   177,  2081,   176,
     203,    31,   160,   252,   133,    31,   166,    65,   225,    67,
    1374,    32,   232,   130,   153,   177,    59,   237,   256,   241,
      22,  1243,   127,  2109,   295,   809,    49,  2180,   256,   116,
    1593,   160,   271,   244,   213,   256,   241,   369,   125,   329,
    1960,  1514,   252,   162,    49,   840,   161,   242,   173,    88,
      58,   985,   244,   309,    97,   188,    99,   108,   101,   203,
    2481,   218,   191,   218,    21,    65,   109,    67,  1299,   139,
    2448,   331,  1006,   143,   203,   203,   203,   126,   139,  1310,
     356,   274,   143,    27,   229,   256,   256,   178,    31,   203,
       6,   408,   172,  1656,   413,   256,   367,   408,  2184,   408,
    1118,   973,   974,   218,   219,   256,   232,   212,   980,  2668,
     232,   455,  2195,   262,   485,   286,   449,   107,  1579,   412,
     249,   232,   165,   408,   308,   271,   310,   117,   257,    71,
     200,   199,   503,   466,  2054,  1367,  1367,  1155,   287,   200,
    1371,   111,   391,   462,   256,  2704,  2524,   228,   467,    92,
     241,   256,   307,   794,   143,  1870,   412,   272,   315,   330,
     353,   266,   355,   480,   508,    71,    71,   282,  2193,   480,
     289,   480,   116,   343,   318,   280,  1905,  1111,  1011,   330,
     443,   391,   445,   446,   460,   212,   457,   480,   972,   452,
     336,   386,  1667,   256,   252,   480,   290,   445,   446,  1674,
    1661,   412,   341,  2164,   452,   228,   469,   256,   256,   472,
     473,   450,   475,  2299,   257,   478,   479,   507,  1472,   313,
     412,   469,  1876,   310,   480,   256,  2647,   372,   309,   256,
     232,  1885,  1795,  1862,   363,   256,  1865,   367,     6,   266,
    2038,   359,    71,   348,  1178,  1179,  1180,   507,   451,   256,
     472,   378,    71,   516,   274,   287,   505,  1191,  1192,   302,
     176,   794,   391,   359,  1198,  2363,   355,   472,   516,   394,
     508,  1525,   342,   402,   332,   372,   356,   540,   541,     9,
     508,   342,   411,   412,   501,   414,   415,   508,   508,   455,
    2373,   420,   540,   541,  2377,    49,   212,    71,   456,    71,
    1133,  1017,  1018,   425,  1530,   465,   423,   455,   437,     6,
     440,     1,  1773,   418,  2234,   507,   421,   422,   581,   351,
     359,   348,   486,   594,   453,   403,   418,   486,   508,   508,
     601,   508,   332,   581,   507,   487,   469,   600,   466,  1593,
     256,  1267,   508,   984,   985,   986,   508,   508,   450,   392,
     266,  1573,   466,   342,   359,  2275,   124,  2277,  1590,  1590,
     317,   508,   508,   446,    34,  1006,  1803,  2498,  2499,   508,
     390,   509,    62,   378,   507,  1247,   647,   503,   457,  1854,
     460,   472,  1604,   464,   502,   455,   515,   455,  2308,   468,
     653,   418,   435,   501,   455,   804,   508,   508,   505,  1630,
      90,    91,  1656,   500,  2502,   534,   502,   508,   126,   514,
    2493,  2494,   455,   508,   508,  1210,     6,  2500,  2338,  2339,
     507,  1790,   514,  2448,  1688,   554,  2224,   556,  2149,  1793,
     559,   560,   348,   562,  1895,   455,   466,   464,   508,   972,
     466,    71,  2540,  2541,   212,   508,  1230,   508,  1374,   507,
     455,   984,   985,   986,   462,    62,   507,   508,   400,   467,
     508,   576,   591,   502,   256,   508,  2095,   596,   189,  2552,
    1111,  1932,  2422,  1006,   603,   445,   256,   508,  2120,     6,
     450,   508,   212,    90,    91,   309,  2584,   514,   256,    57,
    2588,  2589,    60,   608,   400,   400,    64,   502,   266,   770,
     457,   508,   418,    26,   775,   262,    47,   839,   256,    33,
     452,   468,   232,   274,   204,   212,  2023,   780,   781,  2617,
    2673,   792,    63,   309,   234,  2088,   256,  2090,  1169,  1170,
    1171,     6,   421,   662,   797,     6,   266,  1178,  1179,  1180,
      39,  1795,   232,   785,   229,  2671,   452,   452,   464,   359,
    1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,  2656,   256,
    1201,    57,   103,  1115,  1498,  1117,  2129,  1798,    64,   266,
     160,   400,   200,   256,   703,  1501,  1110,   706,  1111,  1801,
     348,   400,   262,   262,  1118,  1119,  2506,  2507,  1140,   160,
    1142,   507,   508,   126,  1128,  1147,   248,   249,   514,   162,
    1133,  1135,  1136,     0,   287,   359,  1139,   287,   287,  1161,
     852,   281,   282,   283,    32,   114,  2091,    30,   348,  2182,
    1154,  1155,   212,   452,   378,   232,   400,   154,   400,   390,
     387,   349,   322,   452,   420,   196,  1169,  1170,  1171,   172,
     203,  2295,  2564,   364,   168,  1178,  1179,  1180,  1181,  2110,
     418,   348,    65,  1186,    67,  2297,  2298,   256,  1191,  1192,
    1193,  1194,  1195,  1196,  1197,  1198,   256,  1200,  1201,  1901,
    1901,  1902,   561,   196,   331,   345,   266,   455,   452,   130,
     452,  1465,   450,   123,   508,   212,   404,   372,   418,   399,
     961,   232,   502,   111,    58,   256,   464,  1230,   239,   408,
     268,   455,    65,     9,    67,  2627,  1258,   171,  1492,   250,
    2439,   262,  1638,  2220,   342,   322,   508,  1269,   486,   290,
    1253,   418,  2195,   294,  1991,    38,   289,  2188,   508,   256,
    1446,   216,   217,    46,   464,   455,   287,   212,   237,   266,
     508,   212,   271,   267,   271,  1679,   514,  1681,   502,   348,
     396,   236,    58,   450,  1017,  1018,  1027,  1291,   348,  1693,
     508,   225,   171,   455,   353,   455,   514,   464,  2652,   233,
     400,   480,   268,   341,   118,   119,   120,   262,  1271,  1612,
     231,   256,   178,   257,   514,   256,  2670,  2516,  1322,    57,
     389,   266,  2434,  2488,     9,   266,    64,    57,  2079,  2080,
     470,   471,   287,  1336,    64,   475,   170,   154,   195,   455,
     307,   508,   353,   354,     9,   378,   225,   514,   256,   418,
     158,   348,   452,     0,   233,   414,   415,   368,   418,   370,
     398,    85,   462,   271,  2088,   403,  2090,   467,   256,   252,
     291,   237,   339,    58,   240,   341,  2567,  1381,   455,  1112,
     507,   508,  2547,  1116,   318,    50,   342,  1498,  1351,   223,
    1123,  1124,   244,   360,  1697,   270,   456,  1793,  1131,   256,
    2096,  1134,   178,   348,   464,  2129,  1139,   348,  1141,  2248,
    1143,  1144,  1145,  1146,   322,   456,   546,  1132,  1721,   252,
     450,   418,   708,   231,   238,   424,  2127,   426,   211,   457,
    1163,    35,   398,   139,    38,   404,   212,   403,   252,   318,
     468,    45,    46,  1158,   455,   514,     8,  2632,   508,   332,
     302,  2532,  2148,  2644,   514,   330,   586,  1259,  2182,   204,
     243,  1518,  1519,  1520,  1521,   241,   458,   464,  1472,   755,
     508,   501,   413,   418,   507,    37,  1587,   418,   285,  2216,
     256,  1503,   265,  1704,   292,   615,   507,   232,    92,   455,
     266,   502,   139,   437,    12,  1498,   143,    15,    16,   332,
     172,  2547,  2547,  2547,   188,  2547,  2547,  1511,  1310,  2547,
    1243,   508,   220,   462,   172,   416,   508,   514,   467,   464,
    1524,  1525,   336,   464,   199,  2710,   210,   212,   335,  1262,
     268,     8,   204,  1787,   212,   349,   319,  2736,   268,  2724,
     759,   232,   508,    26,   252,  1353,   204,   212,   834,   504,
     212,   457,   507,   200,   498,   456,   241,   161,  1562,   353,
      37,   355,   166,   508,   508,   256,  1299,   508,  1679,   514,
    1681,   256,   348,   514,   508,   455,  1378,  1310,   256,   244,
     245,   266,  1693,     1,  1587,     8,   190,   462,   266,  1593,
     809,   256,   467,   262,   256,  1403,  1311,   380,   162,   505,
     508,   266,   166,   341,   266,   292,   514,   211,   396,  1612,
     212,   341,  1997,   794,    37,   256,   216,   308,   287,   310,
     454,  1354,    40,    41,    42,    43,    44,   441,   462,   463,
    1634,  1143,   262,   467,  1367,     2,   236,   324,  1371,   455,
       7,  1645,   418,   455,  1648,   353,    54,    55,  1611,   324,
     325,  1163,  1656,   361,   256,   188,  2052,   287,    76,    77,
     398,   265,   262,   348,   266,   403,   341,   508,   398,   356,
     348,   188,  1387,   403,  1407,   455,  1679,   210,  1681,   758,
     759,  1935,    90,   348,  1486,  1688,   348,   287,   464,  1407,
    1693,   338,  1678,   210,   477,   342,   472,    13,    14,   107,
    2424,     9,  2426,    16,    12,    97,    98,    15,    16,   117,
     207,   208,   381,  1446,  2532,   319,    32,   455,  1721,  1134,
      33,   396,   758,   759,   425,   455,   452,  1460,   358,    42,
     809,  1146,   508,   418,    11,    30,   462,  2070,   514,  1472,
     418,   467,   353,   457,   355,  2208,   348,  2498,  2499,   246,
     247,  2502,  2055,   418,   468,   455,   418,   212,  2597,   277,
     278,   179,   180,   181,   182,   183,   184,   185,   186,   187,
    2174,  1828,   163,   809,  1995,   166,   380,   300,   301,   464,
    2645,  2646,    59,  1747,   302,   303,  1843,   472,   407,   393,
     555,   232,  1525,  1595,  2048,   560,  1760,  1761,   454,   464,
    1764,   256,   464,   984,   985,   986,  2109,   463,   412,  2674,
     396,   266,    55,   108,  2551,  1217,   418,  1619,   407,  1221,
      97,   453,    99,   508,   101,  1006,   455,   178,  2693,   514,
     462,   455,   109,   128,   455,   467,   514,   188,   507,   508,
    1573,   353,  1644,   355,    58,  1444,   508,    90,   478,   514,
    1449,  1450,   514,  1452,  1169,  1170,  1171,  1590,   218,   210,
    1593,   157,   464,   159,   107,   452,  1535,   174,   452,  1631,
    2735,  1604,   167,   477,   117,   462,   455,   507,   462,   455,
     467,  2184,   157,   467,   159,  1907,  1201,  1410,   165,   240,
    1413,  1193,  1194,   348,   189,   508,  1419,  1630,  1179,  1180,
    1423,   453,    24,    25,   504,    69,  1575,  1430,   455,   204,
     462,   508,   514,   331,   322,   467,   455,  1658,   326,   327,
     473,   455,   475,  1656,   341,   478,   344,   293,  1109,   295,
    1111,  1600,   256,  1114,    45,  1939,  2344,  1118,  2346,   489,
     490,   491,   492,   252,    66,   254,    68,   508,    70,   226,
     256,  1684,  1133,   472,    65,    66,    67,    68,  1139,   252,
     368,   254,   459,   418,   461,   252,  1684,   254,   199,   277,
     278,   623,   624,   625,   626,   446,   384,   385,   508,  1160,
     257,  1162,   104,   105,   106,    66,  1727,    68,  1169,  1170,
    1171,  1195,  1196,  1197,   302,   303,  2299,  1178,  1179,  1180,
    1181,   489,   490,   491,   492,  1186,   984,  1748,   986,   464,
    1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,   402,  1200,
    1201,   403,   412,    64,  1680,   302,  1682,    60,   305,  1685,
    1686,  1687,   154,   256,   156,  1691,  2199,   232,  1694,  1695,
     455,   163,   403,  1642,   166,   329,   341,   256,  1229,   489,
     490,   491,   492,   229,   508,    26,   455,   455,  1791,   514,
    2468,   108,  1795,  2174,  2643,  1798,   455,   313,  1801,   256,
     256,   272,  1253,   458,  1255,    32,    23,   103,    35,   455,
     189,    38,   441,   123,   458,    17,    87,   508,   272,    46,
     508,   455,   396,   353,   371,    57,   507,   425,   209,   404,
     403,   262,    39,  1702,  1703,  1907,   455,   237,  2130,   510,
     404,   508,   332,   508,  1713,   392,   396,   317,   311,  1852,
     421,  1720,   261,   455,   235,     7,   455,   396,   255,   455,
     252,   508,   254,   455,  2138,    92,   507,  2123,   396,   368,
     417,   252,   419,   254,   455,  1814,    86,    86,   125,   271,
    1749,   434,  1821,   455,   111,  1336,  1958,   455,   435,   396,
      22,   391,   307,   505,   310,  1967,  1968,   455,  1901,  1902,
    1903,  2174,  2176,  2177,   285,   396,   204,  1358,  1940,  1941,
    1942,  1943,  1944,  1945,  1946,  1947,   503,   508,   508,   455,
     505,   450,   386,   232,   508,   306,   254,   218,   508,   123,
      53,   450,   514,  1384,  1873,   466,   446,    26,   307,   451,
       4,  1810,   402,   412,   350,   196,   508,   328,   466,   446,
     256,   449,   455,   334,   378,    19,   508,  1960,   401,   455,
    1829,   508,   337,   190,   508,    29,  1835,   115,   188,   170,
     508,   198,  1841,   455,   466,   256,   450,   466,   466,   466,
     466,   466,   455,   466,   211,   466,   466,  1990,   466,  1928,
     466,   310,   223,   455,   508,   405,   457,   508,    30,  2002,
      64,   131,  1990,   508,  2007,   196,   132,  2281,   450,  2020,
     134,   133,   388,   138,   135,   102,   243,   136,   445,   137,
     450,   466,    49,  2026,  2027,   141,   407,  2030,   406,   501,
     449,   449,   446,   144,   196,   416,   263,   145,   265,   443,
     146,   271,   147,    31,   503,   148,    49,  1498,   149,   196,
     150,  2054,   433,   151,   113,   447,   152,   220,  2130,   452,
     287,   288,   452,   452,   452,   450,   452,  2139,  2079,  2080,
    2073,   115,   452,   455,   455,  2078,  2079,  2080,  2081,   452,
     452,  2640,   412,   197,   313,  2088,   110,  2090,   450,   223,
     203,   378,   319,   272,   340,   476,  2035,   256,   231,   295,
    2659,  2592,   299,  1972,   488,   497,   166,   505,   129,   505,
    2049,   176,   367,   450,   495,   169,   508,   130,   228,   346,
     347,   502,   503,   450,  2127,  1994,  2129,    49,  1579,  2068,
     196,  2622,   204,   228,   177,   300,  1587,    57,   508,   455,
     252,  2010,   204,  2012,   272,   513,   373,  2016,   512,   237,
     425,   300,  1603,   380,   382,  2024,   220,   450,   450,  2098,
     364,  1612,    30,  2102,   203,   296,   393,   276,   203,    17,
     397,  2445,  1623,   446,   129,   140,   450,   367,    49,  2182,
     203,   142,     8,   130,   196,   412,   425,   505,   252,   203,
     505,   455,  2195,   450,     9,     7,  2199,   203,   262,   256,
    1651,   508,  2141,   507,   298,   507,    49,   502,   502,   189,
    1661,  2199,   439,   315,   291,   262,   465,   314,   114,   440,
      47,   448,   203,  2515,   331,   413,   203,   295,  1679,   103,
    1681,   382,    49,   262,  2508,   237,   363,  1688,  2512,  2513,
     496,   297,  1693,   363,    96,   412,   292,    57,     8,    49,
     477,   111,   316,  2122,   460,   338,   455,   321,   262,   110,
     487,   262,   262,   338,  2645,  2646,   493,   485,   210,   455,
    1721,   341,  2275,  2565,  2277,   108,    35,   221,   209,    38,
     505,   420,  1733,   369,   120,  1736,    45,    46,   196,   353,
     338,    49,  2231,  2674,   314,     7,   307,   361,  2237,    46,
     322,    92,  2305,    26,   127,  2308,   201,   148,  2247,   206,
     374,    75,  2693,   238,   221,   150,   177,  2305,   410,   519,
    1906,  1026,  1773,   427,   469,   497,   286,  1450,   781,  2708,
    1405,   748,   425,    92,  1899,  1672,  2339,  2197,  1789,   403,
    2687,   799,   406,  2720,  2656,  2217,   852,  2093,   788,  1035,
     414,  1226,  1763,  2217,  2735,  1762,  2359,  2407,  2392,  1846,
    1484,   425,  1797,  1243,  2091,  1486,  2273,  1511,  1530,  1533,
    2373,  2359,  2645,  2646,  2377,  1865,  2095,  1295,  1576,  2318,
    1583,  2118,  2321,  2322,  1893,  1331,  2291,  1594,  2137,  2130,
    1919,   455,  1336,  1968,   458,  2334,  1624,  2151,  1365,  1948,
    1146,  2674,   161,  1367,  2177,  1967,  1381,   794,  2342,  2348,
    2349,  2704,  1967,  1671,  2352,  1562,  2347,  2448,  2170,  2170,
    2693,  2424,   299,  2426,  1354,  1480,  2170,  2170,   694,  1935,
     152,   190,  1253,  1721,   242,  2575,   270,  2436,   989,  2442,
     753,   417,   509,  2621,  1895,  1896,   215,  2107,  1955,   712,
     449,  1898,   211,  1586,  2647,    -1,    -1,    -1,    -1,  2751,
      -1,    -1,  2735,    -1,    -1,    -1,    -1,   558,  2337,    -1,
      -1,    -1,    -1,  1924,    -1,  2414,    -1,    -1,    -1,    -1,
      -1,  1932,    -1,    -1,    -1,    -1,    -1,  2498,  2499,    -1,
    2493,  2494,    -1,    -1,    -1,  2498,  2499,  2500,    -1,  2502,
       9,    -1,    -1,    -1,    -1,    -1,   265,    -1,  1959,    -1,
      -1,    -1,  2381,    -1,    -1,  1966,  1967,  2386,    -1,  2458,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2401,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1991,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2552,
    2001,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     319,  2564,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,  2447,    -1,
      -1,    -1,    -1,  2594,    -1,   972,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    83,    -1,   984,   985,   986,
      -1,    -1,    -1,    -1,  2055,    -1,    -1,    -1,    -1,    -1,
    2479,  2480,   100,    -1,    -1,    -1,    -1,    -1,    -1,  1006,
      -1,   380,    -1,    -1,  2627,    -1,    -1,  2496,  2497,    -1,
      -1,    -1,    -1,    -1,   393,    -1,    -1,    -1,    -1,    -1,
    2651,    -1,    -1,    -1,  2655,  2514,    -1,    -1,    -1,  2100,
      -1,    -1,    -1,   412,    -1,    -1,    -1,    -1,  2109,  2110,
      -1,    -1,    -1,    -1,    -1,  2668,     6,  2118,    -1,     9,
    2539,    -1,    12,    13,    14,  2544,  2545,    -1,    -1,    -1,
      20,    -1,    -1,   192,   193,   194,  2137,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,  2566,    -1,    -1,
      -1,  2704,    -1,   212,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,  2166,    -1,    -1,   477,    -1,
      -1,    -1,    -1,  2174,  1111,  2728,    -1,  2596,  2739,  1116,
    2599,  2600,    -1,  2184,    -1,    -1,  1123,  2188,    -1,    -1,
      -1,    -1,    -1,    83,  1131,    -1,    -1,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,   266,  1145,  2210,
     100,    -1,    -1,    -1,    -1,  2216,    -1,    -1,   256,    -1,
     258,   259,   260,  2642,    -1,    -1,   264,    -1,    -1,    -1,
      -1,    -1,  1169,  1170,  1171,    -1,    -1,    -1,    -1,    -1,
      -1,  1178,  1179,  1180,  1181,   304,    -1,    -1,    -1,  1186,
      -1,    -1,  2253,    -1,  1191,  1192,  1193,  1194,  1195,  1196,
    1197,  1198,    -1,  1200,  1201,    -1,   304,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,
      -1,    -1,    -1,  1230,    -1,    -1,    -1,    -1,  2299,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,    -1,   207,   208,    -1,
     379,    -1,   212,    -1,    -1,  1262,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   379,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,   246,   247,    -1,   418,
      -1,   251,  1299,   253,    -1,    -1,   256,    -1,   258,   259,
     260,   430,   431,  1310,   264,    -1,   266,    -1,    -1,    -1,
      -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   430,   431,   284,    -1,    -1,    -1,    -1,    -1,
     290,    -1,    -1,    -1,   294,   464,    -1,    -1,    -1,    -1,
      -1,    -1,   302,    -1,   304,   474,  2417,    -1,    -1,   309,
      -1,  1358,    -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,
    1367,    -1,    -1,   323,  1371,   494,   474,    -1,    -1,    -1,
     499,    -1,    -1,   333,    -1,    -1,    -1,   506,    -1,   508,
      -1,    -1,    -1,    -1,    -1,   514,   494,    -1,   348,  2460,
      -1,   499,    -1,    -1,    -1,    -1,  2467,    -1,   506,  2470,
     508,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,    -1,    -1,    -1,  2535,  1472,    -1,    -1,    -1,    -1,
     430,   431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1498,   452,    -1,   454,    -1,   456,    -1,    -1,   459,
      -1,   461,   462,   463,   464,    -1,   466,   467,    -1,    -1,
      -1,    -1,    -1,    -1,   474,    -1,    -1,    -1,  1525,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2601,    -1,    -1,    -1,   494,    -1,    -1,    -1,    -1,   499,
      -1,    -1,    -1,    -1,    -1,    -1,   506,    -1,   508,    -1,
      -1,    -1,    -1,    -1,   514,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1579,    -1,  2645,  2646,    -1,    -1,    -1,    -1,
    1587,    -1,    -1,  1590,    -1,    -1,  1593,    -1,     1,    -1,
       3,  2662,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,  2674,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2686,  2687,    -1,    -1,    -1,
      -1,    -1,  2693,  1630,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,  1656,
      -1,    -1,    83,    -1,  1661,    -1,    -1,    -1,    -1,    72,
    2731,    -1,    75,    -1,  2735,    -1,    -1,    -1,    -1,   100,
      -1,    -1,  1679,    -1,  1681,    -1,    89,    -1,    -1,    -1,
      -1,  1688,    -1,    -1,    -1,    -1,  1693,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,  1773,    -1,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,    -1,  1791,    -1,    -1,    -1,  1795,   202,
      -1,  1798,   205,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,   224,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1852,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,
     273,    -1,   275,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,   285,   304,    -1,    -1,    -1,    -1,   291,   292,
     293,    -1,   295,   296,   297,   298,    -1,    -1,  1895,  1896,
      -1,    -1,    -1,    -1,  1901,  1902,  1903,    -1,    -1,   312,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1932,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,   352,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,   362,
      -1,    -1,    -1,  1960,    -1,    -1,    -1,    -1,   192,   193,
     194,    -1,    -1,   376,   377,    -1,    -1,   201,    -1,    -1,
     383,    -1,    -1,    -1,   387,    -1,    -1,    -1,   212,    -1,
      -1,    -1,   395,    -1,    -1,     1,    -1,     3,    -1,     5,
      -1,    -1,   405,    -1,    10,    -1,    -1,    -1,    -1,   430,
     431,   414,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     423,    -1,   443,    -1,    -1,   428,   429,    -1,    -1,   432,
      -1,   434,   256,    -1,   258,   259,   260,    -1,    -1,   442,
     264,    -1,   266,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,   455,   474,    -1,    61,    -1,  2054,    -1,    -1,
      -1,    -1,    -1,    -1,   485,    -1,    72,    -1,    -1,    75,
     473,    -1,    -1,   494,    -1,    -1,   479,    -1,   499,    -1,
     304,   484,   503,    89,    -1,   506,   507,   508,    -1,    -1,
      -1,  2088,    -1,  2090,     1,    -1,     3,    -1,     5,    -1,
      -1,    -1,   505,    10,    -1,    -1,   112,    -1,   511,    -1,
      -1,    18,    -1,  2110,   120,    -1,   122,    -1,    -1,    -1,
      -1,  2118,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,
    2127,    -1,  2129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    61,   379,    -1,    -1,   164,    -1,
      -1,    -1,    -1,   169,    -1,    72,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2174,    -1,    -1,
      -1,    -1,    89,    -1,    -1,  2182,    -1,    -1,    -1,   195,
      -1,  2188,    -1,    -1,   418,    -1,   202,    -1,    -1,   205,
     206,    -1,    -1,    -1,    -1,   112,   430,   431,    -1,   215,
      -1,    -1,    -1,   120,    -1,   122,   222,    -1,   224,    -1,
      -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     464,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
     474,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,    -1,   169,   269,    -1,    -1,    -1,   273,    -1,   275,
     494,    -1,    -1,    -1,    -1,   499,    -1,    -1,  2275,   285,
    2277,    -1,   506,    -1,   508,    -1,    -1,    -1,   195,    -1,
     514,    -1,    -1,    -1,    -1,   202,    -1,    -1,   205,   206,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,   215,    -1,
      -1,  2308,    -1,    -1,    -1,   222,    -1,   224,    -1,   325,
     227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2339,    -1,    -1,   351,   352,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   362,    -1,    -1,    -1,
      -1,    -1,   269,    -1,    -1,    -1,   273,    -1,   275,    -1,
     376,   377,    -1,    -1,    -1,    -1,    -1,   383,   285,    -1,
      -1,   387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   405,
      -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,   414,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,   325,    -1,
      -1,    -1,   428,   429,    -1,    -1,   432,  2424,   434,  2426,
      -1,    -1,    -1,    -1,    -1,    -1,   442,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,   352,    -1,    -1,    -1,   455,
      -1,    -1,    -1,    -1,    -1,   362,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,    -1,   376,
     377,    -1,    -1,   479,    -1,    -1,   383,    -1,   484,    -1,
     387,    -1,    -1,    -1,    -1,    -1,    -1,     1,   395,     3,
      -1,     5,    -1,    -1,    -1,    -1,    10,    -1,   405,    -1,
      -1,    -1,    -1,    -1,    18,   511,    -1,   414,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,
      -1,   428,   429,    -1,    -1,   432,    -1,   434,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   442,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,   455,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,   473,    -1,    -1,    -1,
      -1,    -1,   479,    -1,    -1,    89,    -1,   484,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,   511,    -1,   120,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2645,  2646,
     164,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2674,    -1,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,
      -1,   205,   206,    -1,    -1,    -1,  2693,    -1,    -1,    -1,
      -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,
     224,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,  2735,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,   273,
      -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,    -1,   312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,   325,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,   351,   352,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   362,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,   376,   377,    -1,    61,    -1,    -1,    -1,   383,
      -1,    -1,    -1,   387,    -1,    -1,    72,    -1,    -1,    75,
      -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   405,    -1,    89,    -1,    -1,    -1,    -1,     6,    -1,
     414,     9,    -1,    -1,    12,    13,    14,    -1,    -1,   423,
     379,    -1,    20,    -1,   428,   429,   112,    -1,   432,    -1,
     434,    -1,    -1,    -1,   120,    -1,   122,    -1,   442,    -1,
      -1,    -1,    -1,   129,    -1,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   473,
      -1,   430,   431,    -1,    -1,   479,    -1,    -1,   164,    -1,
     484,    -1,    -1,   169,   443,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,   511,    -1,   195,
      -1,    -1,    -1,    -1,    -1,   474,   202,    -1,    -1,   205,
     206,    -1,    -1,    -1,    -1,    -1,   485,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,   494,   222,    -1,   224,    -1,
     499,   227,    -1,    -1,   503,    -1,    -1,   506,   507,   508,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,   269,    -1,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,   285,
      -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,
     208,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,   246,   247,
      -1,    -1,    -1,   251,    83,   253,    -1,    -1,   256,    88,
     258,   259,   260,    -1,    -1,   351,   264,    -1,   266,    -1,
      -1,   100,    -1,   271,    -1,    -1,   362,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,
      -1,   377,   290,    -1,    -1,    -1,   294,   383,    -1,    -1,
      -1,   387,    -1,    -1,   302,    -1,   304,    -1,    -1,   395,
      -1,   309,    -1,    -1,    -1,    -1,   314,    -1,    -1,   405,
      -1,    -1,    -1,    -1,    -1,   323,    -1,     6,   414,    -1,
       9,    -1,    -1,    -1,    -1,   333,    -1,   423,    -1,    -1,
      -1,    -1,   428,   429,    -1,    -1,   432,    -1,   434,    -1,
     348,    -1,    -1,    -1,    -1,    -1,   442,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,   455,
      -1,    -1,   201,    -1,    -1,    -1,     6,    -1,    -1,     9,
      -1,   379,    -1,   212,    -1,    -1,    -1,   473,    -1,    -1,
      -1,    -1,    -1,   479,    -1,    -1,    -1,    -1,   484,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
     418,   100,   251,    -1,   253,   511,    -1,   256,    -1,   258,
     259,   260,   430,   431,    -1,   264,    -1,   266,    -1,    -1,
      -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,   452,    -1,   454,    -1,   456,    -1,
      -1,   459,    -1,   461,   462,   463,   464,    -1,   466,   467,
     100,    -1,    -1,    -1,   153,   304,   474,    -1,    -1,    -1,
     309,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   323,    -1,   494,    -1,    -1,    -1,
      -1,   499,    -1,    -1,    -1,    -1,    -1,    -1,   506,    -1,
     508,    -1,    -1,   192,   193,   194,   514,    -1,    -1,   348,
      -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     359,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,   245,    -1,    -1,    -1,
      -1,   201,   251,    -1,   253,    -1,    -1,   256,    -1,   258,
     259,   260,   212,   412,    -1,   264,    -1,   266,    -1,   418,
      -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,   430,   431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,   251,    -1,   253,    -1,   304,   256,    -1,   258,   259,
     260,    -1,    -1,    -1,   264,   464,   266,    -1,    -1,    -1,
      -1,   271,    -1,    -1,   323,   474,    -1,    -1,    -1,    -1,
      -1,   480,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   494,    -1,    -1,     6,   348,
     499,     9,    -1,   502,   304,    -1,    -1,   506,    -1,   508,
      -1,    -1,    -1,    -1,    -1,   514,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,
     379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,
      -1,    95,    -1,    -1,    -1,    83,   100,    -1,    -1,   379,
      -1,   430,   431,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   457,    -1,
      -1,    -1,    -1,    -1,    -1,   464,    -1,    -1,   418,   468,
      -1,    -1,    -1,    -1,    -1,   474,    -1,    -1,    -1,    -1,
     430,   431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   494,    -1,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,    -1,    -1,   506,    -1,   508,
      -1,    -1,    -1,    -1,   464,   514,    -1,    -1,   192,   193,
     194,    -1,    -1,    -1,   474,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,   212,    -1,
      -1,    -1,    -1,   201,   494,    -1,    -1,    -1,    -1,   499,
      -1,    -1,    -1,    -1,   212,    -1,   506,    -1,   508,    -1,
      -1,    -1,    -1,    -1,   514,    -1,    -1,    -1,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,   253,
      -1,    -1,   256,    -1,   258,   259,   260,   245,    -1,    -1,
     264,    -1,   266,   251,    -1,   253,    -1,   271,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,     6,   266,    -1,
       9,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
     348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,   100,    -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,   113,    -1,    -1,   100,    -1,    -1,
      -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   430,   431,    -1,    -1,
     418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   430,   431,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     464,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,
     474,    -1,   201,    -1,    -1,    -1,   464,    -1,    -1,   192,
     193,   194,    -1,   212,    -1,    -1,   474,    -1,   201,     6,
     494,    -1,     9,    -1,    -1,   499,    -1,    -1,    -1,   212,
      -1,    -1,   506,    -1,   508,    -1,   494,    -1,    -1,    -1,
     514,   499,    -1,    -1,    -1,    -1,   245,    -1,   506,    -1,
     508,    -1,   251,    -1,   253,    -1,   514,   256,    -1,   258,
     259,   260,   245,    -1,    -1,   264,    -1,   266,   251,    -1,
     253,    -1,   271,   256,    -1,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,   266,    -1,    -1,    -1,    -1,   271,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,   304,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
     379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,   379,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,   418,
      -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
      -1,   430,   431,    -1,    -1,   418,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,   430,   431,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,   166,
      -1,    -1,    -1,    -1,   251,   464,   253,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,   474,    -1,   264,    -1,   266,
      -1,   464,    -1,    -1,   271,   192,   193,   194,    -1,    -1,
      -1,   474,    -1,    -1,   201,   494,    -1,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,   212,    -1,   506,    -1,   508,
      -1,   494,    -1,    -1,    -1,   514,   499,   304,    83,    -1,
      -1,    -1,    -1,   506,    -1,   508,    -1,    -1,    -1,    -1,
      -1,   514,    -1,    -1,    -1,   100,   323,    -1,   245,    -1,
      -1,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,
      -1,   348,    -1,    -1,   271,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,   418,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
      -1,   348,    83,   430,   431,    -1,    -1,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,   450,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,    -1,    -1,    -1,    -1,   464,    -1,    83,
     245,    -1,    -1,    -1,    -1,    -1,   251,   474,   253,    -1,
      -1,   256,    -1,   258,   259,   260,   100,    -1,    -1,   264,
      -1,   266,    -1,    -1,    -1,    -1,   271,   494,    -1,    -1,
      -1,   418,   499,    -1,    -1,    -1,    -1,    -1,    -1,   506,
      -1,   508,    -1,   430,   431,    -1,     6,   514,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,   196,    -1,   464,   323,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,   474,    -1,    -1,
      -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   348,    -1,    -1,    -1,   494,   192,   193,
     194,    -1,   499,    -1,    -1,    -1,    -1,   201,    -1,   506,
      -1,   508,    -1,    83,   245,    -1,    -1,   514,   212,    -1,
     251,    -1,   253,    -1,   379,   256,    -1,   258,   259,   260,
     100,    -1,    -1,   264,     6,   266,    -1,     9,    -1,    -1,
     271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,   253,
      -1,    -1,   256,   418,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,   266,   304,    -1,   430,   431,   271,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   464,
     304,    83,    -1,    -1,    -1,    -1,    -1,   348,    -1,   474,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,   100,   323,
      -1,   201,    -1,   488,    -1,    -1,    -1,    -1,    -1,   494,
      -1,    -1,   212,    -1,   499,    -1,    -1,    -1,   379,    -1,
      -1,   506,    -1,   508,   348,    -1,    -1,    -1,     6,   514,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,   251,    -1,   253,    -1,   379,   256,   418,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,   430,
     431,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,    -1,
     192,   193,   194,    -1,   418,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,   464,   304,    83,   430,   431,    -1,    -1,
     212,    -1,    -1,   474,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   323,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   494,    -1,    -1,    -1,    -1,   499,    -1,
     464,    -1,    -1,   245,    -1,   506,    -1,   508,   348,   251,
     474,   253,    -1,   514,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,   271,
     494,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,   379,
      -1,    -1,   506,    -1,   508,    -1,    -1,    -1,    -1,    -1,
     514,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,   418,    -1,
      -1,   323,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,
     430,   431,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   464,    -1,    -1,   245,    -1,    -1,
      -1,    -1,    -1,   251,   474,   253,    -1,   379,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,
      -1,    -1,    -1,   271,   494,    -1,    -1,    -1,    -1,   499,
      -1,    -1,    -1,    -1,    -1,    -1,   506,    -1,   508,     1,
      -1,    -1,    -1,    -1,   514,    -1,   418,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,   430,   431,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,   323,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   464,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     348,    -1,   474,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    -1,   494,    -1,    -1,    -1,    -1,   499,    -1,    -1,
      -1,   379,    -1,    -1,   506,    -1,   508,    -1,    -1,    -1,
      -1,    -1,   514,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   430,   431,    -1,    -1,    -1,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   176,    -1,   464,   179,   180,   181,
     182,   183,    -1,    -1,   186,   187,   474,    -1,   190,    -1,
      -1,    -1,    -1,   120,   196,    -1,   198,    -1,    -1,    -1,
      -1,    -1,   204,    -1,    -1,    -1,   494,    -1,    -1,   211,
      -1,   499,    -1,    -1,    -1,    -1,    -1,   219,   506,    -1,
     508,    -1,    -1,    -1,    -1,    -1,   514,    -1,    -1,    -1,
     232,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,   241,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     252,    -1,   179,   180,   181,   182,   183,    -1,     1,   186,
     187,    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,    36,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    -1,   306,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,   320,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,   331,
      -1,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,   344,    -1,   346,    -1,    -1,    -1,    -1,    -1,
     277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   373,    -1,    -1,    -1,    -1,    -1,   120,   380,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,   397,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   331,   407,    -1,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,    -1,   176,    -1,    -1,   179,   180,   181,   182,
     183,    -1,    -1,   186,   187,    -1,    -1,    -1,   450,    -1,
      -1,    -1,    -1,   455,    -1,    -1,    -1,    -1,   460,    -1,
      -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     472,    -1,    -1,    -1,    -1,   477,   219,    -1,    -1,   481,
     482,   483,   409,   410,   411,    -1,    -1,    -1,    -1,   232,
      21,    -1,   235,   495,    -1,    -1,    -1,    -1,   241,   501,
     502,    -1,    -1,    -1,    -1,    36,   508,    -1,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,   481,   482,   483,    -1,    -1,    -1,
      -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,   331,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   357,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,
     181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   407,    -1,   409,   410,   411,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,   436,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   232,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,
     241,    -1,   455,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   472,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   481,   482,
     483,    -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,
      -1,    -1,   495,    -1,    -1,    -1,    -1,    -1,    -1,   502,
      -1,    -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,
     331,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,   344,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,   357,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   407,    -1,   409,   410,
     411,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    83,   436,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,
      -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     481,   482,   483,    -1,    -1,   179,   180,   181,   182,   183,
      -1,    -1,   186,   187,   495,    -1,   190,    -1,    -1,    -1,
      -1,   502,   196,    -1,   198,    -1,    -1,    -1,    -1,    -1,
     204,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,
     192,   193,   194,    -1,    -1,   219,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,
     212,   235,    -1,   192,   193,   194,    -1,    -1,    -1,   243,
      -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   252,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   265,    83,   245,    -1,    -1,    -1,    -1,    -1,   251,
      -1,   253,    -1,   277,   256,    -1,   258,   259,   260,   100,
      -1,    -1,   264,    -1,   266,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,
     259,   260,   306,    -1,    -1,   264,    -1,   266,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   319,   320,    -1,    -1,    -1,
      -1,    -1,   304,    -1,   328,    -1,    -1,   331,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     344,   323,   346,    -1,    -1,   304,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   323,    -1,   348,    -1,    -1,   373,
      -1,   192,   193,   194,    -1,    -1,   380,    -1,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,
      -1,   212,    -1,   397,    -1,    -1,    -1,   379,    -1,    -1,
      83,    -1,    -1,   407,    -1,   409,   410,   411,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
     379,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
     251,    -1,   253,    -1,    -1,   256,   418,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,   450,    -1,   430,   431,
      -1,   455,    -1,    -1,    -1,    -1,   460,    -1,    -1,   418,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     452,   430,   431,   477,    -1,    -1,    -1,   481,   482,   483,
     462,    -1,   464,   304,   466,   467,    -1,    -1,    -1,    -1,
      -1,   495,   474,   452,    -1,    -1,    -1,   501,   502,    -1,
      -1,    -1,   323,   462,    -1,   464,    -1,   466,   467,   192,
     193,   194,   494,    -1,    -1,   474,    -1,   499,   201,    -1,
      -1,    -1,    -1,    -1,   506,    -1,   508,   348,    -1,   212,
      -1,    -1,   514,    -1,    -1,   494,    -1,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,    -1,    -1,   506,    83,   508,
      -1,    -1,    -1,    -1,    -1,   514,    -1,    -1,   379,    -1,
      -1,    -1,   245,    -1,    -1,   100,    -1,    -1,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   430,
     431,    -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     323,   462,    -1,   464,   100,   466,   467,    -1,    -1,    -1,
      -1,    -1,    -1,   474,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,   348,   201,    -1,    -1,    -1,
      -1,    -1,    -1,   494,    -1,    -1,    -1,   212,   499,    -1,
      -1,    -1,    -1,    -1,    -1,   506,    -1,   508,    -1,    -1,
      -1,    -1,    -1,   514,    -1,    -1,   379,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,   251,    -1,   253,    -1,
      -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,   266,    83,    -1,    -1,   418,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    -1,   430,   431,   100,
      -1,    -1,    -1,    -1,    -1,   438,   212,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,
      -1,   464,    -1,   466,   467,    -1,    -1,    -1,   323,   245,
      -1,   474,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,
     256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
     266,   494,    -1,   348,    -1,    -1,   499,    -1,    -1,    -1,
      -1,    -1,    -1,   506,    -1,   508,    -1,    -1,    -1,    -1,
      -1,   514,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,   379,    -1,    -1,    -1,   304,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   418,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,   348,    -1,   245,   430,   431,    -1,    -1,    -1,
     251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,    -1,   452,    -1,    -1,
      -1,    -1,    -1,   379,    -1,    -1,    -1,   462,    -1,   464,
      -1,   466,   467,    -1,    -1,    -1,    -1,    -1,    -1,   474,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,   304,    -1,    -1,    -1,    -1,    -1,   494,
      -1,    -1,   418,    -1,   499,    -1,    -1,    -1,    -1,   100,
      -1,   506,   323,   508,   430,   431,    -1,    -1,    -1,   514,
      -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,
      -1,   212,    -1,    -1,    -1,    -1,   462,    -1,   464,    -1,
     466,   467,    -1,    -1,    -1,    -1,    -1,    -1,   474,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,
      -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,   494,    -1,
     251,    -1,   253,   499,    -1,   256,    -1,   258,   259,   260,
     506,    -1,   508,   264,    -1,   266,    -1,    -1,   514,    -1,
      -1,   192,   193,   194,    -1,    -1,    -1,   418,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   430,
     431,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,   464,   245,   466,    -1,    -1,    -1,    -1,
     251,    -1,   253,   474,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,    -1,   348,    -1,    -1,
      -1,    -1,    -1,   494,    -1,    -1,    -1,    -1,   499,    -1,
      -1,    -1,    -1,    -1,    -1,   506,    -1,   508,    -1,    -1,
      -1,    -1,    -1,   514,   375,    -1,    -1,    -1,   379,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,   430,
     431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,
      -1,    -1,    -1,   464,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   474,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   494,    -1,    -1,    -1,   418,   499,    -1,
      -1,    -1,    -1,    -1,    -1,   506,    -1,   508,    -1,   430,
     431,    -1,    -1,   514,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   464,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   474,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   494,    -1,    -1,    -1,    -1,   499,    -1,
      -1,    -1,    -1,    -1,    -1,   506,    -1,   508,    -1,    -1,
      -1,    -1,    -1,   514
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   517,   518,     0,   200,   342,   519,   520,   521,   522,
     523,   524,   526,   536,   538,   455,   455,   521,   154,   532,
     544,   532,   532,   256,   343,   539,   539,   123,    85,   545,
     525,   527,   536,   139,   530,   531,    26,   540,   540,   455,
     396,   546,   143,   525,   528,   529,   532,   539,   256,   455,
     537,   455,    11,    59,    97,    99,   101,   109,   165,   226,
     257,   302,   305,   371,   392,   417,   419,   435,   508,   547,
     548,   552,   563,   571,   572,   573,   574,   575,   580,   589,
     591,   596,   599,   600,   602,   603,   604,   605,   606,   607,
     608,   539,   527,   455,   232,   541,  1280,   508,  1198,  1198,
     425,   407,  1298,  1280,  1280,  1280,   396,  1198,   407,   455,
     455,  1280,   455,   455,    58,  1268,   576,     1,   455,   574,
     218,   590,   174,   609,   455,   529,   455,    73,   172,   356,
     460,   542,   543,   581,  1280,  1280,  1280,   508,  1193,  1224,
      69,  1193,   455,  1280,  1280,   553,   564,  1193,   549,   508,
     592,   593,   594,  1199,   256,   308,   310,   577,   579,  1041,
    1227,  1280,   455,   508,   455,   611,   543,   341,  1295,  1280,
     212,   256,   266,   348,   418,   464,   514,   597,   598,  1230,
    1193,   256,   218,   307,  1318,   256,   472,    57,    64,   268,
     341,   398,   403,   508,   554,   555,   556,   557,   558,   559,
     560,   562,  1267,  1328,   199,   565,   566,   567,   550,   562,
     593,    22,   232,  1199,  1281,  1041,   232,   425,  1292,  1280,
      97,  1198,   234,   399,   610,   612,    28,   127,   212,   256,
     266,   280,   348,   418,   421,   422,   514,   582,   583,   584,
     587,   598,   446,   507,   601,  1311,  1224,   402,   403,   412,
      64,  1280,   455,   556,   455,   508,   555,    60,  1280,     9,
     372,   500,   568,   570,     1,   455,   567,   551,  1311,   256,
     595,  1228,  1292,   232,  1198,  1198,   578,   579,   455,     1,
     290,   313,  1253,   274,   390,   644,   645,   646,   647,   649,
     584,    17,   446,  1230,   329,  1280,   403,  1227,   455,  1280,
     508,  1194,   229,    26,   569,   229,   372,   455,   455,   108,
    1228,  1198,   455,   313,  1198,   650,   353,   414,   415,   648,
     533,     1,   455,   646,   585,   587,   256,  1227,   257,   437,
     498,   561,  1194,   256,   272,   613,   458,  1271,    23,  1262,
     103,   654,   455,   586,   587,    58,   509,  1322,   614,   441,
    1304,   189,  1273,   123,   458,   655,    17,     4,    19,    29,
      64,   220,   252,   316,   321,   353,   361,   374,   403,   406,
     414,   455,   458,   615,   616,   622,   624,   626,   627,   628,
     629,   630,   633,   634,   635,   636,   637,   639,   640,   642,
    1296,  1312,    87,  1269,   508,  1183,  1184,   455,   396,   656,
     587,   272,  1287,   353,  1296,   450,   501,  1308,   403,   404,
    1280,  1267,   114,   237,  1282,  1282,   287,   641,  1227,  1311,
     425,   262,    39,  1265,  1280,   651,   652,  1184,  1184,   455,
     173,   394,   534,   657,   658,   660,  1280,  1282,   126,   172,
     619,   361,   634,  1280,  1280,  1280,  1280,  1262,     9,   287,
     351,   643,  1280,  1287,   404,   508,   652,   332,   653,   510,
     685,   687,   688,     1,  1184,   126,   349,   404,   623,  1280,
     118,   119,   120,   238,   252,   336,   349,   441,   617,   618,
     256,  1193,  1197,   421,   638,  1193,  1193,   317,  1293,  1293,
     311,  1193,  1280,  1227,   396,   261,   741,   689,   690,   692,
     702,  1245,   455,   659,   638,   256,   621,  1224,   621,     7,
     621,   621,   256,   620,  1224,   416,   456,    33,   168,   267,
     631,   455,   396,   255,   743,   455,   690,   455,     1,   176,
     508,   693,   694,   508,   661,   125,   507,  1247,  1327,  1271,
    1280,  1192,  1193,   507,   632,   632,   686,   455,   396,   368,
     745,   455,   455,   691,    86,    47,    63,   103,   239,   250,
     353,   354,   368,   370,   455,   502,   662,   663,   665,   669,
     670,   673,   674,   680,   681,   682,   683,  1280,   125,   434,
     625,  1192,  1193,   262,   387,   687,   742,   455,   396,   391,
     790,   704,   695,  1280,  1269,  1280,   353,   355,  1323,  1323,
    1280,  1269,  1280,  1287,  1280,    22,  1261,   307,   684,  1198,
     172,   204,   505,   310,   687,   744,   455,   396,   535,    21,
      36,    39,    40,    41,    42,    43,    44,    45,    74,    76,
      77,    78,    79,    80,    81,    82,   120,   179,   180,   181,
     182,   183,   186,   187,   219,   235,   277,   306,   320,   328,
     331,   344,   357,   365,   407,   409,   410,   411,   436,   481,
     482,   483,   495,   502,   705,   706,   707,   709,   710,   711,
     712,   713,   714,   715,   718,   730,   731,   732,   733,   734,
     739,   740,  1280,  1300,    26,   196,   703,  1263,   204,  1227,
     508,  1280,  1261,   508,  1195,  1196,   309,   420,  1319,  1197,
    1227,   503,  1280,   175,   213,   508,   671,  1198,     9,   418,
     514,   588,   274,   353,   355,  1321,   687,   746,   455,   338,
     804,   807,   244,   302,   408,   480,  1299,   480,  1299,   480,
    1299,   480,  1299,   480,  1299,   505,  1309,   386,  1297,   126,
    1227,  1221,  1224,  1224,   232,   242,   386,  1283,  1280,  1281,
     172,   204,   241,   472,   508,     9,    50,   212,   244,   245,
     256,   266,   348,   418,   464,   514,   696,  1231,  1232,  1233,
     450,   668,  1196,   254,  1286,   450,  1268,   218,  1275,   508,
    1280,  1280,  1233,  1321,   747,   791,   123,   830,   831,   514,
      53,   722,   450,   719,   466,  1225,  1226,   446,   712,   736,
     737,  1231,    26,   708,   402,  1257,  1257,  1233,   307,  1290,
       1,    40,    41,    42,    43,    44,   179,   180,   181,   182,
     183,   184,   185,   331,   344,   697,   698,   699,   700,   701,
     713,   714,  1221,   697,   451,  1227,    58,   355,   664,   675,
    1227,   412,  1301,   256,   672,  1224,   672,   350,   748,   692,
     702,   792,   793,   794,    56,   501,   808,     1,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   153,   164,   169,   195,   202,   205,   206,   215,   222,
     224,   227,   269,   273,   275,   285,   312,   325,   351,   352,
     362,   376,   377,   383,   387,   395,   405,   414,   423,   428,
     429,   432,   434,   442,   455,   473,   479,   484,   511,   832,
     833,   849,   854,   858,   863,   878,   881,   885,   889,   890,
     891,   896,   910,   914,   917,   931,   935,   938,   941,   945,
     946,   950,   960,   963,   980,   982,   985,   989,   995,  1007,
    1015,  1016,  1019,  1020,  1024,  1029,  1030,  1038,  1053,  1063,
    1072,  1077,  1084,  1088,  1090,  1093,  1096,  1100,  1127,   832,
    1275,   196,   720,  1227,   449,  1306,    83,   100,   192,   193,
     194,   201,   245,   251,   253,   258,   259,   260,   264,   304,
     323,   379,   430,   431,   462,   466,   467,   474,   494,   499,
     506,  1171,  1173,  1174,  1175,  1176,  1177,  1178,  1206,  1220,
    1221,  1232,  1234,  1235,  1236,  1237,   466,  1226,  1224,   735,
     737,   446,   256,  1267,   697,   455,  1233,    48,   469,   676,
     677,   678,   679,  1311,  1268,   196,   667,  1274,   508,  1185,
       1,   693,   794,   455,   810,   809,   378,   816,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   129,   131,   132,   133,   134,   135,   136,   137,   138,
     140,   141,   142,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   164,   169,   195,   202,   205,   206,   215,
     222,   224,   227,   269,   273,   275,   285,   312,   325,   351,
     362,   377,   383,   387,   395,   405,   414,   423,   428,   429,
     432,   434,   442,   455,   473,   479,   484,   511,  1258,   834,
     850,   855,   859,   864,   879,   882,   886,   892,   897,   911,
     915,   918,   932,   936,   939,   942,   203,   378,   873,   934,
     947,   951,   961,   964,   981,   983,   986,   401,   990,   996,
    1008,  1017,  1021,  1025,  1031,  1039,  1054,  1064,   256,   348,
     389,   418,   514,  1076,  1078,  1085,   337,  1089,  1091,   819,
    1094,  1097,  1101,  1128,   508,  1227,   719,   115,   721,   466,
     466,   466,  1239,  1221,  1232,  1234,  1318,  1318,   466,   466,
     466,   466,  1318,  1177,  1173,  1177,   466,  1239,    71,   400,
     452,  1172,   453,   462,   467,   454,   463,   170,   466,  1238,
     466,   466,  1173,   505,   738,  1310,  1231,  1197,  1197,   188,
     668,  1227,   749,   455,   795,   455,    49,   811,   812,   813,
    1266,   811,   508,   455,   309,   835,   836,  1220,     6,    95,
     245,   271,   851,  1178,  1202,  1203,  1220,  1231,  1234,   856,
    1173,  1220,   256,   860,   861,  1189,  1190,  1191,  1224,   271,
     424,   426,   865,   866,   256,   880,  1211,  1220,   883,  1184,
       6,   887,  1179,  1180,  1201,  1222,  1223,  1224,  1232,   458,
     893,  1184,   256,   898,   899,   901,  1202,  1203,  1211,  1220,
     912,  1203,   256,   916,   457,   468,   919,   920,   921,  1161,
    1162,  1163,   199,   324,   325,   341,   396,   933,   937,  1200,
    1201,   940,  1224,   450,   943,  1307,  1203,  1160,  1161,   952,
    1200,   962,  1185,   965,   966,  1220,  1231,  1234,  1055,  1218,
    1219,  1224,    95,   984,  1203,   987,  1203,   171,   225,   233,
     318,   991,   992,   191,   256,   997,  1001,  1002,  1003,  1189,
    1212,  1220,  1224,  1234,  1311,  1009,  1184,  1018,  1181,  1224,
    1022,  1184,  1026,  1181,     9,  1032,  1182,  1224,   154,   271,
    1040,  1043,  1044,  1047,  1048,  1049,  1050,  1051,  1052,  1186,
    1187,  1200,  1217,  1219,  1224,  1055,  1065,  1184,  1073,   113,
    1079,  1080,  1081,  1203,    95,  1086,  1202,  1092,  1185,   455,
     508,   820,   821,   824,   825,   830,  1095,  1220,  1098,  1184,
    1102,  1220,  1129,  1181,   223,   723,   310,  1291,   724,   725,
    1171,  1173,  1243,  1171,  1244,   452,  1171,   508,   508,  1173,
    1242,  1242,  1242,  1205,  1220,  1232,  1234,  1241,   508,   452,
    1205,  1240,  1173,   452,  1173,  1174,  1174,  1175,  1175,  1175,
    1173,  1205,  1171,   405,   457,    30,  1264,  1268,     1,   750,
     796,   812,   412,   480,   814,   359,   502,   805,   131,   848,
      30,   838,   839,  1264,   196,  1290,  1220,  1221,  1232,  1234,
     132,   853,   450,   852,  1203,    58,   223,  1248,   861,   450,
    1318,   133,   877,   256,  1212,  1211,  1184,   358,   478,   884,
    1311,  1324,  1290,   134,   888,   160,   456,  1180,  1315,   388,
    1254,  1225,  1226,   894,  1184,   135,   895,  1296,   136,   909,
     166,   900,  1140,  1141,   488,   902,   507,   839,   489,   490,
     491,   492,   137,   913,    49,   228,   501,   867,   138,   930,
      17,   505,   922,   923,   924,   926,    12,    13,    14,    20,
     160,   170,   207,   208,   246,   247,   284,   290,   294,   302,
     309,   314,   333,   452,   454,   456,   459,   461,   462,   463,
     466,   467,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1203,
     102,   934,  1201,  1188,   445,  1305,   953,  1311,  1185,    93,
     367,   440,   967,   968,   970,   971,  1057,   466,  1225,  1203,
     450,   141,   988,    49,   992,   406,   993,  1002,   142,   455,
     998,  1000,   485,   503,   446,   449,   443,   144,  1014,   285,
     335,  1251,   196,  1130,   145,  1023,  1296,   146,  1028,  1130,
    1182,   147,  1037,   503,  1033,  1209,  1220,  1232,  1050,  1052,
    1200,   450,  1187,   124,   450,   486,  1042,    31,  1225,   148,
    1071,   178,   237,   240,  1067,   873,  1074,  1311,  1266,   149,
    1083,   228,  1081,  1220,   150,  1087,   196,  1185,   396,   455,
     455,   196,   353,   355,  1099,   151,  1111,   113,  1103,   152,
    1134,  1130,   724,  1193,   220,   727,    27,   116,   726,  1172,
     452,  1172,   452,   452,  1172,   452,   452,   452,  1172,   452,
    1172,   452,   452,   453,   452,   452,   450,  1280,  1197,   115,
     666,   455,    62,    90,    91,   322,   455,   751,   752,   755,
    1280,  1336,    32,    35,    38,    45,    46,    65,    67,   161,
     190,   196,   198,   211,   243,   252,   265,   306,   319,   346,
     373,   380,   397,   450,   460,   477,   501,   710,   711,   715,
     730,   732,   734,   797,   802,   803,  1280,  1313,  1280,   412,
     313,   815,   110,   817,   514,  1213,  1217,  1227,   197,   842,
     252,   332,   840,   841,  1313,    24,    25,    66,    68,    70,
     104,   105,   106,   154,   156,   163,   166,   252,   254,   447,
     497,   508,   837,  1187,  1314,   153,   341,  1207,  1221,   450,
       6,  1179,  1203,  1224,  1232,   203,   223,  1249,   378,   857,
     340,   862,  1191,   867,   884,   262,   287,  1273,  1221,  1173,
     272,  1255,  1226,  1184,   231,  1156,  1157,   827,   828,   901,
    1203,   295,  1142,    97,   336,   508,  1187,   299,   906,    35,
      38,    45,    46,    92,   161,   190,   211,   265,   319,   380,
     393,   412,   477,   907,   908,   488,   903,  1140,  1140,  1140,
    1140,  1203,  1179,  1203,   868,   921,    21,   457,   468,   927,
     928,  1162,   505,   924,   925,   505,   827,  1307,   232,  1165,
     115,   944,  1189,   129,   827,   948,     9,    12,    15,    16,
     277,   278,   302,   303,   954,   958,   176,  1209,     9,    58,
     178,   241,   472,   974,   975,   976,   969,   970,  1059,  1291,
    1327,   450,  1200,  1179,  1203,   993,  1311,  1183,   827,   169,
    1004,  1160,  1005,  1006,  1220,  1189,     8,    37,  1132,  1296,
    1216,  1220,  1231,  1234,   228,  1010,  1027,  1311,   130,  1034,
    1220,  1034,   450,   450,  1041,   153,   457,   468,  1203,    49,
      38,    46,   211,   243,   265,   319,   380,   477,  1045,  1046,
    1280,  1066,  1311,  1203,   162,   289,   412,  1203,  1220,   196,
    1179,  1203,   826,  1227,  1209,  1266,   228,  1106,  1131,  1132,
     727,  1266,  1282,   438,  1238,   438,  1238,  1193,  1238,  1238,
    1238,  1205,   241,   472,  1238,   452,  1173,  1238,  1238,  1231,
    1291,  1280,  1280,  1261,   248,   249,  1285,   764,   204,   177,
     753,  1272,  1280,   252,   391,   157,   159,  1280,  1216,   300,
    1288,  1227,    57,  1220,  1220,   204,  1288,    32,   111,  1227,
    1280,   508,   455,   806,   272,   843,  1288,  1288,   841,   840,
    1288,   163,   166,  1135,  1136,  1137,   513,   512,  1209,  1135,
     237,   425,   300,   276,   256,  1208,  1221,  1220,  1290,   413,
    1143,  1144,  1225,  1226,  1179,   450,  1250,   857,  1201,   450,
    1189,   872,   873,   382,   364,  1143,  1280,   827,   296,  1158,
     829,   827,  1140,  1280,   252,   391,   157,   159,  1280,   124,
     486,  1280,   908,  1140,    97,    98,   904,   843,   203,  1143,
     203,   869,   870,   871,  1266,    17,   446,   929,   317,   927,
    1291,   827,   129,   140,   949,  1307,   367,   955,  1307,   450,
      49,   975,   977,  1209,     9,    58,   241,   472,   972,   973,
    1209,  1060,  1312,   726,   218,   315,  1276,  1200,  1143,   203,
    1183,   643,   381,   994,  1311,   142,   999,     8,   196,  1010,
    1220,   130,  1149,  1151,  1156,   262,   287,   827,   505,   505,
    1035,  1036,  1209,  1208,  1203,  1041,  1041,  1041,  1041,  1041,
    1041,  1041,  1041,  1046,   290,   294,  1068,  1069,  1070,  1166,
    1252,  1156,   244,   412,  1326,   425,  1303,  1303,  1082,  1311,
    1220,  1143,   203,   455,   450,     9,  1104,  1105,  1246,  1107,
    1220,  1082,  1107,  1027,     7,  1259,   508,   728,   729,  1280,
     452,  1193,  1211,  1280,  1261,   256,   756,  1229,   692,   765,
     754,  1220,  1213,  1213,  1280,  1306,  1280,  1280,    32,  1227,
     818,   819,  1280,   507,   844,  1213,  1213,  1213,   293,   295,
    1138,  1139,   827,  1135,  1254,  1221,   827,   298,  1145,  1226,
    1143,  1210,  1220,  1231,   166,   465,   875,  1317,     6,   228,
     309,   464,   874,  1279,    34,   281,   282,   283,   345,   470,
     471,   475,  1256,   827,   830,  1213,  1213,  1159,  1215,  1217,
    1227,  1159,  1213,   507,   905,  1179,  1180,  1179,  1180,   870,
     309,   814,    88,   359,   502,   928,  1161,   827,  1220,   827,
     502,   956,   957,   958,   959,  1305,   502,  1210,  1209,    49,
     978,   973,   189,   978,  1056,  1280,  1282,   315,  1179,   994,
     262,   287,  1006,  1203,   217,  1011,  1311,   827,   291,  1152,
     262,  1161,  1160,  1035,  1166,  1220,  1167,  1168,  1169,  1170,
    1173,  1075,  1203,  1075,   465,  1146,  1147,   331,  1254,  1179,
     822,  1210,   314,  1209,   114,  1108,   440,  1110,   158,   292,
    1133,  1153,  1154,  1155,  1156,   322,  1187,  1213,   729,  1192,
     757,   252,   254,  1320,   508,   693,  1220,   270,   330,   462,
     467,   798,   799,   800,  1211,   798,   799,   801,   819,    47,
      32,    35,    38,    46,    92,   111,   190,   198,   211,   243,
     263,   265,   287,   288,   319,   346,   347,   373,   380,   393,
     397,   412,   439,   448,   477,   487,   493,   845,   846,   847,
    1135,   827,  1143,   827,   295,   876,   827,  1290,  1220,   252,
     254,  1325,   907,  1143,   363,  1143,   363,  1203,   957,   103,
    1270,  1307,   978,   978,  1210,     8,    37,   979,   225,   501,
    1061,  1193,  1058,  1143,   382,    49,   262,   237,  1012,   216,
     236,   262,   287,   504,   827,   827,   827,   827,   297,  1148,
    1280,  1143,  1143,   496,   823,  1112,  1105,  1275,    96,  1109,
    1275,  1146,   827,   827,  1155,   252,   254,  1284,   178,   188,
     210,   240,   758,   759,   760,   761,   762,   763,  1229,   766,
    1213,  1213,   130,  1280,  1280,   847,    57,   412,   124,   486,
    1280,     8,  1260,   846,   827,  1220,  1180,  1180,    49,   111,
     978,   460,  1278,  1278,   338,  1183,   203,   318,  1062,  1224,
    1203,  1280,  1013,  1150,  1151,  1152,  1156,   262,   262,   262,
     827,  1220,  1113,   455,  1220,  1275,  1220,   107,   117,  1329,
    1280,  1280,    55,    90,  1329,  1330,  1314,   767,   110,  1213,
    1213,  1280,  1280,  1159,  1159,  1213,  1214,  1217,  1229,  1143,
    1143,  1203,  1203,  1203,  1280,  1183,   338,   485,  1220,  1152,
     128,   167,   204,  1114,  1115,  1116,  1118,  1122,  1124,  1125,
    1126,  1264,  1273,  1220,  1280,  1229,  1229,   210,  1280,  1280,
     209,   252,   254,   285,   306,   334,   416,   433,   455,   476,
     495,   503,   710,   715,   716,   730,   732,   734,   768,   769,
     773,   774,   777,   778,   779,   780,   781,   782,   787,   788,
     789,  1313,  1314,   455,  1211,  1213,  1001,  1280,  1160,    37,
    1260,   341,   108,  1229,  1229,  1229,   221,  1277,   300,   301,
    1289,  1261,   209,  1227,   505,  1280,  1290,  1280,  1280,  1220,
     286,   330,   783,   784,  1229,   330,   785,   786,  1229,  1289,
    1261,  1001,   369,   420,  1302,   130,   423,  1123,  1291,  1281,
    1280,   719,  1160,  1206,  1204,  1206,    54,    90,   322,   326,
     327,   368,   384,   385,   770,  1329,  1330,  1331,  1332,  1333,
    1334,  1335,   120,   196,  1227,   784,  1227,   786,  1281,  1220,
     162,   166,  1316,     9,  1119,  1120,  1190,   784,  1306,  1254,
     375,   775,  1206,   188,   188,   210,   188,   210,   177,   771,
    1220,   771,  1206,   338,  1294,   307,   339,   360,  1121,  1120,
     721,  1291,   314,   772,   772,    49,  1291,   307,  1224,   427,
     717,   177,   776,  1220,   322,  1206,   171,   225,   233,   318,
    1117,  1183,  1227
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   516,   518,   517,   519,   519,   520,   520,   521,   521,
     523,   522,   524,   525,   526,   527,   527,   527,   528,   528,
     529,   530,   530,   531,   533,   534,   535,   532,   537,   536,
     538,   539,   539,   540,   540,   541,   541,   542,   542,   542,
     542,   543,   543,   544,   544,   545,   545,   546,   546,   547,
     547,   547,   547,   547,   549,   548,   550,   550,   551,   551,
     553,   552,   554,   554,   554,   554,   555,   555,   556,   556,
     556,   556,   557,   558,   559,   560,   561,   561,   561,   561,
     562,   562,   564,   563,   565,   565,   565,   566,   566,   567,
     567,   567,   568,   568,   569,   569,   570,   570,   571,   572,
     572,   573,   573,   574,   574,   574,   574,   574,   574,   574,
     574,   574,   574,   574,   574,   576,   575,   577,   577,   577,
     577,   578,   578,   579,   579,   581,   580,   582,   582,   582,
     582,   582,   582,   583,   583,   584,   584,   585,   584,   586,
     586,   587,   587,   587,   587,   587,   587,   588,   588,   589,
     590,   590,   591,   592,   592,   593,   594,   594,   595,   595,
     596,   597,   597,   598,   598,   599,   600,   601,   601,   602,
     603,   604,   605,   606,   607,   608,   608,   609,   609,   610,
     610,   611,   611,   613,   612,   612,   614,   614,   615,   615,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   615,
     615,   616,   616,   616,   616,   616,   617,   617,   617,   617,
     618,   618,   619,   619,   619,   620,   620,   621,   621,   621,
     622,   623,   623,   623,   624,   625,   625,   625,   626,   627,
     628,   628,   628,   630,   629,   631,   631,   631,   632,   632,
     632,   632,   633,   633,   634,   634,   634,   634,   635,   636,
     637,   638,   638,   638,   639,   640,   641,   641,   642,   643,
     643,   643,   644,   644,   644,   645,   645,   646,   646,   647,
     648,   648,   648,   648,   650,   649,   651,   651,   652,   653,
     653,   654,   654,   655,   655,   656,   656,   657,   659,   658,
     658,   660,   660,   661,   661,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   663,   664,   664,   664,
     665,   665,   665,   666,   666,   667,   667,   668,   668,   669,
     670,   670,   671,   671,   672,   672,   673,   674,   675,   675,
     676,   676,   676,   677,   678,   679,   680,   681,   682,   683,
     683,   684,   684,   685,   686,   685,   687,   688,   687,   689,
     689,   689,   690,   691,   690,   690,   692,   693,   693,   693,
     694,   695,   695,   696,   696,   696,   696,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,   697,   697,   697,
     698,   698,   699,   699,   700,   700,   700,   701,   701,   702,
     703,   703,   704,   704,   705,   705,   705,   705,   705,   705,
     705,   705,   705,   705,   705,   705,   705,   705,   706,   707,
     708,   708,   709,   710,   711,   711,   712,   712,   712,   712,
     712,   712,   712,   712,   712,   712,   712,   712,   712,   712,
     712,   712,   712,   712,   712,   712,   712,   712,   712,   712,
     712,   712,   712,   712,   712,   712,   712,   712,   712,   712,
     712,   712,   713,   713,   714,   714,   715,   715,   716,   717,
     717,   718,   718,   719,   719,   720,   720,   721,   721,   722,
     722,   723,   723,   724,   725,   725,   726,   726,   727,   727,
     728,   728,   729,   730,   731,   732,   733,   735,   734,   736,
     736,   737,   737,   738,   738,   739,   739,   740,   740,   741,
     742,   741,   743,   744,   743,   745,   746,   745,   747,   747,
     749,   748,   750,   750,   750,   751,   751,   751,   751,   752,
     753,   754,   754,   755,   756,   756,   756,   757,   757,   758,
     758,   758,   758,   758,   759,   760,   761,   762,   763,   764,
     764,   766,   765,   767,   767,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   769,   770,   770,   770,   770,   770,   770,   770,   771,
     771,   771,   772,   772,   773,   774,   775,   775,   776,   776,
     777,   778,   779,   780,   780,   781,   782,   782,   783,   783,
     784,   784,   784,   785,   785,   786,   786,   787,   788,   789,
     790,   791,   790,   792,   792,   793,   793,   794,   795,   794,
     794,   796,   796,   797,   797,   797,   797,   797,   797,   797,
     797,   797,   797,   797,   797,   797,   797,   797,   797,   797,
     797,   797,   797,   797,   797,   797,   797,   797,   797,   797,
     797,   797,   797,   797,   797,   797,   797,   798,   798,   799,
     799,   800,   800,   800,   801,   801,   801,   802,   803,   804,
     805,   806,   804,   807,   804,   808,   809,   808,   810,   808,
     811,   811,   812,   813,   813,   813,   814,   814,   814,   814,
     814,   814,   815,   815,   816,   816,   817,   818,   817,   819,
     819,   820,   820,   820,   820,   820,   822,   821,   823,   823,
     824,   825,   826,   826,   828,   829,   827,   831,   830,   830,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,   834,   833,   835,   835,   835,   835,   835,   835,   835,
     835,   835,   835,   835,   835,   835,   835,   835,   835,   835,
     835,   835,   836,   836,   837,   837,   838,   838,   839,   839,
     839,   839,   839,   840,   841,   841,   842,   842,   843,   843,
     844,   844,   845,   845,   846,   846,   846,   846,   846,   846,
     846,   846,   846,   846,   846,   846,   846,   846,   846,   846,
     846,   846,   846,   846,   846,   846,   846,   846,   846,   846,
     846,   846,   847,   847,   848,   848,   850,   849,   851,   851,
     851,   852,   852,   853,   853,   855,   854,   856,   856,   857,
     857,   859,   858,   860,   860,   861,   862,   862,   864,   863,
     865,   866,   866,   866,   866,   867,   868,   867,   869,   869,
     870,   870,   871,   871,   871,   871,   872,   872,   872,   872,
     873,   873,   874,   874,   875,   875,   876,   876,   877,   877,
     879,   878,   880,   880,   882,   881,   883,   883,   884,   884,
     884,   884,   884,   886,   885,   887,   888,   888,   889,   890,
     892,   891,   893,   893,   894,   894,   895,   895,   897,   896,
     898,   898,   898,   898,   898,   898,   898,   899,   900,   899,
     901,   902,   902,   902,   902,   902,   903,   903,   904,   904,
     905,   905,   906,   906,   907,   907,   908,   908,   908,   908,
     908,   908,   908,   908,   908,   908,   908,   908,   908,   908,
     908,   908,   908,   909,   909,   911,   910,   912,   912,   912,
     912,   912,   913,   913,   915,   914,   916,   918,   917,   919,
     920,   920,   921,   921,   921,   922,   922,   923,   923,   924,
     925,   926,   926,   927,   927,   928,   928,   928,   928,   929,
     929,   930,   930,   932,   931,   933,   933,   933,   933,   933,
     933,   933,   934,   934,   936,   935,   937,   939,   938,   940,
     942,   941,   943,   944,   944,   945,   947,   946,   948,   948,
     948,   949,   949,   951,   950,   952,   953,   953,   954,   954,
     954,   955,   955,   956,   956,   957,   958,   958,   958,   958,
     958,   958,   958,   959,   959,   961,   960,   962,   962,   964,
     963,   965,   966,   966,   966,   967,   967,   967,   967,   969,
     968,   970,   971,   972,   972,   973,   973,   973,   973,   973,
     973,   974,   974,   975,   975,   976,   976,   976,   976,   976,
     977,   978,   978,   979,   979,   981,   980,   983,   982,   984,
     984,   986,   985,   987,   987,   988,   988,   990,   989,   991,
     991,   992,   992,   992,   992,   993,   993,   994,   994,   994,
     994,   996,   995,   997,   998,   997,   997,   999,   999,  1000,
    1000,  1001,  1001,  1002,  1002,  1002,  1002,  1002,  1003,  1003,
    1004,  1004,  1005,  1005,  1006,  1008,  1007,  1009,  1010,  1010,
    1011,  1011,  1011,  1011,  1011,  1011,  1011,  1012,  1012,  1013,
    1013,  1014,  1014,  1015,  1017,  1016,  1018,  1019,  1021,  1020,
    1022,  1023,  1023,  1025,  1024,  1026,  1027,  1027,  1027,  1028,
    1028,  1029,  1031,  1030,  1032,  1032,  1033,  1033,  1034,  1034,
    1035,  1035,  1036,  1037,  1037,  1039,  1038,  1040,  1040,  1040,
    1040,  1040,  1040,  1041,  1041,  1042,  1042,  1043,  1044,  1045,
    1045,  1046,  1046,  1046,  1046,  1046,  1046,  1046,  1046,  1047,
    1047,  1048,  1049,  1049,  1050,  1051,  1051,  1052,  1052,  1054,
    1053,  1056,  1055,  1057,  1057,  1058,  1058,  1059,  1059,  1060,
    1060,  1061,  1061,  1061,  1062,  1062,  1062,  1064,  1063,  1065,
    1066,  1066,  1067,  1067,  1067,  1067,  1068,  1068,  1068,  1068,
    1068,  1068,  1069,  1070,  1070,  1071,  1071,  1073,  1072,  1072,
    1074,  1074,  1074,  1074,  1075,  1075,  1076,  1076,  1076,  1076,
    1078,  1077,  1079,  1080,  1080,  1081,  1081,  1081,  1082,  1082,
    1083,  1083,  1085,  1084,  1086,  1086,  1086,  1087,  1087,  1088,
    1089,  1089,  1091,  1090,  1092,  1092,  1094,  1093,  1095,  1097,
    1096,  1098,  1099,  1099,  1099,  1101,  1100,  1102,  1103,  1103,
    1104,  1104,  1105,  1106,  1106,  1107,  1108,  1108,  1109,  1109,
    1110,  1110,  1111,  1111,  1113,  1112,  1114,  1114,  1114,  1114,
    1114,  1115,  1116,  1116,  1117,  1117,  1117,  1117,  1117,  1118,
    1119,  1119,  1120,  1120,  1120,  1121,  1121,  1121,  1121,  1122,
    1123,  1123,  1124,  1125,  1126,  1126,  1128,  1127,  1129,  1130,
    1130,  1131,  1131,  1131,  1131,  1132,  1132,  1133,  1133,  1134,
    1134,  1135,  1136,  1136,  1137,  1137,  1138,  1138,  1139,  1139,
    1140,  1141,  1141,  1142,  1142,  1143,  1144,  1144,  1145,  1145,
    1146,  1147,  1147,  1148,  1148,  1149,  1149,  1150,  1150,  1150,
    1151,  1152,  1153,  1153,  1153,  1154,  1155,  1156,  1157,  1157,
    1158,  1158,  1159,  1159,  1160,  1161,  1163,  1162,  1164,  1164,
    1164,  1165,  1165,  1165,  1165,  1165,  1165,  1165,  1165,  1165,
    1165,  1165,  1165,  1165,  1165,  1165,  1165,  1165,  1165,  1165,
    1165,  1165,  1165,  1165,  1165,  1166,  1166,  1167,  1167,  1168,
    1168,  1169,  1170,  1171,  1171,  1172,  1172,  1172,  1173,  1173,
    1173,  1174,  1174,  1174,  1175,  1175,  1176,  1176,  1176,  1177,
    1177,  1178,  1178,  1178,  1178,  1178,  1178,  1179,  1179,  1180,
    1181,  1182,  1183,  1183,  1184,  1185,  1186,  1186,  1187,  1188,
    1188,  1189,  1190,  1190,  1190,  1191,  1192,  1192,  1193,  1194,
    1195,  1195,  1196,  1197,  1197,  1198,  1199,  1200,  1200,  1201,
    1201,  1201,  1202,  1202,  1203,  1203,  1203,  1203,  1203,  1203,
    1203,  1203,  1203,  1203,  1204,  1204,  1205,  1205,  1205,  1206,
    1206,  1206,  1206,  1206,  1206,  1206,  1207,  1207,  1208,  1208,
    1209,  1209,  1210,  1210,  1211,  1211,  1212,  1212,  1212,  1213,
    1213,  1213,  1214,  1214,  1215,  1215,  1216,  1216,  1216,  1217,
    1218,  1219,  1219,  1220,  1221,  1221,  1221,  1221,  1222,  1223,
    1223,  1223,  1223,  1224,  1224,  1225,  1226,  1226,  1227,  1228,
    1229,  1230,  1230,  1230,  1230,  1230,  1230,  1230,  1231,  1231,
    1232,  1232,  1233,  1233,  1233,  1233,  1233,  1233,  1233,  1234,
    1234,  1234,  1234,  1234,  1234,  1234,  1234,  1234,  1234,  1234,
    1234,  1235,  1235,  1236,  1236,  1236,  1237,  1237,  1237,  1237,
    1238,  1238,  1238,  1239,  1239,  1239,  1240,  1240,  1240,  1241,
    1241,  1242,  1242,  1243,  1243,  1244,  1244,  1245,  1246,  1246,
    1247,  1247,  1248,  1248,  1249,  1249,  1250,  1250,  1251,  1251,
    1251,  1252,  1252,  1253,  1253,  1253,  1254,  1254,  1255,  1255,
    1256,  1256,  1256,  1256,  1256,  1256,  1256,  1256,  1257,  1257,
    1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,
    1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,
    1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,
    1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,
    1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,
    1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,
    1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,  1258,
    1259,  1259,  1260,  1260,  1261,  1261,  1262,  1262,  1263,  1263,
    1264,  1264,  1265,  1265,  1266,  1266,  1267,  1267,  1268,  1268,
    1269,  1269,  1270,  1270,  1271,  1271,  1272,  1272,  1273,  1273,
    1274,  1274,  1275,  1275,  1276,  1276,  1276,  1277,  1277,  1278,
    1278,  1279,  1279,  1280,  1280,  1281,  1281,  1281,  1282,  1282,
    1283,  1283,  1283,  1284,  1284,  1284,  1285,  1285,  1285,  1286,
    1286,  1287,  1287,  1288,  1288,  1289,  1289,  1289,  1290,  1290,
    1291,  1291,  1292,  1292,  1292,  1292,  1293,  1293,  1294,  1294,
    1295,  1295,  1296,  1296,  1297,  1297,  1298,  1298,  1299,  1299,
    1300,  1300,  1300,  1301,  1301,  1302,  1302,  1303,  1303,  1304,
    1304,  1305,  1305,  1306,  1306,  1307,  1307,  1308,  1308,  1308,
    1309,  1309,  1310,  1310,  1311,  1311,  1312,  1312,  1313,  1313,
    1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,  1318,  1318,
    1319,  1319,  1320,  1320,  1321,  1321,  1322,  1322,  1323,  1323,
    1324,  1324,  1325,  1325,  1326,  1326,  1327,  1327,  1328,  1328,
    1328,  1329,  1329,  1330,  1330,  1331,  1331,  1332,  1332,  1333,
    1333,  1334,  1334,  1335,  1335,  1336,  1336
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     1,     1,
       0,     2,     4,     4,     3,     0,     1,     2,     0,     1,
       3,     0,     1,     3,     0,     0,     0,    20,     0,     7,
       5,     1,     1,     0,     2,     0,     3,     1,     2,     1,
       1,     1,     1,     0,     3,     0,     3,     0,     2,     1,
       1,     1,     1,     1,     0,     4,     0,     3,     0,     3,
       0,     4,     0,     2,     3,     2,     1,     2,     1,     1,
       1,     1,     5,     3,     3,     4,     1,     1,     1,     1,
       1,     2,     0,     4,     0,     2,     3,     1,     2,     3,
       3,     3,     1,     1,     0,     2,     1,     2,     2,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     2,     3,     3,
       1,     0,     1,     3,     4,     0,     5,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     0,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     2,     3,     1,     2,     3,     1,     2,     1,     2,
       4,     1,     2,     1,     3,     4,     5,     0,     3,     3,
       5,     3,     4,     3,     3,     0,     3,     0,     2,     0,
       2,     0,     2,     0,     6,     3,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     5,     5,     5,     5,     1,     1,     1,     1,
       0,     3,     0,     1,     1,     1,     1,     0,     1,     1,
       4,     1,     1,     1,     7,     0,     4,     3,     3,     4,
       0,     1,     1,     0,     5,     2,     2,     1,     0,     4,
       5,     2,     3,     1,     1,     3,     1,     2,     4,     4,
       4,     1,     3,     4,     4,     3,     1,     1,     3,     2,
       2,     2,     0,     2,     3,     1,     2,     1,     1,     5,
       0,     1,     1,     1,     0,     6,     1,     2,     2,     0,
       2,     0,     3,     0,     3,     0,     2,     2,     0,     5,
       3,     1,     1,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     1,
       4,     6,     9,     0,     3,     0,     2,     0,     2,     3,
       5,     5,     1,     1,     1,     1,     3,     5,     0,     2,
       1,     1,     1,     4,     2,     2,     4,     3,     2,     2,
       2,     1,     2,     0,     0,     5,     0,     0,     2,     2,
       3,     2,     1,     0,     4,     3,     2,     0,     1,     1,
       1,     0,     2,     1,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       2,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       0,     2,     2,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     6,     0,
       2,     7,     8,     0,     2,     0,     2,     0,     3,     0,
       3,     0,     1,     1,     0,     5,     1,     1,     0,     3,
       1,     2,     1,     2,     2,     3,     1,     0,     5,     1,
       2,     1,     3,     0,     4,     2,     4,     2,     2,     0,
       0,     5,     0,     0,     5,     0,     0,     5,     0,     2,
       0,     6,     0,     2,     2,     2,     3,     1,     1,     2,
       2,     1,     2,     4,     1,     4,     2,     0,     2,     1,
       1,     1,     1,     1,     3,     4,     4,     4,     3,     0,
       2,     0,     5,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     1,     2,     1,     1,     0,
       2,     2,     0,     2,     4,     4,     0,     3,     1,     1,
       3,     6,     2,     3,     2,     2,     3,     2,     1,     2,
       2,     1,     1,     1,     2,     2,     1,     4,     2,     3,
       0,     0,     5,     0,     1,     2,     3,     1,     0,     4,
       3,     0,     2,     2,     2,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     5,     5,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     0,     1,     1,     0,     1,     1,     3,     2,     0,
       0,     0,     9,     0,     4,     0,     0,     3,     0,     3,
       1,     2,     4,     0,     2,     2,     0,     3,     3,     4,
       4,     3,     0,     1,     0,     2,     0,     0,     7,     0,
       2,     1,     1,     2,     1,     1,     0,     6,     0,     2,
       2,     1,     0,     1,     0,     0,     3,     0,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     0,     4,     6,     3,     3,     4,     3,     4,     3,
       3,     4,     4,     3,     4,     3,     4,     5,     3,     4,
       3,     3,     1,     1,     1,     2,     0,     1,     3,     3,
       2,     2,     2,     3,     3,     3,     0,     1,     0,     3,
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     4,     3,     1,     2,     1,     1,     3,     3,     3,
       3,     3,     1,     1,     0,     1,     0,     4,     4,     5,
       6,     0,     2,     0,     1,     0,     3,     3,     4,     0,
       2,     0,     3,     1,     2,     4,     0,     2,     0,     4,
       6,     0,     1,     1,     1,     0,     0,     3,     1,     2,
       2,     3,     0,     2,     2,     2,     0,     3,     2,     4,
       1,     1,     1,     1,     0,     2,     0,     2,     0,     1,
       0,     3,     1,     2,     0,     3,     2,     3,     0,     1,
       3,     3,     2,     0,     4,     4,     0,     1,     1,     1,
       0,     4,     3,     2,     1,     2,     0,     1,     0,     4,
       3,     3,     3,     3,     4,     2,     4,     1,     0,     3,
       5,     0,     2,     2,     2,     2,     0,     2,     1,     1,
       0,     2,     0,     1,     1,     2,     1,     2,     2,     1,
       1,     2,     2,     1,     1,     1,     1,     3,     1,     3,
       3,     3,     3,     0,     1,     0,     4,     4,     6,     6,
       8,     8,     0,     1,     0,     3,     2,     0,     4,     2,
       1,     3,     1,     1,     1,     2,     1,     1,     2,     2,
       3,     2,     3,     1,     3,     2,     1,     1,     1,     0,
       2,     0,     1,     0,     3,     0,     2,     1,     2,     1,
       1,     1,     0,     2,     0,     3,     1,     0,     3,     1,
       0,     3,     3,     0,     3,     2,     0,     6,     3,     2,
       1,     0,     1,     0,     3,     5,     0,     2,     0,     3,
       3,     0,     2,     1,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     3,     1,     2,     0,
       3,     2,     1,     1,     1,     2,     1,     1,     1,     0,
       3,     2,     5,     1,     2,     2,     2,     1,     1,     1,
       2,     1,     2,     4,     2,     0,     1,     1,     1,     1,
       4,     0,     2,     3,     3,     0,     3,     0,     3,     3,
       4,     0,     4,     4,     6,     0,     1,     0,     3,     4,
       5,     1,     1,     1,     1,     0,     3,     0,     3,     2,
       1,     0,     3,     2,     0,     4,     2,     0,     1,     1,
       1,     1,     3,     0,     2,     1,     3,     3,     0,     3,
       1,     1,     1,     3,     7,     0,     4,     7,     0,     2,
       0,     2,     2,     3,     3,     3,     2,     0,     3,     1,
       1,     0,     1,     1,     0,     3,     2,     1,     0,     4,
       4,     0,     1,     0,     4,     4,     0,     2,     3,     0,
       1,     1,     0,     4,     4,     6,     0,     2,     0,     2,
       1,     2,     3,     0,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       3,     4,     1,     2,     3,     1,     2,     3,     3,     0,
       3,     0,     7,     0,     5,     0,     2,     0,     2,     0,
       3,     0,     2,     4,     0,     2,     4,     0,     4,     4,
       0,     3,     0,     4,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     2,     1,     0,     1,     0,     4,     2,
       0,     2,     4,     4,     0,     1,     1,     1,     1,     1,
       0,     4,     5,     1,     2,     1,     3,     3,     0,     4,
       0,     1,     0,     4,     4,     6,     6,     0,     1,     2,
       0,     1,     0,     3,     1,     2,     0,     3,     5,     0,
       3,     2,     0,     1,     1,     0,     4,     6,     0,     3,
       1,     3,     2,     2,     2,     3,     0,     3,     0,     3,
       0,     3,     0,     1,     0,     3,     1,     1,     1,     1,
       1,     7,     0,     1,     1,     1,     1,     1,     1,     4,
       1,     2,     1,     2,     3,     0,     1,     2,     1,     3,
       1,     1,     4,     1,     1,     1,     0,     4,     5,     0,
       2,     0,     4,     3,     3,     1,     1,     1,     1,     0,
       1,     2,     0,     2,     1,     1,     0,     2,     1,     1,
       2,     0,     2,     0,     2,     2,     0,     2,     0,     2,
       2,     0,     2,     0,     2,     2,     1,     2,     1,     1,
       2,     2,     2,     1,     1,     2,     2,     2,     0,     2,
       0,     2,     0,     2,     1,     1,     0,     2,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     1,     1,     3,     3,
       1,     3,     3,     1,     3,     1,     2,     2,     1,     3,
       1,     1,     3,     1,     3,     1,     3,     1,     2,     2,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     0,
       2,     1,     1,     1,     3,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     3,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     4,     3,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     2,     1,     1,     3,
       2,     2,     1,     1,     3,     3,     4,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       5,     5,     5,     4,     5,     5,     5,     5,     5,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     5,     0,     3,     2,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     0,     0,     1,
       0,     1,     0,     1,     0,     2,     0,     2,     0,     1,
       1,     0,     1,     0,     1,     2,     0,     2,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     1,
       0,     1,     1,     0,     1,     1,     0,     2,     2,     0,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     1,
       0,     1,     0,     2,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       0,     1,     0,     3,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     2,
       1,     1,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 1390 "parser.y" /* yacc.c:1646  */
    {
	clear_initial_values ();
	current_program = NULL;
	cobc_cs_check = 0;
	prog_end = 0;
	depth = 0;
	main_flag_set = 0;
	current_program = cb_build_program (NULL, 0);
	cb_build_registers ();
  }
#line 6175 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 1401 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
	if (depth > 1) {
		cb_error (_("Multiple PROGRAM-ID's without matching END PROGRAM"));
	}
	if (cobc_flag_main && !main_flag_set) {
		cb_error (_("Executable requested but no program found"));
	}
	if (errorcount > 0) {
		YYABORT;
	}
	if (!current_program->entry_list) {
		emit_entry (current_program->program_id, 0, NULL);
	}
  }
#line 6198 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 1437 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	current_section = NULL;
	current_paragraph = NULL;
	prog_end = 1;
	if (increment_depth ()) {
		YYABORT;
	}
	l = cb_build_alphanumeric_literal (demangle_name,
					   strlen (demangle_name));
	current_program->program_id = cb_build_program_id (l, NULL, 0);
	current_program->prog_type = CB_PROGRAM_TYPE;
	if (!main_flag_set) {
		main_flag_set = 1;
		current_program->flag_main = cobc_flag_main;
	}
	check_relaxed_syntax (COBC_HD_PROGRAM_ID);
  }
#line 6222 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 1492 "parser.y" /* yacc.c:1646  */
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[-1]))) {
		s = (char *)(CB_LITERAL ((yyvsp[-1]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[-1])));
	}
	if (depth) {
		depth--;
	}
	if (strcmp (stack_progid[depth], s)) {
		cb_error (_("END PROGRAM '%s' is different to PROGRAM-ID '%s'"),
			s, stack_progid[depth]);
	}
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
  }
#line 6247 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 1521 "parser.y" /* yacc.c:1646  */
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[-1]))) {
		s = (char *)(CB_LITERAL ((yyvsp[-1]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[-1])));
	}
	if (depth) {
		depth--;
	}
	if (strcmp (stack_progid[depth], s)) {
		cb_error (_("END FUNCTION '%s' is different to FUNCTION-ID '%s'"),
			s, stack_progid[depth]);
	}
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
  }
#line 6272 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 1554 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 6280 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 1560 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 6288 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 1572 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 6296 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 1582 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[-1]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[-1]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[-1])));
	}
	if (prog_end) {
		if (!current_program->flag_validated) {
			current_program->flag_validated = 1;
			cb_validate_program_body (current_program);
		}
		clear_initial_values ();
		current_program = cb_build_program (current_program, depth);
		build_nested_special (depth);
		cb_build_registers ();
	} else {
		prog_end = 1;
	}
	if (increment_depth ()) {
		YYABORT;
	}
	current_program->program_id = cb_build_program_id ((yyvsp[-1]), (yyvsp[0]), 0);
	current_program->prog_type = CB_PROGRAM_TYPE;
	if (!main_flag_set) {
		main_flag_set = 1;
		current_program->flag_main = !!cobc_flag_main;
	}
  }
#line 6331 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 1613 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6339 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 1620 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[-2]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[-2]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[-2])));
	}
	if (prog_end) {
		if (!current_program->flag_validated) {
			current_program->flag_validated = 1;
			cb_validate_program_body (current_program);
		}
		clear_initial_values ();
		current_program = cb_build_program (current_program, depth);
		build_nested_special (depth);
		cb_build_registers ();
	} else {
		prog_end = 1;
	}
	if (increment_depth ()) {
		YYABORT;
	}
	current_program->program_id = cb_build_program_id ((yyvsp[-2]), (yyvsp[-1]), 1);
	current_program->prog_type = CB_FUNCTION_TYPE;
	current_program->flag_recursive = 1;
	cobc_cs_check = 0;
  }
#line 6372 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 1656 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6378 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 1657 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6384 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1666 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6397 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 1675 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6410 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1689 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6418 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1693 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6426 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1703 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6434 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1712 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 6446 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1737 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 6459 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1755 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 6471 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1768 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
#line 6481 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1797 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 6489 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1804 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 6497 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1811 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 6505 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1818 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 6517 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1829 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6525 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1833 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6533 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1837 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6541 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1841 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6549 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1855 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 6558 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1860 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 6566 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1868 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 6574 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1880 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 6582 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1884 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	if ((yyvsp[0])) {
		x = (yyvsp[0]);
	} else {
		x = (yyvsp[-1]);
	}
	current_program->user_spec_list =
		cb_list_add (current_program->user_spec_list, x);
  }
#line 6598 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1905 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6606 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1909 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6614 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1916 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6623 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1921 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6632 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1932 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 6646 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1946 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	yyerrok;
  }
#line 6655 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1977 "parser.y" /* yacc.c:1646  */
    {
	char system_name[16];
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	check_duplicate = 0;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		save_tree = NULL;
	} else {
		/* get system name and revert word-combination of scanner.l,
		   if necessary (e.g. SWITCH A <--> SWITCH_A) */
		strncpy(system_name, CB_NAME ((yyvsp[0])), 15);
		if (system_name [6] == '_') {
			system_name [6] = ' ';
		}
		/* lookup system name */
		save_tree = lookup_system_name (system_name);
		if (!save_tree) {
			cb_error_x ((yyvsp[0]), _("Invalid system-name '%s'"), system_name);
		}
	}
  }
#line 6683 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 2005 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 6697 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2015 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (save_tree, _("Invalid special names clause"));
		} else if (CB_VALID_TREE ((yyvsp[0]))) {
			CB_SYSTEM_NAME(save_tree)->value = (yyvsp[-2]);
			cb_define ((yyvsp[0]), save_tree);
			CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
					(yyvsp[0]), save_tree);
		}
	}
  }
#line 6714 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2028 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 6726 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2044 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[0]), save_tree, (yyvsp[-2]) == cb_int1);
	if (x) {
		if ((yyvsp[-2]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[0]), x);
	}
  }
#line 6745 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2059 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[0]), save_tree, (yyvsp[-2]) == cb_int1);
	if (x) {
		if ((yyvsp[-2]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[0]), x);
	}
  }
#line 6764 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2079 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		(yyval) = NULL;
	} else {
		/* Returns null on error */
		(yyval) = cb_build_alphabet_name ((yyvsp[0]));
	}
  }
#line 6781 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2092 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 6793 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2103 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 6803 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2109 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6813 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2115 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6823 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2121 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 6833 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2127 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6843 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2133 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 6854 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2143 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 6862 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2147 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6870 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2154 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6878 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2158 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 6886 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2162 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 6894 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2166 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 6902 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2173 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6910 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2177 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 6918 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2183 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6924 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2184 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6930 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2185 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 6936 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2186 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 6942 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2187 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 6948 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2188 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 6954 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2192 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6960 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2193 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 6966 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2201 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else if ((yyvsp[-1])) {
		CB_CHAIN_PAIR (current_program->symbolic_char_list, (yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 6981 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2215 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6989 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2219 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6997 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2227 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7005 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2234 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7013 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2238 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7025 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2249 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l1;
	cb_tree		l2;

	if (cb_list_length ((yyvsp[-2])) != cb_list_length ((yyvsp[0]))) {
		cb_error (_("Invalid SYMBOLIC clause"));
		(yyval) = NULL;
	} else {
		l1 = (yyvsp[-2]);
		l2 = (yyvsp[0]);
		for (; l1; l1 = CB_CHAIN (l1), l2 = CB_CHAIN (l2)) {
			CB_PURPOSE (l1) = CB_VALUE (l2);
		}
		(yyval) = (yyvsp[-2]);
	}
  }
#line 7046 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2269 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7058 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2277 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7070 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2287 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7076 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2288 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7082 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2295 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		x = cb_build_class_name ((yyvsp[-2]), (yyvsp[0]));
		if (x) {
			current_program->class_name_list =
				cb_list_add (current_program->class_name_list, x);
		}
	}
  }
#line 7104 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2315 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7110 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2316 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7116 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2321 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7124 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2325 "parser.y" /* yacc.c:1646  */
    {
	if (CB_TREE_CLASS ((yyvsp[-2])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[-2])) && CB_LITERAL ((yyvsp[-2]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (CB_TREE_CLASS ((yyvsp[0])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[0])) && CB_LITERAL ((yyvsp[0]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (literal_value ((yyvsp[-2])) <= literal_value ((yyvsp[0]))) {
		(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
	} else {
		(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-2]));
	}
  }
#line 7144 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2346 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		l = cb_build_locale_name ((yyvsp[-2]), (yyvsp[0]));
		if (l) {
			current_program->locale_list =
				cb_list_add (current_program->locale_list, l);
		}
	}
  }
#line 7166 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2369 "parser.y" /* yacc.c:1646  */
    {
	unsigned char	*s = CB_LITERAL ((yyvsp[-1]))->data;
	unsigned int	error_ind = 0;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		error_ind = 1;
	}
	check_repeated ("CURRENCY", SYN_CLAUSE_1);
	if ((yyvsp[0])) {
		PENDING ("PICTURE SYMBOL");
	}
	if (CB_LITERAL ((yyvsp[-1]))->size != 1) {
		cb_error_x ((yyvsp[-1]), _("Invalid currency sign '%s'"), (char *)s);
		error_ind = 1;
	}
	switch (*s) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'N':
	case 'P':
	case 'R':
	case 'S':
	case 'V':
	case 'X':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'n':
	case 'p':
	case 'r':
	case 's':
	case 'v':
	case 'x':
	case 'z':
	case '+':
	case '-':
	case ',':
	case '.':
	case '*':
	case '/':
	case ';':
	case '(':
	case ')':
	case '=':
	case '\'':
	case '"':
	case ' ':
		cb_error_x ((yyvsp[-1]), _("Invalid currency sign '%s'"), (char *)s);
		break;
	default:
		if (!error_ind) {
			current_program->currency_symbol = s[0];
		}
		break;
	}
  }
#line 7247 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2450 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7255 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2454 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7263 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2463 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("DECIMAL-POINT", SYN_CLAUSE_2);
		current_program->decimal_point = ',';
		current_program->numeric_separator = '.';
	}
  }
#line 7280 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2482 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		current_program->flag_trailing_separate = 1;
	}
  }
#line 7295 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2498 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3);
		current_program->cursor_pos = (yyvsp[0]);
	}
  }
#line 7311 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2516 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CRT STATUS", SYN_CLAUSE_4);
		current_program->crt_status = (yyvsp[0]);
	}
  }
#line 7327 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2534 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("SCREEN CONTROL", SYN_CLAUSE_5);
		PENDING ("SCREEN CONTROL");
	}
  }
#line 7343 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2551 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("EVENT STATUS", SYN_CLAUSE_6);
		PENDING ("EVENT STATUS");
	}
  }
#line 7359 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 2568 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7368 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 2576 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7378 "parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 2585 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7388 "parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 2600 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_FILE_CONTROL, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	}

	/* Build new file */
	current_file = build_file ((yyvsp[0]));
	current_file->optional = CB_INTEGER ((yyvsp[-1]))->val;

	/* Add file to current program list */
	CB_ADD_TO_CHAIN (CB_TREE (current_file), current_program->file_list);
  }
#line 7409 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2617 "parser.y" /* yacc.c:1646  */
    {
	validate_file (current_file, (yyvsp[-3]));
  }
#line 7417 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2621 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
#line 7429 "parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 2655 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 7439 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2661 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 7453 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2671 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdout", (size_t)6);
		current_file->special = COB_SELECT_STDOUT;
	}
  }
#line 7470 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 2684 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdin", (size_t)5);
		current_file->special = COB_SELECT_STDIN;
	}
  }
#line 7487 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 2697 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("LPT1", (size_t)4);
	}
  }
#line 7504 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 2720 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 7512 "parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 2727 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 7520 "parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 2740 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7528 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 2752 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
#line 7537 "parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2759 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 7543 "parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 2760 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 7549 "parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 2761 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 7555 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2769 "parser.y" /* yacc.c:1646  */
    {
	struct cb_alt_key *p;
	struct cb_alt_key *l;

	p = cobc_parse_malloc (sizeof (struct cb_alt_key));
	p->key = (yyvsp[-2]);
	p->duplicates = CB_INTEGER ((yyvsp[-1]))->val;
	p->next = NULL;

	/* Add to the end of list */
	if (current_file->alt_key_list == NULL) {
		current_file->alt_key_list = p;
	} else {
		l = current_file->alt_key_list;
		for (; l->next; l = l->next) {
			;
		}
		l->next = p;
	}
  }
#line 7580 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 2792 "parser.y" /* yacc.c:1646  */
    { }
#line 7586 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 2795 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
#line 7594 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2800 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 7602 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2810 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
#line 7611 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2821 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[0]);
  }
#line 7620 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 2836 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
#line 7628 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 2844 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 7637 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 2849 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 7646 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 2854 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 7655 "parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 2863 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 7663 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2867 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 7672 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2883 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 7681 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2888 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 7690 "parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2893 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 7699 "parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2898 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 7708 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2909 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 7717 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2920 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
#line 7725 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2930 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[0]);
  }
#line 7734 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2937 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7740 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2938 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 7746 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2939 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 7752 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2946 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[0]);
  }
#line 7761 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2957 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
#line 7769 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2971 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[0]);
  }
#line 7778 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2978 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7784 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2979 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 7790 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2980 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7796 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2989 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7804 "parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 3008 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	switch (CB_INTEGER ((yyvsp[-3]))->val) {
	case 0:
		/* SAME AREA */
		break;
	case 1:
		/* SAME RECORD */
		for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l))) {
				CB_FILE (cb_ref (CB_VALUE (l)))->same_clause = samearea;
			}
		}
		samearea++;
		break;
	case 2:
		/* SAME SORT-MERGE */
		break;
	}
  }
#line 7833 "parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 3035 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 7839 "parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 3036 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 7845 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 3037 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7851 "parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 3038 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7857 "parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 3045 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 7866 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 3050 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 7878 "parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 3077 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 7886 "parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 3086 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 7896 "parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 3100 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE (current_file)) {
		if (CB_VALID_TREE ((yyvsp[0]))) {
			if (current_file->reports) {
				cb_error (_("RECORD description invalid with REPORT"));
			} else {
				finalize_file (current_file, CB_FIELD ((yyvsp[0])));
			}
		} else if (!current_file->reports) {
			cb_error (_("RECORD description missing or invalid"));
		}
	}
  }
#line 7914 "parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 3119 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION,
			       COBC_HD_FILE_SECTION, 0, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[0])) || cb_ref ((yyvsp[0])) == cb_error_node) {
		YYERROR;
	}
	current_file = CB_FILE (cb_ref ((yyvsp[0])));
	if (CB_VALID_TREE (current_file)) {
		if ((yyvsp[-1])) {
			current_file->organization = COB_ORG_SORT;
		}
	}
  }
#line 7934 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3136 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7942 "parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 3143 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7950 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3147 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7958 "parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 3158 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 7972 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 3168 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_2);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_external) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		current_file->flag_global = 1;
		current_program->flag_file_global = 1;
	}
  }
#line 7991 "parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 3198 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
#line 8000 "parser.c" /* yacc.c:1646  */
    break;

  case 310:
#line 3211 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD", SYN_CLAUSE_4);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_max = cb_get_int ((yyvsp[-1]));
		if (current_file->record_max < 1)  {
			current_file->record_max = 1;
			cb_error (_("RECORD clause invalid"));
		}
		if (current_file->record_max > MAX_FD_RECORD)  {
			current_file->record_max = MAX_FD_RECORD;
			cb_error (_("RECORD size exceeds maximum allowed (%d)"),
				  MAX_FD_RECORD);
		}
	}
  }
#line 8024 "parser.c" /* yacc.c:1646  */
    break;

  case 311:
#line 3231 "parser.y" /* yacc.c:1646  */
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_min = cb_get_int ((yyvsp[-3]));
		current_file->record_max = cb_get_int ((yyvsp[-1]));
		if (current_file->record_min < 0)  {
			current_file->record_min = 0;
			error_ind = 1;
		}
		if (current_file->record_max < 1)  {
			current_file->record_max = 1;
			error_ind = 1;
		}
		if (current_file->record_max > MAX_FD_RECORD)  {
			current_file->record_max = MAX_FD_RECORD;
			cb_error (_("RECORD size exceeds maximum allowed (%d)"),
				  MAX_FD_RECORD);
			error_ind = 1;
		}
		if (current_file->record_max <= current_file->record_min)  {
			error_ind = 1;
		}
		if (error_ind) {
			cb_error (_("RECORD clause invalid"));
		}
	}
  }
#line 8062 "parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 3266 "parser.y" /* yacc.c:1646  */
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4);
	current_file->record_min = (yyvsp[-3]) ? cb_get_int ((yyvsp[-3])) : 0;
	current_file->record_max = (yyvsp[-2]) ? cb_get_int ((yyvsp[-2])) : 0;
	if ((yyvsp[-3]) && current_file->record_min < 0)  {
		current_file->record_min = 0;
		error_ind = 1;
	}
	if ((yyvsp[-2]) && current_file->record_max < 1)  {
		current_file->record_max = 1;
		error_ind = 1;
	}
	if ((yyvsp[-2]) && current_file->record_max > MAX_FD_RECORD)  {
		current_file->record_max = MAX_FD_RECORD;
		cb_error (_("RECORD size exceeds maximum allowed (%d)"),
			  MAX_FD_RECORD);
		error_ind = 1;
	}
	if (((yyvsp[-3]) || (yyvsp[-2])) && current_file->record_max <= current_file->record_min)  {
		error_ind = 1;
	}
	if (error_ind) {
		cb_error (_("RECORD clause invalid"));
	}
  }
#line 8094 "parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 3297 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8102 "parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 3303 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8108 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3304 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8114 "parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 3308 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8120 "parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 3309 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8126 "parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 3317 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8135 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3328 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8144 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3333 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8156 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 3356 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8165 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 3368 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINAGE", SYN_CLAUSE_8);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("LINAGE clause with wrong file type"));
	} else {
		current_file->linage = (yyvsp[-2]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		if (current_linage == 0) {
			linage_file = current_file;
		}
		current_linage++;
	}
  }
#line 8184 "parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 3396 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8192 "parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 3403 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8200 "parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 3410 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8208 "parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 3419 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
#line 8218 "parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 3431 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE SET", SYN_CLAUSE_10);
	if (CB_VALID_TREE ((yyvsp[0]))) {
		cb_tree			x;
		struct cb_alphabet_name	*al;

		x = cb_ref ((yyvsp[0]));
		if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
		    current_file->organization != COB_ORG_SEQUENTIAL) {
			cb_error (_("CODE-SET clause invalid for file type"));
		}
		if (!CB_ALPHABET_NAME_P (x)) {
			cb_error_x ((yyvsp[0]), _("Alphabet-name is expected '%s'"), cb_name ((yyvsp[0])));
		} else {
			al = CB_ALPHABET_NAME (x);
			switch (al->alphabet_type) {
#ifdef	COB_EBCDIC_MACHINE
			case CB_ALPHABET_ASCII:
			case CB_ALPHABET_CUSTOM:
				current_file->code_set = al;
				break;
			default:
				if (warningopt) {
					cb_warning_x ((yyvsp[0]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[0])));
				}
				break;
#else
			case CB_ALPHABET_EBCDIC:
			case CB_ALPHABET_CUSTOM:
				current_file->code_set = al;
				break;
			default:
				if (warningopt) {
					cb_warning_x ((yyvsp[0]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[0])));
				}
				break;
#endif
			}
			if (warningopt) {
				PENDING ("CODE-SET");
			}
		}
	}
  }
#line 8269 "parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3483 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REPORT", SYN_CLAUSE_11);
	PENDING("REPORT WRITER");
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = (yyvsp[0]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	}
  }
#line 8285 "parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3503 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8299 "parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3513 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8312 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3553 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8322 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3559 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8332 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3568 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8340 "parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3571 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8350 "parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3577 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 8363 "parser.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3597 "parser.y" /* yacc.c:1646  */
    {
	cb_tree x;

	x = cb_build_field_tree ((yyvsp[-1]), (yyvsp[0]), current_field, current_storage,
				 current_file, 0);
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-1]));
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	} else {
		current_field = CB_FIELD (x);
		check_pic_duplicate = 0;
	}
  }
#line 8382 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3612 "parser.y" /* yacc.c:1646  */
    {
	if (!qualifier && (current_field->level == 88 ||
	    current_field->level == 66 || current_field->flag_item_78)) {
		cb_error (_("Item requires a data name"));
	}
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (current_field->level == 88) {
		cb_validate_88_item (current_field);
	}
	if (current_field->flag_item_78) {
		/* Reset to last non-78 item */
		current_field = cb_validate_78_item (current_field, 0);
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
#line 8406 "parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3632 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8420 "parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3645 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8428 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3652 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8438 "parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3658 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8448 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3664 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8458 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3673 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8468 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3682 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 8476 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3686 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 8489 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3697 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8495 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3698 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8501 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3699 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8507 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3700 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8513 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3705 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8521 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3709 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8529 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3713 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 8537 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3717 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 8545 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3721 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8553 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3725 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 8561 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3729 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 8569 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3733 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 8577 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3737 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 8585 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3741 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 8593 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3745 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8601 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3749 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 8609 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3753 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8621 "parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3785 "parser.y" /* yacc.c:1646  */
    {
	cb_tree x;
	int	level;

	cobc_cs_check = 0;
	level = cb_get_level ((yyvsp[-4]));
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-4]));
	if (level != 1) {
		cb_error (_("CONSTANT item not at 01 level"));
	} else if ((yyvsp[0])) {
		x = cb_build_constant ((yyvsp[-3]), (yyvsp[0]));
		CB_FIELD (x)->flag_item_78 = 1;
		CB_FIELD (x)->level = 1;
		cb_needs_01 = 1;
		if ((yyvsp[-1])) {
			CB_FIELD (x)->flag_is_global = 1;
		}
		/* Ignore return value */
		(void)cb_validate_78_item (CB_FIELD (x), 0);
	}
  }
#line 8648 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3811 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8656 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3815 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 8665 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3823 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 8674 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3829 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 8683 "parser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 3857 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("REDEFINES", SYN_CLAUSE_1);
	if ((yyvsp[-2]) != NULL) {
		if (cb_relaxed_syntax_check) {
			cb_warning_x ((yyvsp[0]), _("REDEFINES clause should follow entry-name"));
		} else {
			cb_error_x ((yyvsp[0]), _("REDEFINES clause must follow entry-name"));
		}
	}

	current_field->redefines = cb_resolve_redefines (current_field, (yyvsp[0]));
	if (current_field->redefines == NULL) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
		YYERROR;
	}
  }
#line 8705 "parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 3881 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("EXTERNAL", SYN_CLAUSE_2);
	if (current_storage != CB_STORAGE_WORKING) {
		cb_error (_("%s not allowed here"), "EXTERNAL");
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "EXTERNAL");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "EXTERNAL");
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_is_global) {
		cb_error (_("%s and %s are mutually exclusive"), "GLOBAL", "EXTERNAL");
#endif
	} else if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "EXTERNAL");
	} else if (current_field->redefines) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "REDEFINES");
	} else if (current_field->flag_occurs) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	} else {
		current_field->flag_external = 1;
		current_program->flag_has_external = 1;
	}
  }
#line 8733 "parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 3908 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 8741 "parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 3912 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 8749 "parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 3921 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("GLOBAL", SYN_CLAUSE_3);
	if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "GLOBAL");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "GLOBAL");
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "GLOBAL", "EXTERNAL");
#endif
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else if (current_storage == CB_STORAGE_LOCAL) {
		cb_error (_("%s not allowed here"), "GLOBAL");
	} else {
		current_field->flag_is_global = 1;
	}
  }
#line 8772 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 3946 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 8781 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3962 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8789 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 3966 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8797 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 3970 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 8805 "parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 3974 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 8813 "parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 3978 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8821 "parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 3982 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8829 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 3986 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 8837 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 3990 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 8845 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 3994 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 8853 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 3998 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 8861 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4002 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 8869 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4006 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8877 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4010 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8886 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4015 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8895 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4020 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 8903 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4024 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 8911 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4028 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 8923 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4036 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 8931 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4040 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 8939 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4044 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 8951 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4052 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 8959 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4056 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 8967 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4060 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 8975 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4064 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 8983 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4068 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 8991 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4072 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 8999 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4076 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9007 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4080 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9015 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4084 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9027 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4092 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9039 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4100 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9047 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4104 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9055 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4108 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9063 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4112 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9071 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4116 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9079 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4120 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
#line 9088 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4140 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9098 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4146 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9108 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4159 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
	if (current_field->depending && !((yyvsp[-3]))) {
		cb_verify (cb_odo_without_to, "ODO without TO clause");
	}
	current_field->occurs_min = (yyvsp[-3]) ? cb_get_int ((yyvsp[-4])) : 1;
	current_field->occurs_max = (yyvsp[-3]) ? cb_get_int ((yyvsp[-3])) : cb_get_int ((yyvsp[-4]));
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	current_field->flag_occurs = 1;
  }
#line 9127 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4177 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9135 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4187 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
	if (current_field->depending && !((yyvsp[-4]))) {
		cb_verify (cb_odo_without_to, "ODO without TO clause");
	}
	current_field->occurs_min = (yyvsp[-4]) ? cb_get_int ((yyvsp[-5])) : 1;
	current_field->occurs_max = (yyvsp[-4]) ? cb_get_int ((yyvsp[-4])) : cb_get_int ((yyvsp[-5]));
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	}
	current_field->flag_occurs = 1;
  }
#line 9159 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4208 "parser.y" /* yacc.c:1646  */
    {
	current_field->occurs_min = (yyvsp[-4]) ? cb_get_int ((yyvsp[-4])) : 0;
	PENDING("OCCURS with DYNAMIC capacity");
	current_field->occurs_max = (yyvsp[-3]) ? cb_get_int ((yyvsp[-3])) : 0;
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	}
	current_field->flag_occurs = 1;
  }
#line 9180 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4227 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9186 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4228 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9192 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4232 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9198 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4233 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9204 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4238 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9212 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4245 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9221 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4253 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9229 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4260 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_tree		l;
		struct cb_key	*keys;
		int		i;
		int		nkeys;

		l = (yyvsp[0]);
		nkeys = cb_list_length ((yyvsp[0]));
		keys = cobc_parse_malloc (sizeof (struct cb_key) * nkeys);

		for (i = 0; i < nkeys; i++) {
			keys[i].dir = CB_PURPOSE_INT (l);
			keys[i].key = CB_VALUE (l);
			l = CB_CHAIN (l);
		}
		current_field->keys = keys;
		current_field->nkeys = nkeys;
	}
  }
#line 9254 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4283 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9260 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4286 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[-3]);
		if (qualifier && !CB_REFERENCE(CB_VALUE(l))->chain &&
		    strcasecmp (CB_NAME(CB_VALUE(l)), CB_NAME(qualifier))) {
			CB_REFERENCE(CB_VALUE(l))->chain = qualifier;
		}
	}
	(yyval) = cb_list_append ((yyvsp[-4]), (yyvsp[0]));
  }
#line 9277 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4301 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9283 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4302 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9289 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4307 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9297 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4313 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9303 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4315 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9309 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4320 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9318 "parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4331 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
#line 9327 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4342 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
#line 9336 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4353 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
#line 9345 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4364 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("BASED", SYN_CLAUSE_11);
	if (current_storage != CB_STORAGE_WORKING &&
	    current_storage != CB_STORAGE_LINKAGE &&
	    current_storage != CB_STORAGE_LOCAL) {
		cb_error (_("%s not allowed here"), "BASED");
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "BASED");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "BASED");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "EXTERNAL");
	} else if (current_field->redefines) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "REDEFINES");
	} else if (current_field->flag_any_length) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else if (current_field->flag_occurs) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else {
		current_field->flag_item_based = 1;
	}
  }
#line 9372 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4392 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[0]);
  }
#line 9381 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4400 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9387 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4401 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9393 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4405 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9399 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4406 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 9405 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4411 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 9416 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4424 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("RENAMES", SYN_CLAUSE_13);
	if (cb_ref ((yyvsp[0])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[0])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[0])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[0])));
			current_field->pic = current_field->redefines->pic;
		}
	}
  }
#line 9433 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4437 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("RENAMES", SYN_CLAUSE_13);
	if (cb_ref ((yyvsp[-2])) != cb_error_node && cb_ref ((yyvsp[0])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[-2])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[-2])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else if (CB_FIELD (cb_ref ((yyvsp[0])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[0])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[-2])));
			current_field->rename_thru = CB_FIELD (cb_ref ((yyvsp[0])));
		}
	}
  }
#line 9453 "parser.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4458 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 9466 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4467 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 9480 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4482 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 9493 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4491 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9503 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4503 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 9513 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4509 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9523 "parser.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4520 "parser.y" /* yacc.c:1646  */
    {
	PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 9533 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4536 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 9546 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4551 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9554 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4558 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 9563 "parser.c" /* yacc.c:1646  */
    break;

  case 516:
#line 4563 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
#line 9571 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4574 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
#line 9579 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 4593 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PAGE", SYN_CLAUSE_4);
	if (!current_report->heading) {
		current_report->heading = 1;
	}
	if (!current_report->first_detail) {
		current_report->first_detail = current_report->heading;
	}
	if (!current_report->last_control) {
		if (current_report->last_detail) {
			current_report->last_control = current_report->last_detail;
		} else if (current_report->footing) {
			current_report->last_control = current_report->footing;
		} else {
			current_report->last_control = current_report->lines;
		}
	}
	if (!current_report->last_detail && !current_report->footing) {
		current_report->last_detail = current_report->lines;
		current_report->footing = current_report->lines;
	} else if (!current_report->last_detail) {
		current_report->last_detail = current_report->footing;
	} else if (!current_report->footing) {
		current_report->footing = current_report->last_detail;
	}
	if (current_report->heading > current_report->first_detail ||
	    current_report->first_detail > current_report->last_control ||
	    current_report->last_control > current_report->last_detail ||
	    current_report->last_detail > current_report->footing) {
		cb_error (_("Invalid PAGE clause"));
	}
  }
#line 9616 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4629 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 9624 "parser.c" /* yacc.c:1646  */
    break;

  case 525:
#line 4633 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 9633 "parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 4638 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 9641 "parser.c" /* yacc.c:1646  */
    break;

  case 534:
#line 4658 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 9649 "parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 4665 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 9657 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 4672 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 9665 "parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 4679 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 9673 "parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 4686 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 9681 "parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 4697 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 9689 "parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 4728 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
#line 9697 "parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 4754 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
#line 9705 "parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 4761 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
  }
#line 9713 "parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 4777 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
  }
#line 9721 "parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 4788 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
  }
#line 9729 "parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 4800 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
  }
#line 9737 "parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 4833 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
  }
#line 9745 "parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 4840 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
  }
#line 9753 "parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 4847 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
#line 9761 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 4856 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 9772 "parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 4863 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	if (description_field) {
		for (p = description_field; p; p = p->sister) {
			cb_validate_field (p);
		}
		current_program->screen_storage = description_field;
		current_program->flag_screen = 1;
	}
  }
#line 9788 "parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 4888 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;
	int	flags;

	x = cb_build_field_tree ((yyvsp[-1]), (yyvsp[0]), current_field, current_storage,
				 current_file, 0);
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-1]));
	check_pic_duplicate = 0;
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	}

	current_field = CB_FIELD (x);
	if (current_field->parent) {
		flags = current_field->parent->screen_flag;
		flags &= ~COB_SCREEN_BLANK_LINE;
		flags &= ~COB_SCREEN_BLANK_SCREEN;
		flags &= ~COB_SCREEN_ERASE_EOL;
		flags &= ~COB_SCREEN_ERASE_EOS;
		flags &= ~COB_SCREEN_LINE_PLUS;
		flags &= ~COB_SCREEN_LINE_MINUS;
		flags &= ~COB_SCREEN_COLUMN_PLUS;
		flags &= ~COB_SCREEN_COLUMN_MINUS;
		current_field->screen_flag |= flags;
		current_field->screen_foreg = current_field->parent->screen_foreg;
		current_field->screen_backg = current_field->parent->screen_backg;
		current_field->screen_prompt = current_field->parent->screen_prompt;
	}
  }
#line 9823 "parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 4919 "parser.y" /* yacc.c:1646  */
    {
	if (!qualifier && (current_field->level == 88 ||
	    current_field->level == 66 ||
	    current_field->flag_item_78)) {
		cb_error (_("Item requires a data name"));
	}
	if (current_field->screen_flag & COB_SCREEN_INITIAL) {
		if (!(current_field->screen_flag & COB_SCREEN_INPUT)) {
			cb_error (_("INITIAL specified on non-input field"));
		}
	}
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (current_field->level == 88) {
		cb_validate_88_item (current_field);
	}
	if (current_field->flag_item_78) {
		/* Reset to last non-78 item */
		current_field = cb_validate_78_item (current_field, 0);
	}
	if (!description_field) {
		description_field = current_field;
	}
	if (current_field->flag_occurs && !has_relative_pos (current_field)) {
		cb_error ("Relative LINE/COLUMN clause required with OCCURS");
	}
  }
#line 9856 "parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 4948 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
#if	1	/* RXWRXW Screen field */
	if (current_field) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
	}
#endif
	current_field = cb_get_real_field ();
  }
#line 9876 "parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 4971 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 9884 "parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 4975 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 9892 "parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 4979 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 9900 "parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 4983 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 9908 "parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 4987 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 9916 "parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 4991 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 9924 "parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 4995 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 9932 "parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 4999 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 9940 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5003 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 9948 "parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5007 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 9956 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5011 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	PENDING ("OVERLINE");
  }
#line 9965 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5016 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	PENDING ("LEFTLINE");
  }
#line 9974 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5021 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 9982 "parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 5025 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 9990 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5029 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 9998 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5033 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10006 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5037 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10015 "parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 5042 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10023 "parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 5046 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10031 "parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 5050 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10040 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5055 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10049 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5060 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10058 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5065 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10067 "parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 5078 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10078 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5085 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10087 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5090 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10097 "parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 5109 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10105 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5113 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10113 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5117 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10121 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5124 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10129 "parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 5128 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10137 "parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 5132 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10145 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5140 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_23);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10157 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5151 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10165 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5160 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10179 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5170 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main && !current_program->flag_chained && (yyvsp[-4])) {
		cb_error (_("Executable program requested but PROCEDURE/ENTRY has USING clause"));
	}
	/* Main entry point */
	emit_entry (current_program->program_id, 0, (yyvsp[-4]));
	current_program->num_proc_params = cb_list_length ((yyvsp[-4]));
	if (current_program->source_name) {
		emit_entry (current_program->source_name, 1, (yyvsp[-4]));
	}
  }
#line 10195 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5182 "parser.y" /* yacc.c:1646  */
    {
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}
  }
#line 10214 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5197 "parser.y" /* yacc.c:1646  */
    {
	cb_tree label;

	/* No PROCEDURE DIVISION header ! */
	/* Only a statement is allowed as first element */
	/* Thereafter, sections/paragraphs may be used */
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	label = cb_build_reference ("MAIN SECTION");
	current_section = CB_LABEL (cb_build_label (label, NULL));
	current_section->flag_section = 1;
	current_section->flag_dummy_section = 1;
	current_section->flag_skip_label = !!skip_statements;
	current_section->flag_declaratives = !!in_declaratives;
	CB_TREE (current_section)->source_file = cb_source_file;
	CB_TREE (current_section)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_section));
	label = cb_build_reference ("MAIN PARAGRAPH");
	current_paragraph = CB_LABEL (cb_build_label (label, NULL));
	current_paragraph->flag_declaratives = !!in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_dummy_paragraph = 1;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
	cb_set_system_names ();
  }
#line 10247 "parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 5230 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10255 "parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5234 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 10264 "parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5239 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10276 "parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 5247 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 10289 "parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 5256 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10301 "parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 5266 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10307 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5268 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 10313 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5273 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	struct cb_field	*f;

	x = cb_build_identifier ((yyvsp[0]), 0);
	if ((yyvsp[-1]) == cb_int1 && CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
		f = CB_FIELD (cb_ref (x));
		f->flag_is_pdiv_opt = 1;
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), x);
	CB_SIZES ((yyval)) = size_mode;
  }
#line 10330 "parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5290 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 10338 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5294 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 10350 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5306 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 10362 "parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 5314 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 10374 "parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 5322 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 10386 "parser.c" /* yacc.c:1646  */
    break;

  case 680:
#line 5330 "parser.y" /* yacc.c:1646  */
    {
	unsigned char *s = CB_LITERAL ((yyvsp[0]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[0]))->size != 1) {
		cb_error_x ((yyvsp[0]), _("Invalid value for SIZE"));
	} else {
		size_mode = CB_SIZE_UNSIGNED;
		switch (*s) {
		case '1':
			size_mode |= CB_SIZE_1;
			break;
		case '2':
			size_mode |= CB_SIZE_2;
			break;
		case '4':
			size_mode |= CB_SIZE_4;
			break;
		case '8':
			size_mode |= CB_SIZE_8;
			break;
		default:
			cb_error_x ((yyvsp[0]), _("Invalid value for SIZE"));
			break;
		}
	}
  }
#line 10419 "parser.c" /* yacc.c:1646  */
    break;

  case 681:
#line 5359 "parser.y" /* yacc.c:1646  */
    {
	unsigned char *s = CB_LITERAL ((yyvsp[0]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[0]))->size != 1) {
		cb_error_x ((yyvsp[0]), _("Invalid value for SIZE"));
	} else {
		size_mode = 0;
		switch (*s) {
		case '1':
			size_mode = CB_SIZE_1;
			break;
		case '2':
			size_mode = CB_SIZE_2;
			break;
		case '4':
			size_mode = CB_SIZE_4;
			break;
		case '8':
			size_mode = CB_SIZE_8;
			break;
		default:
			cb_error_x ((yyvsp[0]), _("Invalid value for SIZE"));
			break;
		}
	}
  }
#line 10452 "parser.c" /* yacc.c:1646  */
    break;

  case 682:
#line 5391 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 10460 "parser.c" /* yacc.c:1646  */
    break;

  case 683:
#line 5395 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 10473 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5407 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 10483 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5413 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[0])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[0]));
/* RXWRXW
		if (f->storage != CB_STORAGE_LINKAGE) {
			cb_error (_("RETURNING item is not defined in LINKAGE SECTION"));
		} else if (f->level != 1 && f->level != 77) {
*/
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01"));
		} else if(f->flag_occurs) {
			cb_error(_("RETURNING item should not have OCCURS"));
		} else if(f->storage == CB_STORAGE_LOCAL) {
			cb_error (_("RETURNING item should not be in LOCAL-STORAGE"));
		} else {
			if (current_program->prog_type == CB_FUNCTION_TYPE) {
				f->flag_is_returning = 1;
			}
			current_program->returning = (yyvsp[0]);
		}
	}
  }
#line 10512 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5441 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 10521 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5447 "parser.y" /* yacc.c:1646  */
    {
	if (needs_field_debug) {
		start_debug = 1;
	}
	in_declaratives = 0;
	in_debugging = 0;
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
		current_paragraph = NULL;
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		current_section->flag_fatal_check = 1;
		emit_statement (cb_build_perform_exit (current_section));
		current_section = NULL;
	}
	skip_statements = 0;
	emit_statement (cb_build_comment ("END DECLARATIVES"));
	check_unreached = 0;
  }
#line 10551 "parser.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5485 "parser.y" /* yacc.c:1646  */
    {
	if (next_label_list) {
		cb_tree	plabel;
		char	name[32];

		snprintf (name, sizeof(name), "L$%d", next_label_id);
		plabel = cb_build_label (cb_build_reference (name), NULL);
		CB_LABEL (plabel)->flag_next_sentence = 1;
		emit_statement (plabel);
		current_program->label_list =
			cb_list_append (current_program->label_list, next_label_list);
		next_label_list = NULL;
		next_label_id++;
	}
	/* check_unreached = 0; */
  }
#line 10572 "parser.c" /* yacc.c:1646  */
    break;

  case 695:
#line 5503 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 10580 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5513 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[-3]), 0) == cb_error_node) {
		YYERROR;
	}

	/* Exit the last paragraph/section */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}
	if (current_program->flag_debugging && !in_debugging) {
		if (current_paragraph || current_section) {
			emit_statement (cb_build_comment (
					"DEBUGGING - Fall through"));
			emit_statement (cb_build_debug (cb_debug_contents,
					"FALL THROUGH", NULL));
		}
	}

	/* Begin a new section */
	current_section = CB_LABEL (cb_build_label ((yyvsp[-3]), NULL));
	if ((yyvsp[-1])) {
		current_section->segment = cb_get_int ((yyvsp[-1]));
	}
	current_section->flag_section = 1;
	/* Careful here, one negation */
	current_section->flag_real_label = !in_debugging;
	current_section->flag_declaratives = !!in_declaratives;
	current_section->flag_skip_label = !!skip_statements;
	CB_TREE (current_section)->source_file = cb_source_file;
	CB_TREE (current_section)->source_line = cb_source_line;
	current_paragraph = NULL;
  }
#line 10628 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 5557 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 10636 "parser.c" /* yacc.c:1646  */
    break;

  case 700:
#line 5568 "parser.y" /* yacc.c:1646  */
    {
	cb_tree label;

	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[-1]), 1) == cb_error_node) {
		YYERROR;
	}

	/* Exit the last paragraph */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
		if (current_program->flag_debugging && !in_debugging) {
			emit_statement (cb_build_comment (
					"DEBUGGING - Fall through"));
			emit_statement (cb_build_debug (cb_debug_contents,
					"FALL THROUGH", NULL));
		}
	}

	/* Begin a new paragraph */
	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->flag_section = 1;
		current_section->flag_dummy_section = 1;
		current_section->flag_declaratives = !!in_declaratives;
		current_section->flag_skip_label = !!skip_statements;
		CB_TREE (current_section)->source_file = cb_source_file;
		CB_TREE (current_section)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_section));
	}
	current_paragraph = CB_LABEL (cb_build_label ((yyvsp[-1]), current_section));
	current_paragraph->flag_declaratives =!! in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_real_label = !in_debugging;
	current_paragraph->segment = current_section->segment;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
  }
#line 10685 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 5616 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	YYERROR;
  }
#line 10698 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5628 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10706 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 5632 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives) {
		cb_error (_("SECTION segment invalid within DECLARATIVE"));
	}
	if (cb_verify (cb_section_segments, "SECTION segment")) {
		current_program->flag_segments = 1;
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = NULL;
	}
  }
#line 10722 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 5650 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 10732 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5655 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 10741 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 5660 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 10751 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 5668 "parser.y" /* yacc.c:1646  */
    {
	cb_tree label;

	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->flag_section = 1;
		current_section->flag_dummy_section = 1;
		current_section->flag_skip_label = !!skip_statements;
		current_section->flag_declaratives = !!in_declaratives;
		CB_TREE (current_section)->source_file = cb_source_file;
		CB_TREE (current_section)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_section));
	}
	if (!current_paragraph) {
		label = cb_build_reference ("MAIN PARAGRAPH");
		current_paragraph = CB_LABEL (cb_build_label (label, NULL));
		current_paragraph->flag_declaratives = !!in_declaratives;
		current_paragraph->flag_skip_label = !!skip_statements;
		current_paragraph->flag_dummy_paragraph = 1;
		CB_TREE (current_paragraph)->source_file = cb_source_file;
		CB_TREE (current_paragraph)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_paragraph));
	}
	check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0);
  }
#line 10782 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 5695 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 10790 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 5699 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 10798 "parser.c" /* yacc.c:1646  */
    break;

  case 759:
#line 5755 "parser.y" /* yacc.c:1646  */
    {
	if (cb_verify (cb_next_sentence_phrase, "NEXT SENTENCE")) {
		cb_tree label;
		char	name[32];

		begin_statement ("NEXT SENTENCE", 0);
		sprintf (name, "L$%d", next_label_id);
		label = cb_build_reference (name);
		next_label_list = cb_list_add (next_label_list, label);
		emit_statement (cb_build_goto (label, NULL));
	}
	check_unreached = 0;
  }
#line 10816 "parser.c" /* yacc.c:1646  */
    break;

  case 760:
#line 5769 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 10825 "parser.c" /* yacc.c:1646  */
    break;

  case 761:
#line 5780 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}

  }
#line 10840 "parser.c" /* yacc.c:1646  */
    break;

  case 763:
#line 5797 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-5]), (yyvsp[-4]), current_statement->attr_ptr);
  }
#line 10849 "parser.c" /* yacc.c:1646  */
    break;

  case 764:
#line 5802 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 10857 "parser.c" /* yacc.c:1646  */
    break;

  case 765:
#line 5806 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 10865 "parser.c" /* yacc.c:1646  */
    break;

  case 766:
#line 5810 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 10874 "parser.c" /* yacc.c:1646  */
    break;

  case 767:
#line 5815 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 10883 "parser.c" /* yacc.c:1646  */
    break;

  case 768:
#line 5820 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 10892 "parser.c" /* yacc.c:1646  */
    break;

  case 769:
#line 5825 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 10901 "parser.c" /* yacc.c:1646  */
    break;

  case 770:
#line 5830 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 10909 "parser.c" /* yacc.c:1646  */
    break;

  case 771:
#line 5834 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 10917 "parser.c" /* yacc.c:1646  */
    break;

  case 772:
#line 5838 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 10925 "parser.c" /* yacc.c:1646  */
    break;

  case 773:
#line 5842 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 10933 "parser.c" /* yacc.c:1646  */
    break;

  case 774:
#line 5846 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 10942 "parser.c" /* yacc.c:1646  */
    break;

  case 775:
#line 5851 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 10950 "parser.c" /* yacc.c:1646  */
    break;

  case 776:
#line 5855 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 10958 "parser.c" /* yacc.c:1646  */
    break;

  case 777:
#line 5859 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 10966 "parser.c" /* yacc.c:1646  */
    break;

  case 778:
#line 5863 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 10974 "parser.c" /* yacc.c:1646  */
    break;

  case 779:
#line 5867 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 10982 "parser.c" /* yacc.c:1646  */
    break;

  case 780:
#line 5871 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 10990 "parser.c" /* yacc.c:1646  */
    break;

  case 781:
#line 5875 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 10998 "parser.c" /* yacc.c:1646  */
    break;

  case 783:
#line 5883 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11006 "parser.c" /* yacc.c:1646  */
    break;

  case 786:
#line 5894 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11012 "parser.c" /* yacc.c:1646  */
    break;

  case 787:
#line 5895 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11018 "parser.c" /* yacc.c:1646  */
    break;

  case 788:
#line 5899 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0])); }
#line 11024 "parser.c" /* yacc.c:1646  */
    break;

  case 789:
#line 5900 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1])); }
#line 11030 "parser.c" /* yacc.c:1646  */
    break;

  case 790:
#line 5901 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), cb_int0); }
#line 11036 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 5902 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[0])); }
#line 11042 "parser.c" /* yacc.c:1646  */
    break;

  case 792:
#line 5903 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11048 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 5907 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11054 "parser.c" /* yacc.c:1646  */
    break;

  case 794:
#line 5911 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11060 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 5912 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11066 "parser.c" /* yacc.c:1646  */
    break;

  case 799:
#line 5921 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11074 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 5937 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11082 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 5941 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11092 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 5947 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11100 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 5951 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11108 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 5955 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11116 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 5959 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11124 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 5963 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 11132 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 5967 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11140 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 5971 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11148 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 5975 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 11156 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 5979 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11164 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 5983 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11172 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 5987 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 11180 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 5991 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11188 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 5995 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11196 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 5999 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11204 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6003 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11212 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6007 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11220 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6011 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11228 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6015 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11236 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6019 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11246 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6025 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11254 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6029 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11262 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6033 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 11270 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6037 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 11278 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6041 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 11286 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6045 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 11294 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6049 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 11302 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6061 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 11310 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6065 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ACCEPT);
# if 0 /* activate only for debugging purposes for attribs */
	if (current_statement->attr_ptr) {
		printBits (current_statement->attr_ptr->dispattrs);
	} else {
		fprintf(stderr, "No Attribs\n");
	}
#endif
  }
#line 11325 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6082 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 11333 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6091 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 11341 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6095 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 11349 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6099 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 11357 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6106 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11365 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6113 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 11373 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6117 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 11381 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6127 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 11390 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6136 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 11398 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6140 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 11411 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6151 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11417 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6152 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11423 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6160 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 11432 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6174 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 11440 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6186 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
#line 11449 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6201 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[-4])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[-4]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[-4]), _("Recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	cb_emit_call ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), (yyvsp[-5]));
  }
#line 11464 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6215 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 11473 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6220 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 11482 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 6225 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 11491 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6230 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[0]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME(x)->token != CB_FEATURE_CONVENTION) {
			cb_error_x ((yyvsp[0]), _("Invalid mnemonic name"));
			(yyval) = NULL;
		} else {
			(yyval) = CB_SYSTEM_NAME(x)->value;
		}
	} else {
		(yyval) = NULL;
	}
	cobc_cs_check = 0;
  }
#line 11512 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6250 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11520 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6254 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11529 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6259 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11542 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6270 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11548 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6272 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11554 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6277 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 11566 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6285 "parser.y" /* yacc.c:1646  */
    {
	int	save_mode;

	save_mode = call_mode;
	if (call_mode != CB_CALL_BY_REFERENCE) {
		if (CB_FILE_P ((yyvsp[0])) || (CB_REFERENCE_P ((yyvsp[0])) &&
		    CB_FILE_P (CB_REFERENCE ((yyvsp[0]))->value))) {
			cb_error_x (CB_TREE (current_statement),
				    _("Invalid file name reference"));
		} else if (call_mode == CB_CALL_BY_VALUE) {
			if (cb_category_is_alpha ((yyvsp[0]))) {
				cb_warning_x ((yyvsp[0]),
					      _("BY CONTENT assumed for alphanumeric item"));
				save_mode = CB_CALL_BY_CONTENT;
			}
		}
	}
	(yyval) = CB_BUILD_PAIR (cb_int (save_mode), (yyvsp[0]));
	CB_SIZES ((yyval)) = size_mode;
	call_mode = save_mode;
  }
#line 11592 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6311 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11600 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 6315 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 11613 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6324 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11626 "parser.c" /* yacc.c:1646  */
    break;

  case 876:
#line 6336 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11634 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6340 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11642 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6344 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11650 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 6348 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[0])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[0]));
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01 or 77"));
			(yyval) = NULL;
		} else if (f->storage != CB_STORAGE_LINKAGE &&
			   !f->flag_item_based) {
			cb_error (_("RETURNING item is neither in LINKAGE SECTION nor is it BASED"));
			(yyval) = NULL;
		} else {
			(yyval) = cb_build_address ((yyvsp[0]));
		}
	} else {
		(yyval) = NULL;
	}
  }
#line 11674 "parser.c" /* yacc.c:1646  */
    break;

  case 884:
#line 6381 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11682 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6386 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11690 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6393 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11698 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 6398 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11706 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6405 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 11714 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6409 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 11722 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6419 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 11730 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 6427 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 11738 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 6431 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 11746 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 6441 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 11754 "parser.c" /* yacc.c:1646  */
    break;

  case 896:
#line 6449 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 11763 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 6454 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 11772 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 6461 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 11778 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 6462 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 11784 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 6463 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 11790 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 6464 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 11796 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 6465 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 11802 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 6473 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 11810 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 6482 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 11818 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 6489 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 11826 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 6493 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 11834 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 6503 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 11843 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 6514 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 11858 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 6531 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 11866 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 6540 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 11874 "parser.c" /* yacc.c:1646  */
    break;

  case 914:
#line 6548 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 11883 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 6553 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 11892 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 6561 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 11900 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 6565 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 11908 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 6575 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 11917 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 6585 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 11925 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 6589 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 11933 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 6593 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 11941 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 6597 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 11949 "parser.c" /* yacc.c:1646  */
    break;

  case 924:
#line 6601 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), NULL, NULL);
  }
#line 11957 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 6606 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[-3])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
#line 11967 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 6616 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
  }
#line 11975 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 6624 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[-4])), cb_null, cb_int1,
			 (yyvsp[-3]), current_statement->attr_ptr);
  }
#line 11984 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 6632 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 11996 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 6640 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12004 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 6644 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_name ((yyvsp[0]));
  }
#line 12012 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 6648 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 12020 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 6652 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12032 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 6674 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12040 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 6680 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 12046 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 6681 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 12052 "parser.c" /* yacc.c:1646  */
    break;

  case 946:
#line 6692 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12060 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 6696 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
#line 12068 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 6700 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
#line 12076 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 6704 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12084 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 6708 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12092 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 6712 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
#line 12100 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 6716 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
#line 12108 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 6720 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 12116 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 6724 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 12124 "parser.c" /* yacc.c:1646  */
    break;

  case 955:
#line 6728 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12132 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 6732 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12140 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 6736 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12148 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 6740 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12156 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 6744 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12164 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 6748 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12172 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 6752 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12180 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 6756 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12188 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 6763 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 12196 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 6767 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 12204 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 6777 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 12212 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 6786 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 12220 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 6790 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 12228 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 6794 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 12236 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 6798 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12244 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 6802 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12252 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 6809 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 12260 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 6813 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 12268 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 6823 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 12277 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 6832 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "ENTRY");
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "ENTRY");
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		if (!cobc_check_valid_name ((char *)(CB_LITERAL ((yyvsp[-1]))->data), 1U)) {
			emit_entry ((char *)(CB_LITERAL ((yyvsp[-1]))->data), 1, (yyvsp[0]));
		}
	}
  }
#line 12293 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 6850 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EVALUATE", TERM_EVALUATE);
	eval_level++;
	if (eval_level >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_level = 0;
		eval_inc = 0;
		eval_inc2 = 0;
		YYERROR;
	} else {
		for (eval_inc = 0; eval_inc < EVAL_DEPTH; ++eval_inc) {
			eval_check[eval_level][eval_inc] = NULL;
		}
		eval_inc = 0;
		eval_inc2 = 0;
	}
  }
#line 12316 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 6874 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 12325 "parser.c" /* yacc.c:1646  */
    break;

  case 980:
#line 6881 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12331 "parser.c" /* yacc.c:1646  */
    break;

  case 981:
#line 6883 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12337 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 6888 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	eval_check[eval_level][eval_inc++] = (yyvsp[0]);
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 12352 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 6899 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 12367 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 6910 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_false;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 12382 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 6924 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12390 "parser.c" /* yacc.c:1646  */
    break;

  case 986:
#line 6928 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12398 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 6934 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12404 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 6936 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 12410 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 6942 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 12419 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 6951 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 12428 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 6959 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12437 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 6965 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12446 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 6972 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12452 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 6974 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12458 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 6979 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	not0;
	cb_tree	e1;
	cb_tree	e2;
	cb_tree	x;
	cb_tree	parm1;

	not0 = cb_int0;
	e2 = (yyvsp[0]);
	x = NULL;
	parm1 = (yyvsp[-1]);
	if (eval_check[eval_level][eval_inc2]) {
		/* Check if the first token is NOT */
		/* It may belong to the EVALUATE, however see */
		/* below when it may be part of a partial expression */
		if (CB_PURPOSE_INT (parm1) == '!') {
			/* Pop stack if subject not TRUE / FALSE */
			not0 = cb_int1;
			x = parm1;
			parm1 = CB_CHAIN (parm1);
		}
		/* Partial expression handling */
		switch (CB_PURPOSE_INT (parm1)) {
		/* Relational conditions */
		case '<':
		case '>':
		case '[':
		case ']':
		case '~':
		case '=':
		/* Class conditions */
		case '9':
		case 'A':
		case 'L':
		case 'U':
		case 'P':
		case 'N':
		case 'O':
		case 'C':
			if (e2) {
				cb_error_x (e2, _("Invalid THROUGH usage"));
				e2 = NULL;
			}
			not0 = CB_PURPOSE (parm1);
			if (x) {
				/* Rebind the NOT to the partial expression */
				parm1 = cb_build_list (cb_int ('!'), NULL, parm1);
			}
			/* Insert subject at head of list */
			parm1 = cb_build_list (cb_int ('x'),
					    eval_check[eval_level][eval_inc2], parm1);
			break;
		}
	}

	/* Build expr now */
	e1 = cb_build_expr (parm1);

	eval_inc2++;
	(yyval) = CB_BUILD_PAIR (not0, CB_BUILD_PAIR (e1, e2));
  }
#line 12524 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7040 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 12530 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7041 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 12536 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7042 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 12542 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7046 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12548 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7047 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12554 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7052 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 12562 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7056 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 12570 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7066 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 12579 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7071 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12587 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7079 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != CB_PROGRAM_TYPE) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM only allowed within a PROGRAM type"));
	}
	if (current_program->flag_main) {
		check_unreached = 0;
	} else {
		check_unreached = 1;
	}
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	current_statement->name = (const char *)"EXIT PROGRAM";
	cb_emit_exit (0);
  }
#line 12612 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7100 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != CB_FUNCTION_TYPE) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION only allowed within a FUNCTION type"));
	}
	check_unreached = 1;
	current_statement->name = (const char *)"EXIT FUNCTION";
	cb_emit_exit (0);
  }
#line 12630 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7114 "parser.y" /* yacc.c:1646  */
    {
	struct cb_perform	*p;
	cb_tree			plabel;
	char			name[64];

	if (!perform_stack) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PERFORM is only valid with inline PERFORM"));
	} else if (CB_VALUE (perform_stack) != cb_error_node) {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->cycle_label) {
			sprintf (name, "EXIT PERFORM CYCLE %d", cb_id);
			p->cycle_label = cb_build_reference (name);
			plabel = cb_build_label (p->cycle_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PERFORM CYCLE";
		cb_emit_goto (CB_LIST_INIT (p->cycle_label), NULL);
	}
  }
#line 12656 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7136 "parser.y" /* yacc.c:1646  */
    {
	struct cb_perform	*p;
	cb_tree			plabel;
	char			name[64];

	if (!perform_stack) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PERFORM is only valid with inline PERFORM"));
	} else if (CB_VALUE (perform_stack) != cb_error_node) {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->exit_label) {
			sprintf (name, "EXIT PERFORM %d", cb_id);
			p->exit_label = cb_build_reference (name);
			plabel = cb_build_label (p->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PERFORM";
		cb_emit_goto (CB_LIST_INIT (p->exit_label), NULL);
	}
  }
#line 12682 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7158 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	plabel;
	char	name[64];

	if (!current_section) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT SECTION is only valid with an active SECTION"));
	} else {
		if (!current_section->exit_label) {
			sprintf (name, "EXIT SECTION %d", cb_id);
			current_section->exit_label = cb_build_reference (name);
			plabel = cb_build_label (current_section->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT SECTION";
		cb_emit_goto (CB_LIST_INIT (current_section->exit_label), NULL);
	}
  }
#line 12706 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7178 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	plabel;
	char	name[64];

	if (!current_paragraph) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PARAGRAPH is only valid with an active PARAGRAPH"));
	} else {
		if (!current_paragraph->exit_label) {
			sprintf (name, "EXIT PARAGRAPH %d", cb_id);
			current_paragraph->exit_label = cb_build_reference (name);
			plabel = cb_build_label (current_paragraph->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PARAGRAPH";
		cb_emit_goto (CB_LIST_INIT (current_paragraph->exit_label), NULL);
	}
  }
#line 12730 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7200 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12736 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7201 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12742 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7209 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12751 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7218 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 12759 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7228 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
#line 12768 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7244 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 12781 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7257 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 12790 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7265 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 12799 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7270 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 12808 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7281 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 12821 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7296 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 12829 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7305 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 12837 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7309 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 12845 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7313 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 12853 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7320 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 12861 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7324 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 12869 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7334 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 12877 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7343 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 12885 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7349 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12891 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7350 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 12897 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7354 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12903 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7355 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 12909 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7356 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 12915 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7361 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12923 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 7365 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12931 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7372 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12939 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7377 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12947 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 7384 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12955 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 7390 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 12961 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 7391 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 12967 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7392 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 12973 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7393 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 12979 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 7394 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 12985 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 7395 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 12991 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 7396 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 12997 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 7401 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13005 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 7405 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13013 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 7414 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
#line 13022 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 7423 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13032 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 7429 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13042 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 7440 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13051 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 7453 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13059 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 7457 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13067 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 7461 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13075 "parser.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 7477 "parser.y" /* yacc.c:1646  */
    {
	cb_init_tallying ();
  }
#line 13083 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 7481 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	(yyval) = (yyvsp[-3]);
  }
#line 13092 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 7491 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13101 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 7501 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13111 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 7509 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13117 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 7510 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13123 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 7514 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_data ((yyvsp[-1])); }
#line 13129 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 7515 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_characters ((yyvsp[0])); }
#line 13135 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 7516 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_all (); }
#line 13141 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 7517 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_leading (); }
#line 13147 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 7518 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_trailing (); }
#line 13153 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 7519 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0])); }
#line 13159 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 7523 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13165 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 7524 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13171 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 7529 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 13180 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 7534 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13188 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 7540 "parser.y" /* yacc.c:1646  */
    { /* Nothing */ }
#line 13194 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 7541 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 13200 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 7542 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 13206 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 7543 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 13212 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 7544 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 13218 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 7549 "parser.y" /* yacc.c:1646  */
    {
	switch (inspect_keyword) {
		case 1:
			(yyval) = cb_build_replacing_all ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		case 2:
			(yyval) = cb_build_replacing_leading ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		case 3:
			(yyval) = cb_build_replacing_first ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		case 4:
			(yyval) = cb_build_replacing_trailing ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		default:
			cb_error_x (CB_TREE (current_statement),
				    _("INSPECT missing a keyword"));
			(yyval) = cb_build_replacing_all ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
	}
  }
#line 13244 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 7576 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 13252 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 7580 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13260 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 7587 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0])));
  }
#line 13268 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 7591 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0])));
  }
#line 13276 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 7600 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 13285 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 7612 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 13293 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 7620 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13301 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 7624 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13309 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 7634 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 13317 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 7643 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 13325 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 7647 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 13333 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 7654 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 13341 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 7658 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 13349 "parser.c" /* yacc.c:1646  */
    break;

  case 1107:
#line 7668 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 13357 "parser.c" /* yacc.c:1646  */
    break;

  case 1109:
#line 7676 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[-2]) && (yyvsp[0])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
	}
	if ((yyvsp[0])) {
		x = (yyvsp[0]);
	} else {
		x = (yyvsp[-2]);
	}
	for (l = (yyvsp[-1]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[-3]), x);
		}
	}
  }
#line 13382 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 7697 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[-2]) && (yyvsp[0])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
	}
	if ((yyvsp[0])) {
		x = (yyvsp[0]);
	} else {
		x = (yyvsp[-2]);
	}
	for (l = (yyvsp[-1]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[-3]), x);
		}
	}
  }
#line 13407 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 7720 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 13413 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 7721 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 13419 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 7722 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 13425 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 7723 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 13431 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 7727 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13437 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 7728 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13443 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 7732 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13449 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 7733 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13455 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 7734 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 13461 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 7736 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 13470 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 7747 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13481 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 7758 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 13490 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 7763 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 13500 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 7769 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 13509 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 7774 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 13518 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 7782 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 13530 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 7790 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 13538 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 7797 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 13546 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 7801 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 13560 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 7814 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 13571 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 7821 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13583 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 7832 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 13591 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 7836 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 13600 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 7841 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 13608 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 7845 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 13623 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 7856 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13631 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 7862 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 13637 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 7863 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13643 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 7867 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13649 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 7868 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13655 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 7871 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13661 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 7873 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13667 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 7878 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13675 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 7888 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 13683 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 7897 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-6]))) {
		struct cb_file	*cf;

		cf = CB_FILE(cb_ref ((yyvsp[-6])));
		if ((yyvsp[-2]) && (cf->lock_mode & COB_LOCK_AUTOMATIC)) {
			cb_error_x (CB_TREE (current_statement),
				    _("LOCK clause invalid with file LOCK AUTOMATIC"));
		} else if ((yyvsp[-1]) &&
		      (cf->organization != COB_ORG_RELATIVE &&
		       cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("KEY clause invalid with this file type"));
		} else if (current_statement->handler_id == COB_EC_I_O_INVALID_KEY &&
			   (cf->organization != COB_ORG_RELATIVE &&
			    cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("INVALID KEY clause invalid with this file type"));
		} else {
			cb_emit_read ((yyvsp[-6]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[-2]));
		}
	}
  }
#line 13711 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 7923 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13717 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 7924 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13723 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 7929 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13731 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 7933 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 13739 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 7937 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13747 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 7941 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13755 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 7945 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 13763 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 7949 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 13771 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 7953 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 13779 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 7959 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13785 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 7960 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13791 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 7970 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 13799 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 7974 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 13807 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 7984 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 13816 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 7994 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 13824 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8002 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13832 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8012 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 13841 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8022 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 13849 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8031 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 13857 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8038 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 13865 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8042 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 13873 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8052 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13884 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8064 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 13893 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8072 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13901 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8076 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13909 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8080 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 13917 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8087 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 13925 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8091 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 13933 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8101 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 13942 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8112 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 13950 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8121 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13958 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8126 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13967 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8133 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13973 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8134 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13979 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8139 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13987 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8144 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13995 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8151 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14003 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8155 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14011 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8163 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14019 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8170 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14027 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8174 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14035 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8184 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14046 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8191 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14054 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 8206 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14060 "parser.c" /* yacc.c:1646  */
    break;

  case 1204:
#line 8207 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14066 "parser.c" /* yacc.c:1646  */
    break;

  case 1205:
#line 8211 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14072 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 8212 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14078 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 8219 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14086 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8228 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 14094 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 8240 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 14102 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 8244 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 14110 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 8248 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
  }
#line 14118 "parser.c" /* yacc.c:1646  */
    break;

  case 1214:
#line 8252 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
  }
#line 14126 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8256 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 14134 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8260 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 14142 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 8264 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 14150 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 8268 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 14158 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 8277 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 14166 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 8281 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14174 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 8290 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14182 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 8304 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14190 "parser.c" /* yacc.c:1646  */
    break;

  case 1227:
#line 8318 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 14198 "parser.c" /* yacc.c:1646  */
    break;

  case 1228:
#line 8322 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 14206 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 8332 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 14214 "parser.c" /* yacc.c:1646  */
    break;

  case 1231:
#line 8340 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[-3]));
	if (CB_VALID_TREE (x)) {
		if (CB_INVALID_TREE ((yyvsp[-2]))) {
			if (CB_FILE_P (x)) {
				cb_error (_("File sort requires KEY phrase"));
			} else {
				cb_error (_("Table sort without keys not implemented yet"));
			}
			(yyval) = NULL;
		} else {
			cb_emit_sort_init ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
			(yyval)= (yyvsp[-3]);
		}
	} else {
		(yyval) = NULL;
	}
  }
#line 14239 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 8361 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 14249 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 8370 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14257 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 8375 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;
	cb_tree lparm;

	if ((yyvsp[0]) == NULL) {
		l = CB_LIST_INIT (NULL);
	} else {
		l = (yyvsp[0]);
	}
	lparm = l;
	for (; l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[-2]);
	}
	(yyval) = cb_list_append ((yyvsp[-4]), lparm);
  }
#line 14277 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 8393 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14283 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 8394 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14289 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 8399 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 14298 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 8406 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 14304 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 8407 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 14310 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 8412 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 14320 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 8418 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 14334 "parser.c" /* yacc.c:1646  */
    break;

  case 1243:
#line 8428 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-4])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-4])))) {
			cb_error (_("INPUT PROCEDURE invalid with table SORT"));
		} else if (current_statement->flag_merge) {
			cb_error (_("INPUT PROCEDURE invalid with MERGE"));
		} else {
			cb_emit_sort_input ((yyvsp[0]));
		}
	}
  }
#line 14350 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 8443 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 14360 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 8449 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 14374 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 8459 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 14388 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 8475 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 14397 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 8485 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 14410 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 8497 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14418 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 8501 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14426 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 8508 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14434 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 8512 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 14443 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 8517 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 14452 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 8522 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 14461 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 8529 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 14467 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 8530 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 14473 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 8531 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 14479 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 8532 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 14485 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 8533 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 14491 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 8534 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 14497 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 8539 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 14506 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 8552 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 14514 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 8556 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 14522 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 8566 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 14530 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 8570 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 14540 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 8576 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 14553 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 8588 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 14561 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 8592 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14569 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 8596 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 14581 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 8604 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 14593 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 8615 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14601 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 8619 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14609 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 8625 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14615 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 8626 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 14621 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 8627 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 14627 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 8628 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 14633 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 8635 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 14641 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 8644 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 14649 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 8650 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14655 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 8651 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14661 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 8655 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14667 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 8656 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 14673 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 8657 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 14679 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 8661 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14685 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 8662 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14691 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 8667 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 14699 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 8671 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 14707 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 8681 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 14715 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 8690 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 14723 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 8694 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 14731 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 8698 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 14739 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 8705 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 14747 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 8709 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 14755 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 8719 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	PENDING("SUPPRESS");
  }
#line 14768 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 8737 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
#line 14777 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 8746 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14787 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 8752 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14797 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 8763 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 14805 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 8771 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 14816 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 8784 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 14824 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 8792 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-1]))) {
		if (CB_FILE (cb_ref ((yyvsp[-1])))->organization == COB_ORG_SORT) {
			cb_error_x (CB_TREE (current_statement),
				    _("UNLOCK invalid for SORT files"));
		} else {
			cb_emit_unlock ((yyvsp[-1]));
		}
	}
  }
#line 14839 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 8815 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 14847 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 8825 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 14855 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 8831 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14861 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 8833 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14867 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 8837 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14873 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 8839 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14879 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 8844 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14887 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 8850 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14893 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 8852 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14899 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 8857 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14907 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 8863 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14913 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 8864 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14919 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 8868 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14925 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 8869 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14931 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 8873 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14937 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 8874 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14943 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 8879 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 14951 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 8883 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 14959 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 8893 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 14968 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 8911 "parser.y" /* yacc.c:1646  */
    {
	if (!in_declaratives) {
		cb_error (_("USE statement must be within DECLARATIVES"));
	} else if (!current_section) {
		cb_error (_("SECTION header missing before USE statement"));
	} else {
		current_section->flag_begin = 1;
		current_section->flag_return = 1;
		current_section->flag_declarative_exit = 1;
		current_section->flag_real_label = 1;
		current_section->flag_skip_label = 0;
		CB_EXCEPTION_ENABLE (COB_EC_I_O) = 1;
		if (use_global_ind) {
			current_section->flag_global = 1;
			current_program->global_list =
				cb_list_add (current_program->global_list,
					     CB_TREE (current_section));
		}
		emit_statement (cb_build_comment ("USE AFTER ERROR"));
	}
  }
#line 14994 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 8936 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15002 "parser.c" /* yacc.c:1646  */
    break;

  case 1343:
#line 8940 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15015 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 8952 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15029 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 8962 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15038 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 8967 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15047 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 8972 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15056 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 8977 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15065 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 8985 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		plabel;
	char		name[64];

	if (!in_declaratives) {
		cb_error (_("USE statement must be within DECLARATIVES"));
	} else if (current_program->nested_level) {
		cb_error (_("USE DEBUGGING not supported in contained program"));
	} else {
		in_debugging = 1;
		current_section->flag_begin = 1;
		current_section->flag_return = 1;
		current_section->flag_declarative_exit = 1;
		current_section->flag_real_label = 0;
		current_section->flag_is_debug_sect = 1;
		if (!needs_debug_item) {
			needs_debug_item = 1;
			cb_build_debug_item ();
		}
		if (!current_program->flag_debugging) {
			skip_statements = 1;
			current_section->flag_skip_label = 1;
		} else {
			current_program->flag_gen_debug = 1;
			sprintf (name, "EXIT SECTION %d", cb_id);
			plabel = cb_build_reference (name);
			plabel = cb_build_label (plabel, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
			current_section->exit_label = plabel;
			emit_statement (cb_build_comment ("USE FOR DEBUGGING"));
		}
	}
  }
#line 15104 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9028 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;
	cb_tree		x;
	cb_tree		z;

	if (current_program->flag_debugging) {
		CB_REFERENCE ((yyvsp[0]))->debug_section = current_section;
		CB_REFERENCE ((yyvsp[0]))->flag_debug_code = 1;
		CB_REFERENCE ((yyvsp[0]))->flag_all_debug = 0;
		z = CB_LIST_INIT ((yyvsp[0]));
		current_program->debug_list =
			cb_list_append (current_program->debug_list, z);
		/* Check backward refs to file/data names */
		/* Label refs will be checked later (forward/backward ref) */
		if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
			l = CB_VALUE(CB_WORD_ITEMS ((yyvsp[0])));
			switch (CB_TREE_TAG (l)) {
			case CB_TAG_FILE:
				CB_FILE (l)->debug_section = current_section;
				CB_FILE (l)->flag_fl_debug = 1;
				break;
			case CB_TAG_FIELD:
				{
					x = cb_ref((yyvsp[0]));
					if(CB_INVALID_TREE(x)) {
						break;
					}
					needs_field_debug = 1;
					CB_FIELD(x)->debug_section = current_section;
					CB_FIELD(x)->flag_field_debug = 1;
					CB_PURPOSE(z) = x;
					break;
				}
			default:
				break;
			}
		}
	}
  }
#line 15148 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9068 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 15162 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9078 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	if (current_program->flag_debugging) {
		/* Reference must be a data item */
		x = cb_ref ((yyvsp[0]));
		if (CB_INVALID_TREE (x) || !CB_FIELD_P (x)) {
			cb_error (_("Invalid target for DEBUGGING ALL"));
		} else {
			needs_field_debug = 1;
			CB_FIELD (x)->debug_section = current_section;
			CB_FIELD (x)->flag_field_debug = 1;
			CB_FIELD (x)->flag_all_debug = 1;
			CB_REFERENCE ((yyvsp[0]))->debug_section = current_section;
			CB_REFERENCE ((yyvsp[0]))->flag_debug_code = 1;
			CB_REFERENCE ((yyvsp[0]))->flag_all_debug = 1;
			CB_CHAIN_PAIR (current_program->debug_list, x, (yyvsp[0]));
		}
	}
  }
#line 15187 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9108 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 15197 "parser.c" /* yacc.c:1646  */
    break;

  case 1360:
#line 9117 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 15207 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9123 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 15217 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9133 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
#line 15227 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9142 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 15237 "parser.c" /* yacc.c:1646  */
    break;

  case 1366:
#line 9158 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15248 "parser.c" /* yacc.c:1646  */
    break;

  case 1368:
#line 9170 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 15259 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9179 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15265 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9180 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15271 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9185 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 15279 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9189 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15287 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9193 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15295 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9197 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 15303 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9203 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 15309 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9204 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 15315 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9214 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 15323 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9218 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 15331 "parser.c" /* yacc.c:1646  */
    break;

  case 1383:
#line 9235 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15340 "parser.c" /* yacc.c:1646  */
    break;

  case 1387:
#line 9250 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15349 "parser.c" /* yacc.c:1646  */
    break;

  case 1392:
#line 9268 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15358 "parser.c" /* yacc.c:1646  */
    break;

  case 1394:
#line 9278 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15367 "parser.c" /* yacc.c:1646  */
    break;

  case 1397:
#line 9293 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15376 "parser.c" /* yacc.c:1646  */
    break;

  case 1399:
#line 9303 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15385 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 9320 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15394 "parser.c" /* yacc.c:1646  */
    break;

  case 1404:
#line 9331 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15403 "parser.c" /* yacc.c:1646  */
    break;

  case 1410:
#line 9354 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15412 "parser.c" /* yacc.c:1646  */
    break;

  case 1411:
#line 9363 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15421 "parser.c" /* yacc.c:1646  */
    break;

  case 1415:
#line 9380 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15430 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 9389 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15439 "parser.c" /* yacc.c:1646  */
    break;

  case 1419:
#line 9406 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15448 "parser.c" /* yacc.c:1646  */
    break;

  case 1421:
#line 9416 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15457 "parser.c" /* yacc.c:1646  */
    break;

  case 1422:
#line 9426 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 15465 "parser.c" /* yacc.c:1646  */
    break;

  case 1423:
#line 9430 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 15473 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 9440 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 15481 "parser.c" /* yacc.c:1646  */
    break;

  case 1425:
#line 9447 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 15489 "parser.c" /* yacc.c:1646  */
    break;

  case 1426:
#line 9453 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 15498 "parser.c" /* yacc.c:1646  */
    break;

  case 1427:
#line 9458 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 15506 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 9471 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 15518 "parser.c" /* yacc.c:1646  */
    break;

  case 1432:
#line 9479 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 15524 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 9480 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 15530 "parser.c" /* yacc.c:1646  */
    break;

  case 1434:
#line 9482 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 15536 "parser.c" /* yacc.c:1646  */
    break;

  case 1435:
#line 9483 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 15542 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 9484 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 15548 "parser.c" /* yacc.c:1646  */
    break;

  case 1437:
#line 9485 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 15554 "parser.c" /* yacc.c:1646  */
    break;

  case 1438:
#line 9486 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 15560 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 9488 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 15566 "parser.c" /* yacc.c:1646  */
    break;

  case 1440:
#line 9489 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 15572 "parser.c" /* yacc.c:1646  */
    break;

  case 1441:
#line 9490 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 15578 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 9491 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 15584 "parser.c" /* yacc.c:1646  */
    break;

  case 1443:
#line 9492 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 15590 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 9493 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 15596 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 9495 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 15602 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 9496 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 15608 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 9497 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 15614 "parser.c" /* yacc.c:1646  */
    break;

  case 1448:
#line 9499 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 15620 "parser.c" /* yacc.c:1646  */
    break;

  case 1449:
#line 9500 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 15626 "parser.c" /* yacc.c:1646  */
    break;

  case 1450:
#line 9501 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 15632 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 9502 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 15638 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 9503 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 15644 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 9506 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 15650 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 9507 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 15656 "parser.c" /* yacc.c:1646  */
    break;

  case 1463:
#line 9537 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15664 "parser.c" /* yacc.c:1646  */
    break;

  case 1464:
#line 9541 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15672 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 9552 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 15678 "parser.c" /* yacc.c:1646  */
    break;

  case 1469:
#line 9553 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 15684 "parser.c" /* yacc.c:1646  */
    break;

  case 1470:
#line 9554 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15690 "parser.c" /* yacc.c:1646  */
    break;

  case 1471:
#line 9558 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 15696 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 9559 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 15702 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 9560 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15708 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 9565 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 15716 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 9568 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15722 "parser.c" /* yacc.c:1646  */
    break;

  case 1476:
#line 9572 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15728 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 9573 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 15734 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 9574 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15740 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 9577 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 15746 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 9578 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15752 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 9589 "parser.y" /* yacc.c:1646  */
    {
	if (current_linage > 1) {
		cb_error (_("LINAGE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (current_linage == 0) {
		cb_error (_("Invalid LINAGE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = linage_file->linage_ctr;
	}
  }
#line 15768 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 9601 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15781 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 9610 "parser.y" /* yacc.c:1646  */
    {
	if (report_count > 1) {
		cb_error (_("LINE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("Invalid LINE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->line_counter;
	}
  }
#line 15797 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 9622 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15810 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 9631 "parser.y" /* yacc.c:1646  */
    {
	if (report_count > 1) {
		cb_error (_("PAGE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("Invalid PAGE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->page_counter;
	}
  }
#line 15826 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 9643 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15839 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 9657 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15845 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 9659 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 15851 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 9664 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 15859 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 9672 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 15865 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 9679 "parser.y" /* yacc.c:1646  */
    {
	cb_tree x;

	x = cb_ref ((yyvsp[0]));
	if (!CB_FIELD_P (x)) {
		(yyval) = cb_error_node;
	} else if (!CB_FIELD (x)->index_list) {
		cb_error_x ((yyvsp[0]), _("'%s' not indexed"), cb_name ((yyvsp[0])));
		cb_error_x (x, _("'%s' defined here"), cb_name (x));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 15884 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 9699 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15892 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 9703 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	if (CB_VALID_TREE ((yyvsp[0]))) {
		for (l = (yyvsp[-1]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l)) &&
			    !strcasecmp (CB_NAME ((yyvsp[0])), CB_NAME (CB_VALUE (l)))) {
				cb_error_x ((yyvsp[0]), _("Multiple reference to '%s' "),
					    CB_NAME ((yyvsp[0])));
				break;
			}
		}
		if (!l) {
			(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
		}
	}
  }
#line 15914 "parser.c" /* yacc.c:1646  */
    break;

  case 1494:
#line 9724 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15927 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 9765 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15940 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 9778 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15946 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 9780 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15952 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 9784 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15958 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 9790 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15964 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 9792 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15970 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 9797 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 15983 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 9811 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 15991 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 9818 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 16001 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 9828 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16007 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 9829 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16013 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 9834 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16022 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 9842 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16031 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 9850 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16039 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 9854 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16047 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 9861 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16057 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 9877 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16070 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 9891 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 16084 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 9908 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16092 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 9912 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16100 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 9921 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16108 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 9928 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16116 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 9932 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16124 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 9943 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16132 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 9947 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16140 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 9951 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16148 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 9955 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 16156 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 9959 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16164 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 9963 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	cb_tree		switch_id;

	x = cb_ref ((yyvsp[0]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME (x)->category != CB_SWITCH_NAME) {
			cb_error_x (x, _("Invalid mnemonic identifier"));
			(yyval) = cb_error_node;
		} else {
			switch_id = cb_int (CB_SYSTEM_NAME (x)->token);
			(yyval) = CB_BUILD_FUNCALL_1 ("cob_switch_value", switch_id);
		}
	} else {
		(yyval) = cb_error_node;
	}
  }
#line 16186 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 9984 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16194 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 9988 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16202 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10005 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16210 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10009 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16218 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10013 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16226 "parser.c" /* yacc.c:1646  */
    break;

  case 1561:
#line 10060 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 16234 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10084 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16240 "parser.c" /* yacc.c:1646  */
    break;

  case 1570:
#line 10088 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 16246 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10092 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16252 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10093 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16258 "parser.c" /* yacc.c:1646  */
    break;

  case 1573:
#line 10097 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16264 "parser.c" /* yacc.c:1646  */
    break;

  case 1574:
#line 10102 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16275 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 10109 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16286 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10116 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16297 "parser.c" /* yacc.c:1646  */
    break;

  case 1577:
#line 10123 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16308 "parser.c" /* yacc.c:1646  */
    break;

  case 1578:
#line 10133 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 16316 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10140 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16330 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10150 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16344 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10160 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16358 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10170 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16372 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10183 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16380 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10187 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16389 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10195 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 16398 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 10203 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 16406 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 10207 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 16415 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 10217 "parser.y" /* yacc.c:1646  */
    {
	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[0]))->sign < 0
	    || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("Non-negative integer value expected"));
		(yyval) = cb_int1;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16430 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 10231 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[0]))->sign || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[0]));
		if (n < 1 || n > 256) {
			cb_error (_("Invalid SYMBOLIC integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[0]);
		}
	}
  }
#line 16454 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 10254 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[0]))->sign
	    || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("Unsigned positive integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[0]));
		if (n < 1) {
			cb_error (_("Unsigned positive integer value expected"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[0]);
		}
	}
  }
#line 16477 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 10276 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) == CB_CATEGORY_NUMERIC) {
		if (CB_LITERAL ((yyvsp[0]))->sign || CB_LITERAL ((yyvsp[0]))->scale) {
			cb_error (_("Integer value expected"));
		} else {
			n = cb_get_int ((yyvsp[0]));
			if (n < 1 || n > 256) {
				cb_error (_("Invalid CLASS value"));
			}
		}
	}
	(yyval) = (yyvsp[0]);
  }
#line 16497 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 10291 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16503 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 10292 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16509 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 10293 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16515 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 10294 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 16521 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 10295 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 16527 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 10296 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 16533 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 10301 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16541 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 10305 "parser.y" /* yacc.c:1646  */
    {
	struct cb_literal	*l;

	if (CB_LITERAL_P ((yyvsp[0]))) {
		/* We must not alter the original definition */
		l = cobc_parse_malloc (sizeof(struct cb_literal));
		*l = *(CB_LITERAL((yyvsp[0])));
		l->all = 1;
		(yyval) = CB_TREE (l);
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16559 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 10322 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16567 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 10326 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16575 "parser.c" /* yacc.c:1646  */
    break;

  case 1602:
#line 10332 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16581 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 10333 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16587 "parser.c" /* yacc.c:1646  */
    break;

  case 1604:
#line 10334 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16593 "parser.c" /* yacc.c:1646  */
    break;

  case 1605:
#line 10335 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16599 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 10336 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 16605 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 10337 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 16611 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 10338 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 16617 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 10345 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 16625 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 10349 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 16633 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 10353 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16641 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 10357 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16649 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 10361 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 16657 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 10365 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16665 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 10369 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16673 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 10373 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16681 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 10377 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16689 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 10381 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16697 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 10385 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 16705 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 10389 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 16713 "parser.c" /* yacc.c:1646  */
    break;

  case 1630:
#line 10414 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16721 "parser.c" /* yacc.c:1646  */
    break;

  case 1631:
#line 10418 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 16729 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 10422 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16737 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 10429 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16745 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 10433 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16753 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 10437 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16761 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 10444 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 16772 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 10451 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 16783 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 10458 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 16794 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 10468 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 16805 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 10475 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 16816 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 10485 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 16827 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 10492 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 16838 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 10502 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 16846 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 10506 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 16860 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 10519 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 16868 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 10523 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 16882 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 10537 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 16890 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 10545 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 16896 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 10546 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16902 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 10550 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 16908 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 10551 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16914 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 10555 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16920 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 10556 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16926 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 10561 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16934 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 10565 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16942 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 10572 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16950 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 10576 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16958 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 10583 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 16964 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 10584 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16970 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 10585 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 16976 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 10589 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16982 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 10590 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 16988 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 10594 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 16994 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 10595 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17000 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 10596 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17006 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 10601 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17014 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 10605 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 17027 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 10617 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 17036 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 10622 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 17045 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 10630 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 17053 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 10634 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 17061 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 10638 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 17069 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 10642 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 17077 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 10646 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 17085 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 10650 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 17093 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 10654 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 17101 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 10658 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 17109 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 10664 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17115 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 10665 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17121 "parser.c" /* yacc.c:1646  */
    break;


#line 17125 "parser.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 10836 "parser.y" /* yacc.c:1906  */

