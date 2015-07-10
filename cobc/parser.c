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
     NOT_EQUAL = 548,
     NOT_EXCEPTION = 549,
     NOT_INVALID_KEY = 550,
     NOT_OVERFLOW = 551,
     NOT_SIZE_ERROR = 552,
     NO_ADVANCING = 553,
     NUMBER = 554,
     NUMBERS = 555,
     NUMERIC = 556,
     NUMERIC_EDITED = 557,
     NUMVALC_FUNC = 558,
     OBJECT_COMPUTER = 559,
     OCCURS = 560,
     OF = 561,
     OFF = 562,
     OMITTED = 563,
     ON = 564,
     ONLY = 565,
     OPEN = 566,
     OPTIONAL = 567,
     OR = 568,
     ORDER = 569,
     ORGANIZATION = 570,
     OTHER = 571,
     OUTPUT = 572,
     OVERLINE = 573,
     PACKED_DECIMAL = 574,
     PADDING = 575,
     PAGE = 576,
     PAGE_COUNTER = 577,
     PARAGRAPH = 578,
     PERFORM = 579,
     PH = 580,
     PF = 581,
     PICTURE = 582,
     PICTURE_SYMBOL = 583,
     PLUS = 584,
     POINTER = 585,
     POSITION = 586,
     POSITIVE = 587,
     PRESENT = 588,
     PREVIOUS = 589,
     PRINTER = 590,
     PRINTING = 591,
     PROCEDURE = 592,
     PROCEDURES = 593,
     PROCEED = 594,
     PROGRAM = 595,
     PROGRAM_ID = 596,
     PROGRAM_NAME = 597,
     PROGRAM_POINTER = 598,
     PROHIBITED = 599,
     PROMPT = 600,
     PROTECTED = 601,
     QUOTE = 602,
     RANDOM = 603,
     RD = 604,
     READ = 605,
     READY_TRACE = 606,
     RECORD = 607,
     RECORDING = 608,
     RECORDS = 609,
     RECURSIVE = 610,
     REDEFINES = 611,
     REEL = 612,
     REFERENCE = 613,
     REFERENCES = 614,
     RELATIVE = 615,
     RELEASE = 616,
     REMAINDER = 617,
     REMOVAL = 618,
     RENAMES = 619,
     REPLACE = 620,
     REPLACING = 621,
     REPORT = 622,
     REPORTING = 623,
     REPORTS = 624,
     REPOSITORY = 625,
     REPO_FUNCTION = 626,
     REQUIRED = 627,
     RESERVE = 628,
     RESET = 629,
     RESET_TRACE = 630,
     RETURN = 631,
     RETURNING = 632,
     REVERSE_FUNC = 633,
     REVERSE_VIDEO = 634,
     REVERSED = 635,
     REWIND = 636,
     REWRITE = 637,
     RF = 638,
     RH = 639,
     RIGHT = 640,
     ROLLBACK = 641,
     ROUNDED = 642,
     RUN = 643,
     SAME = 644,
     SCREEN = 645,
     SCREEN_CONTROL = 646,
     SCROLL = 647,
     SD = 648,
     SEARCH = 649,
     SECTION = 650,
     SECURE = 651,
     SEGMENT_LIMIT = 652,
     SELECT = 653,
     SEMI_COLON = 654,
     SENTENCE = 655,
     SEPARATE = 656,
     SEQUENCE = 657,
     SEQUENTIAL = 658,
     SET = 659,
     SHARING = 660,
     SIGN = 661,
     SIGNED = 662,
     SIGNED_INT = 663,
     SIGNED_LONG = 664,
     SIGNED_SHORT = 665,
     SIZE = 666,
     SIZE_ERROR = 667,
     SORT = 668,
     SORT_MERGE = 669,
     SOURCE = 670,
     SOURCE_COMPUTER = 671,
     SPACE = 672,
     SPECIAL_NAMES = 673,
     STANDARD = 674,
     STANDARD_1 = 675,
     STANDARD_2 = 676,
     START = 677,
     STATIC = 678,
     STATUS = 679,
     STDCALL = 680,
     STEP = 681,
     STOP = 682,
     STRING = 683,
     SUBSTITUTE_FUNC = 684,
     SUBSTITUTE_CASE_FUNC = 685,
     SUBTRACT = 686,
     SUM = 687,
     SUPPRESS = 688,
     SYMBOLIC = 689,
     SYNCHRONIZED = 690,
     SYSTEM_DEFAULT = 691,
     TAB = 692,
     TALLYING = 693,
     TAPE = 694,
     TERMINATE = 695,
     TEST = 696,
     THAN = 697,
     THEN = 698,
     THRU = 699,
     TIME = 700,
     TIMEOUT = 701,
     TIMES = 702,
     TO = 703,
     TOK_AMPER = 704,
     TOK_CLOSE_PAREN = 705,
     TOK_COLON = 706,
     TOK_DIV = 707,
     TOK_DOT = 708,
     TOK_EQUAL = 709,
     TOK_FALSE = 710,
     TOK_FILE = 711,
     TOK_GREATER = 712,
     TOK_INITIAL = 713,
     TOK_LESS = 714,
     TOK_MINUS = 715,
     TOK_MUL = 716,
     TOK_NULL = 717,
     TOK_OVERFLOW = 718,
     TOK_OPEN_PAREN = 719,
     TOK_PLUS = 720,
     TOK_TRUE = 721,
     TOP = 722,
     TOWARD_GREATER = 723,
     TOWARD_LESSER = 724,
     TRAILING = 725,
     TRANSFORM = 726,
     TRIM_FUNC = 727,
     TRUNCATION = 728,
     TYPE = 729,
     UNDERLINE = 730,
     UNIT = 731,
     UNLOCK = 732,
     UNSIGNED = 733,
     UNSIGNED_INT = 734,
     UNSIGNED_LONG = 735,
     UNSIGNED_SHORT = 736,
     UNSTRING = 737,
     UNTIL = 738,
     UP = 739,
     UPDATE = 740,
     UPON = 741,
     UPON_ARGUMENT_NUMBER = 742,
     UPON_COMMAND_LINE = 743,
     UPON_ENVIRONMENT_NAME = 744,
     UPON_ENVIRONMENT_VALUE = 745,
     UPPER = 746,
     UPPER_CASE_FUNC = 747,
     USAGE = 748,
     USE = 749,
     USER = 750,
     USER_DEFAULT = 751,
     USER_FUNCTION_NAME = 752,
     USER_REPO_FUNCTION = 753,
     USING = 754,
     VALUE = 755,
     VARYING = 756,
     WAIT = 757,
     WHEN = 758,
     WHEN_COMPILED_FUNC = 759,
     WITH = 760,
     WORD = 761,
     WORDS = 762,
     WORKING_STORAGE = 763,
     WRITE = 764,
     YYYYDDD = 765,
     YYYYMMDD = 766,
     ZERO = 767,
     SHIFT_PREFER = 768
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
#line 1369 "parser.c"

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
#define YYLAST   8120

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  514
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  817
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1908
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2735

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   768

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
     505,   506,   507,   508,   509,   510,   511,   512,   513
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
    3789,  3791,  3794,  3795,  3798,  3799,  3802,  3805,  3806,  3809,
    3810,  3813,  3816,  3817,  3820,  3821,  3824,  3827,  3828,  3831,
    3832,  3835,  3838,  3840,  3843,  3845,  3847,  3850,  3853,  3856,
    3858,  3860,  3863,  3866,  3869,  3870,  3873,  3874,  3877,  3878,
    3881,  3883,  3885,  3886,  3889,  3891,  3894,  3897,  3899,  3901,
    3903,  3905,  3907,  3909,  3911,  3913,  3915,  3917,  3919,  3921,
    3923,  3925,  3927,  3929,  3931,  3933,  3935,  3937,  3939,  3941,
    3943,  3945,  3947,  3950,  3952,  3954,  3956,  3958,  3960,  3962,
    3964,  3968,  3969,  3971,  3973,  3977,  3981,  3983,  3987,  3991,
    3993,  3997,  3999,  4002,  4005,  4007,  4011,  4013,  4015,  4019,
    4021,  4025,  4027,  4031,  4033,  4036,  4039,  4041,  4043,  4045,
    4048,  4050,  4052,  4054,  4057,  4059,  4060,  4063,  4065,  4067,
    4069,  4073,  4075,  4077,  4080,  4082,  4084,  4086,  4089,  4091,
    4093,  4095,  4097,  4099,  4101,  4104,  4106,  4108,  4112,  4114,
    4117,  4119,  4121,  4123,  4125,  4128,  4131,  4134,  4139,  4143,
    4145,  4147,  4150,  4152,  4154,  4156,  4158,  4160,  4162,  4164,
    4167,  4170,  4173,  4175,  4177,  4179,  4181,  4183,  4185,  4187,
    4189,  4191,  4193,  4195,  4197,  4199,  4201,  4203,  4205,  4207,
    4209,  4211,  4213,  4215,  4217,  4219,  4221,  4223,  4225,  4228,
    4230,  4234,  4237,  4240,  4242,  4244,  4248,  4251,  4254,  4256,
    4258,  4262,  4266,  4271,  4277,  4279,  4281,  4283,  4285,  4287,
    4289,  4291,  4293,  4295,  4297,  4299,  4302,  4304,  4308,  4310,
    4312,  4314,  4316,  4318,  4320,  4322,  4325,  4331,  4337,  4343,
    4348,  4354,  4360,  4366,  4369,  4372,  4374,  4376,  4378,  4380,
    4382,  4384,  4386,  4388,  4390,  4392,  4394,  4395,  4400,  4406,
    4407,  4411,  4414,  4416,  4420,  4424,  4426,  4430,  4432,  4436,
    4437,  4438,  4440,  4441,  4443,  4444,  4446,  4447,  4450,  4451,
    4454,  4455,  4457,  4459,  4460,  4462,  4463,  4465,  4468,  4469,
    4472,  4473,  4477,  4479,  4481,  4483,  4485,  4487,  4489,  4491,
    4493,  4494,  4497,  4499,  4501,  4503,  4505,  4507,  4509,  4511,
    4513,  4515,  4517,  4519,  4521,  4523,  4525,  4527,  4529,  4531,
    4533,  4535,  4537,  4539,  4541,  4543,  4545,  4547,  4549,  4551,
    4553,  4555,  4557,  4559,  4561,  4563,  4565,  4567,  4569,  4571,
    4573,  4575,  4577,  4579,  4581,  4583,  4585,  4587,  4589,  4591,
    4593,  4595,  4597,  4599,  4601,  4603,  4605,  4607,  4609,  4611,
    4613,  4615,  4617,  4619,  4621,  4623,  4625,  4627,  4629,  4631,
    4633,  4635,  4637,  4638,  4640,  4641,  4643,  4644,  4646,  4647,
    4649,  4650,  4652,  4653,  4655,  4656,  4658,  4659,  4661,  4662,
    4664,  4665,  4667,  4668,  4670,  4671,  4673,  4674,  4676,  4677,
    4679,  4680,  4682,  4683,  4685,  4686,  4688,  4689,  4691,  4694,
    4695,  4697,  4698,  4700,  4701,  4703,  4704,  4706,  4707,  4709,
    4711,  4712,  4714,  4715,  4717,  4719,  4720,  4722,  4724,  4725,
    4728,  4731,  4732,  4734,  4735,  4737,  4738,  4740,  4741,  4743,
    4745,  4746,  4748,  4749,  4751,  4752,  4755,  4757,  4759,  4760,
    4762,  4763,  4765,  4766,  4768,  4769,  4771,  4772,  4774,  4775,
    4777,  4778,  4780,  4781,  4783,  4786,  4787,  4789,  4790,  4792,
    4793,  4795,  4796,  4798,  4799,  4801,  4802,  4804,  4805,  4807,
    4808,  4810,  4812,  4813,  4815,  4816,  4820,  4821,  4823,  4826,
    4828,  4830,  4832,  4834,  4836,  4838,  4840,  4842,  4844,  4846,
    4848,  4850,  4852,  4854,  4856,  4858,  4860,  4862,  4864,  4866,
    4868,  4871,  4874,  4876,  4878,  4880,  4882,  4884,  4886,  4889,
    4891,  4895,  4898,  4900,  4902,  4904,  4907,  4909,  4912,  4914,
    4917,  4919,  4922,  4924,  4927,  4929,  4932,  4934,  4937
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     515,     0,    -1,    -1,   516,   517,    -1,   520,    -1,   518,
      -1,   519,    -1,   518,   519,    -1,   522,    -1,   524,    -1,
      -1,   521,   530,    -1,   534,   530,   525,   526,    -1,   534,
     530,   525,   527,    -1,   536,   530,   528,    -1,    -1,   523,
      -1,   525,   523,    -1,    -1,   527,    -1,   143,   537,   453,
      -1,    -1,   529,    -1,   139,   537,   453,    -1,    -1,    -1,
      -1,   542,   543,   544,   606,   607,   609,   608,   642,   531,
     652,   653,   654,   532,   683,   739,   741,   743,   788,   533,
     802,    -1,    -1,   341,   453,   537,   538,   535,   539,   453,
      -1,   200,   453,   537,   538,   453,    -1,   342,    -1,   256,
      -1,    -1,    26,   256,    -1,    -1,  1274,   540,  1289,    -1,
      73,    -1,    73,   541,    -1,   541,    -1,   172,    -1,   458,
      -1,   355,    -1,    -1,   154,   123,   453,    -1,    -1,    85,
     395,   453,    -1,    -1,   544,   545,    -1,   546,    -1,   550,
      -1,   569,    -1,   570,    -1,   561,    -1,    -1,   416,   453,
     547,   548,    -1,    -1,   560,   549,   453,    -1,    -1,  1305,
     108,   272,    -1,    -1,   304,   453,   551,   552,    -1,    -1,
     560,   453,    -1,   560,   553,   453,    -1,   553,   453,    -1,
     554,    -1,   553,   554,    -1,   555,    -1,   556,    -1,   557,
      -1,   558,    -1,   268,   411,  1274,  1223,  1316,    -1,  1322,
    1274,  1190,    -1,   397,  1274,  1223,    -1,  1261,    60,  1274,
     559,    -1,  1190,    -1,   257,    -1,   496,    -1,   436,    -1,
     506,    -1,   560,   506,    -1,    -1,   370,   453,   562,   563,
      -1,    -1,   564,   453,    -1,   564,     1,   453,    -1,   565,
      -1,   564,   565,    -1,   199,     9,   229,    -1,   199,   566,
     567,    -1,   199,   568,   229,    -1,   371,    -1,   498,    -1,
      -1,    26,   256,    -1,   371,    -1,   568,   371,    -1,   418,
     453,    -1,   571,   453,    -1,   571,     1,   453,    -1,   572,
      -1,   571,   572,    -1,   573,    -1,   578,    -1,   587,    -1,
     597,    -1,   594,    -1,   598,    -1,   600,    -1,   601,    -1,
     602,    -1,   603,    -1,   604,    -1,   605,    -1,    -1,   506,
     574,   575,    -1,  1274,    97,    -1,  1223,  1274,  1194,    -1,
    1274,  1194,   576,    -1,   577,    -1,    -1,   577,    -1,  1039,
    1286,  1194,    -1,   577,  1039,  1286,  1194,    -1,    -1,    11,
    1194,   579,  1274,   580,    -1,   280,    -1,   420,    -1,   421,
      -1,   127,    -1,    28,    -1,   581,    -1,   582,    -1,   581,
     582,    -1,   585,    -1,   585,   444,   585,    -1,    -1,   585,
      17,   583,   584,    -1,   585,    -1,   584,    17,   585,    -1,
     256,    -1,   417,    -1,   512,    -1,   347,    -1,   212,    -1,
     266,    -1,   417,    -1,   512,    -1,   589,   588,    -1,    -1,
     218,   506,    -1,   434,  1262,   590,    -1,   591,    -1,   590,
     591,    -1,   592,  1275,   593,    -1,  1195,    -1,   592,  1195,
      -1,  1224,    -1,   593,  1224,    -1,    59,  1194,  1274,   595,
      -1,   596,    -1,   595,   596,    -1,  1226,    -1,  1226,   444,
    1226,    -1,   257,  1194,  1274,   256,    -1,    99,  1292,  1274,
     256,   599,    -1,    -1,  1305,   328,   256,    -1,   109,  1274,
      69,    -1,   301,   406,  1274,   470,   401,    -1,   101,  1274,
    1189,    -1,    97,   424,  1274,  1189,    -1,   391,  1274,  1189,
      -1,   165,  1274,  1189,    -1,    -1,   226,   395,   453,    -1,
      -1,   174,   453,    -1,    -1,   234,   453,    -1,    -1,   609,
     610,    -1,    -1,   398,  1247,  1194,   611,   612,   453,    -1,
     398,     1,   453,    -1,    -1,   612,   613,    -1,   614,    -1,
     620,    -1,   622,    -1,   624,    -1,   625,    -1,   627,    -1,
     631,    -1,   633,    -1,   634,    -1,   635,    -1,   637,    -1,
     638,    -1,   640,    -1,    29,  1302,   617,   616,   618,    -1,
      29,  1302,   617,   615,   619,    -1,    29,  1302,   617,   120,
     619,    -1,    29,  1302,   617,   238,   619,    -1,    29,  1302,
     617,   335,   619,    -1,   118,    -1,   119,    -1,   439,    -1,
     348,    -1,    -1,   252,     7,  1265,    -1,    -1,   172,    -1,
     126,    -1,   256,    -1,  1220,    -1,    -1,   256,    -1,  1220,
      -1,     4,  1281,  1274,   621,    -1,   403,    -1,   126,    -1,
     348,    -1,    19,  1290,  1276,  1274,   636,  1241,   623,    -1,
      -1,   433,   503,     9,  1229,    -1,   433,   503,   586,    -1,
    1306,  1274,   506,    -1,   626,   424,  1274,  1189,    -1,    -1,
     456,    -1,   413,    -1,    -1,   628,   262,  1281,  1274,   629,
      -1,   267,   630,    -1,    33,   630,    -1,   168,    -1,    -1,
     505,   262,   309,  1315,    -1,   505,   262,   309,   274,  1315,
      -1,   505,   386,    -1,   315,  1274,   632,    -1,   632,    -1,
     220,    -1,  1290,  1259,   403,    -1,   360,    -1,   252,   403,
      -1,   320,  1261,  1274,  1193,    -1,   352,   114,  1274,   420,
      -1,   352,  1276,  1274,   636,    -1,  1189,    -1,  1189,   454,
    1188,    -1,  1189,   415,  1274,  1188,    -1,   360,  1276,  1274,
    1189,    -1,   373,   639,  1256,    -1,   287,    -1,  1223,    -1,
     405,  1305,   641,    -1,     9,  1287,    -1,   287,  1287,    -1,
     350,   310,    -1,    -1,   643,   453,    -1,   643,     1,   453,
      -1,   644,    -1,   643,   644,    -1,   645,    -1,   647,    -1,
     389,   646,  1256,  1267,  1179,    -1,    -1,   352,    -1,   413,
      -1,   414,    -1,    -1,   274,   648,  1265,  1298,  1263,   649,
      -1,   650,    -1,   649,   650,    -1,  1180,   651,    -1,    -1,
     331,  1223,    -1,    -1,   103,   123,   453,    -1,    -1,   456,
     395,   453,    -1,    -1,   654,   655,    -1,   656,   685,    -1,
      -1,   658,  1180,   657,   659,   453,    -1,   658,     1,   453,
      -1,   173,    -1,   393,    -1,    -1,   659,   660,    -1,  1274,
     172,    -1,  1274,   204,    -1,   661,    -1,   663,    -1,   667,
      -1,   668,    -1,   671,    -1,   672,    -1,   678,    -1,   679,
      -1,   680,    -1,    47,  1263,  1223,   666,   662,    -1,    -1,
     354,    -1,    58,    -1,   352,  1263,  1223,  1262,    -1,   352,
    1263,  1223,   448,  1223,  1262,    -1,   352,  1274,   501,  1269,
    1295,   665,   666,  1262,   664,    -1,    -1,   115,  1285,  1189,
      -1,    -1,  1268,  1223,    -1,    -1,   448,  1223,    -1,   239,
    1317,  1313,    -1,   500,   306,   669,  1274,   670,    -1,   500,
     306,   175,  1274,   670,    -1,   506,    -1,   213,    -1,   256,
      -1,  1220,    -1,   103,  1317,  1191,    -1,   250,  1274,  1193,
    1280,   673,    -1,    -1,   673,   674,    -1,   675,    -1,   676,
      -1,   677,    -1,  1305,   188,  1258,  1193,    -1,   467,  1193,
      -1,    48,  1193,    -1,   353,  1281,  1274,   506,    -1,    63,
    1274,   506,    -1,   681,   682,    -1,   367,  1274,    -1,   369,
    1255,    -1,  1194,    -1,   682,  1194,    -1,    -1,    -1,   508,
     395,   453,   684,   685,    -1,    -1,    -1,   686,   687,    -1,
     688,   453,    -1,   687,   688,   453,    -1,   687,   453,    -1,
     700,    -1,    -1,   690,   691,   689,   702,    -1,   690,     1,
     453,    -1,  1239,   506,    -1,    -1,   176,    -1,   506,    -1,
     506,    -1,    -1,  1274,   204,    -1,  1227,    -1,   245,   695,
      -1,   244,   695,    -1,    50,  1284,   695,    -1,  1217,    -1,
      41,    -1,    44,    -1,    43,    -1,    42,    -1,    40,    -1,
     699,    -1,   711,    -1,   712,    -1,   696,    -1,   697,    -1,
     698,    -1,     1,   453,    -1,   180,    -1,   184,    -1,   181,
      -1,   182,    -1,   179,    -1,   183,    -1,   185,    -1,   330,
      -1,   343,    -1,   690,   692,    86,   693,   701,    -1,  1257,
     694,    -1,   196,   506,    -1,    -1,   702,   703,    -1,   704,
      -1,   705,    -1,   707,    -1,   708,    -1,   709,    -1,   713,
      -1,   716,    -1,   728,    -1,   729,    -1,   730,    -1,   731,
      -1,   732,    -1,   737,    -1,   738,    -1,   356,  1217,    -1,
    1274,   172,   706,    -1,    -1,    26,   256,    -1,  1274,   204,
      -1,   327,    -1,   710,    -1,   493,  1274,   710,    -1,    39,
      -1,    74,    -1,   711,    -1,   712,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,   120,    -1,   219,
      -1,   319,    -1,   330,    -1,   343,    -1,   410,    -1,   408,
      -1,   409,    -1,   481,    -1,   479,    -1,   480,    -1,    41,
    1293,    -1,    41,   478,    -1,    44,  1293,    -1,    44,   478,
      -1,    43,  1293,    -1,    43,   478,    -1,    42,  1293,    -1,
      42,   478,    -1,    40,  1293,    -1,    40,   478,    -1,   180,
      -1,   181,    -1,   179,    -1,   182,    -1,   183,    -1,   277,
      -1,    76,    -1,   187,    -1,    77,    -1,   186,    -1,  1294,
     241,  1251,    -1,  1294,   470,  1251,    -1,   305,  1223,   717,
    1300,   719,   715,    -1,    -1,   426,  1223,    -1,   305,  1223,
     717,  1300,   719,   722,   725,    -1,   305,   126,   720,   718,
     717,   721,   722,   725,    -1,    -1,   448,  1223,    -1,    -1,
     196,  1223,    -1,    -1,   115,  1285,  1189,    -1,    -1,    53,
    1269,   506,    -1,    -1,   223,    -1,   723,    -1,    -1,   723,
     724,  1276,  1274,  1188,    -1,    27,    -1,   116,    -1,    -1,
     220,  1260,   726,    -1,   727,    -1,   726,   727,    -1,   506,
      -1,   235,  1291,    -1,   435,  1277,    -1,    45,  1303,   512,
      -1,    36,    -1,    -1,   500,  1275,   734,   733,   736,    -1,
     735,    -1,   734,   735,    -1,  1227,    -1,  1227,   444,  1227,
      -1,    -1,  1304,   455,  1274,  1227,    -1,   364,  1220,    -1,
     364,  1220,   444,  1220,    -1,    21,   244,    -1,    21,   301,
      -1,    -1,    -1,   261,   395,   453,   740,   685,    -1,    -1,
      -1,   255,   395,   453,   742,   685,    -1,    -1,    -1,   367,
     395,   453,   744,   745,    -1,    -1,   745,   746,    -1,    -1,
     349,  1181,   747,   748,   453,   762,    -1,    -1,   748,   749,
      -1,     1,   453,    -1,  1274,   204,    -1,    62,  1274,  1207,
      -1,   750,    -1,   753,    -1,  1330,   751,    -1,  1266,   752,
      -1,  1216,    -1,   752,  1216,    -1,   321,  1279,   754,   755,
      -1,  1225,    -1,  1225,  1314,  1225,  1308,    -1,  1225,  1314,
      -1,    -1,   755,   756,    -1,   757,    -1,   758,    -1,   759,
      -1,   760,    -1,   761,    -1,   210,  1274,  1225,    -1,   178,
    1323,  1274,  1225,    -1,   240,  1324,  1274,  1225,    -1,   240,
    1323,  1274,  1225,    -1,   188,  1274,  1225,    -1,    -1,   762,
     763,    -1,    -1,   690,   691,   764,   765,   453,    -1,    -1,
     765,   766,    -1,   767,    -1,   771,    -1,   777,    -1,   708,
      -1,   787,    -1,   713,    -1,   728,    -1,   779,    -1,   730,
      -1,   785,    -1,   772,    -1,   732,    -1,   775,    -1,   786,
      -1,   714,    -1,   776,    -1,   474,  1274,   768,    -1,  1328,
      -1,  1326,    -1,  1324,   769,    -1,  1323,    -1,  1325,   769,
      -1,  1327,    -1,  1329,    -1,    -1,  1216,   770,    -1,   177,
     770,    -1,    -1,   313,   321,    -1,   285,   209,  1274,   782,
      -1,   432,  1284,  1200,   773,    -1,    -1,   374,  1285,   774,
      -1,  1216,    -1,   177,    -1,   333,   503,  1156,    -1,   501,
    1216,   196,  1202,    49,  1202,    -1,   778,   781,    -1,   252,
    1283,  1275,    -1,   254,  1255,    -1,   780,   783,    -1,  1307,
    1283,  1275,    -1,  1308,  1255,    -1,   782,    -1,   781,   782,
      -1,   329,  1223,    -1,  1225,    -1,   286,    -1,   784,    -1,
     783,   784,    -1,   329,  1223,    -1,  1225,    -1,   415,  1274,
    1202,  1248,    -1,   209,  1271,    -1,   493,  1274,   120,    -1,
      -1,    -1,   390,   395,   453,   789,   790,    -1,    -1,   791,
      -1,   792,   453,    -1,   791,   792,   453,    -1,   700,    -1,
      -1,   690,   691,   793,   794,    -1,   690,     1,   453,    -1,
      -1,   794,   795,    -1,    45,   252,    -1,    45,   390,    -1,
      38,    -1,    46,    -1,   161,   157,    -1,   161,   159,    -1,
     211,    -1,   265,    -1,   379,    -1,   475,    -1,   318,    -1,
     243,    -1,    32,    -1,   396,    -1,   372,    -1,   198,    -1,
     345,    57,  1274,  1207,    -1,   345,    -1,   458,    -1,   252,
    1282,  1274,   798,  1209,    -1,  1307,  1282,  1274,   799,  1209,
      -1,   190,  1274,  1209,    -1,    35,  1274,  1209,    -1,   709,
      -1,   730,    -1,   801,    -1,   728,    -1,   713,    -1,   732,
      -1,   708,    -1,   800,    -1,   499,  1216,    -1,   196,  1212,
      -1,   448,  1216,    -1,   329,    -1,   465,    -1,   270,    -1,
     460,    -1,    -1,   796,    -1,   797,    -1,    -1,   796,    -1,
     797,    -1,   305,  1223,  1300,    -1,  1274,   204,    -1,    -1,
      -1,    -1,   337,   123,   806,   814,   453,   803,   815,   804,
     817,    -1,    -1,   805,   828,   453,   817,    -1,    -1,    -1,
     499,   807,   809,    -1,    -1,    56,   808,   809,    -1,   810,
      -1,   809,   810,    -1,   811,   812,   813,   506,    -1,    -1,
    1260,   358,    -1,  1260,   500,    -1,    -1,   411,  1274,    32,
      -1,   411,  1274,   111,    -1,   478,   411,  1274,    32,    -1,
     478,   411,  1274,  1223,    -1,   411,  1274,  1223,    -1,    -1,
     312,    -1,    -1,   377,   506,    -1,    -1,    -1,   110,   453,
     816,   817,   130,   110,   453,    -1,    -1,   817,   818,    -1,
     819,    -1,   822,    -1,   828,   453,    -1,   823,    -1,   453,
      -1,    -1,   506,   395,   824,   453,   820,   821,    -1,    -1,
    1110,   453,    -1,   506,   453,    -1,   506,    -1,    -1,  1223,
      -1,    -1,    -1,   826,   827,   828,    -1,    -1,   829,   830,
      -1,   828,   830,    -1,   831,    -1,   847,    -1,   852,    -1,
     856,    -1,   861,    -1,   876,    -1,   879,    -1,   887,    -1,
     883,    -1,   888,    -1,   889,    -1,   894,    -1,   908,    -1,
     912,    -1,   915,    -1,   929,    -1,   933,    -1,   936,    -1,
     939,    -1,   943,    -1,   944,    -1,   948,    -1,   958,    -1,
     961,    -1,   978,    -1,   980,    -1,   983,    -1,   987,    -1,
     993,    -1,  1005,    -1,  1013,    -1,  1014,    -1,  1017,    -1,
    1018,    -1,  1022,    -1,  1027,    -1,  1028,    -1,  1036,    -1,
    1051,    -1,  1061,    -1,  1070,    -1,  1075,    -1,  1082,    -1,
    1086,    -1,  1088,    -1,  1091,    -1,  1094,    -1,  1098,    -1,
    1125,    -1,   285,   400,    -1,     1,  1252,    -1,    -1,     3,
     832,   833,   846,    -1,   834,   836,   840,   841,   842,  1133,
      -1,  1216,   196,   835,    -1,  1216,   196,  1308,    -1,  1216,
     196,   104,   511,    -1,  1216,   196,   104,    -1,  1216,   196,
     105,   510,    -1,  1216,   196,   105,    -1,  1216,   196,   106,
      -1,  1216,   196,   163,   237,    -1,  1216,   196,   166,   424,
      -1,  1216,   196,   445,    -1,  1216,   196,   495,   276,    -1,
    1216,   196,    70,    -1,  1216,   196,   156,  1133,    -1,  1216,
     196,   154,  1205,  1133,    -1,  1216,   196,    24,    -1,  1216,
     196,    25,  1133,    -1,  1216,   196,  1183,    -1,  1216,   196,
     506,    -1,  1216,    -1,   308,    -1,   254,    -1,   252,   299,
      -1,    -1,   837,    -1,  1258,   838,   839,    -1,  1258,   839,
     838,    -1,  1258,   838,    -1,  1258,   839,    -1,    30,  1205,
      -1,   252,  1282,  1209,    -1,  1307,  1282,  1209,    -1,   331,
    1282,  1209,    -1,    -1,   197,    -1,    -1,   272,  1274,    47,
      -1,    -1,   505,   843,    -1,   844,    -1,   843,   844,    -1,
      32,    -1,   437,    -1,    38,    -1,    46,    -1,    92,    -1,
     198,    -1,   211,    -1,   243,    -1,   263,    -1,   265,    -1,
     288,    -1,   318,    -1,   345,    57,  1274,  1207,    -1,   345,
      -1,   372,    -1,   379,    -1,   396,    -1,   346,   411,  1274,
    1209,    -1,   411,  1274,  1209,    -1,   475,    -1,   287,   845,
      -1,   845,    -1,   491,    -1,   190,  1274,  1209,    -1,    35,
    1274,  1209,    -1,   392,   484,  1155,    -1,   392,   124,  1155,
      -1,   446,  1254,  1210,    -1,   485,    -1,   111,    -1,    -1,
     131,    -1,    -1,     5,   848,   849,   851,    -1,  1198,   448,
    1175,  1139,    -1,  1198,   850,   203,  1175,  1139,    -1,    95,
    1216,   448,  1216,  1248,  1139,    -1,    -1,   448,  1199,    -1,
      -1,   132,    -1,    -1,    10,   853,   854,    -1,  1216,  1242,
     855,    -1,  1169,    58,  1243,   855,    -1,    -1,   377,  1197,
      -1,    -1,    18,   857,   858,    -1,   859,    -1,   858,   859,
      -1,  1185,   448,   860,  1185,    -1,    -1,   339,   448,    -1,
      -1,    51,   862,   863,   875,    -1,   864,  1208,   865,   870,
     873,   874,    -1,    -1,   423,    -1,   425,    -1,   271,    -1,
      -1,    -1,   499,   866,   867,    -1,   868,    -1,   867,   868,
      -1,   869,   308,    -1,   869,   812,  1199,    -1,    -1,  1260,
     358,    -1,  1260,    88,    -1,  1260,   500,    -1,    -1,   871,
    1273,  1216,    -1,   871,   872,    -1,   871,     6,  1284,  1216,
      -1,   377,    -1,   203,    -1,   462,    -1,   308,    -1,    -1,
    1311,   825,    -1,    -1,   294,   825,    -1,    -1,   133,    -1,
      -1,    52,   877,   878,    -1,  1207,    -1,   878,  1207,    -1,
      -1,    61,   880,   881,    -1,  1180,   882,    -1,   881,  1180,
     882,    -1,    -1,  1318,    -1,  1318,  1267,   363,    -1,  1305,
     287,   381,    -1,  1305,   262,    -1,    -1,    75,   884,   885,
     886,    -1,  1175,  1309,  1169,  1139,    -1,    -1,   134,    -1,
      72,    -1,    89,    -1,    -1,   112,   890,   891,   893,    -1,
    1180,  1290,  1152,    -1,   456,   892,    -1,  1180,    -1,   892,
    1180,    -1,    -1,   135,    -1,    -1,   120,   895,   896,   907,
      -1,  1207,   489,  1136,    -1,  1207,   490,  1136,    -1,  1207,
     487,  1136,    -1,  1207,   488,  1136,    -1,  1198,   900,   904,
    1136,    -1,   897,  1136,    -1,  1199,   505,   905,  1136,    -1,
     899,    -1,    -1,   897,   898,   899,    -1,  1199,   837,   901,
     841,   903,    -1,    -1,   486,  1183,    -1,   486,   506,    -1,
     486,   335,    -1,   486,    97,    -1,    -1,   486,   902,    -1,
      97,    -1,    98,    -1,    -1,   505,   905,    -1,    -1,   298,
      -1,   906,    -1,   905,   906,    -1,    38,    -1,    45,   252,
      -1,    45,   390,    -1,    46,    -1,    92,    -1,   161,   157,
      -1,   161,   159,    -1,   211,    -1,   265,    -1,   318,    -1,
     379,    -1,   411,  1274,  1209,    -1,   475,    -1,   190,  1274,
    1209,    -1,    35,  1274,  1209,    -1,   392,   484,  1155,    -1,
     392,   124,  1155,    -1,    -1,   136,    -1,    -1,   122,   909,
     910,   911,    -1,  1199,   228,  1175,  1139,    -1,  1199,   228,
    1199,   203,  1175,  1139,    -1,  1199,    49,  1199,   203,  1175,
    1139,    -1,  1199,   228,  1199,   203,  1176,   362,  1176,  1139,
      -1,  1199,    49,  1199,   203,  1176,   362,  1176,  1139,    -1,
      -1,   137,    -1,    -1,   153,   913,   914,    -1,   256,   865,
      -1,    -1,   164,   916,   917,   928,    -1,   918,   920,    -1,
     919,    -1,   918,    17,   919,    -1,  1157,    -1,   466,    -1,
     455,    -1,   921,   923,    -1,   921,    -1,   922,    -1,   921,
     922,    -1,   924,   825,    -1,   503,   316,   825,    -1,   503,
     925,    -1,   924,   503,   925,    -1,   926,    -1,   925,    17,
     926,    -1,  1158,   927,    -1,    21,    -1,   466,    -1,   455,
      -1,    -1,   444,  1157,    -1,    -1,   138,    -1,    -1,   169,
     930,   931,    -1,    -1,   340,   932,    -1,   199,    -1,   324,
     102,    -1,   324,    -1,   395,    -1,   323,    -1,    -1,   871,
    1199,    -1,    -1,   195,   934,   935,    -1,  1196,    -1,    -1,
     202,   937,   938,    -1,  1220,    -1,    -1,   205,   940,   941,
      -1,  1301,  1184,   942,    -1,    -1,   115,  1285,  1216,    -1,
     206,   932,    -1,    -1,   215,   945,  1156,  1299,   946,   947,
      -1,   825,   129,   825,    -1,   129,   825,    -1,   825,    -1,
      -1,   140,    -1,    -1,   222,   949,   950,    -1,  1196,   951,
     952,   953,   957,    -1,    -1,  1305,   176,    -1,    -1,     9,
    1301,   500,    -1,   956,  1301,   500,    -1,    -1,   366,   954,
      -1,   955,    -1,   954,   955,    -1,   956,  1264,    49,  1199,
      -1,    12,    -1,    15,    -1,   301,    -1,    16,    -1,   302,
      -1,   277,    -1,   278,    -1,    -1,  1299,  1301,   111,    -1,
      -1,   224,   959,   960,    -1,  1181,    -1,   960,  1181,    -1,
      -1,   227,   962,   963,    -1,   964,   965,    -1,  1216,    -1,
    1227,    -1,  1230,    -1,   966,   968,    -1,   966,    -1,   968,
      -1,   969,    -1,    -1,   438,   967,   970,    -1,   366,   972,
      -1,    93,  1205,   448,  1206,   976,    -1,   971,    -1,   970,
     971,    -1,  1205,   189,    -1,    58,   976,    -1,     9,    -1,
     241,    -1,   470,    -1,  1205,   976,    -1,   973,    -1,   972,
     973,    -1,    58,    49,  1205,   976,    -1,   974,   975,    -1,
      -1,     9,    -1,   241,    -1,   178,    -1,   470,    -1,  1205,
      49,  1206,   976,    -1,    -1,   976,   977,    -1,    37,  1272,
    1199,    -1,     8,  1272,  1199,    -1,    -1,   269,   979,  1053,
      -1,    -1,   273,   981,   982,    -1,  1199,   448,  1196,    -1,
      95,  1199,   448,  1196,    -1,    -1,   275,   984,   985,   986,
      -1,  1199,    49,  1175,  1139,    -1,  1199,    49,  1199,   203,
    1175,  1139,    -1,    -1,   141,    -1,    -1,   311,   988,   989,
      -1,   990,   991,  1179,   992,    -1,   989,   990,   991,  1179,
     992,    -1,   225,    -1,   317,    -1,   233,    -1,   171,    -1,
      -1,   405,  1305,   641,    -1,    -1,  1305,   287,   381,    -1,
    1305,   262,    -1,   380,    -1,    -1,   324,   994,   995,    -1,
     999,  1000,    -1,    -1,  1000,   996,   825,   997,    -1,  1000,
     998,    -1,    -1,   142,    -1,   142,    -1,   453,    -1,  1185,
      -1,  1185,   444,  1185,    -1,    -1,  1208,   447,    -1,   191,
      -1,  1001,   483,  1002,    -1,  1001,   501,  1003,    -1,    -1,
    1305,   441,  1130,    -1,   169,    -1,  1156,    -1,  1004,    -1,
    1003,     8,  1004,    -1,  1216,   196,  1199,    49,  1199,   483,
    1156,    -1,    -1,   350,  1006,  1007,  1012,    -1,  1180,  1245,
    1290,  1008,  1009,  1010,  1011,    -1,    -1,   228,  1216,    -1,
      -1,   217,   262,    -1,  1305,   262,    -1,  1305,   236,   262,
      -1,  1305,   287,   262,    -1,  1305,   216,   262,    -1,  1305,
     502,    -1,    -1,   237,  1274,  1216,    -1,  1152,    -1,  1146,
      -1,    -1,   144,    -1,   351,    -1,    -1,   361,  1015,  1016,
      -1,  1177,  1128,    -1,   375,    -1,    -1,   376,  1019,  1020,
    1021,    -1,  1180,  1290,  1008,  1145,    -1,    -1,   145,    -1,
      -1,   382,  1023,  1024,  1026,    -1,  1177,  1128,  1025,  1152,
      -1,    -1,  1305,   262,    -1,  1305,   287,   262,    -1,    -1,
     146,    -1,   386,    -1,    -1,   394,  1029,  1030,  1035,    -1,
    1178,  1031,  1032,  1033,    -1,     9,  1178,  1032,   503,  1157,
     825,    -1,    -1,   501,  1216,    -1,    -1,   130,   825,    -1,
    1034,    -1,  1034,  1033,    -1,   503,  1156,   825,    -1,    -1,
     147,    -1,    -1,   404,  1037,  1038,    -1,  1041,    -1,  1042,
      -1,  1045,    -1,  1046,    -1,  1047,    -1,  1049,    -1,   309,
      -1,   307,    -1,   484,    -1,   124,    -1,   154,  1205,   448,
    1205,    -1,  1213,    31,  1043,    -1,  1044,    -1,  1043,  1044,
      -1,    38,  1039,    -1,    46,  1039,    -1,   211,  1039,    -1,
     265,  1039,    -1,   379,  1039,    -1,   475,  1039,    -1,   243,
    1039,    -1,   318,  1039,    -1,  1196,   448,   153,  1204,    -1,
    1196,   448,  1199,    -1,  1196,  1040,    49,  1199,    -1,  1048,
      -1,  1047,  1048,    -1,  1182,   448,  1039,    -1,  1050,    -1,
    1049,  1050,    -1,  1196,   448,   466,    -1,  1196,   448,   455,
      -1,    -1,   413,  1052,  1053,    -1,    -1,  1214,  1055,  1057,
    1058,  1054,  1059,  1060,    -1,    -1,  1055,  1285,   724,  1276,
    1056,    -1,    -1,  1056,  1220,    -1,    -1,  1321,  1270,    -1,
      -1,  1306,  1274,  1189,    -1,    -1,   499,  1179,    -1,   225,
     337,  1274,   999,    -1,    -1,   203,  1179,    -1,   317,   337,
    1274,   999,    -1,    -1,   422,  1062,  1063,  1069,    -1,  1180,
    1065,  1064,  1152,    -1,    -1,  1305,  1320,  1169,    -1,    -1,
     237,  1274,  1066,  1216,    -1,   178,    -1,   240,    -1,  1162,
      -1,  1246,  1163,    -1,  1246,  1164,    -1,  1246,  1165,    -1,
    1246,  1166,    -1,  1067,    -1,  1068,    -1,   290,  1162,    -1,
     293,    -1,    -1,   148,    -1,    -1,   427,   388,  1071,  1072,
      -1,   427,  1074,    -1,    -1,   871,  1199,    -1,  1305,   162,
    1297,  1073,    -1,  1305,   289,  1297,  1073,    -1,    -1,  1199,
      -1,   256,    -1,   417,    -1,   512,    -1,   347,    -1,    -1,
     428,  1076,  1077,  1081,    -1,  1078,   228,  1216,  1080,  1142,
      -1,  1079,    -1,  1078,  1079,    -1,  1199,    -1,   113,  1260,
     411,    -1,   113,  1260,  1199,    -1,    -1,  1305,   330,  1274,
    1216,    -1,    -1,   149,    -1,    -1,   431,  1083,  1084,  1085,
      -1,  1198,   196,  1175,  1139,    -1,  1198,   196,  1199,   203,
    1175,  1139,    -1,    95,  1216,   196,  1216,  1248,  1139,    -1,
      -1,   150,    -1,   433,  1087,    -1,    -1,   336,    -1,    -1,
     440,  1089,  1090,    -1,  1181,    -1,  1090,  1181,    -1,    -1,
     471,  1092,  1093,    -1,  1216,   196,  1205,   448,  1206,    -1,
      -1,   477,  1095,  1096,    -1,  1180,  1097,    -1,    -1,   352,
      -1,   354,    -1,    -1,   482,  1099,  1100,  1109,    -1,  1216,
    1101,  1104,  1080,  1108,  1142,    -1,    -1,   113,  1260,  1102,
      -1,  1103,    -1,  1102,   313,  1103,    -1,  1240,  1205,    -1,
     228,  1105,    -1,  1104,  1105,    -1,  1216,  1106,  1107,    -1,
      -1,   114,  1269,  1216,    -1,    -1,    96,  1269,  1216,    -1,
      -1,   438,  1269,  1216,    -1,    -1,   151,    -1,    -1,   494,
    1111,  1112,    -1,  1113,    -1,  1116,    -1,  1120,    -1,  1122,
      -1,  1123,    -1,  1114,  1254,  1296,  1310,  1288,  1285,  1115,
      -1,    -1,   204,    -1,  1179,    -1,   225,    -1,   317,    -1,
     233,    -1,   171,    -1,  1267,   108,  1285,  1117,    -1,  1118,
      -1,  1117,  1118,    -1,  1186,    -1,     9,   338,    -1,     9,
    1119,  1220,    -1,    -1,   359,    -1,   359,   306,    -1,   306,
      -1,  1258,   340,  1121,    -1,   422,    -1,   130,    -1,  1114,
      37,   368,  1216,    -1,  1124,    -1,   167,    -1,   128,    -1,
      -1,   509,  1126,  1127,  1132,    -1,  1177,  1128,  1129,  1025,
    1131,    -1,    -1,   196,  1212,    -1,    -1,  1130,  1253,  1209,
    1278,    -1,  1130,  1253,  1183,    -1,  1130,  1253,   321,    -1,
      37,    -1,     8,    -1,  1152,    -1,  1149,    -1,    -1,   152,
      -1,  1134,  1135,    -1,    -1,   166,   825,    -1,    -1,   294,
     825,    -1,  1137,  1138,    -1,    -1,   166,   825,    -1,    -1,
     294,   825,    -1,  1140,  1141,    -1,    -1,   412,   825,    -1,
      -1,   297,   825,    -1,  1143,  1144,    -1,    -1,   463,   825,
      -1,    -1,   296,   825,    -1,  1147,  1148,    -1,  1147,    -1,
    1147,  1148,    -1,  1147,    -1,  1148,    -1,   130,   825,    -1,
     291,   825,    -1,  1150,  1151,    -1,  1150,    -1,  1151,    -1,
     158,   825,    -1,   292,   825,    -1,  1153,  1154,    -1,    -1,
     231,   825,    -1,    -1,   295,   825,    -1,    -1,  1211,  1319,
      -1,  1157,    -1,  1158,    -1,    -1,  1159,  1160,    -1,  1161,
      -1,  1160,   232,    -1,  1160,  1161,    -1,  1199,    -1,   464,
      -1,   450,    -1,   465,    -1,   460,    -1,   461,    -1,   452,
      -1,   170,    -1,  1162,    -1,  1163,    -1,  1164,    -1,  1165,
      -1,  1166,    -1,   293,    -1,   290,    -1,    20,    -1,   313,
      -1,   308,    -1,   301,    -1,    12,    -1,    13,    -1,    14,
      -1,   332,    -1,   284,    -1,   454,    -1,   160,  1301,    -1,
     457,    -1,   207,    -1,   459,    -1,   246,    -1,   208,    -1,
     247,    -1,  1169,    -1,  1167,  1168,  1169,    -1,    -1,    71,
      -1,   399,    -1,  1169,   465,  1170,    -1,  1169,   460,  1170,
      -1,  1170,    -1,  1170,   461,  1171,    -1,  1170,   452,  1171,
      -1,  1171,    -1,  1172,   170,  1171,    -1,  1172,    -1,   465,
    1173,    -1,   460,  1173,    -1,  1173,    -1,   464,  1169,   450,
      -1,  1202,    -1,   251,    -1,   251,  1312,   506,    -1,   253,
      -1,   253,  1312,   506,    -1,   322,    -1,   322,  1312,   506,
      -1,  1176,    -1,  1175,  1176,    -1,  1197,  1248,    -1,  1220,
      -1,  1220,    -1,  1180,    -1,  1179,  1180,    -1,   506,    -1,
     506,    -1,  1183,    -1,  1182,  1183,    -1,   271,    -1,    -1,
    1184,  1185,    -1,  1186,    -1,  1220,    -1,  1187,    -1,  1187,
    1312,  1187,    -1,   256,    -1,  1189,    -1,  1188,  1189,    -1,
    1220,    -1,   506,    -1,  1192,    -1,  1191,  1192,    -1,   506,
      -1,  1189,    -1,   256,    -1,   506,    -1,   506,    -1,  1197,
      -1,  1196,  1197,    -1,  1218,    -1,  1228,    -1,     6,  1284,
    1217,    -1,  1199,    -1,  1198,  1199,    -1,  1216,    -1,  1227,
      -1,  1230,    -1,  1174,    -1,   245,  1217,    -1,   245,  1228,
      -1,   245,  1230,    -1,     6,  1284,  1203,  1204,    -1,     6,
    1284,  1217,    -1,   271,    -1,  1202,    -1,  1200,  1202,    -1,
    1216,    -1,  1228,    -1,  1230,    -1,  1216,    -1,  1228,    -1,
    1230,    -1,  1174,    -1,   245,  1217,    -1,   245,  1228,    -1,
     245,  1230,    -1,   340,    -1,   153,    -1,  1217,    -1,   256,
      -1,  1216,    -1,  1228,    -1,  1216,    -1,  1227,    -1,  1216,
      -1,   256,    -1,  1216,    -1,   256,    -1,  1230,    -1,  1213,
      -1,  1223,    -1,   512,    -1,  1213,    -1,  1225,    -1,  1213,
      -1,  1223,    -1,  1216,    -1,  1227,    -1,  1230,    -1,  1215,
      -1,  1215,    -1,  1220,    -1,  1220,  1221,    -1,  1217,    -1,
    1220,  1221,  1222,    -1,  1220,  1221,    -1,  1220,  1222,    -1,
    1220,    -1,  1219,    -1,  1220,  1221,  1222,    -1,  1220,  1221,
      -1,  1220,  1222,    -1,  1220,    -1,   506,    -1,   506,  1312,
    1220,    -1,   464,  1167,   450,    -1,   464,  1169,   451,   450,
      -1,   464,  1169,   451,  1169,   450,    -1,   256,    -1,   256,
      -1,   256,    -1,   256,    -1,   417,    -1,   512,    -1,   347,
      -1,   212,    -1,   266,    -1,   462,    -1,  1228,    -1,     9,
    1229,    -1,  1229,    -1,  1228,   449,  1229,    -1,   256,    -1,
     417,    -1,   512,    -1,   347,    -1,   212,    -1,   266,    -1,
     462,    -1,  1231,  1234,    -1,  1232,   464,  1201,   450,  1234,
      -1,  1233,   464,  1167,   450,  1234,    -1,   472,   464,  1236,
     450,  1234,    -1,   303,   464,  1237,   450,    -1,   258,   464,
    1238,   450,  1234,    -1,   259,   464,  1238,   450,  1234,    -1,
     260,   464,  1238,   450,  1234,    -1,   201,  1235,    -1,   497,
    1235,    -1,   100,    -1,   504,    -1,   492,    -1,   264,    -1,
     378,    -1,    83,    -1,   192,    -1,   193,    -1,   194,    -1,
     429,    -1,   430,    -1,    -1,   464,  1169,   451,   450,    -1,
     464,  1169,   451,  1169,   450,    -1,    -1,   464,  1167,   450,
      -1,   464,   450,    -1,  1201,    -1,  1201,  1168,   241,    -1,
    1201,  1168,   470,    -1,  1201,    -1,  1201,  1168,  1201,    -1,
    1169,    -1,  1169,  1168,  1189,    -1,    -1,    -1,     9,    -1,
      -1,  1321,    -1,    -1,   223,    -1,    -1,   223,  1244,    -1,
      -1,   448,  1206,    -1,    -1,   285,    -1,   334,    -1,    -1,
     290,    -1,    -1,   312,    -1,   290,   312,    -1,    -1,   387,
    1249,    -1,    -1,   272,  1274,  1250,    -1,    34,    -1,   281,
      -1,   282,    -1,   283,    -1,   344,    -1,   468,    -1,   469,
      -1,   473,    -1,    -1,   401,  1261,    -1,   453,    -1,     3,
      -1,     5,    -1,    10,    -1,    18,    -1,    51,    -1,    52,
      -1,    61,    -1,    72,    -1,    75,    -1,    89,    -1,   112,
      -1,   120,    -1,   122,    -1,   129,    -1,   153,    -1,   164,
      -1,   169,    -1,   195,    -1,   202,    -1,   205,    -1,   206,
      -1,   215,    -1,   222,    -1,   224,    -1,   227,    -1,   269,
      -1,   273,    -1,   275,    -1,   285,    -1,   311,    -1,   324,
      -1,   350,    -1,   361,    -1,   376,    -1,   382,    -1,   386,
      -1,   394,    -1,   404,    -1,   413,    -1,   422,    -1,   427,
      -1,   428,    -1,   431,    -1,   433,    -1,   440,    -1,   471,
      -1,   477,    -1,   482,    -1,   509,    -1,   131,    -1,   132,
      -1,   133,    -1,   134,    -1,   135,    -1,   136,    -1,   137,
      -1,   138,    -1,   140,    -1,   141,    -1,   142,    -1,   144,
      -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,   149,
      -1,   150,    -1,   151,    -1,   152,    -1,    -1,     7,    -1,
      -1,     8,    -1,    -1,    22,    -1,    -1,    23,    -1,    -1,
      26,    -1,    -1,    30,    -1,    -1,    39,    -1,    -1,    49,
      -1,    -1,    57,    -1,    -1,    58,    -1,    -1,    87,    -1,
      -1,   103,    -1,    -1,   456,    -1,    -1,   177,    -1,    -1,
     189,    -1,    -1,   196,    -1,    -1,   218,    -1,    -1,   314,
      -1,   218,   314,    -1,    -1,   221,    -1,    -1,   458,    -1,
      -1,   228,    -1,    -1,   232,    -1,    -1,   232,    -1,    22,
      -1,    -1,   237,    -1,    -1,   242,    -1,   385,    -1,    -1,
     252,    -1,   254,    -1,    -1,   248,  1274,    -1,   249,  1255,
      -1,    -1,   254,    -1,    -1,   272,    -1,    -1,   299,    -1,
      -1,   299,    -1,   300,    -1,    -1,   306,    -1,    -1,   309,
      -1,    -1,   424,   232,    -1,   424,    -1,   232,    -1,    -1,
     316,    -1,    -1,   337,    -1,    -1,   340,    -1,    -1,   352,
      -1,    -1,   385,    -1,    -1,   406,    -1,    -1,   407,    -1,
      -1,   406,    -1,   406,   232,    -1,    -1,   411,    -1,    -1,
     419,    -1,    -1,   424,    -1,    -1,   439,    -1,    -1,   443,
      -1,    -1,   447,    -1,    -1,   448,    -1,    -1,   448,    -1,
     499,    -1,    -1,   503,    -1,    -1,   503,   404,   448,    -1,
      -1,   505,    -1,    64,   402,    -1,   402,    -1,    67,    -1,
      65,    -1,    68,    -1,    66,    -1,   454,    -1,   160,    -1,
     166,    -1,   162,    -1,   166,    -1,   463,    -1,   218,    -1,
     306,    -1,   419,    -1,   308,    -1,   252,    -1,   254,    -1,
     352,    -1,   354,    -1,    58,    -1,   507,    -1,   352,  1274,
      -1,   354,  1255,    -1,   357,    -1,   476,    -1,   252,    -1,
     254,    -1,   411,    -1,   244,    -1,   505,   125,    -1,   125,
      -1,   340,    64,   402,    -1,    64,   402,    -1,   402,    -1,
     117,    -1,   107,    -1,    90,   210,    -1,    55,    -1,    90,
     188,    -1,    54,    -1,   321,   210,    -1,   325,    -1,   321,
     188,    -1,   326,    -1,   367,   210,    -1,   384,    -1,   367,
     188,    -1,   383,    -1,    90,  1274,    -1,    91,  1255,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1388,  1388,  1388,  1420,  1421,  1425,  1426,  1430,  1431,
    1435,  1435,  1458,  1465,  1472,  1478,  1479,  1480,  1484,  1485,
    1489,  1513,  1514,  1518,  1552,  1558,  1570,  1544,  1580,  1579,
    1617,  1649,  1650,  1654,  1655,  1658,  1659,  1663,  1672,  1681,
    1682,  1686,  1690,  1699,  1700,  1708,  1709,  1719,  1720,  1724,
    1725,  1726,  1727,  1728,  1735,  1734,  1747,  1748,  1751,  1752,
    1766,  1765,  1775,  1776,  1777,  1778,  1782,  1783,  1787,  1788,
    1789,  1790,  1794,  1801,  1808,  1815,  1826,  1830,  1834,  1838,
    1845,  1846,  1853,  1852,  1863,  1864,  1865,  1872,  1873,  1877,
    1881,  1893,  1897,  1898,  1903,  1906,  1913,  1918,  1929,  1942,
    1943,  1951,  1952,  1956,  1957,  1958,  1959,  1960,  1961,  1962,
    1963,  1964,  1965,  1966,  1967,  1975,  1974,  2002,  2012,  2025,
    2033,  2036,  2037,  2041,  2056,  2077,  2076,  2100,  2106,  2112,
    2118,  2124,  2130,  2140,  2144,  2151,  2155,  2160,  2159,  2170,
    2174,  2181,  2182,  2183,  2184,  2185,  2186,  2190,  2191,  2198,
    2213,  2216,  2223,  2231,  2235,  2246,  2266,  2274,  2285,  2286,
    2292,  2313,  2314,  2318,  2322,  2343,  2366,  2448,  2451,  2460,
    2479,  2495,  2513,  2531,  2548,  2564,  2565,  2572,  2573,  2581,
    2582,  2592,  2593,  2598,  2597,  2618,  2628,  2629,  2633,  2634,
    2635,  2636,  2637,  2638,  2639,  2640,  2641,  2642,  2643,  2644,
    2645,  2652,  2658,  2668,  2681,  2694,  2710,  2711,  2712,  2713,
    2716,  2717,  2723,  2724,  2728,  2732,  2733,  2738,  2741,  2742,
    2749,  2757,  2758,  2759,  2766,  2790,  2792,  2797,  2807,  2818,
    2825,  2827,  2828,  2834,  2834,  2841,  2846,  2851,  2858,  2859,
    2860,  2864,  2875,  2876,  2880,  2885,  2890,  2895,  2906,  2917,
    2927,  2935,  2936,  2937,  2943,  2954,  2961,  2962,  2968,  2976,
    2977,  2978,  2984,  2985,  2986,  2993,  2994,  2998,  2999,  3005,
    3033,  3034,  3035,  3036,  3043,  3042,  3058,  3059,  3063,  3066,
    3067,  3073,  3074,  3082,  3083,  3091,  3092,  3096,  3117,  3116,
    3133,  3140,  3144,  3150,  3151,  3155,  3165,  3180,  3181,  3182,
    3183,  3184,  3185,  3186,  3187,  3188,  3195,  3202,  3202,  3202,
    3208,  3228,  3262,  3293,  3294,  3301,  3302,  3306,  3307,  3314,
    3325,  3330,  3341,  3342,  3346,  3347,  3353,  3364,  3382,  3383,
    3387,  3388,  3389,  3393,  3400,  3407,  3416,  3428,  3480,  3495,
    3496,  3500,  3510,  3549,  3551,  3550,  3566,  3569,  3569,  3586,
    3587,  3589,  3593,  3595,  3594,  3629,  3642,  3650,  3655,  3661,
    3670,  3680,  3683,  3695,  3696,  3697,  3698,  3702,  3706,  3710,
    3714,  3718,  3722,  3726,  3730,  3734,  3738,  3742,  3746,  3750,
    3761,  3762,  3766,  3767,  3771,  3772,  3773,  3777,  3778,  3782,
    3808,  3812,  3821,  3825,  3834,  3835,  3836,  3837,  3838,  3839,
    3840,  3841,  3842,  3843,  3844,  3845,  3846,  3847,  3854,  3878,
    3906,  3909,  3918,  3943,  3954,  3955,  3959,  3963,  3967,  3971,
    3975,  3979,  3983,  3987,  3991,  3995,  3999,  4003,  4007,  4012,
    4017,  4021,  4025,  4033,  4037,  4041,  4049,  4053,  4057,  4061,
    4065,  4069,  4073,  4077,  4081,  4089,  4097,  4101,  4105,  4109,
    4113,  4117,  4125,  4126,  4130,  4131,  4137,  4143,  4155,  4173,
    4174,  4183,  4204,  4225,  4226,  4230,  4231,  4234,  4235,  4241,
    4242,  4249,  4250,  4257,  4281,  4282,  4299,  4300,  4303,  4304,
    4311,  4312,  4317,  4328,  4339,  4350,  4361,  4390,  4389,  4398,
    4399,  4403,  4404,  4407,  4408,  4421,  4434,  4455,  4464,  4478,
    4480,  4479,  4499,  4501,  4500,  4516,  4518,  4517,  4526,  4527,
    4534,  4533,  4546,  4547,  4548,  4555,  4560,  4564,  4565,  4571,
    4578,  4582,  4583,  4589,  4626,  4630,  4635,  4641,  4642,  4647,
    4648,  4649,  4650,  4651,  4655,  4662,  4669,  4676,  4683,  4689,
    4690,  4695,  4694,  4701,  4702,  4706,  4707,  4708,  4709,  4710,
    4711,  4712,  4713,  4714,  4715,  4716,  4717,  4718,  4719,  4720,
    4721,  4725,  4732,  4733,  4734,  4735,  4736,  4737,  4738,  4741,
    4742,  4743,  4746,  4747,  4751,  4758,  4764,  4765,  4769,  4770,
    4774,  4781,  4785,  4792,  4793,  4797,  4804,  4805,  4809,  4810,
    4814,  4815,  4816,  4820,  4821,  4825,  4826,  4830,  4837,  4844,
    4852,  4854,  4853,  4874,  4875,  4879,  4880,  4885,  4887,  4886,
    4946,  4964,  4965,  4969,  4973,  4977,  4981,  4985,  4989,  4993,
    4997,  5001,  5005,  5009,  5013,  5017,  5021,  5025,  5029,  5033,
    5038,  5042,  5046,  5051,  5056,  5061,  5066,  5067,  5068,  5069,
    5070,  5071,  5072,  5073,  5074,  5081,  5086,  5095,  5096,  5100,
    5101,  5106,  5109,  5113,  5121,  5124,  5128,  5136,  5147,  5155,
    5157,  5167,  5156,  5194,  5194,  5227,  5231,  5230,  5244,  5243,
    5263,  5264,  5269,  5276,  5278,  5282,  5292,  5294,  5302,  5310,
    5318,  5347,  5378,  5380,  5390,  5395,  5422,  5424,  5423,  5460,
    5461,  5465,  5466,  5467,  5484,  5485,  5496,  5495,  5545,  5546,
    5550,  5598,  5611,  5614,  5633,  5638,  5632,  5651,  5651,  5681,
    5688,  5689,  5690,  5691,  5692,  5693,  5694,  5695,  5696,  5697,
    5698,  5699,  5700,  5701,  5702,  5703,  5704,  5705,  5706,  5707,
    5708,  5709,  5710,  5711,  5712,  5713,  5714,  5715,  5716,  5717,
    5718,  5719,  5720,  5721,  5722,  5723,  5724,  5725,  5726,  5727,
    5728,  5729,  5730,  5731,  5732,  5733,  5734,  5735,  5736,  5737,
    5751,  5763,  5762,  5778,  5784,  5788,  5792,  5797,  5802,  5807,
    5812,  5816,  5820,  5824,  5828,  5833,  5837,  5841,  5845,  5849,
    5853,  5857,  5864,  5865,  5872,  5873,  5877,  5878,  5882,  5883,
    5884,  5885,  5886,  5890,  5894,  5895,  5898,  5899,  5902,  5903,
    5909,  5910,  5914,  5915,  5919,  5923,  5929,  5933,  5937,  5941,
    5945,  5949,  5953,  5957,  5961,  5965,  5969,  5973,  5977,  5981,
    5985,  5989,  5993,  5997,  6001,  6007,  6011,  6015,  6019,  6023,
    6027,  6031,  6038,  6039,  6043,  6047,  6065,  6064,  6073,  6077,
    6081,  6087,  6088,  6095,  6099,  6110,  6109,  6118,  6122,  6134,
    6135,  6143,  6142,  6151,  6152,  6156,  6162,  6162,  6169,  6168,
    6178,  6198,  6202,  6207,  6212,  6233,  6237,  6236,  6253,  6254,
    6259,  6267,  6291,  6293,  6297,  6306,  6319,  6322,  6326,  6330,
    6353,  6354,  6358,  6359,  6364,  6367,  6375,  6379,  6387,  6391,
    6402,  6401,  6409,  6413,  6424,  6423,  6431,  6436,  6444,  6445,
    6446,  6447,  6448,  6456,  6455,  6464,  6471,  6475,  6485,  6496,
    6514,  6513,  6522,  6526,  6530,  6535,  6543,  6547,  6558,  6557,
    6567,  6571,  6575,  6579,  6583,  6587,  6588,  6597,  6599,  6598,
    6606,  6615,  6622,  6626,  6630,  6634,  6644,  6646,  6650,  6651,
    6654,  6656,  6663,  6664,  6668,  6669,  6674,  6678,  6682,  6686,
    6690,  6694,  6698,  6702,  6706,  6710,  6714,  6718,  6722,  6726,
    6730,  6734,  6738,  6745,  6749,  6760,  6759,  6768,  6772,  6776,
    6780,  6784,  6791,  6795,  6806,  6805,  6814,  6833,  6832,  6856,
    6864,  6865,  6870,  6881,  6892,  6906,  6910,  6917,  6918,  6923,
    6932,  6941,  6946,  6955,  6956,  6961,  7023,  7024,  7025,  7029,
    7030,  7034,  7038,  7049,  7048,  7060,  7061,  7082,  7096,  7118,
    7140,  7160,  7183,  7184,  7192,  7191,  7200,  7211,  7210,  7220,
    7227,  7226,  7239,  7248,  7252,  7263,  7279,  7278,  7287,  7291,
    7295,  7302,  7306,  7317,  7316,  7324,  7332,  7333,  7337,  7338,
    7339,  7344,  7347,  7354,  7358,  7366,  7373,  7374,  7375,  7376,
    7377,  7378,  7379,  7384,  7387,  7397,  7396,  7405,  7411,  7423,
    7422,  7431,  7435,  7439,  7443,  7450,  7451,  7452,  7453,  7460,
    7459,  7473,  7483,  7492,  7493,  7497,  7498,  7499,  7500,  7501,
    7502,  7506,  7507,  7511,  7516,  7523,  7524,  7525,  7526,  7527,
    7531,  7559,  7562,  7569,  7573,  7583,  7582,  7595,  7594,  7602,
    7606,  7617,  7616,  7625,  7629,  7636,  7640,  7651,  7650,  7658,
    7679,  7703,  7704,  7705,  7706,  7710,  7711,  7715,  7716,  7717,
    7718,  7730,  7729,  7740,  7746,  7745,  7756,  7764,  7772,  7779,
    7783,  7796,  7803,  7815,  7818,  7823,  7827,  7838,  7845,  7846,
    7850,  7851,  7854,  7855,  7860,  7871,  7870,  7879,  7906,  7907,
    7912,  7915,  7919,  7923,  7927,  7931,  7935,  7942,  7943,  7947,
    7948,  7952,  7956,  7966,  7977,  7976,  7984,  7994,  8005,  8004,
    8013,  8020,  8024,  8035,  8034,  8046,  8055,  8058,  8062,  8069,
    8073,  8083,  8095,  8094,  8103,  8107,  8116,  8117,  8122,  8125,
    8133,  8137,  8144,  8152,  8156,  8167,  8166,  8180,  8181,  8182,
    8183,  8184,  8185,  8189,  8190,  8194,  8195,  8201,  8210,  8217,
    8218,  8222,  8226,  8230,  8234,  8238,  8242,  8246,  8250,  8259,
    8263,  8272,  8281,  8282,  8286,  8295,  8296,  8300,  8304,  8315,
    8314,  8323,  8322,  8353,  8356,  8376,  8377,  8380,  8381,  8389,
    8390,  8395,  8400,  8410,  8426,  8431,  8441,  8458,  8457,  8467,
    8480,  8483,  8491,  8494,  8499,  8504,  8512,  8513,  8514,  8515,
    8516,  8517,  8521,  8529,  8530,  8534,  8538,  8549,  8548,  8558,
    8571,  8574,  8578,  8586,  8598,  8601,  8608,  8609,  8610,  8611,
    8618,  8617,  8626,  8633,  8634,  8638,  8639,  8640,  8644,  8645,
    8649,  8653,  8664,  8663,  8672,  8676,  8680,  8687,  8691,  8701,
    8712,  8713,  8720,  8719,  8728,  8734,  8746,  8745,  8753,  8767,
    8766,  8774,  8787,  8789,  8790,  8798,  8797,  8806,  8814,  8815,
    8820,  8821,  8826,  8833,  8834,  8839,  8846,  8847,  8851,  8852,
    8856,  8857,  8861,  8865,  8876,  8875,  8884,  8885,  8886,  8887,
    8888,  8892,  8919,  8922,  8934,  8944,  8949,  8954,  8959,  8967,
    9005,  9006,  9010,  9050,  9060,  9083,  9084,  9085,  9086,  9090,
    9099,  9105,  9115,  9124,  9133,  9134,  9141,  9140,  9152,  9162,
    9163,  9168,  9171,  9175,  9179,  9186,  9187,  9191,  9192,  9196,
    9200,  9212,  9215,  9216,  9225,  9226,  9235,  9238,  9239,  9248,
    9249,  9260,  9263,  9264,  9273,  9274,  9286,  9289,  9291,  9301,
    9302,  9314,  9315,  9319,  9320,  9321,  9325,  9334,  9345,  9346,
    9347,  9351,  9360,  9371,  9376,  9377,  9386,  9387,  9398,  9402,
    9412,  9419,  9426,  9426,  9437,  9438,  9439,  9443,  9452,  9453,
    9455,  9456,  9457,  9458,  9459,  9461,  9462,  9463,  9464,  9465,
    9466,  9468,  9469,  9470,  9472,  9473,  9474,  9475,  9476,  9479,
    9480,  9484,  9485,  9489,  9490,  9494,  9495,  9499,  9503,  9509,
    9513,  9519,  9520,  9521,  9525,  9526,  9527,  9531,  9532,  9533,
    9537,  9541,  9545,  9546,  9547,  9550,  9551,  9561,  9573,  9582,
    9594,  9603,  9615,  9630,  9631,  9636,  9645,  9651,  9671,  9675,
    9696,  9737,  9751,  9752,  9757,  9763,  9764,  9769,  9781,  9782,
    9783,  9790,  9801,  9802,  9806,  9814,  9822,  9826,  9833,  9842,
    9843,  9849,  9863,  9880,  9884,  9891,  9892,  9893,  9900,  9904,
    9911,  9912,  9913,  9914,  9915,  9919,  9923,  9927,  9931,  9935,
    9956,  9960,  9967,  9968,  9969,  9973,  9974,  9975,  9976,  9977,
    9981,  9985,  9992,  9993,  9997,  9998, 10002, 10003, 10007, 10008,
   10019, 10020, 10024, 10025, 10026, 10030, 10031, 10032, 10039, 10040,
   10044, 10045, 10049, 10050, 10051, 10057, 10061, 10065, 10066, 10070,
   10074, 10081, 10088, 10095, 10105, 10112, 10122, 10132, 10142, 10155,
   10159, 10167, 10175, 10179, 10189, 10204, 10227, 10250, 10266, 10267,
   10268, 10269, 10270, 10271, 10275, 10279, 10296, 10300, 10307, 10308,
   10309, 10310, 10311, 10312, 10313, 10319, 10323, 10327, 10331, 10335,
   10339, 10343, 10347, 10351, 10355, 10362, 10363, 10367, 10368, 10369,
   10373, 10374, 10375, 10376, 10377, 10378, 10382, 10386, 10390, 10397,
   10401, 10405, 10412, 10419, 10426, 10436, 10443, 10453, 10460, 10472,
   10480, 10481, 10485, 10486, 10490, 10491, 10496, 10499, 10507, 10510,
   10517, 10519, 10520, 10524, 10525, 10529, 10530, 10531, 10536, 10539,
   10552, 10556, 10564, 10568, 10572, 10576, 10580, 10584, 10588, 10592,
   10599, 10600, 10606, 10607, 10608, 10609, 10610, 10611, 10612, 10613,
   10614, 10615, 10616, 10617, 10618, 10619, 10620, 10621, 10622, 10623,
   10624, 10625, 10626, 10627, 10628, 10629, 10630, 10631, 10632, 10633,
   10634, 10635, 10636, 10637, 10638, 10639, 10640, 10641, 10642, 10643,
   10644, 10645, 10646, 10647, 10648, 10649, 10650, 10651, 10652, 10653,
   10654, 10655, 10656, 10657, 10658, 10659, 10660, 10661, 10662, 10663,
   10664, 10665, 10666, 10667, 10668, 10669, 10670, 10671, 10672, 10673,
   10674, 10675, 10682, 10682, 10683, 10683, 10684, 10684, 10685, 10685,
   10686, 10686, 10687, 10687, 10688, 10688, 10689, 10689, 10690, 10690,
   10691, 10691, 10692, 10692, 10693, 10693, 10694, 10694, 10695, 10695,
   10696, 10696, 10697, 10697, 10698, 10698, 10699, 10699, 10699, 10700,
   10700, 10701, 10701, 10702, 10702, 10703, 10703, 10704, 10704, 10704,
   10705, 10705, 10706, 10706, 10706, 10707, 10707, 10707, 10708, 10708,
   10708, 10709, 10709, 10710, 10710, 10711, 10711, 10712, 10712, 10712,
   10713, 10713, 10714, 10714, 10715, 10715, 10715, 10715, 10716, 10716,
   10717, 10717, 10718, 10718, 10719, 10719, 10720, 10720, 10721, 10721,
   10722, 10722, 10723, 10723, 10723, 10724, 10724, 10725, 10725, 10726,
   10726, 10727, 10727, 10728, 10728, 10729, 10729, 10730, 10730, 10731,
   10731, 10731, 10732, 10732, 10733, 10733, 10734, 10734, 10738, 10738,
   10739, 10739, 10740, 10740, 10741, 10741, 10742, 10742, 10743, 10743,
   10744, 10744, 10745, 10745, 10746, 10746, 10747, 10747, 10748, 10748,
   10749, 10749, 10750, 10750, 10751, 10751, 10752, 10752, 10753, 10753,
   10756, 10757, 10758, 10762, 10762, 10763, 10763, 10764, 10764, 10765,
   10765, 10766, 10766, 10767, 10767, 10768, 10768, 10769, 10769
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
  "\"NOT EQUAL\"", "\"NOT EXCEPTION\"", "\"NOT INVALID KEY\"",
  "\"NOT OVERFLOW\"", "\"NOT SIZE ERROR\"", "\"NO ADVANCING\"", "NUMBER",
  "NUMBERS", "NUMERIC", "\"NUMERIC-EDITED\"", "\"FUNCTION NUMVAL-C\"",
  "\"OBJECT-COMPUTER\"", "OCCURS", "OF", "OFF", "OMITTED", "ON", "ONLY",
  "OPEN", "OPTIONAL", "OR", "ORDER", "ORGANIZATION", "OTHER", "OUTPUT",
  "OVERLINE", "\"PACKED-DECIMAL\"", "PADDING", "PAGE", "\"PAGE-COUNTER\"",
  "PARAGRAPH", "PERFORM", "PH", "PF", "PICTURE", "\"PICTURE SYMBOL\"",
  "PLUS", "POINTER", "POSITION", "POSITIVE", "PRESENT", "PREVIOUS",
  "PRINTER", "PRINTING", "PROCEDURE", "PROCEDURES", "PROCEED", "PROGRAM",
  "\"PROGRAM-ID\"", "\"Program name\"", "\"PROGRAM-POINTER\"",
  "PROHIBITED", "PROMPT", "\"PROTECTED\"", "QUOTE", "RANDOM", "RD", "READ",
  "\"READY TRACE\"", "RECORD", "RECORDING", "RECORDS", "RECURSIVE",
  "REDEFINES", "REEL", "REFERENCE", "REFERENCES", "RELATIVE", "RELEASE",
  "REMAINDER", "REMOVAL", "RENAMES", "REPLACE", "REPLACING", "REPORT",
  "REPORTING", "REPORTS", "REPOSITORY", "\"Intrinsic function name\"",
  "REQUIRED", "RESERVE", "RESET", "\"RESET TRACE\"", "RETURN", "RETURNING",
  "\"FUNCTION REVERSE\"", "\"REVERSE-VIDEO\"", "REVERSED", "REWIND",
  "REWRITE", "RF", "RH", "RIGHT", "ROLLBACK", "ROUNDED", "RUN", "SAME",
  "SCREEN", "\"SCREEN-CONTROL\"", "SCROLL", "SD", "SEARCH", "SECTION",
  "SECURE", "\"SEGMENT-LIMIT\"", "SELECT", "\"semi-colon\"", "SENTENCE",
  "SEPARATE", "SEQUENCE", "SEQUENTIAL", "SET", "SHARING", "SIGN", "SIGNED",
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
  "opt_on_accp_exception", "opt_not_on_accp_exception",
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
     765,   766,   767,   768
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   514,   516,   515,   517,   517,   518,   518,   519,   519,
     521,   520,   522,   523,   524,   525,   525,   525,   526,   526,
     527,   528,   528,   529,   531,   532,   533,   530,   535,   534,
     536,   537,   537,   538,   538,   539,   539,   540,   540,   540,
     540,   541,   541,   542,   542,   543,   543,   544,   544,   545,
     545,   545,   545,   545,   547,   546,   548,   548,   549,   549,
     551,   550,   552,   552,   552,   552,   553,   553,   554,   554,
     554,   554,   555,   556,   557,   558,   559,   559,   559,   559,
     560,   560,   562,   561,   563,   563,   563,   564,   564,   565,
     565,   565,   566,   566,   567,   567,   568,   568,   569,   570,
     570,   571,   571,   572,   572,   572,   572,   572,   572,   572,
     572,   572,   572,   572,   572,   574,   573,   575,   575,   575,
     575,   576,   576,   577,   577,   579,   578,   580,   580,   580,
     580,   580,   580,   581,   581,   582,   582,   583,   582,   584,
     584,   585,   585,   585,   585,   585,   585,   586,   586,   587,
     588,   588,   589,   590,   590,   591,   592,   592,   593,   593,
     594,   595,   595,   596,   596,   597,   598,   599,   599,   600,
     601,   602,   603,   604,   605,   606,   606,   607,   607,   608,
     608,   609,   609,   611,   610,   610,   612,   612,   613,   613,
     613,   613,   613,   613,   613,   613,   613,   613,   613,   613,
     613,   614,   614,   614,   614,   614,   615,   615,   615,   615,
     616,   616,   617,   617,   617,   618,   618,   619,   619,   619,
     620,   621,   621,   621,   622,   623,   623,   623,   624,   625,
     626,   626,   626,   628,   627,   629,   629,   629,   630,   630,
     630,   630,   631,   631,   632,   632,   632,   632,   633,   634,
     635,   636,   636,   636,   637,   638,   639,   639,   640,   641,
     641,   641,   642,   642,   642,   643,   643,   644,   644,   645,
     646,   646,   646,   646,   648,   647,   649,   649,   650,   651,
     651,   652,   652,   653,   653,   654,   654,   655,   657,   656,
     656,   658,   658,   659,   659,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   661,   662,   662,   662,
     663,   663,   663,   664,   664,   665,   665,   666,   666,   667,
     668,   668,   669,   669,   670,   670,   671,   672,   673,   673,
     674,   674,   674,   675,   676,   677,   678,   679,   680,   681,
     681,   682,   682,   683,   684,   683,   685,   686,   685,   687,
     687,   687,   688,   689,   688,   688,   690,   691,   691,   691,
     692,   693,   693,   694,   694,   694,   694,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,   695,   695,   695,
     696,   696,   697,   697,   698,   698,   698,   699,   699,   700,
     701,   701,   702,   702,   703,   703,   703,   703,   703,   703,
     703,   703,   703,   703,   703,   703,   703,   703,   704,   705,
     706,   706,   707,   708,   709,   709,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   711,   711,   712,   712,   713,   713,   714,   715,
     715,   716,   716,   717,   717,   718,   718,   719,   719,   720,
     720,   721,   721,   722,   723,   723,   724,   724,   725,   725,
     726,   726,   727,   728,   729,   730,   731,   733,   732,   734,
     734,   735,   735,   736,   736,   737,   737,   738,   738,   739,
     740,   739,   741,   742,   741,   743,   744,   743,   745,   745,
     747,   746,   748,   748,   748,   749,   749,   749,   749,   750,
     751,   752,   752,   753,   754,   754,   754,   755,   755,   756,
     756,   756,   756,   756,   757,   758,   759,   760,   761,   762,
     762,   764,   763,   765,   765,   766,   766,   766,   766,   766,
     766,   766,   766,   766,   766,   766,   766,   766,   766,   766,
     766,   767,   768,   768,   768,   768,   768,   768,   768,   769,
     769,   769,   770,   770,   771,   772,   773,   773,   774,   774,
     775,   776,   777,   778,   778,   779,   780,   780,   781,   781,
     782,   782,   782,   783,   783,   784,   784,   785,   786,   787,
     788,   789,   788,   790,   790,   791,   791,   792,   793,   792,
     792,   794,   794,   795,   795,   795,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,   796,   796,   797,
     797,   798,   798,   798,   799,   799,   799,   800,   801,   802,
     803,   804,   802,   805,   802,   806,   807,   806,   808,   806,
     809,   809,   810,   811,   811,   811,   812,   812,   812,   812,
     812,   812,   813,   813,   814,   814,   815,   816,   815,   817,
     817,   818,   818,   818,   818,   818,   820,   819,   821,   821,
     822,   823,   824,   824,   826,   827,   825,   829,   828,   828,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   832,   831,   833,   833,   833,   833,   833,   833,   833,
     833,   833,   833,   833,   833,   833,   833,   833,   833,   833,
     833,   833,   834,   834,   835,   835,   836,   836,   837,   837,
     837,   837,   837,   838,   839,   839,   840,   840,   841,   841,
     842,   842,   843,   843,   844,   844,   844,   844,   844,   844,
     844,   844,   844,   844,   844,   844,   844,   844,   844,   844,
     844,   844,   844,   844,   844,   844,   844,   844,   844,   844,
     844,   844,   845,   845,   846,   846,   848,   847,   849,   849,
     849,   850,   850,   851,   851,   853,   852,   854,   854,   855,
     855,   857,   856,   858,   858,   859,   860,   860,   862,   861,
     863,   864,   864,   864,   864,   865,   866,   865,   867,   867,
     868,   868,   869,   869,   869,   869,   870,   870,   870,   870,
     871,   871,   872,   872,   873,   873,   874,   874,   875,   875,
     877,   876,   878,   878,   880,   879,   881,   881,   882,   882,
     882,   882,   882,   884,   883,   885,   886,   886,   887,   888,
     890,   889,   891,   891,   892,   892,   893,   893,   895,   894,
     896,   896,   896,   896,   896,   896,   896,   897,   898,   897,
     899,   900,   900,   900,   900,   900,   901,   901,   902,   902,
     903,   903,   904,   904,   905,   905,   906,   906,   906,   906,
     906,   906,   906,   906,   906,   906,   906,   906,   906,   906,
     906,   906,   906,   907,   907,   909,   908,   910,   910,   910,
     910,   910,   911,   911,   913,   912,   914,   916,   915,   917,
     918,   918,   919,   919,   919,   920,   920,   921,   921,   922,
     923,   924,   924,   925,   925,   926,   926,   926,   926,   927,
     927,   928,   928,   930,   929,   931,   931,   931,   931,   931,
     931,   931,   932,   932,   934,   933,   935,   937,   936,   938,
     940,   939,   941,   942,   942,   943,   945,   944,   946,   946,
     946,   947,   947,   949,   948,   950,   951,   951,   952,   952,
     952,   953,   953,   954,   954,   955,   956,   956,   956,   956,
     956,   956,   956,   957,   957,   959,   958,   960,   960,   962,
     961,   963,   964,   964,   964,   965,   965,   965,   965,   967,
     966,   968,   969,   970,   970,   971,   971,   971,   971,   971,
     971,   972,   972,   973,   973,   974,   974,   974,   974,   974,
     975,   976,   976,   977,   977,   979,   978,   981,   980,   982,
     982,   984,   983,   985,   985,   986,   986,   988,   987,   989,
     989,   990,   990,   990,   990,   991,   991,   992,   992,   992,
     992,   994,   993,   995,   996,   995,   995,   997,   997,   998,
     998,   999,   999,  1000,  1000,  1000,  1000,  1000,  1001,  1001,
    1002,  1002,  1003,  1003,  1004,  1006,  1005,  1007,  1008,  1008,
    1009,  1009,  1009,  1009,  1009,  1009,  1009,  1010,  1010,  1011,
    1011,  1012,  1012,  1013,  1015,  1014,  1016,  1017,  1019,  1018,
    1020,  1021,  1021,  1023,  1022,  1024,  1025,  1025,  1025,  1026,
    1026,  1027,  1029,  1028,  1030,  1030,  1031,  1031,  1032,  1032,
    1033,  1033,  1034,  1035,  1035,  1037,  1036,  1038,  1038,  1038,
    1038,  1038,  1038,  1039,  1039,  1040,  1040,  1041,  1042,  1043,
    1043,  1044,  1044,  1044,  1044,  1044,  1044,  1044,  1044,  1045,
    1045,  1046,  1047,  1047,  1048,  1049,  1049,  1050,  1050,  1052,
    1051,  1054,  1053,  1055,  1055,  1056,  1056,  1057,  1057,  1058,
    1058,  1059,  1059,  1059,  1060,  1060,  1060,  1062,  1061,  1063,
    1064,  1064,  1065,  1065,  1065,  1065,  1066,  1066,  1066,  1066,
    1066,  1066,  1067,  1068,  1068,  1069,  1069,  1071,  1070,  1070,
    1072,  1072,  1072,  1072,  1073,  1073,  1074,  1074,  1074,  1074,
    1076,  1075,  1077,  1078,  1078,  1079,  1079,  1079,  1080,  1080,
    1081,  1081,  1083,  1082,  1084,  1084,  1084,  1085,  1085,  1086,
    1087,  1087,  1089,  1088,  1090,  1090,  1092,  1091,  1093,  1095,
    1094,  1096,  1097,  1097,  1097,  1099,  1098,  1100,  1101,  1101,
    1102,  1102,  1103,  1104,  1104,  1105,  1106,  1106,  1107,  1107,
    1108,  1108,  1109,  1109,  1111,  1110,  1112,  1112,  1112,  1112,
    1112,  1113,  1114,  1114,  1115,  1115,  1115,  1115,  1115,  1116,
    1117,  1117,  1118,  1118,  1118,  1119,  1119,  1119,  1119,  1120,
    1121,  1121,  1122,  1123,  1124,  1124,  1126,  1125,  1127,  1128,
    1128,  1129,  1129,  1129,  1129,  1130,  1130,  1131,  1131,  1132,
    1132,  1133,  1134,  1134,  1135,  1135,  1136,  1137,  1137,  1138,
    1138,  1139,  1140,  1140,  1141,  1141,  1142,  1143,  1143,  1144,
    1144,  1145,  1145,  1146,  1146,  1146,  1147,  1148,  1149,  1149,
    1149,  1150,  1151,  1152,  1153,  1153,  1154,  1154,  1155,  1155,
    1156,  1157,  1159,  1158,  1160,  1160,  1160,  1161,  1161,  1161,
    1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,
    1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,
    1161,  1162,  1162,  1163,  1163,  1164,  1164,  1165,  1166,  1167,
    1167,  1168,  1168,  1168,  1169,  1169,  1169,  1170,  1170,  1170,
    1171,  1171,  1172,  1172,  1172,  1173,  1173,  1174,  1174,  1174,
    1174,  1174,  1174,  1175,  1175,  1176,  1177,  1178,  1179,  1179,
    1180,  1181,  1182,  1182,  1183,  1184,  1184,  1185,  1186,  1186,
    1186,  1187,  1188,  1188,  1189,  1190,  1191,  1191,  1192,  1193,
    1193,  1194,  1195,  1196,  1196,  1197,  1197,  1197,  1198,  1198,
    1199,  1199,  1199,  1199,  1199,  1199,  1199,  1199,  1199,  1199,
    1200,  1200,  1201,  1201,  1201,  1202,  1202,  1202,  1202,  1202,
    1202,  1202,  1203,  1203,  1204,  1204,  1205,  1205,  1206,  1206,
    1207,  1207,  1208,  1208,  1208,  1209,  1209,  1209,  1210,  1210,
    1211,  1211,  1212,  1212,  1212,  1213,  1214,  1215,  1215,  1216,
    1217,  1217,  1217,  1217,  1218,  1219,  1219,  1219,  1219,  1220,
    1220,  1221,  1222,  1222,  1223,  1224,  1225,  1226,  1226,  1226,
    1226,  1226,  1226,  1226,  1227,  1227,  1228,  1228,  1229,  1229,
    1229,  1229,  1229,  1229,  1229,  1230,  1230,  1230,  1230,  1230,
    1230,  1230,  1230,  1230,  1230,  1231,  1231,  1232,  1232,  1232,
    1233,  1233,  1233,  1233,  1233,  1233,  1234,  1234,  1234,  1235,
    1235,  1235,  1236,  1236,  1236,  1237,  1237,  1238,  1238,  1239,
    1240,  1240,  1241,  1241,  1242,  1242,  1243,  1243,  1244,  1244,
    1245,  1245,  1245,  1246,  1246,  1247,  1247,  1247,  1248,  1248,
    1249,  1249,  1250,  1250,  1250,  1250,  1250,  1250,  1250,  1250,
    1251,  1251,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1253,  1253,  1254,  1254,  1255,  1255,  1256,  1256,
    1257,  1257,  1258,  1258,  1259,  1259,  1260,  1260,  1261,  1261,
    1262,  1262,  1263,  1263,  1264,  1264,  1265,  1265,  1266,  1266,
    1267,  1267,  1268,  1268,  1269,  1269,  1270,  1270,  1270,  1271,
    1271,  1272,  1272,  1273,  1273,  1274,  1274,  1275,  1275,  1275,
    1276,  1276,  1277,  1277,  1277,  1278,  1278,  1278,  1279,  1279,
    1279,  1280,  1280,  1281,  1281,  1282,  1282,  1283,  1283,  1283,
    1284,  1284,  1285,  1285,  1286,  1286,  1286,  1286,  1287,  1287,
    1288,  1288,  1289,  1289,  1290,  1290,  1291,  1291,  1292,  1292,
    1293,  1293,  1294,  1294,  1294,  1295,  1295,  1296,  1296,  1297,
    1297,  1298,  1298,  1299,  1299,  1300,  1300,  1301,  1301,  1302,
    1302,  1302,  1303,  1303,  1304,  1304,  1305,  1305,  1306,  1306,
    1307,  1307,  1308,  1308,  1309,  1309,  1310,  1310,  1311,  1311,
    1312,  1312,  1313,  1313,  1314,  1314,  1315,  1315,  1316,  1316,
    1317,  1317,  1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,
    1322,  1322,  1322,  1323,  1323,  1324,  1324,  1325,  1325,  1326,
    1326,  1327,  1327,  1328,  1328,  1329,  1329,  1330,  1330
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
       1,     2,     0,     2,     0,     2,     2,     0,     2,     0,
       2,     2,     0,     2,     0,     2,     2,     0,     2,     0,
       2,     2,     1,     2,     1,     1,     2,     2,     2,     1,
       1,     2,     2,     2,     0,     2,     0,     2,     0,     2,
       1,     1,     0,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     1,     1,     3,     3,     1,     3,     3,     1,
       3,     1,     2,     2,     1,     3,     1,     1,     3,     1,
       3,     1,     3,     1,     2,     2,     1,     1,     1,     2,
       1,     1,     1,     2,     1,     0,     2,     1,     1,     1,
       3,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     2,     2,     2,     4,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     2,     2,     1,     1,     3,     2,     2,     1,     1,
       3,     3,     4,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     5,     5,     5,     4,
       5,     5,     5,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     5,     0,
       3,     2,     1,     3,     3,     1,     3,     1,     3,     0,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     2,     1,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     2
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
    1785,    46,     0,     0,     0,  1828,  1785,  1785,  1785,     0,
       0,     0,     0,     0,  1785,     0,     0,  1760,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1786,     0,     0,  1511,   125,  1785,
    1785,  1829,  1785,     0,     0,     0,     0,  1785,  1785,    60,
      82,     0,    54,    98,  1761,     0,  1785,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1822,    39,  1785,     0,     0,     0,  1579,   171,  1504,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1512,
     152,   153,  1787,   156,  1584,  1204,  1203,   116,   120,  1814,
    1785,     0,   100,   151,   178,   179,    38,  1823,    36,     0,
    1591,  1587,  1592,  1590,  1588,  1593,  1589,   160,   161,   163,
     172,   167,  1870,  1871,     0,   165,     0,  1759,     0,     0,
       0,  1785,  1892,    80,    61,  1758,    66,    68,    69,    70,
      71,  1758,     0,  1785,     0,    83,     0,    87,    55,    58,
     154,  1789,  1788,   157,     0,  1814,  1817,  1816,     0,     0,
     117,   121,     0,     0,   262,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1857,   166,     0,  1580,   170,  1891,  1785,
       0,     0,    65,    67,    63,    81,  1758,  1785,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1585,
     155,   158,     0,  1815,   123,   118,   119,   122,   180,     0,
       0,  1656,     0,   274,   270,    24,     0,   265,   267,   268,
     134,   137,     0,   164,     0,     0,  1890,    74,    64,     0,
    1505,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1657,   183,  1766,   271,   272,   273,  1748,
     281,     0,   263,   266,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1767,  1841,  1749,  1770,
       0,   283,   264,   138,   139,  1878,  1879,    72,  1824,  1842,
    1762,  1771,     0,     0,     0,   285,     0,  1803,  1824,  1849,
       0,   244,     0,  1785,  1758,  1790,   246,     0,  1859,  1856,
     232,   184,   231,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   243,   195,   196,   197,   198,   199,   200,
    1754,  1785,  1763,     0,  1490,   269,  1488,   282,     0,    25,
     140,  1804,  1785,  1825,  1790,  1850,  1851,   212,  1858,   247,
    1824,  1785,  1785,  1791,  1785,  1785,   256,  1748,   257,     0,
    1785,  1803,  1755,     0,     0,   275,   276,   279,  1489,   284,
     291,   292,   343,   286,   346,     0,     0,  1785,   214,   213,
     210,   246,   242,     0,     0,     0,     0,   255,  1818,  1818,
       0,   258,     0,  1785,   245,   228,   277,     0,   278,     0,
     499,   287,  1639,     0,   288,   222,   223,   221,   220,     0,
     206,   207,   217,   217,     0,   217,   209,   208,   217,     0,
    1510,  1509,   248,   249,   250,   251,   254,  1819,   259,   260,
     261,   229,     0,   280,     0,     0,   502,   348,     0,     0,
     352,     0,   290,   293,  1642,   218,   203,   219,   204,  1766,
     205,   202,   215,   201,   216,  1785,     0,   238,   237,   238,
     234,   344,     0,     0,   505,   351,     0,   349,     0,   358,
     359,   353,     0,   356,  1785,  1889,     0,   225,  1643,   211,
       0,   252,  1502,     0,   236,   235,   346,   500,     0,     0,
     600,   350,   355,   392,   361,  1762,  1785,     0,     0,  1785,
    1762,  1803,  1785,  1746,   289,     0,   294,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,     0,  1888,     0,
     224,   253,  1503,     0,   241,   345,   346,   503,     0,     0,
      26,  1785,  1750,     0,     0,     0,  1785,  1746,     0,     0,
       0,     0,     0,  1785,   339,  1747,   340,     0,   338,   341,
     295,   296,     0,     0,   501,   346,   506,     0,   663,     0,
     486,   416,  1830,  1830,  1830,  1830,  1830,  1852,   417,   452,
     454,   420,   421,   422,   423,   424,   425,   448,   446,   447,
     449,   450,   455,   453,   426,  1826,   451,     0,   427,   413,
     428,   429,     0,     0,  1833,   431,   432,   430,  1792,   434,
     435,   433,  1785,  1787,   393,   394,   395,   396,   397,   398,
     414,   418,   419,   399,   400,   401,   402,   403,   404,   405,
     406,   407,     0,     0,  1751,     0,   389,     0,   362,   317,
     337,  1880,  1881,  1508,   326,  1506,  1873,  1872,   319,  1801,
    1760,  1774,     0,  1785,   323,   322,  1785,   342,     0,   147,
     148,   227,     0,  1876,  1877,   239,   504,   508,   601,     0,
      27,   707,   497,   498,  1831,   445,   444,   437,   436,   443,
     442,   441,   440,   439,   438,  1853,     0,  1827,   483,   469,
     463,   408,  1573,   495,  1834,  1793,  1794,   484,     0,     0,
     410,   412,  1670,  1670,   391,     0,  1810,  1602,     0,     0,
    1598,  1603,  1601,  1599,  1604,  1600,   390,   363,  1594,  1596,
       0,   307,  1507,  1802,   328,     0,   310,  1775,  1835,   336,
       0,     0,   226,   240,   507,   603,   665,     0,     0,   485,
    1774,   465,     0,  1845,     0,  1571,  1572,     0,   415,   487,
     489,   491,     0,   409,  1758,   456,   457,  1595,  1811,     0,
       0,   372,   368,   371,   370,   369,   384,   380,   382,   383,
     385,   381,   386,   387,   388,   365,   376,   377,   378,   373,
     374,   375,   367,   364,     0,   318,   309,   308,   306,   327,
    1760,  1836,   315,   324,   321,   325,   320,     0,   509,     0,
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
       0,     0,   463,   464,  1846,   467,  1620,  1615,  1621,  1622,
    1623,  1629,     0,  1477,  1479,     0,     0,     0,  1618,     0,
    1481,  1619,  1624,  1625,     0,     0,     0,     0,  1617,  1629,
    1616,  1461,  1459,  1466,  1469,  1471,  1474,  1538,  1476,  1535,
    1569,  1536,  1537,  1626,     0,     0,     0,  1570,   496,   493,
     490,     0,   411,  1671,   366,   379,  1597,     0,     0,   329,
     330,   331,   332,     0,   311,  1773,   317,     0,  1491,   510,
       0,   608,     0,   605,   673,   673,     0,     0,  1673,  1674,
    1675,  1676,  1677,  1678,  1679,  1680,  1681,  1682,  1683,  1684,
    1685,  1686,  1722,  1723,  1724,  1725,  1726,  1727,  1728,  1729,
    1730,  1731,  1732,  1733,  1734,  1735,  1736,  1737,  1738,  1739,
    1740,  1741,  1687,  1688,  1689,  1690,  1691,  1692,  1693,  1694,
    1695,  1696,  1697,  1698,  1699,  1700,  1701,  1702,  1703,  1704,
    1705,  1706,  1707,  1708,  1709,  1710,  1711,  1712,  1713,  1714,
    1715,  1716,  1717,  1672,  1718,  1719,  1720,  1721,   760,     0,
       0,     0,     0,   861,     0,     0,     0,     0,     0,     0,
       0,  1422,  1005,     0,     0,  1847,   881,   880,     0,  1025,
    1422,     0,     0,     0,     0,     0,     0,   759,     0,  1133,
       0,     0,     0,     0,     0,     0,     0,     0,  1276,  1279,
    1267,  1277,  1278,  1269,     0,     0,  1301,  1299,     0,   707,
       0,     0,     0,     0,   470,   466,   471,  1812,   474,     0,
    1613,  1539,  1540,  1541,     0,     0,     0,     0,     0,     0,
       0,  1473,     0,  1472,     0,  1614,  1462,  1463,  1581,     0,
       0,     0,     0,     0,     0,     0,     0,  1605,     0,     0,
       0,     0,   488,     0,   492,   335,   334,  1752,  1760,   316,
       0,   610,   611,   606,  1757,   673,   670,   676,     0,   673,
     685,   660,   783,   834,   786,   782,  1810,     0,     0,  1529,
     843,  1523,   841,  1518,  1520,  1521,  1522,   846,     0,  1644,
    1501,   852,   853,     0,  1497,  1499,  1498,   864,   862,   863,
     888,     0,  1551,   891,   892,  1550,   895,   898,  1810,   906,
       0,  1483,  1658,  1515,  1574,  1578,  1516,     0,   916,  1824,
    1598,   963,  1387,   927,   931,  1518,     0,  1520,   972,     0,
     865,   975,   984,   983,  1001,     0,   980,   982,  1421,     0,
    1007,  1011,  1009,  1012,  1010,  1004,  1015,  1016,  1513,  1018,
    1019,  1848,  1021,  1495,  1013,  1843,  1420,  1034,  1036,  1056,
    1057,  1060,     0,  1062,  1063,  1064,  1096,  1233,  1566,  1567,
       0,  1098,     0,  1105,     0,  1114,  1111,  1113,  1112,  1108,
    1115,  1135,  1501,  1122,  1133,  1124,     0,  1131,     0,  1552,
    1498,  1554,     0,  1161,  1650,  1165,  1369,  1486,  1171,  1824,
    1179,  1369,     0,  1193,  1186,  1487,     0,  1494,  1196,  1197,
    1198,  1199,  1200,  1201,  1222,  1202,  1225,     0,  1492,     0,
       0,  1565,  1578,  1230,  1265,  1252,  1270,  1756,  1290,     0,
    1283,  1285,     0,  1297,     0,  1303,  1304,   695,   701,   690,
     691,   692,   694,     0,  1307,     0,  1310,  1312,  1332,  1318,
    1379,  1369,   472,   474,  1813,     0,   478,   473,  1631,  1461,
    1459,  1478,  1480,  1461,     0,     0,     0,  1461,  1532,  1533,
    1534,     0,  1482,  1475,  1461,     0,  1460,  1582,     0,  1465,
    1464,  1468,  1467,  1470,     0,     0,  1461,     0,  1785,  1753,
       0,   313,     0,  1785,  1832,   671,  1785,     0,   682,   674,
     675,   686,   835,   762,  1753,   796,   787,     0,     0,     0,
       0,  1524,  1525,  1526,   844,   837,     0,     0,  1519,  1646,
    1645,   849,   854,   856,     0,   889,   859,  1553,   865,   893,
     898,  1882,  1883,   896,     0,   899,     0,   907,   904,  1865,
    1864,  1484,     0,  1660,  1485,  1576,  1577,   913,   914,   917,
     911,  1414,   964,   919,   704,     0,   925,  1389,     0,   942,
       0,   936,  1387,  1387,  1387,  1387,   973,   966,     0,     0,
     866,   976,  1002,   978,  1422,  1422,   979,   986,   987,   704,
    1446,  1447,  1448,  1442,  1847,  1434,  1454,  1457,  1456,  1458,
    1450,  1441,  1440,  1445,  1444,  1443,  1449,  1429,  1433,  1451,
    1453,  1455,  1431,  1432,  1428,  1430,  1423,  1424,  1435,  1436,
    1437,  1438,  1439,  1427,  1008,  1006,  1514,  1023,  1844,   704,
    1038,     0,  1058,     0,  1085,  1069,  1061,  1066,  1067,  1068,
    1237,     0,  1568,     0,     0,  1106,  1102,     0,  1115,  1856,
       0,  1123,  1129,  1130,   704,  1126,  1422,     0,     0,  1134,
       0,  1162,  1146,  1651,  1652,  1824,     0,  1166,  1172,  1169,
    1148,  1180,  1174,  1176,  1188,  1194,  1183,     0,  1188,     0,
    1546,  1547,  1223,  1226,     0,     0,  1493,  1206,     0,  1205,
       0,     0,  1576,  1266,  1248,  1254,  1785,  1255,  1250,     0,
    1268,     0,     0,  1291,  1281,     0,  1284,     0,  1298,  1293,
       0,  1305,   702,   700,   693,     0,  1313,  1314,  1311,  1333,
    1316,  1756,     0,  1380,  1367,  1371,   478,   468,  1756,   461,
     476,   477,  1790,  1630,     0,  1626,  1626,  1626,     0,  1609,
       0,  1626,  1583,     0,  1626,  1626,  1855,     0,   333,  1812,
     312,   514,  1785,  1785,  1746,  1798,   539,   513,   517,   518,
       0,  1768,   625,  1785,   615,  1852,   616,  1861,  1860,     0,
    1785,     0,   628,   619,   624,  1805,   620,     0,   623,   630,
     627,   621,   626,     0,   631,   622,     0,   642,   636,   640,
     639,   637,   641,   612,   643,   638,     0,  1805,     0,  1785,
     683,     0,     0,   661,   792,   797,   798,  1805,  1805,   790,
     791,  1805,   778,  1382,  1863,  1862,   775,   767,   769,   770,
       0,  1382,     0,     0,     0,   784,   773,     0,   781,   764,
     780,   765,  1543,  1542,     0,  1528,     0,  1810,  1392,   842,
    1578,  1516,     0,  1648,   849,     0,   847,     0,     0,  1500,
     876,   897,   902,     0,     0,  1517,  1392,  1785,  1659,  1575,
     915,   704,   912,  1416,  1388,   705,   929,  1752,   704,  1386,
     935,   934,   933,   932,   943,  1387,  1785,   946,     0,   949,
     950,     0,  1785,   953,   954,   955,   956,     0,  1785,   958,
    1387,   944,     0,   798,   922,   923,   920,   921,     0,  1392,
       0,   872,   981,   996,   998,   997,   991,   993,   999,  1422,
     988,   985,  1422,   989,  1452,  1425,  1426,  1812,  1022,  1496,
     704,  1030,  1031,  1847,  1046,  1047,  1049,  1051,  1052,  1048,
    1050,  1041,  1847,  1037,     0,  1086,     0,  1088,  1087,  1089,
    1071,  1081,     0,     0,  1065,  1239,     0,  1776,     0,  1099,
    1392,     0,     0,     0,  1117,  1127,  1140,  1136,  1141,  1137,
    1142,     0,  1132,  1376,  1375,  1139,  1148,  1370,  1562,  1563,
    1564,     0,     0,  1414,     0,   704,     0,  1187,     0,     0,
       0,  1224,     0,  1228,  1227,  1220,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1208,  1209,  1653,  1414,     0,
    1271,  1839,  1839,  1286,  1287,  1288,     0,  1392,     0,     0,
     703,     0,  1640,     0,  1288,  1176,  1742,   462,     0,  1785,
    1638,  1610,  1611,  1612,  1636,  1633,  1634,  1608,  1627,     0,
    1606,  1607,   494,     0,     0,  1907,  1908,  1785,  1746,     0,
     511,   515,  1769,   519,     0,     0,   613,   614,   617,   618,
       0,   645,  1806,  1785,  1845,  1785,   646,   644,   658,  1785,
     677,   678,   681,     0,   672,   687,   689,  1785,   800,     0,
       0,   788,   789,     0,   704,   779,  1384,   766,   768,  1382,
     776,   771,   772,   785,   774,  1545,  1527,  1544,  1658,     0,
     704,   838,  1394,  1576,  1577,  1392,     0,  1647,   848,   850,
     857,   855,   884,  1783,   901,   900,   905,     0,  1415,   704,
    1413,   707,  1390,   924,     0,   947,   948,   951,   952,     0,
    1418,  1418,     0,   945,   926,   938,   939,   937,   940,     0,
     967,     0,   867,   868,   676,     0,  1422,  1422,   995,   704,
     992,     0,  1029,   704,  1032,  1027,     0,     0,  1053,     0,
       0,     0,  1082,  1084,     0,  1077,  1091,  1078,  1079,  1070,
    1073,  1091,  1231,  1785,  1790,     0,  1777,  1238,  1100,  1103,
       0,  1117,  1116,  1120,  1109,     0,  1128,  1125,     0,     0,
    1150,  1149,   704,  1170,  1402,  1175,  1177,     0,  1189,  1422,
    1422,  1184,  1190,  1207,  1219,  1221,  1211,  1212,  1213,  1217,
    1214,  1218,  1215,  1216,  1210,  1654,  1264,     0,  1261,  1262,
    1256,     0,  1249,  1887,  1886,     0,  1840,  1274,  1274,  1397,
       0,  1658,  1294,     0,   696,     0,  1641,  1319,  1320,     0,
    1323,  1326,  1330,  1324,  1414,  1743,     0,   482,   479,   480,
       0,  1628,   314,   516,  1799,  1800,  1586,   527,   524,   357,
     540,   520,   521,  1557,   635,  1555,  1556,   634,   651,   657,
       0,   654,   679,   680,   689,   707,     0,     0,  1382,   793,
     795,   794,  1383,   704,  1381,   777,  1392,  1517,  1393,   704,
    1391,  1575,   839,  1649,  1548,  1549,  1868,  1869,   886,   704,
    1810,  1784,   883,   882,   878,     0,  1662,  1663,  1664,  1665,
    1666,  1667,  1668,  1669,  1661,  1417,     0,   960,   959,   962,
       0,  1560,  1561,   961,   957,     0,   930,  1392,  1483,  1392,
    1483,   869,   870,     0,   874,   873,   875,   994,  1000,   990,
    1024,  1028,  1039,  1042,  1043,  1764,  1035,  1847,  1040,  1091,
    1091,     0,  1076,  1074,  1075,  1080,  1241,     0,  1235,  1778,
    1392,  1110,  1119,     0,  1143,     0,     0,  1157,     0,  1406,
     704,  1401,  1178,   704,   704,  1191,  1263,  1253,  1257,  1258,
    1259,  1260,  1251,  1272,  1275,  1273,   704,  1282,  1399,  1785,
    1392,  1392,   698,  1308,  1640,  1322,  1774,  1328,  1774,  1397,
     704,   704,  1368,  1378,  1409,  1410,  1377,  1374,  1373,  1795,
     481,   475,   523,  1874,  1875,   526,   359,   541,   522,   649,
     647,   650,   648,   652,   653,     0,   629,   655,   656,     0,
     707,   799,   804,  1785,   806,   807,   808,   833,  1785,   809,
     810,   811,   812,   813,     0,   814,   815,   817,     0,   818,
     819,     0,   820,  1785,   805,  1744,   823,   832,   826,   801,
     802,   825,   763,  1385,   840,  1395,   704,   860,   885,     0,
     877,  1884,  1885,  1419,   941,   969,     0,   968,     0,   871,
    1044,  1765,     0,     0,  1072,  1083,  1091,  1781,  1781,  1092,
       0,     0,  1244,  1240,  1234,  1104,  1118,     0,  1151,  1785,
    1414,     0,     0,  1152,     0,  1156,  1407,  1185,  1192,  1398,
     704,  1396,     0,  1296,  1295,  1334,   697,     0,  1321,     0,
    1774,  1325,     0,  1317,  1411,  1412,  1408,  1796,  1797,  1372,
       0,  1785,  1785,     0,   528,   529,   530,   531,   532,   533,
       0,   543,   632,   633,     0,     0,     0,   824,  1785,  1785,
    1418,  1418,     0,  1745,     0,   803,   887,   879,  1392,  1392,
       0,  1054,  1090,  1782,     0,     0,  1785,  1242,     0,     0,
    1232,  1236,     0,     0,  1147,  1160,  1404,  1405,  1159,  1155,
    1153,  1154,  1400,  1289,  1342,   699,  1327,     0,  1331,  1894,
    1893,  1785,     0,     0,  1896,     0,  1785,  1785,   525,  1832,
       0,   828,   827,     0,     0,   830,   829,   822,   831,  1558,
    1559,   971,   970,  1045,  1094,  1093,     0,  1245,  1785,  1422,
    1158,  1403,  1365,  1364,  1343,  1335,  1336,  1744,  1337,  1338,
    1339,  1340,  1363,     0,     0,  1329,     0,   538,   534,  1895,
       0,     0,  1779,  1807,  1746,     0,     0,     0,  1785,  1810,
     542,  1785,  1785,     0,   548,   550,   559,   551,   553,   556,
     544,   545,   546,   555,   557,   560,   547,     0,   552,     0,
     554,   558,   549,  1807,  1746,   688,   816,   821,  1243,     0,
    1144,     0,  1837,     0,  1812,   535,   537,   536,  1780,   598,
    1808,  1809,  1787,   584,  1785,   463,  1422,     0,     0,     0,
       0,     0,   592,     0,   582,   588,   591,     0,   585,   593,
     596,  1787,   587,  1246,     0,  1838,     0,  1361,  1360,  1359,
       0,   583,     0,  1845,   580,  1658,   576,  1530,  1898,     0,
       0,  1900,  1902,     0,  1906,  1904,   561,   565,   569,   569,
     563,   567,   562,   568,   599,     0,   590,   589,   595,   594,
     586,  1362,  1867,  1866,  1820,  1355,  1349,  1350,  1352,   574,
     467,   597,  1812,   575,  1531,  1897,  1901,  1899,  1905,  1903,
     572,   564,   572,   566,     0,  1821,  1812,  1358,  1353,  1356,
       0,  1351,   459,     0,     0,   571,   570,     0,     0,  1357,
    1354,     0,   458,   579,   577,   578,   573,   581,  1348,  1345,
    1347,  1346,  1341,  1344,   460
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
    2586,  2722,   674,   793,   962,  1168,   791,  1403,  1406,  1407,
    1672,  1669,  2178,  2179,   675,   676,   677,   678,   679,  1009,
     799,   800,  1202,   680,   681,   496,   586,   524,   615,   550,
     717,   784,   848,  1210,  1443,  1697,  1698,  1983,  2191,  1699,
    2187,  2342,  2464,  2465,  2466,  2467,  2468,  2469,  1980,  2190,
    2471,  2529,  2590,  2591,  2666,  2701,  2715,  2592,  2593,  2693,
    2724,  2594,  2595,  2596,  2597,  2598,  2599,  2634,  2635,  2638,
    2639,  2600,  2601,  2602,   590,   785,   851,   852,   853,  1212,
    1444,  1733,  2353,  2354,  2355,  2359,  1734,  1735,   720,  1451,
    2006,   721,   856,  1035,  1034,  1215,  1216,  1217,  1448,  1741,
    1037,  1743,  2204,  1159,  1389,  1390,  2322,  2446,  1391,  1392,
    1949,  1804,  1805,  2051,  1393,   788,   909,   910,  1109,  1223,
    1224,  1769,  1455,  1511,  1749,  1750,  1746,  2008,  2208,  2389,
    2390,  2391,  1453,   911,  1110,  1230,  1467,  1465,   912,  1111,
    1237,  1786,   913,  1112,  1241,  1242,  1788,   914,  1113,  1250,
    1251,  1521,  1841,  2072,  2073,  2074,  2042,  1128,  2234,  2228,
    2397,  1476,   915,  1114,  1253,   916,  1115,  1256,  1483,   917,
    1116,  1259,  1488,   918,   919,   920,  1117,  1268,  1497,  1500,
     921,  1118,  1271,  1272,  1505,  1273,  1509,  1833,  2067,  2256,
    1815,  1830,  1831,  1503,   922,  1119,  1278,  1517,   923,  1120,
    1281,   924,  1121,  1284,  1285,  1286,  1526,  1527,  1528,  1851,
    1529,  1846,  1847,  2078,  1523,   925,  1122,  1295,  1129,   926,
    1123,  1296,   927,  1124,  1299,   928,  1125,  1302,  1858,   929,
     930,  1130,  1862,  2085,   931,  1131,  1307,  1570,  1871,  2088,
    2273,  2274,  2275,  2276,   932,  1132,  1309,   933,  1133,  1311,
    1312,  1576,  1577,  1883,  1578,  1579,  2099,  2100,  1880,  1881,
    1882,  2093,  2282,  2419,   934,  1134,   935,  1135,  1321,   936,
    1136,  1323,  1586,   937,  1138,  1329,  1330,  1590,  2114,   938,
    1139,  1333,  1594,  2117,  1595,  1334,  1335,  1336,  1897,  1899,
    1900,   939,  1140,  1343,  1912,  2297,  2430,  2504,  1602,   940,
     941,  1141,  1345,   942,   943,  1142,  1348,  1609,   944,  1143,
    1350,  1913,  1612,   945,   946,  1144,  1353,  1618,  1916,  2131,
    2132,  1616,   947,  1145,  1358,   159,  1630,  1359,  1360,  1935,
    1936,  1361,  1362,  1363,  1364,  1365,  1366,   948,  1146,  1316,
    2286,  1580,  2424,  1885,  2102,  2422,  2500,   949,  1147,  1374,
    1938,  1638,  2147,  2148,  2149,  1634,   950,  1376,  1640,  2313,
    1153,   951,  1154,  1378,  1379,  1380,  2159,  1644,   952,  1155,
    1383,  1649,   953,  1157,   954,  1158,  1385,   955,  1160,  1394,
     956,  1161,  1396,  1658,   957,  1162,  1398,  1662,  2167,  2168,
    1954,  2170,  2327,  2451,  2329,  1660,  2447,  2514,  2555,  2556,
    2557,  2732,  2558,  2686,  2687,  2710,  2559,  2649,  2560,  2561,
    2562,   958,  1163,  1400,  1607,  1955,  1905,  2332,  1664,  2015,
    2016,  2214,  1506,  1507,  1809,  2031,  2032,  2220,  2317,  2318,
    2441,  2123,  2505,  2124,  2301,  2333,  2334,  2335,  1802,  1803,
    2050,  2249,  1305,  1306,  1288,  1289,  1556,  1557,  1558,  1559,
    1560,  1561,  1562,   991,  1189,  1410,   993,   994,   995,   996,
    1231,  1260,  1491,  1346,  1354,   395,   396,  1029,  1367,  1368,
    1567,  1337,  1244,  1245,   541,   481,   301,   694,   695,   482,
      98,   153,  1297,  1262,  1232,  1468,  2656,  1417,   998,  1774,
    2026,  2101,  2223,  1254,  1338,  2194,  2538,  2250,  1907,  2195,
    1317,  1371,  1234,  1000,  1263,  1264,   742,   795,   796,  2196,
     271,  2636,   179,  1235,   768,   769,  1236,  1003,  1004,  1005,
    1197,  1170,  1425,  1421,  1414,   501,  2169,   537,  1471,  1784,
    2037,  1605,  2151,   282,  1494,  1798,  2244,   805,  1108,  2176,
    2484,   606,   339,   687,  1457,   423,  1218,   202,   115,   393,
    2412,   337,  1984,   352,  1027,   778,  2107,  2619,  2494,  2235,
      96,   214,   414,   747,  2459,  1979,   774,   402,  1993,  2622,
     809,  1405,   218,   488,  2706,   168,   390,   738,   102,   726,
     683,   842,  2646,  2157,   350,  1569,   965,  1303,   407,   736,
    1203,  1342,   391,  1751,  1771,  1492,  2684,  2229,   184,   698,
    2345,   715,   347,   598,  1485,  2403,  2155,   538,   203,  2521,
    2527,  2669,  2670,  2671,  2672,  2673,  1701
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2415
static const yytype_int16 yypact[] =
{
   -2415,   257,    -6, -2415,   289,   317, -2415,    -6, -2415, -2415,
     720, -2415, -2415,   720,   720,   -36,   -36, -2415,   956, -2415,
    1022,   800,  1023, -2415, -2415,  1143,  1143,   744,   881, -2415,
   -2415,    74,   720,   -36, -2415, -2415,   965,   847, -2415, -2415,
     850,   987,   -36, -2415, -2415, -2415,   800,   924, -2415, -2415,
     -69, -2415,   887,   887,   973,  1003,  1187,  1187,  1187,  1052,
     887,  1017,   998,  1006,  1187,  1010,  1035,  1422, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,   703, -2415, -2415, -2415, -2415,
    1276, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
    1324,  1058,    74, -2415, -2415,  1061,    34, -2415, -2415,  1187,
    1187, -2415,  1187,   999,  1459,   999,  1090,  1187,  1187, -2415,
   -2415,   999, -2415, -2415, -2415,  1059,  1077,  1117, -2415, -2415,
    1067, -2415,  1123, -2415, -2415, -2415, -2415,  -153, -2415, -2415,
   -2415,  1240, -2415,  1187,  1048,   999,  1347,   -10, -2415, -2415,
   -2415, -2415, -2415,  1351,  1142,   608,  1416, -2415,  1115, -2415,
    1059, -2415,    42, -2415, -2415, -2415, -2415, -2415,   -44,   554,
    1187,    65, -2415, -2415, -2415,   565, -2415, -2415, -2415,   259,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1048, -2415,  1172,
   -2415,   304, -2415, -2415,   999, -2415,  1222, -2415,  1224,  1213,
    1568,  1187, -2415, -2415, -2415,   841, -2415, -2415, -2415, -2415,
   -2415,   814,  1574,  1187,    70, -2415,    79, -2415, -2415,   130,
   -2415, -2415, -2415, -2415,  1379,   554, -2415,  1404,   887,   887,
   -2415,   -44,  1185,    71,   -91, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,   -85, -2415,
      84, -2415,  1048, -2415, -2415,  1316, -2415, -2415, -2415,  1187,
    1243,  1392, -2415, -2415, -2415, -2415,   877,  1187,  1146,  1426,
     -50, -2415,  1630,   -40,  1207, -2415, -2415,  1217,  1563, -2415,
    1379, -2415,   887, -2415, -2415, -2415, -2415,   -44, -2415,  1221,
    1364, -2415,   887, -2415,   821, -2415,    76, -2415, -2415, -2415,
   -2415, -2415,   -85, -2415,  1427,  1392, -2415, -2415, -2415,   394,
   -2415, -2415, -2415,  1428, -2415, -2415, -2415, -2415, -2415,  1405,
   -2415, -2415, -2415, -2415, -2415,  1234, -2415, -2415, -2415,  1655,
    1588,  1250, -2415, -2415,   -85, -2415, -2415,    17, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1254, -2415,  1516,
    1581,  1251, -2415,  1689, -2415, -2415, -2415, -2415,  2218, -2415,
    1621, -2415,  1203,  1257,  1317, -2415,   -85,  1439,  1361,   774,
    1312, -2415,  1313,  1187,  1660,   170,    14,   920, -2415,  1215,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1294,
   -2415,  1463, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
    1682,  1187, -2415,  1203, -2415,  1203, -2415, -2415,  1273,    28,
   -2415, -2415,  1187, -2415,  1490, -2415, -2415,  1138, -2415, -2415,
     591,  1187,  1187, -2415,  1187,  1187, -2415,  1655, -2415,   457,
    1187,  1439, -2415,  1325,  1226,  1203, -2415,  1398, -2415, -2415,
   -2415, -2415,  1225, -2415,  1232,    55,   517,  1187, -2415, -2415,
    1046, -2415, -2415,   -80,  1319,   999,   999, -2415,  1431,  1431,
    1432, -2415,   999,  1187, -2415, -2415, -2415,  1392, -2415,  1348,
    1487, -2415, -2415,  1291, -2415, -2415, -2415, -2415, -2415,   999,
   -2415, -2415,    -3,    -3,  1742,    -3, -2415, -2415,    -3,   142,
   -2415, -2415, -2415, -2415, -2415,   783, -2415, -2415, -2415, -2415,
   -2415, -2415,   616, -2415,  1297,  1356,  1497,  -225,  1302,  6299,
   -2415,  1247, -2415, -2415,   -23, -2415, -2415, -2415, -2415,  1234,
   -2415, -2415, -2415, -2415, -2415,  1187,   999,  1252, -2415,  1252,
   -2415, -2415,  1303,  1363,  1393, -2415,  1306, -2415,  1308, -2415,
    1677, -2415,  1678, -2415,   413, -2415,  1640,  1333, -2415, -2415,
     999,   999, -2415,   460, -2415, -2415,  1232, -2415,  1314,  1373,
    1381, -2415, -2415, -2415,    51,  1621,  1187,   945,   945,  1187,
      81,  1439,  1187,  1747, -2415,  1466, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,   887,  1073, -2415,  1271,
   -2415,   999, -2415,  1467, -2415, -2415,  1232, -2415,  1322,  1382,
   -2415,  6512,   706,  1575,  1392,  1272,  1187,  1747,  1274,   438,
     -80,  1392,  1280,  1187, -2415, -2415, -2415,   -52,   887, -2415,
   -2415, -2415,    50,   -53, -2415,  1232, -2415,  1336,   826,   817,
   -2415, -2415,  -183,  -160,   383,   589,   605,  1296, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1415, -2415,   631, -2415, -2415,
   -2415, -2415,   999,   999,  1569, -2415, -2415, -2415,   -68, -2415,
   -2415, -2415,  1187,   135, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415,  1089,  -105, -2415,  1298, -2415,   763, -2415,  1354,
   -2415, -2415, -2415, -2415,  1274, -2415, -2415, -2415, -2415,  1549,
      58,  1587,  1301,  1187, -2415, -2415,  1187, -2415,  1110, -2415,
   -2415, -2415,  1018, -2415, -2415, -2415, -2415, -2415, -2415,  1683,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,  1299, -2415, -2415,  1755,
    1362, -2415,  1345,  1368, -2415, -2415, -2415, -2415,  7067,   446,
    1788, -2415,  1414,  1414, -2415,  1110,  1510, -2415,  1515,  1515,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1369, -2415,
    1392,   115, -2415, -2415, -2415,  1392, -2415, -2415,  1406, -2415,
     267,   267, -2415, -2415,  1470,  1315,    43,  3157,  3493, -2415,
    1587,  1624,  1392,  1375,  7320,  1359, -2415,   999, -2415,   446,
   -2415,  1380,  1570, -2415,  1660, -2415, -2415, -2415, -2415,  1515,
    1372, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415,  1110, -2415, -2415, -2415, -2415,    35,
    1422, -2415,   651, -2415, -2415, -2415, -2415,  1321, -2415,  6044,
   -2415, -2415,  1315,  1376, -2415, -2415,  1453,  3805, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,   551, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1433, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,   958,
   -2415, -2415,  1495, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
    1329,  1392,  1362, -2415, -2415,  1717, -2415, -2415, -2415, -2415,
   -2415,  1374,  5003,   -10,   -10,  1377,  1378,  1384, -2415,  1385,
     -10, -2415, -2415, -2415,  7398,  7320,  7398,  1386, -2415,  1374,
   -2415,   106,   980,  -194, -2415,  1667, -2415, -2415, -2415, -2415,
   -2415,  1369, -2415,  1387,  1388,  1390,  7320, -2415, -2415,  -228,
   -2415,   446, -2415, -2415, -2415, -2415, -2415,   -80,   -80, -2415,
   -2415, -2415, -2415,  1651, -2415, -2415,  1354,  1392, -2415, -2415,
    1402, -2415,  1403, -2415,   121,   121,  1334,  1408, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  -113,
    4609,  7320,   336,   700,   388,  1203,   575,   750,  5485,  5678,
    1590,   941,   650,   575,   999,  1395, -2415, -2415,  5678, -2415,
   -2415,   575,  1321,  6066,   999,  4645,  5678, -2415,  1015,  3536,
    1203,   999,  1203,   999,    54,   450,   999,  1203, -2415, -2415,
   -2415, -2415, -2415, -2415,  4748,  5025, -2415, -2415,  1321,    73,
     999,  1203,   999,   999, -2415, -2415,  1634,  1553, -2415,  6867,
   -2415, -2415,  1369, -2415,  1357,  1358,  7320,  7320,  7320,  5003,
    1360, -2415,   970, -2415,  5003, -2415, -2415, -2415, -2415,  7320,
    7110,  7320,  7320,  7320,  7320,  7320,  7320, -2415,  5003,  7320,
     980,  1461, -2415,  1412, -2415, -2415, -2415,  1838,  1422, -2415,
     734, -2415, -2415, -2415, -2415,   338, -2415,  -186,  -166,   401,
   -2415, -2415, -2415,  1738,   762,  1675,  1510,   999,  5003, -2415,
    1740, -2415,  5041, -2415, -2415, -2415, -2415, -2415,   160,   597,
   -2415,   336, -2415,  1425, -2415,   -10, -2415, -2415, -2415, -2415,
    1741,  5565, -2415,   388, -2415, -2415,  1203,   765,  1510,  1743,
     434, -2415,  1488, -2415, -2415,  1345,  1369,  1203,  1745,  1361,
    1141,  1748,  5063, -2415,  5347,    78,  1153,  1175,  1739,   123,
    1391, -2415, -2415, -2415,  1751,    52, -2415, -2415, -2415,  4321,
   -2415, -2415,  1776,   551, -2415, -2415, -2415,   575, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1438, -2415, -2415,   474,  1321,
   -2415, -2415,    24, -2415, -2415, -2415, -2415, -2415, -2415,  1419,
    5678, -2415,  1443,  1752,  1837, -2415, -2415, -2415, -2415,  1015,
    1489, -2415,  1448, -2415,  3913,    -5,   900,  1452,  1450, -2415,
     542, -2415,  1458,  1756,   -55, -2415,  1705, -2415,  1757,  1361,
    1758,  1705,   999,  1761,  1410, -2415,   991, -2415, -2415, -2415,
   -2415, -2415, -2415,  1632, -2415,   575, -2415,   458, -2415,   475,
    1874, -2415,    80, -2415,  1764,   810,   641,  1860,  1765,  4465,
   -2415, -2415,   999,  1763,  5369,  1321, -2415, -2415,   532, -2415,
   -2415, -2415, -2415,  3394, -2415,  1719, -2415,  1092,  1766,  1803,
    1767,  1705, -2415, -2415, -2415,   999,  1698,   184, -2415,   181,
     329, -2415, -2415,   314,  1471,  1472,  1473,   255, -2415,  1369,
   -2415,  1474, -2415, -2415,   325,  1475,   329, -2415,  1002,  -194,
    -194, -2415, -2415, -2415,  1027,  1476,   348,  1479,  1187, -2415,
     -80,  1805,  1477,   819,  6684, -2415,  1187,  1518,  1619, -2415,
   -2415,  1823, -2415, -2415,   991,  1737, -2415,    86,  1483,   -21,
    1492, -2415,  1369, -2415, -2415, -2415,  5700,  1732, -2415,  1713,
   -2415,  1560, -2415,  1599,  1686, -2415, -2415, -2415,  1391, -2415,
     765, -2415, -2415, -2415,  1028,   579,   999, -2415, -2415, -2415,
   -2415, -2415,  7320,  1671, -2415,  1359, -2415,  1203, -2415, -2415,
   -2415,  1716, -2415, -2415, -2415,  5678, -2415,  1650,    83,  1654,
    1623,  1468,  1787,  1787,  1787,  1787, -2415, -2415,  5678,  5700,
   -2415, -2415, -2415, -2415,   941,    88, -2415,  1457, -2415,  1460,
   -2415, -2415, -2415, -2415,  1395, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,  4047, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,   -15, -2415,  1826,
     952,  1785, -2415,   991,    67, -2415, -2415,  1596, -2415, -2415,
      44,  7320, -2415,  1519,   575, -2415, -2415,  5700,  1489,  1215,
    1203, -2415, -2415, -2415, -2415, -2415,  1795,   999,   336, -2415,
     995, -2415, -2415, -2415, -2415,  1361,  6066, -2415, -2415, -2415,
    1744, -2415, -2415,   561,  1839, -2415, -2415,   999,  1839,  1522,
   -2415,  1369, -2415, -2415,   441,   -44, -2415, -2415,  4183, -2415,
    1922,    82,    87, -2415, -2415, -2415,  1187, -2415,   340,  5678,
   -2415,    38,  5385, -2415, -2415,   999, -2415,  1777, -2415, -2415,
    5700, -2415,  1392, -2415, -2415,   991, -2415, -2415, -2415, -2415,
   -2415,  1860,  1749, -2415, -2415,   995,  1698, -2415,  1860, -2415,
   -2415, -2415,  1490, -2415,   999,  1387,  1387,  1387,  5003, -2415,
     -92,  1387, -2415,  7188,  1387,  1387, -2415,   446, -2415,  1553,
   -2415, -2415,  1187,  1187,  1747,  1178, -2415, -2415, -2415, -2415,
    1771,  1799, -2415,  1187, -2415,  -130, -2415, -2415, -2415,   738,
    1187,  6066, -2415, -2415, -2415,  1681, -2415,  1392, -2415,  1925,
   -2415, -2415, -2415,   999, -2415, -2415,   999, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,  1779,  1681,   118,  1187,
   -2415,  1480,  1532, -2415, -2415, -2415,  1720,  1681,  1681,   203,
    1736,  1681, -2415,  1825, -2415, -2415, -2415,  1484,  1486, -2415,
     991,  1825,  1760,  1577,  1695, -2415, -2415,  1722, -2415, -2415,
   -2415, -2415, -2415, -2415,   418, -2415,   999,  1510,   727, -2415,
     -28,    39,   575,  1551,  1560,   575, -2415,  1556,   336, -2415,
     551, -2415, -2415,  1625,  1646, -2415,   767,  1187, -2415, -2415,
   -2415, -2415, -2415,  1715, -2415, -2415, -2415,  1983, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1787,  1187, -2415,   -62, -2415,
   -2415,  1182,  1187, -2415, -2415, -2415, -2415,   -14,  1187, -2415,
    1150, -2415,  1421,  1720, -2415, -2415, -2415, -2415,  1811,   727,
    1813,    41, -2415, -2415, -2415, -2415,  2000, -2415,  1576,    72,
   -2415, -2415,    88, -2415, -2415, -2415, -2415,  1553, -2415, -2415,
   -2415,  1889,  1879,  1395, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,  1656,  1395, -2415,  1579, -2415,  1976, -2415, -2415, -2415,
     912, -2415,   991,   936, -2415,    57,   184,   619,   575,   575,
     727,  1828,  1203,   457,  1020,  1886, -2415, -2415, -2415,  2021,
   -2415,  1836, -2415, -2415, -2415, -2415,  1744, -2415, -2415, -2415,
   -2415,   999,  1903,  1716,  1082, -2415,  1533, -2415,  1534,   991,
    1016, -2415,   418, -2415, -2415, -2415,  5678,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,    82, -2415,   543,  1716,   -78,
   -2415,  1615,  1615, -2415, -2415,   327,   999,   727,  1840,  1589,
   -2415,  1592,  2032,   999,   471,   561,  2037, -2415,  1539,  1187,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1026,
   -2415, -2415, -2415,   999,   388, -2415, -2415,  1187,  1747,  1792,
    1315, -2415, -2415, -2415,   999,   233, -2415, -2415, -2415, -2415,
     233, -2415, -2415,  1187,  1375,  1187, -2415, -2415, -2415,  1187,
   -2415, -2415, -2415,   150, -2415, -2415, -2415,  1187,  1544,   233,
     233, -2415, -2415,   233, -2415, -2415,  1759, -2415, -2415,  1825,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1488,   -21,
   -2415, -2415,  1753,   -25,  1849,   727,   861, -2415, -2415, -2415,
   -2415, -2415,   -32,   108, -2415, -2415, -2415,   782, -2415, -2415,
   -2415, -2415, -2415, -2415,   233, -2415, -2415, -2415, -2415,   233,
     419,   419,   233, -2415, -2415, -2415, -2415, -2415,  1550,   575,
   -2415,   575,  2208, -2415,   748,   116,    88, -2415, -2415, -2415,
    2000,   999, -2415, -2415, -2415, -2415,  1554,  1159,   218,  1558,
     861,   991, -2415, -2415,  2007, -2415, -2415, -2415, -2415,   936,
   -2415,  1870, -2415,  1187,  1490,  1750, -2415, -2415,   575, -2415,
     575,  1020, -2415, -2415, -2415,  1100, -2415, -2415,   999,  5678,
     598, -2415, -2415, -2415,  1774, -2415, -2415,  1800, -2415, -2415,
   -2415, -2415,  1534, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,   -57, -2415,   999, -2415, -2415,
   -2415,  1078, -2415, -2415, -2415,  7320, -2415,  5678,  5678,  1603,
    1746,  1488, -2415,   575, -2415,   861, -2415,  1768, -2415,   991,
   -2415,  1958,  1636, -2415,    45, -2415,  1024, -2415,  1539, -2415,
     999, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1286,   -34,
   -2415,   999, -2415, -2415, -2415, -2415, -2415, -2415,   490, -2415,
     388,   490, -2415, -2415, -2415,    94,  2031,  6783,  1825, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,  1668,  1876, -2415, -2415,
   -2415,  1880, -2415, -2415, -2415, -2415, -2415, -2415,  1791, -2415,
    1510, -2415, -2415, -2415, -2415,   999, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,  2874, -2415, -2415, -2415,
    1292, -2415, -2415, -2415, -2415,  1623, -2415,   727,  1724,   727,
    1725, -2415, -2415,  5678, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415,  1159, -2415,  1979, -2415,  1395, -2415, -2415,
   -2415,   861,  1091, -2415, -2415,  1091,   -26,   999, -2415, -2415,
     727, -2415, -2415,  1707, -2415,  2041,  1831,  1858,    -1, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415,   329, -2415, -2415, -2415, -2415, -2415,  1801,  1187,
    1668,   727,  1602, -2415,  2032, -2415,  1587,  2003,  1587,  1603,
   -2415, -2415, -2415, -2415,  1808, -2415, -2415, -2415, -2415,  1300,
   -2415,   999,  1148, -2415, -2415,  1792, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,   233, -2415, -2415, -2415,   233,
     232, -2415, -2415,  1187, -2415, -2415, -2415, -2415,  1187, -2415,
   -2415, -2415, -2415, -2415,    13, -2415, -2415,  2044,  1691, -2415,
   -2415,     2, -2415,  1187, -2415,  2095, -2415, -2415, -2415,  6783,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,   999,
   -2415, -2415, -2415, -2415,  1623, -2415,   575, -2415,   575, -2415,
   -2415, -2415,  2055,  1995,  1091,  1091, -2415,  1649,  1649, -2415,
    1772,  1203,   555, -2415,   999, -2415, -2415,  5678, -2415,  1187,
     726,  1846,  1848, -2415,  1850, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415,   999, -2415, -2415, -2415, -2415,  1658, -2415,   999,
    1587, -2415,   999, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
    1189,  1187,  1187,  1065, -2415, -2415, -2415, -2415, -2415, -2415,
    1496, -2415, -2415, -2415,  2004,   233,   233, -2415,  1187,  1187,
     419,   419,   233, -2415,   443, -2415, -2415, -2415,  1668,  1668,
    5678, -2415,  1091, -2415,  5678,  5678,  1187,  1203,  1203,  1778,
   -2415, -2415,  1633,   999, -2415, -2415,  1774, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415,  1161, -2415, -2415,   999, -2415, -2415,
   -2415,  1187,  1792,  1792, -2415,  1908,  1187,  1187, -2415,  2269,
    1666, -2415, -2415,   388,   233, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,   336,  1203,  1187, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1255, -2415, -2415,
   -2415, -2415, -2415,  1773,  2012, -2415,  1792, -2415, -2415, -2415,
    1792,  1792,  1900,  1223,  1747,  1913,  1392,  1620,  1187,  1510,
   -2415,  1187,  1187,   999, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415,   972, -2415,    10,
   -2415, -2415, -2415,  1223,  1747, -2415, -2415, -2415, -2415,   336,
   -2415,  1762,  1706,    22,  1553, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415,   135, -2415,  1187,  1362, -2415,  7608,  7608,  1129,
    2006,  1928, -2415,  1392,   972, -2415, -2415,  1392,    10, -2415,
   -2415,   135, -2415, -2415,   999, -2415,   833, -2415, -2415, -2415,
      53, -2415,   972,  1375, -2415,  1488,  7511, -2415, -2415,    61,
     925, -2415, -2415,  1124, -2415, -2415, -2415, -2415,   -72,   -72,
   -2415, -2415, -2415, -2415, -2415,  7608, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415,  1790,   893,    53, -2415, -2415, -2415,
    1717, -2415,  1553, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
    1815, -2415,  1815, -2415,  2082, -2415,  1553, -2415, -2415,  1827,
     999, -2415,  1709,   -31,  1816, -2415, -2415,  7608,   873, -2415,
   -2415,  1392, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415,  1203, -2415
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2415, -2415, -2415, -2415, -2415,  2131, -2415, -2415, -2415,   223,
   -2415,  2093, -2415,  2048, -2415, -2415,  1400, -2415, -2415, -2415,
    1341, -2415, -2415,  1326,  2115, -2415, -2415,  2015, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1942,
     816, -2415, -2415, -2415, -2415, -2415,  1996, -2415, -2415, -2415,
   -2415,  1939, -2415, -2415, -2415, -2415, -2415, -2415,  2071, -2415,
   -2415, -2415, -2415,  1926, -2415, -2415, -2415, -2415,  1910, -2415,
   -2415,   724, -2415, -2415, -2415, -2415, -2415,  1999, -2415, -2415,
   -2415, -2415,  1973, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1031, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,  1638, -2415,  1754, -2415,
   -2415, -2415,  1684, -2415, -2415, -2415, -2415,   258, -2415, -2415,
    1866, -2415, -2415, -2415, -2415, -2415,  1733, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415,  1133, -2415, -2415, -2415,  1389, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,   489, -2415, -2415,  1663, -2415,  -760,  -835, -2415, -2415,
   -2415,   459, -2415, -2415, -2415, -2415,   -24, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -1418,   717,  1417,  -527,   384, -1417,
   -2415, -2415, -2415,  -952, -2415,  -528, -2415, -2415,   760, -2415,
     281,   502, -2415,    -9, -1414, -2415, -1413, -2415, -1410, -2415,
   -2415,  1394, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  -498,  -530, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -1230, -2415,
    -465, -2415, -2415, -2415, -2415, -2415, -2415, -2415,  1323, -2415,
   -2415, -2415,   -27,   -22, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,  1145,   141, -2415,   102, -2415,
   -2415, -2415, -2415, -1286, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,  -650, -2415, -2415,  -702, -2415,  1397, -2415, -2415, -2415,
   -2415, -2415, -2415,   953,   428,   432, -2415,   350, -2415, -2415,
    -203,  -185, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,   404, -2415, -2415, -2415,   949, -2415, -2415, -2415, -2415,
   -2415,   713, -2415, -2415,   120, -2415, -2415, -1272, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,   714, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,   690, -2415, -2415, -2415, -2415,
   -2415,   -58, -1776, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415,   674, -2415, -2415,   673, -2415,
   -2415,   351,   126, -2415, -2415, -2415, -2415, -2415,   911, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,   -66,   635, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415,   629, -2415, -2415,   110, -2415,   330,
   -2415, -2415, -1462, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415,   882,   624,   104, -2415,
   -2415, -2415, -2415, -2415, -2415, -2320,   879, -2415, -2415, -2415,
     101, -2415, -2415, -2415,   315, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415,   265, -2415, -2415, -2415, -2415, -2415, -2415,   606,    91,
   -2415, -2415, -2415, -2415, -2415,  -136, -2415, -2415, -2415, -2415,
     290, -2415, -2415, -2415,   863, -2415,   862, -2415, -2415,  1083,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,    75,
   -2415, -2415, -2415, -2415, -2415,   849,   277, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,   -90,
   -2415,   278, -2415, -2415, -2415, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415,  -451, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415,   -70, -2415,   571, -2415, -2415, -1663,
   -2415, -2415,  -381, -2415, -2415, -1683, -2415, -2415,   -89, -2415,
   -2415, -2415, -2415,  -191, -2216, -2415, -2415,   -93, -1852, -2415,
   -2415, -1851, -1558, -1075, -1457, -2415, -2415,   686, -1219,    92,
      93,    95,    97,  -930,    66,  -766,   402,   339, -2415,   627,
    -682, -1400, -1087,  -259,   897, -1569,  -392,  -965, -2415, -1323,
   -2415, -1045, -2414,   771,  -529,   -88,  1951, -2415,  1557,  -560,
      25,  2103, -1080, -1049,  -513,  -427, -2415, -1114, -1217, -2415,
     337, -1296, -1057, -1105,  1007, -1699, -2415, -2415,   549, -1129,
   -2415,   201,   406,  -604, -2415, -2415,  -103, -1213,  -746,  -111,
    1997, -1882,  2023,  -634,  1085,   316,  -581, -2415, -2415, -2415,
     -67,  1277, -2415, -2415,   442, -2415, -2415, -2415, -2415, -2415,
   -2415, -2415, -2415, -2415, -1973, -2415, -2415,  1517, -2415, -2415,
    -289,  -593,  1854, -2415, -1187, -2415, -1320,  -273,  -642,   883,
   -2415,  1781, -2415, -1444, -2415,  -778, -2415, -2415,  -146, -2415,
      31,  -657,  -359, -2415, -2415, -2415, -2415,   298,  -170,  -330,
   -1208, -1545,  2070,  1843, -2415, -2415,  -334, -2415, -2415,  1063,
   -2415, -2415, -2415,   344, -2415,   199, -1955, -1492, -2415, -2415,
   -2415,  -172,   408, -1408, -1440, -2415, -2415, -2415,  -572, -2415,
   -2415,  1582, -2415,  1769, -2415, -2415, -2415,   715, -2415, -1752,
    -332, -2415, -2415, -2415, -2415, -2415, -2415
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1857
static const yytype_int16 yytable[] =
{
     139,   427,   139,   428,   692,   160,   749,   415,   139,   245,
    1166,   581,   960,  1276,  1031,   138,  1370,   141,  1459,   787,
    1440,  1894,   215,   147,   404,   849,  1727,  1729,   992,  1261,
    1730,  1731,   139,   427,  1732,  1886,  1737,   268,  1898,  2199,
     699,  1794,  1854,   464,  1626,   437,  1287,   180,   741,  1007,
    1486,  1308,  1495,   767,  2063,  2216,   463,  1642,   776,   708,
    1619,  2125,  2685,  1352,   211,  1369,  1778,  1243,  1848,  1524,
    1424, -1812,   279,  -664,  1298,   345,  1875,   321,    99,   259,
     264,   246,  1298,  1017,  1435,   107,  2152,   103,   104,   105,
    1214,   411,   849,  1843,  -662,   111,  1298,  2188,  2020,   854,
    1857,   291,   535,  1534,  1639,  2700,  1582,   127,  1454,  1843,
    2060, -1567,   997,  2046,  2230,   801,   114,  1573, -1568,  1839,
    1927,   360,  1986,   703,  2367,  1876,  2480,   228,  1928, -1756,
     134,   135,  1772,   136,  2226,  1770,   752,  1592,   143,   144,
     297,   215,   529, -1752,  1973, -1752,  2723,   161,  1479,  1965,
    2000,  1707,  2647,  1708,   832,   832,  2070,   211,  1744,  1632,
   -1812,   704,   220,    94,   169,   801,  2153,  1310,   392,   535,
    1214,   229,  1518,   836,   745, -1573,   480,  1186, -1571,   -96,
    1810,   230,  2202,   283,   327,  1813,   221,  1890,  2320,   305,
    2055,   219,  1449,  1386,     4,  1222,  1243,   419,  1024,  2420,
    1941,   430,   129,  2330,  2264,   832,   128,  2109,   182, -1825,
    2253,  1670,  -664,  1002,  2507,  2431,  -664,    42,  1469,  1182,
      23,   712,   251, -1856,   724,  1446,  2608, -1854,   525,  2001,
    1603,   830,   830,  -662,   258,  2432,  2688,  -662, -1856,  1409,
    1200,  1240, -1594,   274,   275,  1877, -1790,   724,  1566,  2695,
    1947,   413,  1186,   505,    43, -1785,   418,     3,  1193,  1566,
    1987,  2433,   232,   155,  2162,   156,  2186,  1194,  1707,  1436,
    1708,  2569,  2688,  -664,   212,  1201,  1801,  1874,   204,  1604,
     295, -1639,   830,    94,   412,  1624,  2434,   226,   299,  2643,
    2551,  2197,  1447,  1929,  -662,   725,   183,   311,   284,   713,
    1671,   714,   997,   997,   997,   130,    24,   314,  1878,  1240,
    2209,  2210,  2081,    94,  2211,    43,  1298,   746,   727,  1773,
    1566,   -96,  2336,  2111,   997,  1930,  1186,  1942,  2056, -1843,
   -1752,   306,   233,  2154,  1450,     5,  2231,  2331,  1747,  2637,
     139,  1952,   139,   139,  1572,  1238,   493,  1931,  1958,   139,
     283,  1519,  2222,  1404,  1357,  2247,  2215,   485,   486,  1951,
    2248,   280,  2474,  2254,   491,   753,   139,   212,  1171,   507,
     507,  2086,   507,   735,   154,   507,   514,  1204,  1966,  1261,
    2089,   485,  2035,   281,   -35,  1186,   227,  1214,  2079,   129,
    1574,  1173,  1848,   137,   410,  1848,  1186,  1549,   512, -1756,
    1932,  1174,  1175,  1002,  1002,  1002,   154,   413,  1180, -1752,
    1413,  1413,  1413,   139,  -664,     5,  2232,  1748,  1811,  1186,
    1651,   431,   424,  1426,  1428,  1002,   137,   236,   542,   997,
    1434,  2227,  1261,   436,   137,  -662,   794,   139,   139,  1006,
    1258,   260,   443,   444,  2648,   445,   446,  1258,  1593,  1287,
    1214,   452,   542,   582,   705,   755,  1258,  1205,  1206,   368,
     555,  1933,  1575,  2470,  2019,   284,   448,   709,   469,   837,
    2061,   228,  2346,  2421,  2265,   137,   556,  2339,   139, -1756,
    1258,  1258,   536,   689,   492,   137,  2481,   997,   834,   154,
     700,   137,   130,   582,   997,   997,   997,   139,  2387,  1314,
    1261,  2435,  1018,   137,  1889,  1187,   775,   997,   997,   997,
     997,   997,   997,   997,   997,   229,   557,   997,  2043,  1496,
   -1790,  2075,  1859,   843,   346,   230,  1387,  1844,   292,   322,
    1002,  1013,   265,  2394,  1748,  1298,   740,  1879,  1845,   231,
     243, -1756,   855,  1844,   794,  2392,   540,  1387,   149,   536,
     743,  1006,  1315,  1902,  1845,  1525,  1188,  1934,  1341,   137,
     137,   394,   710,  1261,  1964,   577,  1441,  2033,   261,  2029,
    2233,    97,  2304, -1825,  2405,  1566,  2407, -1655,  2508,  1388,
    1187,  1258, -1785,  1510, -1856,   593,  2094,   595,  1002,  1812,
     600,   602,  1240,   604,  1489,  1002,  1002,  1002,  1420,  1627,
    1388,   609,  2540,  1420,  1356,  1274,   232,  2425,  1002,  1002,
    1002,  1002,  1002,  1002,  1002,  1002,  2266,  1420,  1002,  1848,
    1191, -1756,   682,  2133,  1461,  1192,  1496,   691,  2063,  2535,
    2536,  1673, -1856,   707,   702,   243,   255,  2443,  2444,  2285,
    2567,  2568,  1384,   465,  1252,    94,   757,  1463,   137,   517,
   -1856,   328,   558,   757,  1187, -1535,  2472, -1856,   757,   835,
    2473,  1568,   757,   559,   840,   187, -1843,  1023, -1758,  2257,
    1341,  2259,   188,  1474,  2025,   154,   233,   845,   845,   234,
     235,   963,  2691,  1233,  2615,  1387,   757,   757,  2616,  2617,
     760,  1275,  1279,   748,  1008,  1261, -1756,   760,  2690,  2186,
     761,  1304,   760,  1534,   117, -1635,   760,   761,  1322,  1324,
    2290,  2526,   761,  1187,    52,  -669,   761,  2640,  2150,   453,
    2205,  1357,   583,  1257,  1187,  1269,  1796,  1381,  1233,  1357,
     760,   760,   684,  1258,   780,  1442,  2039,   781,  1388,   137,
     761,   761,    15,  2041,   449,  2193,   696,  1187,  1344,  1799,
    1349, -1856,  2075,  1341,  1126,  1375,  2640,   739,  2498, -1756,
    2349,   850,    53,  2321, -1637,   560,   561, -1535,   351,  1397,
      16,   236,   755,   137,  1191, -1632,  2531,  2532,  -667,  1192,
     562,   762,   563,  2537,   518,  2413,   216,   757,   762,  1191,
     724,  -669,  1454,   762,  1192,  2280,  -512,   762,  1685,   222,
      54, -1856,    55, -1856,    56,  2541,  2542,   450,  2108,   243,
     997,   361,    57,   756, -1856,  2296,  2236,  2414,  2415,  2350,
    1470,   762,   762, -1856,  -512,  -512,  -659, -1752,   850, -1752,
     329,   760,   243,  2145, -1856,  2607,  2146,  2105, -1756,  1298,
    1566,   761,   137,   362,  1126,   243,   584,  1025, -1856,  1290,
    1165,   763,  2497,  2338,  -667,  1775,  2122,   697,   763,   603,
   -1856,   729,  1563,   763,  1480,   466,   564,   763,    58,  2183,
     755,   187,  2499,  2325,    18,  1498,   189,  2667,   188,  1853,
    1688,  1692,  1795,   519,  1351, -1856,  1799,   154,  1490,  1920,
     330,   763,   763,  1583,   137,  1988,   764,  1989,   187,   997,
     300, -1756,   685,   764,  1401,   188,  1625, -1772,   764,  1693,
    1694,  1002,   764,   565,   139,   139,  1209,  1969,  2360,  1861,
     467,  1875,   762,  1628,   137,   137,  2306,  1652,  1127,  2547,
   -1856,  2251,  2251,  2106,   187,  1501,   764,   764,  -512,   757,
     137,   188, -1770,   403,  1895,  2095,   765,   137,   190,   137,
    2351,   441,  1381,   765,  2492,  2352,   137,  1801,   765,  1629,
      60,  1863,   765,   223,  1864,  -659,  -512,  1865,  1866,  -659,
    1876,  1247,  1909,  1291,  1292,   757,   243,   137,   217,   243,
     137,   137,  2258,   760,  2260,  1653,   765,   765,  1635, -1573,
    1293,  2610,   763,   761,  2096,  2682,   724,  1549,    52,  2683,
    1002,   997,  2268,  1903,    61,   191,   794,   758,   759,  1246,
     192,   253,   724,  1265, -1752,  1610,   325,  2300,  1127,   760,
    1265,  1300,  2399,  1261,   782,  1910,  -659, -1856,  1265,   761,
    2528,  1319,  1904,  2279,  2034,   585,  1340,   764,  1347,  1779,
    1347,  1355,  1372,  1319,  2728,  1294,    53,  1636,   344, -1535,
    1637,    94, -1856,  1972,  2303,  -512,  2262, -1535, -1535,  1566,
    1347,   722, -1535,  2237,  2238,  2239,   243,   731,  2654,  2650,
    2564,   807,   253,   757,   762,   614,  1261,  1909,  1807,    27,
     400,   137,   189,   733,    54,  1484,    55,   765,    56,  2604,
    1877,  1838,  1840, -1752,    64,  2356,    57,  1420,  2729,  2417,
   -1856,  1976,  1002,   243,   716,  1800,  2730,    28,  2323,   189,
     762,  2584,  2585,  2696,   193,  2587,  2588,   760,   723,  2589,
    2524,  2603,  1481,  1248, -1085,  1249,  2240,   761,  2418,  1563,
    1910,  1834,  1835,  1836,  1837,  2697,  1571,    67,  1246,  2030,
    1695,     5,   831,   831,   763,   189,   243,  2713,   757,  2733,
    1016,  2048,    58,  1878,   190,  2525,   118,  1265,  2052,  1446,
    1891,  2718,    33,   719,   470,   471,   472,  -659, -1085,    36,
    2027,  1864,  2519,   316,  1865,  1866,   154,  2097, -1085,  2030,
     763,   190,  2520,  2658,  2524,  1816,  1325,  -512,  1817,   764,
    2731,  1439,   760,   831,  1265,  1818,  1819,    39,   515,  2707,
     999,  1925,   761,   757,  1641,  1265,  1267,   416,   762,    68,
    2082,   191,  1940,    59,  1148,  1944,   192,   190,   833,  2659,
    2189,    48,   405,  1948,  2416,   764,  1447,  1191,  2186,  1867,
    1868,  2708,  1192,   137,   317,   318,  2519,   516,   191,   765,
    1326,  1482,  1820,   192,    60,   610,  2520,   760,  1327,  1355,
    2241,  2242,  2709,  1869,  1870,  2243,   394,   761,  2632, -1085,
     170,   750,  1265,  2483,   438,  2128,  1265,   254,  1014, -1770,
     243,  1906,  1696,   406,   191,   765,    40,   611,   763,   192,
     154,  1613, -1856,   762,   473,  1536,  1537,  2221,    61,  2552,
    1792,    62,  2611,   751,   252,  1357,  2519,   596,   474,   597,
      49,  2633,   139,    51,   171,  1149,  2520, -1856,  1484,    94,
     439,  1821,  2698,  1959,   172,  1793,  1504,  1667,  2027,  2488,
     255,  2489,   757,   764,  1538,  1539,  2460,  2563,  2553, -1085,
     298,  1665,  1328,   154,  2699,  1318,  2461,   139,   762,  2057,
    1822,  2058,    26,    13,  2126,  2337,  1150,  1318,    13,  2246,
     351,  2251,  2251,   763,  2347,  2539,  1445,    63,  2462,    47,
    1445,  1823,  2292,  1780,  2212,  2554,   760,   137,    91,  2127,
     713,  2628,   714,   765, -1085,  1151,   761,    93,    64,   394,
    2218,   475,  1879,  1596,   155,  2185,   156,  2293,  2463,  2312,
     999,   999,   999,    97,   476,   173,  1282,   100,   764,  2245,
    2113,  1597,  2225,    65,  2677,    66,  2098,  1283,   763,   101,
    2655,  2657,   999,    21,    22,  1824,  1780,  1893, -1085,    94,
    1423,    67,  2689,   108, -1085,  2217,  1977,  1978,  2606,  2269,
    1191,  1190,    46,  2271,  2053,  1192,  1867,  1868,   594,  2694,
    1191,  1914,   137,   601,  1656,  1192,  1657,   106,   765,  2064,
    2660,   109,  1682,   764,  2661,  2662,  2225,   762,  2704,   110,
    1869,  1870,  1191,   112,  1246,   174,  1939,  1192,  1825,  1687,
    1152,  1923,  2299,   997,  1700,  1736,  2181,  1738,  1683,  1674,
     114,  1265,  1924,  1678,  1780,   477,  1191,  1191,   113,  1921,
    1680,  1192,  1192,    68,   120,  1246,  2663,   137,   122,  2135,
    2727, -1752,   428,   765,   508,   137,   510,  1752,  1753,   511,
     175,   124,  2664,  2665,   126,  1225,   810,  1239,  2065,  2066,
    1255,  1265,  2620,  2621,  1277,   243,   394,   763,   140,  1826,
     137,  2225,  1431,  1432,  1433,  1550,  2193,  1551,  2343,  1313,
    2344,  1950,  1827,   142,  2401,  1339,  2402,  1780,  2449,  1754,
    2452,  1755,  2457,  1756,  2458,   811,   812,   813,   814,   815,
     176,  1828,  1754,  2393,  1755,   149,  1395,  1999,  1399,  2395,
     162,   139,   764,   163,  1002,   999,   164,  2009,  2010,  2398,
     167,  2013,   999,   999,   999,  1418,  1960,  1757,  1758,  1759,
    1418,   629,   630,  1429,  1430,   999,   999,   999,   999,   999,
     999,   999,   999,   181,  1418,   999,  1994,   185,  1961,  1962,
    1963,  1181,   186,  1183,  1967,   204,   242,  1970,  1971,  1415,
    1416,   193,   765,   247,   249,  1829,   248,  2002, -1551, -1551,
   -1551, -1551,   250,  1460,   257,   269,   273,  1760,   278,  1761,
    1512,  1513,  1514,  1515,   294,   296,  1762,  2225,   154,  1763,
    2436,  2341,   300,  2437,  2438,   302,   303,  1339,  1816,  1255,
     307,  1817, -1550, -1550, -1550, -1550,  2439,  1937,  1818,  1819,
     308,   309,  2517,  2653,   312,  1265,   313,   334,   338,  1265,
    2454,  2455,  1265,   326,   333,  1246,   728,   730,   732,   734,
     336,   340,  2295,   349,   816,   817,   818,   819,   820,   821,
     822,   642,   643,   342,   353,   351,   356,   354,   392,   394,
     397,   401,   398,   403,   408,  1820,   409,   187,   420,   428,
     243,   422,  2115,  1974,  1975,   421,   429,   413,   454,   457,
    2314,  2314,   455,   459,  1985,  1764,  1265,  1765,  -347,   483,
    1339,  1990,   490,   494,   502,  2288,  2486,   487,   495,   509,
     521,   522,   523,   533,  1357,   527,   547,   543,   548,   551,
     549,   552,  1620,  -360,   554,   578,   579,   587,   588,   605,
    2003,   589,   607,  2160,   612,   616,   613,   617,   690,   688,
     693,   701,  2160,  1914,  1821,  1265,  1265,  1265,  1647,   718,
    2512,  2136,  2137,  2138,  2139,  2140,  2141,  2142,  2143,   735,
     737,   744,   770,   773,   754,   777,   786,   779,   790,   794,
     792,   789,   797,  1822,   802,   804,   808,   841,   834,   847,
     961, -1639,   964,  1006,  1011,  1015,  1012,  1028,  2047,  1033,
    1036,  1156,  1167,  1137,  1823,  1164,  2409,  1195,  1169,  1207,
    1220,  1176,  1177,  1301,  1265,   823,  1280,  2054,  1178,  1179,
    1184,  1196,  1198,  2059,  1199,  1211,  1213,  1402,   824,  2062,
    1620,  1221,  1404,  1411,  1412,  1437,  1422,  1438,  1439,  1452,
     139,  1458,  1464,  1473,  1475,  1493,  1516,  1487,  1564,  1001,
    1499,  1568,  1319,  1581,  1502,  2182,  1587,  1319,  1824,  1522,
    1520,  1584,  2203,  1585,  1589, -1553,  1598,  1599,   999,  1600,
    1601,  1606,  1608,  1357,  1611,  1631,  1319,  1319,  1615,  1214,
    1319,  1617,  1633,  1648,  1643,  1655,  1661,  1659,  1668,  1663,
    1689,  1675,  1676,  1677,  1679,  1681,  1684,  1686,  1766,  1739,
    1691,  1740,  1265,  1742,  1745,  1782,  1783,  1785,  1787,  2115,
    1776,  1825,  1240,  1797,  1808,   997,   997,  1801,  2298,  2252,
    2252,  1319,  1814,  1504,  1832,  1860,  1319,  1319,  1319,  1319,
    1849,  1873,  1574,  1852,  1896,  2651,  1265,  1888,  1265,  1915,
    1919,  1926,  1911,  1946,   997,  1981,  1982,  1953,  1767,  1620,
    1992,  2623,  1995,  1998,  2680,  2005,  2004,   999,  1747,  1768,
    2180,  2014,  2007,   997,  2023,  2017,  2018,  2021,  2024,  2036,
    2502,  2022,  1826,  1901,  2040,  1265,  2044,  1265,  2184,  2045,
    2049,  2642,  1908,  1454,  2069,  1827,  2071,  2076,  2083,  2084,
    2077,   137,  2087,  1917,  2198,  2091,  2200,  2090,  2116,  2118,
    2201,  2110,  2119,  2122,  1828,   997,  2129,  2130,  2206,  2156,
    2165,  2166,  2164,  2163,  2175,  2177,  1002,  1002,  2186,  2207,
    2219,  1945, -1572,  2213,  2272,  2255,  2281,  1172,  2278,  2284,
    1265,  1620,  2302,  2543,  2289,  2300,  2316,  2544,  2545,  1001,
    1001,  1001,  2326,  1319,  2328,  1002,  2319,   139,  2361, -1528,
    2030,  2324,  2411, -1570,  1418,  2396,  2406,  2408,  2426,   999,
    2427,  1001,   542,  2428,  1002,  2429,  2445,  2440,  1829,  2450,
    2331,  2478,  2479,  2483,  2490,   428,  2491,  2493,  2509,  2496,
    2510,  2515,  2511,  2613,  2530,  2548,  2549,  1908,  2569,  2605,
    2614,  2618,  2624,  2626,  2675,  2645,  2674,  2705,  2714,  1996,
    2644,  2717,  1997,  2719,  2287,  2721,  1002,  2726,    17,    92,
     125,    38,   166,   256,   209,   266,   119,   277,   290,   210,
     241,  2112,   323,   504,  1265,   428,  1265,   545,   456,  1208,
     526,  1728,  2712,  1666,   442,   798,  1620,  2104,  1957,  2340,
     846,  2703,  2716,  2679,  2357,  1032,  2263,  1456,  2012,  2358,
    1219,  2011,  2028,  2068,   139,   959,  2485,  1265,  2038,  2477,
    1472,  1790,  2261,  1010,  1791,  1806,  1001,  2404,  1842,  2423,
    1850,  1266,  2267,  2080,  1565,  1872,  1884,  2410,  1266,  2283,
    2092,  1588,  1892,  1591,  -872,  2291,  1266,  -872,  1265,  2294,
    2174,  2120,   357,  2305,  1918,  2144,  1622,  1623,  1646,  1373,
    1266,  2172,  2173,  2315,  2448,  2711,  1956,   358,   139,  2506,
    2453,  2456,  1856,  2308,  2309,  1789,  2310,   359,  2311,  1614,
     332,   772,  1319,   582,  1001,   213,  1319,  1214,  1478,  2134,
    1991,  1001,  1001,  1001,  1419,   293,  1185,   310,  2612,  1419,
     806,   447,  2495,  2641,  1001,  1001,  1001,  1001,  1001,  1001,
    1001,  1001,   360,  1419,  1001,   272,  2158,  2277,  1620,  1620,
     539,  -872,   489,  2103,   783,  1887, -1756,  2668,     0,     0,
       0,     0,     0,  1265,     0,  1265,     0,     0,  -872,     0,
       0,     0,     0,  1462,   627,     0,     0,  2121,     0,     0,
       0,  2501,     0,     0,     0,  1620,     0,   599,     0,     0,
       0,     0,     0,     0,  1707,  1754,  1708,  1755,     0,     0,
       0,   428,     0,     0,     0,  1266,     0,     0,     0,     0,
    2442,     0,  2161,     0,     0,     0,     0,     0,     0,  2171,
    2171,     0,     0,     0,     0,     0,     0,     0,     0,  2252,
    2252,     0,  1319,  1319,     0,     0,     0,  1319,  1319,  1319,
    1255,  1319,  1266,     0,     0,     0,     0,     0,     0,     0,
    2192,     0,     0,  1266,  2475,     0,     0,     0,     0,  2476,
    -872,  -872,  -872,     0,     0,     0,     0,     0,     0,  -872,
       0,     0,     0,     0,  2482,     0,     0,     0,     0,     0,
    -872,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1319,     0,     0,     0,     0,     0,     0,   361,     0,
       0,  1621,  2224,  1246,     0,     0,     0,     0,     0,     0,
    1266,     0,     0,  -872,  1266,     0,     0,     0,     0,  -872,
    2503,  -872,     0,     0,  -872,  2625,  -872,  -872,  -872,     0,
     362,     0,  -872,     0,  -872,     0,     0,     0,  2572,  -872,
    -233,     0,     0,     0,     0,     0,     0,  2270,     0,     0,
       0,     0,  2522,  2523,     0,     0,  2224,  1620,     0,     0,
       0,     0,     0,     0,   645,  1620,  1246,     0,     0,  2533,
    2534,  -872,     0,     0,     0,     0,  -872,     0,     0,     0,
       0,  2573,  2676,  2574,  1901,     0,  2678,  2546,     0,     0,
    -872,     0,     0,   363,     0,     0,     0,     0,   364,  1621,
       0,     0,     0,     0,     0,     0,     0,  1246,     0,     0,
       0,  1781,  2566,  2307,  2575,  -872,     0,  2570,  2571,     0,
       0,   999,     0,     0,     0,     0, -1756,     0,     0,     0,
     365,  2224,     0,     0,  2576,  1620,     0,  1001,   366,  2609,
       0,     0,     0,  1246,     0,     0,  -872,     0,     0,     0,
       0,   367,     0,     0,     0,     0,   649,  2348,     0,     0,
       0,     0,  2577,     0,  1781,     0,  1255,  2720,     0,  2627,
    2734,     0,  2629,  2630,     0,     0,     0,     0,     0,  -872,
     368,     0,     0,   369,     0,  -872,     0,     0,     0,     0,
       0,   370,     0,     0,     0,     0,     0,  -872,  -872,     0,
       0,  2400,  -230,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2652,     0,     0,  1621,     0,
       0,     0,     0,     0,     0,     0,  1001,     0,     0,  1266,
    -872,   371,  1781,     0,   372,   654,     0,     0,     0,     0,
    -872,     0,     0,     0,  2578,     0,  -872,  2224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -872,  2579,     0,     0,     0,  -872,     0,     0, -1756,  1266,
       0,     0,  -872,     0,  -872,     0,     0,     0,     0,     0,
    -872,     0,  2580,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1781,     0,     0,     0,     0,
    1621,     0,     0,  2581,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2582,  1419,     0,     0,     0,     0,  1001,   663,
    2583,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2487,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1621,     0,     0,  2513,     0,
       0,     0,     0,     0,     0,  2516,     0,     0,  2518,     0,
       0,     0,     0,  1266,     0,     0,     0,  1266,     0,     0,
    1266,     0,     0,     0,     0,   857,     0,   858,     0,   859,
       0,     0,     0,     0,   860,     0,     0,     0,     0,     0,
       0,     0,   861,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2550,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2565,  1266,   862,   863,     0,     0,     0,
       0,     0,     0,     0,     0,   864,     0,     0,     0,  1255,
       0,     0,     0,     0,     0,     0,   865,     0,     0,   866,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   867,     0,     0,     0,  1621,  1621,     0,
       0,     0,     0,  1266,  1266,  1266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   868,     0,     0,  2631,
       0,     0,     0,     0,   869,     0,   870,     0,     0,     0,
       0,     0,     0,  -706,  1621,  -706,  -706,  -706,  -706,  -706,
    -706,  -706,  -706,     0,  -706,  -706,  -706,     0,  -706,  -706,
    -706,  -706,  -706,  -706,  -706,  -706,  -706,   871,     0,     0,
       0,     0,  1266,   999,   999,     0,     0,     0,   872,     0,
       0,     0,     0,   873,     0,     0,     0,     0,     0,     0,
    2681,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   999,     0,     0,     0,     0,     0,     0,   874,
       0,     0,     0,     0,  2702,  2702,   875,     0,     0,   876,
     877,   999,     0,     0,     0,     0,     0,     0,     0,   878,
       0,     0,     0,     0,     0,     0,   879,     0,   880,     0,
       0,   881,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2725,
    1266,     0,     0,   999,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   882,     0,     0,     0,   883,     0,   884,
       0,     0,     0,     0,  1266,     0,  1266,     0,   857,   885,
     858,     0,   859,     0,     0,  -706,  -706,   860,  -706,  -706,
    -706,  -706,     0,     0,     0,   861,  1621,     0,     0,     0,
       0,     0,     0,     0,  1621,   886,     0,     0,     0,     0,
       0,     0,     0,  1266,     0,  1266,     0,     0,   887,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   862,   863,
       0,     0,     0,     0,     0,     0,     0,     0,   864,     0,
       0,     0,     0,     0,   888,   889,     0,     0,     0,   865,
       0,     0,   866,     0,     0,   890,     0,     0,     0,     0,
    1001,     0,     0,     0,     0,     0,   867,     0,  1266,   891,
     892,     0,     0,     0,  1621,     0,   893,     0,     0,     0,
     894,     0,     0,     0,     0,     0,     0,     0,   895,   868,
       0,     0,     0,     0,     0,     0,     0,   869,   896,   870,
       0,     0,     0,     0,     0,     0,     0,   897,     0,     0,
       0,     0,     0,     0,     0,     0,   898,     0,     0,     0,
       0,   899,   900,     0,     0,   901,     0,   902,     0,     0,
     871,     0,     0,     0,   903,     0,     0,     0,     0,     0,
       0,   872,     0,     0,     0,     0,   873,  -706,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1266,     0,  1266,   905,     0,     0,     0,     0,
       0,   906,   874,     0,     0,     0,   907,     0,     0,   875,
       0,     0,   876,   877,     0,     0,     0,     0,     0,     0,
       0,     0,   878,     0,     0,  1266,     0,  -706,     0,   879,
       0,   880,     0,   908,   881,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   857,     0,   858,     0,   859,
       0,     0,     0,     0,   860,     0,  1266,     0,     0,     0,
       0,     0,   861,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   882,     0,     0,     0,
     883,     0,   884,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   885,     0,     0,   862,   863,     0,     0,     0,
       0,     0,     0,     0,     0,   864,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   865,     0,   886,   866,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   887,     0,   867,     0,     0,     0,     0,     0,     0,
       0,  1266,     0,  1266,   857,     0,   858,     0,   859,     0,
       0,     0,     0,   860,     0,     0,   868,   888,   889,     0,
       0,   861,     0,     0,   869,     0,   870,     0,   890,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   891,   892,     0,     0,     0,     0,     0,   893,
       0,     0,     0,   894,   862,   863,     0,   871,     0,     0,
       0,   895,     0,     0,   864,     0,     0,     0,   872,     0,
       0,   896,     0,   873,     0,   865,     0,     0,   866,     0,
     897,     0,     0,     0,     0,     0,     0,     0,     0,   898,
       0,     0,   867,     0,   899,   900,     0,     0,   901,   874,
     902,     0,     0,     0,     0,     0,   875,   903,     0,   876,
     877,     0,     0,     0,     0,   868,     0,     0,     0,   878,
     904,     0,     0,   869,     0,   870,   879,     0,   880,   966,
       0,   881,     0,     0,     0,     0,     0,     0,   905,     0,
       0,     0,     0,     0,   906,     0,   967,     0,     0,   907,
       0,     0,     0,     0,     0,     0,   871,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   872,     0,     0,
       0,     0,   873,   882,     0,     0,   908,   883,     0,   884,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   885,
       0,     0,     0,     0,     0,     0,     0,     0,   874,     0,
       0,     0,     0,     0,     0,   875,     0,     0,   876,   877,
       0,     0,     0,     0,     0,   886,     0,     0,   878,     0,
       0,     0,  1001,  1001,     0,   879,     0,   880,   887,     0,
     881,     0,     0,     0,     0,     0,     0,  1331,   968,   969,
     970,     0,     0,     0,     0,     0,     0,   971,     0,     0,
       0,  1001,     0,     0,   888,   889,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   890,     0,     0,     0,     0,
    1001,     0,   882,     0,     0,     0,   883,     0,   884,   891,
     892,     0,     0,     0,     0,     0,   893,     0,   885,     0,
     894,     0,     0,     0,     0,     0,     0,     0,   895,     0,
       0,     0,  1332,     0,   975,   976,   977,     0,   896,     0,
     978,     0,  1001,     0,   886,     0,     0,   897,  1038,     0,
    1039,     0,     0,     0,     0,  1040,   898,   887,     0,     0,
       0,   899,   900,  1041,     0,   901,     0,   902,     0,     0,
       0,     0,     0,     0,   903,     0,     0,     0,     0,   979,
       0,     0,     0,   888,   889,     0,     0,  1654,     0,     0,
       0,     0,     0,     0,   890,     0,  1042,  1043,     0,     0,
       0,     0,     0,     0,     0,   905,  1044,     0,   891,   892,
       0,   906,     0,     0,     0,   893,   907,  1045,     0,   894,
    1046,     0,     0,     0,     0,     0,     0,   895,     0,     0,
       0,     0,     0,     0,  1047,     0,     0,   896,     0,     0,
       0,     0,     0,   908,     0,     0,   897,     0,     0,     0,
       0,     0,     0,     0,   981,   898,     0,  1048,     0,     0,
     899,   900,     0,     0,   901,  1049,   902,  1050,     0,     0,
       0,     0,     0,   903,  1051,     0,  1052,  1053,  1054,  1055,
    1056,  1057,  1058,  1059,     0,  1060,  1061,  1062,     0,  1063,
    1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,  1072,     0,
       0,     0,     0,     0,   905,   982,   983,     0,     0,  1073,
     906,     0,     0,     0,  1074,   907,     0, -1856,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   966,     0,     0,     0,
    1075,     0,   908,     0,     0,     0,     0,  1076,   987,     0,
    1077,  1078,     0,   967,     0,     0,     0,     0,     0, -1138,
    1079,     0,     0,     0,     0,     0,     0,  1080,   988,  1081,
       0,     0,  1082,   989,     0,     0,     0, -1138,     0,     0,
     990,   243,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1226,     0,     0,   755,     0,     0,  1530,
    1531,  1532,     0,     0,     0,     0,     0,  1533,     0,     0,
       0,     0,     0,     0,  1083,     0,     0,     0,  1084,     0,
    1085,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1086,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1331,   968,   969,   970,     0,     0,
       0,     0,     0,     0,   971,     0,  1087,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1088,
     966,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   967,     0,     0,
       0,     0,     0,     0,     0,  1089,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1090,     0,     0,  1477,
       0,   975,   976,   977,     0,     0,     0,   978,     0,     0,
       0,  1091,     0,     0,     0,     0,     0,  1092,     0,  1226,
       0,  1093,   755,     0,     0,     0,     0,     0,     0,  1094,
       0,     0,     0,     0,     0,     0,     0,  1534,     0,  1095,
       0,     0,     0,     0,     0,     0,   979,  1535,  1096,     0,
       0,     0,     0,     0,     0,     0,     0,  1097,     0,     0,
       0,     0,  1098,  1099,     0,     0,  1100,     0,  1101,   968,
     969,   970,     0,     0,     0,  1102,     0,     0,   971,     0,
       0,     0,     0,     0,  1536,  1537,     0,     0,  1103,   757,
       0,     0,     0,     0,     0,     0,   966,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1104,     0,     0,  1855,
       0,     0,  1105,   967,     0,     0,     0,  1106,     0,     0,
       0,   981,  1228,  1538,  1539,     0,     0,     0,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,     0,     0,
       0,   978,     0,   761,  1107,     0,     0,     0,  1229,     0,
       0,     0,     0,     0,     0,     0,     0,  1226,     0,     0,
     755,  1540,     0,  1530,  1531,  1532,  1922,  1541,     0,     0,
    1542,  1533,   982,   983,     0,     0,     0,     0,  1543,     0,
     979,     0,     0,     0, -1856,  1544,     0,     0,     0,     0,
    1545,     0,     0,     0,     0,     0,     0,     0,     0,   980,
       0,     0,     0,     0,     0,   968,   969,   970,     0,  1546,
       0,     0,     0,     0,   971,   987,     0,     0,     0,     0,
       0,     0,     0,     0,   762,   757, -1138,     0,     0,     0,
       0,     0,     0,     0,   966,   988,     0,     0,     0,     0,
     989,     0,     0,     0, -1138,     0,     0,   990,   243,   137,
       0,   967,     0,     0,     0,   981,     0,     0,  1228,     0,
       0,     0,     0,     0,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,     0,     0,     0,   978,     0,   761,
       0,     0,     0,     0,  1229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
       0,  1226,     0,     0,   755,     0,   982,   983,     0,     0,
       0,  1534,     0,     0,     0,     0,   979,     0,     0,     0,
       0,  1535,     0,     0,     0,     0,     0,  1547,     0,  1548,
       0,  1549,     0,     0,  1550,   980,  1551,  1552,  1553,   764,
       0,  1554,  1555,   968,   969,   970,     0,     0,     0,   987,
       0,     0,   971,     0,     0,     0,     0,     0,  1536,  1537,
     762,     0,     0,   757,     0,     0,     0,     0,     0,   988,
       0,     0,     0,     0,   989,     0,     0,     0,   966,     0,
       0,   990,     0,   137,     0,     0,     0,     0,     0,   765,
       0,   981,     0,     0,     0,   967,  1228,  1538,  1539,     0,
       0,     0,   973,     0,   974,     0,     0,   760,  1377,   975,
     976,   977,     0,     0,     0,   978,     0,   761,     0,     0,
       0,     0,  1229,     0,     0,     0,     0,     0,     0,     0,
     763,     0,     0,     0,     0,  1540,     0,     0,     0,     0,
       0,  1541,   982,   983,  1542,  1226,     0,     0,   755,     0,
       0,     0,  1543,     0,   979,     0,     0,     0,     0,  1544,
       0,     0,     0,     0,  1545,     0,     0,     0,  1923,     0,
       0,     0,     0,   980,     0,   764,     0,     0,     0,  1924,
       0,  1226,     0,  1546,   755,   987,     0,   968,   969,   970,
       0,     0,     0,     0,     0,     0,   971,     0,   762,     0,
       0,     0,     0,     0,     0,   988,     0,   757,     0,     0,
     989,     0,     0,     0,     0,     0,     0,   990,     0,   137,
       0,     0,   966,  1645,     0,   765,     0,     0,     0,   981,
       0,     0,     0,     0,  1227,     0,     0,     0,     0,   967,
    1228,     0,     0,     0,     0,     0,   973,     0,   974,     0,
       0,   760,     0,   975,   976,   977,     0,     0,   966,   978,
       0,   761,     0,     0,     0,     0,  1229,     0,   763,     0,
    1320,     0,     0,     0,     0,   967,     0,     0,     0,     0,
     982,   983,     0,     0,  1226,     0,     0,   755,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   979,     0,
       0,  1547,     0,  1548,     0,  1549,     0,     0,  1550,     0,
    1551,  1552,  1553,   764,     0,  1554,  1555,   980,     0,     0,
       0,     0,     0,   987,     0,     0,     0,     0,     0,     0,
       0,   968,   969,   970,     0,     0,     0,     0,     0,     0,
     971,     0,   762,   988,     0,     0,     0,     0,   989,     0,
       0,   757,     0,     0,     0,   990,     0,   137,     0,     0,
       0,   966,     0,   765,     0,     0,     0,   968,   969,   970,
       0,     0,     0,   981,     0,     0,   971,     0,   967,     0,
       0,     0,     0,     0,  1228,     0,     0,   757,     0,     0,
     973,  1377,   974,     0,     0,   760,     0,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,     0,     0,     0,
    1229,     0,   763,     0,     0,     0,     0,     0,     0,     0,
    1228,     0,     0,     0,   982,   983,   973,     0,   974,     0,
       0,   760,     0,   975,   976,   977,     0,     0,     0,   978,
       0,   761,   979,     0,     0,     0,  1229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   764,     0,     0,
       0,   980,     0,     0,     0,     0,     0,   987,     0,     0,
     968,   969,   970,     0,     0,     0,     0,     0,   979,   971,
       0,     0,     0,     0,     0,     0,   762,   988,     0,     0,
     757,     0,   989,     0,     0,     0,     0,   980,     0,   990,
       0,   137,     0,     0,     0,     0,     0,   765,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   981,     0,     0,
       0,     0,   762,  1228,     0,     0,     0,     0,     0,   973,
       0,   974,     0,     0,   760,     0,   975,   976,   977,     0,
       0,     0,   978,     0,   761,     0,     0,     0,     0,  1229,
       0,     0,     0,   981,     0,     0,   763,     0,     0,     0,
       0,  1226,     0,     0,   755,     0,     0,     0,   982,   983,
       0,     0,     0,     0,     0,     0,     0,  1226,     0,     0,
     755,   979,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   763,     0,     0,     0,     0,     0,     0,  -928,
     980,   764,  -928,     0,   982,   983,     0,     0,     0,     0,
       0,   987,     0,     0,     0,     0,   966,     0,     0,     0,
       0,     0,     0,     0,     0,   762,     0,     0,     0,     0,
       0,   988,     0,   967,     0,     0,   989,   764,   966,     0,
       0,     0,     0,   990,     0,   137,     0,   987,     0,     0,
    1382,   765,     0,     0,   966,   967,   981,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   988,     0,     0,
       0,   967,   989,     0,     0,     0,  -928,     0,     0,   990,
       0,   137,     0,     0,     0,     0,     0,   765,     0,     0,
       0,     0,     0,  -928,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   982,   983,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   968,   969,   970,     0,     0,
       0,     0,     0,     0,   971,     0,     0,     0,     0,     0,
     764,     0,     0,     0,     0,   757,     0,   968,   969,   970,
     987,     0,     0,     0,     0,     0,   971,     0,     0,  1504,
       0,     0,     0,   968,   969,   970,     0,   757,     0,     0,
     988,     0,   971,     0,     0,   989,     0,     0,     0,     0,
       0,     0,   990,   757,   137,  -928,  -928,  -928,     0,   760,
     765,   975,   976,   977,  -928,     0,     0,   978,     0,   761,
    1228,     0,     0,     0,     0,  -928,   973,     0,   974,     0,
       0,   760,     0,   975,   976,   977,  1228,     0,     0,   978,
       0,   761,   973,     0,   974,     0,  1229,   760,     0,   975,
     976,   977,     0,     0,     0,   978,   979,   761,  -928,     0,
       0,     0,  1229,     0,  -928,     0,  -928,     0,     0,  -928,
       0,  -928,  -928,  -928,     0,     0,     0,  -928,   979,  -928,
       0,     0,     0,     0,  -928,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   979,     0,     0,   980,     0,     0,
     762,     0,     0,  1226,     0,     0,   755,     0,     0,     0,
       0,     0,     0,   980,     0,     0,  -928,     0,     0,     0,
       0,     0,   762,     0,     0,  1226,     0,     0,   755,     0,
       0,   981,     0,     0,     0,  -928,     0,     0,   762,     0,
       0,  1226,     0,     0,   755,     0,     0,     0,     0,     0,
       0,     0,     0,   981,     0,     0,     0,     0,     0,     0,
    -928,     0,     0,     0,     0,     0,     0,     0,     0,   981,
     763,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     966,     0,   982,   983,     0,     0,     0,     0,     0,     0,
       0,  -928,   763,     0,     0,     0,     0,   967,     0,     0,
       0,     0,   966,     0,   982,   983,     0,     0,   763,     0,
       0,     0,     0,     0,     0,   764,     0,     0,   966,   967,
     982,   983,     0,     0,     0,   987,     0,     0,     0,     0,
    -928,     0,     0,     0,     0,   967,     0,   764,     0,  1466,
       0,  1226,  -928,  -928,   755,   988,     0,   987,     0,     0,
     989,     0,     0,   764,     0,     0,     0,   990,     0,   137,
       0,     0,     0,   987,     0,   765,     0,   988,     0,     0,
       0,     0,   989,     0,     0,  -928,     0,     0,     0,   990,
       0,   137,     0,   988,     0,  -928,     0,   765,   989,   968,
     969,   970,     0,     0,     0,   990,     0,   137,   971,     0,
       0,     0,     0,   765,     0,  -928,     0,     0,     0,   757,
    -928,   968,   969,   970,     0,  1650,     0,  -928,   966,  -928,
     971,     0,     0,     0,     0,  -928,     0,   968,   969,   970,
       0,   757,     0,     0,     0,   967,   971,     0,     0,     0,
       0,     0,  1228,     0,     0,     0,     0,   757,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,     0,     0,
       0,   978,     0,   761,  1228,     0,     0,     0,  1229,     0,
     973,     0,   974,     0,     0,   760,     0,   975,   976,   977,
    1228,     0,     0,   978,     0,   761,   973,     0,   974,     0,
    1229,   760,     0,   975,   976,   977,     0,     0,   966,   978,
     979,   761,     0,     0,     0,     0,  1229,     0,     0,     0,
       0,     0,     0,     0,     0,   967,     0,     0,     0,   980,
       0,     0,   979,     0,     0,     0,     0,   968,   969,   970,
       0,     0,     0,     0,  1226,     0,   971,   755,   979,     0,
       0,   980,     0,     0,   762,     0,     0,   757,     0,     0,
       0,     0,     0,     0,     0,     0,  1777,   980,     0,   755,
       0,     0,     0,     0,     0,     0,   762,     0,     0,     0,
       0,     0,     0,     0,     0,   981,     0,     0,     0,     0,
    1228,     0,   762,     0,     0,     0,   973,     0,   974,     0,
       0,  1270,     0,   975,   976,   977,     0,   981,     0,   978,
       0,   761,     0,     0,     0,     0,  1229,   968,   969,   970,
       0,   966,     0,   981,   763,     0,   971,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   982,   983,   967,     0,
       0,     0,     0,   966,     0,     0,   763,     0,   979,     0,
       0,     0,     0,     0,     0,     0,  1943,     0,   982,   983,
     967,     0,   763,     0,     0,     0,     0,   980,     0,   764,
       0,     0,     0,     0,   982,   983,     0,     0,     0,   987,
       0,  1477,     0,   975,   976,   977,     0,     0,     0,   978,
       0,   764,   762,  1508,     0,     0,     0,     0,     0,   988,
       0,   987,     0,     0,   989,     0,     0,   764,     0,     0,
       0,   990,     0,   137,     0,     0,     0,   987,     0,   765,
       0,   988,     0,   981,     0,     0,   989,     0,   979,     0,
     968,   969,   970,   990,     0,   137,     0,   988,     0,   971,
       0,   765,   989,     0,     0,     0,     0,     0,     0,   990,
     757,   137,   968,   969,   970,     0,     0,   765,     0,     0,
       0,   971,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   757,     0,   982,   983,     0,     0,     0,     0,
       0,     0,     0,  1228,     0,     0,     0,     0,     0,   973,
       0,   974,     0,     0,   760,     0,   975,   976,   977,     0,
       0,     0,   978,   981,   761,  1228,     0,   764,     0,  1229,
       0,   973,     0,   974,     0,     0,   760,   987,   975,   976,
     977,     0,     0,     0,   978,     0,   761,     0,     0,     0,
       0,  1229,     0,     0,     0,     0,     0,   988,     0,     0,
       0,   979,   989,     0,     0,     0,     0,     0,     0,   990,
       0,   137,     0,     0,   982,   983,     0,   765,     0,     0,
     980,     0,     0,   979,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   980,     0,     0,   762,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   987,     0,     0,
       0,     0,     0,     0,     0,  1030,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,   981,   988,     0,     0,
       0,     0,   989,     0,     0,     0,     0,     0,     0,   990,
       0,   137,     0,     0,     0,   755,  -357,     0,   981,  -357,
       0,     0,  -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
    -357,     0,     0,     0,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   982,   983,  -357,
       0,  -357,     0,     0,     0,     0,     0,   763,  -357,     0,
    -357,  -357,  -357,  -357,  -357,  -357,  -357,     0,     0,   982,
     983,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,     0,     0,     0,     0,     0,     0,     0,   966,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,  -357,     0,   967,     0,     0,     0,
     988,     0,   987,     0,     0,   989,     0,     0,     0,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,     0,   988,     0,     0,     0,     0,   989,     0,     0,
       0,     0,     0,     0,   990,  -357,   137,     0,     0,     0,
       0,     0,   765,     0,     0,     0,     0,     0,     0,     0,
     529,     0,     0,  -357,  -357,  -357,  -357,  -357,     0,     0,
    -357,  -357,     0,     0,  -357,     0,     0,     0,     0,     0,
    -357,     0,  -357,     0,     0,     0,     0,     0,  -357,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,   968,   969,
     970,     0,     0,  -357,     0,     0,     0,   971,     0,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,   757,  -357,
       0,     0,     0,     0,     0,  -357,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,     0,
     528,     0,     0,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,  -357,   760,     0,   975,   976,   977,     0,     0,     0,
     978,     0,   761,     0,     0,  -357,     0,     0,  -357,  -357,
    -357,  -357,  -357,  -357,  -357,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,  -357,     0,     0,     0,     0,     0,   979,
       0,  -357,     0,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,     0,     0,     0,     0,     0,  -357,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   762,     0,     0,  -357,     0,     0,  -357,
       0,     0,     0,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,     0,     0,   981,     0,     0,     0,     0,     0,
    -357,     0,  -357,  -357,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -357,     0,     0,     0,   529,     0,     0,  -357,  -357,
    -357,  -357,  -357,   763,     0,  -357,  -357,     0,     0,     0,
       0,     0,  -357,     0,     0,   982,   983,  -357,     0,     0,
       0,     0,  -357,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,  -357,  -357,
       0,     0,     0,  -357,  -357,  -357,     0,     0,   764,     0,
       0,  -357,     0,   619,  -357,     0,     0,  -357,   987,     0,
    -357,     0,     0,  -357,  -357,     0,     0,     0,   620,     0,
     530,   621,   622,   623,   624,   625,   626,   627,   988,     0,
       0,     0,     0,   989,     0,     0,     0,     0,     0,     0,
     990,     0,   137,     0,     0,     0,  -357,     0,   765,     0,
       0,     0,     0,     0,     0,     0,   628,     0,   629,   630,
     631,   632,   633,   634,   635,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,  -357,
       0,     0,   636,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,     0,     0,
       0,     0,     0,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   637,   638,   639,   640,   641,     0,     0,   642,   643,
       0,     0,     0,     0,     0,  -357,     0,  -357,  -357,  -357,
       0,     0,     0,     0,     0,     0,  1702,     0,     0,  1703,
       0,     0,  1704,   621,   622,   623,   624,   625,   626,  1705,
    1706,   644,     0,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,   645,     0,  1707,
       0,  1708,  -357, -1832,     0,     0,     0,     0,   628,     0,
     629,   630,   631,   632,   633,   634,   635,     0,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,  -357,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,   646,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,   636,   530,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2362,     0,   647,  2363,     0,
       0,  2364,     0,     0,     0,     0,     0,     0,     0,  2365,
       0,   648,     0,     0,     0,     0,     0,     0,     0,   649,
       0,     0,   650,     0,     0,  1709,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   651,     0,     0,     0,     0,
       0,     0,     0,   637,   638,   639,   640,   641,   652,     0,
     642,   643,     0,     0,  1710,  2366,   653,     0,     0,     0,
    1711,     0,  1712,     0,     0,     0,     0,     0, -1785,     0,
       0,     0,     0,     0,  2367,  1713,     0,     0,     0,     0,
       0,     0,     0,   644,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,   654,   645,
     655,   656,   657,     0,     0,     0,     0,  1714,     0,     0,
       0,     0,     0,     0,     0,     0,  1715,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   658,     0,  1716,
     966,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   646,     0,     0,     0,  -354,     0,   967,     0,     0,
       0,     0,     0,  2368,     0,     0,     0,     0,     0,     0,
       0,  2369, -1832,     0,     0,     0,     0,     0,     0,  1717,
       0,   659,   660,   661,  2370,     0,     0,     0,     0,     0,
       0,     0,  1718,   648,     0,   662,     0,     0,     0,     0,
       0,   649,   663,     0,   650,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2371,   651,     0,  1719,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2372,     0,  2373,     0,
       0,     0,     0,     0,     0,     0,  1720,     0,     0,   968,
     969,   970,     0,  1721,     0,     0,     0,     0,   971,     0,
    2374,  2375,     0,     0,     0,     0,     0,     0,     0,   757,
    1722,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     654,     0,   655,   656,   657,     0,     0,     0,     0,     0,
       0,  2376,     0,     0,     0,     0,   621,   622,   623,   624,
     625,   626,   972,     0,     0,     0,     0,     0,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,  2377,  2378,
       0,   978,  1723,   761,     0,     0,     0,  -609,     0,     0,
       0,   628,  1724,   629,   630,   631,   632,   633,   634,   635,
       0,     0,     0,     0,     0,  2379,     0,     0,     0,  1725,
       0,     0,  2380,   659,   660,   661,     0,     0,     0,     0,
     979,     0,     0,     0,     0,  2381,     0,   662,     0,  2382,
       0,     0,     0,  1726,   663,     0,     0,   636,     0,   980,
       0,     0,     0,   966,  2383,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     967,     0,     0,     0,   762,     0,     0,     0,     0,     0,
    2384,     0,     0,     0,     0,     0,     0,     0,     0,  2385,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   981,   637,   638,   639,   640,
     641,     0,     0,   642,   643,     0,     0,     0,  2386,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2387,     0,
       0,   966,     0,     0,  2388,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,   644,     0,   967,     0,
       0,     0,     0,     0,     0,     0,   982,   983,     0,     0,
       0,     0,   968,   969,   970,     0,     0,     0,     0,     0,
       0,   971,     0,     0,     0,     0,     0,  1408,     0,     0,
       0,     0,   757,     0,     0,     0,     0,   984,     0,   764,
       0,   985,   986,     0,     0,     0,     0,     0,     0,   987,
       0,     0,     0,     0,   646,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   972,     0,     0,     0,   988,
       0,   973,     0,   974,   989,     0,   760,     0,   975,   976,
     977,   990,     0,   137,   978,     0,   761,     0,     0,   765,
     968,   969,   970,     0,     0,     0,   648,     0,     0,   971,
       0,     0,     0,     0,     0,     0,     0,   650,     0,     0,
     757,     0,     0,   966,     0,     0,     0,     0,     0,     0,
     651,     0,     0,   979,     0,     0,     0,     0,     0,     0,
     967,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   980,   972,     0,     0,     0,     0,     0,   973,
       0,   974,     0,     0,   760,     0,   975,   976,   977,     0,
       0,     0,   978,     0,   761,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   655,   656,   657,     0,     0,
       0,   966,     0,     0,     0,     0,     0,     0,   981,     0,
       0,   979,     0,     0,     0,     0,     0,     0,   967,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     980,     0,   968,   969,   970,     0,     0,     0,     0,     0,
       0,   971,     0,     0,     0,     0,     0,   763,     0,     0,
       0,     0,   757,     0,     0,   762,     0,     0,     0,   982,
     983,     0,     0,     0,     0,     0,   659,   660,   661,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1427,     0,     0,     0,     0,   972,   981,     0,     0,     0,
     984,   973,   764,   974,   985,   986,   760,     0,   975,   976,
     977,     0,   987,     0,   978,     0,   761,     0,     0,     0,
     968,   969,   970,     0,   966,     0,     0,     0,     0,   971,
       0,     0,   988,     0,     0,   763,     0,   989,     0,     0,
     757,   967,     0,     0,   990,     0,   137,   982,   983,     0,
       0,     0,   765,   979,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1968,     0,
       0,     0,   980,   972,     0,     0,     0,     0,   984,   973,
     764,   974,   985,   986,   760,     0,   975,   976,   977,     0,
     987,     0,   978,     0,   761,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     988,     0,     0,     0,     0,   989,     0,     0,     0,     0,
       0,   966,   990,     0,   137,     0,     0,     0,   981,     0,
     765,   979,     0,   968,   969,   970,     0,     0,   967,     0,
       0,     0,   971,     0,     0,     0,     0,     0,     0,     0,
     980,     0,     0,   757,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,     0,
       0,     0,     0,     0,     0,   762,     0,     0,     0,   982,
     983,     0,     0,     0,     0,     0,   972,     0,     0,     0,
       0,     0,   973,     0,   974,     0,     0,   760,     0,   975,
     976,   977,     0,     0,     0,   978,   981,   761,     0,     0,
     984,     0,   764,     0,   985,   986,     0,     0,     0,     0,
       0,     0,   987,     0,     0,     0,     0,     0,     0,     0,
     968,   969,   970,     0,     0,     0,     0,     0,     0,   971,
       0,     0,   988,     0,   979,   763,     0,   989,     0,     0,
     757,     0,     0,     0,   990,     0,   137,   982,   983,     0,
       0,     0,   765,   980,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   972,     0,     0,     0,     0,   762,   973,
     764,   974,   985,     0,   760,     0,   975,   976,   977,     0,
     987,     0,   978,     0,   761,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2692,     0,     0,     0,   981,
     988,     0,     0,     0,     0,   989,     0,     0,     0,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,   979,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   763,     0,
     980,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     982,   983,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   762,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   764,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   987,     0,     0,   981,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,     0,     0,     0,   989,     0,
       0,     0,     0,     0,     0,   990,     0,   137,     0,     0,
       0,     0,     0,   765,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   982,   983,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     988,     0,     0,     0,     0,   989,     0,     0,     0,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-2415))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     103,   393,   105,   395,   597,   116,   663,   366,   111,   181,
     962,   540,   790,  1118,   849,   103,  1145,   105,  1226,   721,
    1207,  1590,   158,   111,   358,   785,  1444,  1444,   794,  1116,
    1444,  1444,   135,   425,  1444,  1580,  1444,   209,  1596,  1994,
     600,  1485,  1534,   435,  1367,   404,  1121,   135,   652,   795,
    1258,  1131,  1265,   687,  1830,  2028,     1,  1377,   700,     9,
    1356,  1913,     9,     9,    22,  1145,  1466,  1112,  1525,    17,
    1184,    27,     1,     0,  1123,    58,     9,     1,    53,     9,
       1,   184,  1131,    48,  1198,    60,  1938,    56,    57,    58,
      49,   364,   852,    21,     0,    64,  1145,  1979,  1761,    56,
     115,    17,   125,   160,  1376,   177,  1319,    73,    30,    21,
     124,    31,   794,  1796,     6,   749,    58,    93,    31,  1519,
      38,    64,   252,   175,   111,    58,   124,   212,    46,    88,
      99,   100,   153,   102,   166,  1458,   241,   142,   107,   108,
     251,   277,   176,    65,  1689,    67,   177,   116,  1253,   241,
      32,    65,   130,    67,   758,   759,  1839,    22,  1454,  1372,
     116,   213,    97,   232,   133,   799,   244,  1132,    87,   125,
      49,   256,    49,    58,   242,   203,   256,    71,   203,   229,
      97,   266,    32,   274,   295,  1508,   161,  1587,  2161,   229,
     252,   160,   358,  1158,   200,   308,  1241,   369,   840,   225,
     162,   173,   355,   158,    88,   809,   172,  1890,   218,    39,
    2061,    27,   139,   794,  2430,   216,   143,   143,    58,   985,
     256,   274,   191,   188,   407,   411,  2546,   455,   453,   111,
     285,   758,   759,   139,   203,   236,  2650,   143,   108,  1169,
    1006,   256,   203,   218,   219,   178,   232,   407,  1297,   188,
    1650,   237,    71,   256,    31,   204,   367,     0,   452,  1308,
     390,   262,   347,   307,  1947,   309,   256,   461,    65,  1199,
      67,   210,  2686,   200,   232,   503,   231,  1573,   199,   334,
     249,   506,   809,   232,   114,  1365,   287,    28,   257,  2609,
    2506,  1990,   478,   211,   200,   478,   306,   272,   389,   352,
     116,   354,   984,   985,   986,   458,   342,   282,   241,   256,
    2009,  2010,  1857,   232,  2013,    92,  1365,   385,   478,   340,
    1369,   371,  2174,  1892,  1006,   243,    71,   289,   390,   111,
     252,   371,   417,   411,   500,   341,   228,   292,   252,   329,
     443,  1661,   445,   446,  1309,  1111,   457,   265,  1668,   452,
     274,   228,  2035,   309,   271,  2054,  2019,   445,   446,  1655,
    2059,   290,   130,  2062,   452,   470,   469,   232,   972,   472,
     473,  1863,   475,   503,   256,   478,   479,  1011,   470,  1466,
    1872,   469,  1782,   312,   453,    71,   127,    49,   316,   355,
     366,   972,  1849,   506,   363,  1852,    71,   454,   256,   358,
     318,   973,   974,   984,   985,   986,   256,   237,   980,   331,
    1176,  1177,  1178,   516,   341,   341,   308,   331,   335,    71,
    1385,   393,   391,  1189,  1190,  1006,   506,   512,   516,  1111,
    1196,   463,  1519,   402,   506,   341,   464,   540,   541,   464,
       6,   371,   411,   412,   422,   414,   415,     6,   453,  1524,
      49,   420,   540,   541,   506,     9,     6,  1017,  1018,   402,
      47,   379,   438,  2345,  1760,   389,     9,   417,   437,   354,
     484,   212,   506,   499,   358,   506,    63,  2176,   581,   358,
       6,     6,   505,   594,   453,   506,   484,  1169,   449,   256,
     601,   506,   458,   581,  1176,  1177,  1178,   600,   485,  1133,
    1587,   502,   467,   506,  1584,   399,   448,  1189,  1190,  1191,
    1192,  1193,  1194,  1195,  1196,   256,   103,  1199,  1790,  1265,
     506,  1841,  1567,   256,   507,   266,   453,   455,   444,   453,
    1111,   804,   453,  2216,   331,  1584,   647,   470,   466,   280,
     505,   500,   499,   455,   464,  2208,   515,   453,   506,   505,
     653,   464,  1133,  1598,   466,   503,   450,   475,  1139,   506,
     506,   506,   512,  1650,  1678,   534,  1208,  1780,   498,  1777,
     462,   506,  2130,   403,  2257,  1624,  2259,   506,  2430,   506,
     399,     6,   501,   505,   244,   554,  1882,   556,  1169,   506,
     559,   560,   256,   562,   160,  1176,  1177,  1178,  1179,   124,
     506,   576,  2484,  1184,   154,  1118,   347,  2290,  1189,  1190,
    1191,  1192,  1193,  1194,  1195,  1196,   500,  1198,  1199,  2076,
     460,   500,   591,  1919,  1228,   465,  1372,   596,  2404,  2480,
    2481,   450,   328,   608,   603,   505,   506,  2320,  2321,  2101,
    2522,  2523,  1155,   126,   256,   232,   212,  1228,   506,    33,
     176,   257,   239,   212,   399,    58,  2355,   330,   212,   770,
    2359,   443,   212,   250,   775,    57,   448,   839,    60,  2069,
    1251,  2071,    64,  1245,   256,   256,   417,   780,   781,   420,
     421,   792,  2655,  1110,  2566,   453,   212,   212,  2570,  2571,
     256,  1118,  1119,   662,   797,  1782,   358,   256,  2653,   256,
     266,  1128,   256,   160,     1,   450,   256,   266,  1135,  1136,
    2110,  2463,   266,   399,    11,   377,   266,  2599,  1937,   421,
    2006,   271,   262,  1115,   399,  1117,  1492,  1154,  1155,   271,
     256,   256,    26,     6,   703,     1,  1785,   706,   506,   506,
     266,   266,   453,  1788,   287,   512,   308,   399,  1140,  1495,
    1142,   411,  2072,  1334,   203,  1147,  2638,   126,   203,   358,
     270,   785,    59,  2163,   450,   352,   353,   170,   189,  1161,
     453,   512,     9,   506,   460,   450,  2475,  2476,   377,   465,
     367,   347,   369,  2482,   168,  2277,   232,   212,   347,   460,
     407,   453,    30,   347,   465,  2091,    62,   347,   450,   234,
      97,   330,    99,   162,   101,  2488,  2489,   350,  1888,   505,
    1492,   220,   109,    50,   216,   217,    34,  2279,  2280,   329,
     223,   347,   347,   262,    90,    91,     0,    65,   852,    67,
     436,   256,   505,   290,   236,  2534,   293,   218,   500,  1888,
    1889,   266,   506,   252,   203,   505,   386,   196,   287,   199,
     961,   417,  2421,  2176,   453,  1459,   130,   419,   417,   561,
     262,   478,  1289,   417,  1256,   348,   453,   417,   165,  1974,
       9,    57,   317,  2169,   154,  1267,   268,  2629,    64,  1529,
    1440,    62,  1486,   267,  1143,   287,  1632,   256,   454,   448,
     496,   417,   417,  1320,   506,   157,   462,   159,    57,  1581,
     506,   500,   196,   462,  1163,    64,   448,   256,   462,    90,
      91,  1492,   462,   500,  1017,  1018,  1027,  1683,  2204,  1569,
     403,     9,   347,   448,   506,   506,  2145,   395,   377,  2498,
     289,  2060,  2061,   314,    57,  1269,   462,   462,   204,   212,
     506,    64,   363,   352,  1594,     9,   512,   506,   340,   506,
     460,   360,  1379,   512,  2416,   465,   506,   231,   512,   484,
     257,     9,   512,   398,    12,   139,   232,    15,    16,   143,
      58,   271,  1606,   323,   324,   212,   505,   506,   424,   505,
     506,   506,  2069,   256,  2071,   453,   512,   512,   178,   447,
     340,  2549,   417,   266,    58,   162,   407,   454,    11,   166,
    1581,  1683,  2077,     8,   301,   397,   464,   244,   245,  1112,
     402,   195,   407,  1116,   252,  1349,   292,   291,   377,   256,
    1123,  1124,  2230,  2110,   708,  1606,   200,   262,  1131,   266,
    2470,  1134,    37,  2090,  1780,   546,  1139,   462,  1141,  1466,
    1143,  1144,  1145,  1146,   171,   395,    59,   237,   324,   452,
     240,   232,   287,  1687,  2129,   321,   308,   460,   461,  2108,
    1163,   244,   465,   281,   282,   283,   505,   478,  2626,  2614,
    2514,   755,   256,   212,   347,   586,  2163,  1711,  1505,   123,
     356,   506,   268,   478,    97,  1257,    99,   512,   101,  2529,
     178,  1518,  1519,   331,   391,  2200,   109,  1678,   225,     8,
     502,  1694,  1683,   505,   615,  1497,   233,    85,  2165,   268,
     347,  2529,  2529,   188,   506,  2529,  2529,   256,   301,  2529,
      55,  2529,   357,   423,   212,   425,   344,   266,    37,  1556,
    1711,  1512,  1513,  1514,  1515,   210,  1308,   434,  1241,   412,
     321,   341,   758,   759,   417,   268,   505,  2692,   212,  2718,
     834,  1801,   165,   241,   340,    90,   453,  1260,  1808,   411,
    1587,  2706,   139,   337,   118,   119,   120,   341,   256,    26,
    1774,    12,   107,   352,    15,    16,   256,   241,   266,   412,
     417,   340,   117,    54,    55,    35,   171,   453,    38,   462,
     317,    30,   256,   809,  1297,    45,    46,   453,   415,   306,
     794,  1628,   266,   212,  1376,  1308,   456,   287,   347,   506,
    1860,   397,  1639,   226,   256,  1642,   402,   340,   759,    90,
    1980,   256,   448,  1650,  2281,   462,   478,   460,   256,   277,
     278,   338,   465,   506,   413,   414,   107,   454,   397,   512,
     225,   476,    92,   402,   257,   172,   117,   256,   233,  1352,
     468,   469,   359,   301,   302,   473,   506,   266,   286,   347,
     212,   172,  1365,     8,   126,  1915,  1369,   453,   809,   108,
     505,  1605,   453,   499,   397,   512,   395,   204,   417,   402,
     256,  1351,   262,   347,   238,   207,   208,  2033,   301,   128,
     262,   304,    37,   204,   453,   271,   107,   352,   252,   354,
     453,   329,  1405,   453,   256,   347,   117,   287,  1480,   232,
     172,   161,   188,  1672,   266,   287,   166,  1405,  1922,  2406,
     506,  2408,   212,   462,   246,   247,   178,  2514,   167,   417,
     453,  1401,   317,   256,   210,  1134,   188,  1440,   347,   157,
     190,   159,    16,     2,   262,   321,   388,  1146,     7,  2051,
     189,  2480,  2481,   417,  2189,  2484,  1215,   370,   210,    33,
    1219,   211,   262,  1466,  2014,   204,   256,   506,    42,   287,
     352,  2579,   354,   512,   462,   417,   266,   453,   391,   506,
    2030,   335,   470,   483,   307,  1978,   309,   287,   240,  2155,
     984,   985,   986,   506,   348,   347,   455,   424,   462,  2049,
     380,   501,  2036,   416,  2634,   418,   470,   466,   417,   406,
    2627,  2628,  1006,    13,    14,   265,  1519,  1589,   506,   232,
     450,   434,  2652,   406,   512,  2029,   248,   249,  2533,  2079,
     460,   451,    32,  2083,  1815,   465,   277,   278,   555,  2656,
     460,  1613,   506,   560,   352,   465,   354,   395,   512,  1830,
     321,   453,   450,   462,   325,   326,  2090,   347,  2675,   453,
     301,   302,   460,   453,  1567,   417,  1638,   465,   318,  1438,
     512,   455,  2122,  2155,  1443,  1444,   450,  1446,   451,  1413,
      58,  1584,   466,  1417,  1587,   439,   460,   460,   453,  1625,
    1424,   465,   465,   506,   218,  1598,   367,   506,   174,  1926,
    2717,   340,  1894,   512,   473,   506,   475,    24,    25,   478,
     462,   453,   383,   384,   453,  1109,     1,  1111,    97,    98,
    1114,  1624,   299,   300,  1118,   505,   506,   417,    69,   379,
     506,  2165,  1193,  1194,  1195,   457,   512,   459,   252,  1133,
     254,  1652,   392,   453,   252,  1139,   254,  1650,  2326,    66,
    2328,    68,   252,    70,   254,    40,    41,    42,    43,    44,
     512,   411,    66,  2213,    68,   506,  1160,  1737,  1162,  2219,
     453,  1674,   462,   506,  2155,  1169,   453,  1747,  1748,  2229,
     340,  1751,  1176,  1177,  1178,  1179,  1674,   104,   105,   106,
    1184,    76,    77,  1191,  1192,  1189,  1190,  1191,  1192,  1193,
    1194,  1195,  1196,   256,  1198,  1199,  1717,   256,  1675,  1676,
    1677,   984,   470,   986,  1681,   199,   444,  1684,  1685,  1177,
    1178,   506,   512,   401,   411,   475,   402,  1738,   487,   488,
     489,   490,    64,  1227,    60,   256,   232,   154,   453,   156,
     487,   488,   489,   490,   328,   402,   163,  2281,   256,   166,
    2300,  2180,   506,  2303,  2304,   229,    26,  1251,    35,  1253,
     453,    38,   487,   488,   489,   490,  2316,  1636,    45,    46,
     453,   108,  2450,  2625,   453,  1778,   312,   272,    23,  1782,
    2330,  2331,  1785,   256,   256,  1788,   623,   624,   625,   626,
     456,   103,  2119,   439,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   453,   123,   189,    17,   456,    87,   506,
     453,   272,   395,   352,   402,    92,   403,    57,   424,  2111,
     505,    39,  1894,  1692,  1693,   262,   453,   237,   403,   331,
    2157,  2158,   506,   508,  1703,   252,  1839,   254,   506,   420,
    1334,  1710,   310,   395,   453,  2104,  2396,   316,   261,     7,
     453,   395,   255,   506,   271,   453,   453,   505,   395,   453,
     367,   453,  1356,    86,    86,   125,   433,   453,   395,    22,
    1739,   390,   306,  1945,   503,   453,   309,   395,   506,   204,
     506,   501,  1954,  1955,   161,  1888,  1889,  1890,  1382,   453,
    2440,  1927,  1928,  1929,  1930,  1931,  1932,  1933,  1934,   503,
     385,   232,   448,   254,   506,   218,   123,   506,    53,   464,
     448,   512,   444,   190,    26,   401,   306,   411,   449,   349,
     196,   506,   447,   464,   444,   453,   256,   506,  1797,   453,
     377,   336,   115,   400,   211,   506,  2263,   170,   464,   188,
     506,   464,   464,   448,  1947,   330,   256,  1816,   464,   464,
     464,   464,   464,  1822,   464,   453,   453,   223,   343,  1828,
    1454,   453,   309,   506,   506,   404,   506,   455,    30,   131,
    1973,   196,   132,   448,   133,   387,   137,   134,   102,   794,
     135,   443,  1985,   464,   136,  1973,    49,  1990,   265,   138,
     499,   448,  2003,   141,   405,   447,   444,   447,  1492,   441,
     144,   196,   145,   271,   146,    31,  2009,  2010,   147,    49,
    2013,   501,   148,   150,   149,   196,   113,   151,   220,   152,
     115,   450,   450,   450,   450,   450,   450,   448,   445,   411,
     453,   312,  2035,   110,   197,   203,   223,   377,   339,  2111,
     448,   318,   256,   272,   294,  2627,  2628,   231,  2120,  2060,
    2061,  2054,   298,   166,   486,   129,  2059,  2060,  2061,  2062,
     503,   176,   366,   503,   169,  2622,  2069,   448,  2071,   130,
     448,    49,   228,   196,  2656,   204,   177,   228,   495,  1573,
     299,  2574,    57,   204,  2641,   453,   506,  1581,   252,   506,
    1959,   166,   272,  2675,   299,   511,   510,   237,   276,   448,
    2427,   424,   379,  1597,   448,  2108,   381,  2110,  1977,   363,
     295,  2604,  1606,    30,   203,   392,   203,    17,   129,   140,
     444,   506,   366,  1617,  1993,    49,  1995,   448,   142,     8,
    1999,   203,   196,   130,   411,  2717,   503,   503,  2007,   424,
     448,     9,   453,   203,     7,   506,  2627,  2628,   256,   505,
     297,  1645,   203,   294,   500,   505,    49,   972,   500,   189,
    2163,  1655,   262,  2490,   314,   291,   463,  2494,  2495,   984,
     985,   986,   114,  2176,   438,  2656,   330,  2180,    47,   203,
     412,   313,   103,   203,  1678,   294,   362,   362,   381,  1683,
      49,  1006,  2180,   262,  2675,   237,   494,   296,   475,    96,
     292,    57,   411,     8,    49,  2497,   111,   458,   262,   337,
     262,   453,   262,   340,   110,   337,   483,  1711,   210,   453,
     108,   221,   209,   503,   196,   419,   120,   337,   313,  1723,
     368,    49,  1726,   306,  2103,   426,  2717,   321,     7,    46,
      92,    26,   127,   201,   148,   206,    75,   221,   238,   150,
     177,  1893,   286,   469,  2257,  2547,  2259,   519,   425,  1026,
     497,  1444,  2690,  1403,   410,   748,  1760,  1886,  1666,  2178,
     781,  2669,  2702,  2638,  2201,   852,  2074,  1224,  1750,  2201,
    1035,  1749,  1776,  1833,  2287,   788,  2389,  2290,  1784,  2374,
    1241,  1478,  2072,   799,  1480,  1505,  1111,  2255,  1524,  2287,
    1527,  1116,  2076,  1852,  1293,  1570,  1577,  2273,  1123,  2099,
    1880,  1329,  1588,  1334,     6,  2111,  1131,     9,  2321,  2118,
    1955,  1906,     4,  2132,  1618,  1935,  1363,  1365,  1379,  1146,
    1145,  1954,  1954,  2158,  2324,  2686,  1665,    19,  2341,  2430,
    2329,  2334,  1556,  2151,  2151,  1474,  2151,    29,  2151,  1352,
     299,   694,  2355,  2341,  1169,   152,  2359,    49,  1251,  1922,
    1711,  1176,  1177,  1178,  1179,   242,   989,   270,  2557,  1184,
     753,   417,  2418,  2603,  1189,  1190,  1191,  1192,  1193,  1194,
    1195,  1196,    64,  1198,  1199,   215,  1942,  2088,  1882,  1883,
     509,    83,   449,  1885,   712,  1580,    88,  2629,    -1,    -1,
      -1,    -1,    -1,  2406,    -1,  2408,    -1,    -1,   100,    -1,
      -1,    -1,    -1,  1228,    45,    -1,    -1,  1911,    -1,    -1,
      -1,  2424,    -1,    -1,    -1,  1919,    -1,   558,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    -1,
      -1,  2733,    -1,    -1,    -1,  1260,    -1,    -1,    -1,    -1,
    2319,    -1,  1946,    -1,    -1,    -1,    -1,    -1,    -1,  1953,
    1954,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2480,
    2481,    -1,  2475,  2476,    -1,    -1,    -1,  2480,  2481,  2482,
    1974,  2484,  1297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1984,    -1,    -1,  1308,  2363,    -1,    -1,    -1,    -1,  2368,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,  2383,    -1,    -1,    -1,    -1,    -1,
     212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2534,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,
      -1,  1356,  2036,  2546,    -1,    -1,    -1,    -1,    -1,    -1,
    1365,    -1,    -1,   245,  1369,    -1,    -1,    -1,    -1,   251,
    2429,   253,    -1,    -1,   256,  2576,   258,   259,   260,    -1,
     252,    -1,   264,    -1,   266,    -1,    -1,    -1,   209,   271,
     262,    -1,    -1,    -1,    -1,    -1,    -1,  2081,    -1,    -1,
      -1,    -1,  2461,  2462,    -1,    -1,  2090,  2091,    -1,    -1,
      -1,    -1,    -1,    -1,   235,  2099,  2609,    -1,    -1,  2478,
    2479,   303,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,   252,  2633,   254,  2118,    -1,  2637,  2496,    -1,    -1,
     322,    -1,    -1,   315,    -1,    -1,    -1,    -1,   320,  1454,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2650,    -1,    -1,
      -1,  1466,  2521,  2147,   285,   347,    -1,  2526,  2527,    -1,
      -1,  2155,    -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,
     352,  2165,    -1,    -1,   305,  2169,    -1,  1492,   360,  2548,
      -1,    -1,    -1,  2686,    -1,    -1,   378,    -1,    -1,    -1,
      -1,   373,    -1,    -1,    -1,    -1,   327,  2191,    -1,    -1,
      -1,    -1,   333,    -1,  1519,    -1,  2200,  2710,    -1,  2578,
    2721,    -1,  2581,  2582,    -1,    -1,    -1,    -1,    -1,   411,
     402,    -1,    -1,   405,    -1,   417,    -1,    -1,    -1,    -1,
      -1,   413,    -1,    -1,    -1,    -1,    -1,   429,   430,    -1,
      -1,  2235,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2624,    -1,    -1,  1573,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1581,    -1,    -1,  1584,
     462,   453,  1587,    -1,   456,   406,    -1,    -1,    -1,    -1,
     472,    -1,    -1,    -1,   415,    -1,   478,  2281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     492,   432,    -1,    -1,    -1,   497,    -1,    -1,   500,  1624,
      -1,    -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,
     512,    -1,   453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1650,    -1,    -1,    -1,    -1,
    1655,    -1,    -1,   474,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   493,  1678,    -1,    -1,    -1,    -1,  1683,   500,
     501,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2399,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1760,    -1,    -1,  2442,    -1,
      -1,    -1,    -1,    -1,    -1,  2449,    -1,    -1,  2452,    -1,
      -1,    -1,    -1,  1778,    -1,    -1,    -1,  1782,    -1,    -1,
    1785,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2503,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2517,  1839,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,  2533,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,  1882,  1883,    -1,
      -1,    -1,    -1,  1888,  1889,  1890,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,  2583,
      -1,    -1,    -1,    -1,   120,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,   129,  1919,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,    -1,
      -1,    -1,  1947,  2627,  2628,    -1,    -1,    -1,   164,    -1,
      -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,
    2644,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2656,    -1,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,  2668,  2669,   202,    -1,    -1,   205,
     206,  2675,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,   224,    -1,
      -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2713,
    2035,    -1,    -1,  2717,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   269,    -1,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,    -1,  2069,    -1,  2071,    -1,     1,   285,
       3,    -1,     5,    -1,    -1,   291,   292,    10,   294,   295,
     296,   297,    -1,    -1,    -1,    18,  2091,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2099,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2108,    -1,  2110,    -1,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,   350,   351,    -1,    -1,    -1,    72,
      -1,    -1,    75,    -1,    -1,   361,    -1,    -1,    -1,    -1,
    2155,    -1,    -1,    -1,    -1,    -1,    89,    -1,  2163,   375,
     376,    -1,    -1,    -1,  2169,    -1,   382,    -1,    -1,    -1,
     386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   404,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   413,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   422,    -1,    -1,    -1,
      -1,   427,   428,    -1,    -1,   431,    -1,   433,    -1,    -1,
     153,    -1,    -1,    -1,   440,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,    -1,   169,   453,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2257,    -1,  2259,   471,    -1,    -1,    -1,    -1,
      -1,   477,   195,    -1,    -1,    -1,   482,    -1,    -1,   202,
      -1,    -1,   205,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,    -1,    -1,  2290,    -1,   503,    -1,   222,
      -1,   224,    -1,   509,   227,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    10,    -1,  2321,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,
     273,    -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,   311,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   324,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2406,    -1,  2408,     1,    -1,     3,    -1,     5,    -1,
      -1,    -1,    -1,    10,    -1,    -1,   112,   350,   351,    -1,
      -1,    18,    -1,    -1,   120,    -1,   122,    -1,   361,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   375,   376,    -1,    -1,    -1,    -1,    -1,   382,
      -1,    -1,    -1,   386,    51,    52,    -1,   153,    -1,    -1,
      -1,   394,    -1,    -1,    61,    -1,    -1,    -1,   164,    -1,
      -1,   404,    -1,   169,    -1,    72,    -1,    -1,    75,    -1,
     413,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,
      -1,    -1,    89,    -1,   427,   428,    -1,    -1,   431,   195,
     433,    -1,    -1,    -1,    -1,    -1,   202,   440,    -1,   205,
     206,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,   215,
     453,    -1,    -1,   120,    -1,   122,   222,    -1,   224,    83,
      -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,   471,    -1,
      -1,    -1,    -1,    -1,   477,    -1,   100,    -1,    -1,   482,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,    -1,   169,   269,    -1,    -1,   509,   273,    -1,   275,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
      -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,   205,   206,
      -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,   215,    -1,
      -1,    -1,  2627,  2628,    -1,   222,    -1,   224,   324,    -1,
     227,    -1,    -1,    -1,    -1,    -1,    -1,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,  2656,    -1,    -1,   350,   351,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,    -1,
    2675,    -1,   269,    -1,    -1,    -1,   273,    -1,   275,   375,
     376,    -1,    -1,    -1,    -1,    -1,   382,    -1,   285,    -1,
     386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,   404,    -1,
     264,    -1,  2717,    -1,   311,    -1,    -1,   413,     3,    -1,
       5,    -1,    -1,    -1,    -1,    10,   422,   324,    -1,    -1,
      -1,   427,   428,    18,    -1,   431,    -1,   433,    -1,    -1,
      -1,    -1,    -1,    -1,   440,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,   350,   351,    -1,    -1,   453,    -1,    -1,
      -1,    -1,    -1,    -1,   361,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   471,    61,    -1,   375,   376,
      -1,   477,    -1,    -1,    -1,   382,   482,    72,    -1,   386,
      75,    -1,    -1,    -1,    -1,    -1,    -1,   394,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,   404,    -1,    -1,
      -1,    -1,    -1,   509,    -1,    -1,   413,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   378,   422,    -1,   112,    -1,    -1,
     427,   428,    -1,    -1,   431,   120,   433,   122,    -1,    -1,
      -1,    -1,    -1,   440,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
      -1,    -1,    -1,    -1,   471,   429,   430,    -1,    -1,   164,
     477,    -1,    -1,    -1,   169,   482,    -1,   441,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
     195,    -1,   509,    -1,    -1,    -1,    -1,   202,   472,    -1,
     205,   206,    -1,   100,    -1,    -1,    -1,    -1,    -1,   483,
     215,    -1,    -1,    -1,    -1,    -1,    -1,   222,   492,   224,
      -1,    -1,   227,   497,    -1,    -1,    -1,   501,    -1,    -1,
     504,   505,   506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    -1,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   350,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   361,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,
      -1,   376,    -1,    -1,    -1,    -1,    -1,   382,    -1,     6,
      -1,   386,     9,    -1,    -1,    -1,    -1,    -1,    -1,   394,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,   404,
      -1,    -1,    -1,    -1,    -1,    -1,   303,   170,   413,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,    -1,    -1,
      -1,    -1,   427,   428,    -1,    -1,   431,    -1,   433,   192,
     193,   194,    -1,    -1,    -1,   440,    -1,    -1,   201,    -1,
      -1,    -1,    -1,    -1,   207,   208,    -1,    -1,   453,   212,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   471,    -1,    -1,   232,
      -1,    -1,   477,   100,    -1,    -1,    -1,   482,    -1,    -1,
      -1,   378,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,   266,   509,    -1,    -1,    -1,   271,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,   284,    -1,    12,    13,    14,   153,   290,    -1,    -1,
     293,    20,   429,   430,    -1,    -1,    -1,    -1,   301,    -1,
     303,    -1,    -1,    -1,   441,   308,    -1,    -1,    -1,    -1,
     313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,   332,
      -1,    -1,    -1,    -1,   201,   472,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   347,   212,   483,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,   492,    -1,    -1,    -1,    -1,
     497,    -1,    -1,    -1,   501,    -1,    -1,   504,   505,   506,
      -1,   100,    -1,    -1,    -1,   378,    -1,    -1,   245,    -1,
      -1,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,
      -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,   429,   430,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,   450,    -1,   452,
      -1,   454,    -1,    -1,   457,   322,   459,   460,   461,   462,
      -1,   464,   465,   192,   193,   194,    -1,    -1,    -1,   472,
      -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,   208,
     347,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,   492,
      -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    83,    -1,
      -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,   512,
      -1,   378,    -1,    -1,    -1,   100,   245,   246,   247,    -1,
      -1,    -1,   251,    -1,   253,    -1,    -1,   256,   113,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,
      -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     417,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,
      -1,   290,   429,   430,   293,     6,    -1,    -1,     9,    -1,
      -1,    -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,   455,    -1,
      -1,    -1,    -1,   322,    -1,   462,    -1,    -1,    -1,   466,
      -1,     6,    -1,   332,     9,   472,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,   347,    -1,
      -1,    -1,    -1,    -1,    -1,   492,    -1,   212,    -1,    -1,
     497,    -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,   506,
      -1,    -1,    83,   228,    -1,   512,    -1,    -1,    -1,   378,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,   100,
     245,    -1,    -1,    -1,    -1,    -1,   251,    -1,   253,    -1,
      -1,   256,    -1,   258,   259,   260,    -1,    -1,    83,   264,
      -1,   266,    -1,    -1,    -1,    -1,   271,    -1,   417,    -1,
      95,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
     429,   430,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,
      -1,   450,    -1,   452,    -1,   454,    -1,    -1,   457,    -1,
     459,   460,   461,   462,    -1,   464,   465,   322,    -1,    -1,
      -1,    -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,   347,   492,    -1,    -1,    -1,    -1,   497,    -1,
      -1,   212,    -1,    -1,    -1,   504,    -1,   506,    -1,    -1,
      -1,    83,    -1,   512,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,   378,    -1,    -1,   201,    -1,   100,    -1,
      -1,    -1,    -1,    -1,   245,    -1,    -1,   212,    -1,    -1,
     251,   113,   253,    -1,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,
     271,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,   429,   430,   251,    -1,   253,    -1,
      -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,   266,   303,    -1,    -1,    -1,   271,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,    -1,
      -1,   322,    -1,    -1,    -1,    -1,    -1,   472,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,   303,   201,
      -1,    -1,    -1,    -1,    -1,    -1,   347,   492,    -1,    -1,
     212,    -1,   497,    -1,    -1,    -1,    -1,   322,    -1,   504,
      -1,   506,    -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   378,    -1,    -1,
      -1,    -1,   347,   245,    -1,    -1,    -1,    -1,    -1,   251,
      -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,   271,
      -1,    -1,    -1,   378,    -1,    -1,   417,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,   429,   430,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,     6,
     322,   462,     9,    -1,   429,   430,    -1,    -1,    -1,    -1,
      -1,   472,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,
      -1,   492,    -1,   100,    -1,    -1,   497,   462,    83,    -1,
      -1,    -1,    -1,   504,    -1,   506,    -1,   472,    -1,    -1,
      95,   512,    -1,    -1,    83,   100,   378,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,    -1,    -1,
      -1,   100,   497,    -1,    -1,    -1,    83,    -1,    -1,   504,
      -1,   506,    -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   417,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
     462,    -1,    -1,    -1,    -1,   212,    -1,   192,   193,   194,
     472,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,   166,
      -1,    -1,    -1,   192,   193,   194,    -1,   212,    -1,    -1,
     492,    -1,   201,    -1,    -1,   497,    -1,    -1,    -1,    -1,
      -1,    -1,   504,   212,   506,   192,   193,   194,    -1,   256,
     512,   258,   259,   260,   201,    -1,    -1,   264,    -1,   266,
     245,    -1,    -1,    -1,    -1,   212,   251,    -1,   253,    -1,
      -1,   256,    -1,   258,   259,   260,   245,    -1,    -1,   264,
      -1,   266,   251,    -1,   253,    -1,   271,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,   303,   266,   245,    -1,
      -1,    -1,   271,    -1,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,    -1,   264,   303,   266,
      -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,   322,    -1,    -1,
     347,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,    -1,   303,    -1,    -1,    -1,
      -1,    -1,   347,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,   378,    -1,    -1,    -1,   322,    -1,    -1,   347,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   378,
     417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,   429,   430,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   378,   417,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    83,    -1,   429,   430,    -1,    -1,   417,    -1,
      -1,    -1,    -1,    -1,    -1,   462,    -1,    -1,    83,   100,
     429,   430,    -1,    -1,    -1,   472,    -1,    -1,    -1,    -1,
     417,    -1,    -1,    -1,    -1,   100,    -1,   462,    -1,   448,
      -1,     6,   429,   430,     9,   492,    -1,   472,    -1,    -1,
     497,    -1,    -1,   462,    -1,    -1,    -1,   504,    -1,   506,
      -1,    -1,    -1,   472,    -1,   512,    -1,   492,    -1,    -1,
      -1,    -1,   497,    -1,    -1,   462,    -1,    -1,    -1,   504,
      -1,   506,    -1,   492,    -1,   472,    -1,   512,   497,   192,
     193,   194,    -1,    -1,    -1,   504,    -1,   506,   201,    -1,
      -1,    -1,    -1,   512,    -1,   492,    -1,    -1,    -1,   212,
     497,   192,   193,   194,    -1,   196,    -1,   504,    83,   506,
     201,    -1,    -1,    -1,    -1,   512,    -1,   192,   193,   194,
      -1,   212,    -1,    -1,    -1,   100,   201,    -1,    -1,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,   212,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,   266,   245,    -1,    -1,    -1,   271,    -1,
     251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,
     245,    -1,    -1,   264,    -1,   266,   251,    -1,   253,    -1,
     271,   256,    -1,   258,   259,   260,    -1,    -1,    83,   264,
     303,   266,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,   322,
      -1,    -1,   303,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,     6,    -1,   201,     9,   303,    -1,
      -1,   322,    -1,    -1,   347,    -1,    -1,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,   322,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,
     245,    -1,   347,    -1,    -1,    -1,   251,    -1,   253,    -1,
      -1,   256,    -1,   258,   259,   260,    -1,   378,    -1,   264,
      -1,   266,    -1,    -1,    -1,    -1,   271,   192,   193,   194,
      -1,    83,    -1,   378,   417,    -1,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,   430,   100,    -1,
      -1,    -1,    -1,    83,    -1,    -1,   417,    -1,   303,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   411,    -1,   429,   430,
     100,    -1,   417,    -1,    -1,    -1,    -1,   322,    -1,   462,
      -1,    -1,    -1,    -1,   429,   430,    -1,    -1,    -1,   472,
      -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,   462,   347,   486,    -1,    -1,    -1,    -1,    -1,   492,
      -1,   472,    -1,    -1,   497,    -1,    -1,   462,    -1,    -1,
      -1,   504,    -1,   506,    -1,    -1,    -1,   472,    -1,   512,
      -1,   492,    -1,   378,    -1,    -1,   497,    -1,   303,    -1,
     192,   193,   194,   504,    -1,   506,    -1,   492,    -1,   201,
      -1,   512,   497,    -1,    -1,    -1,    -1,    -1,    -1,   504,
     212,   506,   192,   193,   194,    -1,    -1,   512,    -1,    -1,
      -1,   201,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   212,    -1,   429,   430,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,   251,
      -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,   378,   266,   245,    -1,   462,    -1,   271,
      -1,   251,    -1,   253,    -1,    -1,   256,   472,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,
      -1,   271,    -1,    -1,    -1,    -1,    -1,   492,    -1,    -1,
      -1,   303,   497,    -1,    -1,    -1,    -1,    -1,    -1,   504,
      -1,   506,    -1,    -1,   429,   430,    -1,   512,    -1,    -1,
     322,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,    -1,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   472,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,   347,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   378,   492,    -1,    -1,
      -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,   504,
      -1,   506,    -1,    -1,    -1,     9,    32,    -1,   378,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,   417,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,   429,
     430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     462,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
     472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   462,    -1,   120,    -1,   100,    -1,    -1,    -1,
     492,    -1,   472,    -1,    -1,   497,    -1,    -1,    -1,    -1,
      -1,    -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,
     512,    -1,   492,    -1,    -1,    -1,    -1,   497,    -1,    -1,
      -1,    -1,    -1,    -1,   504,   161,   506,    -1,    -1,    -1,
      -1,    -1,   512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
     186,   187,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,
     196,    -1,   198,    -1,    -1,    -1,    -1,    -1,   204,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,   192,   193,
     194,    -1,    -1,   219,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,   212,   235,
      -1,    -1,    -1,    -1,    -1,   241,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,   277,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,   266,    -1,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   318,   319,    -1,    -1,    -1,    -1,    -1,   303,
      -1,   327,    -1,    74,   330,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,   343,    -1,   345,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   347,    -1,    -1,   372,    -1,    -1,   120,
      -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     396,    -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,
     406,    -1,   408,   409,   410,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,    -1,   176,    -1,    -1,   179,   180,
     181,   182,   183,   417,    -1,   186,   187,    -1,    -1,    -1,
      -1,    -1,   448,    -1,    -1,   429,   430,   453,    -1,    -1,
      -1,    -1,   458,   204,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,   219,   475,
      -1,    -1,    -1,   479,   480,   481,    -1,    -1,   462,    -1,
      -1,   232,    -1,    21,   235,    -1,    -1,   493,   472,    -1,
     241,    -1,    -1,   499,   500,    -1,    -1,    -1,    36,    -1,
     506,    39,    40,    41,    42,    43,    44,    45,   492,    -1,
      -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,
     504,    -1,   506,    -1,    -1,    -1,   277,    -1,   512,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,   330,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   356,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   364,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,   180,   181,   182,   183,    -1,    -1,   186,   187,
      -1,    -1,    -1,    -1,    -1,   406,    -1,   408,   409,   410,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   219,    -1,    -1,   435,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    -1,    -1,   235,    -1,    65,
      -1,    67,   453,   241,    -1,    -1,    -1,    -1,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,   470,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,   480,
     481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   277,
      -1,    -1,   493,    -1,    -1,    -1,    -1,    -1,    -1,   500,
      -1,    -1,    -1,    -1,   120,   506,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,   305,    35,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,    -1,   330,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   179,   180,   181,   182,   183,   356,    -1,
     186,   187,    -1,    -1,   190,    92,   364,    -1,    -1,    -1,
     196,    -1,   198,    -1,    -1,    -1,    -1,    -1,   204,    -1,
      -1,    -1,    -1,    -1,   111,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,   406,   235,
     408,   409,   410,    -1,    -1,    -1,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,    -1,   265,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   277,    -1,    -1,    -1,   453,    -1,   100,    -1,    -1,
      -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   198,   470,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,   479,   480,   481,   211,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   318,   319,    -1,   493,    -1,    -1,    -1,    -1,
      -1,   327,   500,    -1,   330,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   243,   343,    -1,   345,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,   265,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,    -1,   192,
     193,   194,    -1,   379,    -1,    -1,    -1,    -1,   201,    -1,
     287,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
     396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     406,    -1,   408,   409,   410,    -1,    -1,    -1,    -1,    -1,
      -1,   318,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,   345,   346,
      -1,   264,   448,   266,    -1,    -1,    -1,   453,    -1,    -1,
      -1,    74,   458,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,   372,    -1,    -1,    -1,   475,
      -1,    -1,   379,   479,   480,   481,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,    -1,   392,    -1,   493,    -1,   396,
      -1,    -1,    -1,   499,   500,    -1,    -1,   120,    -1,   322,
      -1,    -1,    -1,    83,   411,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,
     437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   446,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   378,   179,   180,   181,   182,
     183,    -1,    -1,   186,   187,    -1,    -1,    -1,   475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   485,    -1,
      -1,    83,    -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   417,    -1,   219,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,   430,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,    -1,   450,    -1,    -1,
      -1,    -1,   212,    -1,    -1,    -1,    -1,   460,    -1,   462,
      -1,   464,   465,    -1,    -1,    -1,    -1,    -1,    -1,   472,
      -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,   492,
      -1,   251,    -1,   253,   497,    -1,   256,    -1,   258,   259,
     260,   504,    -1,   506,   264,    -1,   266,    -1,    -1,   512,
     192,   193,   194,    -1,    -1,    -1,   319,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,    -1,    -1,
     212,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
     343,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,   245,    -1,    -1,    -1,    -1,    -1,   251,
      -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,   266,    -1,    -1,   347,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   408,   409,   410,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,   378,    -1,
      -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,
      -1,    -1,   212,    -1,    -1,   347,    -1,    -1,    -1,   429,
     430,    -1,    -1,    -1,    -1,    -1,   479,   480,   481,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     450,    -1,    -1,    -1,    -1,   245,   378,    -1,    -1,    -1,
     460,   251,   462,   253,   464,   465,   256,    -1,   258,   259,
     260,    -1,   472,    -1,   264,    -1,   266,    -1,    -1,    -1,
     192,   193,   194,    -1,    83,    -1,    -1,    -1,    -1,   201,
      -1,    -1,   492,    -1,    -1,   417,    -1,   497,    -1,    -1,
     212,   100,    -1,    -1,   504,    -1,   506,   429,   430,    -1,
      -1,    -1,   512,   303,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   450,    -1,
      -1,    -1,   322,   245,    -1,    -1,    -1,    -1,   460,   251,
     462,   253,   464,   465,   256,    -1,   258,   259,   260,    -1,
     472,    -1,   264,    -1,   266,    -1,    -1,   347,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     492,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,
      -1,    83,   504,    -1,   506,    -1,    -1,    -1,   378,    -1,
     512,   303,    -1,   192,   193,   194,    -1,    -1,   100,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,   429,
     430,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,   378,   266,    -1,    -1,
     460,    -1,   462,    -1,   464,   465,    -1,    -1,    -1,    -1,
      -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,   492,    -1,   303,   417,    -1,   497,    -1,    -1,
     212,    -1,    -1,    -1,   504,    -1,   506,   429,   430,    -1,
      -1,    -1,   512,   322,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   347,   251,
     462,   253,   464,    -1,   256,    -1,   258,   259,   260,    -1,
     472,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   374,    -1,    -1,    -1,   378,
     492,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,
      -1,    -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,
     512,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,
     322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   462,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   472,    -1,    -1,   378,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   492,    -1,    -1,    -1,    -1,   497,    -1,
      -1,    -1,    -1,    -1,    -1,   504,    -1,   506,    -1,    -1,
      -1,    -1,    -1,   512,    -1,   417,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     462,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     492,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,
      -1,    -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,
     512
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   515,   516,     0,   200,   341,   517,   518,   519,   520,
     521,   522,   524,   534,   536,   453,   453,   519,   154,   530,
     542,   530,   530,   256,   342,   537,   537,   123,    85,   543,
     523,   525,   534,   139,   528,   529,    26,   538,   538,   453,
     395,   544,   143,   523,   526,   527,   530,   537,   256,   453,
     535,   453,    11,    59,    97,    99,   101,   109,   165,   226,
     257,   301,   304,   370,   391,   416,   418,   434,   506,   545,
     546,   550,   561,   569,   570,   571,   572,   573,   578,   587,
     589,   594,   597,   598,   600,   601,   602,   603,   604,   605,
     606,   537,   525,   453,   232,   539,  1274,   506,  1194,  1194,
     424,   406,  1292,  1274,  1274,  1274,   395,  1194,   406,   453,
     453,  1274,   453,   453,    58,  1262,   574,     1,   453,   572,
     218,   588,   174,   607,   453,   527,   453,    73,   172,   355,
     458,   540,   541,   579,  1274,  1274,  1274,   506,  1189,  1220,
      69,  1189,   453,  1274,  1274,   551,   562,  1189,   547,   506,
     590,   591,   592,  1195,   256,   307,   309,   575,   577,  1039,
    1223,  1274,   453,   506,   453,   609,   541,   340,  1289,  1274,
     212,   256,   266,   347,   417,   462,   512,   595,   596,  1226,
    1189,   256,   218,   306,  1312,   256,   470,    57,    64,   268,
     340,   397,   402,   506,   552,   553,   554,   555,   556,   557,
     558,   560,  1261,  1322,   199,   563,   564,   565,   548,   560,
     591,    22,   232,  1195,  1275,  1039,   232,   424,  1286,  1274,
      97,  1194,   234,   398,   608,   610,    28,   127,   212,   256,
     266,   280,   347,   417,   420,   421,   512,   580,   581,   582,
     585,   596,   444,   505,   599,  1305,  1220,   401,   402,   411,
      64,  1274,   453,   554,   453,   506,   553,    60,  1274,     9,
     371,   498,   566,   568,     1,   453,   565,   549,  1305,   256,
     593,  1224,  1286,   232,  1194,  1194,   576,   577,   453,     1,
     290,   312,  1247,   274,   389,   642,   643,   644,   645,   647,
     582,    17,   444,  1226,   328,  1274,   402,  1223,   453,  1274,
     506,  1190,   229,    26,   567,   229,   371,   453,   453,   108,
    1224,  1194,   453,   312,  1194,   648,   352,   413,   414,   646,
     531,     1,   453,   644,   583,   585,   256,  1223,   257,   436,
     496,   559,  1190,   256,   272,   611,   456,  1265,    23,  1256,
     103,   652,   453,   584,   585,    58,   507,  1316,   612,   439,
    1298,   189,  1267,   123,   456,   653,    17,     4,    19,    29,
      64,   220,   252,   315,   320,   352,   360,   373,   402,   405,
     413,   453,   456,   613,   614,   620,   622,   624,   625,   626,
     627,   628,   631,   632,   633,   634,   635,   637,   638,   640,
    1290,  1306,    87,  1263,   506,  1179,  1180,   453,   395,   654,
     585,   272,  1281,   352,  1290,   448,   499,  1302,   402,   403,
    1274,  1261,   114,   237,  1276,  1276,   287,   639,  1223,  1305,
     424,   262,    39,  1259,  1274,   649,   650,  1180,  1180,   453,
     173,   393,   532,   655,   656,   658,  1274,  1276,   126,   172,
     617,   360,   632,  1274,  1274,  1274,  1274,  1256,     9,   287,
     350,   641,  1274,  1281,   403,   506,   650,   331,   651,   508,
     683,   685,   686,     1,  1180,   126,   348,   403,   621,  1274,
     118,   119,   120,   238,   252,   335,   348,   439,   615,   616,
     256,  1189,  1193,   420,   636,  1189,  1189,   316,  1287,  1287,
     310,  1189,  1274,  1223,   395,   261,   739,   687,   688,   690,
     700,  1239,   453,   657,   636,   256,   619,  1220,   619,     7,
     619,   619,   256,   618,  1220,   415,   454,    33,   168,   267,
     629,   453,   395,   255,   741,   453,   688,   453,     1,   176,
     506,   691,   692,   506,   659,   125,   505,  1241,  1321,  1265,
    1274,  1188,  1189,   505,   630,   630,   684,   453,   395,   367,
     743,   453,   453,   689,    86,    47,    63,   103,   239,   250,
     352,   353,   367,   369,   453,   500,   660,   661,   663,   667,
     668,   671,   672,   678,   679,   680,   681,  1274,   125,   433,
     623,  1188,  1189,   262,   386,   685,   740,   453,   395,   390,
     788,   702,   693,  1274,  1263,  1274,   352,   354,  1317,  1317,
    1274,  1263,  1274,  1281,  1274,    22,  1255,   306,   682,  1194,
     172,   204,   503,   309,   685,   742,   453,   395,   533,    21,
      36,    39,    40,    41,    42,    43,    44,    45,    74,    76,
      77,    78,    79,    80,    81,    82,   120,   179,   180,   181,
     182,   183,   186,   187,   219,   235,   277,   305,   319,   327,
     330,   343,   356,   364,   406,   408,   409,   410,   435,   479,
     480,   481,   493,   500,   703,   704,   705,   707,   708,   709,
     710,   711,   712,   713,   716,   728,   729,   730,   731,   732,
     737,   738,  1274,  1294,    26,   196,   701,  1257,   204,  1223,
     506,  1274,  1255,   506,  1191,  1192,   308,   419,  1313,  1193,
    1223,   501,  1274,   175,   213,   506,   669,  1194,     9,   417,
     512,   586,   274,   352,   354,  1315,   685,   744,   453,   337,
     802,   805,   244,   301,   407,   478,  1293,   478,  1293,   478,
    1293,   478,  1293,   478,  1293,   503,  1303,   385,  1291,   126,
    1223,  1217,  1220,  1220,   232,   242,   385,  1277,  1274,  1275,
     172,   204,   241,   470,   506,     9,    50,   212,   244,   245,
     256,   266,   347,   417,   462,   512,   694,  1227,  1228,  1229,
     448,   666,  1192,   254,  1280,   448,  1262,   218,  1269,   506,
    1274,  1274,  1229,  1315,   745,   789,   123,   828,   829,   512,
      53,   720,   448,   717,   464,  1221,  1222,   444,   710,   734,
     735,  1227,    26,   706,   401,  1251,  1251,  1229,   306,  1284,
       1,    40,    41,    42,    43,    44,   179,   180,   181,   182,
     183,   184,   185,   330,   343,   695,   696,   697,   698,   699,
     711,   712,  1217,   695,   449,  1223,    58,   354,   662,   673,
    1223,   411,  1295,   256,   670,  1220,   670,   349,   746,   690,
     700,   790,   791,   792,    56,   499,   806,     1,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   153,   164,   169,   195,   202,   205,   206,   215,   222,
     224,   227,   269,   273,   275,   285,   311,   324,   350,   351,
     361,   375,   376,   382,   386,   394,   404,   413,   422,   427,
     428,   431,   433,   440,   453,   471,   477,   482,   509,   830,
     831,   847,   852,   856,   861,   876,   879,   883,   887,   888,
     889,   894,   908,   912,   915,   929,   933,   936,   939,   943,
     944,   948,   958,   961,   978,   980,   983,   987,   993,  1005,
    1013,  1014,  1017,  1018,  1022,  1027,  1028,  1036,  1051,  1061,
    1070,  1075,  1082,  1086,  1088,  1091,  1094,  1098,  1125,   830,
    1269,   196,   718,  1223,   447,  1300,    83,   100,   192,   193,
     194,   201,   245,   251,   253,   258,   259,   260,   264,   303,
     322,   378,   429,   430,   460,   464,   465,   472,   492,   497,
     504,  1167,  1169,  1170,  1171,  1172,  1173,  1174,  1202,  1216,
    1217,  1228,  1230,  1231,  1232,  1233,   464,  1222,  1220,   733,
     735,   444,   256,  1261,   695,   453,  1229,    48,   467,   674,
     675,   676,   677,  1305,  1262,   196,   665,  1268,   506,  1181,
       1,   691,   792,   453,   808,   807,   377,   814,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   129,   131,   132,   133,   134,   135,   136,   137,   138,
     140,   141,   142,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   164,   169,   195,   202,   205,   206,   215,
     222,   224,   227,   269,   273,   275,   285,   311,   324,   350,
     361,   376,   382,   386,   394,   404,   413,   422,   427,   428,
     431,   433,   440,   453,   471,   477,   482,   509,  1252,   832,
     848,   853,   857,   862,   877,   880,   884,   890,   895,   909,
     913,   916,   930,   934,   937,   940,   203,   377,   871,   932,
     945,   949,   959,   962,   979,   981,   984,   400,   988,   994,
    1006,  1015,  1019,  1023,  1029,  1037,  1052,  1062,   256,   347,
     388,   417,   512,  1074,  1076,  1083,   336,  1087,  1089,   817,
    1092,  1095,  1099,  1126,   506,  1223,   717,   115,   719,   464,
    1235,  1217,  1228,  1230,  1312,  1312,   464,   464,   464,   464,
    1312,  1173,  1169,  1173,   464,  1235,    71,   399,   450,  1168,
     451,   460,   465,   452,   461,   170,   464,  1234,   464,   464,
    1169,   503,   736,  1304,  1227,  1193,  1193,   188,   666,  1223,
     747,   453,   793,   453,    49,   809,   810,   811,  1260,   809,
     506,   453,   308,   833,   834,  1216,     6,    95,   245,   271,
     849,  1174,  1198,  1199,  1216,  1227,  1230,   854,  1169,  1216,
     256,   858,   859,  1185,  1186,  1187,  1220,   271,   423,   425,
     863,   864,   256,   878,  1207,  1216,   881,  1180,     6,   885,
    1175,  1176,  1197,  1218,  1219,  1220,  1228,   456,   891,  1180,
     256,   896,   897,   899,  1198,  1199,  1207,  1216,   910,  1199,
     256,   914,   455,   466,   917,   918,   919,  1157,  1158,  1159,
     199,   323,   324,   340,   395,   931,   935,  1196,  1197,   938,
    1220,   448,   941,  1301,  1199,  1156,  1157,   950,  1196,   960,
    1181,   963,   964,  1216,  1227,  1230,  1053,  1214,  1215,  1220,
      95,   982,  1199,   985,  1199,   171,   225,   233,   317,   989,
     990,   191,   256,   995,   999,  1000,  1001,  1185,  1208,  1216,
    1220,  1230,  1305,  1007,  1180,  1016,  1177,  1220,  1020,  1180,
    1024,  1177,     9,  1030,  1178,  1220,   154,   271,  1038,  1041,
    1042,  1045,  1046,  1047,  1048,  1049,  1050,  1182,  1183,  1196,
    1213,  1215,  1220,  1053,  1063,  1180,  1071,   113,  1077,  1078,
    1079,  1199,    95,  1084,  1198,  1090,  1181,   453,   506,   818,
     819,   822,   823,   828,  1093,  1216,  1096,  1180,  1100,  1216,
    1127,  1177,   223,   721,   309,  1285,   722,   723,   450,  1167,
    1169,   506,   506,  1169,  1238,  1238,  1238,  1201,  1216,  1228,
    1230,  1237,   506,   450,  1201,  1236,  1169,   450,  1169,  1170,
    1170,  1171,  1171,  1171,  1169,  1201,  1167,   404,   455,    30,
    1258,  1262,     1,   748,   794,   810,   411,   478,   812,   358,
     500,   803,   131,   846,    30,   836,   837,  1258,   196,  1284,
    1216,  1217,  1228,  1230,   132,   851,   448,   850,  1199,    58,
     223,  1242,   859,   448,  1312,   133,   875,   256,  1208,  1207,
    1180,   357,   476,   882,  1305,  1318,  1284,   134,   886,   160,
     454,  1176,  1309,   387,  1248,  1221,  1222,   892,  1180,   135,
     893,  1290,   136,   907,   166,   898,  1136,  1137,   486,   900,
     505,   837,   487,   488,   489,   490,   137,   911,    49,   228,
     499,   865,   138,   928,    17,   503,   920,   921,   922,   924,
      12,    13,    14,    20,   160,   170,   207,   208,   246,   247,
     284,   290,   293,   301,   308,   313,   332,   450,   452,   454,
     457,   459,   460,   461,   464,   465,  1160,  1161,  1162,  1163,
    1164,  1165,  1166,  1199,   102,   932,  1197,  1184,   443,  1299,
     951,  1305,  1181,    93,   366,   438,   965,   966,   968,   969,
    1055,   464,  1221,  1199,   448,   141,   986,    49,   990,   405,
     991,  1000,   142,   453,   996,   998,   483,   501,   444,   447,
     441,   144,  1012,   285,   334,  1245,   196,  1128,   145,  1021,
    1290,   146,  1026,  1128,  1178,   147,  1035,   501,  1031,  1205,
    1216,  1228,  1048,  1050,  1196,   448,  1183,   124,   448,   484,
    1040,    31,  1221,   148,  1069,   178,   237,   240,  1065,   871,
    1072,  1305,  1260,   149,  1081,   228,  1079,  1216,   150,  1085,
     196,  1181,   395,   453,   453,   196,   352,   354,  1097,   151,
    1109,   113,  1101,   152,  1132,  1128,   722,  1189,   220,   725,
      27,   116,   724,   450,  1168,   450,   450,   450,  1168,   450,
    1168,   450,   450,   451,   450,   450,   448,  1274,  1193,   115,
     664,   453,    62,    90,    91,   321,   453,   749,   750,   753,
    1274,  1330,    32,    35,    38,    45,    46,    65,    67,   161,
     190,   196,   198,   211,   243,   252,   265,   305,   318,   345,
     372,   379,   396,   448,   458,   475,   499,   708,   709,   713,
     728,   730,   732,   795,   800,   801,  1274,  1307,  1274,   411,
     312,   813,   110,   815,  1205,   197,   840,   252,   331,   838,
     839,  1307,    24,    25,    66,    68,    70,   104,   105,   106,
     154,   156,   163,   166,   252,   254,   445,   495,   506,   835,
    1183,  1308,   153,   340,  1203,  1217,   448,     6,  1175,  1199,
    1220,  1228,   203,   223,  1243,   377,   855,   339,   860,  1187,
     865,   882,   262,   287,  1267,  1217,  1169,   272,  1249,  1222,
    1180,   231,  1152,  1153,   825,   826,   899,  1199,   294,  1138,
      97,   335,   506,  1183,   298,   904,    35,    38,    45,    46,
      92,   161,   190,   211,   265,   318,   379,   392,   411,   475,
     905,   906,   486,   901,  1136,  1136,  1136,  1136,  1199,  1175,
    1199,   866,   919,    21,   455,   466,   925,   926,  1158,   503,
     922,   923,   503,   825,  1301,   232,  1161,   115,   942,  1185,
     129,   825,   946,     9,    12,    15,    16,   277,   278,   301,
     302,   952,   956,   176,  1205,     9,    58,   178,   241,   470,
     972,   973,   974,   967,   968,  1057,  1285,  1321,   448,  1196,
    1175,  1199,   991,  1305,  1179,   825,   169,  1002,  1156,  1003,
    1004,  1216,  1185,     8,    37,  1130,  1290,  1212,  1216,  1227,
    1230,   228,  1008,  1025,  1305,   130,  1032,  1216,  1032,   448,
     448,  1039,   153,   455,   466,  1199,    49,    38,    46,   211,
     243,   265,   318,   379,   475,  1043,  1044,  1274,  1064,  1305,
    1199,   162,   289,   411,  1199,  1216,   196,  1175,  1199,   824,
    1223,  1205,  1260,   228,  1104,  1129,  1130,   725,  1260,  1276,
    1189,  1234,  1234,  1234,  1201,   241,   470,  1234,   450,  1169,
    1234,  1234,  1227,  1285,  1274,  1274,  1255,   248,   249,  1279,
     762,   204,   177,   751,  1266,  1274,   252,   390,   157,   159,
    1274,  1212,   299,  1282,  1223,    57,  1216,  1216,   204,  1282,
      32,   111,  1223,  1274,   506,   453,   804,   272,   841,  1282,
    1282,   839,   838,  1282,   166,  1133,  1134,   511,   510,  1205,
    1133,   237,   424,   299,   276,   256,  1204,  1217,  1216,  1284,
     412,  1139,  1140,  1221,  1222,  1175,   448,  1244,   855,  1197,
     448,  1185,   870,   871,   381,   363,  1139,  1274,   825,   295,
    1154,   827,   825,  1136,  1274,   252,   390,   157,   159,  1274,
     124,   484,  1274,   906,  1136,    97,    98,   902,   841,   203,
    1139,   203,   867,   868,   869,  1260,    17,   444,   927,   316,
     925,  1285,   825,   129,   140,   947,  1301,   366,   953,  1301,
     448,    49,   973,   975,  1205,     9,    58,   241,   470,   970,
     971,  1205,  1058,  1306,   724,   218,   314,  1270,  1196,  1139,
     203,  1179,   641,   380,   992,  1305,   142,   997,     8,   196,
    1008,  1216,   130,  1145,  1147,  1152,   262,   287,   825,   503,
     503,  1033,  1034,  1205,  1204,  1199,  1039,  1039,  1039,  1039,
    1039,  1039,  1039,  1039,  1044,   290,   293,  1066,  1067,  1068,
    1162,  1246,  1152,   244,   411,  1320,   424,  1297,  1297,  1080,
    1305,  1216,  1139,   203,   453,   448,     9,  1102,  1103,  1240,
    1105,  1216,  1080,  1105,  1025,     7,  1253,   506,   726,   727,
    1274,   450,  1189,  1207,  1274,  1255,   256,   754,  1225,   690,
     763,   752,  1216,   512,  1209,  1213,  1223,  1209,  1274,  1300,
    1274,  1274,    32,  1223,   816,   817,  1274,   505,   842,  1209,
    1209,  1209,   825,   294,  1135,  1133,  1248,  1217,   825,   297,
    1141,  1222,  1139,  1206,  1216,  1227,   166,   463,   873,  1311,
       6,   228,   308,   462,   872,  1273,    34,   281,   282,   283,
     344,   468,   469,   473,  1250,   825,   828,  1209,  1209,  1155,
    1211,  1213,  1223,  1155,  1209,   505,   903,  1175,  1176,  1175,
    1176,   868,   308,   812,    88,   358,   500,   926,  1157,   825,
    1216,   825,   500,   954,   955,   956,   957,  1299,   500,  1206,
    1205,    49,   976,   971,   189,   976,  1054,  1274,  1276,   314,
    1175,   992,   262,   287,  1004,  1199,   217,  1009,  1305,   825,
     291,  1148,   262,  1157,  1156,  1033,  1162,  1216,  1163,  1164,
    1165,  1166,  1169,  1073,  1199,  1073,   463,  1142,  1143,   330,
    1248,  1175,   820,  1206,   313,  1205,   114,  1106,   438,  1108,
     158,   292,  1131,  1149,  1150,  1151,  1152,   321,  1183,  1209,
     727,  1188,   755,   252,   254,  1314,   506,   691,  1216,   270,
     329,   460,   465,   796,   797,   798,  1207,   796,   797,   799,
     817,    47,    32,    35,    38,    46,    92,   111,   190,   198,
     211,   243,   263,   265,   287,   288,   318,   345,   346,   372,
     379,   392,   396,   411,   437,   446,   475,   485,   491,   843,
     844,   845,  1133,   825,  1139,   825,   294,   874,   825,  1284,
    1216,   252,   254,  1319,   905,  1139,   362,  1139,   362,  1199,
     955,   103,  1264,  1301,   976,   976,  1206,     8,    37,   977,
     225,   499,  1059,  1189,  1056,  1139,   381,    49,   262,   237,
    1010,   216,   236,   262,   287,   502,   825,   825,   825,   825,
     296,  1144,  1274,  1139,  1139,   494,   821,  1110,  1103,  1269,
      96,  1107,  1269,  1142,   825,   825,  1151,   252,   254,  1278,
     178,   188,   210,   240,   756,   757,   758,   759,   760,   761,
    1225,   764,  1209,  1209,   130,  1274,  1274,   845,    57,   411,
     124,   484,  1274,     8,  1254,   844,   825,  1216,  1176,  1176,
      49,   111,   976,   458,  1272,  1272,   337,  1179,   203,   317,
    1060,  1220,  1199,  1274,  1011,  1146,  1147,  1148,  1152,   262,
     262,   262,   825,  1216,  1111,   453,  1216,  1269,  1216,   107,
     117,  1323,  1274,  1274,    55,    90,  1323,  1324,  1308,   765,
     110,  1209,  1209,  1274,  1274,  1155,  1155,  1209,  1210,  1213,
    1225,  1139,  1139,  1199,  1199,  1199,  1274,  1179,   337,   483,
    1216,  1148,   128,   167,   204,  1112,  1113,  1114,  1116,  1120,
    1122,  1123,  1124,  1258,  1267,  1216,  1274,  1225,  1225,   210,
    1274,  1274,   209,   252,   254,   285,   305,   333,   415,   432,
     453,   474,   493,   501,   708,   713,   714,   728,   730,   732,
     766,   767,   771,   772,   775,   776,   777,   778,   779,   780,
     785,   786,   787,  1307,  1308,   453,  1207,  1209,   999,  1274,
    1156,    37,  1254,   340,   108,  1225,  1225,  1225,   221,  1271,
     299,   300,  1283,  1255,   209,  1223,   503,  1274,  1284,  1274,
    1274,  1216,   286,   329,   781,   782,  1225,   329,   783,   784,
    1225,  1283,  1255,   999,   368,   419,  1296,   130,   422,  1121,
    1285,  1275,  1274,   717,  1156,  1202,  1200,  1202,    54,    90,
     321,   325,   326,   367,   383,   384,   768,  1323,  1324,  1325,
    1326,  1327,  1328,  1329,   120,   196,  1223,   782,  1223,   784,
    1275,  1216,   162,   166,  1310,     9,  1117,  1118,  1186,   782,
    1300,  1248,   374,   773,  1202,   188,   188,   210,   188,   210,
     177,   769,  1216,   769,  1202,   337,  1288,   306,   338,   359,
    1119,  1118,   719,  1285,   313,   770,   770,    49,  1285,   306,
    1220,   426,   715,   177,   774,  1216,   321,  1202,   171,   225,
     233,   317,  1115,  1179,  1223
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
#line 1388 "parser.y"
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
#line 1399 "parser.y"
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
#line 1435 "parser.y"
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
#line 1490 "parser.y"
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
#line 1519 "parser.y"
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
#line 1552 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 1558 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 1570 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 1580 "parser.y"
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
#line 1611 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 1618 "parser.y"
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
#line 1654 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 1655 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 1664 "parser.y"
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
#line 1673 "parser.y"
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
#line 1687 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 1691 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 1701 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 1710 "parser.y"
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
#line 1735 "parser.y"
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
#line 1753 "parser.y"
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
#line 1766 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 1795 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 1802 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 1809 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 1816 "parser.y"
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
#line 1827 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 1831 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 1835 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 1839 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 1853 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 1858 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 1866 "parser.y"
    {
	yyerrok;
  }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 1878 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 1882 "parser.y"
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
#line 1903 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 1907 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 1914 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 1919 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 1930 "parser.y"
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
#line 1944 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 1975 "parser.y"
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
#line 2003 "parser.y"
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
#line 2013 "parser.y"
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
#line 2026 "parser.y"
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
#line 2042 "parser.y"
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
#line 2057 "parser.y"
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
#line 2077 "parser.y"
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
#line 2090 "parser.y"
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
#line 2101 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 2107 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 2113 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 2119 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 2125 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 2131 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 2141 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 2145 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 2152 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 2156 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 2160 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 2164 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 2171 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 2175 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 2181 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 2182 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 2183 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 2184 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 2185 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 2186 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 2190 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 2191 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 2199 "parser.y"
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
#line 2213 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 2217 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 2225 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 2232 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 2236 "parser.y"
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
#line 2247 "parser.y"
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
#line 2267 "parser.y"
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
#line 2275 "parser.y"
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
#line 2285 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 2286 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 2293 "parser.y"
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
#line 2313 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 2314 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 2319 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 2323 "parser.y"
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
#line 2344 "parser.y"
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
#line 2367 "parser.y"
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
#line 2448 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 2452 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 2461 "parser.y"
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
#line 2480 "parser.y"
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
#line 2496 "parser.y"
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
#line 2514 "parser.y"
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
#line 2532 "parser.y"
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
#line 2549 "parser.y"
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
#line 2566 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 2574 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 2583 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 2598 "parser.y"
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
#line 2615 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 2619 "parser.y"
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
#line 2653 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 2659 "parser.y"
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
#line 2669 "parser.y"
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
#line 2682 "parser.y"
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
#line 2695 "parser.y"
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
#line 2718 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 2725 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 2738 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 2750 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 2757 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 2758 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 2759 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 2767 "parser.y"
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
#line 2790 "parser.y"
    { }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 2793 "parser.y"
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 2798 "parser.y"
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 2808 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 2819 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 2834 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 2842 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 2847 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 2852 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 2861 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 2865 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 2881 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 2886 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 2891 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 2896 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 2907 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 2918 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 2928 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 2935 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 2936 "parser.y"
    { PENDING ("SPLIT KEYS"); }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 2937 "parser.y"
    { PENDING ("SPLIT KEYS"); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 2944 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 2955 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 2969 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 2976 "parser.y"
    { (yyval) = NULL; }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 2977 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 2978 "parser.y"
    { (yyval) = NULL; }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 2987 "parser.y"
    {
	yyerrok;
  }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 3006 "parser.y"
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
#line 3033 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 3034 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 3035 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 3036 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 3043 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 3048 "parser.y"
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
#line 3075 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 3084 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 3098 "parser.y"
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
#line 3117 "parser.y"
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
#line 3134 "parser.y"
    {
	yyerrok;
  }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 3141 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 3145 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 3156 "parser.y"
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
#line 3166 "parser.y"
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
#line 3196 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 3209 "parser.y"
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
#line 3229 "parser.y"
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
#line 3264 "parser.y"
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
#line 3295 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 3301 "parser.y"
    { (yyval) = NULL; }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 3302 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 3306 "parser.y"
    { (yyval) = NULL; }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 3307 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 3315 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 3326 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 3331 "parser.y"
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
#line 3354 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 3366 "parser.y"
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
#line 3394 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 3401 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 3408 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 3417 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 3429 "parser.y"
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
#line 3481 "parser.y"
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
#line 3501 "parser.y"
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
#line 3511 "parser.y"
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
#line 3551 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 3557 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 3566 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 3569 "parser.y"
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 3575 "parser.y"
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
#line 3595 "parser.y"
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
#line 3610 "parser.y"
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
#line 3630 "parser.y"
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
#line 3643 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 3650 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 3656 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 3662 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 3671 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 3680 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 3684 "parser.y"
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
#line 3695 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 3696 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 3697 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 3698 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 3703 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 3707 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 3711 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 3715 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 3719 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 3723 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 3727 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 3731 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 3735 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 3739 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 3743 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 3747 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 3751 "parser.y"
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
#line 3783 "parser.y"
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
#line 3809 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 3813 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 3821 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 3827 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 3855 "parser.y"
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
#line 3879 "parser.y"
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
#line 3906 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 3910 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 3919 "parser.y"
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
#line 3944 "parser.y"
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 3960 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 3964 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 3968 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 3972 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 3976 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 3980 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 3984 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 3988 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 3992 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 3996 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 4000 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 4004 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 4008 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 4013 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 4018 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 4022 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 4026 "parser.y"
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
#line 4034 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 4038 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 435:

/* Line 1806 of yacc.c  */
#line 4042 "parser.y"
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
#line 4050 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 437:

/* Line 1806 of yacc.c  */
#line 4054 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 438:

/* Line 1806 of yacc.c  */
#line 4058 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 4062 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 4066 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 441:

/* Line 1806 of yacc.c  */
#line 4070 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 4074 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 4078 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 4082 "parser.y"
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
#line 4090 "parser.y"
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
#line 4098 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 4102 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 4106 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 4110 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 4114 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 4118 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 4138 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 4144 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 458:

/* Line 1806 of yacc.c  */
#line 4157 "parser.y"
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
#line 4175 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 461:

/* Line 1806 of yacc.c  */
#line 4185 "parser.y"
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
#line 4206 "parser.y"
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
#line 4225 "parser.y"
    { (yyval) = NULL; }
    break;

  case 464:

/* Line 1806 of yacc.c  */
#line 4226 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 465:

/* Line 1806 of yacc.c  */
#line 4230 "parser.y"
    { (yyval) = NULL; }
    break;

  case 466:

/* Line 1806 of yacc.c  */
#line 4231 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 468:

/* Line 1806 of yacc.c  */
#line 4236 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 470:

/* Line 1806 of yacc.c  */
#line 4243 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 472:

/* Line 1806 of yacc.c  */
#line 4251 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 473:

/* Line 1806 of yacc.c  */
#line 4258 "parser.y"
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
#line 4281 "parser.y"
    { (yyval) = NULL; }
    break;

  case 475:

/* Line 1806 of yacc.c  */
#line 4284 "parser.y"
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
#line 4299 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 477:

/* Line 1806 of yacc.c  */
#line 4300 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 479:

/* Line 1806 of yacc.c  */
#line 4305 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 480:

/* Line 1806 of yacc.c  */
#line 4311 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 481:

/* Line 1806 of yacc.c  */
#line 4313 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 482:

/* Line 1806 of yacc.c  */
#line 4318 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 483:

/* Line 1806 of yacc.c  */
#line 4329 "parser.y"
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
    break;

  case 484:

/* Line 1806 of yacc.c  */
#line 4340 "parser.y"
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
    break;

  case 485:

/* Line 1806 of yacc.c  */
#line 4351 "parser.y"
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 486:

/* Line 1806 of yacc.c  */
#line 4362 "parser.y"
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
#line 4390 "parser.y"
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 489:

/* Line 1806 of yacc.c  */
#line 4398 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 490:

/* Line 1806 of yacc.c  */
#line 4399 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 491:

/* Line 1806 of yacc.c  */
#line 4403 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:

/* Line 1806 of yacc.c  */
#line 4404 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 494:

/* Line 1806 of yacc.c  */
#line 4409 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 495:

/* Line 1806 of yacc.c  */
#line 4422 "parser.y"
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
#line 4435 "parser.y"
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
#line 4456 "parser.y"
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
#line 4465 "parser.y"
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
#line 4480 "parser.y"
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
#line 4489 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 503:

/* Line 1806 of yacc.c  */
#line 4501 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 504:

/* Line 1806 of yacc.c  */
#line 4507 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 506:

/* Line 1806 of yacc.c  */
#line 4518 "parser.y"
    {
	PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
    break;

  case 510:

/* Line 1806 of yacc.c  */
#line 4534 "parser.y"
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
#line 4549 "parser.y"
    {
	yyerrok;
  }
    break;

  case 515:

/* Line 1806 of yacc.c  */
#line 4556 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 516:

/* Line 1806 of yacc.c  */
#line 4561 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
    break;

  case 519:

/* Line 1806 of yacc.c  */
#line 4572 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
    break;

  case 523:

/* Line 1806 of yacc.c  */
#line 4591 "parser.y"
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
#line 4627 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (1)]));
  }
    break;

  case 525:

/* Line 1806 of yacc.c  */
#line 4631 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
	current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
  }
    break;

  case 526:

/* Line 1806 of yacc.c  */
#line 4636 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (2)]));
  }
    break;

  case 534:

/* Line 1806 of yacc.c  */
#line 4656 "parser.y"
    {
	current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 535:

/* Line 1806 of yacc.c  */
#line 4663 "parser.y"
    {
	current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 536:

/* Line 1806 of yacc.c  */
#line 4670 "parser.y"
    {
	current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 537:

/* Line 1806 of yacc.c  */
#line 4677 "parser.y"
    {
	current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 538:

/* Line 1806 of yacc.c  */
#line 4684 "parser.y"
    {
	current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 541:

/* Line 1806 of yacc.c  */
#line 4695 "parser.y"
    {
	check_pic_duplicate = 0;
  }
    break;

  case 561:

/* Line 1806 of yacc.c  */
#line 4726 "parser.y"
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
    break;

  case 574:

/* Line 1806 of yacc.c  */
#line 4752 "parser.y"
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
    break;

  case 575:

/* Line 1806 of yacc.c  */
#line 4759 "parser.y"
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
  }
    break;

  case 580:

/* Line 1806 of yacc.c  */
#line 4775 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
  }
    break;

  case 582:

/* Line 1806 of yacc.c  */
#line 4786 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
  }
    break;

  case 585:

/* Line 1806 of yacc.c  */
#line 4798 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
  }
    break;

  case 597:

/* Line 1806 of yacc.c  */
#line 4831 "parser.y"
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
  }
    break;

  case 598:

/* Line 1806 of yacc.c  */
#line 4838 "parser.y"
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
  }
    break;

  case 599:

/* Line 1806 of yacc.c  */
#line 4845 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
    break;

  case 601:

/* Line 1806 of yacc.c  */
#line 4854 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 602:

/* Line 1806 of yacc.c  */
#line 4861 "parser.y"
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
#line 4887 "parser.y"
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
#line 4918 "parser.y"
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
#line 4947 "parser.y"
    {
	/* Free tree assocated with level number */
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
#line 4970 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 614:

/* Line 1806 of yacc.c  */
#line 4974 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 615:

/* Line 1806 of yacc.c  */
#line 4978 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 616:

/* Line 1806 of yacc.c  */
#line 4982 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 617:

/* Line 1806 of yacc.c  */
#line 4986 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 618:

/* Line 1806 of yacc.c  */
#line 4990 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 619:

/* Line 1806 of yacc.c  */
#line 4994 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 620:

/* Line 1806 of yacc.c  */
#line 4998 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 621:

/* Line 1806 of yacc.c  */
#line 5002 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 622:

/* Line 1806 of yacc.c  */
#line 5006 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 623:

/* Line 1806 of yacc.c  */
#line 5010 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
    break;

  case 624:

/* Line 1806 of yacc.c  */
#line 5014 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
    break;

  case 625:

/* Line 1806 of yacc.c  */
#line 5018 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 626:

/* Line 1806 of yacc.c  */
#line 5022 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 627:

/* Line 1806 of yacc.c  */
#line 5026 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 628:

/* Line 1806 of yacc.c  */
#line 5030 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 629:

/* Line 1806 of yacc.c  */
#line 5034 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 630:

/* Line 1806 of yacc.c  */
#line 5039 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 631:

/* Line 1806 of yacc.c  */
#line 5043 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 632:

/* Line 1806 of yacc.c  */
#line 5047 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 633:

/* Line 1806 of yacc.c  */
#line 5052 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 634:

/* Line 1806 of yacc.c  */
#line 5057 "parser.y"
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 635:

/* Line 1806 of yacc.c  */
#line 5062 "parser.y"
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 644:

/* Line 1806 of yacc.c  */
#line 5075 "parser.y"
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 645:

/* Line 1806 of yacc.c  */
#line 5082 "parser.y"
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 646:

/* Line 1806 of yacc.c  */
#line 5087 "parser.y"
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 651:

/* Line 1806 of yacc.c  */
#line 5106 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 652:

/* Line 1806 of yacc.c  */
#line 5110 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 653:

/* Line 1806 of yacc.c  */
#line 5114 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 654:

/* Line 1806 of yacc.c  */
#line 5121 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 655:

/* Line 1806 of yacc.c  */
#line 5125 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 656:

/* Line 1806 of yacc.c  */
#line 5129 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 657:

/* Line 1806 of yacc.c  */
#line 5137 "parser.y"
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
#line 5148 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 660:

/* Line 1806 of yacc.c  */
#line 5157 "parser.y"
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
#line 5167 "parser.y"
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
#line 5179 "parser.y"
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
#line 5194 "parser.y"
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
#line 5227 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 666:

/* Line 1806 of yacc.c  */
#line 5231 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 667:

/* Line 1806 of yacc.c  */
#line 5236 "parser.y"
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
#line 5244 "parser.y"
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
#line 5253 "parser.y"
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
#line 5263 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 671:

/* Line 1806 of yacc.c  */
#line 5265 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 672:

/* Line 1806 of yacc.c  */
#line 5270 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[(4) - (4)]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 674:

/* Line 1806 of yacc.c  */
#line 5279 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 675:

/* Line 1806 of yacc.c  */
#line 5283 "parser.y"
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
#line 5295 "parser.y"
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
#line 5303 "parser.y"
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
#line 5311 "parser.y"
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
#line 5319 "parser.y"
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
#line 5348 "parser.y"
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

  case 683:

/* Line 1806 of yacc.c  */
#line 5381 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
    break;

  case 684:

/* Line 1806 of yacc.c  */
#line 5390 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 685:

/* Line 1806 of yacc.c  */
#line 5396 "parser.y"
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
#line 5424 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 688:

/* Line 1806 of yacc.c  */
#line 5430 "parser.y"
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
#line 5468 "parser.y"
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
#line 5486 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 696:

/* Line 1806 of yacc.c  */
#line 5496 "parser.y"
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
#line 5540 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 700:

/* Line 1806 of yacc.c  */
#line 5551 "parser.y"
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
#line 5599 "parser.y"
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
#line 5611 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 703:

/* Line 1806 of yacc.c  */
#line 5615 "parser.y"
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
#line 5633 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 705:

/* Line 1806 of yacc.c  */
#line 5638 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 706:

/* Line 1806 of yacc.c  */
#line 5643 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 707:

/* Line 1806 of yacc.c  */
#line 5651 "parser.y"
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
#line 5678 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 709:

/* Line 1806 of yacc.c  */
#line 5682 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 759:

/* Line 1806 of yacc.c  */
#line 5738 "parser.y"
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
#line 5752 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 761:

/* Line 1806 of yacc.c  */
#line 5763 "parser.y"
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
#line 5780 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  }
    break;

  case 764:

/* Line 1806 of yacc.c  */
#line 5785 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 765:

/* Line 1806 of yacc.c  */
#line 5789 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 766:

/* Line 1806 of yacc.c  */
#line 5793 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 767:

/* Line 1806 of yacc.c  */
#line 5798 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 768:

/* Line 1806 of yacc.c  */
#line 5803 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 769:

/* Line 1806 of yacc.c  */
#line 5808 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 770:

/* Line 1806 of yacc.c  */
#line 5813 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 771:

/* Line 1806 of yacc.c  */
#line 5817 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 772:

/* Line 1806 of yacc.c  */
#line 5821 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 773:

/* Line 1806 of yacc.c  */
#line 5825 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 774:

/* Line 1806 of yacc.c  */
#line 5829 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 775:

/* Line 1806 of yacc.c  */
#line 5834 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 776:

/* Line 1806 of yacc.c  */
#line 5838 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 777:

/* Line 1806 of yacc.c  */
#line 5842 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 778:

/* Line 1806 of yacc.c  */
#line 5846 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 779:

/* Line 1806 of yacc.c  */
#line 5850 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 780:

/* Line 1806 of yacc.c  */
#line 5854 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 781:

/* Line 1806 of yacc.c  */
#line 5858 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 783:

/* Line 1806 of yacc.c  */
#line 5866 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 786:

/* Line 1806 of yacc.c  */
#line 5877 "parser.y"
    { (yyval) = NULL; }
    break;

  case 787:

/* Line 1806 of yacc.c  */
#line 5878 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 788:

/* Line 1806 of yacc.c  */
#line 5882 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 789:

/* Line 1806 of yacc.c  */
#line 5883 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); }
    break;

  case 790:

/* Line 1806 of yacc.c  */
#line 5884 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); }
    break;

  case 791:

/* Line 1806 of yacc.c  */
#line 5885 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); }
    break;

  case 792:

/* Line 1806 of yacc.c  */
#line 5886 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 793:

/* Line 1806 of yacc.c  */
#line 5890 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 794:

/* Line 1806 of yacc.c  */
#line 5894 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 795:

/* Line 1806 of yacc.c  */
#line 5895 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 799:

/* Line 1806 of yacc.c  */
#line 5904 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 804:

/* Line 1806 of yacc.c  */
#line 5920 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 805:

/* Line 1806 of yacc.c  */
#line 5924 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 806:

/* Line 1806 of yacc.c  */
#line 5930 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 807:

/* Line 1806 of yacc.c  */
#line 5934 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 808:

/* Line 1806 of yacc.c  */
#line 5938 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 809:

/* Line 1806 of yacc.c  */
#line 5942 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 810:

/* Line 1806 of yacc.c  */
#line 5946 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 811:

/* Line 1806 of yacc.c  */
#line 5950 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 812:

/* Line 1806 of yacc.c  */
#line 5954 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 813:

/* Line 1806 of yacc.c  */
#line 5958 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 814:

/* Line 1806 of yacc.c  */
#line 5962 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 815:

/* Line 1806 of yacc.c  */
#line 5966 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 816:

/* Line 1806 of yacc.c  */
#line 5970 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 817:

/* Line 1806 of yacc.c  */
#line 5974 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 818:

/* Line 1806 of yacc.c  */
#line 5978 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 819:

/* Line 1806 of yacc.c  */
#line 5982 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 820:

/* Line 1806 of yacc.c  */
#line 5986 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 821:

/* Line 1806 of yacc.c  */
#line 5990 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), 0);
  }
    break;

  case 822:

/* Line 1806 of yacc.c  */
#line 5994 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0);
  }
    break;

  case 823:

/* Line 1806 of yacc.c  */
#line 5998 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 824:

/* Line 1806 of yacc.c  */
#line 6002 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 825:

/* Line 1806 of yacc.c  */
#line 6008 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 826:

/* Line 1806 of yacc.c  */
#line 6012 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 827:

/* Line 1806 of yacc.c  */
#line 6016 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 828:

/* Line 1806 of yacc.c  */
#line 6020 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 829:

/* Line 1806 of yacc.c  */
#line 6024 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 830:

/* Line 1806 of yacc.c  */
#line 6028 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 831:

/* Line 1806 of yacc.c  */
#line 6032 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 834:

/* Line 1806 of yacc.c  */
#line 6044 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 835:

/* Line 1806 of yacc.c  */
#line 6048 "parser.y"
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
#line 6065 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 838:

/* Line 1806 of yacc.c  */
#line 6074 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 839:

/* Line 1806 of yacc.c  */
#line 6078 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 840:

/* Line 1806 of yacc.c  */
#line 6082 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 842:

/* Line 1806 of yacc.c  */
#line 6089 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 843:

/* Line 1806 of yacc.c  */
#line 6096 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 844:

/* Line 1806 of yacc.c  */
#line 6100 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 845:

/* Line 1806 of yacc.c  */
#line 6110 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 847:

/* Line 1806 of yacc.c  */
#line 6119 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 848:

/* Line 1806 of yacc.c  */
#line 6123 "parser.y"
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
#line 6134 "parser.y"
    { (yyval) = NULL; }
    break;

  case 850:

/* Line 1806 of yacc.c  */
#line 6135 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 851:

/* Line 1806 of yacc.c  */
#line 6143 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 855:

/* Line 1806 of yacc.c  */
#line 6157 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 858:

/* Line 1806 of yacc.c  */
#line 6169 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
    break;

  case 860:

/* Line 1806 of yacc.c  */
#line 6184 "parser.y"
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
#line 6198 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 862:

/* Line 1806 of yacc.c  */
#line 6203 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 863:

/* Line 1806 of yacc.c  */
#line 6208 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 864:

/* Line 1806 of yacc.c  */
#line 6213 "parser.y"
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
#line 6233 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 866:

/* Line 1806 of yacc.c  */
#line 6237 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 867:

/* Line 1806 of yacc.c  */
#line 6242 "parser.y"
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
#line 6253 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 869:

/* Line 1806 of yacc.c  */
#line 6255 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 870:

/* Line 1806 of yacc.c  */
#line 6260 "parser.y"
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
#line 6268 "parser.y"
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
#line 6294 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 874:

/* Line 1806 of yacc.c  */
#line 6298 "parser.y"
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
#line 6307 "parser.y"
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
#line 6319 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 877:

/* Line 1806 of yacc.c  */
#line 6323 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 878:

/* Line 1806 of yacc.c  */
#line 6327 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 879:

/* Line 1806 of yacc.c  */
#line 6331 "parser.y"
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
#line 6364 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 885:

/* Line 1806 of yacc.c  */
#line 6369 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 886:

/* Line 1806 of yacc.c  */
#line 6376 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 887:

/* Line 1806 of yacc.c  */
#line 6381 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 888:

/* Line 1806 of yacc.c  */
#line 6388 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 889:

/* Line 1806 of yacc.c  */
#line 6392 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 890:

/* Line 1806 of yacc.c  */
#line 6402 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 892:

/* Line 1806 of yacc.c  */
#line 6410 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 893:

/* Line 1806 of yacc.c  */
#line 6414 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 894:

/* Line 1806 of yacc.c  */
#line 6424 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 896:

/* Line 1806 of yacc.c  */
#line 6432 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 897:

/* Line 1806 of yacc.c  */
#line 6437 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 898:

/* Line 1806 of yacc.c  */
#line 6444 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 899:

/* Line 1806 of yacc.c  */
#line 6445 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 900:

/* Line 1806 of yacc.c  */
#line 6446 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 901:

/* Line 1806 of yacc.c  */
#line 6447 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 902:

/* Line 1806 of yacc.c  */
#line 6448 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 903:

/* Line 1806 of yacc.c  */
#line 6456 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 905:

/* Line 1806 of yacc.c  */
#line 6465 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 906:

/* Line 1806 of yacc.c  */
#line 6472 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 907:

/* Line 1806 of yacc.c  */
#line 6476 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 908:

/* Line 1806 of yacc.c  */
#line 6486 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 909:

/* Line 1806 of yacc.c  */
#line 6497 "parser.y"
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
#line 6514 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 912:

/* Line 1806 of yacc.c  */
#line 6523 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  }
    break;

  case 914:

/* Line 1806 of yacc.c  */
#line 6531 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 915:

/* Line 1806 of yacc.c  */
#line 6536 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 916:

/* Line 1806 of yacc.c  */
#line 6544 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 917:

/* Line 1806 of yacc.c  */
#line 6548 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 918:

/* Line 1806 of yacc.c  */
#line 6558 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 920:

/* Line 1806 of yacc.c  */
#line 6568 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 921:

/* Line 1806 of yacc.c  */
#line 6572 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 922:

/* Line 1806 of yacc.c  */
#line 6576 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 923:

/* Line 1806 of yacc.c  */
#line 6580 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 924:

/* Line 1806 of yacc.c  */
#line 6584 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  }
    break;

  case 926:

/* Line 1806 of yacc.c  */
#line 6589 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
    break;

  case 928:

/* Line 1806 of yacc.c  */
#line 6599 "parser.y"
    {
	begin_implicit_statement ();
  }
    break;

  case 930:

/* Line 1806 of yacc.c  */
#line 6607 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  }
    break;

  case 931:

/* Line 1806 of yacc.c  */
#line 6615 "parser.y"
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
#line 6623 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 933:

/* Line 1806 of yacc.c  */
#line 6627 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 934:

/* Line 1806 of yacc.c  */
#line 6631 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 935:

/* Line 1806 of yacc.c  */
#line 6635 "parser.y"
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
#line 6657 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 942:

/* Line 1806 of yacc.c  */
#line 6663 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 943:

/* Line 1806 of yacc.c  */
#line 6664 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 946:

/* Line 1806 of yacc.c  */
#line 6675 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 947:

/* Line 1806 of yacc.c  */
#line 6679 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
    break;

  case 948:

/* Line 1806 of yacc.c  */
#line 6683 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 949:

/* Line 1806 of yacc.c  */
#line 6687 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 950:

/* Line 1806 of yacc.c  */
#line 6691 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 951:

/* Line 1806 of yacc.c  */
#line 6695 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
    break;

  case 952:

/* Line 1806 of yacc.c  */
#line 6699 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
    break;

  case 953:

/* Line 1806 of yacc.c  */
#line 6703 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 954:

/* Line 1806 of yacc.c  */
#line 6707 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 955:

/* Line 1806 of yacc.c  */
#line 6711 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 956:

/* Line 1806 of yacc.c  */
#line 6715 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 957:

/* Line 1806 of yacc.c  */
#line 6719 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0); 
  }
    break;

  case 958:

/* Line 1806 of yacc.c  */
#line 6723 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 959:

/* Line 1806 of yacc.c  */
#line 6727 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 960:

/* Line 1806 of yacc.c  */
#line 6731 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 961:

/* Line 1806 of yacc.c  */
#line 6735 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 962:

/* Line 1806 of yacc.c  */
#line 6739 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 963:

/* Line 1806 of yacc.c  */
#line 6746 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 964:

/* Line 1806 of yacc.c  */
#line 6750 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 965:

/* Line 1806 of yacc.c  */
#line 6760 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 967:

/* Line 1806 of yacc.c  */
#line 6769 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 968:

/* Line 1806 of yacc.c  */
#line 6773 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 969:

/* Line 1806 of yacc.c  */
#line 6777 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 970:

/* Line 1806 of yacc.c  */
#line 6781 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 971:

/* Line 1806 of yacc.c  */
#line 6785 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 972:

/* Line 1806 of yacc.c  */
#line 6792 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 973:

/* Line 1806 of yacc.c  */
#line 6796 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 974:

/* Line 1806 of yacc.c  */
#line 6806 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 976:

/* Line 1806 of yacc.c  */
#line 6815 "parser.y"
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
#line 6833 "parser.y"
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
#line 6857 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 980:

/* Line 1806 of yacc.c  */
#line 6864 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 981:

/* Line 1806 of yacc.c  */
#line 6866 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 982:

/* Line 1806 of yacc.c  */
#line 6871 "parser.y"
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
#line 6882 "parser.y"
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
#line 6893 "parser.y"
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
#line 6907 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 986:

/* Line 1806 of yacc.c  */
#line 6911 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 987:

/* Line 1806 of yacc.c  */
#line 6917 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 988:

/* Line 1806 of yacc.c  */
#line 6919 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 989:

/* Line 1806 of yacc.c  */
#line 6925 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 990:

/* Line 1806 of yacc.c  */
#line 6934 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 991:

/* Line 1806 of yacc.c  */
#line 6942 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 992:

/* Line 1806 of yacc.c  */
#line 6948 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 993:

/* Line 1806 of yacc.c  */
#line 6955 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 994:

/* Line 1806 of yacc.c  */
#line 6957 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 995:

/* Line 1806 of yacc.c  */
#line 6962 "parser.y"
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
#line 7023 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 997:

/* Line 1806 of yacc.c  */
#line 7024 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 998:

/* Line 1806 of yacc.c  */
#line 7025 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 999:

/* Line 1806 of yacc.c  */
#line 7029 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1000:

/* Line 1806 of yacc.c  */
#line 7030 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1001:

/* Line 1806 of yacc.c  */
#line 7035 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1002:

/* Line 1806 of yacc.c  */
#line 7039 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1003:

/* Line 1806 of yacc.c  */
#line 7049 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1004:

/* Line 1806 of yacc.c  */
#line 7054 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1006:

/* Line 1806 of yacc.c  */
#line 7062 "parser.y"
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
#line 7083 "parser.y"
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
#line 7097 "parser.y"
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
#line 7119 "parser.y"
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
#line 7141 "parser.y"
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
#line 7161 "parser.y"
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
#line 7183 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1013:

/* Line 1806 of yacc.c  */
#line 7184 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1014:

/* Line 1806 of yacc.c  */
#line 7192 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1016:

/* Line 1806 of yacc.c  */
#line 7201 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1017:

/* Line 1806 of yacc.c  */
#line 7211 "parser.y"
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
    break;

  case 1020:

/* Line 1806 of yacc.c  */
#line 7227 "parser.y"
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
#line 7240 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1023:

/* Line 1806 of yacc.c  */
#line 7248 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1024:

/* Line 1806 of yacc.c  */
#line 7253 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1025:

/* Line 1806 of yacc.c  */
#line 7264 "parser.y"
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
#line 7279 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1028:

/* Line 1806 of yacc.c  */
#line 7288 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1029:

/* Line 1806 of yacc.c  */
#line 7292 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1030:

/* Line 1806 of yacc.c  */
#line 7296 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1031:

/* Line 1806 of yacc.c  */
#line 7303 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1032:

/* Line 1806 of yacc.c  */
#line 7307 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1033:

/* Line 1806 of yacc.c  */
#line 7317 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1035:

/* Line 1806 of yacc.c  */
#line 7326 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1036:

/* Line 1806 of yacc.c  */
#line 7332 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1037:

/* Line 1806 of yacc.c  */
#line 7333 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1038:

/* Line 1806 of yacc.c  */
#line 7337 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1039:

/* Line 1806 of yacc.c  */
#line 7338 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1040:

/* Line 1806 of yacc.c  */
#line 7339 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1041:

/* Line 1806 of yacc.c  */
#line 7344 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1042:

/* Line 1806 of yacc.c  */
#line 7348 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1043:

/* Line 1806 of yacc.c  */
#line 7355 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1044:

/* Line 1806 of yacc.c  */
#line 7360 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1045:

/* Line 1806 of yacc.c  */
#line 7367 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1046:

/* Line 1806 of yacc.c  */
#line 7373 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1047:

/* Line 1806 of yacc.c  */
#line 7374 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1048:

/* Line 1806 of yacc.c  */
#line 7375 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1049:

/* Line 1806 of yacc.c  */
#line 7376 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1050:

/* Line 1806 of yacc.c  */
#line 7377 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1051:

/* Line 1806 of yacc.c  */
#line 7378 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1052:

/* Line 1806 of yacc.c  */
#line 7379 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1053:

/* Line 1806 of yacc.c  */
#line 7384 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1054:

/* Line 1806 of yacc.c  */
#line 7388 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1055:

/* Line 1806 of yacc.c  */
#line 7397 "parser.y"
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
    break;

  case 1057:

/* Line 1806 of yacc.c  */
#line 7406 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1058:

/* Line 1806 of yacc.c  */
#line 7412 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1059:

/* Line 1806 of yacc.c  */
#line 7423 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1062:

/* Line 1806 of yacc.c  */
#line 7436 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1063:

/* Line 1806 of yacc.c  */
#line 7440 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1064:

/* Line 1806 of yacc.c  */
#line 7444 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1069:

/* Line 1806 of yacc.c  */
#line 7460 "parser.y"
    {
	cb_init_tallying ();
  }
    break;

  case 1070:

/* Line 1806 of yacc.c  */
#line 7464 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1071:

/* Line 1806 of yacc.c  */
#line 7474 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1072:

/* Line 1806 of yacc.c  */
#line 7484 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1073:

/* Line 1806 of yacc.c  */
#line 7492 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1074:

/* Line 1806 of yacc.c  */
#line 7493 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1075:

/* Line 1806 of yacc.c  */
#line 7497 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); }
    break;

  case 1076:

/* Line 1806 of yacc.c  */
#line 7498 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); }
    break;

  case 1077:

/* Line 1806 of yacc.c  */
#line 7499 "parser.y"
    { (yyval) = cb_build_tallying_all (); }
    break;

  case 1078:

/* Line 1806 of yacc.c  */
#line 7500 "parser.y"
    { (yyval) = cb_build_tallying_leading (); }
    break;

  case 1079:

/* Line 1806 of yacc.c  */
#line 7501 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); }
    break;

  case 1080:

/* Line 1806 of yacc.c  */
#line 7502 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1081:

/* Line 1806 of yacc.c  */
#line 7506 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1082:

/* Line 1806 of yacc.c  */
#line 7507 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1083:

/* Line 1806 of yacc.c  */
#line 7512 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1084:

/* Line 1806 of yacc.c  */
#line 7517 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1085:

/* Line 1806 of yacc.c  */
#line 7523 "parser.y"
    { /* Nothing */ }
    break;

  case 1086:

/* Line 1806 of yacc.c  */
#line 7524 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1087:

/* Line 1806 of yacc.c  */
#line 7525 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1088:

/* Line 1806 of yacc.c  */
#line 7526 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1089:

/* Line 1806 of yacc.c  */
#line 7527 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1090:

/* Line 1806 of yacc.c  */
#line 7532 "parser.y"
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
#line 7559 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1092:

/* Line 1806 of yacc.c  */
#line 7563 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1093:

/* Line 1806 of yacc.c  */
#line 7570 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  }
    break;

  case 1094:

/* Line 1806 of yacc.c  */
#line 7574 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  }
    break;

  case 1095:

/* Line 1806 of yacc.c  */
#line 7583 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1097:

/* Line 1806 of yacc.c  */
#line 7595 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1099:

/* Line 1806 of yacc.c  */
#line 7603 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1100:

/* Line 1806 of yacc.c  */
#line 7607 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1101:

/* Line 1806 of yacc.c  */
#line 7617 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1103:

/* Line 1806 of yacc.c  */
#line 7626 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1104:

/* Line 1806 of yacc.c  */
#line 7630 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1105:

/* Line 1806 of yacc.c  */
#line 7637 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1106:

/* Line 1806 of yacc.c  */
#line 7641 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1107:

/* Line 1806 of yacc.c  */
#line 7651 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1109:

/* Line 1806 of yacc.c  */
#line 7659 "parser.y"
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
#line 7680 "parser.y"
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
#line 7703 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1112:

/* Line 1806 of yacc.c  */
#line 7704 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1113:

/* Line 1806 of yacc.c  */
#line 7705 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1114:

/* Line 1806 of yacc.c  */
#line 7706 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1115:

/* Line 1806 of yacc.c  */
#line 7710 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1116:

/* Line 1806 of yacc.c  */
#line 7711 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1117:

/* Line 1806 of yacc.c  */
#line 7715 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1118:

/* Line 1806 of yacc.c  */
#line 7716 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1119:

/* Line 1806 of yacc.c  */
#line 7717 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1120:

/* Line 1806 of yacc.c  */
#line 7719 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1121:

/* Line 1806 of yacc.c  */
#line 7730 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1123:

/* Line 1806 of yacc.c  */
#line 7741 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  }
    break;

  case 1124:

/* Line 1806 of yacc.c  */
#line 7746 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
    break;

  case 1125:

/* Line 1806 of yacc.c  */
#line 7752 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1126:

/* Line 1806 of yacc.c  */
#line 7757 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  }
    break;

  case 1127:

/* Line 1806 of yacc.c  */
#line 7765 "parser.y"
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
#line 7773 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1129:

/* Line 1806 of yacc.c  */
#line 7780 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1130:

/* Line 1806 of yacc.c  */
#line 7784 "parser.y"
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
#line 7797 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1132:

/* Line 1806 of yacc.c  */
#line 7804 "parser.y"
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
#line 7815 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1134:

/* Line 1806 of yacc.c  */
#line 7819 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1135:

/* Line 1806 of yacc.c  */
#line 7824 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1136:

/* Line 1806 of yacc.c  */
#line 7828 "parser.y"
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
#line 7839 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1138:

/* Line 1806 of yacc.c  */
#line 7845 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1139:

/* Line 1806 of yacc.c  */
#line 7846 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1140:

/* Line 1806 of yacc.c  */
#line 7850 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1141:

/* Line 1806 of yacc.c  */
#line 7851 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1142:

/* Line 1806 of yacc.c  */
#line 7854 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1143:

/* Line 1806 of yacc.c  */
#line 7856 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1144:

/* Line 1806 of yacc.c  */
#line 7861 "parser.y"
    {
	(yyval) = cb_build_perform_varying ((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));
  }
    break;

  case 1145:

/* Line 1806 of yacc.c  */
#line 7871 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1147:

/* Line 1806 of yacc.c  */
#line 7880 "parser.y"
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
#line 7906 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1149:

/* Line 1806 of yacc.c  */
#line 7907 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1150:

/* Line 1806 of yacc.c  */
#line 7912 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1151:

/* Line 1806 of yacc.c  */
#line 7916 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1152:

/* Line 1806 of yacc.c  */
#line 7920 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1153:

/* Line 1806 of yacc.c  */
#line 7924 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1154:

/* Line 1806 of yacc.c  */
#line 7928 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1155:

/* Line 1806 of yacc.c  */
#line 7932 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1156:

/* Line 1806 of yacc.c  */
#line 7936 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1157:

/* Line 1806 of yacc.c  */
#line 7942 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1158:

/* Line 1806 of yacc.c  */
#line 7943 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1161:

/* Line 1806 of yacc.c  */
#line 7953 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1162:

/* Line 1806 of yacc.c  */
#line 7957 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1163:

/* Line 1806 of yacc.c  */
#line 7967 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1164:

/* Line 1806 of yacc.c  */
#line 7977 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1166:

/* Line 1806 of yacc.c  */
#line 7985 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1167:

/* Line 1806 of yacc.c  */
#line 7995 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1168:

/* Line 1806 of yacc.c  */
#line 8005 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1170:

/* Line 1806 of yacc.c  */
#line 8014 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1171:

/* Line 1806 of yacc.c  */
#line 8021 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1172:

/* Line 1806 of yacc.c  */
#line 8025 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1173:

/* Line 1806 of yacc.c  */
#line 8035 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1175:

/* Line 1806 of yacc.c  */
#line 8047 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  }
    break;

  case 1176:

/* Line 1806 of yacc.c  */
#line 8055 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1177:

/* Line 1806 of yacc.c  */
#line 8059 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1178:

/* Line 1806 of yacc.c  */
#line 8063 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1179:

/* Line 1806 of yacc.c  */
#line 8070 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1180:

/* Line 1806 of yacc.c  */
#line 8074 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1181:

/* Line 1806 of yacc.c  */
#line 8084 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1182:

/* Line 1806 of yacc.c  */
#line 8095 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1184:

/* Line 1806 of yacc.c  */
#line 8104 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1185:

/* Line 1806 of yacc.c  */
#line 8109 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1186:

/* Line 1806 of yacc.c  */
#line 8116 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1187:

/* Line 1806 of yacc.c  */
#line 8117 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1188:

/* Line 1806 of yacc.c  */
#line 8122 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1189:

/* Line 1806 of yacc.c  */
#line 8127 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1190:

/* Line 1806 of yacc.c  */
#line 8134 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1191:

/* Line 1806 of yacc.c  */
#line 8138 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1192:

/* Line 1806 of yacc.c  */
#line 8146 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1193:

/* Line 1806 of yacc.c  */
#line 8153 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1194:

/* Line 1806 of yacc.c  */
#line 8157 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1195:

/* Line 1806 of yacc.c  */
#line 8167 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1196:

/* Line 1806 of yacc.c  */
#line 8174 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1203:

/* Line 1806 of yacc.c  */
#line 8189 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1204:

/* Line 1806 of yacc.c  */
#line 8190 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1205:

/* Line 1806 of yacc.c  */
#line 8194 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1206:

/* Line 1806 of yacc.c  */
#line 8195 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1207:

/* Line 1806 of yacc.c  */
#line 8202 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1208:

/* Line 1806 of yacc.c  */
#line 8211 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1211:

/* Line 1806 of yacc.c  */
#line 8223 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1212:

/* Line 1806 of yacc.c  */
#line 8227 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1213:

/* Line 1806 of yacc.c  */
#line 8231 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1214:

/* Line 1806 of yacc.c  */
#line 8235 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1215:

/* Line 1806 of yacc.c  */
#line 8239 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1216:

/* Line 1806 of yacc.c  */
#line 8243 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1217:

/* Line 1806 of yacc.c  */
#line 8247 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1218:

/* Line 1806 of yacc.c  */
#line 8251 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1219:

/* Line 1806 of yacc.c  */
#line 8260 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1220:

/* Line 1806 of yacc.c  */
#line 8264 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1221:

/* Line 1806 of yacc.c  */
#line 8273 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1224:

/* Line 1806 of yacc.c  */
#line 8287 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1227:

/* Line 1806 of yacc.c  */
#line 8301 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1228:

/* Line 1806 of yacc.c  */
#line 8305 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1229:

/* Line 1806 of yacc.c  */
#line 8315 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1231:

/* Line 1806 of yacc.c  */
#line 8323 "parser.y"
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
#line 8344 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1233:

/* Line 1806 of yacc.c  */
#line 8353 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1234:

/* Line 1806 of yacc.c  */
#line 8358 "parser.y"
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
#line 8376 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1236:

/* Line 1806 of yacc.c  */
#line 8377 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1238:

/* Line 1806 of yacc.c  */
#line 8382 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1239:

/* Line 1806 of yacc.c  */
#line 8389 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1240:

/* Line 1806 of yacc.c  */
#line 8390 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1241:

/* Line 1806 of yacc.c  */
#line 8395 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1242:

/* Line 1806 of yacc.c  */
#line 8401 "parser.y"
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
#line 8411 "parser.y"
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
#line 8426 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1245:

/* Line 1806 of yacc.c  */
#line 8432 "parser.y"
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
#line 8442 "parser.y"
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
#line 8458 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1249:

/* Line 1806 of yacc.c  */
#line 8468 "parser.y"
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
#line 8480 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1251:

/* Line 1806 of yacc.c  */
#line 8484 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1252:

/* Line 1806 of yacc.c  */
#line 8491 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1253:

/* Line 1806 of yacc.c  */
#line 8495 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1254:

/* Line 1806 of yacc.c  */
#line 8500 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1255:

/* Line 1806 of yacc.c  */
#line 8505 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1256:

/* Line 1806 of yacc.c  */
#line 8512 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1257:

/* Line 1806 of yacc.c  */
#line 8513 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1258:

/* Line 1806 of yacc.c  */
#line 8514 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1259:

/* Line 1806 of yacc.c  */
#line 8515 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1260:

/* Line 1806 of yacc.c  */
#line 8516 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1261:

/* Line 1806 of yacc.c  */
#line 8517 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1262:

/* Line 1806 of yacc.c  */
#line 8522 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1265:

/* Line 1806 of yacc.c  */
#line 8535 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1266:

/* Line 1806 of yacc.c  */
#line 8539 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1267:

/* Line 1806 of yacc.c  */
#line 8549 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1268:

/* Line 1806 of yacc.c  */
#line 8553 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1269:

/* Line 1806 of yacc.c  */
#line 8559 "parser.y"
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
#line 8571 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1271:

/* Line 1806 of yacc.c  */
#line 8575 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1272:

/* Line 1806 of yacc.c  */
#line 8579 "parser.y"
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
#line 8587 "parser.y"
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
#line 8598 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1275:

/* Line 1806 of yacc.c  */
#line 8602 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1276:

/* Line 1806 of yacc.c  */
#line 8608 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1277:

/* Line 1806 of yacc.c  */
#line 8609 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1278:

/* Line 1806 of yacc.c  */
#line 8610 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1279:

/* Line 1806 of yacc.c  */
#line 8611 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1280:

/* Line 1806 of yacc.c  */
#line 8618 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1282:

/* Line 1806 of yacc.c  */
#line 8627 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1283:

/* Line 1806 of yacc.c  */
#line 8633 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1284:

/* Line 1806 of yacc.c  */
#line 8634 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1285:

/* Line 1806 of yacc.c  */
#line 8638 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1286:

/* Line 1806 of yacc.c  */
#line 8639 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1287:

/* Line 1806 of yacc.c  */
#line 8640 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1288:

/* Line 1806 of yacc.c  */
#line 8644 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1289:

/* Line 1806 of yacc.c  */
#line 8645 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1290:

/* Line 1806 of yacc.c  */
#line 8650 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1291:

/* Line 1806 of yacc.c  */
#line 8654 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1292:

/* Line 1806 of yacc.c  */
#line 8664 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1294:

/* Line 1806 of yacc.c  */
#line 8673 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1295:

/* Line 1806 of yacc.c  */
#line 8677 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1296:

/* Line 1806 of yacc.c  */
#line 8681 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1297:

/* Line 1806 of yacc.c  */
#line 8688 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1298:

/* Line 1806 of yacc.c  */
#line 8692 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1299:

/* Line 1806 of yacc.c  */
#line 8702 "parser.y"
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
#line 8720 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
    break;

  case 1304:

/* Line 1806 of yacc.c  */
#line 8729 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1305:

/* Line 1806 of yacc.c  */
#line 8735 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1306:

/* Line 1806 of yacc.c  */
#line 8746 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1308:

/* Line 1806 of yacc.c  */
#line 8754 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1309:

/* Line 1806 of yacc.c  */
#line 8767 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1311:

/* Line 1806 of yacc.c  */
#line 8775 "parser.y"
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
#line 8798 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1317:

/* Line 1806 of yacc.c  */
#line 8808 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1318:

/* Line 1806 of yacc.c  */
#line 8814 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1319:

/* Line 1806 of yacc.c  */
#line 8816 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1320:

/* Line 1806 of yacc.c  */
#line 8820 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1321:

/* Line 1806 of yacc.c  */
#line 8822 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1322:

/* Line 1806 of yacc.c  */
#line 8827 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1323:

/* Line 1806 of yacc.c  */
#line 8833 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1324:

/* Line 1806 of yacc.c  */
#line 8835 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1325:

/* Line 1806 of yacc.c  */
#line 8840 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1326:

/* Line 1806 of yacc.c  */
#line 8846 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1327:

/* Line 1806 of yacc.c  */
#line 8847 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1328:

/* Line 1806 of yacc.c  */
#line 8851 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1329:

/* Line 1806 of yacc.c  */
#line 8852 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1330:

/* Line 1806 of yacc.c  */
#line 8856 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1331:

/* Line 1806 of yacc.c  */
#line 8857 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1332:

/* Line 1806 of yacc.c  */
#line 8862 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1333:

/* Line 1806 of yacc.c  */
#line 8866 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1334:

/* Line 1806 of yacc.c  */
#line 8876 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1341:

/* Line 1806 of yacc.c  */
#line 8894 "parser.y"
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
#line 8919 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1343:

/* Line 1806 of yacc.c  */
#line 8923 "parser.y"
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
#line 8935 "parser.y"
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
#line 8945 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1346:

/* Line 1806 of yacc.c  */
#line 8950 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1347:

/* Line 1806 of yacc.c  */
#line 8955 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1348:

/* Line 1806 of yacc.c  */
#line 8960 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1349:

/* Line 1806 of yacc.c  */
#line 8968 "parser.y"
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
#line 9011 "parser.y"
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
#line 9051 "parser.y"
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
#line 9061 "parser.y"
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
#line 9091 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
    break;

  case 1360:

/* Line 1806 of yacc.c  */
#line 9100 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1361:

/* Line 1806 of yacc.c  */
#line 9106 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1362:

/* Line 1806 of yacc.c  */
#line 9116 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
    break;

  case 1363:

/* Line 1806 of yacc.c  */
#line 9125 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1366:

/* Line 1806 of yacc.c  */
#line 9141 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1368:

/* Line 1806 of yacc.c  */
#line 9153 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1369:

/* Line 1806 of yacc.c  */
#line 9162 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1370:

/* Line 1806 of yacc.c  */
#line 9163 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1371:

/* Line 1806 of yacc.c  */
#line 9168 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1372:

/* Line 1806 of yacc.c  */
#line 9172 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1373:

/* Line 1806 of yacc.c  */
#line 9176 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1374:

/* Line 1806 of yacc.c  */
#line 9180 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1375:

/* Line 1806 of yacc.c  */
#line 9186 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1376:

/* Line 1806 of yacc.c  */
#line 9187 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1379:

/* Line 1806 of yacc.c  */
#line 9197 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1380:

/* Line 1806 of yacc.c  */
#line 9201 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1383:

/* Line 1806 of yacc.c  */
#line 9218 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1385:

/* Line 1806 of yacc.c  */
#line 9228 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1388:

/* Line 1806 of yacc.c  */
#line 9241 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1390:

/* Line 1806 of yacc.c  */
#line 9251 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1393:

/* Line 1806 of yacc.c  */
#line 9266 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1395:

/* Line 1806 of yacc.c  */
#line 9276 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1398:

/* Line 1806 of yacc.c  */
#line 9293 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1400:

/* Line 1806 of yacc.c  */
#line 9304 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1406:

/* Line 1806 of yacc.c  */
#line 9327 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1407:

/* Line 1806 of yacc.c  */
#line 9336 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1411:

/* Line 1806 of yacc.c  */
#line 9353 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1412:

/* Line 1806 of yacc.c  */
#line 9362 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1415:

/* Line 1806 of yacc.c  */
#line 9379 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1417:

/* Line 1806 of yacc.c  */
#line 9389 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1418:

/* Line 1806 of yacc.c  */
#line 9399 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1419:

/* Line 1806 of yacc.c  */
#line 9403 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1420:

/* Line 1806 of yacc.c  */
#line 9413 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1421:

/* Line 1806 of yacc.c  */
#line 9420 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1422:

/* Line 1806 of yacc.c  */
#line 9426 "parser.y"
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
    break;

  case 1423:

/* Line 1806 of yacc.c  */
#line 9431 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1427:

/* Line 1806 of yacc.c  */
#line 9444 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1428:

/* Line 1806 of yacc.c  */
#line 9452 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1429:

/* Line 1806 of yacc.c  */
#line 9453 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1430:

/* Line 1806 of yacc.c  */
#line 9455 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1431:

/* Line 1806 of yacc.c  */
#line 9456 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1432:

/* Line 1806 of yacc.c  */
#line 9457 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1433:

/* Line 1806 of yacc.c  */
#line 9458 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1434:

/* Line 1806 of yacc.c  */
#line 9459 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1435:

/* Line 1806 of yacc.c  */
#line 9461 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1436:

/* Line 1806 of yacc.c  */
#line 9462 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1437:

/* Line 1806 of yacc.c  */
#line 9463 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1438:

/* Line 1806 of yacc.c  */
#line 9464 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1439:

/* Line 1806 of yacc.c  */
#line 9465 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1440:

/* Line 1806 of yacc.c  */
#line 9466 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1441:

/* Line 1806 of yacc.c  */
#line 9468 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1442:

/* Line 1806 of yacc.c  */
#line 9469 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1443:

/* Line 1806 of yacc.c  */
#line 9470 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1444:

/* Line 1806 of yacc.c  */
#line 9472 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1445:

/* Line 1806 of yacc.c  */
#line 9473 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1446:

/* Line 1806 of yacc.c  */
#line 9474 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1447:

/* Line 1806 of yacc.c  */
#line 9475 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1448:

/* Line 1806 of yacc.c  */
#line 9476 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1449:

/* Line 1806 of yacc.c  */
#line 9479 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1450:

/* Line 1806 of yacc.c  */
#line 9480 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1459:

/* Line 1806 of yacc.c  */
#line 9510 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1460:

/* Line 1806 of yacc.c  */
#line 9514 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1464:

/* Line 1806 of yacc.c  */
#line 9525 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1465:

/* Line 1806 of yacc.c  */
#line 9526 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1466:

/* Line 1806 of yacc.c  */
#line 9527 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1467:

/* Line 1806 of yacc.c  */
#line 9531 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1468:

/* Line 1806 of yacc.c  */
#line 9532 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1469:

/* Line 1806 of yacc.c  */
#line 9533 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1470:

/* Line 1806 of yacc.c  */
#line 9538 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1471:

/* Line 1806 of yacc.c  */
#line 9541 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1472:

/* Line 1806 of yacc.c  */
#line 9545 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1473:

/* Line 1806 of yacc.c  */
#line 9546 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1474:

/* Line 1806 of yacc.c  */
#line 9547 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1475:

/* Line 1806 of yacc.c  */
#line 9550 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1476:

/* Line 1806 of yacc.c  */
#line 9551 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1477:

/* Line 1806 of yacc.c  */
#line 9562 "parser.y"
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

  case 1478:

/* Line 1806 of yacc.c  */
#line 9574 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1479:

/* Line 1806 of yacc.c  */
#line 9583 "parser.y"
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

  case 1480:

/* Line 1806 of yacc.c  */
#line 9595 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1481:

/* Line 1806 of yacc.c  */
#line 9604 "parser.y"
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

  case 1482:

/* Line 1806 of yacc.c  */
#line 9616 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1483:

/* Line 1806 of yacc.c  */
#line 9630 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1484:

/* Line 1806 of yacc.c  */
#line 9632 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1485:

/* Line 1806 of yacc.c  */
#line 9637 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1486:

/* Line 1806 of yacc.c  */
#line 9645 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1487:

/* Line 1806 of yacc.c  */
#line 9652 "parser.y"
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

  case 1488:

/* Line 1806 of yacc.c  */
#line 9672 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1489:

/* Line 1806 of yacc.c  */
#line 9676 "parser.y"
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

  case 1490:

/* Line 1806 of yacc.c  */
#line 9697 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1491:

/* Line 1806 of yacc.c  */
#line 9738 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1492:

/* Line 1806 of yacc.c  */
#line 9751 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1493:

/* Line 1806 of yacc.c  */
#line 9753 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1494:

/* Line 1806 of yacc.c  */
#line 9757 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1495:

/* Line 1806 of yacc.c  */
#line 9763 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1496:

/* Line 1806 of yacc.c  */
#line 9765 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1497:

/* Line 1806 of yacc.c  */
#line 9770 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1500:

/* Line 1806 of yacc.c  */
#line 9784 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1501:

/* Line 1806 of yacc.c  */
#line 9791 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1502:

/* Line 1806 of yacc.c  */
#line 9801 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1503:

/* Line 1806 of yacc.c  */
#line 9802 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1504:

/* Line 1806 of yacc.c  */
#line 9807 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1505:

/* Line 1806 of yacc.c  */
#line 9815 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1506:

/* Line 1806 of yacc.c  */
#line 9823 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1507:

/* Line 1806 of yacc.c  */
#line 9827 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1508:

/* Line 1806 of yacc.c  */
#line 9834 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1511:

/* Line 1806 of yacc.c  */
#line 9850 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1512:

/* Line 1806 of yacc.c  */
#line 9864 "parser.y"
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

  case 1513:

/* Line 1806 of yacc.c  */
#line 9881 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1514:

/* Line 1806 of yacc.c  */
#line 9885 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1517:

/* Line 1806 of yacc.c  */
#line 9894 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1518:

/* Line 1806 of yacc.c  */
#line 9901 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1519:

/* Line 1806 of yacc.c  */
#line 9905 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1524:

/* Line 1806 of yacc.c  */
#line 9916 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1525:

/* Line 1806 of yacc.c  */
#line 9920 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1526:

/* Line 1806 of yacc.c  */
#line 9924 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1527:

/* Line 1806 of yacc.c  */
#line 9928 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1528:

/* Line 1806 of yacc.c  */
#line 9932 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1529:

/* Line 1806 of yacc.c  */
#line 9936 "parser.y"
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

  case 1530:

/* Line 1806 of yacc.c  */
#line 9957 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1531:

/* Line 1806 of yacc.c  */
#line 9961 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1539:

/* Line 1806 of yacc.c  */
#line 9978 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1540:

/* Line 1806 of yacc.c  */
#line 9982 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1541:

/* Line 1806 of yacc.c  */
#line 9986 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1557:

/* Line 1806 of yacc.c  */
#line 10033 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1565:

/* Line 1806 of yacc.c  */
#line 10057 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1566:

/* Line 1806 of yacc.c  */
#line 10061 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1567:

/* Line 1806 of yacc.c  */
#line 10065 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1568:

/* Line 1806 of yacc.c  */
#line 10066 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1569:

/* Line 1806 of yacc.c  */
#line 10070 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1570:

/* Line 1806 of yacc.c  */
#line 10075 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1571:

/* Line 1806 of yacc.c  */
#line 10082 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1572:

/* Line 1806 of yacc.c  */
#line 10089 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1573:

/* Line 1806 of yacc.c  */
#line 10096 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1574:

/* Line 1806 of yacc.c  */
#line 10106 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1575:

/* Line 1806 of yacc.c  */
#line 10113 "parser.y"
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

  case 1576:

/* Line 1806 of yacc.c  */
#line 10123 "parser.y"
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

  case 1577:

/* Line 1806 of yacc.c  */
#line 10133 "parser.y"
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

  case 1578:

/* Line 1806 of yacc.c  */
#line 10143 "parser.y"
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

  case 1579:

/* Line 1806 of yacc.c  */
#line 10156 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1580:

/* Line 1806 of yacc.c  */
#line 10160 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1581:

/* Line 1806 of yacc.c  */
#line 10168 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1582:

/* Line 1806 of yacc.c  */
#line 10176 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1583:

/* Line 1806 of yacc.c  */
#line 10180 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1584:

/* Line 1806 of yacc.c  */
#line 10190 "parser.y"
    {
	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0 || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1585:

/* Line 1806 of yacc.c  */
#line 10205 "parser.y"
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

  case 1586:

/* Line 1806 of yacc.c  */
#line 10228 "parser.y"
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
		if (n < 1) {
			cb_error (_("Invalid integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  }
    break;

  case 1587:

/* Line 1806 of yacc.c  */
#line 10251 "parser.y"
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

  case 1588:

/* Line 1806 of yacc.c  */
#line 10266 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1589:

/* Line 1806 of yacc.c  */
#line 10267 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1590:

/* Line 1806 of yacc.c  */
#line 10268 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1591:

/* Line 1806 of yacc.c  */
#line 10269 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1592:

/* Line 1806 of yacc.c  */
#line 10270 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1593:

/* Line 1806 of yacc.c  */
#line 10271 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1594:

/* Line 1806 of yacc.c  */
#line 10276 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1595:

/* Line 1806 of yacc.c  */
#line 10280 "parser.y"
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

  case 1596:

/* Line 1806 of yacc.c  */
#line 10297 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1597:

/* Line 1806 of yacc.c  */
#line 10301 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1598:

/* Line 1806 of yacc.c  */
#line 10307 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1599:

/* Line 1806 of yacc.c  */
#line 10308 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1600:

/* Line 1806 of yacc.c  */
#line 10309 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1601:

/* Line 1806 of yacc.c  */
#line 10310 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1602:

/* Line 1806 of yacc.c  */
#line 10311 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1603:

/* Line 1806 of yacc.c  */
#line 10312 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1604:

/* Line 1806 of yacc.c  */
#line 10313 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1605:

/* Line 1806 of yacc.c  */
#line 10320 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1606:

/* Line 1806 of yacc.c  */
#line 10324 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1607:

/* Line 1806 of yacc.c  */
#line 10328 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1608:

/* Line 1806 of yacc.c  */
#line 10332 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1609:

/* Line 1806 of yacc.c  */
#line 10336 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1610:

/* Line 1806 of yacc.c  */
#line 10340 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1611:

/* Line 1806 of yacc.c  */
#line 10344 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1612:

/* Line 1806 of yacc.c  */
#line 10348 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1613:

/* Line 1806 of yacc.c  */
#line 10352 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1614:

/* Line 1806 of yacc.c  */
#line 10356 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1626:

/* Line 1806 of yacc.c  */
#line 10383 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1627:

/* Line 1806 of yacc.c  */
#line 10387 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1628:

/* Line 1806 of yacc.c  */
#line 10391 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1629:

/* Line 1806 of yacc.c  */
#line 10398 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1630:

/* Line 1806 of yacc.c  */
#line 10402 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1631:

/* Line 1806 of yacc.c  */
#line 10406 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1632:

/* Line 1806 of yacc.c  */
#line 10413 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1633:

/* Line 1806 of yacc.c  */
#line 10420 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1634:

/* Line 1806 of yacc.c  */
#line 10427 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1635:

/* Line 1806 of yacc.c  */
#line 10437 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1636:

/* Line 1806 of yacc.c  */
#line 10444 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1637:

/* Line 1806 of yacc.c  */
#line 10454 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1638:

/* Line 1806 of yacc.c  */
#line 10461 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1639:

/* Line 1806 of yacc.c  */
#line 10472 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1640:

/* Line 1806 of yacc.c  */
#line 10480 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1641:

/* Line 1806 of yacc.c  */
#line 10481 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1642:

/* Line 1806 of yacc.c  */
#line 10485 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1643:

/* Line 1806 of yacc.c  */
#line 10486 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1644:

/* Line 1806 of yacc.c  */
#line 10490 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1645:

/* Line 1806 of yacc.c  */
#line 10491 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1646:

/* Line 1806 of yacc.c  */
#line 10496 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1647:

/* Line 1806 of yacc.c  */
#line 10500 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1648:

/* Line 1806 of yacc.c  */
#line 10507 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1649:

/* Line 1806 of yacc.c  */
#line 10511 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1650:

/* Line 1806 of yacc.c  */
#line 10518 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1651:

/* Line 1806 of yacc.c  */
#line 10519 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1652:

/* Line 1806 of yacc.c  */
#line 10520 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1653:

/* Line 1806 of yacc.c  */
#line 10524 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1654:

/* Line 1806 of yacc.c  */
#line 10525 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1655:

/* Line 1806 of yacc.c  */
#line 10529 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1656:

/* Line 1806 of yacc.c  */
#line 10530 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1657:

/* Line 1806 of yacc.c  */
#line 10531 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1658:

/* Line 1806 of yacc.c  */
#line 10536 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1659:

/* Line 1806 of yacc.c  */
#line 10540 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1660:

/* Line 1806 of yacc.c  */
#line 10552 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1661:

/* Line 1806 of yacc.c  */
#line 10557 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1662:

/* Line 1806 of yacc.c  */
#line 10565 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1663:

/* Line 1806 of yacc.c  */
#line 10569 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1664:

/* Line 1806 of yacc.c  */
#line 10573 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1665:

/* Line 1806 of yacc.c  */
#line 10577 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1666:

/* Line 1806 of yacc.c  */
#line 10581 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1667:

/* Line 1806 of yacc.c  */
#line 10585 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1668:

/* Line 1806 of yacc.c  */
#line 10589 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1669:

/* Line 1806 of yacc.c  */
#line 10593 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1670:

/* Line 1806 of yacc.c  */
#line 10599 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1671:

/* Line 1806 of yacc.c  */
#line 10600 "parser.y"
    { (yyval) = cb_int1; }
    break;



/* Line 1806 of yacc.c  */
#line 18848 "parser.c"
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
#line 10771 "parser.y"


