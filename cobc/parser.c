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
    GRID = 464,
    GROUP = 465,
    HEADING = 466,
    HIGHLIGHT = 467,
    HIGH_VALUE = 468,
    ID = 469,
    IDENTIFICATION = 470,
    IF = 471,
    IGNORE = 472,
    IGNORING = 473,
    IN = 474,
    INDEX = 475,
    INDEXED = 476,
    INDICATE = 477,
    INITIALIZE = 478,
    INITIALIZED = 479,
    INITIATE = 480,
    INPUT = 481,
    INPUT_OUTPUT = 482,
    INSPECT = 483,
    INTO = 484,
    INTRINSIC = 485,
    INVALID = 486,
    INVALID_KEY = 487,
    IS = 488,
    I_O = 489,
    I_O_CONTROL = 490,
    JUSTIFIED = 491,
    KEPT = 492,
    KEY = 493,
    KEYBOARD = 494,
    LABEL = 495,
    LAST = 496,
    LEADING = 497,
    LEFT = 498,
    LEFTLINE = 499,
    LENGTH = 500,
    LENGTH_OF = 501,
    LESS = 502,
    LESS_OR_EQUAL = 503,
    LIMIT = 504,
    LIMITS = 505,
    LINAGE = 506,
    LINAGE_COUNTER = 507,
    LINE = 508,
    LINE_COUNTER = 509,
    LINES = 510,
    LINKAGE = 511,
    LITERAL = 512,
    LOCALE = 513,
    LOCALE_DATE_FUNC = 514,
    LOCALE_TIME_FUNC = 515,
    LOCALE_TIME_FROM_FUNC = 516,
    LOCAL_STORAGE = 517,
    LOCK = 518,
    LOWER = 519,
    LOWER_CASE_FUNC = 520,
    LOWLIGHT = 521,
    LOW_VALUE = 522,
    MANUAL = 523,
    MEMORY = 524,
    MERGE = 525,
    MINUS = 526,
    MNEMONIC_NAME = 527,
    MODE = 528,
    MOVE = 529,
    MULTIPLE = 530,
    MULTIPLY = 531,
    NAME = 532,
    NATIONAL = 533,
    NATIONAL_EDITED = 534,
    NATIONAL_OF_FUNC = 535,
    NATIVE = 536,
    NEAREST_AWAY_FROM_ZERO = 537,
    NEAREST_EVEN = 538,
    NEAREST_TOWARD_ZERO = 539,
    NEGATIVE = 540,
    NEXT = 541,
    NEXT_PAGE = 542,
    NO = 543,
    NO_ECHO = 544,
    NORMAL = 545,
    NOT = 546,
    NOT_END = 547,
    NOT_EOP = 548,
    NOT_ESCAPE = 549,
    NOT_EQUAL = 550,
    NOT_EXCEPTION = 551,
    NOT_INVALID_KEY = 552,
    NOT_OVERFLOW = 553,
    NOT_SIZE_ERROR = 554,
    NO_ADVANCING = 555,
    NUMBER = 556,
    NUMBERS = 557,
    NUMERIC = 558,
    NUMERIC_EDITED = 559,
    NUMVALC_FUNC = 560,
    OBJECT_COMPUTER = 561,
    OCCURS = 562,
    OF = 563,
    OFF = 564,
    OMITTED = 565,
    ON = 566,
    ONLY = 567,
    OPEN = 568,
    OPTIONAL = 569,
    OR = 570,
    ORDER = 571,
    ORGANIZATION = 572,
    OTHER = 573,
    OUTPUT = 574,
    OVERLINE = 575,
    PACKED_DECIMAL = 576,
    PADDING = 577,
    PAGE = 578,
    PAGE_COUNTER = 579,
    PARAGRAPH = 580,
    PERFORM = 581,
    PH = 582,
    PF = 583,
    PICTURE = 584,
    PICTURE_SYMBOL = 585,
    PLUS = 586,
    POINTER = 587,
    POSITION = 588,
    POSITIVE = 589,
    PRESENT = 590,
    PREVIOUS = 591,
    PRINTER = 592,
    PRINTING = 593,
    PROCEDURE = 594,
    PROCEDURES = 595,
    PROCEED = 596,
    PROGRAM = 597,
    PROGRAM_ID = 598,
    PROGRAM_NAME = 599,
    PROGRAM_POINTER = 600,
    PROHIBITED = 601,
    PROMPT = 602,
    PROTECTED = 603,
    QUOTE = 604,
    RANDOM = 605,
    RD = 606,
    READ = 607,
    READY_TRACE = 608,
    RECORD = 609,
    RECORDING = 610,
    RECORDS = 611,
    RECURSIVE = 612,
    REDEFINES = 613,
    REEL = 614,
    REFERENCE = 615,
    REFERENCES = 616,
    RELATIVE = 617,
    RELEASE = 618,
    REMAINDER = 619,
    REMOVAL = 620,
    RENAMES = 621,
    REPLACE = 622,
    REPLACING = 623,
    REPORT = 624,
    REPORTING = 625,
    REPORTS = 626,
    REPOSITORY = 627,
    REPO_FUNCTION = 628,
    REQUIRED = 629,
    RESERVE = 630,
    RESET = 631,
    RESET_TRACE = 632,
    RETURN = 633,
    RETURNING = 634,
    REVERSE_FUNC = 635,
    REVERSE_VIDEO = 636,
    REVERSED = 637,
    REWIND = 638,
    REWRITE = 639,
    RF = 640,
    RH = 641,
    RIGHT = 642,
    ROLLBACK = 643,
    ROUNDED = 644,
    RUN = 645,
    SAME = 646,
    SCREEN = 647,
    SCREEN_CONTROL = 648,
    SCROLL = 649,
    SD = 650,
    SEARCH = 651,
    SECTION = 652,
    SECURE = 653,
    SEGMENT_LIMIT = 654,
    SELECT = 655,
    SEMI_COLON = 656,
    SENTENCE = 657,
    SEPARATE = 658,
    SEQUENCE = 659,
    SEQUENTIAL = 660,
    SET = 661,
    SHARING = 662,
    SIGN = 663,
    SIGNED = 664,
    SIGNED_INT = 665,
    SIGNED_LONG = 666,
    SIGNED_SHORT = 667,
    SIZE = 668,
    SIZE_ERROR = 669,
    SORT = 670,
    SORT_MERGE = 671,
    SOURCE = 672,
    SOURCE_COMPUTER = 673,
    SPACE = 674,
    SPECIAL_NAMES = 675,
    STANDARD = 676,
    STANDARD_1 = 677,
    STANDARD_2 = 678,
    START = 679,
    STATIC = 680,
    STATUS = 681,
    STDCALL = 682,
    STEP = 683,
    STOP = 684,
    STRING = 685,
    SUBSTITUTE_FUNC = 686,
    SUBSTITUTE_CASE_FUNC = 687,
    SUBTRACT = 688,
    SUM = 689,
    SUPPRESS = 690,
    SYMBOLIC = 691,
    SYNCHRONIZED = 692,
    SYSTEM_DEFAULT = 693,
    SYSTEM_OFFSET = 694,
    TAB = 695,
    TALLYING = 696,
    TAPE = 697,
    TERMINATE = 698,
    TEST = 699,
    THAN = 700,
    THEN = 701,
    THRU = 702,
    TIME = 703,
    TIMEOUT = 704,
    TIMES = 705,
    TO = 706,
    TOK_AMPER = 707,
    TOK_CLOSE_PAREN = 708,
    TOK_COLON = 709,
    TOK_DIV = 710,
    TOK_DOT = 711,
    TOK_EQUAL = 712,
    TOK_FALSE = 713,
    TOK_FILE = 714,
    TOK_GREATER = 715,
    TOK_INITIAL = 716,
    TOK_LESS = 717,
    TOK_MINUS = 718,
    TOK_MUL = 719,
    TOK_NULL = 720,
    TOK_OVERFLOW = 721,
    TOK_OPEN_PAREN = 722,
    TOK_PLUS = 723,
    TOK_TRUE = 724,
    TOP = 725,
    TOWARD_GREATER = 726,
    TOWARD_LESSER = 727,
    TRAILING = 728,
    TRANSFORM = 729,
    TRIM_FUNC = 730,
    TRUNCATION = 731,
    TYPE = 732,
    UNDERLINE = 733,
    UNIT = 734,
    UNLOCK = 735,
    UNSIGNED = 736,
    UNSIGNED_INT = 737,
    UNSIGNED_LONG = 738,
    UNSIGNED_SHORT = 739,
    UNSTRING = 740,
    UNTIL = 741,
    UP = 742,
    UPDATE = 743,
    UPON = 744,
    UPON_ARGUMENT_NUMBER = 745,
    UPON_COMMAND_LINE = 746,
    UPON_ENVIRONMENT_NAME = 747,
    UPON_ENVIRONMENT_VALUE = 748,
    UPPER = 749,
    UPPER_CASE_FUNC = 750,
    USAGE = 751,
    USE = 752,
    USER = 753,
    USER_DEFAULT = 754,
    USER_FUNCTION_NAME = 755,
    USER_REPO_FUNCTION = 756,
    USING = 757,
    VALUE = 758,
    VARYING = 759,
    WAIT = 760,
    WHEN = 761,
    WHEN_COMPILED_FUNC = 762,
    WITH = 763,
    WORD = 764,
    WORDS = 765,
    WORKING_STORAGE = 766,
    WRITE = 767,
    YYYYDDD = 768,
    YYYYMMDD = 769,
    ZERO = 770,
    SHIFT_PREFER = 771
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

#line 1376 "parser.c" /* yacc.c:358  */

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
#define YYLAST   8894

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  517
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  820
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1916
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2754

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   771

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
     515,   516
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1391,  1391,  1391,  1423,  1424,  1428,  1429,  1433,  1434,
    1438,  1438,  1461,  1468,  1475,  1481,  1482,  1483,  1487,  1488,
    1492,  1516,  1517,  1521,  1555,  1561,  1573,  1547,  1583,  1582,
    1620,  1652,  1653,  1657,  1658,  1661,  1662,  1666,  1675,  1684,
    1685,  1689,  1693,  1702,  1703,  1711,  1712,  1722,  1723,  1727,
    1728,  1729,  1730,  1731,  1738,  1737,  1750,  1751,  1754,  1755,
    1769,  1768,  1778,  1779,  1780,  1781,  1785,  1786,  1790,  1791,
    1792,  1793,  1797,  1804,  1811,  1818,  1829,  1833,  1837,  1841,
    1848,  1849,  1856,  1855,  1866,  1867,  1868,  1875,  1876,  1880,
    1884,  1896,  1900,  1901,  1906,  1909,  1916,  1921,  1932,  1945,
    1946,  1954,  1955,  1959,  1960,  1961,  1962,  1963,  1964,  1965,
    1966,  1967,  1968,  1969,  1970,  1978,  1977,  2005,  2015,  2028,
    2036,  2039,  2040,  2044,  2059,  2080,  2079,  2103,  2109,  2115,
    2121,  2127,  2133,  2143,  2147,  2154,  2158,  2163,  2162,  2173,
    2177,  2184,  2185,  2186,  2187,  2188,  2189,  2193,  2194,  2201,
    2216,  2219,  2226,  2234,  2238,  2249,  2269,  2277,  2288,  2289,
    2295,  2316,  2317,  2321,  2325,  2346,  2369,  2451,  2454,  2463,
    2482,  2498,  2516,  2534,  2551,  2567,  2568,  2575,  2576,  2584,
    2585,  2595,  2596,  2601,  2600,  2621,  2631,  2632,  2636,  2637,
    2638,  2639,  2640,  2641,  2642,  2643,  2644,  2645,  2646,  2647,
    2648,  2655,  2661,  2671,  2684,  2697,  2713,  2714,  2715,  2716,
    2719,  2720,  2726,  2727,  2731,  2735,  2736,  2741,  2744,  2745,
    2752,  2760,  2761,  2762,  2769,  2793,  2795,  2800,  2810,  2821,
    2828,  2830,  2831,  2837,  2837,  2844,  2849,  2854,  2861,  2862,
    2863,  2867,  2878,  2879,  2883,  2888,  2893,  2898,  2909,  2920,
    2930,  2938,  2939,  2940,  2946,  2957,  2964,  2965,  2971,  2979,
    2980,  2981,  2987,  2988,  2989,  2996,  2997,  3001,  3002,  3008,
    3036,  3037,  3038,  3039,  3046,  3045,  3061,  3062,  3066,  3069,
    3070,  3076,  3077,  3085,  3086,  3094,  3095,  3099,  3120,  3119,
    3136,  3143,  3147,  3153,  3154,  3158,  3168,  3183,  3184,  3185,
    3186,  3187,  3188,  3189,  3190,  3191,  3198,  3205,  3205,  3205,
    3211,  3231,  3265,  3296,  3297,  3304,  3305,  3309,  3310,  3317,
    3328,  3333,  3344,  3345,  3349,  3350,  3356,  3367,  3385,  3386,
    3390,  3391,  3392,  3396,  3403,  3410,  3419,  3431,  3483,  3498,
    3499,  3503,  3513,  3552,  3554,  3553,  3569,  3572,  3572,  3589,
    3590,  3592,  3596,  3598,  3597,  3632,  3645,  3653,  3658,  3664,
    3673,  3683,  3686,  3698,  3699,  3700,  3701,  3705,  3709,  3713,
    3717,  3721,  3725,  3729,  3733,  3737,  3741,  3745,  3749,  3753,
    3764,  3765,  3769,  3770,  3774,  3775,  3776,  3780,  3781,  3785,
    3811,  3815,  3824,  3828,  3837,  3838,  3839,  3840,  3841,  3842,
    3843,  3844,  3845,  3846,  3847,  3848,  3849,  3850,  3857,  3881,
    3909,  3912,  3921,  3946,  3957,  3958,  3962,  3966,  3970,  3974,
    3978,  3982,  3986,  3990,  3994,  3998,  4002,  4006,  4010,  4015,
    4020,  4024,  4028,  4036,  4040,  4044,  4052,  4056,  4060,  4064,
    4068,  4072,  4076,  4080,  4084,  4092,  4100,  4104,  4108,  4112,
    4116,  4120,  4128,  4129,  4133,  4134,  4140,  4146,  4158,  4176,
    4177,  4186,  4218,  4248,  4249,  4253,  4254,  4257,  4258,  4264,
    4265,  4272,  4273,  4280,  4304,  4305,  4322,  4323,  4326,  4327,
    4334,  4335,  4340,  4351,  4362,  4373,  4384,  4413,  4412,  4421,
    4422,  4426,  4427,  4430,  4431,  4444,  4457,  4478,  4487,  4501,
    4503,  4502,  4522,  4524,  4523,  4539,  4541,  4540,  4549,  4550,
    4557,  4556,  4569,  4570,  4571,  4578,  4583,  4587,  4588,  4594,
    4601,  4605,  4606,  4612,  4649,  4653,  4658,  4664,  4665,  4670,
    4671,  4672,  4673,  4674,  4678,  4685,  4692,  4699,  4706,  4712,
    4713,  4718,  4717,  4724,  4725,  4729,  4730,  4731,  4732,  4733,
    4734,  4735,  4736,  4737,  4738,  4739,  4740,  4741,  4742,  4743,
    4744,  4748,  4755,  4756,  4757,  4758,  4759,  4760,  4761,  4764,
    4765,  4766,  4769,  4770,  4774,  4781,  4787,  4788,  4792,  4793,
    4797,  4804,  4808,  4815,  4816,  4820,  4827,  4828,  4832,  4833,
    4837,  4838,  4839,  4843,  4844,  4848,  4849,  4853,  4860,  4867,
    4875,  4877,  4876,  4897,  4898,  4902,  4903,  4907,  4909,  4908,
    4968,  4986,  4987,  4991,  4995,  4999,  5003,  5007,  5011,  5015,
    5019,  5023,  5027,  5031,  5036,  5041,  5046,  5050,  5054,  5058,
    5062,  5067,  5071,  5075,  5080,  5085,  5090,  5095,  5096,  5097,
    5098,  5099,  5100,  5101,  5102,  5103,  5110,  5115,  5124,  5125,
    5129,  5130,  5135,  5138,  5142,  5150,  5153,  5157,  5165,  5176,
    5184,  5186,  5196,  5185,  5223,  5223,  5256,  5260,  5259,  5273,
    5272,  5292,  5293,  5298,  5313,  5315,  5319,  5329,  5331,  5339,
    5347,  5355,  5384,  5417,  5420,  5433,  5438,  5465,  5467,  5466,
    5503,  5504,  5508,  5509,  5510,  5527,  5528,  5539,  5538,  5588,
    5589,  5593,  5641,  5654,  5657,  5676,  5681,  5675,  5694,  5694,
    5724,  5731,  5732,  5733,  5734,  5735,  5736,  5737,  5738,  5739,
    5740,  5741,  5742,  5743,  5744,  5745,  5746,  5747,  5748,  5749,
    5750,  5751,  5752,  5753,  5754,  5755,  5756,  5757,  5758,  5759,
    5760,  5761,  5762,  5763,  5764,  5765,  5766,  5767,  5768,  5769,
    5770,  5771,  5772,  5773,  5774,  5775,  5776,  5777,  5778,  5779,
    5780,  5794,  5806,  5805,  5821,  5827,  5831,  5835,  5840,  5845,
    5850,  5855,  5859,  5863,  5867,  5871,  5876,  5880,  5884,  5888,
    5892,  5896,  5900,  5907,  5908,  5915,  5916,  5920,  5921,  5925,
    5926,  5927,  5928,  5929,  5933,  5937,  5938,  5941,  5942,  5945,
    5946,  5952,  5953,  5957,  5958,  5962,  5966,  5972,  5976,  5980,
    5984,  5988,  5992,  5996,  6000,  6004,  6008,  6012,  6016,  6020,
    6024,  6028,  6032,  6036,  6040,  6044,  6050,  6054,  6058,  6062,
    6066,  6070,  6074,  6081,  6082,  6086,  6090,  6108,  6107,  6116,
    6120,  6124,  6130,  6131,  6138,  6142,  6153,  6152,  6161,  6165,
    6177,  6178,  6186,  6185,  6194,  6195,  6199,  6205,  6205,  6212,
    6211,  6221,  6241,  6245,  6250,  6255,  6276,  6280,  6279,  6296,
    6297,  6302,  6310,  6334,  6336,  6340,  6349,  6362,  6365,  6369,
    6373,  6396,  6397,  6401,  6402,  6407,  6410,  6415,  6424,  6428,
    6436,  6440,  6451,  6450,  6458,  6462,  6473,  6472,  6480,  6485,
    6493,  6494,  6495,  6496,  6497,  6505,  6504,  6513,  6520,  6524,
    6534,  6545,  6563,  6562,  6571,  6575,  6579,  6584,  6592,  6596,
    6607,  6606,  6616,  6620,  6624,  6628,  6632,  6636,  6637,  6646,
    6648,  6647,  6655,  6664,  6671,  6675,  6679,  6683,  6693,  6695,
    6699,  6700,  6703,  6705,  6712,  6713,  6717,  6718,  6723,  6727,
    6731,  6735,  6739,  6743,  6747,  6751,  6755,  6759,  6763,  6767,
    6771,  6775,  6779,  6783,  6787,  6794,  6798,  6809,  6808,  6817,
    6821,  6825,  6829,  6833,  6840,  6844,  6855,  6854,  6863,  6882,
    6881,  6905,  6913,  6914,  6919,  6930,  6941,  6955,  6959,  6966,
    6967,  6972,  6981,  6990,  6995,  7004,  7005,  7010,  7072,  7073,
    7074,  7078,  7079,  7083,  7087,  7098,  7097,  7109,  7110,  7131,
    7145,  7167,  7189,  7209,  7232,  7233,  7241,  7240,  7249,  7260,
    7259,  7269,  7276,  7275,  7288,  7297,  7301,  7312,  7328,  7327,
    7336,  7340,  7344,  7351,  7355,  7366,  7365,  7373,  7381,  7382,
    7386,  7387,  7388,  7393,  7396,  7403,  7407,  7415,  7422,  7423,
    7424,  7425,  7426,  7427,  7428,  7433,  7436,  7446,  7445,  7454,
    7460,  7472,  7471,  7480,  7484,  7488,  7492,  7499,  7500,  7501,
    7502,  7509,  7508,  7522,  7532,  7541,  7542,  7546,  7547,  7548,
    7549,  7550,  7551,  7555,  7556,  7560,  7565,  7572,  7573,  7574,
    7575,  7576,  7580,  7608,  7611,  7618,  7622,  7632,  7631,  7644,
    7643,  7651,  7655,  7666,  7665,  7674,  7678,  7685,  7689,  7700,
    7699,  7707,  7728,  7752,  7753,  7754,  7755,  7759,  7760,  7764,
    7765,  7766,  7767,  7779,  7778,  7789,  7795,  7794,  7805,  7813,
    7821,  7828,  7832,  7845,  7852,  7864,  7867,  7872,  7876,  7887,
    7894,  7895,  7899,  7900,  7903,  7904,  7909,  7920,  7919,  7928,
    7955,  7956,  7961,  7964,  7968,  7972,  7976,  7980,  7984,  7991,
    7992,  7996,  7997,  8001,  8005,  8015,  8026,  8025,  8033,  8043,
    8054,  8053,  8062,  8069,  8073,  8084,  8083,  8095,  8104,  8107,
    8111,  8118,  8122,  8132,  8144,  8143,  8152,  8156,  8165,  8166,
    8171,  8174,  8182,  8186,  8193,  8201,  8205,  8216,  8215,  8229,
    8230,  8231,  8232,  8233,  8234,  8238,  8239,  8243,  8244,  8250,
    8259,  8266,  8267,  8271,  8275,  8279,  8283,  8287,  8291,  8295,
    8299,  8308,  8312,  8321,  8330,  8331,  8335,  8344,  8345,  8349,
    8353,  8364,  8363,  8372,  8371,  8402,  8405,  8425,  8426,  8429,
    8430,  8438,  8439,  8444,  8449,  8459,  8475,  8480,  8490,  8507,
    8506,  8516,  8529,  8532,  8540,  8543,  8548,  8553,  8561,  8562,
    8563,  8564,  8565,  8566,  8570,  8578,  8579,  8583,  8587,  8598,
    8597,  8607,  8620,  8623,  8627,  8635,  8647,  8650,  8657,  8658,
    8659,  8660,  8667,  8666,  8675,  8682,  8683,  8687,  8688,  8689,
    8693,  8694,  8698,  8702,  8713,  8712,  8721,  8725,  8729,  8736,
    8740,  8750,  8761,  8762,  8769,  8768,  8777,  8783,  8795,  8794,
    8802,  8816,  8815,  8823,  8836,  8838,  8839,  8847,  8846,  8855,
    8863,  8864,  8869,  8870,  8875,  8882,  8883,  8888,  8895,  8896,
    8900,  8901,  8905,  8906,  8910,  8914,  8925,  8924,  8933,  8934,
    8935,  8936,  8937,  8941,  8968,  8971,  8983,  8993,  8998,  9003,
    9008,  9016,  9054,  9055,  9059,  9099,  9109,  9132,  9133,  9134,
    9135,  9139,  9148,  9154,  9164,  9173,  9182,  9183,  9190,  9189,
    9201,  9211,  9212,  9217,  9220,  9224,  9228,  9235,  9236,  9240,
    9241,  9245,  9249,  9261,  9264,  9265,  9274,  9275,  9279,  9280,
    9289,  9290,  9294,  9297,  9298,  9307,  9308,  9319,  9322,  9323,
    9332,  9333,  9345,  9348,  9350,  9360,  9361,  9373,  9374,  9378,
    9379,  9380,  9384,  9393,  9404,  9405,  9406,  9410,  9419,  9430,
    9435,  9436,  9445,  9446,  9457,  9461,  9471,  9478,  9485,  9485,
    9496,  9497,  9498,  9502,  9511,  9512,  9514,  9515,  9516,  9517,
    9518,  9520,  9521,  9522,  9523,  9524,  9525,  9527,  9528,  9529,
    9531,  9532,  9533,  9534,  9535,  9538,  9539,  9543,  9544,  9548,
    9549,  9553,  9554,  9558,  9562,  9568,  9572,  9578,  9579,  9580,
    9584,  9585,  9586,  9590,  9591,  9592,  9596,  9600,  9604,  9605,
    9606,  9609,  9610,  9620,  9632,  9641,  9653,  9662,  9674,  9689,
    9690,  9695,  9704,  9710,  9730,  9734,  9755,  9796,  9810,  9811,
    9816,  9822,  9823,  9828,  9840,  9841,  9842,  9849,  9860,  9861,
    9865,  9873,  9881,  9885,  9892,  9901,  9902,  9908,  9922,  9939,
    9943,  9950,  9951,  9952,  9959,  9963,  9970,  9971,  9972,  9973,
    9974,  9978,  9982,  9986,  9990,  9994, 10015, 10019, 10026, 10027,
   10028, 10032, 10033, 10034, 10035, 10036, 10040, 10044, 10051, 10052,
   10056, 10057, 10061, 10062, 10066, 10067, 10078, 10079, 10083, 10084,
   10085, 10089, 10090, 10091, 10098, 10099, 10103, 10104, 10108, 10109,
   10110, 10116, 10120, 10124, 10125, 10129, 10133, 10140, 10147, 10154,
   10164, 10171, 10181, 10191, 10201, 10214, 10218, 10226, 10234, 10238,
   10248, 10262, 10285, 10307, 10323, 10324, 10325, 10326, 10327, 10328,
   10332, 10336, 10353, 10357, 10364, 10365, 10366, 10367, 10368, 10369,
   10370, 10376, 10380, 10384, 10388, 10392, 10396, 10400, 10404, 10408,
   10412, 10416, 10420, 10427, 10428, 10432, 10433, 10434, 10438, 10439,
   10440, 10441, 10445, 10449, 10453, 10460, 10464, 10468, 10475, 10482,
   10489, 10499, 10506, 10516, 10523, 10533, 10537, 10550, 10554, 10569,
   10577, 10578, 10582, 10583, 10587, 10588, 10593, 10596, 10604, 10607,
   10614, 10616, 10617, 10621, 10622, 10626, 10627, 10628, 10633, 10636,
   10649, 10653, 10661, 10665, 10669, 10673, 10677, 10681, 10685, 10689,
   10696, 10697, 10703, 10704, 10705, 10706, 10707, 10708, 10709, 10710,
   10711, 10712, 10713, 10714, 10715, 10716, 10717, 10718, 10719, 10720,
   10721, 10722, 10723, 10724, 10725, 10726, 10727, 10728, 10729, 10730,
   10731, 10732, 10733, 10734, 10735, 10736, 10737, 10738, 10739, 10740,
   10741, 10742, 10743, 10744, 10745, 10746, 10747, 10748, 10749, 10750,
   10751, 10752, 10753, 10754, 10755, 10756, 10757, 10758, 10759, 10760,
   10761, 10762, 10763, 10764, 10765, 10766, 10767, 10768, 10769, 10770,
   10771, 10772, 10779, 10779, 10780, 10780, 10781, 10781, 10782, 10782,
   10783, 10783, 10784, 10784, 10785, 10785, 10786, 10786, 10787, 10787,
   10788, 10788, 10789, 10789, 10790, 10790, 10791, 10791, 10792, 10792,
   10793, 10793, 10794, 10794, 10795, 10795, 10796, 10796, 10796, 10797,
   10797, 10798, 10798, 10799, 10799, 10800, 10800, 10801, 10801, 10801,
   10802, 10802, 10803, 10803, 10803, 10804, 10804, 10804, 10805, 10805,
   10805, 10806, 10806, 10807, 10807, 10808, 10808, 10809, 10809, 10809,
   10810, 10810, 10811, 10811, 10812, 10812, 10812, 10812, 10813, 10813,
   10814, 10814, 10815, 10815, 10816, 10816, 10817, 10817, 10818, 10818,
   10819, 10819, 10820, 10820, 10820, 10821, 10821, 10822, 10822, 10823,
   10823, 10824, 10824, 10825, 10825, 10826, 10826, 10827, 10827, 10828,
   10828, 10828, 10829, 10829, 10830, 10830, 10831, 10831, 10835, 10835,
   10836, 10836, 10837, 10837, 10838, 10838, 10839, 10839, 10840, 10840,
   10841, 10841, 10842, 10842, 10843, 10843, 10844, 10844, 10845, 10845,
   10846, 10846, 10847, 10847, 10848, 10848, 10849, 10849, 10852, 10853,
   10854, 10858, 10858, 10859, 10859, 10860, 10860, 10861, 10861, 10862,
   10862, 10863, 10863, 10864, 10864, 10865, 10865
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
  "GREATER", "\"GREATER OR EQUAL\"", "GRID", "GROUP", "HEADING",
  "HIGHLIGHT", "\"HIGH-VALUE\"", "ID", "IDENTIFICATION", "IF", "IGNORE",
  "IGNORING", "IN", "INDEX", "INDEXED", "INDICATE", "INITIALIZE",
  "INITIALIZED", "INITIATE", "INPUT", "\"INPUT-OUTPUT\"", "INSPECT",
  "INTO", "INTRINSIC", "INVALID", "\"INVALID KEY\"", "IS", "\"I-O\"",
  "\"I-O-CONTROL\"", "JUSTIFIED", "KEPT", "KEY", "KEYBOARD", "LABEL",
  "LAST", "LEADING", "LEFT", "LEFTLINE", "LENGTH", "\"LENGTH OF\"", "LESS",
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
  "in_of", "label_option", "line_or_lines", "lock_records",
  "object_char_or_word", "records", "reel_or_unit", "scroll_line_or_lines",
  "size_or_length", "with_dups", "prog_coll_sequence", "detail_keyword",
  "ch_keyword", "cf_keyword", "ph_keyword", "pf_keyword", "rh_keyword",
  "rf_keyword", "control_keyword", YY_NULLPTR
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
     765,   766,   767,   768,   769,   770,   771
};
# endif

#define YYPACT_NINF -2415

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2415)))

#define YYTABLE_NINF -1867

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2415,   266,   605, -2415,  -196,   313, -2415,   605, -2415, -2415,
     631, -2415, -2415,   631,   631,   -44,   -44, -2415,   749, -2415,
     899,   557,   943, -2415, -2415,  1141,  1141,   746,   825, -2415,
   -2415,     5,   631,   -44, -2415, -2415,  1033,   861, -2415, -2415,
     870,  1432,   -44, -2415, -2415, -2415,   557,   877, -2415, -2415,
     -70, -2415,   851,   851,   978,  1003,  1187,  1187,  1187,  1061,
     851,  1047,  1030,  1039,  1187,  1043,  1070,  1404, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1122, -2415, -2415, -2415, -2415,
    1298, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
    1340,  1086,     5, -2415, -2415,  1089,    98, -2415, -2415,  1187,
    1187, -2415,  1187,  1009,  1452,  1009,  1090,  1187,  1187, -2415,
   -2415,  1009, -2415, -2415, -2415,  1050,   881,  1096, -2415, -2415,
    1063, -2415,  1115, -2415, -2415, -2415, -2415,  -153, -2415, -2415,
   -2415,  1233, -2415,  1187,   710,  1009,  1319,   -14, -2415, -2415,
   -2415, -2415, -2415,  1322,  1107,   688,  1393, -2415,  1095, -2415,
    1050, -2415,    51, -2415, -2415, -2415, -2415, -2415,   765,   457,
    1187,    30, -2415, -2415, -2415,   -49, -2415, -2415, -2415,   936,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,   710, -2415,  1160,
   -2415,  -143, -2415, -2415,  1009, -2415,  1205, -2415,  1207,  1196,
    1546,  1187, -2415, -2415, -2415,   780, -2415, -2415, -2415, -2415,
   -2415,   589,  1553,  1187,    69, -2415,    79, -2415, -2415,   122,
   -2415, -2415, -2415, -2415,  1357,   457, -2415,  1385,   851,   851,
   -2415,   765,  1163,    70,   -74, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,   884, -2415,
      71, -2415,   710, -2415, -2415,  1290, -2415, -2415, -2415,  1187,
    1217,  1366, -2415, -2415, -2415, -2415,  1029,  1187,  1116,  1394,
     585, -2415,  1601,   603,  1173, -2415, -2415,  1176,  1531, -2415,
    1357, -2415,   851, -2415, -2415, -2415, -2415,   765, -2415,  1186,
    1326, -2415,   851, -2415,   831, -2415,    88, -2415, -2415, -2415,
   -2415, -2415,   884, -2415,  1387,  1366, -2415, -2415, -2415,   678,
   -2415, -2415, -2415,  1388, -2415, -2415, -2415, -2415, -2415,  1373,
   -2415, -2415, -2415, -2415, -2415,  1193, -2415, -2415, -2415,  1630,
    1554,  1202, -2415, -2415,   884, -2415, -2415,    28, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1219, -2415,  1477,
    1544,  1209, -2415,  1652, -2415, -2415, -2415, -2415,  1646, -2415,
    1583, -2415,  1162,  1218,  1279, -2415,   884,  1405,  1328,  -207,
    1273, -2415,  1275,  1187,  1626,    95,   167,   458, -2415,  1177,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1258,
   -2415,  1424, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
    1649,  1187, -2415,  1162, -2415,  1162, -2415, -2415,  1235,   470,
   -2415, -2415,  1187, -2415,  1459, -2415, -2415,  1010, -2415, -2415,
    1014,  1187,  1187, -2415,  1187,  1187, -2415,  1630, -2415,   137,
    1187,  1405, -2415,  1296,  1195,  1162, -2415,  1374, -2415, -2415,
   -2415, -2415,  1197, -2415,  1200,    65,    18,  1187, -2415, -2415,
    1081, -2415, -2415,   348,  1289,  1009,  1009, -2415,  1395,  1395,
    1402, -2415,  1009,  1187, -2415, -2415, -2415,  1366, -2415,  1320,
    1456, -2415, -2415,  1263, -2415, -2415, -2415, -2415, -2415,  1009,
   -2415, -2415,   435,   435,  1713,   435, -2415, -2415,   435,   447,
   -2415, -2415, -2415, -2415, -2415,  -165, -2415, -2415, -2415, -2415,
   -2415, -2415,   721, -2415,  1265,  1325,  1470,   686,  1271,  7036,
   -2415,  1220, -2415, -2415,   -13, -2415, -2415, -2415, -2415,  1193,
   -2415, -2415, -2415, -2415, -2415,  1187,  1009,  1223, -2415,  1223,
   -2415, -2415,  1272,  1336,  1367, -2415,  1281, -2415,  1283, -2415,
    1654, -2415,  1655, -2415,  1361, -2415,  1618,  1310, -2415, -2415,
    1009,  1009, -2415,   573, -2415, -2415,  1200, -2415,  1292,  1349,
    1359, -2415, -2415, -2415,    50,  1583,  1187,   927,   927,  1187,
      52,  1405,  1187,  1727, -2415,  1444, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,   851,  1084, -2415,  1247,
   -2415,  1009, -2415,  1443, -2415, -2415,  1200, -2415,  1299,  1360,
   -2415,  7249,   657,  1555,  1366,  1253,  1187,  1727,  1254,   341,
     348,  1366,  1262,  1187, -2415, -2415, -2415,    21,   851, -2415,
   -2415, -2415,    63,   -67, -2415,  1200, -2415,  1309,   129,   -24,
   -2415, -2415,  -210,  -182,  -170,  -163,   590,  1268, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1380, -2415,    62, -2415, -2415,
   -2415, -2415,  1009,  1009,  1535, -2415, -2415, -2415,   -73, -2415,
   -2415, -2415,  1187,   660, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415,  1088,   -93, -2415,  1260, -2415,   705, -2415,  1324,
   -2415, -2415, -2415, -2415,  1254, -2415, -2415, -2415, -2415,  1522,
      61,  1559,  1270,  1187, -2415, -2415,  1187, -2415,   860, -2415,
   -2415, -2415,  1092, -2415, -2415, -2415, -2415, -2415, -2415,  1658,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,  1267, -2415, -2415,  1730,
    1341, -2415,  1327,  1346, -2415, -2415, -2415, -2415,  3337,   834,
    1770, -2415,  1399,  1399, -2415,   860,  1489, -2415,  1954,  1954,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1353, -2415,
    1366,   124, -2415, -2415, -2415,  1366, -2415, -2415,  1397, -2415,
     451,   451, -2415, -2415,  1447,  1297,    45,  2908,  4105, -2415,
    1559,  1615,  1366,  1363,  8036,  1347, -2415,  1009, -2415,   834,
   -2415,  1368,  1563, -2415,  1626, -2415, -2415, -2415, -2415,  1954,
    1365, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415,   860, -2415, -2415, -2415, -2415,    34,
    1404, -2415,   801, -2415, -2415, -2415, -2415,  1314, -2415,  6777,
   -2415, -2415,  1297,  1370, -2415, -2415,  1437,  4424, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,   554, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1422, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,   393,
   -2415, -2415,  1491, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
    1318,  1366,  1341, -2415, -2415,  1715, -2415, -2415, -2415,  1364,
    1378,  1379,  4202,   -14,   -14,  1381,  1382,  1386, -2415,  1389,
     -14, -2415, -2415, -2415,  8134,  8036,  8134,  1390, -2415,  1379,
   -2415,    46,   803,  -202, -2415,  1662, -2415, -2415, -2415, -2415,
   -2415,  1353, -2415,  1392,  1398,  1403,  8036, -2415, -2415,   771,
   -2415,   834, -2415, -2415, -2415, -2415, -2415,   348,   348, -2415,
   -2415, -2415, -2415,  1645, -2415, -2415,  1324,  1366, -2415, -2415,
    1391, -2415,  1406, -2415,   115,   115,  1334,  1413, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  -135,
    4822,  8036,   492,   681,   509,  1162,   646,   717,  6173,  6295,
    1578,   430,  1064,   646,  1009,  1409, -2415, -2415,  6295, -2415,
   -2415,   646,  1314,  2218,  1009,  5309,  6295, -2415,   879,  1579,
    1162,  1009,  1162,  1009,    89,   552,  1009,  1162, -2415, -2415,
   -2415, -2415, -2415, -2415,  5408,  5508, -2415, -2415,  1314,    75,
    1009,  1162,  1009,  1009, -2415, -2415,  1613,  1543, -2415,  8036,
    8036,  7514, -2415, -2415,  1353, -2415,  1369,  1372,  8036,  8036,
    8036,  4202,  1377, -2415,   944, -2415,  4202, -2415, -2415, -2415,
   -2415,  8036,  7593,  8036,  8036,  8036,  8036,  8036,  8036, -2415,
    4202,  8036,   803,  1436, -2415,  1414, -2415, -2415, -2415,  1825,
    1404, -2415,   211, -2415, -2415, -2415, -2415,   107, -2415,  -168,
     482,   113, -2415, -2415, -2415,  1746,   190,  1665,  1489,  1009,
    4202, -2415,  1750, -2415,  5607, -2415, -2415, -2415, -2415, -2415,
     170,   192, -2415,   492, -2415,  1438, -2415,   -14, -2415, -2415,
   -2415, -2415,  1754,  2115, -2415,   509, -2415, -2415,  1162,   942,
    1489,  1756,   184, -2415,  1503, -2415, -2415,  1327,  1353,  1162,
    1758,  1328,  1044,  1759,  5819, -2415,  5905,   101,  1058,  1074,
    1757,   149,  1396, -2415, -2415, -2415,  1763,    86, -2415, -2415,
   -2415,  4838, -2415, -2415,  1794,   554, -2415, -2415, -2415,   646,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1451, -2415, -2415,
     367,  1314, -2415, -2415,   228, -2415, -2415, -2415, -2415, -2415,
   -2415,  1435,  6295, -2415,  1453,  1765,  1858, -2415, -2415, -2415,
   -2415,   879,  1501, -2415,  1461, -2415,  2745,     1,  -223,  1465,
    1463, -2415,   811, -2415,  1473,  1774,   948, -2415,  1723, -2415,
    1776,  1328,  1777,  1723,  1009,  1775,  1423, -2415,   991, -2415,
   -2415, -2415, -2415, -2415, -2415,  1657, -2415,   646, -2415,  -112,
   -2415,   110,  1895, -2415,    73, -2415,  1782,   905,   627,  1882,
    1783,  1376, -2415, -2415,  1009,  1784,  5941,  1314, -2415, -2415,
     578, -2415, -2415, -2415, -2415,  3858, -2415,  1737, -2415,  1121,
    1786,  1822,  1787,  1723, -2415, -2415, -2415,  1009,  1717,   188,
      53,   935,  1487,   118,  1490, -2415,   260, -2415, -2415,   410,
    1492,  1493,  1494,   399, -2415,  1353, -2415,  1495, -2415, -2415,
     417,  1496,   935, -2415,  1020,  -202,  -202, -2415, -2415, -2415,
    1062,  1497,   427,  1500,  1187, -2415,   348,  1827,  1488,   606,
    7422, -2415,  1187,  1540,  1640, -2415, -2415,  1846, -2415, -2415,
     423,  1760, -2415,   694,  1225,   -18,  1507, -2415,  1353, -2415,
   -2415, -2415,  6433,  1761, -2415,  1736, -2415,  1582, -2415,  1621,
    1709, -2415, -2415, -2415,  1396, -2415,   942, -2415, -2415, -2415,
     982,   531,  1009, -2415, -2415, -2415, -2415, -2415,  8036,  1694,
   -2415,  1347, -2415,  1162, -2415, -2415, -2415,  1740, -2415, -2415,
   -2415,  6295, -2415,  1677,    48,  1674,  1828,  1486,  1814,  1814,
    1814,  1814, -2415, -2415,  6295,  6433, -2415, -2415, -2415, -2415,
     430,   179, -2415,  1478, -2415,  1479, -2415, -2415, -2415, -2415,
    1409, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415,  4512, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415,    -6, -2415,  1854,  1312,  1815, -2415,   991,
     148, -2415, -2415,  1624, -2415, -2415,    91,  8036, -2415,  1551,
     646, -2415, -2415,  6433,  1501,  1177,  1162, -2415, -2415, -2415,
   -2415, -2415,  1835,  1009,   492, -2415,   230, -2415, -2415, -2415,
   -2415,  1328,  2218, -2415, -2415, -2415,  1778, -2415, -2415,   658,
    1876, -2415, -2415,  1009,  1876,  1561, -2415,  1353, -2415, -2415,
     638,   765, -2415, -2415,  5115, -2415,  1970,  1042,    82, -2415,
   -2415, -2415,  1187, -2415,   -42,  6295, -2415,   579,  6086, -2415,
   -2415,  1009, -2415,  1824, -2415, -2415,  6433, -2415,  1366, -2415,
   -2415,   991, -2415, -2415, -2415, -2415, -2415,  1882,  1793, -2415,
   -2415,   230,  1717, -2415,  1882, -2415, -2415, -2415,  1459,  7695,
    1392,  7844,  1392, -2415,  1009,  1392,  1392,  1392,  4202, -2415,
     398,  1392, -2415,  7981,  1392,  1392, -2415,   834, -2415,  1543,
   -2415, -2415,  1187,  1187,  1727,   719, -2415, -2415, -2415, -2415,
    1820,  1849, -2415,  1187, -2415,   434, -2415, -2415, -2415,  1339,
    1187,  2218, -2415, -2415, -2415, -2415,  1731, -2415,  1366, -2415,
    1971, -2415, -2415, -2415,  1009, -2415, -2415,  1009, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1829,  1731,   775,
    1187, -2415,  1525,  1580, -2415, -2415, -2415, -2415, -2415, -2415,
    1762,  1731,  1731,    94,  1785,  1731, -2415,  1269, -2415, -2415,
   -2415,  1523,  1529, -2415,   991,  1269,  1805,  1619,  1745, -2415,
   -2415,  1779, -2415, -2415, -2415, -2415, -2415, -2415,   510, -2415,
    1009,  1489,   560, -2415,   -45,   -38,   646,  1596,  1582,   646,
   -2415,  1600,   492, -2415,   554, -2415, -2415,  1672,  1692, -2415,
     764,  1187, -2415, -2415, -2415, -2415, -2415,  1767, -2415, -2415,
   -2415,  2028, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1814,
    1187, -2415,   -62, -2415, -2415,  1352,  1187, -2415, -2415, -2415,
   -2415,   -10,  1187, -2415,  2014, -2415,   893,  1762, -2415, -2415,
   -2415, -2415,  1859,   560,  1863,   105, -2415, -2415, -2415, -2415,
    2050, -2415,  1623,   153, -2415, -2415,   179, -2415, -2415, -2415,
   -2415,  1543, -2415, -2415, -2415,  1939,  1931,  1409, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1705,  1409, -2415,  1625, -2415,
    2026, -2415, -2415, -2415,   995, -2415,   991,   998, -2415,   161,
     188,    -9,   646,   646,   560,  1874,  1162,   137,   833,  1936,
   -2415, -2415, -2415,  2073, -2415,  1886, -2415, -2415, -2415, -2415,
    1778, -2415, -2415, -2415, -2415,  1009,  1955,  1740,  1049, -2415,
    1585, -2415,  1589,   991,   700, -2415,   510, -2415, -2415, -2415,
    6295,   765,   765,   765,   765,   765,   765,   765,   765,  1042,
   -2415,   525,  1740,   530, -2415,  1663,  1663, -2415, -2415,   444,
    1009,   560,  1881,  1642, -2415,  1653,  2087,  1009,   403,   658,
    2096, -2415,  1598,  1187, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1040, -2415, -2415,
   -2415,  1009,   509, -2415, -2415,  1187,  1727,  1856,  1297, -2415,
   -2415, -2415,  1009,   423, -2415, -2415, -2415, -2415,   423, -2415,
   -2415,  1187,  1363,  1187, -2415, -2415, -2415,  1187, -2415, -2415,
   -2415,   607, -2415, -2415, -2415,  1187,  1606,   423,   423, -2415,
   -2415,   423, -2415, -2415, -2415,  1244, -2415, -2415, -2415,  1269,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1503,   -18,
   -2415, -2415,  1818,   -36,  1915,   560,   729, -2415, -2415, -2415,
   -2415, -2415,   127,    99, -2415, -2415, -2415,   390, -2415, -2415,
   -2415, -2415, -2415, -2415,   423, -2415, -2415, -2415, -2415,   423,
     517,   517,   423, -2415, -2415, -2415, -2415, -2415,  1611,   646,
   -2415,   646,  4975, -2415,   639,    19,   179, -2415, -2415, -2415,
    2050,  1009, -2415, -2415, -2415, -2415,  1617,  1295,    10,  1639,
     729,   991, -2415, -2415,  2080, -2415, -2415, -2415, -2415,   998,
   -2415,  1956, -2415,  1187,  1459,  1830, -2415, -2415,   646, -2415,
     646,   833, -2415, -2415, -2415,  1075, -2415, -2415,  1009,  6295,
    1098, -2415, -2415, -2415,  1851, -2415, -2415,  1884, -2415, -2415,
   -2415, -2415,  1589, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,   156, -2415,  1009, -2415, -2415,
   -2415,   543, -2415, -2415, -2415,  8036, -2415,  6295,  6295,  1678,
    1817,  1503, -2415,   646, -2415,   729, -2415,  1836, -2415,   991,
   -2415,  2036,  1711, -2415,   709, -2415,   647, -2415,  1598, -2415,
    1009, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1307,   -61,
   -2415,  1009, -2415, -2415, -2415,   806, -2415,   509,   806, -2415,
   -2415, -2415,    97,  2106,  2568,  1269, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1741,  1951, -2415, -2415, -2415,
    1953, -2415, -2415, -2415, -2415, -2415, -2415,  1861,  1489, -2415,
   -2415, -2415, -2415,  1009, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415,  3642, -2415, -2415, -2415,  1332, -2415,
   -2415, -2415, -2415,  1828, -2415,   560,  1796,   560,  1797, -2415,
   -2415,  6295, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,  1295, -2415,  2059, -2415,  1409, -2415, -2415, -2415,   729,
     957, -2415, -2415,   957,   121,  1009, -2415, -2415,   560, -2415,
   -2415,  1780, -2415,  2116,  1901,  1928,   827, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
     935, -2415, -2415, -2415, -2415, -2415,  1869,  1187,  1741,   560,
    1671, -2415,  2087, -2415,  1559,  2074,  1559,  1678, -2415, -2415,
   -2415, -2415,  1878, -2415, -2415, -2415, -2415,  1333, -2415,  1009,
    1261, -2415, -2415,  1856, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415,   423, -2415, -2415, -2415,   423,     2, -2415,
   -2415,  1187, -2415, -2415, -2415, -2415,  1187, -2415, -2415, -2415,
   -2415, -2415,    -1, -2415, -2415,  2112,  1766, -2415, -2415,     9,
   -2415,  1187, -2415,  2165, -2415, -2415, -2415,  2568, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1009, -2415,
   -2415, -2415, -2415,  1828, -2415,   646, -2415,   646, -2415, -2415,
   -2415,  2127,  2070,   957,   957, -2415,  1725,  1725, -2415,  1848,
    1162,   424, -2415,  1009, -2415, -2415,  6295, -2415,  1187,   674,
    1925,  1926, -2415,  1927, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,  1009, -2415, -2415, -2415, -2415,  1735, -2415,  1009,  1559,
   -2415,  1009, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1302,
    1187,  1187,  1099, -2415, -2415, -2415, -2415, -2415, -2415,  1527,
   -2415, -2415, -2415,  2082,   423,   423, -2415,  1187,  1187,   517,
     517,   423, -2415,   546, -2415, -2415, -2415,  1741,  1741,  6295,
   -2415,   957, -2415,  6295,  6295,  1187,  1162,  1162,  1855, -2415,
   -2415,  1707,  1009, -2415, -2415,  1851, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415,   656, -2415, -2415,  1009, -2415, -2415, -2415,
    1187,  1856,  1856, -2415,  1984,  1187,  1187, -2415,  1948,  1743,
   -2415, -2415,   509,   423, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,   492,  1162,  1187, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,  1206, -2415, -2415, -2415,
   -2415, -2415,  1865,  2088, -2415,  1856, -2415, -2415, -2415,  1856,
    1856,  1975,  1065,  1727,  1990,  1366,  1702,  1187,  1489, -2415,
    1187,  1187,  1009, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,   843, -2415,   -40, -2415,
   -2415, -2415,  1065,  1727, -2415, -2415, -2415, -2415,   492, -2415,
    1840,  1790,    11,  1543, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,   660, -2415,  1187,  1341, -2415,  8379,  8379,  1375,  2092,
    2017, -2415,  1366,   843, -2415, -2415,  1366,   -40, -2415, -2415,
     660, -2415, -2415,  1009, -2415,  1143, -2415, -2415, -2415,    58,
   -2415,   843,  1363, -2415,  1503,  8281, -2415, -2415,   891,  1184,
   -2415, -2415,  1204, -2415, -2415, -2415, -2415,   -47,   -47, -2415,
   -2415, -2415, -2415, -2415,  8379, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415,  1875,   878,    58, -2415, -2415, -2415,  1715,
   -2415,  1543, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1903,
   -2415,  1903, -2415,  2167, -2415,  1543, -2415, -2415,  1911,  1009,
   -2415,  1792,   -35,  1898, -2415, -2415,  8379,   111, -2415, -2415,
    1366, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415,  1162, -2415
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
    1795,    46,     0,     0,     0,  1838,  1795,  1795,  1795,     0,
       0,     0,     0,     0,  1795,     0,     0,  1770,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1796,     0,     0,  1517,   125,  1795,
    1795,  1839,  1795,     0,     0,     0,     0,  1795,  1795,    60,
      82,     0,    54,    98,  1771,     0,  1795,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1832,    39,  1795,     0,     0,     0,  1585,   171,  1510,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1518,
     152,   153,  1797,   156,  1590,  1206,  1205,   116,   120,  1824,
    1795,     0,   100,   151,   178,   179,    38,  1833,    36,     0,
    1597,  1593,  1598,  1596,  1594,  1599,  1595,   160,   161,   163,
     172,   167,  1878,  1879,     0,   165,     0,  1769,     0,     0,
       0,  1795,  1900,    80,    61,  1768,    66,    68,    69,    70,
      71,  1768,     0,  1795,     0,    83,     0,    87,    55,    58,
     154,  1799,  1798,   157,     0,  1824,  1827,  1826,     0,     0,
     117,   121,     0,     0,   262,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1867,   166,     0,  1586,   170,  1899,  1795,
       0,     0,    65,    67,    63,    81,  1768,  1795,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1591,
     155,   158,     0,  1825,   123,   118,   119,   122,   180,     0,
       0,  1666,     0,   274,   270,    24,     0,   265,   267,   268,
     134,   137,     0,   164,     0,     0,  1898,    74,    64,     0,
    1511,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1667,   183,  1776,   271,   272,   273,  1758,
     281,     0,   263,   266,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1777,  1851,  1759,  1780,
       0,   283,   264,   138,   139,  1886,  1887,    72,  1834,  1852,
    1772,  1781,     0,     0,     0,   285,     0,  1813,  1834,  1859,
       0,   244,     0,  1795,  1768,  1800,   246,     0,  1869,  1866,
     232,   184,   231,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   243,   195,   196,   197,   198,   199,   200,
    1764,  1795,  1773,     0,  1496,   269,  1494,   282,     0,    25,
     140,  1814,  1795,  1835,  1800,  1860,  1861,   212,  1868,   247,
    1834,  1795,  1795,  1801,  1795,  1795,   256,  1758,   257,     0,
    1795,  1813,  1765,     0,     0,   275,   276,   279,  1495,   284,
     291,   292,   343,   286,   346,     0,     0,  1795,   214,   213,
     210,   246,   242,     0,     0,     0,     0,   255,  1828,  1828,
       0,   258,     0,  1795,   245,   228,   277,     0,   278,     0,
     499,   287,  1649,     0,   288,   222,   223,   221,   220,     0,
     206,   207,   217,   217,     0,   217,   209,   208,   217,     0,
    1516,  1515,   248,   249,   250,   251,   254,  1829,   259,   260,
     261,   229,     0,   280,     0,     0,   502,   348,     0,     0,
     352,     0,   290,   293,  1652,   218,   203,   219,   204,  1776,
     205,   202,   215,   201,   216,  1795,     0,   238,   237,   238,
     234,   344,     0,     0,   505,   351,     0,   349,     0,   358,
     359,   353,     0,   356,  1795,  1897,     0,   225,  1653,   211,
       0,   252,  1508,     0,   236,   235,   346,   500,     0,     0,
     600,   350,   355,   392,   361,  1772,  1795,     0,     0,  1795,
    1772,  1813,  1795,  1756,   289,     0,   294,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,     0,  1896,     0,
     224,   253,  1509,     0,   241,   345,   346,   503,     0,     0,
      26,  1795,  1760,     0,     0,     0,  1795,  1756,     0,     0,
       0,     0,     0,  1795,   339,  1757,   340,     0,   338,   341,
     295,   296,     0,     0,   501,   346,   506,     0,   664,     0,
     486,   416,  1840,  1840,  1840,  1840,  1840,  1862,   417,   452,
     454,   420,   421,   422,   423,   424,   425,   448,   446,   447,
     449,   450,   455,   453,   426,  1836,   451,     0,   427,   413,
     428,   429,     0,     0,  1843,   431,   432,   430,  1802,   434,
     435,   433,  1795,  1797,   393,   394,   395,   396,   397,   398,
     414,   418,   419,   399,   400,   401,   402,   403,   404,   405,
     406,   407,     0,     0,  1761,     0,   389,     0,   362,   317,
     337,  1888,  1889,  1514,   326,  1512,  1881,  1880,   319,  1811,
    1770,  1784,     0,  1795,   323,   322,  1795,   342,     0,   147,
     148,   227,     0,  1884,  1885,   239,   504,   508,   601,     0,
      27,   708,   497,   498,  1841,   445,   444,   437,   436,   443,
     442,   441,   440,   439,   438,  1863,     0,  1837,   483,   469,
     463,   408,  1579,   495,  1844,  1803,  1804,   484,     0,     0,
     410,   412,  1680,  1680,   391,     0,  1820,  1608,     0,     0,
    1604,  1609,  1607,  1605,  1610,  1606,   390,   363,  1600,  1602,
       0,   307,  1513,  1812,   328,     0,   310,  1785,  1845,   336,
       0,     0,   226,   240,   507,   603,   666,     0,     0,   485,
    1784,   465,     0,  1855,     0,  1577,  1578,     0,   415,   487,
     489,   491,     0,   409,  1768,   456,   457,  1601,  1821,     0,
       0,   372,   368,   371,   370,   369,   384,   380,   382,   383,
     385,   381,   386,   387,   388,   365,   376,   377,   378,   373,
     374,   375,   367,   364,     0,   318,   309,   308,   306,   327,
    1770,  1846,   315,   324,   321,   325,   320,     0,   509,     0,
     607,   602,   604,     0,   669,   667,   685,     0,   762,   837,
     846,   852,   859,   892,   896,   910,   905,   911,   912,   920,
     967,   976,   979,  1005,  1016,  1019,  1022,  1014,  1028,  1035,
    1057,  1061,  1097,  1099,  1103,     0,  1109,  1123,  1147,  1165,
    1166,  1169,  1170,  1175,  1183,  1184,  1197,  1231,  1249,     0,
    1282,  1294,  1302,  1304,   690,  1308,  1311,  1317,  1368,   710,
     711,   712,   713,   714,   715,   716,   717,   719,   718,   720,
     721,   722,   723,   724,   725,   726,   727,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   709,
       0,     0,   463,   464,  1856,   467,  1628,  1623,  1629,     0,
       0,  1635,     0,  1483,  1485,     0,     0,     0,  1626,     0,
    1487,  1627,  1630,  1631,     0,     0,     0,     0,  1625,  1635,
    1624,  1467,  1465,  1472,  1475,  1477,  1480,  1544,  1482,  1541,
    1575,  1542,  1543,  1632,     0,     0,     0,  1576,   496,   493,
     490,     0,   411,  1681,   366,   379,  1603,     0,     0,   329,
     330,   331,   332,     0,   311,  1783,   317,     0,  1497,   510,
       0,   608,     0,   605,   674,   674,     0,     0,  1683,  1684,
    1685,  1686,  1687,  1688,  1689,  1690,  1691,  1692,  1693,  1694,
    1695,  1696,  1732,  1733,  1734,  1735,  1736,  1737,  1738,  1739,
    1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,  1749,
    1750,  1751,  1697,  1698,  1699,  1700,  1701,  1702,  1703,  1704,
    1705,  1706,  1707,  1708,  1709,  1710,  1711,  1712,  1713,  1714,
    1715,  1716,  1717,  1718,  1719,  1720,  1721,  1722,  1723,  1724,
    1725,  1726,  1727,  1682,  1728,  1729,  1730,  1731,   761,     0,
       0,     0,     0,   862,     0,     0,     0,     0,     0,     0,
       0,  1428,  1007,     0,     0,  1857,   882,   881,     0,  1027,
    1428,     0,     0,     0,     0,     0,     0,   760,     0,  1135,
       0,     0,     0,     0,     0,     0,     0,     0,  1278,  1281,
    1269,  1279,  1280,  1271,     0,     0,  1303,  1301,     0,   708,
       0,     0,     0,     0,   470,   466,   471,  1822,   474,     0,
       0,     0,  1621,  1545,  1546,  1547,     0,     0,     0,     0,
       0,     0,     0,  1479,     0,  1478,     0,  1622,  1468,  1469,
    1587,     0,     0,     0,     0,     0,     0,     0,     0,  1611,
       0,     0,     0,     0,   488,     0,   492,   335,   334,  1762,
    1770,   316,     0,   610,   611,   606,  1767,   674,   671,   677,
       0,   674,   686,   661,   784,   835,   787,   783,  1820,     0,
       0,  1535,   844,  1529,   842,  1524,  1526,  1527,  1528,   847,
       0,  1654,  1507,   853,   854,     0,  1503,  1505,  1504,   865,
     863,   864,   890,     0,  1557,   893,   894,  1556,   897,   900,
    1820,   908,     0,  1489,  1668,  1521,  1580,  1584,  1522,     0,
     918,  1834,  1604,   965,  1393,   929,   933,  1524,     0,  1526,
     974,     0,   866,   977,   986,   985,  1003,     0,   982,   984,
    1427,     0,  1009,  1013,  1011,  1014,  1012,  1006,  1017,  1018,
    1519,  1020,  1021,  1858,  1023,  1501,  1015,  1853,  1426,  1036,
    1038,  1058,  1059,  1062,     0,  1064,  1065,  1066,  1098,  1235,
    1572,  1573,     0,  1100,     0,  1107,     0,  1116,  1113,  1115,
    1114,  1110,  1117,  1137,  1507,  1124,  1135,  1126,     0,  1133,
       0,  1558,  1504,  1560,     0,  1163,  1660,  1167,  1371,  1492,
    1173,  1834,  1181,  1371,     0,  1195,  1188,  1493,     0,  1500,
    1198,  1199,  1200,  1201,  1202,  1203,  1224,  1204,  1227,     0,
    1498,     0,     0,  1571,  1584,  1232,  1267,  1254,  1272,  1766,
    1292,     0,  1285,  1287,     0,  1299,     0,  1305,  1306,   696,
     702,   691,   692,   693,   695,     0,  1309,     0,  1312,  1314,
    1334,  1320,  1381,  1371,   472,   474,  1823,     0,   478,   473,
    1467,  1465,     0,  1467,     0,  1637,  1467,  1484,  1486,  1467,
       0,     0,     0,  1467,  1538,  1539,  1540,     0,  1488,  1481,
    1467,     0,  1466,  1588,     0,  1471,  1470,  1474,  1473,  1476,
       0,     0,  1467,     0,  1795,  1763,     0,   313,     0,  1795,
    1842,   672,  1795,     0,   683,   675,   676,   687,   836,   763,
    1763,   797,   788,     0,     0,     0,     0,  1530,  1531,  1532,
     845,   838,     0,     0,  1525,  1656,  1655,   850,   855,   857,
       0,   891,   860,  1559,   866,   895,   900,  1890,  1891,   898,
       0,   901,     0,   909,   906,  1875,  1874,  1490,     0,  1670,
    1491,  1582,  1583,   915,   916,   919,   913,  1420,   966,   921,
     705,     0,   927,  1395,     0,   944,     0,   938,  1393,  1393,
    1393,  1393,   975,   968,     0,     0,   867,   978,  1004,   980,
    1428,  1428,   981,   988,   989,   705,  1452,  1453,  1454,  1448,
    1857,  1440,  1460,  1463,  1462,  1464,  1456,  1447,  1446,  1451,
    1450,  1449,  1455,  1435,  1439,  1457,  1459,  1461,  1437,  1438,
    1434,  1436,  1429,  1430,  1441,  1442,  1443,  1444,  1445,  1433,
    1010,  1008,  1520,  1025,  1854,   705,  1040,     0,  1060,     0,
    1087,  1071,  1063,  1068,  1069,  1070,  1239,     0,  1574,     0,
       0,  1108,  1104,     0,  1117,  1866,     0,  1125,  1131,  1132,
     705,  1128,  1428,     0,     0,  1136,     0,  1164,  1148,  1661,
    1662,  1834,     0,  1168,  1174,  1171,  1150,  1182,  1176,  1178,
    1190,  1196,  1185,     0,  1190,     0,  1552,  1553,  1225,  1228,
       0,     0,  1499,  1208,     0,  1207,     0,     0,  1582,  1268,
    1250,  1256,  1795,  1257,  1252,     0,  1270,     0,     0,  1293,
    1283,     0,  1286,     0,  1300,  1295,     0,  1307,   703,   701,
     694,     0,  1315,  1316,  1313,  1335,  1318,  1766,     0,  1382,
    1369,  1373,   478,   468,  1766,   461,   476,   477,  1800,     0,
    1632,     0,  1632,  1636,     0,  1632,  1632,  1632,     0,  1615,
       0,  1632,  1589,     0,  1632,  1632,  1865,     0,   333,  1822,
     312,   514,  1795,  1795,  1756,  1808,   539,   513,   517,   518,
       0,  1778,   626,  1795,   615,  1862,   616,  1871,  1870,     0,
    1795,     0,   629,   624,   619,   625,  1815,   620,     0,   623,
     631,   628,   621,   627,     0,   632,   622,     0,   643,   637,
     641,   640,   638,   642,   612,   644,   639,     0,  1815,     0,
    1795,   684,     0,     0,   662,  1563,   793,  1561,  1562,   798,
     799,  1815,  1815,   791,   792,  1815,   779,  1384,  1873,  1872,
     776,   768,   770,   771,     0,  1384,     0,     0,     0,   785,
     774,     0,   782,   765,   781,   766,  1549,  1548,     0,  1534,
       0,  1820,  1398,   843,  1584,  1522,     0,  1658,   850,     0,
     848,     0,     0,  1506,   877,   899,   904,     0,     0,  1523,
    1398,  1795,  1669,  1581,   917,   705,   914,  1422,  1394,   706,
     931,  1762,   705,  1392,   937,   936,   935,   934,   945,  1393,
    1795,   948,     0,   951,   952,     0,  1795,   955,   956,   957,
     958,     0,  1795,   960,  1393,   946,     0,   799,   924,   925,
     922,   923,     0,  1398,     0,   873,   983,   998,  1000,   999,
     993,   995,  1001,  1428,   990,   987,  1428,   991,  1458,  1431,
    1432,  1822,  1024,  1502,   705,  1032,  1033,  1857,  1048,  1049,
    1051,  1053,  1054,  1050,  1052,  1043,  1857,  1039,     0,  1088,
       0,  1090,  1089,  1091,  1073,  1083,     0,     0,  1067,  1241,
       0,  1786,     0,  1101,  1398,     0,     0,     0,  1119,  1129,
    1142,  1138,  1143,  1139,  1144,     0,  1134,  1378,  1377,  1141,
    1150,  1372,  1568,  1569,  1570,     0,     0,  1420,     0,   705,
       0,  1189,     0,     0,     0,  1226,     0,  1230,  1229,  1222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1210,
    1211,  1663,  1420,     0,  1273,  1849,  1849,  1288,  1289,  1290,
       0,  1398,     0,     0,   704,     0,  1650,     0,  1290,  1178,
    1752,   462,     0,  1795,  1646,  1619,  1648,  1620,  1644,  1616,
    1617,  1618,  1642,  1639,  1640,  1614,  1633,     0,  1612,  1613,
     494,     0,     0,  1915,  1916,  1795,  1756,     0,   511,   515,
    1779,   519,     0,     0,   613,   614,   617,   618,     0,   646,
    1816,  1795,  1855,  1795,   647,   645,   659,  1795,   678,   679,
     682,     0,   673,   688,   690,  1795,   801,     0,     0,   789,
     790,     0,  1386,  1387,   780,  1388,   705,   767,   769,  1384,
     777,   772,   773,   786,   775,  1551,  1533,  1550,  1668,     0,
     705,   839,  1400,  1582,  1583,  1398,     0,  1657,   849,   851,
     858,   856,   885,  1793,   903,   902,   907,     0,  1421,   705,
    1419,   708,  1396,   926,     0,   949,   950,   953,   954,     0,
    1424,  1424,     0,   947,   928,   940,   941,   939,   942,     0,
     969,     0,   868,   869,   677,     0,  1428,  1428,   997,   705,
     994,     0,  1031,   705,  1034,  1029,     0,     0,  1055,     0,
       0,     0,  1084,  1086,     0,  1079,  1093,  1080,  1081,  1072,
    1075,  1093,  1233,  1795,  1800,     0,  1787,  1240,  1102,  1105,
       0,  1119,  1118,  1122,  1111,     0,  1130,  1127,     0,     0,
    1152,  1151,   705,  1172,  1408,  1177,  1179,     0,  1191,  1428,
    1428,  1186,  1192,  1209,  1221,  1223,  1213,  1214,  1215,  1219,
    1216,  1220,  1217,  1218,  1212,  1664,  1266,     0,  1263,  1264,
    1258,     0,  1251,  1895,  1894,     0,  1850,  1276,  1276,  1403,
       0,  1668,  1296,     0,   697,     0,  1651,  1321,  1322,     0,
    1325,  1328,  1332,  1326,  1420,  1753,     0,   482,   479,   480,
       0,  1634,   314,   516,  1809,  1810,  1592,   527,   524,   357,
     540,   520,   521,   636,   635,   652,   658,     0,   655,   680,
     681,   690,   708,     0,     0,  1384,   794,   796,   795,  1390,
    1391,  1383,   705,  1385,   778,  1398,  1523,  1399,   705,  1397,
    1581,   840,  1659,  1554,  1555,   705,   705,   888,  1820,  1794,
     884,   883,   879,     0,  1672,  1673,  1674,  1675,  1676,  1677,
    1678,  1679,  1671,  1423,     0,   962,   961,   964,     0,  1566,
    1567,   963,   959,     0,   932,  1398,  1489,  1398,  1489,   870,
     871,     0,   875,   874,   876,   996,  1002,   992,  1026,  1030,
    1041,  1044,  1045,  1774,  1037,  1857,  1042,  1093,  1093,     0,
    1078,  1076,  1077,  1082,  1243,     0,  1237,  1788,  1398,  1112,
    1121,     0,  1145,     0,     0,  1159,     0,  1412,   705,  1407,
    1180,   705,   705,  1193,  1265,  1255,  1259,  1260,  1261,  1262,
    1253,  1274,  1277,  1275,   705,  1284,  1405,  1795,  1398,  1398,
     699,  1310,  1650,  1324,  1784,  1330,  1784,  1403,   705,   705,
    1370,  1380,  1415,  1416,  1379,  1376,  1375,  1805,   481,   475,
     523,  1882,  1883,   526,   359,   541,   522,   650,   648,   651,
     649,   653,   654,     0,   630,   656,   657,     0,   708,   800,
     805,  1795,   807,   808,   809,   834,  1795,   810,   811,   812,
     813,   814,     0,   815,   816,   818,     0,   819,   820,     0,
     821,  1795,   806,  1754,   824,   833,   827,   802,   803,   826,
     764,  1389,   841,  1401,   886,   887,   705,   861,     0,   878,
    1892,  1893,  1425,   943,   971,     0,   970,     0,   872,  1046,
    1775,     0,     0,  1074,  1085,  1093,  1791,  1791,  1094,     0,
       0,  1246,  1242,  1236,  1106,  1120,     0,  1153,  1795,  1420,
       0,     0,  1154,     0,  1158,  1413,  1187,  1194,  1404,   705,
    1402,     0,  1298,  1297,  1336,   698,     0,  1323,     0,  1784,
    1327,     0,  1319,  1417,  1418,  1414,  1806,  1807,  1374,     0,
    1795,  1795,     0,   528,   529,   530,   531,   532,   533,     0,
     543,   633,   634,     0,     0,     0,   825,  1795,  1795,  1424,
    1424,     0,  1755,     0,   804,   889,   880,  1398,  1398,     0,
    1056,  1092,  1792,     0,     0,  1795,  1244,     0,     0,  1234,
    1238,     0,     0,  1149,  1162,  1410,  1411,  1161,  1157,  1155,
    1156,  1406,  1291,  1344,   700,  1329,     0,  1333,  1902,  1901,
    1795,     0,     0,  1904,     0,  1795,  1795,   525,  1842,     0,
     829,   828,     0,     0,   831,   830,   823,   832,  1564,  1565,
     973,   972,  1047,  1096,  1095,     0,  1247,  1795,  1428,  1160,
    1409,  1367,  1366,  1345,  1337,  1338,  1754,  1339,  1340,  1341,
    1342,  1365,     0,     0,  1331,     0,   538,   534,  1903,     0,
       0,  1789,  1817,  1756,     0,     0,     0,  1795,  1820,   542,
    1795,  1795,     0,   548,   550,   559,   551,   553,   556,   544,
     545,   546,   555,   557,   560,   547,     0,   552,     0,   554,
     558,   549,  1817,  1756,   689,   817,   822,  1245,     0,  1146,
       0,  1847,     0,  1822,   535,   537,   536,  1790,   598,  1818,
    1819,  1797,   584,  1795,   463,  1428,     0,     0,     0,     0,
       0,   592,     0,   582,   588,   591,     0,   585,   593,   596,
    1797,   587,  1248,     0,  1848,     0,  1363,  1362,  1361,     0,
     583,     0,  1855,   580,  1668,   576,  1536,  1906,     0,     0,
    1908,  1910,     0,  1914,  1912,   561,   565,   569,   569,   563,
     567,   562,   568,   599,     0,   590,   589,   595,   594,   586,
    1364,  1877,  1876,  1830,  1357,  1351,  1352,  1354,   574,   467,
     597,  1822,   575,  1537,  1905,  1909,  1907,  1913,  1911,   572,
     564,   572,   566,     0,  1831,  1822,  1360,  1355,  1358,     0,
    1353,   459,     0,     0,   571,   570,     0,     0,  1359,  1356,
       0,   458,   579,   577,   578,   573,   581,  1350,  1347,  1349,
    1348,  1343,  1346,   460
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2415, -2415, -2415, -2415, -2415,  2216, -2415, -2415, -2415,   992,
   -2415,  2178, -2415,  2136, -2415, -2415,   245, -2415, -2415, -2415,
    1161, -2415, -2415,  1323,  2203, -2415, -2415,  2103, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  2030,
     838, -2415, -2415, -2415, -2415, -2415,  2084, -2415, -2415, -2415,
   -2415,  2027, -2415, -2415, -2415, -2415, -2415, -2415,  2160, -2415,
   -2415, -2415, -2415,  2016, -2415, -2415, -2415, -2415,  2000, -2415,
   -2415,   815, -2415, -2415, -2415, -2415, -2415,  2089, -2415, -2415,
   -2415, -2415,  2063, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1006, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,  1724, -2415,  1832, -2415,
   -2415, -2415,  1781, -2415, -2415, -2415, -2415,   337, -2415, -2415,
    1959, -2415, -2415, -2415, -2415, -2415,  1821, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415,  1226, -2415, -2415, -2415,  1468, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,  -317, -2415, -2415,  1764, -2415,  -756,  -831, -2415, -2415,
   -2415,   432, -2415, -2415, -2415, -2415,     3, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -1423,   804,  1505,   555,   592, -1422,
   -2415, -2415, -2415,  -952, -2415,  -458, -2415, -2415,   852, -2415,
     358,   587, -2415,    64, -1420, -2415, -1417, -2415, -1416, -2415,
   -2415,  1464, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  -428,  -457, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -1266, -2415,
    -392, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1416, -2415,
   -2415, -2415,    54,    55, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1234,   217, -2415,   181, -2415,
   -2415, -2415, -2415, -1832, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -1424, -2415, -2415,  -701, -2415,  1499, -2415, -2415, -2415,
   -2415, -2415, -2415,  1052,   515,   518, -2415,   437, -2415, -2415,
    -125,  -107, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,   491, -2415, -2415, -2415,  1048, -2415, -2415, -2415, -2415,
   -2415,   808, -2415, -2415,   198, -2415, -2415, -1272, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,   807, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,   783, -2415, -2415, -2415, -2415,
   -2415,    23, -1787, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,   767, -2415, -2415,   769, -2415,
   -2415,   438,   202, -2415, -2415, -2415, -2415, -2415,  1005, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,    12,   734, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415,   722, -2415, -2415,   193, -2415,   419,
   -2415, -2415, -1910, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,   980,   723,   189, -2415,
   -2415, -2415, -2415, -2415, -2415, -1860,   979, -2415, -2415, -2415,
     185, -2415, -2415, -2415,   401, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,   350, -2415, -2415, -2415, -2415, -2415, -2415,   701,   174,
   -2415, -2415, -2415, -2415, -2415,  -157, -2415, -2415, -2415, -2415,
     378, -2415, -2415, -2415,   963, -2415,   964, -2415, -2415,  1189,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,   152,
   -2415, -2415, -2415, -2415, -2415,   951,   365, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,    -4,
   -2415,   368, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415,  -366, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415,   -80, -2415,   670, -2415, -2415, -1680,
   -2415, -2415, -2415, -2415,  -672, -2415, -2415, -1673, -2415, -2415,
      -5, -2415, -2415, -2415, -2415,  -106, -2184, -2415, -2415,    -7,
   -1867, -2415, -2415, -1991, -1560, -1081, -1467, -2415, -2415,   782,
   -1815,   175,   176,   177,   178,   183,   109,  -759,   233,   387,
   -2415,   616,  -469, -1370, -1079,  -180,   996, -1572,  -384,  -979,
   -2415, -1317, -2415, -1049, -1525,   871,  -528,   -88,  2053, -2415,
    1659,  -554,    24,  2202, -1077, -1062,  -448,  -634, -2415, -1107,
   -2414, -2415,   421, -1305, -1040, -1105,  1102, -1101, -2415, -2415,
     637, -1126, -2415,  -870,   930,  -636, -2415, -2415,  -103, -1193,
    -757,  -111,  2090, -1927,  2117,  -673,  1576,  -531,  -399, -2415,
   -2415, -2415,   -31,  1401, -2415, -2415,   287, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2003, -2415,
   -2415,  1608, -2415, -2415,  -214,  -594,  1946, -2415, -1188, -2415,
   -1314,  -277,  -638,   742, -2415,  1857, -2415, -1452, -2415,  -783,
   -2415, -2415,   -68, -2415,    -8,  -659,  -360, -2415, -2415, -2415,
   -2415,  -249,  -308,  -258, -1202, -1561,  2152,  1922, -2415, -2415,
    -336, -2415, -2415,   931, -2415, -2415, -2415,   425, -2415,   269,
   -1969, -1485, -2415, -2415, -2415,  -150,   480, -1414, -1509, -2415,
   -2415,  -563, -2415, -2415,  1673, -2415,  1826, -2415, -2415, -2415,
     797, -2415, -2313,  -262, -2415, -2415, -2415, -2415, -2415, -2415
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
    2605,  2741,   674,   793,   962,  1168,   791,  1405,  1408,  1409,
    1678,  1675,  2198,  2199,   675,   676,   677,   678,   679,  1009,
     799,   800,  1204,   680,   681,   496,   586,   524,   615,   550,
     717,   784,   848,  1212,  1449,  1707,  1708,  2001,  2211,  1709,
    2207,  2360,  2483,  2484,  2485,  2486,  2487,  2488,  1998,  2210,
    2490,  2548,  2609,  2610,  2685,  2720,  2734,  2611,  2612,  2712,
    2743,  2613,  2614,  2615,  2616,  2617,  2618,  2653,  2654,  2657,
    2658,  2619,  2620,  2621,   590,   785,   851,   852,   853,  1214,
    1450,  1744,  2371,  2372,  2373,  2377,  1745,  1746,   720,  1457,
    2024,   721,   856,  1035,  1034,  1217,  1218,  1219,  1454,  1752,
    1037,  1754,  2221,  1159,  1391,  1392,  2340,  2465,  1393,  1394,
    1963,  1818,  1819,  2071,  1395,   788,   909,   910,  1109,  1225,
    1226,  1783,  1461,  1517,  1763,  1764,  1760,  2026,  2225,  2407,
    2408,  2409,  1459,   911,  1110,  1232,  1473,  1471,   912,  1111,
    1239,  1800,   913,  1112,  1243,  1244,  1802,   914,  1113,  1252,
    1253,  1527,  1855,  2092,  2093,  2094,  2062,  1128,  2252,  2247,
    2417,  1482,   915,  1114,  1255,   916,  1115,  1258,  1489,   917,
    1116,  1261,  1494,   918,   919,   920,  1117,  1270,  1503,  1506,
     921,  1118,  1273,  1274,  1511,  1275,  1515,  1847,  2087,  2274,
    1829,  1844,  1845,  1509,   922,  1119,  1280,  1523,   923,  1120,
    1283,   924,  1121,  1286,  1287,  1288,  1532,  1533,  1534,  1865,
    1535,  1860,  1861,  2098,  1529,   925,  1122,  1297,  1129,   926,
    1123,  1298,   927,  1124,  1301,   928,  1125,  1304,  1872,   929,
     930,  1130,  1876,  2105,   931,  1131,  1309,  1576,  1885,  2108,
    2291,  2292,  2293,  2294,   932,  1132,  1311,   933,  1133,  1313,
    1314,  1582,  1583,  1897,  1584,  1585,  2119,  2120,  1894,  1895,
    1896,  2113,  2300,  2438,   934,  1134,   935,  1135,  1323,   936,
    1136,  1325,  1592,   937,  1138,  1331,  1332,  1596,  2134,   938,
    1139,  1335,  1600,  2137,  1601,  1336,  1337,  1338,  1911,  1913,
    1914,   939,  1140,  1345,  1926,  2315,  2449,  2523,  1608,   940,
     941,  1141,  1347,   942,   943,  1142,  1350,  1615,   944,  1143,
    1352,  1927,  1618,   945,   946,  1144,  1355,  1624,  1930,  2151,
    2152,  1622,   947,  1145,  1360,   159,  1636,  1361,  1362,  1949,
    1950,  1363,  1364,  1365,  1366,  1367,  1368,   948,  1146,  1318,
    2304,  1586,  2443,  1899,  2122,  2441,  2519,   949,  1147,  1376,
    1952,  1644,  2167,  2168,  2169,  1640,   950,  1378,  1646,  2331,
    1153,   951,  1154,  1380,  1381,  1382,  2179,  1650,   952,  1155,
    1385,  1655,   953,  1157,   954,  1158,  1387,   955,  1160,  1396,
     956,  1161,  1398,  1664,   957,  1162,  1400,  1668,  2187,  2188,
    1968,  2190,  2345,  2470,  2347,  1666,  2466,  2533,  2574,  2575,
    2576,  2751,  2577,  2705,  2706,  2729,  2578,  2668,  2579,  2580,
    2581,   958,  1163,  1402,  1613,  1969,  1919,  2350,  1670,  2034,
    2035,  2036,  2231,  2232,  1512,  1513,  1823,  2051,  2052,  2239,
    2335,  2336,  2460,  2143,  2524,  2144,  2319,  2351,  2352,  2353,
    1816,  1817,  2070,  2267,  1307,  1308,  1290,  1291,  1562,  1563,
    1564,  1565,  1566,  1567,  1568,   991,  1191,  1411,   993,   994,
     995,   996,  1233,  1262,  1497,  1348,  1356,   395,   396,  1029,
    1369,  1370,  1573,  1339,  1246,  1247,   541,   481,   301,   694,
     695,   482,    98,   153,  1299,  1264,  1234,  1474,  2675,  1423,
     998,  1788,  2046,  2121,  2242,  1256,  1340,  1756,  2557,  2268,
    1921,  1757,  1319,  1373,  1236,  1000,  1265,  1266,   742,   795,
     796,  1758,   271,  2655,   179,  1237,   768,   769,  1238,  1003,
    1004,  1005,  1199,  1172,  1431,  1427,  1420,  1412,  1414,   501,
    2189,   537,  1477,  1798,  2057,  1611,  2171,   282,  1500,  1812,
    2262,   805,  1108,  2196,  2503,   606,   339,   687,  1463,   423,
    1220,   202,   115,   393,  2431,   337,  2002,   352,  1027,   778,
    2127,  2638,  2513,  2253,    96,   214,   414,   747,  2478,  1997,
     774,   402,  2011,  2641,   809,  1407,   218,   488,  2725,   168,
     390,   738,   102,   726,   683,   842,  2665,  2177,   350,  1575,
     965,  1305,   407,   736,  1205,  1344,   391,  1765,  1785,  1498,
    2703,   184,   698,  2363,   715,   347,   598,  1491,  2422,  2175,
     538,   203,  2540,  2546,  2688,  2689,  2690,  2691,  2692,  1711
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     139,   215,   139,   692,   749,   160,   415,   960,   139,   427,
    1166,   428,   581,  1278,   767,   138,   741,   141,  1031,  1372,
     787,  1446,   404,   147,  1908,  1900,  1465,  1738,  1740,   849,
    1741,   245,   139,  1742,  1743,   992,  1748,  1263,  1007,  1808,
    1289,   427,  1912,  2216,   437,  2235,   699,   180,   103,   104,
     105,   464,  1632,  1625,  1310,  1868,   111,  2083,  1492,   268,
    2145,  1300,   776,  1245,  1862,  1648,   463,  2704,  1371,  1300,
    2208,   279,   708,   211,  1501,  -665,   801,    99,   259,  1430,
     264,   246,  1017,  1300,   107,  2172,   345,   411,   291,   321,
    2271,   134,   135,  1441,   136,  2040,   849,  -663,  1354,   143,
     144,   854,  1792,  1530, -1573,  2248,  1645,  2282,   161,  1871,
    2385,  1867,   535, -1574,  2080,   529,  1260,  1188, -1822,   114,
     215, -1853,   832,   832,  1188,   169,   801,   220,  1588,  -660,
    2719,  1460,  2493,  2499, -1835,  1786,  2170,  2066,  1991,   392,
     297,  2666,  2742,  1598,   465,  1824,   448,  1784,    42,   752,
    1485,  1875,   219,  1312,  1216,  1853,  1216,  1889, -1579,  1717,
    1359,  1718,  1216,    94,  1216, -1600, -1762, -1577, -1762,  2545,
     745,   127,   453,   832,  1857,  1224,  1909,   782,  2338,  1388,
    2090,  1638,   836,   251,   327,   221,   222, -1866,   739,  1188,
    1260,  2075,  2222, -1766,  1245,   258,   703,  1827,  1524,   724,
    1857,   283,  1024, -1866,   129,   182,  1890, -1822,   712,   412,
    2125,  2303,  1448,    23,  -665,  1676,   535,  2206,  -665,   419,
    1460,   722, -1866,  1904,   807,   360,  1184,   724,  1475,   585,
   -1866,  2129,  2674,  2676,  1633,   704,  -663,  1572,  1917,   724,
    -663,   295,   274,   275,   405,  1452,   724,  1202,  1572,   299,
   -1541,  1242,   515,  1195, -1795, -1762,   418, -1762,    21,    22,
      15,  2713,  1196,  1602,  1320,  2526,     3,  1918,  -660,   614,
     128,   725,  -660,  -512,  1888,  -665,  1320,    46,   204,   723,
    2723,  1603,  2747,    94,   212,    94,  1961,   713,  2182,   714,
    1630,  2656,   516,  2245,   183,   406,   311,  -663,   716,   727,
      24,  -512,  -512,  1016,  1677,  1300,   314,  2126,   130,  1572,
    2101,   729,   603,  1453,   746,  1242,  1540,   284,   731,   154,
    1359,  1579,  2746,   757,  1787,   997,  1891,  2354,  2249,  -660,
    2076,  1188,  1578,   413,  2131,  2686,  1173,  2748,  1206,  1631,
     139,  2570,   139,   139,  1495,  2749,   493,  2439,     5,   139,
    2324,   223,  1240,  1966, -1762,   410,  1965,   485,   486,  2234,
    1972,   280, -1541,   283,   491,   243,   139,   760,   466,   507,
     507, -1866,   507,  1260,   137,   507,   514,   761,  1525,  2283,
     753,   485,  2241,   424,   281,  1825,   -35,  2433,  2434,  2378,
    1892,  2068,  2106,  1263,   436,  1002,  1862,   757,  2072,  1862,
   -1800,  2109,  1406,   443,   444,   413,   445,   446,  1657,  2250,
    1176,  1177,   452,   139,   834,  -512,  1476,  1182,  -665,  1419,
    1419,  1419,   794,   467,  2254,   449,  2055,  1762,   542,   469,
    2750,  1006,  1432,  1434, -1762,  2667,  2489,   139,   139,  1440,
    -663,   760,   260, -1762,  -512,   492,  1263,  1189,  2364,  1289,
    2102,   761,   542,   582,  1189,   129,  1574,  1599,  1389,   762,
    1316, -1853,   137,  1207,  1208, -1766,   243, -1766,   719,  2039,
    1188,  2099,  -660, -1766,   137, -1766,  1235,  2081,   139,   284,
     837,  1188,   709,   689,  1277,  1281,  -670,  2405,  1188,   450,
     700,   137,  -668,   582,  1306,   536,  2500,   139,  1188,  1190,
   -1835,  1324,  1326,   137,  1018,  2148, -1645,   540,  2554,  2555,
    1502,  1390,   775,  1903,  1263,   997,   997,   997,   292,  1189,
    1383,  1235,  2284, -1762,  1873,  2511,   577,  1013,  1300,   763,
     705,  1389,  2063,   762,  -512,   265,   740,   997,   346,    97,
     794,  2095,   243, -1866,   322,  2410,   593,   855,   595,  1006,
     743,   600,   602,  1389,   604,  1916, -1795,  1826,  1260,   130,
     149,  1634,  2412,  -670,  2251,   368,  1260,   137,  1572,  -668,
     261, -1647,  1447,  1175,   394,   764,  2559,  1263,   710, -1665,
     757,  1982,  2527,   682,  1390,  1002,  1002,  1002,   691,  2049,
    2322,  2114,  1531,  2246,  1467,   702,  1580,  1635,   137,   536,
     609,  2053,  2424,   763,  2426,   480,  1390,  1002, -1766,  1516,
   -1766,  1858,  2233,  1555,  2586,  2587, -1766,  1502, -1766,   137,
     394,  1893,  1859,  2440,   760,   765,  2237,  2517,  2153,  1862,
     243,   255,   707,  1193,   761,  2444,  2083,  1858,  1194,  2219,
    1983,  1496,   997,   430,  1260,  2263,   187, -1541,  1859,   764,
    1148,   696,  1260,   188,   748, -1541, -1541,  1569,  2634,   835,
   -1541,  1189,  2635,  2636,   840,  2462,  2463,  -512,  1702,  1581,
    1276,  2710,  2255,  2256,  2257,  2287, -1800,   845,   845,  2289,
     154,   963,   211,   684,  1480,  1540,  1445,  2004,  1589,  1023,
     216,  2659,   505,   137,  1008,   780,  1703,  1704,   781,   765,
     997,   997,   997,  2709,   512,  2627,  1358,  1386,   843,   997,
     997,   997,  1002,  1683,   755,   154,   762,  1263,  2317,  2275,
     351,  2277,   997,   997,   997,   997,   997,   997,   997,   997,
    2659,  1259,   997,  1271,  1317, -1866,  2258,  2059,   755,  1810,
    1343,  1955,  1149,  2518,  1813,   187,   416,  1383, -1768,  1242,
    1542,  1543,   188,  2061,   517,   756,  1346,  1126,  1351,  1717,
    2308,  1718,   697,  1377, -1780,   757,  1254,  2045,  2662,    16,
    1002,  1002,  1002,   757,   154,  2173, -1866,  1399,  2095,  1002,
    1002,  1002,  1426,  1150,  2571,    18,   763,  1426,   850, -1866,
    1544,  1545,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,
    1189,  1426,  1002,  2206,  2142,     4,  2298,  2018,  2411,   760,
    2432,  1189,  1151,  2339,  2413,   -96,  2165,   760,  1189,   761,
    2166,  2414,  2415,  2572,  1359,  2128,  2005,   761,  1189,  1789,
    1126,  1469,   764,   305,  2560,  2561,   583,   187,  1793,    94,
    1300,  1572,  1455,   755,   188,   351,  1848,  1849,  1850,  1851,
    1165,   757, -1641,   685,  1343,   850,  1809,   137,   189,   757,
    2573,  2259,  2260, -1643,   154,   431,  2261,  2348,  2516,  1956,
   -1638,  1984,    27,  1193,  1486,   243,   137,  1821,  1194,  2356,
    1695,  1813,   765,   217,  2343,  1504,  2019,  2203,  1284,   518,
    1852,  1854,  1698,   212,  2455,   760, -1780,  2456,  2457,  1285,
       5,   762,  2213,   760,   154,   761,  1815,  2214,  1152,   762,
    2458,   243,   137,   761,   139,   139,  1211, -1866,   757,  1359,
    1432, -1866,  1432,   170,  2473,  2474,  2226,  2227,  1569,  1705,
    2228,   190,   137,  1127,  1987,  1507,   328,  1343,  1755,  1923,
     735,  1815,   757,  2174,   137,  2566, -1866,  1761,     5,  2280,
     758,   759,   243,  1249,  2269,  2269,   137,   189,   -96,  1905,
     137,   584,   760,  1353,   226,  2436,  2318,   171,  1995,  1996,
    2355,   763,   761,  2265,  2050,  1658,   306,   172,  2266,   763,
    2547,  2272,  1555,  1403,    28,  1456,   760,   762,   191,   519,
    2085,  2086,  2505,   192,  2437,   762,   761,  1025, -1762,   724,
    1939,   137,  2349,  1556,  1889,  1557,  1127,  2115,  2629,  1248,
    2276,  1954,  2278,  1267,  1958,  1616,  2286,   764,   137,   137,
    1267,  1302,  1962,    43,  1990,   764,   137,  1762,  1267,   997,
     190,  1321,   154,   253,  1659,  2531,  1342,  2054,  1349,  2623,
    1349,  1357,  1374,  1321,  2450,   254,  2418,   757,  1923,   189,
    1327,  1263,  1452,  1890,   762,   137,  2116,   763, -1782,   173,
    1349,   137,  1706,   227,  2451,   763,  1572,   765,  2321,   137,
    2297,   733,  2669,   757,   155,   765,   156,  2367,   762,  2714,
    1941,  2583,    33,  1641,    43,  2673,   187,   191,  1942,  1934,
    2452,   760,   192,   188,   253,  2357, -1866,   228,   255,  1002,
    2206,   761,  2588,   764,  1263,  1328,  1250,   325,  1251,  1490,
    1994,   764,  2374,  1329,    94,  2453,   329,   760,   997,  1814,
    1453, -1866,   190,   117,   763,  2603,  2604,   761,  2606,   174,
    2651,  2607,  2608,    52,  2622,   243,   438,  2368,   154,   344,
    1248,   229,   525,  1642,  2707,  2341,  1643,   137,   763,   228,
    2732,   230,  2047,   765,  2543,   137,   137,  2073,  1937,  1267,
    1577,   765,  1755,    13,  2737,  2752,   243,    36,    13,  1938,
     764,   400,  2084,  1891,  2652,   175,  1269,   330,  2050,   191,
    2707,    53,   439,   762,   192,   316,  2726,   300,  1002,  2544,
     155,   833,   156,   229,   764, -1649,  1267,   193,  1330,   470,
     471,   472,    39,   230,   757, -1866,  2538,  1267, -1087,   762,
     997,   757,   997,  1924,  2502,  2133,  2539,   231,  2727,    54,
     765,    55,    40,    56,   997,   176,   394,  1193,  1647, -1864,
   -1866,    57,  1194,   232,  1609,   361,   252,  1892,   137,  2728,
    2117,  1014,  2209,  2630,   765,  1806,   317,   318,   760,  1766,
    1767,  1357, -1087,   763,  1943,   760,   610,  1192,   761,  2435,
     750, -1579, -1087,  1292,  1267,   761,  1193,   362,  1267,  2369,
    1807,  1194,  2491,  1619,  2370,  1920,  2492,  1203,   794,   763,
    1002,   596,  1002,   597,  1610,   232,  1944,    58,   611,  1426,
      48,  1768,   751,  1769,  1002,  1770,  2240,   594,   189,   764,
    2047,  1487,   601,   233,   139,  2701,  2155,  1878,  1945,  2702,
    1879,  1880,  2146,   830,   830, -1866,  2314,    49,  1973,  1673,
     473,  1877,  1924,  1671,  1878,   764,    51,  1879,  1880,  1771,
    1772,  1773,  2454,    93,   474, -1866,  1490,  2147,  2310,    26,
     762,   243,   394,   139, -1087,  2582,  2507,   762,  2508,   765,
     831,   831,  1410,  1413,  1416,   233,    47,  1321,   234,   235,
      97, -1866,  1946,  2311,   830,    91,  2639,  2640,   403,  1794,
    2264,   190,  2715,  2269,  2269,   765,   441,  2558,  2365,  1774,
      60,  1775,  1228,  2244,  1442,   755, -1866,  2696,  1776,  1293,
    1294,  1777,  2717,  2550,  2551,  2716,  2647,  1429,  1193,   236,
    2556,   831,  2205,  1194,   100,  2708,  1295,  1193,   555,  2538,
     763,   101,  1194,  2236, -1087,  2718,  2330,   763,   475,  2539,
      94,  1488,  1794,  1947,   556,    61,  1435,  1436,   191,  2677,
    2543,   476,  2032,   192,  1451,  2033,  1697,  2244,  1451,  2479,
    2017,  1710,  1747,    52,  1749,  1907,   713,  2625,   714,  2480,
     243,   236,  2626,  2027,  2028,   108,   764,  2031,   106,   966,
   -1087,  1296,   114,   764,   557,  2678,  1421,  1422,  1893,  1928,
    1248,  2118,  2481,  1692,  1935,  1662,   967,  1663,  1778,   508,
    1779,   510,  2538,  1193,   511,   298,   109,  1267,  1194,  1379,
    1794,    53,  2539,  2201,  1953,   110,  2006,  1359,  2007,   112,
     137,  1248,  2482,  1193, -1087,  2313,   765,   137,  1194,  2077,
   -1087,  2078,  2244,   765,   122,    64,  1693,   120,   137,  1679,
    1948,   140,  1681,   477,   428,  1193,   113,  1267,  1684,    54,
    1194,    55,  1688,    56, -1557, -1557, -1557, -1557,  2229,  1690,
    2230,    57,   124,  2332,  2332,   126,   142,  1964,  1518,  1519,
    1520,  1521,   162,  1794,   728,   730,   732,   734,    67,   149,
    2361,  2468,  2362,  2471, -1556, -1556, -1556, -1556,   968,   969,
     970,   164,   163,  1881,  1882,   167,   181,   971,   118,   185,
     186,   139,  1437,  1438,  1439,  2420,  2476,  2421,  2477,   757,
    1881,  1882,   204,  1768,    94,  1769,  1978,    58,  1883,  1884,
    1183,   558,  1185, -1866,   193,  1651,   243,   242,   247,   249,
     250,   248,   559,   257,   269,  1883,  1884,  2012,   273,   278,
     294,   296,  1230,   154,   302,   300,  2244,   303,   973,   307,
     974,    68,   308,   760,  1951,   975,   976,   977,  2020,   309,
     313,   978,   312,   761,   326,   333,   334,  2428,  1231,  1975,
     357,  1977,   336,   338,  1979,  1980,  1981,   340,   342,    59,
    1985,   349,   966,  1988,  1989,   358,   351,   353,   354,   356,
     392,   394,  2359,  1780,   397,   359,   398,   408,   401,   967,
     409,   979,   403,   187,   420,   243,  2536,   421,   422,  1267,
      60,   429,  2672,  1267,  1992,  1993,  1267,   413,  2679,  1248,
     980,   454,  2680,  2681,   455,  2003,   997,   457,   459,  -347,
     360,   483,  2008,   487,   490,   560,   561,   494,   495,   502,
     509,   521,   522,  1781,   999,   762,   523,   527,   547,   533,
     562,   543,   563,   548,  1782,    61,   549,   551,    62,   552,
    -360,   554,  2021,   578,  2682,   579,   588,   428,   587,   605,
    1267,   589,   607,   612,   613,   616,   981,   617,  2135,   688,
    2683,  2684,   690,   693,  2306,   718,   701,   737,   744,   754,
    1333,   968,   969,   970,   735,   770,  1002,   773,   777,   779,
     971,   786,   789,   790,  2156,  2157,  2158,  2159,  2160,  2161,
    2162,  2163,   792,   797,   794,   763,   802,   808,   847,  1267,
    1267,  1267,   804,  2067,    63,   834, -1649,   982,   983,  2180,
     841,   961,  2521,   964,  1006,  1011,  1036,   564,  2180,  1928,
    1012,  1015,  2074,  1028,  1137,    64,  1033,  1164,  2079,  1156,
    1167,  1169,  1197,  1209,  2082,  1282,  1334,  1404,   975,   976,
     977,   764,  1443,  1222,   978,  1170,  1171,  1213,  1178,  1179,
      65,   987,    66,  1180,  1406,  1445,  1181,  1186,  1267,  1198,
    1303,  1464,  1215,  1830,   565,  1200,  1831,   361,    67,  1223,
    1201,   988,  1444,  1832,  1833,  2562,   989,  1458,  1417,  2563,
    2564,  1418,  1470,   990,   979,   137,  1428,  1481,   139,  1479,
    1493,   765,  1499,  1505,  1522,  1508,  1570,  1574,  1526,   362,
    1321,  1528,  1587,  2202,  1590,  1321,  1591,  1593,  1595,  -233,
    2220, -1559,  1604,  1605,   999,   999,   999,  1606,  1607,  1612,
    1834,  1614,  1621,  1617,  1321,  1321,  1637,  1623,  1321,  1359,
    1639,  1216,  1649,  1661,  1654,  1667,   999,  1665,  1674,  1669,
    1680,    68,  1699,  1682,  1701,  1685,  1686,  1687,  1689,  1691,
    1694,  1696,  1267,  1750,  1751,   810,  1753,  1759,  1790,   981,
    1797,  1799,  1801,   363,  1796,  2200,  1242,  1811,   364,  2270,
    2270,  1321,  1815,  1822,  1828,  1846,  1321,  1321,  1321,  1321,
    1510,  2135,  2670,  1874,  1863,  1866,  1267,  2204,  1267,  1835,
    2316,  1887,  1580,   627,   811,   812,   813,   814,   815,  2642,
     365,  2699,  1902,  2215,  1910,  2217,  1929,  1925,   366,  2218,
     982,   983,  1933,  1717,  1768,  1718,  1769,  2223,  1836,  1940,
    1960,   367,  1967, -1866,  1999,  1267,  2000,  1267,  2013,  2661,
     629,   630,  2010,  2016,  2022,  2025,  2023,  2037,  1761,  1227,
    1837,  1241,  2038,  2041,  1257,  2042,  2043,  2056,  1279,  1830,
     368,  2060,  1831,   369,   987,  2064,  2044,  2065,  1460,  1832,
    1833,   370,  2089,  1315,  2069, -1140,  2091,  2096,  2103,  1341,
    2097,  2104,  -230,  2107,   988,  2111,  2110,  2130,  2136,   989,
    1267,  2138,  2139, -1140,  2183,  2142,   990,   243,   137,  2176,
    1397,  2149,  1401,  1321,  1838,  2150,  2186,   139,  2184,   999,
     999,   999,   371,  2195,  2185,   372,  1834,  2197,   999,   999,
     999,  1424,   542,  2206,  2224,  2305,  1424,  2238, -1578,  2273,
    2290,   999,   999,   999,   999,   999,   999,   999,   999,  2299,
    1424,   999,   428,   816,   817,   818,   819,   820,   821,   822,
     642,   643,  2296,  2318,  2334,  2302,  2307,  2320,  1839,  2337,
    2344,  2342,  2346,  2379, -1534,  2050, -1576,  2416,  2591,  1466,
    2425,  2427,  2430,  2445,  2447,  2446,  2448,  2459,  2464,  2497,
    2469,  2349,  1267,  2502,  1267,  1835,  2509,   997,   997,  2498,
    1510,  2510,   428,  1341,   645,  1257,  2512,  2515,  2528,  2529,
    2530,  2534,  2549,  2568,  2567,  2588,  2633,  2637,   966,  2624,
    2643,  2592,   139,  2593,  1836,  1267,   997,  2632,  2645,  1840,
    2663,  2664,  2693,  2694,  2724,   967,  2736,  2442,  2733,  2738,
    2740,  2745,  1841,    17,    92,   997,  1837,   755,   125,    38,
     166,   256,   209,   266,  2594,   119,  1267,   277,   290,   210,
     241,  1842,   442,   545,  2132,   323,   456,  1002,  1002,   846,
     504,  2731,  1210,   798,  1739,  2595,   139,  1672,  2124,  1971,
    2722,   526,  2358,  1010,  2735,  2698,  1341,   997,  1032,  1221,
    1321,   582,  2375,  2376,  1321,  2281,  1002,   649,  1462,  2030,
    1838,  2029,  2504,  2596,  2088,  2496,   823,   959,  1626,  2058,
    2279,  1478,  1804,  1805,  1820,  1002,  2423,  1856,  2285,   824,
    1571,   966,  1864,  2429,  2100,  1898,  1843,   968,   969,   970,
    1886,  1594,  2301,  2112,  1653,  1597,   971,  1906,   967,  2194,
    2309,  2140,  1267,  2312,  1267,  1932,  2323,  2164,  1628,  2461,
    2333,  1629,  1652,  2192,  1839,  1375,  2193,  1002,  2467,  2730,
    2520,  1970,  2472,  2525,  1870,  2475,  2326,  2327,  2328,  2329,
    1620,  1803,   332,   772,   213,  1484,   654,  2154,  2009,   293,
     310,   806,  2631,   447,  2660,  2597,   539,   272,   428,  2514,
    1001,   489,  1483,  2494,   975,   976,   977,  2295,  2495,  2123,
     978,  2178,  2598,  1901,   599,   783,  2687,     0,  2270,  2270,
    1187,  1321,  1321,  2501,     0,  1840,  1321,  1321,  1321,     0,
    1321,     0,     0,     0,  2599,     0,     0,     0,  1841,     0,
     968,   969,   970,     0,     0,     0,     0,     0,     0,   971,
     979,     0,     0,     0,     0,  2600,     0,  1842,   999,     0,
       0,   757,     0,     0,     0,     0,     0,     0,     0,     0,
    2522,     0,     0,     0,  2601,     0,     0,     0,     0,     0,
    1321,   663,  2602,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1248,   137,     0,     0,     0,     0,     0,     0,
       0,     0,  2541,  2542,     0,   760,     0,   975,   976,   977,
       0,     0,     0,   978,  2644,   761,     0,     0,     0,  2552,
    2553,     0,  1843,     0,     0,   981,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2565,     0,  1626,
       0,     0,     0,     0,     0,     0,     0,   999,     0,     0,
       0,     0,     0,   979,     0,  1248,     0,     0,     0,     0,
       0,     0,  2585,  1915,     0,     0,     0,  2589,  2590,     0,
       0,  2695,  1922,     0,     0,  2697,   982,   983,  1174,     0,
       0,     0,     0,  1931,     0,     0,     0,     0,     0,  2628,
    1001,  1001,  1001,     0,     0,     0,  1248,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1959,  1001,     0,     0,     0,     0,     0,     0,  2646,
     987,  1626,  2648,  2649,     0,     0,     0,     0,   981,     0,
    2380,     0,  1248,  2381,     0,     0,  2382,     0,     0,   999,
     988,   999,     0,     0,  2383,   989,     0,     0,  1424,     0,
       0,     0,   990,   999,   137,     0,  2739,     0,     0,  2753,
       0,     0,     0,     0,     0,  2671,     0,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   982,
     983,  1922,     0,     0,     0,     0,     0,     0,     0,     0,
    2384,     0,     0,     0,  2014,     0,     0,  2015,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2385,
       0,     0,     0,   764,     0,     0,     0,  1001,     0,     0,
       0,     0,  1268,   987,     0,     0,     0,     0,     0,  1268,
       0,     0,     0,     0,  1626,     0,     0,  1268,     0,     0,
       0,     0,     0,   988,     0,     0,     0,     0,   989,     0,
    2048,  1268,     0,     0,     0,   990,     0,   137,     0,     0,
       0,     0,     0,   765,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1001,  1001,  1001,     0,     0,
       0,     0,     0,     0,  1001,  1001,  1001,  1425,  2386,     0,
       0,     0,  1425,     0,     0,     0,  2387,  1001,  1001,  1001,
    1001,  1001,  1001,  1001,  1001,     0,  1425,  1001,     0,     0,
    2388,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1468,     0,     0,     0,
       0,     0,  2389,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1626,  1626,   966,     0,
       0,     0,  2390,     0,  2391,     0,     0,     0,  1268,     0,
       0,     0,     0,     0,     0,   967,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2141,  2392,  2393,     0,     0,
       0,     0,     0,  1626,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1268,     0,  2394,     0,
    2181,     0,     0,     0,     0,     0,     0,  2191,  2191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   857,
       0,   858,     0,   859,     0,  2395,  2396,     0,   860,     0,
       0,     0,  1257,     0,     0,     0,   861,     0,     0,     0,
       0,     0,  2212,     0,  1627,     0,  1333,   968,   969,   970,
       0,     0,  2397,  1268,     0,     0,   971,  1268,     0,  2398,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   862,
     863,     0,  2399,     0,     0,     0,  2400,     0,     0,   864,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     865,  2401,     0,   866,     0,     0,  2243,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   867,     0,     0,
       0,     0,  1483,     0,   975,   976,   977,     0,  2402,     0,
     978,     0,     0,     0,     0,     0,     0,  2403,     0,     0,
     868,     0,     0,     0,     0,     0,     0,     0,   869,     0,
     870,  2288,     0,     0,     0,     0,     0,     0,     0,     0,
    2243,  1626,     0,     0,     0,     0,  2404,     0,  1795,  1626,
     979,     0,     0,     0,     0,     0,  2405,     0,     0,     0,
       0,   871,  2406,     0,     0,     0,     0,     0,  1915,     0,
       0,     0,   872,     0,  1001,     0,     0,   873,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2325,     0,     0,
       0,  1795,     0,   874,     0,   999,     0,     0,     0,     0,
     875,     0,     0,   876,   877,  2243,     0,     0,     0,  1626,
       0,     0,     0,     0,   878,   981,     0,     0,     0,     0,
       0,   879,     0,   880,     0,     0,   881,     0,     0,     0,
       0,  2366,     0,     0,     0,     0,     0,  1257,     0,     0,
       0,     0,     0,     0,     0,  1627,     0,     0,     0,     0,
       0,     0,     0,  1001,     0,     0,  1268,     0,     0,  1795,
       0,     0,     0,     0,     0,     0,   982,   983,   882,     0,
       0,     0,   883,  2419,   884,     0,     0,     0,     0, -1866,
       0,     0,     0,     0,   885,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1268,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     987,   886,     0,     0,     0,     0,     0,     0,     0,  2243,
       0, -1140,  1795,     0,   887,     0,     0,  1627,     0,     0,
     988,     0,     0,     0,     0,   989,     0,     0,     0, -1140,
       0,     0,   990,   243,   137,  1001,     0,  1001,     0,     0,
     888,   889,     0,     0,  1425,     0,     0,     0,     0,  1001,
       0,   890,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   891,   892,     0,     0,     0,
       0,     0,   893,     0,     0,     0,   894,     0,     0,     0,
       0,     0,     0,     0,   895,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   896,     0,     0,     0,     0,     0,
       0,     0,     0,   897,     0,     0,     0,     0,     0,     0,
       0,     0,   898,     0,     0,     0,     0,   899,   900,     0,
       0,   901,     0,   902,     0,     0,     0,     0,  2506,     0,
    1627,   903,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   904,     0,     0,     0,  1268,     0,
       0,     0,  1268,     0,     0,  1268,   621,   622,   623,   624,
     625,   626,   905,     0,     0,     0,     0,     0,   906,     0,
       0,  2532,     0,   907,     0,     0,     0,     0,  2535,     0,
       0,  2537,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   628,     0,   629,   630,   631,   632,   633,   634,   635,
     908,     0,     0,     0,     0,     0,     0,     0,     0,  1268,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2569,     0,     0,     0,     0,   636,     0,     0,
       0,     0,     0,     0,     0,     0,  2584,     0,     0,     0,
       0,     0,  1627,  1627,     0,     0,     0,     0,  1268,  1268,
    1268,     0,  1257,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1627,
       0,     0,     0,     0,     0,     0,   637,   638,   639,   640,
     641,     0,     0,   642,   643,     0,     0,     0,     0,     0,
       0,     0,  2650,     0,     0,     0,     0,  1268,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   644,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   999,   999,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2700,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   999,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   646,     0,  2721,  2721,     0,
       0,     0,     0,     0,   999,     0,     0,     0,     0,     0,
       0,  1268,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   857,     0,   858,     0,   859,     0,     0,
       0,     0,   860,     0,     0,     0,     0,     0,   648,     0,
     861,     0,  2744,     0,     0,  1268,   999,  1268,     0,   650,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   651,     0,     0,     0,     0,  1627,     0,     0,
       0,     0,     0,   862,   863,  1627,     0,     0,     0,     0,
       0,     0,     0,   864,  1268,     0,  1268,     0,     0,     0,
       0,     0,     0,     0,   865,     0,     0,   866,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   867,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   655,   656,   657,
       0,  1001,     0,     0,   868,     0,     0,     0,     0,  1268,
       0,     0,   869,     0,   870,  1627,     0,     0,     0,     0,
       0,  -707,     0,  -707,  -707,  -707,  -707,  -707,  -707,  -707,
    -707,     0,  -707,  -707,  -707,     0,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,   871,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   872,     0,     0,     0,
       0,   873,     0,     0,     0,     0,     0,     0,     0,   659,
     660,   661,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   874,     0,     0,
       0,     0,     0,     0,   875,     0,     0,   876,   877,     0,
       0,  1268,     0,  1268,     0,     0,     0,     0,   878,   857,
       0,   858,     0,   859,     0,   879,     0,   880,   860,     0,
     881,     0,     0,     0,     0,     0,   861,     0,     0,     0,
       0,     0,     0,     0,  1268,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   862,
     863,     0,   882,     0,     0,  1268,   883,     0,   884,   864,
       0,     0,     0,     0,     0,     0,     0,     0,   885,     0,
     865,     0,     0,   866,  -707,  -707,  -707,     0,  -707,  -707,
    -707,  -707,     0,     0,     0,     0,     0,   867,     0,     0,
       0,     0,     0,     0,     0,   886,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   887,     0,
     868,     0,     0,     0,     0,     0,     0,     0,   869,     0,
     870,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   888,   889,     0,     0,     0,     0,
       0,  1268,     0,  1268,     0,   890,     0,     0,     0,     0,
       0,   871,     0,     0,     0,     0,     0,     0,     0,   891,
     892,     0,   872,     0,     0,     0,   893,   873,     0,     0,
     894,     0,     0,     0,     0,     0,     0,     0,   895,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   896,     0,
       0,     0,     0,   874,     0,     0,     0,   897,     0,     0,
     875,     0,     0,   876,   877,     0,   898,     0,     0,     0,
       0,   899,   900,     0,   878,   901,     0,   902,     0,     0,
       0,   879,     0,   880,     0,   903,   881,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -707,     0,
       0,     0,     0,     0,     0,     0,   857,     0,   858,     0,
     859,     0,     0,     0,     0,   860,   905,     0,     0,     0,
       0,     0,   906,   861,     0,     0,     0,   907,   882,     0,
       0,     0,   883,     0,   884,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   885,     0,     0,     0,  -707,     0,
       0,     0,     0,     0,   908,     0,   862,   863,     0,     0,
       0,     0,     0,     0,     0,     0,   864,     0,     0,     0,
       0,   886,     0,     0,     0,     0,     0,   865,     0,     0,
     866,     0,     0,     0,   887,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   867,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     888,   889,     0,     0,     0,     0,     0,   868,     0,     0,
       0,   890,  1001,  1001,     0,   869,     0,   870,     0,     0,
       0,     0,     0,     0,     0,   891,   892,     0,     0,     0,
       0,     0,   893,     0,     0,     0,   894,     0,     0,     0,
       0,  1001,     0,     0,   895,     0,     0,     0,   871,     0,
       0,     0,     0,     0,   896,     0,     0,     0,     0,   872,
    1001,     0,     0,   897,   873,     0,     0,     0,     0,     0,
       0,     0,   898,     0,     0,   966,     0,   899,   900,     0,
       0,   901,     0,   902,     0,     0,     0,     0,     0,     0,
     874,   903,   967,     0,     0,     0,     0,   875,     0,     0,
     876,   877,  1001,     0,  1660,     0,     0,     0,     0,     0,
       0,   878,     0,     0,     0,     0,     0,     0,   879,     0,
     880,     0,   905,   881,     0,     0,     0,     0,   906,     0,
       0,     0,     0,   907,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     908,     0,     0,     0,     0,   882,     0,     0,     0,   883,
       0,   884,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   885,     0,     0,   968,   969,   970,     0,     0,     0,
       0,     0,     0,   971,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   757,     0,     0,   886,     0,
       0,     0,     0,     0,     0,     0,     0,  1038,     0,  1039,
       0,   887,     0,     0,  1040,     0,     0,     0,     0,     0,
       0,     0,  1041,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   888,   889,   760,
       0,   975,   976,   977,     0,     0,     0,   978,   890,   761,
       0,     0,     0,     0,     0,  1042,  1043,     0,     0,     0,
       0,     0,   891,   892,     0,  1044,     0,     0,     0,   893,
       0,     0,     0,   894,     0,     0,  1045,     0,     0,  1046,
       0,   895,     0,     0,     0,     0,     0,   979,     0,     0,
       0,   896,     0,  1047,     0,     0,     0,     0,  1228,     0,
     897,   755,     0,     0,  1536,  1537,  1538,     0,     0,   898,
       0,     0,  1539,     0,   899,   900,  1048,     0,   901,     0,
     902,     0,     0,     0,  1049,     0,  1050,     0,   903,     0,
       0,   762,     0,  1051,     0,  1052,  1053,  1054,  1055,  1056,
    1057,  1058,  1059,     0,  1060,  1061,  1062,     0,  1063,  1064,
    1065,  1066,  1067,  1068,  1069,  1070,  1071,  1072,     0,   905,
       0,     0,   981,     0,     0,   906,     0,     0,  1073,     0,
     907,     0,     0,  1074,     0,   966,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   967,     0,     0,     0,     0,   908,     0,  1075,
       0,   763,     0,     0,     0,     0,  1076,     0,     0,  1077,
    1078,     0,     0,   982,   983,     0,     0,     0,     0,     0,
    1079,     0,     0,     0,     0,     0,     0,  1080,     0,  1081,
       0,     0,  1082,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   764,     0,     0,
       0,     0,  1540,     0,     0,     0,     0,   987,     0,     0,
       0,     0,  1541,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1083,     0,     0,   988,  1084,     0,
    1085,     0,   989,     0,   968,   969,   970,     0,     0,   990,
    1086,   137,     0,   971,     0,     0,     0,   765,     0,  1542,
    1543,     0,     0,     0,     0,   757,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1087,     0,     0,
       0,     0,     0,     0,     0,  1869,     0,     0,     0,     0,
    1088,     0,     0,     0,     0,     0,     0,     0,  1230,  1544,
    1545,     0,     0,     0,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,     0,     0,  1089,   978,     0,   761,
       0,     0,     0,     0,  1231,     0,     0,  1090,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1546,     0,     0,
       0,     0,  1091,  1547,     0,     0,     0,  1548,  1092,     0,
       0,     0,  1093,     0,     0,  1549,     0,   979,     0,     0,
    1094,     0,  1550,     0,     0,     0,     0,  1551,  1228,     0,
    1095,   755,     0,     0,     0,     0,   980,     0,     0,  1096,
       0,     0,     0,     0,  1228,     0,  1552,   755,  1097,     0,
    1536,  1537,  1538,  1098,  1099,     0,     0,  1100,  1539,  1101,
       0,   762,     0,     0,     0,     0,     0,  1102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   981,     0,     0,     0,     0,     0,  1104,     0,
       0,     0,     0,     0,  1105,   966,     0,     0,     0,  1106,
       0,     0,     0,     0,     0,     0,     0,  1229,     0,     0,
       0,   966,   967,     0,     0,     0,     0,     0,     0,     0,
       0,   763,     0,     0,     0,     0,  1107,     0,   967,     0,
       0,     0,     0,   982,   983,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1553,     0,  1554,     0,  1555,
       0,     0,  1556,     0,  1557,  1558,  1559,   764,     0,  1560,
    1561,  -873,     0,     0,  -873,     0,     0,   987,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1540,     0,
       0,     0,     0,     0,     0,     0,     0,   988,  1541,     0,
       0,     0,   989,     0,   968,   969,   970,     0,     0,   990,
       0,   137,     0,   971,  1216,     0,     0,   765,     0,     0,
     968,   969,   970,     0,     0,   757,     0,     0,     0,   971,
       0,     0,     0,     0,     0,  1542,  1543,     0,     0,     0,
       0,   757,     0,     0,     0,     0,     0,     0,  -873,     0,
       0,     0,     0, -1766,     0,     0,     0,     0,  1230,     0,
       0,     0,     0,     0,   973,  -873,   974,     0,     0,   760,
       0,   975,   976,   977,  1230,  1544,  1545,   978,     0,   761,
     973,     0,   974,     0,  1231,   760,     0,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,     0,     0,     0,
    1231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1228,     0,  1546,   755,     0,     0,   979,     0,  1547,
       0,     0,     0,  1548,     0,     0,     0,     0,     0,     0,
       0,  1549,     0,   979,     0,     0,   980,     0,  1550,     0,
       0,     0,     0,  1551,     0,     0,     0,     0,     0,     0,
       0,     0,   980,     0,     0,     0,     0,  -873,  -873,  -873,
       0,   762,  1552,     0,     0,     0,  -873,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,  -873,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   966,     0,
       0,     0,   981,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   967,     0,     0,   981,     0,
       0,  -873,     0,     0,     0,     0,     0,  -873,     0,  -873,
       0,     0,  -873,     0,  -873,  -873,  -873,     0,     0,     0,
    -873,   763,  -873,     0,     0,     0,     0,  -873,     0,     0,
       0,     0,     0,   982,   983,     0,     0,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1936,   982,
     983,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -873,     0,     0,     0,     0,  -873,     0,   764,     0,     0,
       0,  1553,     0,  1554,     0,  1555,     0,   987,  1556,  -873,
    1557,  1558,  1559,   764,     0,  1560,  1561,   968,   969,   970,
       0,     0,     0,   987,     0,  1228,   971,   988,   755,     0,
       0,     0,   989,     0,  -873,     0,     0,     0,   757,   990,
       0,   137,     0,   988,     0, -1766,     0,   765,   989,     0,
       0,     0,     0,     0,     0,   990,     0,   137,     0,     0,
       0,     0,     0,   765,     0,  -873,     0,     0,     0,     0,
       0,  1230,     0,     0,     0,     0,     0,   973,     0,   974,
       0,     0,   760,     0,   975,   976,   977,     0,     0,     0,
     978,     0,   761,     0,     0,     0,     0,  1231,  -873,     0,
       0,     0,   966,     0,  -873,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1322,     0,  -873,  -873,     0,   967,
       0,     0,     0,     0,  1228,     0,     0,   755,     0,     0,
     979,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   980,
    -873,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -873,     0,     0,     0,     0,     0,  -873,     0,     0,     0,
       0,     0,     0,     0,   762,     0,     0,     0,     0,     0,
    -873,     0,     0,     0,     0,  -873,     0,     0, -1766,     0,
       0,     0,  -873,     0,  -873,     0,     0,     0,     0,     0,
    -873,   966,     0,     0,     0,   981,     0,     0,     0,     0,
       0,   968,   969,   970,     0,     0,     0,     0,   967,     0,
     971,     0,     0,     0,  1228,     0,     0,   755,     0,     0,
       0,  1379,   757,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   982,   983,     0,     0,
       0,     0,     0,     0,     0,  1230,     0,     0,     0,     0,
       0,   973,     0,   974,     0,     0,   760,     0,   975,   976,
     977,     0,     0,  1937,   978,     0,   761,     0,     0,     0,
     764,  1231,     0,     0,  1938,     0,     0,     0,     0,     0,
     987,   966,     0,     0,     0,     0,     0,     0,     0,     0,
     968,   969,   970,  1384,     0,     0,     0,     0,   967,   971,
     988,     0,     0,  1228,   979,   989,   755,     0,     0,     0,
       0,   757,   990,     0,   137,     0,     0,     0,     0,     0,
     765,     0,     0,   980,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1230,     0,     0,     0,   762,     0,
     973,     0,   974,     0,     0,   760,     0,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,     0,     0,     0,
    1231,     0,     0,     0,     0,     0,     0,     0,     0,   981,
     966,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     968,   969,   970,     0,     0,     0,     0,   967,     0,   971,
       0,     0,     0,   979,     0,     0,     0,     0,     0,     0,
       0,   757,     0,     0,     0,     0,     0,     0,   763,     0,
       0,     0,   980,     0,     0,     0,     0,     0,     0,     0,
     982,   983,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1230,     0,     0,   762,     0,     0,
     973,     0,   974,     0,     0,   760,     0,   975,   976,   977,
       0,     0,     0,   978,   764,   761,     0,     0,     0,     0,
    1231,     0,     0,     0,   987,     0,     0,     0,   981,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   968,
     969,   970,     0,     0,   988,     0,     0,     0,   971,   989,
       0,     0,     0,   979,     0,     0,   990,     0,   137,     0,
     757,     0,     0,     0,   765,  -930,     0,   763,  -930,     0,
       0,     0,   980,     0,     0,     0,     0,     0,     0,   982,
     983,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1230,     0,     0,     0,   762,     0,   973,
       0,   974,     0,     0,   760,     0,   975,   976,   977,     0,
       0,     0,   978,   764,   761,     0,     0,     0,     0,  1231,
       0,     0,     0,   987,     0,     0,     0,     0,   981,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -930,   988,     0,     0,     0,     0,   989,     0,
       0,  1228,   979,     0,   755,   990,     0,   137,     0,  -930,
       0,     0,     0,   765,     0,     0,     0,   763,     0,     0,
       0,   980,     0,     0,     0,     0,     0,     0,     0,   982,
     983,     0,     0,     0,     0,     0,     0,  1228,     0,     0,
     755,     0,     0,     0,     0,     0,   762,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   764,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   987,     0,  1510,     0,   981,   966,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,   967,     0,     0,   989,     0,
       0,  -930,  -930,  -930,     0,   990,     0,   137,     0,     0,
    -930,     0,     0,   765,   966,     0,   763,     0,     0,     0,
       0,     0,  -930,     0,     0,     0,     0,     0,   982,   983,
       0,   967,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1472,     0,
       0,     0,     0,     0,     0,  -930,     0,     0,     0,     0,
       0,  -930,   764,  -930,     0,     0,  -930,     0,  -930,  -930,
    -930,     0,   987,     0,  -930,     0,  -930,     0,     0,     0,
       0,  -930,  1228,     0,     0,   755,     0,   968,   969,   970,
       0,     0,   988,     0,     0,     0,   971,   989,     0,     0,
       0,     0,     0,     0,   990,     0,   137,     0,   757,     0,
       0,     0,   765,     0,  -930,     0,     0,     0,     0,     0,
       0,     0,     0,   968,   969,   970,     0,  1656,     0,     0,
       0,     0,   971,  -930,     0,     0,     0,     0,     0,     0,
       0,  1230,     0,     0,   757,     0,     0,   973,     0,   974,
       0,     0,   760,     0,   975,   976,   977,     0,  -930,   966,
     978,     0,   761,     0,     0,     0,     0,  1231,     0,  1228,
       0,     0,   755,     0,     0,     0,   967,  1230,     0,     0,
       0,     0,     0,   973,     0,   974,     0,     0,   760,  -930,
     975,   976,   977,     0,     0,     0,   978,     0,   761,     0,
     979,     0,     0,  1231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   980,
       0,     0,     0,     0,     0,     0,     0,     0,  -930,     0,
       0,     0,     0,     0,     0,     0,   979,     0,     0,     0,
    -930,  -930,     0,     0,   762,     0,   966,     0,     0,     0,
       0,     0,     0,     0,     0,   980,     0,     0,     0,     0,
       0,     0,     0,   967,     0,     0,     0,     0,   968,   969,
     970,     0,     0,     0,  -930,   981,     0,   971,     0,     0,
     762,     0,     0,     0,  -930,     0,     0,     0,     0,   757,
       0,  1228,     0,     0,   755,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -930,     0,     0,     0,     0,  -930,
       0,   981,     0,     0,   763,     0,  -930,     0,  -930,     0,
       0,     0,  1230,     0,  -930,     0,   982,   983,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,     0,     0,
       0,   978,     0,   761,     0,     0,     0,     0,  1231,     0,
     763,     0,     0,     0,     0,   968,   969,   970,     0,     0,
     764,     0,   982,   983,   971,     0,     0,     0,   966,     0,
     987,     0,     0,     0,     0,     0,   757,     0,     0,     0,
       0,   979,     0,     0,  1514,   967,     0,     0,     0,     0,
     988,     0,     0,     0,     0,   989,   764,     0,     0,     0,
     980,     0,   990,     0,   137,     0,   987,     0,     0,  1230,
     765,     0,     0,     0,     0,   973,     0,   974,     0,     0,
    1272,     0,   975,   976,   977,   762,   988,     0,   978,  1791,
     761,   989,   755,     0,     0,  1231,     0,     0,   990,     0,
     137,     0,     0,     0,     0,     0,   765,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   981,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   979,     0,
       0,     0,     0,     0,     0,     0,     0,   968,   969,   970,
       0,     0,     0,     0,     0,     0,   971,   980,     0,  1957,
       0,     0,     0,     0,     0,   763,     0,     0,   757,     0,
       0,     0,     0,     0,     0,     0,   966,   982,   983,     0,
       0,     0,   762,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   967,     0,     0,     0,     0,     0,     0,
       0,  1230,     0,     0,     0,     0,     0,   973,     0,   974,
       0,   764,   760,   981,   975,   976,   977,     0,     0,     0,
     978,   987,   761,     0,     0,     0,     0,  1231,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   988,     0,     0,     0,     0,   989,     0,     0,     0,
       0,     0,   763,   990,     0,   137,     0,     0,     0,     0,
     979,   765,     0,     0,   982,   983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   980,
       0,     0,     0,     0,     0,   968,   969,   970,     0,     0,
       0,     0,     0,     0,   971,     0,     0,     0,   764,     0,
       0,     0,     0,     0,   762,     0,   757,     0,   987,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   988,     0,
       0,     0,     0,   989,     0,   981,     0,     0,     0,  1230,
     990,     0,   137,     0,     0,   973,     0,   974,   765,     0,
     760,     0,   975,   976,   977,     0,     0,     0,   978,     0,
     761,     0,     0,     0,     0,  1231,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   982,   983,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   979,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   980,     0,     0,
     764,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,  1030,     0,
       0,     0,   762,     0,     0,     0,     0,     0,     0,     0,
     988,     0,     0,     0,     0,   989,     0,     0,     0,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,  -357,
     765,     0,  -357,   981,     0,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,  -357,     0,     0,     0,     0,     0,
       0,  -357,   763,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
       0,     0,     0,     0,   982,   983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,   764,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   987,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   988,     0,
       0,     0,     0,   989,     0,     0,     0,     0,  -357,     0,
     990,     0,   137,     0,     0,     0,     0,     0,   765,     0,
       0,     0,     0,   529,     0,     0,  -357,  -357,  -357,  -357,
    -357,     0,     0,  -357,  -357,     0,     0,  -357,     0,     0,
       0,     0,     0,  -357,     0,  -357,     0,     0,     0,     0,
       0,  -357,     0,     0,     0,     0,  -357,     0,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,     0,  -357,     0,     0,     0,     0,     0,  -357,
       0,  -357,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,     0,     0,     0,     0,     0,   528,     0,     0,
       0,     0,     0,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,     0,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,  -357,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,  -357,
    -357,     0,  -357,  -357,  -357,  -357,  -357,  -357,  -357,     0,
       0,     0,  -357,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -357,     0,     0,     0,     0,  -357,     0,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,  -357,  -357,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,     0,
       0,     0,   529,     0,     0,  -357,  -357,  -357,  -357,  -357,
       0,     0,  -357,  -357,     0,     0,     0,     0,  -357,     0,
       0,     0,     0,  -357,     0,     0,     0,     0,  -357,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,     0,     0,     0,  -357,  -357,     0,     0,  -357,
    -357,  -357,     0,     0,     0,     0,     0,     0,     0,  -357,
     619,     0,  -357,  -357,     0,     0,     0,     0,  -357,  -357,
    -357,     0,     0,     0,     0,   620,   530,     0,   621,   622,
     623,   624,   625,   626,   627,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,   628,     0,   629,   630,   631,   632,   633,
     634,   635,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,  1712,     0,     0,  1713,     0,     0,
    1714,   621,   622,   623,   624,   625,   626,  1715,  1716,   644,
       0,     0,     0,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,   645,     0,  1717,     0,  1718,
       0, -1842,  -357,     0,     0,     0,   628,     0,   629,   630,
     631,   632,   633,   634,   635,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,  -357,
    -357,     0,     0,     0,     0,     0,     0,   646,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,   636,     0,     0,   530,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   647,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     648,     0,     0,     0,     0,     0,     0,     0,   649,     0,
       0,   650,     0,  1719,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   651,     0,     0,   966,     0,     0,
       0,   637,   638,   639,   640,   641,     0,   652,   642,   643,
       0,     0,  1720,     0,   967,   653,     0,     0,  1721,     0,
    1722,     0,     0,     0,     0,     0, -1795,     0,     0,     0,
       0,  1723,     0,     0,  1724,     0,     0,     0,     0,     0,
       0,     0,   644,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,   654,   645,   655,
     656,   657,     0,     0,     0,     0,  1725,     0,     0,     0,
       0,     0,     0,     0,     0,  1726,   966,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   658,     0,  1727,     0,
       0,     0,     0,   967,     0,     0,     0,     0,     0,     0,
     646,     0,     0,     0,     0,  -354,   968,   969,   970,     0,
       0,     0,     0,     0,     0,   971,     0,     0,     0,     0,
       0,     0, -1842,     0,     0,     0,     0,   757,     0,  1728,
       0,   659,   660,   661,     0,     0,     0,     0,     0,     0,
       0,     0,  1729,   648,     0,   662,     0,     0,     0,     0,
       0,   649,   663,     0,   650,     0,     0,     0,     0,     0,
     972,     0,     0,     0,     0,     0,   973,   651,   974,  1730,
       0,   760,     0,   975,   976,   977,     0,     0,   966,   978,
       0,   761,     0,     0,     0,   968,   969,   970,     0,     0,
       0,     0,     0,     0,   971,   967,  1731,     0,     0,     0,
       0,     0,     0,  1732,     0,     0,   757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   979,
    1733,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     654,     0,   655,   656,   657,     0,     0,     0,   980,   972,
       0,     0,     0,     0,     0,   973,     0,   974,     0,     0,
     760,     0,   975,   976,   977,     0,     0,     0,   978,     0,
     761,     0,     0,   762,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1734,     0,     0,     0,     0,  -609,     0,
       0,     0,     0,  1735,     0,     0,     0,   968,   969,   970,
       0,     0,     0,     0,   981,     0,   971,     0,   979,     0,
    1736,     0,     0,     0,   659,   660,   661,     0,   757,     0,
       0,     0,     0,     0,     0,     0,     0,   980,   662,     0,
       0,     0,     0,     0,  1737,   663,     0,   966,     0,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,   972,   762,     0,   967,   982,   983,   973,     0,   974,
       0,     0,   760,     0,   975,   976,   977,     0,     0,     0,
     978,     0,   761,     0,     0,     0,     0,  1415,     0,     0,
       0,     0,     0,   981,     0,     0,     0,   984,     0,   764,
       0,   985,   986,     0,     0,     0,     0,     0,     0,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     979,     0,     0,     0,     0,     0,     0,     0,     0,   988,
       0,     0,   763,     0,   989,     0,     0,     0,     0,   980,
       0,   990,     0,   137,   982,   983,     0,     0,     0,   765,
       0,     0,     0,     0,     0,     0,   968,   969,   970,     0,
       0,     0,     0,     0,   762,   971,  1433,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   984,   757,   764,     0,
     985,   986,     0,     0,   966,     0,     0,     0,   987,     0,
       0,     0,     0,     0,     0,   981,     0,     0,     0,     0,
       0,   967,     0,     0,     0,     0,     0,     0,   988,     0,
     972,     0,     0,   989,     0,     0,   973,     0,   974,     0,
     990,   760,   137,   975,   976,   977,     0,     0,   765,   978,
       0,   761,     0,     0,   763,     0,     0,     0,     0,   966,
       0,     0,     0,     0,     0,     0,   982,   983,     0,     0,
       0,     0,     0,     0,  1974,     0,   967,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   979,
       0,     0,     0,     0,     0,     0,     0,     0,   984,     0,
     764,     0,   985,   986,     0,     0,     0,     0,   980,     0,
     987,     0,     0,   968,   969,   970,     0,     0,     0,     0,
       0,     0,   971,     0,     0,     0,     0,     0,     0,     0,
     988,     0,     0,   762,   757,   989,     0,     0,     0,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,     0,     0,     0,     0,     0,     0,   966,     0,     0,
       0,     0,     0,     0,   981,     0,     0,   972,   968,   969,
     970,     0,     0,   973,   967,   974,     0,   971,   760,     0,
     975,   976,   977,     0,     0,     0,   978,     0,   761,   757,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   982,   983,     0,     0,     0,
       0,     0,   972,  1976,     0,     0,   979,     0,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,     0,     0,
       0,   978,     0,   761,     0,   980,     0,   984,     0,   764,
       0,   985,   986,     0,     0,     0,     0,     0,     0,   987,
       0,     0,     0,     0,     0,     0,   968,   969,   970,     0,
     762,     0,     0,     0,     0,   971,     0,     0,     0,   988,
       0,   979,     0,     0,   989,     0,     0,   757,     0,     0,
       0,   990,     0,   137,     0,     0,     0,     0,     0,   765,
     980,   981,     0,     0,   966,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     972,   967,     0,     0,     0,   762,   973,     0,   974,     0,
       0,   760,     0,   975,   976,   977,     0,     0,     0,   978,
     763,   761,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   982,   983,     0,     0,   981,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1986,     0,     0,     0,     0,   979,
       0,     0,     0,     0,   984,     0,   764,     0,   985,   986,
       0,     0,     0,     0,     0,   763,   987,     0,   980,     0,
       0,     0,   966,     0,     0,     0,     0,   982,   983,     0,
       0,     0,     0,   968,   969,   970,   988,     0,     0,   967,
       0,   989,   971,   762,     0,     0,     0,     0,   990,     0,
     137,     0,     0,     0,   757,     0,   765,     0,     0,   984,
       0,   764,     0,   985,   986,     0,     0,     0,     0,     0,
       0,   987,     0,     0,   981,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   972,     0,     0,
       0,   988,     0,   973,     0,   974,   989,     0,   760,     0,
     975,   976,   977,   990,     0,   137,   978,     0,   761,     0,
       0,   765,     0,   763,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   982,   983,     0,     0,     0,
       0,   968,   969,   970,     0,     0,     0,     0,     0,     0,
     971,     0,     0,     0,     0,     0,   979,     0,     0,     0,
       0,     0,   757,     0,     0,     0,     0,     0,     0,   764,
       0,   985,     0,     0,     0,   980,     0,     0,     0,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   972,     0,     0,     0,   988,
     762,   973,     0,   974,   989,     0,   760,     0,   975,   976,
     977,   990,     0,   137,   978,     0,   761,     0,     0,   765,
       0,     0,     0,     0,     0,     0,     0,  2711,     0,     0,
       0,   981,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   979,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     763,     0,     0,   980,     0,     0,     0,     0,     0,     0,
       0,     0,   982,   983,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   762,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   764,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   987,     0,     0,   981,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   988,     0,     0,     0,
       0,   989,     0,     0,     0,     0,     0,     0,   990,     0,
     137,     0,     0,     0,     0,     0,   765,     0,   763,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     982,   983,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   764,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   987,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   988,     0,     0,     0,     0,   989,
       0,     0,     0,     0,     0,     0,   990,     0,   137,     0,
       0,     0,     0,     0,   765
};

static const yytype_int16 yycheck[] =
{
     103,   158,   105,   597,   663,   116,   366,   790,   111,   393,
     962,   395,   540,  1118,   687,   103,   652,   105,   849,  1145,
     721,  1209,   358,   111,  1596,  1586,  1228,  1450,  1450,   785,
    1450,   181,   135,  1450,  1450,   794,  1450,  1116,   795,  1491,
    1121,   425,  1602,  2012,   404,  2048,   600,   135,    56,    57,
      58,   435,  1369,  1358,  1131,  1540,    64,  1844,  1260,   209,
    1927,  1123,   700,  1112,  1531,  1379,     1,     9,  1145,  1131,
    1997,     1,     9,    22,  1267,     0,   749,    53,     9,  1186,
       1,   184,    48,  1145,    60,  1952,    58,   364,    17,     1,
    2081,    99,   100,  1200,   102,  1775,   852,     0,     9,   107,
     108,    56,  1472,    17,    31,     6,  1378,    88,   116,   115,
     111,  1535,   125,    31,   124,   176,     6,    71,    27,    58,
     277,   111,   758,   759,    71,   133,   799,    97,  1321,     0,
     177,    30,   130,   124,    39,   153,  1951,  1810,  1699,    87,
     251,   130,   177,   142,   126,    97,     9,  1464,   143,   242,
    1255,  1575,   160,  1132,    49,  1525,    49,     9,   203,    65,
     272,    67,    49,   233,    49,   203,    65,   203,    67,  2482,
     243,    73,   421,   809,    21,   310,  1600,   708,  2181,  1158,
    1853,  1374,    58,   191,   295,   161,   235,   330,   126,    71,
       6,   253,  2024,    88,  1243,   203,   175,  1514,    49,   409,
      21,   275,   840,   245,   357,   219,    58,   116,   275,   114,
     219,  2121,     1,   257,   139,    27,   125,   257,   143,   369,
      30,   245,   188,  1593,   755,    64,   985,   409,    58,   546,
     108,  1904,  2646,  2647,   124,   214,   139,  1299,     8,   409,
     143,   249,   218,   219,   451,   413,   409,  1006,  1310,   257,
      58,   257,   417,   455,   204,    65,   367,    67,    13,    14,
     456,  2675,   464,   486,  1134,  2449,     0,    37,   139,   586,
     172,   481,   143,    62,  1579,   200,  1146,    32,   199,   303,
    2694,   504,   171,   233,   233,   233,  1656,   354,  1961,   356,
    1367,   331,   457,   166,   308,   502,   272,   200,   615,   481,
     344,    90,    91,   834,   116,  1367,   282,   316,   461,  1371,
    1871,   481,   561,   481,   387,   257,   160,   391,   481,   257,
     272,    93,  2736,   213,   342,   794,   178,  2194,   229,   200,
     392,    71,  1311,   238,  1906,  2648,   972,   226,  1011,   451,
     443,  2525,   445,   446,   160,   234,   457,   226,   343,   452,
    2165,   400,  1111,  1667,   253,   363,  1661,   445,   446,  2039,
    1674,   291,   170,   275,   452,   508,   469,   257,   350,   472,
     473,   413,   475,     6,   509,   478,   479,   267,   229,   360,
     473,   469,  2055,   391,   314,   337,   456,  2297,  2298,  2221,
     242,  1815,  1877,  1472,   402,   794,  1863,   213,  1822,  1866,
     233,  1886,   311,   411,   412,   238,   414,   415,  1387,   310,
     973,   974,   420,   516,   452,   204,   224,   980,   343,  1178,
    1179,  1180,   467,   405,    34,   288,  1796,   333,   516,   437,
     319,   467,  1191,  1192,   333,   424,  2363,   540,   541,  1198,
     343,   257,   373,   253,   233,   453,  1525,   401,   509,  1530,
    1874,   267,   540,   541,   401,   357,   446,   456,   456,   349,
    1133,   451,   509,  1017,  1018,   360,   508,   360,   339,  1774,
      71,   318,   343,   360,   509,   360,  1110,   487,   581,   391,
     356,    71,   419,   594,  1118,  1119,   379,   488,    71,   352,
     601,   509,   379,   581,  1128,   508,   487,   600,    71,   453,
     405,  1135,  1136,   509,   470,  1929,   453,   515,  2499,  2500,
    1267,   509,   451,  1590,  1593,   984,   985,   986,   447,   401,
    1154,  1155,   503,   333,  1573,  2435,   534,   804,  1590,   419,
     509,   456,  1804,   349,   323,   456,   647,  1006,   510,   509,
     467,  1855,   508,   176,   456,  2225,   554,   502,   556,   467,
     653,   559,   560,   456,   562,  1604,   504,   509,     6,   461,
     509,   451,  2235,   456,   465,   404,     6,   509,  1630,   456,
     501,   453,  1210,   972,   509,   465,  2503,  1656,   515,   509,
     213,  1688,  2449,   591,   509,   984,   985,   986,   596,  1791,
    2150,  1896,   506,   466,  1230,   603,   368,   487,   509,   508,
     576,  1794,  2275,   419,  2277,   257,   509,  1006,   503,   508,
     503,   458,  2036,   457,  2541,  2542,   503,  1374,   503,   509,
     509,   473,   469,   502,   257,   515,  2050,   203,  1933,  2096,
     508,   509,   608,   463,   267,  2308,  2423,   458,   468,    32,
     242,   457,  1111,   173,     6,  2069,    57,   455,   469,   465,
     257,   310,     6,    64,   662,   463,   464,  1291,  2585,   770,
     468,   401,  2589,  2590,   775,  2338,  2339,   456,    62,   441,
    1118,  2674,   282,   283,   284,  2099,   509,   780,   781,  2103,
     257,   792,    22,    26,  1247,   160,    30,   253,  1322,   839,
     233,  2618,   257,   509,   797,   703,    90,    91,   706,   515,
    1169,  1170,  1171,  2672,   257,  2565,   154,  1155,   257,  1178,
    1179,  1180,  1111,   453,     9,   257,   349,  1796,  2142,  2089,
     189,  2091,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    2657,  1115,  1201,  1117,  1133,   332,   346,  1799,     9,  1498,
    1139,   162,   349,   319,  1501,    57,   288,  1381,    60,   257,
     207,   208,    64,  1802,    33,    50,  1140,   203,  1142,    65,
    2130,    67,   421,  1147,   108,   213,   257,   257,  2628,   456,
    1169,  1170,  1171,   213,   257,   245,   332,  1161,  2092,  1178,
    1179,  1180,  1181,   390,   128,   154,   419,  1186,   785,   162,
     247,   248,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
     401,  1200,  1201,   257,   130,   200,  2111,    32,  2232,   257,
    2295,   401,   419,  2183,  2238,   230,   291,   257,   401,   267,
     295,  2245,  2246,   167,   272,  1902,   392,   267,   401,  1465,
     203,  1230,   465,   230,  2507,  2508,   263,    57,  1472,   233,
    1902,  1903,   360,     9,    64,   189,  1518,  1519,  1520,  1521,
     961,   213,   453,   196,  1253,   852,  1492,   509,   269,   213,
     204,   471,   472,   453,   257,   395,   476,   158,  2440,   290,
     453,   473,   123,   463,  1258,   508,   509,  1511,   468,  2196,
     453,  1638,   515,   426,  2189,  1269,   111,  1992,   458,   168,
    1524,  1525,  1446,   233,  2318,   257,   365,  2321,  2322,   469,
     343,   349,  2003,   257,   257,   267,   232,  2008,   515,   349,
    2334,   508,   509,   267,  1017,  1018,  1027,   290,   213,   272,
    1679,   263,  1681,   213,  2348,  2349,  2027,  2028,  1562,   323,
    2031,   342,   509,   379,  1693,  1271,   258,  1336,   515,  1612,
     506,   232,   213,   413,   509,  2517,   288,   253,   343,   310,
     245,   246,   508,   272,  2080,  2081,   509,   269,   373,  1593,
     509,   388,   257,  1143,    28,     8,   292,   257,   249,   250,
     323,   419,   267,  2074,   414,   397,   373,   267,  2079,   419,
    2489,  2082,   457,  1163,    85,   503,   257,   349,   399,   268,
      97,    98,  2416,   404,    37,   349,   267,   196,   342,   409,
    1634,   509,   293,   460,     9,   462,   379,     9,  2568,  1112,
    2089,  1645,  2091,  1116,  1648,  1351,  2097,   465,   509,   509,
    1123,  1124,  1656,    31,  1697,   465,   509,   333,  1131,  1498,
     342,  1134,   257,   195,   456,  2459,  1139,  1794,  1141,  2548,
    1143,  1144,  1145,  1146,   217,   456,  2248,   213,  1721,   269,
     171,  2130,   413,    58,   349,   509,    58,   419,   257,   349,
    1163,   509,   456,   127,   237,   419,  2128,   515,  2149,   509,
    2110,   481,  2633,   213,   309,   515,   311,   271,   349,   188,
      38,  2533,   139,   178,    92,  2645,    57,   399,    46,   451,
     263,   257,   404,    64,   256,  2196,   263,   213,   509,  1498,
     257,   267,   211,   465,  2183,   226,   425,   292,   427,  1259,
    1704,   465,  2217,   234,   233,   288,   438,   257,  1587,  1503,
     481,   288,   342,     1,   419,  2548,  2548,   267,  2548,   419,
     287,  2548,  2548,    11,  2548,   508,   126,   331,   257,   324,
    1243,   257,   456,   238,  2669,  2185,   241,   509,   419,   213,
    2711,   267,  1788,   515,    55,   509,   509,  1829,   458,  1262,
    1310,   515,   515,     2,  2725,  2737,   508,    26,     7,   469,
     465,   356,  1844,   178,   331,   465,   459,   499,   414,   399,
    2705,    59,   172,   349,   404,   354,   308,   509,  1587,    90,
     309,   759,   311,   257,   465,   509,  1299,   509,   319,   118,
     119,   120,   456,   267,   213,   263,   107,  1310,   213,   349,
    1679,   213,  1681,  1612,     8,   382,   117,   281,   340,    97,
     515,    99,   397,   101,  1693,   515,   509,   463,  1378,   458,
     288,   109,   468,   349,   286,   221,   456,   242,   509,   361,
     242,   809,  1998,    37,   515,   263,   415,   416,   257,    24,
      25,  1354,   257,   419,   212,   257,   172,   454,   267,  2299,
     172,   450,   267,   199,  1367,   267,   463,   253,  1371,   463,
     288,   468,  2373,  1353,   468,  1611,  2377,   506,   467,   419,
    1679,   354,  1681,   356,   336,   349,   244,   165,   204,  1688,
     257,    66,   204,    68,  1693,    70,  2053,   555,   269,   465,
    1936,   359,   560,   419,  1407,   162,  1940,    12,   266,   166,
      15,    16,   263,   758,   759,   217,   218,   456,  1678,  1407,
     239,     9,  1721,  1403,    12,   465,   456,    15,    16,   104,
     105,   106,   505,   456,   253,   237,  1486,   288,   263,    16,
     349,   508,   509,  1446,   349,  2533,  2425,   349,  2427,   515,
     758,   759,  1169,  1170,  1171,   419,    33,  1460,   422,   423,
     509,   263,   320,   288,   809,    42,   301,   302,   354,  1472,
    2071,   342,   188,  2499,  2500,   515,   362,  2503,  2209,   154,
     258,   156,     6,  2056,  1201,     9,   288,  2653,   163,   325,
     326,   166,   188,  2494,  2495,   211,  2598,   453,   463,   515,
    2501,   809,  1996,   468,   426,  2671,   342,   463,    47,   107,
     419,   408,   468,  2049,   419,   211,  2175,   419,   337,   117,
     233,   479,  1525,   381,    63,   303,  1193,  1194,   399,    54,
      55,   350,   163,   404,  1217,   166,  1444,  2110,  1221,   178,
    1748,  1449,  1450,    11,  1452,  1595,   354,  2552,   356,   188,
     508,   515,  2553,  1761,  1762,   408,   465,  1765,   397,    83,
     465,   397,    58,   465,   103,    90,  1179,  1180,   473,  1619,
    1573,   473,   211,   453,  1631,   354,   100,   356,   253,   473,
     255,   475,   107,   463,   478,   456,   456,  1590,   468,   113,
    1593,    59,   117,   453,  1644,   456,   157,   272,   159,   456,
     509,  1604,   241,   463,   509,  2139,   515,   509,   468,   157,
     515,   159,  2185,   515,   174,   393,   454,   219,   509,  1410,
     478,    69,  1413,   442,  1908,   463,   456,  1630,  1419,    97,
     468,    99,  1423,   101,   490,   491,   492,   493,   294,  1430,
     296,   109,   456,  2177,  2178,   456,   456,  1658,   490,   491,
     492,   493,   456,  1656,   623,   624,   625,   626,   436,   509,
     253,  2344,   255,  2346,   490,   491,   492,   493,   192,   193,
     194,   456,   509,   278,   279,   342,   257,   201,   456,   257,
     473,  1684,  1195,  1196,  1197,   253,   253,   255,   255,   213,
     278,   279,   199,    66,   233,    68,  1684,   165,   303,   304,
     984,   240,   986,   505,   509,   229,   508,   447,   403,   413,
      64,   404,   251,    60,   257,   303,   304,  1728,   233,   456,
     330,   404,   246,   257,   230,   509,  2299,    26,   252,   456,
     254,   509,   456,   257,  1642,   259,   260,   261,  1749,   108,
     314,   265,   456,   267,   257,   257,   273,  2281,   272,  1680,
       4,  1682,   459,    23,  1685,  1686,  1687,   103,   456,   227,
    1691,   442,    83,  1694,  1695,    19,   189,   123,   459,    17,
      87,   509,  2200,   448,   456,    29,   397,   404,   273,   100,
     405,   305,   354,    57,   426,   508,  2469,   263,    39,  1792,
     258,   456,  2644,  1796,  1702,  1703,  1799,   238,   323,  1802,
     324,   405,   327,   328,   509,  1713,  2175,   333,   511,   509,
      64,   422,  1720,   318,   312,   354,   355,   397,   262,   456,
       7,   456,   397,   498,   794,   349,   256,   456,   456,   509,
     369,   508,   371,   397,   509,   303,   369,   456,   306,   456,
      86,    86,  1750,   125,   369,   435,   397,  2131,   456,    22,
    1853,   392,   308,   506,   311,   456,   380,   397,  1908,   204,
     385,   386,   509,   509,  2124,   456,   504,   387,   233,   509,
     191,   192,   193,   194,   506,   451,  2175,   255,   219,   509,
     201,   123,   515,    53,  1941,  1942,  1943,  1944,  1945,  1946,
    1947,  1948,   451,   447,   467,   419,    26,   308,   351,  1902,
    1903,  1904,   403,  1811,   372,   452,   509,   431,   432,  1959,
     413,   196,  2446,   450,   467,   447,   379,   456,  1968,  1969,
     257,   456,  1830,   509,   402,   393,   456,   509,  1836,   338,
     115,   467,   170,   188,  1842,   257,   257,   224,   259,   260,
     261,   465,   406,   509,   265,   467,   467,   456,   467,   467,
     418,   475,   420,   467,   311,    30,   467,   467,  1961,   467,
     451,   196,   456,    35,   503,   467,    38,   221,   436,   456,
     467,   495,   458,    45,    46,  2509,   500,   131,   509,  2513,
    2514,   509,   132,   507,   305,   509,   509,   133,  1991,   451,
     134,   515,   389,   135,   137,   136,   102,   446,   502,   253,
    2003,   138,   467,  1991,   451,  2008,   141,    49,   407,   263,
    2021,   450,   447,   450,   984,   985,   986,   444,   144,   196,
      92,   145,   147,   146,  2027,  2028,    31,   504,  2031,   272,
     148,    49,   149,   196,   150,   113,  1006,   151,   221,   152,
     453,   509,   115,   453,   456,   453,   453,   453,   453,   453,
     453,   451,  2055,   413,   314,     1,   110,   197,   451,   380,
     224,   379,   341,   317,   203,  1973,   257,   273,   322,  2080,
    2081,  2074,   232,   296,   300,   489,  2079,  2080,  2081,  2082,
     166,  2131,  2641,   129,   506,   506,  2089,  1995,  2091,   161,
    2140,   176,   368,    45,    40,    41,    42,    43,    44,  2593,
     354,  2660,   451,  2011,   169,  2013,   130,   229,   362,  2017,
     431,   432,   451,    65,    66,    67,    68,  2025,   190,    49,
     196,   375,   229,   444,   204,  2128,   177,  2130,    57,  2623,
      76,    77,   301,   204,   509,   273,   456,   514,   253,  1109,
     212,  1111,   513,   238,  1114,   426,   301,   451,  1118,    35,
     404,   451,    38,   407,   475,   383,   277,   365,    30,    45,
      46,   415,   203,  1133,   297,   486,   203,    17,   129,  1139,
     447,   140,   426,   368,   495,    49,   451,   203,   142,   500,
    2183,     8,   196,   504,   203,   130,   507,   508,   509,   426,
    1160,   506,  1162,  2196,   266,   506,     9,  2200,   456,  1169,
    1170,  1171,   456,     7,   451,   459,    92,   509,  1178,  1179,
    1180,  1181,  2200,   257,   508,  2123,  1186,   299,   203,   508,
     503,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,    49,
    1200,  1201,  2516,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   503,   292,   466,   189,   316,   263,   320,   332,
     114,   315,   441,    47,   203,   414,   203,   296,   210,  1229,
     364,   364,   103,   383,   263,    49,   238,   298,   497,    57,
      96,   293,  2275,     8,  2277,   161,    49,  2646,  2647,   413,
     166,   111,  2566,  1253,   236,  1255,   461,   339,   263,   263,
     263,   456,   110,   486,   339,   211,   108,   222,    83,   456,
     210,   253,  2305,   255,   190,  2308,  2675,   342,   506,   381,
     370,   421,   120,   196,   339,   100,    49,  2305,   315,   308,
     428,   323,   394,     7,    46,  2694,   212,     9,    92,    26,
     127,   201,   148,   206,   286,    75,  2339,   221,   238,   150,
     177,   413,   410,   519,  1907,   286,   425,  2646,  2647,   781,
     469,  2709,  1026,   748,  1450,   307,  2359,  1405,  1900,  1672,
    2688,   497,  2198,   799,  2721,  2657,  1336,  2736,   852,  1035,
    2373,  2359,  2218,  2218,  2377,  2094,  2675,   329,  1226,  1764,
     266,  1763,  2407,   335,  1847,  2392,   332,   788,  1358,  1798,
    2092,  1243,  1484,  1486,  1511,  2694,  2273,  1530,  2096,   345,
    1295,    83,  1533,  2291,  1866,  1583,   478,   192,   193,   194,
    1576,  1331,  2119,  1894,  1384,  1336,   201,  1594,   100,  1969,
    2131,  1920,  2425,  2138,  2427,  1624,  2152,  1949,  1365,  2337,
    2178,  1367,  1381,  1968,   320,  1146,  1968,  2736,  2342,  2705,
    2443,  1671,  2347,  2449,  1562,  2352,  2171,  2171,  2171,  2171,
    1354,  1480,   299,   694,   152,  1253,   408,  1936,  1721,   242,
     270,   753,  2576,   417,  2622,   417,   509,   215,  2752,  2437,
     794,   449,   257,  2381,   259,   260,   261,  2108,  2386,  1899,
     265,  1956,   434,  1586,   558,   712,  2648,    -1,  2499,  2500,
     989,  2494,  2495,  2401,    -1,   381,  2499,  2500,  2501,    -1,
    2503,    -1,    -1,    -1,   456,    -1,    -1,    -1,   394,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     305,    -1,    -1,    -1,    -1,   477,    -1,   413,  1498,    -1,
      -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2448,    -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,
    2553,   503,   504,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2565,   509,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2480,  2481,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,  2595,   267,    -1,    -1,    -1,  2497,
    2498,    -1,   478,    -1,    -1,   380,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2515,    -1,  1579,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1587,    -1,    -1,
      -1,    -1,    -1,   305,    -1,  2628,    -1,    -1,    -1,    -1,
      -1,    -1,  2540,  1603,    -1,    -1,    -1,  2545,  2546,    -1,
      -1,  2652,  1612,    -1,    -1,  2656,   431,   432,   972,    -1,
      -1,    -1,    -1,  1623,    -1,    -1,    -1,    -1,    -1,  2567,
     984,   985,   986,    -1,    -1,    -1,  2669,   349,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1651,  1006,    -1,    -1,    -1,    -1,    -1,    -1,  2597,
     475,  1661,  2600,  2601,    -1,    -1,    -1,    -1,   380,    -1,
      32,    -1,  2705,    35,    -1,    -1,    38,    -1,    -1,  1679,
     495,  1681,    -1,    -1,    46,   500,    -1,    -1,  1688,    -1,
      -1,    -1,   507,  1693,   509,    -1,  2729,    -1,    -1,  2740,
      -1,    -1,    -1,    -1,    -1,  2643,    -1,   419,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   431,
     432,  1721,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,  1734,    -1,    -1,  1737,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,   465,    -1,    -1,    -1,  1111,    -1,    -1,
      -1,    -1,  1116,   475,    -1,    -1,    -1,    -1,    -1,  1123,
      -1,    -1,    -1,    -1,  1774,    -1,    -1,  1131,    -1,    -1,
      -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,   500,    -1,
    1790,  1145,    -1,    -1,    -1,   507,    -1,   509,    -1,    -1,
      -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1169,  1170,  1171,    -1,    -1,
      -1,    -1,    -1,    -1,  1178,  1179,  1180,  1181,   190,    -1,
      -1,    -1,  1186,    -1,    -1,    -1,   198,  1191,  1192,  1193,
    1194,  1195,  1196,  1197,  1198,    -1,  1200,  1201,    -1,    -1,
     212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1230,    -1,    -1,    -1,
      -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1896,  1897,    83,    -1,
      -1,    -1,   264,    -1,   266,    -1,    -1,    -1,  1262,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1925,   288,   289,    -1,    -1,
      -1,    -1,    -1,  1933,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1299,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1310,    -1,   320,    -1,
    1960,    -1,    -1,    -1,    -1,    -1,    -1,  1967,  1968,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,    -1,     5,    -1,   347,   348,    -1,    10,    -1,
      -1,    -1,  1992,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,  2002,    -1,  1358,    -1,   191,   192,   193,   194,
      -1,    -1,   374,  1367,    -1,    -1,   201,  1371,    -1,   381,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,   394,    -1,    -1,    -1,   398,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,   413,    -1,    75,    -1,    -1,  2056,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,   440,    -1,
     265,    -1,    -1,    -1,    -1,    -1,    -1,   449,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
     122,  2101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2110,  2111,    -1,    -1,    -1,    -1,   478,    -1,  1472,  2119,
     305,    -1,    -1,    -1,    -1,    -1,   488,    -1,    -1,    -1,
      -1,   153,   494,    -1,    -1,    -1,    -1,    -1,  2138,    -1,
      -1,    -1,   164,    -1,  1498,    -1,    -1,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2167,    -1,    -1,
      -1,  1525,    -1,   195,    -1,  2175,    -1,    -1,    -1,    -1,
     202,    -1,    -1,   205,   206,  2185,    -1,    -1,    -1,  2189,
      -1,    -1,    -1,    -1,   216,   380,    -1,    -1,    -1,    -1,
      -1,   223,    -1,   225,    -1,    -1,   228,    -1,    -1,    -1,
      -1,  2211,    -1,    -1,    -1,    -1,    -1,  2217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1579,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1587,    -1,    -1,  1590,    -1,    -1,  1593,
      -1,    -1,    -1,    -1,    -1,    -1,   431,   432,   270,    -1,
      -1,    -1,   274,  2253,   276,    -1,    -1,    -1,    -1,   444,
      -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1630,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     475,   313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2299,
      -1,   486,  1656,    -1,   326,    -1,    -1,  1661,    -1,    -1,
     495,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,   504,
      -1,    -1,   507,   508,   509,  1679,    -1,  1681,    -1,    -1,
     352,   353,    -1,    -1,  1688,    -1,    -1,    -1,    -1,  1693,
      -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   377,   378,    -1,    -1,    -1,
      -1,    -1,   384,    -1,    -1,    -1,   388,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   424,    -1,    -1,    -1,    -1,   429,   430,    -1,
      -1,   433,    -1,   435,    -1,    -1,    -1,    -1,  2418,    -1,
    1774,   443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,  1792,    -1,
      -1,    -1,  1796,    -1,    -1,  1799,    39,    40,    41,    42,
      43,    44,   474,    -1,    -1,    -1,    -1,    -1,   480,    -1,
      -1,  2461,    -1,   485,    -1,    -1,    -1,    -1,  2468,    -1,
      -1,  2471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
     512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1853,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2522,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2536,    -1,    -1,    -1,
      -1,    -1,  1896,  1897,    -1,    -1,    -1,    -1,  1902,  1903,
    1904,    -1,  2552,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1933,
      -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,
     183,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2602,    -1,    -1,    -1,    -1,  1961,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2646,  2647,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2663,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2675,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,    -1,  2687,  2688,    -1,
      -1,    -1,    -1,    -1,  2694,    -1,    -1,    -1,    -1,    -1,
      -1,  2055,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,     5,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,   321,    -1,
      18,    -1,  2732,    -1,    -1,  2089,  2736,  2091,    -1,   332,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   345,    -1,    -1,    -1,    -1,  2111,    -1,    -1,
      -1,    -1,    -1,    51,    52,  2119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,  2128,    -1,  2130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,   411,   412,
      -1,  2175,    -1,    -1,   112,    -1,    -1,    -1,    -1,  2183,
      -1,    -1,   120,    -1,   122,  2189,    -1,    -1,    -1,    -1,
      -1,   129,    -1,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   482,
     483,   484,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,    -1,   205,   206,    -1,
      -1,  2275,    -1,  2277,    -1,    -1,    -1,    -1,   216,     1,
      -1,     3,    -1,     5,    -1,   223,    -1,   225,    10,    -1,
     228,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2308,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,   270,    -1,    -1,  2339,   274,    -1,   276,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,
      72,    -1,    -1,    75,   292,   293,   294,    -1,   296,   297,
     298,   299,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   352,   353,    -1,    -1,    -1,    -1,
      -1,  2425,    -1,  2427,    -1,   363,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,
     378,    -1,   164,    -1,    -1,    -1,   384,   169,    -1,    -1,
     388,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,   415,    -1,    -1,
     202,    -1,    -1,   205,   206,    -1,   424,    -1,    -1,    -1,
      -1,   429,   430,    -1,   216,   433,    -1,   435,    -1,    -1,
      -1,   223,    -1,   225,    -1,   443,   228,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    10,   474,    -1,    -1,    -1,
      -1,    -1,   480,    18,    -1,    -1,    -1,   485,   270,    -1,
      -1,    -1,   274,    -1,   276,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,   506,    -1,
      -1,    -1,    -1,    -1,   512,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,   313,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     352,   353,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      -1,   363,  2646,  2647,    -1,   120,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   377,   378,    -1,    -1,    -1,
      -1,    -1,   384,    -1,    -1,    -1,   388,    -1,    -1,    -1,
      -1,  2675,    -1,    -1,   396,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,   164,
    2694,    -1,    -1,   415,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   424,    -1,    -1,    83,    -1,   429,   430,    -1,
      -1,   433,    -1,   435,    -1,    -1,    -1,    -1,    -1,    -1,
     195,   443,   100,    -1,    -1,    -1,    -1,   202,    -1,    -1,
     205,   206,  2736,    -1,   456,    -1,    -1,    -1,    -1,    -1,
      -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
     225,    -1,   474,   228,    -1,    -1,    -1,    -1,   480,    -1,
      -1,    -1,    -1,   485,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     512,    -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,   274,
      -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   286,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,   313,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,   326,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,   353,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,   363,   267,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,   377,   378,    -1,    61,    -1,    -1,    -1,   384,
      -1,    -1,    -1,   388,    -1,    -1,    72,    -1,    -1,    75,
      -1,   396,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,   406,    -1,    89,    -1,    -1,    -1,    -1,     6,    -1,
     415,     9,    -1,    -1,    12,    13,    14,    -1,    -1,   424,
      -1,    -1,    20,    -1,   429,   430,   112,    -1,   433,    -1,
     435,    -1,    -1,    -1,   120,    -1,   122,    -1,   443,    -1,
      -1,   349,    -1,   129,    -1,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   474,
      -1,    -1,   380,    -1,    -1,   480,    -1,    -1,   164,    -1,
     485,    -1,    -1,   169,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,   512,    -1,   195,
      -1,   419,    -1,    -1,    -1,    -1,   202,    -1,    -1,   205,
     206,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,    -1,
     216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,   225,
      -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,   475,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   270,    -1,    -1,   495,   274,    -1,
     276,    -1,   500,    -1,   192,   193,   194,    -1,    -1,   507,
     286,   509,    -1,   201,    -1,    -1,    -1,   515,    -1,   207,
     208,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,
     248,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,   352,   265,    -1,   267,
      -1,    -1,    -1,    -1,   272,    -1,    -1,   363,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,
      -1,    -1,   378,   291,    -1,    -1,    -1,   295,   384,    -1,
      -1,    -1,   388,    -1,    -1,   303,    -1,   305,    -1,    -1,
     396,    -1,   310,    -1,    -1,    -1,    -1,   315,     6,    -1,
     406,     9,    -1,    -1,    -1,    -1,   324,    -1,    -1,   415,
      -1,    -1,    -1,    -1,     6,    -1,   334,     9,   424,    -1,
      12,    13,    14,   429,   430,    -1,    -1,   433,    20,   435,
      -1,   349,    -1,    -1,    -1,    -1,    -1,   443,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     456,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,   474,    -1,
      -1,    -1,    -1,    -1,   480,    83,    -1,    -1,    -1,   485,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    83,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   419,    -1,    -1,    -1,    -1,   512,    -1,   100,    -1,
      -1,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   453,    -1,   455,    -1,   457,
      -1,    -1,   460,    -1,   462,   463,   464,   465,    -1,   467,
     468,     6,    -1,    -1,     9,    -1,    -1,   475,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,   170,    -1,
      -1,    -1,   500,    -1,   192,   193,   194,    -1,    -1,   507,
      -1,   509,    -1,   201,    49,    -1,    -1,   515,    -1,    -1,
     192,   193,   194,    -1,    -1,   213,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,   207,   208,    -1,    -1,    -1,
      -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,   246,    -1,
      -1,    -1,    -1,    -1,   252,   100,   254,    -1,    -1,   257,
      -1,   259,   260,   261,   246,   247,   248,   265,    -1,   267,
     252,    -1,   254,    -1,   272,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,   285,     9,    -1,    -1,   305,    -1,   291,
      -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,    -1,   305,    -1,    -1,   324,    -1,   310,    -1,
      -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,   349,   334,    -1,    -1,    -1,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,   380,    -1,
      -1,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,   419,   267,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,   431,   432,    -1,    -1,   419,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,   431,
     432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,   310,    -1,   465,    -1,    -1,
      -1,   453,    -1,   455,    -1,   457,    -1,   475,   460,   324,
     462,   463,   464,   465,    -1,   467,   468,   192,   193,   194,
      -1,    -1,    -1,   475,    -1,     6,   201,   495,     9,    -1,
      -1,    -1,   500,    -1,   349,    -1,    -1,    -1,   213,   507,
      -1,   509,    -1,   495,    -1,   360,    -1,   515,   500,    -1,
      -1,    -1,    -1,    -1,    -1,   507,    -1,   509,    -1,    -1,
      -1,    -1,    -1,   515,    -1,   380,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,    -1,   272,   413,    -1,
      -1,    -1,    83,    -1,   419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    -1,   431,   432,    -1,   100,
      -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
     465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     475,    -1,    -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,
     495,    -1,    -1,    -1,    -1,   500,    -1,    -1,   503,    -1,
      -1,    -1,   507,    -1,   509,    -1,    -1,    -1,    -1,    -1,
     515,    83,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,    -1,    -1,    -1,   100,    -1,
     201,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,   113,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,    -1,    -1,   458,   265,    -1,   267,    -1,    -1,    -1,
     465,   272,    -1,    -1,   469,    -1,    -1,    -1,    -1,    -1,
     475,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,   194,    95,    -1,    -1,    -1,    -1,   100,   201,
     495,    -1,    -1,     6,   305,   500,     9,    -1,    -1,    -1,
      -1,   213,   507,    -1,   509,    -1,    -1,    -1,    -1,    -1,
     515,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,   349,    -1,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,   100,    -1,   201,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,
      -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   246,    -1,    -1,   349,    -1,    -1,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,   465,   267,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,   475,    -1,    -1,    -1,   380,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,    -1,    -1,   495,    -1,    -1,    -1,   201,   500,
      -1,    -1,    -1,   305,    -1,    -1,   507,    -1,   509,    -1,
     213,    -1,    -1,    -1,   515,     6,    -1,   419,     9,    -1,
      -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,   431,
     432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,   349,    -1,   252,
      -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,   465,   267,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,   380,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,   495,    -1,    -1,    -1,    -1,   500,    -1,
      -1,     6,   305,    -1,     9,   507,    -1,   509,    -1,   100,
      -1,    -1,    -1,   515,    -1,    -1,    -1,   419,    -1,    -1,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   431,
     432,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   465,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   475,    -1,   166,    -1,   380,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   495,    -1,   100,    -1,    -1,   500,    -1,
      -1,   192,   193,   194,    -1,   507,    -1,   509,    -1,    -1,
     201,    -1,    -1,   515,    83,    -1,   419,    -1,    -1,    -1,
      -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,   431,   432,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   451,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      -1,   252,   465,   254,    -1,    -1,   257,    -1,   259,   260,
     261,    -1,   475,    -1,   265,    -1,   267,    -1,    -1,    -1,
      -1,   272,     6,    -1,    -1,     9,    -1,   192,   193,   194,
      -1,    -1,   495,    -1,    -1,    -1,   201,   500,    -1,    -1,
      -1,    -1,    -1,    -1,   507,    -1,   509,    -1,   213,    -1,
      -1,    -1,   515,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,    -1,   196,    -1,    -1,
      -1,    -1,   201,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,   213,    -1,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,   349,    83,
     265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,   100,   246,    -1,    -1,
      -1,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,   380,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,
     305,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
     431,   432,    -1,    -1,   349,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,   192,   193,
     194,    -1,    -1,    -1,   465,   380,    -1,   201,    -1,    -1,
     349,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,   213,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,   500,
      -1,   380,    -1,    -1,   419,    -1,   507,    -1,   509,    -1,
      -1,    -1,   246,    -1,   515,    -1,   431,   432,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,
     419,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
     465,    -1,   431,   432,   201,    -1,    -1,    -1,    83,    -1,
     475,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
      -1,   305,    -1,    -1,   489,   100,    -1,    -1,    -1,    -1,
     495,    -1,    -1,    -1,    -1,   500,   465,    -1,    -1,    -1,
     324,    -1,   507,    -1,   509,    -1,   475,    -1,    -1,   246,
     515,    -1,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,   349,   495,    -1,   265,     6,
     267,   500,     9,    -1,    -1,   272,    -1,    -1,   507,    -1,
     509,    -1,    -1,    -1,    -1,    -1,   515,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   324,    -1,   413,
      -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,   431,   432,    -1,
      -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,
      -1,   465,   257,   380,   259,   260,   261,    -1,    -1,    -1,
     265,   475,   267,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   495,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,
      -1,    -1,   419,   507,    -1,   509,    -1,    -1,    -1,    -1,
     305,   515,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,   465,    -1,
      -1,    -1,    -1,    -1,   349,    -1,   213,    -1,   475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,
      -1,    -1,    -1,   500,    -1,   380,    -1,    -1,    -1,   246,
     507,    -1,   509,    -1,    -1,   252,    -1,   254,   515,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
     465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     495,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,
      -1,    -1,   507,    -1,   509,    -1,    -1,    -1,    -1,    32,
     515,    -1,    35,   380,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,   419,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   465,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,
      -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,   161,    -1,
     507,    -1,   509,    -1,    -1,    -1,    -1,    -1,   515,    -1,
      -1,    -1,    -1,   176,    -1,    -1,   179,   180,   181,   182,
     183,    -1,    -1,   186,   187,    -1,    -1,   190,    -1,    -1,
      -1,    -1,    -1,   196,    -1,   198,    -1,    -1,    -1,    -1,
      -1,   204,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,   242,
      -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,   332,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,   345,    -1,   347,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   374,    -1,    -1,    -1,    -1,   120,    -1,   381,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   408,    -1,   410,   411,   412,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,    -1,   176,    -1,    -1,   179,   180,   181,   182,   183,
      -1,    -1,   186,   187,    -1,    -1,    -1,    -1,   451,    -1,
      -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,   461,    -1,
     204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     473,    -1,    -1,    -1,    -1,   478,   220,    -1,    -1,   482,
     483,   484,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
      21,    -1,   236,   496,    -1,    -1,    -1,    -1,   242,   502,
     503,    -1,    -1,    -1,    -1,    36,   509,    -1,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,   332,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   366,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,
     181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   408,    -1,   410,   411,   412,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,   220,
      -1,    -1,    -1,   437,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,   236,    -1,    65,    -1,    67,
      -1,   242,   456,    -1,    -1,    -1,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,   473,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   482,   483,
     484,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,
      -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,   503,
      -1,    -1,   120,    -1,    -1,   509,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,
      -1,   332,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   345,    -1,    -1,    83,    -1,    -1,
      -1,   179,   180,   181,   182,   183,    -1,   358,   186,   187,
      -1,    -1,   190,    -1,   100,   366,    -1,    -1,   196,    -1,
     198,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,
      -1,   209,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,    -1,   408,   236,   410,
     411,   412,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   253,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   437,    -1,   266,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     278,    -1,    -1,    -1,    -1,   456,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
      -1,    -1,   473,    -1,    -1,    -1,    -1,   213,    -1,   307,
      -1,   482,   483,   484,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   320,   321,    -1,   496,    -1,    -1,    -1,    -1,
      -1,   329,   503,    -1,   332,    -1,    -1,    -1,    -1,    -1,
     246,    -1,    -1,    -1,    -1,    -1,   252,   345,   254,   347,
      -1,   257,    -1,   259,   260,   261,    -1,    -1,    83,   265,
      -1,   267,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   100,   374,    -1,    -1,    -1,
      -1,    -1,    -1,   381,    -1,    -1,   213,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     408,    -1,   410,   411,   412,    -1,    -1,    -1,   324,   246,
      -1,    -1,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   451,    -1,    -1,    -1,    -1,   456,    -1,
      -1,    -1,    -1,   461,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,   380,    -1,   201,    -1,   305,    -1,
     478,    -1,    -1,    -1,   482,   483,   484,    -1,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,   496,    -1,
      -1,    -1,    -1,    -1,   502,   503,    -1,    83,    -1,    -1,
      -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,   349,    -1,   100,   431,   432,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,    -1,   453,    -1,    -1,
      -1,    -1,    -1,   380,    -1,    -1,    -1,   463,    -1,   465,
      -1,   467,   468,    -1,    -1,    -1,    -1,    -1,    -1,   475,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,
      -1,    -1,   419,    -1,   500,    -1,    -1,    -1,    -1,   324,
      -1,   507,    -1,   509,   431,   432,    -1,    -1,    -1,   515,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,   349,   201,   453,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   463,   213,   465,    -1,
     467,   468,    -1,    -1,    83,    -1,    -1,    -1,   475,    -1,
      -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,
     246,    -1,    -1,   500,    -1,    -1,   252,    -1,   254,    -1,
     507,   257,   509,   259,   260,   261,    -1,    -1,   515,   265,
      -1,   267,    -1,    -1,   419,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,
      -1,    -1,    -1,    -1,   439,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   463,    -1,
     465,    -1,   467,   468,    -1,    -1,    -1,    -1,   324,    -1,
     475,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     495,    -1,    -1,   349,   213,   500,    -1,    -1,    -1,    -1,
      -1,    -1,   507,    -1,   509,    -1,    -1,    -1,    -1,    -1,
     515,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,   380,    -1,    -1,   246,   192,   193,
     194,    -1,    -1,   252,   100,   254,    -1,   201,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,
      -1,    -1,   246,   439,    -1,    -1,   305,    -1,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,    -1,   324,    -1,   463,    -1,   465,
      -1,   467,   468,    -1,    -1,    -1,    -1,    -1,    -1,   475,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,
     349,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,   495,
      -1,   305,    -1,    -1,   500,    -1,    -1,   213,    -1,    -1,
      -1,   507,    -1,   509,    -1,    -1,    -1,    -1,    -1,   515,
     324,   380,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,   100,    -1,    -1,    -1,   349,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,
     419,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   431,   432,    -1,    -1,   380,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   453,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,   463,    -1,   465,    -1,   467,   468,
      -1,    -1,    -1,    -1,    -1,   419,   475,    -1,   324,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,   431,   432,    -1,
      -1,    -1,    -1,   192,   193,   194,   495,    -1,    -1,   100,
      -1,   500,   201,   349,    -1,    -1,    -1,    -1,   507,    -1,
     509,    -1,    -1,    -1,   213,    -1,   515,    -1,    -1,   463,
      -1,   465,    -1,   467,   468,    -1,    -1,    -1,    -1,    -1,
      -1,   475,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,
      -1,   495,    -1,   252,    -1,   254,   500,    -1,   257,    -1,
     259,   260,   261,   507,    -1,   509,   265,    -1,   267,    -1,
      -1,   515,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,   465,
      -1,   467,    -1,    -1,    -1,   324,    -1,    -1,    -1,   475,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,   495,
     349,   252,    -1,   254,   500,    -1,   257,    -1,   259,   260,
     261,   507,    -1,   509,   265,    -1,   267,    -1,    -1,   515,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   376,    -1,    -1,
      -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     419,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   431,   432,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,   380,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,
      -1,   500,    -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,
     509,    -1,    -1,    -1,    -1,    -1,   515,    -1,   419,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,   500,
      -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,   509,    -1,
      -1,    -1,    -1,    -1,   515
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   518,   519,     0,   200,   343,   520,   521,   522,   523,
     524,   525,   527,   537,   539,   456,   456,   522,   154,   533,
     545,   533,   533,   257,   344,   540,   540,   123,    85,   546,
     526,   528,   537,   139,   531,   532,    26,   541,   541,   456,
     397,   547,   143,   526,   529,   530,   533,   540,   257,   456,
     538,   456,    11,    59,    97,    99,   101,   109,   165,   227,
     258,   303,   306,   372,   393,   418,   420,   436,   509,   548,
     549,   553,   564,   572,   573,   574,   575,   576,   581,   590,
     592,   597,   600,   601,   603,   604,   605,   606,   607,   608,
     609,   540,   528,   456,   233,   542,  1281,   509,  1199,  1199,
     426,   408,  1299,  1281,  1281,  1281,   397,  1199,   408,   456,
     456,  1281,   456,   456,    58,  1269,   577,     1,   456,   575,
     219,   591,   174,   610,   456,   530,   456,    73,   172,   357,
     461,   543,   544,   582,  1281,  1281,  1281,   509,  1194,  1225,
      69,  1194,   456,  1281,  1281,   554,   565,  1194,   550,   509,
     593,   594,   595,  1200,   257,   309,   311,   578,   580,  1042,
    1228,  1281,   456,   509,   456,   612,   544,   342,  1296,  1281,
     213,   257,   267,   349,   419,   465,   515,   598,   599,  1231,
    1194,   257,   219,   308,  1318,   257,   473,    57,    64,   269,
     342,   399,   404,   509,   555,   556,   557,   558,   559,   560,
     561,   563,  1268,  1328,   199,   566,   567,   568,   551,   563,
     594,    22,   233,  1200,  1282,  1042,   233,   426,  1293,  1281,
      97,  1199,   235,   400,   611,   613,    28,   127,   213,   257,
     267,   281,   349,   419,   422,   423,   515,   583,   584,   585,
     588,   599,   447,   508,   602,  1312,  1225,   403,   404,   413,
      64,  1281,   456,   557,   456,   509,   556,    60,  1281,     9,
     373,   501,   569,   571,     1,   456,   568,   552,  1312,   257,
     596,  1229,  1293,   233,  1199,  1199,   579,   580,   456,     1,
     291,   314,  1254,   275,   391,   645,   646,   647,   648,   650,
     585,    17,   447,  1231,   330,  1281,   404,  1228,   456,  1281,
     509,  1195,   230,    26,   570,   230,   373,   456,   456,   108,
    1229,  1199,   456,   314,  1199,   651,   354,   415,   416,   649,
     534,     1,   456,   647,   586,   588,   257,  1228,   258,   438,
     499,   562,  1195,   257,   273,   614,   459,  1272,    23,  1263,
     103,   655,   456,   587,   588,    58,   510,  1322,   615,   442,
    1305,   189,  1274,   123,   459,   656,    17,     4,    19,    29,
      64,   221,   253,   317,   322,   354,   362,   375,   404,   407,
     415,   456,   459,   616,   617,   623,   625,   627,   628,   629,
     630,   631,   634,   635,   636,   637,   638,   640,   641,   643,
    1297,  1313,    87,  1270,   509,  1184,  1185,   456,   397,   657,
     588,   273,  1288,   354,  1297,   451,   502,  1309,   404,   405,
    1281,  1268,   114,   238,  1283,  1283,   288,   642,  1228,  1312,
     426,   263,    39,  1266,  1281,   652,   653,  1185,  1185,   456,
     173,   395,   535,   658,   659,   661,  1281,  1283,   126,   172,
     620,   362,   635,  1281,  1281,  1281,  1281,  1263,     9,   288,
     352,   644,  1281,  1288,   405,   509,   653,   333,   654,   511,
     686,   688,   689,     1,  1185,   126,   350,   405,   624,  1281,
     118,   119,   120,   239,   253,   337,   350,   442,   618,   619,
     257,  1194,  1198,   422,   639,  1194,  1194,   318,  1294,  1294,
     312,  1194,  1281,  1228,   397,   262,   742,   690,   691,   693,
     703,  1246,   456,   660,   639,   257,   622,  1225,   622,     7,
     622,   622,   257,   621,  1225,   417,   457,    33,   168,   268,
     632,   456,   397,   256,   744,   456,   691,   456,     1,   176,
     509,   694,   695,   509,   662,   125,   508,  1248,  1327,  1272,
    1281,  1193,  1194,   508,   633,   633,   687,   456,   397,   369,
     746,   456,   456,   692,    86,    47,    63,   103,   240,   251,
     354,   355,   369,   371,   456,   503,   663,   664,   666,   670,
     671,   674,   675,   681,   682,   683,   684,  1281,   125,   435,
     626,  1193,  1194,   263,   388,   688,   743,   456,   397,   392,
     791,   705,   696,  1281,  1270,  1281,   354,   356,  1323,  1323,
    1281,  1270,  1281,  1288,  1281,    22,  1262,   308,   685,  1199,
     172,   204,   506,   311,   688,   745,   456,   397,   536,    21,
      36,    39,    40,    41,    42,    43,    44,    45,    74,    76,
      77,    78,    79,    80,    81,    82,   120,   179,   180,   181,
     182,   183,   186,   187,   220,   236,   278,   307,   321,   329,
     332,   345,   358,   366,   408,   410,   411,   412,   437,   482,
     483,   484,   496,   503,   706,   707,   708,   710,   711,   712,
     713,   714,   715,   716,   719,   731,   732,   733,   734,   735,
     740,   741,  1281,  1301,    26,   196,   704,  1264,   204,  1228,
     509,  1281,  1262,   509,  1196,  1197,   310,   421,  1319,  1198,
    1228,   504,  1281,   175,   214,   509,   672,  1199,     9,   419,
     515,   589,   275,   354,   356,  1321,   688,   747,   456,   339,
     805,   808,   245,   303,   409,   481,  1300,   481,  1300,   481,
    1300,   481,  1300,   481,  1300,   506,  1310,   387,  1298,   126,
    1228,  1222,  1225,  1225,   233,   243,   387,  1284,  1281,  1282,
     172,   204,   242,   473,   509,     9,    50,   213,   245,   246,
     257,   267,   349,   419,   465,   515,   697,  1232,  1233,  1234,
     451,   669,  1197,   255,  1287,   451,  1269,   219,  1276,   509,
    1281,  1281,  1234,  1321,   748,   792,   123,   831,   832,   515,
      53,   723,   451,   720,   467,  1226,  1227,   447,   713,   737,
     738,  1232,    26,   709,   403,  1258,  1258,  1234,   308,  1291,
       1,    40,    41,    42,    43,    44,   179,   180,   181,   182,
     183,   184,   185,   332,   345,   698,   699,   700,   701,   702,
     714,   715,  1222,   698,   452,  1228,    58,   356,   665,   676,
    1228,   413,  1302,   257,   673,  1225,   673,   351,   749,   693,
     703,   793,   794,   795,    56,   502,   809,     1,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   153,   164,   169,   195,   202,   205,   206,   216,   223,
     225,   228,   270,   274,   276,   286,   313,   326,   352,   353,
     363,   377,   378,   384,   388,   396,   406,   415,   424,   429,
     430,   433,   435,   443,   456,   474,   480,   485,   512,   833,
     834,   850,   855,   859,   864,   879,   882,   886,   890,   891,
     892,   897,   911,   915,   918,   932,   936,   939,   942,   946,
     947,   951,   961,   964,   981,   983,   986,   990,   996,  1008,
    1016,  1017,  1020,  1021,  1025,  1030,  1031,  1039,  1054,  1064,
    1073,  1078,  1085,  1089,  1091,  1094,  1097,  1101,  1128,   833,
    1276,   196,   721,  1228,   450,  1307,    83,   100,   192,   193,
     194,   201,   246,   252,   254,   259,   260,   261,   265,   305,
     324,   380,   431,   432,   463,   467,   468,   475,   495,   500,
     507,  1172,  1174,  1175,  1176,  1177,  1178,  1179,  1207,  1221,
    1222,  1233,  1235,  1236,  1237,  1238,   467,  1227,  1225,   736,
     738,   447,   257,  1268,   698,   456,  1234,    48,   470,   677,
     678,   679,   680,  1312,  1269,   196,   668,  1275,   509,  1186,
       1,   694,   795,   456,   811,   810,   379,   817,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   129,   131,   132,   133,   134,   135,   136,   137,   138,
     140,   141,   142,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   164,   169,   195,   202,   205,   206,   216,
     223,   225,   228,   270,   274,   276,   286,   313,   326,   352,
     363,   378,   384,   388,   396,   406,   415,   424,   429,   430,
     433,   435,   443,   456,   474,   480,   485,   512,  1259,   835,
     851,   856,   860,   865,   880,   883,   887,   893,   898,   912,
     916,   919,   933,   937,   940,   943,   203,   379,   874,   935,
     948,   952,   962,   965,   982,   984,   987,   402,   991,   997,
    1009,  1018,  1022,  1026,  1032,  1040,  1055,  1065,   257,   349,
     390,   419,   515,  1077,  1079,  1086,   338,  1090,  1092,   820,
    1095,  1098,  1102,  1129,   509,  1228,   720,   115,   722,   467,
     467,   467,  1240,  1222,  1233,  1235,  1318,  1318,   467,   467,
     467,   467,  1318,  1178,  1174,  1178,   467,  1240,    71,   401,
     453,  1173,   454,   463,   468,   455,   464,   170,   467,  1239,
     467,   467,  1174,   506,   739,  1311,  1232,  1198,  1198,   188,
     669,  1228,   750,   456,   796,   456,    49,   812,   813,   814,
    1267,   812,   509,   456,   310,   836,   837,  1221,     6,    95,
     246,   272,   852,  1179,  1203,  1204,  1221,  1232,  1235,   857,
    1174,  1221,   257,   861,   862,  1190,  1191,  1192,  1225,   272,
     425,   427,   866,   867,   257,   881,  1212,  1221,   884,  1185,
       6,   888,  1180,  1181,  1202,  1223,  1224,  1225,  1233,   459,
     894,  1185,   257,   899,   900,   902,  1203,  1204,  1212,  1221,
     913,  1204,   257,   917,   458,   469,   920,   921,   922,  1162,
    1163,  1164,   199,   325,   326,   342,   397,   934,   938,  1201,
    1202,   941,  1225,   451,   944,  1308,  1204,  1161,  1162,   953,
    1201,   963,  1186,   966,   967,  1221,  1232,  1235,  1056,  1219,
    1220,  1225,    95,   985,  1204,   988,  1204,   171,   226,   234,
     319,   992,   993,   191,   257,   998,  1002,  1003,  1004,  1190,
    1213,  1221,  1225,  1235,  1312,  1010,  1185,  1019,  1182,  1225,
    1023,  1185,  1027,  1182,     9,  1033,  1183,  1225,   154,   272,
    1041,  1044,  1045,  1048,  1049,  1050,  1051,  1052,  1053,  1187,
    1188,  1201,  1218,  1220,  1225,  1056,  1066,  1185,  1074,   113,
    1080,  1081,  1082,  1204,    95,  1087,  1203,  1093,  1186,   456,
     509,   821,   822,   825,   826,   831,  1096,  1221,  1099,  1185,
    1103,  1221,  1130,  1182,   224,   724,   311,  1292,   725,   726,
    1172,  1174,  1244,  1172,  1245,   453,  1172,   509,   509,  1174,
    1243,  1243,  1243,  1206,  1221,  1233,  1235,  1242,   509,   453,
    1206,  1241,  1174,   453,  1174,  1175,  1175,  1176,  1176,  1176,
    1174,  1206,  1172,   406,   458,    30,  1265,  1269,     1,   751,
     797,   813,   413,   481,   815,   360,   503,   806,   131,   849,
      30,   839,   840,  1265,   196,  1291,  1221,  1222,  1233,  1235,
     132,   854,   451,   853,  1204,    58,   224,  1249,   862,   451,
    1318,   133,   878,   257,  1213,  1212,  1185,   359,   479,   885,
    1312,  1324,  1291,   134,   889,   160,   457,  1181,  1316,   389,
    1255,  1226,  1227,   895,  1185,   135,   896,  1297,   136,   910,
     166,   901,  1141,  1142,   489,   903,   508,   840,   490,   491,
     492,   493,   137,   914,    49,   229,   502,   868,   138,   931,
      17,   506,   923,   924,   925,   927,    12,    13,    14,    20,
     160,   170,   207,   208,   247,   248,   285,   291,   295,   303,
     310,   315,   334,   453,   455,   457,   460,   462,   463,   464,
     467,   468,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1204,
     102,   935,  1202,  1189,   446,  1306,   954,  1312,  1186,    93,
     368,   441,   968,   969,   971,   972,  1058,   467,  1226,  1204,
     451,   141,   989,    49,   993,   407,   994,  1003,   142,   456,
     999,  1001,   486,   504,   447,   450,   444,   144,  1015,   286,
     336,  1252,   196,  1131,   145,  1024,  1297,   146,  1029,  1131,
    1183,   147,  1038,   504,  1034,  1210,  1221,  1233,  1051,  1053,
    1201,   451,  1188,   124,   451,   487,  1043,    31,  1226,   148,
    1072,   178,   238,   241,  1068,   874,  1075,  1312,  1267,   149,
    1084,   229,  1082,  1221,   150,  1088,   196,  1186,   397,   456,
     456,   196,   354,   356,  1100,   151,  1112,   113,  1104,   152,
    1135,  1131,   725,  1194,   221,   728,    27,   116,   727,  1173,
     453,  1173,   453,   453,  1173,   453,   453,   453,  1173,   453,
    1173,   453,   453,   454,   453,   453,   451,  1281,  1198,   115,
     667,   456,    62,    90,    91,   323,   456,   752,   753,   756,
    1281,  1336,    32,    35,    38,    45,    46,    65,    67,   161,
     190,   196,   198,   209,   212,   244,   253,   266,   307,   320,
     347,   374,   381,   398,   451,   461,   478,   502,   711,   712,
     716,   731,   733,   735,   798,   803,   804,  1281,  1314,  1281,
     413,   314,   816,   110,   818,   515,  1214,  1218,  1228,   197,
     843,   253,   333,   841,   842,  1314,    24,    25,    66,    68,
      70,   104,   105,   106,   154,   156,   163,   166,   253,   255,
     448,   498,   509,   838,  1188,  1315,   153,   342,  1208,  1222,
     451,     6,  1180,  1204,  1225,  1233,   203,   224,  1250,   379,
     858,   341,   863,  1192,   868,   885,   263,   288,  1274,  1222,
    1174,   273,  1256,  1227,  1185,   232,  1157,  1158,   828,   829,
     902,  1204,   296,  1143,    97,   337,   509,  1188,   300,   907,
      35,    38,    45,    46,    92,   161,   190,   212,   266,   320,
     381,   394,   413,   478,   908,   909,   489,   904,  1141,  1141,
    1141,  1141,  1204,  1180,  1204,   869,   922,    21,   458,   469,
     928,   929,  1163,   506,   925,   926,   506,   828,  1308,   233,
    1166,   115,   945,  1190,   129,   828,   949,     9,    12,    15,
      16,   278,   279,   303,   304,   955,   959,   176,  1210,     9,
      58,   178,   242,   473,   975,   976,   977,   970,   971,  1060,
    1292,  1327,   451,  1201,  1180,  1204,   994,  1312,  1184,   828,
     169,  1005,  1161,  1006,  1007,  1221,  1190,     8,    37,  1133,
    1297,  1217,  1221,  1232,  1235,   229,  1011,  1028,  1312,   130,
    1035,  1221,  1035,   451,   451,  1042,   153,   458,   469,  1204,
      49,    38,    46,   212,   244,   266,   320,   381,   478,  1046,
    1047,  1281,  1067,  1312,  1204,   162,   290,   413,  1204,  1221,
     196,  1180,  1204,   827,  1228,  1210,  1267,   229,  1107,  1132,
    1133,   728,  1267,  1283,   439,  1239,   439,  1239,  1194,  1239,
    1239,  1239,  1206,   242,   473,  1239,   453,  1174,  1239,  1239,
    1232,  1292,  1281,  1281,  1262,   249,   250,  1286,   765,   204,
     177,   754,  1273,  1281,   253,   392,   157,   159,  1281,  1217,
     301,  1289,  1228,    57,  1221,  1221,   204,  1289,    32,   111,
    1228,  1281,   509,   456,   807,   273,   844,  1289,  1289,   842,
     841,  1289,   163,   166,  1136,  1137,  1138,   514,   513,  1210,
    1136,   238,   426,   301,   277,   257,  1209,  1222,  1221,  1291,
     414,  1144,  1145,  1226,  1227,  1180,   451,  1251,   858,  1202,
     451,  1190,   873,   874,   383,   365,  1144,  1281,   828,   297,
    1159,   830,   828,  1141,  1281,   253,   392,   157,   159,  1281,
     124,   487,  1281,   909,  1141,    97,    98,   905,   844,   203,
    1144,   203,   870,   871,   872,  1267,    17,   447,   930,   318,
     928,  1292,   828,   129,   140,   950,  1308,   368,   956,  1308,
     451,    49,   976,   978,  1210,     9,    58,   242,   473,   973,
     974,  1210,  1061,  1313,   727,   219,   316,  1277,  1201,  1144,
     203,  1184,   644,   382,   995,  1312,   142,  1000,     8,   196,
    1011,  1221,   130,  1150,  1152,  1157,   263,   288,   828,   506,
     506,  1036,  1037,  1210,  1209,  1204,  1042,  1042,  1042,  1042,
    1042,  1042,  1042,  1042,  1047,   291,   295,  1069,  1070,  1071,
    1167,  1253,  1157,   245,   413,  1326,   426,  1304,  1304,  1083,
    1312,  1221,  1144,   203,   456,   451,     9,  1105,  1106,  1247,
    1108,  1221,  1083,  1108,  1028,     7,  1260,   509,   729,   730,
    1281,   453,  1194,  1212,  1281,  1262,   257,   757,  1230,   693,
     766,   755,  1221,  1214,  1214,  1281,  1307,  1281,  1281,    32,
    1228,   819,   820,  1281,   508,   845,  1214,  1214,  1214,   294,
     296,  1139,  1140,   828,  1136,  1255,  1222,   828,   299,  1146,
    1227,  1144,  1211,  1221,  1232,   166,   466,   876,     6,   229,
     310,   465,   875,  1280,    34,   282,   283,   284,   346,   471,
     472,   476,  1257,   828,   831,  1214,  1214,  1160,  1216,  1218,
    1228,  1160,  1214,   508,   906,  1180,  1181,  1180,  1181,   871,
     310,   815,    88,   360,   503,   929,  1162,   828,  1221,   828,
     503,   957,   958,   959,   960,  1306,   503,  1211,  1210,    49,
     979,   974,   189,   979,  1057,  1281,  1283,   316,  1180,   995,
     263,   288,  1007,  1204,   218,  1012,  1312,   828,   292,  1153,
     263,  1162,  1161,  1036,  1167,  1221,  1168,  1169,  1170,  1171,
    1174,  1076,  1204,  1076,   466,  1147,  1148,   332,  1255,  1180,
     823,  1211,   315,  1210,   114,  1109,   441,  1111,   158,   293,
    1134,  1154,  1155,  1156,  1157,   323,  1188,  1214,   730,  1193,
     758,   253,   255,  1320,   509,   694,  1221,   271,   331,   463,
     468,   799,   800,   801,  1212,   799,   800,   802,   820,    47,
      32,    35,    38,    46,    92,   111,   190,   198,   212,   244,
     264,   266,   288,   289,   320,   347,   348,   374,   381,   394,
     398,   413,   440,   449,   478,   488,   494,   846,   847,   848,
    1136,   828,  1144,   828,   828,   828,   296,   877,  1291,  1221,
     253,   255,  1325,   908,  1144,   364,  1144,   364,  1204,   958,
     103,  1271,  1308,   979,   979,  1211,     8,    37,   980,   226,
     502,  1062,  1194,  1059,  1144,   383,    49,   263,   238,  1013,
     217,   237,   263,   288,   505,   828,   828,   828,   828,   298,
    1149,  1281,  1144,  1144,   497,   824,  1113,  1106,  1276,    96,
    1110,  1276,  1147,   828,   828,  1156,   253,   255,  1285,   178,
     188,   211,   241,   759,   760,   761,   762,   763,   764,  1230,
     767,  1214,  1214,   130,  1281,  1281,   848,    57,   413,   124,
     487,  1281,     8,  1261,   847,   828,  1221,  1181,  1181,    49,
     111,   979,   461,  1279,  1279,   339,  1184,   203,   319,  1063,
    1225,  1204,  1281,  1014,  1151,  1152,  1153,  1157,   263,   263,
     263,   828,  1221,  1114,   456,  1221,  1276,  1221,   107,   117,
    1329,  1281,  1281,    55,    90,  1329,  1330,  1315,   768,   110,
    1214,  1214,  1281,  1281,  1160,  1160,  1214,  1215,  1218,  1230,
    1144,  1144,  1204,  1204,  1204,  1281,  1184,   339,   486,  1221,
    1153,   128,   167,   204,  1115,  1116,  1117,  1119,  1123,  1125,
    1126,  1127,  1265,  1274,  1221,  1281,  1230,  1230,   211,  1281,
    1281,   210,   253,   255,   286,   307,   335,   417,   434,   456,
     477,   496,   504,   711,   716,   717,   731,   733,   735,   769,
     770,   774,   775,   778,   779,   780,   781,   782,   783,   788,
     789,   790,  1314,  1315,   456,  1212,  1214,  1002,  1281,  1161,
      37,  1261,   342,   108,  1230,  1230,  1230,   222,  1278,   301,
     302,  1290,  1262,   210,  1228,   506,  1281,  1291,  1281,  1281,
    1221,   287,   331,   784,   785,  1230,   331,   786,   787,  1230,
    1290,  1262,  1002,   370,   421,  1303,   130,   424,  1124,  1292,
    1282,  1281,   720,  1161,  1207,  1205,  1207,    54,    90,   323,
     327,   328,   369,   385,   386,   771,  1329,  1330,  1331,  1332,
    1333,  1334,  1335,   120,   196,  1228,   785,  1228,   787,  1282,
    1221,   162,   166,  1317,     9,  1120,  1121,  1191,   785,  1307,
    1255,   376,   776,  1207,   188,   188,   211,   188,   211,   177,
     772,  1221,   772,  1207,   339,  1295,   308,   340,   361,  1122,
    1121,   722,  1292,   315,   773,   773,    49,  1292,   308,  1225,
     428,   718,   177,   777,  1221,   323,  1207,   171,   226,   234,
     319,  1118,  1184,  1228
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   517,   519,   518,   520,   520,   521,   521,   522,   522,
     524,   523,   525,   526,   527,   528,   528,   528,   529,   529,
     530,   531,   531,   532,   534,   535,   536,   533,   538,   537,
     539,   540,   540,   541,   541,   542,   542,   543,   543,   543,
     543,   544,   544,   545,   545,   546,   546,   547,   547,   548,
     548,   548,   548,   548,   550,   549,   551,   551,   552,   552,
     554,   553,   555,   555,   555,   555,   556,   556,   557,   557,
     557,   557,   558,   559,   560,   561,   562,   562,   562,   562,
     563,   563,   565,   564,   566,   566,   566,   567,   567,   568,
     568,   568,   569,   569,   570,   570,   571,   571,   572,   573,
     573,   574,   574,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   577,   576,   578,   578,   578,
     578,   579,   579,   580,   580,   582,   581,   583,   583,   583,
     583,   583,   583,   584,   584,   585,   585,   586,   585,   587,
     587,   588,   588,   588,   588,   588,   588,   589,   589,   590,
     591,   591,   592,   593,   593,   594,   595,   595,   596,   596,
     597,   598,   598,   599,   599,   600,   601,   602,   602,   603,
     604,   605,   606,   607,   608,   609,   609,   610,   610,   611,
     611,   612,   612,   614,   613,   613,   615,   615,   616,   616,
     616,   616,   616,   616,   616,   616,   616,   616,   616,   616,
     616,   617,   617,   617,   617,   617,   618,   618,   618,   618,
     619,   619,   620,   620,   620,   621,   621,   622,   622,   622,
     623,   624,   624,   624,   625,   626,   626,   626,   627,   628,
     629,   629,   629,   631,   630,   632,   632,   632,   633,   633,
     633,   633,   634,   634,   635,   635,   635,   635,   636,   637,
     638,   639,   639,   639,   640,   641,   642,   642,   643,   644,
     644,   644,   645,   645,   645,   646,   646,   647,   647,   648,
     649,   649,   649,   649,   651,   650,   652,   652,   653,   654,
     654,   655,   655,   656,   656,   657,   657,   658,   660,   659,
     659,   661,   661,   662,   662,   663,   663,   663,   663,   663,
     663,   663,   663,   663,   663,   663,   664,   665,   665,   665,
     666,   666,   666,   667,   667,   668,   668,   669,   669,   670,
     671,   671,   672,   672,   673,   673,   674,   675,   676,   676,
     677,   677,   677,   678,   679,   680,   681,   682,   683,   684,
     684,   685,   685,   686,   687,   686,   688,   689,   688,   690,
     690,   690,   691,   692,   691,   691,   693,   694,   694,   694,
     695,   696,   696,   697,   697,   697,   697,   698,   698,   698,
     698,   698,   698,   698,   698,   698,   698,   698,   698,   698,
     699,   699,   700,   700,   701,   701,   701,   702,   702,   703,
     704,   704,   705,   705,   706,   706,   706,   706,   706,   706,
     706,   706,   706,   706,   706,   706,   706,   706,   707,   708,
     709,   709,   710,   711,   712,   712,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   714,   714,   715,   715,   716,   716,   717,   718,
     718,   719,   719,   720,   720,   721,   721,   722,   722,   723,
     723,   724,   724,   725,   726,   726,   727,   727,   728,   728,
     729,   729,   730,   731,   732,   733,   734,   736,   735,   737,
     737,   738,   738,   739,   739,   740,   740,   741,   741,   742,
     743,   742,   744,   745,   744,   746,   747,   746,   748,   748,
     750,   749,   751,   751,   751,   752,   752,   752,   752,   753,
     754,   755,   755,   756,   757,   757,   757,   758,   758,   759,
     759,   759,   759,   759,   760,   761,   762,   763,   764,   765,
     765,   767,   766,   768,   768,   769,   769,   769,   769,   769,
     769,   769,   769,   769,   769,   769,   769,   769,   769,   769,
     769,   770,   771,   771,   771,   771,   771,   771,   771,   772,
     772,   772,   773,   773,   774,   775,   776,   776,   777,   777,
     778,   779,   780,   781,   781,   782,   783,   783,   784,   784,
     785,   785,   785,   786,   786,   787,   787,   788,   789,   790,
     791,   792,   791,   793,   793,   794,   794,   795,   796,   795,
     795,   797,   797,   798,   798,   798,   798,   798,   798,   798,
     798,   798,   798,   798,   798,   798,   798,   798,   798,   798,
     798,   798,   798,   798,   798,   798,   798,   798,   798,   798,
     798,   798,   798,   798,   798,   798,   798,   798,   799,   799,
     800,   800,   801,   801,   801,   802,   802,   802,   803,   804,
     805,   806,   807,   805,   808,   805,   809,   810,   809,   811,
     809,   812,   812,   813,   814,   814,   814,   815,   815,   815,
     815,   815,   815,   816,   816,   817,   817,   818,   819,   818,
     820,   820,   821,   821,   821,   821,   821,   823,   822,   824,
     824,   825,   826,   827,   827,   829,   830,   828,   832,   831,
     831,   833,   833,   833,   833,   833,   833,   833,   833,   833,
     833,   833,   833,   833,   833,   833,   833,   833,   833,   833,
     833,   833,   833,   833,   833,   833,   833,   833,   833,   833,
     833,   833,   833,   833,   833,   833,   833,   833,   833,   833,
     833,   833,   833,   833,   833,   833,   833,   833,   833,   833,
     833,   833,   835,   834,   836,   836,   836,   836,   836,   836,
     836,   836,   836,   836,   836,   836,   836,   836,   836,   836,
     836,   836,   836,   837,   837,   838,   838,   839,   839,   840,
     840,   840,   840,   840,   841,   842,   842,   843,   843,   844,
     844,   845,   845,   846,   846,   847,   847,   847,   847,   847,
     847,   847,   847,   847,   847,   847,   847,   847,   847,   847,
     847,   847,   847,   847,   847,   847,   847,   847,   847,   847,
     847,   847,   847,   848,   848,   849,   849,   851,   850,   852,
     852,   852,   853,   853,   854,   854,   856,   855,   857,   857,
     858,   858,   860,   859,   861,   861,   862,   863,   863,   865,
     864,   866,   867,   867,   867,   867,   868,   869,   868,   870,
     870,   871,   871,   872,   872,   872,   872,   873,   873,   873,
     873,   874,   874,   875,   875,   876,   876,   876,   877,   877,
     878,   878,   880,   879,   881,   881,   883,   882,   884,   884,
     885,   885,   885,   885,   885,   887,   886,   888,   889,   889,
     890,   891,   893,   892,   894,   894,   895,   895,   896,   896,
     898,   897,   899,   899,   899,   899,   899,   899,   899,   900,
     901,   900,   902,   903,   903,   903,   903,   903,   904,   904,
     905,   905,   906,   906,   907,   907,   908,   908,   909,   909,
     909,   909,   909,   909,   909,   909,   909,   909,   909,   909,
     909,   909,   909,   909,   909,   910,   910,   912,   911,   913,
     913,   913,   913,   913,   914,   914,   916,   915,   917,   919,
     918,   920,   921,   921,   922,   922,   922,   923,   923,   924,
     924,   925,   926,   927,   927,   928,   928,   929,   929,   929,
     929,   930,   930,   931,   931,   933,   932,   934,   934,   934,
     934,   934,   934,   934,   935,   935,   937,   936,   938,   940,
     939,   941,   943,   942,   944,   945,   945,   946,   948,   947,
     949,   949,   949,   950,   950,   952,   951,   953,   954,   954,
     955,   955,   955,   956,   956,   957,   957,   958,   959,   959,
     959,   959,   959,   959,   959,   960,   960,   962,   961,   963,
     963,   965,   964,   966,   967,   967,   967,   968,   968,   968,
     968,   970,   969,   971,   972,   973,   973,   974,   974,   974,
     974,   974,   974,   975,   975,   976,   976,   977,   977,   977,
     977,   977,   978,   979,   979,   980,   980,   982,   981,   984,
     983,   985,   985,   987,   986,   988,   988,   989,   989,   991,
     990,   992,   992,   993,   993,   993,   993,   994,   994,   995,
     995,   995,   995,   997,   996,   998,   999,   998,   998,  1000,
    1000,  1001,  1001,  1002,  1002,  1003,  1003,  1003,  1003,  1003,
    1004,  1004,  1005,  1005,  1006,  1006,  1007,  1009,  1008,  1010,
    1011,  1011,  1012,  1012,  1012,  1012,  1012,  1012,  1012,  1013,
    1013,  1014,  1014,  1015,  1015,  1016,  1018,  1017,  1019,  1020,
    1022,  1021,  1023,  1024,  1024,  1026,  1025,  1027,  1028,  1028,
    1028,  1029,  1029,  1030,  1032,  1031,  1033,  1033,  1034,  1034,
    1035,  1035,  1036,  1036,  1037,  1038,  1038,  1040,  1039,  1041,
    1041,  1041,  1041,  1041,  1041,  1042,  1042,  1043,  1043,  1044,
    1045,  1046,  1046,  1047,  1047,  1047,  1047,  1047,  1047,  1047,
    1047,  1048,  1048,  1049,  1050,  1050,  1051,  1052,  1052,  1053,
    1053,  1055,  1054,  1057,  1056,  1058,  1058,  1059,  1059,  1060,
    1060,  1061,  1061,  1062,  1062,  1062,  1063,  1063,  1063,  1065,
    1064,  1066,  1067,  1067,  1068,  1068,  1068,  1068,  1069,  1069,
    1069,  1069,  1069,  1069,  1070,  1071,  1071,  1072,  1072,  1074,
    1073,  1073,  1075,  1075,  1075,  1075,  1076,  1076,  1077,  1077,
    1077,  1077,  1079,  1078,  1080,  1081,  1081,  1082,  1082,  1082,
    1083,  1083,  1084,  1084,  1086,  1085,  1087,  1087,  1087,  1088,
    1088,  1089,  1090,  1090,  1092,  1091,  1093,  1093,  1095,  1094,
    1096,  1098,  1097,  1099,  1100,  1100,  1100,  1102,  1101,  1103,
    1104,  1104,  1105,  1105,  1106,  1107,  1107,  1108,  1109,  1109,
    1110,  1110,  1111,  1111,  1112,  1112,  1114,  1113,  1115,  1115,
    1115,  1115,  1115,  1116,  1117,  1117,  1118,  1118,  1118,  1118,
    1118,  1119,  1120,  1120,  1121,  1121,  1121,  1122,  1122,  1122,
    1122,  1123,  1124,  1124,  1125,  1126,  1127,  1127,  1129,  1128,
    1130,  1131,  1131,  1132,  1132,  1132,  1132,  1133,  1133,  1134,
    1134,  1135,  1135,  1136,  1137,  1137,  1138,  1138,  1139,  1139,
    1140,  1140,  1141,  1142,  1142,  1143,  1143,  1144,  1145,  1145,
    1146,  1146,  1147,  1148,  1148,  1149,  1149,  1150,  1150,  1151,
    1151,  1151,  1152,  1153,  1154,  1154,  1154,  1155,  1156,  1157,
    1158,  1158,  1159,  1159,  1160,  1160,  1161,  1162,  1164,  1163,
    1165,  1165,  1165,  1166,  1166,  1166,  1166,  1166,  1166,  1166,
    1166,  1166,  1166,  1166,  1166,  1166,  1166,  1166,  1166,  1166,
    1166,  1166,  1166,  1166,  1166,  1166,  1166,  1167,  1167,  1168,
    1168,  1169,  1169,  1170,  1171,  1172,  1172,  1173,  1173,  1173,
    1174,  1174,  1174,  1175,  1175,  1175,  1176,  1176,  1177,  1177,
    1177,  1178,  1178,  1179,  1179,  1179,  1179,  1179,  1179,  1180,
    1180,  1181,  1182,  1183,  1184,  1184,  1185,  1186,  1187,  1187,
    1188,  1189,  1189,  1190,  1191,  1191,  1191,  1192,  1193,  1193,
    1194,  1195,  1196,  1196,  1197,  1198,  1198,  1199,  1200,  1201,
    1201,  1202,  1202,  1202,  1203,  1203,  1204,  1204,  1204,  1204,
    1204,  1204,  1204,  1204,  1204,  1204,  1205,  1205,  1206,  1206,
    1206,  1207,  1207,  1207,  1207,  1207,  1207,  1207,  1208,  1208,
    1209,  1209,  1210,  1210,  1211,  1211,  1212,  1212,  1213,  1213,
    1213,  1214,  1214,  1214,  1215,  1215,  1216,  1216,  1217,  1217,
    1217,  1218,  1219,  1220,  1220,  1221,  1222,  1222,  1222,  1222,
    1223,  1224,  1224,  1224,  1224,  1225,  1225,  1226,  1227,  1227,
    1228,  1229,  1230,  1231,  1231,  1231,  1231,  1231,  1231,  1231,
    1232,  1232,  1233,  1233,  1234,  1234,  1234,  1234,  1234,  1234,
    1234,  1235,  1235,  1235,  1235,  1235,  1235,  1235,  1235,  1235,
    1235,  1235,  1235,  1236,  1236,  1237,  1237,  1237,  1238,  1238,
    1238,  1238,  1239,  1239,  1239,  1240,  1240,  1240,  1241,  1241,
    1241,  1242,  1242,  1243,  1243,  1244,  1244,  1245,  1245,  1246,
    1247,  1247,  1248,  1248,  1249,  1249,  1250,  1250,  1251,  1251,
    1252,  1252,  1252,  1253,  1253,  1254,  1254,  1254,  1255,  1255,
    1256,  1256,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,
    1258,  1258,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1260,  1260,  1261,  1261,  1262,  1262,  1263,  1263,
    1264,  1264,  1265,  1265,  1266,  1266,  1267,  1267,  1268,  1268,
    1269,  1269,  1270,  1270,  1271,  1271,  1272,  1272,  1273,  1273,
    1274,  1274,  1275,  1275,  1276,  1276,  1277,  1277,  1277,  1278,
    1278,  1279,  1279,  1280,  1280,  1281,  1281,  1282,  1282,  1282,
    1283,  1283,  1284,  1284,  1284,  1285,  1285,  1285,  1286,  1286,
    1286,  1287,  1287,  1288,  1288,  1289,  1289,  1290,  1290,  1290,
    1291,  1291,  1292,  1292,  1293,  1293,  1293,  1293,  1294,  1294,
    1295,  1295,  1296,  1296,  1297,  1297,  1298,  1298,  1299,  1299,
    1300,  1300,  1301,  1301,  1301,  1302,  1302,  1303,  1303,  1304,
    1304,  1305,  1305,  1306,  1306,  1307,  1307,  1308,  1308,  1309,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     5,     5,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     0,     1,     1,     0,     1,     1,     3,     2,
       0,     0,     0,     9,     0,     4,     0,     0,     3,     0,
       3,     1,     2,     4,     0,     2,     2,     0,     3,     3,
       4,     4,     3,     0,     1,     0,     2,     0,     0,     7,
       0,     2,     1,     1,     2,     1,     1,     0,     6,     0,
       2,     2,     1,     0,     1,     0,     0,     3,     0,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     0,     4,     6,     3,     3,     4,     3,     4,
       3,     3,     4,     4,     3,     4,     3,     4,     5,     3,
       4,     3,     3,     1,     1,     1,     2,     0,     1,     3,
       3,     2,     2,     2,     3,     3,     3,     0,     1,     0,
       3,     0,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     4,     3,     1,     2,     1,     1,     3,     3,
       3,     3,     3,     1,     1,     0,     1,     0,     4,     4,
       5,     6,     0,     2,     0,     1,     0,     3,     3,     4,
       0,     2,     0,     3,     1,     2,     4,     0,     2,     0,
       4,     6,     0,     1,     1,     1,     0,     0,     3,     1,
       2,     2,     3,     0,     2,     2,     2,     0,     3,     2,
       4,     1,     1,     1,     1,     0,     2,     2,     0,     2,
       0,     1,     0,     3,     1,     2,     0,     3,     2,     3,
       0,     1,     3,     3,     2,     0,     4,     4,     0,     1,
       1,     1,     0,     4,     3,     2,     1,     2,     0,     1,
       0,     4,     3,     3,     3,     3,     4,     2,     4,     1,
       0,     3,     5,     0,     2,     2,     2,     2,     0,     2,
       1,     1,     0,     2,     0,     1,     1,     2,     1,     2,
       2,     1,     1,     2,     2,     1,     1,     1,     1,     3,
       1,     3,     3,     3,     3,     0,     1,     0,     4,     4,
       6,     6,     8,     8,     0,     1,     0,     3,     2,     0,
       4,     2,     1,     3,     1,     1,     1,     2,     1,     1,
       2,     2,     3,     2,     3,     1,     3,     2,     1,     1,
       1,     0,     2,     0,     1,     0,     3,     0,     2,     1,
       2,     1,     1,     1,     0,     2,     0,     3,     1,     0,
       3,     1,     0,     3,     3,     0,     3,     2,     0,     6,
       3,     2,     1,     0,     1,     0,     3,     5,     0,     2,
       0,     3,     3,     0,     2,     1,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     3,     1,
       2,     0,     3,     2,     1,     1,     1,     2,     1,     1,
       1,     0,     3,     2,     5,     1,     2,     2,     2,     1,
       1,     1,     2,     1,     2,     4,     2,     0,     1,     1,
       1,     1,     4,     0,     2,     3,     3,     0,     3,     0,
       3,     3,     4,     0,     4,     4,     6,     0,     1,     0,
       3,     4,     5,     1,     1,     1,     1,     0,     3,     0,
       3,     2,     1,     0,     3,     2,     0,     4,     2,     0,
       1,     1,     1,     1,     3,     0,     2,     1,     3,     3,
       0,     3,     1,     1,     1,     3,     7,     0,     4,     7,
       0,     2,     0,     2,     2,     3,     3,     3,     2,     0,
       3,     1,     1,     0,     1,     1,     0,     3,     2,     1,
       0,     4,     4,     0,     1,     0,     4,     4,     0,     2,
       3,     0,     1,     1,     0,     4,     4,     6,     0,     2,
       0,     2,     1,     2,     3,     0,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     3,     4,     1,     2,     3,     1,     2,     3,
       3,     0,     3,     0,     7,     0,     5,     0,     2,     0,
       2,     0,     3,     0,     2,     4,     0,     2,     4,     0,
       4,     4,     0,     3,     0,     4,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     1,     0,     1,     0,
       4,     2,     0,     2,     4,     4,     0,     1,     1,     1,
       1,     1,     0,     4,     5,     1,     2,     1,     3,     3,
       0,     4,     0,     1,     0,     4,     4,     6,     6,     0,
       1,     2,     0,     1,     0,     3,     1,     2,     0,     3,
       5,     0,     3,     2,     0,     1,     1,     0,     4,     6,
       0,     3,     1,     3,     2,     2,     2,     3,     0,     3,
       0,     3,     0,     3,     0,     1,     0,     3,     1,     1,
       1,     1,     1,     7,     0,     1,     1,     1,     1,     1,
       1,     4,     1,     2,     1,     2,     3,     0,     1,     2,
       1,     3,     1,     1,     4,     1,     1,     1,     0,     4,
       5,     0,     2,     0,     4,     3,     3,     1,     1,     1,
       1,     0,     1,     2,     0,     2,     1,     1,     0,     2,
       1,     1,     2,     0,     2,     0,     2,     2,     0,     2,
       0,     2,     2,     0,     2,     0,     2,     2,     1,     2,
       1,     1,     2,     2,     2,     1,     1,     2,     2,     2,
       0,     2,     0,     2,     0,     2,     1,     1,     0,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     1,     2,     2,
       1,     3,     1,     1,     3,     1,     3,     1,     3,     1,
       2,     2,     1,     1,     1,     2,     1,     1,     1,     2,
       1,     0,     2,     1,     1,     1,     3,     1,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     1,     2,     1,     1,     1,     1,
       2,     2,     2,     4,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     2,     2,     1,
       1,     3,     2,     2,     1,     1,     3,     3,     4,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     5,     5,     5,     4,     5,     5,     5,     5,
       5,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     5,     0,     3,     2,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     0,
       0,     1,     0,     1,     0,     1,     0,     2,     0,     2,
       0,     1,     1,     0,     1,     0,     1,     2,     0,     2,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     2,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       0,     1,     0,     1,     1,     0,     1,     1,     0,     2,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       0,     1,     0,     1,     0,     2,     1,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     1,     0,     1,     0,     3,     0,     1,     2,     1,
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
#line 1391 "parser.y" /* yacc.c:1646  */
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
#line 6209 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 1402 "parser.y" /* yacc.c:1646  */
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
#line 6232 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 1438 "parser.y" /* yacc.c:1646  */
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
#line 6256 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 1493 "parser.y" /* yacc.c:1646  */
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
#line 6281 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 1522 "parser.y" /* yacc.c:1646  */
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
#line 6306 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 1555 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 6314 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 1561 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 6322 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 1573 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 6330 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 1583 "parser.y" /* yacc.c:1646  */
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
#line 6365 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 1614 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6373 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 1621 "parser.y" /* yacc.c:1646  */
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
#line 6406 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 1657 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6412 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 1658 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6418 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1667 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6431 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 1676 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6444 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1690 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6452 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1694 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6460 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1704 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6468 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1713 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 6480 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1738 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 6493 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1756 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 6505 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1769 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
#line 6515 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1798 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 6523 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1805 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 6531 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1812 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 6539 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1819 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 6551 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1830 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6559 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1834 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6567 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1838 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6575 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1842 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6583 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1856 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 6592 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1861 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 6600 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1869 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 6608 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1881 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 6616 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1885 "parser.y" /* yacc.c:1646  */
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
#line 6632 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1906 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6640 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1910 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6648 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1917 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6657 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1922 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6666 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1933 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 6680 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1947 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	yyerrok;
  }
#line 6689 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1978 "parser.y" /* yacc.c:1646  */
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
#line 6717 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 2006 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 6731 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2016 "parser.y" /* yacc.c:1646  */
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
#line 6748 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2029 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 6760 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2045 "parser.y" /* yacc.c:1646  */
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
#line 6779 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2060 "parser.y" /* yacc.c:1646  */
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
#line 6798 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2080 "parser.y" /* yacc.c:1646  */
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
#line 6815 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2093 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 6827 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2104 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 6837 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2110 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6847 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2116 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6857 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2122 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 6867 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2128 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6877 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2134 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 6888 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2144 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 6896 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2148 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6904 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2155 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6912 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2159 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 6920 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2163 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 6928 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2167 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 6936 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2174 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6944 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2178 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 6952 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2184 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6958 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2185 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6964 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2186 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 6970 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2187 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 6976 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2188 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 6982 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2189 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 6988 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2193 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6994 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2194 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7000 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2202 "parser.y" /* yacc.c:1646  */
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
#line 7015 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2216 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7023 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2220 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7031 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2228 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7039 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2235 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7047 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2239 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7059 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2250 "parser.y" /* yacc.c:1646  */
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
#line 7080 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2270 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7092 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2278 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7104 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2288 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7110 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2289 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7116 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2296 "parser.y" /* yacc.c:1646  */
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
#line 7138 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2316 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7144 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2317 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7150 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2322 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7158 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2326 "parser.y" /* yacc.c:1646  */
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
#line 7178 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2347 "parser.y" /* yacc.c:1646  */
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
#line 7200 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2370 "parser.y" /* yacc.c:1646  */
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
#line 7281 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2451 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7289 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2455 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7297 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2464 "parser.y" /* yacc.c:1646  */
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
#line 7314 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2483 "parser.y" /* yacc.c:1646  */
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
#line 7329 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2499 "parser.y" /* yacc.c:1646  */
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
#line 7345 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2517 "parser.y" /* yacc.c:1646  */
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
#line 7361 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2535 "parser.y" /* yacc.c:1646  */
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
#line 7377 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2552 "parser.y" /* yacc.c:1646  */
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
#line 7393 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 2569 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7402 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 2577 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7412 "parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 2586 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7422 "parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 2601 "parser.y" /* yacc.c:1646  */
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
#line 7443 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2618 "parser.y" /* yacc.c:1646  */
    {
	validate_file (current_file, (yyvsp[-3]));
  }
#line 7451 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2622 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
#line 7463 "parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 2656 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 7473 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2662 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 7487 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2672 "parser.y" /* yacc.c:1646  */
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
#line 7504 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 2685 "parser.y" /* yacc.c:1646  */
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
#line 7521 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 2698 "parser.y" /* yacc.c:1646  */
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
#line 7538 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 2721 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 7546 "parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 2728 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 7554 "parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 2741 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7562 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 2753 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
#line 7571 "parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2760 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 7577 "parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 2761 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 7583 "parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 2762 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 7589 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2770 "parser.y" /* yacc.c:1646  */
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
#line 7614 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 2793 "parser.y" /* yacc.c:1646  */
    { }
#line 7620 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 2796 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
#line 7628 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2801 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 7636 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2811 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
#line 7645 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2822 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[0]);
  }
#line 7654 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 2837 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
#line 7662 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 2845 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 7671 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 2850 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 7680 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 2855 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 7689 "parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 2864 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 7697 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2868 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 7706 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2884 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 7715 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2889 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 7724 "parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2894 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 7733 "parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2899 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 7742 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2910 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 7751 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2921 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
#line 7759 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2931 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[0]);
  }
#line 7768 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2938 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7774 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2939 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 7780 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2940 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 7786 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2947 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[0]);
  }
#line 7795 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2958 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
#line 7803 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2972 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[0]);
  }
#line 7812 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2979 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7818 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2980 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 7824 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2981 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7830 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2990 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7838 "parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 3009 "parser.y" /* yacc.c:1646  */
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
#line 7867 "parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 3036 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 7873 "parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 3037 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 7879 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 3038 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7885 "parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 3039 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7891 "parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 3046 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 7900 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 3051 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 7912 "parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 3078 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 7920 "parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 3087 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 7930 "parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 3101 "parser.y" /* yacc.c:1646  */
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
#line 7948 "parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 3120 "parser.y" /* yacc.c:1646  */
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
#line 7968 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3137 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7976 "parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 3144 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7984 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3148 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7992 "parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 3159 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8006 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 3169 "parser.y" /* yacc.c:1646  */
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
#line 8025 "parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 3199 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
#line 8034 "parser.c" /* yacc.c:1646  */
    break;

  case 310:
#line 3212 "parser.y" /* yacc.c:1646  */
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
#line 8058 "parser.c" /* yacc.c:1646  */
    break;

  case 311:
#line 3232 "parser.y" /* yacc.c:1646  */
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
#line 8096 "parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 3267 "parser.y" /* yacc.c:1646  */
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
#line 8128 "parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 3298 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8136 "parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 3304 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8142 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3305 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8148 "parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 3309 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8154 "parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 3310 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8160 "parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 3318 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8169 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3329 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8178 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3334 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8190 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 3357 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8199 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 3369 "parser.y" /* yacc.c:1646  */
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
#line 8218 "parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 3397 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8226 "parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 3404 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8234 "parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 3411 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8242 "parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 3420 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
#line 8252 "parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 3432 "parser.y" /* yacc.c:1646  */
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
#line 8303 "parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3484 "parser.y" /* yacc.c:1646  */
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
#line 8319 "parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3504 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8333 "parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3514 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8346 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3554 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8356 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3560 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8366 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3569 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8374 "parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3572 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8384 "parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3578 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 8397 "parser.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3598 "parser.y" /* yacc.c:1646  */
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
#line 8416 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3613 "parser.y" /* yacc.c:1646  */
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
#line 8440 "parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3633 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8454 "parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3646 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8462 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3653 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8472 "parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3659 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8482 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3665 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8492 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3674 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8502 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3683 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 8510 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3687 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 8523 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3698 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8529 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3699 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8535 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3700 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8541 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3701 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8547 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3706 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8555 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3710 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8563 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3714 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 8571 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3718 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 8579 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3722 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8587 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3726 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 8595 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3730 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 8603 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3734 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 8611 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3738 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 8619 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3742 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 8627 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3746 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8635 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3750 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 8643 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3754 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8655 "parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3786 "parser.y" /* yacc.c:1646  */
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
#line 8682 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3812 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8690 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3816 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 8699 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3824 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 8708 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3830 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 8717 "parser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 3858 "parser.y" /* yacc.c:1646  */
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
#line 8739 "parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 3882 "parser.y" /* yacc.c:1646  */
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
#line 8767 "parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 3909 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 8775 "parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 3913 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 8783 "parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 3922 "parser.y" /* yacc.c:1646  */
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
#line 8806 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 3947 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 8815 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3963 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8823 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 3967 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8831 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 3971 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 8839 "parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 3975 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 8847 "parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 3979 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8855 "parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 3983 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8863 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 3987 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 8871 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 3991 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 8879 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 3995 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 8887 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 3999 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 8895 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4003 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 8903 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4007 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8911 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4011 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8920 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4016 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8929 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4021 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 8937 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4025 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 8945 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4029 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 8957 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4037 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 8965 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4041 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 8973 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4045 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 8985 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4053 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 8993 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4057 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9001 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4061 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9009 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4065 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9017 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4069 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9025 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4073 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9033 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4077 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9041 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4081 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9049 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4085 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9061 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4093 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9073 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4101 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9081 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4105 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9089 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4109 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9097 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4113 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9105 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4117 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9113 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4121 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
#line 9122 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4141 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9132 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4147 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9142 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4160 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
	if (current_field->depending && !((yyvsp[-3]))) {
		cb_verify (cb_odo_without_to, _("ODO without TO clause"));
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
#line 9161 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4178 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9169 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4188 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
	if (current_field->indexes == COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	} else {
		current_field->indexes++;
	}
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	}
	if ((yyvsp[-4])) {
		current_field->occurs_min = cb_get_int ((yyvsp[-5]));
		current_field->occurs_max = cb_get_int ((yyvsp[-4]));
		if (current_field->depending &&
			current_field->occurs_max > 0 &&
			current_field->occurs_max <= current_field->occurs_min) {
			cb_error (_("OCCURS max. must be greater than OCCURS min."));
		}
	} else {
		current_field->occurs_min = 1;
		current_field->occurs_max = cb_get_int ((yyvsp[-5]));
		if (current_field->depending) {
			cb_verify (cb_odo_without_to, "ODO without TO clause");
		}
	}
	current_field->flag_occurs = 1;
  }
#line 9204 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4220 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
	if (current_field->indexes == COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	} else {
		current_field->indexes++;
	}
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	}
	current_field->occurs_min = (yyvsp[-4]) ? cb_get_int ((yyvsp[-4])) : 0;
	if ((yyvsp[-3])) {
		current_field->occurs_max = cb_get_int ((yyvsp[-3]));
		if (current_field->occurs_max <= current_field->occurs_min) {
			cb_error (_("OCCURS max. must be greater than OCCURS min."));
		}
	} else {
		current_field->occurs_max = 0;
	}
	PENDING("OCCURS with DYNAMIC capacity");
	current_field->flag_occurs = 1;
  }
#line 9234 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4248 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9240 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4249 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9246 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4253 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9252 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4254 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9258 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4259 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9266 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4266 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9275 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4274 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9283 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4281 "parser.y" /* yacc.c:1646  */
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
#line 9308 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4304 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9314 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4307 "parser.y" /* yacc.c:1646  */
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
#line 9331 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4322 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9337 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4323 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9343 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4328 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9351 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4334 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9357 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4336 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9363 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4341 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9372 "parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4352 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
#line 9381 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4363 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
#line 9390 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4374 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
#line 9399 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4385 "parser.y" /* yacc.c:1646  */
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
#line 9426 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4413 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[0]);
  }
#line 9435 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4421 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9441 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4422 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9447 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4426 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9453 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4427 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 9459 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4432 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 9470 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4445 "parser.y" /* yacc.c:1646  */
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
#line 9487 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4458 "parser.y" /* yacc.c:1646  */
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
#line 9507 "parser.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4479 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 9520 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4488 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 9534 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4503 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 9547 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4512 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9557 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4524 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 9567 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4530 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9577 "parser.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4541 "parser.y" /* yacc.c:1646  */
    {
	PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 9587 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4557 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 9600 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4572 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9608 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4579 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 9617 "parser.c" /* yacc.c:1646  */
    break;

  case 516:
#line 4584 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
#line 9625 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4595 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
#line 9633 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 4614 "parser.y" /* yacc.c:1646  */
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
#line 9670 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4650 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 9678 "parser.c" /* yacc.c:1646  */
    break;

  case 525:
#line 4654 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 9687 "parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 4659 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 9695 "parser.c" /* yacc.c:1646  */
    break;

  case 534:
#line 4679 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 9703 "parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 4686 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 9711 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 4693 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 9719 "parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 4700 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 9727 "parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 4707 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 9735 "parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 4718 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 9743 "parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 4749 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
#line 9751 "parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 4775 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
#line 9759 "parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 4782 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
  }
#line 9767 "parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 4798 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
  }
#line 9775 "parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 4809 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
  }
#line 9783 "parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 4821 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
  }
#line 9791 "parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 4854 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
  }
#line 9799 "parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 4861 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
  }
#line 9807 "parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 4868 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
#line 9815 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 4877 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 9826 "parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 4884 "parser.y" /* yacc.c:1646  */
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
#line 9842 "parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 4909 "parser.y" /* yacc.c:1646  */
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
#line 9877 "parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 4940 "parser.y" /* yacc.c:1646  */
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
#line 9910 "parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 4969 "parser.y" /* yacc.c:1646  */
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
#line 9930 "parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 4992 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 9938 "parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 4996 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 9946 "parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5000 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 9954 "parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5004 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 9962 "parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5008 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 9970 "parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5012 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 9978 "parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 5016 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 9986 "parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 5020 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 9994 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5024 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10002 "parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5028 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10010 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5032 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	PENDING ("OVERLINE");
  }
#line 10019 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5037 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	PENDING ("GRID");
  }
#line 10028 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5042 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	PENDING ("LEFTLINE");
  }
#line 10037 "parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 5047 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10045 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5051 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10053 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5055 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10061 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5059 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10069 "parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 5063 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10078 "parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 5068 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10086 "parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 5072 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10094 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5076 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10103 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5081 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10112 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5086 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10121 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5091 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10130 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5104 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10141 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5111 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10150 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5116 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10160 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5135 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10168 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5139 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10176 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5143 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10184 "parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 5150 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10192 "parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 5154 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10200 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5158 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10208 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5166 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_23);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10220 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5177 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10228 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5186 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10242 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5196 "parser.y" /* yacc.c:1646  */
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
#line 10258 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5208 "parser.y" /* yacc.c:1646  */
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
#line 10277 "parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5223 "parser.y" /* yacc.c:1646  */
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
#line 10310 "parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5256 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10318 "parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5260 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 10327 "parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 5265 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10339 "parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 5273 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 10352 "parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 5282 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10364 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5292 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10370 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5294 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 10376 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5299 "parser.y" /* yacc.c:1646  */
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
#line 10393 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5316 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 10401 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5320 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 10413 "parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 5332 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 10425 "parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 5340 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 10437 "parser.c" /* yacc.c:1646  */
    break;

  case 680:
#line 5348 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 10449 "parser.c" /* yacc.c:1646  */
    break;

  case 681:
#line 5356 "parser.y" /* yacc.c:1646  */
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
#line 10482 "parser.c" /* yacc.c:1646  */
    break;

  case 682:
#line 5385 "parser.y" /* yacc.c:1646  */
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
#line 10515 "parser.c" /* yacc.c:1646  */
    break;

  case 683:
#line 5417 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 10523 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5421 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 10536 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5433 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 10546 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5439 "parser.y" /* yacc.c:1646  */
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
#line 10575 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5467 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 10584 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5473 "parser.y" /* yacc.c:1646  */
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
#line 10614 "parser.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5511 "parser.y" /* yacc.c:1646  */
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
#line 10635 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5529 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 10643 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 5539 "parser.y" /* yacc.c:1646  */
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
#line 10691 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 5583 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 10699 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 5594 "parser.y" /* yacc.c:1646  */
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
#line 10748 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5642 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	YYERROR;
  }
#line 10761 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 5654 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10769 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 5658 "parser.y" /* yacc.c:1646  */
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
#line 10785 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5676 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 10795 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 5681 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 10804 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 5686 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 10814 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 5694 "parser.y" /* yacc.c:1646  */
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
#line 10845 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 5721 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 10853 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 5725 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 10861 "parser.c" /* yacc.c:1646  */
    break;

  case 760:
#line 5781 "parser.y" /* yacc.c:1646  */
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
#line 10879 "parser.c" /* yacc.c:1646  */
    break;

  case 761:
#line 5795 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 10888 "parser.c" /* yacc.c:1646  */
    break;

  case 762:
#line 5806 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}

  }
#line 10903 "parser.c" /* yacc.c:1646  */
    break;

  case 764:
#line 5823 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-5]), (yyvsp[-4]), current_statement->attr_ptr);
  }
#line 10912 "parser.c" /* yacc.c:1646  */
    break;

  case 765:
#line 5828 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 10920 "parser.c" /* yacc.c:1646  */
    break;

  case 766:
#line 5832 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 10928 "parser.c" /* yacc.c:1646  */
    break;

  case 767:
#line 5836 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 10937 "parser.c" /* yacc.c:1646  */
    break;

  case 768:
#line 5841 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 10946 "parser.c" /* yacc.c:1646  */
    break;

  case 769:
#line 5846 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 10955 "parser.c" /* yacc.c:1646  */
    break;

  case 770:
#line 5851 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 10964 "parser.c" /* yacc.c:1646  */
    break;

  case 771:
#line 5856 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 10972 "parser.c" /* yacc.c:1646  */
    break;

  case 772:
#line 5860 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 10980 "parser.c" /* yacc.c:1646  */
    break;

  case 773:
#line 5864 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 10988 "parser.c" /* yacc.c:1646  */
    break;

  case 774:
#line 5868 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 10996 "parser.c" /* yacc.c:1646  */
    break;

  case 775:
#line 5872 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11005 "parser.c" /* yacc.c:1646  */
    break;

  case 776:
#line 5877 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11013 "parser.c" /* yacc.c:1646  */
    break;

  case 777:
#line 5881 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11021 "parser.c" /* yacc.c:1646  */
    break;

  case 778:
#line 5885 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 11029 "parser.c" /* yacc.c:1646  */
    break;

  case 779:
#line 5889 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 11037 "parser.c" /* yacc.c:1646  */
    break;

  case 780:
#line 5893 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11045 "parser.c" /* yacc.c:1646  */
    break;

  case 781:
#line 5897 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11053 "parser.c" /* yacc.c:1646  */
    break;

  case 782:
#line 5901 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11061 "parser.c" /* yacc.c:1646  */
    break;

  case 784:
#line 5909 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11069 "parser.c" /* yacc.c:1646  */
    break;

  case 787:
#line 5920 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11075 "parser.c" /* yacc.c:1646  */
    break;

  case 788:
#line 5921 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11081 "parser.c" /* yacc.c:1646  */
    break;

  case 789:
#line 5925 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0])); }
#line 11087 "parser.c" /* yacc.c:1646  */
    break;

  case 790:
#line 5926 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1])); }
#line 11093 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 5927 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), cb_int0); }
#line 11099 "parser.c" /* yacc.c:1646  */
    break;

  case 792:
#line 5928 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[0])); }
#line 11105 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 5929 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11111 "parser.c" /* yacc.c:1646  */
    break;

  case 794:
#line 5933 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11117 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 5937 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11123 "parser.c" /* yacc.c:1646  */
    break;

  case 796:
#line 5938 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11129 "parser.c" /* yacc.c:1646  */
    break;

  case 800:
#line 5947 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11137 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 5963 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11145 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 5967 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11155 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 5973 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11163 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 5977 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11171 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 5981 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11179 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 5985 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11187 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 5989 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 11195 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 5993 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11203 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 5997 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11211 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6001 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 11219 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6005 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11227 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6009 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11235 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6013 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 11243 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6017 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11251 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6021 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11259 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6025 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11267 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6029 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11275 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6033 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11283 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6037 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11291 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6041 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11299 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6045 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11309 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6051 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11317 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6055 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11325 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6059 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 11333 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6063 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 11341 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6067 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 11349 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6071 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 11357 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6075 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 11365 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6087 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 11373 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6091 "parser.y" /* yacc.c:1646  */
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
#line 11388 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6108 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 11396 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6117 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 11404 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6121 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 11412 "parser.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6125 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 11420 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6132 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11428 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6139 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 11436 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6143 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 11444 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6153 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 11453 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6162 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 11461 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6166 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 11474 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6177 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11480 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6178 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11486 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6186 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 11495 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6200 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 11503 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6212 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
#line 11512 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6227 "parser.y" /* yacc.c:1646  */
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
#line 11527 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6241 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 11536 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 6246 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 11545 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6251 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 11554 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6256 "parser.y" /* yacc.c:1646  */
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
#line 11575 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6276 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11583 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6280 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11592 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6285 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11605 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6296 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11611 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6298 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11617 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6303 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 11629 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6311 "parser.y" /* yacc.c:1646  */
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
#line 11655 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 6337 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11663 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6341 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 11676 "parser.c" /* yacc.c:1646  */
    break;

  case 876:
#line 6350 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11689 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6362 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11697 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6366 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11705 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 6370 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11713 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6374 "parser.y" /* yacc.c:1646  */
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
#line 11737 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6407 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11745 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6412 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11753 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 6417 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW clause");
	(yyval) = (yyvsp[0]);
  }
#line 11762 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6425 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11770 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6430 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11778 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6437 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 11786 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6441 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 11794 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 6451 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 11802 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 6459 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 11810 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 6463 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 11818 "parser.c" /* yacc.c:1646  */
    break;

  case 896:
#line 6473 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 11826 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 6481 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 11835 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 6486 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 11844 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 6493 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 11850 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 6494 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 11856 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 6495 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 11862 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 6496 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 11868 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 6497 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 11874 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 6505 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 11882 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 6514 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 11890 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 6521 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 11898 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 6525 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 11906 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 6535 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 11915 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 6546 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 11930 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 6563 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 11938 "parser.c" /* yacc.c:1646  */
    break;

  case 914:
#line 6572 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 11946 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 6580 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 11955 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 6585 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 11964 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 6593 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 11972 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 6597 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 11980 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 6607 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 11989 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 6617 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 11997 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 6621 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 12005 "parser.c" /* yacc.c:1646  */
    break;

  case 924:
#line 6625 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 12013 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 6629 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 12021 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 6633 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), NULL, NULL);
  }
#line 12029 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 6638 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[-3])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
#line 12039 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 6648 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
  }
#line 12047 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 6656 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[-4])), cb_null, cb_int1,
			 (yyvsp[-3]), current_statement->attr_ptr);
  }
#line 12056 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 6664 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12068 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 6672 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12076 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 6676 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_name ((yyvsp[0]));
  }
#line 12084 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 6680 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 12092 "parser.c" /* yacc.c:1646  */
    break;

  case 937:
#line 6684 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12104 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 6706 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12112 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 6712 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 12118 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 6713 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 12124 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 6724 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12132 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 6728 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
#line 12140 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 6732 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
#line 12148 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 6736 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12156 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 6740 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12164 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 6744 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
#line 12172 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 6748 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
#line 12180 "parser.c" /* yacc.c:1646  */
    break;

  case 955:
#line 6752 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 12188 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 6756 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 12196 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 6760 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12204 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 6764 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12212 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 6768 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12220 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 6772 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12228 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 6776 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12236 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 6780 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12244 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 6784 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12252 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 6788 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12260 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 6795 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 12268 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 6799 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 12276 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 6809 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 12284 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 6818 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 12292 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 6822 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 12300 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 6826 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 12308 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 6830 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12316 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 6834 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12324 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 6841 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 12332 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 6845 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 12340 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 6855 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 12349 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 6864 "parser.y" /* yacc.c:1646  */
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
#line 12365 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 6882 "parser.y" /* yacc.c:1646  */
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
#line 12388 "parser.c" /* yacc.c:1646  */
    break;

  case 981:
#line 6906 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 12397 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 6913 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12403 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 6915 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12409 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 6920 "parser.y" /* yacc.c:1646  */
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
#line 12424 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 6931 "parser.y" /* yacc.c:1646  */
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
#line 12439 "parser.c" /* yacc.c:1646  */
    break;

  case 986:
#line 6942 "parser.y" /* yacc.c:1646  */
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
#line 12454 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 6956 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12462 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 6960 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12470 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 6966 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12476 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 6968 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 12482 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 6974 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 12491 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 6983 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 12500 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 6991 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12509 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 6997 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12518 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7004 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12524 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7006 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12530 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7011 "parser.y" /* yacc.c:1646  */
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
#line 12596 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7072 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 12602 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7073 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 12608 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7074 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 12614 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7078 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12620 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7079 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12626 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7084 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 12634 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7088 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 12642 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7098 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 12651 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7103 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12659 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7111 "parser.y" /* yacc.c:1646  */
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
#line 12684 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7132 "parser.y" /* yacc.c:1646  */
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
#line 12702 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7146 "parser.y" /* yacc.c:1646  */
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
#line 12728 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7168 "parser.y" /* yacc.c:1646  */
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
#line 12754 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7190 "parser.y" /* yacc.c:1646  */
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
#line 12778 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7210 "parser.y" /* yacc.c:1646  */
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
#line 12802 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7232 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12808 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7233 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12814 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7241 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12823 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7250 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 12831 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7260 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
#line 12840 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7276 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 12853 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7289 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 12862 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7297 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 12871 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7302 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 12880 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7313 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 12893 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7328 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 12901 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7337 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 12909 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7341 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 12917 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7345 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 12925 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7352 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 12933 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7356 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 12941 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7366 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 12949 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7375 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 12957 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7381 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12963 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7382 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 12969 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7386 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12975 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7387 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 12981 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 7388 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 12987 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7393 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12995 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7397 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13003 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 7404 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13011 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 7409 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13019 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 7416 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 13027 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7422 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 13033 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7423 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 13039 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 7424 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 13045 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 7425 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 13051 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 7426 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13057 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 7427 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13063 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 7428 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13069 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 7433 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13077 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 7437 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13085 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 7446 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
#line 13094 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 7455 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13104 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 7461 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13114 "parser.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 7472 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13123 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 7485 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13131 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 7489 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13139 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 7493 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13147 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 7509 "parser.y" /* yacc.c:1646  */
    {
	cb_init_tallying ();
  }
#line 13155 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 7513 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	(yyval) = (yyvsp[-3]);
  }
#line 13164 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 7523 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13173 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 7533 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13183 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 7541 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13189 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 7542 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13195 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 7546 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_data ((yyvsp[-1])); }
#line 13201 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 7547 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_characters ((yyvsp[0])); }
#line 13207 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 7548 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_all (); }
#line 13213 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 7549 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_leading (); }
#line 13219 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 7550 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_trailing (); }
#line 13225 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 7551 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0])); }
#line 13231 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 7555 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13237 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 7556 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13243 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 7561 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 13252 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 7566 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13260 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 7572 "parser.y" /* yacc.c:1646  */
    { /* Nothing */ }
#line 13266 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 7573 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 13272 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 7574 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 13278 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 7575 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 13284 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 7576 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 13290 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 7581 "parser.y" /* yacc.c:1646  */
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
#line 13316 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 7608 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 13324 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 7612 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13332 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 7619 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0])));
  }
#line 13340 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 7623 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0])));
  }
#line 13348 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 7632 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 13357 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 7644 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 13365 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 7652 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13373 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 7656 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13381 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 7666 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 13389 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 7675 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 13397 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 7679 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 13405 "parser.c" /* yacc.c:1646  */
    break;

  case 1107:
#line 7686 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 13413 "parser.c" /* yacc.c:1646  */
    break;

  case 1108:
#line 7690 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 13421 "parser.c" /* yacc.c:1646  */
    break;

  case 1109:
#line 7700 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 13429 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 7708 "parser.y" /* yacc.c:1646  */
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
#line 13454 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 7729 "parser.y" /* yacc.c:1646  */
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
#line 13479 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 7752 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 13485 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 7753 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 13491 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 7754 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 13497 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 7755 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 13503 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 7759 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13509 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 7760 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13515 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 7764 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13521 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 7765 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13527 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 7766 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 13533 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 7768 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 13542 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 7779 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13553 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 7790 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 13562 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 7795 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 13572 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 7801 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 13581 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 7806 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 13590 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 7814 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 13602 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 7822 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 13610 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 7829 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 13618 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 7833 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 13632 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 7846 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 13643 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 7853 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13655 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 7864 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 13663 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 7868 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 13672 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 7873 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 13680 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 7877 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 13695 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 7888 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13703 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 7894 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 13709 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 7895 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13715 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 7899 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13721 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 7900 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13727 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 7903 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13733 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 7905 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13739 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 7910 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13747 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 7920 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 13755 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 7929 "parser.y" /* yacc.c:1646  */
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
#line 13783 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 7955 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13789 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 7956 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13795 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 7961 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13803 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 7965 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 13811 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 7969 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13819 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 7973 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13827 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 7977 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 13835 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 7981 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 13843 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 7985 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 13851 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 7991 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13857 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 7992 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13863 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8002 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 13871 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8006 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 13879 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8016 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 13888 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8026 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 13896 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8034 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13904 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8044 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 13913 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8054 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 13921 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8063 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 13929 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8070 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 13937 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8074 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 13945 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8084 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13956 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8096 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 13965 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8104 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13973 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8108 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13981 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8112 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 13989 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8119 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 13997 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8123 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 14005 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8133 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 14014 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8144 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 14022 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8153 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14030 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8158 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14039 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8165 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14045 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8166 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14051 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8171 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14059 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8176 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14067 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8183 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14075 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8187 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14083 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8195 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14091 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8202 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14099 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8206 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14107 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8216 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14118 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8223 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14126 "parser.c" /* yacc.c:1646  */
    break;

  case 1205:
#line 8238 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14132 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 8239 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14138 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 8243 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14144 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8244 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14150 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 8251 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14158 "parser.c" /* yacc.c:1646  */
    break;

  case 1210:
#line 8260 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 14166 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 8272 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 14174 "parser.c" /* yacc.c:1646  */
    break;

  case 1214:
#line 8276 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 14182 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8280 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
  }
#line 14190 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8284 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
  }
#line 14198 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 8288 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 14206 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 8292 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 14214 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 8296 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 14222 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 8300 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 14230 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 8309 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 14238 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 8313 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14246 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 8322 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14254 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 8336 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14262 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 8350 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 14270 "parser.c" /* yacc.c:1646  */
    break;

  case 1230:
#line 8354 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 14278 "parser.c" /* yacc.c:1646  */
    break;

  case 1231:
#line 8364 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 14286 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 8372 "parser.y" /* yacc.c:1646  */
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
#line 14311 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 8393 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 14321 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 8402 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14329 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 8407 "parser.y" /* yacc.c:1646  */
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
#line 14349 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 8425 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14355 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 8426 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14361 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 8431 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 14370 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 8438 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 14376 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 8439 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 14382 "parser.c" /* yacc.c:1646  */
    break;

  case 1243:
#line 8444 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 14392 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 8450 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 14406 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 8460 "parser.y" /* yacc.c:1646  */
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
#line 14422 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 8475 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 14432 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 8481 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 14446 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 8491 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 14460 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 8507 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 14469 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 8517 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 14482 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 8529 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14490 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 8533 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14498 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 8540 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14506 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 8544 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 14515 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 8549 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 14524 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 8554 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 14533 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 8561 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 14539 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 8562 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 14545 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 8563 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 14551 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 8564 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 14557 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 8565 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 14563 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 8566 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 14569 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 8571 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 14578 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 8584 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 14586 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 8588 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 14594 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 8598 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 14602 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 8602 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 14612 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 8608 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 14625 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 8620 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 14633 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 8624 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14641 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 8628 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 14653 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 8636 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 14665 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 8647 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14673 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 8651 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14681 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 8657 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14687 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 8658 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 14693 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 8659 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 14699 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 8660 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 14705 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 8667 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 14713 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 8676 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 14721 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 8682 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14727 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 8683 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14733 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 8687 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14739 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 8688 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 14745 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 8689 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 14751 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 8693 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14757 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 8694 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14763 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 8699 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 14771 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 8703 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 14779 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 8713 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 14787 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 8722 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 14795 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 8726 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 14803 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 8730 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 14811 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 8737 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 14819 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 8741 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 14827 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 8751 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	PENDING("SUPPRESS");
  }
#line 14840 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 8769 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
#line 14849 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 8778 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14859 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 8784 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14869 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 8795 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 14877 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 8803 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 14888 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 8816 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 14896 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 8824 "parser.y" /* yacc.c:1646  */
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
#line 14911 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 8847 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 14919 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 8857 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 14927 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 8863 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14933 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 8865 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14939 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 8869 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14945 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 8871 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14951 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 8876 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14959 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 8882 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14965 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 8884 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14971 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 8889 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14979 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 8895 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14985 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 8896 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14991 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 8900 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14997 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 8901 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15003 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 8905 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15009 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 8906 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15015 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 8911 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 15023 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 8915 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 15031 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 8925 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 15040 "parser.c" /* yacc.c:1646  */
    break;

  case 1343:
#line 8943 "parser.y" /* yacc.c:1646  */
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
#line 15066 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 8968 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15074 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 8972 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15087 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 8984 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15101 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 8994 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15110 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 8999 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15119 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9004 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15128 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9009 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15137 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9017 "parser.y" /* yacc.c:1646  */
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
#line 15176 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9060 "parser.y" /* yacc.c:1646  */
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
#line 15220 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9100 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 15234 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9110 "parser.y" /* yacc.c:1646  */
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
#line 15259 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9140 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 15269 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9149 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 15279 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9155 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 15289 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9165 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
#line 15299 "parser.c" /* yacc.c:1646  */
    break;

  case 1365:
#line 9174 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 15309 "parser.c" /* yacc.c:1646  */
    break;

  case 1368:
#line 9190 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15320 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9202 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 15331 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9211 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15337 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9212 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15343 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9217 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 15351 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9221 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15359 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9225 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15367 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9229 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 15375 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9235 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 15381 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9236 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 15387 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9246 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 15395 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9250 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 15403 "parser.c" /* yacc.c:1646  */
    break;

  case 1385:
#line 9267 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15412 "parser.c" /* yacc.c:1646  */
    break;

  case 1389:
#line 9282 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15421 "parser.c" /* yacc.c:1646  */
    break;

  case 1394:
#line 9300 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15430 "parser.c" /* yacc.c:1646  */
    break;

  case 1396:
#line 9310 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15439 "parser.c" /* yacc.c:1646  */
    break;

  case 1399:
#line 9325 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15448 "parser.c" /* yacc.c:1646  */
    break;

  case 1401:
#line 9335 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15457 "parser.c" /* yacc.c:1646  */
    break;

  case 1404:
#line 9352 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15466 "parser.c" /* yacc.c:1646  */
    break;

  case 1406:
#line 9363 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15475 "parser.c" /* yacc.c:1646  */
    break;

  case 1412:
#line 9386 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15484 "parser.c" /* yacc.c:1646  */
    break;

  case 1413:
#line 9395 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15493 "parser.c" /* yacc.c:1646  */
    break;

  case 1417:
#line 9412 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15502 "parser.c" /* yacc.c:1646  */
    break;

  case 1418:
#line 9421 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15511 "parser.c" /* yacc.c:1646  */
    break;

  case 1421:
#line 9438 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15520 "parser.c" /* yacc.c:1646  */
    break;

  case 1423:
#line 9448 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15529 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 9458 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 15537 "parser.c" /* yacc.c:1646  */
    break;

  case 1425:
#line 9462 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 15545 "parser.c" /* yacc.c:1646  */
    break;

  case 1426:
#line 9472 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 15553 "parser.c" /* yacc.c:1646  */
    break;

  case 1427:
#line 9479 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 15561 "parser.c" /* yacc.c:1646  */
    break;

  case 1428:
#line 9485 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 15570 "parser.c" /* yacc.c:1646  */
    break;

  case 1429:
#line 9490 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 15578 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 9503 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 15590 "parser.c" /* yacc.c:1646  */
    break;

  case 1434:
#line 9511 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 15596 "parser.c" /* yacc.c:1646  */
    break;

  case 1435:
#line 9512 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 15602 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 9514 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 15608 "parser.c" /* yacc.c:1646  */
    break;

  case 1437:
#line 9515 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 15614 "parser.c" /* yacc.c:1646  */
    break;

  case 1438:
#line 9516 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 15620 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 9517 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 15626 "parser.c" /* yacc.c:1646  */
    break;

  case 1440:
#line 9518 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 15632 "parser.c" /* yacc.c:1646  */
    break;

  case 1441:
#line 9520 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 15638 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 9521 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 15644 "parser.c" /* yacc.c:1646  */
    break;

  case 1443:
#line 9522 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 15650 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 9523 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 15656 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 9524 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 15662 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 9525 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 15668 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 9527 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 15674 "parser.c" /* yacc.c:1646  */
    break;

  case 1448:
#line 9528 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 15680 "parser.c" /* yacc.c:1646  */
    break;

  case 1449:
#line 9529 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 15686 "parser.c" /* yacc.c:1646  */
    break;

  case 1450:
#line 9531 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 15692 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 9532 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 15698 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 9533 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 15704 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 9534 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 15710 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 9535 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 15716 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 9538 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 15722 "parser.c" /* yacc.c:1646  */
    break;

  case 1456:
#line 9539 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 15728 "parser.c" /* yacc.c:1646  */
    break;

  case 1465:
#line 9569 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15736 "parser.c" /* yacc.c:1646  */
    break;

  case 1466:
#line 9573 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15744 "parser.c" /* yacc.c:1646  */
    break;

  case 1470:
#line 9584 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 15750 "parser.c" /* yacc.c:1646  */
    break;

  case 1471:
#line 9585 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 15756 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 9586 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15762 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 9590 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 15768 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 9591 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 15774 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 9592 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15780 "parser.c" /* yacc.c:1646  */
    break;

  case 1476:
#line 9597 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 15788 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 9600 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15794 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 9604 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15800 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 9605 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 15806 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 9606 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15812 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 9609 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 15818 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 9610 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15824 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 9621 "parser.y" /* yacc.c:1646  */
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
#line 15840 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 9633 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15853 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 9642 "parser.y" /* yacc.c:1646  */
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
#line 15869 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 9654 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15882 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 9663 "parser.y" /* yacc.c:1646  */
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
#line 15898 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 9675 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15911 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 9689 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15917 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 9691 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 15923 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 9696 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 15931 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 9704 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 15937 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 9711 "parser.y" /* yacc.c:1646  */
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
#line 15956 "parser.c" /* yacc.c:1646  */
    break;

  case 1494:
#line 9731 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15964 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 9735 "parser.y" /* yacc.c:1646  */
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
#line 15986 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 9756 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15999 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 9797 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16012 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 9810 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16018 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 9812 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16024 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 9816 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16030 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 9822 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16036 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 9824 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16042 "parser.c" /* yacc.c:1646  */
    break;

  case 1503:
#line 9829 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 16055 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 9843 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16063 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 9850 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 16073 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 9860 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16079 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 9861 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16085 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 9866 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16094 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 9874 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16103 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 9882 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16111 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 9886 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16119 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 9893 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16129 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 9909 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16142 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 9923 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 16156 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 9940 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16164 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 9944 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16172 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 9953 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16180 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 9960 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16188 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 9964 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16196 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 9975 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16204 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 9979 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16212 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 9983 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16220 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 9987 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 16228 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 9991 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16236 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 9995 "parser.y" /* yacc.c:1646  */
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
#line 16258 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10016 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16266 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10020 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16274 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10037 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16282 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10041 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16290 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10045 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16298 "parser.c" /* yacc.c:1646  */
    break;

  case 1563:
#line 10092 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 16306 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10116 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16312 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10120 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 16318 "parser.c" /* yacc.c:1646  */
    break;

  case 1573:
#line 10124 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16324 "parser.c" /* yacc.c:1646  */
    break;

  case 1574:
#line 10125 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16330 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 10129 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16336 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10134 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16347 "parser.c" /* yacc.c:1646  */
    break;

  case 1577:
#line 10141 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16358 "parser.c" /* yacc.c:1646  */
    break;

  case 1578:
#line 10148 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16369 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10155 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16380 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10165 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 16388 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10172 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16402 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10182 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16416 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10192 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16430 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10202 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16444 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10215 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16452 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 10219 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16461 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 10227 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 16470 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 10235 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 16478 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 10239 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 16487 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 10249 "parser.y" /* yacc.c:1646  */
    {
	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[0]))->sign < 0
	    || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("Non-negative integer value expected"));
		(yyval) = cb_build_numeric_literal(-1, "1", 0);
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16502 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 10263 "parser.y" /* yacc.c:1646  */
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
#line 16526 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 10286 "parser.y" /* yacc.c:1646  */
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
#line 16549 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 10308 "parser.y" /* yacc.c:1646  */
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
#line 16569 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 10323 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16575 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 10324 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16581 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 10325 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16587 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 10326 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 16593 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 10327 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 16599 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 10328 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 16605 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 10333 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16613 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 10337 "parser.y" /* yacc.c:1646  */
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
#line 16631 "parser.c" /* yacc.c:1646  */
    break;

  case 1602:
#line 10354 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16639 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 10358 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16647 "parser.c" /* yacc.c:1646  */
    break;

  case 1604:
#line 10364 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16653 "parser.c" /* yacc.c:1646  */
    break;

  case 1605:
#line 10365 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16659 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 10366 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16665 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 10367 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16671 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 10368 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 16677 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 10369 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 16683 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 10370 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 16689 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 10377 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 16697 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 10381 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 16705 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 10385 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16713 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 10389 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16721 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 10393 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 16729 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 10397 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16737 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 10401 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16745 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 10405 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16753 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 10409 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16761 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 10413 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16769 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 10417 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 16777 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 10421 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 16785 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 10446 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16793 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 10450 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 16801 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 10454 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16809 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 10461 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16817 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 10465 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16825 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 10469 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16833 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 10476 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 16844 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 10483 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 16855 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 10490 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 16866 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 10500 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 16877 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 10507 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 16888 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 10517 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 16899 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 10524 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 16910 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 10534 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 16918 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 10538 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 16932 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 10551 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 16940 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 10555 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 16954 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 10569 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 16962 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 10577 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 16968 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 10578 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16974 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 10582 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 16980 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 10583 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16986 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 10587 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16992 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 10588 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16998 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 10593 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17006 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 10597 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17014 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 10604 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17022 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 10608 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17030 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 10615 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17036 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 10616 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17042 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 10617 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 17048 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 10621 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17054 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 10622 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 17060 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 10626 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 17066 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 10627 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17072 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 10628 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17078 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 10633 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17086 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 10637 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 17099 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 10649 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 17108 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 10654 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 17117 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 10662 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 17125 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 10666 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 17133 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 10670 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 17141 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 10674 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 17149 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 10678 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 17157 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 10682 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 17165 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 10686 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 17173 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 10690 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 17181 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 10696 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17187 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 10697 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17193 "parser.c" /* yacc.c:1646  */
    break;


#line 17197 "parser.c" /* yacc.c:1646  */
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
#line 10867 "parser.y" /* yacc.c:1906  */

