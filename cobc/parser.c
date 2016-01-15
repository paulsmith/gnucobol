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
static unsigned int		check_on_off_duplicate;
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
check_repeated (const char *clause, const unsigned int bitval, unsigned int *already_seen)
{
	if (*already_seen & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		*already_seen |= bitval;
	}
}

static void
check_not_highlight_and_lowlight (const int flags, const int flag_to_set)
{	
	if (flag_to_set == COB_SCREEN_LOWLIGHT
	    && (flags & COB_SCREEN_HIGHLIGHT)) {
		cb_error (_("Cannot specify both HIGHLIGHT and LOWLIGHT"));
	} else if (flag_to_set == COB_SCREEN_HIGHLIGHT
		   && (flags & COB_SCREEN_LOWLIGHT)) {
		cb_error (_("Cannot specify both HIGHLIGHT and LOWLIGHT"));
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
		check_not_highlight_and_lowlight (current_field->screen_flag,
						  bitval);
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
	check_not_highlight_and_lowlight (current_statement->attr_ptr->dispattrs,
					  attrib);
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
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
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

static void
check_not_88_level (cb_tree x)
{
	struct cb_field	*f;

	if (x == cb_error_node || x->tag != CB_TAG_REFERENCE) {
		return;
	}

	f = CB_FIELD (cb_ref (x));
	
	if (f != (struct cb_field *) cb_error_node && f->level == 88) {
		cb_error (_("88-level cannot be used here"));
	}
}
 

#line 812 "parser.c" /* yacc.c:339  */

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

#line 1381 "parser.c" /* yacc.c:358  */

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
#define YYLAST   8567

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  517
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  821
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1917
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2755

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
       0,  1396,  1396,  1396,  1428,  1429,  1433,  1434,  1438,  1439,
    1443,  1443,  1466,  1473,  1480,  1486,  1487,  1488,  1492,  1493,
    1497,  1521,  1522,  1526,  1560,  1566,  1578,  1552,  1588,  1587,
    1625,  1657,  1658,  1662,  1663,  1666,  1667,  1671,  1680,  1689,
    1690,  1694,  1698,  1707,  1708,  1716,  1717,  1727,  1728,  1732,
    1733,  1734,  1735,  1736,  1743,  1742,  1755,  1756,  1759,  1760,
    1774,  1773,  1783,  1784,  1785,  1786,  1790,  1791,  1795,  1796,
    1797,  1798,  1802,  1810,  1817,  1824,  1835,  1839,  1843,  1847,
    1854,  1855,  1862,  1861,  1872,  1873,  1874,  1881,  1882,  1886,
    1890,  1902,  1906,  1907,  1912,  1915,  1922,  1927,  1938,  1951,
    1952,  1960,  1961,  1965,  1966,  1967,  1968,  1969,  1970,  1971,
    1972,  1973,  1974,  1975,  1976,  1984,  1983,  2011,  2021,  2034,
    2042,  2045,  2046,  2050,  2057,  2072,  2093,  2092,  2116,  2122,
    2128,  2134,  2140,  2146,  2156,  2160,  2167,  2171,  2176,  2175,
    2186,  2190,  2197,  2198,  2199,  2200,  2201,  2202,  2206,  2207,
    2214,  2229,  2232,  2239,  2247,  2251,  2262,  2282,  2290,  2301,
    2302,  2308,  2329,  2330,  2334,  2338,  2359,  2382,  2464,  2467,
    2476,  2495,  2511,  2529,  2547,  2564,  2580,  2581,  2588,  2589,
    2597,  2598,  2608,  2609,  2614,  2613,  2634,  2644,  2645,  2649,
    2650,  2651,  2652,  2653,  2654,  2655,  2656,  2657,  2658,  2659,
    2660,  2661,  2668,  2674,  2684,  2697,  2710,  2726,  2727,  2728,
    2729,  2732,  2733,  2739,  2740,  2744,  2748,  2749,  2754,  2757,
    2758,  2765,  2773,  2774,  2775,  2782,  2806,  2808,  2813,  2823,
    2834,  2841,  2843,  2844,  2850,  2850,  2857,  2862,  2867,  2874,
    2875,  2876,  2880,  2891,  2892,  2896,  2901,  2906,  2911,  2922,
    2933,  2943,  2951,  2952,  2953,  2959,  2970,  2977,  2978,  2984,
    2992,  2993,  2994,  3000,  3001,  3002,  3009,  3010,  3014,  3015,
    3021,  3049,  3050,  3051,  3052,  3059,  3058,  3074,  3075,  3079,
    3082,  3083,  3089,  3090,  3098,  3099,  3107,  3108,  3112,  3133,
    3132,  3149,  3156,  3160,  3166,  3167,  3171,  3181,  3196,  3197,
    3198,  3199,  3200,  3201,  3202,  3203,  3204,  3211,  3218,  3218,
    3218,  3224,  3244,  3278,  3309,  3310,  3317,  3318,  3322,  3323,
    3330,  3341,  3346,  3357,  3358,  3362,  3363,  3369,  3380,  3398,
    3399,  3403,  3404,  3405,  3409,  3416,  3423,  3432,  3444,  3496,
    3511,  3512,  3516,  3526,  3565,  3567,  3566,  3582,  3585,  3585,
    3602,  3603,  3605,  3609,  3611,  3610,  3645,  3658,  3666,  3671,
    3677,  3686,  3696,  3699,  3711,  3712,  3713,  3714,  3718,  3722,
    3726,  3730,  3734,  3738,  3742,  3746,  3750,  3754,  3758,  3762,
    3766,  3777,  3778,  3782,  3783,  3787,  3788,  3789,  3793,  3794,
    3798,  3824,  3828,  3837,  3841,  3850,  3851,  3852,  3853,  3854,
    3855,  3856,  3857,  3858,  3859,  3860,  3861,  3862,  3863,  3870,
    3894,  3922,  3925,  3934,  3959,  3970,  3971,  3975,  3979,  3983,
    3987,  3991,  3995,  3999,  4003,  4007,  4011,  4015,  4019,  4023,
    4028,  4033,  4037,  4041,  4049,  4053,  4057,  4065,  4069,  4073,
    4077,  4081,  4085,  4089,  4093,  4097,  4105,  4113,  4117,  4121,
    4125,  4129,  4133,  4141,  4142,  4146,  4147,  4153,  4159,  4171,
    4189,  4190,  4199,  4231,  4261,  4262,  4266,  4267,  4270,  4271,
    4277,  4278,  4285,  4286,  4293,  4317,  4318,  4335,  4336,  4339,
    4340,  4347,  4348,  4353,  4364,  4375,  4386,  4397,  4426,  4425,
    4434,  4435,  4439,  4440,  4443,  4444,  4457,  4470,  4491,  4500,
    4514,  4516,  4515,  4535,  4537,  4536,  4552,  4554,  4553,  4562,
    4563,  4570,  4569,  4582,  4583,  4584,  4591,  4596,  4600,  4601,
    4607,  4614,  4618,  4619,  4625,  4662,  4666,  4671,  4677,  4678,
    4683,  4684,  4685,  4686,  4687,  4691,  4698,  4705,  4712,  4719,
    4725,  4726,  4731,  4730,  4737,  4738,  4742,  4743,  4744,  4745,
    4746,  4747,  4748,  4749,  4750,  4751,  4752,  4753,  4754,  4755,
    4756,  4757,  4761,  4768,  4769,  4770,  4771,  4772,  4773,  4774,
    4777,  4778,  4779,  4782,  4783,  4787,  4794,  4800,  4801,  4805,
    4806,  4810,  4817,  4821,  4828,  4829,  4833,  4840,  4841,  4845,
    4846,  4850,  4851,  4852,  4856,  4857,  4861,  4862,  4866,  4873,
    4880,  4888,  4890,  4889,  4910,  4911,  4915,  4916,  4920,  4922,
    4921,  4981,  4999,  5000,  5004,  5008,  5012,  5016,  5020,  5024,
    5028,  5032,  5036,  5040,  5044,  5049,  5054,  5059,  5063,  5067,
    5071,  5075,  5080,  5084,  5088,  5093,  5098,  5103,  5108,  5109,
    5110,  5111,  5112,  5113,  5114,  5115,  5116,  5125,  5130,  5141,
    5142,  5146,  5147,  5152,  5155,  5159,  5167,  5170,  5174,  5182,
    5193,  5201,  5203,  5213,  5202,  5240,  5240,  5273,  5277,  5276,
    5290,  5289,  5309,  5310,  5315,  5330,  5332,  5336,  5346,  5348,
    5356,  5364,  5372,  5401,  5434,  5437,  5450,  5455,  5482,  5484,
    5483,  5520,  5521,  5525,  5526,  5527,  5544,  5545,  5556,  5555,
    5605,  5606,  5610,  5658,  5671,  5674,  5693,  5698,  5692,  5711,
    5711,  5741,  5748,  5749,  5750,  5751,  5752,  5753,  5754,  5755,
    5756,  5757,  5758,  5759,  5760,  5761,  5762,  5763,  5764,  5765,
    5766,  5767,  5768,  5769,  5770,  5771,  5772,  5773,  5774,  5775,
    5776,  5777,  5778,  5779,  5780,  5781,  5782,  5783,  5784,  5785,
    5786,  5787,  5788,  5789,  5790,  5791,  5792,  5793,  5794,  5795,
    5796,  5797,  5811,  5823,  5822,  5838,  5844,  5848,  5852,  5857,
    5862,  5867,  5872,  5876,  5880,  5884,  5888,  5893,  5897,  5901,
    5905,  5909,  5913,  5917,  5924,  5925,  5932,  5933,  5937,  5938,
    5942,  5943,  5944,  5945,  5946,  5950,  5954,  5955,  5958,  5959,
    5962,  5963,  5969,  5970,  5974,  5975,  5979,  5983,  5989,  5993,
    5997,  6001,  6005,  6009,  6013,  6017,  6021,  6025,  6029,  6033,
    6037,  6041,  6045,  6049,  6053,  6057,  6061,  6067,  6071,  6075,
    6079,  6083,  6087,  6091,  6098,  6099,  6103,  6107,  6125,  6124,
    6133,  6137,  6141,  6147,  6148,  6155,  6159,  6170,  6169,  6178,
    6182,  6194,  6195,  6203,  6202,  6211,  6212,  6216,  6222,  6222,
    6229,  6228,  6238,  6258,  6262,  6267,  6272,  6293,  6297,  6296,
    6313,  6314,  6319,  6327,  6351,  6353,  6357,  6366,  6379,  6382,
    6386,  6390,  6413,  6414,  6418,  6419,  6424,  6427,  6432,  6441,
    6445,  6453,  6457,  6468,  6467,  6475,  6479,  6490,  6489,  6497,
    6502,  6510,  6511,  6512,  6513,  6514,  6522,  6521,  6530,  6537,
    6541,  6551,  6562,  6580,  6579,  6588,  6592,  6596,  6601,  6609,
    6613,  6624,  6623,  6633,  6637,  6641,  6645,  6649,  6653,  6654,
    6663,  6665,  6664,  6672,  6681,  6688,  6692,  6696,  6700,  6710,
    6712,  6716,  6717,  6720,  6722,  6729,  6730,  6734,  6735,  6740,
    6744,  6748,  6752,  6756,  6760,  6764,  6768,  6772,  6776,  6780,
    6784,  6788,  6792,  6796,  6800,  6804,  6811,  6815,  6826,  6825,
    6834,  6838,  6842,  6846,  6850,  6857,  6861,  6872,  6871,  6880,
    6899,  6898,  6922,  6930,  6931,  6936,  6947,  6958,  6972,  6976,
    6983,  6984,  6989,  6998,  7007,  7012,  7021,  7022,  7027,  7089,
    7090,  7091,  7095,  7096,  7100,  7104,  7115,  7114,  7126,  7127,
    7148,  7162,  7184,  7206,  7226,  7249,  7250,  7258,  7257,  7266,
    7277,  7276,  7286,  7293,  7292,  7305,  7314,  7318,  7329,  7345,
    7344,  7353,  7357,  7361,  7368,  7372,  7383,  7382,  7390,  7398,
    7399,  7403,  7404,  7405,  7410,  7413,  7420,  7424,  7432,  7439,
    7440,  7441,  7442,  7443,  7444,  7445,  7450,  7453,  7463,  7462,
    7471,  7477,  7489,  7488,  7497,  7501,  7505,  7509,  7516,  7517,
    7518,  7519,  7526,  7525,  7539,  7549,  7558,  7559,  7563,  7564,
    7565,  7566,  7567,  7568,  7572,  7573,  7577,  7582,  7589,  7590,
    7591,  7592,  7593,  7597,  7625,  7628,  7635,  7639,  7649,  7648,
    7661,  7660,  7668,  7672,  7683,  7682,  7691,  7695,  7702,  7706,
    7717,  7716,  7724,  7745,  7769,  7770,  7771,  7772,  7776,  7777,
    7781,  7782,  7783,  7784,  7796,  7795,  7806,  7812,  7811,  7822,
    7830,  7838,  7845,  7849,  7862,  7869,  7881,  7884,  7889,  7893,
    7904,  7911,  7912,  7916,  7917,  7920,  7921,  7926,  7937,  7936,
    7945,  7972,  7973,  7978,  7981,  7985,  7989,  7993,  7997,  8001,
    8008,  8009,  8013,  8014,  8018,  8022,  8032,  8043,  8042,  8050,
    8060,  8071,  8070,  8079,  8086,  8090,  8101,  8100,  8112,  8121,
    8124,  8128,  8135,  8139,  8149,  8161,  8160,  8169,  8173,  8182,
    8183,  8188,  8191,  8199,  8203,  8210,  8218,  8222,  8233,  8232,
    8246,  8247,  8248,  8249,  8250,  8251,  8255,  8256,  8260,  8261,
    8267,  8276,  8283,  8284,  8288,  8292,  8296,  8302,  8308,  8312,
    8316,  8320,  8329,  8333,  8342,  8351,  8352,  8356,  8365,  8366,
    8370,  8374,  8385,  8384,  8393,  8392,  8423,  8426,  8446,  8447,
    8450,  8451,  8459,  8460,  8465,  8470,  8480,  8496,  8501,  8511,
    8528,  8527,  8537,  8550,  8553,  8561,  8564,  8569,  8574,  8582,
    8583,  8584,  8585,  8586,  8587,  8591,  8599,  8600,  8604,  8608,
    8619,  8618,  8628,  8641,  8644,  8648,  8656,  8668,  8671,  8678,
    8679,  8680,  8681,  8688,  8687,  8696,  8703,  8704,  8708,  8709,
    8710,  8714,  8715,  8719,  8723,  8734,  8733,  8742,  8746,  8750,
    8757,  8761,  8771,  8782,  8783,  8790,  8789,  8798,  8804,  8816,
    8815,  8823,  8837,  8836,  8844,  8857,  8859,  8860,  8868,  8867,
    8876,  8884,  8885,  8890,  8891,  8896,  8903,  8904,  8909,  8916,
    8917,  8921,  8922,  8926,  8927,  8931,  8935,  8946,  8945,  8954,
    8955,  8956,  8957,  8958,  8962,  8989,  8992,  9004,  9014,  9019,
    9024,  9029,  9037,  9075,  9076,  9080,  9120,  9130,  9153,  9154,
    9155,  9156,  9160,  9169,  9175,  9185,  9194,  9203,  9204,  9211,
    9210,  9222,  9232,  9233,  9238,  9241,  9245,  9249,  9256,  9257,
    9261,  9262,  9266,  9270,  9282,  9285,  9286,  9295,  9296,  9300,
    9301,  9310,  9311,  9315,  9318,  9319,  9328,  9329,  9340,  9343,
    9344,  9353,  9354,  9366,  9369,  9371,  9381,  9382,  9394,  9395,
    9399,  9400,  9401,  9405,  9414,  9425,  9426,  9427,  9431,  9440,
    9451,  9456,  9457,  9466,  9467,  9478,  9482,  9492,  9499,  9506,
    9506,  9517,  9518,  9519,  9523,  9532,  9533,  9535,  9536,  9537,
    9538,  9539,  9541,  9542,  9543,  9544,  9545,  9546,  9548,  9549,
    9550,  9552,  9553,  9554,  9555,  9556,  9559,  9560,  9564,  9565,
    9569,  9570,  9574,  9575,  9579,  9583,  9589,  9593,  9599,  9600,
    9601,  9605,  9606,  9607,  9611,  9612,  9613,  9617,  9621,  9625,
    9626,  9627,  9630,  9631,  9641,  9653,  9662,  9674,  9683,  9695,
    9710,  9711,  9716,  9725,  9731,  9751,  9755,  9776,  9817,  9831,
    9832,  9837,  9843,  9844,  9849,  9861,  9862,  9863,  9870,  9881,
    9882,  9886,  9894,  9902,  9906,  9913,  9922,  9923,  9929,  9943,
    9960,  9964,  9971,  9972,  9973,  9980,  9984,  9991,  9992,  9993,
    9994,  9995,  9999, 10003, 10007, 10011, 10015, 10036, 10040, 10047,
   10048, 10049, 10053, 10054, 10055, 10056, 10057, 10061, 10065, 10072,
   10073, 10077, 10078, 10082, 10083, 10087, 10088, 10099, 10103, 10107,
   10111, 10112, 10116, 10120, 10121, 10128, 10132, 10136, 10140, 10144,
   10148, 10149, 10155, 10159, 10163, 10164, 10168, 10172, 10179, 10186,
   10193, 10203, 10210, 10220, 10230, 10240, 10253, 10257, 10265, 10273,
   10277, 10287, 10301, 10324, 10346, 10362, 10363, 10364, 10365, 10366,
   10367, 10371, 10375, 10392, 10396, 10403, 10404, 10405, 10406, 10407,
   10408, 10409, 10415, 10419, 10423, 10427, 10431, 10435, 10439, 10443,
   10447, 10451, 10455, 10459, 10466, 10467, 10471, 10472, 10473, 10477,
   10478, 10479, 10480, 10484, 10488, 10492, 10499, 10503, 10507, 10514,
   10521, 10528, 10538, 10545, 10555, 10562, 10572, 10576, 10589, 10593,
   10608, 10616, 10617, 10621, 10622, 10626, 10627, 10632, 10635, 10643,
   10646, 10653, 10655, 10656, 10660, 10661, 10665, 10666, 10667, 10672,
   10675, 10688, 10692, 10700, 10704, 10708, 10712, 10716, 10720, 10724,
   10728, 10735, 10736, 10742, 10743, 10744, 10745, 10746, 10747, 10748,
   10749, 10750, 10751, 10752, 10753, 10754, 10755, 10756, 10757, 10758,
   10759, 10760, 10761, 10762, 10763, 10764, 10765, 10766, 10767, 10768,
   10769, 10770, 10771, 10772, 10773, 10774, 10775, 10776, 10777, 10778,
   10779, 10780, 10781, 10782, 10783, 10784, 10785, 10786, 10787, 10788,
   10789, 10790, 10791, 10792, 10793, 10794, 10795, 10796, 10797, 10798,
   10799, 10800, 10801, 10802, 10803, 10804, 10805, 10806, 10807, 10808,
   10809, 10810, 10811, 10818, 10818, 10819, 10819, 10820, 10820, 10821,
   10821, 10822, 10822, 10823, 10823, 10824, 10824, 10825, 10825, 10826,
   10826, 10827, 10827, 10828, 10828, 10829, 10829, 10830, 10830, 10831,
   10831, 10832, 10832, 10833, 10833, 10834, 10834, 10835, 10835, 10835,
   10836, 10836, 10837, 10837, 10838, 10838, 10839, 10839, 10840, 10840,
   10840, 10841, 10841, 10842, 10842, 10842, 10843, 10843, 10843, 10844,
   10844, 10844, 10845, 10845, 10846, 10846, 10847, 10847, 10848, 10848,
   10848, 10849, 10849, 10850, 10850, 10851, 10851, 10851, 10851, 10852,
   10852, 10853, 10853, 10854, 10854, 10855, 10855, 10856, 10856, 10857,
   10857, 10858, 10858, 10859, 10859, 10859, 10860, 10860, 10861, 10861,
   10862, 10862, 10863, 10863, 10864, 10864, 10865, 10865, 10866, 10866,
   10867, 10867, 10867, 10868, 10868, 10869, 10869, 10870, 10870, 10874,
   10874, 10875, 10875, 10876, 10876, 10877, 10877, 10878, 10878, 10879,
   10879, 10880, 10880, 10881, 10881, 10882, 10882, 10883, 10883, 10884,
   10884, 10885, 10885, 10886, 10886, 10887, 10887, 10888, 10888, 10891,
   10892, 10893, 10897, 10897, 10898, 10898, 10899, 10899, 10900, 10900,
   10901, 10901, 10902, 10902, 10903, 10903, 10904, 10904
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
  "special_name_mnemonic_on_off", "on_off_clauses", "on_off_clauses_1",
  "alphabet_name_clause", "@11", "alphabet_definition",
  "alphabet_literal_list", "alphabet_literal", "@12",
  "alphabet_also_sequence", "alphabet_lits", "space_or_zero",
  "symbolic_characters_clause", "sym_in_word", "symbolic_collection",
  "symbolic_chars_list", "symbolic_chars_phrase", "char_list",
  "integer_list", "class_name_clause", "class_item_list", "class_item",
  "locale_clause", "currency_sign_clause", "with_pic_symbol",
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

#define YYPACT_NINF -2345

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2345)))

#define YYTABLE_NINF -1868

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2345,   230,   -10, -2345,  -213,   318, -2345,   -10, -2345, -2345,
     532, -2345, -2345,   532,   532,   -60,   -60, -2345,   757, -2345,
     674,   446,   771, -2345, -2345,   939,   939,   512,   577, -2345,
   -2345,    18,   532,   -60, -2345, -2345,   756,   816, -2345, -2345,
     832,  2204,   -60, -2345, -2345, -2345,   446,   870, -2345, -2345,
     -59, -2345,   574,   574,   727,   927,  1108,  1108,  1108,   964,
     574,   996,   921,   930,  1108,   956,   973,  1380, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345,  1084, -2345, -2345, -2345, -2345,
    1232, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
    1294,  1026,    18, -2345, -2345,  1061,    54, -2345, -2345,  1108,
    1108, -2345,  1108,  1004,  1439,  1004,  1077,  1108,  1108, -2345,
   -2345,  1004, -2345, -2345, -2345,  1020,   923,  1081, -2345, -2345,
    1032, -2345,  1090, -2345, -2345, -2345, -2345,  -165, -2345, -2345,
   -2345,  1211, -2345,  1108,  1073,  1004,  1304,   -20, -2345, -2345,
   -2345, -2345, -2345,  1307,  1103,   208,  1391, -2345,  1071, -2345,
    1020, -2345,   109, -2345, -2345, -2345, -2345, -2345, -2345,  1169,
     412,  1108,     8, -2345, -2345, -2345,   588, -2345, -2345, -2345,
     969, -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1073, -2345,
    1151, -2345,  -162, -2345, -2345,  1004, -2345,  1204, -2345,  1217,
    1214,  1566,  1108, -2345, -2345, -2345,   829, -2345, -2345, -2345,
   -2345, -2345,   416,  1585,  1108,    75, -2345,    87, -2345, -2345,
       1, -2345, -2345, -2345, -2345,  1393,   412, -2345,  1415,   574,
     574, -2345,  1169,  1200,   111,   426, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,   663,
   -2345,   115, -2345,  1073, -2345, -2345,  1332, -2345, -2345, -2345,
    1108,  1262,  1411, -2345, -2345, -2345, -2345,   875,  1108,  1161,
    1442,   -13, -2345,  1647,   618,  1219, -2345, -2345,  1222,  1571,
   -2345,  1393, -2345,   574, -2345, -2345, -2345, -2345, -2345, -2345,
    1224,  1367, -2345,   574, -2345,   776, -2345,   190, -2345, -2345,
   -2345, -2345, -2345,   663, -2345,  1427,  1411, -2345, -2345, -2345,
     425, -2345, -2345, -2345,  1428, -2345, -2345, -2345, -2345, -2345,
    1413, -2345, -2345, -2345, -2345, -2345,  1228, -2345, -2345, -2345,
    1668,  1590,  1243, -2345, -2345,   663, -2345, -2345,    23, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1259, -2345,
    1513,  1581,  1246, -2345,  1692, -2345, -2345, -2345, -2345,  2414,
   -2345,  1625, -2345,  1206,  1260,  1320, -2345,   663,  1446,  1366,
    -236,  1319, -2345,  1321,  1108,  1670,   117,   -52,   802, -2345,
    1221, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
    1299, -2345,  1465, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345,  1691,  1108, -2345,  1206, -2345,  1206, -2345, -2345,  1275,
     486, -2345, -2345,  1108, -2345,  1494, -2345, -2345,    98, -2345,
   -2345,   745,  1108,  1108, -2345,  1108,  1108, -2345,  1668, -2345,
     162,  1108,  1446, -2345,  1328,  1225,  1206, -2345,  1403, -2345,
   -2345, -2345, -2345,  1227, -2345,  1231,    71,    39,  1108, -2345,
   -2345,  1120, -2345, -2345,  -117,  1322,  1004,  1004, -2345,  1423,
    1423,  1430, -2345,  1004,  1108, -2345, -2345, -2345,  1411, -2345,
    1349,  1485, -2345, -2345,  1292, -2345, -2345, -2345, -2345, -2345,
    1004, -2345, -2345,   380,   380,  1742,   380, -2345, -2345,   380,
     405, -2345, -2345, -2345, -2345, -2345,  -157, -2345, -2345, -2345,
   -2345, -2345, -2345,   733, -2345,  1297,  1353,  1498,   775,  1303,
    6528, -2345,  1251, -2345, -2345,    -5, -2345, -2345, -2345, -2345,
    1228, -2345, -2345, -2345, -2345, -2345,  1108,  1004,  1247, -2345,
    1247, -2345, -2345,  1306,  1370,  1394, -2345,  1314, -2345,  1316,
   -2345,  1683, -2345,  1687, -2345,  1254, -2345,  1649,  1340, -2345,
   -2345,  1004,  1004, -2345,   482, -2345, -2345,  1231, -2345,  1325,
    1379,  1386, -2345, -2345, -2345,   963,  1625,  1108,  1216,  1216,
    1108,    14,  1446,  1108,  1757, -2345,  1474, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345,   574,    60, -2345,
    1278, -2345,  1004, -2345,  1476, -2345, -2345,  1231, -2345,  1329,
    1392, -2345,  6741,   635,  1586,  1411,  1283,  1108,  1757,  1284,
     581,  -117,  1411,  1287,  1108, -2345, -2345, -2345,   -42,   574,
   -2345, -2345, -2345,    55,   -57, -2345,  1231, -2345,  1338,   763,
     -11, -2345, -2345,  -203,  -170,   368,   591,   666,  1289, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345,  1409, -2345,    94, -2345,
   -2345, -2345, -2345,  1004,  1004,  1570, -2345, -2345, -2345,   -61,
   -2345, -2345, -2345,  1108,   510, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345,   955,    31, -2345,  1290, -2345,  1136, -2345,
    1354, -2345, -2345, -2345, -2345,  1284, -2345, -2345, -2345, -2345,
    1553,    89,  1591,  1302,  1108, -2345, -2345,  1108, -2345,  1177,
   -2345, -2345, -2345,  1233, -2345, -2345, -2345, -2345, -2345, -2345,
    1689, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1298, -2345, -2345,
    1761,  1364, -2345,  1352,  1373, -2345, -2345, -2345, -2345,  7002,
     738,  1795, -2345,  1419,  1419, -2345,  1177,  1516, -2345,  1215,
    1215, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1378,
   -2345,  1411,    85, -2345, -2345, -2345,  1411, -2345, -2345,  1418,
   -2345,   413,   413, -2345, -2345,  1481,  1327,    29,  2643,  3830,
   -2345,  1591,  1638,  1411,  1396,  7664,  1390, -2345,  1004, -2345,
     738, -2345,  1414,  1601, -2345,  1670, -2345, -2345, -2345, -2345,
    1215,  1404, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345,  1177, -2345, -2345, -2345, -2345,
      86,  1380, -2345,   737, -2345, -2345, -2345, -2345,  1355, -2345,
    6269, -2345, -2345,  1327,  1406, -2345, -2345,  1484,  4149, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,   -45, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345,  1463, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
     874, -2345, -2345,  1530, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345,  1360,  1411,  1364, -2345, -2345,  1755, -2345, -2345, -2345,
    1405,  1407,  1408,  2711,   -20,   -20,  1410,  1416,  1420, -2345,
    1424,   -20, -2345, -2345, -2345,  7764,  7664,  7764,  1425, -2345,
    1408, -2345,    67,   900,   697, -2345,  1701, -2345, -2345, -2345,
   -2345, -2345,  1378, -2345,  1426,  1429,  1431,  7664, -2345, -2345,
    -235, -2345,   738, -2345, -2345, -2345, -2345, -2345,  -117,  -117,
   -2345, -2345, -2345, -2345,  1685, -2345, -2345,  1354,  1411, -2345,
   -2345,  1422, -2345,  1434, -2345,    95,    95,  1372,  1438, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
    -115,  4547,  7664,   417,   558,   440,  1206,   686,   679,  5690,
    5823,  1622,  -220,   636,   686,  1004,  1433, -2345, -2345,  5823,
   -2345, -2345,   686,  1355,  1154,  1004,  4840,  5823, -2345,   860,
    3363,  1206,  1004,  1206,  1004,    64,   477,  1004,  1206, -2345,
   -2345, -2345, -2345, -2345, -2345,  4993,  5118, -2345, -2345,  1355,
      69,  1004,  1206,  1004,  1004, -2345, -2345,  1658,  1574, -2345,
    7664,  7664,  7006, -2345, -2345,  1378, -2345,  1377,  1398,  7664,
    7664,  7664,  2711,  1399, -2345,   866, -2345,  2711, -2345, -2345,
   -2345, -2345,  7664,  7187,  7664,  7664,  7664,  7664,  7664,  7664,
   -2345,  2711,  7664,   900,  1491, -2345,  1445, -2345, -2345, -2345,
    1875,  1380, -2345,   409, -2345, -2345, -2345, -2345,   188, -2345,
    -204,   576,   275, -2345, -2345, -2345,  1778,   642,  1714,  1516,
    1004,  2711, -2345,  1780, -2345,  4965, -2345, -2345, -2345, -2345,
   -2345,   153,   248, -2345,   417, -2345,  1462, -2345,   -20, -2345,
   -2345, -2345, -2345,  1781,  2650, -2345,   440, -2345, -2345,  1206,
     696,  1516,  1785,   554, -2345,  1531, -2345, -2345,  1352,  1378,
    1206,  1786,  1366,  1052,  1787,  5260, -2345,  5404,    50,  1059,
    1066,  1790,   644,  1432, -2345, -2345, -2345,  1784,    53, -2345,
   -2345, -2345,  4563, -2345, -2345,  1822,   -45, -2345, -2345, -2345,
     686, -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1482, -2345,
   -2345,   562,  1355, -2345, -2345,    56, -2345, -2345, -2345, -2345,
   -2345, -2345,  1464,  5823, -2345,  1479,  1791,  1884, -2345, -2345,
   -2345, -2345,   860,  1528, -2345,  1487, -2345,  7909,    20,   828,
    1489,  1490, -2345,   889, -2345,  1495,  1794,   912, -2345,  1745,
   -2345,  1798,  1366,  1799,  1745,  1004,  1797,  1443, -2345,  1149,
   -2345, -2345, -2345, -2345, -2345, -2345,  1678, -2345,   686, -2345,
     -85, -2345,    70,  1917, -2345,    72, -2345,  1804,    38,   -27,
    1905,  1808,  1940, -2345, -2345,  1004,  1811,  5537,  1355, -2345,
   -2345,   718, -2345, -2345, -2345, -2345,  3583, -2345,  1762, -2345,
    1256,  1812,  1849,  1813,  1745, -2345, -2345, -2345,  1004,  1746,
     186,    81,   993,  1515,   164,  1520, -2345,   268, -2345, -2345,
     283,  1521,  1522,  1523,   274, -2345,  1378, -2345,  1532, -2345,
   -2345,   286,  1533,   993, -2345,   972,   697,   697, -2345, -2345,
   -2345,   999,  1537,   352,  1540,  1108, -2345,  -117,  1866,  1536,
     717,  6914, -2345,  1108,  1580,  1680, -2345, -2345,  1874, -2345,
   -2345,   179,  1801, -2345,   792,  1511,   105,  1544, -2345,  1378,
   -2345, -2345, -2345,  5922,  1796, -2345,  1776, -2345,  1624, -2345,
    1666,  1751, -2345, -2345, -2345,  1432, -2345,   696, -2345, -2345,
   -2345,   -34,   449,  1004, -2345, -2345, -2345, -2345, -2345,  7664,
    1738, -2345,  1390, -2345,  1206, -2345, -2345, -2345,  1783, -2345,
   -2345, -2345,  5823, -2345,  1716,   106,  1717,  1676,  1527,  1853,
    1853,  1853,  1853, -2345, -2345,  5823,  5922, -2345, -2345, -2345,
   -2345,  -220,   189, -2345,  1518, -2345,  1519, -2345, -2345, -2345,
   -2345,  1433, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345,  4237, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345,    -2, -2345,  1892,  1288,  1846, -2345,
    1149,    68, -2345, -2345,  1659, -2345, -2345,    63,  7664, -2345,
    1579,   686, -2345, -2345,  5922,  1528,  1221,  1206, -2345, -2345,
   -2345, -2345, -2345,  1860,  1004,   417, -2345,  1270, -2345, -2345,
   -2345, -2345,  1366,  1154, -2345, -2345, -2345,  1805, -2345, -2345,
     410,  1903, -2345, -2345,  1004,  1903,  1584, -2345,  1378, -2345,
   -2345,   627,  1169, -2345, -2345,  2844, -2345,  1987,   716,    79,
   -2345, -2345, -2345,  1108, -2345,   -38,  5823, -2345,   706,  5553,
   -2345, -2345,  1004, -2345,  1841, -2345, -2345,  5922, -2345,  1411,
   -2345, -2345,  1149, -2345, -2345, -2345, -2345, -2345,  1905,  1809,
   -2345, -2345,  1270,  1746, -2345,  1905, -2345, -2345, -2345,  1494,
    7304,  1426,  7472,  1426, -2345,  1004,  1426,  1426,  1426,  2711,
   -2345,   434,  1426, -2345,  7496,  1426,  1426, -2345,   738, -2345,
    1574, -2345, -2345,  1108,  1108,  1757,  1273, -2345, -2345, -2345,
   -2345,  1835,  1864, -2345,  1108, -2345,  -105, -2345, -2345, -2345,
    1412,  1108,  1154, -2345, -2345, -2345, -2345,  1741, -2345,  1411,
   -2345,  1986, -2345, -2345, -2345,  1004, -2345, -2345,  1004, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1840,  1741,
     209,  1108, -2345,  1538,  1589, -2345, -2345, -2345, -2345, -2345,
   -2345,  1773,  1741,  1741,    99,  1802,  1741, -2345,  1323, -2345,
   -2345, -2345,  1534,  1539, -2345,  1149,  1323,  1816,  1623,  1749,
   -2345, -2345,  1774, -2345, -2345, -2345, -2345, -2345, -2345,   471,
   -2345,  1004,  1516,   700, -2345,    -3,   -53,   686,  1605,  1624,
     686, -2345,  1607,   417, -2345,   -45, -2345, -2345,  1679,  1694,
   -2345,   750,  1108, -2345, -2345, -2345, -2345, -2345,  1764, -2345,
   -2345, -2345,  2033, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
    1853,  1108, -2345,   -76, -2345, -2345,  1454,  1108, -2345, -2345,
   -2345, -2345,     5,  1108, -2345,  1486, -2345,  1497,  1773, -2345,
   -2345, -2345, -2345,  1861,   700,  1862,    26, -2345, -2345, -2345,
   -2345,  2049, -2345,  1620,   172, -2345, -2345,   189, -2345, -2345,
   -2345, -2345,  1574, -2345, -2345, -2345,  1939,  1929,  1433, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345,  1703,  1433, -2345,  1621,
   -2345,  2024, -2345, -2345, -2345,   945, -2345,  1149,   851, -2345,
      59,   186,   693,   686,   686,   700,  1871,  1206,   162,   595,
    1933, -2345, -2345, -2345,  2068, -2345,  1883, -2345, -2345, -2345,
   -2345,  1805, -2345, -2345, -2345, -2345,  1004,  1950,  1783,   441,
   -2345,  1576, -2345,  1577,  1149,   911, -2345,   471, -2345, -2345,
   -2345,  5823,  1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,
     716, -2345,    -1,  1783,   556, -2345,  1661,  1661, -2345, -2345,
     348,  1004,   700,  1881,  1629, -2345,  1637,  2081,  1004,   345,
     410,  2084, -2345,  1583,  1108, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1011, -2345,
   -2345, -2345,  1004,   440, -2345, -2345,  1108,  1757,  1836,  1327,
   -2345, -2345, -2345,  1004,   179, -2345, -2345, -2345, -2345,   179,
   -2345, -2345,  1108,  1396,  1108, -2345, -2345, -2345,  1108, -2345,
   -2345, -2345,   122, -2345, -2345, -2345,  1108,  1588,   179,   179,
   -2345, -2345,   179, -2345, -2345, -2345,  1326, -2345, -2345, -2345,
    1323, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1531,
     105, -2345, -2345,  1800,   182,  1894,   700,   443, -2345, -2345,
   -2345, -2345, -2345,   -21,    80, -2345, -2345, -2345,   770, -2345,
   -2345, -2345, -2345, -2345, -2345,   179, -2345, -2345, -2345, -2345,
     179,   480,   480,   179, -2345, -2345, -2345, -2345, -2345,  1592,
     686, -2345,   686,  4700, -2345,   466,    33,   189, -2345, -2345,
   -2345,  2049,  1004, -2345, -2345, -2345, -2345,  1598,  1296,   376,
    1599,   443,  1149, -2345, -2345,  2055, -2345, -2345, -2345, -2345,
     851, -2345,  1918, -2345,  1108,  1494,  1792, -2345, -2345,   686,
   -2345,   686,   595, -2345, -2345, -2345,  1010, -2345, -2345,  1004,
    5823,   988, -2345, -2345, -2345,  1817, -2345, -2345,  1847, -2345,
   -2345, -2345, -2345,  1577, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345,     3, -2345,  1004, -2345,
   -2345, -2345,   800, -2345, -2345, -2345,  7664, -2345,  5823,  5823,
    1645,  1782,  1531, -2345,   686, -2345,   443, -2345,  1803, -2345,
    1149, -2345,  1998,  1674, -2345,    43, -2345,   715, -2345,  1583,
   -2345,  1004, -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1371,
     -40, -2345,  1004, -2345, -2345, -2345,   437, -2345,   440,   437,
   -2345, -2345, -2345,   180,  2070,  6180,  1323, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345,  1705,  1919, -2345, -2345,
   -2345,  1920, -2345, -2345, -2345, -2345, -2345, -2345,  1824,  1516,
   -2345, -2345, -2345, -2345,  1004, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345,  3367, -2345, -2345, -2345,  1381,
   -2345, -2345, -2345, -2345,  1676, -2345,   700,  1763,   700,  1765,
   -2345, -2345,  5823, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345,  1296, -2345,  2018, -2345,  1433, -2345, -2345, -2345,
     443,  1301, -2345, -2345,  1301,   -75,  1004, -2345, -2345,   700,
   -2345, -2345,  1743, -2345,  2079,  1867,  1893,   553, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345,   993, -2345, -2345, -2345, -2345, -2345,  1837,  1108,  1705,
     700,  1640, -2345,  2081, -2345,  1591,  2042,  1591,  1645, -2345,
   -2345, -2345, -2345,  1851, -2345, -2345, -2345, -2345,  1388, -2345,
    1004,  1111, -2345, -2345,  1836, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345,   179, -2345, -2345, -2345,   179,   -14,
   -2345, -2345,  1108, -2345, -2345, -2345, -2345,  1108, -2345, -2345,
   -2345, -2345, -2345,    13, -2345, -2345,  2082,  1727, -2345, -2345,
       6, -2345,  1108, -2345,  2134, -2345, -2345, -2345,  6180, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1004,
   -2345, -2345, -2345, -2345,  1676, -2345,   686, -2345,   686, -2345,
   -2345, -2345,  2094,  2035,  1301,  1301, -2345,  1686,  1686, -2345,
    1810,  1206,   671, -2345,  1004, -2345, -2345,  5823, -2345,  1108,
     656,  1885,  1887, -2345,  1888, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345,  1004, -2345, -2345, -2345, -2345,  1696, -2345,  1004,
    1591, -2345,  1004, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
    1112,  1108,  1108,  1220, -2345, -2345, -2345, -2345, -2345, -2345,
    1578, -2345, -2345, -2345,  2045,   179,   179, -2345,  1108,  1108,
     480,   480,   179, -2345,   495, -2345, -2345, -2345,  1705,  1705,
    5823, -2345,  1301, -2345,  5823,  5823,  1108,  1206,  1206,  1819,
   -2345, -2345,  1673,  1004, -2345, -2345,  1817, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345,  1139, -2345, -2345,  1004, -2345, -2345,
   -2345,  1108,  1836,  1836, -2345,  1945,  1108,  1108, -2345,  1850,
    1704, -2345, -2345,   440,   179, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345,   417,  1206,  1108, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1313, -2345, -2345,
   -2345, -2345, -2345,  1820,  2053, -2345,  1836, -2345, -2345, -2345,
    1836,  1836,  1941,  1282,  1757,  1954,  1411,  1660,  1108,  1516,
   -2345,  1108,  1108,  1004, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345,   -36, -2345,   662,
   -2345, -2345, -2345,  1282,  1757, -2345, -2345, -2345, -2345,   417,
   -2345,  1806,  1744,    37,  1574, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345,   510, -2345,  1108,  1364, -2345,  8052,  8052,  1628,
    2048,  1974, -2345,  1411,   -36, -2345, -2345,  1411,   662, -2345,
   -2345,   510, -2345, -2345,  1004, -2345,   918, -2345, -2345, -2345,
      74, -2345,   -36,  1396, -2345,  1531,  7801, -2345, -2345,   687,
    1057, -2345, -2345,  1125, -2345, -2345, -2345, -2345,   -31,   -31,
   -2345, -2345, -2345, -2345, -2345,  8052, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345,  1832,   882,    74, -2345, -2345, -2345,
    1755, -2345,  1574, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
    1857, -2345,  1857, -2345,  2128, -2345,  1574, -2345, -2345,  1870,
    1004, -2345,  1752,    -7,  1858, -2345, -2345,  8052,   711, -2345,
   -2345,  1411, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345,  1206, -2345
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
       0,   176,     0,    17,    12,    19,    15,     0,    34,    30,
    1796,    46,     0,     0,     0,  1839,  1796,  1796,  1796,     0,
       0,     0,     0,     0,  1796,     0,     0,  1771,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     151,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     178,     0,     0,    23,  1797,     0,     0,  1518,   126,  1796,
    1796,  1840,  1796,     0,     0,     0,     0,  1796,  1796,    60,
      82,     0,    54,    98,  1772,     0,  1796,     0,    99,   102,
       0,   150,     0,   182,    20,    13,    29,    37,    40,    42,
      41,  1833,    39,  1796,     0,     0,     0,  1586,   172,  1511,
     170,   175,   177,     0,     0,    62,    84,   174,    56,  1519,
     153,   154,  1798,   157,  1591,  1207,  1206,   116,   120,   123,
    1825,  1796,     0,   100,   152,   179,   180,    38,  1834,    36,
       0,  1598,  1594,  1599,  1597,  1595,  1600,  1596,   161,   162,
     164,   173,   168,  1879,  1880,     0,   166,     0,  1770,     0,
       0,     0,  1796,  1901,    80,    61,  1769,    66,    68,    69,
      70,    71,  1769,     0,  1796,     0,    83,     0,    87,    55,
      58,   155,  1800,  1799,   158,     0,  1825,  1828,  1827,     0,
       0,   117,   121,     0,     0,   263,   183,   132,   131,   146,
     142,   147,   128,   145,   143,   129,   130,   144,   127,   133,
     134,   136,   163,     0,  1868,   167,     0,  1587,   171,  1900,
    1796,     0,     0,    65,    67,    63,    81,  1769,  1796,     0,
       0,    92,    93,    94,     0,     0,    85,    88,     0,     0,
    1592,   156,   159,     0,  1826,   124,   118,   119,   122,   181,
       0,     0,  1667,     0,   275,   271,    24,     0,   266,   268,
     269,   135,   138,     0,   165,     0,     0,  1899,    74,    64,
       0,  1512,    73,    89,     0,    90,    91,    97,    86,    57,
       0,   160,   125,   186,  1668,   184,  1777,   272,   273,   274,
    1759,   282,     0,   264,   267,     0,   137,   169,     0,    77,
      79,    78,    75,    76,    95,    59,   187,  1778,  1852,  1760,
    1781,     0,   284,   265,   139,   140,  1887,  1888,    72,  1835,
    1853,  1773,  1782,     0,     0,     0,   286,     0,  1814,  1835,
    1860,     0,   245,     0,  1796,  1769,  1801,   247,     0,  1870,
    1867,   233,   185,   232,   188,   189,   190,   191,   192,   193,
       0,   194,     0,   195,   244,   196,   197,   198,   199,   200,
     201,  1765,  1796,  1774,     0,  1497,   270,  1495,   283,     0,
      25,   141,  1815,  1796,  1836,  1801,  1861,  1862,   213,  1869,
     248,  1835,  1796,  1796,  1802,  1796,  1796,   257,  1759,   258,
       0,  1796,  1814,  1766,     0,     0,   276,   277,   280,  1496,
     285,   292,   293,   344,   287,   347,     0,     0,  1796,   215,
     214,   211,   247,   243,     0,     0,     0,     0,   256,  1829,
    1829,     0,   259,     0,  1796,   246,   229,   278,     0,   279,
       0,   500,   288,  1650,     0,   289,   223,   224,   222,   221,
       0,   207,   208,   218,   218,     0,   218,   210,   209,   218,
       0,  1517,  1516,   249,   250,   251,   252,   255,  1830,   260,
     261,   262,   230,     0,   281,     0,     0,   503,   349,     0,
       0,   353,     0,   291,   294,  1653,   219,   204,   220,   205,
    1777,   206,   203,   216,   202,   217,  1796,     0,   239,   238,
     239,   235,   345,     0,     0,   506,   352,     0,   350,     0,
     359,   360,   354,     0,   357,  1796,  1898,     0,   226,  1654,
     212,     0,   253,  1509,     0,   237,   236,   347,   501,     0,
       0,   601,   351,   356,   393,   362,  1773,  1796,     0,     0,
    1796,  1773,  1814,  1796,  1757,   290,     0,   295,   298,   299,
     300,   301,   302,   303,   304,   305,   306,     0,     0,  1897,
       0,   225,   254,  1510,     0,   242,   346,   347,   504,     0,
       0,    26,  1796,  1761,     0,     0,     0,  1796,  1757,     0,
       0,     0,     0,     0,  1796,   340,  1758,   341,     0,   339,
     342,   296,   297,     0,     0,   502,   347,   507,     0,   665,
       0,   487,   417,  1841,  1841,  1841,  1841,  1841,  1863,   418,
     453,   455,   421,   422,   423,   424,   425,   426,   449,   447,
     448,   450,   451,   456,   454,   427,  1837,   452,     0,   428,
     414,   429,   430,     0,     0,  1844,   432,   433,   431,  1803,
     435,   436,   434,  1796,  1798,   394,   395,   396,   397,   398,
     399,   415,   419,   420,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,  1762,     0,   390,     0,   363,
     318,   338,  1889,  1890,  1515,   327,  1513,  1882,  1881,   320,
    1812,  1771,  1785,     0,  1796,   324,   323,  1796,   343,     0,
     148,   149,   228,     0,  1885,  1886,   240,   505,   509,   602,
       0,    27,   709,   498,   499,  1842,   446,   445,   438,   437,
     444,   443,   442,   441,   440,   439,  1864,     0,  1838,   484,
     470,   464,   409,  1580,   496,  1845,  1804,  1805,   485,     0,
       0,   411,   413,  1681,  1681,   392,     0,  1821,  1609,     0,
       0,  1605,  1610,  1608,  1606,  1611,  1607,   391,   364,  1601,
    1603,     0,   308,  1514,  1813,   329,     0,   311,  1786,  1846,
     337,     0,     0,   227,   241,   508,   604,   667,     0,     0,
     486,  1785,   466,     0,  1856,     0,  1578,  1579,     0,   416,
     488,   490,   492,     0,   410,  1769,   457,   458,  1602,  1822,
       0,     0,   373,   369,   372,   371,   370,   385,   381,   383,
     384,   386,   382,   387,   388,   389,   366,   377,   378,   379,
     374,   375,   376,   368,   365,     0,   319,   310,   309,   307,
     328,  1771,  1847,   316,   325,   322,   326,   321,     0,   510,
       0,   608,   603,   605,     0,   670,   668,   686,     0,   763,
     838,   847,   853,   860,   893,   897,   911,   906,   912,   913,
     921,   968,   977,   980,  1006,  1017,  1020,  1023,  1015,  1029,
    1036,  1058,  1062,  1098,  1100,  1104,     0,  1110,  1124,  1148,
    1166,  1167,  1170,  1171,  1176,  1184,  1185,  1198,  1232,  1250,
       0,  1283,  1295,  1303,  1305,   691,  1309,  1312,  1318,  1369,
     711,   712,   713,   714,   715,   716,   717,   718,   720,   719,
     721,   722,   723,   724,   725,   726,   727,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   760,
     710,     0,     0,   464,   465,  1857,   468,  1629,  1624,  1630,
       0,     0,  1636,     0,  1484,  1486,     0,     0,     0,  1627,
       0,  1488,  1628,  1631,  1632,     0,     0,     0,     0,  1626,
    1636,  1625,  1468,  1466,  1473,  1476,  1478,  1481,  1545,  1483,
    1542,  1576,  1543,  1544,  1633,     0,     0,     0,  1577,   497,
     494,   491,     0,   412,  1682,   367,   380,  1604,     0,     0,
     330,   331,   332,   333,     0,   312,  1784,   318,     0,  1498,
     511,     0,   609,     0,   606,   675,   675,     0,     0,  1684,
    1685,  1686,  1687,  1688,  1689,  1690,  1691,  1692,  1693,  1694,
    1695,  1696,  1697,  1733,  1734,  1735,  1736,  1737,  1738,  1739,
    1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,  1749,
    1750,  1751,  1752,  1698,  1699,  1700,  1701,  1702,  1703,  1704,
    1705,  1706,  1707,  1708,  1709,  1710,  1711,  1712,  1713,  1714,
    1715,  1716,  1717,  1718,  1719,  1720,  1721,  1722,  1723,  1724,
    1725,  1726,  1727,  1728,  1683,  1729,  1730,  1731,  1732,   762,
       0,     0,     0,     0,   863,     0,     0,     0,     0,     0,
       0,     0,  1429,  1008,     0,     0,  1858,   883,   882,     0,
    1028,  1429,     0,     0,     0,     0,     0,     0,   761,     0,
    1136,     0,     0,     0,     0,     0,     0,     0,     0,  1279,
    1282,  1270,  1280,  1281,  1272,     0,     0,  1304,  1302,     0,
     709,     0,     0,     0,     0,   471,   467,   472,  1823,   475,
       0,     0,     0,  1622,  1546,  1547,  1548,     0,     0,     0,
       0,     0,     0,     0,  1480,     0,  1479,     0,  1623,  1469,
    1470,  1588,     0,     0,     0,     0,     0,     0,     0,     0,
    1612,     0,     0,     0,     0,   489,     0,   493,   336,   335,
    1763,  1771,   317,     0,   611,   612,   607,  1768,   675,   672,
     678,     0,   675,   687,   662,   785,   836,   788,   784,  1821,
       0,     0,  1536,   845,  1530,   843,  1525,  1527,  1528,  1529,
     848,     0,  1655,  1508,   854,   855,     0,  1504,  1506,  1505,
     866,   864,   865,   891,     0,  1558,   894,   895,  1557,   898,
     901,  1821,   909,     0,  1490,  1669,  1522,  1581,  1585,  1523,
       0,   919,  1835,  1605,   966,  1394,   930,   934,  1525,     0,
    1527,   975,     0,   867,   978,   987,   986,  1004,     0,   983,
     985,  1428,     0,  1010,  1014,  1012,  1015,  1013,  1007,  1018,
    1019,  1520,  1021,  1022,  1859,  1024,  1502,  1016,  1854,  1427,
    1037,  1039,  1059,  1060,  1063,     0,  1065,  1066,  1067,  1099,
    1236,  1573,  1574,     0,  1101,     0,  1108,     0,  1117,  1114,
    1116,  1115,  1111,  1118,  1138,  1508,  1125,  1136,  1127,     0,
    1134,     0,  1559,  1505,  1561,     0,  1164,  1661,  1168,  1372,
    1493,  1174,  1835,  1182,  1372,     0,  1196,  1189,  1494,     0,
    1501,  1199,  1200,  1201,  1202,  1203,  1204,  1225,  1205,  1228,
       0,  1499,     0,     0,  1572,  1585,  1233,  1268,  1255,  1273,
    1767,  1293,     0,  1286,  1288,     0,  1300,     0,  1306,  1307,
     697,   703,   692,   693,   694,   696,     0,  1310,     0,  1313,
    1315,  1335,  1321,  1382,  1372,   473,   475,  1824,     0,   479,
     474,  1468,  1466,     0,  1468,     0,  1638,  1468,  1485,  1487,
    1468,     0,     0,     0,  1468,  1539,  1540,  1541,     0,  1489,
    1482,  1468,     0,  1467,  1589,     0,  1472,  1471,  1475,  1474,
    1477,     0,     0,  1468,     0,  1796,  1764,     0,   314,     0,
    1796,  1843,   673,  1796,     0,   684,   676,   677,   688,   837,
     764,  1764,   798,   789,     0,     0,     0,     0,  1531,  1532,
    1533,   846,   839,     0,     0,  1526,  1657,  1656,   851,   856,
     858,     0,   892,   861,  1560,   867,   896,   901,  1891,  1892,
     899,     0,   902,     0,   910,   907,  1876,  1875,  1491,     0,
    1671,  1492,  1583,  1584,   916,   917,   920,   914,  1421,   967,
     922,   706,     0,   928,  1396,     0,   945,     0,   939,  1394,
    1394,  1394,  1394,   976,   969,     0,     0,   868,   979,  1005,
     981,  1429,  1429,   982,   989,   990,   706,  1453,  1454,  1455,
    1449,  1858,  1441,  1461,  1464,  1463,  1465,  1457,  1448,  1447,
    1452,  1451,  1450,  1456,  1436,  1440,  1458,  1460,  1462,  1438,
    1439,  1435,  1437,  1430,  1431,  1442,  1443,  1444,  1445,  1446,
    1434,  1011,  1009,  1521,  1026,  1855,   706,  1041,     0,  1061,
       0,  1088,  1072,  1064,  1069,  1070,  1071,  1240,     0,  1575,
       0,     0,  1109,  1105,     0,  1118,  1867,     0,  1126,  1132,
    1133,   706,  1129,  1429,     0,     0,  1137,     0,  1165,  1149,
    1662,  1663,  1835,     0,  1169,  1175,  1172,  1151,  1183,  1177,
    1179,  1191,  1197,  1186,     0,  1191,     0,  1553,  1554,  1226,
    1229,     0,     0,  1500,  1209,     0,  1208,     0,     0,  1583,
    1269,  1251,  1257,  1796,  1258,  1253,     0,  1271,     0,     0,
    1294,  1284,     0,  1287,     0,  1301,  1296,     0,  1308,   704,
     702,   695,     0,  1316,  1317,  1314,  1336,  1319,  1767,     0,
    1383,  1370,  1374,   479,   469,  1767,   462,   477,   478,  1801,
       0,  1633,     0,  1633,  1637,     0,  1633,  1633,  1633,     0,
    1616,     0,  1633,  1590,     0,  1633,  1633,  1866,     0,   334,
    1823,   313,   515,  1796,  1796,  1757,  1809,   540,   514,   518,
     519,     0,  1779,   627,  1796,   616,  1863,   617,  1872,  1871,
       0,  1796,     0,   630,   625,   620,   626,  1816,   621,     0,
     624,   632,   629,   622,   628,     0,   633,   623,     0,   644,
     638,   642,   641,   639,   643,   613,   645,   640,     0,  1816,
       0,  1796,   685,     0,     0,   663,  1564,   794,  1562,  1563,
     799,   800,  1816,  1816,   792,   793,  1816,   780,  1385,  1874,
    1873,   777,   769,   771,   772,     0,  1385,     0,     0,     0,
     786,   775,     0,   783,   766,   782,   767,  1550,  1549,     0,
    1535,     0,  1821,  1399,   844,  1585,  1523,     0,  1659,   851,
       0,   849,     0,     0,  1507,   878,   900,   905,     0,     0,
    1524,  1399,  1796,  1670,  1582,   918,   706,   915,  1423,  1395,
     707,   932,  1763,   706,  1393,   938,   937,   936,   935,   946,
    1394,  1796,   949,     0,   952,   953,     0,  1796,   956,   957,
     958,   959,     0,  1796,   961,  1394,   947,     0,   800,   925,
     926,   923,   924,     0,  1399,     0,   874,   984,   999,  1001,
    1000,   994,   996,  1002,  1429,   991,   988,  1429,   992,  1459,
    1432,  1433,  1823,  1025,  1503,   706,  1033,  1034,  1858,  1049,
    1050,  1052,  1054,  1055,  1051,  1053,  1044,  1858,  1040,     0,
    1089,     0,  1091,  1090,  1092,  1074,  1084,     0,     0,  1068,
    1242,     0,  1787,     0,  1102,  1399,     0,     0,     0,  1120,
    1130,  1143,  1139,  1144,  1140,  1145,     0,  1135,  1379,  1378,
    1142,  1151,  1373,  1569,  1570,  1571,     0,     0,  1421,     0,
     706,     0,  1190,     0,     0,     0,  1227,     0,  1231,  1230,
    1223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1211,  1212,  1664,  1421,     0,  1274,  1850,  1850,  1289,  1290,
    1291,     0,  1399,     0,     0,   705,     0,  1651,     0,  1291,
    1179,  1753,   463,     0,  1796,  1647,  1620,  1649,  1621,  1645,
    1617,  1618,  1619,  1643,  1640,  1641,  1615,  1634,     0,  1613,
    1614,   495,     0,     0,  1916,  1917,  1796,  1757,     0,   512,
     516,  1780,   520,     0,     0,   614,   615,   618,   619,     0,
     647,  1817,  1796,  1856,  1796,   648,   646,   660,  1796,   679,
     680,   683,     0,   674,   689,   691,  1796,   802,     0,     0,
     790,   791,     0,  1387,  1388,   781,  1389,   706,   768,   770,
    1385,   778,   773,   774,   787,   776,  1552,  1534,  1551,  1669,
       0,   706,   840,  1401,  1583,  1584,  1399,     0,  1658,   850,
     852,   859,   857,   886,  1794,   904,   903,   908,     0,  1422,
     706,  1420,   709,  1397,   927,     0,   950,   951,   954,   955,
       0,  1425,  1425,     0,   948,   929,   941,   942,   940,   943,
       0,   970,     0,   869,   870,   678,     0,  1429,  1429,   998,
     706,   995,     0,  1032,   706,  1035,  1030,     0,     0,  1056,
       0,     0,     0,  1085,  1087,     0,  1080,  1094,  1081,  1082,
    1073,  1076,  1094,  1234,  1796,  1801,     0,  1788,  1241,  1103,
    1106,     0,  1120,  1119,  1123,  1112,     0,  1131,  1128,     0,
       0,  1153,  1152,   706,  1173,  1409,  1178,  1180,     0,  1192,
    1429,  1429,  1187,  1193,  1210,  1222,  1224,  1214,  1215,  1216,
    1220,  1217,  1221,  1218,  1219,  1213,  1665,  1267,     0,  1264,
    1265,  1259,     0,  1252,  1896,  1895,     0,  1851,  1277,  1277,
    1404,     0,  1669,  1297,     0,   698,     0,  1652,  1322,  1323,
       0,  1326,  1329,  1333,  1327,  1421,  1754,     0,   483,   480,
     481,     0,  1635,   315,   517,  1810,  1811,  1593,   528,   525,
     358,   541,   521,   522,   637,   636,   653,   659,     0,   656,
     681,   682,   691,   709,     0,     0,  1385,   795,   797,   796,
    1391,  1392,  1384,   706,  1386,   779,  1399,  1524,  1400,   706,
    1398,  1582,   841,  1660,  1555,  1556,   706,   706,   889,  1821,
    1795,   885,   884,   880,     0,  1673,  1674,  1675,  1676,  1677,
    1678,  1679,  1680,  1672,  1424,     0,   963,   962,   965,     0,
    1567,  1568,   964,   960,     0,   933,  1399,  1490,  1399,  1490,
     871,   872,     0,   876,   875,   877,   997,  1003,   993,  1027,
    1031,  1042,  1045,  1046,  1775,  1038,  1858,  1043,  1094,  1094,
       0,  1079,  1077,  1078,  1083,  1244,     0,  1238,  1789,  1399,
    1113,  1122,     0,  1146,     0,     0,  1160,     0,  1413,   706,
    1408,  1181,   706,   706,  1194,  1266,  1256,  1260,  1261,  1262,
    1263,  1254,  1275,  1278,  1276,   706,  1285,  1406,  1796,  1399,
    1399,   700,  1311,  1651,  1325,  1785,  1331,  1785,  1404,   706,
     706,  1371,  1381,  1416,  1417,  1380,  1377,  1376,  1806,   482,
     476,   524,  1883,  1884,   527,   360,   542,   523,   651,   649,
     652,   650,   654,   655,     0,   631,   657,   658,     0,   709,
     801,   806,  1796,   808,   809,   810,   835,  1796,   811,   812,
     813,   814,   815,     0,   816,   817,   819,     0,   820,   821,
       0,   822,  1796,   807,  1755,   825,   834,   828,   803,   804,
     827,   765,  1390,   842,  1402,   887,   888,   706,   862,     0,
     879,  1893,  1894,  1426,   944,   972,     0,   971,     0,   873,
    1047,  1776,     0,     0,  1075,  1086,  1094,  1792,  1792,  1095,
       0,     0,  1247,  1243,  1237,  1107,  1121,     0,  1154,  1796,
    1421,     0,     0,  1155,     0,  1159,  1414,  1188,  1195,  1405,
     706,  1403,     0,  1299,  1298,  1337,   699,     0,  1324,     0,
    1785,  1328,     0,  1320,  1418,  1419,  1415,  1807,  1808,  1375,
       0,  1796,  1796,     0,   529,   530,   531,   532,   533,   534,
       0,   544,   634,   635,     0,     0,     0,   826,  1796,  1796,
    1425,  1425,     0,  1756,     0,   805,   890,   881,  1399,  1399,
       0,  1057,  1093,  1793,     0,     0,  1796,  1245,     0,     0,
    1235,  1239,     0,     0,  1150,  1163,  1411,  1412,  1162,  1158,
    1156,  1157,  1407,  1292,  1345,   701,  1330,     0,  1334,  1903,
    1902,  1796,     0,     0,  1905,     0,  1796,  1796,   526,  1843,
       0,   830,   829,     0,     0,   832,   831,   824,   833,  1565,
    1566,   974,   973,  1048,  1097,  1096,     0,  1248,  1796,  1429,
    1161,  1410,  1368,  1367,  1346,  1338,  1339,  1755,  1340,  1341,
    1342,  1343,  1366,     0,     0,  1332,     0,   539,   535,  1904,
       0,     0,  1790,  1818,  1757,     0,     0,     0,  1796,  1821,
     543,  1796,  1796,     0,   549,   551,   560,   552,   554,   557,
     545,   546,   547,   556,   558,   561,   548,     0,   553,     0,
     555,   559,   550,  1818,  1757,   690,   818,   823,  1246,     0,
    1147,     0,  1848,     0,  1823,   536,   538,   537,  1791,   599,
    1819,  1820,  1798,   585,  1796,   464,  1429,     0,     0,     0,
       0,     0,   593,     0,   583,   589,   592,     0,   586,   594,
     597,  1798,   588,  1249,     0,  1849,     0,  1364,  1363,  1362,
       0,   584,     0,  1856,   581,  1669,   577,  1537,  1907,     0,
       0,  1909,  1911,     0,  1915,  1913,   562,   566,   570,   570,
     564,   568,   563,   569,   600,     0,   591,   590,   596,   595,
     587,  1365,  1878,  1877,  1831,  1358,  1352,  1353,  1355,   575,
     468,   598,  1823,   576,  1538,  1906,  1910,  1908,  1914,  1912,
     573,   565,   573,   567,     0,  1832,  1823,  1361,  1356,  1359,
       0,  1354,   460,     0,     0,   572,   571,     0,     0,  1360,
    1357,     0,   459,   580,   578,   579,   574,   582,  1351,  1348,
    1350,  1349,  1344,  1347,   461
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2345, -2345, -2345, -2345, -2345,  2175, -2345, -2345, -2345,   236,
   -2345,  2137, -2345,  2092, -2345, -2345,  1417, -2345, -2345, -2345,
    1488, -2345, -2345,   203,  2161, -2345, -2345,  2061, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1988,
     810, -2345, -2345, -2345, -2345, -2345,  2041, -2345, -2345, -2345,
   -2345,  1984, -2345, -2345, -2345, -2345, -2345, -2345,  2118, -2345,
   -2345, -2345, -2345,  1973, -2345, -2345, -2345, -2345, -2345,  1957,
   -2345, -2345,   732, -2345, -2345, -2345, -2345, -2345,  2052, -2345,
   -2345, -2345, -2345,  2020, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345,  1051, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1684, -2345,  1814,
   -2345, -2345, -2345,  1739, -2345, -2345, -2345, -2345,   300, -2345,
   -2345,  1923, -2345, -2345, -2345, -2345, -2345,  1788, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345,  1184, -2345, -2345, -2345,  1435, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345,   504, -2345, -2345,  1715, -2345,  -764,  -831, -2345,
   -2345, -2345,   461, -2345, -2345, -2345, -2345,  -546, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -1423,   765,  1470,   362,   451,
   -1421, -2345, -2345, -2345,  -956, -2345,  -490, -2345, -2345,   815,
   -2345,   321,   550, -2345,    25, -1420, -2345, -1417, -2345, -1416,
   -2345, -2345,  1436, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345,  -462,  -494, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -1289,
   -2345,  -429, -2345, -2345, -2345, -2345, -2345, -2345, -2345,  1382,
   -2345, -2345, -2345,    11,    12, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345,  1196,   247, -2345,   138,
   -2345, -2345, -2345, -2345, -1361, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -1173, -2345, -2345,  -696, -2345,  1449, -2345, -2345,
   -2345, -2345, -2345, -2345,  1012,   475,   478, -2345,   393, -2345,
   -2345,  -164,  -150, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345,   447, -2345, -2345, -2345,  1003, -2345, -2345, -2345,
   -2345, -2345,   766, -2345, -2345,   159, -2345, -2345, -1242, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,   767,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345,   741, -2345, -2345, -2345,
   -2345, -2345,   -19, -1784, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345,   725, -2345, -2345,   726,
   -2345, -2345,   394,   165, -2345, -2345, -2345, -2345, -2345,   970,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345,   -24,   688, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345,   685, -2345, -2345,   154, -2345,
     381, -2345, -2345, -1465, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345,   946,   684,   148,
   -2345, -2345, -2345, -2345, -2345, -2345, -2344,   944, -2345, -2345,
   -2345,   143, -2345, -2345, -2345,   367, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345,   313, -2345, -2345, -2345, -2345, -2345, -2345,   665,
     139, -2345, -2345, -2345, -2345, -2345,   -93, -2345, -2345, -2345,
   -2345,   341, -2345, -2345, -2345,   928, -2345,   925, -2345, -2345,
    1148, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
     118, -2345, -2345, -2345, -2345, -2345,   917,   331, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
     -41, -2345,   335, -2345, -2345, -2345, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345,  -397, -2345, -2345, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345,  -127, -2345,   638, -2345, -2345,
   -1672, -2345, -2345, -2345, -2345,  -675, -2345, -2345, -1748, -2345,
   -2345,   -37, -2345, -2345, -2345, -2345,  -138, -2245, -2345, -2345,
     -39, -1857, -2345, -2345, -1995, -1545, -1082, -1458, -2345, -2345,
     752, -1779,   144,   145,   146,   147,   256,    52,  -759,   465,
     303, -2345,   670,  -570, -1366, -1075,  -200,   966, -1572,  -393,
    -877, -2345, -1326, -2345, -1061, -1404,   841,  -530,   -88,  2029,
   -2345,  1636,  -560,    42,  2172, -1079, -1067,   -91,  -807, -2345,
   -1090, -1240, -2345,   395, -1300, -1301, -1101,  1079, -1711, -2345,
   -2345,   612, -1126, -2345,   285,   646,  -641, -2345, -2345,  -103,
   -1200,  -772,  -111,  2065, -1938,  2096,  -672,  1300,   428,  -399,
   -2345, -2345, -2345,  -177,  1347, -2345, -2345,   457, -2345, -2345,
   -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2345, -2004,
   -2345, -2345,  1593, -2345, -2345,  -234,  -592,  1924, -2345, -1189,
   -2345, -1287,  -267,  -639,   951, -2345,  1834, -2345, -1453, -2345,
    -782, -2345, -2345,   -90, -2345,    -8,  -660,  -354, -2345, -2345,
   -2345, -2345,   342,  -316,  -278, -1215, -1558,  2133,  1900, -2345,
   -2345,  -332, -2345, -2345,   978, -2345, -2345, -2345,   398, -2345,
     242, -1958, -1487, -2345, -2345, -2345,  -172,   452, -1414, -1350,
   -2345, -2345,  -722, -2345, -2345,  1643, -2345,  1807, -2345, -2345,
   -2345,   774, -2345, -1670,  -292, -2345, -2345, -2345, -2345, -2345,
   -2345
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    30,
      12,    31,    44,    45,    34,    35,    19,   321,   433,   619,
      32,    50,    14,    25,    37,    95,   131,   132,    20,    29,
      41,    69,    70,   148,   209,   268,    71,   145,   195,   196,
     197,   198,   199,   200,   201,   332,   202,    72,   146,   206,
     207,   208,   263,   305,   264,    73,    74,    75,    76,    77,
     116,   157,   277,   158,   159,    78,   133,   238,   239,   240,
     325,   344,   241,   712,    79,   121,    80,   150,   151,   152,
     271,    81,   178,   179,    82,    83,   245,    84,    85,    86,
      87,    88,    89,    90,   123,   225,   166,   226,   336,   349,
     374,   375,   479,   480,   441,   514,   507,   376,   469,   377,
     581,   378,   379,   380,   381,   382,   521,   545,   383,   384,
     385,   386,   387,   485,   388,   389,   418,   390,   452,   286,
     287,   288,   289,   320,   290,   316,   426,   427,   459,   342,
     356,   400,   434,   435,   504,   436,   535,   567,   568,   839,
     569,  1701,  1027,   772,   570,   571,   707,   845,   572,   573,
     840,  1020,  1021,  1022,  1023,   574,   575,   576,   577,   609,
     461,   547,   462,   463,   498,   499,   554,   500,   532,   533,
     593,   767,   826,   827,   828,   829,   830,   501,   687,   592,
     665,   666,   667,   804,   668,   669,   670,   671,   672,   673,
     674,  2606,  2742,   675,   794,   963,  1169,   792,  1406,  1409,
    1410,  1679,  1676,  2199,  2200,   676,   677,   678,   679,   680,
    1010,   800,   801,  1205,   681,   682,   497,   587,   525,   616,
     551,   718,   785,   849,  1213,  1450,  1708,  1709,  2002,  2212,
    1710,  2208,  2361,  2484,  2485,  2486,  2487,  2488,  2489,  1999,
    2211,  2491,  2549,  2610,  2611,  2686,  2721,  2735,  2612,  2613,
    2713,  2744,  2614,  2615,  2616,  2617,  2618,  2619,  2654,  2655,
    2658,  2659,  2620,  2621,  2622,   591,   786,   852,   853,   854,
    1215,  1451,  1745,  2372,  2373,  2374,  2378,  1746,  1747,   721,
    1458,  2025,   722,   857,  1036,  1035,  1218,  1219,  1220,  1455,
    1753,  1038,  1755,  2222,  1160,  1392,  1393,  2341,  2466,  1394,
    1395,  1964,  1819,  1820,  2072,  1396,   789,   910,   911,  1110,
    1226,  1227,  1784,  1462,  1518,  1764,  1765,  1761,  2027,  2226,
    2408,  2409,  2410,  1460,   912,  1111,  1233,  1474,  1472,   913,
    1112,  1240,  1801,   914,  1113,  1244,  1245,  1803,   915,  1114,
    1253,  1254,  1528,  1856,  2093,  2094,  2095,  2063,  1129,  2253,
    2248,  2418,  1483,   916,  1115,  1256,   917,  1116,  1259,  1490,
     918,  1117,  1262,  1495,   919,   920,   921,  1118,  1271,  1504,
    1507,   922,  1119,  1274,  1275,  1512,  1276,  1516,  1848,  2088,
    2275,  1830,  1845,  1846,  1510,   923,  1120,  1281,  1524,   924,
    1121,  1284,   925,  1122,  1287,  1288,  1289,  1533,  1534,  1535,
    1866,  1536,  1861,  1862,  2099,  1530,   926,  1123,  1298,  1130,
     927,  1124,  1299,   928,  1125,  1302,   929,  1126,  1305,  1873,
     930,   931,  1131,  1877,  2106,   932,  1132,  1310,  1577,  1886,
    2109,  2292,  2293,  2294,  2295,   933,  1133,  1312,   934,  1134,
    1314,  1315,  1583,  1584,  1898,  1585,  1586,  2120,  2121,  1895,
    1896,  1897,  2114,  2301,  2439,   935,  1135,   936,  1136,  1324,
     937,  1137,  1326,  1593,   938,  1139,  1332,  1333,  1597,  2135,
     939,  1140,  1336,  1601,  2138,  1602,  1337,  1338,  1339,  1912,
    1914,  1915,   940,  1141,  1346,  1927,  2316,  2450,  2524,  1609,
     941,   942,  1142,  1348,   943,   944,  1143,  1351,  1616,   945,
    1144,  1353,  1928,  1619,   946,   947,  1145,  1356,  1625,  1931,
    2152,  2153,  1623,   948,  1146,  1361,   160,  1637,  1362,  1363,
    1950,  1951,  1364,  1365,  1366,  1367,  1368,  1369,   949,  1147,
    1319,  2305,  1587,  2444,  1900,  2123,  2442,  2520,   950,  1148,
    1377,  1953,  1645,  2168,  2169,  2170,  1641,   951,  1379,  1647,
    2332,  1154,   952,  1155,  1381,  1382,  1383,  2180,  1651,   953,
    1156,  1386,  1656,   954,  1158,   955,  1159,  1388,   956,  1161,
    1397,   957,  1162,  1399,  1665,   958,  1163,  1401,  1669,  2188,
    2189,  1969,  2191,  2346,  2471,  2348,  1667,  2467,  2534,  2575,
    2576,  2577,  2752,  2578,  2706,  2707,  2730,  2579,  2669,  2580,
    2581,  2582,   959,  1164,  1403,  1614,  1970,  1920,  2351,  1671,
    2035,  2036,  2037,  2232,  2233,  1513,  1514,  1824,  2052,  2053,
    2240,  2336,  2337,  2461,  2144,  2525,  2145,  2320,  2352,  2353,
    2354,  1817,  1818,  2071,  2268,  1308,  1309,  1291,  1292,  1563,
    1564,  1565,  1566,  1567,  1568,  1569,   992,  1192,  1412,   994,
     995,   996,   997,  1234,  1263,  1498,  1349,  1357,   396,   397,
    1030,  1370,  1371,  1574,  1340,  1247,  1248,   542,   482,   302,
     695,   696,   483,    98,   153,  1300,  1265,  1235,  1475,  2676,
    1424,   999,  1789,  2047,  2122,  2243,  1257,  1341,  1757,  2558,
    2269,  1922,  1758,  1320,  1374,  1237,  1001,  1266,  1267,   743,
     796,   797,  1759,   272,  2656,   180,  1238,   769,   770,  1239,
    1004,  1005,  1006,  1200,  1173,  1432,  1428,  1421,  1413,  1415,
     502,  2190,   538,  1478,  1799,  2058,  1612,  2172,   283,  1501,
    1813,  2263,   806,  1109,  2197,  2504,   607,   340,   688,  1464,
     424,  1221,   203,   115,   394,  2432,   338,  2003,   353,  1028,
     779,  2128,  2639,  2514,  2254,    96,   215,   415,   748,  2479,
    1998,   775,   403,  2012,  2642,   810,  1408,   219,   489,  2726,
     169,   391,   739,   102,   727,   684,   843,  2666,  2178,   351,
    1576,   966,  1306,   408,   737,  1206,  1345,   392,  1766,  1786,
    1499,  2704,   185,   699,  2364,   716,   348,   599,  1492,  2423,
    2176,   539,   204,  2541,  2547,  2689,  2690,  2691,  2692,  2693,
    1712
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     139,   428,   139,   429,   750,   161,   693,  1167,   139,   961,
     246,   582,   742,   416,  1466,   138,   768,   141,  1279,  1032,
    1373,  1447,   850,   147,  1008,  1909,   788,   405,  1739,  1901,
    1741,  1742,   139,   428,  1743,  1744,   993,  1749,   269,  1809,
    1290,   700,  1264,   465,  1633,  2236,  1493,   181,   103,   104,
     105,   438,  1246,  1311,  1869,  2217,   111,  1301,  1913,  1626,
    2209,  2084,   777,  2067,   709,  1301,   216,  1372,  1502,  -666,
    1531,  2146,   464,  1355,  1863,  1217,  1261,  1890,   802,  1301,
    1461,   346,   247,  2705,   260,   855,  2249,  2272,   265,   850,
   -1823,   134,   135,  1649,   136,    99,  2173,  1431,   412,   143,
     144,   393,   107, -1574,  2041,   221,  2091,  1793,   162, -1867,
   -1575,  1442,   280,  1872, -1767, -1763,  2494, -1763,   833,   833,
     536,  2283,  1589,   361,  2386,   170,  1891,   127,   802,  2081,
    2500,   212,   292,   704,  1018, -1867,   530,  1646,  1189,  1785,
     481,   298,  1992,   837,  1217,  2246,  2720,   114,  2005,  1580,
   -1601,  2440,  1189,   220,  2220,  1486, -1836,  2130,  1127,  1541,
    1854,    42,  1599,  1541,  1718,   466,  1719,  2667, -1867,   833,
    2743,   449,   705,  2171,    94,  1639,  1127,  2076,  2339, -1823,
    -664, -1801,   746,  1246,   252,   328,   414,  1360,   536,  1828,
       4,   322,   129,  1858,  1634,  1225,   259,    23,   420,   183,
   -1580,  2349,  1025,  1825,   222,  2527,   725, -1867,  -666,  1453,
    1858,  1476,  -666,  1677,  2183,   406,  1642,   -96,   713,    26,
     740,  2207,  2628, -1865,   439,   998,   128,  1185,  1905,  1807,
       3,   413,   611,  1573,   723,  1189,    47,  1217,  1285,   725,
     851,  2019,   296,    15,  1573,    91,  1892,    94,  1203,  1286,
     300,  2652,  1177,  1178,  1808,  1243,  1313,   419,  1787,  1183,
     516,   275,   276, -1867,   612,   188,   407,    43, -1769,  -666,
     440,  1204,   189,   753, -1867,  1816,  1643,  1454,   726,  1644,
    1889,  2571,  1389,   758,    24,  2663,   205,  2006,   184,  1631,
    2166,  1962,   724,  2214,  2167,  2653,   130,   714,  2215,   715,
     517,  1301,  1678, -1763,  1236,  1573, -1542,   851,  2242,  2250,
    1893,   728,  1278,  1282,  2102,   312,  2077,  2227,  2228,  -664,
    2020,  2229,  1307,  -664,  1217,   315,   747,   761,    43,  1325,
    1327,  1243,  1174,     5,  1128,  2132,  2350,   762,  2355,  1189,
    1207,   139,   213,   139,   139,  1189,   244,   494,  1384,  1236,
     139,   154,  1128,  1241,  1189,   414,   411,  1189,   486,   487,
     -96,     5,  1966,  1868,  2266,   492,  1632,   139,  2235,  2267,
     508,   508,  2273,   508,  1407, -1867,   508,   515,  1360,   154,
    -664,  1967,   486, -1763,   425, -1578, -1767,  2325,  1973,   467,
    2251,  2107,   137,  2284,   137,   437,  1003,   -35,  1264,   835,
    2110,   736,   281,  1876,   444,   445,  1863,   446,   447,  1863,
    1449,   129,  -666,   453,   139,   998,   998,   998, -1542,   763,
    1420,  1420,  1420,  1189,  1581,   282,  2490,  2441,  1910,   543,
     470,  2056,  1763,  1433,  1435,  1579,   154,   998,   139,   139,
    1441,   838,  1390,  1826,   468,  2247,   493,  1788,   261,  1290,
     450,  1264,   756,   543,   583, -1767,  1556, -1801,  1208,  1209,
    1556,  2668,  1317,   369,   795,   284,   154,   706,  1190,  2365,
     244,  -513,  1477,   188,   710,  2040,  1600,   190,   137,   139,
     189,   244,  1190,  1261,   690,  1570,  2358, -1854,  2413,   764,
    2100,   701,  2082,  2501,   583,  1391,  1503,  1582,   139,  -513,
    -513,  2406,   137,   537,   754,  2555,  2556,   137,   541,   244,
     256,  1658,  1904,  1874,   451,   130,  1590,    97, -1796,  1264,
    1191,  1635, -1836,  -664,  1301,  1390,  1481,   578,  2425, -1767,
    2427,   856,   212,   347, -1646,   765,  2285,   741,  1014,   795,
     776,  1894,   998,   266,  1917,  2252,  1007,   594, -1767,   596,
     191,   744,   601,   603,  2411,   605,  1019,  1636,  1517,  1532,
    1261,  2445,   293,  2064,  1573,  1190,  2560,  -671,  1261,  2096,
     711,   537,  1448,   137,  1176,  1384,   262,  2050,  1391,   137,
     395,   285,  1264,   137,   683,   766,  1003,  1003,  1003,   692,
    1468,  2463,  2464,  2528,   244,  2054,   703,  2115, -1767,  1983,
     998,   998,   998,  1503,  2587,  2588,  2323,   192,  1003,   998,
     998,   998,   193,  -513,   137,  1827,  1194, -1648,   149,   610,
   -1666,  1195,   998,   998,   998,   998,   998,   998,   998,   998,
    1859,  1359,   998,  1261,  2154, -1767,  1390,   506,   352,  1863,
    2084,  1860,  -513,  2069,  -671,   217,   323,  1859,  2635,  1007,
    2073,   708,  2636,  2637,  -669,   749,   758,  2304,  1860,   431,
     836,   685,   513,  2492,  2223,   841,  1794,  2493,  1024,  1190,
     844,  2711,  1461, -1867,  1243,  1190,  1984, -1867,   846,   846,
   -1867,  2660,   964,   329,  1190,   190,    18,  1190,   137,  1391,
     758, -1767,  1261,  1525,  1756,  1009,   781,  1255, -1867,   782,
     761,   284,  2103, -1542,  2147,  1822,  1261, -1763,  2368, -1763,
     762, -1542, -1542,  1003,  1496,  2710, -1542,   194,  1853,  1855,
    2660,  1684,  1264,  1260,  2276,  1272,  2278, -1642,  2046,  2148,
    1814,  -669,  -513,  2060,   761,  1318, -1644,   154, -1867, -1639,
    1811,  1344,  2062,   213,   762,   584,  1194,   756,  1347,  1360,
    1352,  1195,  2207,  1190,  1942,  1378,  1570,  2149,   191,    28,
    2561,  2562,  1943,  -661,   454,  2309,   518,   758,  2369,  1400,
    2451,  1003,  1003,  1003,    16,   758,  2281,   725, -1767,  1703,
    1003,  1003,  1003,  1427,  2551,  2552,  2143,  1906,  1427,     5,
    2452,  2557,   763,  1003,  1003,  1003,  1003,  1003,  1003,  1003,
    1003,  2174,  1427,  1003,  2255,  1696,  2096,  1704,  1705,  2433,
    2298,   761,  2299,  2546, -1781,   192,  2453,   285,  2340,   761,
     193,   762,  1575,   223,  2129,  1790,   763, -1854,  1940,   762,
    1250,   686,  1470,  2434,  2435,  1293,  1301,  1573,   218,  1955,
     758,  2454,  1959,  2627,  1849,  1850,  1851,  1852,   306,   730,
    1963,  1166,  1810,   244,   137,  1344,   244,  1718, -1867,  1719,
    2116,  2379,   764,   330,  2234,  -513,  1487,  1814,  1956,  2517,
     585,  2357,   255,  1526,  2518,  2715,   229,  1505,  2238,  1453,
      27,   432,  2748, -1867,   761,  2342,   188,  1699,  1816,   137,
    2344,   697,  2204,   189,   762, -1763,   764,  2264,  2589,   758,
    2370,   519,  -661,   763,   604,  2371,  -661,  1985,   765,  2117,
      33,   763,  2126,   758,   137,   139,   139,  1212,   244,  2207,
     230,  1433,   137,  1433,   331,   256,   137,  2288,  1944,   998,
     231,  2290,   188,  1026,   301,  1988,  1456,  2749,  1344,   189,
    1508,  1924,   765,   761,  1354,  2750,  2567,  1454,  2319,   137,
      94,   758,   137,   762,  1890,  2270,  2270,   761,   766, -1867,
    1945,  1294,  1295,  -661,  1404,    36,   362,   762,    39,  2175,
    2318,  2512,   154,   764,    40, -1763,   763,  2134,  1296,  2687,
     137,   764,  1946,  1251, -1867,  1252,   137,  1360,   224,   137,
    2519,   307,   766,  2657, -1783,   761,  1957,   227,   363,  2436,
     725,   520,   698,  1891,   137,   762,   254,  1543,  1544,  2127,
    1249,  1497,   233,    48,  1268,  2277,  2287,  2279,   998,   765,
    1617,  1268,  1303,  2055,  2630,   326,  1991,   765,  1277,  1268,
    2751,  1328,  1322,  1297,  2419,   763,  1947,  1343,  2356,  1350,
    1706,  1350,  1358,  1375,  1322,  1762,   764,  1545,  1546,   763,
    1924,   586,  2256,  2257,  2258,  1488,  1264,   345,  2455,   154,
    2412,  1350,  1573,   137,   758,  1387,  2414,   254,  2322,   766,
     244,   137,   732,  2415,  2416,   725,  2670,   766,  1935,  1457,
    2702,  2584,   234,    97,  2703,   117,  1329,   763,  1491,   401,
     417,   615,   765,  2118,  1330,    52,   228,  1948,   190,   404,
    1003,  2674,   720,   244,   395,   764,  -661,   442,   761,  1264,
     998,  1815,   998,  1995,  2051,  1659,  2259,  2375,   762,   764,
     717,   831,   831,  1892,   998,  1763,  2604,   751,  2605,  2607,
     317,  1149,  2608,  2609,  2156,  2623,   137,   783,  1270,  1578,
    2548,  1249,   766,    53,   190,   756,  2456,   734,  2048,  2457,
    2458,   765,  1196,   100,  2733,  2074,    94,   764, -1088,   752,
    1268,  1197,  2459,   756,  2051,   765,  2753, -1796,  2738,  1446,
    2085,   191,   831,  1707,  1660,  1489,  2474,  2475,   237,  1331,
     154,    54,   229,    55,   808,    56,   757,  1893,   395,  1003,
    2727,   318,   319,    57,  1949,   137,    94,  1268,  1610,  2624,
     763,   766, -1088,   765,   244, -1867,  2315,  1648,  1268,   137,
     832,   832, -1088,  1194,  1925,   766,   811,   191,  1195,  2539,
     395,   834,  2728,  1150,   137, -1867,   230,  1620,   192,  2540,
    1756,   526,   155,   193,   156,  2210,   231,   967,   471,   472,
     473,  2260,  2261,  2729,  2506,  2716,  2262, -1781,  1611,    58,
     232, -1867,  1358,   766,   968,   812,   813,   814,   815,   816,
    1557,   832,  1558,  1017,  1151,  1268,  2708,  2572,  2717,  1268,
     764,  1015,    49,  2311,   192,  2544, -1867,  1672,  1918,   193,
    1921,  1003,  2241,  1003, -1650,   253,   171,  2532,    51,  2480,
    1427,   630,   631,  1152, -1088,  1003,  2048,  1878,  2312,  2481,
    1879,   556,  2708,  1880,  1881,   139,  2573,  1919,  1879,  2437,
    2545,  1880,  1881,  2718,  1603,  1491,   765,   557,   233,  1430,
    1674,  2503,  2482,  1925,  2119,  1974,    93,  2539,   352,  1194,
     172,   299,  1604,  2314,  1195,   101,  2719,  2540,  2438, -1580,
     173,    94,    60,  2574,   139,  2583,   969,   970,   971,   758,
    2631,  2508,  2483,  2509,  1193,   972,   795,   558,  1322,   474,
     137,   106,   758,  1194, -1088,  2697,   766,   758,  1195,  1938,
    1795,  2333,  2333,   475,  2270,  2270,  2265,   109,  2559,  2366,
    1939,   759,   760,  2709,  2648,  2245,   110,    61,   234,  1153,
     758,   235,   236,   761,   817,   818,   819,   820,   821,   822,
     823,   643,   644,   762,   108,  2206,   761,  2675,  2677,  2237,
   -1088,   761,   112,   976,   977,   978,   762,  2331,  1894,   979,
    1321,   762,   174,  1795,  1908,  1693,  1411,  1414,  1417,   113,
      21,    22,  1321,  2018,   761,  1194,  2714,  1698,   114,  2245,
    1195,  1000,  1711,  1748,   762,  1750,  2028,  2029,  1929,    46,
    2032,   120,  2626,  1694, -1088,  2724,  1194,   476,  1443,   980,
   -1088,  1195,  1194,  1680,  2202,  1452,  1682,  1195,   122,  1452,
     477,  1249,  1685,  1954,  1194,  2429,  1689,    64,   155,  1195,
     156, -1763,   124,  1691,   237,   763,  2033,    94,  1268,  2034,
      13,  1795,   175, -1867,   559,    13,   244,  2747,   763,  1438,
    1439,  1440,  1249,   763,  1976,   560,  1978,   595,   140,  1980,
    1981,  1982,   602,   137,  2245,  1986,   429,   126,  1989,  1990,
      67,  1831,  1996,  1997,  1832,   509,   763,   511,  1268,   149,
     512,  1833,  1834,   142,   982,  1767,  1768,   163,   176,  1936,
     118,   164, -1558, -1558, -1558, -1558,   165,   824,  1965,  1519,
    1520,  1521,  1522,   168,  1795,   764, -1557, -1557, -1557, -1557,
     825,   182,   478,  2469,   186,  2472,  1882,  1883,   764,  2007,
     597,  2008,   598,   764,  1882,  1883,   187,  1769,  1835,  1770,
     194,  1771,   139,  2640,  2641,   983,   984,   714,   177,   715,
     205,  1884,  1885,    68,  2086,  2087,   764,  1979,   243,  1884,
    1885,   765,   729,   731,   733,   735,   998,   248,   561,   562,
    1663,  2078,  1664,  2079,   765,  1772,  1773,  1774,  2013,   765,
    2230,   249,  2231,   563,  2362,   564,  2363,   250,  2245,   988,
     251,  1000,  1000,  1000,  2421,  1952,  2422,  1422,  1423,  2021,
    2522,  2477,   765,  2478,  1769,   258,  1770,  1836,   274,   989,
     270,   766,  1511,  1000,   990,  1184,   279,  1186,   137,  1436,
    1437,   991,   295,   137,   766,  1775,   297,  1776,   154,   766,
     301,  2360,   303,   304,  1777,   308,  1837,  1778,   309,   310,
     313,   314,  2678,  2544,   327,   334,   335,   337,  2537,  2673,
    1268,   339,   766,   341,  1268,  1993,  1994,  1268,  1838,   343,
    1249,   350,   352,  2563,   354,   355,  2004,  2564,  2565,   357,
     565,  1831,   393,  2009,  1832,   395,   398,   399,  2679,   402,
     404,  1833,  1834,   409,   137,   421,   410,   188,   422,   244,
     423,   430,   414,   455,   456,  2539,   458,  2136,   460,   429,
    -348,   488,   491,  2022,   484,  2540,   495,   496,   503,   510,
     523,  1268,  1839,   522,   524,   544,  1228,   566,  1242,   528,
     534,  1258,   548,   550,  1779,  1280,  1780,   549,  1835,  -361,
     552,  2307,   553,   555,   579,   580,   589,  1003,   590,   606,
    1316,   588,   608,  1360,   613,   617,  1342,   614,  2181,   618,
     689,   702,   691,   694,   719,   736,   738,  2181,  1929,   755,
    1268,  1268,  1268,   745,  2068,   771,  1840,  1398,   774,  1402,
     778,   780,   787,   790,   791,   793,  1000,  1000,  1000,   795,
     798,   803,   805,  2075,   809,  1000,  1000,  1000,  1425,  2080,
     835,   842,   848,  1425,   962,  2083, -1650,  1836,  1000,  1000,
    1000,  1000,  1000,  1000,  1000,  1000,   965,  1425,  1000,  2157,
    2158,  2159,  2160,  2161,  2162,  2163,  2164,  1007,  1013,  1268,
    1016,  1012,  1034,  1037,  1029,  1138,  1837,  1841,  1157,  1165,
    1168,  1198,  1170,  1210,  1171,  1172,  1467,  1179,  1214,  1283,
    1842,  1223,  1405,  1180,  1304,  1407,  1418,  1181,  1838,   139,
    1216,  1182,  1187,  1199,  1224,   628,  1201,  1444,  1202,  1843,
    1342,  1322,  1258,  1445,  2203,  1446,  1322,  1419,  1429,  1459,
    1465,  2221,  1471,  1480,  1482,  1718,  1769,  1719,  1770,  1494,
    1500,  1506,  1529,  1509,  1571,  1322,  1322,  1523,  1575,  1322,
    1591,  1588,  1592,  1594,  1527,  1596,  1605, -1560,  1608,  1607,
    1606,  1613,  1839,  1615,  1622,  1618,  1229,  1624,  1638,   756,
    1360,  2680,  1640,  1268,  1217,  2681,  2682,  1650,  1662,  1781,
    2136,  1655,  1668,  1666,  1844,  1670,  2201,  1675,  1681,  2317,
    2271,  2271,  1322,  1683,  1686,  1687,  1688,  1322,  1322,  1322,
    1322,  1700,  2671,  1342,  1754,  1690,  1692,  1268,  2205,  1268,
    1695,  1697,  1702,  1751,  1752,  1791,  1840,  2683,  1760,  1797,
    1798,  2700,  2643,  1800,  2216,  1627,  2218,  1802,  1243,  1782,
    2219,  1812,  1823,  2684,  2685,  1816,  1847,  1829,  2224,  1511,
    1783,  1875,  1888,   967,  1864,  1867,  1268,  1581,  1268,  1911,
    1903,  1654,  2662,  1930,  1926,  1934,  1941,  1961,  1968,  2000,
     968,  2001,  2011,  2014,  2017,  2024,  2026,  2023,  2038,  2043,
    2044,  2045,  2039,  1380,  2042,  1762,  2057,  1841,  2061,  2066,
    2592,  2070,  2065,  1461,  2090,  2092,  2097,  2098,  2104,  2105,
    1842,  2108,  2111,  2112,  2131,  2137,  2139,   998,   998,  2140,
    2143,  1268,  2150,  2151,  2184,  2185,   646,  2177,  2186,  1843,
    2187,  2196,  2198,  2207,  1322,  1002,  2225, -1579,   139,  2239,
    2274,  2291,  2297,  2593,  2300,  2594,   998,  2303,  2308,  2319,
    2321,  2335,  2345,   543,  2338,  2347,  2306,  2380,  2343,  2051,
    2417,  2431, -1535, -1577,   429,   998,  2446,  2426,  2447,  2428,
    2448,  2449,   969,   970,   971,  2460,  2595,  2465,  2470,  2498,
    2499,   972,  2503,  2510,  2350,  1000,  2511,  2513,  2529,  2516,
    2530,  2531,  2535,   758,  1844,  2550,  2589,  2596,  2568,  2569,
    2625,  2634,  2633,  2638,  2644,  2665,  2646,   998,  2694,  1652,
    2695,  2725,  2734,  1268,   429,  1268,  2664,  2737,  2739,   650,
    2741,  2746,    17,    92,   125,  2597,  1231,    38,   167,   210,
     257,   267,   974,   119,   975,   278,   291,   761,   242,   976,
     977,   978,   211,   139,   546,   979,  1268,   762,  2133,   505,
     324,  1211,  1232,   527,   457,    52,  1740,   847,  2443,   799,
    2732,  1673,  2125,  1972,  2359,   443,  1627,  2723,  2736,  2699,
    2376,  2377,  1222,  2282,  1000,  1033,  1011,  1268,   960,  1463,
    2031,  2089,  2030,  2497,  2505,   980,  2059,  1479,  1003,  1003,
    1916,  1805,  2280,  1821,  1806,  2424,  1857,   139,   655,  1923,
    1865,  2101,  2286,    53,   981,  1887,  1572,  2598,  2430,  1899,
    1932,  1322,   583,  1175,  2302,  1322,  2113,  1003,  1595,  1907,
    2310,  1598,  2313,  2195,  2599,  1002,  1002,  1002,  2141,   763,
    1933,  2165,  2324,  1630,  1629,  1376,  1003,  2334,  1960,  1653,
    2193,    54,  2468,    55,  2194,    56,  2600,  1002,  1627,  2731,
    1971,  2473,  2526,    57,  2476,  1871,  2327,  2328,  2329,  2330,
     982,  1621,  1804,  1268,   214,  1268,  1000,  2601,  1000,   333,
    2462,   773,  2155,  1485,  2010,  1425,   311,  1188,  1003,   294,
    1000,  2521,   448,  2632,   540,  2661,  2602,   807,  2515,   273,
     490,  2296,  2124,   664,  2603,  2179,   784,  2688,     0,   764,
     429,  1902,     0,     0,     0,     0,   600,     0,  1923,    58,
       0,   983,   984,     0,  2495,     0,     0,     0,     0,  2496,
       0,  2015,     0,     0,  2016,     0,     0,     0,     0,  2271,
    2271,     0,  1322,  1322,  2502,     0,     0,  1322,  1322,  1322,
       0,  1322,     0,     0,     0,   765,     0,     0,     0,     0,
       0,     0,  1002,     0,     0,   988,     0,  1269,   358,     0,
       0,  1627,     0,     0,  1269,     0,     0,     0,     0,     0,
       0,    59,  1269,   359,     0,   989,     0,  2049,     0,     0,
     990,  2523,     0,   360,     0,     0,  1269,   991,     0,   137,
       0,  1322,     0,     0,     0,   766,     0,     0,     0,     0,
       0,     0,    60,  1249,     0,     0,     0,     0,     0,     0,
    1002,  1002,  1002,  2542,  2543,     0,     0,     0,   361,  1002,
    1002,  1002,  1426,     0,     0,  2645,     0,  1426,     0,     0,
    2553,  2554,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,
       0,  1426,  1002,     0,     0,     0,     0,    61,  2566,     0,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1249,     0,     0,     0,
       0,  1469,     0,  2586,     0,     0,     0,     0,  2590,  2591,
       0,     0,  2696,  1627,  1627,     0,  2698,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2629,     0,     0,  1269,     0,     0,     0,  1249,     0,     0,
       0,     0,  2142,     0,     0,     0,    63,     0,     0,     0,
    1627,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2647,     0,     0,  2649,  2650,     0,     0,    64,     0,     0,
    1269,     0,     0,  1249,     0,     0,     0,  2182,     0,     0,
       0,  1269,     0,     0,  2192,  2192,     0,     0,     0,     0,
       0,     0,    65,     0,    66,     0,     0,  2740,     0,     0,
    2754,     0,     0,     0,     0,   362,  2672,     0,     0,  1258,
      67,     0,     0,     0,   858,     0,   859,     0,   860,  2213,
       0,     0,     0,   861,     0,     0,     0,     0,     0,  1628,
       0,   862,     0,     0,     0,     0,     0,   363,  1269,     0,
       0,     0,  1269,     0,     0,     0,     0,  -234,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   863,   864,     0,     0,     0,     0,
       0,     0,     0,  2244,   865,     0,     0,     0,     0,     0,
       0,     0,     0,    68,     0,   866,     0,     0,   867,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   364,   868,   967,     0,     0,   365,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2289,     0,
     968,     0,     0,     0,     0,   869,     0,  2244,  1627,     0,
       0,     0,     0,   870,     0,   871,  1627,     0,   366,     0,
       0,     0,     0,  1796,     0,     0,   367,     0,     0,     0,
       0,     0,     0,     0,     0,  1916,     0,     0,     0,   368,
       0,     0,     0,     0,   967,     0,   872,     0,     0,  1002,
       0,     0,     0,     0,     0,     0,     0,   873,     0,     0,
       0,   968,   874,     0,  2326,     0,     0,     0,   369,     0,
       0,   370,  1000,     0,     0,     0,  1796,     0,     0,   371,
       0,     0,  2244,     0,     0,     0,  1627,     0,   875,     0,
    -231,     0,   969,   970,   971,   876,     0,     0,   877,   878,
    1229,   972,     0,   756,     0,     0,     0,     0,  2367,   879,
       0,     0,     0,     0,  1258,     0,   880,     0,   881,     0,
     372,   882,     0,   373,     0,     0,     0,     0,     0,     0,
    1628,     0,     0,     0,     0,     0,     0,     0,  1002,     0,
       0,  1269,     0,     0,  1796,     0,     0,     0,     0,     0,
    2420,     0,     0,   969,   970,   971,     0,  1484,     0,   976,
     977,   978,   972,   883,     0,   979,     0,   884,     0,   885,
       0,     0,     0,     0,   758,     0,     0,   967,     0,   886,
       0,  1269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   968,     0,  2244,     0,     0,     0,
       0,     0,     0,     0,     0,   980,   887,  1796,     0,     0,
       0,     0,  1628,     0,     0,     0,     0,     0,   761,   888,
     976,   977,   978,     0,     0,     0,   979,     0,   762,     0,
    1002,     0,  1002,     0,     0,     0,     0,     0,     0,  1426,
       0,     0,     0,     0,  1002,   889,   890,  1937,     0,     0,
       0,     0,     0,     0,     0,     0,   891,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   980,     0,     0,     0,
     892,   893,     0,     0,     0,     0,     0,   894,     0,     0,
     982,   895,     0,     0,     0,     0,   969,   970,   971,   896,
       0,     0,     0,     0,     0,   972,     0,     0,     0,   897,
       0,     0,     0,     0,     0,     0,     0,   758,   898,     0,
     763,     0,     0,     0,     0,  2507,     0,   899,     0,     0,
       0,     0,   900,   901,     0,  1628,   902,     0,   903,     0,
       0,   983,   984,     0,     0,     0,   904,     0,     0,     0,
    1231,   982,     0,  1269,     0,     0,   974,  1269,   975,   905,
    1269,   761,     0,   976,   977,   978,     0,     0,  2533,   979,
       0,   762,     0,     0,     0,  2536,  1232,   906,  2538,     0,
       0,     0,     0,   907,     0,   988,     0,     0,   908,     0,
     764,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   983,   984,     0,   989,     0,     0,     0,   980,
     990,     0,     0,     0,  1269,   909,     0,   991,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,   981,  2570,
       0,     0,     0,     0,     0,     0,   765,     0,     0,     0,
       0,     0,     0,  2585,     0,     0,   988,     0,     0,     0,
       0,     0,     0,   763,     0,     0,     0,  1628,  1628,  1258,
       0,     0,     0,  1269,  1269,  1269,   989,     0,     0,     0,
       0,   990,     0,     0,     0,     0,     0,     0,   991,     0,
     137,     0,     0,     0,   982,     0,   766,     0,     0,     0,
       0,     0,     0,     0,  1628,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2651,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1269,   764,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   983,   984,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1000,  1000,     0,     0,     0,     0,     0,
       0,     0,  1938,     0,     0,     0,     0,     0,     0,   765,
    2701,     0,     0,  1939,     0,     0,     0,     0,     0,   988,
       0,     0,  1000,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2722,  2722,     0,     0,     0,   989,
       0,  1000,     0,     0,   990,     0,     0,     0,     0,     0,
       0,   991,     0,   137,     0,     0,  1269,     0,     0,   766,
       0,     0,     0,     0,     0,     0,     0,     0,   858,     0,
     859,     0,   860,     0,     0,     0,     0,   861,     0,  2745,
       0,     0,     0,  1000,     0,   862,     0,     0,     0,     0,
    1269,     0,  1269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1628,     0,     0,     0,     0,     0,   863,   864,
    1628,     0,     0,     0,     0,     0,     0,     0,   865,  1269,
       0,  1269,     0,     0,     0,     0,     0,     0,     0,   866,
       0,     0,   867,     0,     0,     0,   967,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   868,     0,     0,     0,
       0,     0,     0,   968,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1002,     0,     0,   869,
       0,     0,     0,     0,  1269,     0,     0,   870,     0,   871,
    1628,     0,     0,     0,     0,     0,  -708,     0,  -708,  -708,
    -708,  -708,  -708,  -708,  -708,  -708,     0,  -708,  -708,  -708,
       0,  -708,  -708,  -708,  -708,  -708,  -708,  -708,  -708,  -708,
     872,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   873,     0,     0,     0,     0,   874,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1334,   969,   970,   971,     0,     0,
       0,     0,   875,     0,   972,     0,     0,     0,     0,   876,
       0,     0,   877,   878,     0,     0,  1269,     0,  1269,     0,
       0,     0,     0,   879,   858,     0,   859,     0,   860,     0,
     880,     0,   881,   861,     0,   882,     0,     0,     0,     0,
       0,   862,     0,     0,     0,     0,     0,     0,     0,  1269,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1335,     0,   976,   977,   978,     0,     0,     0,   979,     0,
       0,     0,     0,     0,   863,   864,     0,   883,     0,     0,
    1269,   884,     0,   885,   865,     0,     0,     0,     0,     0,
       0,     0,     0,   886,     0,   866,     0,     0,   867,  -708,
    -708,  -708,     0,  -708,  -708,  -708,  -708,     0,   980,     0,
       0,     0,   868,     0,     0,     0,     0,     0,     0,     0,
     887,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   888,     0,   869,     0,     0,     0,     0,
       0,     0,     0,   870,     0,   871,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   889,
     890,     0,     0,     0,     0,     0,  1269,     0,  1269,     0,
     891,     0,     0,     0,     0,     0,   872,     0,     0,     0,
       0,     0,     0,   982,   892,   893,     0,   873,     0,     0,
       0,   894,   874,     0,     0,   895,     0,     0,     0,     0,
       0,     0,     0,   896,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   897,     0,     0,     0,     0,   875,     0,
       0,     0,   898,     0,     0,   876,     0,     0,   877,   878,
       0,   899,     0,     0,   983,   984,   900,   901,     0,   879,
     902,     0,   903,     0,     0,     0,   880, -1867,   881,     0,
     904,   882,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -708,     0,     0,     0,     0,     0,     0,
       0,   858,     0,   859,     0,   860,     0,     0,   988,     0,
     861,   906,     0,     0,     0,     0,     0,   907,   862, -1141,
       0,     0,   908,   883,     0,     0,     0,   884,   989,   885,
       0,     0,     0,   990,     0,     0,     0, -1141,     0,   886,
     991,   244,   137,  -708,     0,     0,     0,     0,     0,   909,
       0,   863,   864,     0,     0,     0,     0,     0,     0,     0,
       0,   865,     0,     0,     0,     0,   887,     0,     0,     0,
       0,     0,   866,     0,     0,   867,     0,     0,     0,   888,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   868,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   889,   890,     0,     0,     0,
       0,     0,   869,     0,     0,     0,   891,  1002,  1002,     0,
     870,     0,   871,     0,     0,     0,     0,     0,     0,     0,
     892,   893,     0,     0,     0,     0,     0,   894,     0,     0,
       0,   895,     0,     0,     0,     0,  1002,     0,     0,   896,
       0,     0,     0,   872,     0,     0,     0,     0,     0,   897,
       0,     0,     0,     0,   873,  1002,     0,     0,   898,   874,
       0,     0,     0,     0,     0,     0,     0,   899,     0,     0,
       0,     0,   900,   901,     0,     0,   902,     0,   903,     0,
       0,     0,     0,     0,     0,   875,   904,     0,     0,     0,
       0,     0,   876,     0,     0,   877,   878,  1002,     0,  1661,
       0,     0,     0,     0,     0,     0,   879,     0,     0,     0,
       0,     0,     0,   880,     0,   881,     0,   906,   882,     0,
       0,     0,     0,   907,     0,     0,     0,     0,   908,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   909,     0,     0,     0,     0,
     883,     0,     0,     0,   884,     0,   885,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   886,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   887,     0,     0,     0,     0,     0,     0,
       0,     0,  1039,     0,  1040,     0,   888,     0,     0,  1041,
       0,     0,     0,     0,     0,     0,     0,  1042,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   889,   890,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   891,     0,     0,     0,     0,     0,     0,
    1043,  1044,     0,     0,     0,     0,     0,   892,   893,     0,
    1045,     0,     0,     0,   894,     0,     0,     0,   895,     0,
       0,  1046,     0,     0,  1047,     0,   896,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   897,     0,  1048,     0,
       0,     0,     0,  1229,     0,   898,   756,     0,     0,  1537,
    1538,  1539,     0,     0,   899,     0,     0,  1540,     0,   900,
     901,  1049,     0,   902,     0,   903,     0,     0,     0,  1050,
       0,  1051,     0,   904,     0,     0,     0,     0,  1052,     0,
    1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,     0,  1061,
    1062,  1063,     0,  1064,  1065,  1066,  1067,  1068,  1069,  1070,
    1071,  1072,  1073,     0,   906,     0,     0,     0,     0,     0,
     907,     0,     0,  1074,     0,   908,     0,     0,  1075,     0,
     967,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   968,     0,     0,
       0,     0,   909,     0,  1076,     0,     0,     0,     0,     0,
       0,  1077,     0,     0,  1078,  1079,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1080,     0,     0,     0,     0,
       0,     0,  1081,     0,  1082,     0,     0,  1083,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1541,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1542,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1084,
       0,     0,     0,  1085,     0,  1086,     0,     0,     0,   969,
     970,   971,     0,     0,     0,  1087,     0,     0,   972,     0,
       0,     0,     0,     0,  1543,  1544,     0,     0,     0,     0,
     758,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1088,     0,     0,     0,     0,     0,     0,     0,
    1870,     0,     0,     0,     0,  1089,     0,     0,     0,     0,
       0,     0,     0,  1231,  1545,  1546,     0,     0,     0,   974,
       0,   975,     0,     0,   761,     0,   976,   977,   978,     0,
       0,  1090,   979,     0,   762,     0,     0,     0,     0,  1232,
       0,     0,  1091,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1547,     0,     0,     0,     0,  1092,  1548,     0,
       0,     0,  1549,  1093,     0,     0,     0,  1094,     0,     0,
    1550,     0,   980,     0,     0,  1095,     0,  1551,     0,     0,
       0,     0,  1552,  1229,     0,  1096,   756,     0,     0,     0,
       0,   981,     0,     0,  1097,     0,     0,     0,     0,  1229,
       0,  1553,   756,  1098,     0,  1537,  1538,  1539,  1099,  1100,
       0,     0,  1101,  1540,  1102,     0,   763,     0,     0,     0,
       0,     0,  1103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   982,     0,     0,
       0,     0,     0,  1105,     0,     0,     0,     0,     0,  1106,
     967,     0,     0,     0,  1107,     0,     0,     0,     0,     0,
       0,     0,  1230,     0,     0,     0,   967,   968,     0,     0,
       0,     0,     0,     0,     0,     0,   764,     0,     0,     0,
       0,  1108,     0,   968,     0,     0,     0,     0,   983,   984,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1554,     0,  1555,     0,  1556,     0,     0,  1557,     0,  1558,
    1559,  1560,   765,     0,  1561,  1562,  -874,     0,     0,  -874,
       0,     0,   988,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1541,     0,     0,     0,     0,     0,     0,
       0,     0,   989,  1542,     0,     0,     0,   990,     0,   969,
     970,   971,     0,     0,   991,     0,   137,     0,   972,  1217,
       0,     0,   766,     0,     0,   969,   970,   971,     0,     0,
     758,     0,     0,     0,   972,     0,     0,     0,     0,     0,
    1543,  1544,     0,     0,     0,     0,   758,     0,     0,     0,
       0,     0,     0,  -874,     0,     0,     0,     0, -1767,     0,
       0,     0,     0,  1231,     0,     0,     0,     0,     0,   974,
    -874,   975,     0,     0,   761,     0,   976,   977,   978,  1231,
    1545,  1546,   979,     0,   762,   974,     0,   975,     0,  1232,
     761,     0,   976,   977,   978,     0,     0,     0,   979,     0,
     762,     0,     0,     0,     0,  1232,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1229,     0,  1547,   756,
       0,     0,   980,     0,  1548,     0,     0,     0,  1549,     0,
       0,     0,     0,     0,     0,     0,  1550,     0,   980,     0,
       0,   981,     0,  1551,     0,     0,     0,     0,  1552,     0,
       0,     0,     0,     0,     0,     0,     0,   981,     0,     0,
       0,     0,  -874,  -874,  -874,     0,   763,  1553,     0,     0,
       0,  -874,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   763,  -874,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   967,     0,     0,     0,   982,     0,     0,
       0,     0,     0,     0,     0,  1323,     0,     0,     0,     0,
     968,     0,     0,   982,     0,     0,  -874,     0,     0,     0,
       0,     0,  -874,     0,  -874,     0,     0,  -874,     0,  -874,
    -874,  -874,     0,     0,     0,  -874,   764,  -874,     0,     0,
       0,  1229,  -874,     0,   756,     0,     0,     0,   983,   984,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   983,   984,     0,     0,     0,  1229,
       0,     0,   756,     0,     0,  -874,     0,     0,     0,     0,
    -874,     0,   765,     0,     0,     0,  1554,     0,  1555,     0,
    1556,     0,   988,  1557,  -874,  1558,  1559,  1560,   765,     0,
    1561,  1562,   969,   970,   971,     0,     0,     0,   988,     0,
       0,   972,   989,     0,     0,     0,     0,   990,   967,  -874,
       0,     0,     0,   758,   991,     0,   137,     0,   989,     0,
   -1767,     0,   766,   990,     0,   968,     0,     0,     0,     0,
     991,     0,   137,     0,     0,     0,   967,     0,   766,     0,
    -874,     0,     0,     0,     0,     0,  1231,     0,     0,     0,
       0,     0,   974,   968,   975,     0,     0,   761,     0,   976,
     977,   978,     0,     0,     0,   979,  1380,   762,     0,     0,
       0,     0,  1232,  -874,     0,     0,     0,     0,     0,  -874,
       0,     0,     0,     0,  1229,     0,     0,   756,     0,     0,
       0,  -874,  -874,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   980,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   969,   970,   971,
       0,     0,     0,     0,   981,  -874,   972,     0,     0,     0,
       0,     0,     0,     0,     0,  -874,     0,     0,   758,     0,
       0,  -874,     0,     0,     0,   969,   970,   971,     0,   763,
       0,     0,     0,     0,   972,  -874,     0,     0,     0,     0,
    -874,   967,     0, -1767,     0,     0,   758,  -874,     0,  -874,
       0,  1231,     0,  1385,     0,  -874,     0,   974,   968,   975,
     982,     0,   761,     0,   976,   977,   978,     0,     0,     0,
     979,     0,   762,     0,     0,     0,     0,  1232,     0,  1231,
       0,     0,     0,     0,     0,   974,     0,   975,     0,     0,
     761,     0,   976,   977,   978,     0,     0,     0,   979,   764,
     762,     0,     0,     0,     0,  1232,  -931,     0,     0,  -931,
     980,   983,   984,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   981,
       0,     0,     0,     0,     0,     0,     0,     0,   980,     0,
       0,     0,     0,     0,     0,   765,     0,     0,     0,     0,
     969,   970,   971,     0,   763,   988,     0,   981,     0,   972,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   758,     0,     0,     0,   989,     0,     0,     0,     0,
     990,     0,   763,  -931,     0,   982,     0,   991,     0,   137,
       0,     0,     0,     0,     0,   766,     0,     0,     0,     0,
    -931,     0,     0,     0,  1231,     0,     0,     0,     0,     0,
     974,     0,   975,   982,     0,   761,     0,   976,   977,   978,
       0,     0,     0,   979,   764,   762,     0,     0,     0,     0,
    1232,     0,     0,     0,     0,     0,   983,   984,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1229,     0,   764,   756,     0,     0,  1473,     0,     0,     0,
       0,     0,     0,   980,   983,   984,  1511,     0,     0,     0,
     765,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     988,     0,   981,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -931,  -931,  -931,     0,     0,     0,   765,     0,
     989,  -931,     0,     0,     0,   990,     0,   763,   988,     0,
       0,     0,   991,  -931,   137,     0,     0,     0,     0,     0,
     766,     0,     0,     0,     0,     0,     0,   967,   989,     0,
       0,     0,     0,   990,     0,     0,     0,     0,   982,     0,
     991,     0,   137,     0,   968,     0,  -931,     0,   766,     0,
       0,     0,  -931,     0,  -931,     0,     0,  -931,     0,  -931,
    -931,  -931,     0,     0,     0,  -931,     0,  -931,     0,     0,
       0,     0,  -931,     0,     0,     0,     0,   764,     0,     0,
       0,     0,     0,  1229,     0,     0,   756,     0,     0,   983,
     984,     0,     0,     0,     0,     0,     0,     0,     0,  1229,
       0,     0,   756,     0,     0,  -931,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   765,  -931,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,     0,   969,   970,   971,     0,
       0,     0,     0,     0,     0,   972,     0,     0,     0,  -931,
       0,     0,     0,   989,     0,     0,     0,   758,   990,     0,
     967,     0,     0,     0,     0,   991,     0,   137,     0,     0,
       0,     0,     0,   766,     0,     0,   967,   968,     0,     0,
    -931,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1231,     0,     0,   968,     0,     0,   974,     0,   975,     0,
       0,   761,     0,   976,   977,   978,     0,     0,     0,   979,
       0,   762,     0,     0,     0,     0,  1232,     0,     0,  -931,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -931,  -931,     0,     0,     0,  1229,     0,     0,   756,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   980,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -931,     0,     0,   981,   969,
     970,   971,     0,  1657,     0,  -931,     0,     0,   972,     0,
       0,     0,     0,     0,     0,   969,   970,   971,     0,     0,
     758,     0,     0,   763,   972,  -931,     0,     0,     0,     0,
    -931,     0,     0,     0,     0,     0,   758,  -931,     0,  -931,
       0,     0,     0,   967,     0,  -931,     0,     0,     0,     0,
       0,     0,     0,  1231,   982,     0,     0,     0,     0,   974,
     968,   975,     0,     0,   761,     0,   976,   977,   978,  1231,
       0,     0,   979,     0,   762,   974,     0,   975,     0,  1232,
     761,     0,   976,   977,   978,     0,     0,     0,   979,     0,
     762,     0,     0,   764,     0,  1232,     0,     0,     0,  1229,
       0,     0,   756,     0,     0,   983,   984,     0,     0,     0,
       0,     0,   980,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   980,     0,
       0,   981,     0,     0,     0,     0,     0,     0,     0,   765,
       0,     0,     0,     0,     0,     0,     0,   981,     0,   988,
       0,     0,   969,   970,   971,     0,   763,     0,     0,     0,
       0,   972,     0,  1515,     0,     0,     0,     0,     0,   989,
       0,     0,   763,   758,   990,     0,   967,     0,     0,     0,
       0,   991,     0,   137,     0,     0,     0,   982,     0,   766,
       0,     0,     0,   968,     0,     0,     0,     0,  1792,     0,
       0,   756,     0,   982,     0,     0,  1231,     0,     0,     0,
       0,     0,   974,     0,   975,     0,     0,  1273,     0,   976,
     977,   978,     0,     0,     0,   979,   764,   762,     0,     0,
       0,     0,  1232,     0,     0,     0,  1958,     0,   983,   984,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   983,   984,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   980,     0,     0,     0,     0,
       0,     0,   765,     0,     0,   967,     0,     0,     0,     0,
       0,     0,   988,     0,   981,   969,   970,   971,   765,     0,
       0,     0,   968,     0,   972,     0,     0,     0,   988,     0,
       0,     0,   989,     0,     0,     0,   758,   990,     0,   763,
       0,     0,     0,     0,   991,     0,   137,     0,   989,     0,
       0,     0,   766,   990,     0,     0,     0,     0,     0,     0,
     991,     0,   137,     0,     0,     0,     0,     0,   766,  1231,
     982,     0,     0,     0,     0,   974,     0,   975,     0,     0,
     761,     0,   976,   977,   978,     0,     0,     0,   979,     0,
     762,     0,     0,     0,     0,  1232,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   764,
       0,     0,     0,     0,   969,   970,   971,     0,     0,     0,
       0,   983,   984,   972,     0,     0,     0,     0,   980,     0,
       0,     0,     0,     0,     0,   758,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   981,     0,     0,
       0,     0,     0,     0,     0,   765,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   988,     0,     0,  1231,     0,
       0,     0,   763,     0,   974,     0,   975,     0,     0,   761,
       0,   976,   977,   978,     0,   989,     0,   979,     0,   762,
     990,     0,     0,     0,  1232,     0,     0,   991,     0,   137,
       0,     0,     0,   982,     0,   766,     0,     0,     0,     0,
       0,     0,  2381,     0,     0,  2382,     0,     0,  2383,     0,
       0,     0,     0,     0,     0,     0,  2384,   980,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,   981,     0,     0,     0,
       0,     0,     0,     0,   983,   984,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1031,   763,  2385,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   765,     0,
       0,  2386,     0,     0,     0,     0,     0,     0,   988,     0,
       0,  -358,   982,     0,  -358,     0,     0,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,     0,     0,   989,     0,
       0,     0,     0,   990,     0,     0,     0,     0,     0,     0,
     991,     0,   137,     0,  -358,     0,  -358,     0,   766,     0,
       0,   764,     0,  -358,     0,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,     0,   983,   984,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2387,     0,     0,     0,     0,     0,     0,     0,  2388,     0,
       0,     0,     0,     0,     0,     0,     0,   765,     0,  -358,
       0,     0,  2389,     0,     0,     0,     0,   988,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   989,     0,     0,
       0,     0,   990,     0,  2390,     0,     0,     0,     0,   991,
    -358,   137,     0,     0,     0,     0,     0,   766,     0,     0,
       0,     0,     0,     0,  2391,   530,  2392,     0,  -358,  -358,
    -358,  -358,  -358,     0,     0,  -358,  -358,     0,     0,  -358,
       0,     0,     0,     0,     0,  -358,     0,  -358,  2393,  2394,
       0,     0,     0,  -358,     0,     0,     0,     0,  -358,     0,
       0,  -358,     0,     0,     0,     0,     0,     0,     0,  -358,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2395,     0,  -358,     0,     0,  -358,     0,     0,     0,     0,
       0,  -358,     0,  -358,     0,     0,     0,     0,     0,     0,
       0,     0,  -358,     0,     0,     0,     0,  2396,  2397,   529,
       0,     0,     0,     0,     0,  -358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -358,     0,  -358,
       0,     0,     0,     0,  2398,     0,     0,     0,     0,     0,
       0,  2399,     0,     0,  -358,     0,     0,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  2400,     0,  -358,     0,  2401,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -358,
    -358,     0,     0,  2402,     0,     0,     0,     0,  -358,     0,
       0,  -358,  -358,     0,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,     0,     0,     0,  -358,     0,  -358,     0,     0,     0,
    2403,     0,     0,     0,     0,     0,     0,     0,     0,  2404,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -358,     0,     0,     0,     0,  -358,     0,
    -358,     0,     0,     0,     0,     0,     0,     0,  2405,     0,
       0,     0,     0,     0,     0,     0,     0,  -358,  2406,     0,
       0,     0,     0,     0,  2407,     0,     0,  -358,     0,  -358,
    -358,  -358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -358,     0,     0,     0,   530,     0,     0,  -358,  -358,  -358,
    -358,  -358,     0,     0,  -358,  -358,     0,     0,     0,     0,
    -358,     0,     0,     0,     0,  -358,     0,     0,     0,     0,
    -358,     0,  -358,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -358,     0,     0,     0,     0,  -358,  -358,     0,
       0,  -358,  -358,  -358,     0,     0,     0,     0,     0,     0,
       0,  -358,   620,     0,  -358,  -358,     0,     0,     0,     0,
    -358,  -358,  -358,     0,     0,     0,     0,   621,   531,     0,
     622,   623,   624,   625,   626,   627,   628,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -358,     0,     0,     0,
       0,     0,     0,     0,     0,   629,     0,   630,   631,   632,
     633,   634,   635,   636,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -358,
       0,     0,     0,     0,     0,     0,     0,  -358,     0,     0,
    -358,   637,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -358,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -358,     0,     0,     0,
       0,     0,     0,     0,  -358,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     638,   639,   640,   641,   642,     0,     0,   643,   644,     0,
       0,     0,     0,     0,     0,     0,  -358,     0,  -358,  -358,
    -358,     0,     0,     0,     0,     0,  1713,     0,     0,  1714,
       0,     0,  1715,   622,   623,   624,   625,   626,   627,  1716,
    1717,   645,     0,     0,     0,  -358,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,   646,     0,  1718,
       0,  1719,     0, -1843,  -358,     0,     0,     0,   629,     0,
     630,   631,   632,   633,   634,   635,   636,     0,     0,     0,
       0,  -358,     0,     0,     0,     0,     0,     0,     0,     0,
    -358,  -358,  -358,     0,     0,     0,     0,     0,     0,   647,
       0,     0,     0,     0,  -358,     0,     0,     0,     0,     0,
       0,  -358,     0,     0,   637,     0,     0,   531,     0,     0,
       0,   622,   623,   624,   625,   626,   627,     0,   648,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   649,     0,     0,     0,     0,     0,     0,     0,
     650,     0,     0,   651,     0,  1720,   629,     0,   630,   631,
     632,   633,   634,   635,   636,     0,   652,     0,     0,   967,
       0,     0,     0,   638,   639,   640,   641,   642,     0,   653,
     643,   644,     0,     0,  1721,     0,   968,   654,     0,     0,
    1722,     0,  1723,     0,     0,     0,     0,     0, -1796,     0,
       0,     0,   637,  1724,     0,     0,  1725,     0,     0,     0,
       0,     0,     0,     0,   645,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,   655,
     646,   656,   657,   658,     0,     0,     0,     0,  1726,     0,
       0,     0,     0,     0,     0,     0,     0,  1727,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   659,     0,
    1728,   638,   639,   640,   641,   642,     0,     0,   643,   644,
       0,     0,   647,     0,     0,     0,     0,  -355,   969,   970,
     971,     0,     0,     0,     0,     0,     0,   972,     0,     0,
       0,     0,     0,     0, -1843,     0,     0,     0,     0,   758,
       0,  1729,   645,   660,   661,   662,     0,     0,     0,     0,
       0,     0,     0,     0,  1730,   649,     0,   663,     0,     0,
       0,     0,     0,   650,   664,     0,   651,     0,     0,     0,
       0,     0,   973,     0,     0,     0,     0,     0,   974,   652,
     975,  1731,     0,   761,     0,   976,   977,   978,     0,     0,
     967,   979,     0,   762,     0,     0,     0,     0,     0,     0,
     647,     0,     0,     0,     0,     0,     0,   968,  1732,     0,
       0,     0,     0,     0,     0,  1733,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   980,  1734,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   655,   649,   656,   657,   658,     0,     0,     0,
     981,     0,     0,     0,   651,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   652,     0,     0,
       0,     0,     0,     0,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1735,     0,     0,     0,     0,
    -610,     0,     0,     0,     0,  1736,     0,     0,     0,   969,
     970,   971,     0,     0,     0,     0,   982,   967,   972,     0,
       0,     0,  1737,     0,     0,     0,   660,   661,   662,     0,
     758,     0,     0,     0,   968,     0,     0,     0,     0,     0,
     663,     0,   656,   657,   658,     0,  1738,   664,     0,     0,
       0,     0,     0,     0,     0,   764,     0,     0,     0,     0,
       0,     0,     0,   973,     0,     0,     0,   983,   984,   974,
       0,   975,     0,     0,   761,     0,   976,   977,   978,     0,
       0,     0,   979,     0,   762,     0,     0,     0,     0,  1416,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   985,
       0,   765,     0,   986,   987,     0,     0,     0,     0,     0,
       0,   988,     0,     0,   660,   661,   662,     0,     0,     0,
       0,     0,   980,     0,     0,     0,   969,   970,   971,     0,
       0,   989,     0,     0,     0,   972,   990,     0,     0,     0,
       0,   981,     0,   991,     0,   137,     0,   758,     0,     0,
       0,   766,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     973,     0,     0,     0,     0,   967,   974,     0,   975,     0,
       0,   761,     0,   976,   977,   978,     0,   982,     0,   979,
       0,   762,   968,     0,     0,     0,     0,     0,     0,   967,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   968,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   764,     0,     0,   980,
       0,     0,     0,     0,     0,     0,     0,     0,   983,   984,
       0,     0,     0,     0,     0,     0,     0,     0,   981,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1434,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     985,     0,   765,   763,   986,   987,     0,     0,     0,     0,
       0,     0,   988,     0,   969,   970,   971,     0,     0,     0,
       0,     0,     0,   972,     0,     0,     0,     0,     0,     0,
       0,     0,   989,     0,   982,   758,     0,   990,   969,   970,
     971,     0,     0,     0,   991,     0,   137,   972,     0,     0,
       0,     0,   766,     0,     0,     0,     0,     0,     0,   758,
       0,     0,     0,     0,     0,     0,     0,     0,   973,     0,
       0,     0,     0,   764,   974,     0,   975,     0,     0,   761,
       0,   976,   977,   978,     0,   983,   984,   979,     0,   762,
       0,     0,   973,  1975,     0,     0,     0,   967,   974,     0,
     975,     0,     0,   761,     0,   976,   977,   978,     0,     0,
       0,   979,     0,   762,   968,     0,     0,   985,     0,   765,
       0,   986,   987,     0,     0,     0,     0,   980,     0,   988,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   981,     0,     0,   989,
       0,   980,     0,     0,   990,     0,     0,     0,     0,     0,
       0,   991,     0,   137,     0,     0,     0,     0,     0,   766,
     981,   763,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   763,     0,   967,     0,     0,
       0,     0,   982,     0,     0,     0,   969,   970,   971,     0,
       0,     0,     0,     0,   968,   972,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   982,   758,     0,     0,
       0,     0,     0,     0,   967,     0,     0,     0,     0,     0,
       0,   764,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   968,     0,   983,   984,     0,     0,     0,     0,     0,
     973,  1977,     0,     0,     0,   764,   974,     0,   975,     0,
       0,   761,     0,   976,   977,   978,     0,   983,   984,   979,
       0,   762,     0,     0,     0,   985,     0,   765,     0,   986,
     987,     0,     0,     0,     0,     0,     0,   988,     0,  1987,
       0,     0,     0,     0,     0,     0,   969,   970,   971,   985,
       0,   765,     0,   986,   987,   972,     0,   989,     0,   980,
       0,   988,   990,     0,     0,     0,     0,   758,     0,   991,
       0,   137,     0,     0,     0,     0,     0,   766,   981,     0,
       0,   989,   967,   969,   970,   971,   990,     0,     0,     0,
       0,     0,   972,   991,     0,   137,     0,     0,     0,   968,
     973,   766,     0,   763,   758,     0,   974,     0,   975,     0,
       0,   761,     0,   976,   977,   978,     0,     0,     0,   979,
       0,   762,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   982,     0,     0,   973,     0,     0,
       0,     0,     0,   974,     0,   975,     0,     0,   761,     0,
     976,   977,   978,     0,     0,     0,   979,     0,   762,   980,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   764,     0,     0,     0,     0,   981,     0,
       0,     0,     0,     0,     0,   983,   984,     0,     0,     0,
    1334,   969,   970,   971,     0,     0,   980,     0,     0,     0,
     972,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   981,     0,   985,     0,   765,
       0,   986,   987,     0,     0,   967,     0,     0,     0,   988,
       0,     0,     0,     0,   982,     0,     0,     0,     0,     0,
     763,     0,   968,     0,     0,     0,     0,     0,     0,   989,
       0,     0,     0,     0,   990,     0,  1484,     0,   976,   977,
     978,   991,     0,   137,   979,     0,     0,  2712,     0,   766,
       0,   982,     0,   764,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   983,   984,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   980,     0,     0,     0,     0,     0,
     764,     0,     0,     0,     0,     0,     0,     0,     0,   765,
       0,   986,   983,   984,     0,     0,     0,     0,     0,   988,
       0,     0,     0,     0,   969,   970,   971,     0,     0,     0,
       0,     0,     0,   972,     0,     0,     0,     0,     0,   989,
       0,     0,     0,     0,   990,   758,   765,     0,     0,     0,
       0,   991,     0,   137,     0,     0,   988,     0,     0,   766,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   982,
       0,     0,     0,     0,     0,     0,   989,     0,   973,     0,
       0,   990,     0,     0,   974,     0,   975,     0,   991,   761,
     137,   976,   977,   978,     0,     0,   766,   979,     0,   762,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     983,   984,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1867,     0,     0,     0,   980,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   981,     0,     0,     0,
       0,     0,     0,     0,   988,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1141,     0,     0,     0,     0,
       0,   763,     0,     0,   989,     0,     0,     0,     0,   990,
       0,     0,     0, -1141,     0,     0,   991,   244,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   982,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   764,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   983,   984,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   765,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   988,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   989,     0,     0,
       0,     0,   990,     0,     0,     0,     0,     0,     0,   991,
       0,   137,     0,     0,     0,     0,     0,   766
};

static const yytype_int16 yycheck[] =
{
     103,   394,   105,   396,   664,   116,   598,   963,   111,   791,
     182,   541,   653,   367,  1229,   103,   688,   105,  1119,   850,
    1146,  1210,   786,   111,   796,  1597,   722,   359,  1451,  1587,
    1451,  1451,   135,   426,  1451,  1451,   795,  1451,   210,  1492,
    1122,   601,  1117,   436,  1370,  2049,  1261,   135,    56,    57,
      58,   405,  1113,  1132,  1541,  2013,    64,  1124,  1603,  1359,
    1998,  1845,   701,  1811,     9,  1132,   159,  1146,  1268,     0,
      17,  1928,     1,     9,  1532,    49,     6,     9,   750,  1146,
      30,    58,   185,     9,     9,    56,     6,  2082,     1,   853,
      27,    99,   100,  1380,   102,    53,  1953,  1187,   365,   107,
     108,    87,    60,    31,  1776,    97,  1854,  1473,   116,   108,
      31,  1201,     1,   115,    88,    65,   130,    67,   759,   760,
     125,    88,  1322,    64,   111,   133,    58,    73,   800,   124,
     124,    22,    17,   175,    48,   162,   176,  1379,    71,  1465,
     257,   252,  1700,    58,    49,   166,   177,    58,   253,    93,
     203,   226,    71,   161,    32,  1256,    39,  1905,   203,   160,
    1526,   143,   142,   160,    65,   126,    67,   130,   330,   810,
     177,     9,   214,  1952,   233,  1375,   203,   253,  2182,   116,
       0,   233,   243,  1244,   192,   296,   238,   272,   125,  1515,
     200,     1,   357,    21,   124,   310,   204,   257,   370,   219,
     203,   158,   841,    97,   162,  2450,   409,   245,   139,   413,
      21,    58,   143,    27,  1962,   451,   178,   230,   275,    16,
     126,   257,  2566,   458,   126,   795,   172,   986,  1594,   263,
       0,   114,   172,  1300,   245,    71,    33,    49,   458,   409,
     786,    32,   250,   456,  1311,    42,   178,   233,  1007,   469,
     258,   287,   974,   975,   288,   257,  1133,   368,   153,   981,
     417,   219,   220,   290,   204,    57,   502,    31,    60,   200,
     172,   506,    64,   242,   188,   232,   238,   481,   481,   241,
    1580,  2526,  1159,   213,   344,  2629,   199,   392,   308,  1368,
     291,  1657,   303,  2004,   295,   331,   461,   354,  2009,   356,
     457,  1368,   116,   253,  1111,  1372,    58,   853,  2056,   229,
     242,   481,  1119,  1120,  1872,   273,   392,  2028,  2029,   139,
     111,  2032,  1129,   143,    49,   283,   387,   257,    92,  1136,
    1137,   257,   973,   343,   379,  1907,   293,   267,  2195,    71,
    1012,   444,   233,   446,   447,    71,   508,   458,  1155,  1156,
     453,   257,   379,  1112,    71,   238,   364,    71,   446,   447,
     373,   343,  1662,  1536,  2075,   453,   451,   470,  2040,  2080,
     473,   474,  2083,   476,   311,   413,   479,   480,   272,   257,
     200,  1668,   470,   333,   392,   203,   360,  2166,  1675,   350,
     310,  1878,   509,   360,   509,   403,   795,   456,  1473,   452,
    1887,   506,   291,  1576,   412,   413,  1864,   415,   416,  1867,
       1,   357,   343,   421,   517,   985,   986,   987,   170,   349,
    1179,  1180,  1181,    71,   368,   314,  2364,   502,  1601,   517,
     438,  1797,   333,  1192,  1193,  1312,   257,  1007,   541,   542,
    1199,   356,   456,   337,   405,   466,   454,   342,   373,  1531,
     288,  1526,     9,   541,   542,   360,   457,   509,  1018,  1019,
     457,   424,  1134,   404,   467,   275,   257,   509,   401,   509,
     508,    62,   224,    57,   419,  1775,   456,   269,   509,   582,
      64,   508,   401,     6,   595,  1292,  2197,   111,  2236,   419,
     318,   602,   487,   487,   582,   509,  1268,   441,   601,    90,
      91,   488,   509,   508,   473,  2500,  2501,   509,   516,   508,
     509,  1388,  1591,  1574,   352,   461,  1323,   509,   504,  1594,
     453,   451,   405,   343,  1591,   456,  1248,   535,  2276,   503,
    2278,   502,    22,   510,   453,   465,   503,   648,   805,   467,
     451,   473,  1112,   456,  1605,   465,   467,   555,   360,   557,
     342,   654,   560,   561,  2226,   563,   470,   487,   508,   506,
       6,  2309,   447,  1805,  1631,   401,  2504,   379,     6,  1856,
     515,   508,  1211,   509,   973,  1382,   501,  1792,   509,   509,
     509,   391,  1657,   509,   592,   515,   985,   986,   987,   597,
    1231,  2339,  2340,  2450,   508,  1795,   604,  1897,   503,  1689,
    1170,  1171,  1172,  1375,  2542,  2543,  2151,   399,  1007,  1179,
    1180,  1181,   404,   204,   509,   509,   463,   453,   509,   577,
     509,   468,  1192,  1193,  1194,  1195,  1196,  1197,  1198,  1199,
     458,   154,  1202,     6,  1934,   360,   456,   257,   189,  2097,
    2424,   469,   233,  1816,   456,   233,   456,   458,  2586,   467,
    1823,   609,  2590,  2591,   379,   663,   213,  2122,   469,   173,
     771,    26,   257,  2374,  2025,   776,  1473,  2378,   840,   401,
     257,  2675,    30,   263,   257,   401,   242,   332,   781,   782,
     332,  2619,   793,   258,   401,   269,   154,   401,   509,   509,
     213,   503,     6,    49,   515,   798,   704,   257,   288,   707,
     257,   275,  1875,   455,   263,  1512,     6,    65,   271,    67,
     267,   463,   464,  1112,   160,  2673,   468,   509,  1525,  1526,
    2658,   453,  1797,  1116,  2090,  1118,  2092,   453,   257,   288,
    1502,   456,   323,  1800,   257,  1134,   453,   257,   176,   453,
    1499,  1140,  1803,   233,   267,   263,   463,     9,  1141,   272,
    1143,   468,   257,   401,    38,  1148,  1563,  1930,   342,    85,
    2508,  2509,    46,     0,   422,  2131,    33,   213,   331,  1162,
     217,  1170,  1171,  1172,   456,   213,   310,   409,   503,    62,
    1179,  1180,  1181,  1182,  2495,  2496,   130,  1594,  1187,   343,
     237,  2502,   349,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,   245,  1201,  1202,    34,   453,  2093,    90,    91,  2296,
    2111,   257,  2112,  2483,   365,   399,   263,   391,  2184,   257,
     404,   267,   446,   235,  1903,  1466,   349,   451,  1635,   267,
     272,   196,  1231,  2298,  2299,   199,  1903,  1904,   426,  1646,
     213,   288,  1649,  2554,  1519,  1520,  1521,  1522,   230,   481,
    1657,   962,  1493,   508,   509,  1254,   508,    65,   263,    67,
       9,  2222,   419,   438,  2037,   456,  1259,  1639,   162,  2441,
     388,  2197,   456,   229,   203,   188,   213,  1270,  2051,   413,
     123,   395,   171,   288,   257,  2186,    57,  1447,   232,   509,
    2190,   310,  1993,    64,   267,   253,   419,  2070,   211,   213,
     463,   168,   139,   349,   562,   468,   143,   473,   465,    58,
     139,   349,   219,   213,   509,  1018,  1019,  1028,   508,   257,
     257,  1680,   509,  1682,   499,   509,   509,  2100,   212,  1499,
     267,  2104,    57,   196,   509,  1694,   360,   226,  1337,    64,
    1272,  1613,   465,   257,  1144,   234,  2518,   481,   292,   509,
     233,   213,   509,   267,     9,  2081,  2082,   257,   515,   263,
     244,   325,   326,   200,  1164,    26,   221,   267,   456,   413,
    2143,  2436,   257,   419,   397,   333,   349,   382,   342,  2649,
     509,   419,   266,   425,   288,   427,   509,   272,   400,   509,
     319,   373,   515,   331,   257,   257,   290,    28,   253,  2300,
     409,   268,   421,    58,   509,   267,   196,   207,   208,   316,
    1113,   457,   349,   257,  1117,  2090,  2098,  2092,  1588,   465,
    1352,  1124,  1125,  1795,  2569,   293,  1698,   465,  1119,  1132,
     319,   171,  1135,   397,  2249,   349,   320,  1140,   323,  1142,
     323,  1144,  1145,  1146,  1147,   253,   419,   247,   248,   349,
    1722,   547,   282,   283,   284,   359,  2131,   325,   505,   257,
    2233,  1164,  2129,   509,   213,  1156,  2239,   257,  2150,   515,
     508,   509,   481,  2246,  2247,   409,  2634,   515,   451,   503,
     162,  2534,   419,   509,   166,     1,   226,   349,  1260,   357,
     288,   587,   465,   242,   234,    11,   127,   381,   269,   354,
    1499,  2646,   339,   508,   509,   419,   343,   362,   257,  2184,
    1680,  1504,  1682,  1705,   414,   397,   346,  2218,   267,   419,
     616,   759,   760,   178,  1694,   333,  2549,   172,  2549,  2549,
     354,   257,  2549,  2549,  1941,  2549,   509,   709,   459,  1311,
    2490,  1244,   515,    59,   269,     9,  2319,   481,  1789,  2322,
    2323,   465,   455,   426,  2712,  1830,   233,   419,   213,   204,
    1263,   464,  2335,     9,   414,   465,  2738,   204,  2726,    30,
    1845,   342,   810,   456,   456,   479,  2349,  2350,   515,   319,
     257,    97,   213,    99,   756,   101,    50,   242,   509,  1588,
     308,   415,   416,   109,   478,   509,   233,  1300,   286,  2549,
     349,   515,   257,   465,   508,   217,   218,  1379,  1311,   509,
     759,   760,   267,   463,  1613,   515,     1,   342,   468,   107,
     509,   760,   340,   349,   509,   237,   257,  1354,   399,   117,
     515,   456,   309,   404,   311,  1999,   267,    83,   118,   119,
     120,   471,   472,   361,  2417,   188,   476,   108,   336,   165,
     281,   263,  1355,   515,   100,    40,    41,    42,    43,    44,
     460,   810,   462,   835,   390,  1368,  2670,   128,   211,  1372,
     419,   810,   456,   263,   399,    55,   288,  1404,     8,   404,
    1612,  1680,  2054,  1682,   509,   456,   213,  2460,   456,   178,
    1689,    76,    77,   419,   349,  1694,  1937,     9,   288,   188,
      12,    47,  2706,    15,    16,  1408,   167,    37,    12,     8,
      90,    15,    16,   188,   486,  1487,   465,    63,   349,   453,
    1408,     8,   211,  1722,   473,  1679,   456,   107,   189,   463,
     257,   456,   504,  2140,   468,   408,   211,   117,    37,   450,
     267,   233,   258,   204,  1447,  2534,   192,   193,   194,   213,
      37,  2426,   241,  2428,   454,   201,   467,   103,  1461,   239,
     509,   397,   213,   463,   419,  2654,   515,   213,   468,   458,
    1473,  2178,  2179,   253,  2500,  2501,  2072,   456,  2504,  2210,
     469,   245,   246,  2672,  2599,  2057,   456,   303,   419,   515,
     213,   422,   423,   257,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   267,   408,  1997,   257,  2647,  2648,  2050,
     465,   257,   456,   259,   260,   261,   267,  2176,   473,   265,
    1135,   267,   349,  1526,  1596,   453,  1170,  1171,  1172,   456,
      13,    14,  1147,  1749,   257,   463,  2676,  1445,    58,  2111,
     468,   795,  1450,  1451,   267,  1453,  1762,  1763,  1620,    32,
    1766,   219,  2553,   454,   509,  2695,   463,   337,  1202,   305,
     515,   468,   463,  1411,   453,  1218,  1414,   468,   174,  1222,
     350,  1574,  1420,  1645,   463,  2282,  1424,   393,   309,   468,
     311,   342,   456,  1431,   515,   349,   163,   233,  1591,   166,
       2,  1594,   419,   505,   240,     7,   508,  2737,   349,  1196,
    1197,  1198,  1605,   349,  1681,   251,  1683,   556,    69,  1686,
    1687,  1688,   561,   509,  2186,  1692,  1909,   456,  1695,  1696,
     436,    35,   249,   250,    38,   474,   349,   476,  1631,   509,
     479,    45,    46,   456,   380,    24,    25,   456,   465,  1632,
     456,   509,   490,   491,   492,   493,   456,   332,  1659,   490,
     491,   492,   493,   342,  1657,   419,   490,   491,   492,   493,
     345,   257,   442,  2345,   257,  2347,   278,   279,   419,   157,
     354,   159,   356,   419,   278,   279,   473,    66,    92,    68,
     509,    70,  1685,   301,   302,   431,   432,   354,   515,   356,
     199,   303,   304,   509,    97,    98,   419,  1685,   447,   303,
     304,   465,   624,   625,   626,   627,  2176,   403,   354,   355,
     354,   157,   356,   159,   465,   104,   105,   106,  1729,   465,
     294,   404,   296,   369,   253,   371,   255,   413,  2300,   475,
      64,   985,   986,   987,   253,  1643,   255,  1180,  1181,  1750,
    2447,   253,   465,   255,    66,    60,    68,   161,   233,   495,
     257,   515,   166,  1007,   500,   985,   456,   987,   509,  1194,
    1195,   507,   330,   509,   515,   154,   404,   156,   257,   515,
     509,  2201,   230,    26,   163,   456,   190,   166,   456,   108,
     456,   314,    54,    55,   257,   257,   273,   459,  2470,  2645,
    1793,    23,   515,   103,  1797,  1703,  1704,  1800,   212,   456,
    1803,   442,   189,  2510,   123,   459,  1714,  2514,  2515,    17,
     456,    35,    87,  1721,    38,   509,   456,   397,    90,   273,
     354,    45,    46,   404,   509,   426,   405,    57,   263,   508,
      39,   456,   238,   405,   509,   107,   333,  1909,   511,  2132,
     509,   318,   312,  1751,   422,   117,   397,   262,   456,     7,
     397,  1854,   266,   456,   256,   508,  1110,   503,  1112,   456,
     509,  1115,   456,   369,   253,  1119,   255,   397,    92,    86,
     456,  2125,   456,    86,   125,   435,   397,  2176,   392,    22,
    1134,   456,   308,   272,   506,   456,  1140,   311,  1960,   397,
     204,   504,   509,   509,   456,   506,   387,  1969,  1970,   509,
    1903,  1904,  1905,   233,  1812,   451,   320,  1161,   255,  1163,
     219,   509,   123,   515,    53,   451,  1170,  1171,  1172,   467,
     447,    26,   403,  1831,   308,  1179,  1180,  1181,  1182,  1837,
     452,   413,   351,  1187,   196,  1843,   509,   161,  1192,  1193,
    1194,  1195,  1196,  1197,  1198,  1199,   450,  1201,  1202,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1949,   467,   257,  1962,
     456,   447,   456,   379,   509,   402,   190,   381,   338,   509,
     115,   170,   467,   188,   467,   467,  1230,   467,   456,   257,
     394,   509,   224,   467,   451,   311,   509,   467,   212,  1992,
     456,   467,   467,   467,   456,    45,   467,   406,   467,   413,
    1254,  2004,  1256,   458,  1992,    30,  2009,   509,   509,   131,
     196,  2022,   132,   451,   133,    65,    66,    67,    68,   134,
     389,   135,   138,   136,   102,  2028,  2029,   137,   446,  2032,
     451,   467,   141,    49,   502,   407,   447,   450,   144,   444,
     450,   196,   266,   145,   147,   146,     6,   504,    31,     9,
     272,   323,   148,  2056,    49,   327,   328,   149,   196,   448,
    2132,   150,   113,   151,   478,   152,  1974,   221,   453,  2141,
    2081,  2082,  2075,   453,   453,   453,   453,  2080,  2081,  2082,
    2083,   115,  2642,  1337,   110,   453,   453,  2090,  1996,  2092,
     453,   451,   456,   413,   314,   451,   320,   369,   197,   203,
     224,  2661,  2594,   379,  2012,  1359,  2014,   341,   257,   498,
    2018,   273,   296,   385,   386,   232,   489,   300,  2026,   166,
     509,   129,   176,    83,   506,   506,  2129,   368,  2131,   169,
     451,  1385,  2624,   130,   229,   451,    49,   196,   229,   204,
     100,   177,   301,    57,   204,   456,   273,   509,   514,   426,
     301,   277,   513,   113,   238,   253,   451,   381,   451,   365,
     210,   297,   383,    30,   203,   203,    17,   447,   129,   140,
     394,   368,   451,    49,   203,   142,     8,  2647,  2648,   196,
     130,  2184,   506,   506,   203,   456,   236,   426,   451,   413,
       9,     7,   509,   257,  2197,   795,   508,   203,  2201,   299,
     508,   503,   503,   253,    49,   255,  2676,   189,   316,   292,
     263,   466,   114,  2201,   332,   441,  2124,    47,   315,   414,
     296,   103,   203,   203,  2517,  2695,   383,   364,    49,   364,
     263,   238,   192,   193,   194,   298,   286,   497,    96,    57,
     413,   201,     8,    49,   293,  1499,   111,   461,   263,   339,
     263,   263,   456,   213,   478,   110,   211,   307,   339,   486,
     456,   108,   342,   222,   210,   421,   506,  2737,   120,   229,
     196,   339,   315,  2276,  2567,  2278,   370,    49,   308,   329,
     428,   323,     7,    46,    92,   335,   246,    26,   127,   148,
     202,   207,   252,    75,   254,   222,   239,   257,   178,   259,
     260,   261,   150,  2306,   520,   265,  2309,   267,  1908,   470,
     287,  1027,   272,   498,   426,    11,  1451,   782,  2306,   749,
    2710,  1406,  1901,  1673,  2199,   411,  1580,  2689,  2722,  2658,
    2219,  2219,  1036,  2095,  1588,   853,   800,  2340,   789,  1227,
    1765,  1848,  1764,  2393,  2408,   305,  1799,  1244,  2647,  2648,
    1604,  1485,  2093,  1512,  1487,  2274,  1531,  2360,   408,  1613,
    1534,  1867,  2097,    59,   324,  1577,  1296,   417,  2292,  1584,
    1624,  2374,  2360,   973,  2120,  2378,  1895,  2676,  1332,  1595,
    2132,  1337,  2139,  1970,   434,   985,   986,   987,  1921,   349,
    1625,  1950,  2153,  1368,  1366,  1147,  2695,  2179,  1652,  1382,
    1969,    97,  2343,    99,  1969,   101,   456,  1007,  1662,  2706,
    1672,  2348,  2450,   109,  2353,  1563,  2172,  2172,  2172,  2172,
     380,  1355,  1481,  2426,   152,  2428,  1680,   477,  1682,   300,
    2338,   695,  1937,  1254,  1722,  1689,   271,   990,  2737,   243,
    1694,  2444,   418,  2577,   510,  2623,   496,   754,  2438,   216,
     450,  2109,  1900,   503,   504,  1957,   713,  2649,    -1,   419,
    2753,  1587,    -1,    -1,    -1,    -1,   559,    -1,  1722,   165,
      -1,   431,   432,    -1,  2382,    -1,    -1,    -1,    -1,  2387,
      -1,  1735,    -1,    -1,  1738,    -1,    -1,    -1,    -1,  2500,
    2501,    -1,  2495,  2496,  2402,    -1,    -1,  2500,  2501,  2502,
      -1,  2504,    -1,    -1,    -1,   465,    -1,    -1,    -1,    -1,
      -1,    -1,  1112,    -1,    -1,   475,    -1,  1117,     4,    -1,
      -1,  1775,    -1,    -1,  1124,    -1,    -1,    -1,    -1,    -1,
      -1,   227,  1132,    19,    -1,   495,    -1,  1791,    -1,    -1,
     500,  2449,    -1,    29,    -1,    -1,  1146,   507,    -1,   509,
      -1,  2554,    -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,
      -1,    -1,   258,  2566,    -1,    -1,    -1,    -1,    -1,    -1,
    1170,  1171,  1172,  2481,  2482,    -1,    -1,    -1,    64,  1179,
    1180,  1181,  1182,    -1,    -1,  2596,    -1,  1187,    -1,    -1,
    2498,  2499,  1192,  1193,  1194,  1195,  1196,  1197,  1198,  1199,
      -1,  1201,  1202,    -1,    -1,    -1,    -1,   303,  2516,    -1,
     306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2629,    -1,    -1,    -1,
      -1,  1231,    -1,  2541,    -1,    -1,    -1,    -1,  2546,  2547,
      -1,    -1,  2653,  1897,  1898,    -1,  2657,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2568,    -1,    -1,  1263,    -1,    -1,    -1,  2670,    -1,    -1,
      -1,    -1,  1926,    -1,    -1,    -1,   372,    -1,    -1,    -1,
    1934,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2598,    -1,    -1,  2601,  2602,    -1,    -1,   393,    -1,    -1,
    1300,    -1,    -1,  2706,    -1,    -1,    -1,  1961,    -1,    -1,
      -1,  1311,    -1,    -1,  1968,  1969,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,   420,    -1,    -1,  2730,    -1,    -1,
    2741,    -1,    -1,    -1,    -1,   221,  2644,    -1,    -1,  1993,
     436,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,  2003,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,  1359,
      -1,    18,    -1,    -1,    -1,    -1,    -1,   253,  1368,    -1,
      -1,    -1,  1372,    -1,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2057,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   509,    -1,    72,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   317,    89,    83,    -1,    -1,   322,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2102,    -1,
     100,    -1,    -1,    -1,    -1,   112,    -1,  2111,  2112,    -1,
      -1,    -1,    -1,   120,    -1,   122,  2120,    -1,   354,    -1,
      -1,    -1,    -1,  1473,    -1,    -1,   362,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2139,    -1,    -1,    -1,   375,
      -1,    -1,    -1,    -1,    83,    -1,   153,    -1,    -1,  1499,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,   100,   169,    -1,  2168,    -1,    -1,    -1,   404,    -1,
      -1,   407,  2176,    -1,    -1,    -1,  1526,    -1,    -1,   415,
      -1,    -1,  2186,    -1,    -1,    -1,  2190,    -1,   195,    -1,
     426,    -1,   192,   193,   194,   202,    -1,    -1,   205,   206,
       6,   201,    -1,     9,    -1,    -1,    -1,    -1,  2212,   216,
      -1,    -1,    -1,    -1,  2218,    -1,   223,    -1,   225,    -1,
     456,   228,    -1,   459,    -1,    -1,    -1,    -1,    -1,    -1,
    1580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1588,    -1,
      -1,  1591,    -1,    -1,  1594,    -1,    -1,    -1,    -1,    -1,
    2254,    -1,    -1,   192,   193,   194,    -1,   257,    -1,   259,
     260,   261,   201,   270,    -1,   265,    -1,   274,    -1,   276,
      -1,    -1,    -1,    -1,   213,    -1,    -1,    83,    -1,   286,
      -1,  1631,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,  2300,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,   313,  1657,    -1,    -1,
      -1,    -1,  1662,    -1,    -1,    -1,    -1,    -1,   257,   326,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,
    1680,    -1,  1682,    -1,    -1,    -1,    -1,    -1,    -1,  1689,
      -1,    -1,    -1,    -1,  1694,   352,   353,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   363,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
     377,   378,    -1,    -1,    -1,    -1,    -1,   384,    -1,    -1,
     380,   388,    -1,    -1,    -1,    -1,   192,   193,   194,   396,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,   406,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,   415,    -1,
     349,    -1,    -1,    -1,    -1,  2419,    -1,   424,    -1,    -1,
      -1,    -1,   429,   430,    -1,  1775,   433,    -1,   435,    -1,
      -1,   431,   432,    -1,    -1,    -1,   443,    -1,    -1,    -1,
     246,   380,    -1,  1793,    -1,    -1,   252,  1797,   254,   456,
    1800,   257,    -1,   259,   260,   261,    -1,    -1,  2462,   265,
      -1,   267,    -1,    -1,    -1,  2469,   272,   474,  2472,    -1,
      -1,    -1,    -1,   480,    -1,   475,    -1,    -1,   485,    -1,
     419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   431,   432,    -1,   495,    -1,    -1,    -1,   305,
     500,    -1,    -1,    -1,  1854,   512,    -1,   507,    -1,   509,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,  2523,
      -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,
      -1,    -1,    -1,  2537,    -1,    -1,   475,    -1,    -1,    -1,
      -1,    -1,    -1,   349,    -1,    -1,    -1,  1897,  1898,  2553,
      -1,    -1,    -1,  1903,  1904,  1905,   495,    -1,    -1,    -1,
      -1,   500,    -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,
     509,    -1,    -1,    -1,   380,    -1,   515,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1934,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2603,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1962,   419,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2647,  2648,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,   465,
    2664,    -1,    -1,   469,    -1,    -1,    -1,    -1,    -1,   475,
      -1,    -1,  2676,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2688,  2689,    -1,    -1,    -1,   495,
      -1,  2695,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,
      -1,   507,    -1,   509,    -1,    -1,  2056,    -1,    -1,   515,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,  2733,
      -1,    -1,    -1,  2737,    -1,    18,    -1,    -1,    -1,    -1,
    2090,    -1,  2092,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2112,    -1,    -1,    -1,    -1,    -1,    51,    52,
    2120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,  2129,
      -1,  2131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2176,    -1,    -1,   112,
      -1,    -1,    -1,    -1,  2184,    -1,    -1,   120,    -1,   122,
    2190,    -1,    -1,    -1,    -1,    -1,   129,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,   195,    -1,   201,    -1,    -1,    -1,    -1,   202,
      -1,    -1,   205,   206,    -1,    -1,  2276,    -1,  2278,    -1,
      -1,    -1,    -1,   216,     1,    -1,     3,    -1,     5,    -1,
     223,    -1,   225,    10,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,   270,    -1,    -1,
    2340,   274,    -1,   276,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   286,    -1,    72,    -1,    -1,    75,   292,
     293,   294,    -1,   296,   297,   298,   299,    -1,   305,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   326,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,
     353,    -1,    -1,    -1,    -1,    -1,  2426,    -1,  2428,    -1,
     363,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,    -1,    -1,   380,   377,   378,    -1,   164,    -1,    -1,
      -1,   384,   169,    -1,    -1,   388,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,   195,    -1,
      -1,    -1,   415,    -1,    -1,   202,    -1,    -1,   205,   206,
      -1,   424,    -1,    -1,   431,   432,   429,   430,    -1,   216,
     433,    -1,   435,    -1,    -1,    -1,   223,   444,   225,    -1,
     443,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,     5,    -1,    -1,   475,    -1,
      10,   474,    -1,    -1,    -1,    -1,    -1,   480,    18,   486,
      -1,    -1,   485,   270,    -1,    -1,    -1,   274,   495,   276,
      -1,    -1,    -1,   500,    -1,    -1,    -1,   504,    -1,   286,
     507,   508,   509,   506,    -1,    -1,    -1,    -1,    -1,   512,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,   326,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   352,   353,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,   363,  2647,  2648,    -1,
     120,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     377,   378,    -1,    -1,    -1,    -1,    -1,   384,    -1,    -1,
      -1,   388,    -1,    -1,    -1,    -1,  2676,    -1,    -1,   396,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,   406,
      -1,    -1,    -1,    -1,   164,  2695,    -1,    -1,   415,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,    -1,    -1,
      -1,    -1,   429,   430,    -1,    -1,   433,    -1,   435,    -1,
      -1,    -1,    -1,    -1,    -1,   195,   443,    -1,    -1,    -1,
      -1,    -1,   202,    -1,    -1,   205,   206,  2737,    -1,   456,
      -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,    -1,   223,    -1,   225,    -1,   474,   228,    -1,
      -1,    -1,    -1,   480,    -1,    -1,    -1,    -1,   485,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,
     270,    -1,    -1,    -1,   274,    -1,   276,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,   326,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,   377,   378,    -1,
      61,    -1,    -1,    -1,   384,    -1,    -1,    -1,   388,    -1,
      -1,    72,    -1,    -1,    75,    -1,   396,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,    89,    -1,
      -1,    -1,    -1,     6,    -1,   415,     9,    -1,    -1,    12,
      13,    14,    -1,    -1,   424,    -1,    -1,    20,    -1,   429,
     430,   112,    -1,   433,    -1,   435,    -1,    -1,    -1,   120,
      -1,   122,    -1,   443,    -1,    -1,    -1,    -1,   129,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   474,    -1,    -1,    -1,    -1,    -1,
     480,    -1,    -1,   164,    -1,   485,    -1,    -1,   169,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,   512,    -1,   195,    -1,    -1,    -1,    -1,    -1,
      -1,   202,    -1,    -1,   205,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,   225,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   270,
      -1,    -1,    -1,   274,    -1,   276,    -1,    -1,    -1,   192,
     193,   194,    -1,    -1,    -1,   286,    -1,    -1,   201,    -1,
      -1,    -1,    -1,    -1,   207,   208,    -1,    -1,    -1,    -1,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,   247,   248,    -1,    -1,    -1,   252,
      -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,   352,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,
      -1,    -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,    -1,    -1,    -1,    -1,   378,   291,    -1,
      -1,    -1,   295,   384,    -1,    -1,    -1,   388,    -1,    -1,
     303,    -1,   305,    -1,    -1,   396,    -1,   310,    -1,    -1,
      -1,    -1,   315,     6,    -1,   406,     9,    -1,    -1,    -1,
      -1,   324,    -1,    -1,   415,    -1,    -1,    -1,    -1,     6,
      -1,   334,     9,   424,    -1,    12,    13,    14,   429,   430,
      -1,    -1,   433,    20,   435,    -1,   349,    -1,    -1,    -1,
      -1,    -1,   443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,
      -1,    -1,    -1,   474,    -1,    -1,    -1,    -1,    -1,   480,
      83,    -1,    -1,    -1,   485,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    83,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,
      -1,   512,    -1,   100,    -1,    -1,    -1,    -1,   431,   432,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     453,    -1,   455,    -1,   457,    -1,    -1,   460,    -1,   462,
     463,   464,   465,    -1,   467,   468,     6,    -1,    -1,     9,
      -1,    -1,   475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   495,   170,    -1,    -1,    -1,   500,    -1,   192,
     193,   194,    -1,    -1,   507,    -1,   509,    -1,   201,    49,
      -1,    -1,   515,    -1,    -1,   192,   193,   194,    -1,    -1,
     213,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
     207,   208,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,
     100,   254,    -1,    -1,   257,    -1,   259,   260,   261,   246,
     247,   248,   265,    -1,   267,   252,    -1,   254,    -1,   272,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,   285,     9,
      -1,    -1,   305,    -1,   291,    -1,    -1,    -1,   295,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,   305,    -1,
      -1,   324,    -1,   310,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,   349,   334,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   349,   213,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,   380,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
     100,    -1,    -1,   380,    -1,    -1,   246,    -1,    -1,    -1,
      -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,   419,   267,    -1,    -1,
      -1,     6,   272,    -1,     9,    -1,    -1,    -1,   431,   432,
      -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,   305,    -1,    -1,    -1,    -1,
     310,    -1,   465,    -1,    -1,    -1,   453,    -1,   455,    -1,
     457,    -1,   475,   460,   324,   462,   463,   464,   465,    -1,
     467,   468,   192,   193,   194,    -1,    -1,    -1,   475,    -1,
      -1,   201,   495,    -1,    -1,    -1,    -1,   500,    83,   349,
      -1,    -1,    -1,   213,   507,    -1,   509,    -1,   495,    -1,
     360,    -1,   515,   500,    -1,   100,    -1,    -1,    -1,    -1,
     507,    -1,   509,    -1,    -1,    -1,    83,    -1,   515,    -1,
     380,    -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,
      -1,    -1,   252,   100,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,   113,   267,    -1,    -1,
      -1,    -1,   272,   413,    -1,    -1,    -1,    -1,    -1,   419,
      -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,   431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,   324,   465,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,   213,    -1,
      -1,   481,    -1,    -1,    -1,   192,   193,   194,    -1,   349,
      -1,    -1,    -1,    -1,   201,   495,    -1,    -1,    -1,    -1,
     500,    83,    -1,   503,    -1,    -1,   213,   507,    -1,   509,
      -1,   246,    -1,    95,    -1,   515,    -1,   252,   100,   254,
     380,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,   246,
      -1,    -1,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,   419,
     267,    -1,    -1,    -1,    -1,   272,     6,    -1,    -1,     9,
     305,   431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,    -1,
     192,   193,   194,    -1,   349,   475,    -1,   324,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   213,    -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,
     500,    -1,   349,    83,    -1,   380,    -1,   507,    -1,   509,
      -1,    -1,    -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,
     252,    -1,   254,   380,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,   419,   267,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,   419,     9,    -1,    -1,   451,    -1,    -1,    -1,
      -1,    -1,    -1,   305,   431,   432,   166,    -1,    -1,    -1,
     465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     475,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,   465,    -1,
     495,   201,    -1,    -1,    -1,   500,    -1,   349,   475,    -1,
      -1,    -1,   507,   213,   509,    -1,    -1,    -1,    -1,    -1,
     515,    -1,    -1,    -1,    -1,    -1,    -1,    83,   495,    -1,
      -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,   380,    -1,
     507,    -1,   509,    -1,   100,    -1,   246,    -1,   515,    -1,
      -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,   419,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,   431,
     432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   465,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   475,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,   349,
      -1,    -1,    -1,   495,    -1,    -1,    -1,   213,   500,    -1,
      83,    -1,    -1,    -1,    -1,   507,    -1,   509,    -1,    -1,
      -1,    -1,    -1,   515,    -1,    -1,    83,   100,    -1,    -1,
     380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,    -1,    -1,   100,    -1,    -1,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,
      -1,   267,    -1,    -1,    -1,    -1,   272,    -1,    -1,   419,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   431,   432,    -1,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,   324,   192,
     193,   194,    -1,   196,    -1,   475,    -1,    -1,   201,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
     213,    -1,    -1,   349,   201,   495,    -1,    -1,    -1,    -1,
     500,    -1,    -1,    -1,    -1,    -1,   213,   507,    -1,   509,
      -1,    -1,    -1,    83,    -1,   515,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,   380,    -1,    -1,    -1,    -1,   252,
     100,   254,    -1,    -1,   257,    -1,   259,   260,   261,   246,
      -1,    -1,   265,    -1,   267,   252,    -1,   254,    -1,   272,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,   419,    -1,   272,    -1,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,   431,   432,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,   475,
      -1,    -1,   192,   193,   194,    -1,   349,    -1,    -1,    -1,
      -1,   201,    -1,   489,    -1,    -1,    -1,    -1,    -1,   495,
      -1,    -1,   349,   213,   500,    -1,    83,    -1,    -1,    -1,
      -1,   507,    -1,   509,    -1,    -1,    -1,   380,    -1,   515,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,   380,    -1,    -1,   246,    -1,    -1,    -1,
      -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,   419,   267,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,   413,    -1,   431,   432,
      -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,   465,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,   475,    -1,   324,   192,   193,   194,   465,    -1,
      -1,    -1,   100,    -1,   201,    -1,    -1,    -1,   475,    -1,
      -1,    -1,   495,    -1,    -1,    -1,   213,   500,    -1,   349,
      -1,    -1,    -1,    -1,   507,    -1,   509,    -1,   495,    -1,
      -1,    -1,   515,   500,    -1,    -1,    -1,    -1,    -1,    -1,
     507,    -1,   509,    -1,    -1,    -1,    -1,    -1,   515,   246,
     380,    -1,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   419,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,   431,   432,   201,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,   246,    -1,
      -1,    -1,   349,    -1,   252,    -1,   254,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,   495,    -1,   265,    -1,   267,
     500,    -1,    -1,    -1,   272,    -1,    -1,   507,    -1,   509,
      -1,    -1,    -1,   380,    -1,   515,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   419,    -1,    -1,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,   349,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,
      -1,    32,   380,    -1,    35,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,   495,    -1,
      -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,    -1,
     507,    -1,   509,    -1,    65,    -1,    67,    -1,   515,    -1,
      -1,   419,    -1,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    -1,   431,   432,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,   120,
      -1,    -1,   212,    -1,    -1,    -1,    -1,   475,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,    -1,
      -1,    -1,   500,    -1,   244,    -1,    -1,    -1,    -1,   507,
     161,   509,    -1,    -1,    -1,    -1,    -1,   515,    -1,    -1,
      -1,    -1,    -1,    -1,   264,   176,   266,    -1,   179,   180,
     181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,   190,
      -1,    -1,    -1,    -1,    -1,   196,    -1,   198,   288,   289,
      -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,   209,    -1,
      -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,    -1,   233,    -1,    -1,   236,    -1,    -1,    -1,    -1,
      -1,   242,    -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,    -1,   347,   348,     1,
      -1,    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    21,
      -1,    -1,    -1,    -1,   374,    -1,    -1,    -1,    -1,    -1,
      -1,   381,    -1,    -1,    36,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,   394,    -1,   307,    -1,   398,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
     321,    -1,    -1,   413,    -1,    -1,    -1,    -1,   329,    -1,
      -1,   332,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,   345,    -1,   347,    -1,    -1,    -1,
     440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   449,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   374,    -1,    -1,    -1,    -1,   120,    -1,
     381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   478,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   398,   488,    -1,
      -1,    -1,    -1,    -1,   494,    -1,    -1,   408,    -1,   410,
     411,   412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,   176,    -1,    -1,   179,   180,   181,
     182,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,
     451,    -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,
     461,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   473,    -1,    -1,    -1,    -1,   478,   220,    -1,
      -1,   482,   483,   484,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   233,    21,    -1,   236,   496,    -1,    -1,    -1,    -1,
     242,   502,   503,    -1,    -1,    -1,    -1,    36,   509,    -1,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,
     332,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     179,   180,   181,   182,   183,    -1,    -1,   186,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,   410,   411,
     412,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   220,    -1,    -1,    -1,   437,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   236,    -1,    65,
      -1,    67,    -1,   242,   456,    -1,    -1,    -1,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,   473,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     482,   483,   484,    -1,    -1,    -1,    -1,    -1,    -1,   278,
      -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,
      -1,   503,    -1,    -1,   120,    -1,    -1,   509,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    -1,   307,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    -1,   332,    -1,   161,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,   345,    -1,    -1,    83,
      -1,    -1,    -1,   179,   180,   181,   182,   183,    -1,   358,
     186,   187,    -1,    -1,   190,    -1,   100,   366,    -1,    -1,
     196,    -1,   198,    -1,    -1,    -1,    -1,    -1,   204,    -1,
      -1,    -1,   120,   209,    -1,    -1,   212,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,   408,
     236,   410,   411,   412,    -1,    -1,    -1,    -1,   244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,    -1,
     266,   179,   180,   181,   182,   183,    -1,    -1,   186,   187,
      -1,    -1,   278,    -1,    -1,    -1,    -1,   456,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,   213,
      -1,   307,   220,   482,   483,   484,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,   321,    -1,   496,    -1,    -1,
      -1,    -1,    -1,   329,   503,    -1,   332,    -1,    -1,    -1,
      -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,   345,
     254,   347,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      83,   265,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,
     278,    -1,    -1,    -1,    -1,    -1,    -1,   100,   374,    -1,
      -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,   398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   408,   321,   410,   411,   412,    -1,    -1,    -1,
     324,    -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   451,    -1,    -1,    -1,    -1,
     456,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,   192,
     193,   194,    -1,    -1,    -1,    -1,   380,    83,   201,    -1,
      -1,    -1,   478,    -1,    -1,    -1,   482,   483,   484,    -1,
     213,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     496,    -1,   410,   411,   412,    -1,   502,   503,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,   431,   432,   252,
      -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   453,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   463,
      -1,   465,    -1,   467,   468,    -1,    -1,    -1,    -1,    -1,
      -1,   475,    -1,    -1,   482,   483,   484,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,   495,    -1,    -1,    -1,   201,   500,    -1,    -1,    -1,
      -1,   324,    -1,   507,    -1,   509,    -1,   213,    -1,    -1,
      -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,    -1,    -1,    -1,    -1,    83,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,    -1,   380,    -1,   265,
      -1,   267,   100,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   431,   432,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     463,    -1,   465,   349,   467,   468,    -1,    -1,    -1,    -1,
      -1,    -1,   475,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   495,    -1,   380,   213,    -1,   500,   192,   193,
     194,    -1,    -1,    -1,   507,    -1,   509,   201,    -1,    -1,
      -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,
      -1,    -1,    -1,   419,   252,    -1,   254,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,   431,   432,   265,    -1,   267,
      -1,    -1,   246,   439,    -1,    -1,    -1,    83,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,   100,    -1,    -1,   463,    -1,   465,
      -1,   467,   468,    -1,    -1,    -1,    -1,   305,    -1,   475,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,   495,
      -1,   305,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,
      -1,   507,    -1,   509,    -1,    -1,    -1,    -1,    -1,   515,
     324,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   349,    -1,    83,    -1,    -1,
      -1,    -1,   380,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,   100,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   380,   213,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   431,   432,    -1,    -1,    -1,    -1,    -1,
     246,   439,    -1,    -1,    -1,   419,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,    -1,   431,   432,   265,
      -1,   267,    -1,    -1,    -1,   463,    -1,   465,    -1,   467,
     468,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,   453,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,   463,
      -1,   465,    -1,   467,   468,   201,    -1,   495,    -1,   305,
      -1,   475,   500,    -1,    -1,    -1,    -1,   213,    -1,   507,
      -1,   509,    -1,    -1,    -1,    -1,    -1,   515,   324,    -1,
      -1,   495,    83,   192,   193,   194,   500,    -1,    -1,    -1,
      -1,    -1,   201,   507,    -1,   509,    -1,    -1,    -1,   100,
     246,   515,    -1,   349,   213,    -1,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,
      -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   380,    -1,    -1,   246,    -1,    -1,
      -1,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,   305,    -1,    -1,    -1,
     201,    -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   324,    -1,   463,    -1,   465,
      -1,   467,   468,    -1,    -1,    83,    -1,    -1,    -1,   475,
      -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,
     349,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   495,
      -1,    -1,    -1,    -1,   500,    -1,   257,    -1,   259,   260,
     261,   507,    -1,   509,   265,    -1,    -1,   376,    -1,   515,
      -1,   380,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
     419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,
      -1,   467,   431,   432,    -1,    -1,    -1,    -1,    -1,   475,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   495,
      -1,    -1,    -1,    -1,   500,   213,   465,    -1,    -1,    -1,
      -1,   507,    -1,   509,    -1,    -1,   475,    -1,    -1,   515,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,
      -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,   246,    -1,
      -1,   500,    -1,    -1,   252,    -1,   254,    -1,   507,   257,
     509,   259,   260,   261,    -1,    -1,   515,   265,    -1,   267,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   444,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,    -1,
      -1,   349,    -1,    -1,   495,    -1,    -1,    -1,    -1,   500,
      -1,    -1,    -1,   504,    -1,    -1,   507,   508,   509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,    -1,
      -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,    -1,   507,
      -1,   509,    -1,    -1,    -1,    -1,    -1,   515
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
     549,   553,   564,   572,   573,   574,   575,   576,   582,   591,
     593,   598,   601,   602,   604,   605,   606,   607,   608,   609,
     610,   540,   528,   456,   233,   542,  1282,   509,  1200,  1200,
     426,   408,  1300,  1282,  1282,  1282,   397,  1200,   408,   456,
     456,  1282,   456,   456,    58,  1270,   577,     1,   456,   575,
     219,   592,   174,   611,   456,   530,   456,    73,   172,   357,
     461,   543,   544,   583,  1282,  1282,  1282,   509,  1195,  1226,
      69,  1195,   456,  1282,  1282,   554,   565,  1195,   550,   509,
     594,   595,   596,  1201,   257,   309,   311,   578,   580,   581,
    1043,  1229,  1282,   456,   509,   456,   613,   544,   342,  1297,
    1282,   213,   257,   267,   349,   419,   465,   515,   599,   600,
    1232,  1195,   257,   219,   308,  1319,   257,   473,    57,    64,
     269,   342,   399,   404,   509,   555,   556,   557,   558,   559,
     560,   561,   563,  1269,  1329,   199,   566,   567,   568,   551,
     563,   595,    22,   233,  1201,  1283,  1043,   233,   426,  1294,
    1282,    97,  1200,   235,   400,   612,   614,    28,   127,   213,
     257,   267,   281,   349,   419,   422,   423,   515,   584,   585,
     586,   589,   600,   447,   508,   603,  1313,  1226,   403,   404,
     413,    64,  1282,   456,   557,   456,   509,   556,    60,  1282,
       9,   373,   501,   569,   571,     1,   456,   568,   552,  1313,
     257,   597,  1230,  1294,   233,  1200,  1200,   579,   580,   456,
       1,   291,   314,  1255,   275,   391,   646,   647,   648,   649,
     651,   586,    17,   447,  1232,   330,  1282,   404,  1229,   456,
    1282,   509,  1196,   230,    26,   570,   230,   373,   456,   456,
     108,  1230,  1200,   456,   314,  1200,   652,   354,   415,   416,
     650,   534,     1,   456,   648,   587,   589,   257,  1229,   258,
     438,   499,   562,  1196,   257,   273,   615,   459,  1273,    23,
    1264,   103,   656,   456,   588,   589,    58,   510,  1323,   616,
     442,  1306,   189,  1275,   123,   459,   657,    17,     4,    19,
      29,    64,   221,   253,   317,   322,   354,   362,   375,   404,
     407,   415,   456,   459,   617,   618,   624,   626,   628,   629,
     630,   631,   632,   635,   636,   637,   638,   639,   641,   642,
     644,  1298,  1314,    87,  1271,   509,  1185,  1186,   456,   397,
     658,   589,   273,  1289,   354,  1298,   451,   502,  1310,   404,
     405,  1282,  1269,   114,   238,  1284,  1284,   288,   643,  1229,
    1313,   426,   263,    39,  1267,  1282,   653,   654,  1186,  1186,
     456,   173,   395,   535,   659,   660,   662,  1282,  1284,   126,
     172,   621,   362,   636,  1282,  1282,  1282,  1282,  1264,     9,
     288,   352,   645,  1282,  1289,   405,   509,   654,   333,   655,
     511,   687,   689,   690,     1,  1186,   126,   350,   405,   625,
    1282,   118,   119,   120,   239,   253,   337,   350,   442,   619,
     620,   257,  1195,  1199,   422,   640,  1195,  1195,   318,  1295,
    1295,   312,  1195,  1282,  1229,   397,   262,   743,   691,   692,
     694,   704,  1247,   456,   661,   640,   257,   623,  1226,   623,
       7,   623,   623,   257,   622,  1226,   417,   457,    33,   168,
     268,   633,   456,   397,   256,   745,   456,   692,   456,     1,
     176,   509,   695,   696,   509,   663,   125,   508,  1249,  1328,
    1273,  1282,  1194,  1195,   508,   634,   634,   688,   456,   397,
     369,   747,   456,   456,   693,    86,    47,    63,   103,   240,
     251,   354,   355,   369,   371,   456,   503,   664,   665,   667,
     671,   672,   675,   676,   682,   683,   684,   685,  1282,   125,
     435,   627,  1194,  1195,   263,   388,   689,   744,   456,   397,
     392,   792,   706,   697,  1282,  1271,  1282,   354,   356,  1324,
    1324,  1282,  1271,  1282,  1289,  1282,    22,  1263,   308,   686,
    1200,   172,   204,   506,   311,   689,   746,   456,   397,   536,
      21,    36,    39,    40,    41,    42,    43,    44,    45,    74,
      76,    77,    78,    79,    80,    81,    82,   120,   179,   180,
     181,   182,   183,   186,   187,   220,   236,   278,   307,   321,
     329,   332,   345,   358,   366,   408,   410,   411,   412,   437,
     482,   483,   484,   496,   503,   707,   708,   709,   711,   712,
     713,   714,   715,   716,   717,   720,   732,   733,   734,   735,
     736,   741,   742,  1282,  1302,    26,   196,   705,  1265,   204,
    1229,   509,  1282,  1263,   509,  1197,  1198,   310,   421,  1320,
    1199,  1229,   504,  1282,   175,   214,   509,   673,  1200,     9,
     419,   515,   590,   275,   354,   356,  1322,   689,   748,   456,
     339,   806,   809,   245,   303,   409,   481,  1301,   481,  1301,
     481,  1301,   481,  1301,   481,  1301,   506,  1311,   387,  1299,
     126,  1229,  1223,  1226,  1226,   233,   243,   387,  1285,  1282,
    1283,   172,   204,   242,   473,   509,     9,    50,   213,   245,
     246,   257,   267,   349,   419,   465,   515,   698,  1233,  1234,
    1235,   451,   670,  1198,   255,  1288,   451,  1270,   219,  1277,
     509,  1282,  1282,  1235,  1322,   749,   793,   123,   832,   833,
     515,    53,   724,   451,   721,   467,  1227,  1228,   447,   714,
     738,   739,  1233,    26,   710,   403,  1259,  1259,  1235,   308,
    1292,     1,    40,    41,    42,    43,    44,   179,   180,   181,
     182,   183,   184,   185,   332,   345,   699,   700,   701,   702,
     703,   715,   716,  1223,   699,   452,  1229,    58,   356,   666,
     677,  1229,   413,  1303,   257,   674,  1226,   674,   351,   750,
     694,   704,   794,   795,   796,    56,   502,   810,     1,     3,
       5,    10,    18,    51,    52,    61,    72,    75,    89,   112,
     120,   122,   153,   164,   169,   195,   202,   205,   206,   216,
     223,   225,   228,   270,   274,   276,   286,   313,   326,   352,
     353,   363,   377,   378,   384,   388,   396,   406,   415,   424,
     429,   430,   433,   435,   443,   456,   474,   480,   485,   512,
     834,   835,   851,   856,   860,   865,   880,   883,   887,   891,
     892,   893,   898,   912,   916,   919,   933,   937,   940,   943,
     947,   948,   952,   962,   965,   982,   984,   987,   991,   997,
    1009,  1017,  1018,  1021,  1022,  1026,  1031,  1032,  1040,  1055,
    1065,  1074,  1079,  1086,  1090,  1092,  1095,  1098,  1102,  1129,
     834,  1277,   196,   722,  1229,   450,  1308,    83,   100,   192,
     193,   194,   201,   246,   252,   254,   259,   260,   261,   265,
     305,   324,   380,   431,   432,   463,   467,   468,   475,   495,
     500,   507,  1173,  1175,  1176,  1177,  1178,  1179,  1180,  1208,
    1222,  1223,  1234,  1236,  1237,  1238,  1239,   467,  1228,  1226,
     737,   739,   447,   257,  1269,   699,   456,  1235,    48,   470,
     678,   679,   680,   681,  1313,  1270,   196,   669,  1276,   509,
    1187,     1,   695,   796,   456,   812,   811,   379,   818,     3,
       5,    10,    18,    51,    52,    61,    72,    75,    89,   112,
     120,   122,   129,   131,   132,   133,   134,   135,   136,   137,
     138,   140,   141,   142,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   164,   169,   195,   202,   205,   206,
     216,   223,   225,   228,   270,   274,   276,   286,   313,   326,
     352,   363,   378,   384,   388,   396,   406,   415,   424,   429,
     430,   433,   435,   443,   456,   474,   480,   485,   512,  1260,
     836,   852,   857,   861,   866,   881,   884,   888,   894,   899,
     913,   917,   920,   934,   938,   941,   944,   203,   379,   875,
     936,   949,   953,   963,   966,   983,   985,   988,   402,   992,
     998,  1010,  1019,  1023,  1027,  1033,  1041,  1056,  1066,   257,
     349,   390,   419,   515,  1078,  1080,  1087,   338,  1091,  1093,
     821,  1096,  1099,  1103,  1130,   509,  1229,   721,   115,   723,
     467,   467,   467,  1241,  1223,  1234,  1236,  1319,  1319,   467,
     467,   467,   467,  1319,  1179,  1175,  1179,   467,  1241,    71,
     401,   453,  1174,   454,   463,   468,   455,   464,   170,   467,
    1240,   467,   467,  1175,   506,   740,  1312,  1233,  1199,  1199,
     188,   670,  1229,   751,   456,   797,   456,    49,   813,   814,
     815,  1268,   813,   509,   456,   310,   837,   838,  1222,     6,
      95,   246,   272,   853,  1180,  1204,  1205,  1222,  1233,  1236,
     858,  1175,  1222,   257,   862,   863,  1191,  1192,  1193,  1226,
     272,   425,   427,   867,   868,   257,   882,  1213,  1222,   885,
    1186,     6,   889,  1181,  1182,  1203,  1224,  1225,  1226,  1234,
     459,   895,  1186,   257,   900,   901,   903,  1204,  1205,  1213,
    1222,   914,  1205,   257,   918,   458,   469,   921,   922,   923,
    1163,  1164,  1165,   199,   325,   326,   342,   397,   935,   939,
    1202,  1203,   942,  1226,   451,   945,  1309,  1205,  1162,  1163,
     954,  1202,   964,  1187,   967,   968,  1222,  1233,  1236,  1057,
    1220,  1221,  1226,    95,   986,  1205,   989,  1205,   171,   226,
     234,   319,   993,   994,   191,   257,   999,  1003,  1004,  1005,
    1191,  1214,  1222,  1226,  1236,  1313,  1011,  1186,  1020,  1183,
    1226,  1024,  1186,  1028,  1183,     9,  1034,  1184,  1226,   154,
     272,  1042,  1045,  1046,  1049,  1050,  1051,  1052,  1053,  1054,
    1188,  1189,  1202,  1219,  1221,  1226,  1057,  1067,  1186,  1075,
     113,  1081,  1082,  1083,  1205,    95,  1088,  1204,  1094,  1187,
     456,   509,   822,   823,   826,   827,   832,  1097,  1222,  1100,
    1186,  1104,  1222,  1131,  1183,   224,   725,   311,  1293,   726,
     727,  1173,  1175,  1245,  1173,  1246,   453,  1173,   509,   509,
    1175,  1244,  1244,  1244,  1207,  1222,  1234,  1236,  1243,   509,
     453,  1207,  1242,  1175,   453,  1175,  1176,  1176,  1177,  1177,
    1177,  1175,  1207,  1173,   406,   458,    30,  1266,  1270,     1,
     752,   798,   814,   413,   481,   816,   360,   503,   807,   131,
     850,    30,   840,   841,  1266,   196,  1292,  1222,  1223,  1234,
    1236,   132,   855,   451,   854,  1205,    58,   224,  1250,   863,
     451,  1319,   133,   879,   257,  1214,  1213,  1186,   359,   479,
     886,  1313,  1325,  1292,   134,   890,   160,   457,  1182,  1317,
     389,  1256,  1227,  1228,   896,  1186,   135,   897,  1298,   136,
     911,   166,   902,  1142,  1143,   489,   904,   508,   841,   490,
     491,   492,   493,   137,   915,    49,   229,   502,   869,   138,
     932,    17,   506,   924,   925,   926,   928,    12,    13,    14,
      20,   160,   170,   207,   208,   247,   248,   285,   291,   295,
     303,   310,   315,   334,   453,   455,   457,   460,   462,   463,
     464,   467,   468,  1166,  1167,  1168,  1169,  1170,  1171,  1172,
    1205,   102,   936,  1203,  1190,   446,  1307,   955,  1313,  1187,
      93,   368,   441,   969,   970,   972,   973,  1059,   467,  1227,
    1205,   451,   141,   990,    49,   994,   407,   995,  1004,   142,
     456,  1000,  1002,   486,   504,   447,   450,   444,   144,  1016,
     286,   336,  1253,   196,  1132,   145,  1025,  1298,   146,  1030,
    1132,  1184,   147,  1039,   504,  1035,  1211,  1222,  1234,  1052,
    1054,  1202,   451,  1189,   124,   451,   487,  1044,    31,  1227,
     148,  1073,   178,   238,   241,  1069,   875,  1076,  1313,  1268,
     149,  1085,   229,  1083,  1222,   150,  1089,   196,  1187,   397,
     456,   456,   196,   354,   356,  1101,   151,  1113,   113,  1105,
     152,  1136,  1132,   726,  1195,   221,   729,    27,   116,   728,
    1174,   453,  1174,   453,   453,  1174,   453,   453,   453,  1174,
     453,  1174,   453,   453,   454,   453,   453,   451,  1282,  1199,
     115,   668,   456,    62,    90,    91,   323,   456,   753,   754,
     757,  1282,  1337,    32,    35,    38,    45,    46,    65,    67,
     161,   190,   196,   198,   209,   212,   244,   253,   266,   307,
     320,   347,   374,   381,   398,   451,   461,   478,   502,   712,
     713,   717,   732,   734,   736,   799,   804,   805,  1282,  1315,
    1282,   413,   314,   817,   110,   819,   515,  1215,  1219,  1229,
     197,   844,   253,   333,   842,   843,  1315,    24,    25,    66,
      68,    70,   104,   105,   106,   154,   156,   163,   166,   253,
     255,   448,   498,   509,   839,  1189,  1316,   153,   342,  1209,
    1223,   451,     6,  1181,  1205,  1226,  1234,   203,   224,  1251,
     379,   859,   341,   864,  1193,   869,   886,   263,   288,  1275,
    1223,  1175,   273,  1257,  1228,  1186,   232,  1158,  1159,   829,
     830,   903,  1205,   296,  1144,    97,   337,   509,  1189,   300,
     908,    35,    38,    45,    46,    92,   161,   190,   212,   266,
     320,   381,   394,   413,   478,   909,   910,   489,   905,  1142,
    1142,  1142,  1142,  1205,  1181,  1205,   870,   923,    21,   458,
     469,   929,   930,  1164,   506,   926,   927,   506,   829,  1309,
     233,  1167,   115,   946,  1191,   129,   829,   950,     9,    12,
      15,    16,   278,   279,   303,   304,   956,   960,   176,  1211,
       9,    58,   178,   242,   473,   976,   977,   978,   971,   972,
    1061,  1293,  1328,   451,  1202,  1181,  1205,   995,  1313,  1185,
     829,   169,  1006,  1162,  1007,  1008,  1222,  1191,     8,    37,
    1134,  1298,  1218,  1222,  1233,  1236,   229,  1012,  1029,  1313,
     130,  1036,  1222,  1036,   451,   451,  1043,   153,   458,   469,
    1205,    49,    38,    46,   212,   244,   266,   320,   381,   478,
    1047,  1048,  1282,  1068,  1313,  1205,   162,   290,   413,  1205,
    1222,   196,  1181,  1205,   828,  1229,  1211,  1268,   229,  1108,
    1133,  1134,   729,  1268,  1284,   439,  1240,   439,  1240,  1195,
    1240,  1240,  1240,  1207,   242,   473,  1240,   453,  1175,  1240,
    1240,  1233,  1293,  1282,  1282,  1263,   249,   250,  1287,   766,
     204,   177,   755,  1274,  1282,   253,   392,   157,   159,  1282,
    1218,   301,  1290,  1229,    57,  1222,  1222,   204,  1290,    32,
     111,  1229,  1282,   509,   456,   808,   273,   845,  1290,  1290,
     843,   842,  1290,   163,   166,  1137,  1138,  1139,   514,   513,
    1211,  1137,   238,   426,   301,   277,   257,  1210,  1223,  1222,
    1292,   414,  1145,  1146,  1227,  1228,  1181,   451,  1252,   859,
    1203,   451,  1191,   874,   875,   383,   365,  1145,  1282,   829,
     297,  1160,   831,   829,  1142,  1282,   253,   392,   157,   159,
    1282,   124,   487,  1282,   910,  1142,    97,    98,   906,   845,
     203,  1145,   203,   871,   872,   873,  1268,    17,   447,   931,
     318,   929,  1293,   829,   129,   140,   951,  1309,   368,   957,
    1309,   451,    49,   977,   979,  1211,     9,    58,   242,   473,
     974,   975,  1211,  1062,  1314,   728,   219,   316,  1278,  1202,
    1145,   203,  1185,   645,   382,   996,  1313,   142,  1001,     8,
     196,  1012,  1222,   130,  1151,  1153,  1158,   263,   288,   829,
     506,   506,  1037,  1038,  1211,  1210,  1205,  1043,  1043,  1043,
    1043,  1043,  1043,  1043,  1043,  1048,   291,   295,  1070,  1071,
    1072,  1168,  1254,  1158,   245,   413,  1327,   426,  1305,  1305,
    1084,  1313,  1222,  1145,   203,   456,   451,     9,  1106,  1107,
    1248,  1109,  1222,  1084,  1109,  1029,     7,  1261,   509,   730,
     731,  1282,   453,  1195,  1213,  1282,  1263,   257,   758,  1231,
     694,   767,   756,  1222,  1215,  1215,  1282,  1308,  1282,  1282,
      32,  1229,   820,   821,  1282,   508,   846,  1215,  1215,  1215,
     294,   296,  1140,  1141,   829,  1137,  1256,  1223,   829,   299,
    1147,  1228,  1145,  1212,  1222,  1233,   166,   466,   877,     6,
     229,   310,   465,   876,  1281,    34,   282,   283,   284,   346,
     471,   472,   476,  1258,   829,   832,  1215,  1215,  1161,  1217,
    1219,  1229,  1161,  1215,   508,   907,  1181,  1182,  1181,  1182,
     872,   310,   816,    88,   360,   503,   930,  1163,   829,  1222,
     829,   503,   958,   959,   960,   961,  1307,   503,  1212,  1211,
      49,   980,   975,   189,   980,  1058,  1282,  1284,   316,  1181,
     996,   263,   288,  1008,  1205,   218,  1013,  1313,   829,   292,
    1154,   263,  1163,  1162,  1037,  1168,  1222,  1169,  1170,  1171,
    1172,  1175,  1077,  1205,  1077,   466,  1148,  1149,   332,  1256,
    1181,   824,  1212,   315,  1211,   114,  1110,   441,  1112,   158,
     293,  1135,  1155,  1156,  1157,  1158,   323,  1189,  1215,   731,
    1194,   759,   253,   255,  1321,   509,   695,  1222,   271,   331,
     463,   468,   800,   801,   802,  1213,   800,   801,   803,   821,
      47,    32,    35,    38,    46,    92,   111,   190,   198,   212,
     244,   264,   266,   288,   289,   320,   347,   348,   374,   381,
     394,   398,   413,   440,   449,   478,   488,   494,   847,   848,
     849,  1137,   829,  1145,   829,   829,   829,   296,   878,  1292,
    1222,   253,   255,  1326,   909,  1145,   364,  1145,   364,  1205,
     959,   103,  1272,  1309,   980,   980,  1212,     8,    37,   981,
     226,   502,  1063,  1195,  1060,  1145,   383,    49,   263,   238,
    1014,   217,   237,   263,   288,   505,   829,   829,   829,   829,
     298,  1150,  1282,  1145,  1145,   497,   825,  1114,  1107,  1277,
      96,  1111,  1277,  1148,   829,   829,  1157,   253,   255,  1286,
     178,   188,   211,   241,   760,   761,   762,   763,   764,   765,
    1231,   768,  1215,  1215,   130,  1282,  1282,   849,    57,   413,
     124,   487,  1282,     8,  1262,   848,   829,  1222,  1182,  1182,
      49,   111,   980,   461,  1280,  1280,   339,  1185,   203,   319,
    1064,  1226,  1205,  1282,  1015,  1152,  1153,  1154,  1158,   263,
     263,   263,   829,  1222,  1115,   456,  1222,  1277,  1222,   107,
     117,  1330,  1282,  1282,    55,    90,  1330,  1331,  1316,   769,
     110,  1215,  1215,  1282,  1282,  1161,  1161,  1215,  1216,  1219,
    1231,  1145,  1145,  1205,  1205,  1205,  1282,  1185,   339,   486,
    1222,  1154,   128,   167,   204,  1116,  1117,  1118,  1120,  1124,
    1126,  1127,  1128,  1266,  1275,  1222,  1282,  1231,  1231,   211,
    1282,  1282,   210,   253,   255,   286,   307,   335,   417,   434,
     456,   477,   496,   504,   712,   717,   718,   732,   734,   736,
     770,   771,   775,   776,   779,   780,   781,   782,   783,   784,
     789,   790,   791,  1315,  1316,   456,  1213,  1215,  1003,  1282,
    1162,    37,  1262,   342,   108,  1231,  1231,  1231,   222,  1279,
     301,   302,  1291,  1263,   210,  1229,   506,  1282,  1292,  1282,
    1282,  1222,   287,   331,   785,   786,  1231,   331,   787,   788,
    1231,  1291,  1263,  1003,   370,   421,  1304,   130,   424,  1125,
    1293,  1283,  1282,   721,  1162,  1208,  1206,  1208,    54,    90,
     323,   327,   328,   369,   385,   386,   772,  1330,  1331,  1332,
    1333,  1334,  1335,  1336,   120,   196,  1229,   786,  1229,   788,
    1283,  1222,   162,   166,  1318,     9,  1121,  1122,  1192,   786,
    1308,  1256,   376,   777,  1208,   188,   188,   211,   188,   211,
     177,   773,  1222,   773,  1208,   339,  1296,   308,   340,   361,
    1123,  1122,   723,  1293,   315,   774,   774,    49,  1293,   308,
    1226,   428,   719,   177,   778,  1222,   323,  1208,   171,   226,
     234,   319,  1119,  1185,  1229
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
     578,   579,   579,   580,   581,   581,   583,   582,   584,   584,
     584,   584,   584,   584,   585,   585,   586,   586,   587,   586,
     588,   588,   589,   589,   589,   589,   589,   589,   590,   590,
     591,   592,   592,   593,   594,   594,   595,   596,   596,   597,
     597,   598,   599,   599,   600,   600,   601,   602,   603,   603,
     604,   605,   606,   607,   608,   609,   610,   610,   611,   611,
     612,   612,   613,   613,   615,   614,   614,   616,   616,   617,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   617,   618,   618,   618,   618,   618,   619,   619,   619,
     619,   620,   620,   621,   621,   621,   622,   622,   623,   623,
     623,   624,   625,   625,   625,   626,   627,   627,   627,   628,
     629,   630,   630,   630,   632,   631,   633,   633,   633,   634,
     634,   634,   634,   635,   635,   636,   636,   636,   636,   637,
     638,   639,   640,   640,   640,   641,   642,   643,   643,   644,
     645,   645,   645,   646,   646,   646,   647,   647,   648,   648,
     649,   650,   650,   650,   650,   652,   651,   653,   653,   654,
     655,   655,   656,   656,   657,   657,   658,   658,   659,   661,
     660,   660,   662,   662,   663,   663,   664,   664,   664,   664,
     664,   664,   664,   664,   664,   664,   664,   665,   666,   666,
     666,   667,   667,   667,   668,   668,   669,   669,   670,   670,
     671,   672,   672,   673,   673,   674,   674,   675,   676,   677,
     677,   678,   678,   678,   679,   680,   681,   682,   683,   684,
     685,   685,   686,   686,   687,   688,   687,   689,   690,   689,
     691,   691,   691,   692,   693,   692,   692,   694,   695,   695,
     695,   696,   697,   697,   698,   698,   698,   698,   699,   699,
     699,   699,   699,   699,   699,   699,   699,   699,   699,   699,
     699,   700,   700,   701,   701,   702,   702,   702,   703,   703,
     704,   705,   705,   706,   706,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   708,
     709,   710,   710,   711,   712,   713,   713,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   715,   715,   716,   716,   717,   717,   718,
     719,   719,   720,   720,   721,   721,   722,   722,   723,   723,
     724,   724,   725,   725,   726,   727,   727,   728,   728,   729,
     729,   730,   730,   731,   732,   733,   734,   735,   737,   736,
     738,   738,   739,   739,   740,   740,   741,   741,   742,   742,
     743,   744,   743,   745,   746,   745,   747,   748,   747,   749,
     749,   751,   750,   752,   752,   752,   753,   753,   753,   753,
     754,   755,   756,   756,   757,   758,   758,   758,   759,   759,
     760,   760,   760,   760,   760,   761,   762,   763,   764,   765,
     766,   766,   768,   767,   769,   769,   770,   770,   770,   770,
     770,   770,   770,   770,   770,   770,   770,   770,   770,   770,
     770,   770,   771,   772,   772,   772,   772,   772,   772,   772,
     773,   773,   773,   774,   774,   775,   776,   777,   777,   778,
     778,   779,   780,   781,   782,   782,   783,   784,   784,   785,
     785,   786,   786,   786,   787,   787,   788,   788,   789,   790,
     791,   792,   793,   792,   794,   794,   795,   795,   796,   797,
     796,   796,   798,   798,   799,   799,   799,   799,   799,   799,
     799,   799,   799,   799,   799,   799,   799,   799,   799,   799,
     799,   799,   799,   799,   799,   799,   799,   799,   799,   799,
     799,   799,   799,   799,   799,   799,   799,   799,   799,   800,
     800,   801,   801,   802,   802,   802,   803,   803,   803,   804,
     805,   806,   807,   808,   806,   809,   806,   810,   811,   810,
     812,   810,   813,   813,   814,   815,   815,   815,   816,   816,
     816,   816,   816,   816,   817,   817,   818,   818,   819,   820,
     819,   821,   821,   822,   822,   822,   822,   822,   824,   823,
     825,   825,   826,   827,   828,   828,   830,   831,   829,   833,
     832,   832,   834,   834,   834,   834,   834,   834,   834,   834,
     834,   834,   834,   834,   834,   834,   834,   834,   834,   834,
     834,   834,   834,   834,   834,   834,   834,   834,   834,   834,
     834,   834,   834,   834,   834,   834,   834,   834,   834,   834,
     834,   834,   834,   834,   834,   834,   834,   834,   834,   834,
     834,   834,   834,   836,   835,   837,   837,   837,   837,   837,
     837,   837,   837,   837,   837,   837,   837,   837,   837,   837,
     837,   837,   837,   837,   838,   838,   839,   839,   840,   840,
     841,   841,   841,   841,   841,   842,   843,   843,   844,   844,
     845,   845,   846,   846,   847,   847,   848,   848,   848,   848,
     848,   848,   848,   848,   848,   848,   848,   848,   848,   848,
     848,   848,   848,   848,   848,   848,   848,   848,   848,   848,
     848,   848,   848,   848,   849,   849,   850,   850,   852,   851,
     853,   853,   853,   854,   854,   855,   855,   857,   856,   858,
     858,   859,   859,   861,   860,   862,   862,   863,   864,   864,
     866,   865,   867,   868,   868,   868,   868,   869,   870,   869,
     871,   871,   872,   872,   873,   873,   873,   873,   874,   874,
     874,   874,   875,   875,   876,   876,   877,   877,   877,   878,
     878,   879,   879,   881,   880,   882,   882,   884,   883,   885,
     885,   886,   886,   886,   886,   886,   888,   887,   889,   890,
     890,   891,   892,   894,   893,   895,   895,   896,   896,   897,
     897,   899,   898,   900,   900,   900,   900,   900,   900,   900,
     901,   902,   901,   903,   904,   904,   904,   904,   904,   905,
     905,   906,   906,   907,   907,   908,   908,   909,   909,   910,
     910,   910,   910,   910,   910,   910,   910,   910,   910,   910,
     910,   910,   910,   910,   910,   910,   911,   911,   913,   912,
     914,   914,   914,   914,   914,   915,   915,   917,   916,   918,
     920,   919,   921,   922,   922,   923,   923,   923,   924,   924,
     925,   925,   926,   927,   928,   928,   929,   929,   930,   930,
     930,   930,   931,   931,   932,   932,   934,   933,   935,   935,
     935,   935,   935,   935,   935,   936,   936,   938,   937,   939,
     941,   940,   942,   944,   943,   945,   946,   946,   947,   949,
     948,   950,   950,   950,   951,   951,   953,   952,   954,   955,
     955,   956,   956,   956,   957,   957,   958,   958,   959,   960,
     960,   960,   960,   960,   960,   960,   961,   961,   963,   962,
     964,   964,   966,   965,   967,   968,   968,   968,   969,   969,
     969,   969,   971,   970,   972,   973,   974,   974,   975,   975,
     975,   975,   975,   975,   976,   976,   977,   977,   978,   978,
     978,   978,   978,   979,   980,   980,   981,   981,   983,   982,
     985,   984,   986,   986,   988,   987,   989,   989,   990,   990,
     992,   991,   993,   993,   994,   994,   994,   994,   995,   995,
     996,   996,   996,   996,   998,   997,   999,  1000,   999,   999,
    1001,  1001,  1002,  1002,  1003,  1003,  1004,  1004,  1004,  1004,
    1004,  1005,  1005,  1006,  1006,  1007,  1007,  1008,  1010,  1009,
    1011,  1012,  1012,  1013,  1013,  1013,  1013,  1013,  1013,  1013,
    1014,  1014,  1015,  1015,  1016,  1016,  1017,  1019,  1018,  1020,
    1021,  1023,  1022,  1024,  1025,  1025,  1027,  1026,  1028,  1029,
    1029,  1029,  1030,  1030,  1031,  1033,  1032,  1034,  1034,  1035,
    1035,  1036,  1036,  1037,  1037,  1038,  1039,  1039,  1041,  1040,
    1042,  1042,  1042,  1042,  1042,  1042,  1043,  1043,  1044,  1044,
    1045,  1046,  1047,  1047,  1048,  1048,  1048,  1048,  1048,  1048,
    1048,  1048,  1049,  1049,  1050,  1051,  1051,  1052,  1053,  1053,
    1054,  1054,  1056,  1055,  1058,  1057,  1059,  1059,  1060,  1060,
    1061,  1061,  1062,  1062,  1063,  1063,  1063,  1064,  1064,  1064,
    1066,  1065,  1067,  1068,  1068,  1069,  1069,  1069,  1069,  1070,
    1070,  1070,  1070,  1070,  1070,  1071,  1072,  1072,  1073,  1073,
    1075,  1074,  1074,  1076,  1076,  1076,  1076,  1077,  1077,  1078,
    1078,  1078,  1078,  1080,  1079,  1081,  1082,  1082,  1083,  1083,
    1083,  1084,  1084,  1085,  1085,  1087,  1086,  1088,  1088,  1088,
    1089,  1089,  1090,  1091,  1091,  1093,  1092,  1094,  1094,  1096,
    1095,  1097,  1099,  1098,  1100,  1101,  1101,  1101,  1103,  1102,
    1104,  1105,  1105,  1106,  1106,  1107,  1108,  1108,  1109,  1110,
    1110,  1111,  1111,  1112,  1112,  1113,  1113,  1115,  1114,  1116,
    1116,  1116,  1116,  1116,  1117,  1118,  1118,  1119,  1119,  1119,
    1119,  1119,  1120,  1121,  1121,  1122,  1122,  1122,  1123,  1123,
    1123,  1123,  1124,  1125,  1125,  1126,  1127,  1128,  1128,  1130,
    1129,  1131,  1132,  1132,  1133,  1133,  1133,  1133,  1134,  1134,
    1135,  1135,  1136,  1136,  1137,  1138,  1138,  1139,  1139,  1140,
    1140,  1141,  1141,  1142,  1143,  1143,  1144,  1144,  1145,  1146,
    1146,  1147,  1147,  1148,  1149,  1149,  1150,  1150,  1151,  1151,
    1152,  1152,  1152,  1153,  1154,  1155,  1155,  1155,  1156,  1157,
    1158,  1159,  1159,  1160,  1160,  1161,  1161,  1162,  1163,  1165,
    1164,  1166,  1166,  1166,  1167,  1167,  1167,  1167,  1167,  1167,
    1167,  1167,  1167,  1167,  1167,  1167,  1167,  1167,  1167,  1167,
    1167,  1167,  1167,  1167,  1167,  1167,  1167,  1167,  1168,  1168,
    1169,  1169,  1170,  1170,  1171,  1172,  1173,  1173,  1174,  1174,
    1174,  1175,  1175,  1175,  1176,  1176,  1176,  1177,  1177,  1178,
    1178,  1178,  1179,  1179,  1180,  1180,  1180,  1180,  1180,  1180,
    1181,  1181,  1182,  1183,  1184,  1185,  1185,  1186,  1187,  1188,
    1188,  1189,  1190,  1190,  1191,  1192,  1192,  1192,  1193,  1194,
    1194,  1195,  1196,  1197,  1197,  1198,  1199,  1199,  1200,  1201,
    1202,  1202,  1203,  1203,  1203,  1204,  1204,  1205,  1205,  1205,
    1205,  1205,  1205,  1205,  1205,  1205,  1205,  1206,  1206,  1207,
    1207,  1207,  1208,  1208,  1208,  1208,  1208,  1208,  1208,  1209,
    1209,  1210,  1210,  1211,  1211,  1212,  1212,  1213,  1213,  1214,
    1214,  1214,  1215,  1215,  1215,  1216,  1216,  1217,  1217,  1218,
    1218,  1218,  1219,  1220,  1221,  1221,  1222,  1223,  1223,  1223,
    1223,  1224,  1225,  1225,  1225,  1225,  1226,  1226,  1227,  1228,
    1228,  1229,  1230,  1231,  1232,  1232,  1232,  1232,  1232,  1232,
    1232,  1233,  1233,  1234,  1234,  1235,  1235,  1235,  1235,  1235,
    1235,  1235,  1236,  1236,  1236,  1236,  1236,  1236,  1236,  1236,
    1236,  1236,  1236,  1236,  1237,  1237,  1238,  1238,  1238,  1239,
    1239,  1239,  1239,  1240,  1240,  1240,  1241,  1241,  1241,  1242,
    1242,  1242,  1243,  1243,  1244,  1244,  1245,  1245,  1246,  1246,
    1247,  1248,  1248,  1249,  1249,  1250,  1250,  1251,  1251,  1252,
    1252,  1253,  1253,  1253,  1254,  1254,  1255,  1255,  1255,  1256,
    1256,  1257,  1257,  1258,  1258,  1258,  1258,  1258,  1258,  1258,
    1258,  1259,  1259,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1261,  1261,  1262,  1262,  1263,  1263,  1264,
    1264,  1265,  1265,  1266,  1266,  1267,  1267,  1268,  1268,  1269,
    1269,  1270,  1270,  1271,  1271,  1272,  1272,  1273,  1273,  1274,
    1274,  1275,  1275,  1276,  1276,  1277,  1277,  1278,  1278,  1278,
    1279,  1279,  1280,  1280,  1281,  1281,  1282,  1282,  1283,  1283,
    1283,  1284,  1284,  1285,  1285,  1285,  1286,  1286,  1286,  1287,
    1287,  1287,  1288,  1288,  1289,  1289,  1290,  1290,  1291,  1291,
    1291,  1292,  1292,  1293,  1293,  1294,  1294,  1294,  1294,  1295,
    1295,  1296,  1296,  1297,  1297,  1298,  1298,  1299,  1299,  1300,
    1300,  1301,  1301,  1302,  1302,  1302,  1303,  1303,  1304,  1304,
    1305,  1305,  1306,  1306,  1307,  1307,  1308,  1308,  1309,  1309,
    1310,  1310,  1310,  1311,  1311,  1312,  1312,  1313,  1313,  1314,
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
       1,     0,     1,     1,     3,     4,     0,     5,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     0,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     2,     3,     1,     2,     3,     1,     2,     1,
       2,     4,     1,     2,     1,     3,     4,     5,     0,     3,
       3,     5,     3,     4,     3,     3,     0,     3,     0,     2,
       0,     2,     0,     2,     0,     6,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     5,     5,     5,     1,     1,     1,
       1,     0,     3,     0,     1,     1,     1,     1,     0,     1,
       1,     4,     1,     1,     1,     7,     0,     4,     3,     3,
       4,     0,     1,     1,     0,     5,     2,     2,     1,     0,
       4,     5,     2,     3,     1,     1,     3,     1,     2,     4,
       4,     4,     1,     3,     4,     4,     3,     1,     1,     3,
       2,     2,     2,     0,     2,     3,     1,     2,     1,     1,
       5,     0,     1,     1,     1,     0,     6,     1,     2,     2,
       0,     2,     0,     3,     0,     3,     0,     2,     2,     0,
       5,     3,     1,     1,     0,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       1,     4,     6,     9,     0,     3,     0,     2,     0,     2,
       3,     5,     5,     1,     1,     1,     1,     3,     5,     0,
       2,     1,     1,     1,     4,     2,     2,     4,     3,     2,
       2,     2,     1,     2,     0,     0,     5,     0,     0,     2,
       2,     3,     2,     1,     0,     4,     3,     2,     0,     1,
       1,     1,     0,     2,     1,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     0,     2,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       0,     2,     7,     8,     0,     2,     0,     2,     0,     3,
       0,     3,     0,     1,     1,     0,     5,     1,     1,     0,
       3,     1,     2,     1,     2,     2,     3,     1,     0,     5,
       1,     2,     1,     3,     0,     4,     2,     4,     2,     2,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       2,     0,     6,     0,     2,     2,     2,     3,     1,     1,
       2,     2,     1,     2,     4,     1,     4,     2,     0,     2,
       1,     1,     1,     1,     1,     3,     4,     4,     4,     3,
       0,     2,     0,     5,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     2,     1,     2,     1,     1,
       0,     2,     2,     0,     2,     4,     4,     0,     3,     1,
       1,     3,     6,     2,     3,     2,     2,     3,     2,     1,
       2,     2,     1,     1,     1,     2,     2,     1,     4,     2,
       3,     0,     0,     5,     0,     1,     2,     3,     1,     0,
       4,     3,     0,     2,     2,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     5,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     0,     1,     1,     0,     1,     1,     3,
       2,     0,     0,     0,     9,     0,     4,     0,     0,     3,
       0,     3,     1,     2,     4,     0,     2,     2,     0,     3,
       3,     4,     4,     3,     0,     1,     0,     2,     0,     0,
       7,     0,     2,     1,     1,     2,     1,     1,     0,     6,
       0,     2,     2,     1,     0,     1,     0,     0,     3,     0,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     4,     6,     3,     3,     4,     3,
       4,     3,     3,     4,     4,     3,     4,     3,     4,     5,
       3,     4,     3,     3,     1,     1,     1,     2,     0,     1,
       3,     3,     2,     2,     2,     3,     3,     3,     0,     1,
       0,     3,     0,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     4,     3,     1,     2,     1,     1,     3,
       3,     3,     3,     3,     1,     1,     0,     1,     0,     4,
       4,     5,     6,     0,     2,     0,     1,     0,     3,     3,
       4,     0,     2,     0,     3,     1,     2,     4,     0,     2,
       0,     4,     6,     0,     1,     1,     1,     0,     0,     3,
       1,     2,     2,     3,     0,     2,     2,     2,     0,     3,
       2,     4,     1,     1,     1,     1,     0,     2,     2,     0,
       2,     0,     1,     0,     3,     1,     2,     0,     3,     2,
       3,     0,     1,     3,     3,     2,     0,     4,     4,     0,
       1,     1,     1,     0,     4,     3,     2,     1,     2,     0,
       1,     0,     4,     3,     3,     3,     3,     4,     2,     4,
       1,     0,     3,     5,     0,     2,     2,     2,     2,     0,
       2,     1,     1,     0,     2,     0,     1,     1,     2,     1,
       2,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       3,     1,     3,     3,     3,     3,     0,     1,     0,     4,
       4,     6,     6,     8,     8,     0,     1,     0,     3,     2,
       0,     4,     2,     1,     3,     1,     1,     1,     2,     1,
       1,     2,     2,     3,     2,     3,     1,     3,     2,     1,
       1,     1,     0,     2,     0,     1,     0,     3,     0,     2,
       1,     2,     1,     1,     1,     0,     2,     0,     3,     1,
       0,     3,     1,     0,     3,     3,     0,     3,     2,     0,
       6,     3,     2,     1,     0,     1,     0,     3,     5,     0,
       2,     0,     3,     3,     0,     2,     1,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     0,     3,
       1,     2,     0,     3,     2,     1,     1,     1,     2,     1,
       1,     1,     0,     3,     2,     5,     1,     2,     2,     2,
       1,     1,     1,     2,     1,     2,     4,     2,     0,     1,
       1,     1,     1,     4,     0,     2,     3,     3,     0,     3,
       0,     3,     3,     4,     0,     4,     4,     6,     0,     1,
       0,     3,     4,     5,     1,     1,     1,     1,     0,     3,
       0,     3,     2,     1,     0,     3,     2,     0,     4,     2,
       0,     1,     1,     1,     1,     3,     0,     2,     1,     3,
       3,     0,     3,     1,     1,     1,     3,     7,     0,     4,
       7,     0,     2,     0,     2,     2,     3,     3,     3,     2,
       0,     3,     1,     1,     0,     1,     1,     0,     3,     2,
       1,     0,     4,     4,     0,     1,     0,     4,     4,     0,
       2,     3,     0,     1,     1,     0,     4,     4,     6,     0,
       2,     0,     2,     1,     2,     3,     0,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     3,     4,     1,     2,     3,     1,     2,
       3,     3,     0,     3,     0,     7,     0,     5,     0,     2,
       0,     2,     0,     3,     0,     2,     4,     0,     2,     4,
       0,     4,     4,     0,     3,     0,     4,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     2,     1,     0,     1,
       0,     4,     2,     0,     2,     4,     4,     0,     1,     1,
       1,     1,     1,     0,     4,     5,     1,     2,     1,     3,
       3,     0,     4,     0,     1,     0,     4,     4,     6,     6,
       0,     1,     2,     0,     1,     0,     3,     1,     2,     0,
       3,     5,     0,     3,     2,     0,     1,     1,     0,     4,
       6,     0,     3,     1,     3,     2,     2,     2,     3,     0,
       3,     0,     3,     0,     3,     0,     1,     0,     3,     1,
       1,     1,     1,     1,     7,     0,     1,     1,     1,     1,
       1,     1,     4,     1,     2,     1,     2,     3,     0,     1,
       2,     1,     3,     1,     1,     4,     1,     1,     1,     0,
       4,     5,     0,     2,     0,     4,     3,     3,     1,     1,
       1,     1,     0,     1,     2,     0,     2,     1,     1,     0,
       2,     1,     1,     2,     0,     2,     0,     2,     2,     0,
       2,     0,     2,     2,     0,     2,     0,     2,     2,     1,
       2,     1,     1,     2,     2,     2,     1,     1,     2,     2,
       2,     0,     2,     0,     2,     0,     2,     1,     1,     0,
       2,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     1,
       1,     3,     3,     1,     3,     3,     1,     3,     1,     2,
       2,     1,     3,     1,     1,     3,     1,     3,     1,     3,
       1,     2,     2,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     0,     2,     1,     1,     1,     3,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     2,     1,     1,     1,
       1,     2,     2,     2,     4,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     2,     2,
       1,     1,     3,     2,     2,     1,     1,     3,     3,     4,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     5,     5,     5,     4,     5,     5,     5,
       5,     5,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     5,     0,     3,     2,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       0,     0,     1,     0,     1,     0,     1,     0,     2,     0,
       2,     0,     1,     1,     0,     1,     0,     1,     2,     0,
       2,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     2,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       1,     0,     1,     0,     1,     1,     0,     1,     1,     0,
       2,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       1,     0,     1,     0,     1,     0,     2,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     2,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     0,     1,     0,     3,     0,     1,     2,
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
#line 1396 "parser.y" /* yacc.c:1646  */
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
#line 6151 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 1407 "parser.y" /* yacc.c:1646  */
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
#line 6174 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 1443 "parser.y" /* yacc.c:1646  */
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
#line 6198 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 1498 "parser.y" /* yacc.c:1646  */
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
#line 6223 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 1527 "parser.y" /* yacc.c:1646  */
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
#line 6248 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 1560 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 6256 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 1566 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 6264 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 1578 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 6272 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 1588 "parser.y" /* yacc.c:1646  */
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
#line 6307 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 1619 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6315 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 1626 "parser.y" /* yacc.c:1646  */
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
#line 6348 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 1662 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6354 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 1663 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6360 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1672 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6373 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 1681 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6386 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1695 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6394 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1699 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6402 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1709 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6410 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1718 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 6422 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1743 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 6435 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1761 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 6447 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1774 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 6457 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1803 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 6465 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1811 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 6473 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1818 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 6481 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1825 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 6493 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1836 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6501 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1840 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6509 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1844 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6517 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1848 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6525 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1862 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 6534 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1867 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 6542 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1875 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 6550 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1887 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 6558 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1891 "parser.y" /* yacc.c:1646  */
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
#line 6574 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1912 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6582 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1916 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6590 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1923 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6599 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1928 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6608 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1939 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 6622 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1953 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	yyerrok;
  }
#line 6631 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1984 "parser.y" /* yacc.c:1646  */
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
#line 6659 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 2012 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 6673 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2022 "parser.y" /* yacc.c:1646  */
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
#line 6690 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2035 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 6702 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2051 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 6710 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2058 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	
	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[0]), save_tree, (yyvsp[-2]) == cb_int1);
	if (x) {
		if ((yyvsp[-2]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[0]), x);
	}
  }
#line 6729 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2073 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[0]), save_tree, (yyvsp[-2]) == cb_int1);
	if (x) {
		if ((yyvsp[-2]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[0]), x);
	}
  }
#line 6748 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2093 "parser.y" /* yacc.c:1646  */
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
#line 6765 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2106 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 6777 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2117 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 6787 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2123 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6797 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2129 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6807 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2135 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 6817 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2141 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6827 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2147 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 6838 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2157 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 6846 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2161 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6854 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2168 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6862 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2172 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 6870 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2176 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 6878 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2180 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 6886 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2187 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6894 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2191 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 6902 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2197 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6908 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2198 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6914 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2199 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 6920 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2200 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 6926 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2201 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 6932 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2202 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 6938 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2206 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6944 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2207 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 6950 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2215 "parser.y" /* yacc.c:1646  */
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
#line 6965 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2229 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6973 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2233 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6981 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2241 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6989 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2248 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6997 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2252 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7009 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2263 "parser.y" /* yacc.c:1646  */
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
#line 7030 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2283 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7042 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2291 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7054 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2301 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7060 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2302 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7066 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2309 "parser.y" /* yacc.c:1646  */
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
#line 7088 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2329 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7094 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2330 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7100 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2335 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7108 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2339 "parser.y" /* yacc.c:1646  */
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
#line 7128 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2360 "parser.y" /* yacc.c:1646  */
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
#line 7150 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2383 "parser.y" /* yacc.c:1646  */
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
	check_repeated ("CURRENCY", SYN_CLAUSE_1, &check_duplicate);
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
#line 7231 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2464 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7239 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2468 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7247 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2477 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("DECIMAL-POINT", SYN_CLAUSE_2, &check_duplicate);
		current_program->decimal_point = ',';
		current_program->numeric_separator = '.';
	}
  }
#line 7264 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2496 "parser.y" /* yacc.c:1646  */
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
#line 7279 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2512 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3, &check_duplicate);
		current_program->cursor_pos = (yyvsp[0]);
	}
  }
#line 7295 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2530 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CRT STATUS", SYN_CLAUSE_4, &check_duplicate);
		current_program->crt_status = (yyvsp[0]);
	}
  }
#line 7311 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2548 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("SCREEN CONTROL", SYN_CLAUSE_5, &check_duplicate);
		PENDING ("SCREEN CONTROL");
	}
  }
#line 7327 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2565 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("EVENT STATUS", SYN_CLAUSE_6, &check_duplicate);
		PENDING ("EVENT STATUS");
	}
  }
#line 7343 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2582 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7352 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 2590 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7362 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 2599 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7372 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2614 "parser.y" /* yacc.c:1646  */
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
#line 7393 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2631 "parser.y" /* yacc.c:1646  */
    {
	validate_file (current_file, (yyvsp[-3]));
  }
#line 7401 "parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 2635 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
#line 7413 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2669 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 7423 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2675 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 7437 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 2685 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
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
#line 7454 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 2698 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
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
#line 7471 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 2711 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
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
#line 7488 "parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 2734 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 7496 "parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 2741 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 7504 "parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 2754 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7512 "parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2766 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 7521 "parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 2773 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 7527 "parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 2774 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 7533 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2775 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 7539 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 2783 "parser.y" /* yacc.c:1646  */
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
#line 7564 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 2806 "parser.y" /* yacc.c:1646  */
    { }
#line 7570 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2809 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
#line 7578 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2814 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 7586 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2824 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	PENDING ("COLLATING SEQUENCE");
  }
#line 7595 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 2835 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 7604 "parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 2850 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 7612 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 2858 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 7621 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 2863 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 7630 "parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 2868 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 7639 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2877 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 7647 "parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2881 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 7656 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2897 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 7665 "parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2902 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 7674 "parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2907 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 7683 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2912 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 7692 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2923 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 7701 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2934 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 7709 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2944 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 7718 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2951 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7724 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2952 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 7730 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2953 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 7736 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2960 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 7745 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2971 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 7753 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2985 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 7762 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2992 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7768 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2993 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 7774 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2994 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7780 "parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 3003 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7788 "parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 3022 "parser.y" /* yacc.c:1646  */
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
#line 7817 "parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 3049 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 7823 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 3050 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 7829 "parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 3051 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7835 "parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 3052 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7841 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 3059 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 7850 "parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 3064 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 7862 "parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 3091 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 7870 "parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 3100 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 7880 "parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 3114 "parser.y" /* yacc.c:1646  */
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
#line 7898 "parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 3133 "parser.y" /* yacc.c:1646  */
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
#line 7918 "parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 3150 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7926 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3157 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7934 "parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 3161 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7942 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 3172 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 7956 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3182 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_2, &check_duplicate);
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
#line 7975 "parser.c" /* yacc.c:1646  */
    break;

  case 307:
#line 3212 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 7984 "parser.c" /* yacc.c:1646  */
    break;

  case 311:
#line 3225 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
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
#line 8008 "parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 3245 "parser.y" /* yacc.c:1646  */
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
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
#line 8046 "parser.c" /* yacc.c:1646  */
    break;

  case 313:
#line 3280 "parser.y" /* yacc.c:1646  */
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
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
#line 8078 "parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 3311 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8086 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3317 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8092 "parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 3318 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8098 "parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 3322 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8104 "parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 3323 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8110 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3331 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8119 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3342 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8128 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 3347 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8140 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 3370 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8149 "parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 3382 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINAGE", SYN_CLAUSE_8, &check_duplicate);
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
#line 8168 "parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 3410 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8176 "parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 3417 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8184 "parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 3424 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8192 "parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 3433 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 8202 "parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3445 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE SET", SYN_CLAUSE_10, &check_duplicate);
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
#line 8253 "parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3497 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REPORT", SYN_CLAUSE_11, &check_duplicate);
	PENDING("REPORT WRITER");
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = (yyvsp[0]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	}
  }
#line 8269 "parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3517 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8283 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3527 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8296 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3567 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8306 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3573 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8316 "parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3582 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8324 "parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3585 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8334 "parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3591 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 8347 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3611 "parser.y" /* yacc.c:1646  */
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
#line 8366 "parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3626 "parser.y" /* yacc.c:1646  */
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
#line 8390 "parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3646 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8404 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3659 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8412 "parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3666 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8422 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3672 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8432 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3678 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8442 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3687 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8452 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3696 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 8460 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3700 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 8473 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3711 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8479 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3712 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8485 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3713 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8491 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3714 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8497 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3719 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8505 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3723 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8513 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3727 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 8521 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3731 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 8529 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3735 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8537 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3739 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 8545 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3743 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 8553 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3747 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 8561 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3751 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 8569 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3755 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 8577 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3759 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8585 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3763 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 8593 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3767 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8605 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3799 "parser.y" /* yacc.c:1646  */
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
#line 8632 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3825 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8640 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3829 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 8649 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3837 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 8658 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3843 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 8667 "parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 3871 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REDEFINES", SYN_CLAUSE_1, &check_pic_duplicate);
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
#line 8689 "parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 3895 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_2, &check_pic_duplicate);
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
#line 8717 "parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 3922 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 8725 "parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 3926 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 8733 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 3935 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_3, &check_pic_duplicate);
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
#line 8756 "parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 3960 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 8765 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 3976 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8773 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 3980 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8781 "parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 3984 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 8789 "parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 3988 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 8797 "parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 3992 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8805 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 3996 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8813 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4000 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 8821 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4004 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 8829 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4008 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 8837 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4012 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 8845 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4016 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 8853 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4020 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8861 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4024 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8870 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4029 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8879 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4034 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 8887 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4038 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 8895 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4042 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 8907 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4050 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 8915 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4054 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 8923 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4058 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 8935 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4066 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 8943 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4070 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 8951 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4074 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 8959 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4078 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 8967 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4082 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 8975 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4086 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 8983 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4090 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 8991 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4094 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 8999 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4098 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9011 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4106 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9023 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4114 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9031 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4118 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9039 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4122 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9047 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4126 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9055 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4130 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9063 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4134 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	PENDING ("USAGE NATIONAL");
  }
#line 9072 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4154 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9082 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4160 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9092 "parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4173 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
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
#line 9111 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4191 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9119 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4201 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
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
#line 9154 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4233 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
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
#line 9184 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4261 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9190 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4262 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9196 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4266 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9202 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4267 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9208 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4272 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9216 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4279 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9225 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4287 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9233 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4294 "parser.y" /* yacc.c:1646  */
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
#line 9258 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4317 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9264 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4320 "parser.y" /* yacc.c:1646  */
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
#line 9281 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4335 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9287 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4336 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9293 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4341 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9301 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4347 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9307 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4349 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9313 "parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4354 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9322 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4365 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 9331 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4376 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 9340 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4387 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 9349 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4398 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BASED", SYN_CLAUSE_11, &check_pic_duplicate);
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
#line 9376 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4426 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 9385 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4434 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9391 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4435 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9397 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4439 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9403 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4440 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 9409 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4445 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 9420 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4458 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RENAMES", SYN_CLAUSE_13, &check_pic_duplicate);
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
#line 9437 "parser.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4471 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RENAMES", SYN_CLAUSE_13, &check_pic_duplicate);
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
#line 9457 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4492 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 9470 "parser.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4501 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 9484 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4516 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 9497 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4525 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9507 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4537 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 9517 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4543 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9527 "parser.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4554 "parser.y" /* yacc.c:1646  */
    {
	PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 9537 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4570 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 9550 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4585 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9558 "parser.c" /* yacc.c:1646  */
    break;

  case 516:
#line 4592 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 9567 "parser.c" /* yacc.c:1646  */
    break;

  case 517:
#line 4597 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 9575 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 4608 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 9583 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4627 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PAGE", SYN_CLAUSE_4, &check_duplicate);
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
#line 9620 "parser.c" /* yacc.c:1646  */
    break;

  case 525:
#line 4663 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 9628 "parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 4667 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 9637 "parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 4672 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 9645 "parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 4692 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 9653 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 4699 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 9661 "parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 4706 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 9669 "parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 4713 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 9677 "parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 4720 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 9685 "parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 4731 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 9693 "parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 4762 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 9701 "parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 4788 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 9709 "parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 4795 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 9717 "parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 4811 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 9725 "parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 4822 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 9733 "parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 4834 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 9741 "parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 4867 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 9749 "parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 4874 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 9757 "parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 4881 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 9765 "parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 4890 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 9776 "parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 4897 "parser.y" /* yacc.c:1646  */
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
#line 9792 "parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 4922 "parser.y" /* yacc.c:1646  */
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
#line 9827 "parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 4953 "parser.y" /* yacc.c:1646  */
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
#line 9860 "parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 4982 "parser.y" /* yacc.c:1646  */
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
#line 9880 "parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5005 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 9888 "parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5009 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 9896 "parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5013 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 9904 "parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5017 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 9912 "parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5021 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 9920 "parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 5025 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 9928 "parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 5029 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 9936 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5033 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 9944 "parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5037 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 9952 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5041 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 9960 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5045 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	PENDING ("OVERLINE");
  }
#line 9969 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5050 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	PENDING ("GRID");
  }
#line 9978 "parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 5055 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	PENDING ("LEFTLINE");
  }
#line 9987 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5060 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 9995 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5064 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10003 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5068 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10011 "parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 5072 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10019 "parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 5076 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10028 "parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 5081 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10036 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5085 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10044 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5089 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10053 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5094 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10062 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5099 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10071 "parser.c" /* yacc.c:1646  */
    break;

  case 637:
#line 5104 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10080 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5117 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10093 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5126 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10102 "parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 5131 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10114 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5152 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10122 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5156 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10130 "parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 5160 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10138 "parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 5167 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10146 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5171 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10154 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5175 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10162 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5183 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10174 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5194 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10182 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5203 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10196 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5213 "parser.y" /* yacc.c:1646  */
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
#line 10212 "parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5225 "parser.y" /* yacc.c:1646  */
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
#line 10231 "parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 5240 "parser.y" /* yacc.c:1646  */
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
#line 10264 "parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5273 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10272 "parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 5277 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 10281 "parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 5282 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10293 "parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 5290 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 10306 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5299 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10318 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5309 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10324 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5311 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 10330 "parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5316 "parser.y" /* yacc.c:1646  */
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
#line 10347 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5333 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 10355 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5337 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 10367 "parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 5349 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 10379 "parser.c" /* yacc.c:1646  */
    break;

  case 680:
#line 5357 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 10391 "parser.c" /* yacc.c:1646  */
    break;

  case 681:
#line 5365 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 10403 "parser.c" /* yacc.c:1646  */
    break;

  case 682:
#line 5373 "parser.y" /* yacc.c:1646  */
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
#line 10436 "parser.c" /* yacc.c:1646  */
    break;

  case 683:
#line 5402 "parser.y" /* yacc.c:1646  */
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
#line 10469 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5434 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 10477 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5438 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 10490 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5450 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 10500 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5456 "parser.y" /* yacc.c:1646  */
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
#line 10529 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5484 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 10538 "parser.c" /* yacc.c:1646  */
    break;

  case 690:
#line 5490 "parser.y" /* yacc.c:1646  */
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
#line 10568 "parser.c" /* yacc.c:1646  */
    break;

  case 695:
#line 5528 "parser.y" /* yacc.c:1646  */
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
#line 10589 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 5546 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 10597 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 5556 "parser.y" /* yacc.c:1646  */
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
#line 10645 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 5600 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 10653 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5611 "parser.y" /* yacc.c:1646  */
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
#line 10702 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 5659 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	YYERROR;
  }
#line 10715 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 5671 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10723 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5675 "parser.y" /* yacc.c:1646  */
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
#line 10739 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 5693 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 10749 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 5698 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 10758 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 5703 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 10768 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 5711 "parser.y" /* yacc.c:1646  */
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
#line 10799 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 5738 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 10807 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 5742 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 10815 "parser.c" /* yacc.c:1646  */
    break;

  case 761:
#line 5798 "parser.y" /* yacc.c:1646  */
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
#line 10833 "parser.c" /* yacc.c:1646  */
    break;

  case 762:
#line 5812 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 10842 "parser.c" /* yacc.c:1646  */
    break;

  case 763:
#line 5823 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}

  }
#line 10857 "parser.c" /* yacc.c:1646  */
    break;

  case 765:
#line 5840 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-5]), (yyvsp[-4]), current_statement->attr_ptr);
  }
#line 10866 "parser.c" /* yacc.c:1646  */
    break;

  case 766:
#line 5845 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 10874 "parser.c" /* yacc.c:1646  */
    break;

  case 767:
#line 5849 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 10882 "parser.c" /* yacc.c:1646  */
    break;

  case 768:
#line 5853 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 10891 "parser.c" /* yacc.c:1646  */
    break;

  case 769:
#line 5858 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 10900 "parser.c" /* yacc.c:1646  */
    break;

  case 770:
#line 5863 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 10909 "parser.c" /* yacc.c:1646  */
    break;

  case 771:
#line 5868 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 10918 "parser.c" /* yacc.c:1646  */
    break;

  case 772:
#line 5873 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 10926 "parser.c" /* yacc.c:1646  */
    break;

  case 773:
#line 5877 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 10934 "parser.c" /* yacc.c:1646  */
    break;

  case 774:
#line 5881 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 10942 "parser.c" /* yacc.c:1646  */
    break;

  case 775:
#line 5885 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 10950 "parser.c" /* yacc.c:1646  */
    break;

  case 776:
#line 5889 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 10959 "parser.c" /* yacc.c:1646  */
    break;

  case 777:
#line 5894 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 10967 "parser.c" /* yacc.c:1646  */
    break;

  case 778:
#line 5898 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 10975 "parser.c" /* yacc.c:1646  */
    break;

  case 779:
#line 5902 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 10983 "parser.c" /* yacc.c:1646  */
    break;

  case 780:
#line 5906 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 10991 "parser.c" /* yacc.c:1646  */
    break;

  case 781:
#line 5910 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 10999 "parser.c" /* yacc.c:1646  */
    break;

  case 782:
#line 5914 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11007 "parser.c" /* yacc.c:1646  */
    break;

  case 783:
#line 5918 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11015 "parser.c" /* yacc.c:1646  */
    break;

  case 785:
#line 5926 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11023 "parser.c" /* yacc.c:1646  */
    break;

  case 788:
#line 5937 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11029 "parser.c" /* yacc.c:1646  */
    break;

  case 789:
#line 5938 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11035 "parser.c" /* yacc.c:1646  */
    break;

  case 790:
#line 5942 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0])); }
#line 11041 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 5943 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1])); }
#line 11047 "parser.c" /* yacc.c:1646  */
    break;

  case 792:
#line 5944 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), cb_int0); }
#line 11053 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 5945 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[0])); }
#line 11059 "parser.c" /* yacc.c:1646  */
    break;

  case 794:
#line 5946 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11065 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 5950 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11071 "parser.c" /* yacc.c:1646  */
    break;

  case 796:
#line 5954 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11077 "parser.c" /* yacc.c:1646  */
    break;

  case 797:
#line 5955 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11083 "parser.c" /* yacc.c:1646  */
    break;

  case 801:
#line 5964 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11091 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 5980 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11099 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 5984 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11109 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 5990 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11117 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 5994 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11125 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 5998 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11133 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6002 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11141 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6006 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 11149 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6010 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11157 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6014 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11165 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6018 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 11173 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6022 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11181 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6026 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11189 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6030 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 11197 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6034 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11205 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6038 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11213 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6042 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11221 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6046 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11229 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6050 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11237 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6054 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11245 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6058 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11253 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6062 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11263 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6068 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11271 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6072 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11279 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6076 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 11287 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6080 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 11295 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6084 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 11303 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6088 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 11311 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6092 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 11319 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6104 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 11327 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6108 "parser.y" /* yacc.c:1646  */
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
#line 11342 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6125 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 11350 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6134 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 11358 "parser.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6138 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 11366 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6142 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 11374 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6149 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11382 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6156 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 11390 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6160 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 11398 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6170 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 11407 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6179 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 11415 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6183 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 11428 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6194 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11434 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6195 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11440 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6203 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 11449 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6217 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 11457 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6229 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
#line 11466 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6244 "parser.y" /* yacc.c:1646  */
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
#line 11481 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 6258 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 11490 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6263 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 11499 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6268 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 11508 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6273 "parser.y" /* yacc.c:1646  */
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
#line 11529 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6293 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11537 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6297 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11546 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6302 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11559 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6313 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11565 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6315 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11571 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6320 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 11583 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6328 "parser.y" /* yacc.c:1646  */
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
#line 11609 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6354 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11617 "parser.c" /* yacc.c:1646  */
    break;

  case 876:
#line 6358 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 11630 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6367 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11643 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6379 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11651 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 6383 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11659 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6387 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11667 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 6391 "parser.y" /* yacc.c:1646  */
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
#line 11691 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6424 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11699 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 6429 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11707 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6434 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW clause");
	(yyval) = (yyvsp[0]);
  }
#line 11716 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6442 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11724 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6447 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11732 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6454 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 11740 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 6458 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 11748 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 6468 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 11756 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 6476 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 11764 "parser.c" /* yacc.c:1646  */
    break;

  case 896:
#line 6480 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 11772 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 6490 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 11780 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 6498 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 11789 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 6503 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 11798 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 6510 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 11804 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 6511 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 11810 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 6512 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 11816 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 6513 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 11822 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 6514 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 11828 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 6522 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 11836 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 6531 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 11844 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 6538 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 11852 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 6542 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 11860 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 6552 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 11869 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 6563 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 11884 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 6580 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 11892 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 6589 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 11900 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 6597 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 11909 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 6602 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 11918 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 6610 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 11926 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 6614 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 11934 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 6624 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 11943 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 6634 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 11951 "parser.c" /* yacc.c:1646  */
    break;

  case 924:
#line 6638 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 11959 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 6642 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 11967 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 6646 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 11975 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 6650 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), NULL, NULL);
  }
#line 11983 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 6655 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[-3])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
#line 11993 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 6665 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
  }
#line 12001 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 6673 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[-4])), cb_null, cb_int1,
			 (yyvsp[-3]), current_statement->attr_ptr);
  }
#line 12010 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 6681 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12022 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 6689 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12030 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 6693 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_name ((yyvsp[0]));
  }
#line 12038 "parser.c" /* yacc.c:1646  */
    break;

  case 937:
#line 6697 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 12046 "parser.c" /* yacc.c:1646  */
    break;

  case 938:
#line 6701 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12058 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 6723 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12066 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 6729 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 12072 "parser.c" /* yacc.c:1646  */
    break;

  case 946:
#line 6730 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 12078 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 6741 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12086 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 6745 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
#line 12094 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 6749 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
#line 12102 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 6753 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12110 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 6757 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12118 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 6761 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
#line 12126 "parser.c" /* yacc.c:1646  */
    break;

  case 955:
#line 6765 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
#line 12134 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 6769 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 12142 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 6773 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 12150 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 6777 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12158 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 6781 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12166 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 6785 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12174 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 6789 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12182 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 6793 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12190 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 6797 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12198 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 6801 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12206 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 6805 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12214 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 6812 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 12222 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 6816 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 12230 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 6826 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 12238 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 6835 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 12246 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 6839 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 12254 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 6843 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 12262 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 6847 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12270 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 6851 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12278 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 6858 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 12286 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 6862 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 12294 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 6872 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 12303 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 6881 "parser.y" /* yacc.c:1646  */
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
#line 12319 "parser.c" /* yacc.c:1646  */
    break;

  case 980:
#line 6899 "parser.y" /* yacc.c:1646  */
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
#line 12342 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 6923 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 12351 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 6930 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12357 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 6932 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12363 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 6937 "parser.y" /* yacc.c:1646  */
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
#line 12378 "parser.c" /* yacc.c:1646  */
    break;

  case 986:
#line 6948 "parser.y" /* yacc.c:1646  */
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
#line 12393 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 6959 "parser.y" /* yacc.c:1646  */
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
#line 12408 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 6973 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12416 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 6977 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12424 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 6983 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12430 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 6985 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 12436 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 6991 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 12445 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7000 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 12454 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7008 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12463 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7014 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12472 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7021 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12478 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7023 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12484 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7028 "parser.y" /* yacc.c:1646  */
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
#line 12550 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7089 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 12556 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7090 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 12562 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7091 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 12568 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7095 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12574 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7096 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12580 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7101 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 12588 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7105 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 12596 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7115 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 12605 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7120 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12613 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7128 "parser.y" /* yacc.c:1646  */
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
#line 12638 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7149 "parser.y" /* yacc.c:1646  */
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
#line 12656 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7163 "parser.y" /* yacc.c:1646  */
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
#line 12682 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7185 "parser.y" /* yacc.c:1646  */
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
#line 12708 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7207 "parser.y" /* yacc.c:1646  */
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
#line 12732 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7227 "parser.y" /* yacc.c:1646  */
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
#line 12756 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7249 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12762 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7250 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12768 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7258 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12777 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7267 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 12785 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7277 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
#line 12794 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7293 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 12807 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7306 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 12816 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7314 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 12825 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7319 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 12834 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7330 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 12847 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7345 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 12855 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7354 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 12863 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7358 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 12871 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7362 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 12879 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7369 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 12887 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7373 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 12895 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7383 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 12903 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7392 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 12911 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7398 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12917 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7399 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 12923 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7403 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12929 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 7404 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 12935 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7405 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 12941 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7410 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12949 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 7414 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12957 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 7421 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12965 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 7426 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12973 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7433 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12981 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7439 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 12987 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 7440 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 12993 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 7441 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 12999 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 7442 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 13005 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 7443 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13011 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 7444 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13017 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 7445 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13023 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 7450 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13031 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 7454 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13039 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 7463 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
#line 13048 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 7472 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13058 "parser.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 7478 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13068 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 7489 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13077 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 7502 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13085 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 7506 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13093 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 7510 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13101 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 7526 "parser.y" /* yacc.c:1646  */
    {
	cb_init_tallying ();
  }
#line 13109 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 7530 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	(yyval) = (yyvsp[-3]);
  }
#line 13118 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 7540 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13127 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 7550 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13137 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 7558 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13143 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 7559 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13149 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 7563 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_data ((yyvsp[-1])); }
#line 13155 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 7564 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_characters ((yyvsp[0])); }
#line 13161 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 7565 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_all (); }
#line 13167 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 7566 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_leading (); }
#line 13173 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 7567 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_trailing (); }
#line 13179 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 7568 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0])); }
#line 13185 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 7572 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13191 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 7573 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13197 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 7578 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 13206 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 7583 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13214 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 7589 "parser.y" /* yacc.c:1646  */
    { /* Nothing */ }
#line 13220 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 7590 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 13226 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 7591 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 13232 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 7592 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 13238 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 7593 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 13244 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 7598 "parser.y" /* yacc.c:1646  */
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
#line 13270 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 7625 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 13278 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 7629 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13286 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 7636 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0])));
  }
#line 13294 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 7640 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0])));
  }
#line 13302 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 7649 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 13311 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 7661 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 13319 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 7669 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13327 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 7673 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13335 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 7683 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 13343 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 7692 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 13351 "parser.c" /* yacc.c:1646  */
    break;

  case 1107:
#line 7696 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 13359 "parser.c" /* yacc.c:1646  */
    break;

  case 1108:
#line 7703 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 13367 "parser.c" /* yacc.c:1646  */
    break;

  case 1109:
#line 7707 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 13375 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 7717 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 13383 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 7725 "parser.y" /* yacc.c:1646  */
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
#line 13408 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 7746 "parser.y" /* yacc.c:1646  */
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
#line 13433 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 7769 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 13439 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 7770 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 13445 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 7771 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 13451 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 7772 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 13457 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 7776 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13463 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 7777 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13469 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 7781 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13475 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 7782 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13481 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 7783 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 13487 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 7785 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 13496 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 7796 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13507 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 7807 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 13516 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 7812 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 13526 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 7818 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 13535 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 7823 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 13544 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 7831 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 13556 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 7839 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 13564 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 7846 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 13572 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 7850 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 13586 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 7863 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 13597 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 7870 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13609 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 7881 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 13617 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 7885 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 13626 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 7890 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 13634 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 7894 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 13649 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 7905 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13657 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 7911 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 13663 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 7912 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13669 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 7916 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13675 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 7917 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13681 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 7920 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13687 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 7922 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13693 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 7927 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13701 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 7937 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 13709 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 7946 "parser.y" /* yacc.c:1646  */
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
#line 13737 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 7972 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13743 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 7973 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13749 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 7978 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13757 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 7982 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 13765 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 7986 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13773 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 7990 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13781 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 7994 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 13789 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 7998 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 13797 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8002 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 13805 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8008 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13811 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8009 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13817 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8019 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 13825 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8023 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 13833 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8033 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 13842 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8043 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 13850 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8051 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13858 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8061 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 13867 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8071 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 13875 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8080 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 13883 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8087 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 13891 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8091 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 13899 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8101 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13910 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8113 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 13919 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8121 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13927 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8125 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 13935 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8129 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 13943 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8136 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 13951 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8140 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 13959 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8150 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 13968 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8161 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 13976 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8170 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13984 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8175 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13993 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8182 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13999 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8183 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14005 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8188 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14013 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8193 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14021 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8200 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14029 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8204 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14037 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8212 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14045 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8219 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14053 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8223 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14061 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8233 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14072 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 8240 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14080 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 8255 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14086 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 8256 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14092 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8260 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14098 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 8261 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14104 "parser.c" /* yacc.c:1646  */
    break;

  case 1210:
#line 8268 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14112 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 8277 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 14120 "parser.c" /* yacc.c:1646  */
    break;

  case 1214:
#line 8289 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 14128 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8293 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 14136 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8297 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 14146 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 8303 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 14156 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 8309 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 14164 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 8313 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 14172 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 8317 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 14180 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 8321 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 14188 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 8330 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 14196 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 8334 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14204 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 8343 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14212 "parser.c" /* yacc.c:1646  */
    break;

  case 1227:
#line 8357 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14220 "parser.c" /* yacc.c:1646  */
    break;

  case 1230:
#line 8371 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 14228 "parser.c" /* yacc.c:1646  */
    break;

  case 1231:
#line 8375 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 14236 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 8385 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 14244 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 8393 "parser.y" /* yacc.c:1646  */
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
#line 14269 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 8414 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 14279 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 8423 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14287 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 8428 "parser.y" /* yacc.c:1646  */
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
#line 14307 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 8446 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14313 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 8447 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14319 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 8452 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 14328 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 8459 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 14334 "parser.c" /* yacc.c:1646  */
    break;

  case 1243:
#line 8460 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 14340 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 8465 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 14350 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 8471 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 14364 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 8481 "parser.y" /* yacc.c:1646  */
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
#line 14380 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 8496 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 14390 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 8502 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 14404 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 8512 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 14418 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 8528 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 14427 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 8538 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 14440 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 8550 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14448 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 8554 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14456 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 8561 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14464 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 8565 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 14473 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 8570 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 14482 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 8575 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 14491 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 8582 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 14497 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 8583 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 14503 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 8584 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 14509 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 8585 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 14515 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 8586 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 14521 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 8587 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 14527 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 8592 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 14536 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 8605 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 14544 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 8609 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 14552 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 8619 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 14560 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 8623 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 14570 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 8629 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 14583 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 8641 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 14591 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 8645 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14599 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 8649 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 14611 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 8657 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 14623 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 8668 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14631 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 8672 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14639 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 8678 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14645 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 8679 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 14651 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 8680 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 14657 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 8681 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 14663 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 8688 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 14671 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 8697 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 14679 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 8703 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14685 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 8704 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14691 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 8708 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14697 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 8709 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 14703 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 8710 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 14709 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 8714 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14715 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 8715 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14721 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 8720 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 14729 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 8724 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 14737 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 8734 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 14745 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 8743 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 14753 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 8747 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 14761 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 8751 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 14769 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 8758 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 14777 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 8762 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 14785 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 8772 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	PENDING("SUPPRESS");
  }
#line 14798 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 8790 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
#line 14807 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 8799 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14817 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 8805 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14827 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 8816 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 14835 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 8824 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 14846 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 8837 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 14854 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 8845 "parser.y" /* yacc.c:1646  */
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
#line 14869 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 8868 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 14877 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 8878 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 14885 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 8884 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14891 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 8886 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14897 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 8890 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14903 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 8892 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14909 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 8897 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14917 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 8903 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14923 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 8905 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14929 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 8910 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14937 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 8916 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14943 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 8917 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14949 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 8921 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14955 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 8922 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14961 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 8926 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14967 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 8927 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14973 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 8932 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 14981 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 8936 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 14989 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 8946 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 14998 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 8964 "parser.y" /* yacc.c:1646  */
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
#line 15024 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 8989 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15032 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 8993 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15045 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 9005 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15059 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9015 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15068 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9020 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15077 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9025 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15086 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9030 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15095 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9038 "parser.y" /* yacc.c:1646  */
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
#line 15134 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9081 "parser.y" /* yacc.c:1646  */
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
#line 15178 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9121 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 15192 "parser.c" /* yacc.c:1646  */
    break;

  case 1357:
#line 9131 "parser.y" /* yacc.c:1646  */
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
#line 15217 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9161 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 15227 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9170 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 15237 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9176 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 15247 "parser.c" /* yacc.c:1646  */
    break;

  case 1365:
#line 9186 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
#line 15257 "parser.c" /* yacc.c:1646  */
    break;

  case 1366:
#line 9195 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 15267 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9211 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15278 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9223 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 15289 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9232 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15295 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9233 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15301 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9238 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 15309 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9242 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15317 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9246 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15325 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9250 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 15333 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9256 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 15339 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9257 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 15345 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9267 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 15353 "parser.c" /* yacc.c:1646  */
    break;

  case 1383:
#line 9271 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 15361 "parser.c" /* yacc.c:1646  */
    break;

  case 1386:
#line 9288 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15370 "parser.c" /* yacc.c:1646  */
    break;

  case 1390:
#line 9303 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15379 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 9321 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15388 "parser.c" /* yacc.c:1646  */
    break;

  case 1397:
#line 9331 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15397 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 9346 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15406 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 9356 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15415 "parser.c" /* yacc.c:1646  */
    break;

  case 1405:
#line 9373 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15424 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 9384 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15433 "parser.c" /* yacc.c:1646  */
    break;

  case 1413:
#line 9407 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15442 "parser.c" /* yacc.c:1646  */
    break;

  case 1414:
#line 9416 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15451 "parser.c" /* yacc.c:1646  */
    break;

  case 1418:
#line 9433 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15460 "parser.c" /* yacc.c:1646  */
    break;

  case 1419:
#line 9442 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15469 "parser.c" /* yacc.c:1646  */
    break;

  case 1422:
#line 9459 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15478 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 9469 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15487 "parser.c" /* yacc.c:1646  */
    break;

  case 1425:
#line 9479 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 15495 "parser.c" /* yacc.c:1646  */
    break;

  case 1426:
#line 9483 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 15503 "parser.c" /* yacc.c:1646  */
    break;

  case 1427:
#line 9493 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 15511 "parser.c" /* yacc.c:1646  */
    break;

  case 1428:
#line 9500 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 15519 "parser.c" /* yacc.c:1646  */
    break;

  case 1429:
#line 9506 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 15528 "parser.c" /* yacc.c:1646  */
    break;

  case 1430:
#line 9511 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 15536 "parser.c" /* yacc.c:1646  */
    break;

  case 1434:
#line 9524 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 15548 "parser.c" /* yacc.c:1646  */
    break;

  case 1435:
#line 9532 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 15554 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 9533 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 15560 "parser.c" /* yacc.c:1646  */
    break;

  case 1437:
#line 9535 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 15566 "parser.c" /* yacc.c:1646  */
    break;

  case 1438:
#line 9536 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 15572 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 9537 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 15578 "parser.c" /* yacc.c:1646  */
    break;

  case 1440:
#line 9538 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 15584 "parser.c" /* yacc.c:1646  */
    break;

  case 1441:
#line 9539 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 15590 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 9541 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 15596 "parser.c" /* yacc.c:1646  */
    break;

  case 1443:
#line 9542 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 15602 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 9543 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 15608 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 9544 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 15614 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 9545 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 15620 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 9546 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 15626 "parser.c" /* yacc.c:1646  */
    break;

  case 1448:
#line 9548 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 15632 "parser.c" /* yacc.c:1646  */
    break;

  case 1449:
#line 9549 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 15638 "parser.c" /* yacc.c:1646  */
    break;

  case 1450:
#line 9550 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 15644 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 9552 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 15650 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 9553 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 15656 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 9554 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 15662 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 9555 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 15668 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 9556 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 15674 "parser.c" /* yacc.c:1646  */
    break;

  case 1456:
#line 9559 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 15680 "parser.c" /* yacc.c:1646  */
    break;

  case 1457:
#line 9560 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 15686 "parser.c" /* yacc.c:1646  */
    break;

  case 1466:
#line 9590 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15694 "parser.c" /* yacc.c:1646  */
    break;

  case 1467:
#line 9594 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15702 "parser.c" /* yacc.c:1646  */
    break;

  case 1471:
#line 9605 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 15708 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 9606 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 15714 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 9607 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15720 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 9611 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 15726 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 9612 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 15732 "parser.c" /* yacc.c:1646  */
    break;

  case 1476:
#line 9613 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15738 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 9618 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 15746 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 9621 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15752 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 9625 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15758 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 9626 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 15764 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 9627 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15770 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 9630 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 15776 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 9631 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15782 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 9642 "parser.y" /* yacc.c:1646  */
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
#line 15798 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 9654 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15811 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 9663 "parser.y" /* yacc.c:1646  */
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
#line 15827 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 9675 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15840 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 9684 "parser.y" /* yacc.c:1646  */
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
#line 15856 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 9696 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15869 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 9710 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15875 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 9712 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 15881 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 9717 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 15889 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 9725 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 15895 "parser.c" /* yacc.c:1646  */
    break;

  case 1494:
#line 9732 "parser.y" /* yacc.c:1646  */
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
#line 15914 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 9752 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15922 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 9756 "parser.y" /* yacc.c:1646  */
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
#line 15944 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 9777 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15957 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 9818 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 15970 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 9831 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15976 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 9833 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15982 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 9837 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15988 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 9843 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15994 "parser.c" /* yacc.c:1646  */
    break;

  case 1503:
#line 9845 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16000 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 9850 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 16013 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 9864 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16021 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 9871 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 16031 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 9881 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16037 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 9882 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16043 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 9887 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16052 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 9895 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16061 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 9903 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16069 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 9907 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16077 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 9914 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16087 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 9930 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16100 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 9944 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 16114 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 9961 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16122 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 9965 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16130 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 9974 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16138 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 9981 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16146 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 9985 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16154 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 9996 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16162 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10000 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16170 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 10004 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16178 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 10008 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 16186 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10012 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16194 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10016 "parser.y" /* yacc.c:1646  */
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
#line 16216 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10037 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16224 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10041 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16232 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10058 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16240 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10062 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16248 "parser.c" /* yacc.c:1646  */
    break;

  case 1548:
#line 10066 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16256 "parser.c" /* yacc.c:1646  */
    break;

  case 1557:
#line 10100 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16264 "parser.c" /* yacc.c:1646  */
    break;

  case 1559:
#line 10108 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16272 "parser.c" /* yacc.c:1646  */
    break;

  case 1562:
#line 10117 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16280 "parser.c" /* yacc.c:1646  */
    break;

  case 1564:
#line 10122 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 16288 "parser.c" /* yacc.c:1646  */
    break;

  case 1565:
#line 10129 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16296 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10137 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16304 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10145 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16312 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10155 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16318 "parser.c" /* yacc.c:1646  */
    break;

  case 1573:
#line 10159 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 16324 "parser.c" /* yacc.c:1646  */
    break;

  case 1574:
#line 10163 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16330 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 10164 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16336 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10168 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16342 "parser.c" /* yacc.c:1646  */
    break;

  case 1577:
#line 10173 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16353 "parser.c" /* yacc.c:1646  */
    break;

  case 1578:
#line 10180 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16364 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10187 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16375 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10194 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16386 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10204 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 16394 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10211 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16408 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10221 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16422 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10231 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16436 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10241 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16450 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 10254 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16458 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 10258 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16467 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 10266 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 16476 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 10274 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 16484 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 10278 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 16493 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 10288 "parser.y" /* yacc.c:1646  */
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
#line 16508 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 10302 "parser.y" /* yacc.c:1646  */
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
#line 16532 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 10325 "parser.y" /* yacc.c:1646  */
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
#line 16555 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 10347 "parser.y" /* yacc.c:1646  */
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
#line 16575 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 10362 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16581 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 10363 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16587 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 10364 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16593 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 10365 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 16599 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 10366 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 16605 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 10367 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 16611 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 10372 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16619 "parser.c" /* yacc.c:1646  */
    break;

  case 1602:
#line 10376 "parser.y" /* yacc.c:1646  */
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
#line 16637 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 10393 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16645 "parser.c" /* yacc.c:1646  */
    break;

  case 1604:
#line 10397 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16653 "parser.c" /* yacc.c:1646  */
    break;

  case 1605:
#line 10403 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16659 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 10404 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16665 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 10405 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16671 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 10406 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16677 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 10407 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 16683 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 10408 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 16689 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 10409 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 16695 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 10416 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 16703 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 10420 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 16711 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 10424 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16719 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 10428 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16727 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 10432 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 16735 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 10436 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16743 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 10440 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16751 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 10444 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16759 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 10448 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16767 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 10452 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 16775 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 10456 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 16783 "parser.c" /* yacc.c:1646  */
    break;

  case 1623:
#line 10460 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 16791 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 10485 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16799 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 10489 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 16807 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 10493 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16815 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 10500 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16823 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 10504 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16831 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 10508 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16839 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 10515 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 16850 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 10522 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 16861 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 10529 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 16872 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 10539 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 16883 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 10546 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 16894 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 10556 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 16905 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 10563 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 16916 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 10573 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 16924 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 10577 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 16938 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 10590 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 16946 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 10594 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 16960 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 10608 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 16968 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 10616 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 16974 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 10617 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16980 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 10621 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 16986 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 10622 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 16992 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 10626 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16998 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 10627 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17004 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 10632 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17012 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 10636 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17020 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 10643 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17028 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 10647 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17036 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 10654 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17042 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 10655 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17048 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 10656 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 17054 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 10660 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17060 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 10661 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 17066 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 10665 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 17072 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 10666 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17078 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 10667 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17084 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 10672 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17092 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 10676 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 17105 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 10688 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 17114 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 10693 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 17123 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 10701 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 17131 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 10705 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 17139 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 10709 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 17147 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 10713 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 17155 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 10717 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 17163 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 10721 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 17171 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 10725 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 17179 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 10729 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 17187 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 10735 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17193 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 10736 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17199 "parser.c" /* yacc.c:1646  */
    break;


#line 17203 "parser.c" /* yacc.c:1646  */
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
#line 10906 "parser.y" /* yacc.c:1906  */

