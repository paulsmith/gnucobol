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
#define YYLAST   8668

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  517
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  821
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1917
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
    6373,  6396,  6397,  6401,  6402,  6407,  6410,  6418,  6422,  6430,
    6434,  6445,  6444,  6452,  6456,  6467,  6466,  6474,  6479,  6487,
    6488,  6489,  6490,  6491,  6499,  6498,  6507,  6514,  6518,  6528,
    6539,  6557,  6556,  6565,  6569,  6573,  6578,  6586,  6590,  6601,
    6600,  6610,  6614,  6618,  6622,  6626,  6630,  6631,  6640,  6642,
    6641,  6649,  6658,  6665,  6669,  6673,  6677,  6687,  6689,  6693,
    6694,  6697,  6699,  6706,  6707,  6711,  6712,  6717,  6721,  6725,
    6729,  6733,  6737,  6741,  6745,  6749,  6753,  6757,  6761,  6765,
    6769,  6773,  6777,  6781,  6788,  6792,  6803,  6802,  6811,  6815,
    6819,  6823,  6827,  6834,  6838,  6849,  6848,  6857,  6876,  6875,
    6899,  6907,  6908,  6913,  6924,  6935,  6949,  6953,  6960,  6961,
    6966,  6975,  6984,  6989,  6998,  6999,  7004,  7066,  7067,  7068,
    7072,  7073,  7077,  7081,  7092,  7091,  7103,  7104,  7125,  7139,
    7161,  7183,  7203,  7226,  7227,  7235,  7234,  7243,  7254,  7253,
    7263,  7270,  7269,  7282,  7291,  7295,  7306,  7322,  7321,  7330,
    7334,  7338,  7345,  7349,  7360,  7359,  7367,  7375,  7376,  7380,
    7381,  7382,  7387,  7390,  7397,  7401,  7409,  7416,  7417,  7418,
    7419,  7420,  7421,  7422,  7427,  7430,  7440,  7439,  7448,  7454,
    7466,  7465,  7474,  7478,  7482,  7486,  7493,  7494,  7495,  7496,
    7503,  7502,  7516,  7526,  7535,  7536,  7540,  7541,  7542,  7543,
    7544,  7545,  7549,  7550,  7554,  7559,  7566,  7567,  7568,  7569,
    7570,  7574,  7602,  7605,  7612,  7616,  7626,  7625,  7638,  7637,
    7645,  7649,  7660,  7659,  7668,  7672,  7679,  7683,  7694,  7693,
    7701,  7722,  7746,  7747,  7748,  7749,  7753,  7754,  7758,  7759,
    7760,  7761,  7773,  7772,  7783,  7789,  7788,  7799,  7807,  7815,
    7822,  7826,  7839,  7846,  7858,  7861,  7866,  7870,  7881,  7888,
    7889,  7893,  7894,  7897,  7898,  7903,  7914,  7913,  7922,  7949,
    7950,  7955,  7958,  7962,  7966,  7970,  7974,  7978,  7985,  7986,
    7990,  7991,  7995,  7999,  8009,  8020,  8019,  8027,  8037,  8048,
    8047,  8056,  8063,  8067,  8078,  8077,  8089,  8098,  8101,  8105,
    8112,  8116,  8126,  8138,  8137,  8146,  8150,  8159,  8160,  8165,
    8168,  8176,  8180,  8187,  8195,  8199,  8210,  8209,  8223,  8224,
    8225,  8226,  8227,  8228,  8232,  8233,  8237,  8238,  8244,  8253,
    8260,  8261,  8265,  8269,  8273,  8277,  8281,  8285,  8289,  8293,
    8302,  8306,  8315,  8324,  8325,  8329,  8338,  8339,  8343,  8347,
    8358,  8357,  8366,  8365,  8396,  8399,  8419,  8420,  8423,  8424,
    8432,  8433,  8438,  8443,  8453,  8469,  8474,  8484,  8501,  8500,
    8510,  8523,  8526,  8534,  8537,  8542,  8547,  8555,  8556,  8557,
    8558,  8559,  8560,  8564,  8572,  8573,  8577,  8581,  8592,  8591,
    8601,  8614,  8617,  8621,  8629,  8641,  8644,  8651,  8652,  8653,
    8654,  8661,  8660,  8669,  8676,  8677,  8681,  8682,  8683,  8687,
    8688,  8692,  8696,  8707,  8706,  8715,  8719,  8723,  8730,  8734,
    8744,  8755,  8756,  8763,  8762,  8771,  8777,  8789,  8788,  8796,
    8810,  8809,  8817,  8830,  8832,  8833,  8841,  8840,  8849,  8857,
    8858,  8863,  8864,  8869,  8876,  8877,  8882,  8889,  8890,  8894,
    8895,  8899,  8900,  8904,  8908,  8919,  8918,  8927,  8928,  8929,
    8930,  8931,  8935,  8962,  8965,  8977,  8987,  8992,  8997,  9002,
    9010,  9048,  9049,  9053,  9093,  9103,  9126,  9127,  9128,  9129,
    9133,  9142,  9148,  9158,  9167,  9176,  9177,  9184,  9183,  9195,
    9205,  9206,  9211,  9214,  9218,  9222,  9229,  9230,  9234,  9235,
    9239,  9243,  9255,  9258,  9259,  9268,  9269,  9273,  9274,  9283,
    9284,  9288,  9291,  9292,  9301,  9302,  9313,  9316,  9317,  9326,
    9327,  9339,  9342,  9344,  9354,  9355,  9367,  9368,  9372,  9373,
    9374,  9378,  9387,  9398,  9399,  9400,  9404,  9413,  9424,  9429,
    9430,  9439,  9440,  9451,  9455,  9465,  9472,  9479,  9479,  9490,
    9491,  9492,  9496,  9505,  9506,  9508,  9509,  9510,  9511,  9512,
    9514,  9515,  9516,  9517,  9518,  9519,  9521,  9522,  9523,  9525,
    9526,  9527,  9528,  9529,  9532,  9533,  9537,  9538,  9542,  9543,
    9547,  9548,  9552,  9556,  9562,  9566,  9572,  9573,  9574,  9578,
    9579,  9580,  9584,  9585,  9586,  9590,  9594,  9598,  9599,  9600,
    9603,  9604,  9614,  9626,  9635,  9647,  9656,  9668,  9683,  9684,
    9689,  9698,  9704,  9724,  9728,  9749,  9790,  9804,  9805,  9810,
    9816,  9817,  9822,  9834,  9835,  9836,  9843,  9854,  9855,  9859,
    9867,  9875,  9879,  9886,  9895,  9896,  9902,  9916,  9933,  9937,
    9944,  9945,  9946,  9953,  9957,  9964,  9965,  9966,  9967,  9968,
    9972,  9976,  9980,  9984,  9988, 10009, 10013, 10020, 10021, 10022,
   10026, 10027, 10028, 10029, 10030, 10034, 10038, 10045, 10046, 10050,
   10051, 10055, 10056, 10060, 10061, 10072, 10073, 10077, 10078, 10079,
   10083, 10084, 10085, 10092, 10093, 10097, 10098, 10102, 10103, 10104,
   10110, 10114, 10118, 10119, 10123, 10127, 10134, 10141, 10148, 10158,
   10165, 10175, 10185, 10195, 10208, 10212, 10220, 10228, 10232, 10242,
   10256, 10279, 10301, 10317, 10318, 10319, 10320, 10321, 10322, 10326,
   10330, 10347, 10351, 10358, 10359, 10360, 10361, 10362, 10363, 10364,
   10370, 10374, 10378, 10382, 10386, 10390, 10394, 10398, 10402, 10406,
   10410, 10414, 10421, 10422, 10426, 10427, 10428, 10432, 10433, 10434,
   10435, 10439, 10443, 10447, 10454, 10458, 10462, 10469, 10476, 10483,
   10493, 10500, 10510, 10517, 10527, 10531, 10544, 10548, 10563, 10571,
   10572, 10576, 10577, 10581, 10582, 10587, 10590, 10598, 10601, 10608,
   10610, 10611, 10615, 10616, 10620, 10621, 10622, 10627, 10630, 10643,
   10647, 10655, 10659, 10663, 10667, 10671, 10675, 10679, 10683, 10690,
   10691, 10697, 10698, 10699, 10700, 10701, 10702, 10703, 10704, 10705,
   10706, 10707, 10708, 10709, 10710, 10711, 10712, 10713, 10714, 10715,
   10716, 10717, 10718, 10719, 10720, 10721, 10722, 10723, 10724, 10725,
   10726, 10727, 10728, 10729, 10730, 10731, 10732, 10733, 10734, 10735,
   10736, 10737, 10738, 10739, 10740, 10741, 10742, 10743, 10744, 10745,
   10746, 10747, 10748, 10749, 10750, 10751, 10752, 10753, 10754, 10755,
   10756, 10757, 10758, 10759, 10760, 10761, 10762, 10763, 10764, 10765,
   10766, 10773, 10773, 10774, 10774, 10775, 10775, 10776, 10776, 10777,
   10777, 10778, 10778, 10779, 10779, 10780, 10780, 10781, 10781, 10782,
   10782, 10783, 10783, 10784, 10784, 10785, 10785, 10786, 10786, 10787,
   10787, 10788, 10788, 10789, 10789, 10790, 10790, 10790, 10791, 10791,
   10792, 10792, 10793, 10793, 10794, 10794, 10795, 10795, 10795, 10796,
   10796, 10797, 10797, 10797, 10798, 10798, 10798, 10799, 10799, 10799,
   10800, 10800, 10801, 10801, 10802, 10802, 10803, 10803, 10803, 10804,
   10804, 10805, 10805, 10806, 10806, 10806, 10806, 10807, 10807, 10808,
   10808, 10809, 10809, 10810, 10810, 10811, 10811, 10812, 10812, 10813,
   10813, 10814, 10814, 10814, 10815, 10815, 10816, 10816, 10817, 10817,
   10818, 10818, 10819, 10819, 10820, 10820, 10821, 10821, 10822, 10822,
   10822, 10823, 10823, 10824, 10824, 10825, 10825, 10829, 10829, 10830,
   10830, 10831, 10831, 10832, 10832, 10833, 10833, 10834, 10834, 10835,
   10835, 10836, 10836, 10837, 10837, 10838, 10838, 10839, 10839, 10840,
   10840, 10841, 10841, 10842, 10842, 10843, 10843, 10844, 10844, 10847,
   10848, 10849, 10853, 10853, 10854, 10854, 10855, 10855, 10856, 10856,
   10857, 10857, 10858, 10858, 10859, 10859, 10860, 10860
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
     765,   766,   767,   768,   769,   770,   771
};
# endif

#define YYPACT_NINF -2319

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2319)))

#define YYTABLE_NINF -1866

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2319,   268,   502, -2319,   -71,   279, -2319,   502, -2319, -2319,
     918, -2319, -2319,   918,   918,    21,    21, -2319,  1012, -2319,
    1063,   865,  1123, -2319, -2319,  1251,  1251,   871,   963, -2319,
   -2319,   505,   918,    21, -2319, -2319,  1115,   923, -2319, -2319,
     948,  1654,    21, -2319, -2319, -2319,   865,   979, -2319, -2319,
     -83, -2319,   910,   910,  1022,  1030,  1218,  1218,  1218,  1062,
     910,  1059,  1020,  1028,  1218,  1035,  1061,  1415, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,  1172, -2319, -2319, -2319, -2319,
    1277, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
    1328,  1067,   505, -2319, -2319,  1076,   149, -2319, -2319,  1218,
    1218, -2319,  1218,  1027,  1477,  1027,  1093,  1218,  1218, -2319,
   -2319,  1027, -2319, -2319, -2319,  1049,   965,  1098, -2319, -2319,
    1058, -2319,  1119, -2319, -2319, -2319, -2319,  -122, -2319, -2319,
   -2319,  1236, -2319,  1218,   947,  1027,  1338,    20, -2319, -2319,
   -2319, -2319, -2319,  1354,  1129,   197,  1417, -2319,  1113, -2319,
    1049, -2319,    61, -2319, -2319, -2319, -2319, -2319,   937,    50,
    1218,     4, -2319, -2319, -2319,   533, -2319, -2319, -2319,  1196,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319,   947, -2319,  1182,
   -2319,  -134, -2319, -2319,  1027, -2319,  1222, -2319,  1227,  1213,
    1568,  1218, -2319, -2319, -2319,   404, -2319, -2319, -2319, -2319,
   -2319,   633,  1573,  1218,    71, -2319,   113, -2319, -2319,    24,
   -2319, -2319, -2319, -2319,  1378,    50, -2319,  1403,   910,   910,
   -2319,   937,  1181,    72,   -54, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,     7, -2319,
      93, -2319,   947, -2319, -2319,  1310, -2319, -2319, -2319,  1218,
    1238,  1386, -2319, -2319, -2319, -2319,   819,  1218,  1135,  1416,
     545, -2319,  1619,   625,  1192, -2319, -2319,  1193,  1539, -2319,
    1378, -2319,   910, -2319, -2319, -2319, -2319,   937, -2319,  1194,
    1337, -2319,   910, -2319,   648, -2319,   103, -2319, -2319, -2319,
   -2319, -2319,     7, -2319,  1395,  1386, -2319, -2319, -2319,   569,
   -2319, -2319, -2319,  1396, -2319, -2319, -2319, -2319, -2319,  1381,
   -2319, -2319, -2319, -2319, -2319,  1198, -2319, -2319, -2319,  1632,
    1556,  1204, -2319, -2319,     7, -2319, -2319,    45, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1220, -2319,  1475,
    1545,  1210, -2319,  1653, -2319, -2319, -2319, -2319,  1927, -2319,
    1585, -2319,  1165,  1219,  1280, -2319,     7,  1405,  1325,   645,
    1276, -2319,  1279,  1218,  1625,   213,   -67,   964, -2319,  1180,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1264,
   -2319,  1424, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
    1652,  1218, -2319,  1165, -2319,  1165, -2319, -2319,  1241,   162,
   -2319, -2319,  1218, -2319,  1460, -2319, -2319,  1040, -2319, -2319,
     958,  1218,  1218, -2319,  1218,  1218, -2319,  1632, -2319,   134,
    1218,  1405, -2319,  1295,  1195,  1165, -2319,  1368, -2319, -2319,
   -2319, -2319,  1197, -2319,  1200,    73,   315,  1218, -2319, -2319,
    1044, -2319, -2319,   -63,  1281,  1027,  1027, -2319,  1384,  1384,
    1394, -2319,  1027,  1218, -2319, -2319, -2319,  1386, -2319,  1317,
    1448, -2319, -2319,  1259, -2319, -2319, -2319, -2319, -2319,  1027,
   -2319, -2319,    -6,    -6,  1709,    -6, -2319, -2319,    -6,   179,
   -2319, -2319, -2319, -2319, -2319,   525, -2319, -2319, -2319, -2319,
   -2319, -2319,   694, -2319,  1262,  1320,  1463,   543,  1267,  6629,
   -2319,  1215, -2319, -2319,   -10, -2319, -2319, -2319, -2319,  1198,
   -2319, -2319, -2319, -2319, -2319,  1218,  1027,  1212, -2319,  1212,
   -2319, -2319,  1271,  1332,  1359, -2319,  1274, -2319,  1275, -2319,
    1648, -2319,  1649, -2319,   726, -2319,  1612,  1303, -2319, -2319,
    1027,  1027, -2319,   590, -2319, -2319,  1200, -2319,  1284,  1344,
    1352, -2319, -2319, -2319,   853,  1585,  1218,   420,   420,  1218,
      99,  1405,  1218,  1723, -2319,  1438, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319,   910,   920, -2319,  1242,
   -2319,  1027, -2319,  1436, -2319, -2319,  1200, -2319,  1293,  1355,
   -2319,  6842,   188,  1552,  1386,  1253,  1218,  1723,  1255,   -99,
     -63,  1386,  1263,  1218, -2319, -2319, -2319,   -37,   910, -2319,
   -2319, -2319,    63,   -41, -2319,  1200, -2319,  1309,   136,   713,
   -2319, -2319,  -165,   305,   349,   531,   565,  1260, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,  1382, -2319,    90, -2319, -2319,
   -2319, -2319,  1027,  1027,  1535, -2319, -2319, -2319,   -25, -2319,
   -2319, -2319,  1218,   186, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319,  1045,   -85, -2319,  1265, -2319,  1211, -2319,  1322,
   -2319, -2319, -2319, -2319,  1255, -2319, -2319, -2319, -2319,  1517,
      60,  1558,  1266,  1218, -2319, -2319,  1218, -2319,   996, -2319,
   -2319, -2319,   990, -2319, -2319, -2319, -2319, -2319, -2319,  1655,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319,  1268, -2319, -2319,  1727,
    1335, -2319,  1323,  1341, -2319, -2319, -2319, -2319,  7103,   722,
    1763, -2319,  1388,  1388, -2319,   996,  1484, -2319,  1149,  1149,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1342, -2319,
    1386,   117, -2319, -2319, -2319,  1386, -2319, -2319,  1380, -2319,
     319,   319, -2319, -2319,  1444,  1304,    29,  3478,  3944, -2319,
    1558,  1602,  1386,  1364,  7765,  1350, -2319,  1027, -2319,   722,
   -2319,  1369,  1547, -2319,  1625, -2319, -2319, -2319, -2319,  1149,
    1346, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319,   996, -2319, -2319, -2319, -2319,    54,
    1415, -2319,    51, -2319, -2319, -2319, -2319,  1315, -2319,  6370,
   -2319, -2319,  1304,  1362, -2319, -2319,  1442,  4263, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319,   443, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,  1427, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  -123,
   -2319, -2319,  1488, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
    1324,  1386,  1335, -2319, -2319,  1715, -2319, -2319, -2319,  1365,
    1370,  1371,  4041,    20,    20,  1373,  1374,  1375, -2319,  1376,
      20, -2319, -2319, -2319,  7865,  7765,  7865,  1377, -2319,  1371,
   -2319,    49,   917,   851, -2319,  1661, -2319, -2319, -2319, -2319,
   -2319,  1342, -2319,  1379,  1385,  1387,  7765, -2319, -2319,   761,
   -2319,   722, -2319, -2319, -2319, -2319, -2319,   -63,   -63, -2319,
   -2319, -2319, -2319,  1647, -2319, -2319,  1322,  1386, -2319, -2319,
    1383, -2319,  1389, -2319,    64,    64,  1327,  1391, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  -129,
    4644,  7765,   396,   563,   398,  1165,   665,  -206,  5747,  5889,
    1592,  -185,     8,   665,  1027,  1400, -2319, -2319,  5889, -2319,
   -2319,   665,  1315,  1094,  1027,  4786,  5889, -2319,   750,  2218,
    1165,  1027,  1165,  1027,    84,   217,  1027,  1165, -2319, -2319,
   -2319, -2319, -2319, -2319,  4935,  5072, -2319, -2319,  1315,    88,
    1027,  1165,  1027,  1027, -2319, -2319,  1629,  1544, -2319,  7765,
    7765,  7107, -2319, -2319,  1342, -2319,  1347,  1348,  7765,  7765,
    7765,  4041,  1356, -2319,   986, -2319,  4041, -2319, -2319, -2319,
   -2319,  7765,  7288,  7765,  7765,  7765,  7765,  7765,  7765, -2319,
    4041,  7765,   917,  1453, -2319,  1402, -2319, -2319, -2319,  1836,
    1415, -2319,   214, -2319, -2319, -2319, -2319,   155, -2319,  -175,
     520,   163, -2319, -2319, -2319,  1736,   678,  1672,  1484,  1027,
    4041, -2319,  1737, -2319,  5205, -2319, -2319, -2319, -2319, -2319,
     172,   241, -2319,   396, -2319,  1419, -2319,    20, -2319, -2319,
   -2319, -2319,  1738,  2563, -2319,   398, -2319, -2319,  1165,   621,
    1484,  1739,   296, -2319,  1483, -2319, -2319,  1323,  1342,  1165,
    1740,  1325,  1080,  1742,  5221, -2319,  5417,    56,  1092,  1100,
    1743,   150,  1390, -2319, -2319, -2319,  1741,    62, -2319, -2319,
   -2319,  4351, -2319, -2319,  1772,   443, -2319, -2319, -2319,   665,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1437, -2319, -2319,
     608,  1315, -2319, -2319,    40, -2319, -2319, -2319, -2319, -2319,
   -2319,  1418,  5889, -2319,  1431,  1745,  1835, -2319, -2319, -2319,
   -2319,   750,  1480, -2319,  1440, -2319,  8010,     3,   465,  1446,
    1441, -2319,  -190, -2319,  1451,  1752,   558, -2319,  1701, -2319,
    1753,  1325,  1755,  1701,  1027,  1759,  1398, -2319,   636, -2319,
   -2319, -2319, -2319, -2319, -2319,  1635, -2319,   665, -2319,   -74,
   -2319,   552,  1873, -2319,   138, -2319,  1761,  1006,   582,  1865,
    1766,  2245, -2319, -2319,  1027,  1767,  5550,  1315, -2319, -2319,
    -164, -2319, -2319, -2319, -2319,  3699, -2319,  1720, -2319,  1151,
    1768,  1805,  1769,  1701, -2319, -2319, -2319,  1027,  1705,   820,
      66,  -198,  1469,    76,  1474, -2319,   215, -2319, -2319,   216,
    1476,  1479,  1485,   222, -2319,  1342, -2319,  1486, -2319, -2319,
     240,  1487,  -198, -2319,  1029,   851,   851, -2319, -2319, -2319,
     977,  1489,   246,  1490,  1218, -2319,   -63,  1815,  1481,   181,
    7015, -2319,  1218,  1523,  1630, -2319, -2319,  1833, -2319, -2319,
     -92,  1748, -2319,   697,  1757,   116,  1496, -2319,  1342, -2319,
   -2319, -2319,  6026,  1746, -2319,  1724, -2319,  1571, -2319,  1610,
    1697, -2319, -2319, -2319,  1390, -2319,   621, -2319, -2319, -2319,
     803,   560,  1027, -2319, -2319, -2319, -2319, -2319,  7765,  1685,
   -2319,  1350, -2319,  1165, -2319, -2319, -2319,  1729, -2319, -2319,
   -2319,  5889, -2319,  1666,   148,  1663,  1687,  1478,  1798,  1798,
    1798,  1798, -2319, -2319,  5889,  6026, -2319, -2319, -2319, -2319,
    -185,    69, -2319,  1466, -2319,  1468, -2319, -2319, -2319, -2319,
    1400, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319,  2647, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319,     1, -2319,  1837,  1110,  1799, -2319,   636,
     102, -2319, -2319,  1613, -2319, -2319,    57,  7765, -2319,  1529,
     665, -2319, -2319,  6026,  1480,  1180,  1165, -2319, -2319, -2319,
   -2319, -2319,  1814,  1027,   396, -2319,   258, -2319, -2319, -2319,
   -2319,  1325,  1094, -2319, -2319, -2319,  1756, -2319, -2319,   594,
    1854, -2319, -2319,  1027,  1854,  1538, -2319,  1342, -2319, -2319,
     643,   937, -2319, -2319,  2752, -2319,  1941,   675,   141, -2319,
   -2319, -2319,  1218, -2319,   485,  5889, -2319,   595,  5692, -2319,
   -2319,  1027, -2319,  1796, -2319, -2319,  6026, -2319,  1386, -2319,
   -2319,   636, -2319, -2319, -2319, -2319, -2319,  1865,  1764, -2319,
   -2319,   258,  1705, -2319,  1865, -2319, -2319, -2319,  1460,  7405,
    1379,  7573,  1379, -2319,  1027,  1379,  1379,  1379,  4041, -2319,
     151,  1379, -2319,  7597,  1379,  1379, -2319,   722, -2319,  1544,
   -2319, -2319,  1218,  1218,  1723,  1357, -2319, -2319, -2319, -2319,
    1790,  1818, -2319,  1218, -2319,   -73, -2319, -2319, -2319,  1351,
    1218,  1094, -2319, -2319, -2319, -2319,  1695, -2319,  1386, -2319,
    1940, -2319, -2319, -2319,  1027, -2319, -2319,  1027, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1794,  1695,   631,
    1218, -2319,  1491,  1543, -2319, -2319, -2319, -2319, -2319, -2319,
    1731,  1695,  1695,   294,  1758,  1695, -2319,  1254, -2319, -2319,
   -2319,  1492,  1500, -2319,   636,  1254,  1770,  1588,  1714, -2319,
   -2319,  1744, -2319, -2319, -2319, -2319, -2319, -2319,   417, -2319,
    1027,  1484,   656, -2319,   -42,    -3,   665,  1565,  1571,   665,
   -2319,  1567,   396, -2319,   443, -2319, -2319,  1636,  1657, -2319,
     704,  1218, -2319, -2319, -2319, -2319, -2319,  1726, -2319, -2319,
   -2319,  1990, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1798,
    1218, -2319,   399, -2319, -2319,  1372,  1218, -2319, -2319, -2319,
   -2319,     5,  1218, -2319,  1495, -2319,  1331,  1731, -2319, -2319,
   -2319, -2319,  1821,   656,  1827,    97, -2319, -2319, -2319, -2319,
    2014, -2319,  1586,   146, -2319, -2319,    69, -2319, -2319, -2319,
   -2319,  1544, -2319, -2319, -2319,  1905,  1895,  1400, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,  1668,  1400, -2319,  1587, -2319,
    1988, -2319, -2319, -2319,   730, -2319,   636,   943, -2319,    67,
     820,   488,   665,   665,   656,  1838,  1165,   134,   601,  1897,
   -2319, -2319, -2319,  2032, -2319,  1846, -2319, -2319, -2319, -2319,
    1756, -2319, -2319, -2319, -2319,  1027,  1913,  1729,  1002, -2319,
    1540, -2319,  1542,   636,   898, -2319,   417, -2319, -2319, -2319,
    5889,   937,   937,   937,   937,   937,   937,   937,   937,   675,
   -2319,   -36,  1729,   521, -2319,  1618,  1618, -2319, -2319,   419,
    1027,   656,  1842,  1593, -2319,  1599,  2042,  1027,   359,   594,
    2045, -2319,  1546,  1218, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1046, -2319, -2319,
   -2319,  1027,   398, -2319, -2319,  1218,  1723,  1797,  1304, -2319,
   -2319, -2319,  1027,   -92, -2319, -2319, -2319, -2319,   -92, -2319,
   -2319,  1218,  1364,  1218, -2319, -2319, -2319,  1218, -2319, -2319,
   -2319,   158, -2319, -2319, -2319,  1218,  1548,   -92,   -92, -2319,
   -2319,   -92, -2319, -2319, -2319,  1261, -2319, -2319, -2319,  1254,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1483,   116,
   -2319, -2319,  1754,     2,  1856,   656,  1041, -2319, -2319, -2319,
   -2319, -2319,   -18,    91, -2319, -2319, -2319,  1017, -2319, -2319,
   -2319, -2319, -2319, -2319,   -92, -2319, -2319, -2319, -2319,   -92,
     506,   506,   -92, -2319, -2319, -2319, -2319, -2319,  1549,   665,
   -2319,   665,  4519, -2319,   393,   131,    69, -2319, -2319, -2319,
    2014,  1027, -2319, -2319, -2319, -2319,  1559,  1301,   187,  1561,
    1041,   636, -2319, -2319,  2012, -2319, -2319, -2319, -2319,   943,
   -2319,  1876, -2319,  1218,  1460,  1750, -2319, -2319,   665, -2319,
     665,   601, -2319, -2319, -2319,  1003, -2319, -2319,  1027,  5889,
    1158, -2319, -2319, -2319,  1777, -2319, -2319,  1807, -2319, -2319,
   -2319, -2319,  1542, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,    86, -2319,  1027, -2319, -2319,
   -2319,  1179, -2319, -2319, -2319,  7765, -2319,  5889,  5889,  1605,
    1747,  1483, -2319,   665, -2319,  1041, -2319,  1760, -2319,   636,
   -2319,  1959,  1637, -2319,   660, -2319,   415, -2319,  1546, -2319,
    1027, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1308,    16,
   -2319,  1027, -2319, -2319, -2319,   581, -2319,   398,   581, -2319,
   -2319, -2319,    89,  2029,  4896,  1254, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,  1669,  1874, -2319, -2319, -2319,
    1881, -2319, -2319, -2319, -2319, -2319, -2319,  1789, -2319,  1484,
   -2319, -2319, -2319, -2319,  1027, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,  3164, -2319, -2319, -2319,  1313,
   -2319, -2319, -2319, -2319,  1687, -2319,   656,  1722,   656,  1725,
   -2319, -2319,  5889, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319,  1301, -2319,  1984, -2319,  1400, -2319, -2319, -2319,
    1041,  1178, -2319, -2319,  1178,   -75,  1027, -2319, -2319,   656,
   -2319, -2319,  1711, -2319,  2043,  1839,  1860,   731, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319,  -198, -2319, -2319, -2319, -2319, -2319,  1801,  1218,  1669,
     656,  1604, -2319,  2042, -2319,  1558,  2007,  1558,  1605, -2319,
   -2319, -2319, -2319,  1811, -2319, -2319, -2319, -2319,  1321, -2319,
    1027,  1214, -2319, -2319,  1797, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319,   -92, -2319, -2319, -2319,   -92,   -13,
   -2319, -2319,  1218, -2319, -2319, -2319, -2319,  1218, -2319, -2319,
   -2319, -2319, -2319,    33, -2319, -2319,  2048,  1693, -2319, -2319,
      25, -2319,  1218, -2319,  2099, -2319, -2319, -2319,  4896, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1027, -2319,
   -2319, -2319, -2319,  1687, -2319,   665, -2319,   665, -2319, -2319,
   -2319,  2059,  1999,  1178,  1178, -2319,  1656,  1656, -2319,  1774,
    1165,    -1, -2319,  1027, -2319, -2319,  5889, -2319,  1218,   733,
    1851,  1853, -2319,  1858, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319,  1027, -2319, -2319, -2319, -2319,  1667, -2319,  1027,  1558,
   -2319,  1027, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1290,
    1218,  1218,  1294, -2319, -2319, -2319, -2319, -2319, -2319,  1520,
   -2319, -2319, -2319,  2015,   -92,   -92, -2319,  1218,  1218,   506,
     506,   -92, -2319,   550, -2319, -2319, -2319,  1669,  1669,  5889,
   -2319,  1178, -2319,  5889,  5889,  1218,  1165,  1165,  1783, -2319,
   -2319,  1640,  1027, -2319, -2319,  1777, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319,   692, -2319, -2319,  1027, -2319, -2319, -2319,
    1218,  1797,  1797, -2319,  1920,  1218,  1218, -2319,  3781,  1676,
   -2319, -2319,   398,   -92, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,   396,  1165,  1218, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319,  1191, -2319, -2319, -2319,
   -2319, -2319,  1791,  2026, -2319,  1797, -2319, -2319, -2319,  1797,
    1797,  1914,  1312,  1723,  1928,  1386,  1631,  1218,  1484, -2319,
    1218,  1218,  1027, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319,   796, -2319,   555, -2319,
   -2319, -2319,  1312,  1723, -2319, -2319, -2319, -2319,   396, -2319,
    1781,  1718,    46,  1544, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319,   186, -2319,  1218,  1335, -2319,  8153,  8153,   874,  2033,
    1956, -2319,  1386,   796, -2319, -2319,  1386,   555, -2319, -2319,
     186, -2319, -2319,  1027, -2319,  1244, -2319, -2319, -2319,    68,
   -2319,   796,  1364, -2319,  1483,  7902, -2319, -2319,  1047,  1068,
   -2319, -2319,  1130, -2319, -2319, -2319, -2319,   -55,   -55, -2319,
   -2319, -2319, -2319, -2319,  8153, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319,  1816,   932,    68, -2319, -2319, -2319,  1715,
   -2319,  1544, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1841,
   -2319,  1841, -2319,  2105, -2319,  1544, -2319, -2319,  1849,  1027,
   -2319,  1730,   -14,  1843, -2319, -2319,  8153,    -9, -2319, -2319,
    1386, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319,  1165, -2319
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
    1794,    46,     0,     0,     0,  1837,  1794,  1794,  1794,     0,
       0,     0,     0,     0,  1794,     0,     0,  1769,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1795,     0,     0,  1516,   125,  1794,
    1794,  1838,  1794,     0,     0,     0,     0,  1794,  1794,    60,
      82,     0,    54,    98,  1770,     0,  1794,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1831,    39,  1794,     0,     0,     0,  1584,   171,  1509,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1517,
     152,   153,  1796,   156,  1589,  1205,  1204,   116,   120,  1823,
    1794,     0,   100,   151,   178,   179,    38,  1832,    36,     0,
    1596,  1592,  1597,  1595,  1593,  1598,  1594,   160,   161,   163,
     172,   167,  1879,  1880,     0,   165,     0,  1768,     0,     0,
       0,  1794,  1901,    80,    61,  1767,    66,    68,    69,    70,
      71,  1767,     0,  1794,     0,    83,     0,    87,    55,    58,
     154,  1798,  1797,   157,     0,  1823,  1826,  1825,     0,     0,
     117,   121,     0,     0,   262,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1866,   166,     0,  1585,   170,  1900,  1794,
       0,     0,    65,    67,    63,    81,  1767,  1794,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1590,
     155,   158,     0,  1824,   123,   118,   119,   122,   180,     0,
       0,  1665,     0,   274,   270,    24,     0,   265,   267,   268,
     134,   137,     0,   164,     0,     0,  1899,    74,    64,     0,
    1510,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1666,   183,  1775,   271,   272,   273,  1757,
     281,     0,   263,   266,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1776,  1850,  1758,  1779,
       0,   283,   264,   138,   139,  1887,  1888,    72,  1833,  1851,
    1771,  1780,     0,     0,     0,   285,     0,  1812,  1833,  1858,
       0,   244,     0,  1794,  1767,  1799,   246,     0,  1868,  1865,
     232,   184,   231,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   243,   195,   196,   197,   198,   199,   200,
    1763,  1794,  1772,     0,  1495,   269,  1493,   282,     0,    25,
     140,  1813,  1794,  1834,  1799,  1859,  1860,   212,  1867,   247,
    1833,  1794,  1794,  1800,  1794,  1794,   256,  1757,   257,     0,
    1794,  1812,  1764,     0,     0,   275,   276,   279,  1494,   284,
     291,   292,   343,   286,   346,     0,     0,  1794,   214,   213,
     210,   246,   242,     0,     0,     0,     0,   255,  1827,  1827,
       0,   258,     0,  1794,   245,   228,   277,     0,   278,     0,
     499,   287,  1648,     0,   288,   222,   223,   221,   220,     0,
     206,   207,   217,   217,     0,   217,   209,   208,   217,     0,
    1515,  1514,   248,   249,   250,   251,   254,  1828,   259,   260,
     261,   229,     0,   280,     0,     0,   502,   348,     0,     0,
     352,     0,   290,   293,  1651,   218,   203,   219,   204,  1775,
     205,   202,   215,   201,   216,  1794,     0,   238,   237,   238,
     234,   344,     0,     0,   505,   351,     0,   349,     0,   358,
     359,   353,     0,   356,  1794,  1898,     0,   225,  1652,   211,
       0,   252,  1507,     0,   236,   235,   346,   500,     0,     0,
     600,   350,   355,   392,   361,  1771,  1794,     0,     0,  1794,
    1771,  1812,  1794,  1755,   289,     0,   294,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,     0,  1897,     0,
     224,   253,  1508,     0,   241,   345,   346,   503,     0,     0,
      26,  1794,  1759,     0,     0,     0,  1794,  1755,     0,     0,
       0,     0,     0,  1794,   339,  1756,   340,     0,   338,   341,
     295,   296,     0,     0,   501,   346,   506,     0,   664,     0,
     486,   416,  1839,  1839,  1839,  1839,  1839,  1861,   417,   452,
     454,   420,   421,   422,   423,   424,   425,   448,   446,   447,
     449,   450,   455,   453,   426,  1835,   451,     0,   427,   413,
     428,   429,     0,     0,  1842,   431,   432,   430,  1801,   434,
     435,   433,  1794,  1796,   393,   394,   395,   396,   397,   398,
     414,   418,   419,   399,   400,   401,   402,   403,   404,   405,
     406,   407,     0,     0,  1760,     0,   389,     0,   362,   317,
     337,  1889,  1890,  1513,   326,  1511,  1882,  1881,   319,  1810,
    1769,  1783,     0,  1794,   323,   322,  1794,   342,     0,   147,
     148,   227,     0,  1885,  1886,   239,   504,   508,   601,     0,
      27,   708,   497,   498,  1840,   445,   444,   437,   436,   443,
     442,   441,   440,   439,   438,  1862,     0,  1836,   483,   469,
     463,   408,  1578,   495,  1843,  1802,  1803,   484,     0,     0,
     410,   412,  1679,  1679,   391,     0,  1819,  1607,     0,     0,
    1603,  1608,  1606,  1604,  1609,  1605,   390,   363,  1599,  1601,
       0,   307,  1512,  1811,   328,     0,   310,  1784,  1844,   336,
       0,     0,   226,   240,   507,   603,   666,     0,     0,   485,
    1783,   465,     0,  1854,     0,  1576,  1577,     0,   415,   487,
     489,   491,     0,   409,  1767,   456,   457,  1600,  1820,     0,
       0,   372,   368,   371,   370,   369,   384,   380,   382,   383,
     385,   381,   386,   387,   388,   365,   376,   377,   378,   373,
     374,   375,   367,   364,     0,   318,   309,   308,   306,   327,
    1769,  1845,   315,   324,   321,   325,   320,     0,   509,     0,
     607,   602,   604,     0,   669,   667,   685,     0,   762,   837,
     846,   852,   859,   891,   895,   909,   904,   910,   911,   919,
     966,   975,   978,  1004,  1015,  1018,  1021,  1013,  1027,  1034,
    1056,  1060,  1096,  1098,  1102,     0,  1108,  1122,  1146,  1164,
    1165,  1168,  1169,  1174,  1182,  1183,  1196,  1230,  1248,     0,
    1281,  1293,  1301,  1303,   690,  1307,  1310,  1316,  1367,   710,
     711,   712,   713,   714,   715,   716,   717,   719,   718,   720,
     721,   722,   723,   724,   725,   726,   727,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   709,
       0,     0,   463,   464,  1855,   467,  1627,  1622,  1628,     0,
       0,  1634,     0,  1482,  1484,     0,     0,     0,  1625,     0,
    1486,  1626,  1629,  1630,     0,     0,     0,     0,  1624,  1634,
    1623,  1466,  1464,  1471,  1474,  1476,  1479,  1543,  1481,  1540,
    1574,  1541,  1542,  1631,     0,     0,     0,  1575,   496,   493,
     490,     0,   411,  1680,   366,   379,  1602,     0,     0,   329,
     330,   331,   332,     0,   311,  1782,   317,     0,  1496,   510,
       0,   608,     0,   605,   674,   674,     0,     0,  1682,  1683,
    1684,  1685,  1686,  1687,  1688,  1689,  1690,  1691,  1692,  1693,
    1694,  1695,  1731,  1732,  1733,  1734,  1735,  1736,  1737,  1738,
    1739,  1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,
    1749,  1750,  1696,  1697,  1698,  1699,  1700,  1701,  1702,  1703,
    1704,  1705,  1706,  1707,  1708,  1709,  1710,  1711,  1712,  1713,
    1714,  1715,  1716,  1717,  1718,  1719,  1720,  1721,  1722,  1723,
    1724,  1725,  1726,  1681,  1727,  1728,  1729,  1730,   761,     0,
       0,     0,     0,   862,     0,     0,     0,     0,     0,     0,
       0,  1427,  1006,     0,     0,  1856,   882,   881,     0,  1026,
    1427,     0,     0,     0,     0,     0,     0,   760,     0,  1134,
       0,     0,     0,     0,     0,     0,     0,     0,  1277,  1280,
    1268,  1278,  1279,  1270,     0,     0,  1302,  1300,     0,   708,
       0,     0,     0,     0,   470,   466,   471,  1821,   474,     0,
       0,     0,  1620,  1544,  1545,  1546,     0,     0,     0,     0,
       0,     0,     0,  1478,     0,  1477,     0,  1621,  1467,  1468,
    1586,     0,     0,     0,     0,     0,     0,     0,     0,  1610,
       0,     0,     0,     0,   488,     0,   492,   335,   334,  1761,
    1769,   316,     0,   610,   611,   606,  1766,   674,   671,   677,
       0,   674,   686,   661,   784,   835,   787,   783,  1819,     0,
       0,  1534,   844,  1528,   842,  1523,  1525,  1526,  1527,   847,
       0,  1653,  1506,   853,   854,     0,  1502,  1504,  1503,   865,
     863,   864,   889,     0,  1556,   892,   893,  1555,   896,   899,
    1819,   907,     0,  1488,  1667,  1520,  1579,  1583,  1521,     0,
     917,  1833,  1603,   964,  1392,   928,   932,  1523,     0,  1525,
     973,     0,   866,   976,   985,   984,  1002,     0,   981,   983,
    1426,     0,  1008,  1012,  1010,  1013,  1011,  1005,  1016,  1017,
    1518,  1019,  1020,  1857,  1022,  1500,  1014,  1852,  1425,  1035,
    1037,  1057,  1058,  1061,     0,  1063,  1064,  1065,  1097,  1234,
    1571,  1572,     0,  1099,     0,  1106,     0,  1115,  1112,  1114,
    1113,  1109,  1116,  1136,  1506,  1123,  1134,  1125,     0,  1132,
       0,  1557,  1503,  1559,     0,  1162,  1659,  1166,  1370,  1491,
    1172,  1833,  1180,  1370,     0,  1194,  1187,  1492,     0,  1499,
    1197,  1198,  1199,  1200,  1201,  1202,  1223,  1203,  1226,     0,
    1497,     0,     0,  1570,  1583,  1231,  1266,  1253,  1271,  1765,
    1291,     0,  1284,  1286,     0,  1298,     0,  1304,  1305,   696,
     702,   691,   692,   693,   695,     0,  1308,     0,  1311,  1313,
    1333,  1319,  1380,  1370,   472,   474,  1822,     0,   478,   473,
    1466,  1464,     0,  1466,     0,  1636,  1466,  1483,  1485,  1466,
       0,     0,     0,  1466,  1537,  1538,  1539,     0,  1487,  1480,
    1466,     0,  1465,  1587,     0,  1470,  1469,  1473,  1472,  1475,
       0,     0,  1466,     0,  1794,  1762,     0,   313,     0,  1794,
    1841,   672,  1794,     0,   683,   675,   676,   687,   836,   763,
    1762,   797,   788,     0,     0,     0,     0,  1529,  1530,  1531,
     845,   838,     0,     0,  1524,  1655,  1654,   850,   855,   857,
       0,   890,   860,  1558,   866,   894,   899,  1891,  1892,   897,
       0,   900,     0,   908,   905,  1874,  1873,  1489,     0,  1669,
    1490,  1581,  1582,   914,   915,   918,   912,  1419,   965,   920,
     705,     0,   926,  1394,     0,   943,     0,   937,  1392,  1392,
    1392,  1392,   974,   967,     0,     0,   867,   977,  1003,   979,
    1427,  1427,   980,   987,   988,   705,  1451,  1452,  1453,  1447,
    1856,  1439,  1459,  1462,  1461,  1463,  1455,  1446,  1445,  1450,
    1449,  1448,  1454,  1434,  1438,  1456,  1458,  1460,  1436,  1437,
    1433,  1435,  1428,  1429,  1440,  1441,  1442,  1443,  1444,  1432,
    1009,  1007,  1519,  1024,  1853,   705,  1039,     0,  1059,     0,
    1086,  1070,  1062,  1067,  1068,  1069,  1238,     0,  1573,     0,
       0,  1107,  1103,     0,  1116,  1865,     0,  1124,  1130,  1131,
     705,  1127,  1427,     0,     0,  1135,     0,  1163,  1147,  1660,
    1661,  1833,     0,  1167,  1173,  1170,  1149,  1181,  1175,  1177,
    1189,  1195,  1184,     0,  1189,     0,  1551,  1552,  1224,  1227,
       0,     0,  1498,  1207,     0,  1206,     0,     0,  1581,  1267,
    1249,  1255,  1794,  1256,  1251,     0,  1269,     0,     0,  1292,
    1282,     0,  1285,     0,  1299,  1294,     0,  1306,   703,   701,
     694,     0,  1314,  1315,  1312,  1334,  1317,  1765,     0,  1381,
    1368,  1372,   478,   468,  1765,   461,   476,   477,  1799,     0,
    1631,     0,  1631,  1635,     0,  1631,  1631,  1631,     0,  1614,
       0,  1631,  1588,     0,  1631,  1631,  1864,     0,   333,  1821,
     312,   514,  1794,  1794,  1755,  1807,   539,   513,   517,   518,
       0,  1777,   626,  1794,   615,  1861,   616,  1870,  1869,     0,
    1794,     0,   629,   624,   619,   625,  1814,   620,     0,   623,
     631,   628,   621,   627,     0,   632,   622,     0,   643,   637,
     641,   640,   638,   642,   612,   644,   639,     0,  1814,     0,
    1794,   684,     0,     0,   662,  1562,   793,  1560,  1561,   798,
     799,  1814,  1814,   791,   792,  1814,   779,  1383,  1872,  1871,
     776,   768,   770,   771,     0,  1383,     0,     0,     0,   785,
     774,     0,   782,   765,   781,   766,  1548,  1547,     0,  1533,
       0,  1819,  1397,   843,  1583,  1521,     0,  1657,   850,     0,
     848,     0,     0,  1505,   877,   898,   903,     0,     0,  1522,
    1397,  1794,  1668,  1580,   916,   705,   913,  1421,  1393,   706,
     930,  1761,   705,  1391,   936,   935,   934,   933,   944,  1392,
    1794,   947,     0,   950,   951,     0,  1794,   954,   955,   956,
     957,     0,  1794,   959,  1392,   945,     0,   799,   923,   924,
     921,   922,     0,  1397,     0,   873,   982,   997,   999,   998,
     992,   994,  1000,  1427,   989,   986,  1427,   990,  1457,  1430,
    1431,  1821,  1023,  1501,   705,  1031,  1032,  1856,  1047,  1048,
    1050,  1052,  1053,  1049,  1051,  1042,  1856,  1038,     0,  1087,
       0,  1089,  1088,  1090,  1072,  1082,     0,     0,  1066,  1240,
       0,  1785,     0,  1100,  1397,     0,     0,     0,  1118,  1128,
    1141,  1137,  1142,  1138,  1143,     0,  1133,  1377,  1376,  1140,
    1149,  1371,  1567,  1568,  1569,     0,     0,  1419,     0,   705,
       0,  1188,     0,     0,     0,  1225,     0,  1229,  1228,  1221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1209,
    1210,  1662,  1419,     0,  1272,  1848,  1848,  1287,  1288,  1289,
       0,  1397,     0,     0,   704,     0,  1649,     0,  1289,  1177,
    1751,   462,     0,  1794,  1645,  1618,  1647,  1619,  1643,  1615,
    1616,  1617,  1641,  1638,  1639,  1613,  1632,     0,  1611,  1612,
     494,     0,     0,  1916,  1917,  1794,  1755,     0,   511,   515,
    1778,   519,     0,     0,   613,   614,   617,   618,     0,   646,
    1815,  1794,  1854,  1794,   647,   645,   659,  1794,   678,   679,
     682,     0,   673,   688,   690,  1794,   801,     0,     0,   789,
     790,     0,  1385,  1386,   780,  1387,   705,   767,   769,  1383,
     777,   772,   773,   786,   775,  1550,  1532,  1549,  1667,     0,
     705,   839,  1399,  1581,  1582,  1397,     0,  1656,   849,   851,
     858,   856,   885,  1792,   902,   901,   906,     0,  1420,   705,
    1418,   708,  1395,   925,     0,   948,   949,   952,   953,     0,
    1423,  1423,     0,   946,   927,   939,   940,   938,   941,     0,
     968,     0,   868,   869,   677,     0,  1427,  1427,   996,   705,
     993,     0,  1030,   705,  1033,  1028,     0,     0,  1054,     0,
       0,     0,  1083,  1085,     0,  1078,  1092,  1079,  1080,  1071,
    1074,  1092,  1232,  1794,  1799,     0,  1786,  1239,  1101,  1104,
       0,  1118,  1117,  1121,  1110,     0,  1129,  1126,     0,     0,
    1151,  1150,   705,  1171,  1407,  1176,  1178,     0,  1190,  1427,
    1427,  1185,  1191,  1208,  1220,  1222,  1212,  1213,  1214,  1218,
    1215,  1219,  1216,  1217,  1211,  1663,  1265,     0,  1262,  1263,
    1257,     0,  1250,  1896,  1895,     0,  1849,  1275,  1275,  1402,
       0,  1667,  1295,     0,   697,     0,  1650,  1320,  1321,     0,
    1324,  1327,  1331,  1325,  1419,  1752,     0,   482,   479,   480,
       0,  1633,   314,   516,  1808,  1809,  1591,   527,   524,   357,
     540,   520,   521,   636,   635,   652,   658,     0,   655,   680,
     681,   690,   708,     0,     0,  1383,   794,   796,   795,  1389,
    1390,  1382,   705,  1384,   778,  1397,  1522,  1398,   705,  1396,
    1580,   840,  1658,  1553,  1554,  1877,  1878,   887,   705,  1819,
    1793,   884,   883,   879,     0,  1671,  1672,  1673,  1674,  1675,
    1676,  1677,  1678,  1670,  1422,     0,   961,   960,   963,     0,
    1565,  1566,   962,   958,     0,   931,  1397,  1488,  1397,  1488,
     870,   871,     0,   875,   874,   876,   995,  1001,   991,  1025,
    1029,  1040,  1043,  1044,  1773,  1036,  1856,  1041,  1092,  1092,
       0,  1077,  1075,  1076,  1081,  1242,     0,  1236,  1787,  1397,
    1111,  1120,     0,  1144,     0,     0,  1158,     0,  1411,   705,
    1406,  1179,   705,   705,  1192,  1264,  1254,  1258,  1259,  1260,
    1261,  1252,  1273,  1276,  1274,   705,  1283,  1404,  1794,  1397,
    1397,   699,  1309,  1649,  1323,  1783,  1329,  1783,  1402,   705,
     705,  1369,  1379,  1414,  1415,  1378,  1375,  1374,  1804,   481,
     475,   523,  1883,  1884,   526,   359,   541,   522,   650,   648,
     651,   649,   653,   654,     0,   630,   656,   657,     0,   708,
     800,   805,  1794,   807,   808,   809,   834,  1794,   810,   811,
     812,   813,   814,     0,   815,   816,   818,     0,   819,   820,
       0,   821,  1794,   806,  1753,   824,   833,   827,   802,   803,
     826,   764,  1388,   841,  1400,   705,   861,   886,     0,   878,
    1893,  1894,  1424,   942,   970,     0,   969,     0,   872,  1045,
    1774,     0,     0,  1073,  1084,  1092,  1790,  1790,  1093,     0,
       0,  1245,  1241,  1235,  1105,  1119,     0,  1152,  1794,  1419,
       0,     0,  1153,     0,  1157,  1412,  1186,  1193,  1403,   705,
    1401,     0,  1297,  1296,  1335,   698,     0,  1322,     0,  1783,
    1326,     0,  1318,  1416,  1417,  1413,  1805,  1806,  1373,     0,
    1794,  1794,     0,   528,   529,   530,   531,   532,   533,     0,
     543,   633,   634,     0,     0,     0,   825,  1794,  1794,  1423,
    1423,     0,  1754,     0,   804,   888,   880,  1397,  1397,     0,
    1055,  1091,  1791,     0,     0,  1794,  1243,     0,     0,  1233,
    1237,     0,     0,  1148,  1161,  1409,  1410,  1160,  1156,  1154,
    1155,  1405,  1290,  1343,   700,  1328,     0,  1332,  1903,  1902,
    1794,     0,     0,  1905,     0,  1794,  1794,   525,  1841,     0,
     829,   828,     0,     0,   831,   830,   823,   832,  1563,  1564,
     972,   971,  1046,  1095,  1094,     0,  1246,  1794,  1427,  1159,
    1408,  1366,  1365,  1344,  1336,  1337,  1753,  1338,  1339,  1340,
    1341,  1364,     0,     0,  1330,     0,   538,   534,  1904,     0,
       0,  1788,  1816,  1755,     0,     0,     0,  1794,  1819,   542,
    1794,  1794,     0,   548,   550,   559,   551,   553,   556,   544,
     545,   546,   555,   557,   560,   547,     0,   552,     0,   554,
     558,   549,  1816,  1755,   689,   817,   822,  1244,     0,  1145,
       0,  1846,     0,  1821,   535,   537,   536,  1789,   598,  1817,
    1818,  1796,   584,  1794,   463,  1427,     0,     0,     0,     0,
       0,   592,     0,   582,   588,   591,     0,   585,   593,   596,
    1796,   587,  1247,     0,  1847,     0,  1362,  1361,  1360,     0,
     583,     0,  1854,   580,  1667,   576,  1535,  1907,     0,     0,
    1909,  1911,     0,  1915,  1913,   561,   565,   569,   569,   563,
     567,   562,   568,   599,     0,   590,   589,   595,   594,   586,
    1363,  1876,  1875,  1829,  1356,  1350,  1351,  1353,   574,   467,
     597,  1821,   575,  1536,  1906,  1910,  1908,  1914,  1912,   572,
     564,   572,   566,     0,  1830,  1821,  1359,  1354,  1357,     0,
    1352,   459,     0,     0,   571,   570,     0,     0,  1358,  1355,
       0,   458,   579,   577,   578,   573,   581,  1349,  1346,  1348,
    1347,  1342,  1345,   460
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2319, -2319, -2319, -2319, -2319,  2152, -2319, -2319, -2319,   759,
   -2319,  2114, -2319,  2069, -2319, -2319,  1289, -2319, -2319, -2319,
    1345, -2319, -2319,  1349,  2136, -2319, -2319,  2037, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1966,
     711, -2319, -2319, -2319, -2319, -2319,  2020, -2319, -2319, -2319,
   -2319,  1963, -2319, -2319, -2319, -2319, -2319, -2319,  2095, -2319,
   -2319, -2319, -2319,  1950, -2319, -2319, -2319, -2319,  1934, -2319,
   -2319,   822, -2319, -2319, -2319, -2319, -2319,  2027, -2319, -2319,
   -2319, -2319,  2002, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,  1025, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319,  1662, -2319,  1773, -2319,
   -2319, -2319,  1707, -2319, -2319, -2319, -2319,   275, -2319, -2319,
    1898, -2319, -2319, -2319, -2319, -2319,  1762, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319,  1159, -2319, -2319, -2319,  1407, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319,   414, -2319, -2319,  1689, -2319,  -757,  -831, -2319, -2319,
   -2319,   361, -2319, -2319, -2319, -2319,  -504, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -1420,   739,  1443,   346,   475, -1416,
   -2319, -2319, -2319,  -952, -2319,  -517, -2319, -2319,   788, -2319,
     295,   522, -2319,    -2, -1414, -2319, -1412, -2319, -1411, -2319,
   -2319,  1399, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,  -491,  -522, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -1303, -2319,
    -457, -2319, -2319, -2319, -2319, -2319, -2319, -2319,  1358, -2319,
   -2319, -2319,   -17,   -11, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,  1173,   248, -2319,   115, -2319,
   -2319, -2319, -2319, -1272, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319,  -565, -2319, -2319,  -701, -2319,  1423, -2319, -2319, -2319,
   -2319, -2319, -2319,   987,   448,   451, -2319,   368, -2319, -2319,
    -192,  -176, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319,   421, -2319, -2319, -2319,   978, -2319, -2319, -2319, -2319,
   -2319,   736, -2319, -2319,   130, -2319, -2319, -1269, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,   737, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,   714, -2319, -2319, -2319, -2319,
   -2319,   -50, -1781, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319,   696, -2319, -2319,   695, -2319,
   -2319,   363,   135, -2319, -2319, -2319, -2319, -2319,   935, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319,   -65,   657, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319,   649, -2319, -2319,   119, -2319,   340,
   -2319, -2319, -1947, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319,   904,   642,   108, -2319,
   -2319, -2319, -2319, -2319, -2319, -2302,   905, -2319, -2319, -2319,
     104, -2319, -2319, -2319,   320, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319,   274, -2319, -2319, -2319, -2319, -2319, -2319,   622,    98,
   -2319, -2319, -2319, -2319, -2319,  -136, -2319, -2319, -2319, -2319,
     303, -2319, -2319, -2319,   880, -2319,   886, -2319, -2319,  1112,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,    78,
   -2319, -2319, -2319, -2319, -2319,   878,   292, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,   -82,
   -2319,   297, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319,  -443, -2319, -2319, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319,  -222, -2319,   592, -2319, -2319, -1605,
   -2319, -2319, -2319, -2319,  -574, -2319, -2319, -1748, -2319, -2319,
     -84, -2319, -2319, -2319, -2319,  -182, -2201, -2319, -2319,   -80,
   -1840, -2319, -2319, -1983, -1560, -1075, -1464, -2319, -2319,   706,
   -1783,   106,   107,   109,   111,   263,   105,  -782,   427,   324,
   -2319,   626,  -355, -1406, -1085,  -881,   915, -1561,  -392,  -391,
   -2319, -1325, -2319, -1055, -1536,   790,  -529,   -88,  1975, -2319,
    1589,  -555,    18,  2127, -1076, -1070,    87,  -418, -2319, -1104,
   -1336, -2319,   348, -1294, -1327, -1102,  1033, -1873, -2319, -2319,
     566, -1126, -2319,   -69,   949,  -631, -2319, -2319,  -103, -1215,
    -768,  -111,  2018, -1929,  2051,  -673,  1601,   278,  -399, -2319,
   -2319, -2319,  -143,  1305, -2319, -2319,   444, -2319, -2319, -2319,
   -2319, -2319, -2319, -2319, -2319, -2319, -2319, -2319, -1988, -2319,
   -2319,  1537, -2319, -2319,  -280,  -591,  1880, -2319, -1185, -2319,
   -1314,  -257,  -630,   843, -2319,  1795, -2319, -1451, -2319,  -783,
   -2319, -2319,  -139, -2319,    -8,  -659,  -353, -2319, -2319, -2319,
   -2319,  -230,  -282,  -323, -1202, -1557,  2085,  1857, -2319, -2319,
    -333, -2319, -2319,   974, -2319, -2319, -2319,   347, -2319,   200,
   -1953, -1486, -2319, -2319, -2319,  -172,   406, -1409, -1735, -2319,
   -2319, -2319,  -330, -2319, -2319,  1597, -2319,  1765, -2319, -2319,
   -2319,   724, -2319, -2318,  -337, -2319, -2319, -2319, -2319, -2319,
   -2319
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
    2207,  2361,  2483,  2484,  2485,  2486,  2487,  2488,  1998,  2210,
    2490,  2548,  2609,  2610,  2685,  2720,  2734,  2611,  2612,  2712,
    2743,  2613,  2614,  2615,  2616,  2617,  2618,  2653,  2654,  2657,
    2658,  2619,  2620,  2621,   590,   785,   851,   852,   853,  1214,
    1450,  1744,  2372,  2373,  2374,  2378,  1745,  1746,   720,  1457,
    2024,   721,   856,  1035,  1034,  1217,  1218,  1219,  1454,  1752,
    1037,  1754,  2221,  1159,  1391,  1392,  2341,  2465,  1393,  1394,
    1963,  1818,  1819,  2071,  1395,   788,   909,   910,  1109,  1225,
    1226,  1783,  1461,  1517,  1763,  1764,  1760,  2026,  2225,  2408,
    2409,  2410,  1459,   911,  1110,  1232,  1473,  1471,   912,  1111,
    1239,  1800,   913,  1112,  1243,  1244,  1802,   914,  1113,  1252,
    1253,  1527,  1855,  2092,  2093,  2094,  2062,  1128,  2253,  2247,
    2416,  1482,   915,  1114,  1255,   916,  1115,  1258,  1489,   917,
    1116,  1261,  1494,   918,   919,   920,  1117,  1270,  1503,  1506,
     921,  1118,  1273,  1274,  1511,  1275,  1515,  1847,  2087,  2275,
    1829,  1844,  1845,  1509,   922,  1119,  1280,  1523,   923,  1120,
    1283,   924,  1121,  1286,  1287,  1288,  1532,  1533,  1534,  1865,
    1535,  1860,  1861,  2098,  1529,   925,  1122,  1297,  1129,   926,
    1123,  1298,   927,  1124,  1301,   928,  1125,  1304,  1872,   929,
     930,  1130,  1876,  2105,   931,  1131,  1309,  1576,  1885,  2108,
    2292,  2293,  2294,  2295,   932,  1132,  1311,   933,  1133,  1313,
    1314,  1582,  1583,  1897,  1584,  1585,  2119,  2120,  1894,  1895,
    1896,  2113,  2301,  2438,   934,  1134,   935,  1135,  1323,   936,
    1136,  1325,  1592,   937,  1138,  1331,  1332,  1596,  2134,   938,
    1139,  1335,  1600,  2137,  1601,  1336,  1337,  1338,  1911,  1913,
    1914,   939,  1140,  1345,  1926,  2316,  2449,  2523,  1608,   940,
     941,  1141,  1347,   942,   943,  1142,  1350,  1615,   944,  1143,
    1352,  1927,  1618,   945,   946,  1144,  1355,  1624,  1930,  2151,
    2152,  1622,   947,  1145,  1360,   159,  1636,  1361,  1362,  1949,
    1950,  1363,  1364,  1365,  1366,  1367,  1368,   948,  1146,  1318,
    2305,  1586,  2443,  1899,  2122,  2441,  2519,   949,  1147,  1376,
    1952,  1644,  2167,  2168,  2169,  1640,   950,  1378,  1646,  2332,
    1153,   951,  1154,  1380,  1381,  1382,  2179,  1650,   952,  1155,
    1385,  1655,   953,  1157,   954,  1158,  1387,   955,  1160,  1396,
     956,  1161,  1398,  1664,   957,  1162,  1400,  1668,  2187,  2188,
    1968,  2190,  2346,  2470,  2348,  1666,  2466,  2533,  2574,  2575,
    2576,  2751,  2577,  2705,  2706,  2729,  2578,  2668,  2579,  2580,
    2581,   958,  1163,  1402,  1613,  1969,  1919,  2351,  1670,  2034,
    2035,  2036,  2231,  2232,  1512,  1513,  1823,  2051,  2052,  2239,
    2336,  2337,  2460,  2143,  2524,  2144,  2320,  2352,  2353,  2354,
    1816,  1817,  2070,  2268,  1307,  1308,  1290,  1291,  1562,  1563,
    1564,  1565,  1566,  1567,  1568,   991,  1191,  1411,   993,   994,
     995,   996,  1233,  1262,  1497,  1348,  1356,   395,   396,  1029,
    1369,  1370,  1573,  1339,  1246,  1247,   541,   481,   301,   694,
     695,   482,    98,   153,  1299,  1264,  1234,  1474,  2675,  1423,
     998,  1788,  2046,  2121,  2242,  1256,  1340,  1756,  2557,  2269,
    1921,  1757,  1319,  1373,  1236,  1000,  1265,  1266,   742,   795,
     796,  1758,   271,  2655,   179,  1237,   768,   769,  1238,  1003,
    1004,  1005,  1199,  1172,  1431,  1427,  1420,  1412,  1414,   501,
    2189,   537,  1477,  1798,  2057,  1611,  2171,   282,  1500,  1812,
    2263,   805,  1108,  2196,  2503,   606,   339,   687,  1463,   423,
    1220,   202,   115,   393,  2431,   337,  2002,   352,  1027,   778,
    2127,  2638,  2513,  2254,    96,   214,   414,   747,  2478,  1997,
     774,   402,  2011,  2641,   809,  1407,   218,   488,  2725,   168,
     390,   738,   102,   726,   683,   842,  2665,  2177,   350,  1575,
     965,  1305,   407,   736,  1205,  1344,   391,  1765,  1785,  1498,
    2703,  2248,   184,   698,  2364,   715,   347,   598,  1491,  2422,
    2175,   538,   203,  2540,  2546,  2688,  2689,  2690,  2691,  2692,
    1711
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     139,   427,   139,   428,   749,   160,   692,   960,   139,   245,
    1166,   581,   992,   415,   767,   138,  1278,   141,  1031,  1372,
     787,   741,   215,   147,  1446,   404,  1465,  1007,   849,  1900,
    1738,  1263,   139,   427,  1740,  1908,  1741,   268,  1742,  1743,
    1808,  1748,  1912,   464,  1632,   699,  1289,   180,   103,   104,
     105,   437,  1501,  1300,  1868,  1310,   111,  1245,  1492,  2216,
    2235,  1300,  2066,  2083,  1625,  1648,  1792,  1862,  2208,  1371,
     776,    99,   708,   279,   463,  1300,   801,  2704,   107,  1530,
     259,   246,  1430,   211, -1821,   854,  1460,  2145,  -665,  -663,
    1857,   134,   135,  1354,   136,   849,  1441,  2249,  2272,   143,
     144,   220,  1017,   345,   321,  2090,  1588,   411,   161,  1645,
     291,  1889,  2172,  1216,   264,   535,  1871,  2493,   114,  1853,
    1188, -1761,  2719, -1761,  1540,   169,   801,   832,   832,  2080,
    2213,   360, -1865,  1579,  1148,  2214,  -660,  1188,   703,  1784,
     297,   215,  1991,   448,  2386,  1598,  1216,  1188,  2245,  2499,
      94,  2439,   219,  1485,  2226,  2227,  2129,   752,  2228,  1638,
    1890, -1578,  2747,  2742,  2545,   154, -1799,  1857,  2170, -1572,
    2040,   413, -1573, -1821,  2304,   836,  2666,   704,   832,   221,
    2004,  1224,   535,   251,   327, -1765,   392,  1904,  1245,  1827,
    2219,   453,   529,  2339,   480,   258, -1865,   419,  1359,  1524,
   -1599,  2266,  2517,  1184,  1216, -1576,  2267,  1292,   211,  2273,
    1024,   696,  1216,  2182,   684,  1448,   739,  2748,   745,  2283,
     228,   283,   127,  1260,  1202,  2749,  1149,  -665,  -663,  1572,
    1475,  -665,  -663,  1658,   712,   129,   274,   275,  1452,   182,
    1572,   295, -1865,  1702,   724,  1824,  1540,  1025,  2526,   299,
    1961,   505, -1834,  1269,   187,  2165,   418, -1767,  1242,  2166,
   -1578,   188,  1353,  2627,   229,  1193,  1917,  1150,     3,  1786,
    1194,  1703,  1704,  1284,   230,  -660,  -512,   794,    23,  -660,
    1891,   850,  1403,   216,  1285,  1888,  1188,  1188,  -665,  -663,
     311,  1630,  1659,  1188,   212,  1918,  1151,  1300, -1852, -1540,
     314,  1572,  1260,   394,  -512,  -512,  1453,  2241, -1781, -1761,
    2750,  1188,   204,   713,  2101,   714,   725,  1188,  2518,  2005,
    2250,   128,   697,  2358,  2570,  1242,  2662,   412,   183,  1240,
    2686,   603,    94,  1293,  1294,   430,  -660,   284,  1206,   130,
     139,  1173,   139,   139,  1892,  2131,   493,   154,   850,   139,
    1295,  2433,  2434,  1966,  2355,   410,   232,   485,   486,  1717,
    1972,  1718,   746,   280,   491,    24,   139,  1965,  1406,   507,
     507,  1358,   507,   -35,   243,   507,   514,  1631,   283,  1525,
     137,   485,  2325,   424,   685,    15,   281,  1263,   753, -1761,
    2055,  2106,  1152,  1983,   436,  1002,  1419,  1419,  1419,  1862,
    2109,  2251,  1862,   443,   444,  1296,   445,   446,  1580,  1432,
    1434, -1540,   452,   139,    94,   154,  1440,   137,  -512,   212,
    1359,  1555,   449,  1755, -1765,   794,   233,  2440,   542,   469,
     757,  -665,  -663,   735,  2234,  2489,   512,   139,   139,   997,
    1263,   465, -1799,  1389,   260,   492,   137,  -512,  2246,   834,
    1189,   413,   542,   582,   137,  1289,  1495, -1765,  1787,  1599,
    1316,   187,  1207,  1208,  2099,  1476,   189,  1189,   188,  1006,
    2667,   368,   705,   837,   760,   719,   217,  1189,   139,  -660,
    2039,  1581,   709,   689,   761,  1825,   450,  2413,  2511,  1359,
     700,  2284,  2081,   582,   284,   137,  1390,   139,   536,  1502,
     394,  2491,  1190,   137,  1705,  2492,   129,   540,  1263,   757,
     137,   775,  2500,    97,  1903, -1765,  2554,  2555,  1873, -1644,
    1300,  2406,   236, -1765,  1018,  2365,   577,  1858,  2424, -1646,
    2426,   855,   243,   255,  -670,  2063,   740,  -512,  1859,   190,
     292,  2095,  -668,  1555,  1389,  1389,   593,  1013,   595,  1916,
     743,   600,   602,   760,   604,   346,  2252,   431,  1260,   322,
    1572,  2444,   243,   761,  1516,   536,   762, -1765,  1531,   265,
     149,  1263,   261,  1175,  2559,  1893,   843,   137,   710,  2053,
    1447, -1664,   394,   682,  1982,  1002,  1002,  1002,   691,  2049,
    2323,  2462,  2463,   137,   609,   702,   191,  1390,  1390,  1467,
   -1765,   192,  2114, -1794,  1858,   794,  1502,  1002,  1006,  2527,
     130,  -670,  2586,  2587,  1260,  1859,  1189,  1189, -1834,  -668,
    2411,  2550,  2551,  1189,  1984,   137,   707,  1762,  2556,   997,
     997,   997,  1862,  1574,  2285,  1193,   763,  1706, -1852,  2153,
    1194,  1189,  2083,  1176,  1177,   762,  1126,  1189,    42,  1260,
    1182,   997,  2075,  1242,   748,  1254,  2634,  1826, -1765,   835,
    2635,  2636,  1260,  2018,   840,   466, -1765,  1023,  1683, -1642,
    -512,  1260,   154,   189,  2045, -1640,  1633,   845,   845,  1193,
    2626,   963,   764,  2276,  1194,  2278,  2710,  1359,   137,  2659,
     187, -1865,  1235, -1637,  1008,   780, -1540,   188,   781,  1695,
    1277,  1281,     4,  2281, -1540, -1540,   193,  2125,  1460, -1540,
    1306,  1263,  1002,  1941,   724,   763,  1810,  1324,  1326,  2709,
     467,  1942,  1445,  1259,  2309,  1271,   137,   517,  2659,  2059,
   -1865,   755,   765,  1813,  1317,    16,  1383,  1235,  2356,  1889,
    1343,  1312,  2019, -1761, -1865, -1761,   190,  2061,  1346,   351,
    1351, -1865,  2222,  1496,  2547,  1377,   997,  1955,   724,  2560,
    2561,   764,  1717,   154,  1718,   757,  2173,  1388,   222,  1399,
    1002,  1002,  1002,   555,   596,   -96,   597,  2340,  2095,  1002,
    1002,  1002,  1426,  2298, -1865,  1126,   727,  1426,  1890,   556,
      43,  2076,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,
   -1779,  1426,  1002,   191,  2126,   137,  1452,  2206,   192,   760,
    2432,   765,  2206,  2623,   997,   997,   997,  2299,  2349,   761,
    2571,   757,  1127,   997,   997,   997,  2128,   328,   137,   557,
     729,  1469,  1300,  1572,  1789,  1249,   997,   997,   997,   997,
     997,   997,   997,   997,  1609,     5,   997,  1676,     5,   757,
    1165,    43,  2368,   583,  1343,   305,   757, -1865,  2342,  2572,
     252,  1809,   518,  2142, -1865,   760,  1486,   243,   137,   757,
    1813,  2357, -1865,  1569,  1453,   761,   187,  1504,   757,  2516,
    1455,   351, -1865,   188, -1865,  1956,  2656,  1943,   154, -1865,
    2203,  1698,  1815,   760,  1610,  2344,  2573,  1432, -1865,  1432,
     760,   762,   189,   761,  1589,   137,   253,   137,  1891, -1865,
     761,  1987,  2369,   760,   139,   139,  1211,  1480,   -96,  1944,
    1578,  1327,   760,   761,   137, -1779,   137,   243,  2677,  2543,
    1755, -1761,   761,   223,  2174,   757,  1677,  1343,  1507,  1923,
     724,  1945,   515, -1086,  1848,  1849,  1850,  1851,  2450,  2379,
    1761,  1602,  2115,  2350,  2270,  2270,  2566,   762,   722,    94,
     585,  1127,   519,  1383,  2678,  1815,   558,   253,  2451,  1603,
    1867,   763,  1892,  2435,   724,   190,  1328,   559,   584,   760,
    1487,  2538,   516,  2133,  1329,   762,   782, -1086,  1250,   761,
    1251,  2539,   762,   243,  2452,  1946,  1657, -1086,   306,   525,
     614,  2116,   316,  1634,  2277,   762,  2279,   329,  2629,  1248,
    1875, -1761,   731,  1267,   762,   137,   723,   764,  1616,  2453,
    1267,  1302,  2287,  1456,  1990,  2319,  2054,   763,  1267,   716,
    1762,  1321,   191,   807, -1761,  1909,  1342,   192,  1349,  1635,
    1349,  1357,  1374,  1321,  2370,  1263,   733,  2418,  1923,  2371,
     755,  2255, -1648,  2206,  1793,   763,  1947, -1794,  1572,   137,
    1349,   137,   763,   317,   318,  1320,  1806,   765,   330,  1330,
    2050,   762,    18,   764,  2322,   763,  2669,  1320,   300, -1086,
     560,   561,  2583,  2651,   763,  2673,    94,  1490,   189,   254,
     243,  1807,   610,  1821,  1934,   562,   405,   563,  1263,  1002,
    1488,   764,   243,   755,   830,   830,  1852,  1854,   764,   243,
     394,  1814,  1016,  1994,   325,  2375,   243,   137,  2050,  1877,
     833,   764,  1878,   765,   611,  1879,  1880,  2652,  2603,   243,
     764,  1619,  2604,  2707,  2606,    27,  2607,  2608,  1577,  2622,
    1248,   763,   255,   997,  1569,   137,   344,   406,    28, -1086,
     810,   765,   137,  1948,  2732,   830,   757,  2047,   765,  1267,
     170,   190,   470,   471,   472,   137,   438,  1193,  2737,  2707,
    1014,   765,  1194,   117,   137,  1905,  2752,   966,   400,   361,
     765,  1671,   564,    52,  1641,  2117,  2436,   764,  1002,   811,
     812,   813,   814,   815,   967, -1086,  1267,  2679,    94,  2502,
     760,  2680,  2681,  1893,   171,  1276,  1647,  1267,     5,   757,
     761,   362,   439,  1924,   172,  2437,  1939,   750,   191, -1863,
     755,   154,   154,   192,   226,   629,   630,  1954,  2630,   565,
    1958,    53,   997,   831,   831,  2714,  2454,   765,  1962, -1086,
    2726,  2209,  1386,  2682,  1642, -1086,   155,  1643,   156,   751,
    2068,  1357,   416,   760,   757,  2073,  2715,  2072,  2588,  2683,
    2684,   756,    33,   761,  1267,  2146,  2311,  1203,  1267,    54,
    2084,    55,  2727,    56,   155,   298,   156,    36,  1920,  2716,
    1002,    57,  1002,   473,   831,  2240,   968,   969,   970,  1426,
    2147,  2312,   762,  2728,  1002,   971,   173,   474,   760,  2256,
    2257,  2258,    21,    22,   139,  2047,  1195,   757,   761,  2102,
    2674,  2676,   403,  1878,  1490,  1196,  1879,  1880,  2717,  1673,
     441,    46,  1924,   227,   997,  1973,   997,    39,   816,   817,
     818,   819,   820,   821,   822,   642,   643,    58,   997,  2713,
    2507,  2718,  2508,   139,   713,   762,   714,    13,  2582,  2543,
    2696,   760,    13,   975,   976,   977,  1937,  1321,  2723,   978,
      40,   761,   763,  2259,  2148,    26,   174,  1938,  2708,  1794,
    2265,  1192,    48,  2270,  2270, -1865,  2315,  2558,  2366,    49,
    1193,   475,    47,  2244,  2544,  1194,  1542,  1543,  1881,  1882,
     762,    91,  2479,  2331,   476, -1865,  2647,  2538,   594,   979,
    2746,  2538,  2480,   601,    51,  2205,  2701,  2539,   764,   228,
    2702,  2539,   175,  1883,  1884,   763,  2118,  2032,  2236,    97,
    2033, -1865,  1794,  1907,   757,  2481,  1544,  1545,  2085,  2086,
      60,  1693,  1410,  1413,  1416,    93,  1697,  2244,   101,  1429,
    1193,  1710,  1747,   762,  1749,  1194, -1865,  1928,   100,  1193,
    2625,    94,   137,   229,  1194,  2482,   758,   759,   765,   106,
     763,   764,   176,   230,  1442,  1451,  2017,   108,   760,  1451,
    1248,  2233,  1953,   114,   981,    61,   109,   231,   761,  2027,
    2028,   823,  1692,  2031,   110,  2237,   477,  1267,  2260,  2261,
    1794,   112,  1193,  2262,   824,  1935,   120,  1194,   508,  2201,
     510,  1248,   122,   511,  2264,  1662,   764,  1663,  2006,  1193,
    2007,   765,  2244,   763,  1194,  1679,   428,   113,  1681,  1437,
    1438,  1439,  2155,   124,  1684,   982,   983,  1267,  1688,  2077,
    1830,  2078,   126,  1831,  2288,  1690,   137,  1975,  2290,  1977,
    1832,  1833,  1979,  1980,  1981,   232,   140,  1964,  1985,   142,
     137,  1988,  1989,  1794,   162,  2229,   765,  2230,   149,   764,
     762,  2362,  2468,  2363,  2471,    64,  2420,   163,  2421,   987,
   -1556, -1556, -1556, -1556,  2476,   164,  2477,  2318,   167,  1881,
    1882,   139,  1518,  1519,  1520,  1521,  1768,  1834,  1769,   988,
   -1555, -1555, -1555, -1555,   989,   181,  1978,   728,   730,   732,
     734,   990,   186,   137,  1883,  1884,  1995,  1996,    67,   765,
    1183,   185,  1185,  2639,  2640,   233,   204,  2012,   234,   235,
    1435,  1436,   193,  1421,  1422,   247,   249,  2244,   118,   242,
     763,   248,   250,   257,  1951,   269,   273,   278,  2020,  1556,
     294,  1557,   296,   154,   300,   303,   302,   309,   307,   308,
     312,   313,   326,   333,   334,   338,  1835,   336,   137,   340,
     342,  1510,   349, -1865,   351,    52,   243,  2412,   353,   354,
     356,  2360,   392,  2414,   394,   397,   764,   398,   401,   403,
     408,    68,   187,  2417,   409,  1836,  2536,   421,   243,  1267,
     420,   422,  2672,  1267,  1992,  1993,  1267,   429,   413,  1248,
     454,   457,   487,   483,   455,  2003,   490,  1837,   459,  -347,
     495,   236,  2008,    53,   494,   502,   509,   522,   521,   523,
     543,  2314,  1830,   527,   533,  1831,   765,   547,   549,   548,
     551,   552,  1832,  1833,  -360,   554,  2135,   578,   579,   428,
     587,   588,  2021,   999,   589,   605,   607,   613,   612,   616,
    1267,    54,   617,    55,  2455,    56,   688,  2456,  2457,  2333,
    2333,  1838,   690,    57,   693,   718,   735,   701,   744,   737,
    2458,  2307,   773,   770,   754,   779,  1002,   777,   786,  1834,
     790,  1766,  1767,   789,  2473,  2474,   792,  2180,   797,   802,
     794,   804,   808,   841,   834,   847,  2180,  1928,   961,  1267,
    1267,  1267,  1015,  2067,  1012,  2156,  2157,  2158,  2159,  2160,
    2161,  2162,  2163, -1648,   964,  1839,  1011,  1006,  1033,    58,
     997,  1036,  2074,  1768,  1028,  1769,  1156,  1770,  2079,  1137,
    1167,  1197,  1169,  1164,  2082,  1209,  1222,  1170,  1171,  1213,
    1178,  1179,  1180,  1181,  1186,  1215,  1198,  1223,  1835,  1282,
    2505,  1303,  1200,  1404,  1201,  1406,  1417,  1418,  1267,  1443,
    1444,  1771,  1772,  1773,  2428,  1428,  1445,  1458,  1464,  1470,
    1479,  1481,  1499,  1493,  1570,  1505,  1840,  1836,  1508,  1528,
    1522,    59,  1590,  1574,  1593,  1587,  1591,  1595,   139,  1841,
   -1558,  1605,  1526,  1604,  2531,  1606,  1607,  1612,  1614,  1837,
    1321,  1617,  1623,  2202,  1637,  1321,  1621,  1359,  1842,  1639,
    2220,  1774,    60,  1775,  1216,  1649,  1661,  1654,  1667,  1665,
    1776,  1669,  1680,  1777,  1321,  1321,  1674,  1682,  1321,  1685,
    1699,   357,  1686,   999,   999,   999,  1750,  1701,  1687,  1689,
    1691,  1696,  1694,  1753,  1751,  1759,   358,  1790,  1797,  1796,
    1799,  1801,  1267,  1838,  1242,   999,   359,    61,  1811,  2135,
      62,  1815,  1822,  1828,  1510,  2200,  1874,  1846,  2317,  2271,
    2271,  1321,  1863,  1843,  1866,  1887,  1321,  1321,  1321,  1321,
    1902,  1580,  2670,  1910,  1929,  1925,  1267,  2204,  1267,  1933,
    1940,   360,  1960,  1967,  1999,  2000,  2010,  2013,  2016,  2023,
    2022,  2699,  2642,  2215,  2025,  2217,  2037,  1839,  2041,  2218,
    1778,  1761,  1779,  2038,  2042,  2043,  2056,  2223,  2060,  2064,
    1460,  2044,  2065,  2069,  2089,  1267,    63,  1267,  2521,  1359,
    2091,  2096,  2661,  2097,  2103,  2104,  2107,  2111,  2110,  2136,
    2138,  2130,  2139,  2142,  2176,  2183,  2149,    64,  2150,  2184,
    2185,  2186,  2195,  2238,  2206,  2197,  2224,  2274,  1227, -1577,
    1241,  2300,  2291,  1257,  2297,  2303,  2308,  1279,  1840,  2319,
    2321,  2335,    65,  2345,    66,  2343,  2380, -1533,  2347,  2338,
    1267,  1841,  1315,  2050, -1575,  2415,  2425,  2430,  1341,  2427,
      67,  2562,  2446,  1321,  2445,  2563,  2564,   139,  2448,  2459,
    1842,  2464,  2447,  2469,  2350,  2497,  2498,  2502,  2509,  1397,
    2510,  1401,   542,  2515,  2528,  2306,  2529,  2512,   999,   999,
     999,  2530,  2567,  2534,   428,  2549,  2568,   999,   999,   999,
    1424,  2588,  2624,  2632,  2633,  1424,  2637,  2645,  2643,  2664,
     999,   999,   999,   999,   999,   999,   999,   999,   361,  1424,
     999,  2663,  2694,  2693,  2736,  2724,  2733,  2738,  2740,    17,
      92,   125,    38,    68,   166,  1843,  2745,   256,   209,   266,
     119,   277,   290,  1267,   428,  1267,   504,   210,  1466,   241,
     362,   545,  2132,   442,   323,  1210,   526,   456,   846,  1739,
    -233,   798,  2731,  1672,  1971,  2124,  2359,  2722,  1010,  2735,
    2698,  2376,  1341,   139,  1257,  1780,  1267,  2377,  1221,  2282,
    1032,   959,  2030,  1462,  2029,  2088,  2504,  2496,  2442,  2058,
    1804,  1478,  2280,  1805,  2423,  1820,  1856,  2429,  1864,  2100,
    1571,  2286,  1898,  1886,  2112,  1594,  1906,  1267,  2302,  2310,
    2140,  1597,  2313,  2194,   363,  1628,  1932,  1002,  1002,   364,
    2324,  1228,  2164,  1629,   755,  1781,  2334,   139,  1375,  1652,
    2192,  2467,  2730,  1970,  2472,  2193,  1782,  2525,  1870,  1620,
    1803,  1321,   582,  2475,   332,  1321,  1002,  2327,  2328,   213,
    2329,   365,  2330,   772,  2154,  1341,  1484,  2009,   310,   366,
     806,   997,   997,   293,  1187,  1002,  2631,   447,  2514,  2660,
     272,   966,   367,  2178,   539,  2123,   489,  1626,  2296,   783,
    1901,  2687,     0,     0,     0,     0,     0,     0,   967,     0,
     997,     0,  1267,   599,  1267,     0,     0,     0,   966,     0,
    2461,   368,     0,  1653,   369,     0,     0,  1002,     0,   997,
    2520,     0,   370,     0,     0,   967,     0,     0,     0,     0,
       0,     0,     0,  -230,     0,     0,     0,     0,  1379,     0,
     428,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2494,     0,     0,     0,     0,  2495,
       0,   997,     0,   371,     0,     0,   372,     0,  2271,  2271,
       0,  1321,  1321,     0,  2501,  1001,  1321,  1321,  1321,     0,
    1321,     0,     0,     0,     0,     0,     0,     0,     0,  1333,
     968,   969,   970,     0,     0,     0,     0,     0,     0,   971,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   968,   969,   970,
    2522,     0,     0,     0,     0,     0,   971,   999,     0,     0,
    1321,     0,     0,     0,     0,     0,     0,     0,   757,     0,
       0,     0,  1248,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2541,  2542,  1651,  1334,     0,   975,   976,   977,
       0,     0,     0,   978,  2644,     0,     0,     0,     0,  2552,
    2553,  1230,     0,     0,     0,     0,     0,   973,     0,   974,
       0,     0,   760,     0,   975,   976,   977,  2565,     0,     0,
     978,     0,   761,     0,     0,     0,     0,  1231,     0,     0,
       0,     0,     0,   979,     0,  1248,     0,     0,  1626,     0,
       0,     0,  2585,     0,     0,     0,   999,  2589,  2590,     0,
       0,  2695,     0,     0,     0,  2697,     0,     0,     0,     0,
     979,     0,  1915,     0,     0,     0,     0,     0,     0,  2628,
       0,  1922,     0,     0,     0,     0,  1248,     0,     0,   980,
       0,     0,  1931,  1174,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1001,  1001,  1001,     0,  2646,
       0,     0,  2648,  2649,   762,     0,     0,     0,   981,     0,
    1959,     0,  1248,     0,     0,     0,     0,  1001,     0,     0,
    1626,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   981,  2739,     0,   999,  2753,
     999,     0,     0,     0,     0,  2671,     0,  1424,     0,     0,
       0,     0,   999,     0,     0,     0,   966,     0,     0,   982,
     983,     0,     0,  1228,     0,     0,   755,     0,     0,  1536,
    1537,  1538, -1865,   967,   763,     0,     0,  1539,     0,     0,
    1922,     0,     0,     0,     0,     0,   982,   983,     0,     0,
       0,     0,     0,  2014,     0,     0,  2015,     0,     0,     0,
       0,     0,     0,   987,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1139,     0,     0,     0,     0,     0,
     764,     0,  1001,   988,     0,     0,     0,  1268,   989,     0,
     987,     0, -1139,  1626,  1268,   990,   243,   137,     0,     0,
     966,     0,  1268,     0,     0,     0,     0,     0,     0,  2048,
     988,     0,     0,     0,     0,   989,  1268,   967,     0,     0,
       0,     0,   990,     0,   137,   968,   969,   970,  1228,     0,
     765,   755,     0,     0,   971,     0,     0,     0,     0,     0,
    1001,  1001,  1001,     0,     0,     0,     0,     0,     0,  1001,
    1001,  1001,  1425,     0,     0,     0,     0,  1425,     0,     0,
       0,     0,  1001,  1001,  1001,  1001,  1001,  1001,  1001,  1001,
       0,  1425,  1001,     0,     0,     0,     0,  1540,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1541,     0,     0,
    1483,     0,   975,   976,   977,     0,     0,     0,   978,     0,
       0,  1468,     0,     0,     0,   966,     0,     0,     0,   968,
     969,   970,     0,     0,     0,  1626,  1626,     0,   971,     0,
       0,     0,   967,     0,  1542,  1543,     0,     0,     0,     0,
     757,     0,     0,  1268,     0,     0,     0,     0,   979,     0,
       0,     0,     0,     0,  2141,     0,     0,     0,     0,     0,
    1869,     0,  1626,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1230,  1544,  1545,     0,     0,     0,   973,
    1268,   974,     0,     0,   760,  1936,   975,   976,   977,  2181,
       0,  1268,   978,     0,   761,     0,  2191,  2191,     0,  1231,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1546,     0,     0,     0,     0,     0,  1547,     0,
       0,  1257,  1548,   981,   968,   969,   970,     0,     0,     0,
    1549,  2212,   979,   971,     0,     0,     0,  1550,     0,  1627,
       0,     0,  1551,     0,     0,   757,     0,     0,  1268,     0,
       0,   980,  1268,     0,     0,     0,     0,     0,     0,     0,
       0,  1552,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   982,   983,   762,     0,  1230,     0,
       0,     0,     0,     0,   973,  2243,   974,     0,     0,   760,
       0,   975,   976,   977,     0,     0,     0,   978,     0,   761,
       0,     0,     0,     0,  1231,     0,     0,   981,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   987,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2289,     0,     0,     0,     0,     0,     0,   979,   988,  2243,
    1626,     0,     0,   989,     0,     0,   763,     0,  1626,     0,
     990,     0,   137,  1795,     0,     0,   980,     0,   982,   983,
       0,     0,     0,     0,     0,     0,     0,  1915,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1001,
    1553,   762,  1554,     0,  1555,     0,     0,  1556,     0,  1557,
    1558,  1559,   764,     0,  1560,  1561,  2326,     0,     0,     0,
       0,     0,   987,     0,   999,     0,  1795,     0,     0,     0,
       0,     0,   981,     0,  2243,     0,     0,     0,  1626,     0,
       0,     0,   988,     0,     0,     0,     0,   989,     0,     0,
       0,     0,     0,     0,   990,     0,   137,     0,     0,     0,
    2367,     0,   765,     0,     0,   857,  1257,   858,     0,   859,
       0,   763,     0,     0,   860,     0,     0,     0,     0,     0,
    1627,     0,   861,   982,   983,     0,     0,     0,  1001,     0,
       0,  1268,     0,     0,  1795,     0,     0,     0,     0,     0,
       0,     0,     0,  2419,     0,     0,     0,     0,     0,     0,
    1937,     0,     0,     0,     0,   862,   863,   764,     0,     0,
       0,  1938,     0,     0,     0,   864,     0,   987,     0,     0,
       0,  1268,     0,     0,     0,     0,   865,     0,     0,   866,
       0,     0,     0,     0,     0,     0,     0,   988,     0,  2243,
       0,     0,   989,   867,     0,     0,     0,  1795,     0,   990,
       0,   137,  1627,     0,     0,     0,     0,   765,     0,     0,
       0,     0,     0,     0,     0,     0,   868,     0,     0,     0,
    1001,     0,  1001,     0,   869,     0,   870,     0,     0,  1425,
       0,     0,     0,  -707,  1001,  -707,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,     0,  -707,  -707,  -707,     0,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,   871,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   872,     0,
       0,     0,     0,   873,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   874,
       0,     0,     0,     0,     0,     0,   875,  2506,     0,   876,
     877,     0,     0,     0,     0,  1627,     0,     0,     0,     0,
     878,     0,     0,     0,     0,     0,     0,   879,     0,   880,
       0,     0,   881,  1268,     0,     0,     0,  1268,     0,     0,
    1268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2532,     0,     0,     0,     0,     0,     0,  2535,     0,     0,
    2537,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   882,     0,     0,     0,   883,     0,
     884,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     885,     0,     0,     0,  1268,     0,  -707,  -707,  -707,     0,
    -707,  -707,  -707,  -707,     0,     0,     0,     0,     0,     0,
       0,  2569,     0,     0,     0,     0,     0,   886,     0,   857,
       0,   858,     0,   859,     0,  2584,     0,     0,   860,     0,
     887,     0,     0,     0,     0,     0,   861,  1627,  1627,     0,
       0,  1257,     0,  1268,  1268,  1268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   888,   889,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   890,     0,   862,
     863,     0,     0,     0,  1627,     0,     0,     0,     0,   864,
       0,   891,   892,     0,     0,     0,     0,     0,   893,     0,
     865,  2650,   894,   866,     0,     0,     0,     0,     0,     0,
     895,     0,  1268,     0,     0,     0,     0,   867,     0,     0,
     896,     0,     0,     0,     0,     0,     0,     0,     0,   897,
       0,     0,     0,     0,     0,     0,     0,     0,   898,     0,
     868,     0,     0,   899,   900,   999,   999,   901,   869,   902,
     870,     0,     0,     0,     0,     0,     0,   903,     0,     0,
       0,     0,  2700,     0,     0,     0,     0,     0,     0,     0,
    -707,     0,     0,     0,   999,     0,     0,     0,     0,     0,
       0,   871,     0,     0,     0,     0,  2721,  2721,   905,     0,
       0,     0,   872,   999,   906,     0,     0,   873,     0,   907,
       0,     0,     0,     0,     0,     0,  1268,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -707,     0,     0,   874,     0,     0,   908,     0,     0,     0,
     875,  2744,     0,   876,   877,   999,     0,     0,     0,     0,
    1268,     0,  1268,     0,   878,     0,     0,     0,     0,     0,
     857,   879,   858,   880,   859,     0,   881,     0,     0,   860,
       0,     0,  1627,     0,     0,     0,     0,   861,     0,     0,
    1627,     0,     0,     0,     0,     0,     0,     0,     0,  1268,
       0,  1268,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   882,     0,
     862,   863,   883,     0,   884,     0,     0,     0,     0,     0,
     864,     0,     0,     0,   885,     0,     0,     0,     0,     0,
       0,   865,     0,     0,   866,     0,  1001,     0,     0,     0,
       0,     0,     0,     0,  1268,     0,     0,     0,   867,     0,
    1627,   886,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   887,     0,     0,     0,     0,     0,
       0,   868,     0,     0,     0,     0,     0,     0,     0,   869,
       0,   870,     0,     0,     0,     0,   627,     0,     0,     0,
     888,   889,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   890,     0,     0,     0,     0,  1717,  1768,  1718,  1769,
       0,     0,   871,     0,     0,   891,   892,     0,     0,     0,
       0,     0,   893,   872,     0,     0,   894,     0,   873,     0,
       0,     0,     0,     0,   895,     0,     0,  1268,     0,  1268,
       0,     0,     0,     0,   896,     0,     0,     0,     0,     0,
       0,     0,     0,   897,   874,     0,     0,     0,     0,     0,
       0,   875,   898,     0,   876,   877,     0,   899,   900,     0,
    1268,   901,     0,   902,     0,   878,     0,     0,     0,     0,
       0,   903,   879,     0,   880,     0,     0,   881,     0,     0,
       0,     0,     0,     0,   904,     0,     0,     0,     0,     0,
       0,  1268,     0,     0,     0,   857,     0,   858,     0,   859,
       0,     0,   905,     0,   860,     0,     0,     0,   906,     0,
       0,     0,   861,   907,     0,     0,     0,     0,     0,   882,
       0,     0,     0,   883,     0,   884,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   885,     0,     0,     0,     0,
     908,  2591,     0,     0,     0,   862,   863,     0,     0,     0,
       0,     0,     0,     0,     0,   864,     0,     0,     0,     0,
       0,     0,   886,     0,     0,     0,   865,   645,     0,   866,
       0,     0,     0,     0,     0,   887,  1268,     0,  1268,     0,
       0,     0,     0,   867,  2592,     0,  2593,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   888,   889,     0,     0,     0,   868,     0,     0,     0,
       0,     0,   890,     0,   869,     0,   870,  2594,     0,     0,
       0,     0,     0,     0,     0,     0,   891,   892,     0,     0,
       0,     0,     0,   893,     0,     0,     0,   894,  2595,     0,
       0,     0,     0,     0,     0,   895,     0,   871,     0,     0,
       0,     0,     0,     0,     0,   896,     0,     0,   872,     0,
     649,     0,     0,   873,   897,     0,  2596,     0,     0,     0,
       0,     0,     0,   898,   966,     0,     0,     0,   899,   900,
       0,     0,   901,     0,   902,     0,     0,     0,     0,   874,
       0,   967,   903,     0,     0,     0,   875,     0,     0,   876,
     877,     0,     0,     0,     0,  1660,     0,     0,     0,     0,
     878,     0,     0,     0,     0,     0,     0,   879,     0,   880,
       0,     0,   881,   905,     0,     0,     0,     0,     0,   906,
       0,     0,     0,     0,   907,     0,     0,     0,     0,   654,
       0,     0,     0,     0,     0,     0,     0,     0,  2597,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   908,     0,     0,   882,  2598,     0,     0,   883,     0,
     884,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     885,     0,     0,   968,   969,   970,     0,  2599,     0,     0,
       0,     0,   971,     0,     0,     0,     0,  1001,  1001,     0,
       0,     0,     0,     0,   757,     0,     0,   886,  2600,     0,
       0,     0,     0,     0,     0,     0,  1038,     0,  1039,     0,
     887,     0,     0,  1040,     0,     0,  1001,  2601,     0,     0,
       0,  1041,     0,     0,   663,  2602,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1001,   888,   889,   760,     0,
     975,   976,   977,     0,     0,     0,   978,   890,   761,     0,
       0,     0,     0,     0,  1042,  1043,     0,     0,     0,     0,
       0,   891,   892,     0,  1044,     0,     0,     0,   893,     0,
       0,     0,   894,     0,     0,  1045,     0,  1001,  1046,     0,
     895,     0,     0,     0,     0,     0,   979,     0,     0,     0,
     896,     0,  1047,     0,     0,     0,     0,  1228,     0,   897,
     755,     0,     0,  1536,  1537,  1538,     0,     0,   898,     0,
       0,  1539,     0,   899,   900,  1048,     0,   901,     0,   902,
       0,     0,     0,  1049,     0,  1050,     0,   903,     0,     0,
     762,     0,  1051,     0,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,     0,  1060,  1061,  1062,     0,  1063,  1064,  1065,
    1066,  1067,  1068,  1069,  1070,  1071,  1072,     0,   905,     0,
       0,   981,     0,     0,   906,     0,     0,  1073,     0,   907,
       0,     0,  1074,     0,   966,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   967,     0,     0,     0,     0,   908,     0,  1075,     0,
     763,     0,     0,     0,     0,  1076,     0,     0,  1077,  1078,
       0,     0,   982,   983,     0,     0,     0,     0,     0,  1079,
       0,     0,     0,     0,     0,     0,  1080,     0,  1081,     0,
       0,  1082,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   764,     0,     0,     0,
       0,  1540,     0,     0,     0,     0,   987,     0,     0,     0,
       0,  1541,     0,     0,     0,  -873,     0,     0,  -873,     0,
       0,     0,     0,  1083,     0,     0,   988,  1084,     0,  1085,
       0,   989,     0,   968,   969,   970,     0,     0,   990,  1086,
     137,     0,   971,     0,     0,     0,   765,     0,  1542,  1543,
       0,     0,     0,     0,   757,     0,     0,     0,  1216,     0,
       0,     0,     0,     0,     0,     0,  1087,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1088,
       0,     0,     0,     0,     0,     0,     0,  1230,  1544,  1545,
       0,     0,  -873,   973,     0,   974,     0, -1765,   760,     0,
     975,   976,   977,     0,     0,  1089,   978,     0,   761,  -873,
       0,     0,     0,  1231,     0,     0,  1090,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1546,     0,     0,     0,
       0,  1091,  1547,     0,     0,     0,  1548,  1092,     0,     0,
    1228,  1093,     0,   755,  1549,     0,   979,     0,     0,  1094,
       0,  1550,     0,     0,     0,     0,  1551,     0,     0,  1095,
       0,     0,     0,     0,     0,   980,     0,     0,  1096,     0,
       0,     0,     0,     0,     0,  1552,     0,  1097,     0,     0,
       0,     0,  1098,  1099,     0,     0,  1100,     0,  1101,     0,
     762,     0,     0,     0,     0,     0,  1102,     0,     0,     0,
       0,  -873,  -873,  -873,     0,     0,     0,     0,     0,  1103,
    -873,     0,     0,     0,     0,     0,     0,   966,     0,     0,
       0,   981,  -873,     0,     0,     0,     0,  1104,     0,  1229,
       0,     0,     0,  1105,   967,     0,     0,     0,  1106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -873,     0,     0,     0,     0,
     763,  -873,     0,  -873,     0,  1107,  -873,     0,  -873,  -873,
    -873,     0,   982,   983,  -873,     0,  -873,     0,     0,     0,
       0,  -873,  1228,     0,     0,   755,     0,     0,     0,     0,
       0,     0,     0,     0,  1553,     0,  1554,     0,  1555,     0,
       0,  1556,     0,  1557,  1558,  1559,   764,     0,  1560,  1561,
       0,     0,     0,     0,  -873,     0,   987,     0,     0,  -873,
       0,     0,     0,     0,     0,     0,   968,   969,   970,     0,
       0,     0,     0,  -873,     0,   971,   988,     0,     0,     0,
       0,   989,     0,     0,     0,     0,     0,   757,   990,     0,
     137,     0,     0,     0,     0,     0,   765,     0,  -873,   966,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1765,
       0,  1322,     0,     0,     0,     0,   967,     0,     0,     0,
    1230,     0,     0,     0,     0,     0,   973,     0,   974,  -873,
       0,   760,     0,   975,   976,   977,     0,     0,     0,   978,
       0,   761,     0,     0,     0,     0,  1231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2381,     0,
       0,  2382,  -873,     0,  2383,     0,     0,     0,  -873,     0,
       0,  1228,  2384,     0,   755,     0,     0,     0,     0,   979,
    -873,  -873,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   980,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   968,   969,
     970,     0,     0,     0,  -873,     0,     0,   971,  2385,     0,
       0,     0,     0,   762,  -873,     0,     0,     0,     0,   757,
    -873,     0,     0,     0,     0,     0,     0,  2386,     0,     0,
       0,     0,     0,     0,  -873,     0,     0,     0,   966,  -873,
       0,     0, -1765,     0,   981,     0,  -873,     0,  -873,     0,
       0,     0,  1230,     0,  -873,   967,     0,     0,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,  1379,     0,
       0,   978,     0,   761,     0,     0,     0,     0,  1231,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   982,   983,     0,  1228,     0,
       0,   755,     0,     0,     0,     0,  2387,     0,     0,     0,
       0,   979,     0,     0,  2388,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2389,   764,
     980,     0,     0,     0,     0,     0,     0,     0,     0,   987,
       0,     0,     0,     0,     0,     0,     0,   968,   969,   970,
       0,     0,     0,     0,     0,   762,   971,     0,     0,   988,
    2390,     0,     0,     0,   989,     0,     0,     0,   757,     0,
       0,   990,     0,   137,     0,   966,     0,     0,     0,   765,
    2391,     0,  2392,     0,     0,     0,   981,  1384,     0,     0,
       0,     0,   967,     0,     0,     0,     0,     0,     0,     0,
       0,  1230,     0,     0,  2393,  2394,     0,   973,     0,   974,
       0,     0,   760,     0,   975,   976,   977,     0,     0,     0,
     978,     0,   761,     0,     0,   763,     0,  1231,     0,     0,
       0,  1228,     0,     0,   755,     0,  2395,   982,   983,     0,
       0,     0,     0,     0,     0,     0,     0,  -929,     0,     0,
    -929,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     979,     0,     0,  2396,  2397,     0,     0,     0,     0,     0,
       0,   764,     0,     0,     0,     0,     0,     0,     0,   980,
       0,   987,     0,     0,   968,   969,   970,     0,     0,     0,
    2398,     0,     0,   971,     0,     0,     0,  2399,     0,     0,
       0,   988,     0,     0,   762,   757,   989,     0,   966,     0,
    2400,     0,     0,   990,  2401,   137,     0,     0,     0,     0,
       0,   765,     0,     0,  -929,   967,     0,     0,     0,  2402,
       0,     0,     0,     0,     0,   981,     0,     0,  1230,     0,
       0,  -929,     0,     0,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,     0,     0,  2403,   978,     0,   761,
       0,     0,     0,     0,  1231,  2404,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   982,   983,     0,     0,
       0,     0,     0,     0,  2405,     0,     0,   979,     0,     0,
       0,     0,     0,     0,  2406,     0,     0,  1510,     0,     0,
    2407,     0,     0,     0,     0,     0,   980,   968,   969,   970,
     764,     0,     0,     0,     0,     0,   971,     0,     0,     0,
     987,     0,     0,  -929,  -929,  -929,     0,     0,   757,     0,
       0,   762,  -929,  1228,     0,     0,   755,     0,     0,     0,
     988,     0,     0,     0,  -929,   989,     0,     0,     0,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,  1230,   981,     0,     0,     0,     0,   973,     0,   974,
       0,     0,   760,     0,   975,   976,   977,  -929,     0,     0,
     978,     0,   761,  -929,     0,  -929,     0,  1231,  -929,     0,
    -929,  -929,  -929,     0,     0,     0,  -929,     0,  -929,     0,
       0,   763,     0,  -929,     0,     0,     0,     0,     0,     0,
     966,     0,     0,   982,   983,     0,     0,     0,     0,     0,
     979,     0,     0,     0,     0,     0,     0,   967,     0,     0,
       0,     0,     0,     0,     0,     0,  -929,     0,     0,   980,
       0,     0,     0,     0,     0,     0,     0,   764,     0,     0,
       0,     0,     0,     0,     0,  -929,     0,   987,     0,     0,
       0,     0,     0,     0,   762,     0,  1228,     0,     0,   755,
       0,     0,     0,     0,     0,     0,     0,   988,     0,     0,
    -929,     0,   989,     0,     0,     0,     0,     0,     0,   990,
       0,   137,     0,     0,     0,   981,     0,   765,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -929,     0,     0,     0,     0,     0,     0,     0,   968,
     969,   970,     0,     0,     0,     0,     0,     0,   971,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
     757,     0,     0,   966,     0,     0,   982,   983,     0,     0,
    -929,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     967,     0,  -929,  -929,     0,     0,  1472,     0,     0,     0,
       0,     0,     0,  1230,     0,     0,     0,     0,     0,   973,
     764,   974,     0,     0,   760,     0,   975,   976,   977,     0,
     987,     0,   978,     0,   761,     0,  -929,     0,     0,  1231,
       0,     0,     0,     0,     0,     0,  -929,     0,  1228,     0,
     988,   755,     0,     0,     0,   989,     0,     0,     0,     0,
       0,     0,   990,     0,   137,     0,  -929,     0,     0,     0,
     765,  -929,   979,     0,     0,     0,     0,     0,  -929,     0,
    -929,     0,     0,     0,     0,     0,  -929,     0,     0,     0,
       0,   980,   968,   969,   970,     0,  1656,     0,     0,     0,
       0,   971,     0,  1228,     0,     0,   755,     0,     0,     0,
       0,     0,     0,   757,     0,     0,   762,     0,     0,     0,
       0,     0,     0,     0,     0,   966,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   967,     0,     0,     0,  1230,   981,     0,     0,
       0,     0,   973,     0,   974,     0,     0,   760,     0,   975,
     976,   977,     0,     0,     0,   978,     0,   761,     0,     0,
       0,     0,  1231,     0,     0,     0,     0,     0,     0,     0,
     966,     0,     0,     0,     0,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   967,   982,   983,
       0,     0,     0,     0,     0,   979,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   980,     0,     0,     0,     0,     0,
       0,     0,   764,     0,   968,   969,   970,     0,     0,     0,
       0,     0,   987,   971,     0,  1228,     0,     0,   755,   762,
       0,     0,     0,     0,     0,   757,  1514,     0,     0,     0,
       0,     0,   988,     0,     0,     0,     0,   989,     0,     0,
       0,     0,     0,     0,   990,     0,   137,     0,     0,     0,
     981,     0,   765,     0,     0,     0,     0,     0,  1230,   968,
     969,   970,     0,     0,   973,     0,   974,     0,   971,   760,
       0,   975,   976,   977,     0,     0,     0,   978,     0,   761,
     757,     0,     0,     0,  1231,     0,     0,     0,     0,   763,
       0,     0,   966,     0,     0,     0,     0,     0,     0,     0,
       0,   982,   983,     0,     0,     0,     0,     0,     0,   967,
       0,     0,     0,  1230,     0,     0,     0,   979,     0,   973,
       0,   974,     0,     0,  1272,     0,   975,   976,   977,     0,
       0,     0,   978,     0,   761,   764,   980,     0,     0,  1231,
       0,     0,     0,     0,     0,   987,     0,     0,     0,     0,
       0,     0,  1791,     0,     0,   755,     0,     0,     0,     0,
       0,   762,     0,     0,     0,   988,     0,     0,     0,     0,
     989,     0,   979,     0,     0,     0,     0,   990,     0,   137,
       0,     0,     0,     0,     0,   765,     0,     0,     0,     0,
       0,   980,   981,     0,     0,     0,     0,     0,     0,     0,
       0,   968,   969,   970,     0,     0,     0,     0,     0,     0,
     971,     0,     0,     0,     0,     0,   762,     0,     0,     0,
       0,     0,   757,     0,     0,  1957,     0,     0,     0,   966,
       0,   763,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   982,   983,     0,   967,   981,     0,     0,
       0,     0,     0,     0,     0,  1230,     0,     0,     0,     0,
       0,   973,     0,   974,     0,     0,   760,     0,   975,   976,
     977,     0,     0,     0,   978,     0,   761,   764,     0,     0,
       0,  1231,     0,     0,     0,     0,   763,   987,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   982,   983,
       0,     0,     0,     0,     0,     0,     0,   988,     0,     0,
       0,     0,   989,     0,   979,     0,     0,     0,     0,   990,
       0,   137,     0,     0,     0,     0,     0,   765,     0,     0,
       0,     0,   764,   980,     0,     0,     0,     0,   968,   969,
     970,     0,   987,     0,     0,     0,     0,   971,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   762,   757,
       0,     0,   988,     0,     0,     0,     0,   989,     0,     0,
       0,     0,     0,     0,   990,     0,   137,     0,     0,     0,
       0,     0,   765,     0,     0,     0,     0,     0,     0,   981,
       0,     0,  1230,     0,     0,     0,     0,     0,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,     0,     0,
       0,   978,     0,   761,     0,     0,     0,     0,  1231,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   763,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     982,   983,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   979,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     980,     0,     0,     0,   764,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   987,     0,     0,     0,     0,     0,
       0,  1030,     0,     0,     0,   762,     0,     0,     0,     0,
       0,     0,     0,     0,   988,     0,     0,     0,     0,   989,
       0,     0,     0,     0,     0,     0,   990,     0,   137,     0,
       0,     0,  -357,     0,   765,  -357,   981,     0,  -357,  -357,
    -357,  -357,  -357,  -357,  -357,  -357,  -357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,  -357,     0,     0,
       0,     0,     0,     0,  -357,   763,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,     0,     0,     0,     0,   982,   983,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,   764,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   987,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   988,     0,     0,     0,     0,   989,     0,     0,     0,
       0,  -357,     0,   990,     0,   137,     0,     0,     0,     0,
       0,   765,     0,     0,     0,     0,   529,     0,     0,  -357,
    -357,  -357,  -357,  -357,     0,     0,  -357,  -357,     0,     0,
    -357,     0,     0,     0,     0,     0,  -357,     0,  -357,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,  -357,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -357,     0,     0,  -357,     0,     0,     0,
       0,     0,  -357,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,  -357,     0,     0,     0,     0,     0,     0,
     528,     0,     0,     0,     0,     0,  -357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,  -357,  -357,
    -357,  -357,  -357,  -357,  -357,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,  -357,     0,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,  -357,  -357,     0,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,     0,     0,     0,  -357,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,  -357,
       0,  -357,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,     0,
    -357,  -357,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -357,     0,     0,     0,   529,     0,     0,  -357,  -357,
    -357,  -357,  -357,     0,     0,  -357,  -357,     0,     0,     0,
       0,  -357,     0,     0,     0,     0,  -357,     0,     0,     0,
       0,  -357,     0,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -357,     0,     0,     0,     0,  -357,  -357,
       0,     0,  -357,  -357,  -357,     0,     0,     0,     0,     0,
       0,     0,  -357,   619,     0,  -357,  -357,     0,     0,     0,
       0,  -357,  -357,  -357,     0,     0,     0,     0,   620,   530,
       0,   621,   622,   623,   624,   625,   626,   627,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,   628,     0,   629,   630,
     631,   632,   633,   634,   635,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,  -357,     0,
       0,  -357,   636,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   637,   638,   639,   640,   641,     0,     0,   642,   643,
       0,     0,     0,     0,     0,     0,     0,  -357,     0,  -357,
    -357,  -357,     0,     0,     0,     0,     0,  1712,     0,     0,
    1713,     0,     0,  1714,   621,   622,   623,   624,   625,   626,
    1715,  1716,   644,     0,     0,     0,  -357,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,   645,     0,
    1717,     0,  1718,     0, -1841,  -357,     0,     0,     0,   628,
       0,   629,   630,   631,   632,   633,   634,   635,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,  -357,  -357,  -357,     0,     0,     0,     0,     0,     0,
     646,     0,     0,     0,     0,  -357,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,   636,     0,     0,   530,     0,
       0,     0,   621,   622,   623,   624,   625,   626,     0,   647,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   648,     0,     0,     0,     0,     0,     0,
       0,   649,     0,     0,   650,     0,  1719,   628,     0,   629,
     630,   631,   632,   633,   634,   635,     0,   651,     0,     0,
     966,     0,     0,     0,   637,   638,   639,   640,   641,     0,
     652,   642,   643,     0,     0,  1720,     0,   967,   653,     0,
       0,  1721,     0,  1722,     0,     0,     0,     0,     0, -1794,
       0,     0,     0,   636,  1723,     0,     0,  1724,     0,     0,
       0,     0,     0,     0,     0,   644,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
     654,   645,   655,   656,   657,     0,     0,     0,     0,  1725,
       0,     0,     0,     0,     0,     0,     0,     0,  1726,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   658,
       0,  1727,   637,   638,   639,   640,   641,     0,     0,   642,
     643,     0,     0,   646,     0,     0,     0,     0,  -354,   968,
     969,   970,     0,     0,     0,     0,     0,     0,   971,     0,
       0,     0,     0,     0,     0, -1841,     0,     0,     0,     0,
     757,     0,  1728,   644,   659,   660,   661,     0,     0,     0,
       0,     0,     0,     0,     0,  1729,   648,     0,   662,     0,
       0,     0,     0,     0,   649,   663,     0,   650,     0,     0,
       0,     0,     0,   972,     0,     0,     0,     0,     0,   973,
     651,   974,  1730,     0,   760,     0,   975,   976,   977,     0,
       0,   966,   978,     0,   761,     0,     0,     0,     0,     0,
       0,   646,     0,     0,     0,     0,     0,     0,   967,  1731,
       0,     0,     0,     0,     0,     0,  1732,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   979,  1733,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   654,   648,   655,   656,   657,     0,     0,
       0,   980,     0,     0,     0,   650,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   651,     0,
       0,     0,     0,     0,     0,     0,   762,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1734,     0,     0,     0,
       0,  -609,     0,     0,     0,     0,  1735,     0,     0,     0,
     968,   969,   970,     0,     0,     0,     0,   981,   966,   971,
       0,     0,     0,  1736,     0,     0,     0,   659,   660,   661,
       0,   757,     0,     0,     0,   967,     0,     0,     0,     0,
       0,   662,     0,   655,   656,   657,     0,  1737,   663,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,     0,
       0,     0,     0,     0,   972,     0,     0,     0,   982,   983,
     973,     0,   974,     0,     0,   760,     0,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,     0,     0,     0,
    1415,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     984,     0,   764,     0,   985,   986,     0,     0,     0,     0,
       0,     0,   987,     0,     0,   659,   660,   661,     0,     0,
       0,     0,     0,   979,     0,     0,     0,   968,   969,   970,
       0,     0,   988,     0,     0,     0,   971,   989,     0,     0,
       0,     0,   980,     0,   990,     0,   137,     0,   757,     0,
       0,     0,   765,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   972,     0,     0,     0,     0,   966,   973,     0,   974,
       0,     0,   760,     0,   975,   976,   977,     0,   981,     0,
     978,     0,   761,   967,     0,     0,     0,     0,     0,     0,
     966,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   967,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,     0,
     979,     0,     0,     0,     0,     0,     0,     0,     0,   982,
     983,     0,     0,     0,     0,     0,     0,     0,     0,   980,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1433,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   984,     0,   764,   762,   985,   986,     0,     0,     0,
       0,     0,     0,   987,     0,   968,   969,   970,     0,     0,
       0,     0,     0,     0,   971,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,   981,   757,     0,   989,   968,
     969,   970,     0,     0,     0,   990,     0,   137,   971,     0,
       0,     0,     0,   765,     0,     0,     0,     0,     0,     0,
     757,     0,     0,     0,     0,     0,     0,     0,     0,   972,
       0,     0,     0,     0,   763,   973,     0,   974,     0,     0,
     760,     0,   975,   976,   977,     0,   982,   983,   978,     0,
     761,     0,     0,   972,  1974,     0,     0,     0,   966,   973,
       0,   974,     0,     0,   760,     0,   975,   976,   977,     0,
       0,     0,   978,     0,   761,   967,     0,     0,   984,     0,
     764,     0,   985,   986,     0,     0,     0,     0,   979,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   980,     0,     0,
     988,     0,   979,     0,     0,   989,     0,     0,     0,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,   980,   762,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   762,     0,   966,     0,
       0,     0,     0,   981,     0,     0,     0,   968,   969,   970,
       0,     0,     0,     0,     0,   967,   971,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   981,   757,     0,
       0,     0,     0,     0,     0,   966,     0,     0,     0,     0,
       0,     0,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   967,     0,   982,   983,     0,     0,     0,     0,
       0,   972,  1976,     0,     0,     0,   763,   973,     0,   974,
       0,     0,   760,     0,   975,   976,   977,     0,   982,   983,
     978,     0,   761,     0,     0,     0,   984,     0,   764,     0,
     985,   986,     0,     0,     0,     0,     0,     0,   987,     0,
    1986,     0,     0,     0,     0,     0,     0,   968,   969,   970,
     984,     0,   764,     0,   985,   986,   971,     0,   988,     0,
     979,     0,   987,   989,     0,     0,     0,     0,   757,     0,
     990,     0,   137,     0,     0,     0,     0,     0,   765,   980,
       0,     0,   988,   966,   968,   969,   970,   989,     0,     0,
       0,     0,     0,   971,   990,     0,   137,     0,     0,     0,
     967,   972,   765,     0,   762,   757,     0,   973,     0,   974,
       0,     0,   760,     0,   975,   976,   977,     0,     0,     0,
     978,     0,   761,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   981,     0,     0,   972,     0,
       0,     0,     0,     0,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,     0,     0,     0,   978,     0,   761,
     979,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,   980,
       0,     0,     0,     0,     0,     0,   982,   983,     0,     0,
       0,  1333,   968,   969,   970,     0,     0,   979,     0,     0,
       0,   971,     0,     0,   762,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   980,     0,   984,     0,
     764,     0,   985,   986,     0,     0,   966,     0,     0,     0,
     987,     0,     0,     0,     0,   981,     0,     0,     0,     0,
       0,   762,     0,   967,     0,     0,     0,     0,     0,     0,
     988,     0,     0,     0,     0,   989,     0,  1483,     0,   975,
     976,   977,   990,     0,   137,   978,     0,     0,  2711,     0,
     765,     0,   981,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   982,   983,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   979,     0,     0,     0,     0,
       0,   763,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,   985,   982,   983,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,   968,   969,   970,     0,     0,
       0,     0,     0,     0,   971,     0,     0,     0,     0,     0,
     988,     0,     0,     0,     0,   989,   757,   764,     0,     0,
       0,     0,   990,     0,   137,     0,     0,   987,     0,     0,
     765,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     981,     0,     0,     0,     0,     0,     0,   988,     0,   972,
       0,     0,   989,     0,     0,   973,     0,   974,     0,   990,
     760,   137,   975,   976,   977,     0,     0,   765,   978,     0,
     761,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   982,   983,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1865,     0,     0,     0,   979,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   980,     0,     0,
       0,     0,     0,     0,     0,   987,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1139,     0,     0,     0,
       0,     0,   762,     0,     0,   988,     0,     0,     0,     0,
     989,     0,     0,     0, -1139,     0,     0,   990,   243,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   981,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   982,   983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   764,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   987,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   988,     0,
       0,     0,     0,   989,     0,     0,     0,     0,     0,     0,
     990,     0,   137,     0,     0,     0,     0,     0,   765
};

static const yytype_int16 yycheck[] =
{
     103,   393,   105,   395,   663,   116,   597,   790,   111,   181,
     962,   540,   794,   366,   687,   103,  1118,   105,   849,  1145,
     721,   652,   158,   111,  1209,   358,  1228,   795,   785,  1586,
    1450,  1116,   135,   425,  1450,  1596,  1450,   209,  1450,  1450,
    1491,  1450,  1602,   435,  1369,   600,  1121,   135,    56,    57,
      58,   404,  1267,  1123,  1540,  1131,    64,  1112,  1260,  2012,
    2048,  1131,  1810,  1844,  1358,  1379,  1472,  1531,  1997,  1145,
     700,    53,     9,     1,     1,  1145,   749,     9,    60,    17,
       9,   184,  1186,    22,    27,    56,    30,  1927,     0,     0,
      21,    99,   100,     9,   102,   852,  1200,     6,  2081,   107,
     108,    97,    48,    58,     1,  1853,  1321,   364,   116,  1378,
      17,     9,  1952,    49,     1,   125,   115,   130,    58,  1525,
      71,    65,   177,    67,   160,   133,   799,   758,   759,   124,
    2003,    64,   108,    93,   257,  2008,     0,    71,   175,  1464,
     251,   277,  1699,     9,   111,   142,    49,    71,   166,   124,
     233,   226,   160,  1255,  2027,  2028,  1904,   242,  2031,  1374,
      58,   203,   171,   177,  2482,   257,   233,    21,  1951,    31,
    1775,   238,    31,   116,  2121,    58,   130,   214,   809,   161,
     253,   310,   125,   191,   295,    88,    87,  1593,  1243,  1514,
      32,   421,   176,  2181,   257,   203,   330,   369,   272,    49,
     203,  2074,   203,   985,    49,   203,  2079,   199,    22,  2082,
     840,   310,    49,  1961,    26,     1,   126,   226,   243,    88,
     213,   275,    73,     6,  1006,   234,   349,   139,   139,  1299,
      58,   143,   143,   397,   275,   357,   218,   219,   413,   219,
    1310,   249,   188,    62,   409,    97,   160,   196,  2449,   257,
    1656,   257,    39,   459,    57,   291,   367,    60,   257,   295,
     450,    64,  1143,  2565,   257,   463,     8,   390,     0,   153,
     468,    90,    91,   458,   267,   139,    62,   467,   257,   143,
     178,   785,  1163,   233,   469,  1579,    71,    71,   200,   200,
     272,  1367,   456,    71,   233,    37,   419,  1367,   111,    58,
     282,  1371,     6,   509,    90,    91,   481,  2055,   257,   253,
     319,    71,   199,   354,  1871,   356,   481,    71,   319,   392,
     229,   172,   421,  2196,  2525,   257,  2628,   114,   308,  1111,
    2648,   561,   233,   325,   326,   173,   200,   391,  1011,   461,
     443,   972,   445,   446,   242,  1906,   457,   257,   852,   452,
     342,  2298,  2299,  1667,  2194,   363,   349,   445,   446,    65,
    1674,    67,   387,   291,   452,   344,   469,  1661,   311,   472,
     473,   154,   475,   456,   508,   478,   479,   451,   275,   229,
     509,   469,  2165,   391,   196,   456,   314,  1472,   473,   333,
    1796,  1877,   515,   242,   402,   794,  1178,  1179,  1180,  1863,
    1886,   310,  1866,   411,   412,   397,   414,   415,   368,  1191,
    1192,   170,   420,   516,   233,   257,  1198,   509,   204,   233,
     272,   457,   288,   515,   360,   467,   419,   502,   516,   437,
     213,   343,   343,   506,  2039,  2364,   257,   540,   541,   794,
    1525,   126,   509,   456,   373,   453,   509,   233,   466,   452,
     401,   238,   540,   541,   509,  1530,   160,   360,   342,   456,
    1133,    57,  1017,  1018,   318,   224,   269,   401,    64,   467,
     424,   404,   509,   356,   257,   339,   426,   401,   581,   343,
    1774,   441,   419,   594,   267,   337,   352,  2235,  2435,   272,
     601,   360,   487,   581,   391,   509,   509,   600,   508,  1267,
     509,  2374,   453,   509,   323,  2378,   357,   515,  1593,   213,
     509,   451,   487,   509,  1590,   360,  2499,  2500,  1573,   453,
    1590,   488,   515,   360,   470,   509,   534,   458,  2276,   453,
    2278,   502,   508,   509,   379,  1804,   647,   323,   469,   342,
     447,  1855,   379,   457,   456,   456,   554,   804,   556,  1604,
     653,   559,   560,   257,   562,   510,   465,   395,     6,   456,
    1630,  2309,   508,   267,   508,   508,   349,   503,   506,   456,
     509,  1656,   501,   972,  2503,   473,   257,   509,   515,  1794,
    1210,   509,   509,   591,  1688,   984,   985,   986,   596,  1791,
    2150,  2339,  2340,   509,   576,   603,   399,   509,   509,  1230,
     503,   404,  1896,   504,   458,   467,  1374,  1006,   467,  2449,
     461,   456,  2541,  2542,     6,   469,   401,   401,   405,   456,
    2225,  2494,  2495,   401,   473,   509,   608,   333,  2501,   984,
     985,   986,  2096,   446,   503,   463,   419,   456,   451,  1933,
     468,   401,  2423,   973,   974,   349,   203,   401,   143,     6,
     980,  1006,   253,   257,   662,   257,  2585,   509,   503,   770,
    2589,  2590,     6,    32,   775,   350,   503,   839,   453,   453,
     456,     6,   257,   269,   257,   453,   124,   780,   781,   463,
    2553,   792,   465,  2089,   468,  2091,  2674,   272,   509,  2618,
      57,   332,  1110,   453,   797,   703,   455,    64,   706,   453,
    1118,  1119,   200,   310,   463,   464,   509,   219,    30,   468,
    1128,  1796,  1111,    38,   409,   419,  1498,  1135,  1136,  2672,
     405,    46,    30,  1115,  2130,  1117,   509,    33,  2657,  1799,
     245,     9,   515,  1501,  1133,   456,  1154,  1155,   323,     9,
    1139,  1132,   111,    65,   162,    67,   342,  1802,  1140,   189,
    1142,   332,  2024,   457,  2489,  1147,  1111,   162,   409,  2507,
    2508,   465,    65,   257,    67,   213,   245,  1158,   235,  1161,
    1169,  1170,  1171,    47,   354,   230,   356,  2183,  2092,  1178,
    1179,  1180,  1181,  2110,   176,   203,   481,  1186,    58,    63,
      31,   392,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
     108,  1200,  1201,   399,   316,   509,   413,   257,   404,   257,
    2296,   515,   257,  2548,  1169,  1170,  1171,  2111,   158,   267,
     128,   213,   379,  1178,  1179,  1180,  1902,   258,   509,   103,
     481,  1230,  1902,  1903,  1465,   272,  1191,  1192,  1193,  1194,
    1195,  1196,  1197,  1198,   286,   343,  1201,    27,   343,   213,
     961,    92,   271,   263,  1253,   230,   213,   263,  2185,   167,
     456,  1492,   168,   130,   263,   257,  1258,   508,   509,   213,
    1638,  2196,   290,  1291,   481,   267,    57,  1269,   213,  2440,
     360,   189,   288,    64,   263,   290,   331,   212,   257,   288,
    1992,  1446,   232,   257,   336,  2189,   204,  1679,   413,  1681,
     257,   349,   269,   267,  1322,   509,   195,   509,   178,   288,
     267,  1693,   331,   257,  1017,  1018,  1027,  1247,   373,   244,
    1311,   171,   257,   267,   509,   365,   509,   508,    54,    55,
     515,   253,   267,   400,   413,   213,   116,  1336,  1271,  1612,
     409,   266,   417,   213,  1518,  1519,  1520,  1521,   217,  2221,
     253,   486,     9,   293,  2080,  2081,  2517,   349,   245,   233,
     546,   379,   268,  1381,    90,   232,   240,   256,   237,   504,
    1535,   419,   242,  2300,   409,   342,   226,   251,   388,   257,
     359,   107,   457,   382,   234,   349,   708,   257,   425,   267,
     427,   117,   349,   508,   263,   320,  1387,   267,   373,   456,
     586,    58,   354,   451,  2089,   349,  2091,   438,  2568,  1112,
    1575,   333,   481,  1116,   349,   509,   303,   465,  1351,   288,
    1123,  1124,  2097,   503,  1697,   292,  1794,   419,  1131,   615,
     333,  1134,   399,   755,   342,  1600,  1139,   404,  1141,   487,
    1143,  1144,  1145,  1146,   463,  2130,   481,  2249,  1721,   468,
       9,    34,   509,   257,  1472,   419,   381,   204,  2128,   509,
    1163,   509,   419,   415,   416,  1134,   263,   515,   499,   319,
     414,   349,   154,   465,  2149,   419,  2633,  1146,   509,   349,
     354,   355,  2533,   287,   419,  2645,   233,  1259,   269,   456,
     508,   288,   172,  1511,   451,   369,   451,   371,  2183,  1498,
     479,   465,   508,     9,   758,   759,  1524,  1525,   465,   508,
     509,  1503,   834,  1704,   292,  2217,   508,   509,   414,     9,
     759,   465,    12,   515,   204,    15,    16,   331,  2548,   508,
     465,  1353,  2548,  2669,  2548,   123,  2548,  2548,  1310,  2548,
    1243,   419,   509,  1498,  1562,   509,   324,   502,    85,   419,
       1,   515,   509,   478,  2711,   809,   213,  1788,   515,  1262,
     213,   342,   118,   119,   120,   509,   126,   463,  2725,  2705,
     809,   515,   468,     1,   509,  1593,  2737,    83,   356,   221,
     515,  1403,   456,    11,   178,   242,     8,   465,  1587,    40,
      41,    42,    43,    44,   100,   465,  1299,   323,   233,     8,
     257,   327,   328,   473,   257,  1118,  1378,  1310,   343,   213,
     267,   253,   172,  1612,   267,    37,  1634,   172,   399,   458,
       9,   257,   257,   404,    28,    76,    77,  1645,    37,   503,
    1648,    59,  1587,   758,   759,   188,   505,   515,  1656,   509,
     308,  1998,  1155,   369,   238,   515,   309,   241,   311,   204,
    1815,  1354,   288,   257,   213,  1829,   188,  1822,   211,   385,
     386,    50,   139,   267,  1367,   263,   263,   506,  1371,    97,
    1844,    99,   340,   101,   309,   456,   311,    26,  1611,   211,
    1679,   109,  1681,   239,   809,  2053,   192,   193,   194,  1688,
     288,   288,   349,   361,  1693,   201,   349,   253,   257,   282,
     283,   284,    13,    14,  1407,  1936,   455,   213,   267,  1874,
    2646,  2647,   354,    12,  1486,   464,    15,    16,   188,  1407,
     362,    32,  1721,   127,  1679,  1678,  1681,   456,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   165,  1693,  2675,
    2425,   211,  2427,  1446,   354,   349,   356,     2,  2533,    55,
    2653,   257,     7,   259,   260,   261,   458,  1460,  2694,   265,
     397,   267,   419,   346,  1929,    16,   419,   469,  2671,  1472,
    2071,   454,   257,  2499,  2500,   217,   218,  2503,  2209,   456,
     463,   337,    33,  2056,    90,   468,   207,   208,   278,   279,
     349,    42,   178,  2175,   350,   237,  2598,   107,   555,   305,
    2736,   107,   188,   560,   456,  1996,   162,   117,   465,   213,
     166,   117,   465,   303,   304,   419,   473,   163,  2049,   509,
     166,   263,  1525,  1595,   213,   211,   247,   248,    97,    98,
     258,   454,  1169,  1170,  1171,   456,  1444,  2110,   408,   453,
     463,  1449,  1450,   349,  1452,   468,   288,  1619,   426,   463,
    2552,   233,   509,   257,   468,   241,   245,   246,   515,   397,
     419,   465,   515,   267,  1201,  1217,  1748,   408,   257,  1221,
    1573,  2036,  1644,    58,   380,   303,   456,   281,   267,  1761,
    1762,   332,   453,  1765,   456,  2050,   442,  1590,   471,   472,
    1593,   456,   463,   476,   345,  1631,   219,   468,   473,   453,
     475,  1604,   174,   478,  2069,   354,   465,   356,   157,   463,
     159,   515,  2185,   419,   468,  1410,  1908,   456,  1413,  1195,
    1196,  1197,  1940,   456,  1419,   431,   432,  1630,  1423,   157,
      35,   159,   456,    38,  2099,  1430,   509,  1680,  2103,  1682,
      45,    46,  1685,  1686,  1687,   349,    69,  1658,  1691,   456,
     509,  1694,  1695,  1656,   456,   294,   515,   296,   509,   465,
     349,   253,  2345,   255,  2347,   393,   253,   509,   255,   475,
     490,   491,   492,   493,   253,   456,   255,  2142,   342,   278,
     279,  1684,   490,   491,   492,   493,    66,    92,    68,   495,
     490,   491,   492,   493,   500,   257,  1684,   623,   624,   625,
     626,   507,   473,   509,   303,   304,   249,   250,   436,   515,
     984,   257,   986,   301,   302,   419,   199,  1728,   422,   423,
    1193,  1194,   509,  1179,  1180,   403,   413,  2300,   456,   447,
     419,   404,    64,    60,  1642,   257,   233,   456,  1749,   460,
     330,   462,   404,   257,   509,    26,   230,   108,   456,   456,
     456,   314,   257,   257,   273,    23,   161,   459,   509,   103,
     456,   166,   442,   505,   189,    11,   508,  2232,   123,   459,
      17,  2200,    87,  2238,   509,   456,   465,   397,   273,   354,
     404,   509,    57,  2248,   405,   190,  2469,   263,   508,  1792,
     426,    39,  2644,  1796,  1702,  1703,  1799,   456,   238,  1802,
     405,   333,   318,   422,   509,  1713,   312,   212,   511,   509,
     262,   515,  1720,    59,   397,   456,     7,   397,   456,   256,
     508,  2139,    35,   456,   509,    38,   515,   456,   369,   397,
     456,   456,    45,    46,    86,    86,  1908,   125,   435,  2131,
     456,   397,  1750,   794,   392,    22,   308,   311,   506,   456,
    1853,    97,   397,    99,  2319,   101,   204,  2322,  2323,  2177,
    2178,   266,   509,   109,   509,   456,   506,   504,   233,   387,
    2335,  2124,   255,   451,   509,   509,  2175,   219,   123,    92,
      53,    24,    25,   515,  2349,  2350,   451,  1959,   447,    26,
     467,   403,   308,   413,   452,   351,  1968,  1969,   196,  1902,
    1903,  1904,   456,  1811,   257,  1941,  1942,  1943,  1944,  1945,
    1946,  1947,  1948,   509,   450,   320,   447,   467,   456,   165,
    2175,   379,  1830,    66,   509,    68,   338,    70,  1836,   402,
     115,   170,   467,   509,  1842,   188,   509,   467,   467,   456,
     467,   467,   467,   467,   467,   456,   467,   456,   161,   257,
    2415,   451,   467,   224,   467,   311,   509,   509,  1961,   406,
     458,   104,   105,   106,  2282,   509,    30,   131,   196,   132,
     451,   133,   389,   134,   102,   135,   381,   190,   136,   138,
     137,   227,   451,   446,    49,   467,   141,   407,  1991,   394,
     450,   450,   502,   447,  2459,   444,   144,   196,   145,   212,
    2003,   146,   504,  1991,    31,  2008,   147,   272,   413,   148,
    2021,   154,   258,   156,    49,   149,   196,   150,   113,   151,
     163,   152,   453,   166,  2027,  2028,   221,   453,  2031,   453,
     115,     4,   453,   984,   985,   986,   413,   456,   453,   453,
     453,   451,   453,   110,   314,   197,    19,   451,   224,   203,
     379,   341,  2055,   266,   257,  1006,    29,   303,   273,  2131,
     306,   232,   296,   300,   166,  1973,   129,   489,  2140,  2080,
    2081,  2074,   506,   478,   506,   176,  2079,  2080,  2081,  2082,
     451,   368,  2641,   169,   130,   229,  2089,  1995,  2091,   451,
      49,    64,   196,   229,   204,   177,   301,    57,   204,   456,
     509,  2660,  2593,  2011,   273,  2013,   514,   320,   238,  2017,
     253,   253,   255,   513,   426,   301,   451,  2025,   451,   383,
      30,   277,   365,   297,   203,  2128,   372,  2130,  2446,   272,
     203,    17,  2623,   447,   129,   140,   368,    49,   451,   142,
       8,   203,   196,   130,   426,   203,   506,   393,   506,   456,
     451,     9,     7,   299,   257,   509,   508,   508,  1109,   203,
    1111,    49,   503,  1114,   503,   189,   316,  1118,   381,   292,
     263,   466,   418,   114,   420,   315,    47,   203,   441,   332,
    2183,   394,  1133,   414,   203,   296,   364,   103,  1139,   364,
     436,  2509,    49,  2196,   383,  2513,  2514,  2200,   238,   298,
     413,   497,   263,    96,   293,    57,   413,     8,    49,  1160,
     111,  1162,  2200,   339,   263,  2123,   263,   461,  1169,  1170,
    1171,   263,   339,   456,  2516,   110,   486,  1178,  1179,  1180,
    1181,   211,   456,   342,   108,  1186,   222,   506,   210,   421,
    1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,   221,  1200,
    1201,   370,   196,   120,    49,   339,   315,   308,   428,     7,
      46,    92,    26,   509,   127,   478,   323,   201,   148,   206,
      75,   221,   238,  2276,  2566,  2278,   469,   150,  1229,   177,
     253,   519,  1907,   410,   286,  1026,   497,   425,   781,  1450,
     263,   748,  2709,  1405,  1672,  1900,  2198,  2688,   799,  2721,
    2657,  2218,  1253,  2306,  1255,   448,  2309,  2218,  1035,  2094,
     852,   788,  1764,  1226,  1763,  1847,  2408,  2393,  2306,  1798,
    1484,  1243,  2092,  1486,  2274,  1511,  1530,  2292,  1533,  1866,
    1295,  2096,  1583,  1576,  1894,  1331,  1594,  2340,  2119,  2131,
    1920,  1336,  2138,  1969,   317,  1365,  1624,  2646,  2647,   322,
    2152,     6,  1949,  1367,     9,   498,  2178,  2360,  1146,  1381,
    1968,  2343,  2705,  1671,  2348,  1968,   509,  2449,  1562,  1354,
    1480,  2374,  2360,  2353,   299,  2378,  2675,  2171,  2171,   152,
    2171,   354,  2171,   694,  1936,  1336,  1253,  1721,   270,   362,
     753,  2646,  2647,   242,   989,  2694,  2576,   417,  2437,  2622,
     215,    83,   375,  1956,   509,  1899,   449,  1358,  2108,   712,
    1586,  2648,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
    2675,    -1,  2425,   558,  2427,    -1,    -1,    -1,    83,    -1,
    2338,   404,    -1,  1384,   407,    -1,    -1,  2736,    -1,  2694,
    2443,    -1,   415,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   426,    -1,    -1,    -1,    -1,   113,    -1,
    2752,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2382,    -1,    -1,    -1,    -1,  2387,
      -1,  2736,    -1,   456,    -1,    -1,   459,    -1,  2499,  2500,
      -1,  2494,  2495,    -1,  2402,   794,  2499,  2500,  2501,    -1,
    2503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
    2448,    -1,    -1,    -1,    -1,    -1,   201,  1498,    -1,    -1,
    2553,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,
      -1,    -1,  2565,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2480,  2481,   229,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,  2595,    -1,    -1,    -1,    -1,  2497,
    2498,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,  2515,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,   305,    -1,  2628,    -1,    -1,  1579,    -1,
      -1,    -1,  2540,    -1,    -1,    -1,  1587,  2545,  2546,    -1,
      -1,  2652,    -1,    -1,    -1,  2656,    -1,    -1,    -1,    -1,
     305,    -1,  1603,    -1,    -1,    -1,    -1,    -1,    -1,  2567,
      -1,  1612,    -1,    -1,    -1,    -1,  2669,    -1,    -1,   324,
      -1,    -1,  1623,   972,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   984,   985,   986,    -1,  2597,
      -1,    -1,  2600,  2601,   349,    -1,    -1,    -1,   380,    -1,
    1651,    -1,  2705,    -1,    -1,    -1,    -1,  1006,    -1,    -1,
    1661,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   380,  2729,    -1,  1679,  2740,
    1681,    -1,    -1,    -1,    -1,  2643,    -1,  1688,    -1,    -1,
      -1,    -1,  1693,    -1,    -1,    -1,    83,    -1,    -1,   431,
     432,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    12,
      13,    14,   444,   100,   419,    -1,    -1,    20,    -1,    -1,
    1721,    -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,
      -1,    -1,    -1,  1734,    -1,    -1,  1737,    -1,    -1,    -1,
      -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,    -1,    -1,
     465,    -1,  1111,   495,    -1,    -1,    -1,  1116,   500,    -1,
     475,    -1,   504,  1774,  1123,   507,   508,   509,    -1,    -1,
      83,    -1,  1131,    -1,    -1,    -1,    -1,    -1,    -1,  1790,
     495,    -1,    -1,    -1,    -1,   500,  1145,   100,    -1,    -1,
      -1,    -1,   507,    -1,   509,   192,   193,   194,     6,    -1,
     515,     9,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
    1169,  1170,  1171,    -1,    -1,    -1,    -1,    -1,    -1,  1178,
    1179,  1180,  1181,    -1,    -1,    -1,    -1,  1186,    -1,    -1,
      -1,    -1,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
      -1,  1200,  1201,    -1,    -1,    -1,    -1,   160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
      -1,  1230,    -1,    -1,    -1,    83,    -1,    -1,    -1,   192,
     193,   194,    -1,    -1,    -1,  1896,  1897,    -1,   201,    -1,
      -1,    -1,   100,    -1,   207,   208,    -1,    -1,    -1,    -1,
     213,    -1,    -1,  1262,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,  1925,    -1,    -1,    -1,    -1,    -1,
     233,    -1,  1933,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,   247,   248,    -1,    -1,    -1,   252,
    1299,   254,    -1,    -1,   257,   153,   259,   260,   261,  1960,
      -1,  1310,   265,    -1,   267,    -1,  1967,  1968,    -1,   272,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,   291,    -1,
      -1,  1992,   295,   380,   192,   193,   194,    -1,    -1,    -1,
     303,  2002,   305,   201,    -1,    -1,    -1,   310,    -1,  1358,
      -1,    -1,   315,    -1,    -1,   213,    -1,    -1,  1367,    -1,
      -1,   324,  1371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   431,   432,   349,    -1,   246,    -1,
      -1,    -1,    -1,    -1,   252,  2056,   254,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,
      -1,    -1,    -1,    -1,   272,    -1,    -1,   380,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2101,    -1,    -1,    -1,    -1,    -1,    -1,   305,   495,  2110,
    2111,    -1,    -1,   500,    -1,    -1,   419,    -1,  2119,    -1,
     507,    -1,   509,  1472,    -1,    -1,   324,    -1,   431,   432,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2138,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1498,
     453,   349,   455,    -1,   457,    -1,    -1,   460,    -1,   462,
     463,   464,   465,    -1,   467,   468,  2167,    -1,    -1,    -1,
      -1,    -1,   475,    -1,  2175,    -1,  1525,    -1,    -1,    -1,
      -1,    -1,   380,    -1,  2185,    -1,    -1,    -1,  2189,    -1,
      -1,    -1,   495,    -1,    -1,    -1,    -1,   500,    -1,    -1,
      -1,    -1,    -1,    -1,   507,    -1,   509,    -1,    -1,    -1,
    2211,    -1,   515,    -1,    -1,     1,  2217,     3,    -1,     5,
      -1,   419,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
    1579,    -1,    18,   431,   432,    -1,    -1,    -1,  1587,    -1,
      -1,  1590,    -1,    -1,  1593,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2254,    -1,    -1,    -1,    -1,    -1,    -1,
     458,    -1,    -1,    -1,    -1,    51,    52,   465,    -1,    -1,
      -1,   469,    -1,    -1,    -1,    61,    -1,   475,    -1,    -1,
      -1,  1630,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,  2300,
      -1,    -1,   500,    89,    -1,    -1,    -1,  1656,    -1,   507,
      -1,   509,  1661,    -1,    -1,    -1,    -1,   515,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
    1679,    -1,  1681,    -1,   120,    -1,   122,    -1,    -1,  1688,
      -1,    -1,    -1,   129,  1693,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,
      -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,    -1,    -1,   202,  2418,    -1,   205,
     206,    -1,    -1,    -1,    -1,  1774,    -1,    -1,    -1,    -1,
     216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,   225,
      -1,    -1,   228,  1792,    -1,    -1,    -1,  1796,    -1,    -1,
    1799,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2461,    -1,    -1,    -1,    -1,    -1,    -1,  2468,    -1,    -1,
    2471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,   274,    -1,
     276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     286,    -1,    -1,    -1,  1853,    -1,   292,   293,   294,    -1,
     296,   297,   298,   299,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2522,    -1,    -1,    -1,    -1,    -1,   313,    -1,     1,
      -1,     3,    -1,     5,    -1,  2536,    -1,    -1,    10,    -1,
     326,    -1,    -1,    -1,    -1,    -1,    18,  1896,  1897,    -1,
      -1,  2552,    -1,  1902,  1903,  1904,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,   353,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   363,    -1,    51,
      52,    -1,    -1,    -1,  1933,    -1,    -1,    -1,    -1,    61,
      -1,   377,   378,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      72,  2602,   388,    75,    -1,    -1,    -1,    -1,    -1,    -1,
     396,    -1,  1961,    -1,    -1,    -1,    -1,    89,    -1,    -1,
     406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,    -1,
     112,    -1,    -1,   429,   430,  2646,  2647,   433,   120,   435,
     122,    -1,    -1,    -1,    -1,    -1,    -1,   443,    -1,    -1,
      -1,    -1,  2663,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     456,    -1,    -1,    -1,  2675,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,  2687,  2688,   474,    -1,
      -1,    -1,   164,  2694,   480,    -1,    -1,   169,    -1,   485,
      -1,    -1,    -1,    -1,    -1,    -1,  2055,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     506,    -1,    -1,   195,    -1,    -1,   512,    -1,    -1,    -1,
     202,  2732,    -1,   205,   206,  2736,    -1,    -1,    -1,    -1,
    2089,    -1,  2091,    -1,   216,    -1,    -1,    -1,    -1,    -1,
       1,   223,     3,   225,     5,    -1,   228,    -1,    -1,    10,
      -1,    -1,  2111,    -1,    -1,    -1,    -1,    18,    -1,    -1,
    2119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2128,
      -1,  2130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   270,    -1,
      51,    52,   274,    -1,   276,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    75,    -1,  2175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2183,    -1,    -1,    -1,    89,    -1,
    2189,   313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
      -1,   122,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
     352,   353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   363,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,   153,    -1,    -1,   377,   378,    -1,    -1,    -1,
      -1,    -1,   384,   164,    -1,    -1,   388,    -1,   169,    -1,
      -1,    -1,    -1,    -1,   396,    -1,    -1,  2276,    -1,  2278,
      -1,    -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   415,   195,    -1,    -1,    -1,    -1,    -1,
      -1,   202,   424,    -1,   205,   206,    -1,   429,   430,    -1,
    2309,   433,    -1,   435,    -1,   216,    -1,    -1,    -1,    -1,
      -1,   443,   223,    -1,   225,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,
      -1,  2340,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
      -1,    -1,   474,    -1,    10,    -1,    -1,    -1,   480,    -1,
      -1,    -1,    18,   485,    -1,    -1,    -1,    -1,    -1,   270,
      -1,    -1,    -1,   274,    -1,   276,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
     512,   210,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,   313,    -1,    -1,    -1,    72,   236,    -1,    75,
      -1,    -1,    -1,    -1,    -1,   326,  2425,    -1,  2427,    -1,
      -1,    -1,    -1,    89,   253,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   352,   353,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,   363,    -1,   120,    -1,   122,   286,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   377,   378,    -1,    -1,
      -1,    -1,    -1,   384,    -1,    -1,    -1,   388,   307,    -1,
      -1,    -1,    -1,    -1,    -1,   396,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,   164,    -1,
     329,    -1,    -1,   169,   415,    -1,   335,    -1,    -1,    -1,
      -1,    -1,    -1,   424,    83,    -1,    -1,    -1,   429,   430,
      -1,    -1,   433,    -1,   435,    -1,    -1,    -1,    -1,   195,
      -1,   100,   443,    -1,    -1,    -1,   202,    -1,    -1,   205,
     206,    -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,
     216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,   225,
      -1,    -1,   228,   474,    -1,    -1,    -1,    -1,    -1,   480,
      -1,    -1,    -1,    -1,   485,    -1,    -1,    -1,    -1,   408,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   512,    -1,    -1,   270,   434,    -1,    -1,   274,    -1,
     276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     286,    -1,    -1,   192,   193,   194,    -1,   456,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,  2646,  2647,    -1,
      -1,    -1,    -1,    -1,   213,    -1,    -1,   313,   477,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
     326,    -1,    -1,    10,    -1,    -1,  2675,   496,    -1,    -1,
      -1,    18,    -1,    -1,   503,   504,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2694,   352,   353,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,   363,   267,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,   377,   378,    -1,    61,    -1,    -1,    -1,   384,    -1,
      -1,    -1,   388,    -1,    -1,    72,    -1,  2736,    75,    -1,
     396,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
     406,    -1,    89,    -1,    -1,    -1,    -1,     6,    -1,   415,
       9,    -1,    -1,    12,    13,    14,    -1,    -1,   424,    -1,
      -1,    20,    -1,   429,   430,   112,    -1,   433,    -1,   435,
      -1,    -1,    -1,   120,    -1,   122,    -1,   443,    -1,    -1,
     349,    -1,   129,    -1,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   474,    -1,
      -1,   380,    -1,    -1,   480,    -1,    -1,   164,    -1,   485,
      -1,    -1,   169,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,   512,    -1,   195,    -1,
     419,    -1,    -1,    -1,    -1,   202,    -1,    -1,   205,   206,
      -1,    -1,   431,   432,    -1,    -1,    -1,    -1,    -1,   216,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,   225,    -1,
      -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,   270,    -1,    -1,   495,   274,    -1,   276,
      -1,   500,    -1,   192,   193,   194,    -1,    -1,   507,   286,
     509,    -1,   201,    -1,    -1,    -1,   515,    -1,   207,   208,
      -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   326,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,   248,
      -1,    -1,    83,   252,    -1,   254,    -1,    88,   257,    -1,
     259,   260,   261,    -1,    -1,   352,   265,    -1,   267,   100,
      -1,    -1,    -1,   272,    -1,    -1,   363,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,    -1,
      -1,   378,   291,    -1,    -1,    -1,   295,   384,    -1,    -1,
       6,   388,    -1,     9,   303,    -1,   305,    -1,    -1,   396,
      -1,   310,    -1,    -1,    -1,    -1,   315,    -1,    -1,   406,
      -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,   415,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,   424,    -1,    -1,
      -1,    -1,   429,   430,    -1,    -1,   433,    -1,   435,    -1,
     349,    -1,    -1,    -1,    -1,    -1,   443,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,   456,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,   380,   213,    -1,    -1,    -1,    -1,   474,    -1,    95,
      -1,    -1,    -1,   480,   100,    -1,    -1,    -1,   485,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
     419,   252,    -1,   254,    -1,   512,   257,    -1,   259,   260,
     261,    -1,   431,   432,   265,    -1,   267,    -1,    -1,    -1,
      -1,   272,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   453,    -1,   455,    -1,   457,    -1,
      -1,   460,    -1,   462,   463,   464,   465,    -1,   467,   468,
      -1,    -1,    -1,    -1,   305,    -1,   475,    -1,    -1,   310,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,    -1,   324,    -1,   201,   495,    -1,    -1,    -1,
      -1,   500,    -1,    -1,    -1,    -1,    -1,   213,   507,    -1,
     509,    -1,    -1,    -1,    -1,    -1,   515,    -1,   349,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,
      -1,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
     246,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,   380,
      -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,
      -1,   267,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,   413,    -1,    38,    -1,    -1,    -1,   419,    -1,
      -1,     6,    46,    -1,     9,    -1,    -1,    -1,    -1,   305,
     431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
     194,    -1,    -1,    -1,   465,    -1,    -1,   201,    92,    -1,
      -1,    -1,    -1,   349,   475,    -1,    -1,    -1,    -1,   213,
     481,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,    83,   500,
      -1,    -1,   503,    -1,   380,    -1,   507,    -1,   509,    -1,
      -1,    -1,   246,    -1,   515,   100,    -1,    -1,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,   113,    -1,
      -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   431,   432,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,
      -1,   305,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,   465,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   475,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,   349,   201,    -1,    -1,   495,
     244,    -1,    -1,    -1,   500,    -1,    -1,    -1,   213,    -1,
      -1,   507,    -1,   509,    -1,    83,    -1,    -1,    -1,   515,
     264,    -1,   266,    -1,    -1,    -1,   380,    95,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,   288,   289,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,   419,    -1,   272,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,   320,   431,   432,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,   347,   348,    -1,    -1,    -1,    -1,    -1,
      -1,   465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      -1,   475,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
     374,    -1,    -1,   201,    -1,    -1,    -1,   381,    -1,    -1,
      -1,   495,    -1,    -1,   349,   213,   500,    -1,    83,    -1,
     394,    -1,    -1,   507,   398,   509,    -1,    -1,    -1,    -1,
      -1,   515,    -1,    -1,    83,   100,    -1,    -1,    -1,   413,
      -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,   246,    -1,
      -1,   100,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,   440,   265,    -1,   267,
      -1,    -1,    -1,    -1,   272,   449,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,
      -1,    -1,    -1,    -1,   478,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,   488,    -1,    -1,   166,    -1,    -1,
     494,    -1,    -1,    -1,    -1,    -1,   324,   192,   193,   194,
     465,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
     475,    -1,    -1,   192,   193,   194,    -1,    -1,   213,    -1,
      -1,   349,   201,     6,    -1,    -1,     9,    -1,    -1,    -1,
     495,    -1,    -1,    -1,   213,   500,    -1,    -1,    -1,    -1,
      -1,    -1,   507,    -1,   509,    -1,    -1,    -1,    -1,    -1,
     515,   246,   380,    -1,    -1,    -1,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,   246,    -1,    -1,
     265,    -1,   267,   252,    -1,   254,    -1,   272,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,
      -1,   419,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   324,    -1,   475,    -1,    -1,
      -1,    -1,    -1,    -1,   349,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,    -1,
     349,    -1,   500,    -1,    -1,    -1,    -1,    -1,    -1,   507,
      -1,   509,    -1,    -1,    -1,   380,    -1,   515,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,
      -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,
     213,    -1,    -1,    83,    -1,    -1,   431,   432,    -1,    -1,
     419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,   431,   432,    -1,    -1,   451,    -1,    -1,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,
     465,   254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
     475,    -1,   265,    -1,   267,    -1,   465,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,     6,    -1,
     495,     9,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,
      -1,    -1,   507,    -1,   509,    -1,   495,    -1,    -1,    -1,
     515,   500,   305,    -1,    -1,    -1,    -1,    -1,   507,    -1,
     509,    -1,    -1,    -1,    -1,    -1,   515,    -1,    -1,    -1,
      -1,   324,   192,   193,   194,    -1,   196,    -1,    -1,    -1,
      -1,   201,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,   213,    -1,    -1,   349,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,   246,   380,    -1,    -1,
      -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   431,   432,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   465,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,   475,   201,    -1,     6,    -1,    -1,     9,   349,
      -1,    -1,    -1,    -1,    -1,   213,   489,    -1,    -1,    -1,
      -1,    -1,   495,    -1,    -1,    -1,    -1,   500,    -1,    -1,
      -1,    -1,    -1,    -1,   507,    -1,   509,    -1,    -1,    -1,
     380,    -1,   515,    -1,    -1,    -1,    -1,    -1,   246,   192,
     193,   194,    -1,    -1,   252,    -1,   254,    -1,   201,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,
     213,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,   419,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   431,   432,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,   246,    -1,    -1,    -1,   305,    -1,   252,
      -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,    -1,   267,   465,   324,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,   349,    -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,
     500,    -1,   305,    -1,    -1,    -1,    -1,   507,    -1,   509,
      -1,    -1,    -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,
      -1,   324,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,
      -1,    -1,   213,    -1,    -1,   413,    -1,    -1,    -1,    83,
      -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   431,   432,    -1,   100,   380,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,    -1,    -1,    -1,   265,    -1,   267,   465,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,   419,   475,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   431,   432,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,    -1,
      -1,    -1,   500,    -1,   305,    -1,    -1,    -1,    -1,   507,
      -1,   509,    -1,    -1,    -1,    -1,    -1,   515,    -1,    -1,
      -1,    -1,   465,   324,    -1,    -1,    -1,    -1,   192,   193,
     194,    -1,   475,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,   213,
      -1,    -1,   495,    -1,    -1,    -1,    -1,   500,    -1,    -1,
      -1,    -1,    -1,    -1,   507,    -1,   509,    -1,    -1,    -1,
      -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,   380,
      -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     324,    -1,    -1,    -1,   465,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,   349,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,   500,
      -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,   509,    -1,
      -1,    -1,    32,    -1,   515,    35,   380,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    74,   419,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,   431,   432,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,   465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   495,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,
      -1,   161,    -1,   507,    -1,   509,    -1,    -1,    -1,    -1,
      -1,   515,    -1,    -1,    -1,    -1,   176,    -1,    -1,   179,
     180,   181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,
     190,    -1,    -1,    -1,    -1,    -1,   196,    -1,   198,    -1,
      -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,   209,
      -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,   236,    -1,    -1,    -1,
      -1,    -1,   242,    -1,   244,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,   307,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,
      -1,    -1,   332,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    -1,   345,    -1,   347,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   374,    -1,    -1,    -1,    -1,   120,
      -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   398,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,
     410,   411,   412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,    -1,   176,    -1,    -1,   179,   180,
     181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,
      -1,   451,    -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,
      -1,   461,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,   478,   220,
      -1,    -1,   482,   483,   484,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,    21,    -1,   236,   496,    -1,    -1,    -1,
      -1,   242,   502,   503,    -1,    -1,    -1,    -1,    36,   509,
      -1,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,
      -1,   332,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,   180,   181,   182,   183,    -1,    -1,   186,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,   410,
     411,   412,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,   220,    -1,    -1,    -1,   437,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,    -1,
      65,    -1,    67,    -1,   242,   456,    -1,    -1,    -1,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,   473,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   482,   483,   484,    -1,    -1,    -1,    -1,    -1,    -1,
     278,    -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,
      -1,    -1,   503,    -1,    -1,   120,    -1,    -1,   509,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    -1,   307,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   329,    -1,    -1,   332,    -1,   161,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    -1,   345,    -1,    -1,
      83,    -1,    -1,    -1,   179,   180,   181,   182,   183,    -1,
     358,   186,   187,    -1,    -1,   190,    -1,   100,   366,    -1,
      -1,   196,    -1,   198,    -1,    -1,    -1,    -1,    -1,   204,
      -1,    -1,    -1,   120,   209,    -1,    -1,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
     408,   236,   410,   411,   412,    -1,    -1,    -1,    -1,   244,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,
      -1,   266,   179,   180,   181,   182,   183,    -1,    -1,   186,
     187,    -1,    -1,   278,    -1,    -1,    -1,    -1,   456,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,
      -1,    -1,    -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,
     213,    -1,   307,   220,   482,   483,   484,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   320,   321,    -1,   496,    -1,
      -1,    -1,    -1,    -1,   329,   503,    -1,   332,    -1,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,
     345,   254,   347,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    83,   265,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,   100,   374,
      -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,   398,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   408,   321,   410,   411,   412,    -1,    -1,
      -1,   324,    -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   451,    -1,    -1,    -1,
      -1,   456,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,   380,    83,   201,
      -1,    -1,    -1,   478,    -1,    -1,    -1,   482,   483,   484,
      -1,   213,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,   496,    -1,   410,   411,   412,    -1,   502,   503,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,   431,   432,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     463,    -1,   465,    -1,   467,   468,    -1,    -1,    -1,    -1,
      -1,    -1,   475,    -1,    -1,   482,   483,   484,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,   495,    -1,    -1,    -1,   201,   500,    -1,    -1,
      -1,    -1,   324,    -1,   507,    -1,   509,    -1,   213,    -1,
      -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    -1,    83,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,   380,    -1,
     265,    -1,   267,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   431,
     432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   463,    -1,   465,   349,   467,   468,    -1,    -1,    -1,
      -1,    -1,    -1,   475,    -1,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   495,    -1,   380,   213,    -1,   500,   192,
     193,   194,    -1,    -1,    -1,   507,    -1,   509,   201,    -1,
      -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
      -1,    -1,    -1,    -1,   419,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,   431,   432,   265,    -1,
     267,    -1,    -1,   246,   439,    -1,    -1,    -1,    83,   252,
      -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,    -1,   267,   100,    -1,    -1,   463,    -1,
     465,    -1,   467,   468,    -1,    -1,    -1,    -1,   305,    -1,
     475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
     495,    -1,   305,    -1,    -1,   500,    -1,    -1,    -1,    -1,
      -1,    -1,   507,    -1,   509,    -1,    -1,    -1,    -1,    -1,
     515,   324,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,    83,    -1,
      -1,    -1,    -1,   380,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,   100,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   431,   432,    -1,    -1,    -1,    -1,
      -1,   246,   439,    -1,    -1,    -1,   419,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,   431,   432,
     265,    -1,   267,    -1,    -1,    -1,   463,    -1,   465,    -1,
     467,   468,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,
     453,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
     463,    -1,   465,    -1,   467,   468,   201,    -1,   495,    -1,
     305,    -1,   475,   500,    -1,    -1,    -1,    -1,   213,    -1,
     507,    -1,   509,    -1,    -1,    -1,    -1,    -1,   515,   324,
      -1,    -1,   495,    83,   192,   193,   194,   500,    -1,    -1,
      -1,    -1,    -1,   201,   507,    -1,   509,    -1,    -1,    -1,
     100,   246,   515,    -1,   349,   213,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,   246,    -1,
      -1,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,
      -1,   191,   192,   193,   194,    -1,    -1,   305,    -1,    -1,
      -1,   201,    -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,   463,    -1,
     465,    -1,   467,   468,    -1,    -1,    83,    -1,    -1,    -1,
     475,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,
      -1,   349,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     495,    -1,    -1,    -1,    -1,   500,    -1,   257,    -1,   259,
     260,   261,   507,    -1,   509,   265,    -1,    -1,   376,    -1,
     515,    -1,   380,    -1,   419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     465,    -1,   467,   431,   432,    -1,    -1,    -1,    -1,    -1,
     475,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
     495,    -1,    -1,    -1,    -1,   500,   213,   465,    -1,    -1,
      -1,    -1,   507,    -1,   509,    -1,    -1,   475,    -1,    -1,
     515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     380,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,   246,
      -1,    -1,   500,    -1,    -1,   252,    -1,   254,    -1,   507,
     257,   509,   259,   260,   261,    -1,    -1,   515,   265,    -1,
     267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   444,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,
      -1,    -1,   349,    -1,    -1,   495,    -1,    -1,    -1,    -1,
     500,    -1,    -1,    -1,   504,    -1,    -1,   507,   508,   509,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,
      -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,    -1,
     507,    -1,   509,    -1,    -1,    -1,    -1,    -1,   515
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
    1194,   257,   219,   308,  1319,   257,   473,    57,    64,   269,
     342,   399,   404,   509,   555,   556,   557,   558,   559,   560,
     561,   563,  1268,  1329,   199,   566,   567,   568,   551,   563,
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
     103,   655,   456,   587,   588,    58,   510,  1323,   615,   442,
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
     509,   694,   695,   509,   662,   125,   508,  1248,  1328,  1272,
    1281,  1193,  1194,   508,   633,   633,   687,   456,   397,   369,
     746,   456,   456,   692,    86,    47,    63,   103,   240,   251,
     354,   355,   369,   371,   456,   503,   663,   664,   666,   670,
     671,   674,   675,   681,   682,   683,   684,  1281,   125,   435,
     626,  1193,  1194,   263,   388,   688,   743,   456,   397,   392,
     791,   705,   696,  1281,  1270,  1281,   354,   356,  1324,  1324,
    1281,  1270,  1281,  1288,  1281,    22,  1262,   308,   685,  1199,
     172,   204,   506,   311,   688,   745,   456,   397,   536,    21,
      36,    39,    40,    41,    42,    43,    44,    45,    74,    76,
      77,    78,    79,    80,    81,    82,   120,   179,   180,   181,
     182,   183,   186,   187,   220,   236,   278,   307,   321,   329,
     332,   345,   358,   366,   408,   410,   411,   412,   437,   482,
     483,   484,   496,   503,   706,   707,   708,   710,   711,   712,
     713,   714,   715,   716,   719,   731,   732,   733,   734,   735,
     740,   741,  1281,  1301,    26,   196,   704,  1264,   204,  1228,
     509,  1281,  1262,   509,  1196,  1197,   310,   421,  1320,  1198,
    1228,   504,  1281,   175,   214,   509,   672,  1199,     9,   419,
     515,   589,   275,   354,   356,  1322,   688,   747,   456,   339,
     805,   808,   245,   303,   409,   481,  1300,   481,  1300,   481,
    1300,   481,  1300,   481,  1300,   506,  1310,   387,  1298,   126,
    1228,  1222,  1225,  1225,   233,   243,   387,  1284,  1281,  1282,
     172,   204,   242,   473,   509,     9,    50,   213,   245,   246,
     257,   267,   349,   419,   465,   515,   697,  1232,  1233,  1234,
     451,   669,  1197,   255,  1287,   451,  1269,   219,  1276,   509,
    1281,  1281,  1234,  1322,   748,   792,   123,   831,   832,   515,
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
     467,   467,  1240,  1222,  1233,  1235,  1319,  1319,   467,   467,
     467,   467,  1319,  1178,  1174,  1178,   467,  1240,    71,   401,
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
    1319,   133,   878,   257,  1213,  1212,  1185,   359,   479,   885,
    1312,  1325,  1291,   134,   889,   160,   457,  1181,  1316,   389,
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
    1281,  1337,    32,    35,    38,    45,    46,    65,    67,   161,
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
    1292,  1328,   451,  1201,  1180,  1204,   994,  1312,  1184,   828,
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
    1167,  1253,  1157,   245,   413,  1327,   426,  1304,  1304,  1083,
    1312,  1221,  1144,   203,   456,   451,     9,  1105,  1106,  1247,
    1108,  1221,  1083,  1108,  1028,     7,  1260,   509,   729,   730,
    1281,   453,  1194,  1212,  1281,  1262,   257,   757,  1230,   693,
     766,   755,  1221,  1214,  1214,  1281,  1307,  1281,  1281,    32,
    1228,   819,   820,  1281,   508,   845,  1214,  1214,  1214,   294,
     296,  1139,  1140,   828,  1136,  1255,  1222,   828,   299,  1146,
    1227,  1144,  1211,  1221,  1232,   166,   466,   876,  1318,     6,
     229,   310,   465,   875,  1280,    34,   282,   283,   284,   346,
     471,   472,   476,  1257,   828,   831,  1214,  1214,  1160,  1216,
    1218,  1228,  1160,  1214,   508,   906,  1180,  1181,  1180,  1181,
     871,   310,   815,    88,   360,   503,   929,  1162,   828,  1221,
     828,   503,   957,   958,   959,   960,  1306,   503,  1211,  1210,
      49,   979,   974,   189,   979,  1057,  1281,  1283,   316,  1180,
     995,   263,   288,  1007,  1204,   218,  1012,  1312,   828,   292,
    1153,   263,  1162,  1161,  1036,  1167,  1221,  1168,  1169,  1170,
    1171,  1174,  1076,  1204,  1076,   466,  1147,  1148,   332,  1255,
    1180,   823,  1211,   315,  1210,   114,  1109,   441,  1111,   158,
     293,  1134,  1154,  1155,  1156,  1157,   323,  1188,  1214,   730,
    1193,   758,   253,   255,  1321,   509,   694,  1221,   271,   331,
     463,   468,   799,   800,   801,  1212,   799,   800,   802,   820,
      47,    32,    35,    38,    46,    92,   111,   190,   198,   212,
     244,   264,   266,   288,   289,   320,   347,   348,   374,   381,
     394,   398,   413,   440,   449,   478,   488,   494,   846,   847,
     848,  1136,   828,  1144,   828,   296,   877,   828,  1291,  1221,
     253,   255,  1326,   908,  1144,   364,  1144,   364,  1204,   958,
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
    1330,  1281,  1281,    55,    90,  1330,  1331,  1315,   768,   110,
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
     327,   328,   369,   385,   386,   771,  1330,  1331,  1332,  1333,
    1334,  1335,  1336,   120,   196,  1228,   785,  1228,   787,  1282,
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
     873,   874,   874,   875,   875,   876,   876,   877,   877,   878,
     878,   880,   879,   881,   881,   883,   882,   884,   884,   885,
     885,   885,   885,   885,   887,   886,   888,   889,   889,   890,
     891,   893,   892,   894,   894,   895,   895,   896,   896,   898,
     897,   899,   899,   899,   899,   899,   899,   899,   900,   901,
     900,   902,   903,   903,   903,   903,   903,   904,   904,   905,
     905,   906,   906,   907,   907,   908,   908,   909,   909,   909,
     909,   909,   909,   909,   909,   909,   909,   909,   909,   909,
     909,   909,   909,   909,   910,   910,   912,   911,   913,   913,
     913,   913,   913,   914,   914,   916,   915,   917,   919,   918,
     920,   921,   921,   922,   922,   922,   923,   923,   924,   924,
     925,   926,   927,   927,   928,   928,   929,   929,   929,   929,
     930,   930,   931,   931,   933,   932,   934,   934,   934,   934,
     934,   934,   934,   935,   935,   937,   936,   938,   940,   939,
     941,   943,   942,   944,   945,   945,   946,   948,   947,   949,
     949,   949,   950,   950,   952,   951,   953,   954,   954,   955,
     955,   955,   956,   956,   957,   957,   958,   959,   959,   959,
     959,   959,   959,   959,   960,   960,   962,   961,   963,   963,
     965,   964,   966,   967,   967,   967,   968,   968,   968,   968,
     970,   969,   971,   972,   973,   973,   974,   974,   974,   974,
     974,   974,   975,   975,   976,   976,   977,   977,   977,   977,
     977,   978,   979,   979,   980,   980,   982,   981,   984,   983,
     985,   985,   987,   986,   988,   988,   989,   989,   991,   990,
     992,   992,   993,   993,   993,   993,   994,   994,   995,   995,
     995,   995,   997,   996,   998,   999,   998,   998,  1000,  1000,
    1001,  1001,  1002,  1002,  1003,  1003,  1003,  1003,  1003,  1004,
    1004,  1005,  1005,  1006,  1006,  1007,  1009,  1008,  1010,  1011,
    1011,  1012,  1012,  1012,  1012,  1012,  1012,  1012,  1013,  1013,
    1014,  1014,  1015,  1015,  1016,  1018,  1017,  1019,  1020,  1022,
    1021,  1023,  1024,  1024,  1026,  1025,  1027,  1028,  1028,  1028,
    1029,  1029,  1030,  1032,  1031,  1033,  1033,  1034,  1034,  1035,
    1035,  1036,  1036,  1037,  1038,  1038,  1040,  1039,  1041,  1041,
    1041,  1041,  1041,  1041,  1042,  1042,  1043,  1043,  1044,  1045,
    1046,  1046,  1047,  1047,  1047,  1047,  1047,  1047,  1047,  1047,
    1048,  1048,  1049,  1050,  1050,  1051,  1052,  1052,  1053,  1053,
    1055,  1054,  1057,  1056,  1058,  1058,  1059,  1059,  1060,  1060,
    1061,  1061,  1062,  1062,  1062,  1063,  1063,  1063,  1065,  1064,
    1066,  1067,  1067,  1068,  1068,  1068,  1068,  1069,  1069,  1069,
    1069,  1069,  1069,  1070,  1071,  1071,  1072,  1072,  1074,  1073,
    1073,  1075,  1075,  1075,  1075,  1076,  1076,  1077,  1077,  1077,
    1077,  1079,  1078,  1080,  1081,  1081,  1082,  1082,  1082,  1083,
    1083,  1084,  1084,  1086,  1085,  1087,  1087,  1087,  1088,  1088,
    1089,  1090,  1090,  1092,  1091,  1093,  1093,  1095,  1094,  1096,
    1098,  1097,  1099,  1100,  1100,  1100,  1102,  1101,  1103,  1104,
    1104,  1105,  1105,  1106,  1107,  1107,  1108,  1109,  1109,  1110,
    1110,  1111,  1111,  1112,  1112,  1114,  1113,  1115,  1115,  1115,
    1115,  1115,  1116,  1117,  1117,  1118,  1118,  1118,  1118,  1118,
    1119,  1120,  1120,  1121,  1121,  1121,  1122,  1122,  1122,  1122,
    1123,  1124,  1124,  1125,  1126,  1127,  1127,  1129,  1128,  1130,
    1131,  1131,  1132,  1132,  1132,  1132,  1133,  1133,  1134,  1134,
    1135,  1135,  1136,  1137,  1137,  1138,  1138,  1139,  1139,  1140,
    1140,  1141,  1142,  1142,  1143,  1143,  1144,  1145,  1145,  1146,
    1146,  1147,  1148,  1148,  1149,  1149,  1150,  1150,  1151,  1151,
    1151,  1152,  1153,  1154,  1154,  1154,  1155,  1156,  1157,  1158,
    1158,  1159,  1159,  1160,  1160,  1161,  1162,  1164,  1163,  1165,
    1165,  1165,  1166,  1166,  1166,  1166,  1166,  1166,  1166,  1166,
    1166,  1166,  1166,  1166,  1166,  1166,  1166,  1166,  1166,  1166,
    1166,  1166,  1166,  1166,  1166,  1166,  1167,  1167,  1168,  1168,
    1169,  1169,  1170,  1171,  1172,  1172,  1173,  1173,  1173,  1174,
    1174,  1174,  1175,  1175,  1175,  1176,  1176,  1177,  1177,  1177,
    1178,  1178,  1179,  1179,  1179,  1179,  1179,  1179,  1180,  1180,
    1181,  1182,  1183,  1184,  1184,  1185,  1186,  1187,  1187,  1188,
    1189,  1189,  1190,  1191,  1191,  1191,  1192,  1193,  1193,  1194,
    1195,  1196,  1196,  1197,  1198,  1198,  1199,  1200,  1201,  1201,
    1202,  1202,  1202,  1203,  1203,  1204,  1204,  1204,  1204,  1204,
    1204,  1204,  1204,  1204,  1204,  1205,  1205,  1206,  1206,  1206,
    1207,  1207,  1207,  1207,  1207,  1207,  1207,  1208,  1208,  1209,
    1209,  1210,  1210,  1211,  1211,  1212,  1212,  1213,  1213,  1213,
    1214,  1214,  1214,  1215,  1215,  1216,  1216,  1217,  1217,  1217,
    1218,  1219,  1220,  1220,  1221,  1222,  1222,  1222,  1222,  1223,
    1224,  1224,  1224,  1224,  1225,  1225,  1226,  1227,  1227,  1228,
    1229,  1230,  1231,  1231,  1231,  1231,  1231,  1231,  1231,  1232,
    1232,  1233,  1233,  1234,  1234,  1234,  1234,  1234,  1234,  1234,
    1235,  1235,  1235,  1235,  1235,  1235,  1235,  1235,  1235,  1235,
    1235,  1235,  1236,  1236,  1237,  1237,  1237,  1238,  1238,  1238,
    1238,  1239,  1239,  1239,  1240,  1240,  1240,  1241,  1241,  1241,
    1242,  1242,  1243,  1243,  1244,  1244,  1245,  1245,  1246,  1247,
    1247,  1248,  1248,  1249,  1249,  1250,  1250,  1251,  1251,  1252,
    1252,  1252,  1253,  1253,  1254,  1254,  1254,  1255,  1255,  1256,
    1256,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1258,
    1258,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,  1259,
    1259,  1260,  1260,  1261,  1261,  1262,  1262,  1263,  1263,  1264,
    1264,  1265,  1265,  1266,  1266,  1267,  1267,  1268,  1268,  1269,
    1269,  1270,  1270,  1271,  1271,  1272,  1272,  1273,  1273,  1274,
    1274,  1275,  1275,  1276,  1276,  1277,  1277,  1277,  1278,  1278,
    1279,  1279,  1280,  1280,  1281,  1281,  1282,  1282,  1282,  1283,
    1283,  1284,  1284,  1284,  1285,  1285,  1285,  1286,  1286,  1286,
    1287,  1287,  1288,  1288,  1289,  1289,  1290,  1290,  1290,  1291,
    1291,  1292,  1292,  1293,  1293,  1293,  1293,  1294,  1294,  1295,
    1295,  1296,  1296,  1297,  1297,  1298,  1298,  1299,  1299,  1300,
    1300,  1301,  1301,  1301,  1302,  1302,  1303,  1303,  1304,  1304,
    1305,  1305,  1306,  1306,  1307,  1307,  1308,  1308,  1309,  1309,
    1309,  1310,  1310,  1311,  1311,  1312,  1312,  1313,  1313,  1314,
    1314,  1315,  1315,  1316,  1316,  1317,  1317,  1318,  1318,  1319,
    1319,  1320,  1320,  1321,  1321,  1322,  1322,  1323,  1323,  1324,
    1324,  1325,  1325,  1326,  1326,  1327,  1327,  1328,  1328,  1329,
    1329,  1329,  1330,  1330,  1331,  1331,  1332,  1332,  1333,  1333,
    1334,  1334,  1335,  1335,  1336,  1336,  1337,  1337
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
       4,     1,     1,     1,     1,     0,     2,     0,     2,     0,
       1,     0,     3,     1,     2,     0,     3,     2,     3,     0,
       1,     3,     3,     2,     0,     4,     4,     0,     1,     1,
       1,     0,     4,     3,     2,     1,     2,     0,     1,     0,
       4,     3,     3,     3,     3,     4,     2,     4,     1,     0,
       3,     5,     0,     2,     2,     2,     2,     0,     2,     1,
       1,     0,     2,     0,     1,     1,     2,     1,     2,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     3,     1,
       3,     3,     3,     3,     0,     1,     0,     4,     4,     6,
       6,     8,     8,     0,     1,     0,     3,     2,     0,     4,
       2,     1,     3,     1,     1,     1,     2,     1,     1,     2,
       2,     3,     2,     3,     1,     3,     2,     1,     1,     1,
       0,     2,     0,     1,     0,     3,     0,     2,     1,     2,
       1,     1,     1,     0,     2,     0,     3,     1,     0,     3,
       1,     0,     3,     3,     0,     3,     2,     0,     6,     3,
       2,     1,     0,     1,     0,     3,     5,     0,     2,     0,
       3,     3,     0,     2,     1,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     3,     1,     2,
       0,     3,     2,     1,     1,     1,     2,     1,     1,     1,
       0,     3,     2,     5,     1,     2,     2,     2,     1,     1,
       1,     2,     1,     2,     4,     2,     0,     1,     1,     1,
       1,     4,     0,     2,     3,     3,     0,     3,     0,     3,
       3,     4,     0,     4,     4,     6,     0,     1,     0,     3,
       4,     5,     1,     1,     1,     1,     0,     3,     0,     3,
       2,     1,     0,     3,     2,     0,     4,     2,     0,     1,
       1,     1,     1,     3,     0,     2,     1,     3,     3,     0,
       3,     1,     1,     1,     3,     7,     0,     4,     7,     0,
       2,     0,     2,     2,     3,     3,     3,     2,     0,     3,
       1,     1,     0,     1,     1,     0,     3,     2,     1,     0,
       4,     4,     0,     1,     0,     4,     4,     0,     2,     3,
       0,     1,     1,     0,     4,     4,     6,     0,     2,     0,
       2,     1,     2,     3,     0,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     3,     4,     1,     2,     3,     1,     2,     3,     3,
       0,     3,     0,     7,     0,     5,     0,     2,     0,     2,
       0,     3,     0,     2,     4,     0,     2,     4,     0,     4,
       4,     0,     3,     0,     4,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     2,     1,     0,     1,     0,     4,
       2,     0,     2,     4,     4,     0,     1,     1,     1,     1,
       1,     0,     4,     5,     1,     2,     1,     3,     3,     0,
       4,     0,     1,     0,     4,     4,     6,     6,     0,     1,
       2,     0,     1,     0,     3,     1,     2,     0,     3,     5,
       0,     3,     2,     0,     1,     1,     0,     4,     6,     0,
       3,     1,     3,     2,     2,     2,     3,     0,     3,     0,
       3,     0,     3,     0,     1,     0,     3,     1,     1,     1,
       1,     1,     7,     0,     1,     1,     1,     1,     1,     1,
       4,     1,     2,     1,     2,     3,     0,     1,     2,     1,
       3,     1,     1,     4,     1,     1,     1,     0,     4,     5,
       0,     2,     0,     4,     3,     3,     1,     1,     1,     1,
       0,     1,     2,     0,     2,     1,     1,     0,     2,     1,
       1,     2,     0,     2,     0,     2,     2,     0,     2,     0,
       2,     2,     0,     2,     0,     2,     2,     1,     2,     1,
       1,     2,     2,     2,     1,     1,     2,     2,     2,     0,
       2,     0,     2,     0,     2,     1,     1,     0,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     1,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     2,     2,     1,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     2,
       2,     1,     1,     1,     2,     1,     1,     1,     2,     1,
       0,     2,     1,     1,     1,     3,     1,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     1,     2,     1,     1,     1,     1,     2,
       2,     2,     4,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     2,     1,     1,
       3,     2,     2,     1,     1,     3,     3,     4,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     5,     5,     4,     5,     5,     5,     5,     5,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     5,     0,     3,     2,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     0,     0,
       1,     0,     1,     0,     1,     0,     2,     0,     2,     0,
       1,     1,     0,     1,     0,     1,     2,     0,     2,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     2,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     1,     1,     0,     1,     1,     0,     2,     2,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     1,     0,     2,     1,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     2,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       1,     0,     1,     0,     3,     0,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       2,     1,     1,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     2
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
#line 6166 "parser.c" /* yacc.c:1646  */
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
#line 6189 "parser.c" /* yacc.c:1646  */
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
#line 6213 "parser.c" /* yacc.c:1646  */
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
#line 6238 "parser.c" /* yacc.c:1646  */
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
#line 6263 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 1555 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 6271 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 1561 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 6279 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 1573 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 6287 "parser.c" /* yacc.c:1646  */
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
#line 6322 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 1614 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6330 "parser.c" /* yacc.c:1646  */
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
#line 6363 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 1657 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6369 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 1658 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6375 "parser.c" /* yacc.c:1646  */
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
#line 6388 "parser.c" /* yacc.c:1646  */
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
#line 6401 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1690 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6409 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1694 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6417 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1704 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6425 "parser.c" /* yacc.c:1646  */
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
#line 6437 "parser.c" /* yacc.c:1646  */
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
#line 6450 "parser.c" /* yacc.c:1646  */
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
#line 6462 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1769 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
#line 6472 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1798 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 6480 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1805 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 6488 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1812 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 6496 "parser.c" /* yacc.c:1646  */
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
#line 6508 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1830 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6516 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1834 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6524 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1838 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6532 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1842 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6540 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1856 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 6549 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1861 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 6557 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1869 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 6565 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1881 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 6573 "parser.c" /* yacc.c:1646  */
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
#line 6589 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1906 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6597 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1910 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6605 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1917 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6614 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1922 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6623 "parser.c" /* yacc.c:1646  */
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
#line 6637 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1947 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	yyerrok;
  }
#line 6646 "parser.c" /* yacc.c:1646  */
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
#line 6674 "parser.c" /* yacc.c:1646  */
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
#line 6688 "parser.c" /* yacc.c:1646  */
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
#line 6705 "parser.c" /* yacc.c:1646  */
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
#line 6717 "parser.c" /* yacc.c:1646  */
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
#line 6736 "parser.c" /* yacc.c:1646  */
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
#line 6755 "parser.c" /* yacc.c:1646  */
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
#line 6772 "parser.c" /* yacc.c:1646  */
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
#line 6784 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2104 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 6794 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2110 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6804 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2116 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6814 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2122 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 6824 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2128 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6834 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2134 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 6845 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2144 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 6853 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2148 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6861 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2155 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6869 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2159 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 6877 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2163 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 6885 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2167 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 6893 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2174 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6901 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2178 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 6909 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2184 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6915 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2185 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6921 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2186 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 6927 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2187 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 6933 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2188 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 6939 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2189 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 6945 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2193 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6951 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2194 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 6957 "parser.c" /* yacc.c:1646  */
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
#line 6972 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2216 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6980 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2220 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6988 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2228 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6996 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2235 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7004 "parser.c" /* yacc.c:1646  */
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
#line 7016 "parser.c" /* yacc.c:1646  */
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
#line 7037 "parser.c" /* yacc.c:1646  */
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
#line 7049 "parser.c" /* yacc.c:1646  */
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
#line 7061 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2288 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7067 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2289 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7073 "parser.c" /* yacc.c:1646  */
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
#line 7095 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2316 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7101 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2317 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7107 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2322 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7115 "parser.c" /* yacc.c:1646  */
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
#line 7135 "parser.c" /* yacc.c:1646  */
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
#line 7157 "parser.c" /* yacc.c:1646  */
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
#line 7238 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2451 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7246 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2455 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7254 "parser.c" /* yacc.c:1646  */
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
#line 7271 "parser.c" /* yacc.c:1646  */
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
#line 7286 "parser.c" /* yacc.c:1646  */
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
#line 7302 "parser.c" /* yacc.c:1646  */
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
#line 7318 "parser.c" /* yacc.c:1646  */
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
#line 7334 "parser.c" /* yacc.c:1646  */
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
#line 7350 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 2569 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7359 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 2577 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7369 "parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 2586 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7379 "parser.c" /* yacc.c:1646  */
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
#line 7400 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2618 "parser.y" /* yacc.c:1646  */
    {
	validate_file (current_file, (yyvsp[-3]));
  }
#line 7408 "parser.c" /* yacc.c:1646  */
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
#line 7420 "parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 2656 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 7430 "parser.c" /* yacc.c:1646  */
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
#line 7444 "parser.c" /* yacc.c:1646  */
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
#line 7461 "parser.c" /* yacc.c:1646  */
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
#line 7478 "parser.c" /* yacc.c:1646  */
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
#line 7495 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 2721 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 7503 "parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 2728 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 7511 "parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 2741 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7519 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 2753 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
#line 7528 "parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2760 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 7534 "parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 2761 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 7540 "parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 2762 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 7546 "parser.c" /* yacc.c:1646  */
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
#line 7571 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 2793 "parser.y" /* yacc.c:1646  */
    { }
#line 7577 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 2796 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
#line 7585 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2801 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 7593 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2811 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
#line 7602 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2822 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[0]);
  }
#line 7611 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 2837 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
#line 7619 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 2845 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 7628 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 2850 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 7637 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 2855 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 7646 "parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 2864 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 7654 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2868 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 7663 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2884 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 7672 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2889 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 7681 "parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2894 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 7690 "parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2899 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 7699 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2910 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 7708 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2921 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
#line 7716 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2931 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[0]);
  }
#line 7725 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2938 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7731 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2939 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 7737 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2940 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 7743 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2947 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[0]);
  }
#line 7752 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2958 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
#line 7760 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2972 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[0]);
  }
#line 7769 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2979 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7775 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2980 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 7781 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2981 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7787 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2990 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7795 "parser.c" /* yacc.c:1646  */
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
#line 7824 "parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 3036 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 7830 "parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 3037 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 7836 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 3038 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7842 "parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 3039 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7848 "parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 3046 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 7857 "parser.c" /* yacc.c:1646  */
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
#line 7869 "parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 3078 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 7877 "parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 3087 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 7887 "parser.c" /* yacc.c:1646  */
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
#line 7905 "parser.c" /* yacc.c:1646  */
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
#line 7925 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3137 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7933 "parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 3144 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7941 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3148 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7949 "parser.c" /* yacc.c:1646  */
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
#line 7963 "parser.c" /* yacc.c:1646  */
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
#line 7982 "parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 3199 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
#line 7991 "parser.c" /* yacc.c:1646  */
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
#line 8015 "parser.c" /* yacc.c:1646  */
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
#line 8053 "parser.c" /* yacc.c:1646  */
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
#line 8085 "parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 3298 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8093 "parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 3304 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8099 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3305 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8105 "parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 3309 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8111 "parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 3310 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8117 "parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 3318 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8126 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3329 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8135 "parser.c" /* yacc.c:1646  */
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
#line 8147 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 3357 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8156 "parser.c" /* yacc.c:1646  */
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
#line 8175 "parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 3397 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8183 "parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 3404 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8191 "parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 3411 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8199 "parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 3420 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
#line 8209 "parser.c" /* yacc.c:1646  */
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
#line 8260 "parser.c" /* yacc.c:1646  */
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
#line 8276 "parser.c" /* yacc.c:1646  */
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
#line 8290 "parser.c" /* yacc.c:1646  */
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
#line 8303 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3554 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8313 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3560 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8323 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3569 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8331 "parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3572 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8341 "parser.c" /* yacc.c:1646  */
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
#line 8354 "parser.c" /* yacc.c:1646  */
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
#line 8373 "parser.c" /* yacc.c:1646  */
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
#line 8397 "parser.c" /* yacc.c:1646  */
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
#line 8411 "parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3646 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8419 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3653 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8429 "parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3659 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8439 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3665 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8449 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3674 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8459 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3683 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 8467 "parser.c" /* yacc.c:1646  */
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
#line 8480 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3698 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8486 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3699 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8492 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3700 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8498 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3701 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8504 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3706 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8512 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3710 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8520 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3714 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 8528 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3718 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 8536 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3722 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8544 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3726 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 8552 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3730 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 8560 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3734 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 8568 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3738 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 8576 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3742 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 8584 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3746 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8592 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3750 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 8600 "parser.c" /* yacc.c:1646  */
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
#line 8612 "parser.c" /* yacc.c:1646  */
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
#line 8639 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3812 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8647 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3816 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 8656 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3824 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 8665 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3830 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 8674 "parser.c" /* yacc.c:1646  */
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
#line 8696 "parser.c" /* yacc.c:1646  */
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
#line 8724 "parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 3909 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 8732 "parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 3913 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 8740 "parser.c" /* yacc.c:1646  */
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
#line 8763 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 3947 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 8772 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3963 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8780 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 3967 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8788 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 3971 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 8796 "parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 3975 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 8804 "parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 3979 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8812 "parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 3983 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8820 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 3987 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 8828 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 3991 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 8836 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 3995 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 8844 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 3999 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 8852 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4003 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 8860 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4007 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8868 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4011 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8877 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4016 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8886 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4021 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 8894 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4025 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 8902 "parser.c" /* yacc.c:1646  */
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
#line 8914 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4037 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 8922 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4041 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 8930 "parser.c" /* yacc.c:1646  */
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
#line 8942 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4053 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 8950 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4057 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 8958 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4061 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 8966 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4065 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 8974 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4069 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 8982 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4073 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 8990 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4077 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 8998 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4081 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9006 "parser.c" /* yacc.c:1646  */
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
#line 9018 "parser.c" /* yacc.c:1646  */
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
#line 9030 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4101 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9038 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4105 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9046 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4109 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9054 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4113 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9062 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4117 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9070 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4121 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
#line 9079 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4141 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9089 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4147 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9099 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4160 "parser.y" /* yacc.c:1646  */
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
#line 9118 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4178 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9126 "parser.c" /* yacc.c:1646  */
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
#line 9161 "parser.c" /* yacc.c:1646  */
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
#line 9191 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4248 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9197 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4249 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9203 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4253 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9209 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4254 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9215 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4259 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9223 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4266 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9232 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4274 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9240 "parser.c" /* yacc.c:1646  */
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
#line 9265 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4304 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9271 "parser.c" /* yacc.c:1646  */
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
#line 9288 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4322 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9294 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4323 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9300 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4328 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9308 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4334 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9314 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4336 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9320 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4341 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9329 "parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4352 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
#line 9338 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4363 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
#line 9347 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4374 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
#line 9356 "parser.c" /* yacc.c:1646  */
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
#line 9383 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4413 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[0]);
  }
#line 9392 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4421 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9398 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4422 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9404 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4426 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9410 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4427 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 9416 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4432 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 9427 "parser.c" /* yacc.c:1646  */
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
#line 9444 "parser.c" /* yacc.c:1646  */
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
#line 9464 "parser.c" /* yacc.c:1646  */
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
#line 9477 "parser.c" /* yacc.c:1646  */
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
#line 9491 "parser.c" /* yacc.c:1646  */
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
#line 9504 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4512 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9514 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4524 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 9524 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4530 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9534 "parser.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4541 "parser.y" /* yacc.c:1646  */
    {
	PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 9544 "parser.c" /* yacc.c:1646  */
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
#line 9557 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4572 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9565 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4579 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 9574 "parser.c" /* yacc.c:1646  */
    break;

  case 516:
#line 4584 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
#line 9582 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4595 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
#line 9590 "parser.c" /* yacc.c:1646  */
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
#line 9627 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4650 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 9635 "parser.c" /* yacc.c:1646  */
    break;

  case 525:
#line 4654 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 9644 "parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 4659 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 9652 "parser.c" /* yacc.c:1646  */
    break;

  case 534:
#line 4679 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 9660 "parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 4686 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 9668 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 4693 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 9676 "parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 4700 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 9684 "parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 4707 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 9692 "parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 4718 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 9700 "parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 4749 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
#line 9708 "parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 4775 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
#line 9716 "parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 4782 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
  }
#line 9724 "parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 4798 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
  }
#line 9732 "parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 4809 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
  }
#line 9740 "parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 4821 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
  }
#line 9748 "parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 4854 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
  }
#line 9756 "parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 4861 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
  }
#line 9764 "parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 4868 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
#line 9772 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 4877 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 9783 "parser.c" /* yacc.c:1646  */
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
#line 9799 "parser.c" /* yacc.c:1646  */
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
#line 9834 "parser.c" /* yacc.c:1646  */
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
#line 9867 "parser.c" /* yacc.c:1646  */
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
#line 9887 "parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 4992 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 9895 "parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 4996 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 9903 "parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5000 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 9911 "parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5004 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 9919 "parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5008 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 9927 "parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5012 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 9935 "parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 5016 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 9943 "parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 5020 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 9951 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5024 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 9959 "parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5028 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 9967 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5032 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	PENDING ("OVERLINE");
  }
#line 9976 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5037 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	PENDING ("GRID");
  }
#line 9985 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5042 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	PENDING ("LEFTLINE");
  }
#line 9994 "parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 5047 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10002 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5051 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10010 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5055 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10018 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5059 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10026 "parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 5063 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10035 "parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 5068 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10043 "parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 5072 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10051 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5076 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10060 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5081 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10069 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5086 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10078 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5091 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10087 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5104 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10098 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5111 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10107 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5116 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10117 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5135 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10125 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5139 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10133 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5143 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10141 "parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 5150 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10149 "parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 5154 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10157 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5158 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10165 "parser.c" /* yacc.c:1646  */
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
#line 10177 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5177 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10185 "parser.c" /* yacc.c:1646  */
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
#line 10199 "parser.c" /* yacc.c:1646  */
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
#line 10215 "parser.c" /* yacc.c:1646  */
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
#line 10234 "parser.c" /* yacc.c:1646  */
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
#line 10267 "parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5256 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10275 "parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5260 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 10284 "parser.c" /* yacc.c:1646  */
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
#line 10296 "parser.c" /* yacc.c:1646  */
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
#line 10309 "parser.c" /* yacc.c:1646  */
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
#line 10321 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5292 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10327 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5294 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 10333 "parser.c" /* yacc.c:1646  */
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
#line 10350 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5316 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 10358 "parser.c" /* yacc.c:1646  */
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
#line 10370 "parser.c" /* yacc.c:1646  */
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
#line 10382 "parser.c" /* yacc.c:1646  */
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
#line 10394 "parser.c" /* yacc.c:1646  */
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
#line 10406 "parser.c" /* yacc.c:1646  */
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
#line 10439 "parser.c" /* yacc.c:1646  */
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
#line 10472 "parser.c" /* yacc.c:1646  */
    break;

  case 683:
#line 5417 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 10480 "parser.c" /* yacc.c:1646  */
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
#line 10493 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5433 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 10503 "parser.c" /* yacc.c:1646  */
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
#line 10532 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5467 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 10541 "parser.c" /* yacc.c:1646  */
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
#line 10571 "parser.c" /* yacc.c:1646  */
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
#line 10592 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5529 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 10600 "parser.c" /* yacc.c:1646  */
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
#line 10648 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 5583 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 10656 "parser.c" /* yacc.c:1646  */
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
#line 10705 "parser.c" /* yacc.c:1646  */
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
#line 10718 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 5654 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10726 "parser.c" /* yacc.c:1646  */
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
#line 10742 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5676 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 10752 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 5681 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 10761 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 5686 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 10771 "parser.c" /* yacc.c:1646  */
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
#line 10802 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 5721 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 10810 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 5725 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 10818 "parser.c" /* yacc.c:1646  */
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
#line 10836 "parser.c" /* yacc.c:1646  */
    break;

  case 761:
#line 5795 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 10845 "parser.c" /* yacc.c:1646  */
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
#line 10860 "parser.c" /* yacc.c:1646  */
    break;

  case 764:
#line 5823 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-5]), (yyvsp[-4]), current_statement->attr_ptr);
  }
#line 10869 "parser.c" /* yacc.c:1646  */
    break;

  case 765:
#line 5828 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 10877 "parser.c" /* yacc.c:1646  */
    break;

  case 766:
#line 5832 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 10885 "parser.c" /* yacc.c:1646  */
    break;

  case 767:
#line 5836 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 10894 "parser.c" /* yacc.c:1646  */
    break;

  case 768:
#line 5841 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 10903 "parser.c" /* yacc.c:1646  */
    break;

  case 769:
#line 5846 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 10912 "parser.c" /* yacc.c:1646  */
    break;

  case 770:
#line 5851 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 10921 "parser.c" /* yacc.c:1646  */
    break;

  case 771:
#line 5856 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 10929 "parser.c" /* yacc.c:1646  */
    break;

  case 772:
#line 5860 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 10937 "parser.c" /* yacc.c:1646  */
    break;

  case 773:
#line 5864 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 10945 "parser.c" /* yacc.c:1646  */
    break;

  case 774:
#line 5868 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 10953 "parser.c" /* yacc.c:1646  */
    break;

  case 775:
#line 5872 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 10962 "parser.c" /* yacc.c:1646  */
    break;

  case 776:
#line 5877 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 10970 "parser.c" /* yacc.c:1646  */
    break;

  case 777:
#line 5881 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 10978 "parser.c" /* yacc.c:1646  */
    break;

  case 778:
#line 5885 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 10986 "parser.c" /* yacc.c:1646  */
    break;

  case 779:
#line 5889 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 10994 "parser.c" /* yacc.c:1646  */
    break;

  case 780:
#line 5893 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11002 "parser.c" /* yacc.c:1646  */
    break;

  case 781:
#line 5897 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11010 "parser.c" /* yacc.c:1646  */
    break;

  case 782:
#line 5901 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11018 "parser.c" /* yacc.c:1646  */
    break;

  case 784:
#line 5909 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11026 "parser.c" /* yacc.c:1646  */
    break;

  case 787:
#line 5920 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11032 "parser.c" /* yacc.c:1646  */
    break;

  case 788:
#line 5921 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11038 "parser.c" /* yacc.c:1646  */
    break;

  case 789:
#line 5925 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0])); }
#line 11044 "parser.c" /* yacc.c:1646  */
    break;

  case 790:
#line 5926 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1])); }
#line 11050 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 5927 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), cb_int0); }
#line 11056 "parser.c" /* yacc.c:1646  */
    break;

  case 792:
#line 5928 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[0])); }
#line 11062 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 5929 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11068 "parser.c" /* yacc.c:1646  */
    break;

  case 794:
#line 5933 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11074 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 5937 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11080 "parser.c" /* yacc.c:1646  */
    break;

  case 796:
#line 5938 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11086 "parser.c" /* yacc.c:1646  */
    break;

  case 800:
#line 5947 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11094 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 5963 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11102 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 5967 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11112 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 5973 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11120 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 5977 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11128 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 5981 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11136 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 5985 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11144 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 5989 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 11152 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 5993 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11160 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 5997 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11168 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6001 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 11176 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6005 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11184 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6009 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11192 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6013 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 11200 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6017 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11208 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6021 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11216 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6025 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11224 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6029 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11232 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6033 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11240 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6037 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11248 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6041 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11256 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6045 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11266 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6051 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11274 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6055 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11282 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6059 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 11290 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6063 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 11298 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6067 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 11306 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6071 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 11314 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6075 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 11322 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6087 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 11330 "parser.c" /* yacc.c:1646  */
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
#line 11345 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6108 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 11353 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6117 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 11361 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6121 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 11369 "parser.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6125 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 11377 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6132 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11385 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6139 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 11393 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6143 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 11401 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6153 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 11410 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6162 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 11418 "parser.c" /* yacc.c:1646  */
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
#line 11431 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6177 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11437 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6178 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11443 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6186 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 11452 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6200 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 11460 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6212 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
#line 11469 "parser.c" /* yacc.c:1646  */
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
#line 11484 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6241 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 11493 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 6246 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 11502 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6251 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 11511 "parser.c" /* yacc.c:1646  */
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
#line 11532 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6276 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11540 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6280 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11549 "parser.c" /* yacc.c:1646  */
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
#line 11562 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6296 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11568 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6298 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11574 "parser.c" /* yacc.c:1646  */
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
#line 11586 "parser.c" /* yacc.c:1646  */
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
#line 11612 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 6337 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11620 "parser.c" /* yacc.c:1646  */
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
#line 11633 "parser.c" /* yacc.c:1646  */
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
#line 11646 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6362 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11654 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6366 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11662 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 6370 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11670 "parser.c" /* yacc.c:1646  */
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
#line 11694 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6407 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11702 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6412 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11710 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 6419 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11718 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6424 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11726 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6431 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 11734 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6435 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 11742 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6445 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 11750 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 6453 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 11758 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 6457 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 11766 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 6467 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 11774 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 6475 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 11783 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 6480 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 11792 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 6487 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 11798 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 6488 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 11804 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 6489 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 11810 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 6490 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 11816 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 6491 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 11822 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 6499 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 11830 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 6508 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 11838 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 6515 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 11846 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 6519 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 11854 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 6529 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 11863 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 6540 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 11878 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 6557 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 11886 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 6566 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 11894 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 6574 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 11903 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 6579 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 11912 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 6587 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 11920 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 6591 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 11928 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 6601 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 11937 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 6611 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 11945 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 6615 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 11953 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 6619 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 11961 "parser.c" /* yacc.c:1646  */
    break;

  case 924:
#line 6623 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 11969 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 6627 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), NULL, NULL);
  }
#line 11977 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 6632 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[-3])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
#line 11987 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 6642 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
  }
#line 11995 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 6650 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[-4])), cb_null, cb_int1,
			 (yyvsp[-3]), current_statement->attr_ptr);
  }
#line 12004 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 6658 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12016 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 6666 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12024 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 6670 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_name ((yyvsp[0]));
  }
#line 12032 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 6674 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 12040 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 6678 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12052 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 6700 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12060 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 6706 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 12066 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 6707 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 12072 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 6718 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12080 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 6722 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
#line 12088 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 6726 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
#line 12096 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 6730 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12104 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 6734 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12112 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 6738 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
#line 12120 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 6742 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
#line 12128 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 6746 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 12136 "parser.c" /* yacc.c:1646  */
    break;

  case 955:
#line 6750 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 12144 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 6754 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12152 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 6758 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12160 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 6762 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12168 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 6766 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12176 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 6770 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12184 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 6774 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12192 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 6778 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12200 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 6782 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12208 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 6789 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 12216 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 6793 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 12224 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 6803 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 12232 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 6812 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 12240 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 6816 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 12248 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 6820 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 12256 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 6824 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12264 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 6828 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12272 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 6835 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 12280 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 6839 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 12288 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 6849 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 12297 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 6858 "parser.y" /* yacc.c:1646  */
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
#line 12313 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 6876 "parser.y" /* yacc.c:1646  */
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
#line 12336 "parser.c" /* yacc.c:1646  */
    break;

  case 980:
#line 6900 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 12345 "parser.c" /* yacc.c:1646  */
    break;

  case 981:
#line 6907 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12351 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 6909 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12357 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 6914 "parser.y" /* yacc.c:1646  */
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
#line 12372 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 6925 "parser.y" /* yacc.c:1646  */
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
#line 12387 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 6936 "parser.y" /* yacc.c:1646  */
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
#line 12402 "parser.c" /* yacc.c:1646  */
    break;

  case 986:
#line 6950 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12410 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 6954 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12418 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 6960 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12424 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 6962 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 12430 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 6968 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 12439 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 6977 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 12448 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 6985 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12457 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 6991 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12466 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 6998 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12472 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7000 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12478 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7005 "parser.y" /* yacc.c:1646  */
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
#line 12544 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7066 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 12550 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7067 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 12556 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7068 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 12562 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7072 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12568 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7073 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12574 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7078 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 12582 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7082 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 12590 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7092 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 12599 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7097 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12607 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7105 "parser.y" /* yacc.c:1646  */
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
#line 12632 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7126 "parser.y" /* yacc.c:1646  */
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
#line 12650 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7140 "parser.y" /* yacc.c:1646  */
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
#line 12676 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7162 "parser.y" /* yacc.c:1646  */
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
#line 12702 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7184 "parser.y" /* yacc.c:1646  */
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
#line 12726 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7204 "parser.y" /* yacc.c:1646  */
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
#line 12750 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7226 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12756 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7227 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12762 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7235 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12771 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7244 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 12779 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7254 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
#line 12788 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7270 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 12801 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7283 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 12810 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7291 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 12819 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7296 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 12828 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7307 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 12841 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7322 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 12849 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7331 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 12857 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7335 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 12865 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7339 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 12873 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7346 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 12881 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7350 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 12889 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7360 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 12897 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7369 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 12905 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7375 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12911 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7376 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 12917 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7380 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12923 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7381 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 12929 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7382 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 12935 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 7387 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12943 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7391 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12951 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7398 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12959 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 7403 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12967 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 7410 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12975 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 7416 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 12981 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7417 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 12987 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7418 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 12993 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 7419 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 12999 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 7420 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13005 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 7421 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13011 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 7422 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13017 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 7427 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13025 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 7431 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13033 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 7440 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
#line 13042 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 7449 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13052 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 7455 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13062 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 7466 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13071 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 7479 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13079 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 7483 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13087 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 7487 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13095 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 7503 "parser.y" /* yacc.c:1646  */
    {
	cb_init_tallying ();
  }
#line 13103 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 7507 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	(yyval) = (yyvsp[-3]);
  }
#line 13112 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 7517 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13121 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 7527 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13131 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 7535 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13137 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 7536 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13143 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 7540 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_data ((yyvsp[-1])); }
#line 13149 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 7541 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_characters ((yyvsp[0])); }
#line 13155 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 7542 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_all (); }
#line 13161 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 7543 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_leading (); }
#line 13167 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 7544 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_trailing (); }
#line 13173 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 7545 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0])); }
#line 13179 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 7549 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13185 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 7550 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13191 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 7555 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 13200 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 7560 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13208 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 7566 "parser.y" /* yacc.c:1646  */
    { /* Nothing */ }
#line 13214 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 7567 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 13220 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 7568 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 13226 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 7569 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 13232 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 7570 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 13238 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 7575 "parser.y" /* yacc.c:1646  */
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
#line 13264 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 7602 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 13272 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 7606 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13280 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 7613 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0])));
  }
#line 13288 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 7617 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0])));
  }
#line 13296 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 7626 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 13305 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 7638 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 13313 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 7646 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13321 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 7650 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13329 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 7660 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 13337 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 7669 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 13345 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 7673 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 13353 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 7680 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 13361 "parser.c" /* yacc.c:1646  */
    break;

  case 1107:
#line 7684 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 13369 "parser.c" /* yacc.c:1646  */
    break;

  case 1108:
#line 7694 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 13377 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 7702 "parser.y" /* yacc.c:1646  */
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
#line 13402 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 7723 "parser.y" /* yacc.c:1646  */
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
#line 13427 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 7746 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 13433 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 7747 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 13439 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 7748 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 13445 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 7749 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 13451 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 7753 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13457 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 7754 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13463 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 7758 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13469 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 7759 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13475 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 7760 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 13481 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 7762 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 13490 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 7773 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13501 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 7784 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 13510 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 7789 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 13520 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 7795 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 13529 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 7800 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 13538 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 7808 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 13550 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 7816 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 13558 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 7823 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 13566 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 7827 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 13580 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 7840 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 13591 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 7847 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13603 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 7858 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 13611 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 7862 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 13620 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 7867 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 13628 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 7871 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 13643 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 7882 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13651 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 7888 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 13657 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 7889 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13663 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 7893 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13669 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 7894 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13675 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 7897 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13681 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 7899 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13687 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 7904 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13695 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 7914 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 13703 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 7923 "parser.y" /* yacc.c:1646  */
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
#line 13731 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 7949 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13737 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 7950 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13743 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 7955 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13751 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 7959 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 13759 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 7963 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13767 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 7967 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13775 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 7971 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 13783 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 7975 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 13791 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 7979 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 13799 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 7985 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13805 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 7986 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13811 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 7996 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 13819 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8000 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 13827 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8010 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 13836 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8020 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 13844 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8028 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13852 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8038 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 13861 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8048 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 13869 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8057 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 13877 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8064 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 13885 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8068 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 13893 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8078 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13904 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8090 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 13913 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8098 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13921 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8102 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13929 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8106 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 13937 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8113 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 13945 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8117 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 13953 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8127 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 13962 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8138 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 13970 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8147 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13978 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8152 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13987 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8159 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13993 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8160 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13999 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8165 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14007 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8170 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14015 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8177 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14023 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8181 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14031 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8189 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14039 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8196 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14047 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8200 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14055 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8210 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14066 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8217 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14074 "parser.c" /* yacc.c:1646  */
    break;

  case 1204:
#line 8232 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14080 "parser.c" /* yacc.c:1646  */
    break;

  case 1205:
#line 8233 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14086 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 8237 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14092 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 8238 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14098 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8245 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14106 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 8254 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 14114 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 8266 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 14122 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 8270 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 14130 "parser.c" /* yacc.c:1646  */
    break;

  case 1214:
#line 8274 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
  }
#line 14138 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8278 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
  }
#line 14146 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8282 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 14154 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 8286 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 14162 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 8290 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 14170 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 8294 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 14178 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 8303 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 14186 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 8307 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14194 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 8316 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14202 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 8330 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14210 "parser.c" /* yacc.c:1646  */
    break;

  case 1228:
#line 8344 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 14218 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 8348 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 14226 "parser.c" /* yacc.c:1646  */
    break;

  case 1230:
#line 8358 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 14234 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 8366 "parser.y" /* yacc.c:1646  */
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
#line 14259 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 8387 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 14269 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 8396 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14277 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 8401 "parser.y" /* yacc.c:1646  */
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
#line 14297 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 8419 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14303 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 8420 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14309 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 8425 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 14318 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 8432 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 14324 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 8433 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 14330 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 8438 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 14340 "parser.c" /* yacc.c:1646  */
    break;

  case 1243:
#line 8444 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 14354 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 8454 "parser.y" /* yacc.c:1646  */
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
#line 14370 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 8469 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 14380 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 8475 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 14394 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 8485 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 14408 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 8501 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 14417 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 8511 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 14430 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 8523 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14438 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 8527 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14446 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 8534 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14454 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 8538 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 14463 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 8543 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 14472 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 8548 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 14481 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 8555 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 14487 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 8556 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 14493 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 8557 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 14499 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 8558 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 14505 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 8559 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 14511 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 8560 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 14517 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 8565 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 14526 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 8578 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 14534 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 8582 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 14542 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 8592 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 14550 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 8596 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 14560 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 8602 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 14573 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 8614 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 14581 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 8618 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14589 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 8622 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 14601 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 8630 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 14613 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 8641 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14621 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 8645 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14629 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 8651 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14635 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 8652 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 14641 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 8653 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 14647 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 8654 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 14653 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 8661 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 14661 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 8670 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 14669 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 8676 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14675 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 8677 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14681 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 8681 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14687 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 8682 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 14693 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 8683 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 14699 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 8687 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14705 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 8688 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14711 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 8693 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 14719 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 8697 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 14727 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 8707 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 14735 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 8716 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 14743 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 8720 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 14751 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 8724 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 14759 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 8731 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 14767 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 8735 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 14775 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 8745 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	PENDING("SUPPRESS");
  }
#line 14788 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 8763 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
#line 14797 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 8772 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14807 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 8778 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14817 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 8789 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 14825 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 8797 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 14836 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 8810 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 14844 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 8818 "parser.y" /* yacc.c:1646  */
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
#line 14859 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 8841 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 14867 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 8851 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 14875 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 8857 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14881 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 8859 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14887 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 8863 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14893 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 8865 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14899 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 8870 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14907 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 8876 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14913 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 8878 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14919 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 8883 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14927 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 8889 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14933 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 8890 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14939 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 8894 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14945 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 8895 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14951 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 8899 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14957 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 8900 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14963 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 8905 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 14971 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 8909 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 14979 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 8919 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 14988 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 8937 "parser.y" /* yacc.c:1646  */
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
#line 15014 "parser.c" /* yacc.c:1646  */
    break;

  case 1343:
#line 8962 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15022 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 8966 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15035 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 8978 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15049 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 8988 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15058 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 8993 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15067 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 8998 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15076 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9003 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15085 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9011 "parser.y" /* yacc.c:1646  */
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
#line 15124 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9054 "parser.y" /* yacc.c:1646  */
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
#line 15168 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9094 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 15182 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9104 "parser.y" /* yacc.c:1646  */
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
#line 15207 "parser.c" /* yacc.c:1646  */
    break;

  case 1360:
#line 9134 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 15217 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9143 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 15227 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9149 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 15237 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9159 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
#line 15247 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9168 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 15257 "parser.c" /* yacc.c:1646  */
    break;

  case 1367:
#line 9184 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15268 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9196 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 15279 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9205 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15285 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9206 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15291 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9211 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 15299 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9215 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15307 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9219 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15315 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9223 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 15323 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9229 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 15329 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9230 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 15335 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9240 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 15343 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9244 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 15351 "parser.c" /* yacc.c:1646  */
    break;

  case 1384:
#line 9261 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15360 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 9276 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15369 "parser.c" /* yacc.c:1646  */
    break;

  case 1393:
#line 9294 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15378 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 9304 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15387 "parser.c" /* yacc.c:1646  */
    break;

  case 1398:
#line 9319 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15396 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 9329 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15405 "parser.c" /* yacc.c:1646  */
    break;

  case 1403:
#line 9346 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15414 "parser.c" /* yacc.c:1646  */
    break;

  case 1405:
#line 9357 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15423 "parser.c" /* yacc.c:1646  */
    break;

  case 1411:
#line 9380 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15432 "parser.c" /* yacc.c:1646  */
    break;

  case 1412:
#line 9389 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15441 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 9406 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15450 "parser.c" /* yacc.c:1646  */
    break;

  case 1417:
#line 9415 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15459 "parser.c" /* yacc.c:1646  */
    break;

  case 1420:
#line 9432 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15468 "parser.c" /* yacc.c:1646  */
    break;

  case 1422:
#line 9442 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15477 "parser.c" /* yacc.c:1646  */
    break;

  case 1423:
#line 9452 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 15485 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 9456 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 15493 "parser.c" /* yacc.c:1646  */
    break;

  case 1425:
#line 9466 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 15501 "parser.c" /* yacc.c:1646  */
    break;

  case 1426:
#line 9473 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 15509 "parser.c" /* yacc.c:1646  */
    break;

  case 1427:
#line 9479 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 15518 "parser.c" /* yacc.c:1646  */
    break;

  case 1428:
#line 9484 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 15526 "parser.c" /* yacc.c:1646  */
    break;

  case 1432:
#line 9497 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 15538 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 9505 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 15544 "parser.c" /* yacc.c:1646  */
    break;

  case 1434:
#line 9506 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 15550 "parser.c" /* yacc.c:1646  */
    break;

  case 1435:
#line 9508 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 15556 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 9509 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 15562 "parser.c" /* yacc.c:1646  */
    break;

  case 1437:
#line 9510 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 15568 "parser.c" /* yacc.c:1646  */
    break;

  case 1438:
#line 9511 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 15574 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 9512 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 15580 "parser.c" /* yacc.c:1646  */
    break;

  case 1440:
#line 9514 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 15586 "parser.c" /* yacc.c:1646  */
    break;

  case 1441:
#line 9515 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 15592 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 9516 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 15598 "parser.c" /* yacc.c:1646  */
    break;

  case 1443:
#line 9517 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 15604 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 9518 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 15610 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 9519 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 15616 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 9521 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 15622 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 9522 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 15628 "parser.c" /* yacc.c:1646  */
    break;

  case 1448:
#line 9523 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 15634 "parser.c" /* yacc.c:1646  */
    break;

  case 1449:
#line 9525 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 15640 "parser.c" /* yacc.c:1646  */
    break;

  case 1450:
#line 9526 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 15646 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 9527 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 15652 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 9528 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 15658 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 9529 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 15664 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 9532 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 15670 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 9533 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 15676 "parser.c" /* yacc.c:1646  */
    break;

  case 1464:
#line 9563 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15684 "parser.c" /* yacc.c:1646  */
    break;

  case 1465:
#line 9567 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15692 "parser.c" /* yacc.c:1646  */
    break;

  case 1469:
#line 9578 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 15698 "parser.c" /* yacc.c:1646  */
    break;

  case 1470:
#line 9579 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 15704 "parser.c" /* yacc.c:1646  */
    break;

  case 1471:
#line 9580 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15710 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 9584 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 15716 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 9585 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 15722 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 9586 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15728 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 9591 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 15736 "parser.c" /* yacc.c:1646  */
    break;

  case 1476:
#line 9594 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15742 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 9598 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15748 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 9599 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 15754 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 9600 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15760 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 9603 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 15766 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 9604 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15772 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 9615 "parser.y" /* yacc.c:1646  */
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
#line 15788 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 9627 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15801 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 9636 "parser.y" /* yacc.c:1646  */
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
#line 15817 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 9648 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15830 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 9657 "parser.y" /* yacc.c:1646  */
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
#line 15846 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 9669 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15859 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 9683 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15865 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 9685 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 15871 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 9690 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 15879 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 9698 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 15885 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 9705 "parser.y" /* yacc.c:1646  */
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
#line 15904 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 9725 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15912 "parser.c" /* yacc.c:1646  */
    break;

  case 1494:
#line 9729 "parser.y" /* yacc.c:1646  */
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
#line 15934 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 9750 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15947 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 9791 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15960 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 9804 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15966 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 9806 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15972 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 9810 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15978 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 9816 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15984 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 9818 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15990 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 9823 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 16003 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 9837 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16011 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 9844 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 16021 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 9854 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16027 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 9855 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16033 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 9860 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16042 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 9868 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16051 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 9876 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16059 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 9880 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16067 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 9887 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16077 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 9903 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16090 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 9917 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 16104 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 9934 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16112 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 9938 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16120 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 9947 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16128 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 9954 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16136 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 9958 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16144 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 9969 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16152 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 9973 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16160 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 9977 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16168 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 9981 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 16176 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 9985 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16184 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 9989 "parser.y" /* yacc.c:1646  */
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
#line 16206 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10010 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16214 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10014 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16222 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10031 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16230 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10035 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16238 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10039 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16246 "parser.c" /* yacc.c:1646  */
    break;

  case 1562:
#line 10086 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 16254 "parser.c" /* yacc.c:1646  */
    break;

  case 1570:
#line 10110 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16260 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10114 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 16266 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10118 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16272 "parser.c" /* yacc.c:1646  */
    break;

  case 1573:
#line 10119 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16278 "parser.c" /* yacc.c:1646  */
    break;

  case 1574:
#line 10123 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16284 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 10128 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16295 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10135 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16306 "parser.c" /* yacc.c:1646  */
    break;

  case 1577:
#line 10142 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16317 "parser.c" /* yacc.c:1646  */
    break;

  case 1578:
#line 10149 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16328 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10159 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 16336 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10166 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16350 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10176 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16364 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10186 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16378 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10196 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16392 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10209 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16400 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10213 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16409 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 10221 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 16418 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 10229 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 16426 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 10233 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 16435 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 10243 "parser.y" /* yacc.c:1646  */
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
#line 16450 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 10257 "parser.y" /* yacc.c:1646  */
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
#line 16474 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 10280 "parser.y" /* yacc.c:1646  */
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
#line 16497 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 10302 "parser.y" /* yacc.c:1646  */
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
#line 16517 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 10317 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16523 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 10318 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16529 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 10319 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16535 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 10320 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 16541 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 10321 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 16547 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 10322 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 16553 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 10327 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16561 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 10331 "parser.y" /* yacc.c:1646  */
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
#line 16579 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 10348 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16587 "parser.c" /* yacc.c:1646  */
    break;

  case 1602:
#line 10352 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16595 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 10358 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16601 "parser.c" /* yacc.c:1646  */
    break;

  case 1604:
#line 10359 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16607 "parser.c" /* yacc.c:1646  */
    break;

  case 1605:
#line 10360 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16613 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 10361 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16619 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 10362 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 16625 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 10363 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 16631 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 10364 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 16637 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 10371 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 16645 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 10375 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 16653 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 10379 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16661 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 10383 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16669 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 10387 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 16677 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 10391 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16685 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 10395 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16693 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 10399 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16701 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 10403 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16709 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 10407 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16717 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 10411 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 16725 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 10415 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 16733 "parser.c" /* yacc.c:1646  */
    break;

  case 1631:
#line 10440 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16741 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 10444 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 16749 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 10448 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16757 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 10455 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16765 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 10459 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16773 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 10463 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16781 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 10470 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 16792 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 10477 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 16803 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 10484 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 16814 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 10494 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 16825 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 10501 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 16836 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 10511 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 16847 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 10518 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 16858 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 10528 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 16866 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 10532 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 16880 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 10545 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 16888 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 10549 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 16902 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 10563 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 16910 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 10571 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 16916 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 10572 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16922 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 10576 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 16928 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 10577 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16934 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 10581 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16940 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 10582 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16946 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 10587 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16954 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 10591 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16962 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 10598 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16970 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 10602 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16978 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 10609 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 16984 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 10610 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16990 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 10611 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 16996 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 10615 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17002 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 10616 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 17008 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 10620 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 17014 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 10621 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17020 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 10622 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17026 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 10627 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17034 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 10631 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 17047 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 10643 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 17056 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 10648 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 17065 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 10656 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 17073 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 10660 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 17081 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 10664 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 17089 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 10668 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 17097 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 10672 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 17105 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 10676 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 17113 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 10680 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 17121 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 10684 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 17129 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 10690 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17135 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 10691 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17141 "parser.c" /* yacc.c:1646  */
    break;


#line 17145 "parser.c" /* yacc.c:1646  */
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
#line 10862 "parser.y" /* yacc.c:1906  */

