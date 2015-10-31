/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 28 "parser.y"

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



/* Line 268 of yacc.c  */
#line 813 "parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     TAB = 693,
     TALLYING = 694,
     TAPE = 695,
     TERMINATE = 696,
     TEST = 697,
     THAN = 698,
     THEN = 699,
     THRU = 700,
     TIME = 701,
     TIMEOUT = 702,
     TIMES = 703,
     TO = 704,
     TOK_AMPER = 705,
     TOK_CLOSE_PAREN = 706,
     TOK_COLON = 707,
     TOK_DIV = 708,
     TOK_DOT = 709,
     TOK_EQUAL = 710,
     TOK_FALSE = 711,
     TOK_FILE = 712,
     TOK_GREATER = 713,
     TOK_INITIAL = 714,
     TOK_LESS = 715,
     TOK_MINUS = 716,
     TOK_MUL = 717,
     TOK_NULL = 718,
     TOK_OVERFLOW = 719,
     TOK_OPEN_PAREN = 720,
     TOK_PLUS = 721,
     TOK_TRUE = 722,
     TOP = 723,
     TOWARD_GREATER = 724,
     TOWARD_LESSER = 725,
     TRAILING = 726,
     TRANSFORM = 727,
     TRIM_FUNC = 728,
     TRUNCATION = 729,
     TYPE = 730,
     UNDERLINE = 731,
     UNIT = 732,
     UNLOCK = 733,
     UNSIGNED = 734,
     UNSIGNED_INT = 735,
     UNSIGNED_LONG = 736,
     UNSIGNED_SHORT = 737,
     UNSTRING = 738,
     UNTIL = 739,
     UP = 740,
     UPDATE = 741,
     UPON = 742,
     UPON_ARGUMENT_NUMBER = 743,
     UPON_COMMAND_LINE = 744,
     UPON_ENVIRONMENT_NAME = 745,
     UPON_ENVIRONMENT_VALUE = 746,
     UPPER = 747,
     UPPER_CASE_FUNC = 748,
     USAGE = 749,
     USE = 750,
     USER = 751,
     USER_DEFAULT = 752,
     USER_FUNCTION_NAME = 753,
     USER_REPO_FUNCTION = 754,
     USING = 755,
     VALUE = 756,
     VARYING = 757,
     WAIT = 758,
     WHEN = 759,
     WHEN_COMPILED_FUNC = 760,
     WITH = 761,
     WORD = 762,
     WORDS = 763,
     WORKING_STORAGE = 764,
     WRITE = 765,
     YYYYDDD = 766,
     YYYYMMDD = 767,
     ZERO = 768,
     SHIFT_PREFER = 769
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 1370 "parser.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8307

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  515
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  819
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1912
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2739

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   769

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    16,    18,
      20,    21,    24,    29,    34,    38,    39,    41,    44,    45,
      47,    51,    52,    54,    58,    59,    60,    61,    82,    83,
      91,    97,    99,   101,   102,   105,   106,   110,   112,   115,
     117,   119,   121,   123,   124,   128,   129,   133,   134,   137,
     139,   141,   143,   145,   147,   148,   153,   154,   158,   159,
     163,   164,   169,   170,   173,   177,   180,   182,   185,   187,
     189,   191,   193,   199,   203,   207,   212,   214,   216,   218,
     220,   222,   225,   226,   231,   232,   235,   239,   241,   244,
     248,   252,   256,   258,   260,   261,   264,   266,   269,   272,
     275,   279,   281,   284,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   304,   306,   308,   309,   313,   316,   320,
     324,   326,   327,   329,   333,   338,   339,   345,   347,   349,
     351,   353,   355,   357,   359,   362,   364,   368,   369,   374,
     376,   380,   382,   384,   386,   388,   390,   392,   394,   396,
     399,   400,   403,   407,   409,   412,   416,   418,   421,   423,
     426,   431,   433,   436,   438,   442,   447,   453,   454,   458,
     462,   468,   472,   477,   481,   485,   486,   490,   491,   494,
     495,   498,   499,   502,   503,   510,   514,   515,   518,   520,
     522,   524,   526,   528,   530,   532,   534,   536,   538,   540,
     542,   544,   550,   556,   562,   568,   574,   576,   578,   580,
     582,   583,   587,   588,   590,   592,   594,   596,   597,   599,
     601,   606,   608,   610,   612,   620,   621,   626,   630,   634,
     639,   640,   642,   644,   645,   651,   654,   657,   659,   660,
     665,   671,   674,   678,   680,   682,   686,   688,   691,   696,
     701,   706,   708,   712,   717,   722,   726,   728,   730,   734,
     737,   740,   743,   744,   747,   751,   753,   756,   758,   760,
     766,   767,   769,   771,   773,   774,   781,   783,   786,   789,
     790,   793,   794,   798,   799,   803,   804,   807,   810,   811,
     817,   821,   823,   825,   826,   829,   832,   835,   837,   839,
     841,   843,   845,   847,   849,   851,   853,   859,   860,   862,
     864,   869,   876,   886,   887,   891,   892,   895,   896,   899,
     903,   909,   915,   917,   919,   921,   923,   927,   933,   934,
     937,   939,   941,   943,   948,   951,   954,   959,   963,   966,
     969,   972,   974,   977,   978,   979,   985,   986,   987,   990,
     993,   997,  1000,  1002,  1003,  1008,  1012,  1015,  1016,  1018,
    1020,  1022,  1023,  1026,  1028,  1031,  1034,  1038,  1040,  1042,
    1044,  1046,  1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,
    1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,
    1089,  1092,  1095,  1096,  1099,  1101,  1103,  1105,  1107,  1109,
    1111,  1113,  1115,  1117,  1119,  1121,  1123,  1125,  1127,  1130,
    1134,  1135,  1138,  1141,  1143,  1145,  1149,  1151,  1153,  1155,
    1157,  1159,  1161,  1163,  1165,  1167,  1169,  1171,  1173,  1175,
    1177,  1179,  1181,  1183,  1185,  1187,  1189,  1192,  1195,  1198,
    1201,  1204,  1207,  1210,  1213,  1216,  1219,  1221,  1223,  1225,
    1227,  1229,  1231,  1233,  1235,  1237,  1239,  1243,  1247,  1254,
    1255,  1258,  1266,  1275,  1276,  1279,  1280,  1283,  1284,  1288,
    1289,  1293,  1294,  1296,  1298,  1299,  1305,  1307,  1309,  1310,
    1314,  1316,  1319,  1321,  1324,  1327,  1331,  1333,  1334,  1340,
    1342,  1345,  1347,  1351,  1352,  1357,  1360,  1365,  1368,  1371,
    1372,  1373,  1379,  1380,  1381,  1387,  1388,  1389,  1395,  1396,
    1399,  1400,  1407,  1408,  1411,  1414,  1417,  1421,  1423,  1425,
    1428,  1431,  1433,  1436,  1441,  1443,  1448,  1451,  1452,  1455,
    1457,  1459,  1461,  1463,  1465,  1469,  1474,  1479,  1484,  1488,
    1489,  1492,  1493,  1499,  1500,  1503,  1505,  1507,  1509,  1511,
    1513,  1515,  1517,  1519,  1521,  1523,  1525,  1527,  1529,  1531,
    1533,  1535,  1539,  1541,  1543,  1546,  1548,  1551,  1553,  1555,
    1556,  1559,  1562,  1563,  1566,  1571,  1576,  1577,  1581,  1583,
    1585,  1589,  1596,  1599,  1603,  1606,  1609,  1613,  1616,  1618,
    1621,  1624,  1626,  1628,  1630,  1633,  1636,  1638,  1643,  1646,
    1650,  1651,  1652,  1658,  1659,  1661,  1664,  1668,  1670,  1671,
    1676,  1680,  1681,  1684,  1687,  1690,  1692,  1694,  1697,  1700,
    1702,  1704,  1706,  1708,  1710,  1712,  1714,  1716,  1718,  1720,
    1725,  1727,  1729,  1735,  1741,  1745,  1749,  1751,  1753,  1755,
    1757,  1759,  1761,  1763,  1765,  1768,  1771,  1774,  1776,  1778,
    1780,  1782,  1783,  1785,  1787,  1788,  1790,  1792,  1796,  1799,
    1800,  1801,  1802,  1812,  1813,  1818,  1819,  1820,  1824,  1825,
    1829,  1831,  1834,  1839,  1840,  1843,  1846,  1847,  1851,  1855,
    1860,  1865,  1869,  1870,  1872,  1873,  1876,  1877,  1878,  1886,
    1887,  1890,  1892,  1894,  1897,  1899,  1901,  1902,  1909,  1910,
    1913,  1916,  1918,  1919,  1921,  1922,  1923,  1927,  1928,  1931,
    1934,  1936,  1938,  1940,  1942,  1944,  1946,  1948,  1950,  1952,
    1954,  1956,  1958,  1960,  1962,  1964,  1966,  1968,  1970,  1972,
    1974,  1976,  1978,  1980,  1982,  1984,  1986,  1988,  1990,  1992,
    1994,  1996,  1998,  2000,  2002,  2004,  2006,  2008,  2010,  2012,
    2014,  2016,  2018,  2020,  2022,  2024,  2026,  2028,  2030,  2032,
    2035,  2038,  2039,  2044,  2051,  2055,  2059,  2064,  2068,  2073,
    2077,  2081,  2086,  2091,  2095,  2100,  2104,  2109,  2115,  2119,
    2124,  2128,  2132,  2134,  2136,  2138,  2141,  2142,  2144,  2148,
    2152,  2155,  2158,  2161,  2165,  2169,  2173,  2174,  2176,  2177,
    2181,  2182,  2185,  2187,  2190,  2192,  2194,  2196,  2198,  2200,
    2202,  2204,  2206,  2208,  2210,  2212,  2214,  2219,  2221,  2223,
    2225,  2227,  2232,  2236,  2238,  2241,  2243,  2245,  2249,  2253,
    2257,  2261,  2265,  2267,  2269,  2270,  2272,  2273,  2278,  2283,
    2289,  2296,  2297,  2300,  2301,  2303,  2304,  2308,  2312,  2317,
    2318,  2321,  2322,  2326,  2328,  2331,  2336,  2337,  2340,  2341,
    2346,  2353,  2354,  2356,  2358,  2360,  2361,  2362,  2366,  2368,
    2371,  2374,  2378,  2379,  2382,  2385,  2388,  2389,  2393,  2396,
    2401,  2403,  2405,  2407,  2409,  2410,  2413,  2414,  2417,  2418,
    2420,  2421,  2425,  2427,  2430,  2431,  2435,  2438,  2442,  2443,
    2445,  2449,  2453,  2456,  2457,  2462,  2467,  2468,  2470,  2472,
    2474,  2475,  2480,  2484,  2487,  2489,  2492,  2493,  2495,  2496,
    2501,  2505,  2509,  2513,  2517,  2522,  2525,  2530,  2532,  2533,
    2537,  2543,  2544,  2547,  2550,  2553,  2556,  2557,  2560,  2562,
    2564,  2565,  2568,  2569,  2571,  2573,  2576,  2578,  2581,  2584,
    2586,  2588,  2591,  2594,  2596,  2598,  2600,  2602,  2606,  2608,
    2612,  2616,  2620,  2624,  2625,  2627,  2628,  2633,  2638,  2645,
    2652,  2661,  2670,  2671,  2673,  2674,  2678,  2681,  2682,  2687,
    2690,  2692,  2696,  2698,  2700,  2702,  2705,  2707,  2709,  2712,
    2715,  2719,  2722,  2726,  2728,  2732,  2735,  2737,  2739,  2741,
    2742,  2745,  2746,  2748,  2749,  2753,  2754,  2757,  2759,  2762,
    2764,  2766,  2768,  2769,  2772,  2773,  2777,  2779,  2780,  2784,
    2786,  2787,  2791,  2795,  2796,  2800,  2803,  2804,  2811,  2815,
    2818,  2820,  2821,  2823,  2824,  2828,  2834,  2835,  2838,  2839,
    2843,  2847,  2848,  2851,  2853,  2856,  2861,  2863,  2865,  2867,
    2869,  2871,  2873,  2875,  2876,  2880,  2881,  2885,  2887,  2890,
    2891,  2895,  2898,  2900,  2902,  2904,  2907,  2909,  2911,  2913,
    2914,  2918,  2921,  2927,  2929,  2932,  2935,  2938,  2940,  2942,
    2944,  2947,  2949,  2952,  2957,  2960,  2961,  2963,  2965,  2967,
    2969,  2974,  2975,  2978,  2982,  2986,  2987,  2991,  2992,  2996,
    3000,  3005,  3006,  3011,  3016,  3023,  3024,  3026,  3027,  3031,
    3036,  3042,  3044,  3046,  3048,  3050,  3051,  3055,  3056,  3060,
    3063,  3065,  3066,  3070,  3073,  3074,  3079,  3082,  3083,  3085,
    3087,  3089,  3091,  3095,  3096,  3099,  3101,  3105,  3109,  3110,
    3114,  3116,  3118,  3120,  3124,  3132,  3133,  3138,  3146,  3147,
    3150,  3151,  3154,  3157,  3161,  3165,  3169,  3172,  3173,  3177,
    3179,  3181,  3182,  3184,  3186,  3187,  3191,  3194,  3196,  3197,
    3202,  3207,  3208,  3210,  3211,  3216,  3221,  3222,  3225,  3229,
    3230,  3232,  3234,  3235,  3240,  3245,  3252,  3253,  3256,  3257,
    3260,  3262,  3265,  3269,  3270,  3272,  3273,  3277,  3279,  3281,
    3283,  3285,  3287,  3289,  3291,  3293,  3295,  3297,  3302,  3306,
    3308,  3311,  3314,  3317,  3320,  3323,  3326,  3329,  3332,  3335,
    3340,  3344,  3349,  3351,  3354,  3358,  3360,  3363,  3367,  3371,
    3372,  3376,  3377,  3385,  3386,  3392,  3393,  3396,  3397,  3400,
    3401,  3405,  3406,  3409,  3414,  3415,  3418,  3423,  3424,  3429,
    3434,  3435,  3439,  3440,  3445,  3447,  3449,  3451,  3454,  3457,
    3460,  3463,  3465,  3467,  3470,  3472,  3473,  3475,  3476,  3481,
    3484,  3485,  3488,  3493,  3498,  3499,  3501,  3503,  3505,  3507,
    3509,  3510,  3515,  3521,  3523,  3526,  3528,  3532,  3536,  3537,
    3542,  3543,  3545,  3546,  3551,  3556,  3563,  3570,  3571,  3573,
    3576,  3577,  3579,  3580,  3584,  3586,  3589,  3590,  3594,  3600,
    3601,  3605,  3608,  3609,  3611,  3613,  3614,  3619,  3626,  3627,
    3631,  3633,  3637,  3640,  3643,  3646,  3650,  3651,  3655,  3656,
    3660,  3661,  3665,  3666,  3668,  3669,  3673,  3675,  3677,  3679,
    3681,  3683,  3691,  3692,  3694,  3696,  3698,  3700,  3702,  3704,
    3709,  3711,  3714,  3716,  3719,  3723,  3724,  3726,  3729,  3731,
    3735,  3737,  3739,  3744,  3746,  3748,  3750,  3751,  3756,  3762,
    3763,  3766,  3767,  3772,  3776,  3780,  3782,  3784,  3786,  3788,
    3789,  3791,  3794,  3795,  3798,  3800,  3802,  3803,  3806,  3808,
    3810,  3813,  3814,  3817,  3818,  3821,  3824,  3825,  3828,  3829,
    3832,  3835,  3836,  3839,  3840,  3843,  3846,  3848,  3851,  3853,
    3855,  3858,  3861,  3864,  3866,  3868,  3871,  3874,  3877,  3878,
    3881,  3882,  3885,  3886,  3889,  3891,  3893,  3894,  3897,  3899,
    3902,  3905,  3907,  3909,  3911,  3913,  3915,  3917,  3919,  3921,
    3923,  3925,  3927,  3929,  3931,  3933,  3935,  3937,  3939,  3941,
    3943,  3945,  3947,  3949,  3951,  3953,  3955,  3958,  3960,  3962,
    3964,  3966,  3968,  3970,  3972,  3976,  3977,  3979,  3981,  3985,
    3989,  3991,  3995,  3999,  4001,  4005,  4007,  4010,  4013,  4015,
    4019,  4021,  4023,  4027,  4029,  4033,  4035,  4039,  4041,  4044,
    4047,  4049,  4051,  4053,  4056,  4058,  4060,  4062,  4065,  4067,
    4068,  4071,  4073,  4075,  4077,  4081,  4083,  4085,  4088,  4090,
    4092,  4094,  4097,  4099,  4101,  4103,  4105,  4107,  4109,  4112,
    4114,  4116,  4120,  4122,  4125,  4127,  4129,  4131,  4133,  4136,
    4139,  4142,  4147,  4151,  4153,  4155,  4158,  4160,  4162,  4164,
    4166,  4168,  4170,  4172,  4175,  4178,  4181,  4183,  4185,  4187,
    4189,  4191,  4193,  4195,  4197,  4199,  4201,  4203,  4205,  4207,
    4209,  4211,  4213,  4215,  4217,  4219,  4221,  4223,  4225,  4227,
    4229,  4231,  4233,  4236,  4238,  4242,  4245,  4248,  4250,  4252,
    4256,  4259,  4262,  4264,  4266,  4270,  4274,  4279,  4285,  4287,
    4289,  4291,  4293,  4295,  4297,  4299,  4301,  4303,  4305,  4307,
    4310,  4312,  4316,  4318,  4320,  4322,  4324,  4326,  4328,  4330,
    4333,  4339,  4345,  4351,  4356,  4362,  4368,  4374,  4377,  4380,
    4382,  4384,  4386,  4388,  4390,  4392,  4394,  4396,  4398,  4400,
    4402,  4403,  4408,  4414,  4415,  4419,  4422,  4424,  4428,  4432,
    4434,  4438,  4440,  4444,  4445,  4446,  4448,  4449,  4451,  4452,
    4454,  4455,  4458,  4459,  4462,  4463,  4465,  4467,  4468,  4470,
    4471,  4473,  4476,  4477,  4480,  4481,  4485,  4487,  4489,  4491,
    4493,  4495,  4497,  4499,  4501,  4502,  4505,  4507,  4509,  4511,
    4513,  4515,  4517,  4519,  4521,  4523,  4525,  4527,  4529,  4531,
    4533,  4535,  4537,  4539,  4541,  4543,  4545,  4547,  4549,  4551,
    4553,  4555,  4557,  4559,  4561,  4563,  4565,  4567,  4569,  4571,
    4573,  4575,  4577,  4579,  4581,  4583,  4585,  4587,  4589,  4591,
    4593,  4595,  4597,  4599,  4601,  4603,  4605,  4607,  4609,  4611,
    4613,  4615,  4617,  4619,  4621,  4623,  4625,  4627,  4629,  4631,
    4633,  4635,  4637,  4639,  4641,  4643,  4645,  4646,  4648,  4649,
    4651,  4652,  4654,  4655,  4657,  4658,  4660,  4661,  4663,  4664,
    4666,  4667,  4669,  4670,  4672,  4673,  4675,  4676,  4678,  4679,
    4681,  4682,  4684,  4685,  4687,  4688,  4690,  4691,  4693,  4694,
    4696,  4697,  4699,  4702,  4703,  4705,  4706,  4708,  4709,  4711,
    4712,  4714,  4715,  4717,  4719,  4720,  4722,  4723,  4725,  4727,
    4728,  4730,  4732,  4733,  4736,  4739,  4740,  4742,  4743,  4745,
    4746,  4748,  4749,  4751,  4753,  4754,  4756,  4757,  4759,  4760,
    4763,  4765,  4767,  4768,  4770,  4771,  4773,  4774,  4776,  4777,
    4779,  4780,  4782,  4783,  4785,  4786,  4788,  4789,  4791,  4794,
    4795,  4797,  4798,  4800,  4801,  4803,  4804,  4806,  4807,  4809,
    4810,  4812,  4813,  4815,  4816,  4818,  4820,  4821,  4823,  4824,
    4828,  4829,  4831,  4834,  4836,  4838,  4840,  4842,  4844,  4846,
    4848,  4850,  4852,  4854,  4856,  4858,  4860,  4862,  4864,  4866,
    4868,  4870,  4872,  4874,  4876,  4879,  4882,  4884,  4886,  4888,
    4890,  4892,  4894,  4897,  4899,  4903,  4906,  4908,  4910,  4912,
    4915,  4917,  4920,  4922,  4925,  4927,  4930,  4932,  4935,  4937,
    4940,  4942,  4945
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     516,     0,    -1,    -1,   517,   518,    -1,   521,    -1,   519,
      -1,   520,    -1,   519,   520,    -1,   523,    -1,   525,    -1,
      -1,   522,   531,    -1,   535,   531,   526,   527,    -1,   535,
     531,   526,   528,    -1,   537,   531,   529,    -1,    -1,   524,
      -1,   526,   524,    -1,    -1,   528,    -1,   143,   538,   454,
      -1,    -1,   530,    -1,   139,   538,   454,    -1,    -1,    -1,
      -1,   543,   544,   545,   607,   608,   610,   609,   643,   532,
     653,   654,   655,   533,   684,   740,   742,   744,   789,   534,
     803,    -1,    -1,   342,   454,   538,   539,   536,   540,   454,
      -1,   200,   454,   538,   539,   454,    -1,   343,    -1,   256,
      -1,    -1,    26,   256,    -1,    -1,  1277,   541,  1292,    -1,
      73,    -1,    73,   542,    -1,   542,    -1,   172,    -1,   459,
      -1,   356,    -1,    -1,   154,   123,   454,    -1,    -1,    85,
     396,   454,    -1,    -1,   545,   546,    -1,   547,    -1,   551,
      -1,   570,    -1,   571,    -1,   562,    -1,    -1,   417,   454,
     548,   549,    -1,    -1,   561,   550,   454,    -1,    -1,  1308,
     108,   272,    -1,    -1,   305,   454,   552,   553,    -1,    -1,
     561,   454,    -1,   561,   554,   454,    -1,   554,   454,    -1,
     555,    -1,   554,   555,    -1,   556,    -1,   557,    -1,   558,
      -1,   559,    -1,   268,   412,  1277,  1226,  1319,    -1,  1325,
    1277,  1193,    -1,   398,  1277,  1226,    -1,  1264,    60,  1277,
     560,    -1,  1193,    -1,   257,    -1,   497,    -1,   437,    -1,
     507,    -1,   561,   507,    -1,    -1,   371,   454,   563,   564,
      -1,    -1,   565,   454,    -1,   565,     1,   454,    -1,   566,
      -1,   565,   566,    -1,   199,     9,   229,    -1,   199,   567,
     568,    -1,   199,   569,   229,    -1,   372,    -1,   499,    -1,
      -1,    26,   256,    -1,   372,    -1,   569,   372,    -1,   419,
     454,    -1,   572,   454,    -1,   572,     1,   454,    -1,   573,
      -1,   572,   573,    -1,   574,    -1,   579,    -1,   588,    -1,
     598,    -1,   595,    -1,   599,    -1,   601,    -1,   602,    -1,
     603,    -1,   604,    -1,   605,    -1,   606,    -1,    -1,   507,
     575,   576,    -1,  1277,    97,    -1,  1226,  1277,  1197,    -1,
    1277,  1197,   577,    -1,   578,    -1,    -1,   578,    -1,  1040,
    1289,  1197,    -1,   578,  1040,  1289,  1197,    -1,    -1,    11,
    1197,   580,  1277,   581,    -1,   280,    -1,   421,    -1,   422,
      -1,   127,    -1,    28,    -1,   582,    -1,   583,    -1,   582,
     583,    -1,   586,    -1,   586,   445,   586,    -1,    -1,   586,
      17,   584,   585,    -1,   586,    -1,   585,    17,   586,    -1,
     256,    -1,   418,    -1,   513,    -1,   348,    -1,   212,    -1,
     266,    -1,   418,    -1,   513,    -1,   590,   589,    -1,    -1,
     218,   507,    -1,   435,  1265,   591,    -1,   592,    -1,   591,
     592,    -1,   593,  1278,   594,    -1,  1198,    -1,   593,  1198,
      -1,  1227,    -1,   594,  1227,    -1,    59,  1197,  1277,   596,
      -1,   597,    -1,   596,   597,    -1,  1229,    -1,  1229,   445,
    1229,    -1,   257,  1197,  1277,   256,    -1,    99,  1295,  1277,
     256,   600,    -1,    -1,  1308,   329,   256,    -1,   109,  1277,
      69,    -1,   302,   407,  1277,   471,   402,    -1,   101,  1277,
    1192,    -1,    97,   425,  1277,  1192,    -1,   392,  1277,  1192,
      -1,   165,  1277,  1192,    -1,    -1,   226,   396,   454,    -1,
      -1,   174,   454,    -1,    -1,   234,   454,    -1,    -1,   610,
     611,    -1,    -1,   399,  1250,  1197,   612,   613,   454,    -1,
     399,     1,   454,    -1,    -1,   613,   614,    -1,   615,    -1,
     621,    -1,   623,    -1,   625,    -1,   626,    -1,   628,    -1,
     632,    -1,   634,    -1,   635,    -1,   636,    -1,   638,    -1,
     639,    -1,   641,    -1,    29,  1305,   618,   617,   619,    -1,
      29,  1305,   618,   616,   620,    -1,    29,  1305,   618,   120,
     620,    -1,    29,  1305,   618,   238,   620,    -1,    29,  1305,
     618,   336,   620,    -1,   118,    -1,   119,    -1,   440,    -1,
     349,    -1,    -1,   252,     7,  1268,    -1,    -1,   172,    -1,
     126,    -1,   256,    -1,  1223,    -1,    -1,   256,    -1,  1223,
      -1,     4,  1284,  1277,   622,    -1,   404,    -1,   126,    -1,
     349,    -1,    19,  1293,  1279,  1277,   637,  1244,   624,    -1,
      -1,   434,   504,     9,  1232,    -1,   434,   504,   587,    -1,
    1309,  1277,   507,    -1,   627,   425,  1277,  1192,    -1,    -1,
     457,    -1,   414,    -1,    -1,   629,   262,  1284,  1277,   630,
      -1,   267,   631,    -1,    33,   631,    -1,   168,    -1,    -1,
     506,   262,   310,  1318,    -1,   506,   262,   310,   274,  1318,
      -1,   506,   387,    -1,   316,  1277,   633,    -1,   633,    -1,
     220,    -1,  1293,  1262,   404,    -1,   361,    -1,   252,   404,
      -1,   321,  1264,  1277,  1196,    -1,   353,   114,  1277,   421,
      -1,   353,  1279,  1277,   637,    -1,  1192,    -1,  1192,   455,
    1191,    -1,  1192,   416,  1277,  1191,    -1,   361,  1279,  1277,
    1192,    -1,   374,   640,  1259,    -1,   287,    -1,  1226,    -1,
     406,  1308,   642,    -1,     9,  1290,    -1,   287,  1290,    -1,
     351,   311,    -1,    -1,   644,   454,    -1,   644,     1,   454,
      -1,   645,    -1,   644,   645,    -1,   646,    -1,   648,    -1,
     390,   647,  1259,  1270,  1182,    -1,    -1,   353,    -1,   414,
      -1,   415,    -1,    -1,   274,   649,  1268,  1301,  1266,   650,
      -1,   651,    -1,   650,   651,    -1,  1183,   652,    -1,    -1,
     332,  1226,    -1,    -1,   103,   123,   454,    -1,    -1,   457,
     396,   454,    -1,    -1,   655,   656,    -1,   657,   686,    -1,
      -1,   659,  1183,   658,   660,   454,    -1,   659,     1,   454,
      -1,   173,    -1,   394,    -1,    -1,   660,   661,    -1,  1277,
     172,    -1,  1277,   204,    -1,   662,    -1,   664,    -1,   668,
      -1,   669,    -1,   672,    -1,   673,    -1,   679,    -1,   680,
      -1,   681,    -1,    47,  1266,  1226,   667,   663,    -1,    -1,
     355,    -1,    58,    -1,   353,  1266,  1226,  1265,    -1,   353,
    1266,  1226,   449,  1226,  1265,    -1,   353,  1277,   502,  1272,
    1298,   666,   667,  1265,   665,    -1,    -1,   115,  1288,  1192,
      -1,    -1,  1271,  1226,    -1,    -1,   449,  1226,    -1,   239,
    1320,  1316,    -1,   501,   307,   670,  1277,   671,    -1,   501,
     307,   175,  1277,   671,    -1,   507,    -1,   213,    -1,   256,
      -1,  1223,    -1,   103,  1320,  1194,    -1,   250,  1277,  1196,
    1283,   674,    -1,    -1,   674,   675,    -1,   676,    -1,   677,
      -1,   678,    -1,  1308,   188,  1261,  1196,    -1,   468,  1196,
      -1,    48,  1196,    -1,   354,  1284,  1277,   507,    -1,    63,
    1277,   507,    -1,   682,   683,    -1,   368,  1277,    -1,   370,
    1258,    -1,  1197,    -1,   683,  1197,    -1,    -1,    -1,   509,
     396,   454,   685,   686,    -1,    -1,    -1,   687,   688,    -1,
     689,   454,    -1,   688,   689,   454,    -1,   688,   454,    -1,
     701,    -1,    -1,   691,   692,   690,   703,    -1,   691,     1,
     454,    -1,  1242,   507,    -1,    -1,   176,    -1,   507,    -1,
     507,    -1,    -1,  1277,   204,    -1,  1230,    -1,   245,   696,
      -1,   244,   696,    -1,    50,  1287,   696,    -1,  1220,    -1,
      41,    -1,    44,    -1,    43,    -1,    42,    -1,    40,    -1,
     700,    -1,   712,    -1,   713,    -1,   697,    -1,   698,    -1,
     699,    -1,     1,   454,    -1,   180,    -1,   184,    -1,   181,
      -1,   182,    -1,   179,    -1,   183,    -1,   185,    -1,   331,
      -1,   344,    -1,   691,   693,    86,   694,   702,    -1,  1260,
     695,    -1,   196,   507,    -1,    -1,   703,   704,    -1,   705,
      -1,   706,    -1,   708,    -1,   709,    -1,   710,    -1,   714,
      -1,   717,    -1,   729,    -1,   730,    -1,   731,    -1,   732,
      -1,   733,    -1,   738,    -1,   739,    -1,   357,  1220,    -1,
    1277,   172,   707,    -1,    -1,    26,   256,    -1,  1277,   204,
      -1,   328,    -1,   711,    -1,   494,  1277,   711,    -1,    39,
      -1,    74,    -1,   712,    -1,   713,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,   120,    -1,   219,
      -1,   320,    -1,   331,    -1,   344,    -1,   411,    -1,   409,
      -1,   410,    -1,   482,    -1,   480,    -1,   481,    -1,    41,
    1296,    -1,    41,   479,    -1,    44,  1296,    -1,    44,   479,
      -1,    43,  1296,    -1,    43,   479,    -1,    42,  1296,    -1,
      42,   479,    -1,    40,  1296,    -1,    40,   479,    -1,   180,
      -1,   181,    -1,   179,    -1,   182,    -1,   183,    -1,   277,
      -1,    76,    -1,   187,    -1,    77,    -1,   186,    -1,  1297,
     241,  1254,    -1,  1297,   471,  1254,    -1,   306,  1226,   718,
    1303,   720,   716,    -1,    -1,   427,  1226,    -1,   306,  1226,
     718,  1303,   720,   723,   726,    -1,   306,   126,   721,   719,
     718,   722,   723,   726,    -1,    -1,   449,  1226,    -1,    -1,
     196,  1226,    -1,    -1,   115,  1288,  1192,    -1,    -1,    53,
    1272,   507,    -1,    -1,   223,    -1,   724,    -1,    -1,   724,
     725,  1279,  1277,  1191,    -1,    27,    -1,   116,    -1,    -1,
     220,  1263,   727,    -1,   728,    -1,   727,   728,    -1,   507,
      -1,   235,  1294,    -1,   436,  1280,    -1,    45,  1306,   513,
      -1,    36,    -1,    -1,   501,  1278,   735,   734,   737,    -1,
     736,    -1,   735,   736,    -1,  1230,    -1,  1230,   445,  1230,
      -1,    -1,  1307,   456,  1277,  1230,    -1,   365,  1223,    -1,
     365,  1223,   445,  1223,    -1,    21,   244,    -1,    21,   302,
      -1,    -1,    -1,   261,   396,   454,   741,   686,    -1,    -1,
      -1,   255,   396,   454,   743,   686,    -1,    -1,    -1,   368,
     396,   454,   745,   746,    -1,    -1,   746,   747,    -1,    -1,
     350,  1184,   748,   749,   454,   763,    -1,    -1,   749,   750,
      -1,     1,   454,    -1,  1277,   204,    -1,    62,  1277,  1210,
      -1,   751,    -1,   754,    -1,  1333,   752,    -1,  1269,   753,
      -1,  1219,    -1,   753,  1219,    -1,   322,  1282,   755,   756,
      -1,  1228,    -1,  1228,  1317,  1228,  1311,    -1,  1228,  1317,
      -1,    -1,   756,   757,    -1,   758,    -1,   759,    -1,   760,
      -1,   761,    -1,   762,    -1,   210,  1277,  1228,    -1,   178,
    1326,  1277,  1228,    -1,   240,  1327,  1277,  1228,    -1,   240,
    1326,  1277,  1228,    -1,   188,  1277,  1228,    -1,    -1,   763,
     764,    -1,    -1,   691,   692,   765,   766,   454,    -1,    -1,
     766,   767,    -1,   768,    -1,   772,    -1,   778,    -1,   709,
      -1,   788,    -1,   714,    -1,   729,    -1,   780,    -1,   731,
      -1,   786,    -1,   773,    -1,   733,    -1,   776,    -1,   787,
      -1,   715,    -1,   777,    -1,   475,  1277,   769,    -1,  1331,
      -1,  1329,    -1,  1327,   770,    -1,  1326,    -1,  1328,   770,
      -1,  1330,    -1,  1332,    -1,    -1,  1219,   771,    -1,   177,
     771,    -1,    -1,   314,   322,    -1,   285,   209,  1277,   783,
      -1,   433,  1287,  1203,   774,    -1,    -1,   375,  1288,   775,
      -1,  1219,    -1,   177,    -1,   334,   504,  1159,    -1,   502,
    1219,   196,  1205,    49,  1205,    -1,   779,   782,    -1,   252,
    1286,  1278,    -1,   254,  1258,    -1,   781,   784,    -1,  1310,
    1286,  1278,    -1,  1311,  1258,    -1,   783,    -1,   782,   783,
      -1,   330,  1226,    -1,  1228,    -1,   286,    -1,   785,    -1,
     784,   785,    -1,   330,  1226,    -1,  1228,    -1,   416,  1277,
    1205,  1251,    -1,   209,  1274,    -1,   494,  1277,   120,    -1,
      -1,    -1,   391,   396,   454,   790,   791,    -1,    -1,   792,
      -1,   793,   454,    -1,   792,   793,   454,    -1,   701,    -1,
      -1,   691,   692,   794,   795,    -1,   691,     1,   454,    -1,
      -1,   795,   796,    -1,    45,   252,    -1,    45,   391,    -1,
      38,    -1,    46,    -1,   161,   157,    -1,   161,   159,    -1,
     211,    -1,   265,    -1,   380,    -1,   476,    -1,   319,    -1,
     243,    -1,    32,    -1,   397,    -1,   373,    -1,   198,    -1,
     346,    57,  1277,  1210,    -1,   346,    -1,   459,    -1,   252,
    1285,  1277,   799,  1212,    -1,  1310,  1285,  1277,   800,  1212,
      -1,   190,  1277,  1212,    -1,    35,  1277,  1212,    -1,   710,
      -1,   731,    -1,   802,    -1,   729,    -1,   714,    -1,   733,
      -1,   709,    -1,   801,    -1,   500,  1219,    -1,   196,  1215,
      -1,   449,  1219,    -1,   330,    -1,   466,    -1,   270,    -1,
     461,    -1,    -1,   797,    -1,   798,    -1,    -1,   797,    -1,
     798,    -1,   306,  1226,  1303,    -1,  1277,   204,    -1,    -1,
      -1,    -1,   338,   123,   807,   815,   454,   804,   816,   805,
     818,    -1,    -1,   806,   829,   454,   818,    -1,    -1,    -1,
     500,   808,   810,    -1,    -1,    56,   809,   810,    -1,   811,
      -1,   810,   811,    -1,   812,   813,   814,   507,    -1,    -1,
    1263,   359,    -1,  1263,   501,    -1,    -1,   412,  1277,    32,
      -1,   412,  1277,   111,    -1,   479,   412,  1277,    32,    -1,
     479,   412,  1277,  1226,    -1,   412,  1277,  1226,    -1,    -1,
     313,    -1,    -1,   378,   507,    -1,    -1,    -1,   110,   454,
     817,   818,   130,   110,   454,    -1,    -1,   818,   819,    -1,
     820,    -1,   823,    -1,   829,   454,    -1,   824,    -1,   454,
      -1,    -1,   507,   396,   825,   454,   821,   822,    -1,    -1,
    1111,   454,    -1,   507,   454,    -1,   507,    -1,    -1,  1226,
      -1,    -1,    -1,   827,   828,   829,    -1,    -1,   830,   831,
      -1,   829,   831,    -1,   832,    -1,   848,    -1,   853,    -1,
     857,    -1,   862,    -1,   877,    -1,   880,    -1,   888,    -1,
     884,    -1,   889,    -1,   890,    -1,   895,    -1,   909,    -1,
     913,    -1,   916,    -1,   930,    -1,   934,    -1,   937,    -1,
     940,    -1,   944,    -1,   945,    -1,   949,    -1,   959,    -1,
     962,    -1,   979,    -1,   981,    -1,   984,    -1,   988,    -1,
     994,    -1,  1006,    -1,  1014,    -1,  1015,    -1,  1018,    -1,
    1019,    -1,  1023,    -1,  1028,    -1,  1029,    -1,  1037,    -1,
    1052,    -1,  1062,    -1,  1071,    -1,  1076,    -1,  1083,    -1,
    1087,    -1,  1089,    -1,  1092,    -1,  1095,    -1,  1099,    -1,
    1126,    -1,   285,   401,    -1,     1,  1255,    -1,    -1,     3,
     833,   834,   847,    -1,   835,   837,   841,   842,   843,  1134,
      -1,  1219,   196,   836,    -1,  1219,   196,  1311,    -1,  1219,
     196,   104,   512,    -1,  1219,   196,   104,    -1,  1219,   196,
     105,   511,    -1,  1219,   196,   105,    -1,  1219,   196,   106,
      -1,  1219,   196,   163,   237,    -1,  1219,   196,   166,   425,
      -1,  1219,   196,   446,    -1,  1219,   196,   496,   276,    -1,
    1219,   196,    70,    -1,  1219,   196,   156,  1134,    -1,  1219,
     196,   154,  1208,  1134,    -1,  1219,   196,    24,    -1,  1219,
     196,    25,  1134,    -1,  1219,   196,  1186,    -1,  1219,   196,
     507,    -1,  1219,    -1,   309,    -1,   254,    -1,   252,   300,
      -1,    -1,   838,    -1,  1261,   839,   840,    -1,  1261,   840,
     839,    -1,  1261,   839,    -1,  1261,   840,    -1,    30,  1212,
      -1,   252,  1285,  1212,    -1,  1310,  1285,  1212,    -1,   332,
    1285,  1212,    -1,    -1,   197,    -1,    -1,   272,  1277,    47,
      -1,    -1,   506,   844,    -1,   845,    -1,   844,   845,    -1,
      32,    -1,   438,    -1,    38,    -1,    46,    -1,    92,    -1,
     198,    -1,   211,    -1,   243,    -1,   263,    -1,   265,    -1,
     288,    -1,   319,    -1,   346,    57,  1277,  1210,    -1,   346,
      -1,   373,    -1,   380,    -1,   397,    -1,   347,   412,  1277,
    1212,    -1,   412,  1277,  1212,    -1,   476,    -1,   287,   846,
      -1,   846,    -1,   492,    -1,   190,  1277,  1212,    -1,    35,
    1277,  1212,    -1,   393,   485,  1158,    -1,   393,   124,  1158,
      -1,   447,  1257,  1213,    -1,   486,    -1,   111,    -1,    -1,
     131,    -1,    -1,     5,   849,   850,   852,    -1,  1201,   449,
    1178,  1142,    -1,  1201,   851,   203,  1178,  1142,    -1,    95,
    1219,   449,  1219,  1251,  1142,    -1,    -1,   449,  1202,    -1,
      -1,   132,    -1,    -1,    10,   854,   855,    -1,  1219,  1245,
     856,    -1,  1172,    58,  1246,   856,    -1,    -1,   378,  1200,
      -1,    -1,    18,   858,   859,    -1,   860,    -1,   859,   860,
      -1,  1188,   449,   861,  1188,    -1,    -1,   340,   449,    -1,
      -1,    51,   863,   864,   876,    -1,   865,  1211,   866,   871,
     874,   875,    -1,    -1,   424,    -1,   426,    -1,   271,    -1,
      -1,    -1,   500,   867,   868,    -1,   869,    -1,   868,   869,
      -1,   870,   309,    -1,   870,   813,  1202,    -1,    -1,  1263,
     359,    -1,  1263,    88,    -1,  1263,   501,    -1,    -1,   872,
    1276,  1219,    -1,   872,   873,    -1,   872,     6,  1287,  1219,
      -1,   378,    -1,   203,    -1,   463,    -1,   309,    -1,    -1,
    1314,   826,    -1,    -1,   295,   826,    -1,    -1,   133,    -1,
      -1,    52,   878,   879,    -1,  1210,    -1,   879,  1210,    -1,
      -1,    61,   881,   882,    -1,  1183,   883,    -1,   882,  1183,
     883,    -1,    -1,  1321,    -1,  1321,  1270,   364,    -1,  1308,
     287,   382,    -1,  1308,   262,    -1,    -1,    75,   885,   886,
     887,    -1,  1178,  1312,  1172,  1142,    -1,    -1,   134,    -1,
      72,    -1,    89,    -1,    -1,   112,   891,   892,   894,    -1,
    1183,  1293,  1155,    -1,   457,   893,    -1,  1183,    -1,   893,
    1183,    -1,    -1,   135,    -1,    -1,   120,   896,   897,   908,
      -1,  1210,   490,  1139,    -1,  1210,   491,  1139,    -1,  1210,
     488,  1139,    -1,  1210,   489,  1139,    -1,  1201,   901,   905,
    1139,    -1,   898,  1139,    -1,  1202,   506,   906,  1139,    -1,
     900,    -1,    -1,   898,   899,   900,    -1,  1202,   838,   902,
     842,   904,    -1,    -1,   487,  1186,    -1,   487,   507,    -1,
     487,   336,    -1,   487,    97,    -1,    -1,   487,   903,    -1,
      97,    -1,    98,    -1,    -1,   506,   906,    -1,    -1,   299,
      -1,   907,    -1,   906,   907,    -1,    38,    -1,    45,   252,
      -1,    45,   391,    -1,    46,    -1,    92,    -1,   161,   157,
      -1,   161,   159,    -1,   211,    -1,   265,    -1,   319,    -1,
     380,    -1,   412,  1277,  1212,    -1,   476,    -1,   190,  1277,
    1212,    -1,    35,  1277,  1212,    -1,   393,   485,  1158,    -1,
     393,   124,  1158,    -1,    -1,   136,    -1,    -1,   122,   910,
     911,   912,    -1,  1202,   228,  1178,  1142,    -1,  1202,   228,
    1202,   203,  1178,  1142,    -1,  1202,    49,  1202,   203,  1178,
    1142,    -1,  1202,   228,  1202,   203,  1179,   363,  1179,  1142,
      -1,  1202,    49,  1202,   203,  1179,   363,  1179,  1142,    -1,
      -1,   137,    -1,    -1,   153,   914,   915,    -1,   256,   866,
      -1,    -1,   164,   917,   918,   929,    -1,   919,   921,    -1,
     920,    -1,   919,    17,   920,    -1,  1160,    -1,   467,    -1,
     456,    -1,   922,   924,    -1,   922,    -1,   923,    -1,   922,
     923,    -1,   925,   826,    -1,   504,   317,   826,    -1,   504,
     926,    -1,   925,   504,   926,    -1,   927,    -1,   926,    17,
     927,    -1,  1161,   928,    -1,    21,    -1,   467,    -1,   456,
      -1,    -1,   445,  1160,    -1,    -1,   138,    -1,    -1,   169,
     931,   932,    -1,    -1,   341,   933,    -1,   199,    -1,   325,
     102,    -1,   325,    -1,   396,    -1,   324,    -1,    -1,   872,
    1202,    -1,    -1,   195,   935,   936,    -1,  1199,    -1,    -1,
     202,   938,   939,    -1,  1223,    -1,    -1,   205,   941,   942,
      -1,  1304,  1187,   943,    -1,    -1,   115,  1288,  1219,    -1,
     206,   933,    -1,    -1,   215,   946,  1159,  1302,   947,   948,
      -1,   826,   129,   826,    -1,   129,   826,    -1,   826,    -1,
      -1,   140,    -1,    -1,   222,   950,   951,    -1,  1199,   952,
     953,   954,   958,    -1,    -1,  1308,   176,    -1,    -1,     9,
    1304,   501,    -1,   957,  1304,   501,    -1,    -1,   367,   955,
      -1,   956,    -1,   955,   956,    -1,   957,  1267,    49,  1202,
      -1,    12,    -1,    15,    -1,   302,    -1,    16,    -1,   303,
      -1,   277,    -1,   278,    -1,    -1,  1302,  1304,   111,    -1,
      -1,   224,   960,   961,    -1,  1184,    -1,   961,  1184,    -1,
      -1,   227,   963,   964,    -1,   965,   966,    -1,  1219,    -1,
    1230,    -1,  1233,    -1,   967,   969,    -1,   967,    -1,   969,
      -1,   970,    -1,    -1,   439,   968,   971,    -1,   367,   973,
      -1,    93,  1208,   449,  1209,   977,    -1,   972,    -1,   971,
     972,    -1,  1208,   189,    -1,    58,   977,    -1,     9,    -1,
     241,    -1,   471,    -1,  1208,   977,    -1,   974,    -1,   973,
     974,    -1,    58,    49,  1208,   977,    -1,   975,   976,    -1,
      -1,     9,    -1,   241,    -1,   178,    -1,   471,    -1,  1208,
      49,  1209,   977,    -1,    -1,   977,   978,    -1,    37,  1275,
    1202,    -1,     8,  1275,  1202,    -1,    -1,   269,   980,  1054,
      -1,    -1,   273,   982,   983,    -1,  1202,   449,  1199,    -1,
      95,  1202,   449,  1199,    -1,    -1,   275,   985,   986,   987,
      -1,  1202,    49,  1178,  1142,    -1,  1202,    49,  1202,   203,
    1178,  1142,    -1,    -1,   141,    -1,    -1,   312,   989,   990,
      -1,   991,   992,  1182,   993,    -1,   990,   991,   992,  1182,
     993,    -1,   225,    -1,   318,    -1,   233,    -1,   171,    -1,
      -1,   406,  1308,   642,    -1,    -1,  1308,   287,   382,    -1,
    1308,   262,    -1,   381,    -1,    -1,   325,   995,   996,    -1,
    1000,  1001,    -1,    -1,  1001,   997,   826,   998,    -1,  1001,
     999,    -1,    -1,   142,    -1,   142,    -1,   454,    -1,  1188,
      -1,  1188,   445,  1188,    -1,    -1,  1211,   448,    -1,   191,
      -1,  1002,   484,  1003,    -1,  1002,   502,  1004,    -1,    -1,
    1308,   442,  1131,    -1,   169,    -1,  1159,    -1,  1005,    -1,
    1004,     8,  1005,    -1,  1219,   196,  1202,    49,  1202,   484,
    1159,    -1,    -1,   351,  1007,  1008,  1013,    -1,  1183,  1248,
    1293,  1009,  1010,  1011,  1012,    -1,    -1,   228,  1219,    -1,
      -1,   217,   262,    -1,  1308,   262,    -1,  1308,   236,   262,
      -1,  1308,   287,   262,    -1,  1308,   216,   262,    -1,  1308,
     503,    -1,    -1,   237,  1277,  1219,    -1,  1155,    -1,  1149,
      -1,    -1,   144,    -1,   352,    -1,    -1,   362,  1016,  1017,
      -1,  1180,  1129,    -1,   376,    -1,    -1,   377,  1020,  1021,
    1022,    -1,  1183,  1293,  1009,  1148,    -1,    -1,   145,    -1,
      -1,   383,  1024,  1025,  1027,    -1,  1180,  1129,  1026,  1155,
      -1,    -1,  1308,   262,    -1,  1308,   287,   262,    -1,    -1,
     146,    -1,   387,    -1,    -1,   395,  1030,  1031,  1036,    -1,
    1181,  1032,  1033,  1034,    -1,     9,  1181,  1033,   504,  1160,
     826,    -1,    -1,   502,  1219,    -1,    -1,   130,   826,    -1,
    1035,    -1,  1035,  1034,    -1,   504,  1159,   826,    -1,    -1,
     147,    -1,    -1,   405,  1038,  1039,    -1,  1042,    -1,  1043,
      -1,  1046,    -1,  1047,    -1,  1048,    -1,  1050,    -1,   310,
      -1,   308,    -1,   485,    -1,   124,    -1,   154,  1208,   449,
    1208,    -1,  1216,    31,  1044,    -1,  1045,    -1,  1044,  1045,
      -1,    38,  1040,    -1,    46,  1040,    -1,   211,  1040,    -1,
     265,  1040,    -1,   380,  1040,    -1,   476,  1040,    -1,   243,
    1040,    -1,   319,  1040,    -1,  1199,   449,   153,  1207,    -1,
    1199,   449,  1202,    -1,  1199,  1041,    49,  1202,    -1,  1049,
      -1,  1048,  1049,    -1,  1185,   449,  1040,    -1,  1051,    -1,
    1050,  1051,    -1,  1199,   449,   467,    -1,  1199,   449,   456,
      -1,    -1,   414,  1053,  1054,    -1,    -1,  1217,  1056,  1058,
    1059,  1055,  1060,  1061,    -1,    -1,  1056,  1288,   725,  1279,
    1057,    -1,    -1,  1057,  1223,    -1,    -1,  1324,  1273,    -1,
      -1,  1309,  1277,  1192,    -1,    -1,   500,  1182,    -1,   225,
     338,  1277,  1000,    -1,    -1,   203,  1182,    -1,   318,   338,
    1277,  1000,    -1,    -1,   423,  1063,  1064,  1070,    -1,  1183,
    1066,  1065,  1155,    -1,    -1,  1308,  1323,  1172,    -1,    -1,
     237,  1277,  1067,  1219,    -1,   178,    -1,   240,    -1,  1165,
      -1,  1249,  1166,    -1,  1249,  1167,    -1,  1249,  1168,    -1,
    1249,  1169,    -1,  1068,    -1,  1069,    -1,   290,  1165,    -1,
     294,    -1,    -1,   148,    -1,    -1,   428,   389,  1072,  1073,
      -1,   428,  1075,    -1,    -1,   872,  1202,    -1,  1308,   162,
    1300,  1074,    -1,  1308,   289,  1300,  1074,    -1,    -1,  1202,
      -1,   256,    -1,   418,    -1,   513,    -1,   348,    -1,    -1,
     429,  1077,  1078,  1082,    -1,  1079,   228,  1219,  1081,  1145,
      -1,  1080,    -1,  1079,  1080,    -1,  1202,    -1,   113,  1263,
     412,    -1,   113,  1263,  1202,    -1,    -1,  1308,   331,  1277,
    1219,    -1,    -1,   149,    -1,    -1,   432,  1084,  1085,  1086,
      -1,  1201,   196,  1178,  1142,    -1,  1201,   196,  1202,   203,
    1178,  1142,    -1,    95,  1219,   196,  1219,  1251,  1142,    -1,
      -1,   150,    -1,   434,  1088,    -1,    -1,   337,    -1,    -1,
     441,  1090,  1091,    -1,  1184,    -1,  1091,  1184,    -1,    -1,
     472,  1093,  1094,    -1,  1219,   196,  1208,   449,  1209,    -1,
      -1,   478,  1096,  1097,    -1,  1183,  1098,    -1,    -1,   353,
      -1,   355,    -1,    -1,   483,  1100,  1101,  1110,    -1,  1219,
    1102,  1105,  1081,  1109,  1145,    -1,    -1,   113,  1263,  1103,
      -1,  1104,    -1,  1103,   314,  1104,    -1,  1243,  1208,    -1,
     228,  1106,    -1,  1105,  1106,    -1,  1219,  1107,  1108,    -1,
      -1,   114,  1272,  1219,    -1,    -1,    96,  1272,  1219,    -1,
      -1,   439,  1272,  1219,    -1,    -1,   151,    -1,    -1,   495,
    1112,  1113,    -1,  1114,    -1,  1117,    -1,  1121,    -1,  1123,
      -1,  1124,    -1,  1115,  1257,  1299,  1313,  1291,  1288,  1116,
      -1,    -1,   204,    -1,  1182,    -1,   225,    -1,   318,    -1,
     233,    -1,   171,    -1,  1270,   108,  1288,  1118,    -1,  1119,
      -1,  1118,  1119,    -1,  1189,    -1,     9,   339,    -1,     9,
    1120,  1223,    -1,    -1,   360,    -1,   360,   307,    -1,   307,
      -1,  1261,   341,  1122,    -1,   423,    -1,   130,    -1,  1115,
      37,   369,  1219,    -1,  1125,    -1,   167,    -1,   128,    -1,
      -1,   510,  1127,  1128,  1133,    -1,  1180,  1129,  1130,  1026,
    1132,    -1,    -1,   196,  1215,    -1,    -1,  1131,  1256,  1212,
    1281,    -1,  1131,  1256,  1186,    -1,  1131,  1256,   322,    -1,
      37,    -1,     8,    -1,  1155,    -1,  1152,    -1,    -1,   152,
      -1,  1135,  1137,    -1,    -1,  1136,   826,    -1,   163,    -1,
     166,    -1,    -1,  1138,   826,    -1,   293,    -1,   295,    -1,
    1140,  1141,    -1,    -1,   166,   826,    -1,    -1,   295,   826,
      -1,  1143,  1144,    -1,    -1,   413,   826,    -1,    -1,   298,
     826,    -1,  1146,  1147,    -1,    -1,   464,   826,    -1,    -1,
     297,   826,    -1,  1150,  1151,    -1,  1150,    -1,  1150,  1151,
      -1,  1150,    -1,  1151,    -1,   130,   826,    -1,   291,   826,
      -1,  1153,  1154,    -1,  1153,    -1,  1154,    -1,   158,   826,
      -1,   292,   826,    -1,  1156,  1157,    -1,    -1,   231,   826,
      -1,    -1,   296,   826,    -1,    -1,  1214,  1322,    -1,  1160,
      -1,  1161,    -1,    -1,  1162,  1163,    -1,  1164,    -1,  1163,
     232,    -1,  1163,  1164,    -1,  1202,    -1,   465,    -1,   451,
      -1,   466,    -1,   461,    -1,   462,    -1,   453,    -1,   170,
      -1,  1165,    -1,  1166,    -1,  1167,    -1,  1168,    -1,  1169,
      -1,   294,    -1,   290,    -1,    20,    -1,   314,    -1,   309,
      -1,   302,    -1,    12,    -1,    13,    -1,    14,    -1,   333,
      -1,   284,    -1,   455,    -1,   160,  1304,    -1,   458,    -1,
     207,    -1,   460,    -1,   246,    -1,   208,    -1,   247,    -1,
    1172,    -1,  1170,  1171,  1172,    -1,    -1,    71,    -1,   400,
      -1,  1172,   466,  1173,    -1,  1172,   461,  1173,    -1,  1173,
      -1,  1173,   462,  1174,    -1,  1173,   453,  1174,    -1,  1174,
      -1,  1175,   170,  1174,    -1,  1175,    -1,   466,  1176,    -1,
     461,  1176,    -1,  1176,    -1,   465,  1172,   451,    -1,  1205,
      -1,   251,    -1,   251,  1315,   507,    -1,   253,    -1,   253,
    1315,   507,    -1,   323,    -1,   323,  1315,   507,    -1,  1179,
      -1,  1178,  1179,    -1,  1200,  1251,    -1,  1223,    -1,  1223,
      -1,  1183,    -1,  1182,  1183,    -1,   507,    -1,   507,    -1,
    1186,    -1,  1185,  1186,    -1,   271,    -1,    -1,  1187,  1188,
      -1,  1189,    -1,  1223,    -1,  1190,    -1,  1190,  1315,  1190,
      -1,   256,    -1,  1192,    -1,  1191,  1192,    -1,  1223,    -1,
     507,    -1,  1195,    -1,  1194,  1195,    -1,   507,    -1,  1192,
      -1,   256,    -1,   507,    -1,   507,    -1,  1200,    -1,  1199,
    1200,    -1,  1221,    -1,  1231,    -1,     6,  1287,  1220,    -1,
    1202,    -1,  1201,  1202,    -1,  1219,    -1,  1230,    -1,  1233,
      -1,  1177,    -1,   245,  1220,    -1,   245,  1231,    -1,   245,
    1233,    -1,     6,  1287,  1206,  1207,    -1,     6,  1287,  1220,
      -1,   271,    -1,  1205,    -1,  1203,  1205,    -1,  1219,    -1,
    1231,    -1,  1233,    -1,  1219,    -1,  1231,    -1,  1233,    -1,
    1177,    -1,   245,  1220,    -1,   245,  1231,    -1,   245,  1233,
      -1,   341,    -1,   153,    -1,  1220,    -1,   256,    -1,  1219,
      -1,  1231,    -1,  1219,    -1,  1230,    -1,  1219,    -1,   256,
      -1,  1219,    -1,   256,    -1,  1233,    -1,  1216,    -1,  1226,
      -1,   513,    -1,  1216,    -1,  1228,    -1,  1216,    -1,  1226,
      -1,  1219,    -1,  1230,    -1,  1233,    -1,  1218,    -1,  1218,
      -1,  1223,    -1,  1223,  1224,    -1,  1220,    -1,  1223,  1224,
    1225,    -1,  1223,  1224,    -1,  1223,  1225,    -1,  1223,    -1,
    1222,    -1,  1223,  1224,  1225,    -1,  1223,  1224,    -1,  1223,
    1225,    -1,  1223,    -1,   507,    -1,   507,  1315,  1223,    -1,
     465,  1170,   451,    -1,   465,  1172,   452,   451,    -1,   465,
    1172,   452,  1172,   451,    -1,   256,    -1,   256,    -1,   256,
      -1,   256,    -1,   418,    -1,   513,    -1,   348,    -1,   212,
      -1,   266,    -1,   463,    -1,  1231,    -1,     9,  1232,    -1,
    1232,    -1,  1231,   450,  1232,    -1,   256,    -1,   418,    -1,
     513,    -1,   348,    -1,   212,    -1,   266,    -1,   463,    -1,
    1234,  1237,    -1,  1235,   465,  1204,   451,  1237,    -1,  1236,
     465,  1170,   451,  1237,    -1,   473,   465,  1239,   451,  1237,
      -1,   304,   465,  1240,   451,    -1,   258,   465,  1241,   451,
    1237,    -1,   259,   465,  1241,   451,  1237,    -1,   260,   465,
    1241,   451,  1237,    -1,   201,  1238,    -1,   498,  1238,    -1,
     100,    -1,   505,    -1,   493,    -1,   264,    -1,   379,    -1,
      83,    -1,   192,    -1,   193,    -1,   194,    -1,   430,    -1,
     431,    -1,    -1,   465,  1172,   452,   451,    -1,   465,  1172,
     452,  1172,   451,    -1,    -1,   465,  1170,   451,    -1,   465,
     451,    -1,  1204,    -1,  1204,  1171,   241,    -1,  1204,  1171,
     471,    -1,  1204,    -1,  1204,  1171,  1204,    -1,  1172,    -1,
    1172,  1171,  1192,    -1,    -1,    -1,     9,    -1,    -1,  1324,
      -1,    -1,   223,    -1,    -1,   223,  1247,    -1,    -1,   449,
    1209,    -1,    -1,   285,    -1,   335,    -1,    -1,   290,    -1,
      -1,   313,    -1,   290,   313,    -1,    -1,   388,  1252,    -1,
      -1,   272,  1277,  1253,    -1,    34,    -1,   281,    -1,   282,
      -1,   283,    -1,   345,    -1,   469,    -1,   470,    -1,   474,
      -1,    -1,   402,  1264,    -1,   454,    -1,     3,    -1,     5,
      -1,    10,    -1,    18,    -1,    51,    -1,    52,    -1,    61,
      -1,    72,    -1,    75,    -1,    89,    -1,   112,    -1,   120,
      -1,   122,    -1,   129,    -1,   153,    -1,   164,    -1,   169,
      -1,   195,    -1,   202,    -1,   205,    -1,   206,    -1,   215,
      -1,   222,    -1,   224,    -1,   227,    -1,   269,    -1,   273,
      -1,   275,    -1,   285,    -1,   312,    -1,   325,    -1,   351,
      -1,   362,    -1,   377,    -1,   383,    -1,   387,    -1,   395,
      -1,   405,    -1,   414,    -1,   423,    -1,   428,    -1,   429,
      -1,   432,    -1,   434,    -1,   441,    -1,   472,    -1,   478,
      -1,   483,    -1,   510,    -1,   131,    -1,   132,    -1,   133,
      -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,   138,
      -1,   140,    -1,   141,    -1,   142,    -1,   144,    -1,   145,
      -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,   150,
      -1,   151,    -1,   152,    -1,    -1,     7,    -1,    -1,     8,
      -1,    -1,    22,    -1,    -1,    23,    -1,    -1,    26,    -1,
      -1,    30,    -1,    -1,    39,    -1,    -1,    49,    -1,    -1,
      57,    -1,    -1,    58,    -1,    -1,    87,    -1,    -1,   103,
      -1,    -1,   457,    -1,    -1,   177,    -1,    -1,   189,    -1,
      -1,   196,    -1,    -1,   218,    -1,    -1,   315,    -1,   218,
     315,    -1,    -1,   221,    -1,    -1,   459,    -1,    -1,   228,
      -1,    -1,   232,    -1,    -1,   232,    -1,    22,    -1,    -1,
     237,    -1,    -1,   242,    -1,   386,    -1,    -1,   252,    -1,
     254,    -1,    -1,   248,  1277,    -1,   249,  1258,    -1,    -1,
     254,    -1,    -1,   272,    -1,    -1,   300,    -1,    -1,   300,
      -1,   301,    -1,    -1,   307,    -1,    -1,   310,    -1,    -1,
     425,   232,    -1,   425,    -1,   232,    -1,    -1,   317,    -1,
      -1,   338,    -1,    -1,   341,    -1,    -1,   353,    -1,    -1,
     386,    -1,    -1,   407,    -1,    -1,   408,    -1,    -1,   407,
      -1,   407,   232,    -1,    -1,   412,    -1,    -1,   420,    -1,
      -1,   425,    -1,    -1,   440,    -1,    -1,   444,    -1,    -1,
     448,    -1,    -1,   449,    -1,    -1,   449,    -1,   500,    -1,
      -1,   504,    -1,    -1,   504,   405,   449,    -1,    -1,   506,
      -1,    64,   403,    -1,   403,    -1,    67,    -1,    65,    -1,
      68,    -1,    66,    -1,   455,    -1,   160,    -1,   166,    -1,
     162,    -1,   166,    -1,   464,    -1,   218,    -1,   307,    -1,
     420,    -1,   309,    -1,   252,    -1,   254,    -1,   353,    -1,
     355,    -1,    58,    -1,   508,    -1,   353,  1277,    -1,   355,
    1258,    -1,   358,    -1,   477,    -1,   252,    -1,   254,    -1,
     412,    -1,   244,    -1,   506,   125,    -1,   125,    -1,   341,
      64,   403,    -1,    64,   403,    -1,   403,    -1,   117,    -1,
     107,    -1,    90,   210,    -1,    55,    -1,    90,   188,    -1,
      54,    -1,   322,   210,    -1,   326,    -1,   322,   188,    -1,
     327,    -1,   368,   210,    -1,   385,    -1,   368,   188,    -1,
     384,    -1,    90,  1277,    -1,    91,  1258,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
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
    4998,  5002,  5006,  5010,  5015,  5020,  5024,  5028,  5033,  5038,
    5043,  5047,  5051,  5056,  5061,  5066,  5071,  5072,  5073,  5074,
    5075,  5076,  5077,  5078,  5079,  5086,  5091,  5100,  5101,  5105,
    5106,  5111,  5114,  5118,  5126,  5129,  5133,  5141,  5152,  5160,
    5162,  5172,  5161,  5199,  5199,  5232,  5236,  5235,  5249,  5248,
    5268,  5269,  5274,  5289,  5291,  5295,  5305,  5307,  5315,  5323,
    5331,  5360,  5393,  5396,  5409,  5414,  5441,  5443,  5442,  5479,
    5480,  5484,  5485,  5486,  5503,  5504,  5515,  5514,  5564,  5565,
    5569,  5617,  5630,  5633,  5652,  5657,  5651,  5670,  5670,  5700,
    5707,  5708,  5709,  5710,  5711,  5712,  5713,  5714,  5715,  5716,
    5717,  5718,  5719,  5720,  5721,  5722,  5723,  5724,  5725,  5726,
    5727,  5728,  5729,  5730,  5731,  5732,  5733,  5734,  5735,  5736,
    5737,  5738,  5739,  5740,  5741,  5742,  5743,  5744,  5745,  5746,
    5747,  5748,  5749,  5750,  5751,  5752,  5753,  5754,  5755,  5756,
    5770,  5782,  5781,  5797,  5803,  5807,  5811,  5816,  5821,  5826,
    5831,  5835,  5839,  5843,  5847,  5852,  5856,  5860,  5864,  5868,
    5872,  5876,  5883,  5884,  5891,  5892,  5896,  5897,  5901,  5902,
    5903,  5904,  5905,  5909,  5913,  5914,  5917,  5918,  5921,  5922,
    5928,  5929,  5933,  5934,  5938,  5942,  5948,  5952,  5956,  5960,
    5964,  5968,  5972,  5976,  5980,  5984,  5988,  5992,  5996,  6000,
    6004,  6008,  6012,  6016,  6020,  6026,  6030,  6034,  6038,  6042,
    6046,  6050,  6057,  6058,  6062,  6066,  6084,  6083,  6092,  6096,
    6100,  6106,  6107,  6114,  6118,  6129,  6128,  6137,  6141,  6153,
    6154,  6162,  6161,  6170,  6171,  6175,  6181,  6181,  6188,  6187,
    6197,  6217,  6221,  6226,  6231,  6252,  6256,  6255,  6272,  6273,
    6278,  6286,  6310,  6312,  6316,  6325,  6338,  6341,  6345,  6349,
    6372,  6373,  6377,  6378,  6383,  6386,  6394,  6398,  6406,  6410,
    6421,  6420,  6428,  6432,  6443,  6442,  6450,  6455,  6463,  6464,
    6465,  6466,  6467,  6475,  6474,  6483,  6490,  6494,  6504,  6515,
    6533,  6532,  6541,  6545,  6549,  6554,  6562,  6566,  6577,  6576,
    6586,  6590,  6594,  6598,  6602,  6606,  6607,  6616,  6618,  6617,
    6625,  6634,  6641,  6645,  6649,  6653,  6663,  6665,  6669,  6670,
    6673,  6675,  6682,  6683,  6687,  6688,  6693,  6697,  6701,  6705,
    6709,  6713,  6717,  6721,  6725,  6729,  6733,  6737,  6741,  6745,
    6749,  6753,  6757,  6764,  6768,  6779,  6778,  6787,  6791,  6795,
    6799,  6803,  6810,  6814,  6825,  6824,  6833,  6852,  6851,  6875,
    6883,  6884,  6889,  6900,  6911,  6925,  6929,  6936,  6937,  6942,
    6951,  6960,  6965,  6974,  6975,  6980,  7042,  7043,  7044,  7048,
    7049,  7053,  7057,  7068,  7067,  7079,  7080,  7101,  7115,  7137,
    7159,  7179,  7202,  7203,  7211,  7210,  7219,  7230,  7229,  7239,
    7246,  7245,  7258,  7267,  7271,  7282,  7298,  7297,  7306,  7310,
    7314,  7321,  7325,  7336,  7335,  7343,  7351,  7352,  7356,  7357,
    7358,  7363,  7366,  7373,  7377,  7385,  7392,  7393,  7394,  7395,
    7396,  7397,  7398,  7403,  7406,  7416,  7415,  7424,  7430,  7442,
    7441,  7450,  7454,  7458,  7462,  7469,  7470,  7471,  7472,  7479,
    7478,  7492,  7502,  7511,  7512,  7516,  7517,  7518,  7519,  7520,
    7521,  7525,  7526,  7530,  7535,  7542,  7543,  7544,  7545,  7546,
    7550,  7578,  7581,  7588,  7592,  7602,  7601,  7614,  7613,  7621,
    7625,  7636,  7635,  7644,  7648,  7655,  7659,  7670,  7669,  7677,
    7698,  7722,  7723,  7724,  7725,  7729,  7730,  7734,  7735,  7736,
    7737,  7749,  7748,  7759,  7765,  7764,  7775,  7783,  7791,  7798,
    7802,  7815,  7822,  7834,  7837,  7842,  7846,  7857,  7864,  7865,
    7869,  7870,  7873,  7874,  7879,  7890,  7889,  7898,  7925,  7926,
    7931,  7934,  7938,  7942,  7946,  7950,  7954,  7961,  7962,  7966,
    7967,  7971,  7975,  7985,  7996,  7995,  8003,  8013,  8024,  8023,
    8032,  8039,  8043,  8054,  8053,  8065,  8074,  8077,  8081,  8088,
    8092,  8102,  8114,  8113,  8122,  8126,  8135,  8136,  8141,  8144,
    8152,  8156,  8163,  8171,  8175,  8186,  8185,  8199,  8200,  8201,
    8202,  8203,  8204,  8208,  8209,  8213,  8214,  8220,  8229,  8236,
    8237,  8241,  8245,  8249,  8253,  8257,  8261,  8265,  8269,  8278,
    8282,  8291,  8300,  8301,  8305,  8314,  8315,  8319,  8323,  8334,
    8333,  8342,  8341,  8372,  8375,  8395,  8396,  8399,  8400,  8408,
    8409,  8414,  8419,  8429,  8445,  8450,  8460,  8477,  8476,  8486,
    8499,  8502,  8510,  8513,  8518,  8523,  8531,  8532,  8533,  8534,
    8535,  8536,  8540,  8548,  8549,  8553,  8557,  8568,  8567,  8577,
    8590,  8593,  8597,  8605,  8617,  8620,  8627,  8628,  8629,  8630,
    8637,  8636,  8645,  8652,  8653,  8657,  8658,  8659,  8663,  8664,
    8668,  8672,  8683,  8682,  8691,  8695,  8699,  8706,  8710,  8720,
    8731,  8732,  8739,  8738,  8747,  8753,  8765,  8764,  8772,  8786,
    8785,  8793,  8806,  8808,  8809,  8817,  8816,  8825,  8833,  8834,
    8839,  8840,  8845,  8852,  8853,  8858,  8865,  8866,  8870,  8871,
    8875,  8876,  8880,  8884,  8895,  8894,  8903,  8904,  8905,  8906,
    8907,  8911,  8938,  8941,  8953,  8963,  8968,  8973,  8978,  8986,
    9024,  9025,  9029,  9069,  9079,  9102,  9103,  9104,  9105,  9109,
    9118,  9124,  9134,  9143,  9152,  9153,  9160,  9159,  9171,  9181,
    9182,  9187,  9190,  9194,  9198,  9205,  9206,  9210,  9211,  9215,
    9219,  9231,  9234,  9235,  9244,  9245,  9249,  9250,  9259,  9260,
    9264,  9267,  9268,  9277,  9278,  9289,  9292,  9293,  9302,  9303,
    9315,  9318,  9320,  9330,  9331,  9343,  9344,  9348,  9349,  9350,
    9354,  9363,  9374,  9375,  9376,  9380,  9389,  9400,  9405,  9406,
    9415,  9416,  9427,  9431,  9441,  9448,  9455,  9455,  9466,  9467,
    9468,  9472,  9481,  9482,  9484,  9485,  9486,  9487,  9488,  9490,
    9491,  9492,  9493,  9494,  9495,  9497,  9498,  9499,  9501,  9502,
    9503,  9504,  9505,  9508,  9509,  9513,  9514,  9518,  9519,  9523,
    9524,  9528,  9532,  9538,  9542,  9548,  9549,  9550,  9554,  9555,
    9556,  9560,  9561,  9562,  9566,  9570,  9574,  9575,  9576,  9579,
    9580,  9590,  9602,  9611,  9623,  9632,  9644,  9659,  9660,  9665,
    9674,  9680,  9700,  9704,  9725,  9766,  9780,  9781,  9786,  9792,
    9793,  9798,  9810,  9811,  9812,  9819,  9830,  9831,  9835,  9843,
    9851,  9855,  9862,  9871,  9872,  9878,  9892,  9909,  9913,  9920,
    9921,  9922,  9929,  9933,  9940,  9941,  9942,  9943,  9944,  9948,
    9952,  9956,  9960,  9964,  9985,  9989,  9996,  9997,  9998, 10002,
   10003, 10004, 10005, 10006, 10010, 10014, 10021, 10022, 10026, 10027,
   10031, 10032, 10036, 10037, 10048, 10049, 10053, 10054, 10055, 10059,
   10060, 10061, 10068, 10069, 10073, 10074, 10078, 10079, 10080, 10086,
   10090, 10094, 10095, 10099, 10103, 10110, 10117, 10124, 10134, 10141,
   10151, 10161, 10171, 10184, 10188, 10196, 10204, 10208, 10218, 10232,
   10255, 10277, 10293, 10294, 10295, 10296, 10297, 10298, 10302, 10306,
   10323, 10327, 10334, 10335, 10336, 10337, 10338, 10339, 10340, 10346,
   10350, 10354, 10358, 10362, 10366, 10370, 10374, 10378, 10382, 10389,
   10390, 10394, 10395, 10396, 10400, 10401, 10402, 10403, 10404, 10405,
   10409, 10413, 10417, 10424, 10428, 10432, 10439, 10446, 10453, 10463,
   10470, 10480, 10487, 10499, 10507, 10508, 10512, 10513, 10517, 10518,
   10523, 10526, 10534, 10537, 10544, 10546, 10547, 10551, 10552, 10556,
   10557, 10558, 10563, 10566, 10579, 10583, 10591, 10595, 10599, 10603,
   10607, 10611, 10615, 10619, 10626, 10627, 10633, 10634, 10635, 10636,
   10637, 10638, 10639, 10640, 10641, 10642, 10643, 10644, 10645, 10646,
   10647, 10648, 10649, 10650, 10651, 10652, 10653, 10654, 10655, 10656,
   10657, 10658, 10659, 10660, 10661, 10662, 10663, 10664, 10665, 10666,
   10667, 10668, 10669, 10670, 10671, 10672, 10673, 10674, 10675, 10676,
   10677, 10678, 10679, 10680, 10681, 10682, 10683, 10684, 10685, 10686,
   10687, 10688, 10689, 10690, 10691, 10692, 10693, 10694, 10695, 10696,
   10697, 10698, 10699, 10700, 10701, 10702, 10709, 10709, 10710, 10710,
   10711, 10711, 10712, 10712, 10713, 10713, 10714, 10714, 10715, 10715,
   10716, 10716, 10717, 10717, 10718, 10718, 10719, 10719, 10720, 10720,
   10721, 10721, 10722, 10722, 10723, 10723, 10724, 10724, 10725, 10725,
   10726, 10726, 10726, 10727, 10727, 10728, 10728, 10729, 10729, 10730,
   10730, 10731, 10731, 10731, 10732, 10732, 10733, 10733, 10733, 10734,
   10734, 10734, 10735, 10735, 10735, 10736, 10736, 10737, 10737, 10738,
   10738, 10739, 10739, 10739, 10740, 10740, 10741, 10741, 10742, 10742,
   10742, 10742, 10743, 10743, 10744, 10744, 10745, 10745, 10746, 10746,
   10747, 10747, 10748, 10748, 10749, 10749, 10750, 10750, 10750, 10751,
   10751, 10752, 10752, 10753, 10753, 10754, 10754, 10755, 10755, 10756,
   10756, 10757, 10757, 10758, 10758, 10758, 10759, 10759, 10760, 10760,
   10761, 10761, 10765, 10765, 10766, 10766, 10767, 10767, 10768, 10768,
   10769, 10769, 10770, 10770, 10771, 10771, 10772, 10772, 10773, 10773,
   10774, 10774, 10775, 10775, 10776, 10776, 10777, 10777, 10778, 10778,
   10779, 10779, 10780, 10780, 10783, 10784, 10785, 10789, 10789, 10790,
   10790, 10791, 10791, 10792, 10792, 10793, 10793, 10794, 10794, 10795,
   10795, 10796, 10796
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "SYMBOLIC", "SYNCHRONIZED", "\"SYSTEM-DEFAULT\"", "TAB", "TALLYING",
  "TAPE", "TERMINATE", "TEST", "THAN", "THEN", "THRU", "TIME", "TIMEOUT",
  "TIMES", "TO", "\"&\"", "\")\"", "\":\"", "\"/\"", "\".\"", "\"=\"",
  "\"FALSE\"", "\"FILE\"", "\">\"", "\"INITIAL\"", "\"<\"", "\"-\"",
  "\"*\"", "\"NULL\"", "\"OVERFLOW\"", "\"(\"", "\"+\"", "\"TRUE\"", "TOP",
  "\"TOWARD-GREATER\"", "\"TOWARD-LESSER\"", "TRAILING", "TRANSFORM",
  "\"FUNCTION TRIM\"", "TRUNCATION", "TYPE", "UNDERLINE", "UNIT", "UNLOCK",
  "UNSIGNED", "\"UNSIGNED-INT\"", "\"UNSIGNED-LONG\"",
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
  "numvalc_args", "locale_dt_args", "not_const_word", "flag_all",
  "flag_duplicates", "flag_initialized", "flag_initialized_to",
  "to_init_val", "flag_next", "flag_not", "flag_optional", "flag_rounded",
  "round_mode", "round_choice", "flag_separate", "error_stmt_recover",
  "_advancing", "_after", "_are", "_area", "_as", "_at", "_binary", "_by",
  "_character", "_characters", "_contains", "_data", "_file", "_final",
  "_for", "_from", "_in", "_in_order", "_indicate", "_initial", "_into",
  "_is", "_is_are", "_key", "_left_or_right", "_line_or_lines", "_limits",
  "_lines", "_mode", "_number", "_numbers", "_of", "_on", "_onoff_status",
  "_other", "_procedure", "_program", "_record", "_right", "_sign",
  "_signed", "_sign_is", "_size", "_standard", "_status", "_tape", "_then",
  "_times", "_to", "_to_using", "_when", "_when_set_to", "_with",
  "coll_sequence", "column_or_col", "columns_or_cols", "comp_equal",
  "exception_or_error", "exception_or_overflow", "in_of", "label_option",
  "line_or_lines", "lock_records", "object_char_or_word", "records",
  "reel_or_unit", "scroll_line_or_lines", "size_or_length", "with_dups",
  "prog_coll_sequence", "detail_keyword", "ch_keyword", "cf_keyword",
  "ph_keyword", "pf_keyword", "rh_keyword", "rf_keyword",
  "control_keyword", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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
     765,   766,   767,   768,   769
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   515,   517,   516,   518,   518,   519,   519,   520,   520,
     522,   521,   523,   524,   525,   526,   526,   526,   527,   527,
     528,   529,   529,   530,   532,   533,   534,   531,   536,   535,
     537,   538,   538,   539,   539,   540,   540,   541,   541,   541,
     541,   542,   542,   543,   543,   544,   544,   545,   545,   546,
     546,   546,   546,   546,   548,   547,   549,   549,   550,   550,
     552,   551,   553,   553,   553,   553,   554,   554,   555,   555,
     555,   555,   556,   557,   558,   559,   560,   560,   560,   560,
     561,   561,   563,   562,   564,   564,   564,   565,   565,   566,
     566,   566,   567,   567,   568,   568,   569,   569,   570,   571,
     571,   572,   572,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   575,   574,   576,   576,   576,
     576,   577,   577,   578,   578,   580,   579,   581,   581,   581,
     581,   581,   581,   582,   582,   583,   583,   584,   583,   585,
     585,   586,   586,   586,   586,   586,   586,   587,   587,   588,
     589,   589,   590,   591,   591,   592,   593,   593,   594,   594,
     595,   596,   596,   597,   597,   598,   599,   600,   600,   601,
     602,   603,   604,   605,   606,   607,   607,   608,   608,   609,
     609,   610,   610,   612,   611,   611,   613,   613,   614,   614,
     614,   614,   614,   614,   614,   614,   614,   614,   614,   614,
     614,   615,   615,   615,   615,   615,   616,   616,   616,   616,
     617,   617,   618,   618,   618,   619,   619,   620,   620,   620,
     621,   622,   622,   622,   623,   624,   624,   624,   625,   626,
     627,   627,   627,   629,   628,   630,   630,   630,   631,   631,
     631,   631,   632,   632,   633,   633,   633,   633,   634,   635,
     636,   637,   637,   637,   638,   639,   640,   640,   641,   642,
     642,   642,   643,   643,   643,   644,   644,   645,   645,   646,
     647,   647,   647,   647,   649,   648,   650,   650,   651,   652,
     652,   653,   653,   654,   654,   655,   655,   656,   658,   657,
     657,   659,   659,   660,   660,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   662,   663,   663,   663,
     664,   664,   664,   665,   665,   666,   666,   667,   667,   668,
     669,   669,   670,   670,   671,   671,   672,   673,   674,   674,
     675,   675,   675,   676,   677,   678,   679,   680,   681,   682,
     682,   683,   683,   684,   685,   684,   686,   687,   686,   688,
     688,   688,   689,   690,   689,   689,   691,   692,   692,   692,
     693,   694,   694,   695,   695,   695,   695,   696,   696,   696,
     696,   696,   696,   696,   696,   696,   696,   696,   696,   696,
     697,   697,   698,   698,   699,   699,   699,   700,   700,   701,
     702,   702,   703,   703,   704,   704,   704,   704,   704,   704,
     704,   704,   704,   704,   704,   704,   704,   704,   705,   706,
     707,   707,   708,   709,   710,   710,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   712,   712,   713,   713,   714,   714,   715,   716,
     716,   717,   717,   718,   718,   719,   719,   720,   720,   721,
     721,   722,   722,   723,   724,   724,   725,   725,   726,   726,
     727,   727,   728,   729,   730,   731,   732,   734,   733,   735,
     735,   736,   736,   737,   737,   738,   738,   739,   739,   740,
     741,   740,   742,   743,   742,   744,   745,   744,   746,   746,
     748,   747,   749,   749,   749,   750,   750,   750,   750,   751,
     752,   753,   753,   754,   755,   755,   755,   756,   756,   757,
     757,   757,   757,   757,   758,   759,   760,   761,   762,   763,
     763,   765,   764,   766,   766,   767,   767,   767,   767,   767,
     767,   767,   767,   767,   767,   767,   767,   767,   767,   767,
     767,   768,   769,   769,   769,   769,   769,   769,   769,   770,
     770,   770,   771,   771,   772,   773,   774,   774,   775,   775,
     776,   777,   778,   779,   779,   780,   781,   781,   782,   782,
     783,   783,   783,   784,   784,   785,   785,   786,   787,   788,
     789,   790,   789,   791,   791,   792,   792,   793,   794,   793,
     793,   795,   795,   796,   796,   796,   796,   796,   796,   796,
     796,   796,   796,   796,   796,   796,   796,   796,   796,   796,
     796,   796,   796,   796,   796,   796,   796,   796,   796,   796,
     796,   796,   796,   796,   796,   796,   796,   797,   797,   798,
     798,   799,   799,   799,   800,   800,   800,   801,   802,   803,
     804,   805,   803,   806,   803,   807,   808,   807,   809,   807,
     810,   810,   811,   812,   812,   812,   813,   813,   813,   813,
     813,   813,   814,   814,   815,   815,   816,   817,   816,   818,
     818,   819,   819,   819,   819,   819,   821,   820,   822,   822,
     823,   824,   825,   825,   827,   828,   826,   830,   829,   829,
     831,   831,   831,   831,   831,   831,   831,   831,   831,   831,
     831,   831,   831,   831,   831,   831,   831,   831,   831,   831,
     831,   831,   831,   831,   831,   831,   831,   831,   831,   831,
     831,   831,   831,   831,   831,   831,   831,   831,   831,   831,
     831,   831,   831,   831,   831,   831,   831,   831,   831,   831,
     831,   833,   832,   834,   834,   834,   834,   834,   834,   834,
     834,   834,   834,   834,   834,   834,   834,   834,   834,   834,
     834,   834,   835,   835,   836,   836,   837,   837,   838,   838,
     838,   838,   838,   839,   840,   840,   841,   841,   842,   842,
     843,   843,   844,   844,   845,   845,   845,   845,   845,   845,
     845,   845,   845,   845,   845,   845,   845,   845,   845,   845,
     845,   845,   845,   845,   845,   845,   845,   845,   845,   845,
     845,   845,   846,   846,   847,   847,   849,   848,   850,   850,
     850,   851,   851,   852,   852,   854,   853,   855,   855,   856,
     856,   858,   857,   859,   859,   860,   861,   861,   863,   862,
     864,   865,   865,   865,   865,   866,   867,   866,   868,   868,
     869,   869,   870,   870,   870,   870,   871,   871,   871,   871,
     872,   872,   873,   873,   874,   874,   875,   875,   876,   876,
     878,   877,   879,   879,   881,   880,   882,   882,   883,   883,
     883,   883,   883,   885,   884,   886,   887,   887,   888,   889,
     891,   890,   892,   892,   893,   893,   894,   894,   896,   895,
     897,   897,   897,   897,   897,   897,   897,   898,   899,   898,
     900,   901,   901,   901,   901,   901,   902,   902,   903,   903,
     904,   904,   905,   905,   906,   906,   907,   907,   907,   907,
     907,   907,   907,   907,   907,   907,   907,   907,   907,   907,
     907,   907,   907,   908,   908,   910,   909,   911,   911,   911,
     911,   911,   912,   912,   914,   913,   915,   917,   916,   918,
     919,   919,   920,   920,   920,   921,   921,   922,   922,   923,
     924,   925,   925,   926,   926,   927,   927,   927,   927,   928,
     928,   929,   929,   931,   930,   932,   932,   932,   932,   932,
     932,   932,   933,   933,   935,   934,   936,   938,   937,   939,
     941,   940,   942,   943,   943,   944,   946,   945,   947,   947,
     947,   948,   948,   950,   949,   951,   952,   952,   953,   953,
     953,   954,   954,   955,   955,   956,   957,   957,   957,   957,
     957,   957,   957,   958,   958,   960,   959,   961,   961,   963,
     962,   964,   965,   965,   965,   966,   966,   966,   966,   968,
     967,   969,   970,   971,   971,   972,   972,   972,   972,   972,
     972,   973,   973,   974,   974,   975,   975,   975,   975,   975,
     976,   977,   977,   978,   978,   980,   979,   982,   981,   983,
     983,   985,   984,   986,   986,   987,   987,   989,   988,   990,
     990,   991,   991,   991,   991,   992,   992,   993,   993,   993,
     993,   995,   994,   996,   997,   996,   996,   998,   998,   999,
     999,  1000,  1000,  1001,  1001,  1001,  1001,  1001,  1002,  1002,
    1003,  1003,  1004,  1004,  1005,  1007,  1006,  1008,  1009,  1009,
    1010,  1010,  1010,  1010,  1010,  1010,  1010,  1011,  1011,  1012,
    1012,  1013,  1013,  1014,  1016,  1015,  1017,  1018,  1020,  1019,
    1021,  1022,  1022,  1024,  1023,  1025,  1026,  1026,  1026,  1027,
    1027,  1028,  1030,  1029,  1031,  1031,  1032,  1032,  1033,  1033,
    1034,  1034,  1035,  1036,  1036,  1038,  1037,  1039,  1039,  1039,
    1039,  1039,  1039,  1040,  1040,  1041,  1041,  1042,  1043,  1044,
    1044,  1045,  1045,  1045,  1045,  1045,  1045,  1045,  1045,  1046,
    1046,  1047,  1048,  1048,  1049,  1050,  1050,  1051,  1051,  1053,
    1052,  1055,  1054,  1056,  1056,  1057,  1057,  1058,  1058,  1059,
    1059,  1060,  1060,  1060,  1061,  1061,  1061,  1063,  1062,  1064,
    1065,  1065,  1066,  1066,  1066,  1066,  1067,  1067,  1067,  1067,
    1067,  1067,  1068,  1069,  1069,  1070,  1070,  1072,  1071,  1071,
    1073,  1073,  1073,  1073,  1074,  1074,  1075,  1075,  1075,  1075,
    1077,  1076,  1078,  1079,  1079,  1080,  1080,  1080,  1081,  1081,
    1082,  1082,  1084,  1083,  1085,  1085,  1085,  1086,  1086,  1087,
    1088,  1088,  1090,  1089,  1091,  1091,  1093,  1092,  1094,  1096,
    1095,  1097,  1098,  1098,  1098,  1100,  1099,  1101,  1102,  1102,
    1103,  1103,  1104,  1105,  1105,  1106,  1107,  1107,  1108,  1108,
    1109,  1109,  1110,  1110,  1112,  1111,  1113,  1113,  1113,  1113,
    1113,  1114,  1115,  1115,  1116,  1116,  1116,  1116,  1116,  1117,
    1118,  1118,  1119,  1119,  1119,  1120,  1120,  1120,  1120,  1121,
    1122,  1122,  1123,  1124,  1125,  1125,  1127,  1126,  1128,  1129,
    1129,  1130,  1130,  1130,  1130,  1131,  1131,  1132,  1132,  1133,
    1133,  1134,  1135,  1135,  1136,  1136,  1137,  1137,  1138,  1138,
    1139,  1140,  1140,  1141,  1141,  1142,  1143,  1143,  1144,  1144,
    1145,  1146,  1146,  1147,  1147,  1148,  1148,  1149,  1149,  1149,
    1150,  1151,  1152,  1152,  1152,  1153,  1154,  1155,  1156,  1156,
    1157,  1157,  1158,  1158,  1159,  1160,  1162,  1161,  1163,  1163,
    1163,  1164,  1164,  1164,  1164,  1164,  1164,  1164,  1164,  1164,
    1164,  1164,  1164,  1164,  1164,  1164,  1164,  1164,  1164,  1164,
    1164,  1164,  1164,  1164,  1164,  1165,  1165,  1166,  1166,  1167,
    1167,  1168,  1169,  1170,  1170,  1171,  1171,  1171,  1172,  1172,
    1172,  1173,  1173,  1173,  1174,  1174,  1175,  1175,  1175,  1176,
    1176,  1177,  1177,  1177,  1177,  1177,  1177,  1178,  1178,  1179,
    1180,  1181,  1182,  1182,  1183,  1184,  1185,  1185,  1186,  1187,
    1187,  1188,  1189,  1189,  1189,  1190,  1191,  1191,  1192,  1193,
    1194,  1194,  1195,  1196,  1196,  1197,  1198,  1199,  1199,  1200,
    1200,  1200,  1201,  1201,  1202,  1202,  1202,  1202,  1202,  1202,
    1202,  1202,  1202,  1202,  1203,  1203,  1204,  1204,  1204,  1205,
    1205,  1205,  1205,  1205,  1205,  1205,  1206,  1206,  1207,  1207,
    1208,  1208,  1209,  1209,  1210,  1210,  1211,  1211,  1211,  1212,
    1212,  1212,  1213,  1213,  1214,  1214,  1215,  1215,  1215,  1216,
    1217,  1218,  1218,  1219,  1220,  1220,  1220,  1220,  1221,  1222,
    1222,  1222,  1222,  1223,  1223,  1224,  1225,  1225,  1226,  1227,
    1228,  1229,  1229,  1229,  1229,  1229,  1229,  1229,  1230,  1230,
    1231,  1231,  1232,  1232,  1232,  1232,  1232,  1232,  1232,  1233,
    1233,  1233,  1233,  1233,  1233,  1233,  1233,  1233,  1233,  1234,
    1234,  1235,  1235,  1235,  1236,  1236,  1236,  1236,  1236,  1236,
    1237,  1237,  1237,  1238,  1238,  1238,  1239,  1239,  1239,  1240,
    1240,  1241,  1241,  1242,  1243,  1243,  1244,  1244,  1245,  1245,
    1246,  1246,  1247,  1247,  1248,  1248,  1248,  1249,  1249,  1250,
    1250,  1250,  1251,  1251,  1252,  1252,  1253,  1253,  1253,  1253,
    1253,  1253,  1253,  1253,  1254,  1254,  1255,  1255,  1255,  1255,
    1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,
    1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,
    1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,
    1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,
    1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,
    1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,
    1255,  1255,  1255,  1255,  1255,  1255,  1256,  1256,  1257,  1257,
    1258,  1258,  1259,  1259,  1260,  1260,  1261,  1261,  1262,  1262,
    1263,  1263,  1264,  1264,  1265,  1265,  1266,  1266,  1267,  1267,
    1268,  1268,  1269,  1269,  1270,  1270,  1271,  1271,  1272,  1272,
    1273,  1273,  1273,  1274,  1274,  1275,  1275,  1276,  1276,  1277,
    1277,  1278,  1278,  1278,  1279,  1279,  1280,  1280,  1280,  1281,
    1281,  1281,  1282,  1282,  1282,  1283,  1283,  1284,  1284,  1285,
    1285,  1286,  1286,  1286,  1287,  1287,  1288,  1288,  1289,  1289,
    1289,  1289,  1290,  1290,  1291,  1291,  1292,  1292,  1293,  1293,
    1294,  1294,  1295,  1295,  1296,  1296,  1297,  1297,  1297,  1298,
    1298,  1299,  1299,  1300,  1300,  1301,  1301,  1302,  1302,  1303,
    1303,  1304,  1304,  1305,  1305,  1305,  1306,  1306,  1307,  1307,
    1308,  1308,  1309,  1309,  1310,  1310,  1311,  1311,  1312,  1312,
    1313,  1313,  1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,
    1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,  1322,  1322,
    1323,  1323,  1324,  1324,  1325,  1325,  1325,  1326,  1326,  1327,
    1327,  1328,  1328,  1329,  1329,  1330,  1330,  1331,  1331,  1332,
    1332,  1333,  1333
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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
       5,     5,     5,     4,     5,     5,     5,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     5,     0,     3,     2,     1,     3,     3,     1,
       3,     1,     3,     0,     0,     1,     0,     1,     0,     1,
       0,     2,     0,     2,     0,     1,     1,     0,     1,     0,
       1,     2,     0,     2,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     1,     0,
       1,     1,     0,     2,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     0,     2,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     2,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     1,     0,     1,     0,     3,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     1,     1,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,     5,     6,     4,
      43,     8,     9,    43,    43,     0,     0,     7,     0,    11,
      45,    15,    21,    32,    31,    33,    33,     0,     0,    47,
      16,    18,    43,     0,    14,    22,     0,     0,    28,    44,
       0,   175,     0,    17,    12,    19,    15,     0,    34,    30,
    1789,    46,     0,     0,     0,  1832,  1789,  1789,  1789,     0,
       0,     0,     0,     0,  1789,     0,     0,  1764,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1790,     0,     0,  1515,   125,  1789,
    1789,  1833,  1789,     0,     0,     0,     0,  1789,  1789,    60,
      82,     0,    54,    98,  1765,     0,  1789,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1826,    39,  1789,     0,     0,     0,  1583,   171,  1508,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1516,
     152,   153,  1791,   156,  1588,  1204,  1203,   116,   120,  1818,
    1789,     0,   100,   151,   178,   179,    38,  1827,    36,     0,
    1595,  1591,  1596,  1594,  1592,  1597,  1593,   160,   161,   163,
     172,   167,  1874,  1875,     0,   165,     0,  1763,     0,     0,
       0,  1789,  1896,    80,    61,  1762,    66,    68,    69,    70,
      71,  1762,     0,  1789,     0,    83,     0,    87,    55,    58,
     154,  1793,  1792,   157,     0,  1818,  1821,  1820,     0,     0,
     117,   121,     0,     0,   262,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1861,   166,     0,  1584,   170,  1895,  1789,
       0,     0,    65,    67,    63,    81,  1762,  1789,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1589,
     155,   158,     0,  1819,   123,   118,   119,   122,   180,     0,
       0,  1660,     0,   274,   270,    24,     0,   265,   267,   268,
     134,   137,     0,   164,     0,     0,  1894,    74,    64,     0,
    1509,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1661,   183,  1770,   271,   272,   273,  1752,
     281,     0,   263,   266,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1771,  1845,  1753,  1774,
       0,   283,   264,   138,   139,  1882,  1883,    72,  1828,  1846,
    1766,  1775,     0,     0,     0,   285,     0,  1807,  1828,  1853,
       0,   244,     0,  1789,  1762,  1794,   246,     0,  1863,  1860,
     232,   184,   231,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   243,   195,   196,   197,   198,   199,   200,
    1758,  1789,  1767,     0,  1494,   269,  1492,   282,     0,    25,
     140,  1808,  1789,  1829,  1794,  1854,  1855,   212,  1862,   247,
    1828,  1789,  1789,  1795,  1789,  1789,   256,  1752,   257,     0,
    1789,  1807,  1759,     0,     0,   275,   276,   279,  1493,   284,
     291,   292,   343,   286,   346,     0,     0,  1789,   214,   213,
     210,   246,   242,     0,     0,     0,     0,   255,  1822,  1822,
       0,   258,     0,  1789,   245,   228,   277,     0,   278,     0,
     499,   287,  1643,     0,   288,   222,   223,   221,   220,     0,
     206,   207,   217,   217,     0,   217,   209,   208,   217,     0,
    1514,  1513,   248,   249,   250,   251,   254,  1823,   259,   260,
     261,   229,     0,   280,     0,     0,   502,   348,     0,     0,
     352,     0,   290,   293,  1646,   218,   203,   219,   204,  1770,
     205,   202,   215,   201,   216,  1789,     0,   238,   237,   238,
     234,   344,     0,     0,   505,   351,     0,   349,     0,   358,
     359,   353,     0,   356,  1789,  1893,     0,   225,  1647,   211,
       0,   252,  1506,     0,   236,   235,   346,   500,     0,     0,
     600,   350,   355,   392,   361,  1766,  1789,     0,     0,  1789,
    1766,  1807,  1789,  1750,   289,     0,   294,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,     0,  1892,     0,
     224,   253,  1507,     0,   241,   345,   346,   503,     0,     0,
      26,  1789,  1754,     0,     0,     0,  1789,  1750,     0,     0,
       0,     0,     0,  1789,   339,  1751,   340,     0,   338,   341,
     295,   296,     0,     0,   501,   346,   506,     0,   663,     0,
     486,   416,  1834,  1834,  1834,  1834,  1834,  1856,   417,   452,
     454,   420,   421,   422,   423,   424,   425,   448,   446,   447,
     449,   450,   455,   453,   426,  1830,   451,     0,   427,   413,
     428,   429,     0,     0,  1837,   431,   432,   430,  1796,   434,
     435,   433,  1789,  1791,   393,   394,   395,   396,   397,   398,
     414,   418,   419,   399,   400,   401,   402,   403,   404,   405,
     406,   407,     0,     0,  1755,     0,   389,     0,   362,   317,
     337,  1884,  1885,  1512,   326,  1510,  1877,  1876,   319,  1805,
    1764,  1778,     0,  1789,   323,   322,  1789,   342,     0,   147,
     148,   227,     0,  1880,  1881,   239,   504,   508,   601,     0,
      27,   707,   497,   498,  1835,   445,   444,   437,   436,   443,
     442,   441,   440,   439,   438,  1857,     0,  1831,   483,   469,
     463,   408,  1577,   495,  1838,  1797,  1798,   484,     0,     0,
     410,   412,  1674,  1674,   391,     0,  1814,  1606,     0,     0,
    1602,  1607,  1605,  1603,  1608,  1604,   390,   363,  1598,  1600,
       0,   307,  1511,  1806,   328,     0,   310,  1779,  1839,   336,
       0,     0,   226,   240,   507,   603,   665,     0,     0,   485,
    1778,   465,     0,  1849,     0,  1575,  1576,     0,   415,   487,
     489,   491,     0,   409,  1762,   456,   457,  1599,  1815,     0,
       0,   372,   368,   371,   370,   369,   384,   380,   382,   383,
     385,   381,   386,   387,   388,   365,   376,   377,   378,   373,
     374,   375,   367,   364,     0,   318,   309,   308,   306,   327,
    1764,  1840,   315,   324,   321,   325,   320,     0,   509,     0,
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
       0,     0,   463,   464,  1850,   467,  1624,  1619,  1625,  1626,
    1627,  1633,     0,  1481,  1483,     0,     0,     0,  1622,     0,
    1485,  1623,  1628,  1629,     0,     0,     0,     0,  1621,  1633,
    1620,  1465,  1463,  1470,  1473,  1475,  1478,  1542,  1480,  1539,
    1573,  1540,  1541,  1630,     0,     0,     0,  1574,   496,   493,
     490,     0,   411,  1675,   366,   379,  1601,     0,     0,   329,
     330,   331,   332,     0,   311,  1777,   317,     0,  1495,   510,
       0,   608,     0,   605,   673,   673,     0,     0,  1677,  1678,
    1679,  1680,  1681,  1682,  1683,  1684,  1685,  1686,  1687,  1688,
    1689,  1690,  1726,  1727,  1728,  1729,  1730,  1731,  1732,  1733,
    1734,  1735,  1736,  1737,  1738,  1739,  1740,  1741,  1742,  1743,
    1744,  1745,  1691,  1692,  1693,  1694,  1695,  1696,  1697,  1698,
    1699,  1700,  1701,  1702,  1703,  1704,  1705,  1706,  1707,  1708,
    1709,  1710,  1711,  1712,  1713,  1714,  1715,  1716,  1717,  1718,
    1719,  1720,  1721,  1676,  1722,  1723,  1724,  1725,   760,     0,
       0,     0,     0,   861,     0,     0,     0,     0,     0,     0,
       0,  1426,  1005,     0,     0,  1851,   881,   880,     0,  1025,
    1426,     0,     0,     0,     0,     0,     0,   759,     0,  1133,
       0,     0,     0,     0,     0,     0,     0,     0,  1276,  1279,
    1267,  1277,  1278,  1269,     0,     0,  1301,  1299,     0,   707,
       0,     0,     0,     0,   470,   466,   471,  1816,   474,     0,
    1617,  1543,  1544,  1545,     0,     0,     0,     0,     0,     0,
       0,  1477,     0,  1476,     0,  1618,  1466,  1467,  1585,     0,
       0,     0,     0,     0,     0,     0,     0,  1609,     0,     0,
       0,     0,   488,     0,   492,   335,   334,  1756,  1764,   316,
       0,   610,   611,   606,  1761,   673,   670,   676,     0,   673,
     685,   660,   783,   834,   786,   782,  1814,     0,     0,  1533,
     843,  1527,   841,  1522,  1524,  1525,  1526,   846,     0,  1648,
    1505,   852,   853,     0,  1501,  1503,  1502,   864,   862,   863,
     888,     0,  1555,   891,   892,  1554,   895,   898,  1814,   906,
       0,  1487,  1662,  1519,  1578,  1582,  1520,     0,   916,  1828,
    1602,   963,  1391,   927,   931,  1522,     0,  1524,   972,     0,
     865,   975,   984,   983,  1001,     0,   980,   982,  1425,     0,
    1007,  1011,  1009,  1012,  1010,  1004,  1015,  1016,  1517,  1018,
    1019,  1852,  1021,  1499,  1013,  1847,  1424,  1034,  1036,  1056,
    1057,  1060,     0,  1062,  1063,  1064,  1096,  1233,  1570,  1571,
       0,  1098,     0,  1105,     0,  1114,  1111,  1113,  1112,  1108,
    1115,  1135,  1505,  1122,  1133,  1124,     0,  1131,     0,  1556,
    1502,  1558,     0,  1161,  1654,  1165,  1369,  1490,  1171,  1828,
    1179,  1369,     0,  1193,  1186,  1491,     0,  1498,  1196,  1197,
    1198,  1199,  1200,  1201,  1222,  1202,  1225,     0,  1496,     0,
       0,  1569,  1582,  1230,  1265,  1252,  1270,  1760,  1290,     0,
    1283,  1285,     0,  1297,     0,  1303,  1304,   695,   701,   690,
     691,   692,   694,     0,  1307,     0,  1310,  1312,  1332,  1318,
    1379,  1369,   472,   474,  1817,     0,   478,   473,  1635,  1465,
    1463,  1482,  1484,  1465,     0,     0,     0,  1465,  1536,  1537,
    1538,     0,  1486,  1479,  1465,     0,  1464,  1586,     0,  1469,
    1468,  1472,  1471,  1474,     0,     0,  1465,     0,  1789,  1757,
       0,   313,     0,  1789,  1836,   671,  1789,     0,   682,   674,
     675,   686,   835,   762,  1757,   796,   787,     0,     0,     0,
       0,  1528,  1529,  1530,   844,   837,     0,     0,  1523,  1650,
    1649,   849,   854,   856,     0,   889,   859,  1557,   865,   893,
     898,  1886,  1887,   896,     0,   899,     0,   907,   904,  1869,
    1868,  1488,     0,  1664,  1489,  1580,  1581,   913,   914,   917,
     911,  1418,   964,   919,   704,     0,   925,  1393,     0,   942,
       0,   936,  1391,  1391,  1391,  1391,   973,   966,     0,     0,
     866,   976,  1002,   978,  1426,  1426,   979,   986,   987,   704,
    1450,  1451,  1452,  1446,  1851,  1438,  1458,  1461,  1460,  1462,
    1454,  1445,  1444,  1449,  1448,  1447,  1453,  1433,  1437,  1455,
    1457,  1459,  1435,  1436,  1432,  1434,  1427,  1428,  1439,  1440,
    1441,  1442,  1443,  1431,  1008,  1006,  1518,  1023,  1848,   704,
    1038,     0,  1058,     0,  1085,  1069,  1061,  1066,  1067,  1068,
    1237,     0,  1572,     0,     0,  1106,  1102,     0,  1115,  1860,
       0,  1123,  1129,  1130,   704,  1126,  1426,     0,     0,  1134,
       0,  1162,  1146,  1655,  1656,  1828,     0,  1166,  1172,  1169,
    1148,  1180,  1174,  1176,  1188,  1194,  1183,     0,  1188,     0,
    1550,  1551,  1223,  1226,     0,     0,  1497,  1206,     0,  1205,
       0,     0,  1580,  1266,  1248,  1254,  1789,  1255,  1250,     0,
    1268,     0,     0,  1291,  1281,     0,  1284,     0,  1298,  1293,
       0,  1305,   702,   700,   693,     0,  1313,  1314,  1311,  1333,
    1316,  1760,     0,  1380,  1367,  1371,   478,   468,  1760,   461,
     476,   477,  1794,  1634,     0,  1630,  1630,  1630,     0,  1613,
       0,  1630,  1587,     0,  1630,  1630,  1859,     0,   333,  1816,
     312,   514,  1789,  1789,  1750,  1802,   539,   513,   517,   518,
       0,  1772,   625,  1789,   615,  1856,   616,  1865,  1864,     0,
    1789,     0,   628,   619,   624,  1809,   620,     0,   623,   630,
     627,   621,   626,     0,   631,   622,     0,   642,   636,   640,
     639,   637,   641,   612,   643,   638,     0,  1809,     0,  1789,
     683,     0,     0,   661,  1561,   792,  1559,  1560,   797,   798,
    1809,  1809,   790,   791,  1809,   778,  1382,  1867,  1866,   775,
     767,   769,   770,     0,  1382,     0,     0,     0,   784,   773,
       0,   781,   764,   780,   765,  1547,  1546,     0,  1532,     0,
    1814,  1396,   842,  1582,  1520,     0,  1652,   849,     0,   847,
       0,     0,  1504,   876,   897,   902,     0,     0,  1521,  1396,
    1789,  1663,  1579,   915,   704,   912,  1420,  1392,   705,   929,
    1756,   704,  1390,   935,   934,   933,   932,   943,  1391,  1789,
     946,     0,   949,   950,     0,  1789,   953,   954,   955,   956,
       0,  1789,   958,  1391,   944,     0,   798,   922,   923,   920,
     921,     0,  1396,     0,   872,   981,   996,   998,   997,   991,
     993,   999,  1426,   988,   985,  1426,   989,  1456,  1429,  1430,
    1816,  1022,  1500,   704,  1030,  1031,  1851,  1046,  1047,  1049,
    1051,  1052,  1048,  1050,  1041,  1851,  1037,     0,  1086,     0,
    1088,  1087,  1089,  1071,  1081,     0,     0,  1065,  1239,     0,
    1780,     0,  1099,  1396,     0,     0,     0,  1117,  1127,  1140,
    1136,  1141,  1137,  1142,     0,  1132,  1376,  1375,  1139,  1148,
    1370,  1566,  1567,  1568,     0,     0,  1418,     0,   704,     0,
    1187,     0,     0,     0,  1224,     0,  1228,  1227,  1220,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1208,  1209,
    1657,  1418,     0,  1271,  1843,  1843,  1286,  1287,  1288,     0,
    1396,     0,     0,   703,     0,  1644,     0,  1288,  1176,  1746,
     462,     0,  1789,  1642,  1614,  1615,  1616,  1640,  1637,  1638,
    1612,  1631,     0,  1610,  1611,   494,     0,     0,  1911,  1912,
    1789,  1750,     0,   511,   515,  1773,   519,     0,     0,   613,
     614,   617,   618,     0,   645,  1810,  1789,  1849,  1789,   646,
     644,   658,  1789,   677,   678,   681,     0,   672,   687,   689,
    1789,   800,     0,     0,   788,   789,     0,  1384,  1385,   779,
    1386,   704,   766,   768,  1382,   776,   771,   772,   785,   774,
    1549,  1531,  1548,  1662,     0,   704,   838,  1398,  1580,  1581,
    1396,     0,  1651,   848,   850,   857,   855,   884,  1787,   901,
     900,   905,     0,  1419,   704,  1417,   707,  1394,   924,     0,
     947,   948,   951,   952,     0,  1422,  1422,     0,   945,   926,
     938,   939,   937,   940,     0,   967,     0,   867,   868,   676,
       0,  1426,  1426,   995,   704,   992,     0,  1029,   704,  1032,
    1027,     0,     0,  1053,     0,     0,     0,  1082,  1084,     0,
    1077,  1091,  1078,  1079,  1070,  1073,  1091,  1231,  1789,  1794,
       0,  1781,  1238,  1100,  1103,     0,  1117,  1116,  1120,  1109,
       0,  1128,  1125,     0,     0,  1150,  1149,   704,  1170,  1406,
    1175,  1177,     0,  1189,  1426,  1426,  1184,  1190,  1207,  1219,
    1221,  1211,  1212,  1213,  1217,  1214,  1218,  1215,  1216,  1210,
    1658,  1264,     0,  1261,  1262,  1256,     0,  1249,  1891,  1890,
       0,  1844,  1274,  1274,  1401,     0,  1662,  1294,     0,   696,
       0,  1645,  1319,  1320,     0,  1323,  1326,  1330,  1324,  1418,
    1747,     0,   482,   479,   480,     0,  1632,   314,   516,  1803,
    1804,  1590,   527,   524,   357,   540,   520,   521,   635,   634,
     651,   657,     0,   654,   679,   680,   689,   707,     0,     0,
    1382,   793,   795,   794,  1388,  1389,  1381,   704,  1383,   777,
    1396,  1521,  1397,   704,  1395,  1579,   839,  1653,  1552,  1553,
    1872,  1873,   886,   704,  1814,  1788,   883,   882,   878,     0,
    1666,  1667,  1668,  1669,  1670,  1671,  1672,  1673,  1665,  1421,
       0,   960,   959,   962,     0,  1564,  1565,   961,   957,     0,
     930,  1396,  1487,  1396,  1487,   869,   870,     0,   874,   873,
     875,   994,  1000,   990,  1024,  1028,  1039,  1042,  1043,  1768,
    1035,  1851,  1040,  1091,  1091,     0,  1076,  1074,  1075,  1080,
    1241,     0,  1235,  1782,  1396,  1110,  1119,     0,  1143,     0,
       0,  1157,     0,  1410,   704,  1405,  1178,   704,   704,  1191,
    1263,  1253,  1257,  1258,  1259,  1260,  1251,  1272,  1275,  1273,
     704,  1282,  1403,  1789,  1396,  1396,   698,  1308,  1644,  1322,
    1778,  1328,  1778,  1401,   704,   704,  1368,  1378,  1413,  1414,
    1377,  1374,  1373,  1799,   481,   475,   523,  1878,  1879,   526,
     359,   541,   522,   649,   647,   650,   648,   652,   653,     0,
     629,   655,   656,     0,   707,   799,   804,  1789,   806,   807,
     808,   833,  1789,   809,   810,   811,   812,   813,     0,   814,
     815,   817,     0,   818,   819,     0,   820,  1789,   805,  1748,
     823,   832,   826,   801,   802,   825,   763,  1387,   840,  1399,
     704,   860,   885,     0,   877,  1888,  1889,  1423,   941,   969,
       0,   968,     0,   871,  1044,  1769,     0,     0,  1072,  1083,
    1091,  1785,  1785,  1092,     0,     0,  1244,  1240,  1234,  1104,
    1118,     0,  1151,  1789,  1418,     0,     0,  1152,     0,  1156,
    1411,  1185,  1192,  1402,   704,  1400,     0,  1296,  1295,  1334,
     697,     0,  1321,     0,  1778,  1325,     0,  1317,  1415,  1416,
    1412,  1800,  1801,  1372,     0,  1789,  1789,     0,   528,   529,
     530,   531,   532,   533,     0,   543,   632,   633,     0,     0,
       0,   824,  1789,  1789,  1422,  1422,     0,  1749,     0,   803,
     887,   879,  1396,  1396,     0,  1054,  1090,  1786,     0,     0,
    1789,  1242,     0,     0,  1232,  1236,     0,     0,  1147,  1160,
    1408,  1409,  1159,  1155,  1153,  1154,  1404,  1289,  1342,   699,
    1327,     0,  1331,  1898,  1897,  1789,     0,     0,  1900,     0,
    1789,  1789,   525,  1836,     0,   828,   827,     0,     0,   830,
     829,   822,   831,  1562,  1563,   971,   970,  1045,  1094,  1093,
       0,  1245,  1789,  1426,  1158,  1407,  1365,  1364,  1343,  1335,
    1336,  1748,  1337,  1338,  1339,  1340,  1363,     0,     0,  1329,
       0,   538,   534,  1899,     0,     0,  1783,  1811,  1750,     0,
       0,     0,  1789,  1814,   542,  1789,  1789,     0,   548,   550,
     559,   551,   553,   556,   544,   545,   546,   555,   557,   560,
     547,     0,   552,     0,   554,   558,   549,  1811,  1750,   688,
     816,   821,  1243,     0,  1144,     0,  1841,     0,  1816,   535,
     537,   536,  1784,   598,  1812,  1813,  1791,   584,  1789,   463,
    1426,     0,     0,     0,     0,     0,   592,     0,   582,   588,
     591,     0,   585,   593,   596,  1791,   587,  1246,     0,  1842,
       0,  1361,  1360,  1359,     0,   583,     0,  1849,   580,  1662,
     576,  1534,  1902,     0,     0,  1904,  1906,     0,  1910,  1908,
     561,   565,   569,   569,   563,   567,   562,   568,   599,     0,
     590,   589,   595,   594,   586,  1362,  1871,  1870,  1824,  1355,
    1349,  1350,  1352,   574,   467,   597,  1816,   575,  1535,  1901,
    1905,  1903,  1909,  1907,   572,   564,   572,   566,     0,  1825,
    1816,  1358,  1353,  1356,     0,  1351,   459,     0,     0,   571,
     570,     0,     0,  1357,  1354,     0,   458,   579,   577,   578,
     573,   581,  1348,  1345,  1347,  1346,  1341,  1344,   460
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
    1690,  1026,   771,   569,   570,   706,   844,   571,   572,   839,
    1019,  1020,  1021,  1022,   573,   574,   575,   576,   608,   460,
     546,   461,   462,   497,   498,   553,   499,   531,   532,   592,
     766,   825,   826,   827,   828,   829,   500,   686,   591,   664,
     665,   666,   803,   667,   668,   669,   670,   671,   672,   673,
    2590,  2726,   674,   793,   962,  1168,   791,  1403,  1406,  1407,
    1672,  1669,  2183,  2184,   675,   676,   677,   678,   679,  1009,
     799,   800,  1202,   680,   681,   496,   586,   524,   615,   550,
     717,   784,   848,  1210,  1443,  1697,  1698,  1986,  2196,  1699,
    2192,  2346,  2468,  2469,  2470,  2471,  2472,  2473,  1983,  2195,
    2475,  2533,  2594,  2595,  2670,  2705,  2719,  2596,  2597,  2697,
    2728,  2598,  2599,  2600,  2601,  2602,  2603,  2638,  2639,  2642,
    2643,  2604,  2605,  2606,   590,   785,   851,   852,   853,  1212,
    1444,  1733,  2357,  2358,  2359,  2363,  1734,  1735,   720,  1451,
    2009,   721,   856,  1035,  1034,  1215,  1216,  1217,  1448,  1741,
    1037,  1743,  2206,  1159,  1389,  1390,  2326,  2450,  1391,  1392,
    1952,  1807,  1808,  2056,  1393,   788,   909,   910,  1109,  1223,
    1224,  1772,  1455,  1511,  1752,  1753,  1749,  2011,  2210,  2393,
    2394,  2395,  1453,   911,  1110,  1230,  1467,  1465,   912,  1111,
    1237,  1789,   913,  1112,  1241,  1242,  1791,   914,  1113,  1250,
    1251,  1521,  1844,  2077,  2078,  2079,  2047,  1128,  2238,  2232,
    2401,  1476,   915,  1114,  1253,   916,  1115,  1256,  1483,   917,
    1116,  1259,  1488,   918,   919,   920,  1117,  1268,  1497,  1500,
     921,  1118,  1271,  1272,  1505,  1273,  1509,  1836,  2072,  2260,
    1818,  1833,  1834,  1503,   922,  1119,  1278,  1517,   923,  1120,
    1281,   924,  1121,  1284,  1285,  1286,  1526,  1527,  1528,  1854,
    1529,  1849,  1850,  2083,  1523,   925,  1122,  1295,  1129,   926,
    1123,  1296,   927,  1124,  1299,   928,  1125,  1302,  1861,   929,
     930,  1130,  1865,  2090,   931,  1131,  1307,  1570,  1874,  2093,
    2277,  2278,  2279,  2280,   932,  1132,  1309,   933,  1133,  1311,
    1312,  1576,  1577,  1886,  1578,  1579,  2104,  2105,  1883,  1884,
    1885,  2098,  2286,  2423,   934,  1134,   935,  1135,  1321,   936,
    1136,  1323,  1586,   937,  1138,  1329,  1330,  1590,  2119,   938,
    1139,  1333,  1594,  2122,  1595,  1334,  1335,  1336,  1900,  1902,
    1903,   939,  1140,  1343,  1915,  2301,  2434,  2508,  1602,   940,
     941,  1141,  1345,   942,   943,  1142,  1348,  1609,   944,  1143,
    1350,  1916,  1612,   945,   946,  1144,  1353,  1618,  1919,  2136,
    2137,  1616,   947,  1145,  1358,   159,  1630,  1359,  1360,  1938,
    1939,  1361,  1362,  1363,  1364,  1365,  1366,   948,  1146,  1316,
    2290,  1580,  2428,  1888,  2107,  2426,  2504,   949,  1147,  1374,
    1941,  1638,  2152,  2153,  2154,  1634,   950,  1376,  1640,  2317,
    1153,   951,  1154,  1378,  1379,  1380,  2164,  1644,   952,  1155,
    1383,  1649,   953,  1157,   954,  1158,  1385,   955,  1160,  1394,
     956,  1161,  1396,  1658,   957,  1162,  1398,  1662,  2172,  2173,
    1957,  2175,  2331,  2455,  2333,  1660,  2451,  2518,  2559,  2560,
    2561,  2736,  2562,  2690,  2691,  2714,  2563,  2653,  2564,  2565,
    2566,   958,  1163,  1400,  1607,  1958,  1908,  2336,  1664,  2019,
    2020,  2021,  2216,  2217,  1506,  1507,  1812,  2036,  2037,  2224,
    2321,  2322,  2445,  2128,  2509,  2129,  2305,  2337,  2338,  2339,
    1805,  1806,  2055,  2253,  1305,  1306,  1288,  1289,  1556,  1557,
    1558,  1559,  1560,  1561,  1562,   991,  1189,  1410,   993,   994,
     995,   996,  1231,  1260,  1491,  1346,  1354,   395,   396,  1029,
    1367,  1368,  1567,  1337,  1244,  1245,   541,   481,   301,   694,
     695,   482,    98,   153,  1297,  1262,  1232,  1468,  2660,  1417,
     998,  1777,  2031,  2106,  2227,  1254,  1338,  1745,  2542,  2254,
    1910,  1746,  1317,  1371,  1234,  1000,  1263,  1264,   742,   795,
     796,  1747,   271,  2640,   179,  1235,   768,   769,  1236,  1003,
    1004,  1005,  1197,  1170,  1425,  1421,  1414,   501,  2174,   537,
    1471,  1787,  2042,  1605,  2156,   282,  1494,  1801,  2248,   805,
    1108,  2181,  2488,   606,   339,   687,  1457,   423,  1218,   202,
     115,   393,  2416,   337,  1987,   352,  1027,   778,  2112,  2623,
    2498,  2239,    96,   214,   414,   747,  2463,  1982,   774,   402,
    1996,  2626,   809,  1405,   218,   488,  2710,   168,   390,   738,
     102,   726,   683,   842,  2650,  2162,   350,  1569,   965,  1303,
     407,   736,  1203,  1342,   391,  1754,  1774,  1492,  2688,  2233,
     184,   698,  2349,   715,   347,   598,  1485,  2407,  2160,   538,
     203,  2525,  2531,  2673,  2674,  2675,  2676,  2677,  1701
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2247
static const yytype_int16 yypact[] =
{
   -2247,   248,   486, -2247,  -199,   269, -2247,   486, -2247, -2247,
     575, -2247, -2247,   575,   575,   644,   644, -2247,   639, -2247,
     879,   628,   867, -2247, -2247,  1140,  1140,   565,   885, -2247,
   -2247,   -17,   575,   644, -2247, -2247,  1063,   932, -2247, -2247,
     941,  1303,   644, -2247, -2247, -2247,   628,   970, -2247, -2247,
     -34, -2247,   898,   898,  1007,  1033,  1241,  1241,  1241,  1092,
     898,  1085,  1090,  1095,  1241,  1113,  1118,  1443, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247,   993, -2247, -2247, -2247, -2247,
    1358, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
    1405,  1135,   -17, -2247, -2247,  1149,   314, -2247, -2247,  1241,
    1241, -2247,  1241,  1102,  1545,  1102,  1163,  1241,  1241, -2247,
   -2247,  1102, -2247, -2247, -2247,  1122,   936,  1179, -2247, -2247,
    1129, -2247,  1186, -2247, -2247, -2247, -2247,   390, -2247, -2247,
   -2247,  1310, -2247,  1241,  1124,  1102,  1396,   551, -2247, -2247,
   -2247, -2247, -2247,  1401,  1187,   449,  1461, -2247,  1154, -2247,
    1122, -2247,    63, -2247, -2247, -2247, -2247, -2247,   547,   -95,
    1241,    22, -2247, -2247, -2247,   545, -2247, -2247, -2247,   802,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247,  1124, -2247,  1219,
   -2247,  -143, -2247, -2247,  1102, -2247,  1263, -2247,  1266,  1254,
    1606,  1241, -2247, -2247, -2247,   415, -2247, -2247, -2247, -2247,
   -2247,   927,  1613,  1241,    62, -2247,   172, -2247, -2247,   144,
   -2247, -2247, -2247, -2247,  1419,   -95, -2247,  1447,   898,   898,
   -2247,   547,  1226,    71,   612, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,   647, -2247,
      85, -2247,  1124, -2247, -2247,  1357, -2247, -2247, -2247,  1241,
    1284,  1433, -2247, -2247, -2247, -2247,   707,  1241,  1184,  1463,
     503, -2247,  1668,   515,  1250, -2247, -2247,  1255,  1600, -2247,
    1419, -2247,   898, -2247, -2247, -2247, -2247,   547, -2247,  1259,
    1402, -2247,   898, -2247,   999, -2247,   112, -2247, -2247, -2247,
   -2247, -2247,   647, -2247,  1458,  1433, -2247, -2247, -2247,   326,
   -2247, -2247, -2247,  1470, -2247, -2247, -2247, -2247, -2247,  1445,
   -2247, -2247, -2247, -2247, -2247,  1271, -2247, -2247, -2247,  1696,
    1626,  1276, -2247, -2247,   647, -2247, -2247,     7, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247,  1297, -2247,  1554,
    1612,  1291, -2247,  1729, -2247, -2247, -2247, -2247,  2315, -2247,
    1667, -2247,  1248,  1302,  1363, -2247,   647,  1488,  1409,   726,
    1360, -2247,  1365,  1241,  1714,   107,   -96,   675, -2247,  1268,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,  1347,
   -2247,  1511, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
    1736,  1241, -2247,  1248, -2247,  1248, -2247, -2247,  1323,     8,
   -2247, -2247,  1241, -2247,  1541, -2247, -2247,  1018, -2247, -2247,
     773,  1241,  1241, -2247,  1241,  1241, -2247,  1696, -2247,   120,
    1241,  1488, -2247,  1375,  1273,  1248, -2247,  1449, -2247, -2247,
   -2247, -2247,  1274, -2247,  1275,    65,   128,  1241, -2247, -2247,
    1307, -2247, -2247,   -99,  1366,  1102,  1102, -2247,  1467,  1467,
    1480, -2247,  1102,  1241, -2247, -2247, -2247,  1433, -2247,  1397,
    1531, -2247, -2247,  1340, -2247, -2247, -2247, -2247, -2247,  1102,
   -2247, -2247,   426,   426,  1788,   426, -2247, -2247,   426,   435,
   -2247, -2247, -2247, -2247, -2247,   837, -2247, -2247, -2247, -2247,
   -2247, -2247,   101, -2247,  1342,  1403,  1542,   660,  1346,  6473,
   -2247,  1305, -2247, -2247,   -26, -2247, -2247, -2247, -2247,  1271,
   -2247, -2247, -2247, -2247, -2247,  1241,  1102,  1308, -2247,  1308,
   -2247, -2247,  1359,  1420,  1450, -2247,  1361, -2247,  1367, -2247,
    1733, -2247,  1734, -2247,  1006, -2247,  1697,  1389, -2247, -2247,
    1102,  1102, -2247,   -94, -2247, -2247,  1275, -2247,  1371,  1430,
    1437, -2247, -2247, -2247,    40,  1667,  1241,  1173,  1173,  1241,
      10,  1488,  1241,  1807, -2247,  1523, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247,   898,  1100, -2247,  1328,
   -2247,  1102, -2247,  1526, -2247, -2247,  1275, -2247,  1379,  1441,
   -2247,  6685,   751,  1634,  1433,  1332,  1241,  1807,  1333,  -142,
     -99,  1433,  1339,  1241, -2247, -2247, -2247,   -57,   898, -2247,
   -2247, -2247,    73,   733, -2247,  1275, -2247,  1390,   985,    -6,
   -2247, -2247,  -190,   384,   520,   656,   691,  1341, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247,  1457, -2247,   685, -2247, -2247,
   -2247, -2247,  1102,  1102,  1614, -2247, -2247, -2247,   549, -2247,
   -2247, -2247,  1241,   161, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247,  1138,  -106, -2247,  1345, -2247,   307, -2247,  1399,
   -2247, -2247, -2247, -2247,  1333, -2247, -2247, -2247, -2247,  1595,
      74,  1635,  1348,  1241, -2247, -2247,  1241, -2247,  1227, -2247,
   -2247, -2247,  1257, -2247, -2247, -2247, -2247, -2247, -2247,  1735,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247,  1344, -2247, -2247,  1806,
    1411, -2247,  1398,  1416, -2247, -2247, -2247, -2247,  7161,   632,
    1838, -2247,  1464,  1464, -2247,  1227,  1560, -2247,  1414,  1414,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,  1418, -2247,
    1433,   104, -2247, -2247, -2247,  1433, -2247, -2247,  1459, -2247,
     483,   483, -2247, -2247,  1519,  1368,    20,  2998,  3515, -2247,
    1635,  1674,  1433,  1424,  7351,  1412, -2247,  1102, -2247,   632,
   -2247,  1429,  1620, -2247,  1714, -2247, -2247, -2247, -2247,  1414,
    1425, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247,  1227, -2247, -2247, -2247, -2247,    27,
    1443, -2247,   820, -2247, -2247, -2247, -2247,  1381, -2247,  6215,
   -2247, -2247,  1368,  1428, -2247, -2247,  1500,  3828, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247,    32, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247,  1479, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,   561,
   -2247, -2247,  1549, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
    1384,  1433,  1411, -2247, -2247,  1768, -2247, -2247, -2247, -2247,
   -2247,  1422,  7794,   551,   551,  1427,  1431,  1432, -2247,  1434,
     551, -2247, -2247, -2247,  7484,  7351,  7484,  1436, -2247,  1422,
   -2247,   228,  1010,   917, -2247,  1719, -2247, -2247, -2247, -2247,
   -2247,  1418, -2247,  1438,  1439,  1440,  7351, -2247, -2247,   468,
   -2247,   632, -2247, -2247, -2247, -2247, -2247,   -99,   -99, -2247,
   -2247, -2247, -2247,  1705, -2247, -2247,  1399,  1433, -2247, -2247,
    1446, -2247,  1448, -2247,    55,    55,  1387,  1452, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,  -187,
    4560,  7351,   489,   527,   528,  1248,   699,   662,  5546,  5739,
    1642,   921,   894,   699,  1102,  1462, -2247, -2247,  5739, -2247,
   -2247,   699,  1381,  2036,  1102,  4596,  5739, -2247,   951,  2779,
    1248,  1102,  1248,  1102,    60,    51,  1102,  1248, -2247, -2247,
   -2247, -2247, -2247, -2247,  4827,  4863, -2247, -2247,  1381,    67,
    1102,  1248,  1102,  1102, -2247, -2247,  1684,  1598, -2247,  7053,
   -2247, -2247,  1418, -2247,  1407,  1408,  7351,  7351,  7351,  7794,
    1410, -2247,   931, -2247,  7794, -2247, -2247, -2247, -2247,  7351,
    7202,  7351,  7351,  7351,  7351,  7351,  7351, -2247,  7794,  7351,
    1010,  1507, -2247,  1460, -2247, -2247, -2247,  1888,  1443, -2247,
     215, -2247, -2247, -2247, -2247,   279, -2247,  -193,   437,   287,
   -2247, -2247, -2247,  1791,   805,  1723,  1560,  1102,  7794, -2247,
    1793, -2247,  4932, -2247, -2247, -2247, -2247, -2247,   174,   253,
   -2247,   489, -2247,  1471, -2247,   551, -2247, -2247, -2247, -2247,
    1794,  4131, -2247,   528, -2247, -2247,  1248,  1025,  1560,  1795,
     419, -2247,  1543, -2247, -2247,  1398,  1418,  1248,  1797,  1409,
    1067,  1798,  5191, -2247,  5214,    49,  1210,  1262,  1796,    96,
    1442, -2247, -2247, -2247,  1792,    56, -2247, -2247, -2247,  4215,
   -2247, -2247,  1833,    32, -2247, -2247, -2247,   699, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247,  1492, -2247, -2247,   633,  1381,
   -2247, -2247,    18, -2247, -2247, -2247, -2247, -2247, -2247,  1473,
    5739, -2247,  1491,  1800,  1894, -2247, -2247, -2247, -2247,   951,
    1540, -2247,  1499, -2247,  6304,   -22,   358,  1503,  1501, -2247,
     732, -2247,  1509,  1813,   904, -2247,  1763, -2247,  1820,  1409,
    1821,  1763,  1102,  1819,  1466, -2247,   930, -2247, -2247, -2247,
   -2247, -2247, -2247,  1698, -2247,   699, -2247,   391, -2247,   548,
    1941, -2247,    43, -2247,  1826,  1107,   -52,  1926,  1827,  3553,
   -2247, -2247,  1102,  1828,  5407,  1381, -2247, -2247,   509, -2247,
   -2247, -2247, -2247,  3295, -2247,  1781, -2247,  1267,  1831,  1870,
    1834,  1763, -2247, -2247, -2247,  1102,  1765,   768, -2247,   276,
     889, -2247, -2247,   237,  1537,  1539,  1548,   330, -2247,  1418,
   -2247,  1550, -2247, -2247,   365,  1551,   889, -2247,   984,   917,
     917, -2247, -2247, -2247,  1072,  1552,   387,  1547,  1241, -2247,
     -99,  1876,  1538,    34,  6814, -2247,  1241,  1585,  1691, -2247,
   -2247,  1895, -2247, -2247,   397,  1809, -2247,   642,  1235,   159,
    1558, -2247,  1418, -2247, -2247, -2247,  5855,  1805, -2247,  1790,
   -2247,  1638, -2247,  1677,  1762, -2247, -2247, -2247,  1442, -2247,
    1025, -2247, -2247, -2247,   -16,   -23,  1102, -2247, -2247, -2247,
   -2247, -2247,  7351,  1747, -2247,  1412, -2247,  1248, -2247, -2247,
   -2247,  1799, -2247, -2247, -2247,  5739, -2247,  1725,   129,  1722,
    1789,  1536,  1860,  1860,  1860,  1860, -2247, -2247,  5739,  5855,
   -2247, -2247, -2247, -2247,   921,   196, -2247,  1527, -2247,  1528,
   -2247, -2247, -2247, -2247,  1462, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247,  3899, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247,    -9, -2247,  1905,
    1394,  1859, -2247,   930,   149, -2247, -2247,  1669, -2247, -2247,
      78,  7351, -2247,  1591,   699, -2247, -2247,  5855,  1540,  1268,
    1248, -2247, -2247, -2247, -2247, -2247,  1873,  1102,   489, -2247,
     231, -2247, -2247, -2247, -2247,  1409,  2036, -2247, -2247, -2247,
    1815, -2247, -2247,   606,  1914, -2247, -2247,  1102,  1914,  1599,
   -2247,  1418, -2247, -2247,   600,   547, -2247, -2247,  1845, -2247,
    1998,   447,   164, -2247, -2247, -2247,  1241, -2247,   494,  5739,
   -2247,   631,  5523, -2247, -2247,  1102, -2247,  1853, -2247, -2247,
    5855, -2247,  1433, -2247, -2247,   930, -2247, -2247, -2247, -2247,
   -2247,  1926,  1822, -2247, -2247,   231,  1765, -2247,  1926, -2247,
   -2247, -2247,  1541, -2247,  1102,  1438,  1438,  1438,  7794, -2247,
     481,  1438, -2247,  7335,  1438,  1438, -2247,   632, -2247,  1598,
   -2247, -2247,  1241,  1241,  1807,    13, -2247, -2247, -2247, -2247,
    1849,  1878, -2247,  1241, -2247,   530, -2247, -2247, -2247,  1214,
    1241,  2036, -2247, -2247, -2247,  1756, -2247,  1433, -2247,  2001,
   -2247, -2247, -2247,  1102, -2247, -2247,  1102, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247,  1855,  1756,   720,  1241,
   -2247,  1553,  1607, -2247, -2247, -2247, -2247, -2247, -2247,  1801,
    1756,  1756,   324,  1810,  1756, -2247,  1373, -2247, -2247, -2247,
    1555,  1557, -2247,   930,  1373,  1829,  1639,  1769, -2247, -2247,
    1787, -2247, -2247, -2247, -2247, -2247, -2247,   563, -2247,  1102,
    1560,   641, -2247,     5,   195,   699,  1622,  1638,   699, -2247,
    1623,   489, -2247,    32, -2247, -2247,  1692,  1711, -2247,  -182,
    1241, -2247, -2247, -2247, -2247, -2247,  1780, -2247, -2247, -2247,
    2047, -2247, -2247, -2247, -2247, -2247, -2247, -2247,  1860,  1241,
   -2247,   452, -2247, -2247,  1426,  1241, -2247, -2247, -2247, -2247,
     -44,  1241, -2247,  1546, -2247,  1382,  1801, -2247, -2247, -2247,
   -2247,  1880,   641,  1881,   123, -2247, -2247, -2247, -2247,  2064,
   -2247,  1640,   138, -2247, -2247,   196, -2247, -2247, -2247, -2247,
    1598, -2247, -2247, -2247,  1957,  1947,  1462, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247,  1721,  1462, -2247,  1643, -2247,  2040,
   -2247, -2247, -2247,   825, -2247,   930,  1155, -2247,    84,   768,
     -30,   699,   699,   641,  1891,  1248,   120,   901,  1949, -2247,
   -2247, -2247,  2087, -2247,  1901, -2247, -2247, -2247, -2247,  1815,
   -2247, -2247, -2247, -2247,  1102,  1970,  1799,   912, -2247,  1602,
   -2247,  1603,   930,  1029, -2247,   563, -2247, -2247, -2247,  5739,
     547,   547,   547,   547,   547,   547,   547,   547,   447, -2247,
     -37,  1799,   -32, -2247,  1685,  1685, -2247, -2247,   430,  1102,
     641,  1899,  1659, -2247,  1665,  2106,  1102,   454,   606,  2110,
   -2247,  1611,  1241, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247,  1053, -2247, -2247, -2247,  1102,   528, -2247, -2247,
    1241,  1807,  1864,  1368, -2247, -2247, -2247,  1102,   397, -2247,
   -2247, -2247, -2247,   397, -2247, -2247,  1241,  1424,  1241, -2247,
   -2247, -2247,  1241, -2247, -2247, -2247,   147, -2247, -2247, -2247,
    1241,  1615,   397,   397, -2247, -2247,   397, -2247, -2247, -2247,
    1295, -2247, -2247, -2247,  1373, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247,  1543,   159, -2247, -2247,  1824,   142,  1920,
     641,   388, -2247, -2247, -2247, -2247, -2247,     3,    86, -2247,
   -2247, -2247,   609, -2247, -2247, -2247, -2247, -2247, -2247,   397,
   -2247, -2247, -2247, -2247,   397,   580,   580,   397, -2247, -2247,
   -2247, -2247, -2247,  1619,   699, -2247,   699,  4491, -2247,   593,
      94,   196, -2247, -2247, -2247,  2064,  1102, -2247, -2247, -2247,
   -2247,  1625,   680,   240,  1627,   388,   930, -2247, -2247,  2078,
   -2247, -2247, -2247, -2247,  1155, -2247,  1940, -2247,  1241,  1541,
    1816, -2247, -2247,   699, -2247,   699,   901, -2247, -2247, -2247,
    1071, -2247, -2247,  1102,  5739,  1047, -2247, -2247, -2247,  1839,
   -2247, -2247,  1875, -2247, -2247, -2247, -2247,  1603, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
     213, -2247,  1102, -2247, -2247, -2247,   672, -2247, -2247, -2247,
    7351, -2247,  5739,  5739,  1671,  1812,  1543, -2247,   699, -2247,
     388, -2247,  1818, -2247,   930, -2247,  2024,  1701, -2247,   948,
   -2247,   464, -2247,  1611, -2247,  1102, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247,  1350,   -67, -2247,  1102, -2247, -2247, -2247,
     786, -2247,   528,   786, -2247, -2247, -2247,    70,  2097,  6887,
    1373, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
    1732,  1943, -2247, -2247, -2247,  1944, -2247, -2247, -2247, -2247,
   -2247, -2247,  1856, -2247,  1560, -2247, -2247, -2247, -2247,  1102,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
    2783, -2247, -2247, -2247,  1376, -2247, -2247, -2247, -2247,  1789,
   -2247,   641,  1785,   641,  1802, -2247, -2247,  5739, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247,   680, -2247,  2049,
   -2247,  1462, -2247, -2247, -2247,   388,  1249, -2247, -2247,  1249,
    -104,  1102, -2247, -2247,   641, -2247, -2247,  1771, -2247,  2101,
    1892,  1918,   586, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247,   889, -2247, -2247, -2247,
   -2247, -2247,  1862,  1241,  1732,   641,  1661, -2247,  2106, -2247,
    1635,  2061,  1635,  1671, -2247, -2247, -2247, -2247,  1871, -2247,
   -2247, -2247, -2247,  1380, -2247,  1102,  1015, -2247, -2247,  1864,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,   397,
   -2247, -2247, -2247,   397,   -15, -2247, -2247,  1241, -2247, -2247,
   -2247, -2247,  1241, -2247, -2247, -2247, -2247, -2247,    17, -2247,
   -2247,  2107,  1754, -2247, -2247,   -21, -2247,  1241, -2247,  2159,
   -2247, -2247, -2247,  6887, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247,  1102, -2247, -2247, -2247, -2247,  1789, -2247,
     699, -2247,   699, -2247, -2247, -2247,  2121,  2060,  1249,  1249,
   -2247,  1713,  1713, -2247,  1835,  1248,   -18, -2247,  1102, -2247,
   -2247,  5739, -2247,  1241,   677,  1912,  1913, -2247,  1915, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247,  1102, -2247, -2247, -2247,
   -2247,  1724, -2247,  1102,  1635, -2247,  1102, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247,  1036,  1241,  1241,  1415, -2247, -2247,
   -2247, -2247, -2247, -2247,  1573, -2247, -2247, -2247,  2066,   397,
     397, -2247,  1241,  1241,   580,   580,   397, -2247,   590, -2247,
   -2247, -2247,  1732,  1732,  5739, -2247,  1249, -2247,  5739,  5739,
    1241,  1248,  1248,  1841, -2247, -2247,  1699,  1102, -2247, -2247,
    1839, -2247, -2247, -2247, -2247, -2247, -2247, -2247,   841, -2247,
   -2247,  1102, -2247, -2247, -2247,  1241,  1864,  1864, -2247,  1971,
    1241,  1241, -2247,  1209,  1726, -2247, -2247,   528,   397, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
     489,  1248,  1241, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247,  1289, -2247, -2247, -2247, -2247, -2247,  1843,  2077, -2247,
    1864, -2247, -2247, -2247,  1864,  1864,  1965,  1217,  1807,  1978,
    1433,  1688,  1241,  1560, -2247,  1241,  1241,  1102, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247,   -36, -2247,   -33, -2247, -2247, -2247,  1217,  1807, -2247,
   -2247, -2247, -2247,   489, -2247,  1825,  1775,    50,  1598, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247,   161, -2247,  1241,  1411,
   -2247,  7768,  7768,  1239,  2069,  2000, -2247,  1433,   -36, -2247,
   -2247,  1433,   -33, -2247, -2247,   161, -2247, -2247,  1102, -2247,
     905, -2247, -2247, -2247,    75, -2247,   -36,  1424, -2247,  1543,
    7633, -2247, -2247,  1070,  1096, -2247, -2247,  1147, -2247, -2247,
   -2247, -2247,   -86,   -86, -2247, -2247, -2247, -2247, -2247,  7768,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,  1865,   848,
      75, -2247, -2247, -2247,  1768, -2247,  1598, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247,  1883, -2247,  1883, -2247,  2151, -2247,
    1598, -2247, -2247,  1897,  1102, -2247,  1778,   -77,  1884, -2247,
   -2247,  7768,     0, -2247, -2247,  1433, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247,  1248, -2247
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2247, -2247, -2247, -2247, -2247,  2200, -2247, -2247, -2247,   212,
   -2247,  2163, -2247,  2118, -2247, -2247,  1435, -2247, -2247, -2247,
    1444, -2247, -2247,  1312,  2185, -2247, -2247,  2086, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,  2016,
     722, -2247, -2247, -2247, -2247, -2247,  2070, -2247, -2247, -2247,
   -2247,  2013, -2247, -2247, -2247, -2247, -2247, -2247,  2145, -2247,
   -2247, -2247, -2247,  2002, -2247, -2247, -2247, -2247,  1983, -2247,
   -2247,  1019, -2247, -2247, -2247, -2247, -2247,  2075, -2247, -2247,
   -2247, -2247,  2050, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247,  1073, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247,  1707, -2247,  1823, -2247,
   -2247, -2247,  1766, -2247, -2247, -2247, -2247,   335, -2247, -2247,
    1946, -2247, -2247, -2247, -2247, -2247,  1814, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247,  1212, -2247, -2247, -2247,  1465, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247,   595, -2247, -2247,  1744, -2247,  -762,  -833, -2247, -2247,
   -2247,   374, -2247, -2247, -2247, -2247,  -549, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -1422,   799,  1496,   512,   540, -1415,
   -2247, -2247, -2247,  -952, -2247,  -449, -2247, -2247,   844, -2247,
     360,   584, -2247,    68, -1413, -2247, -1410, -2247, -1406, -2247,
   -2247,  1453, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247,  -419,  -451, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -1272, -2247,
    -385, -2247, -2247, -2247, -2247, -2247, -2247, -2247,  1406, -2247,
   -2247, -2247,    58,    59, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247,  1224,   223, -2247,   185, -2247,
   -2247, -2247, -2247, -1844, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247,  -602, -2247, -2247,  -703, -2247,  1478, -2247, -2247, -2247,
   -2247, -2247, -2247,  1043,   516,   518, -2247,   432, -2247, -2247,
    -122,  -105, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247,   485, -2247, -2247, -2247,  1037, -2247, -2247, -2247, -2247,
   -2247,   796, -2247, -2247,   202, -2247, -2247, -1283, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,   800, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247,   776, -2247, -2247, -2247, -2247,
   -2247,    23, -1778, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247,   759, -2247, -2247,   757, -2247,
   -2247,   431,   204, -2247, -2247, -2247, -2247, -2247,   994, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247,    11,   719, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247,   713, -2247, -2247,   187, -2247,   410,
   -2247, -2247, -1946, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247,   968,   710,   183, -2247,
   -2247, -2247, -2247, -2247, -2247, -1435,   969, -2247, -2247, -2247,
     181, -2247, -2247, -2247,   396, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247,   348, -2247, -2247, -2247, -2247, -2247, -2247,   692,   176,
   -2247, -2247, -2247, -2247, -2247,  -128, -2247, -2247, -2247, -2247,
     373, -2247, -2247, -2247,   952, -2247,   949, -2247, -2247,  1170,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,   154,
   -2247, -2247, -2247, -2247, -2247,   942,   363, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,    -4,
   -2247,   370, -2247, -2247, -2247, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247,  -368, -2247, -2247, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247,  -150, -2247,   661, -2247, -2247, -1568,
   -2247, -2247, -2247, -2247, -1337, -2247, -2247, -1692, -2247, -2247,
      -5, -2247, -2247, -2247, -2247,  -102, -2235, -2247, -2247,    -8,
   -1858, -2247, -2247, -1980, -1555, -1072, -1473, -2247, -2247,   775,
   -1191,   173,   177,   179,   180,  -918,   110,  -761,   455,   369,
   -2247,   664,  -651, -1358, -1088,    48,   987, -1563,  -389,  -445,
   -2247, -1316, -2247, -1051, -1851,   863,  -526,   -92,  2043, -2247,
    1651,  -555,    41,  2195, -1083, -1067,  -891,  -845, -2247, -1086,
   -1201, -2247,   424, -1297, -1921, -1101,  1104, -1238, -2247, -2247,
     640, -1120, -2247,   319,    38,  -605, -2247, -2247,  -103, -1202,
    -771,  -111,  2089, -1827,  2114,  -672,  1230,  -515,  -580, -2247,
   -2247, -2247,  -107,  1374, -2247, -2247,   333, -2247, -2247, -2247,
   -2247, -2247, -2247, -2247, -2247, -2247, -1979, -2247, -2247,  1604,
   -2247, -2247,  -197,  -594,  1945, -2247, -1187, -2247, -1309,  -201,
    -640,   980, -2247,  1851, -2247, -1441, -2247,  -778, -2247, -2247,
     -56, -2247,    31,  -656,  -365, -2247, -2247, -2247, -2247,  -232,
    -238,  -242, -1205, -1545,  2152,  1919, -2247, -2247,  -332, -2247,
   -2247,  1142, -2247, -2247, -2247,   425, -2247,   278, -1947, -1492,
   -2247, -2247, -2247,  -172,   484, -1404, -2246, -2247, -2247, -2247,
    -272, -2247, -2247,  1657, -2247,  1830, -2247, -2247, -2247,   798,
   -2247, -1708,  -253, -2247, -2247, -2247, -2247, -2247, -2247
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1861
static const yytype_int16 yytable[] =
{
     139,   415,   139,   692,   427,   160,   428,   749,   139,   245,
    1166,   138,   960,   141,   581,   767,  1031,  1276,   787,   147,
    1440,  1459,  1727,   849,  1007,  1370,   404,  1897,  1261,  1729,
     215,  1730,   139,   992,  1731,  1889,   427,   268,  1732,   437,
    1737,  1901,  1857,   180,  1797,   699,   464,   741,  1308,  1287,
    2201,  1626,  1851,  1486,  2220,  2068,  1298,  1258,  2130,  1619,
     776,  1243,  1369,  1495,  1298,   345,   463,  -664,  1642,  1352,
    -662,   259,   279,  1524, -1571,  1017,   854,   801,  1298,  1454,
    2065,   246,   708,  2157,  2689,   211,  2257,   103,   104,   105,
     849,  2704,  2234,  1639,    99,   111,  1692,   392,  1424,   535,
    2727,   107,   291,  2484,  1214, -1816,  1860,  2051,  1781,   529,
   -1860,  1573,  1435,   321, -1756,  2478, -1756,  1582,   703,   220,
    1592,  2424,  1222,  1534,  1693,  1694,    42,   801,  2371,   448,
     134,   135,   114,   136,   517,   752, -1794,   216,   143,   144,
     297,   413,  1773,   997,  1976,  1518, -1829,   161,   360,   215,
    2075,  1126,  1479,   832,   832,  2193,   704,   480,  1878,  1846,
    2289,  1842,   836,   411,   169,  2207,   351,   696,   583,  2230,
    1632,  2732,  1214,   264,  2283,  1837,  1838,  1839,  1840,  2204,
    2651,   430,  2268,   211,   327,  2502, -1860,  2324,  2110,   453,
    1243,   219,  1816,   782, -1816, -1572,  2025,   419,    94,  2511,
    1024,  2114,   221,   535,   832,  1356,  -664,  1879, -1577,  -662,
    -664, -1760,  2158,  -662,  1002, -1860,  1442,  1846,   724,  1446,
    2191,   412,   251,  2191,  1182,  2733,  1813,  1274,  2532,  1893,
    1566,  2035,  1469,  2734,   258,  1126,   850, -1860,   722,  1906,
     807,  1566,    94,    43, -1789,  1200,  1795,  1240,     3,  2327,
    2636,  1409, -1860,  2150,   465,    15,   418,  2151,  2167,   274,
     275,  1980,  1981,   757,  1384,  1233,    94,  -664,  1907,   518,
    -662,  1796,    94,  1275,  1279,  2555,  1877,  -512,   697,  1191,
     295,  1436,  1624,  1304,  1192,  2111,  1447,  2608,   299,   725,
    1322,  1324,  1950,   584,  2637,   212,   723,  2641,  1298,  1186,
    2503, -1756,  1566,   850,    43,  -512,  -512,   760,  1186,  1381,
    1233, -1539,  1775,   311,  2235,  2086,   755,   761,  2735,  1016,
     137,  2340,  1357,   314,  1519,     5,  1127,  1880,  1214,   603,
     217,  1240,  2116,   997,   997,   997,  1214,  2418,  2419,  1204,
     139, -1774,   139,   139,   413, -1575,   493,  1186,  2226,   139,
    1238, -1847,  1955,   485,   486,   997,  1695,   756,  1954,  1961,
     491,   280,  2364,   243,  2420,   753,   139,  1171,   519,   507,
     507,   204,   507,  1534,  2091,   507,   514,   485,  1261,  1851,
    2159, -1756,  1851,  2094,   281,  1574,   283,   127,  1404,  1707,
    1881,  1708,  1173,   212,   410,  2236,  2425,   755, -1598,   762,
    1357,  1186,   431,   154,  1002,  1002,  1002,   449,   137,  -664,
    1127, -1794,  -662,   139, -1760,  1413,  1413,  1413,  1549,  -512,
     -35,   137,   424, -1539,   542,  1258,  1002,  2040,  1426,  1428,
     137,  1261,  1593,   436,   260,  1434,  1186,   139,   139,  1387,
    2350,  2066,   443,   444,  1563,   445,   446,  -512,   542,   582,
     705,   452,  1287,  2269,   243,  2084,  2219,  1575,  1186,   837,
     997,  1314,  1205,  1206,  2485,  1814,  2024,  2231,   469,   763,
     794,   450,   187,  2652,  2496,  1583,  1470,   466,   139,   188,
     536,  2058, -1760,   689,   492,  1930,   128,   368,  1696,   582,
     700,   709,  1388,  1931,  1496,  1018,  2069,   139,   137,  1261,
    1776,  1892,   284,  2391,  2539,  2540,   187,   394,   794, -1762,
    2048, -1829, -1789,   188,   764,   346,  1862,  1298,   997,   757,
     855,  1387,  2474,   775,  1387,   997,   997,   997,  2398,    97,
     292,  1002,   467,   243,  1381,  2080,   740,  -512,   997,   997,
     997,   997,   997,   997,   997,   997,   540,  1905,   997,  2237,
     743,   758,   759,  1315,  1258,  1510, -1760,  1566,   137,  1341,
    1525,   261,  1261,   760,   765,   577,   322,   137,  1441,  2409,
     149,  2411,   394,   761,  1388,  2034,  2512,  1388, -1659,  1489,
    2308,  2038,   137,   328,   536,   593,   710,   595,  2099,  1002,
     600,   602,  1967,   604,  1847,  2270,  1002,  1002,  1002,  1420,
     757,  1496,  2429,  1013,  1420,  1848,  1258,  1006,  1851,  1002,
    1002,  1002,  1002,  1002,  1002,  1002,  1002,   609,  1420,  1002,
    1882,  1782,   682,  1461, -1760,  2138,   265,   691,  1187,  1006,
    2068,   757,  2447,  2448,   702,  1191,  1815,  1187, -1760,  1258,
    1192,   755,  2396,  2240,   760,   834, -1760,  1258,  1463,   707,
     243,   255,  1847,   154,   761,   762,  1751,  -669,  1932,   835,
    1810,  2544,  1357,  1848,   840,  -667,   137,  1023,  1549,  -512,
     129,  1341,  1627,  1841,  1843,   760,  1187,   845,   845,  1188,
    2695,   963,   505,   189,  1568,   761,     4,  1310, -1641, -1847,
    1933,   512,  1867,   748,  1008,  1868,  1869,  1261,  1191,  2571,
    2572,  1174,  1175,  1192,  2060,  1258, -1539,  1707,  1180,  1708,
    2694,  1563,  1934,  1386, -1539, -1539,  2261,   189,  2263, -1539,
     154,  2044,  1968,    16,  1802,   763,  1257,  1673,  1269,    18,
    1187,  1799,   -96,  -669,   780,  1357,   762,   781, -1860,   843,
    2046,  -667,  1894,  2619,   305,  1240,   129,  2620,  2621,  2155,
    2198,  1344,  2003,  1349,  1341,  2199,   190,  2294,  1375,  2530,
     757, -1860,    27,   329,   187,  1187,  1935,   762,  2080,   182,
     764,   188,  1397,   130,  2211,  2212,  2644,   684,  2213,   222,
   -1760, -1639,  1989,  1928,  1252, -1860,  2341,  1187, -1760,  2417,
     190,   745,   724,  1944,  1943,  1670,  1449,  1947,  1247,  2284,
    2545,  2546,  2435,  2692,   760,  1951,   763,  2127,  2113, -1860,
    2325,   739,   757,   191,   761,  2644, -1636,  1148,   192,  2030,
     765,  2251,  2436,   330,  1298,  1566,  2252,  1936,     5,  2258,
     226,  2004,   999,   300,  1878,  1454,   154,   763,  1685,  2692,
    1625,   997,  1596,  2061,   757,   757,  2191,   191,  2437,   130,
    1165,   764,   192,   757,  1778,   155,   760,   156,   183,   228,
    1597,  1802,  2501,   727,  1572,  2342,   761,  1480, -1860,   252,
   -1756,  1439, -1756,  2438,  1490,   -96,  2188,  2329,  1498,  1536,
    1537,  1798,   764,  1879,  1671,  1688,   283,   306,   760,   760,
    2241,  2242,  2243, -1860,  1750,   137,   762,   760,   761,   761,
      23,   765,  2266,   229,   137,  1652, -1860,   761,  1804,  1149,
    1744,   757,  1002,   230,   139,   139,  1209,   253,  1538,  1539,
    1945,  1990,  1972,  1937, -1858,  2671,   137,  1856,   724,   227,
     997,   154,   765,   137,  1912,   746,   243,  1501,  1450,  2551,
    1651,   154,   137,  2343,   223,  2255,  2255,   685,   762, -1774,
    1150,  1248,  1969,  1249,  2244,   760,   193,  1870,  1871,  2310,
     243,   137,   416,  1653,    28,   761,   763,  1864,  2304,  2556,
       5,   137,  1201,  1474,  1751,   189,   154,  1744,   253,  1151,
     762,   762,  1872,  1873,   187,  -659,  2262,    24,  2264,   762,
     137,   188,  1898,   361,   117,   232,   137,  1628,  2614,   729,
     243,  1002,   284,  1880,    52,  1446,    33,   712,  2557,  1246,
    2272,   764,  2039,  1265,   228,  1975,  1025,  1610,   763,    39,
    1265,  1300,   999,   999,   999,   362,  1913,  1261,  1265,  2403,
     351,  1319,   997,  1629,   735,   137,  1340, -1085,  1347,  1912,
    1347,  1355,  1372,  1319,   999,  2558,  1566,   762,   190,  1923,
     763,   763,    53,   555,  2035,   137,  2353, -1756,   229,   763,
    1347,   765,  2307,   764,   724,   233,  1881,  2686,   230,   556,
     137,  2687,  1447,  2654,  1152,  2658, -1776,  2568,  2245,  2246,
    1261, -1085,   231,  2247,  2140,  1484,   713,   137,   714,  2439,
      54, -1085,    55,  1290,    56,   764,   764,   137,  1420,   724,
    1979,  2360,    57,  1002,   764,   191,  2334,   137,  1803,   557,
     192,  2588,   243,   765,   525,  2612,  2354,   763,  2589,  1267,
    2591,  2476,  1325,  2592,  -659,  2477,   403,  2593,  -659,  2607,
    1550,  1913,  1551,   833,   441,   731,  1571, -1756,  1246,   243,
     137,   585,   757,  2523,   438,   765,   765,  1225,   137,  1239,
     232,  2717,  1255,  2524,   765,  2711,  1277,  1265,    58,  2737,
     236,   298,   764, -1860,  2100,  2722,    36, -1643,    94,   394,
     733,  1313,  2032, -1085,  2131,   405,  1326,  1339,  2647,  1804,
   -1577,   614, -1756,  1014,  1327,  -659,   760,  2712, -1860,  1603,
     439,  1351,   154,  2464,  1265,   189,   761,   794,  1395,  2132,
    1399,  1613,  2053,  2465,  1641,  1265,   137,   999,  2713,  2057,
     716,  1401,   765,  2101,   999,   999,   999,  1418,  1291,  1292,
     233,  2194,  1418,   234,   235,  2466,   406,   999,   999,   999,
     999,   999,   999,   999,   999,  1293,  1418,   999,    94,  1604,
    2335,  2535,  2536, -1085,   155,   558,   156,  2355,  2541,  1355,
      60,  1665,  2356,   515,   627,  2467,   559,  2421,  2699,  1755,
    1756,  2087,  1265, -1860,  2300,  1460,  1265,  2225,   190,  1328,
     830,   830,   610,  1909,  1707,  1757,  1708,  1758,   762,  2299,
    2573,    40,  2118, -1860,  2700,  1635,  2422, -1860, -1085,  1339,
    1294,  1255,   516,  2662,  2528,    61,  1882,  2487,   831,   831,
    2611,  1757,   139,  1758,   611,  1759,  2701,  1962,  1484, -1860,
     750,   325, -1860,  1667,    52,   236,  2133,  2318,  2318,    48,
    2032,   830,  2492,   719,  2493,   191,  2615,  -659,    26,  2663,
     192,  2567, -1085,  2296, -1860,  2702,   170,   139, -1085,  1760,
    1761,  1762,   751,   344,  1636,    47,  2523,  1637,   763,   831,
    1191,  1319,   316,  2250,    91,  1192,  2524,  2703,  2297,   560,
     561,  2351,    53,  1783,  2255,  2255,  2681,   757,  2543,  2229,
    1193,  1991,  1339,  1992,   562,   400,   563,  1282,  2632,  1194,
     171,   254,  1423,  1481,  2693,    64,    49,  2190,  1283,  1763,
     172,  1764,  1191,   764,  1620,    51,  2102,  1192,  1765,  2316,
      54,  1766,    55,  1866,    56,    97,  1867,   243,   394,  1868,
    1869,   760,    57,   317,   318,   810,  1783,  1896,  2576,  2218,
    1647,   761,  2413,  2229,    93,   470,   471,   472,    67,  2221,
    2659,  2661,   100,  2222,   255,  1682,  2610,   137,  1445,   757,
     101,  1917,  1445,   765,   645,  1191,    13,   118,    21,    22,
    1192,    13,  2249,  1318,   811,   812,   813,   814,   815,  2698,
     564,  2577,  1190,  2578,  1246,  1318,  1942,    46,    58,  1687,
    2528,  1191,   173,    94,  1700,  1736,  1192,  1738,  2708,  2070,
    2071,  1265,  2273,   760,  1783,  1926,  2275,  1767,   106,  1768,
     629,   630,   108,   761,  2579,  1246,  1927,  1924,  2229,  2002,
      68,   114,  1482,   762,  2186,  2529,  1357,   565,   428,   997,
    1415,  1416,  2012,  2013,  1191,  2580,  2016,  2624,  2625,  1192,
    2731,  1265,  2523,  1674,  1683,  2303,   596,  1678,   597,    59,
     999,   243,  2524,  1191,  1680,   594,  2017,   649,  1192,  2018,
     601,  1953,   174,  2581,   109,   473,   508,  1783,   510,   110,
   -1860,   511,  2453,   243,  2456, -1555, -1555, -1555, -1555,   474,
      60,  2664,  1431,  1432,  1433,  2665,  2666,   112,  1964,  1965,
    1966,   139,   113,   763,  1970,   762,   120,  1973,  1974,   122,
    1002,  1819,  1963,  2062,  1820,  2063,  2506,   175,  2214,   124,
    2215,  1821,  1822,   816,   817,   818,   819,   820,   821,   822,
     642,   643,  2347,   126,  2348,    61,  1997,  2667,    62,   137,
     713,  1620,   714,  2229,   140,  2397,   654,   142,   764,   999,
    1656,  2399,  1657,  2668,  2669,  2582,  2103,  2005,  2405,   149,
    2406,  2402,  2461,   162,  2462,  1904,   163,   176,  1823,  1757,
     164,  1758,  2583,   475,  1911,   763,  1429,  1430,  1181,  2547,
    1183,   167,   181,  2548,  2549,  1920,   476,   185,   186,  2345,
     204,   193,   137,  2584,   242,   247,   249,  1940,   765,   248,
     250,  1870,  1871,   257,    63,   269,  2521,  2657,  1265,   273,
     278,  1769,  1265,  1948,  2585,  1265,   294,   296,  1246,   154,
     764,   300,   302,  1620,   303,    64,  1872,  1873,  1512,  1513,
    1514,  1515,  2440,  2586,   307,  2441,  2442,  1824,   309,   308,
     663,  2587,  1504,   312,   326,   313,  1418,   334,  2443,   338,
      65,   999,    66,  1977,  1978,  2120,   333,   428,   336,   340,
     342,  1770,  2458,  2459,  1988,   353,  1825,   349,    67,  1265,
     765,  1993,  1771,   351,  2292,   823,   356,   477,   354,  1911,
   -1554, -1554, -1554, -1554,   392,   394,   397,  1826,   824,   398,
     401,  1999,   403,   408,  2000,   728,   730,   732,   734,   409,
    2006,   187,   420,   421,   243,   422,  2165,   429,   413,   454,
     455,   457,  -347,   459,   487,  2165,  1917,   483,  1265,  1265,
    1265,   490,   495,   494,   502,   509,   521,   523,  2490,   522,
     527,  1620,  2141,  2142,  2143,  2144,  2145,  2146,  2147,  2148,
      68,  1827,   533,   547,   543,   551,   548,  2033,   549,  -360,
     554,   552,   578,   579,  1819,   587,   588,  1820,   589,   605,
     607,  2052,   612,   616,  1821,  1822,   613,   617,   688,   690,
     693,   701,  2516,   737,   718,   735,   744,  1265,   770,   773,
    2059,  1226,   754,   777,   755,   779,  2064,   789,   786,   790,
     792,   797,  2067,   794,   802,  1828,   804,   808,   834,   847,
     961,   841,   964,   139,  1011, -1643,  1012,  1006,  1036,  1015,
    1137,  1823,  1033,  1167,  2187,  1319,  1156,  1169,  1028,  1195,
    1319,  1164,  1176,  1207,  1220,  2205,  1177,  1178,  1280,  1179,
    1211,  1184,  1213,  1196,  1198,  1199,  1221,  1402,  1404,  1319,
    1319,  1301,  1437,  1319,  1411,  1412,  1438,  1422,  1439,  1458,
    1473,   137,  1452,  1620,  1620,  1464,  1829,  1475,   966,  1487,
    1522,  1493,  1499,  1516,  1502,  1564,  1568,  1265,  1581,  1830,
    1584,  1585,  1520,  1587,  2120,   967,  1589, -1557,  1598,  1599,
    1824,  1600,  2126,  2302,  2256,  2256,  1319,  1601,  1831,  1606,
    1620,  1319,  1319,  1319,  1319,  1608,  1615,  1611,  1617,  1357,
    2655,  1265,  1631,  1265,  1633,  1214,  1643,  1655,  1648,  1825,
     997,   997,  1659,  1661,  2627,  1668,  1663,  2166,  1675,  2684,
    1676,  1689,  1691,  2185,  2176,  2176,  1686,  1739,  1925,  1677,
    1826,  1679,  1681,  1684,  1740,  1742,  1748,  1779,  1785,   997,
    1265,  2189,  1265,  1786,  2646,  1255,  1788,  1790,  1240,  1800,
    1811,  1817,  1832,  1835,  1001,  2197,  1504,  2200,   997,  2202,
    1804,  1852,  1855,  2203,  1863,  1876,  1574,   968,   969,   970,
    1891,  2208,  1899,  1914,  1918,   755,   971,  1929,  1922,  1949,
    1956,  1002,  1002,  1984,  1827,  1985,  1995,   757,  1998,  2001,
    2007,  2008,  1750,  2029,  2027,  1265,  2026,  2022,  2023,  2028,
     997,  2041,  2045,  2010,  2049,  2050,  2054,  1454,  1319,  2228,
    1002,  2081,   139,  2074,  2076,  2082,  2088,  2089,  2092,  2096,
    1228,  2121,  2095,   542,  2115,  2123,   973,  2124,   974,  1002,
    2127,   760,  2168,   975,   976,   977,  2134,  2135,  1828,   978,
    2161,   761,   428,  2169,  2170,  2171,  1229,  2180,  2182,   966,
    2191,  2209,  2223, -1576,  2274,  2259,  2276,  2285,  2282,  2288,
    2304,  2293,  2328,  2228,  1620,  2320,   967,  2306,  2330,  2291,
    2332,  1002,  1620,  2323,  2365,  2035, -1532, -1574,  2410,   979,
    2431,  2400,  2415,  2430,  2432,  2433,  2449,  2454,  1265,  2444,
    1265,  1904,   428,  2335,  2482,  2412,  2483,  2487,   980,  1829,
    2494,  2495,  2497,  2500,  2513,  2514,  2534,  2515,  2519,  2552,
    2609,  2573,  1830,  2553,  2617,  2618,  2622,  2628,   139,  2678,
    2311,  1265,  2630,   762,  2648,  2649,  2679,  2718,   999,  2427,
    2721,  1831,  1172,  2709,  2723,  2725,  2730,    17,  2228,    92,
     125,    38,  1620,   166,  1001,  1001,  1001,   256,   209,   266,
     119,   290,  1265,   277,   981,   210,   545,   241,   968,   969,
     970,  2117,   323,   442,  2352,   504,  1001,   971,  1208,   456,
    1255,   526,   139,  1728,   798,  2716,   846,  1666,   757,  2109,
    1960,  2344,  1010,   582,  2707,  2720,  1319,  2683,  1032,  1219,
    1319,  2361,  2362,   763,  2267,  1832,   959,  1456,  2073,  2015,
    2014,  2489,  2043,  2481,  1793,   982,   983,  2404,  1472,  2265,
    1794,  1809,  2408,  1845,  1853,  2271,  2085,  1565,  2414,  1875,
    1887,  2287,   760,  2097,   975,   976,   977,  1588,  1895,  2295,
     978,  1926,   761,  1591,  2298,  2125,  2179,  1265,   764,  1265,
    1921,  2149,  1927,  2309,  1623,  1622,  1373,  2319,   987,   357,
    2177,  1646,  2715,  2228,  2452,  2505,  1959,  2178,  2457,  2312,
    2460,  1859,  2510,  2313,   358,  2314,  2315,  1792,   988,  1614,
     979,  1001,   332,   989,   359,   772,  1266,   213,   428,  2139,
     990,  1994,   137,  1266,  2446,  1478,   293,   806,   765,   310,
     539,  1266,   447,  1185,  2616,  2645,  2499,   272,   489,   783,
    2163,  2281,  2108,  2256,  2256,  1266,  1319,  1319,  1890,   360,
    2672,  1319,  1319,  1319,   762,  1319,     0,     0,   599,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2479,  1001,
       0,     0,     0,  2480,     0,     0,  1001,  1001,  1001,  1419,
       0,     0,     0,     0,  1419,   981,     0,     0,  2486,  1001,
    1001,  1001,  1001,  1001,  1001,  1001,  1001,     0,  1419,  1001,
       0,     0,     0,     0,     0,  1319,     0,     0,     0,     0,
       0,  2491,     0,     0,     0,     0,     0,  1246,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,  1462,     0,
       0,     0,     0,     0,  2507,     0,   982,   983,     0,  2629,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2517,     0,     0,     0,     0,     0,
    1266,  2520,     0,     0,  2522,     0,  2526,  2527,     0,   764,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   987,
    1246,     0,     0,  2537,  2538,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2680,  1266,     0,   988,
    2682,  2550,     0,     0,   989,   361,     0,     0,  1266,     0,
       0,   990,     0,   137,     0,  2554,     0,     0,     0,   765,
       0,  1246,     0,     0,     0,     0,  2570,     0,     0,  2569,
       0,  2574,  2575,     0,     0,     0,     0,   362,     0,     0,
       0,     0,     0,     0,     0,  1255,     0,  -233,     0,     0,
       0,     0,     0,  2613,     0,     0,  1621,  1246,     0,     0,
       0,     0,     0,     0,     0,  1266,     0,     0,     0,  1266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2724,     0,  2631,  2738,     0,  2633,  2634,     0,     0,
       0,     0,     0,     0,     0,  2635,     0,     0,     0,     0,
       0,   363,     0,     0,     0,     0,   364,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2656,
       0,     0,     0,     0,     0,     0,     0,     0,   365,   999,
     999,     0,     0,     0,     0,     0,   366,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2685,     0,     0,   367,
       0,     0,     0,     0,     0,     0,  1784,     0,   999,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2706,  2706,     0,     0,     0,     0,     0,   999,   368,     0,
       0,   369,  1001,     0,     0,     0,     0,     0,     0,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -230,     0,     0,     0,     0,     0,     0,     0,     0,  1784,
       0,     0,     0,     0,     0,  2729,     0,     0,     0,   999,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
       0,     0,   372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   857,     0,   858,     0,   859,     0,
       0,     0,     0,   860,     0,     0,     0,     0,     0,     0,
       0,   861,     0,  1621,     0,     0,     0,     0,     0,     0,
       0,  1001,     0,     0,  1266,     0,     0,  1784,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   862,   863,     0,     0,     0,     0,
       0,     0,     0,     0,   864,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1266,   865,     0,     0,   866,     0,
       0,     0,   966,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   867,     0,     0,     0,     0,     0,     0,   967,
    1784,     0,     0,     0,     0,  1621,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   868,     0,     0,     0,     0,
       0,     0,     0,   869,     0,   870,     0,     0,  1419,     0,
       0,     0,  -706,  1001,  -706,  -706,  -706,  -706,  -706,  -706,
    -706,  -706,     0,  -706,  -706,  -706,     0,  -706,  -706,  -706,
    -706,  -706,  -706,  -706,  -706,  -706,   871,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   872,     0,     0,
       0,     0,   873,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1331,   968,   969,   970,     0,     0,     0,     0,   874,     0,
     971,     0,     0,     0,     0,   875,     0,     0,   876,   877,
       0,     0,     0,  1621,     0,     0,     0,     0,   878,   857,
       0,   858,     0,   859,     0,   879,     0,   880,   860,     0,
     881,  1266,     0,     0,     0,  1266,   861,     0,  1266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1332,     0,   975,   976,   977,
       0,     0,     0,   978,     0,     0,     0,     0,     0,   862,
     863,     0,   882,     0,     0,     0,   883,     0,   884,   864,
       0,     0,     0,     0,     0,     0,     0,     0,   885,     0,
     865,     0,  1266,   866,  -706,  -706,  -706,     0,  -706,  -706,
    -706,  -706,     0,   979,     0,     0,     0,   867,     0,     0,
       0,     0,     0,     0,     0,   886,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   887,     0,
     868,     0,     0,     0,     0,  1621,  1621,     0,   869,     0,
     870,  1266,  1266,  1266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   888,   889,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   890,     0,     0,     0,     0,
       0,   871,  1621,     0,     0,     0,     0,     0,   981,   891,
     892,     0,   872,     0,     0,     0,   893,   873,     0,     0,
     894,     0,     0,     0,     0,     0,     0,     0,   895,     0,
    1266,     0,     0,     0,     0,     0,     0,     0,   896,     0,
       0,     0,     0,   874,     0,     0,     0,   897,     0,     0,
     875,     0,     0,   876,   877,     0,   898,     0,     0,   982,
     983,   899,   900,   878,     0,   901,     0,   902,     0,     0,
     879, -1860,   880,     0,   903,   881,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -706,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   987,     0,     0,   905,     0,     0,     0,     0,
       0,   906,     0, -1138,     0,     0,   907,   882,     0,     0,
    1266,   883,   988,   884,     0,     0,     0,   989,     0,     0,
       0, -1138,     0,   885,   990,   243,   137,  -706,     0,     0,
       0,     0,     0,   908,     0,     0,   857,     0,   858,     0,
     859,     0,     0,     0,  1266,   860,  1266,     0,     0,     0,
     886,     0,     0,   861,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   887,     0,     0,  1621,     0,     0,     0,
       0,     0,     0,     0,  1621,     0,     0,     0,     0,     0,
       0,     0,     0,  1266,     0,  1266,   862,   863,     0,   888,
     889,     0,     0,     0,     0,     0,   864,     0,     0,     0,
     890,     0,     0,     0,     0,     0,     0,   865,     0,     0,
     866,     0,     0,     0,   891,   892,     0,     0,     0,     0,
       0,   893,     0,     0,   867,   894,     0,     0,     0,     0,
    1001,     0,     0,   895,     0,     0,     0,     0,  1266,     0,
       0,     0,     0,   896,  1621,     0,     0,   868,     0,     0,
       0,     0,   897,     0,     0,   869,     0,   870,     0,     0,
       0,   898,     0,     0,     0,     0,   899,   900,     0,     0,
     901,     0,   902,     0,     0,     0,     0,     0,     0,   903,
       0,     0,     0,     0,     0,     0,     0,     0,   871,     0,
       0,     0,   904,     0,     0,     0,     0,     0,     0,   872,
       0,     0,     0,     0,   873,     0,     0,     0,     0,     0,
     905,     0,     0,     0,     0,     0,   906,     0,     0,     0,
       0,   907,     0,     0,     0,     0,     0,     0,     0,     0,
     874,  1266,     0,  1266,     0,     0,     0,   875,     0,     0,
     876,   877,     0,     0,     0,     0,     0,     0,   908,     0,
     878,     0,     0,     0,     0,     0,   857,   879,   858,   880,
     859,     0,   881,     0,  1266,   860,     0,     0,     0,     0,
       0,     0,     0,   861,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1266,     0,     0,     0,  1226,
       0,     0,   755,     0,   882,     0,   862,   863,   883,     0,
     884,     0,     0,     0,     0,     0,   864,     0,     0,     0,
     885,     0,     0,     0,     0,     0,     0,   865,     0,     0,
     866,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   867,     0,     0,   886,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     887,     0,     0,     0,     0,     0,     0,   868,     0,     0,
       0,     0,     0,     0,     0,   869,   966,   870,     0,     0,
    1266,     0,  1266,     0,     0,     0,   888,   889,     0,     0,
       0,     0,     0,   967,     0,     0,     0,   890,     0,     0,
       0,     0,     0,     0,     0,     0,  1377,     0,   871,     0,
       0,   891,   892,     0,     0,     0,     0,     0,   893,   872,
       0,     0,   894,     0,   873,     0,     0,     0,     0,     0,
     895,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     896,     0,     0,     0,     0,     0,     0,     0,     0,   897,
     874,     0,     0,     0,     0,     0,     0,   875,   898,     0,
     876,   877,     0,   899,   900,     0,     0,   901,     0,   902,
     878,     0,     0,     0,     0,     0,   903,   879,     0,   880,
       0,     0,   881,     0,     0,   968,   969,   970,     0,  1654,
       0,     0,     0,     0,   971,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   757,     0,   905,     0,     0,
       0,     0,     0,   906,     0,     0,     0,     0,   907,     0,
       0,  1645,     0,     0,   882,     0,     0,     0,   883,     0,
     884,     0,     0,     0,     0,     0,     0,     0,  1228,     0,
     885,     0,     0,     0,   973,   908,   974,     0,     0,   760,
       0,   975,   976,   977,     0,     0,     0,   978,     0,   761,
       0,     0,     0,     0,  1229,     0,     0,   886,     0,     0,
       0,  1038,     0,  1039,     0,     0,     0,     0,  1040,     0,
     887,     0,     0,     0,     0,     0,  1041,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   979,     0,     0,
       0,  1001,  1001,     0,     0,     0,   888,   889,     0,     0,
       0,     0,     0,     0,     0,     0,   980,   890,     0,  1042,
    1043,     0,     0,     0,     0,     0,     0,     0,     0,  1044,
    1001,   891,   892,     0,     0,     0,     0,     0,   893,     0,
    1045,   762,   894,  1046,     0,  1226,     0,     0,   755,  1001,
     895,  1530,  1531,  1532,     0,     0,     0,  1047,     0,  1533,
     896,     0,     0,     0,     0,     0,     0,     0,     0,   897,
       0,     0,   981,     0,     0,     0,     0,     0,   898,     0,
    1048,     0,     0,   899,   900,     0,     0,   901,  1049,   902,
    1050,  1001,     0,     0,     0,     0,   903,  1051,     0,  1052,
    1053,  1054,  1055,  1056,  1057,  1058,  1059,     0,  1060,  1061,
    1062,   763,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,
    1071,  1072,   966,   982,   983,     0,     0,   905,     0,     0,
       0,     0,  1073,   906,     0,     0,     0,  1074,   907,   967,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   764,     0,     0,     0,
       0,     0,     0,  1075,     0,   908,   987,     0,     0,     0,
    1076,     0,     0,  1077,  1078,     0,     0,     0,     0,     0,
       0,     0,     0,  1079,     0,     0,   988,     0,     0,     0,
    1080,   989,  1081,     0,     0,  1082,     0,     0,   990,  1534,
     137,     0,     0,     0,     0,     0,   765,     0,     0,  1535,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   968,   969,   970,     0,     0,     0,  1083,     0,     0,
     971,  1084,     0,  1085,     0,     0,  1536,  1537,     0,     0,
       0,   757,     0,  1086,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1858,     0,     0,     0,     0,     0,     0,     0,     0,
    1087,     0,     0,     0,  1228,  1538,  1539,     0,     0,     0,
     973,     0,   974,  1088,     0,   760,     0,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,     0,     0,     0,
    1229,     0,     0,     0,     0,     0,     0,     0,     0,  1089,
       0,     0,     0,  1540,     0,     0,     0,     0,     0,  1541,
    1090,     0,     0,  1542,     0,     0,     0,     0,     0,     0,
       0,  1543,     0,   979,     0,  1091,     0,     0,  1544,     0,
       0,  1092,     0,  1545,   966,  1093,     0,     0,     0,     0,
       0,  1226,   980,  1094,   755,     0,     0,  1530,  1531,  1532,
       0,   967,  1546,  1095,     0,  1533,     0,     0,     0,     0,
       0,     0,  1096,     0,     0,     0,     0,   762,     0,     0,
       0,  1097,     0,     0,     0,     0,  1098,  1099,     0,     0,
    1100,     0,  1101,     0,     0,     0,     0,     0,     0,  1102,
       0,     0,     0,     0,     0,     0,     0,     0,   981,     0,
       0,     0,  1103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   966,     0,
    1104,     0,     0,     0,     0,     0,  1105,     0,     0,     0,
       0,  1106,     0,     0,     0,   967,     0,   763,     0,     0,
       0,     0,     0,   968,   969,   970,     0,     0,     0,   982,
     983,     0,   971,     0,     0,     0,     0,     0,  1107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1547,     0,  1548,     0,  1549,     0,     0,  1550,     0,  1551,
    1552,  1553,   764,     0,  1554,  1555,     0,     0,     0,     0,
       0,     0,   987,     0,     0,  1534,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1535,     0,  1477,     0,   975,
     976,   977,   988,     0,     0,   978,     0,   989,     0,     0,
       0,     0,     0,     0,   990,     0,   137,   968,   969,   970,
       0,     0,   765,     0,     0,     0,   971,     0,     0,     0,
       0,     0,  1536,  1537,     0,     0,     0,   757,     0,     0,
       0,     0,     0,     0,     0,   979,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1228,  1538,  1539,     0,     0,     0,   973,     0,   974,     0,
       0,   760,     0,   975,   976,   977,     0,     0,     0,   978,
       0,   761,     0,     0,     0,     0,  1229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -872,     0,  1540,
    -872,     0,     0,     0,     0,  1541,     0,     0,     0,  1542,
     981,     0,     0,     0,     0,     0,     0,  1543,     0,   979,
       0,     0,     0,     0,  1544,     0,     0,     0,     0,  1545,
       0,     0,     0,     0,     0,     0,     0,     0,   980,     0,
    1214,     0,     0,     0,     0,     0,     0,     0,  1546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   982,   983,   762,     0,     0,  1226,     0,     0,   755,
       0,     0,     0,     0,  -872,     0,     0,     0,     0, -1760,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -872,     0,     0,   981,     0,     0,     0,     0,     0,
       0,     0,  1226,     0,   987,   755,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   988,     0,     0,     0,     0,   989,
       0,     0,     0,   763,     0,     0,   990,     0,   137,     0,
       0,     0,     0,   966,     0,   982,   983,     0,     0,     0,
       0,     0,     0,     0,     0,  1227,     0,     0,     0,     0,
     967,     0,     0,     0,     0,     0,  1547,     0,  1548,     0,
    1549,     0,     0,  1550,     0,  1551,  1552,  1553,   764,   966,
    1554,  1555,     0,  -872,  -872,  -872,     0,     0,   987,     0,
       0,  1320,  -872,     0,     0,     0,   967,     0,     0,     0,
       0,     0,     0,  -872,     0,     0,     0,     0,   988,     0,
       0,     0,     0,   989,     0,     0,     0,     0,     0,     0,
     990,     0,   137,     0,     0,     0,     0,     0,   765,     0,
       0,     0,     0,     0,     0,     0,  -872,     0,     0,     0,
       0,     0,  -872,     0,  -872,     0,     0,  -872,     0,  -872,
    -872,  -872,   968,   969,   970,  -872,     0,  -872,     0,     0,
       0,   971,  -872,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   757,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   968,   969,
     970,     0,     0,     0,     0,  -872,     0,   971,     0,     0,
    -872,     0,     0,     0,     0,  1228,     0,     0,   757,     0,
       0,   973,     0,   974,  -872,     0,   760,     0,   975,   976,
     977,     0,     0,     0,   978,     0,   761,     0,     0,     0,
       0,  1229,     0,  1226,     0,     0,   755,     0,     0,  -872,
       0,  1228,     0,     0,     0,     0,     0,   973,     0,   974,
   -1760,     0,   760,     0,   975,   976,   977,     0,     0,     0,
     978,     0,   761,     0,   979,     0,     0,  1229,     0,  1226,
    -872,     0,   755,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   980,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     979,     0,     0,  -872,     0,     0,     0,     0,   762,  -872,
     966,     0,     0,     0,     0,     0,     0,     0,     0,   980,
       0,  -872,  -872,     0,     0,     0,     0,   967,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1226,   981,
    1377,   755,     0,     0,   762,     0,   966,     0,     0,     0,
       0,     0,     0,     0,  -872,     0,     0,     0,  1382,     0,
       0,     0,     0,   967,  -872,     0,     0,     0,     0,     0,
    -872,     0,     0,     0,     0,   981,     0,     0,   763,     0,
       0,     0,     0,     0,  -872,     0,     0,     0,     0,  -872,
     982,   983, -1760,     0,     0,     0,  -872,     0,  -872,     0,
       0,     0,     0,     0,  -872,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   763,   966,     0,     0,     0,   968,
     969,   970,     0,   764,     0,     0,   982,   983,   971,     0,
       0,     0,   967,   987,     0,     0,     0,     0,     0,   757,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,   968,   969,   970,   989,   764,
       0,     0,     0,     0,   971,   990,     0,   137,     0,   987,
       0,     0,  1228,   765,     0,   757,     0,     0,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,     0,   988,
       0,   978,     0,   761,   989,     0,     0,     0,  1229,     0,
       0,   990,     0,   137,     0,     0,     0,     0,  1228,   765,
       0,     0,     0,     0,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,   968,   969,   970,   978,     0,   761,
       0,   979,     0,   971,  1229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   757,     0,     0,     0,     0,     0,
     980,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   979,     0,     0,
       0,     0,     0,     0,     0,   762,     0,  1228,     0,     0,
       0,     0,     0,   973,     0,   974,   980,     0,   760,     0,
     975,   976,   977,     0,     0,     0,   978,  -928,   761,     0,
    -928,     0,     0,  1229,     0,     0,   981,     0,     0,     0,
       0,   762,     0,     0,     0,     0,     0,     0,     0,     0,
    1226,     0,     0,   755,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   979,     0,     0,     0,
       0,     0,   981,     0,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   980,     0,   982,   983,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -928,     0,     0,     0,     0,     0,
     762,   763,     0,     0,     0,     0,     0,     0,     0,     0,
     764,  -928,     0,   982,   983,     0,     0,   966,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   981,     0,     0,   967,     0,     0,     0,     0,     0,
     988,     0,     0,     0,     0,   989,   764,     0,     0,     0,
       0,     0,   990,     0,   137,     0,   987,     0,     0,     0,
     765,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     763,     0,     0,     0,     0,     0,   988,  1504,     0,     0,
       0,   989,   982,   983,     0,     0,     0,     0,   990,     0,
     137,     0,     0,     0,     0,     0,   765,     0,     0,     0,
       0,  1466,     0,  -928,  -928,  -928,     0,     0,     0,     0,
       0,     0,  -928,     0,     0,   764,     0,     0,     0,     0,
       0,     0,     0,  -928,     0,   987,   968,   969,   970,     0,
       0,     0,     0,  1226,     0,   971,   755,     0,     0,     0,
       0,     0,     0,     0,     0,   988,   757,     0,     0,     0,
     989,     0,     0,     0,     0,     0,  -928,   990,     0,   137,
       0,     0,  -928,     0,  -928,   765,     0,  -928,     0,  -928,
    -928,  -928,     0,     0,     0,  -928,     0,  -928,     0,  1228,
       0,     0,  -928,     0,     0,   973,     0,   974,     0,     0,
     760,     0,   975,   976,   977,     0,     0,     0,   978,     0,
     761,     0,     0,     0,     0,  1229,     0,     0,     0,     0,
     966,     0,     0,     0,     0,  -928,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   967,     0,     0,
       0,     0,     0,     0,  -928,     0,     0,     0,   979,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1226,
       0,     0,   755,     0,     0,     0,     0,   980,     0,  -928,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1226,     0,     0,   755,     0,     0,     0,     0,
       0,     0,   762,     0,     0,     0,     0,     0,     0,     0,
    -928,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   981,     0,     0,     0,     0,     0,   968,
     969,   970,     0,  1650,     0,     0,   966,     0,   971,  -928,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   757,
       0,  -928,  -928,   967,     0,     0,     0,     0,     0,   966,
       0,     0,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   982,   983,   967,     0,     0,     0,
       0,     0,  1228,     0,  -928,     0,     0,     0,   973,     0,
     974,     0,     0,   760,  -928,   975,   976,   977,     0,     0,
       0,   978,     0,   761,     0,     0,     0,   764,  1229,     0,
       0,     0,     0,     0,  -928,     0,     0,   987,     0,  -928,
       0,     0,     0,     0,     0,     0,  -928,     0,  -928,     0,
       0,  1508,     0,     0,  -928,     0,     0,   988,     0,     0,
       0,   979,   989,     0,     0,   968,   969,   970,     0,   990,
       0,   137,     0,     0,   971,     0,     0,   765,     0,     0,
     980,     0,     0,     0,     0,   757,     0,     0,   968,   969,
     970,     0,     0,     0,     0,  1226,     0,   971,   755,     0,
       0,     0,     0,     0,     0,   762,     0,     0,   757,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1228,     0,
       0,     0,     0,     0,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,     0,     0,   981,   978,     0,   761,
       0,  1228,     0,     0,  1229,     0,     0,   973,     0,   974,
       0,     0,  1270,     0,   975,   976,   977,     0,     0,     0,
     978,     0,   761,     0,     0,     0,     0,  1229,     0,     0,
       0,     0,   966,     0,     0,   763,     0,   979,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   982,   983,   967,
       0,     0,     0,     0,     0,     0,   980,     0,     0,     0,
     979,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1780,     0,     0,   755,     0,     0,     0,     0,   980,
     764,   762,     0,     0,     0,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   762,     0,     0,     0,     0,     0,
     988,     0,   981,     0,     0,   989,     0,     0,     0,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,     0,     0,     0,     0,   981,     0,     0,     0,     0,
       0,   968,   969,   970,     0,  1946,     0,     0,   966,     0,
     971,   763,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   757,     0,   982,   983,   967,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   982,   983,     0,     0,
       0,     0,     0,     0,  1228,     0,   764,     0,     0,     0,
     973,     0,   974,     0,     0,   760,   987,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,     0,     0,   764,
    1229,     0,     0,     0,     0,     0,   988,     0,     0,   987,
       0,   989,     0,     0,     0,     0,     0,     0,   990,     0,
     137,     0,     0,     0,     0,     0,   765,     0,     0,   988,
       0,     0,     0,   979,   989,     0,     0,   968,   969,   970,
       0,   990,     0,   137,     0,     0,   971,     0,     0,   765,
       0,     0,   980,     0,     0,     0,     0,   757,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1228,     0,     0,     0,     0,     0,   973,     0,   974,     0,
       0,   760,     0,   975,   976,   977,     0,     0,   981,   978,
       0,   761,     0,     0,     0,     0,  1229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,   979,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   982,
     983,     0,     0,     0,     0,     0,     0,     0,   980,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,   762,     0,     0,     0,     0,     0,     0,
       0,     0,   987,     0,     0,     0,  1030,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   988,     0,   981,     0,     0,   989,     0,     0,
       0,     0,     0,     0,   990,     0,   137,  -357,     0,     0,
    -357,     0,   765,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
    -357,     0,  -357,     0,     0,   982,   983,     0,     0,  -357,
       0,  -357,  -357,  -357,  -357,  -357,  -357,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   764,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   987,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   988,     0,
       0,     0,     0,   989,     0,     0,     0,     0,     0,     0,
     990,     0,   137,     0,     0,     0,     0,     0,   765,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   966,     0,     0,
       0,   529,     0,     0,  -357,  -357,  -357,  -357,  -357,     0,
       0,  -357,  -357,     0,   967,  -357,     0,     0,     0,     0,
       0,  -357,     0,  -357,     0,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,     0,     0,
    -357,     0,     0,     0,     0,     0,  -357,     0,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,   528,     0,     0,     0,     0,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,  -357,  1331,   968,   969,   970,     0,
       0,     0,     0,     0,     0,   971,     0,     0,     0,  -357,
       0,     0,  -357,  -357,  -357,  -357,  -357,  -357,  -357,     0,
       0,  -357,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,  -357,     0,     0,     0,     0,
       0,     0,     0,  -357,     0,     0,  -357,  -357,     0,  -357,
    -357,  -357,  -357,  -357,  -357,  -357,     0,     0,     0,  -357,
    1477,  -357,   975,   976,   977,     0,     0,     0,   978,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,     0,
       0,     0,     0,  -357,     0,  -357,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   979,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,  -357,  -357,  -357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,     0,   529,
       0,     0,  -357,  -357,  -357,  -357,  -357,     0,     0,  -357,
    -357,     0,     0,     0,  -357,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,  -357,     0,     0,  -357,     0,     0,
       0,     0,     0,   981,     0,     0,  -357,     0,     0,     0,
       0,  -357,  -357,     0,     0,  -357,  -357,  -357,     0,     0,
       0,     0,     0,     0,     0,  -357,   619,     0,  -357,  -357,
       0,     0,     0,     0,  -357,  -357,  -357,     0,     0,     0,
       0,   620,   530,     0,   621,   622,   623,   624,   625,   626,
     627,     0,     0,     0,   982,   983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1860,     0,     0,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,   628,
       0,   629,   630,   631,   632,   633,   634,   635,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   987,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,     0, -1138,     0,
       0,     0,     0,  -357,     0,     0,     0,   988,     0,     0,
       0,  -357,   989,     0,  -357,   636, -1138,     0,     0,   990,
     243,   137,     0,     0,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,  -357,     0,
       0,     0,     0,     0,     0,     0,  1702,     0,     0,  1703,
       0,     0,  1704,   621,   622,   623,   624,   625,   626,  1705,
    1706,     0,     0,     0,   637,   638,   639,   640,   641,     0,
       0,   642,   643,     0,     0,     0,     0,     0,     0,  1707,
    -357,  1708,  -357,  -357,  -357,     0,     0,     0,   628,     0,
     629,   630,   631,   632,   633,   634,   635,     0,     0,     0,
       0,     0,     0,     0,   644,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,    94,     0,  2366,
     645,     0,  2367,     0,     0,  2368, -1836,  -357,     0,     0,
       0,     0,     0,  2369,   636,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,  -357,  -357,  -357,     0,     0,     0,     0,
       0,     0,   646,     0,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,  -357,  1709,     0,     0,     0,  2370,
     530,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   647,     0,   637,   638,   639,   640,   641,  2371,     0,
     642,   643,     0,     0,  1710,   648,     0,     0,     0,     0,
    1711,     0,  1712,   649,     0,     0,   650,     0, -1789,     0,
       0,     0,     0,     0,     0,  1713,     0,     0,     0,   651,
       0,     0,     0,   644,     0,     0,     0,     0,     0,     0,
       0,     0,   652,     0,     0,     0,    94,     0,     0,   645,
     653,     0,     0,     0,     0,     0,     0,  1714,     0,     0,
       0,     0,     0,     0,     0,     0,  1715,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2372,     0,  1716,
       0,     0,     0,     0,     0,  2373,     0,     0,     0,     0,
       0,   646,   654,     0,   655,   656,   657,     0,  2374,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1717,   658,     0,     0,     0,     0,     0,     0,     0,     0,
    2375,     0,     0,  1718,   648,     0,   966,     0,     0,  -354,
       0,     0,   649,     0,     0,   650,     0,     0,     0,     0,
    2376,     0,  2377,   967,     0,     0, -1836,     0,   651,     0,
    1719,     0,     0,     0,     0,   659,   660,   661,     0,     0,
       0,     0,     0,     0,  2378,  2379,     0,     0,     0,   662,
       0,     0,     0,     0,     0,     0,   663,  1720,     0,     0,
       0,     0,     0,     0,  1721,     0,     0,     0,     0,     0,
     621,   622,   623,   624,   625,   626,  2380,     0,     0,     0,
       0,  1722,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   654,     0,   655,   656,   657,     0,     0,     0,     0,
       0,     0,     0,  2381,  2382,   628,     0,   629,   630,   631,
     632,   633,   634,   635,     0,   968,   969,   970,     0,     0,
       0,     0,     0,     0,   971,     0,     0,     0,     0,     0,
    2383,     0,     0,  1723,     0,   757,     0,  2384,  -609,     0,
       0,     0,     0,  1724,     0,     0,     0,     0,     0,     0,
    2385,   636,     0,     0,  2386,   966,     0,     0,     0,     0,
    1725,     0,     0,     0,   659,   660,   661,     0,   972,  2387,
       0,     0,   967,     0,   973,     0,   974,     0,   662,   760,
       0,   975,   976,   977,  1726,   663,     0,   978,     0,   761,
       0,     0,     0,     0,     0,  2388,     0,     0,     0,     0,
       0,     0,     0,     0,  2389,     0,     0,     0,     0,     0,
     637,   638,   639,   640,   641,     0,     0,   642,   643,     0,
       0,     0,     0,     0,     0,     0,     0,   979,     0,     0,
       0,     0,     0,  2390,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2391,     0,     0,   980,     0,     0,  2392,
     644,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   968,   969,   970,     0,     0,     0,
       0,   762,     0,   971,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   757,     0,     0,     0,   966,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   981,     0,   966,   967,     0,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,   972,     0,     0,
       0,   967,     0,   973,     0,   974,     0,     0,   760,     0,
     975,   976,   977,     0,     0,     0,   978,     0,   761,     0,
       0,   763,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   648,     0,   982,   983,     0,     0,     0,     0,     0,
       0,     0,   650,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1408,   651,   979,     0,     0,     0,
       0,     0,     0,     0,   984,     0,   764,     0,   985,   986,
       0,     0,     0,     0,     0,   980,   987,   968,   969,   970,
       0,     0,     0,     0,     0,     0,   971,     0,     0,     0,
       0,     0,     0,   968,   969,   970,   988,   757,     0,     0,
     762,   989,   971,     0,     0,     0,     0,     0,   990,     0,
     137,     0,     0,   757,     0,     0,   765,   966,     0,     0,
     655,   656,   657,     0,     0,     0,     0,     0,     0,     0,
     972,   981,     0,     0,   967,     0,   973,     0,   974,     0,
       0,   760,     0,   975,   976,   977,   972,     0,     0,   978,
       0,   761,   973,     0,   974,     0,     0,   760,     0,   975,
     976,   977,     0,     0,     0,   978,     0,   761,     0,     0,
     763,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   982,   983,     0,     0,     0,     0,     0,   979,
       0,   659,   660,   661,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1427,     0,   979,     0,     0,   980,     0,
       0,     0,     0,   984,     0,   764,     0,   985,   986,     0,
       0,     0,     0,     0,   980,   987,   968,   969,   970,     0,
       0,     0,     0,   762,     0,   971,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   988,   757,     0,     0,   762,
     989,     0,     0,     0,     0,     0,     0,   990,     0,   137,
       0,     0,     0,     0,   981,   765,   966,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   972,
     981,     0,     0,   967,     0,   973,     0,   974,     0,     0,
     760,     0,   975,   976,   977,     0,     0,     0,   978,     0,
     761,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   982,   983,     0,     0,   763,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   982,   983,     0,     0,     0,  1971,     0,   979,     0,
       0,     0,     0,     0,     0,     0,   984,     0,   764,     0,
     985,   986,     0,     0,     0,     0,     0,   980,   987,     0,
       0,     0,   984,     0,   764,     0,   985,   986,     0,     0,
       0,     0,     0,     0,   987,   968,   969,   970,   988,     0,
       0,     0,   762,   989,   971,     0,     0,     0,     0,     0,
     990,     0,   137,     0,   988,   757,     0,     0,   765,   989,
       0,   966,     0,     0,     0,     0,   990,     0,   137,     0,
       0,     0,     0,   981,   765,     0,     0,     0,   967,     0,
       0,     0,     0,     0,     0,     0,     0,   966,   972,     0,
       0,     0,     0,     0,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,   967,     0,     0,   978,     0,   761,
       0,     0,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   982,   983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   979,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   764,     0,   985,
       0,     0,     0,     0,     0,     0,   980,   987,     0,     0,
     968,   969,   970,     0,     0,     0,     0,     0,     0,   971,
       0,     0,     0,     0,     0,     0,     0,   988,     0,     0,
     757,   762,   989,     0,     0,     0,   968,   969,   970,   990,
       0,   137,     0,     0,     0,   971,     0,   765,     0,     0,
       0,     0,     0,     0,     0,     0,   757,     0,  2696,     0,
       0,     0,   981,   972,     0,     0,     0,     0,     0,   973,
       0,   974,     0,     0,   760,     0,   975,   976,   977,     0,
       0,     0,   978,     0,   761,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     760,   763,   975,   976,   977,     0,     0,     0,   978,     0,
     761,     0,     0,   982,   983,     0,     0,     0,     0,     0,
       0,     0,   979,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   980,     0,     0,     0,     0,   764,     0,   979,     0,
       0,     0,     0,     0,     0,     0,   987,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   762,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   988,     0,     0,     0,
       0,   989,     0,     0,     0,     0,     0,     0,   990,     0,
     137,     0,   762,     0,     0,     0,   765,   981,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   981,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   982,   983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   982,   983,     0,     0,     0,     0,
       0,   764,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   987,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   764,     0,     0,
       0,   988,     0,     0,     0,     0,   989,   987,     0,     0,
       0,     0,     0,   990,     0,   137,     0,     0,     0,     0,
       0,   765,     0,     0,     0,     0,     0,   988,     0,     0,
       0,     0,   989,     0,     0,     0,     0,     0,     0,   990,
       0,   137,     0,     0,     0,     0,     0,   765
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-2247))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     103,   366,   105,   597,   393,   116,   395,   663,   111,   181,
     962,   103,   790,   105,   540,   687,   849,  1118,   721,   111,
    1207,  1226,  1444,   785,   795,  1145,   358,  1590,  1116,  1444,
     158,  1444,   135,   794,  1444,  1580,   425,   209,  1444,   404,
    1444,  1596,  1534,   135,  1485,   600,   435,   652,  1131,  1121,
    1997,  1367,  1525,  1258,  2033,  1833,  1123,     6,  1916,  1356,
     700,  1112,  1145,  1265,  1131,    58,     1,     0,  1377,     9,
       0,     9,     1,    17,    31,    48,    56,   749,  1145,    30,
     124,   184,     9,  1941,     9,    22,  2066,    56,    57,    58,
     852,   177,     6,  1376,    53,    64,    62,    87,  1184,   125,
     177,    60,    17,   124,    49,    27,   115,  1799,  1466,   176,
     162,    93,  1198,     1,    65,   130,    67,  1319,   175,    97,
     142,   225,   309,   160,    90,    91,   143,   799,   111,     9,
      99,   100,    58,   102,    33,   241,   232,   232,   107,   108,
     251,   237,  1458,   794,  1689,    49,    39,   116,    64,   277,
    1842,   203,  1253,   758,   759,  1982,   213,   256,     9,    21,
    2106,  1519,    58,   364,   133,  2009,   189,   309,   262,   166,
    1372,   171,    49,     1,  2095,  1512,  1513,  1514,  1515,    32,
     130,   173,    88,    22,   295,   203,   329,  2166,   218,   421,
    1241,   160,  1508,   708,   116,    31,  1764,   369,   232,  2434,
     840,  1893,   161,   125,   809,   154,   139,    58,   203,   139,
     143,    88,   244,   143,   794,   188,     1,    21,   408,   412,
     256,   114,   191,   256,   985,   225,    97,  1118,  2474,  1587,
    1297,   413,    58,   233,   203,   203,   785,   289,   244,     8,
     755,  1308,   232,    31,   204,  1006,   262,   256,     0,  2170,
     286,  1169,   108,   290,   126,   454,   367,   294,  1950,   218,
     219,   248,   249,   212,  1155,  1110,   232,   200,    37,   168,
     200,   287,   232,  1118,  1119,  2510,  1573,    62,   420,   461,
     249,  1199,  1365,  1128,   466,   315,   479,  2533,   257,   479,
    1135,  1136,  1650,   387,   330,   232,   302,   330,  1365,    71,
     318,   252,  1369,   852,    92,    90,    91,   256,    71,  1154,
    1155,    58,   153,   272,   228,  1860,     9,   266,   318,   834,
     507,  2179,   271,   282,   228,   342,   378,   178,    49,   561,
     425,   256,  1895,   984,   985,   986,    49,  2283,  2284,  1011,
     443,   364,   445,   446,   237,   203,   457,    71,  2040,   452,
    1111,   111,  1661,   445,   446,  1006,   322,    50,  1655,  1668,
     452,   290,  2206,   506,  2285,   471,   469,   972,   267,   472,
     473,   199,   475,   160,  1866,   478,   479,   469,  1466,  1852,
     412,   332,  1855,  1875,   313,   367,   274,    73,   310,    65,
     241,    67,   972,   232,   363,   309,   500,     9,   203,   348,
     271,    71,   394,   256,   984,   985,   986,   287,   507,   342,
     378,   507,   342,   516,   359,  1176,  1177,  1178,   455,   204,
     454,   507,   391,   170,   516,     6,  1006,  1785,  1189,  1190,
     507,  1519,   454,   402,   372,  1196,    71,   540,   541,   454,
     507,   485,   411,   412,  1289,   414,   415,   232,   540,   541,
     507,   420,  1524,   359,   506,   317,  2024,   439,    71,   355,
    1111,  1133,  1017,  1018,   485,   336,  1763,   464,   437,   418,
     465,   351,    57,   423,  2420,  1320,   223,   349,   581,    64,
     506,  1818,   359,   594,   453,    38,   172,   403,   454,   581,
     601,   418,   507,    46,  1265,   468,  1833,   600,   507,  1587,
     341,  1584,   390,   486,  2484,  2485,    57,   507,   465,    60,
    1793,   404,   502,    64,   463,   508,  1567,  1584,  1169,   212,
     500,   454,  2349,   449,   454,  1176,  1177,  1178,  2220,   507,
     445,  1111,   404,   506,  1379,  1844,   647,   322,  1189,  1190,
    1191,  1192,  1193,  1194,  1195,  1196,   515,  1598,  1199,   463,
     653,   244,   245,  1133,     6,   506,   501,  1624,   507,  1139,
     504,   499,  1650,   256,   513,   534,   454,   507,  1208,  2261,
     507,  2263,   507,   266,   507,  1780,  2434,   507,   507,   160,
    2135,  1783,   507,   257,   506,   554,   513,   556,  1885,  1169,
     559,   560,  1678,   562,   456,   501,  1176,  1177,  1178,  1179,
     212,  1372,  2294,   804,  1184,   467,     6,   465,  2081,  1189,
    1190,  1191,  1192,  1193,  1194,  1195,  1196,   576,  1198,  1199,
     471,  1466,   591,  1228,   501,  1922,   454,   596,   400,   465,
    2408,   212,  2324,  2325,   603,   461,   507,   400,   359,     6,
     466,     9,  2210,    34,   256,   450,   359,     6,  1228,   608,
     506,   507,   456,   256,   266,   348,   332,   378,   211,   770,
    1505,  2488,   271,   467,   775,   378,   507,   839,   455,   454,
     356,  1251,   124,  1518,  1519,   256,   400,   780,   781,   451,
    2659,   792,   256,   268,   444,   266,   200,  1132,   451,   449,
     243,   256,    12,   662,   797,    15,    16,  1785,   461,  2526,
    2527,   973,   974,   466,   252,     6,   453,    65,   980,    67,
    2657,  1556,   265,  1158,   461,   462,  2074,   268,  2076,   466,
     256,  1788,   241,   454,  1495,   418,  1115,   451,  1117,   154,
     400,  1492,   229,   454,   703,   271,   348,   706,   244,   256,
    1791,   454,  1587,  2570,   229,   256,   356,  2574,  2575,  1940,
    1988,  1140,    32,  1142,  1334,  1993,   341,  2115,  1147,  2467,
     212,   331,   123,   437,    57,   400,   319,   348,  2077,   218,
     463,    64,  1161,   459,  2012,  2013,  2603,    26,  2016,   234,
     501,   451,   252,  1628,   256,   331,   322,   400,   501,  2281,
     341,   242,   408,   162,  1639,    27,   359,  1642,   271,  2096,
    2492,  2493,   216,  2654,   256,  1650,   418,   130,  1891,   176,
    2168,   126,   212,   398,   266,  2642,   451,   256,   403,   256,
     513,  2059,   236,   497,  1891,  1892,  2064,   380,   342,  2067,
      28,   111,   794,   507,     9,    30,   256,   418,   451,  2690,
     449,  1492,   484,   391,   212,   212,   256,   398,   262,   459,
     961,   463,   403,   212,  1459,   308,   256,   310,   307,   212,
     502,  1632,  2425,   479,  1309,  2181,   266,  1256,   262,   454,
      65,    30,    67,   287,   455,   372,  1977,  2174,  1267,   207,
     208,  1486,   463,    58,   116,  1440,   274,   372,   256,   256,
     281,   282,   283,   287,   252,   507,   348,   256,   266,   266,
     256,   513,   309,   256,   507,   396,   412,   266,   231,   348,
     513,   212,  1492,   266,  1017,  1018,  1027,   195,   246,   247,
     289,   391,  1683,   476,   456,  2633,   507,  1529,   408,   127,
    1581,   256,   513,   507,  1606,   386,   506,  1269,   501,  2502,
    1385,   256,   507,  2181,   399,  2065,  2066,   196,   348,   108,
     389,   424,   471,   426,   345,   256,   507,   277,   278,  2150,
     506,   507,   287,   454,    85,   266,   418,  1569,   291,   128,
     342,   507,   504,  1245,   332,   268,   256,   513,   256,   418,
     348,   348,   302,   303,    57,     0,  2074,   343,  2076,   348,
     507,    64,  1594,   220,     1,   348,   507,   449,  2553,   479,
     506,  1581,   390,   178,    11,   412,   139,   274,   167,  1112,
    2082,   463,  1783,  1116,   212,  1687,   196,  1349,   418,   454,
    1123,  1124,   984,   985,   986,   252,  1606,  2115,  1131,  2234,
     189,  1134,  1683,   485,   504,   507,  1139,   212,  1141,  1711,
    1143,  1144,  1145,  1146,  1006,   204,  2113,   348,   341,   449,
     418,   418,    59,    47,   413,   507,   270,   252,   256,   418,
    1163,   513,  2134,   463,   408,   418,   241,   162,   266,    63,
     507,   166,   479,  2618,   513,  2630,   256,  2518,   469,   470,
    2168,   256,   280,   474,  1929,  1257,   353,   507,   355,   503,
      97,   266,    99,   199,   101,   463,   463,   507,  1678,   408,
    1694,  2202,   109,  1683,   463,   398,   158,   507,  1497,   103,
     403,  2533,   506,   513,   454,  2550,   330,   418,  2533,   457,
    2533,  2359,   171,  2533,   139,  2363,   353,  2533,   143,  2533,
     458,  1711,   460,   759,   361,   479,  1308,   332,  1241,   506,
     507,   546,   212,   107,   126,   513,   513,  1109,   507,  1111,
     348,  2696,  1114,   117,   513,   307,  1118,  1260,   165,  2722,
     513,   454,   463,   262,     9,  2710,    26,   507,   232,   507,
     479,  1133,  1777,   348,   262,   449,   225,  1139,  2613,   231,
     448,   586,   341,   809,   233,   200,   256,   339,   287,   285,
     172,  1143,   256,   178,  1297,   268,   266,   465,  1160,   287,
    1162,  1351,  1804,   188,  1376,  1308,   507,  1169,   360,  1811,
     615,  1163,   513,    58,  1176,  1177,  1178,  1179,   324,   325,
     418,  1983,  1184,   421,   422,   210,   500,  1189,  1190,  1191,
    1192,  1193,  1194,  1195,  1196,   341,  1198,  1199,   232,   335,
     292,  2479,  2480,   418,   308,   239,   310,   461,  2486,  1352,
     257,  1401,   466,   416,    45,   240,   250,     8,   188,    24,
      25,  1863,  1365,   216,   217,  1227,  1369,  2038,   341,   318,
     758,   759,   172,  1605,    65,    66,    67,    68,   348,  2124,
     210,   396,   381,   236,   188,   178,    37,   262,   463,  1251,
     396,  1253,   455,    54,    55,   302,   471,     8,   758,   759,
    2538,    66,  1405,    68,   204,    70,   210,  1672,  1480,   262,
     172,   292,   287,  1405,    11,   513,  1918,  2162,  2163,   256,
    1925,   809,  2410,   338,  2412,   398,    37,   342,    16,    90,
     403,  2518,   507,   262,   287,   188,   212,  1440,   513,   104,
     105,   106,   204,   324,   237,    33,   107,   240,   418,   809,
     461,  1454,   353,  2056,    42,   466,   117,   210,   287,   353,
     354,  2194,    59,  1466,  2484,  2485,  2638,   212,  2488,  2041,
     453,   157,  1334,   159,   368,   356,   370,   456,  2583,   462,
     256,   454,   451,   358,  2656,   392,   454,  1981,   467,   154,
     266,   156,   461,   463,  1356,   454,   241,   466,   163,  2160,
      97,   166,    99,     9,   101,   507,    12,   506,   507,    15,
      16,   256,   109,   414,   415,     1,  1519,  1589,   209,  2021,
    1382,   266,  2267,  2095,   454,   118,   119,   120,   435,  2034,
    2631,  2632,   425,  2035,   507,   451,  2537,   507,  1215,   212,
     407,  1613,  1219,   513,   235,   461,     2,   454,    13,    14,
     466,     7,  2054,  1134,    40,    41,    42,    43,    44,  2660,
     454,   252,   452,   254,  1567,  1146,  1638,    32,   165,  1438,
      55,   461,   348,   232,  1443,  1444,   466,  1446,  2679,    97,
      98,  1584,  2084,   256,  1587,   456,  2088,   252,   396,   254,
      76,    77,   407,   266,   285,  1598,   467,  1625,  2170,  1737,
     507,    58,   477,   348,   451,    90,   271,   501,  1897,  2160,
    1177,  1178,  1750,  1751,   461,   306,  1754,   300,   301,   466,
    2721,  1624,   107,  1413,   452,  2127,   353,  1417,   355,   226,
    1492,   506,   117,   461,  1424,   555,   163,   328,   466,   166,
     560,  1652,   418,   334,   454,   238,   473,  1650,   475,   454,
     503,   478,  2330,   506,  2332,   488,   489,   490,   491,   252,
     257,   322,  1193,  1194,  1195,   326,   327,   454,  1675,  1676,
    1677,  1674,   454,   418,  1681,   348,   218,  1684,  1685,   174,
    2160,    35,  1674,   157,    38,   159,  2431,   463,   293,   454,
     295,    45,    46,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   252,   454,   254,   302,  1717,   368,   305,   507,
     353,  1573,   355,  2285,    69,  2217,   407,   454,   463,  1581,
     353,  2223,   355,   384,   385,   416,   471,  1738,   252,   507,
     254,  2233,   252,   454,   254,  1597,   507,   513,    92,    66,
     454,    68,   433,   336,  1606,   418,  1191,  1192,   984,  2494,
     986,   341,   256,  2498,  2499,  1617,   349,   256,   471,  2185,
     199,   507,   507,   454,   445,   402,   412,  1636,   513,   403,
      64,   277,   278,    60,   371,   256,  2454,  2629,  1781,   232,
     454,   446,  1785,  1645,   475,  1788,   329,   403,  1791,   256,
     463,   507,   229,  1655,    26,   392,   302,   303,   488,   489,
     490,   491,  2304,   494,   454,  2307,  2308,   161,   108,   454,
     501,   502,   166,   454,   256,   313,  1678,   272,  2320,    23,
     417,  1683,   419,  1692,  1693,  1897,   256,  2116,   457,   103,
     454,   496,  2334,  2335,  1703,   123,   190,   440,   435,  1842,
     513,  1710,   507,   189,  2109,   331,    17,   440,   457,  1711,
     488,   489,   490,   491,    87,   507,   454,   211,   344,   396,
     272,  1723,   353,   403,  1726,   623,   624,   625,   626,   404,
    1739,    57,   425,   262,   506,    39,  1948,   454,   237,   404,
     507,   332,   507,   509,   317,  1957,  1958,   421,  1891,  1892,
    1893,   311,   261,   396,   454,     7,   454,   255,  2400,   396,
     454,  1763,  1930,  1931,  1932,  1933,  1934,  1935,  1936,  1937,
     507,   265,   507,   454,   506,   454,   396,  1779,   368,    86,
      86,   454,   125,   434,    35,   454,   396,    38,   391,    22,
     307,  1800,   504,   454,    45,    46,   310,   396,   204,   507,
     507,   502,  2444,   386,   454,   504,   232,  1950,   449,   254,
    1819,     6,   507,   218,     9,   507,  1825,   513,   123,    53,
     449,   445,  1831,   465,    26,   319,   402,   307,   450,   350,
     196,   412,   448,  1976,   445,   507,   256,   465,   378,   454,
     401,    92,   454,   115,  1976,  1988,   337,   465,   507,   170,
    1993,   507,   465,   188,   507,  2006,   465,   465,   256,   465,
     454,   465,   454,   465,   465,   465,   454,   223,   310,  2012,
    2013,   449,   405,  2016,   507,   507,   456,   507,    30,   196,
     449,   507,   131,  1885,  1886,   132,   380,   133,    83,   134,
     138,   388,   135,   137,   136,   102,   444,  2040,   465,   393,
     449,   141,   500,    49,  2116,   100,   406,   448,   445,   448,
     161,   442,  1914,  2125,  2065,  2066,  2059,   144,   412,   196,
    1922,  2064,  2065,  2066,  2067,   145,   147,   146,   502,   271,
    2626,  2074,    31,  2076,   148,    49,   149,   196,   150,   190,
    2631,  2632,   151,   113,  2578,   220,   152,  1949,   451,  2645,
     451,   115,   454,  1962,  1956,  1957,   449,   412,   153,   451,
     211,   451,   451,   451,   313,   110,   197,   449,   203,  2660,
    2113,  1980,  2115,   223,  2608,  1977,   378,   340,   256,   272,
     295,   299,   476,   487,   794,  1987,   166,  1996,  2679,  1998,
     231,   504,   504,  2002,   129,   176,   367,   192,   193,   194,
     449,  2010,   169,   228,   130,     9,   201,    49,   449,   196,
     228,  2631,  2632,   204,   265,   177,   300,   212,    57,   204,
     507,   454,   252,   276,   425,  2168,   237,   512,   511,   300,
    2721,   449,   449,   272,   382,   364,   296,    30,  2181,  2041,
    2660,    17,  2185,   203,   203,   445,   129,   140,   367,    49,
     245,   142,   449,  2185,   203,     8,   251,   196,   253,  2679,
     130,   256,   203,   258,   259,   260,   504,   504,   319,   264,
     425,   266,  2501,   454,   449,     9,   271,     7,   507,    83,
     256,   506,   298,   203,  2086,   506,   501,    49,   501,   189,
     291,   315,   314,  2095,  2096,   464,   100,   262,   114,  2108,
     439,  2721,  2104,   331,    47,   413,   203,   203,   363,   304,
      49,   295,   103,   382,   262,   237,   495,    96,  2261,   297,
    2263,  2123,  2551,   292,    57,   363,   412,     8,   323,   380,
      49,   111,   459,   338,   262,   262,   110,   262,   454,   338,
     454,   210,   393,   484,   341,   108,   221,   209,  2291,   120,
    2152,  2294,   504,   348,   369,   420,   196,   314,  2160,  2291,
      49,   412,   972,   338,   307,   427,   322,     7,  2170,    46,
      92,    26,  2174,   127,   984,   985,   986,   201,   148,   206,
      75,   238,  2325,   221,   379,   150,   519,   177,   192,   193,
     194,  1896,   286,   410,  2196,   469,  1006,   201,  1026,   425,
    2202,   497,  2345,  1444,   748,  2694,   781,  1403,   212,  1889,
    1666,  2183,   799,  2345,  2673,  2706,  2359,  2642,   852,  1035,
    2363,  2203,  2203,   418,  2079,   476,   788,  1224,  1836,  1753,
    1752,  2393,  1787,  2378,  1478,   430,   431,  2239,  1241,  2077,
    1480,  1505,  2259,  1524,  1527,  2081,  1855,  1293,  2277,  1570,
    1577,  2104,   256,  1883,   258,   259,   260,  1329,  1588,  2116,
     264,   456,   266,  1334,  2123,  1909,  1958,  2410,   463,  2412,
    1618,  1938,   467,  2137,  1365,  1363,  1146,  2163,   473,     4,
    1957,  1379,  2690,  2285,  2328,  2428,  1665,  1957,  2333,  2156,
    2338,  1556,  2434,  2156,    19,  2156,  2156,  1474,   493,  1352,
     304,  1111,   299,   498,    29,   694,  1116,   152,  2737,  1925,
     505,  1711,   507,  1123,  2323,  1251,   242,   753,   513,   270,
     509,  1131,   417,   989,  2561,  2607,  2422,   215,   449,   712,
    1945,  2093,  1888,  2484,  2485,  1145,  2479,  2480,  1580,    64,
    2633,  2484,  2485,  2486,   348,  2488,    -1,    -1,   558,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2367,  1169,
      -1,    -1,    -1,  2372,    -1,    -1,  1176,  1177,  1178,  1179,
      -1,    -1,    -1,    -1,  1184,   379,    -1,    -1,  2387,  1189,
    1190,  1191,  1192,  1193,  1194,  1195,  1196,    -1,  1198,  1199,
      -1,    -1,    -1,    -1,    -1,  2538,    -1,    -1,    -1,    -1,
      -1,  2403,    -1,    -1,    -1,    -1,    -1,  2550,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,    -1,  1228,    -1,
      -1,    -1,    -1,    -1,  2433,    -1,   430,   431,    -1,  2580,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2446,    -1,    -1,    -1,    -1,    -1,
    1260,  2453,    -1,    -1,  2456,    -1,  2465,  2466,    -1,   463,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,
    2613,    -1,    -1,  2482,  2483,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2637,  1297,    -1,   493,
    2641,  2500,    -1,    -1,   498,   220,    -1,    -1,  1308,    -1,
      -1,   505,    -1,   507,    -1,  2507,    -1,    -1,    -1,   513,
      -1,  2654,    -1,    -1,    -1,    -1,  2525,    -1,    -1,  2521,
      -1,  2530,  2531,    -1,    -1,    -1,    -1,   252,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2537,    -1,   262,    -1,    -1,
      -1,    -1,    -1,  2552,    -1,    -1,  1356,  2690,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1365,    -1,    -1,    -1,  1369,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2714,    -1,  2582,  2725,    -1,  2585,  2586,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2587,    -1,    -1,    -1,    -1,
      -1,   316,    -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2628,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,  2631,
    2632,    -1,    -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2648,    -1,    -1,   374,
      -1,    -1,    -1,    -1,    -1,    -1,  1466,    -1,  2660,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2672,  2673,    -1,    -1,    -1,    -1,    -1,  2679,   403,    -1,
      -1,   406,  1492,    -1,    -1,    -1,    -1,    -1,    -1,   414,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1519,
      -1,    -1,    -1,    -1,    -1,  2717,    -1,    -1,    -1,  2721,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   454,
      -1,    -1,   457,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,  1573,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1581,    -1,    -1,  1584,    -1,    -1,  1587,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1624,    72,    -1,    -1,    75,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,   100,
    1650,    -1,    -1,    -1,    -1,  1655,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,   122,    -1,    -1,  1678,    -1,
      -1,    -1,   129,  1683,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,   195,    -1,
     201,    -1,    -1,    -1,    -1,   202,    -1,    -1,   205,   206,
      -1,    -1,    -1,  1763,    -1,    -1,    -1,    -1,   215,     1,
      -1,     3,    -1,     5,    -1,   222,    -1,   224,    10,    -1,
     227,  1781,    -1,    -1,    -1,  1785,    18,    -1,  1788,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,   269,    -1,    -1,    -1,   273,    -1,   275,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,
      72,    -1,  1842,    75,   291,   292,   293,    -1,   295,   296,
     297,   298,    -1,   304,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,
     112,    -1,    -1,    -1,    -1,  1885,  1886,    -1,   120,    -1,
     122,  1891,  1892,  1893,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,   352,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   362,    -1,    -1,    -1,    -1,
      -1,   153,  1922,    -1,    -1,    -1,    -1,    -1,   379,   376,
     377,    -1,   164,    -1,    -1,    -1,   383,   169,    -1,    -1,
     387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,
    1950,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   405,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,   414,    -1,    -1,
     202,    -1,    -1,   205,   206,    -1,   423,    -1,    -1,   430,
     431,   428,   429,   215,    -1,   432,    -1,   434,    -1,    -1,
     222,   442,   224,    -1,   441,   227,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   454,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   473,    -1,    -1,   472,    -1,    -1,    -1,    -1,
      -1,   478,    -1,   484,    -1,    -1,   483,   269,    -1,    -1,
    2040,   273,   493,   275,    -1,    -1,    -1,   498,    -1,    -1,
      -1,   502,    -1,   285,   505,   506,   507,   504,    -1,    -1,
      -1,    -1,    -1,   510,    -1,    -1,     1,    -1,     3,    -1,
       5,    -1,    -1,    -1,  2074,    10,  2076,    -1,    -1,    -1,
     312,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   325,    -1,    -1,  2096,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2113,    -1,  2115,    51,    52,    -1,   351,
     352,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
     362,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,   376,   377,    -1,    -1,    -1,    -1,
      -1,   383,    -1,    -1,    89,   387,    -1,    -1,    -1,    -1,
    2160,    -1,    -1,   395,    -1,    -1,    -1,    -1,  2168,    -1,
      -1,    -1,    -1,   405,  2174,    -1,    -1,   112,    -1,    -1,
      -1,    -1,   414,    -1,    -1,   120,    -1,   122,    -1,    -1,
      -1,   423,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,
     432,    -1,   434,    -1,    -1,    -1,    -1,    -1,    -1,   441,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,   454,    -1,    -1,    -1,    -1,    -1,    -1,   164,
      -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,
     472,    -1,    -1,    -1,    -1,    -1,   478,    -1,    -1,    -1,
      -1,   483,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     195,  2261,    -1,  2263,    -1,    -1,    -1,   202,    -1,    -1,
     205,   206,    -1,    -1,    -1,    -1,    -1,    -1,   510,    -1,
     215,    -1,    -1,    -1,    -1,    -1,     1,   222,     3,   224,
       5,    -1,   227,    -1,  2294,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2325,    -1,    -1,    -1,     6,
      -1,    -1,     9,    -1,   269,    -1,    51,    52,   273,    -1,
     275,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    83,   122,    -1,    -1,
    2410,    -1,  2412,    -1,    -1,    -1,   351,   352,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,   362,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   153,    -1,
      -1,   376,   377,    -1,    -1,    -1,    -1,    -1,   383,   164,
      -1,    -1,   387,    -1,   169,    -1,    -1,    -1,    -1,    -1,
     395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   414,
     195,    -1,    -1,    -1,    -1,    -1,    -1,   202,   423,    -1,
     205,   206,    -1,   428,   429,    -1,    -1,   432,    -1,   434,
     215,    -1,    -1,    -1,    -1,    -1,   441,   222,    -1,   224,
      -1,    -1,   227,    -1,    -1,   192,   193,   194,    -1,   454,
      -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,   472,    -1,    -1,
      -1,    -1,    -1,   478,    -1,    -1,    -1,    -1,   483,    -1,
      -1,   228,    -1,    -1,   269,    -1,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
     285,    -1,    -1,    -1,   251,   510,   253,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,
      -1,    -1,    -1,    -1,   271,    -1,    -1,   312,    -1,    -1,
      -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,
     325,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,  2631,  2632,    -1,    -1,    -1,   351,   352,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,   362,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
    2660,   376,   377,    -1,    -1,    -1,    -1,    -1,   383,    -1,
      72,   348,   387,    75,    -1,     6,    -1,    -1,     9,  2679,
     395,    12,    13,    14,    -1,    -1,    -1,    89,    -1,    20,
     405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   414,
      -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,   423,    -1,
     112,    -1,    -1,   428,   429,    -1,    -1,   432,   120,   434,
     122,  2721,    -1,    -1,    -1,    -1,   441,   129,    -1,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,   418,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    83,   430,   431,    -1,    -1,   472,    -1,    -1,
      -1,    -1,   164,   478,    -1,    -1,    -1,   169,   483,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   463,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,   510,   473,    -1,    -1,    -1,
     202,    -1,    -1,   205,   206,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,   493,    -1,    -1,    -1,
     222,   498,   224,    -1,    -1,   227,    -1,    -1,   505,   160,
     507,    -1,    -1,    -1,    -1,    -1,   513,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,    -1,    -1,   269,    -1,    -1,
     201,   273,    -1,   275,    -1,    -1,   207,   208,    -1,    -1,
      -1,   212,    -1,   285,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     312,    -1,    -1,    -1,   245,   246,   247,    -1,    -1,    -1,
     251,    -1,   253,   325,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,
     271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
      -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,   290,
     362,    -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   302,    -1,   304,    -1,   377,    -1,    -1,   309,    -1,
      -1,   383,    -1,   314,    83,   387,    -1,    -1,    -1,    -1,
      -1,     6,   323,   395,     9,    -1,    -1,    12,    13,    14,
      -1,   100,   333,   405,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,   414,    -1,    -1,    -1,    -1,   348,    -1,    -1,
      -1,   423,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,
     432,    -1,   434,    -1,    -1,    -1,    -1,    -1,    -1,   441,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,
      -1,    -1,   454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
     472,    -1,    -1,    -1,    -1,    -1,   478,    -1,    -1,    -1,
      -1,   483,    -1,    -1,    -1,   100,    -1,   418,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,   430,
     431,    -1,   201,    -1,    -1,    -1,    -1,    -1,   510,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     451,    -1,   453,    -1,   455,    -1,    -1,   458,    -1,   460,
     461,   462,   463,    -1,   465,   466,    -1,    -1,    -1,    -1,
      -1,    -1,   473,    -1,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   256,    -1,   258,
     259,   260,   493,    -1,    -1,   264,    -1,   498,    -1,    -1,
      -1,    -1,    -1,    -1,   505,    -1,   507,   192,   193,   194,
      -1,    -1,   513,    -1,    -1,    -1,   201,    -1,    -1,    -1,
      -1,    -1,   207,   208,    -1,    -1,    -1,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,   246,   247,    -1,    -1,    -1,   251,    -1,   253,    -1,
      -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,   266,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,   284,
       9,    -1,    -1,    -1,    -1,   290,    -1,    -1,    -1,   294,
     379,    -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,   304,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,   314,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   430,   431,   348,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,   473,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   493,    -1,    -1,    -1,    -1,   498,
      -1,    -1,    -1,   418,    -1,    -1,   505,    -1,   507,    -1,
      -1,    -1,    -1,    83,    -1,   430,   431,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,   451,    -1,   453,    -1,
     455,    -1,    -1,   458,    -1,   460,   461,   462,   463,    83,
     465,   466,    -1,   192,   193,   194,    -1,    -1,   473,    -1,
      -1,    95,   201,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,   493,    -1,
      -1,    -1,    -1,   498,    -1,    -1,    -1,    -1,    -1,    -1,
     505,    -1,   507,    -1,    -1,    -1,    -1,    -1,   513,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,
     259,   260,   192,   193,   194,   264,    -1,   266,    -1,    -1,
      -1,   201,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
     194,    -1,    -1,    -1,    -1,   304,    -1,   201,    -1,    -1,
     309,    -1,    -1,    -1,    -1,   245,    -1,    -1,   212,    -1,
      -1,   251,    -1,   253,   323,    -1,   256,    -1,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,
      -1,   271,    -1,     6,    -1,    -1,     9,    -1,    -1,   348,
      -1,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,   253,
     359,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,   266,    -1,   304,    -1,    -1,   271,    -1,     6,
     379,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,   412,    -1,    -1,    -1,    -1,   348,   418,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,
      -1,   430,   431,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,   379,
     113,     9,    -1,    -1,   348,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   463,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,   100,   473,    -1,    -1,    -1,    -1,    -1,
     479,    -1,    -1,    -1,    -1,   379,    -1,    -1,   418,    -1,
      -1,    -1,    -1,    -1,   493,    -1,    -1,    -1,    -1,   498,
     430,   431,   501,    -1,    -1,    -1,   505,    -1,   507,    -1,
      -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    83,    -1,    -1,    -1,   192,
     193,   194,    -1,   463,    -1,    -1,   430,   431,   201,    -1,
      -1,    -1,   100,   473,    -1,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   493,    -1,   192,   193,   194,   498,   463,
      -1,    -1,    -1,    -1,   201,   505,    -1,   507,    -1,   473,
      -1,    -1,   245,   513,    -1,   212,    -1,    -1,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,   493,
      -1,   264,    -1,   266,   498,    -1,    -1,    -1,   271,    -1,
      -1,   505,    -1,   507,    -1,    -1,    -1,    -1,   245,   513,
      -1,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,   192,   193,   194,   264,    -1,   266,
      -1,   304,    -1,   201,   271,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
     323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   348,    -1,   245,    -1,    -1,
      -1,    -1,    -1,   251,    -1,   253,   323,    -1,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,     6,   266,    -1,
       9,    -1,    -1,   271,    -1,    -1,   379,    -1,    -1,    -1,
      -1,   348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,    -1,   379,    -1,    -1,   418,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   323,    -1,   430,   431,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
     348,   418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     463,   100,    -1,   430,   431,    -1,    -1,    83,    -1,    -1,
     473,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   379,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     493,    -1,    -1,    -1,    -1,   498,   463,    -1,    -1,    -1,
      -1,    -1,   505,    -1,   507,    -1,   473,    -1,    -1,    -1,
     513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,    -1,    -1,    -1,   493,   166,    -1,    -1,
      -1,   498,   430,   431,    -1,    -1,    -1,    -1,   505,    -1,
     507,    -1,    -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,
      -1,   449,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,   463,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,   473,   192,   193,   194,    -1,
      -1,    -1,    -1,     6,    -1,   201,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   493,   212,    -1,    -1,    -1,
     498,    -1,    -1,    -1,    -1,    -1,   245,   505,    -1,   507,
      -1,    -1,   251,    -1,   253,   513,    -1,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,   245,
      -1,    -1,   271,    -1,    -1,   251,    -1,   253,    -1,    -1,
     256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
     266,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,   323,    -1,   348,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,    -1,   196,    -1,    -1,    83,    -1,   201,   418,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,   430,   431,   100,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,   418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   430,   431,   100,    -1,    -1,    -1,
      -1,    -1,   245,    -1,   463,    -1,    -1,    -1,   251,    -1,
     253,    -1,    -1,   256,   473,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,   266,    -1,    -1,    -1,   463,   271,    -1,
      -1,    -1,    -1,    -1,   493,    -1,    -1,   473,    -1,   498,
      -1,    -1,    -1,    -1,    -1,    -1,   505,    -1,   507,    -1,
      -1,   487,    -1,    -1,   513,    -1,    -1,   493,    -1,    -1,
      -1,   304,   498,    -1,    -1,   192,   193,   194,    -1,   505,
      -1,   507,    -1,    -1,   201,    -1,    -1,   513,    -1,    -1,
     323,    -1,    -1,    -1,    -1,   212,    -1,    -1,   192,   193,
     194,    -1,    -1,    -1,    -1,     6,    -1,   201,     9,    -1,
      -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,   212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,   379,   264,    -1,   266,
      -1,   245,    -1,    -1,   271,    -1,    -1,   251,    -1,   253,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,   266,    -1,    -1,    -1,    -1,   271,    -1,    -1,
      -1,    -1,    83,    -1,    -1,   418,    -1,   304,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   430,   431,   100,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,   323,
     463,   348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     473,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,
     493,    -1,   379,    -1,    -1,   498,    -1,    -1,    -1,    -1,
      -1,    -1,   505,    -1,   507,    -1,    -1,    -1,    -1,    -1,
     513,    -1,    -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,   412,    -1,    -1,    83,    -1,
     201,   418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,   430,   431,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   430,   431,    -1,    -1,
      -1,    -1,    -1,    -1,   245,    -1,   463,    -1,    -1,    -1,
     251,    -1,   253,    -1,    -1,   256,   473,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,   463,
     271,    -1,    -1,    -1,    -1,    -1,   493,    -1,    -1,   473,
      -1,   498,    -1,    -1,    -1,    -1,    -1,    -1,   505,    -1,
     507,    -1,    -1,    -1,    -1,    -1,   513,    -1,    -1,   493,
      -1,    -1,    -1,   304,   498,    -1,    -1,   192,   193,   194,
      -1,   505,    -1,   507,    -1,    -1,   201,    -1,    -1,   513,
      -1,    -1,   323,    -1,    -1,    -1,    -1,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,   251,    -1,   253,    -1,
      -1,   256,    -1,   258,   259,   260,    -1,    -1,   379,   264,
      -1,   266,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,   304,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   430,
     431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   463,   348,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   473,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   493,    -1,   379,    -1,    -1,   498,    -1,    -1,
      -1,    -1,    -1,    -1,   505,    -1,   507,    32,    -1,    -1,
      35,    -1,   513,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   418,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    67,    -1,    -1,   430,   431,    -1,    -1,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   463,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   493,    -1,
      -1,    -1,    -1,   498,    -1,    -1,    -1,    -1,    -1,    -1,
     505,    -1,   507,    -1,    -1,    -1,    -1,    -1,   513,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
      -1,   186,   187,    -1,   100,   190,    -1,    -1,    -1,    -1,
      -1,   196,    -1,   198,    -1,    -1,    -1,    -1,    -1,   204,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,
     235,    -1,    -1,    -1,    -1,    -1,   241,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
     265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   277,    -1,    21,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    36,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   319,   320,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   328,    -1,    -1,   331,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,   344,
     256,   346,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   373,    -1,
      -1,    -1,    -1,   120,    -1,   380,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,   397,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   407,    -1,   409,   410,   411,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,   176,
      -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,   186,
     187,    -1,    -1,    -1,   449,    -1,    -1,    -1,    -1,   454,
      -1,    -1,    -1,    -1,   459,    -1,    -1,   204,    -1,    -1,
      -1,    -1,    -1,   379,    -1,    -1,   471,    -1,    -1,    -1,
      -1,   476,   219,    -1,    -1,   480,   481,   482,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   232,    21,    -1,   235,   494,
      -1,    -1,    -1,    -1,   241,   500,   501,    -1,    -1,    -1,
      -1,    36,   507,    -1,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,   430,   431,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   442,    -1,    -1,    -1,
     277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,    -1,   306,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   484,    -1,
      -1,    -1,    -1,   320,    -1,    -1,    -1,   493,    -1,    -1,
      -1,   328,   498,    -1,   331,   120,   502,    -1,    -1,   505,
     506,   507,    -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,   179,   180,   181,   182,   183,    -1,
      -1,   186,   187,    -1,    -1,    -1,    -1,    -1,    -1,    65,
     407,    67,   409,   410,   411,    -1,    -1,    -1,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,   436,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,    32,
     235,    -1,    35,    -1,    -1,    38,   241,   454,    -1,    -1,
      -1,    -1,    -1,    46,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   471,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   480,   481,   482,    -1,    -1,    -1,    -1,
      -1,    -1,   277,    -1,    -1,    -1,    -1,   494,    -1,    -1,
      -1,    -1,    -1,    -1,   501,   161,    -1,    -1,    -1,    92,
     507,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   306,    -1,   179,   180,   181,   182,   183,   111,    -1,
     186,   187,    -1,    -1,   190,   320,    -1,    -1,    -1,    -1,
     196,    -1,   198,   328,    -1,    -1,   331,    -1,   204,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,   344,
      -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   357,    -1,    -1,    -1,   232,    -1,    -1,   235,
     365,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,   265,
      -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,
      -1,   277,   407,    -1,   409,   410,   411,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     306,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     243,    -1,    -1,   319,   320,    -1,    83,    -1,    -1,   454,
      -1,    -1,   328,    -1,    -1,   331,    -1,    -1,    -1,    -1,
     263,    -1,   265,   100,    -1,    -1,   471,    -1,   344,    -1,
     346,    -1,    -1,    -1,    -1,   480,   481,   482,    -1,    -1,
      -1,    -1,    -1,    -1,   287,   288,    -1,    -1,    -1,   494,
      -1,    -1,    -1,    -1,    -1,    -1,   501,   373,    -1,    -1,
      -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,   319,    -1,    -1,    -1,
      -1,   397,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   407,    -1,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   346,   347,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    -1,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
     373,    -1,    -1,   449,    -1,   212,    -1,   380,   454,    -1,
      -1,    -1,    -1,   459,    -1,    -1,    -1,    -1,    -1,    -1,
     393,   120,    -1,    -1,   397,    83,    -1,    -1,    -1,    -1,
     476,    -1,    -1,    -1,   480,   481,   482,    -1,   245,   412,
      -1,    -1,   100,    -1,   251,    -1,   253,    -1,   494,   256,
      -1,   258,   259,   260,   500,   501,    -1,   264,    -1,   266,
      -1,    -1,    -1,    -1,    -1,   438,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,
     179,   180,   181,   182,   183,    -1,    -1,   186,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,    -1,   476,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   486,    -1,    -1,   323,    -1,    -1,   492,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,   348,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,    -1,    83,   100,    -1,    -1,   277,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,
      -1,   100,    -1,   251,    -1,   253,    -1,    -1,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,
      -1,   418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   320,    -1,   430,   431,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   451,   344,   304,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   461,    -1,   463,    -1,   465,   466,
      -1,    -1,    -1,    -1,    -1,   323,   473,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,   493,   212,    -1,    -1,
     348,   498,   201,    -1,    -1,    -1,    -1,    -1,   505,    -1,
     507,    -1,    -1,   212,    -1,    -1,   513,    83,    -1,    -1,
     409,   410,   411,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,   379,    -1,    -1,   100,    -1,   251,    -1,   253,    -1,
      -1,   256,    -1,   258,   259,   260,   245,    -1,    -1,   264,
      -1,   266,   251,    -1,   253,    -1,    -1,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,
     418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   430,   431,    -1,    -1,    -1,    -1,    -1,   304,
      -1,   480,   481,   482,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   451,    -1,   304,    -1,    -1,   323,    -1,
      -1,    -1,    -1,   461,    -1,   463,    -1,   465,   466,    -1,
      -1,    -1,    -1,    -1,   323,   473,   192,   193,   194,    -1,
      -1,    -1,    -1,   348,    -1,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   493,   212,    -1,    -1,   348,
     498,    -1,    -1,    -1,    -1,    -1,    -1,   505,    -1,   507,
      -1,    -1,    -1,    -1,   379,   513,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,
     379,    -1,    -1,   100,    -1,   251,    -1,   253,    -1,    -1,
     256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
     266,    -1,    -1,   418,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   430,   431,    -1,    -1,   418,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   430,   431,    -1,    -1,    -1,   451,    -1,   304,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,   463,    -1,
     465,   466,    -1,    -1,    -1,    -1,    -1,   323,   473,    -1,
      -1,    -1,   461,    -1,   463,    -1,   465,   466,    -1,    -1,
      -1,    -1,    -1,    -1,   473,   192,   193,   194,   493,    -1,
      -1,    -1,   348,   498,   201,    -1,    -1,    -1,    -1,    -1,
     505,    -1,   507,    -1,   493,   212,    -1,    -1,   513,   498,
      -1,    83,    -1,    -1,    -1,    -1,   505,    -1,   507,    -1,
      -1,    -1,    -1,   379,   513,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,   245,    -1,
      -1,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,   100,    -1,    -1,   264,    -1,   266,
      -1,    -1,   418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   430,   431,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   463,    -1,   465,
      -1,    -1,    -1,    -1,    -1,    -1,   323,   473,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   493,    -1,    -1,
     212,   348,   498,    -1,    -1,    -1,   192,   193,   194,   505,
      -1,   507,    -1,    -1,    -1,   201,    -1,   513,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,   375,    -1,
      -1,    -1,   379,   245,    -1,    -1,    -1,    -1,    -1,   251,
      -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     256,   418,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
     266,    -1,    -1,   430,   431,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,    -1,    -1,    -1,    -1,   463,    -1,   304,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   473,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   493,    -1,    -1,    -1,
      -1,   498,    -1,    -1,    -1,    -1,    -1,    -1,   505,    -1,
     507,    -1,   348,    -1,    -1,    -1,   513,   379,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   430,   431,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   430,   431,    -1,    -1,    -1,    -1,
      -1,   463,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   473,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   463,    -1,    -1,
      -1,   493,    -1,    -1,    -1,    -1,   498,   473,    -1,    -1,
      -1,    -1,    -1,   505,    -1,   507,    -1,    -1,    -1,    -1,
      -1,   513,    -1,    -1,    -1,    -1,    -1,   493,    -1,    -1,
      -1,    -1,   498,    -1,    -1,    -1,    -1,    -1,    -1,   505,
      -1,   507,    -1,    -1,    -1,    -1,    -1,   513
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   516,   517,     0,   200,   342,   518,   519,   520,   521,
     522,   523,   525,   535,   537,   454,   454,   520,   154,   531,
     543,   531,   531,   256,   343,   538,   538,   123,    85,   544,
     524,   526,   535,   139,   529,   530,    26,   539,   539,   454,
     396,   545,   143,   524,   527,   528,   531,   538,   256,   454,
     536,   454,    11,    59,    97,    99,   101,   109,   165,   226,
     257,   302,   305,   371,   392,   417,   419,   435,   507,   546,
     547,   551,   562,   570,   571,   572,   573,   574,   579,   588,
     590,   595,   598,   599,   601,   602,   603,   604,   605,   606,
     607,   538,   526,   454,   232,   540,  1277,   507,  1197,  1197,
     425,   407,  1295,  1277,  1277,  1277,   396,  1197,   407,   454,
     454,  1277,   454,   454,    58,  1265,   575,     1,   454,   573,
     218,   589,   174,   608,   454,   528,   454,    73,   172,   356,
     459,   541,   542,   580,  1277,  1277,  1277,   507,  1192,  1223,
      69,  1192,   454,  1277,  1277,   552,   563,  1192,   548,   507,
     591,   592,   593,  1198,   256,   308,   310,   576,   578,  1040,
    1226,  1277,   454,   507,   454,   610,   542,   341,  1292,  1277,
     212,   256,   266,   348,   418,   463,   513,   596,   597,  1229,
    1192,   256,   218,   307,  1315,   256,   471,    57,    64,   268,
     341,   398,   403,   507,   553,   554,   555,   556,   557,   558,
     559,   561,  1264,  1325,   199,   564,   565,   566,   549,   561,
     592,    22,   232,  1198,  1278,  1040,   232,   425,  1289,  1277,
      97,  1197,   234,   399,   609,   611,    28,   127,   212,   256,
     266,   280,   348,   418,   421,   422,   513,   581,   582,   583,
     586,   597,   445,   506,   600,  1308,  1223,   402,   403,   412,
      64,  1277,   454,   555,   454,   507,   554,    60,  1277,     9,
     372,   499,   567,   569,     1,   454,   566,   550,  1308,   256,
     594,  1227,  1289,   232,  1197,  1197,   577,   578,   454,     1,
     290,   313,  1250,   274,   390,   643,   644,   645,   646,   648,
     583,    17,   445,  1229,   329,  1277,   403,  1226,   454,  1277,
     507,  1193,   229,    26,   568,   229,   372,   454,   454,   108,
    1227,  1197,   454,   313,  1197,   649,   353,   414,   415,   647,
     532,     1,   454,   645,   584,   586,   256,  1226,   257,   437,
     497,   560,  1193,   256,   272,   612,   457,  1268,    23,  1259,
     103,   653,   454,   585,   586,    58,   508,  1319,   613,   440,
    1301,   189,  1270,   123,   457,   654,    17,     4,    19,    29,
      64,   220,   252,   316,   321,   353,   361,   374,   403,   406,
     414,   454,   457,   614,   615,   621,   623,   625,   626,   627,
     628,   629,   632,   633,   634,   635,   636,   638,   639,   641,
    1293,  1309,    87,  1266,   507,  1182,  1183,   454,   396,   655,
     586,   272,  1284,   353,  1293,   449,   500,  1305,   403,   404,
    1277,  1264,   114,   237,  1279,  1279,   287,   640,  1226,  1308,
     425,   262,    39,  1262,  1277,   650,   651,  1183,  1183,   454,
     173,   394,   533,   656,   657,   659,  1277,  1279,   126,   172,
     618,   361,   633,  1277,  1277,  1277,  1277,  1259,     9,   287,
     351,   642,  1277,  1284,   404,   507,   651,   332,   652,   509,
     684,   686,   687,     1,  1183,   126,   349,   404,   622,  1277,
     118,   119,   120,   238,   252,   336,   349,   440,   616,   617,
     256,  1192,  1196,   421,   637,  1192,  1192,   317,  1290,  1290,
     311,  1192,  1277,  1226,   396,   261,   740,   688,   689,   691,
     701,  1242,   454,   658,   637,   256,   620,  1223,   620,     7,
     620,   620,   256,   619,  1223,   416,   455,    33,   168,   267,
     630,   454,   396,   255,   742,   454,   689,   454,     1,   176,
     507,   692,   693,   507,   660,   125,   506,  1244,  1324,  1268,
    1277,  1191,  1192,   506,   631,   631,   685,   454,   396,   368,
     744,   454,   454,   690,    86,    47,    63,   103,   239,   250,
     353,   354,   368,   370,   454,   501,   661,   662,   664,   668,
     669,   672,   673,   679,   680,   681,   682,  1277,   125,   434,
     624,  1191,  1192,   262,   387,   686,   741,   454,   396,   391,
     789,   703,   694,  1277,  1266,  1277,   353,   355,  1320,  1320,
    1277,  1266,  1277,  1284,  1277,    22,  1258,   307,   683,  1197,
     172,   204,   504,   310,   686,   743,   454,   396,   534,    21,
      36,    39,    40,    41,    42,    43,    44,    45,    74,    76,
      77,    78,    79,    80,    81,    82,   120,   179,   180,   181,
     182,   183,   186,   187,   219,   235,   277,   306,   320,   328,
     331,   344,   357,   365,   407,   409,   410,   411,   436,   480,
     481,   482,   494,   501,   704,   705,   706,   708,   709,   710,
     711,   712,   713,   714,   717,   729,   730,   731,   732,   733,
     738,   739,  1277,  1297,    26,   196,   702,  1260,   204,  1226,
     507,  1277,  1258,   507,  1194,  1195,   309,   420,  1316,  1196,
    1226,   502,  1277,   175,   213,   507,   670,  1197,     9,   418,
     513,   587,   274,   353,   355,  1318,   686,   745,   454,   338,
     803,   806,   244,   302,   408,   479,  1296,   479,  1296,   479,
    1296,   479,  1296,   479,  1296,   504,  1306,   386,  1294,   126,
    1226,  1220,  1223,  1223,   232,   242,   386,  1280,  1277,  1278,
     172,   204,   241,   471,   507,     9,    50,   212,   244,   245,
     256,   266,   348,   418,   463,   513,   695,  1230,  1231,  1232,
     449,   667,  1195,   254,  1283,   449,  1265,   218,  1272,   507,
    1277,  1277,  1232,  1318,   746,   790,   123,   829,   830,   513,
      53,   721,   449,   718,   465,  1224,  1225,   445,   711,   735,
     736,  1230,    26,   707,   402,  1254,  1254,  1232,   307,  1287,
       1,    40,    41,    42,    43,    44,   179,   180,   181,   182,
     183,   184,   185,   331,   344,   696,   697,   698,   699,   700,
     712,   713,  1220,   696,   450,  1226,    58,   355,   663,   674,
    1226,   412,  1298,   256,   671,  1223,   671,   350,   747,   691,
     701,   791,   792,   793,    56,   500,   807,     1,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   153,   164,   169,   195,   202,   205,   206,   215,   222,
     224,   227,   269,   273,   275,   285,   312,   325,   351,   352,
     362,   376,   377,   383,   387,   395,   405,   414,   423,   428,
     429,   432,   434,   441,   454,   472,   478,   483,   510,   831,
     832,   848,   853,   857,   862,   877,   880,   884,   888,   889,
     890,   895,   909,   913,   916,   930,   934,   937,   940,   944,
     945,   949,   959,   962,   979,   981,   984,   988,   994,  1006,
    1014,  1015,  1018,  1019,  1023,  1028,  1029,  1037,  1052,  1062,
    1071,  1076,  1083,  1087,  1089,  1092,  1095,  1099,  1126,   831,
    1272,   196,   719,  1226,   448,  1303,    83,   100,   192,   193,
     194,   201,   245,   251,   253,   258,   259,   260,   264,   304,
     323,   379,   430,   431,   461,   465,   466,   473,   493,   498,
     505,  1170,  1172,  1173,  1174,  1175,  1176,  1177,  1205,  1219,
    1220,  1231,  1233,  1234,  1235,  1236,   465,  1225,  1223,   734,
     736,   445,   256,  1264,   696,   454,  1232,    48,   468,   675,
     676,   677,   678,  1308,  1265,   196,   666,  1271,   507,  1184,
       1,   692,   793,   454,   809,   808,   378,   815,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   129,   131,   132,   133,   134,   135,   136,   137,   138,
     140,   141,   142,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   164,   169,   195,   202,   205,   206,   215,
     222,   224,   227,   269,   273,   275,   285,   312,   325,   351,
     362,   377,   383,   387,   395,   405,   414,   423,   428,   429,
     432,   434,   441,   454,   472,   478,   483,   510,  1255,   833,
     849,   854,   858,   863,   878,   881,   885,   891,   896,   910,
     914,   917,   931,   935,   938,   941,   203,   378,   872,   933,
     946,   950,   960,   963,   980,   982,   985,   401,   989,   995,
    1007,  1016,  1020,  1024,  1030,  1038,  1053,  1063,   256,   348,
     389,   418,   513,  1075,  1077,  1084,   337,  1088,  1090,   818,
    1093,  1096,  1100,  1127,   507,  1226,   718,   115,   720,   465,
    1238,  1220,  1231,  1233,  1315,  1315,   465,   465,   465,   465,
    1315,  1176,  1172,  1176,   465,  1238,    71,   400,   451,  1171,
     452,   461,   466,   453,   462,   170,   465,  1237,   465,   465,
    1172,   504,   737,  1307,  1230,  1196,  1196,   188,   667,  1226,
     748,   454,   794,   454,    49,   810,   811,   812,  1263,   810,
     507,   454,   309,   834,   835,  1219,     6,    95,   245,   271,
     850,  1177,  1201,  1202,  1219,  1230,  1233,   855,  1172,  1219,
     256,   859,   860,  1188,  1189,  1190,  1223,   271,   424,   426,
     864,   865,   256,   879,  1210,  1219,   882,  1183,     6,   886,
    1178,  1179,  1200,  1221,  1222,  1223,  1231,   457,   892,  1183,
     256,   897,   898,   900,  1201,  1202,  1210,  1219,   911,  1202,
     256,   915,   456,   467,   918,   919,   920,  1160,  1161,  1162,
     199,   324,   325,   341,   396,   932,   936,  1199,  1200,   939,
    1223,   449,   942,  1304,  1202,  1159,  1160,   951,  1199,   961,
    1184,   964,   965,  1219,  1230,  1233,  1054,  1217,  1218,  1223,
      95,   983,  1202,   986,  1202,   171,   225,   233,   318,   990,
     991,   191,   256,   996,  1000,  1001,  1002,  1188,  1211,  1219,
    1223,  1233,  1308,  1008,  1183,  1017,  1180,  1223,  1021,  1183,
    1025,  1180,     9,  1031,  1181,  1223,   154,   271,  1039,  1042,
    1043,  1046,  1047,  1048,  1049,  1050,  1051,  1185,  1186,  1199,
    1216,  1218,  1223,  1054,  1064,  1183,  1072,   113,  1078,  1079,
    1080,  1202,    95,  1085,  1201,  1091,  1184,   454,   507,   819,
     820,   823,   824,   829,  1094,  1219,  1097,  1183,  1101,  1219,
    1128,  1180,   223,   722,   310,  1288,   723,   724,   451,  1170,
    1172,   507,   507,  1172,  1241,  1241,  1241,  1204,  1219,  1231,
    1233,  1240,   507,   451,  1204,  1239,  1172,   451,  1172,  1173,
    1173,  1174,  1174,  1174,  1172,  1204,  1170,   405,   456,    30,
    1261,  1265,     1,   749,   795,   811,   412,   479,   813,   359,
     501,   804,   131,   847,    30,   837,   838,  1261,   196,  1287,
    1219,  1220,  1231,  1233,   132,   852,   449,   851,  1202,    58,
     223,  1245,   860,   449,  1315,   133,   876,   256,  1211,  1210,
    1183,   358,   477,   883,  1308,  1321,  1287,   134,   887,   160,
     455,  1179,  1312,   388,  1251,  1224,  1225,   893,  1183,   135,
     894,  1293,   136,   908,   166,   899,  1139,  1140,   487,   901,
     506,   838,   488,   489,   490,   491,   137,   912,    49,   228,
     500,   866,   138,   929,    17,   504,   921,   922,   923,   925,
      12,    13,    14,    20,   160,   170,   207,   208,   246,   247,
     284,   290,   294,   302,   309,   314,   333,   451,   453,   455,
     458,   460,   461,   462,   465,   466,  1163,  1164,  1165,  1166,
    1167,  1168,  1169,  1202,   102,   933,  1200,  1187,   444,  1302,
     952,  1308,  1184,    93,   367,   439,   966,   967,   969,   970,
    1056,   465,  1224,  1202,   449,   141,   987,    49,   991,   406,
     992,  1001,   142,   454,   997,   999,   484,   502,   445,   448,
     442,   144,  1013,   285,   335,  1248,   196,  1129,   145,  1022,
    1293,   146,  1027,  1129,  1181,   147,  1036,   502,  1032,  1208,
    1219,  1231,  1049,  1051,  1199,   449,  1186,   124,   449,   485,
    1041,    31,  1224,   148,  1070,   178,   237,   240,  1066,   872,
    1073,  1308,  1263,   149,  1082,   228,  1080,  1219,   150,  1086,
     196,  1184,   396,   454,   454,   196,   353,   355,  1098,   151,
    1110,   113,  1102,   152,  1133,  1129,   723,  1192,   220,   726,
      27,   116,   725,   451,  1171,   451,   451,   451,  1171,   451,
    1171,   451,   451,   452,   451,   451,   449,  1277,  1196,   115,
     665,   454,    62,    90,    91,   322,   454,   750,   751,   754,
    1277,  1333,    32,    35,    38,    45,    46,    65,    67,   161,
     190,   196,   198,   211,   243,   252,   265,   306,   319,   346,
     373,   380,   397,   449,   459,   476,   500,   709,   710,   714,
     729,   731,   733,   796,   801,   802,  1277,  1310,  1277,   412,
     313,   814,   110,   816,   513,  1212,  1216,  1226,   197,   841,
     252,   332,   839,   840,  1310,    24,    25,    66,    68,    70,
     104,   105,   106,   154,   156,   163,   166,   252,   254,   446,
     496,   507,   836,  1186,  1311,   153,   341,  1206,  1220,   449,
       6,  1178,  1202,  1223,  1231,   203,   223,  1246,   378,   856,
     340,   861,  1190,   866,   883,   262,   287,  1270,  1220,  1172,
     272,  1252,  1225,  1183,   231,  1155,  1156,   826,   827,   900,
    1202,   295,  1141,    97,   336,   507,  1186,   299,   905,    35,
      38,    45,    46,    92,   161,   190,   211,   265,   319,   380,
     393,   412,   476,   906,   907,   487,   902,  1139,  1139,  1139,
    1139,  1202,  1178,  1202,   867,   920,    21,   456,   467,   926,
     927,  1161,   504,   923,   924,   504,   826,  1304,   232,  1164,
     115,   943,  1188,   129,   826,   947,     9,    12,    15,    16,
     277,   278,   302,   303,   953,   957,   176,  1208,     9,    58,
     178,   241,   471,   973,   974,   975,   968,   969,  1058,  1288,
    1324,   449,  1199,  1178,  1202,   992,  1308,  1182,   826,   169,
    1003,  1159,  1004,  1005,  1219,  1188,     8,    37,  1131,  1293,
    1215,  1219,  1230,  1233,   228,  1009,  1026,  1308,   130,  1033,
    1219,  1033,   449,   449,  1040,   153,   456,   467,  1202,    49,
      38,    46,   211,   243,   265,   319,   380,   476,  1044,  1045,
    1277,  1065,  1308,  1202,   162,   289,   412,  1202,  1219,   196,
    1178,  1202,   825,  1226,  1208,  1263,   228,  1105,  1130,  1131,
     726,  1263,  1279,  1192,  1237,  1237,  1237,  1204,   241,   471,
    1237,   451,  1172,  1237,  1237,  1230,  1288,  1277,  1277,  1258,
     248,   249,  1282,   763,   204,   177,   752,  1269,  1277,   252,
     391,   157,   159,  1277,  1215,   300,  1285,  1226,    57,  1219,
    1219,   204,  1285,    32,   111,  1226,  1277,   507,   454,   805,
     272,   842,  1285,  1285,   840,   839,  1285,   163,   166,  1134,
    1135,  1136,   512,   511,  1208,  1134,   237,   425,   300,   276,
     256,  1207,  1220,  1219,  1287,   413,  1142,  1143,  1224,  1225,
    1178,   449,  1247,   856,  1200,   449,  1188,   871,   872,   382,
     364,  1142,  1277,   826,   296,  1157,   828,   826,  1139,  1277,
     252,   391,   157,   159,  1277,   124,   485,  1277,   907,  1139,
      97,    98,   903,   842,   203,  1142,   203,   868,   869,   870,
    1263,    17,   445,   928,   317,   926,  1288,   826,   129,   140,
     948,  1304,   367,   954,  1304,   449,    49,   974,   976,  1208,
       9,    58,   241,   471,   971,   972,  1208,  1059,  1309,   725,
     218,   315,  1273,  1199,  1142,   203,  1182,   642,   381,   993,
    1308,   142,   998,     8,   196,  1009,  1219,   130,  1148,  1150,
    1155,   262,   287,   826,   504,   504,  1034,  1035,  1208,  1207,
    1202,  1040,  1040,  1040,  1040,  1040,  1040,  1040,  1040,  1045,
     290,   294,  1067,  1068,  1069,  1165,  1249,  1155,   244,   412,
    1323,   425,  1300,  1300,  1081,  1308,  1219,  1142,   203,   454,
     449,     9,  1103,  1104,  1243,  1106,  1219,  1081,  1106,  1026,
       7,  1256,   507,   727,   728,  1277,   451,  1192,  1210,  1277,
    1258,   256,   755,  1228,   691,   764,   753,  1219,  1212,  1212,
    1277,  1303,  1277,  1277,    32,  1226,   817,   818,  1277,   506,
     843,  1212,  1212,  1212,   293,   295,  1137,  1138,   826,  1134,
    1251,  1220,   826,   298,  1144,  1225,  1142,  1209,  1219,  1230,
     166,   464,   874,  1314,     6,   228,   309,   463,   873,  1276,
      34,   281,   282,   283,   345,   469,   470,   474,  1253,   826,
     829,  1212,  1212,  1158,  1214,  1216,  1226,  1158,  1212,   506,
     904,  1178,  1179,  1178,  1179,   869,   309,   813,    88,   359,
     501,   927,  1160,   826,  1219,   826,   501,   955,   956,   957,
     958,  1302,   501,  1209,  1208,    49,   977,   972,   189,   977,
    1055,  1277,  1279,   315,  1178,   993,   262,   287,  1005,  1202,
     217,  1010,  1308,   826,   291,  1151,   262,  1160,  1159,  1034,
    1165,  1219,  1166,  1167,  1168,  1169,  1172,  1074,  1202,  1074,
     464,  1145,  1146,   331,  1251,  1178,   821,  1209,   314,  1208,
     114,  1107,   439,  1109,   158,   292,  1132,  1152,  1153,  1154,
    1155,   322,  1186,  1212,   728,  1191,   756,   252,   254,  1317,
     507,   692,  1219,   270,   330,   461,   466,   797,   798,   799,
    1210,   797,   798,   800,   818,    47,    32,    35,    38,    46,
      92,   111,   190,   198,   211,   243,   263,   265,   287,   288,
     319,   346,   347,   373,   380,   393,   397,   412,   438,   447,
     476,   486,   492,   844,   845,   846,  1134,   826,  1142,   826,
     295,   875,   826,  1287,  1219,   252,   254,  1322,   906,  1142,
     363,  1142,   363,  1202,   956,   103,  1267,  1304,   977,   977,
    1209,     8,    37,   978,   225,   500,  1060,  1192,  1057,  1142,
     382,    49,   262,   237,  1011,   216,   236,   262,   287,   503,
     826,   826,   826,   826,   297,  1147,  1277,  1142,  1142,   495,
     822,  1111,  1104,  1272,    96,  1108,  1272,  1145,   826,   826,
    1154,   252,   254,  1281,   178,   188,   210,   240,   757,   758,
     759,   760,   761,   762,  1228,   765,  1212,  1212,   130,  1277,
    1277,   846,    57,   412,   124,   485,  1277,     8,  1257,   845,
     826,  1219,  1179,  1179,    49,   111,   977,   459,  1275,  1275,
     338,  1182,   203,   318,  1061,  1223,  1202,  1277,  1012,  1149,
    1150,  1151,  1155,   262,   262,   262,   826,  1219,  1112,   454,
    1219,  1272,  1219,   107,   117,  1326,  1277,  1277,    55,    90,
    1326,  1327,  1311,   766,   110,  1212,  1212,  1277,  1277,  1158,
    1158,  1212,  1213,  1216,  1228,  1142,  1142,  1202,  1202,  1202,
    1277,  1182,   338,   484,  1219,  1151,   128,   167,   204,  1113,
    1114,  1115,  1117,  1121,  1123,  1124,  1125,  1261,  1270,  1219,
    1277,  1228,  1228,   210,  1277,  1277,   209,   252,   254,   285,
     306,   334,   416,   433,   454,   475,   494,   502,   709,   714,
     715,   729,   731,   733,   767,   768,   772,   773,   776,   777,
     778,   779,   780,   781,   786,   787,   788,  1310,  1311,   454,
    1210,  1212,  1000,  1277,  1159,    37,  1257,   341,   108,  1228,
    1228,  1228,   221,  1274,   300,   301,  1286,  1258,   209,  1226,
     504,  1277,  1287,  1277,  1277,  1219,   286,   330,   782,   783,
    1228,   330,   784,   785,  1228,  1286,  1258,  1000,   369,   420,
    1299,   130,   423,  1122,  1288,  1278,  1277,   718,  1159,  1205,
    1203,  1205,    54,    90,   322,   326,   327,   368,   384,   385,
     769,  1326,  1327,  1328,  1329,  1330,  1331,  1332,   120,   196,
    1226,   783,  1226,   785,  1278,  1219,   162,   166,  1313,     9,
    1118,  1119,  1189,   783,  1303,  1251,   375,   774,  1205,   188,
     188,   210,   188,   210,   177,   770,  1219,   770,  1205,   338,
    1291,   307,   339,   360,  1120,  1119,   720,  1288,   314,   771,
     771,    49,  1288,   307,  1223,   427,   716,   177,   775,  1219,
     322,  1205,   171,   225,   233,   318,  1116,  1182,  1226
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1806 of yacc.c  */
#line 1390 "parser.y"
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
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 1401 "parser.y"
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
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 1437 "parser.y"
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
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 1492 "parser.y"
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[(2) - (3)]))) {
		s = (char *)(CB_LITERAL ((yyvsp[(2) - (3)]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[(2) - (3)])));
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
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 1521 "parser.y"
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[(2) - (3)]))) {
		s = (char *)(CB_LITERAL ((yyvsp[(2) - (3)]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[(2) - (3)])));
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
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 1554 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 1560 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 1572 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 1582 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[(3) - (4)]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[(3) - (4)]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[(3) - (4)])));
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
	current_program->program_id = cb_build_program_id ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]), 0);
	current_program->prog_type = CB_PROGRAM_TYPE;
	if (!main_flag_set) {
		main_flag_set = 1;
		current_program->flag_main = !!cobc_flag_main;
	}
  }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 1613 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 1620 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[(3) - (5)]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[(3) - (5)]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[(3) - (5)])));
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
	current_program->program_id = cb_build_program_id ((yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), 1);
	current_program->prog_type = CB_FUNCTION_TYPE;
	current_program->flag_recursive = 1;
	cobc_cs_check = 0;
  }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 1656 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 1657 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 1666 "parser.y"
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 1675 "parser.y"
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 1689 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 1693 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 1703 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 1712 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 1737 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 1755 "parser.y"
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 1768 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 1797 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 1804 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 1811 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 1818 "parser.y"
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 1829 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 1833 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 1837 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 1841 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 1855 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 1860 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 1868 "parser.y"
    {
	yyerrok;
  }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 1880 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 1884 "parser.y"
    {
	cb_tree		x;

	if ((yyvsp[(3) - (3)])) {
		x = (yyvsp[(3) - (3)]);
	} else {
		x = (yyvsp[(2) - (3)]);
	}
	current_program->user_spec_list =
		cb_list_add (current_program->user_spec_list, x);
  }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 1905 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 1909 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 1916 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 1921 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 1932 "parser.y"
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 1946 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 1977 "parser.y"
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
		strncpy(system_name, CB_NAME ((yyvsp[(1) - (1)])), 15);
		if (system_name [6] == '_') {
			system_name [6] = ' ';
		}
		/* lookup system name */
		save_tree = lookup_system_name (system_name);
		if (!save_tree) {
			cb_error_x ((yyvsp[(1) - (1)]), _("Invalid system-name '%s'"), system_name);
		}
	}
  }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 2005 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 2015 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (save_tree, _("Invalid special names clause"));
		} else if (CB_VALID_TREE ((yyvsp[(3) - (3)]))) {
			CB_SYSTEM_NAME(save_tree)->value = (yyvsp[(1) - (3)]);
			cb_define ((yyvsp[(3) - (3)]), save_tree);
			CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
					(yyvsp[(3) - (3)]), save_tree);
		}
	}
  }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 2028 "parser.y"
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[(2) - (3)]))) {
		cb_define ((yyvsp[(2) - (3)]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[(2) - (3)]), save_tree);
	}
  }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 2044 "parser.y"
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(3) - (3)]), save_tree, (yyvsp[(1) - (3)]) == cb_int1);
	if (x) {
		if ((yyvsp[(1) - (3)]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(3) - (3)]), x);
	}
  }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 2059 "parser.y"
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(4) - (4)]), save_tree, (yyvsp[(2) - (4)]) == cb_int1);
	if (x) {
		if ((yyvsp[(2) - (4)]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(4) - (4)]), x);
	}
  }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 2079 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		(yyval) = NULL;
	} else {
		/* Returns null on error */
		(yyval) = cb_build_alphabet_name ((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 2092 "parser.y"
    {
	if ((yyvsp[(3) - (5)])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[(3) - (5)]));
	}
	cobc_cs_check = 0;
  }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 2103 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 2109 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 2115 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 2121 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 2127 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 2133 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 2143 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 2147 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 2154 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 2158 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 2162 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 2166 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 2173 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 2177 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 2183 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 2184 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 2185 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 2186 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 2187 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 2188 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 2192 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 2193 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 2201 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else if ((yyvsp[(1) - (2)])) {
		CB_CHAIN_PAIR (current_program->symbolic_char_list, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 2215 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 2219 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 2227 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 2234 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 2238 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	} else {
		(yyval) = (yyvsp[(1) - (2)]);
	}
  }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 2249 "parser.y"
    {
	cb_tree		l1;
	cb_tree		l2;

	if (cb_list_length ((yyvsp[(1) - (3)])) != cb_list_length ((yyvsp[(3) - (3)]))) {
		cb_error (_("Invalid SYMBOLIC clause"));
		(yyval) = NULL;
	} else {
		l1 = (yyvsp[(1) - (3)]);
		l2 = (yyvsp[(3) - (3)]);
		for (; l1; l1 = CB_CHAIN (l1), l2 = CB_CHAIN (l2)) {
			CB_PURPOSE (l1) = CB_VALUE (l2);
		}
		(yyval) = (yyvsp[(1) - (3)]);
	}
  }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 2269 "parser.y"
    {
	if ((yyvsp[(1) - (1)]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 2277 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) == NULL) {
		(yyval) = (yyvsp[(1) - (2)]);
	} else {
		(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 2287 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 2288 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 2295 "parser.y"
    {
	cb_tree		x;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		x = cb_build_class_name ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
		if (x) {
			current_program->class_name_list =
				cb_list_add (current_program->class_name_list, x);
		}
	}
  }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 2315 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 2316 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 2321 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 2325 "parser.y"
    {
	if (CB_TREE_CLASS ((yyvsp[(1) - (3)])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[(1) - (3)])) && CB_LITERAL ((yyvsp[(1) - (3)]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (CB_TREE_CLASS ((yyvsp[(3) - (3)])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[(3) - (3)])) && CB_LITERAL ((yyvsp[(3) - (3)]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (literal_value ((yyvsp[(1) - (3)])) <= literal_value ((yyvsp[(3) - (3)]))) {
		(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	} else {
		(yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(1) - (3)]));
	}
  }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 2346 "parser.y"
    {
	cb_tree	l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		l = cb_build_locale_name ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
		if (l) {
			current_program->locale_list =
				cb_list_add (current_program->locale_list, l);
		}
	}
  }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 2369 "parser.y"
    {
	unsigned char	*s = CB_LITERAL ((yyvsp[(4) - (5)]))->data;
	unsigned int	error_ind = 0;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		error_ind = 1;
	}
	check_repeated ("CURRENCY", SYN_CLAUSE_1);
	if ((yyvsp[(5) - (5)])) {
		PENDING ("PICTURE SYMBOL");
	}
	if (CB_LITERAL ((yyvsp[(4) - (5)]))->size != 1) {
		cb_error_x ((yyvsp[(4) - (5)]), _("Invalid currency sign '%s'"), (char *)s);
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
		cb_error_x ((yyvsp[(4) - (5)]), _("Invalid currency sign '%s'"), (char *)s);
		break;
	default:
		if (!error_ind) {
			current_program->currency_symbol = s[0];
		}
		break;
	}
  }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 2450 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 2454 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 2463 "parser.y"
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
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 2482 "parser.y"
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
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 2498 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3);
		current_program->cursor_pos = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 2516 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CRT STATUS", SYN_CLAUSE_4);
		current_program->crt_status = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 2534 "parser.y"
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
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 2551 "parser.y"
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
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 2568 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 2576 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 2585 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 2600 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_FILE_CONTROL, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[(3) - (3)]))) {
		YYERROR;
	}

	/* Build new file */
	current_file = build_file ((yyvsp[(3) - (3)]));
	current_file->optional = CB_INTEGER ((yyvsp[(2) - (3)]))->val;

	/* Add file to current program list */
	CB_ADD_TO_CHAIN (CB_TREE (current_file), current_program->file_list);
  }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 2617 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 2621 "parser.y"
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 2655 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 2661 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 2671 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdout", (size_t)6);
		current_file->special = COB_SELECT_STDOUT;
	}
  }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 2684 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdin", (size_t)5);
		current_file->special = COB_SELECT_STDIN;
	}
  }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 2697 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("LPT1", (size_t)4);
	}
  }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 2720 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 2727 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 2740 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 2752 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 2759 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 2760 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 2761 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 2769 "parser.y"
    {
	struct cb_alt_key *p;
	struct cb_alt_key *l;

	p = cobc_parse_malloc (sizeof (struct cb_alt_key));
	p->key = (yyvsp[(5) - (7)]);
	p->duplicates = CB_INTEGER ((yyvsp[(6) - (7)]))->val;
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
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 2792 "parser.y"
    { }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 2795 "parser.y"
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 2800 "parser.y"
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 2810 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 2821 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 2836 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 2844 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 2849 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 2854 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 2863 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 2867 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 2883 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 2888 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 2893 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 2898 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 2909 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 2920 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 2930 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 2937 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 2938 "parser.y"
    { PENDING ("SPLIT KEYS"); }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 2939 "parser.y"
    { PENDING ("SPLIT KEYS"); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 2946 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 2957 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 2971 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 2978 "parser.y"
    { (yyval) = NULL; }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 2979 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 2980 "parser.y"
    { (yyval) = NULL; }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 2989 "parser.y"
    {
	yyerrok;
  }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 3008 "parser.y"
    {
	cb_tree l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	switch (CB_INTEGER ((yyvsp[(2) - (5)]))->val) {
	case 0:
		/* SAME AREA */
		break;
	case 1:
		/* SAME RECORD */
		for (l = (yyvsp[(5) - (5)]); l; l = CB_CHAIN (l)) {
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
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 3035 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 3036 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 3037 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 3038 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 3045 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 3050 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 3077 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 3086 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 3100 "parser.y"
    {
	if (CB_VALID_TREE (current_file)) {
		if (CB_VALID_TREE ((yyvsp[(2) - (2)]))) {
			if (current_file->reports) {
				cb_error (_("RECORD description invalid with REPORT"));
			} else {
				finalize_file (current_file, CB_FIELD ((yyvsp[(2) - (2)])));
			}
		} else if (!current_file->reports) {
			cb_error (_("RECORD description missing or invalid"));
		}
	}
  }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 3119 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION,
			       COBC_HD_FILE_SECTION, 0, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)])) || cb_ref ((yyvsp[(2) - (2)])) == cb_error_node) {
		YYERROR;
	}
	current_file = CB_FILE (cb_ref ((yyvsp[(2) - (2)])));
	if (CB_VALID_TREE (current_file)) {
		if ((yyvsp[(1) - (2)])) {
			current_file->organization = COB_ORG_SORT;
		}
	}
  }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 3136 "parser.y"
    {
	yyerrok;
  }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 3143 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 3147 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 3158 "parser.y"
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 3168 "parser.y"
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
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 3198 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 3211 "parser.y"
    {
	check_repeated ("RECORD", SYN_CLAUSE_4);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_max = cb_get_int ((yyvsp[(3) - (4)]));
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
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 3231 "parser.y"
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_min = cb_get_int ((yyvsp[(3) - (6)]));
		current_file->record_max = cb_get_int ((yyvsp[(5) - (6)]));
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
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 3266 "parser.y"
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4);
	current_file->record_min = (yyvsp[(6) - (9)]) ? cb_get_int ((yyvsp[(6) - (9)])) : 0;
	current_file->record_max = (yyvsp[(7) - (9)]) ? cb_get_int ((yyvsp[(7) - (9)])) : 0;
	if ((yyvsp[(6) - (9)]) && current_file->record_min < 0)  {
		current_file->record_min = 0;
		error_ind = 1;
	}
	if ((yyvsp[(7) - (9)]) && current_file->record_max < 1)  {
		current_file->record_max = 1;
		error_ind = 1;
	}
	if ((yyvsp[(7) - (9)]) && current_file->record_max > MAX_FD_RECORD)  {
		current_file->record_max = MAX_FD_RECORD;
		cb_error (_("RECORD size exceeds maximum allowed (%d)"),
			  MAX_FD_RECORD);
		error_ind = 1;
	}
	if (((yyvsp[(6) - (9)]) || (yyvsp[(7) - (9)])) && current_file->record_max <= current_file->record_min)  {
		error_ind = 1;
	}
	if (error_ind) {
		cb_error (_("RECORD clause invalid"));
	}
  }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 3297 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 3303 "parser.y"
    { (yyval) = NULL; }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 3304 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 3308 "parser.y"
    { (yyval) = NULL; }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 3309 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 3317 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 3328 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 3333 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	}
  }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 3356 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 3368 "parser.y"
    {
	check_repeated ("LINAGE", SYN_CLAUSE_8);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("LINAGE clause with wrong file type"));
	} else {
		current_file->linage = (yyvsp[(3) - (5)]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		if (current_linage == 0) {
			linage_file = current_file;
		}
		current_linage++;
	}
  }
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 3396 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 3403 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 3410 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 3419 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 3431 "parser.y"
    {
	check_repeated ("CODE SET", SYN_CLAUSE_10);
	if (CB_VALID_TREE ((yyvsp[(3) - (3)]))) {
		cb_tree			x;
		struct cb_alphabet_name	*al;

		x = cb_ref ((yyvsp[(3) - (3)]));
		if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
		    current_file->organization != COB_ORG_SEQUENTIAL) {
			cb_error (_("CODE-SET clause invalid for file type"));
		}
		if (!CB_ALPHABET_NAME_P (x)) {
			cb_error_x ((yyvsp[(3) - (3)]), _("Alphabet-name is expected '%s'"), cb_name ((yyvsp[(3) - (3)])));
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
					cb_warning_x ((yyvsp[(3) - (3)]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[(3) - (3)])));
				}
				break;
#else
			case CB_ALPHABET_EBCDIC:
			case CB_ALPHABET_CUSTOM:
				current_file->code_set = al;
				break;
			default:
				if (warningopt) {
					cb_warning_x ((yyvsp[(3) - (3)]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[(3) - (3)])));
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
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 3483 "parser.y"
    {
	check_repeated ("REPORT", SYN_CLAUSE_11);
	PENDING("REPORT WRITER");
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = (yyvsp[(2) - (2)]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	}
  }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 3503 "parser.y"
    {
	current_report = build_report ((yyvsp[(1) - (1)]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 3513 "parser.y"
    {
	current_report = build_report ((yyvsp[(2) - (2)]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 3553 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 3559 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 3568 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 3571 "parser.y"
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 3577 "parser.y"
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 3597 "parser.y"
    {
	cb_tree x;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (2)]));
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	} else {
		current_field = CB_FIELD (x);
		check_pic_duplicate = 0;
	}
  }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 3612 "parser.y"
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
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 3632 "parser.y"
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (3)]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 3645 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 3652 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 3658 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 3664 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 3673 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 3682 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 3686 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 3697 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 3698 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 3699 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 3700 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 3705 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 3709 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 3713 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 3717 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 3721 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 3725 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 3729 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 3733 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 3737 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 3741 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 3745 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 3749 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 3753 "parser.y"
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 3785 "parser.y"
    {
	cb_tree x;
	int	level;

	cobc_cs_check = 0;
	level = cb_get_level ((yyvsp[(1) - (5)]));
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (5)]));
	if (level != 1) {
		cb_error (_("CONSTANT item not at 01 level"));
	} else if ((yyvsp[(5) - (5)])) {
		x = cb_build_constant ((yyvsp[(2) - (5)]), (yyvsp[(5) - (5)]));
		CB_FIELD (x)->flag_item_78 = 1;
		CB_FIELD (x)->level = 1;
		cb_needs_01 = 1;
		if ((yyvsp[(4) - (5)])) {
			CB_FIELD (x)->flag_is_global = 1;
		}
		/* Ignore return value */
		(void)cb_validate_78_item (CB_FIELD (x), 0);
	}
  }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 3811 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 3815 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 3823 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 3829 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 3857 "parser.y"
    {
	check_pic_repeated ("REDEFINES", SYN_CLAUSE_1);
	if ((yyvsp[(0) - (2)]) != NULL) {
		if (cb_relaxed_syntax_check) {
			cb_warning_x ((yyvsp[(2) - (2)]), _("REDEFINES clause should follow entry-name"));
		} else {
			cb_error_x ((yyvsp[(2) - (2)]), _("REDEFINES clause must follow entry-name"));
		}
	}

	current_field->redefines = cb_resolve_redefines (current_field, (yyvsp[(2) - (2)]));
	if (current_field->redefines == NULL) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
		YYERROR;
	}
  }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 3881 "parser.y"
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
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 3908 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 3912 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 3921 "parser.y"
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
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 3946 "parser.y"
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 3962 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 3966 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 3970 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 3974 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 3978 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 3982 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 3986 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 3990 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 3994 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 3998 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 4002 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 4006 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 4010 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 4015 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 4020 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 4024 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 4028 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 433:

/* Line 1806 of yacc.c  */
#line 4036 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 4040 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 435:

/* Line 1806 of yacc.c  */
#line 4044 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 436:

/* Line 1806 of yacc.c  */
#line 4052 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 437:

/* Line 1806 of yacc.c  */
#line 4056 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 438:

/* Line 1806 of yacc.c  */
#line 4060 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 4064 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 4068 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 441:

/* Line 1806 of yacc.c  */
#line 4072 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 4076 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 4080 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 4084 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 445:

/* Line 1806 of yacc.c  */
#line 4092 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 446:

/* Line 1806 of yacc.c  */
#line 4100 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 4104 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 4108 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 4112 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 4116 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 4120 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 4140 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 4146 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 458:

/* Line 1806 of yacc.c  */
#line 4159 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
	if (current_field->depending && !((yyvsp[(3) - (6)]))) {
		cb_verify (cb_odo_without_to, "ODO without TO clause");
	}
	current_field->occurs_min = (yyvsp[(3) - (6)]) ? cb_get_int ((yyvsp[(2) - (6)])) : 1;
	current_field->occurs_max = (yyvsp[(3) - (6)]) ? cb_get_int ((yyvsp[(3) - (6)])) : cb_get_int ((yyvsp[(2) - (6)]));
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	current_field->flag_occurs = 1;
  }
    break;

  case 460:

/* Line 1806 of yacc.c  */
#line 4177 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 461:

/* Line 1806 of yacc.c  */
#line 4187 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
	if (current_field->depending && !((yyvsp[(3) - (7)]))) {
		cb_verify (cb_odo_without_to, "ODO without TO clause");
	}
	current_field->occurs_min = (yyvsp[(3) - (7)]) ? cb_get_int ((yyvsp[(2) - (7)])) : 1;
	current_field->occurs_max = (yyvsp[(3) - (7)]) ? cb_get_int ((yyvsp[(3) - (7)])) : cb_get_int ((yyvsp[(2) - (7)]));
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
    break;

  case 462:

/* Line 1806 of yacc.c  */
#line 4208 "parser.y"
    {
	current_field->occurs_min = (yyvsp[(4) - (8)]) ? cb_get_int ((yyvsp[(4) - (8)])) : 0;
	PENDING("OCCURS with DYNAMIC capacity");
	current_field->occurs_max = (yyvsp[(5) - (8)]) ? cb_get_int ((yyvsp[(5) - (8)])) : 0;
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
    break;

  case 463:

/* Line 1806 of yacc.c  */
#line 4227 "parser.y"
    { (yyval) = NULL; }
    break;

  case 464:

/* Line 1806 of yacc.c  */
#line 4228 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 465:

/* Line 1806 of yacc.c  */
#line 4232 "parser.y"
    { (yyval) = NULL; }
    break;

  case 466:

/* Line 1806 of yacc.c  */
#line 4233 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 468:

/* Line 1806 of yacc.c  */
#line 4238 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 470:

/* Line 1806 of yacc.c  */
#line 4245 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 472:

/* Line 1806 of yacc.c  */
#line 4253 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 473:

/* Line 1806 of yacc.c  */
#line 4260 "parser.y"
    {
	if ((yyvsp[(1) - (1)])) {
		cb_tree		l;
		struct cb_key	*keys;
		int		i;
		int		nkeys;

		l = (yyvsp[(1) - (1)]);
		nkeys = cb_list_length ((yyvsp[(1) - (1)]));
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
    break;

  case 474:

/* Line 1806 of yacc.c  */
#line 4283 "parser.y"
    { (yyval) = NULL; }
    break;

  case 475:

/* Line 1806 of yacc.c  */
#line 4286 "parser.y"
    {
	cb_tree l;

	for (l = (yyvsp[(5) - (5)]); l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[(2) - (5)]);
		if (qualifier && !CB_REFERENCE(CB_VALUE(l))->chain &&
		    strcasecmp (CB_NAME(CB_VALUE(l)), CB_NAME(qualifier))) {
			CB_REFERENCE(CB_VALUE(l))->chain = qualifier;
		}
	}
	(yyval) = cb_list_append ((yyvsp[(1) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 476:

/* Line 1806 of yacc.c  */
#line 4301 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 477:

/* Line 1806 of yacc.c  */
#line 4302 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 479:

/* Line 1806 of yacc.c  */
#line 4307 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 480:

/* Line 1806 of yacc.c  */
#line 4313 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 481:

/* Line 1806 of yacc.c  */
#line 4315 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 482:

/* Line 1806 of yacc.c  */
#line 4320 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 483:

/* Line 1806 of yacc.c  */
#line 4331 "parser.y"
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
    break;

  case 484:

/* Line 1806 of yacc.c  */
#line 4342 "parser.y"
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
    break;

  case 485:

/* Line 1806 of yacc.c  */
#line 4353 "parser.y"
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 486:

/* Line 1806 of yacc.c  */
#line 4364 "parser.y"
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
    break;

  case 487:

/* Line 1806 of yacc.c  */
#line 4392 "parser.y"
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 489:

/* Line 1806 of yacc.c  */
#line 4400 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 490:

/* Line 1806 of yacc.c  */
#line 4401 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 491:

/* Line 1806 of yacc.c  */
#line 4405 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:

/* Line 1806 of yacc.c  */
#line 4406 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 494:

/* Line 1806 of yacc.c  */
#line 4411 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 495:

/* Line 1806 of yacc.c  */
#line 4424 "parser.y"
    {
	check_pic_repeated ("RENAMES", SYN_CLAUSE_13);
	if (cb_ref ((yyvsp[(2) - (2)])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[(2) - (2)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(2) - (2)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[(2) - (2)])));
			current_field->pic = current_field->redefines->pic;
		}
	}
  }
    break;

  case 496:

/* Line 1806 of yacc.c  */
#line 4437 "parser.y"
    {
	check_pic_repeated ("RENAMES", SYN_CLAUSE_13);
	if (cb_ref ((yyvsp[(2) - (4)])) != cb_error_node && cb_ref ((yyvsp[(4) - (4)])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[(2) - (4)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(2) - (4)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else if (CB_FIELD (cb_ref ((yyvsp[(4) - (4)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(4) - (4)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[(2) - (4)])));
			current_field->rename_thru = CB_FIELD (cb_ref ((yyvsp[(4) - (4)])));
		}
	}
  }
    break;

  case 497:

/* Line 1806 of yacc.c  */
#line 4458 "parser.y"
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
    break;

  case 498:

/* Line 1806 of yacc.c  */
#line 4467 "parser.y"
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
    break;

  case 500:

/* Line 1806 of yacc.c  */
#line 4482 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
    break;

  case 501:

/* Line 1806 of yacc.c  */
#line 4491 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 503:

/* Line 1806 of yacc.c  */
#line 4503 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 504:

/* Line 1806 of yacc.c  */
#line 4509 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 506:

/* Line 1806 of yacc.c  */
#line 4520 "parser.y"
    {
	PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
    break;

  case 510:

/* Line 1806 of yacc.c  */
#line 4536 "parser.y"
    {
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[(2) - (2)])));
	}
	check_duplicate = 0;
  }
    break;

  case 514:

/* Line 1806 of yacc.c  */
#line 4551 "parser.y"
    {
	yyerrok;
  }
    break;

  case 515:

/* Line 1806 of yacc.c  */
#line 4558 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 516:

/* Line 1806 of yacc.c  */
#line 4563 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
    break;

  case 519:

/* Line 1806 of yacc.c  */
#line 4574 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
    break;

  case 523:

/* Line 1806 of yacc.c  */
#line 4593 "parser.y"
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
    break;

  case 524:

/* Line 1806 of yacc.c  */
#line 4629 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (1)]));
  }
    break;

  case 525:

/* Line 1806 of yacc.c  */
#line 4633 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
	current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
  }
    break;

  case 526:

/* Line 1806 of yacc.c  */
#line 4638 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (2)]));
  }
    break;

  case 534:

/* Line 1806 of yacc.c  */
#line 4658 "parser.y"
    {
	current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 535:

/* Line 1806 of yacc.c  */
#line 4665 "parser.y"
    {
	current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 536:

/* Line 1806 of yacc.c  */
#line 4672 "parser.y"
    {
	current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 537:

/* Line 1806 of yacc.c  */
#line 4679 "parser.y"
    {
	current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 538:

/* Line 1806 of yacc.c  */
#line 4686 "parser.y"
    {
	current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 541:

/* Line 1806 of yacc.c  */
#line 4697 "parser.y"
    {
	check_pic_duplicate = 0;
  }
    break;

  case 561:

/* Line 1806 of yacc.c  */
#line 4728 "parser.y"
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
    break;

  case 574:

/* Line 1806 of yacc.c  */
#line 4754 "parser.y"
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
    break;

  case 575:

/* Line 1806 of yacc.c  */
#line 4761 "parser.y"
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
  }
    break;

  case 580:

/* Line 1806 of yacc.c  */
#line 4777 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
  }
    break;

  case 582:

/* Line 1806 of yacc.c  */
#line 4788 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
  }
    break;

  case 585:

/* Line 1806 of yacc.c  */
#line 4800 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
  }
    break;

  case 597:

/* Line 1806 of yacc.c  */
#line 4833 "parser.y"
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
  }
    break;

  case 598:

/* Line 1806 of yacc.c  */
#line 4840 "parser.y"
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
  }
    break;

  case 599:

/* Line 1806 of yacc.c  */
#line 4847 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
    break;

  case 601:

/* Line 1806 of yacc.c  */
#line 4856 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 602:

/* Line 1806 of yacc.c  */
#line 4863 "parser.y"
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
    break;

  case 608:

/* Line 1806 of yacc.c  */
#line 4888 "parser.y"
    {
	cb_tree	x;
	int	flags;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (2)]));
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
    break;

  case 609:

/* Line 1806 of yacc.c  */
#line 4919 "parser.y"
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
    break;

  case 610:

/* Line 1806 of yacc.c  */
#line 4948 "parser.y"
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[(1) - (3)]));
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
    break;

  case 613:

/* Line 1806 of yacc.c  */
#line 4971 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 614:

/* Line 1806 of yacc.c  */
#line 4975 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 615:

/* Line 1806 of yacc.c  */
#line 4979 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 616:

/* Line 1806 of yacc.c  */
#line 4983 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 617:

/* Line 1806 of yacc.c  */
#line 4987 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 618:

/* Line 1806 of yacc.c  */
#line 4991 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 619:

/* Line 1806 of yacc.c  */
#line 4995 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 620:

/* Line 1806 of yacc.c  */
#line 4999 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 621:

/* Line 1806 of yacc.c  */
#line 5003 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 622:

/* Line 1806 of yacc.c  */
#line 5007 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 623:

/* Line 1806 of yacc.c  */
#line 5011 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	PENDING ("OVERLINE");
  }
    break;

  case 624:

/* Line 1806 of yacc.c  */
#line 5016 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	PENDING ("LEFTLINE");
  }
    break;

  case 625:

/* Line 1806 of yacc.c  */
#line 5021 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 626:

/* Line 1806 of yacc.c  */
#line 5025 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 627:

/* Line 1806 of yacc.c  */
#line 5029 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
	PENDING ("REQUIRED");
  }
    break;

  case 628:

/* Line 1806 of yacc.c  */
#line 5034 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
	PENDING ("FULL");
  }
    break;

  case 629:

/* Line 1806 of yacc.c  */
#line 5039 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 630:

/* Line 1806 of yacc.c  */
#line 5044 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 631:

/* Line 1806 of yacc.c  */
#line 5048 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 632:

/* Line 1806 of yacc.c  */
#line 5052 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 633:

/* Line 1806 of yacc.c  */
#line 5057 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 634:

/* Line 1806 of yacc.c  */
#line 5062 "parser.y"
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 635:

/* Line 1806 of yacc.c  */
#line 5067 "parser.y"
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 644:

/* Line 1806 of yacc.c  */
#line 5080 "parser.y"
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 645:

/* Line 1806 of yacc.c  */
#line 5087 "parser.y"
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 646:

/* Line 1806 of yacc.c  */
#line 5092 "parser.y"
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 651:

/* Line 1806 of yacc.c  */
#line 5111 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 652:

/* Line 1806 of yacc.c  */
#line 5115 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 653:

/* Line 1806 of yacc.c  */
#line 5119 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 654:

/* Line 1806 of yacc.c  */
#line 5126 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 655:

/* Line 1806 of yacc.c  */
#line 5130 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 656:

/* Line 1806 of yacc.c  */
#line 5134 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 657:

/* Line 1806 of yacc.c  */
#line 5142 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_23);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 658:

/* Line 1806 of yacc.c  */
#line 5153 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 660:

/* Line 1806 of yacc.c  */
#line 5162 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
    break;

  case 661:

/* Line 1806 of yacc.c  */
#line 5172 "parser.y"
    {
	if (current_program->flag_main && !current_program->flag_chained && (yyvsp[(3) - (7)])) {
		cb_error (_("Executable program requested but PROCEDURE/ENTRY has USING clause"));
	}
	/* Main entry point */
	emit_entry (current_program->program_id, 0, (yyvsp[(3) - (7)]));
	current_program->num_proc_params = cb_list_length ((yyvsp[(3) - (7)]));
	if (current_program->source_name) {
		emit_entry (current_program->source_name, 1, (yyvsp[(3) - (7)]));
	}
  }
    break;

  case 662:

/* Line 1806 of yacc.c  */
#line 5184 "parser.y"
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
    break;

  case 663:

/* Line 1806 of yacc.c  */
#line 5199 "parser.y"
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
    break;

  case 665:

/* Line 1806 of yacc.c  */
#line 5232 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 666:

/* Line 1806 of yacc.c  */
#line 5236 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 667:

/* Line 1806 of yacc.c  */
#line 5241 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 668:

/* Line 1806 of yacc.c  */
#line 5249 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 669:

/* Line 1806 of yacc.c  */
#line 5258 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 670:

/* Line 1806 of yacc.c  */
#line 5268 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 671:

/* Line 1806 of yacc.c  */
#line 5270 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 672:

/* Line 1806 of yacc.c  */
#line 5275 "parser.y"
    {
	cb_tree		x;
	struct cb_field	*f;
	
	x = cb_build_identifier ((yyvsp[(4) - (4)]), 0);
	if ((yyvsp[(3) - (4)]) == cb_int1 && CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
		f = CB_FIELD (cb_ref (x));
		f->flag_is_pdiv_opt = 1;
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), x);
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 674:

/* Line 1806 of yacc.c  */
#line 5292 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 675:

/* Line 1806 of yacc.c  */
#line 5296 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 677:

/* Line 1806 of yacc.c  */
#line 5308 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 678:

/* Line 1806 of yacc.c  */
#line 5316 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 679:

/* Line 1806 of yacc.c  */
#line 5324 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 680:

/* Line 1806 of yacc.c  */
#line 5332 "parser.y"
    {
	unsigned char *s = CB_LITERAL ((yyvsp[(4) - (4)]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[(4) - (4)]))->size != 1) {
		cb_error_x ((yyvsp[(4) - (4)]), _("Invalid value for SIZE"));
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
			cb_error_x ((yyvsp[(4) - (4)]), _("Invalid value for SIZE"));
			break;
		}
	}
  }
    break;

  case 681:

/* Line 1806 of yacc.c  */
#line 5361 "parser.y"
    {
	unsigned char *s = CB_LITERAL ((yyvsp[(3) - (3)]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[(3) - (3)]))->size != 1) {
		cb_error_x ((yyvsp[(3) - (3)]), _("Invalid value for SIZE"));
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
			cb_error_x ((yyvsp[(3) - (3)]), _("Invalid value for SIZE"));
			break;
		}
	}
  }
    break;

  case 682:

/* Line 1806 of yacc.c  */
#line 5393 "parser.y"
    {
	(yyval) = cb_int0; 
  }
    break;

  case 683:

/* Line 1806 of yacc.c  */
#line 5397 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 684:

/* Line 1806 of yacc.c  */
#line 5409 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 685:

/* Line 1806 of yacc.c  */
#line 5415 "parser.y"
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[(2) - (2)])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[(2) - (2)]));
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
			current_program->returning = (yyvsp[(2) - (2)]);
		}
	}
  }
    break;

  case 687:

/* Line 1806 of yacc.c  */
#line 5443 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 688:

/* Line 1806 of yacc.c  */
#line 5449 "parser.y"
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
    break;

  case 693:

/* Line 1806 of yacc.c  */
#line 5487 "parser.y"
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
    break;

  case 695:

/* Line 1806 of yacc.c  */
#line 5505 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 696:

/* Line 1806 of yacc.c  */
#line 5515 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (4)]), 0) == cb_error_node) {
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
	current_section = CB_LABEL (cb_build_label ((yyvsp[(1) - (4)]), NULL));
	if ((yyvsp[(3) - (4)])) {
		current_section->segment = cb_get_int ((yyvsp[(3) - (4)]));
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
    break;

  case 697:

/* Line 1806 of yacc.c  */
#line 5559 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 700:

/* Line 1806 of yacc.c  */
#line 5570 "parser.y"
    {
	cb_tree label;

	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (2)]), 1) == cb_error_node) {
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
	current_paragraph = CB_LABEL (cb_build_label ((yyvsp[(1) - (2)]), current_section));
	current_paragraph->flag_declaratives =!! in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_real_label = !in_debugging;
	current_paragraph->segment = current_section->segment;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
  }
    break;

  case 701:

/* Line 1806 of yacc.c  */
#line 5618 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (1)]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[(1) - (1)]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
	}
	YYERROR;
  }
    break;

  case 702:

/* Line 1806 of yacc.c  */
#line 5630 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 703:

/* Line 1806 of yacc.c  */
#line 5634 "parser.y"
    {
	if (in_declaratives) {
		cb_error (_("SECTION segment invalid within DECLARATIVE"));
	}
	if (cb_verify (cb_section_segments, "SECTION segment")) {
		current_program->flag_segments = 1;
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		(yyval) = NULL;
	}
  }
    break;

  case 704:

/* Line 1806 of yacc.c  */
#line 5652 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 705:

/* Line 1806 of yacc.c  */
#line 5657 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 706:

/* Line 1806 of yacc.c  */
#line 5662 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 707:

/* Line 1806 of yacc.c  */
#line 5670 "parser.y"
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
    break;

  case 708:

/* Line 1806 of yacc.c  */
#line 5697 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 709:

/* Line 1806 of yacc.c  */
#line 5701 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 759:

/* Line 1806 of yacc.c  */
#line 5757 "parser.y"
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
    break;

  case 760:

/* Line 1806 of yacc.c  */
#line 5771 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 761:

/* Line 1806 of yacc.c  */
#line 5782 "parser.y"
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}

  }
    break;

  case 763:

/* Line 1806 of yacc.c  */
#line 5799 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  }
    break;

  case 764:

/* Line 1806 of yacc.c  */
#line 5804 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 765:

/* Line 1806 of yacc.c  */
#line 5808 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 766:

/* Line 1806 of yacc.c  */
#line 5812 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 767:

/* Line 1806 of yacc.c  */
#line 5817 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 768:

/* Line 1806 of yacc.c  */
#line 5822 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 769:

/* Line 1806 of yacc.c  */
#line 5827 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 770:

/* Line 1806 of yacc.c  */
#line 5832 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 771:

/* Line 1806 of yacc.c  */
#line 5836 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 772:

/* Line 1806 of yacc.c  */
#line 5840 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 773:

/* Line 1806 of yacc.c  */
#line 5844 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 774:

/* Line 1806 of yacc.c  */
#line 5848 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 775:

/* Line 1806 of yacc.c  */
#line 5853 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 776:

/* Line 1806 of yacc.c  */
#line 5857 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 777:

/* Line 1806 of yacc.c  */
#line 5861 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 778:

/* Line 1806 of yacc.c  */
#line 5865 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 779:

/* Line 1806 of yacc.c  */
#line 5869 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 780:

/* Line 1806 of yacc.c  */
#line 5873 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 781:

/* Line 1806 of yacc.c  */
#line 5877 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 783:

/* Line 1806 of yacc.c  */
#line 5885 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 786:

/* Line 1806 of yacc.c  */
#line 5896 "parser.y"
    { (yyval) = NULL; }
    break;

  case 787:

/* Line 1806 of yacc.c  */
#line 5897 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 788:

/* Line 1806 of yacc.c  */
#line 5901 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 789:

/* Line 1806 of yacc.c  */
#line 5902 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); }
    break;

  case 790:

/* Line 1806 of yacc.c  */
#line 5903 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); }
    break;

  case 791:

/* Line 1806 of yacc.c  */
#line 5904 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); }
    break;

  case 792:

/* Line 1806 of yacc.c  */
#line 5905 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 793:

/* Line 1806 of yacc.c  */
#line 5909 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 794:

/* Line 1806 of yacc.c  */
#line 5913 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 795:

/* Line 1806 of yacc.c  */
#line 5914 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 799:

/* Line 1806 of yacc.c  */
#line 5923 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 804:

/* Line 1806 of yacc.c  */
#line 5939 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 805:

/* Line 1806 of yacc.c  */
#line 5943 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 806:

/* Line 1806 of yacc.c  */
#line 5949 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 807:

/* Line 1806 of yacc.c  */
#line 5953 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 808:

/* Line 1806 of yacc.c  */
#line 5957 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 809:

/* Line 1806 of yacc.c  */
#line 5961 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 810:

/* Line 1806 of yacc.c  */
#line 5965 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 811:

/* Line 1806 of yacc.c  */
#line 5969 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 812:

/* Line 1806 of yacc.c  */
#line 5973 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 813:

/* Line 1806 of yacc.c  */
#line 5977 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 814:

/* Line 1806 of yacc.c  */
#line 5981 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 815:

/* Line 1806 of yacc.c  */
#line 5985 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 816:

/* Line 1806 of yacc.c  */
#line 5989 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 817:

/* Line 1806 of yacc.c  */
#line 5993 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 818:

/* Line 1806 of yacc.c  */
#line 5997 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 819:

/* Line 1806 of yacc.c  */
#line 6001 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 820:

/* Line 1806 of yacc.c  */
#line 6005 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 821:

/* Line 1806 of yacc.c  */
#line 6009 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), 0);
  }
    break;

  case 822:

/* Line 1806 of yacc.c  */
#line 6013 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0);
  }
    break;

  case 823:

/* Line 1806 of yacc.c  */
#line 6017 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 824:

/* Line 1806 of yacc.c  */
#line 6021 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 825:

/* Line 1806 of yacc.c  */
#line 6027 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 826:

/* Line 1806 of yacc.c  */
#line 6031 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 827:

/* Line 1806 of yacc.c  */
#line 6035 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 828:

/* Line 1806 of yacc.c  */
#line 6039 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 829:

/* Line 1806 of yacc.c  */
#line 6043 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 830:

/* Line 1806 of yacc.c  */
#line 6047 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 831:

/* Line 1806 of yacc.c  */
#line 6051 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 834:

/* Line 1806 of yacc.c  */
#line 6063 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 835:

/* Line 1806 of yacc.c  */
#line 6067 "parser.y"
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
    break;

  case 836:

/* Line 1806 of yacc.c  */
#line 6084 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 838:

/* Line 1806 of yacc.c  */
#line 6093 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 839:

/* Line 1806 of yacc.c  */
#line 6097 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 840:

/* Line 1806 of yacc.c  */
#line 6101 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 842:

/* Line 1806 of yacc.c  */
#line 6108 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 843:

/* Line 1806 of yacc.c  */
#line 6115 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 844:

/* Line 1806 of yacc.c  */
#line 6119 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 845:

/* Line 1806 of yacc.c  */
#line 6129 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 847:

/* Line 1806 of yacc.c  */
#line 6138 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 848:

/* Line 1806 of yacc.c  */
#line 6142 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 849:

/* Line 1806 of yacc.c  */
#line 6153 "parser.y"
    { (yyval) = NULL; }
    break;

  case 850:

/* Line 1806 of yacc.c  */
#line 6154 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 851:

/* Line 1806 of yacc.c  */
#line 6162 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 855:

/* Line 1806 of yacc.c  */
#line 6176 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 858:

/* Line 1806 of yacc.c  */
#line 6188 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
    break;

  case 860:

/* Line 1806 of yacc.c  */
#line 6203 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(2) - (6)])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[(2) - (6)]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[(2) - (6)]), _("Recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	cb_emit_call ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]), (yyvsp[(1) - (6)]));
  }
    break;

  case 861:

/* Line 1806 of yacc.c  */
#line 6217 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 862:

/* Line 1806 of yacc.c  */
#line 6222 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 863:

/* Line 1806 of yacc.c  */
#line 6227 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 864:

/* Line 1806 of yacc.c  */
#line 6232 "parser.y"
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME(x)->token != CB_FEATURE_CONVENTION) {
			cb_error_x ((yyvsp[(1) - (1)]), _("Invalid mnemonic name"));
			(yyval) = NULL;
		} else {
			(yyval) = CB_SYSTEM_NAME(x)->value;
		}
	} else {
		(yyval) = NULL;
	}
	cobc_cs_check = 0;
  }
    break;

  case 865:

/* Line 1806 of yacc.c  */
#line 6252 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 866:

/* Line 1806 of yacc.c  */
#line 6256 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 867:

/* Line 1806 of yacc.c  */
#line 6261 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 868:

/* Line 1806 of yacc.c  */
#line 6272 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 869:

/* Line 1806 of yacc.c  */
#line 6274 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 870:

/* Line 1806 of yacc.c  */
#line 6279 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 871:

/* Line 1806 of yacc.c  */
#line 6287 "parser.y"
    {
	int	save_mode;

	save_mode = call_mode;
	if (call_mode != CB_CALL_BY_REFERENCE) {
		if (CB_FILE_P ((yyvsp[(3) - (3)])) || (CB_REFERENCE_P ((yyvsp[(3) - (3)])) &&
		    CB_FILE_P (CB_REFERENCE ((yyvsp[(3) - (3)]))->value))) {
			cb_error_x (CB_TREE (current_statement),
				    _("Invalid file name reference"));
		} else if (call_mode == CB_CALL_BY_VALUE) {
			if (cb_category_is_alpha ((yyvsp[(3) - (3)]))) {
				cb_warning_x ((yyvsp[(3) - (3)]),
					      _("BY CONTENT assumed for alphanumeric item"));
				save_mode = CB_CALL_BY_CONTENT;
			}
		}
	}
	(yyval) = CB_BUILD_PAIR (cb_int (save_mode), (yyvsp[(3) - (3)]));
	CB_SIZES ((yyval)) = size_mode;
	call_mode = save_mode;
  }
    break;

  case 873:

/* Line 1806 of yacc.c  */
#line 6313 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 874:

/* Line 1806 of yacc.c  */
#line 6317 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 875:

/* Line 1806 of yacc.c  */
#line 6326 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 876:

/* Line 1806 of yacc.c  */
#line 6338 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 877:

/* Line 1806 of yacc.c  */
#line 6342 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 878:

/* Line 1806 of yacc.c  */
#line 6346 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 879:

/* Line 1806 of yacc.c  */
#line 6350 "parser.y"
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[(4) - (4)])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[(4) - (4)]));
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01 or 77"));
			(yyval) = NULL;
		} else if (f->storage != CB_STORAGE_LINKAGE &&
			   !f->flag_item_based) {
			cb_error (_("RETURNING item is neither in LINKAGE SECTION nor is it BASED"));
			(yyval) = NULL;
		} else {
			(yyval) = cb_build_address ((yyvsp[(4) - (4)]));
		}
	} else {
		(yyval) = NULL;
	}
  }
    break;

  case 884:

/* Line 1806 of yacc.c  */
#line 6383 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 885:

/* Line 1806 of yacc.c  */
#line 6388 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 886:

/* Line 1806 of yacc.c  */
#line 6395 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 887:

/* Line 1806 of yacc.c  */
#line 6400 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 888:

/* Line 1806 of yacc.c  */
#line 6407 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 889:

/* Line 1806 of yacc.c  */
#line 6411 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 890:

/* Line 1806 of yacc.c  */
#line 6421 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 892:

/* Line 1806 of yacc.c  */
#line 6429 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 893:

/* Line 1806 of yacc.c  */
#line 6433 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 894:

/* Line 1806 of yacc.c  */
#line 6443 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 896:

/* Line 1806 of yacc.c  */
#line 6451 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 897:

/* Line 1806 of yacc.c  */
#line 6456 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 898:

/* Line 1806 of yacc.c  */
#line 6463 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 899:

/* Line 1806 of yacc.c  */
#line 6464 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 900:

/* Line 1806 of yacc.c  */
#line 6465 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 901:

/* Line 1806 of yacc.c  */
#line 6466 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 902:

/* Line 1806 of yacc.c  */
#line 6467 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 903:

/* Line 1806 of yacc.c  */
#line 6475 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 905:

/* Line 1806 of yacc.c  */
#line 6484 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 906:

/* Line 1806 of yacc.c  */
#line 6491 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 907:

/* Line 1806 of yacc.c  */
#line 6495 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 908:

/* Line 1806 of yacc.c  */
#line 6505 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 909:

/* Line 1806 of yacc.c  */
#line 6516 "parser.y"
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
    break;

  case 910:

/* Line 1806 of yacc.c  */
#line 6533 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 912:

/* Line 1806 of yacc.c  */
#line 6542 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  }
    break;

  case 914:

/* Line 1806 of yacc.c  */
#line 6550 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 915:

/* Line 1806 of yacc.c  */
#line 6555 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 916:

/* Line 1806 of yacc.c  */
#line 6563 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 917:

/* Line 1806 of yacc.c  */
#line 6567 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 918:

/* Line 1806 of yacc.c  */
#line 6577 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 920:

/* Line 1806 of yacc.c  */
#line 6587 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 921:

/* Line 1806 of yacc.c  */
#line 6591 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 922:

/* Line 1806 of yacc.c  */
#line 6595 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 923:

/* Line 1806 of yacc.c  */
#line 6599 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 924:

/* Line 1806 of yacc.c  */
#line 6603 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  }
    break;

  case 926:

/* Line 1806 of yacc.c  */
#line 6608 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
    break;

  case 928:

/* Line 1806 of yacc.c  */
#line 6618 "parser.y"
    {
	begin_implicit_statement ();
  }
    break;

  case 930:

/* Line 1806 of yacc.c  */
#line 6626 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  }
    break;

  case 931:

/* Line 1806 of yacc.c  */
#line 6634 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 932:

/* Line 1806 of yacc.c  */
#line 6642 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 933:

/* Line 1806 of yacc.c  */
#line 6646 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 934:

/* Line 1806 of yacc.c  */
#line 6650 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 935:

/* Line 1806 of yacc.c  */
#line 6654 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 941:

/* Line 1806 of yacc.c  */
#line 6676 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 942:

/* Line 1806 of yacc.c  */
#line 6682 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 943:

/* Line 1806 of yacc.c  */
#line 6683 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 946:

/* Line 1806 of yacc.c  */
#line 6694 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 947:

/* Line 1806 of yacc.c  */
#line 6698 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
    break;

  case 948:

/* Line 1806 of yacc.c  */
#line 6702 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 949:

/* Line 1806 of yacc.c  */
#line 6706 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 950:

/* Line 1806 of yacc.c  */
#line 6710 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 951:

/* Line 1806 of yacc.c  */
#line 6714 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
    break;

  case 952:

/* Line 1806 of yacc.c  */
#line 6718 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
    break;

  case 953:

/* Line 1806 of yacc.c  */
#line 6722 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 954:

/* Line 1806 of yacc.c  */
#line 6726 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 955:

/* Line 1806 of yacc.c  */
#line 6730 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 956:

/* Line 1806 of yacc.c  */
#line 6734 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 957:

/* Line 1806 of yacc.c  */
#line 6738 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0);
  }
    break;

  case 958:

/* Line 1806 of yacc.c  */
#line 6742 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 959:

/* Line 1806 of yacc.c  */
#line 6746 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 960:

/* Line 1806 of yacc.c  */
#line 6750 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 961:

/* Line 1806 of yacc.c  */
#line 6754 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 962:

/* Line 1806 of yacc.c  */
#line 6758 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 963:

/* Line 1806 of yacc.c  */
#line 6765 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 964:

/* Line 1806 of yacc.c  */
#line 6769 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 965:

/* Line 1806 of yacc.c  */
#line 6779 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 967:

/* Line 1806 of yacc.c  */
#line 6788 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 968:

/* Line 1806 of yacc.c  */
#line 6792 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 969:

/* Line 1806 of yacc.c  */
#line 6796 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 970:

/* Line 1806 of yacc.c  */
#line 6800 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 971:

/* Line 1806 of yacc.c  */
#line 6804 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 972:

/* Line 1806 of yacc.c  */
#line 6811 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 973:

/* Line 1806 of yacc.c  */
#line 6815 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 974:

/* Line 1806 of yacc.c  */
#line 6825 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 976:

/* Line 1806 of yacc.c  */
#line 6834 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "ENTRY");
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "ENTRY");
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		if (!cobc_check_valid_name ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), 1U)) {
			emit_entry ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), 1, (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 977:

/* Line 1806 of yacc.c  */
#line 6852 "parser.y"
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
    break;

  case 979:

/* Line 1806 of yacc.c  */
#line 6876 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 980:

/* Line 1806 of yacc.c  */
#line 6883 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 981:

/* Line 1806 of yacc.c  */
#line 6885 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 982:

/* Line 1806 of yacc.c  */
#line 6890 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	eval_check[eval_level][eval_inc++] = (yyvsp[(1) - (1)]);
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
    break;

  case 983:

/* Line 1806 of yacc.c  */
#line 6901 "parser.y"
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
    break;

  case 984:

/* Line 1806 of yacc.c  */
#line 6912 "parser.y"
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
    break;

  case 985:

/* Line 1806 of yacc.c  */
#line 6926 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 986:

/* Line 1806 of yacc.c  */
#line 6930 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 987:

/* Line 1806 of yacc.c  */
#line 6936 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 988:

/* Line 1806 of yacc.c  */
#line 6938 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 989:

/* Line 1806 of yacc.c  */
#line 6944 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 990:

/* Line 1806 of yacc.c  */
#line 6953 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 991:

/* Line 1806 of yacc.c  */
#line 6961 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 992:

/* Line 1806 of yacc.c  */
#line 6967 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 993:

/* Line 1806 of yacc.c  */
#line 6974 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 994:

/* Line 1806 of yacc.c  */
#line 6976 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 995:

/* Line 1806 of yacc.c  */
#line 6981 "parser.y"
    {
	cb_tree	not0;
	cb_tree	e1;
	cb_tree	e2;
	cb_tree	x;
	cb_tree	parm1;

	not0 = cb_int0;
	e2 = (yyvsp[(2) - (2)]);
	x = NULL;
	parm1 = (yyvsp[(1) - (2)]);
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
    break;

  case 996:

/* Line 1806 of yacc.c  */
#line 7042 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 997:

/* Line 1806 of yacc.c  */
#line 7043 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 998:

/* Line 1806 of yacc.c  */
#line 7044 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 999:

/* Line 1806 of yacc.c  */
#line 7048 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1000:

/* Line 1806 of yacc.c  */
#line 7049 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1001:

/* Line 1806 of yacc.c  */
#line 7054 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1002:

/* Line 1806 of yacc.c  */
#line 7058 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1003:

/* Line 1806 of yacc.c  */
#line 7068 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1004:

/* Line 1806 of yacc.c  */
#line 7073 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1006:

/* Line 1806 of yacc.c  */
#line 7081 "parser.y"
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
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	current_statement->name = (const char *)"EXIT PROGRAM";
	cb_emit_exit (0);
  }
    break;

  case 1007:

/* Line 1806 of yacc.c  */
#line 7102 "parser.y"
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
    break;

  case 1008:

/* Line 1806 of yacc.c  */
#line 7116 "parser.y"
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
    break;

  case 1009:

/* Line 1806 of yacc.c  */
#line 7138 "parser.y"
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
    break;

  case 1010:

/* Line 1806 of yacc.c  */
#line 7160 "parser.y"
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
    break;

  case 1011:

/* Line 1806 of yacc.c  */
#line 7180 "parser.y"
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
    break;

  case 1012:

/* Line 1806 of yacc.c  */
#line 7202 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1013:

/* Line 1806 of yacc.c  */
#line 7203 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1014:

/* Line 1806 of yacc.c  */
#line 7211 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1016:

/* Line 1806 of yacc.c  */
#line 7220 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1017:

/* Line 1806 of yacc.c  */
#line 7230 "parser.y"
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
    break;

  case 1020:

/* Line 1806 of yacc.c  */
#line 7246 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1022:

/* Line 1806 of yacc.c  */
#line 7259 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1023:

/* Line 1806 of yacc.c  */
#line 7267 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1024:

/* Line 1806 of yacc.c  */
#line 7272 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1025:

/* Line 1806 of yacc.c  */
#line 7283 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1026:

/* Line 1806 of yacc.c  */
#line 7298 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1028:

/* Line 1806 of yacc.c  */
#line 7307 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1029:

/* Line 1806 of yacc.c  */
#line 7311 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1030:

/* Line 1806 of yacc.c  */
#line 7315 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1031:

/* Line 1806 of yacc.c  */
#line 7322 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1032:

/* Line 1806 of yacc.c  */
#line 7326 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1033:

/* Line 1806 of yacc.c  */
#line 7336 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1035:

/* Line 1806 of yacc.c  */
#line 7345 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1036:

/* Line 1806 of yacc.c  */
#line 7351 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1037:

/* Line 1806 of yacc.c  */
#line 7352 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1038:

/* Line 1806 of yacc.c  */
#line 7356 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1039:

/* Line 1806 of yacc.c  */
#line 7357 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1040:

/* Line 1806 of yacc.c  */
#line 7358 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1041:

/* Line 1806 of yacc.c  */
#line 7363 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1042:

/* Line 1806 of yacc.c  */
#line 7367 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1043:

/* Line 1806 of yacc.c  */
#line 7374 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1044:

/* Line 1806 of yacc.c  */
#line 7379 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1045:

/* Line 1806 of yacc.c  */
#line 7386 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1046:

/* Line 1806 of yacc.c  */
#line 7392 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1047:

/* Line 1806 of yacc.c  */
#line 7393 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1048:

/* Line 1806 of yacc.c  */
#line 7394 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1049:

/* Line 1806 of yacc.c  */
#line 7395 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1050:

/* Line 1806 of yacc.c  */
#line 7396 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1051:

/* Line 1806 of yacc.c  */
#line 7397 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1052:

/* Line 1806 of yacc.c  */
#line 7398 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1053:

/* Line 1806 of yacc.c  */
#line 7403 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1054:

/* Line 1806 of yacc.c  */
#line 7407 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1055:

/* Line 1806 of yacc.c  */
#line 7416 "parser.y"
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
    break;

  case 1057:

/* Line 1806 of yacc.c  */
#line 7425 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1058:

/* Line 1806 of yacc.c  */
#line 7431 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1059:

/* Line 1806 of yacc.c  */
#line 7442 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1062:

/* Line 1806 of yacc.c  */
#line 7455 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1063:

/* Line 1806 of yacc.c  */
#line 7459 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1064:

/* Line 1806 of yacc.c  */
#line 7463 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1069:

/* Line 1806 of yacc.c  */
#line 7479 "parser.y"
    {
	cb_init_tallying ();
  }
    break;

  case 1070:

/* Line 1806 of yacc.c  */
#line 7483 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1071:

/* Line 1806 of yacc.c  */
#line 7493 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1072:

/* Line 1806 of yacc.c  */
#line 7503 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1073:

/* Line 1806 of yacc.c  */
#line 7511 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1074:

/* Line 1806 of yacc.c  */
#line 7512 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1075:

/* Line 1806 of yacc.c  */
#line 7516 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); }
    break;

  case 1076:

/* Line 1806 of yacc.c  */
#line 7517 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); }
    break;

  case 1077:

/* Line 1806 of yacc.c  */
#line 7518 "parser.y"
    { (yyval) = cb_build_tallying_all (); }
    break;

  case 1078:

/* Line 1806 of yacc.c  */
#line 7519 "parser.y"
    { (yyval) = cb_build_tallying_leading (); }
    break;

  case 1079:

/* Line 1806 of yacc.c  */
#line 7520 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); }
    break;

  case 1080:

/* Line 1806 of yacc.c  */
#line 7521 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1081:

/* Line 1806 of yacc.c  */
#line 7525 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1082:

/* Line 1806 of yacc.c  */
#line 7526 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1083:

/* Line 1806 of yacc.c  */
#line 7531 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1084:

/* Line 1806 of yacc.c  */
#line 7536 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1085:

/* Line 1806 of yacc.c  */
#line 7542 "parser.y"
    { /* Nothing */ }
    break;

  case 1086:

/* Line 1806 of yacc.c  */
#line 7543 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1087:

/* Line 1806 of yacc.c  */
#line 7544 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1088:

/* Line 1806 of yacc.c  */
#line 7545 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1089:

/* Line 1806 of yacc.c  */
#line 7546 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1090:

/* Line 1806 of yacc.c  */
#line 7551 "parser.y"
    {
	switch (inspect_keyword) {
		case 1:
			(yyval) = cb_build_replacing_all ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		case 2:
			(yyval) = cb_build_replacing_leading ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		case 3:
			(yyval) = cb_build_replacing_first ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		case 4:
			(yyval) = cb_build_replacing_trailing ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		default:
			cb_error_x (CB_TREE (current_statement),
				    _("INSPECT missing a keyword"));
			(yyval) = cb_build_replacing_all ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
	}
  }
    break;

  case 1091:

/* Line 1806 of yacc.c  */
#line 7578 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1092:

/* Line 1806 of yacc.c  */
#line 7582 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1093:

/* Line 1806 of yacc.c  */
#line 7589 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  }
    break;

  case 1094:

/* Line 1806 of yacc.c  */
#line 7593 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  }
    break;

  case 1095:

/* Line 1806 of yacc.c  */
#line 7602 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1097:

/* Line 1806 of yacc.c  */
#line 7614 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1099:

/* Line 1806 of yacc.c  */
#line 7622 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1100:

/* Line 1806 of yacc.c  */
#line 7626 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1101:

/* Line 1806 of yacc.c  */
#line 7636 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1103:

/* Line 1806 of yacc.c  */
#line 7645 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1104:

/* Line 1806 of yacc.c  */
#line 7649 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1105:

/* Line 1806 of yacc.c  */
#line 7656 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1106:

/* Line 1806 of yacc.c  */
#line 7660 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1107:

/* Line 1806 of yacc.c  */
#line 7670 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1109:

/* Line 1806 of yacc.c  */
#line 7678 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(2) - (4)]) && (yyvsp[(4) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
	}
	if ((yyvsp[(4) - (4)])) {
		x = (yyvsp[(4) - (4)]);
	} else {
		x = (yyvsp[(2) - (4)]);
	}
	for (l = (yyvsp[(3) - (4)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[(1) - (4)]), x);
		}
	}
  }
    break;

  case 1110:

/* Line 1806 of yacc.c  */
#line 7699 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(3) - (5)]) && (yyvsp[(5) - (5)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
	}
	if ((yyvsp[(5) - (5)])) {
		x = (yyvsp[(5) - (5)]);
	} else {
		x = (yyvsp[(3) - (5)]);
	}
	for (l = (yyvsp[(4) - (5)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[(2) - (5)]), x);
		}
	}
  }
    break;

  case 1111:

/* Line 1806 of yacc.c  */
#line 7722 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1112:

/* Line 1806 of yacc.c  */
#line 7723 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1113:

/* Line 1806 of yacc.c  */
#line 7724 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1114:

/* Line 1806 of yacc.c  */
#line 7725 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1115:

/* Line 1806 of yacc.c  */
#line 7729 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1116:

/* Line 1806 of yacc.c  */
#line 7730 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1117:

/* Line 1806 of yacc.c  */
#line 7734 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1118:

/* Line 1806 of yacc.c  */
#line 7735 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1119:

/* Line 1806 of yacc.c  */
#line 7736 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1120:

/* Line 1806 of yacc.c  */
#line 7738 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1121:

/* Line 1806 of yacc.c  */
#line 7749 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1123:

/* Line 1806 of yacc.c  */
#line 7760 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  }
    break;

  case 1124:

/* Line 1806 of yacc.c  */
#line 7765 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
    break;

  case 1125:

/* Line 1806 of yacc.c  */
#line 7771 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1126:

/* Line 1806 of yacc.c  */
#line 7776 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  }
    break;

  case 1127:

/* Line 1806 of yacc.c  */
#line 7784 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1128:

/* Line 1806 of yacc.c  */
#line 7792 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1129:

/* Line 1806 of yacc.c  */
#line 7799 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1130:

/* Line 1806 of yacc.c  */
#line 7803 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
    break;

  case 1131:

/* Line 1806 of yacc.c  */
#line 7816 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1132:

/* Line 1806 of yacc.c  */
#line 7823 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1133:

/* Line 1806 of yacc.c  */
#line 7834 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1134:

/* Line 1806 of yacc.c  */
#line 7838 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1135:

/* Line 1806 of yacc.c  */
#line 7843 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1136:

/* Line 1806 of yacc.c  */
#line 7847 "parser.y"
    {
	cb_tree varying;

	if (!(yyvsp[(3) - (3)])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[(3) - (3)])));
		(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), varying);
	}
  }
    break;

  case 1137:

/* Line 1806 of yacc.c  */
#line 7858 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1138:

/* Line 1806 of yacc.c  */
#line 7864 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1139:

/* Line 1806 of yacc.c  */
#line 7865 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1140:

/* Line 1806 of yacc.c  */
#line 7869 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1141:

/* Line 1806 of yacc.c  */
#line 7870 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1142:

/* Line 1806 of yacc.c  */
#line 7873 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1143:

/* Line 1806 of yacc.c  */
#line 7875 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1144:

/* Line 1806 of yacc.c  */
#line 7880 "parser.y"
    {
	(yyval) = cb_build_perform_varying ((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));
  }
    break;

  case 1145:

/* Line 1806 of yacc.c  */
#line 7890 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1147:

/* Line 1806 of yacc.c  */
#line 7899 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		struct cb_file	*cf;

		cf = CB_FILE(cb_ref ((yyvsp[(1) - (7)])));
		if ((yyvsp[(5) - (7)]) && (cf->lock_mode & COB_LOCK_AUTOMATIC)) {
			cb_error_x (CB_TREE (current_statement),
				    _("LOCK clause invalid with file LOCK AUTOMATIC"));
		} else if ((yyvsp[(6) - (7)]) &&
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
			cb_emit_read ((yyvsp[(1) - (7)]), (yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]), (yyvsp[(5) - (7)]));
		}
	}
  }
    break;

  case 1148:

/* Line 1806 of yacc.c  */
#line 7925 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1149:

/* Line 1806 of yacc.c  */
#line 7926 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1150:

/* Line 1806 of yacc.c  */
#line 7931 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1151:

/* Line 1806 of yacc.c  */
#line 7935 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1152:

/* Line 1806 of yacc.c  */
#line 7939 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1153:

/* Line 1806 of yacc.c  */
#line 7943 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1154:

/* Line 1806 of yacc.c  */
#line 7947 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1155:

/* Line 1806 of yacc.c  */
#line 7951 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1156:

/* Line 1806 of yacc.c  */
#line 7955 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1157:

/* Line 1806 of yacc.c  */
#line 7961 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1158:

/* Line 1806 of yacc.c  */
#line 7962 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1161:

/* Line 1806 of yacc.c  */
#line 7972 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1162:

/* Line 1806 of yacc.c  */
#line 7976 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1163:

/* Line 1806 of yacc.c  */
#line 7986 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1164:

/* Line 1806 of yacc.c  */
#line 7996 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1166:

/* Line 1806 of yacc.c  */
#line 8004 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1167:

/* Line 1806 of yacc.c  */
#line 8014 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1168:

/* Line 1806 of yacc.c  */
#line 8024 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1170:

/* Line 1806 of yacc.c  */
#line 8033 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1171:

/* Line 1806 of yacc.c  */
#line 8040 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1172:

/* Line 1806 of yacc.c  */
#line 8044 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1173:

/* Line 1806 of yacc.c  */
#line 8054 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1175:

/* Line 1806 of yacc.c  */
#line 8066 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  }
    break;

  case 1176:

/* Line 1806 of yacc.c  */
#line 8074 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1177:

/* Line 1806 of yacc.c  */
#line 8078 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1178:

/* Line 1806 of yacc.c  */
#line 8082 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1179:

/* Line 1806 of yacc.c  */
#line 8089 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1180:

/* Line 1806 of yacc.c  */
#line 8093 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1181:

/* Line 1806 of yacc.c  */
#line 8103 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1182:

/* Line 1806 of yacc.c  */
#line 8114 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1184:

/* Line 1806 of yacc.c  */
#line 8123 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1185:

/* Line 1806 of yacc.c  */
#line 8128 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1186:

/* Line 1806 of yacc.c  */
#line 8135 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1187:

/* Line 1806 of yacc.c  */
#line 8136 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1188:

/* Line 1806 of yacc.c  */
#line 8141 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1189:

/* Line 1806 of yacc.c  */
#line 8146 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1190:

/* Line 1806 of yacc.c  */
#line 8153 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1191:

/* Line 1806 of yacc.c  */
#line 8157 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1192:

/* Line 1806 of yacc.c  */
#line 8165 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1193:

/* Line 1806 of yacc.c  */
#line 8172 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1194:

/* Line 1806 of yacc.c  */
#line 8176 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1195:

/* Line 1806 of yacc.c  */
#line 8186 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1196:

/* Line 1806 of yacc.c  */
#line 8193 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1203:

/* Line 1806 of yacc.c  */
#line 8208 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1204:

/* Line 1806 of yacc.c  */
#line 8209 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1205:

/* Line 1806 of yacc.c  */
#line 8213 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1206:

/* Line 1806 of yacc.c  */
#line 8214 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1207:

/* Line 1806 of yacc.c  */
#line 8221 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1208:

/* Line 1806 of yacc.c  */
#line 8230 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1211:

/* Line 1806 of yacc.c  */
#line 8242 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1212:

/* Line 1806 of yacc.c  */
#line 8246 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1213:

/* Line 1806 of yacc.c  */
#line 8250 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1214:

/* Line 1806 of yacc.c  */
#line 8254 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1215:

/* Line 1806 of yacc.c  */
#line 8258 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1216:

/* Line 1806 of yacc.c  */
#line 8262 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1217:

/* Line 1806 of yacc.c  */
#line 8266 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1218:

/* Line 1806 of yacc.c  */
#line 8270 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1219:

/* Line 1806 of yacc.c  */
#line 8279 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1220:

/* Line 1806 of yacc.c  */
#line 8283 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1221:

/* Line 1806 of yacc.c  */
#line 8292 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1224:

/* Line 1806 of yacc.c  */
#line 8306 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1227:

/* Line 1806 of yacc.c  */
#line 8320 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1228:

/* Line 1806 of yacc.c  */
#line 8324 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1229:

/* Line 1806 of yacc.c  */
#line 8334 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1231:

/* Line 1806 of yacc.c  */
#line 8342 "parser.y"
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[(1) - (4)]));
	if (CB_VALID_TREE (x)) {
		if (CB_INVALID_TREE ((yyvsp[(2) - (4)]))) {
			if (CB_FILE_P (x)) {
				cb_error (_("File sort requires KEY phrase"));
			} else {
				cb_error (_("Table sort without keys not implemented yet"));
			}
			(yyval) = NULL;
		} else {
			cb_emit_sort_init ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
			(yyval)= (yyvsp[(1) - (4)]);
		}
	} else {
		(yyval) = NULL;
	}
  }
    break;

  case 1232:

/* Line 1806 of yacc.c  */
#line 8363 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1233:

/* Line 1806 of yacc.c  */
#line 8372 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1234:

/* Line 1806 of yacc.c  */
#line 8377 "parser.y"
    {
	cb_tree l;
	cb_tree lparm;

	if ((yyvsp[(5) - (5)]) == NULL) {
		l = CB_LIST_INIT (NULL);
	} else {
		l = (yyvsp[(5) - (5)]);
	}
	lparm = l;
	for (; l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[(3) - (5)]);
	}
	(yyval) = cb_list_append ((yyvsp[(1) - (5)]), lparm);
  }
    break;

  case 1235:

/* Line 1806 of yacc.c  */
#line 8395 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1236:

/* Line 1806 of yacc.c  */
#line 8396 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1238:

/* Line 1806 of yacc.c  */
#line 8401 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1239:

/* Line 1806 of yacc.c  */
#line 8408 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1240:

/* Line 1806 of yacc.c  */
#line 8409 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1241:

/* Line 1806 of yacc.c  */
#line 8414 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1242:

/* Line 1806 of yacc.c  */
#line 8420 "parser.y"
    {
	if ((yyvsp[(0) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(0) - (2)])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 1243:

/* Line 1806 of yacc.c  */
#line 8430 "parser.y"
    {
	if ((yyvsp[(0) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(0) - (4)])))) {
			cb_error (_("INPUT PROCEDURE invalid with table SORT"));
		} else if (current_statement->flag_merge) {
			cb_error (_("INPUT PROCEDURE invalid with MERGE"));
		} else {
			cb_emit_sort_input ((yyvsp[(4) - (4)]));
		}
	}
  }
    break;

  case 1244:

/* Line 1806 of yacc.c  */
#line 8445 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1245:

/* Line 1806 of yacc.c  */
#line 8451 "parser.y"
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 1246:

/* Line 1806 of yacc.c  */
#line 8461 "parser.y"
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[(4) - (4)]));
		}
	}
  }
    break;

  case 1247:

/* Line 1806 of yacc.c  */
#line 8477 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1249:

/* Line 1806 of yacc.c  */
#line 8487 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1250:

/* Line 1806 of yacc.c  */
#line 8499 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1251:

/* Line 1806 of yacc.c  */
#line 8503 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1252:

/* Line 1806 of yacc.c  */
#line 8510 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1253:

/* Line 1806 of yacc.c  */
#line 8514 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1254:

/* Line 1806 of yacc.c  */
#line 8519 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1255:

/* Line 1806 of yacc.c  */
#line 8524 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1256:

/* Line 1806 of yacc.c  */
#line 8531 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1257:

/* Line 1806 of yacc.c  */
#line 8532 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1258:

/* Line 1806 of yacc.c  */
#line 8533 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1259:

/* Line 1806 of yacc.c  */
#line 8534 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1260:

/* Line 1806 of yacc.c  */
#line 8535 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1261:

/* Line 1806 of yacc.c  */
#line 8536 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1262:

/* Line 1806 of yacc.c  */
#line 8541 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1265:

/* Line 1806 of yacc.c  */
#line 8554 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1266:

/* Line 1806 of yacc.c  */
#line 8558 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1267:

/* Line 1806 of yacc.c  */
#line 8568 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1268:

/* Line 1806 of yacc.c  */
#line 8572 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1269:

/* Line 1806 of yacc.c  */
#line 8578 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1270:

/* Line 1806 of yacc.c  */
#line 8590 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1271:

/* Line 1806 of yacc.c  */
#line 8594 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1272:

/* Line 1806 of yacc.c  */
#line 8598 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1273:

/* Line 1806 of yacc.c  */
#line 8606 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1274:

/* Line 1806 of yacc.c  */
#line 8617 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1275:

/* Line 1806 of yacc.c  */
#line 8621 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1276:

/* Line 1806 of yacc.c  */
#line 8627 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1277:

/* Line 1806 of yacc.c  */
#line 8628 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1278:

/* Line 1806 of yacc.c  */
#line 8629 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1279:

/* Line 1806 of yacc.c  */
#line 8630 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1280:

/* Line 1806 of yacc.c  */
#line 8637 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1282:

/* Line 1806 of yacc.c  */
#line 8646 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1283:

/* Line 1806 of yacc.c  */
#line 8652 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1284:

/* Line 1806 of yacc.c  */
#line 8653 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1285:

/* Line 1806 of yacc.c  */
#line 8657 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1286:

/* Line 1806 of yacc.c  */
#line 8658 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1287:

/* Line 1806 of yacc.c  */
#line 8659 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1288:

/* Line 1806 of yacc.c  */
#line 8663 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1289:

/* Line 1806 of yacc.c  */
#line 8664 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1290:

/* Line 1806 of yacc.c  */
#line 8669 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1291:

/* Line 1806 of yacc.c  */
#line 8673 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1292:

/* Line 1806 of yacc.c  */
#line 8683 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1294:

/* Line 1806 of yacc.c  */
#line 8692 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1295:

/* Line 1806 of yacc.c  */
#line 8696 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1296:

/* Line 1806 of yacc.c  */
#line 8700 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1297:

/* Line 1806 of yacc.c  */
#line 8707 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1298:

/* Line 1806 of yacc.c  */
#line 8711 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1299:

/* Line 1806 of yacc.c  */
#line 8721 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	PENDING("SUPPRESS");
  }
    break;

  case 1302:

/* Line 1806 of yacc.c  */
#line 8739 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
    break;

  case 1304:

/* Line 1806 of yacc.c  */
#line 8748 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1305:

/* Line 1806 of yacc.c  */
#line 8754 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1306:

/* Line 1806 of yacc.c  */
#line 8765 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1308:

/* Line 1806 of yacc.c  */
#line 8773 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1309:

/* Line 1806 of yacc.c  */
#line 8786 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1311:

/* Line 1806 of yacc.c  */
#line 8794 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (2)]))) {
		if (CB_FILE (cb_ref ((yyvsp[(1) - (2)])))->organization == COB_ORG_SORT) {
			cb_error_x (CB_TREE (current_statement),
				    _("UNLOCK invalid for SORT files"));
		} else {
			cb_emit_unlock ((yyvsp[(1) - (2)]));
		}
	}
  }
    break;

  case 1315:

/* Line 1806 of yacc.c  */
#line 8817 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1317:

/* Line 1806 of yacc.c  */
#line 8827 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1318:

/* Line 1806 of yacc.c  */
#line 8833 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1319:

/* Line 1806 of yacc.c  */
#line 8835 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1320:

/* Line 1806 of yacc.c  */
#line 8839 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1321:

/* Line 1806 of yacc.c  */
#line 8841 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1322:

/* Line 1806 of yacc.c  */
#line 8846 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1323:

/* Line 1806 of yacc.c  */
#line 8852 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1324:

/* Line 1806 of yacc.c  */
#line 8854 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1325:

/* Line 1806 of yacc.c  */
#line 8859 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1326:

/* Line 1806 of yacc.c  */
#line 8865 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1327:

/* Line 1806 of yacc.c  */
#line 8866 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1328:

/* Line 1806 of yacc.c  */
#line 8870 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1329:

/* Line 1806 of yacc.c  */
#line 8871 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1330:

/* Line 1806 of yacc.c  */
#line 8875 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1331:

/* Line 1806 of yacc.c  */
#line 8876 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1332:

/* Line 1806 of yacc.c  */
#line 8881 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1333:

/* Line 1806 of yacc.c  */
#line 8885 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1334:

/* Line 1806 of yacc.c  */
#line 8895 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1341:

/* Line 1806 of yacc.c  */
#line 8913 "parser.y"
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
    break;

  case 1342:

/* Line 1806 of yacc.c  */
#line 8938 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1343:

/* Line 1806 of yacc.c  */
#line 8942 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1344:

/* Line 1806 of yacc.c  */
#line 8954 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1345:

/* Line 1806 of yacc.c  */
#line 8964 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1346:

/* Line 1806 of yacc.c  */
#line 8969 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1347:

/* Line 1806 of yacc.c  */
#line 8974 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1348:

/* Line 1806 of yacc.c  */
#line 8979 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1349:

/* Line 1806 of yacc.c  */
#line 8987 "parser.y"
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
    break;

  case 1352:

/* Line 1806 of yacc.c  */
#line 9030 "parser.y"
    {
	cb_tree		l;
	cb_tree		x;
	cb_tree		z;

	if (current_program->flag_debugging) {
		CB_REFERENCE ((yyvsp[(1) - (1)]))->debug_section = current_section;
		CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_debug_code = 1;
		CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_all_debug = 0;
		z = CB_LIST_INIT ((yyvsp[(1) - (1)]));
		current_program->debug_list =
			cb_list_append (current_program->debug_list, z);
		/* Check backward refs to file/data names */
		/* Label refs will be checked later (forward/backward ref) */
		if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
			l = CB_VALUE(CB_WORD_ITEMS ((yyvsp[(1) - (1)])));
			switch (CB_TREE_TAG (l)) {
			case CB_TAG_FILE:
				CB_FILE (l)->debug_section = current_section;
				CB_FILE (l)->flag_fl_debug = 1;
				break;
			case CB_TAG_FIELD:
				{
					x = cb_ref((yyvsp[(1) - (1)]));
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
    break;

  case 1353:

/* Line 1806 of yacc.c  */
#line 9070 "parser.y"
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
    break;

  case 1354:

/* Line 1806 of yacc.c  */
#line 9080 "parser.y"
    {
	cb_tree		x;

	if (current_program->flag_debugging) {
		/* Reference must be a data item */
		x = cb_ref ((yyvsp[(3) - (3)]));
		if (CB_INVALID_TREE (x) || !CB_FIELD_P (x)) {
			cb_error (_("Invalid target for DEBUGGING ALL"));
		} else {
			needs_field_debug = 1;
			CB_FIELD (x)->debug_section = current_section;
			CB_FIELD (x)->flag_field_debug = 1;
			CB_FIELD (x)->flag_all_debug = 1;
			CB_REFERENCE ((yyvsp[(3) - (3)]))->debug_section = current_section;
			CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_debug_code = 1;
			CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_all_debug = 1;
			CB_CHAIN_PAIR (current_program->debug_list, x, (yyvsp[(3) - (3)]));
		}
	}
  }
    break;

  case 1359:

/* Line 1806 of yacc.c  */
#line 9110 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
    break;

  case 1360:

/* Line 1806 of yacc.c  */
#line 9119 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1361:

/* Line 1806 of yacc.c  */
#line 9125 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1362:

/* Line 1806 of yacc.c  */
#line 9135 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
    break;

  case 1363:

/* Line 1806 of yacc.c  */
#line 9144 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1366:

/* Line 1806 of yacc.c  */
#line 9160 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1368:

/* Line 1806 of yacc.c  */
#line 9172 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1369:

/* Line 1806 of yacc.c  */
#line 9181 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1370:

/* Line 1806 of yacc.c  */
#line 9182 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1371:

/* Line 1806 of yacc.c  */
#line 9187 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1372:

/* Line 1806 of yacc.c  */
#line 9191 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1373:

/* Line 1806 of yacc.c  */
#line 9195 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1374:

/* Line 1806 of yacc.c  */
#line 9199 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1375:

/* Line 1806 of yacc.c  */
#line 9205 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1376:

/* Line 1806 of yacc.c  */
#line 9206 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1379:

/* Line 1806 of yacc.c  */
#line 9216 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1380:

/* Line 1806 of yacc.c  */
#line 9220 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1383:

/* Line 1806 of yacc.c  */
#line 9237 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1387:

/* Line 1806 of yacc.c  */
#line 9252 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1392:

/* Line 1806 of yacc.c  */
#line 9270 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1394:

/* Line 1806 of yacc.c  */
#line 9280 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1397:

/* Line 1806 of yacc.c  */
#line 9295 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1399:

/* Line 1806 of yacc.c  */
#line 9305 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1402:

/* Line 1806 of yacc.c  */
#line 9322 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1404:

/* Line 1806 of yacc.c  */
#line 9333 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1410:

/* Line 1806 of yacc.c  */
#line 9356 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1411:

/* Line 1806 of yacc.c  */
#line 9365 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1415:

/* Line 1806 of yacc.c  */
#line 9382 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1416:

/* Line 1806 of yacc.c  */
#line 9391 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1419:

/* Line 1806 of yacc.c  */
#line 9408 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1421:

/* Line 1806 of yacc.c  */
#line 9418 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1422:

/* Line 1806 of yacc.c  */
#line 9428 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1423:

/* Line 1806 of yacc.c  */
#line 9432 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1424:

/* Line 1806 of yacc.c  */
#line 9442 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1425:

/* Line 1806 of yacc.c  */
#line 9449 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1426:

/* Line 1806 of yacc.c  */
#line 9455 "parser.y"
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
    break;

  case 1427:

/* Line 1806 of yacc.c  */
#line 9460 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1431:

/* Line 1806 of yacc.c  */
#line 9473 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1432:

/* Line 1806 of yacc.c  */
#line 9481 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1433:

/* Line 1806 of yacc.c  */
#line 9482 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1434:

/* Line 1806 of yacc.c  */
#line 9484 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1435:

/* Line 1806 of yacc.c  */
#line 9485 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1436:

/* Line 1806 of yacc.c  */
#line 9486 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1437:

/* Line 1806 of yacc.c  */
#line 9487 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1438:

/* Line 1806 of yacc.c  */
#line 9488 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1439:

/* Line 1806 of yacc.c  */
#line 9490 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1440:

/* Line 1806 of yacc.c  */
#line 9491 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1441:

/* Line 1806 of yacc.c  */
#line 9492 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1442:

/* Line 1806 of yacc.c  */
#line 9493 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1443:

/* Line 1806 of yacc.c  */
#line 9494 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1444:

/* Line 1806 of yacc.c  */
#line 9495 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1445:

/* Line 1806 of yacc.c  */
#line 9497 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1446:

/* Line 1806 of yacc.c  */
#line 9498 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1447:

/* Line 1806 of yacc.c  */
#line 9499 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1448:

/* Line 1806 of yacc.c  */
#line 9501 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1449:

/* Line 1806 of yacc.c  */
#line 9502 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1450:

/* Line 1806 of yacc.c  */
#line 9503 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1451:

/* Line 1806 of yacc.c  */
#line 9504 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1452:

/* Line 1806 of yacc.c  */
#line 9505 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1453:

/* Line 1806 of yacc.c  */
#line 9508 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1454:

/* Line 1806 of yacc.c  */
#line 9509 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1463:

/* Line 1806 of yacc.c  */
#line 9539 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1464:

/* Line 1806 of yacc.c  */
#line 9543 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1468:

/* Line 1806 of yacc.c  */
#line 9554 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1469:

/* Line 1806 of yacc.c  */
#line 9555 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1470:

/* Line 1806 of yacc.c  */
#line 9556 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1471:

/* Line 1806 of yacc.c  */
#line 9560 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1472:

/* Line 1806 of yacc.c  */
#line 9561 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1473:

/* Line 1806 of yacc.c  */
#line 9562 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1474:

/* Line 1806 of yacc.c  */
#line 9567 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1475:

/* Line 1806 of yacc.c  */
#line 9570 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1476:

/* Line 1806 of yacc.c  */
#line 9574 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1477:

/* Line 1806 of yacc.c  */
#line 9575 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1478:

/* Line 1806 of yacc.c  */
#line 9576 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1479:

/* Line 1806 of yacc.c  */
#line 9579 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1480:

/* Line 1806 of yacc.c  */
#line 9580 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1481:

/* Line 1806 of yacc.c  */
#line 9591 "parser.y"
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
    break;

  case 1482:

/* Line 1806 of yacc.c  */
#line 9603 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1483:

/* Line 1806 of yacc.c  */
#line 9612 "parser.y"
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
    break;

  case 1484:

/* Line 1806 of yacc.c  */
#line 9624 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1485:

/* Line 1806 of yacc.c  */
#line 9633 "parser.y"
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
    break;

  case 1486:

/* Line 1806 of yacc.c  */
#line 9645 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1487:

/* Line 1806 of yacc.c  */
#line 9659 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1488:

/* Line 1806 of yacc.c  */
#line 9661 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1489:

/* Line 1806 of yacc.c  */
#line 9666 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1490:

/* Line 1806 of yacc.c  */
#line 9674 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1491:

/* Line 1806 of yacc.c  */
#line 9681 "parser.y"
    {
	cb_tree x;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (!CB_FIELD_P (x)) {
		(yyval) = cb_error_node;
	} else if (!CB_FIELD (x)->index_list) {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' not indexed"), cb_name ((yyvsp[(1) - (1)])));
		cb_error_x (x, _("'%s' defined here"), cb_name (x));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1492:

/* Line 1806 of yacc.c  */
#line 9701 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1493:

/* Line 1806 of yacc.c  */
#line 9705 "parser.y"
    {
	cb_tree		l;

	if (CB_VALID_TREE ((yyvsp[(2) - (2)]))) {
		for (l = (yyvsp[(1) - (2)]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l)) &&
			    !strcasecmp (CB_NAME ((yyvsp[(2) - (2)])), CB_NAME (CB_VALUE (l)))) {
				cb_error_x ((yyvsp[(2) - (2)]), _("Multiple reference to '%s' "),
					    CB_NAME ((yyvsp[(2) - (2)])));
				break;
			}
		}
		if (!l) {
			(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 1494:

/* Line 1806 of yacc.c  */
#line 9726 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1495:

/* Line 1806 of yacc.c  */
#line 9767 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1496:

/* Line 1806 of yacc.c  */
#line 9780 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1497:

/* Line 1806 of yacc.c  */
#line 9782 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1498:

/* Line 1806 of yacc.c  */
#line 9786 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1499:

/* Line 1806 of yacc.c  */
#line 9792 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1500:

/* Line 1806 of yacc.c  */
#line 9794 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1501:

/* Line 1806 of yacc.c  */
#line 9799 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1504:

/* Line 1806 of yacc.c  */
#line 9813 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1505:

/* Line 1806 of yacc.c  */
#line 9820 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1506:

/* Line 1806 of yacc.c  */
#line 9830 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1507:

/* Line 1806 of yacc.c  */
#line 9831 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1508:

/* Line 1806 of yacc.c  */
#line 9836 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1509:

/* Line 1806 of yacc.c  */
#line 9844 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1510:

/* Line 1806 of yacc.c  */
#line 9852 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1511:

/* Line 1806 of yacc.c  */
#line 9856 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1512:

/* Line 1806 of yacc.c  */
#line 9863 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1515:

/* Line 1806 of yacc.c  */
#line 9879 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1516:

/* Line 1806 of yacc.c  */
#line 9893 "parser.y"
    {
	if (CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_duped || CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[(1) - (1)]))++;
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1517:

/* Line 1806 of yacc.c  */
#line 9910 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1518:

/* Line 1806 of yacc.c  */
#line 9914 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1521:

/* Line 1806 of yacc.c  */
#line 9923 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1522:

/* Line 1806 of yacc.c  */
#line 9930 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1523:

/* Line 1806 of yacc.c  */
#line 9934 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1528:

/* Line 1806 of yacc.c  */
#line 9945 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1529:

/* Line 1806 of yacc.c  */
#line 9949 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1530:

/* Line 1806 of yacc.c  */
#line 9953 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1531:

/* Line 1806 of yacc.c  */
#line 9957 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1532:

/* Line 1806 of yacc.c  */
#line 9961 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1533:

/* Line 1806 of yacc.c  */
#line 9965 "parser.y"
    {
	cb_tree		x;
	cb_tree		switch_id;

	x = cb_ref ((yyvsp[(1) - (1)]));
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
    break;

  case 1534:

/* Line 1806 of yacc.c  */
#line 9986 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1535:

/* Line 1806 of yacc.c  */
#line 9990 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1543:

/* Line 1806 of yacc.c  */
#line 10007 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1544:

/* Line 1806 of yacc.c  */
#line 10011 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1545:

/* Line 1806 of yacc.c  */
#line 10015 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1561:

/* Line 1806 of yacc.c  */
#line 10062 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1569:

/* Line 1806 of yacc.c  */
#line 10086 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1570:

/* Line 1806 of yacc.c  */
#line 10090 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1571:

/* Line 1806 of yacc.c  */
#line 10094 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1572:

/* Line 1806 of yacc.c  */
#line 10095 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1573:

/* Line 1806 of yacc.c  */
#line 10099 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1574:

/* Line 1806 of yacc.c  */
#line 10104 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1575:

/* Line 1806 of yacc.c  */
#line 10111 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1576:

/* Line 1806 of yacc.c  */
#line 10118 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1577:

/* Line 1806 of yacc.c  */
#line 10125 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1578:

/* Line 1806 of yacc.c  */
#line 10135 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1579:

/* Line 1806 of yacc.c  */
#line 10142 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (3)]))) {
		CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1580:

/* Line 1806 of yacc.c  */
#line 10152 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (2)]))) {
		CB_REFERENCE ((yyvsp[(1) - (2)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1581:

/* Line 1806 of yacc.c  */
#line 10162 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (2)]))) {
		CB_REFERENCE ((yyvsp[(1) - (2)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1582:

/* Line 1806 of yacc.c  */
#line 10172 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)]))) {
		CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1583:

/* Line 1806 of yacc.c  */
#line 10185 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1584:

/* Line 1806 of yacc.c  */
#line 10189 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1585:

/* Line 1806 of yacc.c  */
#line 10197 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1586:

/* Line 1806 of yacc.c  */
#line 10205 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1587:

/* Line 1806 of yacc.c  */
#line 10209 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1588:

/* Line 1806 of yacc.c  */
#line 10219 "parser.y"
    {
	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Non-negative integer value expected"));
		(yyval) = cb_int1;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1589:

/* Line 1806 of yacc.c  */
#line 10233 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[(1) - (1)]));
		if (n < 1 || n > 256) {
			cb_error (_("Invalid SYMBOLIC integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  }
    break;

  case 1590:

/* Line 1806 of yacc.c  */
#line 10256 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->sign
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Unsigned positive integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[(1) - (1)]));
		if (n < 1) {
			cb_error (_("Unsigned positive integer value expected"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  }
    break;

  case 1591:

/* Line 1806 of yacc.c  */
#line 10278 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) == CB_CATEGORY_NUMERIC) {
		if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
			cb_error (_("Integer value expected"));
		} else {
			n = cb_get_int ((yyvsp[(1) - (1)]));
			if (n < 1 || n > 256) {
				cb_error (_("Invalid CLASS value"));
			}
		}
	}
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1592:

/* Line 1806 of yacc.c  */
#line 10293 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1593:

/* Line 1806 of yacc.c  */
#line 10294 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1594:

/* Line 1806 of yacc.c  */
#line 10295 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1595:

/* Line 1806 of yacc.c  */
#line 10296 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1596:

/* Line 1806 of yacc.c  */
#line 10297 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1597:

/* Line 1806 of yacc.c  */
#line 10298 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1598:

/* Line 1806 of yacc.c  */
#line 10303 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1599:

/* Line 1806 of yacc.c  */
#line 10307 "parser.y"
    {
	struct cb_literal	*l;

	if (CB_LITERAL_P ((yyvsp[(2) - (2)]))) {
		/* We must not alter the original definition */
		l = cobc_parse_malloc (sizeof(struct cb_literal));
		*l = *(CB_LITERAL((yyvsp[(2) - (2)])));
		l->all = 1;
		(yyval) = CB_TREE (l);
	} else {
		(yyval) = (yyvsp[(2) - (2)]);
	}
  }
    break;

  case 1600:

/* Line 1806 of yacc.c  */
#line 10324 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1601:

/* Line 1806 of yacc.c  */
#line 10328 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1602:

/* Line 1806 of yacc.c  */
#line 10334 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1603:

/* Line 1806 of yacc.c  */
#line 10335 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1604:

/* Line 1806 of yacc.c  */
#line 10336 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1605:

/* Line 1806 of yacc.c  */
#line 10337 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1606:

/* Line 1806 of yacc.c  */
#line 10338 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1607:

/* Line 1806 of yacc.c  */
#line 10339 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1608:

/* Line 1806 of yacc.c  */
#line 10340 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1609:

/* Line 1806 of yacc.c  */
#line 10347 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1610:

/* Line 1806 of yacc.c  */
#line 10351 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1611:

/* Line 1806 of yacc.c  */
#line 10355 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1612:

/* Line 1806 of yacc.c  */
#line 10359 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1613:

/* Line 1806 of yacc.c  */
#line 10363 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1614:

/* Line 1806 of yacc.c  */
#line 10367 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1615:

/* Line 1806 of yacc.c  */
#line 10371 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1616:

/* Line 1806 of yacc.c  */
#line 10375 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1617:

/* Line 1806 of yacc.c  */
#line 10379 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1618:

/* Line 1806 of yacc.c  */
#line 10383 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1630:

/* Line 1806 of yacc.c  */
#line 10410 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1631:

/* Line 1806 of yacc.c  */
#line 10414 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1632:

/* Line 1806 of yacc.c  */
#line 10418 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1633:

/* Line 1806 of yacc.c  */
#line 10425 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1634:

/* Line 1806 of yacc.c  */
#line 10429 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1635:

/* Line 1806 of yacc.c  */
#line 10433 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1636:

/* Line 1806 of yacc.c  */
#line 10440 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1637:

/* Line 1806 of yacc.c  */
#line 10447 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1638:

/* Line 1806 of yacc.c  */
#line 10454 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1639:

/* Line 1806 of yacc.c  */
#line 10464 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1640:

/* Line 1806 of yacc.c  */
#line 10471 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1641:

/* Line 1806 of yacc.c  */
#line 10481 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1642:

/* Line 1806 of yacc.c  */
#line 10488 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1643:

/* Line 1806 of yacc.c  */
#line 10499 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1644:

/* Line 1806 of yacc.c  */
#line 10507 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1645:

/* Line 1806 of yacc.c  */
#line 10508 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1646:

/* Line 1806 of yacc.c  */
#line 10512 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1647:

/* Line 1806 of yacc.c  */
#line 10513 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1648:

/* Line 1806 of yacc.c  */
#line 10517 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1649:

/* Line 1806 of yacc.c  */
#line 10518 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1650:

/* Line 1806 of yacc.c  */
#line 10523 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1651:

/* Line 1806 of yacc.c  */
#line 10527 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1652:

/* Line 1806 of yacc.c  */
#line 10534 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1653:

/* Line 1806 of yacc.c  */
#line 10538 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1654:

/* Line 1806 of yacc.c  */
#line 10545 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1655:

/* Line 1806 of yacc.c  */
#line 10546 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1656:

/* Line 1806 of yacc.c  */
#line 10547 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1657:

/* Line 1806 of yacc.c  */
#line 10551 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1658:

/* Line 1806 of yacc.c  */
#line 10552 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1659:

/* Line 1806 of yacc.c  */
#line 10556 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1660:

/* Line 1806 of yacc.c  */
#line 10557 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1661:

/* Line 1806 of yacc.c  */
#line 10558 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1662:

/* Line 1806 of yacc.c  */
#line 10563 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1663:

/* Line 1806 of yacc.c  */
#line 10567 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1664:

/* Line 1806 of yacc.c  */
#line 10579 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1665:

/* Line 1806 of yacc.c  */
#line 10584 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1666:

/* Line 1806 of yacc.c  */
#line 10592 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1667:

/* Line 1806 of yacc.c  */
#line 10596 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1668:

/* Line 1806 of yacc.c  */
#line 10600 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1669:

/* Line 1806 of yacc.c  */
#line 10604 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1670:

/* Line 1806 of yacc.c  */
#line 10608 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1671:

/* Line 1806 of yacc.c  */
#line 10612 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1672:

/* Line 1806 of yacc.c  */
#line 10616 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1673:

/* Line 1806 of yacc.c  */
#line 10620 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1674:

/* Line 1806 of yacc.c  */
#line 10626 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1675:

/* Line 1806 of yacc.c  */
#line 10627 "parser.y"
    { (yyval) = cb_int1; }
    break;



/* Line 1806 of yacc.c  */
#line 18914 "parser.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 10798 "parser.y"


