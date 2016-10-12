/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

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
#define yyerror(x)		cb_error ("%s", x)

#define emit_statement(x) \
do { \
  if (!skip_statements) { \
	CB_ADD_TO_CHAIN (x, current_program->exec_list); \
  } \
}  ONCE_COB

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
/* > 16 for non-common item definitions e.g. REPORT and SCREEN */
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
cb_tree				defined_prog_list = NULL;
char				*cobc_glob_line = NULL;
int				cb_exp_line = 0;

cb_tree				cobc_printer_node = NULL;
int				functions_are_all = 0;
int				non_const_word = 0;
unsigned int			cobc_repeat_last_token = 0;
unsigned int			cobc_in_id = 0;
unsigned int			cobc_in_procedure = 0;
unsigned int			cobc_in_repository = 0;
unsigned int			cobc_force_literal = 0;
unsigned int			cobc_cs_check = 0;
unsigned int			cobc_allow_program_name = 0;

/* Local variables */

enum tallying_phrase {
	NO_PHRASE,
	FOR_PHRASE,
	CHARACTERS_PHRASE,
	ALL_LEADING_TRAILING_PHRASES,
	VALUE_REGION_PHRASE
};

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
static int			first_nested_program;
static int			call_mode;
static cob_flags_t		size_mode;
static int			set_attr_val_on;
static int			set_attr_val_off;
static cob_flags_t		check_duplicate;
static cob_flags_t		check_on_off_duplicate;
static cob_flags_t		check_pic_duplicate;
static cob_flags_t		check_comp_duplicate;
static cob_flags_t		check_line_col_duplicate;
static unsigned int		skip_statements;
static unsigned int		start_debug;
static unsigned int		save_debug;
static unsigned int		needs_field_debug;
static unsigned int		needs_debug_item;
static unsigned int		env_div_seen;
static cob_flags_t		header_check;
static unsigned int		call_nothing;
static enum tallying_phrase	previous_tallying_phrase;

static enum cb_display_type	display_type;
static int			is_first_display_item;
static cb_tree			advancing_value;
static cb_tree			upon_value;
static cb_tree			line_column;

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
		cb_warning (_("unreachable statement '%s'"), name);
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
void print_bits (unsigned int num)
{
	unsigned int 	size = sizeof (unsigned int);
	unsigned int	maxPow = 1 << (size * 8 - 1);
	int 		i = 0;

	for(; i < size * 8; ++i){
		/* Print last bit and shift left. */
		fprintf (stderr, "%u ", num & maxPow ? 1 : 0);
		num = num << 1;
 	}
	fprintf (stderr, "\n");
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
					cb_error_x (x, _("'%s' cannot be BASED/EXTERNAL"), cb_name (x));
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
		cb_error (_("maximum nested program depth exceeded (%d)"),
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
	/* Free tree associated with terminator */
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
	/* Free tree associated with terminator */
	cobc_parse_free (stmt);
}

static void
terminator_clear (cb_tree stmt, const unsigned int termid)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
	}
	/* Free tree associated with terminator */
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
emit_duplicate_clause_message (const char *clause)
{
	if (cb_relaxed_syntax_checks) {
		cb_warning (_("duplicate %s clause"), clause);
	} else {
		cb_error (_("duplicate %s clause"), clause);
	}
}

static void
check_repeated (const char *clause, const cob_flags_t bitval, cob_flags_t *already_seen)
{
	if (*already_seen & bitval) {
		emit_duplicate_clause_message (clause);
	} else {
		*already_seen |= bitval;
	}
}

static void
setup_occurs (void)
{
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->indexes == COB_MAX_SUBSCRIPTS) {
		cb_error (_ ("maximum OCCURS depth exceeded (%d)"),
			COB_MAX_SUBSCRIPTS);
	} else {
		current_field->indexes++;
	}
	if (current_field->flag_item_based) {
		cb_error (_ ("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else if (current_field->flag_external) {
		cb_error (_ ("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	}
	current_field->flag_occurs = 1;
}

static void
setup_occurs_min_max (cb_tree occurs_min, cb_tree occurs_max)
{
	if (occurs_max) {
		current_field->occurs_min = cb_get_int (occurs_min);
		current_field->occurs_max = cb_get_int (occurs_max);
		if (!current_field->depending) {
			if (cb_relaxed_syntax_checks) {
				cb_warning (_ ("TO phrase without DEPENDING phrase"));
				cb_warning (_ ("maximum number of occurences assumed to be exact number"));
				current_field->occurs_min = 1; /* Checkme: why using 1 ? */
			} else {
				cb_error (_ ("TO phrase without DEPENDING phrase"));
			}
		}
		if (current_field->occurs_max > 0 &&
			current_field->occurs_max <= current_field->occurs_min) {
			cb_error (_ ("OCCURS TO must be greater than OCCURS FROM"));
		}
	} else {
		current_field->occurs_min = 1; /* Checkme: why using 1 ? */
		current_field->occurs_max = cb_get_int (occurs_min);
		if (current_field->depending) {
			cb_verify (cb_odo_without_to, _ ("ODO without TO phrase"));
		}
	}
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
	if (cb_relaxed_syntax_checks) {
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
	set_attr_val_on = 0;
	set_attr_val_off = 0;
	report_count = 0;
	current_storage = CB_STORAGE_WORKING;
	eval_level = 0;
	eval_inc = 0;
	eval_inc2 = 0;
	inspect_keyword = 0;
	check_unreached = 0;
	cobc_in_id = 0;
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

/*
  We must check for redefinitions of program-names and external program names
  outside of the usual reference/word_list methods as it may have to be done in
  a case-sensitive way.
*/
static void
begin_scope_of_program_name (struct cb_program *program)
{
	const char	*prog_name = program->program_name;
	const char	*prog_id = program->orig_program_id;
	const char	*elt_name;
	const char	*elt_id;
	cb_tree		l;

	/* Error if a program with the same name has been defined. */
	for (l = defined_prog_list; l; l = CB_CHAIN (l)) {
		elt_name = ((struct cb_program *) CB_VALUE (l))->program_name;
		elt_id = ((struct cb_program *) CB_VALUE (l))->orig_program_id;
		if (cb_fold_call && strcasecmp (prog_name, elt_name) == 0) {
			cb_error_x ((cb_tree) program,
				    _("redefinition of program name '%s'"),
				    elt_name);
		} else if (strcmp (prog_id, elt_id) == 0) {
		        cb_error_x ((cb_tree) program,
				    _("redefinition of program ID '%s'"),
				    elt_id);
			return;
		}
	}

	/* Otherwise, add the program to the list. */
	defined_prog_list = cb_list_add (defined_prog_list,
					 (cb_tree) program);
}

static void
remove_program_name (struct cb_list *l, struct cb_list *prev)
{
	if (prev == NULL) {
		defined_prog_list = l->chain;
	} else {
		prev->chain = l->chain;
	}
	cobc_parse_free (l);
}

/* Remove the program from defined_prog_list, if necessary. */
static void
end_scope_of_program_name (struct cb_program *program)
{
	struct	cb_list	*prev = NULL;
	struct	cb_list *l = (struct cb_list *) defined_prog_list;

	if (program->nested_level == 0) {
		return;
	}

	/* Remove any subprograms */
	l = CB_LIST (defined_prog_list);
        while (l) {
		if (CB_PROGRAM (l->value)->nested_level > program->nested_level) {
			remove_program_name (l, prev);
			l = CB_LIST (prev->chain);
		} else {
			prev = l;
			l = CB_LIST (l->chain);
		}
	}

	/* Remove the specified program, if it is not COMMON */
	if (!program->flag_common) {
		l = (struct cb_list *) defined_prog_list;
	        while (l) {
			if (strcmp (program->orig_program_id,
				    CB_PROGRAM (l->value)->orig_program_id)
			    == 0) {
				remove_program_name (l, prev);
				l = CB_LIST (prev->chain);
				break;
			} else {
				prev = l;
				l = CB_LIST (l->chain);
			}
		}
	}
}

static int
setup_program (cb_tree id, cb_tree as_literal, const unsigned char type)
{
	current_section = NULL;
	current_paragraph = NULL;

	if (CB_LITERAL_P (id)) {
		stack_progid[depth] = (char *)(CB_LITERAL (id)->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME (id));
	}

	if (depth > 0) {
		if (first_nested_program) {
		check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0);
	}
		if (type == CB_FUNCTION_TYPE) {
			cb_error ("functions may not be defined within a program/function");
		}
	}
	first_nested_program = 1;

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
	        return 1;
	}

	current_program->program_id = cb_build_program_id (id, as_literal, type == CB_FUNCTION_TYPE);
	current_program->prog_type = type;

	if (type == CB_PROGRAM_TYPE) {
		if (!main_flag_set) {
			main_flag_set = 1;
			current_program->flag_main = !!cobc_flag_main;
		}
	} else { /* CB_FUNCTION_TYPE */
		current_program->flag_recursive = 1;
	}

	if (CB_REFERENCE_P (id)) {
	        cb_define (id, CB_TREE (current_program));
	}

	begin_scope_of_program_name (current_program);

	return 0;
}

static void
decrement_depth (const char *name, const unsigned char type)
{
	int	d;

	if (depth) {
		depth--;
	}

	if (!strcmp (stack_progid[depth], name)) {
		return;
	}

	if (type == CB_FUNCTION_TYPE) {
		cb_error (_("END FUNCTION '%s' is different from FUNCTION-ID '%s'"),
			  name, stack_progid[depth]);
		return;
	}

	/* Set depth to that of whatever program we just ended, if it exists. */
	for (d = depth; d >= 0; --d) {
		if (!strcmp (stack_progid[d], name)) {
			depth = d;
			return;
		}
	}

	if (depth != d) {
		cb_error (_("END PROGRAM '%s' is different from PROGRAM-ID '%s'"),
			  name, stack_progid[depth]);
	}
}

static void
clean_up_program (cb_tree name, const unsigned char type)
{
	char		*s;

	end_scope_of_program_name (current_program);

	if (CB_LITERAL_P (name)) {
		s = (char *)(CB_LITERAL (name)->data);
	} else {
		s = (char *)(CB_NAME (name));
	}

	decrement_depth (s, type);

	current_section = NULL;
	current_paragraph = NULL;
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
}

static const char *
get_literal_or_word_name (const cb_tree x)
{
	if (CB_LITERAL_P (x)) {
		return (const char *) CB_LITERAL (x)->data;
	} else { /* CB_REFERENCE_P (x) */
		return (const char *) CB_NAME (x);
	}
}

/* verify and set picture sign for currency */
static void
set_currency_picture_symbol (const cb_tree x)
{
	unsigned char	*s		= CB_LITERAL (x)->data;

	if (CB_LITERAL (x)->size != 1) {
		cb_error_x (x, _("PICTURE SYMBOL for CURRENCY must be one character long"));
		return;
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
		cb_error_x (x, _("invalid character '%c' in PICTURE SYMBOL for CURRENCY"), s[0]);
		return;
	default:
		break;
	}
	current_program->currency_symbol = s[0];
}

/* Return 1 if the prototype name is the same as the current function's. */
static int
check_prototype_redefines_current_element (const cb_tree prototype_name)
{
	const char	*name = get_literal_or_word_name (prototype_name);

	if (strcasecmp (name, current_program->program_name) == 0) {
		cb_warning_x (prototype_name,
			_("prototype has same name as current function and will be ignored"));
		return 1;
	}

	return 0;
}

/* Returns 1 if the prototype has been duplicated. */
static int
check_for_duplicate_prototype (const cb_tree prototype_name,
			       const cb_tree prototype)
{
	cb_tree	dup;

	if (CB_WORD_COUNT (prototype_name) > 0) {
		/* Make sure the duplicate is a prototype */
		dup = cb_ref (prototype_name);
		if (!CB_PROTOTYPE_P (dup)) {
			redefinition_error (prototype_name);
			return 1;
		}

		/* Check the duplicate prototypes match */
		if (strcmp (CB_PROTOTYPE (prototype)->ext_name,
			    CB_PROTOTYPE (dup)->ext_name)
		    || CB_PROTOTYPE (prototype)->type != CB_PROTOTYPE (dup)->type) {
			cb_error_x (prototype_name,
				    _("duplicate REPOSITORY entries for '%s' do not match"),
				    get_literal_or_word_name (prototype_name));
		} else {
			cb_warning_x (prototype_name,
				      _("duplicate REPOSITORY entry for '%s'"),
				      get_literal_or_word_name (prototype_name));
		}
		return 1;
	}

	return 0;
}

static void
setup_prototype (cb_tree prototype_name, cb_tree ext_name,
		  const int type, const int is_current_element)
{
	cb_tree	prototype;
	int	name_redefinition_allowed;

	if (!is_current_element
	    && check_prototype_redefines_current_element (prototype_name)) {
		return;
	}

	prototype = cb_build_prototype (prototype_name, ext_name, type);

	if (!is_current_element
	    && check_for_duplicate_prototype (prototype_name, prototype)) {
		return;
	}

	name_redefinition_allowed = type == CB_PROGRAM_TYPE
		&& is_current_element && cb_program_name_redefinition;
	if (!name_redefinition_allowed) {
		if (CB_LITERAL_P (prototype_name)) {
			cb_define (cb_build_reference ((const char *)CB_LITERAL (prototype_name)->data), prototype);
		} else {
			cb_define (prototype_name, prototype);
		}

		if (type == CB_PROGRAM_TYPE) {
			current_program->program_spec_list =
				cb_list_add (current_program->program_spec_list, prototype);
		} else { /* CB_FUNCTION_TYPE */
			current_program->user_spec_list =
				cb_list_add (current_program->user_spec_list, prototype);
		}
	}
}

static void
error_if_invalid_level_for_renames (cb_tree item)
{
	int	level = CB_FIELD (cb_ref (item))->level;

	if (level == 1 || level == 66 || level == 77) {
	        cb_verify (cb_renames_uncommon_levels,
			   _("RENAMES of 01-, 66- and 77-level items"));
	} else if (level == 88) {
		cb_error (_("RENAMES may not reference a level 88"));
	}
}

static int
set_current_field (cb_tree level, cb_tree name)
{
	cb_tree	x  = cb_build_field_tree (level, name, current_field,
					  current_storage, current_file, 0);
	cobc_parse_free (level);

	if (CB_INVALID_TREE (x)) {
	        return 1;
	} else {
		current_field = CB_FIELD (x);
		check_pic_duplicate = 0;
	}

	return 0;
}

static void
check_not_both (const int flag1, const int flag2,
		const char *flag1_name, const char *flag2_name,
		const int flags, const int flag_to_set)
{
	if (flag_to_set == flag1 && (flags & flag2)) {
		cb_error (_("cannot specify both %s and %s"),
			  flag1_name, flag2_name);
	} else if (flag_to_set == flag2 && (flags & flag1)) {
		cb_error (_("cannot specify both %s and %s"),
			  flag1_name, flag2_name);

	}
}

static COB_INLINE COB_A_INLINE void
check_not_highlight_and_lowlight (const int flags, const int flag_to_set)
{
	check_not_both (COB_SCREEN_HIGHLIGHT, COB_SCREEN_LOWLIGHT,
			"HIGHLIGHT", "LOWLIGHT", flags, flag_to_set);
}

static void
set_screen_attr (const char *clause, const cob_flags_t bitval)
{
	if (current_field->screen_flag & bitval) {
		emit_duplicate_clause_message (clause);
	} else {
		current_field->screen_flag |= bitval;
	}
}

static void
emit_conflicting_clause_message (const char *clause, const char *conflicting)
{
	if (cb_relaxed_syntax_checks) {
		cb_warning (_("cannot specify both %s and %s; %s is ignored"),
			    clause, conflicting, clause);
	} else {
		cb_error (_("cannot specify both %s and %s"),
			  clause, conflicting);
	}

}

static void
set_attr_with_conflict (const char *clause, const cob_flags_t bitval,
			const char *confl_clause, const cob_flags_t confl_bit,
			const int check_duplicate, cob_flags_t *flags)
{
	if (check_duplicate && (*flags & bitval)) {
		emit_duplicate_clause_message (clause);
        } else if (*flags & confl_bit) {
		emit_conflicting_clause_message (clause, confl_clause);
	} else {
	        *flags |= bitval;
	}
}

static COB_INLINE COB_A_INLINE void
set_screen_attr_with_conflict (const char *clause, const cob_flags_t bitval,
			       const char *confl_clause,
			       const cob_flags_t confl_bit)
{
	set_attr_with_conflict (clause, bitval, confl_clause, confl_bit, 1,
				&current_field->screen_flag);
}

static COB_INLINE COB_A_INLINE int
has_dispattr (const cob_flags_t attrib)
{
	return current_statement->attr_ptr
		&& current_statement->attr_ptr->dispattrs & attrib;
}

static void
attach_attrib_to_cur_stmt (void)
{
	if (!current_statement->attr_ptr) {
		current_statement->attr_ptr =
			cobc_parse_malloc (sizeof(struct cb_attr_struct));
	}
}

static COB_INLINE COB_A_INLINE void
set_dispattr (const cob_flags_t attrib)
{
	attach_attrib_to_cur_stmt ();
	current_statement->attr_ptr->dispattrs |= COB_SCREEN_AUTO;
}

static COB_INLINE COB_A_INLINE void
set_dispattr_with_conflict (const char *attrib_name, const cob_flags_t attrib,
			    const char *confl_name,
			    const cob_flags_t confl_attrib)
{
	attach_attrib_to_cur_stmt ();
	set_attr_with_conflict (attrib_name, attrib, confl_name, confl_attrib, 0,
				&current_statement->attr_ptr->dispattrs);
}

static void
bit_set_attr (const cb_tree on_off, const cob_flags_t attr_val)
{
	if (on_off == cb_int1) {
		set_attr_val_on |= attr_val;
	} else {
		set_attr_val_off |= attr_val;
	}
}

static void
set_field_attribs (cb_tree fgc, cb_tree bgc, cb_tree scroll,
		   cb_tree timeout, cb_tree prompt, cb_tree size_is)
{
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
	/* [WITH] TIME-OUT [AFTER] */
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
}

static void
set_attribs (cb_tree fgc, cb_tree bgc, cb_tree scroll,
	     cb_tree timeout, cb_tree prompt, cb_tree size_is,
	     const cob_flags_t attrib)
{
	attach_attrib_to_cur_stmt ();
	set_field_attribs (fgc, bgc, scroll, timeout, prompt, size_is);

	current_statement->attr_ptr->dispattrs |= attrib;
}

static void
set_attribs_with_conflict  (cb_tree fgc, cb_tree bgc, cb_tree scroll,
			    cb_tree timeout, cb_tree prompt, cb_tree size_is,
			    const char *clause_name, const cob_flags_t attrib,
			    const char *confl_name, const cob_flags_t confl_attrib)
{
	attach_attrib_to_cur_stmt ();
	set_field_attribs (fgc, bgc, scroll, timeout, prompt, size_is);

	set_dispattr_with_conflict (clause_name, attrib, confl_name,
				    confl_attrib);
}

static int
zero_conflicting_flag (const int screen_flag, int parent_flag, const int flag1,
		       const int flag2)
{
	if (screen_flag & flag1) {
		parent_flag &= ~flag2;
	} else if (screen_flag & flag2) {
		parent_flag &= ~flag1;
	}

	return parent_flag;
}

static int
zero_conflicting_flags (const int screen_flag, int parent_flag)
{
	parent_flag = zero_conflicting_flag (screen_flag, parent_flag,
					     COB_SCREEN_BLANK_LINE,
					     COB_SCREEN_BLANK_SCREEN);
	parent_flag = zero_conflicting_flag (screen_flag, parent_flag,
					     COB_SCREEN_ERASE_EOL,
					     COB_SCREEN_ERASE_EOS);
	parent_flag = zero_conflicting_flag (screen_flag, parent_flag,
					     COB_SCREEN_HIGHLIGHT,
					     COB_SCREEN_LOWLIGHT);

	return parent_flag;
}

static void
check_and_set_usage (const enum cb_usage usage)
{
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	current_field->usage = usage;
}

static void
check_preceding_tallying_phrases (const enum tallying_phrase phrase)
{
	switch (phrase) {
	case FOR_PHRASE:
		if (previous_tallying_phrase == ALL_LEADING_TRAILING_PHRASES) {
			cb_error (_("FOR phrase cannot immediately follow ALL/LEADING/TRAILING"));
		} else if (previous_tallying_phrase == FOR_PHRASE) {
			cb_error (_("missing CHARACTERS/ALL/LEADING/TRAILING phrase after FOR phrase"));
		}
		break;

	case CHARACTERS_PHRASE:
	case ALL_LEADING_TRAILING_PHRASES:
		if (previous_tallying_phrase == NO_PHRASE) {
			cb_error (_("missing FOR phrase before CHARACTERS/ALL/LEADING/TRAILING phrase"));
		} else if (previous_tallying_phrase == CHARACTERS_PHRASE
			   || previous_tallying_phrase == ALL_LEADING_TRAILING_PHRASES) {
			cb_error (_("missing value between CHARACTERS/ALL/LEADING/TRAILING words"));
		}
		break;

	case VALUE_REGION_PHRASE:
		if (!(previous_tallying_phrase == ALL_LEADING_TRAILING_PHRASES
		      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
			cb_error (_("missing ALL/LEADING/TRAILING before value"));
		}
		break;

	default:
		/* This should never happen */
		cb_error (_("unexpected tallying phrase"));
		COBC_ABORT();
	}

	previous_tallying_phrase = phrase;
}

static int
has_relative_pos (struct cb_field const *field)
{
	return !!(field->screen_flag
		  & (COB_SCREEN_LINE_PLUS | COB_SCREEN_LINE_MINUS
		     | COB_SCREEN_COLUMN_PLUS | COB_SCREEN_COLUMN_MINUS));
}

static int
is_recursive_call (cb_tree target)
{
	const char *target_name = "";

	if (CB_LITERAL_P (target)) {
		target_name = (const char *)(CB_LITERAL(target)->data);
	} else if (CB_REFERENCE_P (target)
		   && CB_PROTOTYPE_P (cb_ref (target))) {
		target_name = CB_PROTOTYPE (cb_ref (target))->ext_name;
	}

	return !strcmp (target_name, current_program->orig_program_id);
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

static int
is_screen_field (cb_tree x)
{
	if (CB_FIELD_P (x)) {
		return (CB_FIELD (x))->storage == CB_STORAGE_SCREEN;
	} else if (CB_REFERENCE_P (x)) {
		return is_screen_field (cb_ref (x));
	} else {
		return 0;
	}
}

static void
error_if_no_advancing_in_screen_display (cb_tree advancing)
{
	if (advancing != cb_int1) {
		cb_error (_("cannot specify NO ADVANCING in screen DISPLAY"));
	}
}

static cb_tree
get_default_display_device (void)
{
	if (current_program->flag_console_is_crt
	    || cb_console_is_crt) {
		return cb_null;
	} else {
		return cb_int0;
	}
}

static COB_INLINE COB_A_INLINE int
contains_one_screen_field (struct cb_list *x_list)
{
	return (cb_tree) x_list != cb_null
		&& cb_list_length ((cb_tree) x_list) == 1
		&& is_screen_field (x_list->value);
}

static int
contains_only_screen_fields (struct cb_list *x_list)
{
	if ((cb_tree) x_list == cb_null) {
		return 0;
	}

	for (; x_list; x_list = (struct cb_list *) x_list->chain) {
		if (!is_screen_field (x_list->value)) {
			return 0;
		}
	}

	return 1;
}

static int
contains_fields_and_screens (struct cb_list *x_list)
{
	int	field_seen = 0;
	int	screen_seen = 0;

	if ((cb_tree) x_list == cb_null) {
		return 0;
	}

	for (; x_list; x_list = (struct cb_list *) x_list->chain) {
		if (is_screen_field (x_list->value)) {
			screen_seen = 1;
		} else {
			field_seen = 1;
		}
	}

	return screen_seen && field_seen;
}

static enum cb_display_type
deduce_display_type (cb_tree x_list, cb_tree upon_value, cb_tree line_column,
		     struct cb_attr_struct * const attr_ptr)
{
	int	using_default_device_which_is_crt =
		upon_value == NULL && get_default_display_device () == cb_null;

	if (contains_only_screen_fields ((struct cb_list *) x_list)) {
		if (!contains_one_screen_field ((struct cb_list *) x_list)
		    || attr_ptr) {
			cb_verify_x (x_list, cb_accept_display_extensions,
				     _("non-standard DISPLAY"));
		}

		if (upon_value != NULL && upon_value != cb_null) {
			cb_error_x (x_list, _("screens may only be displayed on CRT"));
		}

		return SCREEN_DISPLAY;
	} else if (contains_fields_and_screens ((struct cb_list *) x_list)) {
		cb_error_x (x_list, _("cannot mix screens and fields in the same DISPLAY statement"));
		return MIXED_DISPLAY;
	} else if (line_column || attr_ptr) {
		if (upon_value != NULL && upon_value != cb_null) {
			cb_error_x (x_list, _("screen clauses may only be used for DISPLAY on CRT"));
		}

		cb_verify_x (x_list, cb_accept_display_extensions,
			     _("non-standard DISPLAY"));

		return FIELD_ON_SCREEN_DISPLAY;
	} else if (upon_value == cb_null || using_default_device_which_is_crt) {
		/* This is the only format permitted by the standard */
		return FIELD_ON_SCREEN_DISPLAY;
	} else if (display_type == FIELD_ON_SCREEN_DISPLAY && upon_value == NULL) {
		/* This is for when fields without clauses follow fields with screen clauses */
		return FIELD_ON_SCREEN_DISPLAY;
	} else {
		return DEVICE_DISPLAY;
	}
}

static void
set_display_type (cb_tree x_list, cb_tree upon_value,
		  cb_tree line_column, struct cb_attr_struct * const attr_ptr)
{
	display_type = deduce_display_type (x_list, upon_value, line_column, attr_ptr);
}

static void
error_if_different_display_type (cb_tree x_list, cb_tree upon_value,
				 cb_tree line_column, struct cb_attr_struct * const attr_ptr)
{
        const enum cb_display_type	type =
		deduce_display_type (x_list, upon_value, line_column, attr_ptr);

	/* Avoid re-displaying the same error for mixed DISPLAYs */
	if (type == display_type || display_type == MIXED_DISPLAY) {
		return;
	}

	if (type != MIXED_DISPLAY) {
		if (type == SCREEN_DISPLAY || display_type == SCREEN_DISPLAY) {
			cb_error_x (x_list, _("cannot mix screens and fields in the same DISPLAY statement"));
		} else {
			/*
			  The only other option is that there is a mix of
			  FIELD_ON_SCREEN_DISPLAY and DEVICE_DISPLAY.
			*/
			cb_error_x (x_list, _("ambiguous DISPLAY; put items to display on device in separate DISPLAY"));
		}
	}

	display_type = MIXED_DISPLAY;
}

static void
error_if_not_usage_display_or_nonnumeric_lit (cb_tree x)
{
	const int	is_numeric_literal = CB_NUMERIC_LITERAL_P (x);
	const int	is_field_with_usage_not_display =
		CB_REFERENCE_P (x) && CB_FIELD_P (cb_ref (x))
		&& CB_FIELD (cb_ref (x))->usage != CB_USAGE_DISPLAY;

	if (is_numeric_literal) {
		cb_error_x (x, _("%s is not an alphanumeric literal"), CB_LITERAL (x)->data);
	} else if (is_field_with_usage_not_display) {
		cb_error_x (x, _("'%s' is not USAGE DISPLAY"), cb_name (x));
	}
}


#line 1609 "parser.c" /* yacc.c:339  */

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
    AREAS = 279,
    ARGUMENT_NUMBER = 280,
    ARGUMENT_VALUE = 281,
    AS = 282,
    ASCENDING = 283,
    ASCII = 284,
    ASSIGN = 285,
    AT = 286,
    ATTRIBUTE = 287,
    AUTO = 288,
    AUTOMATIC = 289,
    AWAY_FROM_ZERO = 290,
    BACKGROUND_COLOR = 291,
    BASED = 292,
    BEFORE = 293,
    BELL = 294,
    BINARY = 295,
    BINARY_C_LONG = 296,
    BINARY_CHAR = 297,
    BINARY_DOUBLE = 298,
    BINARY_LONG = 299,
    BINARY_SHORT = 300,
    BLANK = 301,
    BLINK = 302,
    BLOCK = 303,
    BOTTOM = 304,
    BY = 305,
    BYTE_LENGTH = 306,
    CALL = 307,
    CANCEL = 308,
    CAPACITY = 309,
    CF = 310,
    CH = 311,
    CHAINING = 312,
    CHARACTER = 313,
    CHARACTERS = 314,
    CLASS = 315,
    CLASSIFICATION = 316,
    CLASS_NAME = 317,
    CLOSE = 318,
    CODE = 319,
    CODE_SET = 320,
    COLLATING = 321,
    COL = 322,
    COLS = 323,
    COLUMN = 324,
    COLUMNS = 325,
    COMMA = 326,
    COMMAND_LINE = 327,
    COMMA_DELIM = 328,
    COMMIT = 329,
    COMMON = 330,
    COMP = 331,
    COMPUTE = 332,
    COMP_1 = 333,
    COMP_2 = 334,
    COMP_3 = 335,
    COMP_4 = 336,
    COMP_5 = 337,
    COMP_6 = 338,
    COMP_X = 339,
    CONCATENATE_FUNC = 340,
    CONDITION = 341,
    CONFIGURATION = 342,
    CONSTANT = 343,
    CONTAINS = 344,
    CONTENT = 345,
    CONTINUE = 346,
    CONTROL = 347,
    CONTROLS = 348,
    CONVERSION = 349,
    CONVERTING = 350,
    COPY = 351,
    CORRESPONDING = 352,
    COUNT = 353,
    CRT = 354,
    CRT_UNDER = 355,
    CURRENCY = 356,
    CURRENT_DATE_FUNC = 357,
    CURSOR = 358,
    CYCLE = 359,
    DATA = 360,
    DATE = 361,
    DAY = 362,
    DAY_OF_WEEK = 363,
    DE = 364,
    DEBUGGING = 365,
    DECIMAL_POINT = 366,
    DECLARATIVES = 367,
    DEFAULT = 368,
    DELETE = 369,
    DELIMITED = 370,
    DELIMITER = 371,
    DEPENDING = 372,
    DESCENDING = 373,
    DETAIL = 374,
    DISC = 375,
    DISK = 376,
    DISPLAY = 377,
    DISPLAY_OF_FUNC = 378,
    DIVIDE = 379,
    DIVISION = 380,
    DOWN = 381,
    DUPLICATES = 382,
    DYNAMIC = 383,
    EBCDIC = 384,
    EC = 385,
    ECHO = 386,
    EIGHTY_EIGHT = 387,
    ELSE = 388,
    END = 389,
    END_ACCEPT = 390,
    END_ADD = 391,
    END_CALL = 392,
    END_COMPUTE = 393,
    END_DELETE = 394,
    END_DISPLAY = 395,
    END_DIVIDE = 396,
    END_EVALUATE = 397,
    END_FUNCTION = 398,
    END_IF = 399,
    END_MULTIPLY = 400,
    END_PERFORM = 401,
    END_PROGRAM = 402,
    END_READ = 403,
    END_RETURN = 404,
    END_REWRITE = 405,
    END_SEARCH = 406,
    END_START = 407,
    END_STRING = 408,
    END_SUBTRACT = 409,
    END_UNSTRING = 410,
    END_WRITE = 411,
    ENTRY = 412,
    ENVIRONMENT = 413,
    ENVIRONMENT_NAME = 414,
    ENVIRONMENT_VALUE = 415,
    EOL = 416,
    EOP = 417,
    EOS = 418,
    EQUAL = 419,
    ERASE = 420,
    ERROR = 421,
    ESCAPE = 422,
    EVALUATE = 423,
    EVENT_STATUS = 424,
    EXCEPTION = 425,
    EXCEPTION_CONDITION = 426,
    EXCLUSIVE = 427,
    EXIT = 428,
    EXPONENTIATION = 429,
    EXTEND = 430,
    EXTERNAL = 431,
    F = 432,
    FD = 433,
    FILE_CONTROL = 434,
    FILE_ID = 435,
    FILLER = 436,
    FINAL = 437,
    FIRST = 438,
    FIXED = 439,
    FLOAT_BINARY_128 = 440,
    FLOAT_BINARY_32 = 441,
    FLOAT_BINARY_64 = 442,
    FLOAT_DECIMAL_16 = 443,
    FLOAT_DECIMAL_34 = 444,
    FLOAT_DECIMAL_7 = 445,
    FLOAT_EXTENDED = 446,
    FLOAT_LONG = 447,
    FLOAT_SHORT = 448,
    FOOTING = 449,
    FOR = 450,
    FOREGROUND_COLOR = 451,
    FOREVER = 452,
    FORMATTED_DATE_FUNC = 453,
    FORMATTED_DATETIME_FUNC = 454,
    FORMATTED_TIME_FUNC = 455,
    FREE = 456,
    FROM = 457,
    FROM_CRT = 458,
    FULL = 459,
    FUNCTION = 460,
    FUNCTION_ID = 461,
    FUNCTION_NAME = 462,
    GENERATE = 463,
    GIVING = 464,
    GLOBAL = 465,
    GO = 466,
    GOBACK = 467,
    GREATER = 468,
    GREATER_OR_EQUAL = 469,
    GRID = 470,
    GROUP = 471,
    HEADING = 472,
    HIGHLIGHT = 473,
    HIGH_VALUE = 474,
    ID = 475,
    IDENTIFICATION = 476,
    IF = 477,
    IGNORE = 478,
    IGNORING = 479,
    IN = 480,
    INDEX = 481,
    INDEXED = 482,
    INDICATE = 483,
    INITIALIZE = 484,
    INITIALIZED = 485,
    INITIATE = 486,
    INPUT = 487,
    INPUT_OUTPUT = 488,
    INSPECT = 489,
    INTO = 490,
    INTRINSIC = 491,
    INVALID = 492,
    INVALID_KEY = 493,
    IS = 494,
    I_O = 495,
    I_O_CONTROL = 496,
    JUSTIFIED = 497,
    KEPT = 498,
    KEY = 499,
    KEYBOARD = 500,
    LABEL = 501,
    LAST = 502,
    LEADING = 503,
    LEFT = 504,
    LEFTLINE = 505,
    LENGTH = 506,
    LENGTH_OF = 507,
    LESS = 508,
    LESS_OR_EQUAL = 509,
    LIMIT = 510,
    LIMITS = 511,
    LINAGE = 512,
    LINAGE_COUNTER = 513,
    LINE = 514,
    LINE_COUNTER = 515,
    LINES = 516,
    LINKAGE = 517,
    LITERAL = 518,
    LOCALE = 519,
    LOCALE_DATE_FUNC = 520,
    LOCALE_TIME_FUNC = 521,
    LOCALE_TIME_FROM_FUNC = 522,
    LOCAL_STORAGE = 523,
    LOCK = 524,
    LOWER = 525,
    LOWER_CASE_FUNC = 526,
    LOWLIGHT = 527,
    LOW_VALUE = 528,
    MANUAL = 529,
    MEMORY = 530,
    MERGE = 531,
    MINUS = 532,
    MNEMONIC_NAME = 533,
    MODE = 534,
    MOVE = 535,
    MULTIPLE = 536,
    MULTIPLY = 537,
    NAME = 538,
    NATIONAL = 539,
    NATIONAL_EDITED = 540,
    NATIONAL_OF_FUNC = 541,
    NATIVE = 542,
    NEAREST_AWAY_FROM_ZERO = 543,
    NEAREST_EVEN = 544,
    NEAREST_TOWARD_ZERO = 545,
    NEGATIVE = 546,
    NEXT = 547,
    NEXT_PAGE = 548,
    NO = 549,
    NO_ECHO = 550,
    NORMAL = 551,
    NOT = 552,
    NOTHING = 553,
    NOT_END = 554,
    NOT_EOP = 555,
    NOT_ESCAPE = 556,
    NOT_EQUAL = 557,
    NOT_EXCEPTION = 558,
    NOT_INVALID_KEY = 559,
    NOT_OVERFLOW = 560,
    NOT_SIZE_ERROR = 561,
    NO_ADVANCING = 562,
    NUMBER = 563,
    NUMBERS = 564,
    NUMERIC = 565,
    NUMERIC_EDITED = 566,
    NUMVALC_FUNC = 567,
    OBJECT_COMPUTER = 568,
    OCCURS = 569,
    OF = 570,
    OFF = 571,
    OMITTED = 572,
    ON = 573,
    ONLY = 574,
    OPEN = 575,
    OPTIONAL = 576,
    OR = 577,
    ORDER = 578,
    ORGANIZATION = 579,
    OTHER = 580,
    OUTPUT = 581,
    OVERLINE = 582,
    PACKED_DECIMAL = 583,
    PADDING = 584,
    PAGE = 585,
    PAGE_COUNTER = 586,
    PARAGRAPH = 587,
    PERFORM = 588,
    PH = 589,
    PF = 590,
    PICTURE = 591,
    PICTURE_SYMBOL = 592,
    PLUS = 593,
    POINTER = 594,
    POSITION = 595,
    POSITIVE = 596,
    PRESENT = 597,
    PREVIOUS = 598,
    PRINT = 599,
    PRINTER = 600,
    PRINTER_1 = 601,
    PRINTING = 602,
    PROCEDURE = 603,
    PROCEDURES = 604,
    PROCEED = 605,
    PROGRAM = 606,
    PROGRAM_ID = 607,
    PROGRAM_NAME = 608,
    PROGRAM_POINTER = 609,
    PROHIBITED = 610,
    PROMPT = 611,
    PROTECTED = 612,
    QUOTE = 613,
    RANDOM = 614,
    RD = 615,
    READ = 616,
    READY_TRACE = 617,
    RECORD = 618,
    RECORDING = 619,
    RECORDS = 620,
    RECURSIVE = 621,
    REDEFINES = 622,
    REEL = 623,
    REFERENCE = 624,
    REFERENCES = 625,
    RELATIVE = 626,
    RELEASE = 627,
    REMAINDER = 628,
    REMOVAL = 629,
    RENAMES = 630,
    REPLACE = 631,
    REPLACING = 632,
    REPORT = 633,
    REPORTING = 634,
    REPORTS = 635,
    REPOSITORY = 636,
    REQUIRED = 637,
    RESERVE = 638,
    RESET = 639,
    RESET_TRACE = 640,
    RETRY = 641,
    RETURN = 642,
    RETURNING = 643,
    REVERSE = 644,
    REVERSE_FUNC = 645,
    REVERSE_VIDEO = 646,
    REVERSED = 647,
    REWIND = 648,
    REWRITE = 649,
    RF = 650,
    RH = 651,
    RIGHT = 652,
    ROLLBACK = 653,
    ROUNDED = 654,
    RUN = 655,
    S = 656,
    SAME = 657,
    SCREEN = 658,
    SCREEN_CONTROL = 659,
    SCROLL = 660,
    SD = 661,
    SEARCH = 662,
    SECONDS = 663,
    SECTION = 664,
    SECURE = 665,
    SEGMENT_LIMIT = 666,
    SELECT = 667,
    SEMI_COLON = 668,
    SENTENCE = 669,
    SEPARATE = 670,
    SEQUENCE = 671,
    SEQUENTIAL = 672,
    SET = 673,
    SEVENTY_EIGHT = 674,
    SHARING = 675,
    SIGN = 676,
    SIGNED = 677,
    SIGNED_INT = 678,
    SIGNED_LONG = 679,
    SIGNED_SHORT = 680,
    SIXTY_SIX = 681,
    SIZE = 682,
    SIZE_ERROR = 683,
    SORT = 684,
    SORT_MERGE = 685,
    SOURCE = 686,
    SOURCE_COMPUTER = 687,
    SPACE = 688,
    SPECIAL_NAMES = 689,
    STANDARD = 690,
    STANDARD_1 = 691,
    STANDARD_2 = 692,
    START = 693,
    STATIC = 694,
    STATUS = 695,
    STDCALL = 696,
    STEP = 697,
    STOP = 698,
    STRING = 699,
    SUBSTITUTE_FUNC = 700,
    SUBSTITUTE_CASE_FUNC = 701,
    SUBTRACT = 702,
    SUM = 703,
    SUPPRESS = 704,
    SYMBOLIC = 705,
    SYNCHRONIZED = 706,
    SYSTEM_DEFAULT = 707,
    SYSTEM_OFFSET = 708,
    TAB = 709,
    TALLYING = 710,
    TAPE = 711,
    TERMINATE = 712,
    TEST = 713,
    THAN = 714,
    THEN = 715,
    THRU = 716,
    TIME = 717,
    TIME_OUT = 718,
    TIMES = 719,
    TO = 720,
    TOK_AMPER = 721,
    TOK_CLOSE_PAREN = 722,
    TOK_COLON = 723,
    TOK_DIV = 724,
    TOK_DOT = 725,
    TOK_EQUAL = 726,
    TOK_FALSE = 727,
    TOK_FILE = 728,
    TOK_GREATER = 729,
    TOK_INITIAL = 730,
    TOK_LESS = 731,
    TOK_MINUS = 732,
    TOK_MUL = 733,
    TOK_NULL = 734,
    TOK_OVERFLOW = 735,
    TOK_OPEN_PAREN = 736,
    TOK_PLUS = 737,
    TOK_TRUE = 738,
    TOP = 739,
    TOWARD_GREATER = 740,
    TOWARD_LESSER = 741,
    TRAILING = 742,
    TRANSFORM = 743,
    TRIM_FUNC = 744,
    TRUNCATION = 745,
    TYPE = 746,
    U = 747,
    UNDERLINE = 748,
    UNIT = 749,
    UNLOCK = 750,
    UNSIGNED = 751,
    UNSIGNED_INT = 752,
    UNSIGNED_LONG = 753,
    UNSIGNED_SHORT = 754,
    UNSTRING = 755,
    UNTIL = 756,
    UP = 757,
    UPDATE = 758,
    UPON = 759,
    UPON_ARGUMENT_NUMBER = 760,
    UPON_COMMAND_LINE = 761,
    UPON_ENVIRONMENT_NAME = 762,
    UPON_ENVIRONMENT_VALUE = 763,
    UPPER = 764,
    UPPER_CASE_FUNC = 765,
    USAGE = 766,
    USE = 767,
    USER = 768,
    USER_DEFAULT = 769,
    USER_FUNCTION_NAME = 770,
    USING = 771,
    V = 772,
    VALUE = 773,
    VARIABLE = 774,
    VARYING = 775,
    WAIT = 776,
    WHEN = 777,
    WHEN_COMPILED_FUNC = 778,
    WITH = 779,
    WORD = 780,
    WORDS = 781,
    WORKING_STORAGE = 782,
    WRITE = 783,
    YYYYDDD = 784,
    YYYYMMDD = 785,
    ZERO = 786,
    SHIFT_PREFER = 787,
    OVERFLOW = 788
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

#line 2195 "parser.c" /* yacc.c:358  */

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
#define YYLAST   9200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  534
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  885
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2037
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2892

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   788

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
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  2208,  2208,  2208,  2241,  2242,  2246,  2247,  2251,  2252,
    2256,  2256,  2279,  2290,  2296,  2297,  2301,  2302,  2306,  2314,
    2323,  2331,  2332,  2333,  2338,  2342,  2337,  2358,  2357,  2373,
    2384,  2388,  2389,  2393,  2394,  2397,  2398,  2402,  2411,  2420,
    2421,  2428,  2429,  2433,  2437,  2447,  2452,  2453,  2462,  2469,
    2470,  2480,  2481,  2482,  2483,  2484,  2497,  2496,  2506,  2507,
    2510,  2511,  2525,  2524,  2534,  2535,  2536,  2537,  2541,  2542,
    2546,  2547,  2548,  2549,  2553,  2561,  2568,  2575,  2586,  2590,
    2594,  2598,  2605,  2606,  2611,  2613,  2612,  2623,  2624,  2625,
    2632,  2633,  2637,  2641,  2647,  2648,  2658,  2663,  2673,  2674,
    2686,  2687,  2691,  2692,  2696,  2697,  2701,  2702,  2703,  2704,
    2705,  2706,  2707,  2708,  2709,  2710,  2711,  2712,  2720,  2719,
    2747,  2758,  2771,  2779,  2782,  2783,  2787,  2794,  2809,  2830,
    2829,  2853,  2859,  2865,  2871,  2877,  2883,  2893,  2897,  2904,
    2908,  2913,  2912,  2923,  2927,  2934,  2935,  2936,  2937,  2938,
    2939,  2943,  2944,  2951,  2966,  2969,  2976,  2984,  2988,  2999,
    3019,  3027,  3038,  3039,  3045,  3066,  3067,  3071,  3075,  3096,
    3119,  3194,  3197,  3206,  3225,  3241,  3259,  3277,  3294,  3311,
    3321,  3322,  3329,  3330,  3338,  3339,  3349,  3350,  3355,  3354,
    3384,  3385,  3389,  3390,  3391,  3392,  3393,  3394,  3395,  3396,
    3397,  3398,  3399,  3400,  3401,  3408,  3414,  3424,  3437,  3450,
    3477,  3478,  3479,  3483,  3484,  3485,  3486,  3489,  3490,  3496,
    3497,  3501,  3505,  3506,  3511,  3514,  3515,  3522,  3530,  3531,
    3532,  3539,  3563,  3565,  3570,  3580,  3588,  3603,  3610,  3612,
    3613,  3619,  3619,  3626,  3631,  3636,  3643,  3644,  3645,  3649,
    3660,  3661,  3665,  3670,  3675,  3680,  3691,  3702,  3712,  3720,
    3721,  3722,  3728,  3739,  3746,  3747,  3753,  3761,  3762,  3763,
    3769,  3770,  3771,  3778,  3779,  3783,  3784,  3790,  3818,  3819,
    3820,  3821,  3828,  3827,  3843,  3844,  3848,  3851,  3852,  3862,
    3859,  3875,  3876,  3884,  3885,  3893,  3894,  3898,  3919,  3918,
    3935,  3942,  3946,  3952,  3953,  3957,  3967,  3982,  3983,  3984,
    3985,  3986,  3987,  3988,  3989,  3990,  3997,  4004,  4004,  4004,
    4010,  4030,  4064,  4095,  4096,  4103,  4104,  4108,  4109,  4116,
    4127,  4132,  4143,  4144,  4148,  4149,  4155,  4166,  4184,  4185,
    4189,  4190,  4191,  4195,  4202,  4209,  4218,  4227,  4228,  4229,
    4230,  4231,  4240,  4241,  4247,  4282,  4283,  4296,  4311,  4312,
    4316,  4326,  4340,  4342,  4341,  4357,  4360,  4360,  4377,  4378,
    4382,  4383,  4384,  4386,  4385,  4400,  4413,  4421,  4426,  4432,
    4436,  4446,  4449,  4461,  4462,  4463,  4464,  4468,  4472,  4476,
    4480,  4484,  4488,  4492,  4496,  4500,  4504,  4508,  4512,  4516,
    4527,  4528,  4532,  4533,  4537,  4538,  4539,  4543,  4544,  4548,
    4573,  4576,  4584,  4583,  4596,  4620,  4619,  4633,  4637,  4646,
    4650,  4659,  4660,  4661,  4662,  4663,  4664,  4665,  4666,  4667,
    4668,  4669,  4670,  4671,  4678,  4702,  4730,  4733,  4741,  4742,
    4746,  4771,  4782,  4783,  4787,  4791,  4795,  4799,  4803,  4807,
    4811,  4815,  4819,  4823,  4827,  4831,  4835,  4840,  4845,  4849,
    4853,  4861,  4865,  4869,  4877,  4881,  4885,  4889,  4893,  4897,
    4901,  4905,  4909,  4917,  4925,  4929,  4933,  4937,  4941,  4945,
    4953,  4954,  4958,  4959,  4965,  4972,  4985,  4994,  4995,  5004,
    5011,  5029,  5030,  5034,  5035,  5038,  5039,  5045,  5046,  5053,
    5054,  5061,  5085,  5086,  5103,  5104,  5107,  5108,  5115,  5116,
    5121,  5132,  5143,  5154,  5165,  5194,  5193,  5202,  5203,  5207,
    5208,  5211,  5212,  5224,  5233,  5247,  5249,  5248,  5268,  5270,
    5269,  5285,  5287,  5286,  5295,  5296,  5303,  5302,  5315,  5316,
    5317,  5324,  5329,  5333,  5334,  5340,  5347,  5351,  5352,  5358,
    5395,  5399,  5404,  5410,  5411,  5416,  5417,  5418,  5419,  5420,
    5424,  5431,  5438,  5445,  5452,  5458,  5459,  5464,  5463,  5470,
    5471,  5475,  5476,  5477,  5478,  5479,  5480,  5481,  5482,  5483,
    5484,  5485,  5486,  5487,  5488,  5489,  5490,  5494,  5501,  5502,
    5503,  5504,  5505,  5506,  5507,  5510,  5511,  5512,  5515,  5516,
    5520,  5527,  5533,  5534,  5538,  5539,  5543,  5550,  5554,  5561,
    5562,  5566,  5573,  5574,  5578,  5579,  5583,  5584,  5585,  5589,
    5590,  5594,  5595,  5599,  5606,  5613,  5621,  5623,  5622,  5643,
    5644,  5648,  5649,  5653,  5655,  5654,  5714,  5732,  5733,  5737,
    5742,  5747,  5751,  5755,  5760,  5765,  5770,  5775,  5779,  5783,
    5788,  5793,  5798,  5803,  5808,  5813,  5822,  5826,  5830,  5835,
    5839,  5843,  5848,  5853,  5858,  5863,  5864,  5865,  5866,  5867,
    5868,  5869,  5870,  5871,  5880,  5885,  5896,  5897,  5901,  5902,
    5906,  5907,  5911,  5912,  5917,  5920,  5924,  5932,  5935,  5939,
    5947,  5958,  5966,  5968,  5978,  5967,  6005,  6005,  6038,  6042,
    6041,  6055,  6054,  6074,  6075,  6080,  6102,  6104,  6108,  6119,
    6121,  6129,  6137,  6145,  6174,  6207,  6210,  6223,  6228,  6238,
    6269,  6271,  6270,  6307,  6308,  6312,  6313,  6314,  6331,  6332,
    6343,  6342,  6392,  6393,  6397,  6445,  6465,  6468,  6487,  6492,
    6486,  6505,  6505,  6535,  6542,  6543,  6544,  6545,  6546,  6547,
    6548,  6549,  6550,  6551,  6552,  6553,  6554,  6555,  6556,  6557,
    6558,  6559,  6560,  6561,  6562,  6563,  6564,  6565,  6566,  6567,
    6568,  6569,  6570,  6571,  6572,  6573,  6574,  6575,  6576,  6577,
    6578,  6579,  6580,  6581,  6582,  6583,  6584,  6585,  6586,  6587,
    6588,  6589,  6590,  6591,  6605,  6617,  6616,  6627,  6626,  6651,
    6655,  6659,  6664,  6669,  6674,  6679,  6683,  6687,  6691,  6695,
    6700,  6704,  6708,  6712,  6716,  6720,  6724,  6731,  6732,  6738,
    6740,  6744,  6745,  6749,  6750,  6754,  6758,  6759,  6768,  6769,
    6773,  6789,  6805,  6818,  6822,  6823,  6827,  6834,  6840,  6846,
    6851,  6856,  6861,  6866,  6872,  6877,  6883,  6889,  6900,  6905,
    6910,  6915,  6920,  6925,  6931,  6936,  6941,  6946,  6952,  6958,
    6964,  6969,  6974,  6981,  6988,  6997,  6998,  6999,  7003,  7004,
    7005,  7009,  7010,  7014,  7018,  7036,  7035,  7044,  7048,  7052,
    7058,  7059,  7066,  7070,  7081,  7080,  7089,  7093,  7105,  7106,
    7114,  7113,  7122,  7123,  7127,  7133,  7133,  7140,  7139,  7152,
    7151,  7185,  7189,  7194,  7199,  7219,  7220,  7228,  7232,  7231,
    7248,  7249,  7254,  7262,  7286,  7288,  7292,  7301,  7314,  7317,
    7321,  7325,  7330,  7353,  7354,  7358,  7359,  7363,  7367,  7371,
    7382,  7386,  7393,  7397,  7405,  7409,  7416,  7423,  7427,  7438,
    7437,  7449,  7453,  7460,  7461,  7471,  7470,  7478,  7483,  7491,
    7492,  7493,  7494,  7495,  7503,  7502,  7511,  7518,  7522,  7532,
    7543,  7561,  7560,  7569,  7573,  7577,  7582,  7590,  7594,  7605,
    7604,  7616,  7620,  7624,  7628,  7632,  7636,  7644,  7653,  7654,
    7659,  7658,  7703,  7707,  7715,  7716,  7720,  7724,  7729,  7733,
    7734,  7738,  7742,  7746,  7750,  7757,  7758,  7762,  7767,  7773,
    7779,  7784,  7789,  7795,  7801,  7807,  7813,  7818,  7823,  7828,
    7833,  7838,  7843,  7850,  7860,  7864,  7875,  7874,  7883,  7887,
    7891,  7895,  7899,  7906,  7910,  7921,  7920,  7929,  7948,  7947,
    7971,  7979,  7980,  7985,  7996,  8007,  8021,  8025,  8032,  8033,
    8038,  8047,  8056,  8061,  8070,  8071,  8076,  8138,  8139,  8140,
    8144,  8145,  8149,  8153,  8164,  8163,  8175,  8176,  8197,  8211,
    8233,  8255,  8275,  8298,  8299,  8307,  8306,  8315,  8326,  8325,
    8335,  8342,  8341,  8354,  8363,  8367,  8378,  8394,  8393,  8402,
    8406,  8410,  8417,  8421,  8432,  8431,  8439,  8447,  8448,  8452,
    8453,  8454,  8459,  8462,  8469,  8473,  8481,  8488,  8489,  8490,
    8491,  8492,  8493,  8494,  8499,  8502,  8512,  8511,  8520,  8526,
    8538,  8537,  8546,  8550,  8551,  8552,  8556,  8557,  8558,  8559,
    8566,  8565,  8586,  8596,  8605,  8609,  8616,  8621,  8626,  8631,
    8636,  8641,  8649,  8650,  8654,  8659,  8665,  8667,  8668,  8669,
    8670,  8674,  8702,  8705,  8709,  8713,  8717,  8724,  8731,  8741,
    8740,  8753,  8752,  8760,  8764,  8775,  8774,  8783,  8787,  8794,
    8798,  8809,  8808,  8816,  8817,  8821,  8846,  8847,  8848,  8849,
    8853,  8854,  8858,  8859,  8860,  8861,  8873,  8872,  8884,  8891,
    8890,  8902,  8911,  8919,  8926,  8930,  8943,  8950,  8962,  8965,
    8970,  8974,  8985,  8992,  8993,  8997,  8998,  9001,  9002,  9007,
    9018,  9017,  9026,  9055,  9056,  9060,  9064,  9068,  9072,  9079,
    9080,  9084,  9088,  9091,  9093,  9097,  9106,  9107,  9108,  9111,
    9113,  9117,  9118,  9122,  9130,  9131,  9135,  9136,  9140,  9144,
    9154,  9165,  9164,  9172,  9182,  9193,  9192,  9201,  9208,  9212,
    9223,  9222,  9234,  9243,  9246,  9250,  9254,  9261,  9265,  9275,
    9287,  9286,  9295,  9299,  9308,  9309,  9314,  9317,  9325,  9329,
    9336,  9344,  9348,  9359,  9358,  9372,  9373,  9374,  9375,  9376,
    9377,  9378,  9382,  9383,  9387,  9388,  9394,  9403,  9410,  9411,
    9415,  9419,  9423,  9429,  9435,  9439,  9443,  9447,  9456,  9460,
    9469,  9478,  9479,  9483,  9492,  9493,  9497,  9501,  9510,  9520,
    9519,  9528,  9527,  9559,  9562,  9582,  9583,  9586,  9587,  9595,
    9596,  9601,  9606,  9616,  9632,  9637,  9647,  9664,  9663,  9673,
    9686,  9689,  9697,  9700,  9705,  9710,  9718,  9719,  9720,  9721,
    9722,  9723,  9727,  9735,  9736,  9740,  9744,  9755,  9754,  9764,
    9777,  9780,  9784,  9788,  9796,  9808,  9811,  9818,  9819,  9820,
    9821,  9828,  9827,  9837,  9844,  9845,  9849,  9864,  9865,  9870,
    9871,  9875,  9876,  9880,  9884,  9895,  9894,  9903,  9907,  9911,
    9918,  9922,  9932,  9943,  9944,  9951,  9950,  9959,  9965,  9977,
    9976,  9984,  9998,  9997, 10005, 10022, 10021, 10030, 10038, 10039,
   10044, 10045, 10050, 10057, 10058, 10063, 10070, 10071, 10075, 10076,
   10080, 10081, 10085, 10089, 10100, 10099, 10108, 10109, 10110, 10111,
   10112, 10116, 10143, 10146, 10158, 10168, 10173, 10178, 10183, 10191,
   10229, 10230, 10234, 10274, 10284, 10307, 10308, 10309, 10310, 10314,
   10323, 10329, 10339, 10348, 10357, 10358, 10365, 10364, 10376, 10386,
   10387, 10392, 10395, 10399, 10403, 10410, 10411, 10415, 10416, 10417,
   10421, 10425, 10437, 10438, 10439, 10449, 10453, 10460, 10468, 10469,
   10473, 10474, 10478, 10486, 10487, 10492, 10493, 10494, 10504, 10508,
   10515, 10523, 10524, 10528, 10538, 10539, 10540, 10550, 10554, 10561,
   10569, 10570, 10574, 10584, 10585, 10586, 10596, 10600, 10607, 10615,
   10616, 10620, 10631, 10632, 10639, 10641, 10650, 10654, 10661, 10669,
   10670, 10674, 10684, 10685, 10695, 10699, 10706, 10714, 10715, 10719,
   10729, 10730, 10734, 10735, 10745, 10749, 10756, 10764, 10765, 10769,
   10779, 10783, 10793, 10800, 10807, 10807, 10818, 10819, 10820, 10824,
   10825, 10827, 10828, 10830, 10831, 10832, 10833, 10834, 10836, 10837,
   10838, 10839, 10840, 10841, 10843, 10844, 10845, 10847, 10848, 10849,
   10850, 10851, 10854, 10855, 10859, 10860, 10864, 10865, 10869, 10870,
   10874, 10878, 10884, 10888, 10894, 10895, 10896, 10900, 10901, 10902,
   10906, 10907, 10908, 10912, 10916, 10920, 10921, 10922, 10925, 10926,
   10936, 10948, 10957, 10969, 10978, 10990, 11005, 11006, 11011, 11020,
   11026, 11048, 11052, 11073, 11114, 11128, 11129, 11134, 11140, 11141,
   11146, 11158, 11159, 11160, 11167, 11178, 11179, 11183, 11191, 11199,
   11203, 11210, 11219, 11220, 11226, 11235, 11246, 11263, 11267, 11274,
   11275, 11276, 11283, 11284, 11288, 11292, 11299, 11300, 11304, 11305,
   11309, 11310, 11311, 11312, 11316, 11320, 11324, 11328, 11332, 11353,
   11357, 11364, 11365, 11366, 11370, 11371, 11372, 11373, 11374, 11378,
   11382, 11389, 11390, 11394, 11395, 11399, 11406, 11413, 11414, 11415,
   11419, 11420, 11424, 11428, 11432, 11436, 11437, 11441, 11445, 11446,
   11453, 11457, 11461, 11465, 11469, 11473, 11474, 11480, 11484, 11488,
   11489, 11493, 11500, 11510, 11529, 11547, 11554, 11561, 11568, 11578,
   11585, 11595, 11605, 11615, 11628, 11632, 11640, 11648, 11652, 11662,
   11676, 11699, 11721, 11737, 11738, 11739, 11740, 11741, 11742, 11746,
   11750, 11767, 11771, 11778, 11779, 11780, 11781, 11782, 11783, 11784,
   11790, 11794, 11798, 11802, 11806, 11810, 11814, 11818, 11822, 11826,
   11830, 11834, 11841, 11842, 11846, 11847, 11848, 11852, 11853, 11854,
   11855, 11859, 11863, 11867, 11874, 11878, 11882, 11889, 11896, 11903,
   11913, 11920, 11930, 11937, 11947, 11951, 11964, 11968, 11983, 11991,
   11992, 11996, 11997, 12001, 12002, 12007, 12010, 12018, 12021, 12028,
   12030, 12031, 12035, 12036, 12040, 12041, 12042, 12047, 12050, 12063,
   12067, 12075, 12079, 12083, 12087, 12091, 12095, 12099, 12103, 12110,
   12111, 12117, 12121, 12125, 12132, 12133, 12134, 12135, 12136, 12137,
   12138, 12139, 12140, 12141, 12142, 12143, 12144, 12145, 12146, 12147,
   12148, 12149, 12150, 12151, 12152, 12153, 12154, 12155, 12156, 12157,
   12158, 12159, 12160, 12161, 12162, 12163, 12164, 12165, 12166, 12167,
   12168, 12169, 12170, 12171, 12172, 12173, 12174, 12175, 12176, 12177,
   12178, 12179, 12180, 12184, 12185, 12186, 12187, 12188, 12189, 12190,
   12191, 12192, 12193, 12194, 12195, 12196, 12197, 12198, 12199, 12200,
   12201, 12202, 12203, 12210, 12210, 12211, 12211, 12212, 12212, 12213,
   12213, 12214, 12214, 12214, 12215, 12215, 12216, 12216, 12217, 12217,
   12218, 12218, 12219, 12219, 12220, 12220, 12221, 12221, 12222, 12222,
   12223, 12223, 12224, 12224, 12225, 12225, 12226, 12226, 12227, 12227,
   12228, 12228, 12229, 12229, 12230, 12230, 12230, 12231, 12231, 12232,
   12232, 12233, 12233, 12234, 12234, 12235, 12235, 12235, 12236, 12236,
   12237, 12237, 12237, 12238, 12238, 12238, 12239, 12239, 12239, 12240,
   12240, 12241, 12241, 12242, 12242, 12243, 12243, 12243, 12244, 12244,
   12245, 12245, 12246, 12246, 12246, 12246, 12247, 12247, 12248, 12248,
   12249, 12249, 12250, 12250, 12251, 12251, 12251, 12252, 12252, 12253,
   12253, 12254, 12254, 12255, 12255, 12255, 12256, 12256, 12257, 12257,
   12258, 12258, 12259, 12259, 12260, 12260, 12261, 12261, 12262, 12262,
   12263, 12263, 12263, 12264, 12264, 12265, 12265, 12266, 12266, 12270,
   12270, 12271, 12271, 12272, 12272, 12273, 12273, 12274, 12274, 12275,
   12275, 12276, 12276, 12277, 12277, 12278, 12278, 12279, 12279, 12280,
   12280, 12281, 12281, 12282, 12282, 12283, 12283, 12284, 12284, 12287,
   12288, 12289, 12293, 12293, 12294, 12294, 12295, 12295, 12296, 12296,
   12297, 12297, 12298, 12298, 12299, 12299, 12300, 12300
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
  "AND", "ANY", "ARE", "AREA", "AREAS", "\"ARGUMENT-NUMBER\"",
  "\"ARGUMENT-VALUE\"", "AS", "ASCENDING", "ASCII", "ASSIGN", "AT",
  "ATTRIBUTE", "AUTO", "AUTOMATIC", "\"AWAY-FROM-ZERO\"",
  "\"BACKGROUND-COLOR\"", "BASED", "BEFORE", "BELL", "BINARY",
  "\"BINARY-C-LONG\"", "\"BINARY-CHAR\"", "\"BINARY-DOUBLE\"",
  "\"BINARY-LONG\"", "\"BINARY-SHORT\"", "BLANK", "BLINK", "BLOCK",
  "BOTTOM", "BY", "\"BYTE-LENGTH\"", "CALL", "CANCEL", "CAPACITY", "CF",
  "CH", "CHAINING", "CHARACTER", "CHARACTERS", "CLASS", "CLASSIFICATION",
  "\"class-name\"", "CLOSE", "CODE", "\"CODE-SET\"", "COLLATING", "COL",
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
  "DYNAMIC", "EBCDIC", "EC", "ECHO", "\"88\"", "ELSE", "END",
  "\"END-ACCEPT\"", "\"END-ADD\"", "\"END-CALL\"", "\"END-COMPUTE\"",
  "\"END-DELETE\"", "\"END-DISPLAY\"", "\"END-DIVIDE\"",
  "\"END-EVALUATE\"", "\"END FUNCTION\"", "\"END-IF\"", "\"END-MULTIPLY\"",
  "\"END-PERFORM\"", "\"END PROGRAM\"", "\"END-READ\"", "\"END-RETURN\"",
  "\"END-REWRITE\"", "\"END-SEARCH\"", "\"END-START\"", "\"END-STRING\"",
  "\"END-SUBTRACT\"", "\"END-UNSTRING\"", "\"END-WRITE\"", "ENTRY",
  "ENVIRONMENT", "\"ENVIRONMENT-NAME\"", "\"ENVIRONMENT-VALUE\"", "EOL",
  "EOP", "EOS", "EQUAL", "ERASE", "ERROR", "ESCAPE", "EVALUATE",
  "\"EVENT STATUS\"", "EXCEPTION", "\"EXCEPTION CONDITION\"", "EXCLUSIVE",
  "EXIT", "\"Exponentiation operator\"", "EXTEND", "EXTERNAL", "F", "FD",
  "\"FILE-CONTROL\"", "\"FILE-ID\"", "FILLER", "FINAL", "FIRST", "FIXED",
  "\"FLOAT-BINARY-128\"", "\"FLOAT-BINARY-32\"", "\"FLOAT-BINARY-64\"",
  "\"FLOAT-DECIMAL-16\"", "\"FLOAT-DECIMAL-34\"", "\"FLOAT-DECIMAL-7\"",
  "\"FLOAT-EXTENDED\"", "\"FLOAT-LONG\"", "\"FLOAT-SHORT\"", "FOOTING",
  "FOR", "\"FOREGROUND-COLOR\"", "FOREVER", "\"FUNCTION FORMATTED-DATE\"",
  "\"FUNCTION FORMATTED-DATETIME\"", "\"FUNCTION FORMATTED-TIME\"", "FREE",
  "FROM", "\"FROM CRT\"", "FULL", "FUNCTION", "\"FUNCTION-ID\"",
  "\"Intrinsic function name\"", "GENERATE", "GIVING", "GLOBAL", "GO",
  "GOBACK", "GREATER", "\"GREATER OR EQUAL\"", "GRID", "GROUP", "HEADING",
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
  "MANUAL", "MEMORY", "MERGE", "MINUS", "\"Mnemonic name\"", "MODE",
  "MOVE", "MULTIPLE", "MULTIPLY", "NAME", "NATIONAL",
  "\"NATIONAL-EDITED\"", "\"FUNCTION NATIONAL-OF\"", "NATIVE",
  "\"NEAREST-AWAY-FROM-ZERO\"", "\"NEAREST-EVEN\"",
  "\"NEAREST-TOWARD-ZERO\"", "NEGATIVE", "NEXT", "\"NEXT PAGE\"", "NO",
  "\"NO-ECHO\"", "NORMAL", "NOT", "NOTHING", "\"NOT END\"", "\"NOT EOP\"",
  "\"NOT ESCAPE\"", "\"NOT EQUAL\"", "\"NOT EXCEPTION\"",
  "\"NOT INVALID KEY\"", "\"NOT OVERFLOW\"", "\"NOT SIZE ERROR\"",
  "\"NO ADVANCING\"", "NUMBER", "NUMBERS", "NUMERIC", "\"NUMERIC-EDITED\"",
  "\"FUNCTION NUMVAL-C\"", "\"OBJECT-COMPUTER\"", "OCCURS", "OF", "OFF",
  "OMITTED", "ON", "ONLY", "OPEN", "OPTIONAL", "OR", "ORDER",
  "ORGANIZATION", "OTHER", "OUTPUT", "OVERLINE", "\"PACKED-DECIMAL\"",
  "PADDING", "PAGE", "\"PAGE-COUNTER\"", "PARAGRAPH", "PERFORM", "PH",
  "PF", "PICTURE", "\"PICTURE SYMBOL\"", "PLUS", "POINTER", "POSITION",
  "POSITIVE", "PRESENT", "PREVIOUS", "PRINT", "PRINTER", "PRINTER_1",
  "PRINTING", "PROCEDURE", "PROCEDURES", "PROCEED", "PROGRAM",
  "\"PROGRAM-ID\"", "\"Program name\"", "\"PROGRAM-POINTER\"",
  "PROHIBITED", "PROMPT", "\"PROTECTED\"", "QUOTE", "RANDOM", "RD", "READ",
  "\"READY TRACE\"", "RECORD", "RECORDING", "RECORDS", "RECURSIVE",
  "REDEFINES", "REEL", "REFERENCE", "REFERENCES", "RELATIVE", "RELEASE",
  "REMAINDER", "REMOVAL", "RENAMES", "REPLACE", "REPLACING", "REPORT",
  "REPORTING", "REPORTS", "REPOSITORY", "REQUIRED", "RESERVE", "RESET",
  "\"RESET TRACE\"", "RETRY", "RETURN", "RETURNING", "REVERSE",
  "\"FUNCTION REVERSE\"", "\"REVERSE-VIDEO\"", "REVERSED", "REWIND",
  "REWRITE", "RF", "RH", "RIGHT", "ROLLBACK", "ROUNDED", "RUN", "S",
  "SAME", "SCREEN", "\"SCREEN-CONTROL\"", "SCROLL", "SD", "SEARCH",
  "SECONDS", "SECTION", "SECURE", "\"SEGMENT-LIMIT\"", "SELECT",
  "\"semi-colon\"", "SENTENCE", "SEPARATE", "SEQUENCE", "SEQUENTIAL",
  "SET", "\"78\"", "SHARING", "SIGN", "SIGNED", "\"SIGNED-INT\"",
  "\"SIGNED-LONG\"", "\"SIGNED-SHORT\"", "\"66\"", "SIZE",
  "\"SIZE ERROR\"", "SORT", "\"SORT-MERGE\"", "SOURCE",
  "\"SOURCE-COMPUTER\"", "SPACE", "\"SPECIAL-NAMES\"", "STANDARD",
  "\"STANDARD-1\"", "\"STANDARD-2\"", "START", "STATIC", "STATUS",
  "STDCALL", "STEP", "STOP", "STRING", "\"FUNCTION SUBSTITUTE\"",
  "\"FUNCTION SUBSTITUTE-CASE\"", "SUBTRACT", "SUM", "SUPPRESS",
  "SYMBOLIC", "SYNCHRONIZED", "\"SYSTEM-DEFAULT\"", "\"SYSTEM-OFFSET\"",
  "TAB", "TALLYING", "TAPE", "TERMINATE", "TEST", "THAN", "THEN", "THRU",
  "TIME", "\"TIME-OUT\"", "TIMES", "TO", "\"&\"", "\")\"", "\":\"",
  "\"/\"", "\".\"", "\"=\"", "\"FALSE\"", "\"FILE\"", "\">\"",
  "\"INITIAL\"", "\"<\"", "\"-\"", "\"*\"", "\"NULL\"", "\"OVERFLOW\"",
  "\"(\"", "\"+\"", "\"TRUE\"", "TOP", "\"TOWARD-GREATER\"",
  "\"TOWARD-LESSER\"", "TRAILING", "TRANSFORM", "\"FUNCTION TRIM\"",
  "TRUNCATION", "TYPE", "U", "UNDERLINE", "UNIT", "UNLOCK", "UNSIGNED",
  "\"UNSIGNED-INT\"", "\"UNSIGNED-LONG\"", "\"UNSIGNED-SHORT\"",
  "UNSTRING", "UNTIL", "UP", "UPDATE", "UPON", "\"UPON ARGUMENT-NUMBER\"",
  "\"UPON COMMAND-LINE\"", "\"UPON ENVIRONMENT-NAME\"",
  "\"UPON ENVIRONMENT-VALUE\"", "UPPER", "\"FUNCTION UPPER-CASE\"",
  "USAGE", "USE", "USER", "\"USER-DEFAULT\"", "\"User function name\"",
  "USING", "V", "VALUE", "VARIABLE", "VARYING", "WAIT", "WHEN",
  "\"FUNCTION WHEN-COMPILED\"", "WITH", "\"Identifier\"", "WORDS",
  "\"WORKING-STORAGE\"", "WRITE", "YYYYDDD", "YYYYMMDD", "ZERO",
  "SHIFT_PREFER", "OVERFLOW", "$accept", "start", "$@1", "nested_list",
  "source_element_list", "source_element", "simple_prog", "$@2",
  "program_definition", "function_definition", "_end_program_list",
  "end_program_list", "end_program", "end_function", "_program_body",
  "_identification_header", "program_id_paragraph", "$@3", "$@4",
  "function_id_paragraph", "$@5", "program_id_name", "end_program_name",
  "_as_literal", "_program_type", "program_type_clause",
  "init_or_recurse_and_common", "init_or_recurse", "_environment_division",
  "_environment_header", "_configuration_section", "_configuration_header",
  "_source_object_computer_paragraphs", "source_computer_paragraph", "$@6",
  "_source_computer_entry", "_with_debugging_mode",
  "object_computer_paragraph", "$@7", "_object_computer_entry",
  "object_clauses_list", "object_clauses", "object_computer_memory",
  "object_computer_sequence", "object_computer_segment",
  "object_computer_class", "locale_class", "computer_words",
  "_repository_paragraph", "$@8", "_repository_entry", "repository_list",
  "repository_name", "repository_name_list", "_special_names_paragraph",
  "_special_names_sentence_list", "special_names_sentence_list",
  "special_name_list", "special_name", "mnemonic_name_clause", "$@9",
  "mnemonic_choices", "_special_name_mnemonic_on_off", "on_off_clauses",
  "on_off_clauses_1", "alphabet_name_clause", "@10", "alphabet_definition",
  "alphabet_literal_list", "alphabet_literal", "@11",
  "alphabet_also_sequence", "alphabet_lits", "space_or_zero",
  "symbolic_characters_clause", "_sym_in_word", "_symbolic_collection",
  "symbolic_chars_list", "symbolic_chars_phrase", "char_list",
  "integer_list", "class_name_clause", "class_item_list", "class_item",
  "locale_clause", "currency_sign_clause", "_with_pic_symbol",
  "decimal_point_clause", "numeric_sign_clause", "cursor_clause",
  "crt_status_clause", "screen_control", "event_status",
  "_input_output_section", "_input_output_header", "_file_control_header",
  "_i_o_control_header", "_file_control_sequence", "file_control_entry",
  "$@12", "_select_clause_sequence", "select_clause", "assign_clause",
  "printer_name", "device_name", "_line_adv_file", "_ext_clause",
  "assignment_name", "_assignment_name", "access_mode_clause",
  "access_mode", "alternative_record_key_clause", "_suppress_clause",
  "collating_sequence_clause", "alphabet_name", "file_status_clause",
  "_file_or_sort", "lock_mode_clause", "$@13", "lock_mode", "_lock_with",
  "organization_clause", "organization", "padding_character_clause",
  "record_delimiter_clause", "record_key_clause", "key_or_split_keys",
  "relative_key_clause", "reserve_clause", "no_or_integer",
  "sharing_clause", "sharing_option", "_i_o_control", "i_o_control_list",
  "i_o_control_clause", "same_clause", "_same_option",
  "multiple_file_tape_clause", "$@14", "multiple_file_list",
  "multiple_file", "_multiple_file_position", "_data_division", "$@15",
  "_data_division_header", "_file_section_header",
  "_file_description_sequence", "file_description",
  "file_description_entry", "$@16", "file_type",
  "_file_description_clause_sequence", "file_description_clause",
  "block_contains_clause", "_records_or_characters", "record_clause",
  "_record_depending", "_from_integer", "_to_integer",
  "label_records_clause", "value_of_clause", "file_id", "valueof_name",
  "data_records_clause", "linage_clause", "_linage_sequence",
  "linage_lines", "linage_footing", "linage_top", "linage_bottom",
  "recording_mode_clause", "recording_mode", "u_or_s", "code_set_clause",
  "_for_sub_records_clause", "report_clause", "report_keyword",
  "rep_name_list", "_working_storage_section", "$@17",
  "_record_description_list", "$@18", "record_description_list_2",
  "data_description", "$@19", "level_number", "_entry_name",
  "user_entry_name", "const_global", "lit_or_length", "con_identifier",
  "fp32_usage", "fp64_usage", "fp128_usage", "pointer_len",
  "renames_entry", "_renames_thru", "condition_name_entry", "$@20",
  "constant_entry", "$@21", "constant_source",
  "_data_description_clause_sequence", "data_description_clause",
  "redefines_clause", "external_clause", "_as_extname", "_global_clause",
  "global_clause", "picture_clause", "usage_clause", "usage",
  "float_usage", "double_usage", "sign_clause", "report_occurs_clause",
  "_occurs_step", "occurs_clause", "_occurs_to_integer",
  "_occurs_from_integer", "_occurs_depending", "_capacity_in",
  "_occurs_initialized", "_occurs_keys", "_occurs_key_list",
  "ascending_or_descending", "_occurs_indexed", "occurs_index_list",
  "occurs_index", "justified_clause", "synchronized_clause",
  "blank_clause", "based_clause", "value_clause", "$@22",
  "value_item_list", "value_item", "_false_is", "any_length_clause",
  "_local_storage_section", "$@23", "_linkage_section", "$@24",
  "_report_section", "$@25", "_report_description_sequence",
  "report_description", "$@26", "_report_description_options",
  "report_description_option", "control_clause", "control_field_list",
  "identifier_list", "page_limit_clause", "page_line_column",
  "_page_heading_list", "page_detail", "heading_clause", "first_detail",
  "last_heading", "last_detail", "footing_clause",
  "_report_group_description_list", "report_group_description_entry",
  "$@27", "_report_group_options", "report_group_option", "type_clause",
  "type_option", "_control_final", "_or_page", "next_group_clause",
  "sum_clause_list", "_reset_clause", "data_or_final",
  "present_when_condition", "varying_clause", "line_clause",
  "line_keyword_clause", "column_clause", "col_keyword_clause",
  "report_line_integer_list", "line_or_plus", "report_col_integer_list",
  "col_or_plus", "source_clause", "group_indicate_clause",
  "report_usage_clause", "_screen_section", "$@28",
  "_screen_description_list", "screen_description_list",
  "screen_description", "$@29", "_screen_options", "screen_option", "eol",
  "eos", "plus_plus", "minus_minus", "_screen_line_plus_minus",
  "_screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "_procedure_division", "$@30", "$@31", "$@32",
  "_procedure_using_chaining", "$@33", "$@34", "procedure_param_list",
  "procedure_param", "_procedure_type", "_size_optional",
  "_procedure_optional", "_procedure_returning", "_procedure_declaratives",
  "$@35", "_procedure_list", "procedure", "section_header", "$@36",
  "_use_statement", "paragraph_header", "invalid_statement", "_segment",
  "statement_list", "@37", "@38", "statements", "$@39", "statement",
  "accept_statement", "$@40", "accept_body", "$@41", "accp_identifier",
  "_accept_clauses", "accept_clauses", "accept_clause", "lines_or_number",
  "at_line_column", "line_number", "column_number", "mode_is_block",
  "accp_attr", "no_echo", "reverse_video", "update_default", "end_accept",
  "add_statement", "$@42", "add_body", "_add_to", "end_add",
  "allocate_statement", "$@43", "allocate_body", "allocate_returning",
  "alter_statement", "$@44", "alter_body", "alter_entry", "_proceed_to",
  "call_statement", "$@45", "call_body", "$@46", "mnemonic_conv",
  "id_or_lit_or_func_or_program_name", "call_using", "$@47",
  "call_param_list", "call_param", "call_type", "call_returning",
  "return_give", "null_or_omitted", "call_exception_phrases",
  "_call_on_exception", "call_on_exception", "_call_not_on_exception",
  "call_not_on_exception", "end_call", "cancel_statement", "$@48",
  "cancel_body", "id_or_lit_or_program_name", "close_statement", "$@49",
  "close_body", "close_option", "compute_statement", "$@50",
  "compute_body", "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "$@51", "delete_body", "delete_file_list",
  "end_delete", "display_statement", "$@52", "display_body",
  "screen_or_device_display", "display_list", "display_atom", "$@53",
  "disp_list", "display_clauses", "display_clause", "display_upon",
  "crt_under", "disp_attr", "end_display", "divide_statement", "$@54",
  "divide_body", "end_divide", "entry_statement", "$@55", "entry_body",
  "evaluate_statement", "$@56", "evaluate_body", "evaluate_subject_list",
  "evaluate_subject", "evaluate_condition_list", "evaluate_case_list",
  "evaluate_case", "evaluate_other", "evaluate_when_list",
  "evaluate_object_list", "evaluate_object", "_evaluate_thru_expr",
  "end_evaluate", "exit_statement", "$@57", "exit_body",
  "exit_program_returning", "free_statement", "$@58", "free_body",
  "generate_statement", "$@59", "generate_body", "goto_statement", "$@60",
  "go_body", "goto_depending", "goback_statement", "if_statement", "$@61",
  "if_else_statements", "end_if", "initialize_statement", "$@62",
  "initialize_body", "initialize_filler", "initialize_value",
  "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "$@63", "initiate_body", "inspect_statement",
  "$@64", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@65", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region", "inspect_before",
  "inspect_after", "merge_statement", "$@66", "move_statement", "$@67",
  "move_body", "multiply_statement", "$@68", "multiply_body",
  "end_multiply", "open_statement", "$@69", "open_body", "open_file_entry",
  "open_mode", "open_sharing", "open_option", "perform_statement", "$@70",
  "perform_body", "$@71", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "read_statement", "$@72",
  "read_body", "read_into", "lock_phrases", "ignoring_lock",
  "advancing_lock_or_retry", "_retry_phrase", "retry_phrase",
  "retry_options", "_extended_with_lock", "extended_with_lock", "read_key",
  "read_handler", "end_read", "ready_statement", "release_statement",
  "$@73", "release_body", "reset_statement", "return_statement", "$@74",
  "return_body", "end_return", "rewrite_statement", "$@75", "rewrite_body",
  "_with_lock", "with_lock", "end_rewrite", "rollback_statement",
  "search_statement", "$@76", "search_body", "search_varying",
  "search_at_end", "search_whens", "search_when", "end_search",
  "set_statement", "$@77", "set_body", "on_or_off", "up_or_down",
  "set_environment", "set_attr", "set_attr_clause", "set_attr_one",
  "set_to", "set_up_down", "set_to_on_off_sequence", "set_to_on_off",
  "set_to_true_false_sequence", "set_to_true_false",
  "set_last_exception_to_off", "sort_statement", "$@78", "sort_body",
  "@79", "sort_key_list", "_key_list", "_sort_duplicates",
  "sort_collating", "sort_input", "sort_output", "start_statement", "$@80",
  "start_body", "sizelen_clause", "start_key", "start_op", "disallowed_op",
  "not_equal_op", "end_start", "stop_statement", "$@81", "stop_returning",
  "_status_x", "stop_literal", "string_statement", "$@82", "string_body",
  "string_item_list", "string_item", "_string_delimited",
  "string_delimiter", "_with_pointer", "end_string", "subtract_statement",
  "$@83", "subtract_body", "end_subtract", "suppress_statement",
  "_printing", "terminate_statement", "$@84", "terminate_body",
  "transform_statement", "$@85", "transform_body", "unlock_statement",
  "$@86", "unlock_body", "unstring_statement", "$@87", "unstring_body",
  "_unstring_delimited", "unstring_delimited_list",
  "unstring_delimited_item", "unstring_into", "unstring_into_item",
  "_unstring_into_delimiter", "_unstring_into_count", "_unstring_tallying",
  "end_unstring", "use_statement", "$@88", "use_phrase",
  "use_file_exception", "use_global", "use_file_exception_target",
  "use_debugging", "debugging_list", "debugging_target", "_all_refs",
  "use_start_end", "program_start_end", "use_reporting", "use_exception",
  "use_ex_keyw", "write_statement", "$@89", "write_body", "from_option",
  "write_option", "before_or_after", "write_handler", "end_write",
  "_accept_exception_phrases", "_accp_on_exception", "accp_on_exception",
  "escape_or_exception", "_accp_not_on_exception", "accp_not_on_exception",
  "not_escape_or_not_exception", "_display_exception_phrases",
  "_disp_on_exception", "disp_on_exception", "_disp_not_on_exception",
  "disp_not_on_exception", "on_size_error_phrases", "_on_size_error",
  "on_size_error", "_not_on_size_error", "not_on_size_error",
  "_on_overflow_phrases", "_on_overflow", "on_overflow",
  "_not_on_overflow", "not_on_overflow", "return_at_end", "at_end",
  "_at_end_clause", "at_end_clause", "_not_at_end_clause",
  "not_at_end_clause", "at_eop_clauses", "_at_eop_clause", "at_eop_clause",
  "_not_at_eop_clause", "not_at_eop_clause", "_invalid_key_phrases",
  "invalid_key_phrases", "_invalid_key_sentence", "invalid_key_sentence",
  "_not_invalid_key_sentence", "not_invalid_key_sentence", "_scroll_lines",
  "condition", "expr", "partial_expr", "$@90", "expr_tokens", "expr_token",
  "eq", "gt", "lt", "ge", "le", "exp_list", "_e_sep", "exp", "exp_term",
  "exp_factor", "exp_unary", "exp_atom", "line_linage_page_counter",
  "arithmetic_x_list", "arithmetic_x", "record_name", "table_name",
  "file_name_list", "file_name", "report_name", "mnemonic_name_list",
  "mnemonic_name", "procedure_name_list", "procedure_name", "label",
  "integer_label", "reference_list", "reference", "single_reference",
  "optional_reference_list", "optional_reference", "reference_or_literal",
  "undefined_word", "unique_word", "target_x_list", "target_x", "_x_list",
  "x_list", "x", "call_x", "x_common", "report_x_list", "expr_x",
  "arith_x", "prog_or_entry", "alnum_or_id", "simple_display_value",
  "simple_display_all_value", "simple_value", "simple_all_value",
  "id_or_lit", "id_or_lit_or_func", "num_id_or_lit", "positive_id_or_lit",
  "pos_num_id_or_lit", "from_parameter", "sub_identifier",
  "sort_identifier", "sub_identifier_1", "display_identifier",
  "numeric_identifier", "identifier_or_file_name", "identifier",
  "identifier_1", "target_identifier", "target_identifier_1",
  "qualified_word", "subref", "refmod", "integer", "symbolic_integer",
  "report_integer", "class_value", "literal", "basic_literal",
  "basic_value", "function", "func_no_parm", "func_one_parm",
  "func_multi_parm", "func_refmod", "func_args", "trim_args",
  "numvalc_args", "locale_dt_args", "formatted_datetime_args",
  "formatted_time_args", "not_const_word", "flag_all", "flag_duplicates",
  "flag_initialized", "flag_initialized_to", "to_init_val", "_flag_next",
  "_flag_not", "flag_optional", "flag_rounded", "round_mode",
  "round_choice", "flag_separate", "error_stmt_recover", "verb",
  "scope_terminator", "_advancing", "_after", "_are", "_area", "_areas",
  "_as", "_at", "_before", "_binary", "_by", "_character", "_characters",
  "_contains", "_data", "_end_of", "_file", "_final", "_for", "_from",
  "_in", "_in_order", "_indicate", "_initial", "_into", "_is", "_is_are",
  "_key", "_left_or_right", "_line_or_lines", "_limits", "_lines", "_mode",
  "_number", "_numbers", "_of", "_on", "_onoff_status", "_other",
  "_procedure", "_program", "_record", "_records", "_right", "_sign",
  "_signed", "_sign_is", "_size", "_standard", "_status", "_tape", "_then",
  "_times", "_to", "_to_using", "_when", "_when_set_to", "_with",
  "coll_sequence", "column_or_col", "columns_or_cols", "comp_equal",
  "exception_or_error", "in_of", "label_option", "line_or_lines",
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
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788
};
# endif

#define YYPACT_NINF -2471

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2471)))

#define YYTABLE_NINF -1988

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2471,   694,   952, -2471,   693,   715, -2471,   753, -2471, -2471,
     829, -2471, -2471,    17,   608,   662, -2471,  1075, -2471,  1217,
    1160, -2471, -2471,   829,   829, -2471, -2471,   922,  1280,  1350,
     867,  1010,  1234,   548,  1034,  1048,  1398,  1409, -2471,  1108,
    1466, -2471, -2471,  1191, -2471,  1138,  1231, -2471,  1470,  1175,
    1182,  1227,  1387,  1255,   -18,   -18,   -11, -2471,  1398, -2471,
     -11, -2471, -2471,    22,  3229,  3760,  1235,    -1, -2471,  1239,
    1246, -2471, -2471, -2471,  1269,  1474, -2471, -2471, -2471, -2471,
    1716,  1716, -2471, -2471,  1281, -2471,  1289, -2471, -2471,  1360,
    4086, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
     577, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1349, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471,   750, -2471, -2471,  1417, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471,  1247, -2471,    26,    57,
   -2471, -2471,   497,   927,  1248, -2471,    67,    67,  1335,  1355,
    1538,  1538,  1538,    67,  1362,  1538,  1723, -2471,  1407,  1474,
    1163, -2471, -2471, -2471, -2471,  1565, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471,  1529,  1323, -2471, -2471, -2471,
      23,    23,  -130,  1327, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471,   -97,  1580,  8266,
     157,   -50,   482,  1273,   681,   724,  5187,  6230,  1537,   509,
    1033,   681,  1276,  1337, -2471, -2471,  6230, -2471, -2471,   681,
    1279,  4131,  1276,  5334,  6230, -2471,  1150,  3285,  1273,  1276,
    1273,  1276,    74,   657,  1276,  1273, -2471, -2471, -2471, -2471,
   -2471, -2471,  6230,  5417, -2471, -2471,  1279,   117,  1276,  1273,
    1276,  1276,  1394,  1539, -2471,   493,  1336, -2471, -2471,  1338,
    1079,   -48, -2471, -2471,  1396,  1386,  1748,  1538, -2471, -2471,
   -2471,   589, -2471, -2471, -2471, -2471, -2471,   595,  1754,  1538,
   -2471,   -10, -2471, -2471, -2471,  1538,  1538, -2471,  1538, -2471,
    1276,  1745,  1276,  1538,  1538,  1276, -2471,  1292,   992,  1351,
   -2471,  1391, -2471, -2471,  1293, -2471, -2471, -2471,   483, -2471,
     349, -2471,  -171,   505,   374, -2471, -2471, -2471, -2471,    29,
    1684, -2471,  1620, -2471,  1343,  1510,  1122, -2471,  1276, -2471,
   -2471,  1346,  1347,  1353, -2471,  8669,    29,    29, -2471,  1358,
    1363,  1367, -2471, -2471, -2471,  1368,    29, -2471, -2471, -2471,
   -2471, -2471, -2471,  1369, -2471,  1353, -2471, -2471,  1693, -2471,
    5554, -2471, -2471, -2471, -2471,  1364, -2471, -2471,  1373,  1381,
    1384,  8669,  8291,  8266,  8291, -2471,   155,   420, -2471,  1657,
   -2471, -2471, -2471,  1046,  1364, -2471, -2471,   157, -2471,  1370,
   -2471,    29, -2471, -2471, -2471, -2471,  1705,  4440, -2471, -2471,
     482, -2471, -2471, -2471,  1273,  1085,  1510,  1717,   131, -2471,
    1468, -2471, -2471,  1343,  1364,  1273,  1729,  1506,  1161, -2471,
    1730,   630,  5700, -2471, -2471,  4868,  1173,  1189,  1731,   649,
    1357, -2471, -2471, -2471,  1732,    69, -2471, -2471, -2471,  4581,
   -2471, -2471,  1767,   577, -2471, -2471, -2471,   681, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471,  1415, -2471, -2471,    88, -2471,
    1279, -2471, -2471,    37, -2471, -2471, -2471, -2471, -2471, -2471,
    1399,  6230, -2471,  1416,  1737,  1833, -2471, -2471, -2471, -2471,
    1150, -2471,  1464, -2471,  1421, -2471, -2471,  4726,   -26,  -229,
    1427,  1425, -2471,  1032, -2471,  1433,  1746,   889, -2471,  1691,
   -2471,  1747,  1506,  1749,  1691,  1276,  1744,  1378, -2471,  8669,
    1733, -2471, -2471, -2471, -2471, -2471, -2471,  1624, -2471,   681,
   -2471, -2471,   -63, -2471,   401,  1872, -2471,    52, -2471,  1753,
    1188,  4951,  1755,  5828, -2471,  1791,  1276,  1756,  5909,  1279,
   -2471, -2471,   795, -2471, -2471, -2471, -2471,  3373, -2471,  1707,
   -2471, -2471,  1091,  1757,  1798,  1758,  1691,  1445,  1511,  1656,
    1397,  1397,  1397,   269,  1455,  6821, -2471, -2471, -2471,  1401,
   -2471, -2471, -2471,  1602, -2471,    67, -2471,  1035, -2471,    95,
   -2471, -2471, -2471, -2471,  1538,  1514,  1664, -2471, -2471, -2471,
   -2471,  1067,  1538,  1404,  1461,  1823,  1538,  1128,  1276,  1671,
   -2471, -2471, -2471, -2471,  1673,  1452, -2471, -2471,  1292, -2471,
      50, -2471, -2471, -2471, -2471, -2471, -2471,  1374,   -55,  1538,
      64, -2471, -2471, -2471,  1467,    16, -2471,  1538,  1515,  1619,
   -2471, -2471,  1829, -2471, -2471,  1276, -2471, -2471,  7278,  2102,
    8266,  1462, -2471, -2471,    24, -2471,  1480,  8266,  8266,  7718,
   -2471, -2471,  1364, -2471,  1422,  1423,  8266,  8266,  8266,  8669,
    1424,  8669, -2471, -2471, -2471,  6260,  1741, -2471,  1122,  8266,
   -2471,  8669,  8266, -2471,  1364, -2471, -2471, -2471,  1086, -2471,
    1721,  8266,  8266,  8266,  8266,  8266, -2471,  1564, -2471,  1603,
    1692, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1085, -2471,
   -2471, -2471,  1140,   627,  1276, -2471, -2471, -2471, -2471, -2471,
    8266,  1675, -2471,  1462, -2471,  1273, -2471, -2471, -2471, -2471,
    1570, -2471, -2471, -2471, -2471, -2471,  1655,  1789, -2471, -2471,
    4868,   473,   630,   630,   630,   630, -2471, -2471,  6230,  6260,
   -2471, -2471, -2471, -2471,   509,   144, -2471,  1438, -2471,  1439,
   -2471, -2471, -2471, -2471, -2471,  1337, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471,  4287, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,    -8, -2471,
    1831,  1526,  1784, -2471,  8669,    76, -2471, -2471,  1589, -2471,
   -2471,    62,  8266, -2471,  1502,   681, -2471, -2471,  6260, -2471,
    1444,  1570, -2471, -2471, -2471, -2471, -2471,  1796,  1276,   157,
   -2471,   288, -2471, -2471, -2471, -2471,  1506,  4131, -2471, -2471,
   -2471,  1736, -2471, -2471,  1570,  1843, -2471, -2471,  1276,  1843,
    1516, -2471, -2471,  1364, -2471,  1518, -2471, -2471,   570,  1374,
   -2471, -2471,  5104, -2471,  1928,   697,    63, -2471, -2471, -2471,
    1538, -2471,   458,  6230, -2471, -2471,   861, -2471, -2471,  1276,
   -2471,  1929, -2471,  1778, -2471, -2471,  6260, -2471,  1664, -2471,
   -2471,  8669, -2471, -2471, -2471, -2471, -2471,  1929,  1750, -2471,
   -2471,   288, -2471,  1519,  1575,  1610, -2471, -2471, -2471,  1615,
    1521, -2471,  1522, -2471, -2471,  1905, -2471,  1382, -2471, -2471,
    1523, -2471, -2471, -2471,  1971,  1525, -2471, -2471,  1664, -2471,
   -2471, -2471,   590, -2471, -2471, -2471,  1719,   881, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471,  1128, -2471,  1542, -2471,  -121,
   -2471,  1585, -2471, -2471, -2471, -2471,  1742,   -55, -2471,  1768,
      67,    67, -2471,  1374,   478, -2471,   489, -2471, -2471, -2471,
    1660, -2471,  1933,   177,  1538, -2471,  1481,  1544, -2471, -2471,
     239, -2471, -2471,  1538,   942,  7278, -2471, -2471, -2471,    97,
    1550,  2532, -2471,   942, -2471, -2471, -2471,  1485,  1487, -2471,
    8669,   942,  1773,  1584,  1712, -2471, -2471,  1751, -2471, -2471,
   -2471, -2471,    20,  1116,  8266, -2471, -2471, -2471,   160, -2471,
    1276,   159,  1115,  1561,   201,  1562, -2471,   231, -2471, -2471,
     230,  1566,  1568,  1569,   237, -2471,  1364, -2471,  1572, -2471,
     311,  1573,  1510,   664, -2471,   -23,    -5,   681, -2471,  1143,
    1574,   320, -2471,  1577,  1564,   420,   420, -2471, -2471, -2471,
     681, -2471,  1578,   157, -2471,  1357, -2471, -2471,  1644, -2471,
    1670, -2471,   824,  1538, -2471, -2471, -2471,  1509,    25, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,    41, -2471,
   -2471,  3040, -2471, -2471,  3083, -2471, -2471, -2471, -2471,  1837,
     664,  1840,    28, -2471, -2471, -2471, -2471,  2033, -2471,  1590,
     188, -2471, -2471,   144, -2471, -2471, -2471, -2471,  1738, -2471,
   -2471, -2471,  1924,  1914,  1337, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471,  1685,  1337, -2471,  1596, -2471,  2013, -2471, -2471,
   -2471,  6769, -2471,  8669,  7030, -2471, -2471, -2471,  1937,    49,
     825,   894,   681,   681,   664,  1856,   116,  1273,  1920, -2471,
   -2471, -2471,  2059, -2471,  1866, -2471, -2471, -2471, -2471,  1736,
   -2471, -2471, -2471, -2471,  1276,   823,   599, -2471,  1548, -2471,
    1549,  8669,  1759,   974, -2471,   160, -2471, -2471, -2471,  6230,
    1374,  1374,  1374,  1374,  1374,  1374,  1374,  1374,   697, -2471,
     355,    25,   594, -2471,  1632,  1632,  -146,  6035,  1276,   664,
    1864,  1604, -2471,  1611,  2068,  1276,   382,  1570,  2071,    26,
   -2471,  1612,  1672,  1681,  1567,  1043,  1276, -2471, -2471, -2471,
    1043,  1997,  1538,  1354,  1354,  1538,     0,  1808,  1538,  2066,
   -2471,  1774, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471,    67,   101, -2471, -2471,  1635, -2471,  1898, -2471,
      21, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,   576,
   -2471,    82, -2471,  1128, -2471,  1761, -2471, -2471,  1742, -2471,
      67, -2471, -2471, -2471, -2471, -2471,    60,  1571, -2471,    87,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,   409, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471,  2046, -2471, -2471, -2471,
   -2471, -2471,  1426, -2471,  1207, -2471, -2471, -2471, -2471,  1793,
    1793, -2471, -2471,  1793,   487, -2471,  1538, -2471, -2471, -2471,
   -2471,  1538, -2471, -2471, -2471, -2471, -2471,    31, -2471, -2471,
   -2471,  2044,  1677, -2471, -2471, -2471, -2471,   -22, -2471,  1538,
   -2471,  2098, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471,   942, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471,  8266,  7825,  1116, -2471, -2471, -2471,  1468,  7865,  1373,
    7969,  1373, -2471,  1276,  1373,  1373,  1373,  8669, -2471,   -58,
    1373,    24, -2471, -2471, -2471,  1801,  1682,   457,  1900,   664,
    8165,  1373,  1373,   821, -2471, -2471, -2471, -2471, -2471,   577,
   -2471, -2471, -2471,   706, -2471,  8266, -2471, -2471, -2471, -2471,
    1809,  1874, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
    1538, -2471,   616, -2471, -2471,  1348,  1538, -2471, -2471, -2471,
   -2471,   -20,  1538, -2471, -2471, -2471,   681, -2471,   681,  2275,
   -2471,   669,    12,   144, -2471, -2471, -2471,  2033,  1276, -2471,
   -2471, -2471, -2471,  1597,  1126,    85,  1607,   821,  8669, -2471,
   -2471,  2064, -2471,  1450, -2471, -2471,  7030, -2471,  1450,  1934,
    1935, -2471,  1710, -2471, -2471,  1538, -2471, -2471,  1887,  1810,
   -2471, -2471,   681, -2471,   681,  1807,  1807,  1816, -2471,   924,
   -2471, -2471, -2471,  1276,  6230,   735, -2471, -2471, -2471, -2471,
    1841,  2002,    25, -2471,  1253, -2471, -2471, -2471, -2471,  1549,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471,     8, -2471,  1276, -2471, -2471, -2471,  1215,
   -2471, -2471, -2471,  8266, -2471,  6230,  6230,   536,  1800, -2471,
   -2471, -2471,  1468, -2471,   681, -2471,   821, -2471,  1819, -2471,
    8669, -2471,  2027,  1689, -2471,   599, -2471,   688, -2471,    26,
   -2471,  1676,  1739, -2471,   775, -2471,  1567, -2471,  1939,  1686,
    7141,   870,  1942, -2471,  1664,  1628,  1538,  2066,  1629,   -95,
     503,  1664,  1625, -2471,  1538, -2471, -2471, -2471,    -2,  1168,
   -2471, -2471, -2471,  3190, -2471,  1997,  1273, -2471, -2471, -2471,
   -2471, -2471,   576, -2471,  1892, -2471, -2471,  1921, -2471,  1716,
      98,  1716,  1688, -2471, -2471, -2471, -2471, -2471,   206, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471,   239,   239,   239,
   -2471, -2471, -2471, -2471,   239,   239, -2471, -2471,  1538,  1538,
     513,   513,   239, -2471,   487, -2471,  1115, -2471,  1145,   -64,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471,  1947, -2471, -2471, -2471, -2471, -2471, -2471,  1950,
   -2471, -2471,  1181, -2471, -2471, -2471, -2471, -2471,   -27,   132,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  -155,
   -2471, -2471, -2471, -2471, -2471, -2471,  2866,   239, -2471, -2471,
    1510, -2471, -2471, -2471, -2471,   665,   239,   513,   513,   239,
     664,  1788,   664,  1790, -2471, -2471,  6230, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471,  1126, -2471,  2060, -2471,
    1337, -2471,  1450, -2471,  1450,   821,  1694,  1694, -2471,  2158,
    2129, -2471, -2471, -2471, -2471,   -84,  1276, -2471, -2471, -2471,
     664, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1256, -2471,
    2118,  1738,  1902,  1932, -2471,   578, -2471, -2471, -2471,   542,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1904, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1115, -2471, -2471,
   -2471, -2471, -2471, -2471,  1870,  1698,  1538,   -64,   664,  1667,
   -2471,  2068, -2471,  1955,  2084,  1955,   536,  1117, -2471, -2471,
    1488, -2471,    26, -2471,  1713,    99, -2471, -2471,  1276, -2471,
    1110, -2471, -2471,   403,   705,   819,   835,   839,  1662, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471,  1794, -2471,   814, -2471,
   -2471, -2471, -2471,  1276,  1946, -2471, -2471, -2471,   -14, -2471,
   -2471, -2471,  1538, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
    1060,   400, -2471,  1661, -2471,   818, -2471,  1722, -2471,  1993,
   -2471, -2471, -2471,  1629, -2471, -2471, -2471, -2471, -2471, -2471,
    1936,    53,  1955,   779,  1538, -2471, -2471,  1538, -2471,  1808,
    1506,  -204, -2471,  1776,  1538,  2136,   633,   113,   981,  1444,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1760,
   -2471,  1926, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
    2156,  1538,  1273,  1273,   576, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471,   -31, -2471, -2471, -2471, -2471, -2471,   516,
     239, -2471,  1493, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471,  1895,   143,  1510, -2471, -2471,
   -2471, -2471, -2471,  1276, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471,   681, -2471,   681, -2471, -2471,
   -2471, -2471, -2471, -2471,  2149,  2088, -2471, -2471,  1450, -2471,
    6230,  6230, -2471, -2471,  1854,  1273,   605, -2471,  1276, -2471,
   -2471,  1811,  6230,  1938, -2471,  1538,  1134, -2471, -2471,   -86,
    1943,  1944, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471,  1276, -2471, -2471, -2471, -2471,  1735, -2471, -2471,
    1276,  1955, -2471,  1276, -2471, -2471, -2471, -2471, -2471,  1903,
    2049, -2471, -2471, -2471, -2471, -2471, -2471, -2471,    99, -2471,
    1762, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471,  1687, -2471, -2471,  2161,
    1752, -2471, -2471, -2471, -2471, -2471,  7767,  2192,  1806,  1806,
   -2471,  1510,  1931,  1931, -2471, -2471,  1664,   271,  1276, -2471,
   -2471, -2471, -2471,  1664, -2471,  1795, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471,   527,   527,  1538,  1887, -2471, -2471,
     140, -2471,     3,  1538,  1538,  1538,  1538, -2471,   255, -2471,
     116,  1538,  1808, -2471,  1812,  1628,  1273, -2471,  1884,  2208,
   -2471,  2114, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471,  1276, -2471,   -64,   -64,  6230, -2471,
   -2471, -2471, -2471,  1538,  1273,  1273,  1879, -2471, -2471, -2471,
    1727, -2471,  1276, -2471, -2471,  1841,  2002, -2471, -2471, -2471,
   -2471,  1016, -2471, -2471,  1276, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471,  1871,   638,  -214, -2471,    99, -2471,  1955,  2028,
    1664,  1769, -2471,  1969, -2471,  2136, -2471, -2471,  1931,  1764,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1276, -2471,    32,
    1723, -2471,  1058, -2471, -2471, -2471, -2471,   582,  1538, -2471,
   -2471,   730, -2471, -2471,   503,  1799,  1276,  1276, -2471, -2471,
   -2471, -2471,  1276,  1538, -2471, -2471, -2471,  1664, -2471,   576,
    1766, -2471, -2471, -2471, -2471,   157,  1273,  1538, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1513,
   -2471, -2471, -2471, -2471, -2471,  1886,  2130, -2471,  1279, -2471,
    6601, -2471, -2471,   638,  1771,  1821, -2471,  1770, -2471,  1718,
    1664,  1752, -2471, -2471,  2127, -2471, -2471, -2471, -2471, -2471,
     503,   503, -2471, -2471, -2471, -2471,  2051, -2471, -2471,  1722,
    1664, -2471, -2471, -2471, -2471,  1276, -2471, -2471,   528,   528,
    2239, -2471, -2471, -2471, -2471, -2471,   528,   528,   535, -2471,
   -2471, -2471,  -165, -2471, -2471,   879, -2471, -2471, -2471, -2471,
     157, -2471,  1868,  1815,     5,  1738, -2471,  1781, -2471,  1782,
   -2471,  1792,  1538, -2471, -2471,  2023,  1738, -2471, -2471, -2471,
    2223,  1723, -2471,   -29, -2471, -2471, -2471, -2471,  1523, -2471,
   -2471, -2471, -2471, -2471,  1538,  1276,  1734, -2471,  1734, -2471,
   -2471,  1276, -2471,  1453, -2471, -2471, -2471,    78,   148, -2471,
   -2471, -2471, -2471,    99, -2471, -2471,  1276,  2029,   825,   503,
    2138,  1814, -2471, -2471,  1276,  1276,   541, -2471, -2471, -2471,
   -2471, -2471,  1911,  1135,    78, -2471, -2471,  1797,   209,  7541,
   -2471,  2029, -2471,  1929, -2471,  1887, -2471,  1738, -2471,  1743,
   -2471,  1276,  1948, -2471, -2471,  1738, -2471, -2471,  1949,  1276,
   -2471, -2471,  1538,  1538,  2066,  1361, -2471, -2471, -2471, -2471,
    2058,  2089, -2471,  1538, -2471,   -88, -2471,  1348,  1538,  4131,
   -2471, -2471, -2471, -2471,  1793, -2471,  2142,  1664, -2471,  2216,
   -2471, -2471, -2471,  1276, -2471, -2471,  1276, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  2065,  1793,
   -2471,  1763,  1538,  1276,    48,   859,   592, -2471, -2471,   516,
   -2471, -2471,  1538,  2066,  2014,  1765, -2471, -2471, -2471,  1276,
     239, -2471, -2471, -2471, -2471,   239, -2471,  1538,  1769,  1538,
   -2471, -2471, -2471,  1538, -2471,  1763, -2471,  1276, -2471,  1122,
   -2471, -2471, -2471,  1392, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471,  1273, -2471, -2471, -2471, -2471,  1497,   -62, -2471,
    1276, -2471, -2471, -2471,   585, -2471,   516,   585, -2471,  1276,
   -2471, -2471,  1371, -2471, -2471,  2014, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471,   239, -2471, -2471, -2471,   239,
    1457,  1538,  1538,  1389, -2471, -2471, -2471, -2471, -2471, -2471,
    1699, -2471, -2471, -2471, -2471, -2471,  1538,  2014,  2014, -2471,
    2062,  1538,  1538, -2471,  2442,  2014, -2471, -2471, -2471,  2014,
    2014,  2048,  1328,  2066,  2067,  1664,  1772,  1538,  1510, -2471,
    1538,  1538,  1276, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471,    -6, -2471,   908, -2471,
   -2471, -2471,  1328,  2066, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471,   775, -2471,  1538,  1752, -2471,  8568,  8568,  1652,  2160,
    2087, -2471,  1664,    -6, -2471, -2471,  1664,   908, -2471, -2471,
     775, -2471, -2471,    -6,  1769, -2471,  1468,  8467, -2471, -2471,
    1092,  1142, -2471, -2471,  1316, -2471, -2471, -2471, -2471,   -75,
     -75, -2471, -2471, -2471, -2471, -2471,  8568, -2471, -2471, -2471,
   -2471, -2471, -2471,  2127, -2471,  1738, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471,  1964, -2471,  1964, -2471,  2241,  1850,   -61,
    1963, -2471, -2471,  8568,  1664, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,    21,     6,     4,
      46,     8,     9,     0,     0,     0,     7,     0,    11,   291,
      49,    27,    24,    46,    46,    23,    22,     0,     0,   696,
     293,     0,   180,    51,     0,     0,    14,     0,    47,     0,
       0,    20,   741,     0,   295,     0,     0,    45,   182,     0,
       0,    98,    52,    53,     0,     0,     0,    12,    15,    16,
       0,    13,   292,   698,     0,     0,     0,   289,    50,     0,
       0,   186,    62,    56,     0,   100,    54,    55,    30,    29,
      33,    33,    32,    31,     0,    17,     0,   701,   699,   717,
       0,   795,   875,   884,   890,   897,   939,   945,   959,   954,
     960,   961,   969,  1016,  1025,  1028,  1054,  1065,  1068,  1071,
    1063,  1077,  1084,  1106,  1110,  1149,  1151,  1155,     0,  1161,
    1176,  1200,  1230,  1231,  1234,  1235,  1240,  1249,  1250,  1263,
    1299,  1317,     0,  1351,  1365,  1373,  1375,   723,  1379,  1382,
    1385,  1436,   743,   744,   745,   746,   747,   748,   749,   750,
     752,   751,   753,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
     771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   785,   786,   787,   788,   789,   790,
     791,   792,   742,   294,   301,   302,   362,   296,   365,     0,
     181,   183,   184,    64,    58,    99,     0,     0,     0,  1959,
    1913,  1913,  1913,     0,     0,  1913,  1886,   118,    84,   101,
       0,   104,   106,   107,   108,   154,   110,   109,   111,   112,
     113,   114,   115,   116,   117,     0,     0,    25,    18,    19,
     706,   706,     0,     0,  1794,  1795,  1796,  1797,  1798,  1799,
    1800,  1801,  1802,  1803,  1804,  1805,  1806,  1807,  1843,  1844,
    1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,  1853,  1854,
    1855,  1856,  1857,  1858,  1859,  1860,  1861,  1862,  1808,  1809,
    1810,  1811,  1812,  1813,  1814,  1815,  1816,  1817,  1818,  1819,
    1820,  1821,  1822,  1823,  1824,  1825,  1826,  1827,  1828,  1829,
    1830,  1831,  1832,  1833,  1834,  1835,  1836,  1837,  1838,  1791,
    1839,  1840,  1841,  1842,   794,  1792,  1793,     0,     0,     0,
       0,   901,     0,     0,     0,     0,     0,     0,     0,  1524,
    1056,     0,     0,  1978,   924,   923,     0,  1076,  1524,     0,
       0,     0,     0,     0,     0,   793,     0,  1188,     0,     0,
       0,     0,     0,     0,     0,     0,  1347,  1350,  1337,  1348,
    1349,  1339,     0,     0,  1374,  1372,     0,   741,     0,     0,
       0,     0,     0,   525,   297,  1758,     0,  1593,   298,     0,
    1774,   270,   187,  1885,     0,     0,     0,  1913,  2021,    82,
      63,  1884,    68,    70,    71,    72,    73,  1884,     0,  1913,
      57,    60,  1615,  1614,   129,  1913,  1913,  1960,  1913,  1914,
       0,     0,     0,  1913,  1913,     0,  1887,     0,  1913,     0,
      48,     0,   102,   105,     0,   153,    34,    28,  1913,  1883,
     706,   703,   709,     0,   706,   718,   719,   693,   818,  1694,
     873,   797,   817,  1684,  1688,  1938,     0,  1737,     0,  1732,
    1738,     0,     0,  1744,  1717,     0,  1580,  1582,  1713,     0,
       0,     0,  1735,  1718,  1638,     0,  1584,  1716,  1736,  1714,
    1739,  1740,  1719,     0,  1734,  1744,  1733,  1715,   882,  1632,
     880,  1624,  1627,  1626,  1630,  1709,  1711,  1631,  1741,     0,
       0,     0,     0,     0,     0,   885,     0,  1569,  1572,  1574,
    1577,  1647,  1579,  1763,  1645,  1646,  1604,   891,   892,     0,
    1600,  1602,  1601,   904,   902,   903,   937,     0,  1663,   944,
     940,   941,   943,  1662,   946,   949,  1938,   957,     0,  1586,
    1777,  1619,  1689,  1693,  1620,     0,   967,  1952,  1713,   983,
    1014,  1465,  1622,   978,   980,   977,     0,  1626,  1023,     0,
     907,  1026,  1035,  1034,  1052,     0,  1031,  1033,  1523,     0,
    1058,  1062,  1060,  1063,  1061,  1055,  1066,  1067,  1617,  1069,
    1070,  1979,  1072,  1598,  1064,  1974,  1522,  1085,  1087,  1594,
    1107,  1108,  1111,     0,  1113,  1114,  1115,  1150,  1303,  1678,
    1679,     0,  1152,     0,  1159,     0,  1169,  1166,  1168,  1167,
    1162,  1163,  1170,  1190,  1604,  1988,  1177,  1188,  1179,     0,
    1186,     0,  1664,  1601,  1666,     0,  1228,  1769,  1232,  1439,
    1589,  1238,  1952,  1247,  1439,     0,  1261,  1254,  1590,     0,
       0,  1597,  1264,  1265,  1266,  1267,  1268,  1269,  1291,  1270,
    1294,  1271,     0,  1595,     0,     0,  1677,  1693,  1300,  1335,
    1322,  1340,  1363,     0,  1354,  1357,     0,  1370,     0,  1376,
    1377,   729,   735,   724,   725,   726,   728,     0,  1380,     0,
    1681,  1383,  1954,  1402,  1388,  1450,  1439,     0,     0,   528,
       0,     0,     0,   367,     0,     0,   371,   372,   370,     0,
     300,   303,   185,     0,  1775,     0,   282,   278,   179,     0,
     273,   275,   276,  2020,  1913,     0,     0,    67,    69,    65,
      83,  1884,  1913,     0,     0,     0,  1913,     0,     0,     0,
     175,  1607,   173,   178,     0,     0,   177,  1616,   156,   157,
    1915,   160,  1699,  1273,  1272,   119,   123,   126,  1942,  1913,
       0,    85,   103,   155,     0,     0,   704,  1913,     0,   715,
     707,   708,   720,  1999,  2000,     0,   874,   796,   819,     0,
       0,  1686,  1687,  1939,     0,  1710,     0,     0,     0,     0,
    1730,  1633,  1634,  1635,     0,     0,     0,     0,     0,     0,
       0,     0,  1731,   883,   876,     0,     0,  1625,     0,     0,
    1720,     0,     0,  1648,  1649,  1650,  1576,  1644,     0,  1575,
    1765,     0,     0,     0,     0,     0,  1764,   888,   893,   895,
       0,   938,   898,  1665,   906,   899,   905,   942,   949,  2011,
    2012,   947,     0,   950,     0,   958,   955,  1996,  1995,  1587,
       0,  1779,  1588,  1691,  1692,   964,   965,   968,   962,  1953,
    1213,  1015,   970,   738,   738,   975,  1471,  1468,   979,   976,
    1623,  1987,  1465,  1465,  1465,  1465,  1024,  1017,     0,     0,
     908,  1027,  1053,  1029,  1524,  1524,  1030,  1037,  1038,   738,
    1549,  1550,  1551,  1545,  1530,  1978,  1537,  1557,  1560,  1559,
    1561,  1553,  1544,  1543,  1548,  1547,  1546,  1552,  1532,  1536,
    1554,  1556,  1558,  1534,  1535,  1531,  1533,  1525,  1526,  1538,
    1539,  1540,  1541,  1542,  1529,  1059,  1057,  1618,  1074,  1975,
     738,  1089,     0,  1109,     0,  1136,  1120,  1112,  1117,  1118,
    1119,  1307,     0,  1680,     0,     0,  1160,  1156,     0,  1164,
    1987,  1213,  1178,  1184,  1185,   738,  1181,  1524,     0,     0,
    1189,     0,  1229,  1201,  1770,  1771,  1952,     0,  1233,  1239,
    1236,  1203,  1248,  1241,  1213,  1256,  1262,  1251,     0,  1256,
       0,  1655,  1657,  1658,  1659,     0,  1292,  1295,     0,     0,
    1596,  1275,     0,  1274,     0,     0,  1691,  1336,  1318,  1324,
    1913,  1325,  1320,     0,  1338,  1342,     0,  1364,  1352,     0,
    1355,  1882,  1356,     0,  1371,  1366,     0,  1378,   736,   734,
     727,     0,  1955,  1956,  1384,  1403,  1386,  1882,     0,  1451,
    1437,  1441,   363,     0,     0,   531,   380,   412,   415,     0,
       0,   368,     0,   378,   373,   379,   376,  1913,  1776,   188,
    1894,   279,   280,   281,  1869,     0,   271,   274,     0,  2019,
      76,    66,     0,  1608,    75,    59,     0,     0,  1706,  1702,
    1707,  1705,  1703,  1708,  1704,   164,   165,   167,   176,   171,
     169,     0,   158,  1917,  1916,   161,     0,  1942,  1945,  1944,
       0,     0,   120,   124,    87,    26,    37,    40,    44,    43,
    1950,    38,    39,     0,  1913,   716,     0,     0,   694,  1695,
    1877,  1879,   824,  1913,  1452,   820,   821,   823,   825,     0,
       0,     0,   813,  1452,  1994,  1993,   810,   802,   804,   805,
       0,  1452,     0,     0,     0,   828,   808,     0,   816,   799,
     815,   800,  1564,  1562,     0,  1685,  1652,  1651,     0,  1637,
       0,  1564,  1562,     0,  1564,     0,  1746,  1564,  1581,  1583,
    1564,     0,     0,     0,  1564,  1641,  1642,  1643,     0,  1585,
    1564,     0,  1938,  1474,   881,  1693,  1620,     0,  1712,     0,
       0,  1564,  1578,  1767,   888,  1568,  1567,  1571,  1570,  1573,
       0,   886,     0,     0,  1603,   907,   948,   953,     0,  1899,
       0,  1621,  1474,  1913,  1778,  1690,   966,  1898,  1510,  1214,
    1215,  1470,   739,  1473,  1466,  1472,  1467,  1469,     0,   989,
     988,   981,   984,   986,     0,   973,   974,   971,   972,     0,
    1474,     0,   914,  1032,  1047,  1049,  1048,  1042,  1044,  1050,
    1524,  1039,  1036,  1524,  1040,  1555,  1527,  1528,  1940,  1073,
    1599,   738,  1081,  1082,  1978,  1097,  1098,  1100,  1102,  1103,
    1099,  1101,  1092,  1978,  1088,     0,  1137,     0,  1139,  1138,
    1140,  1122,  1132,     0,     0,  1116,  2018,  1941,     0,  1309,
       0,  1904,     0,  1153,  1474,     0,     0,     0,  1182,  1195,
    1191,  1196,  1192,  1197,     0,  1187,  1446,  1445,  1194,  1203,
    1440,  1674,  1675,  1676,     0,     0,  1243,   738,     0,  1255,
       0,     0,     0,     0,  1293,     0,  1297,  1296,  1289,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1277,  1278,
    1772,  1510,     0,  1341,  1970,  1970,  1361,     0,     0,  1474,
       0,     0,   737,     0,  1759,     0,  1361,  1213,  1863,   365,
     526,     0,     0,   626,     0,   438,     0,   369,   375,   419,
     381,  1888,  1913,     0,     0,  1913,  1888,  1931,  1913,  1867,
     299,     0,   304,   307,   308,   309,   310,   311,   312,   313,
     314,   315,     0,     0,   190,  1895,  1972,  1870,  1898,   272,
       0,    79,    81,    80,    77,    78,    61,   135,   134,   149,
     145,   150,   131,   148,   146,   132,   133,   147,   130,   136,
     137,   139,   166,     0,   170,     0,   174,  1700,   159,   162,
       0,  1943,   127,   121,   122,   125,     0,     0,    86,     0,
      90,    42,  1951,    36,    41,   710,   711,   714,     0,   705,
     721,   723,  1669,   832,  1667,  1668,     0,  1458,  1459,  1463,
    1464,   798,  1460,   738,  1455,   738,   822,  1992,  1991,  1933,
    1933,   830,   831,  1933,     0,   837,  1913,   839,   840,   841,
     872,  1913,   842,   843,   844,   845,   846,     0,   866,   867,
     848,   850,     0,   851,   870,   868,   869,     0,   853,  1913,
     838,  1865,   856,   871,   859,   826,   847,   852,   858,   814,
     801,   803,  1452,   811,   806,   807,   829,   809,  1565,  1566,
    1696,     0,     0,     0,  1654,  1636,  1653,  1777,     0,  1741,
       0,  1741,  1745,     0,  1741,  1741,  1741,     0,  1724,     0,
    1741,     0,   738,   738,   877,  1480,  1477,  1691,  1692,  1474,
       0,  1741,  1741,     0,  1766,   887,   889,   896,   894,   918,
     952,   951,   956,     0,  1218,     0,   738,   738,   963,  1511,
    1517,  1514,   741,   995,   996,   993,   992,   994,   991,   985,
    1913,   997,     0,  1000,  1001,  1892,  1913,  1004,  1005,   987,
    1006,     0,  1913,  1009,  1007,   990,     0,  1018,     0,   909,
     910,   709,     0,  1524,  1524,  1046,   738,  1043,     0,  1080,
     738,  1083,  1078,     0,     0,  1104,     0,     0,     0,  1133,
    1135,     0,  1128,  1142,  1129,  1130,  1121,  1124,  1142,     0,
    1657,  2017,     0,  1990,  1301,  1913,   504,   505,  1918,     0,
    1905,  1308,  1154,  1157,     0,  1946,  1946,     0,  1171,  1172,
    1591,  1183,  1180,     0,     0,  1205,  1204,   738,   738,  1237,
    1499,     0,  1510,  1244,     0,  1257,  1524,  1524,  1252,  1258,
    1276,  1298,  1288,  1290,  1280,  1281,  1282,  1286,  1283,  1287,
    1284,  1285,  1279,  1773,  1334,     0,  1331,  1332,  1326,     0,
    1319,  2016,  2015,     0,  1971,  1345,  1345,  1483,     0,  1359,
    1358,  1360,  1777,  1367,     0,   730,     0,  1760,  1389,  1390,
       0,  1393,  1396,  1400,  1394,  1243,  1864,     0,   364,   365,
     529,     0,     0,   290,  1915,   413,     0,   439,     0,   410,
    1913,  1874,     0,  1889,     0,     0,  1913,  1867,     0,     0,
       0,     0,     0,  1932,  1913,   358,  1868,   359,     0,     0,
     360,   305,   306,  1952,  1973,  1888,     0,  2007,  2008,    74,
     138,   141,     0,   168,     0,   163,   128,     0,    96,    33,
       0,    33,     0,    88,    91,   712,   713,   723,   741,   836,
    1453,  1461,  1457,  1454,  1456,  1462,  1934,     0,     0,     0,
    1701,   827,  1670,  1671,     0,     0,   865,   857,  1913,  1913,
    1520,  1520,     0,  1866,     0,   812,  1563,  1697,     0,  1474,
    1755,  1728,  1757,  1729,  1753,  1725,  1726,  1727,  1751,  1748,
    1749,  1723,  1621,  1482,  1479,  1475,  1481,  1476,  1478,  1690,
     878,  1742,     0,  1721,  1722,  1768,  1660,  1661,   927,  1911,
    1781,  1782,  1783,  1784,  1785,  1786,  1787,  1788,  1780,     0,
    1516,  1519,  1512,  1518,  1513,  1515,     0,     0,   998,   999,
    1938,   676,   678,  1002,  1003,     0,     0,  1520,  1520,     0,
    1474,  1586,  1474,  1586,   911,   912,     0,   916,   915,   917,
    1045,  1051,  1041,  1075,  1079,  1090,  1093,  1094,  1890,  1086,
    1978,  1091,  1142,  1656,  1142,     0,  1909,  1909,  1127,  1143,
    1144,  1125,  1131,  1126,  1989,  1311,     0,  1919,  1305,  1906,
    1474,  1947,   267,   268,   269,  1175,  1165,  1592,     0,  1198,
       0,  1940,     0,  1224,  1206,  1219,  1212,  1208,  1221,     0,
    1498,  1501,  1492,  1500,  1493,  1242,  1245,     0,   738,   738,
    1259,  1333,  1323,  1327,  1328,  1329,  1330,  1321,  1343,  1346,
    1344,   738,   738,  1353,  1489,  1486,  1913,  1474,  1474,   732,
    1381,  1759,  1392,  1902,  1398,  1902,  1483,  1447,  1444,  1443,
    1923,   527,   365,   532,     0,     0,   416,   440,     0,   409,
       0,   514,   444,  1961,  1961,  1961,  1961,  1961,  1983,   445,
     480,   482,   448,   449,   450,   451,   452,   453,   476,   474,
     475,   477,   478,   483,   481,   454,  1957,   479,     0,   455,
     441,   456,   457,     0,  1964,   459,   460,   458,  1920,   462,
     463,   461,  1913,   420,   421,   422,   423,   424,   425,   442,
     446,   447,   426,   427,   428,   429,   430,   431,   432,   433,
       0,     0,  1875,     0,   414,     0,   382,   327,   236,   355,
    2009,  2010,  1611,   336,  1609,  2002,  2001,   329,  1613,  1612,
    1929,  1886,  1902,     0,  1913,   333,   332,  1913,   361,  1931,
    1952,  1980,   252,     0,  1913,  1884,  1918,   254,     0,  1987,
     240,   189,   239,   191,   192,   193,   194,   195,   196,     0,
     197,     0,   198,   251,   199,   200,   201,   202,   203,   204,
    1880,  1913,     0,   277,     0,   140,   172,    92,    93,    97,
      94,    95,    89,   741,   833,   835,   834,   861,   860,     0,
       0,   863,     0,  1672,  1673,   862,   855,   864,  1698,   879,
    1743,   738,   738,   738,   900,   934,   930,  1938,  1912,   921,
     926,   925,   920,     0,  1217,  1216,  1011,  1893,   677,   679,
    1010,  1013,  1012,  1008,  1020,     0,  1019,     0,   913,  1629,
    1628,  1683,  1095,  1891,     0,     0,  1123,  1134,  1142,  1910,
       0,     0,  1145,  1146,     0,     0,  1314,  1310,  1304,  1158,
    1174,     0,     0,     0,  1209,  1913,  1510,  1207,  1220,     0,
       0,     0,  1223,  1246,  1253,  1260,  1491,  1488,  1484,  1490,
    1485,  1487,     0,  1369,  1368,  1404,   731,     0,  1391,  1903,
       0,  1902,  1395,     0,  1387,   738,   738,  1438,  1449,  1507,
    1504,  1448,  1924,  1925,  1442,   530,   534,   627,   515,   517,
     519,   411,   523,   524,  1962,   473,   472,   465,   464,   471,
     470,   469,   468,   467,   466,  1984,     0,  1958,   511,   497,
     491,   434,  1965,  1921,  1922,   512,     0,   436,  1789,  1789,
     418,  1938,     0,     0,   417,   383,     0,   317,     0,   354,
    1610,  1930,   338,     0,   320,  1966,   347,   349,   353,   352,
     348,   350,   346,   351,     0,     0,  1913,  1918,  1981,  1982,
     219,   255,  1952,  1913,  1913,  1913,  1913,   264,  1871,   265,
       0,  1913,  1931,  1881,     0,     0,   283,   284,   287,   142,
     143,     0,   849,   854,  2013,  2014,  1521,   932,   936,   933,
     928,   935,   929,   931,     0,   919,  1474,  1474,     0,  1105,
    1141,  1148,  1147,  1913,  1312,     0,     0,  1302,  1306,  1173,
       0,  1211,     0,  1202,  1227,  1499,  1496,  1226,  1210,  1222,
    1362,  1412,   733,  1397,     0,  1401,  1506,  1509,  1502,  1508,
    1503,  1505,   533,   629,   521,   518,     0,   513,  1902,   493,
       0,  1976,   443,     0,   435,  1884,   484,   485,     0,     0,
     392,   388,   391,   390,   389,   404,   400,   402,   403,   405,
     401,   406,   407,   408,   385,   396,   397,   398,   393,   394,
     395,   387,   384,   328,   319,   318,   316,   356,  1605,   337,
    1886,  1967,   325,   334,   331,   335,   330,     0,  1913,   221,
     220,   217,   254,   250,     0,     0,     0,     0,  1872,  1873,
     263,   266,     0,  1913,   253,   235,   285,     0,   286,     0,
       0,   922,  1022,  1021,  1096,     0,  1315,  1913,  1524,  1225,
    1494,  1495,  1497,  1877,  1435,  1434,  1413,  1405,  1406,  1865,
    1407,  1408,  1409,  1410,  1433,     0,     0,  1399,     0,   535,
       0,   633,   628,   630,     0,     0,   516,     0,   520,     0,
       0,   491,   492,  1977,   495,   437,  1790,   386,   399,  1606,
       0,     0,   339,   340,   341,   342,     0,   321,  1901,   327,
       0,   229,   230,   228,   227,     0,   213,   214,   224,   224,
       0,   212,   210,   211,   216,   215,   224,   224,     0,   256,
     257,   258,   259,   262,   237,     0,   288,   144,   722,  1313,
       0,  1199,     0,  1968,     0,  1940,   536,     0,   634,     0,
     631,     0,  1913,   498,   494,   499,  1940,   502,   345,   344,
    1876,  1886,   326,  1761,   225,   207,   226,   208,  1894,   209,
     206,   222,   205,   223,  1913,     0,   246,   245,   246,   242,
    1316,     0,  1969,     0,  1431,  1430,  1429,     0,     0,   636,
     637,   632,  1986,     0,   500,   502,     0,   506,   501,     0,
     323,   232,  1762,   218,     0,   260,     0,   244,   243,  1432,
    1998,  1997,  1948,  1425,  1419,  1420,  1422,     0,  1913,  1963,
     522,   506,   496,  1882,   489,  1918,   343,  1940,   322,     0,
     231,   261,     0,   249,  1949,  1940,  1428,  1423,  1426,     0,
    1421,   540,  1913,  1913,  1867,  1926,   565,   539,   543,   544,
       0,  1896,   652,  1913,   641,  1983,   642,  1892,  1913,     0,
     657,   650,   645,   651,  1933,   646,     0,     0,   649,   659,
     656,   654,   653,     0,   660,   648,     0,   671,   665,   669,
     668,   666,   670,   638,   672,   667,   655,   647,     0,  1933,
     490,     0,  1913,     0,     0,     0,     0,  1427,  1424,     0,
    2036,  2037,  1913,  1867,     0,   537,   541,  1897,   545,     0,
       0,   639,   640,   643,   644,     0,   674,  1913,  1976,  1913,
     675,   673,   691,  1913,   510,   507,   508,     0,   324,     0,
     151,   152,   234,     0,  2005,  2006,   247,  1418,  1415,  1417,
    1416,  1411,  1414,   542,  1927,  1928,   553,   550,   377,   566,
     546,   547,   664,   663,   684,   690,     0,   687,   509,   503,
     233,   248,   549,  2003,  2004,   552,   567,   379,   548,   682,
     680,   683,   681,   685,   686,     0,   658,   688,   689,     0,
       0,  1913,  1913,     0,   554,   555,   556,   557,   558,   559,
       0,   569,   661,   662,  2023,  2022,  1913,     0,     0,  2025,
       0,  1913,  1913,   551,  1963,     0,   564,   560,  2024,     0,
       0,  1907,  1935,  1867,     0,     0,     0,  1913,  1938,   568,
    1913,  1913,     0,   574,   576,   585,   577,   579,   582,   570,
     571,   572,   581,   583,   586,   573,     0,   578,     0,   580,
     584,   575,  1935,  1867,   561,   563,   562,  1908,   624,  1936,
    1937,  1915,   610,  1913,   491,  1524,     0,     0,     0,     0,
       0,   618,     0,   608,   614,   617,     0,   611,   619,   622,
    1915,   613,   609,     0,  1976,   606,  1777,   602,  1639,  2027,
       0,     0,  2029,  2031,     0,  2035,  2033,   587,   591,   595,
     595,   589,   593,   588,   594,   625,     0,   616,   615,   621,
     620,   612,   600,   495,   623,  1940,   601,  1640,  2026,  2030,
    2028,  2034,  2032,   598,   590,   598,   592,     0,   487,     0,
       0,   597,   596,     0,     0,   486,   605,   603,   604,   599,
     607,   488
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2471, -2471, -2471, -2471, -2471,  2288, -2471, -2471, -2471, -2471,
   -2471, -2471,  2238, -2471,  1633, -2471, -2471, -2471, -2471, -2471,
   -2471,  2242,  2240,   -68, -2471, -2471, -2471,  1222, -2471, -2471,
   -2471, -2471, -2471,  2246, -2471, -2471, -2471,  2250, -2471, -2471,
    1906,  -245, -2471, -2471, -2471, -2471, -2471,  2101, -2471, -2471,
   -2471, -2471,   897, -2471, -2471, -2471, -2471,  2090,   -15, -2471,
   -2471, -2471, -2471,  1237, -2471, -2471, -2471, -2471, -2471,   919,
   -2471, -2471, -1686, -2471, -2471, -2471, -2471, -2471,  1583, -2471,
   -2471, -2471, -2471,  1258, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  -884, -2471,
   -2471, -2471, -2471, -2471,    39, -2471, -2471, -2471, -2471, -2471,
    -223, -2471,    54, -2471, -2471, -2471,  -158, -2471, -2471, -2471,
   -2471,    51, -2471, -2471,  1621, -2471, -2471, -2471, -2471, -2471,
      46, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  -145, -2471,
   -2471, -2471,    72, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -1267, -2471, -2471,  1645, -2471, -2209, -2261,  -670, -2471, -2471,
   -1189, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2097,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,   629, -1828,
    -246,   108, -1081, -1071, -1756, -2471, -2471, -2471, -2359, -2471,
    -528, -2471, -2471,  -219, -2471,  -221,  -242, -2471,  -344, -1721,
   -2471, -1698, -2471, -1658, -2471, -2471,   147, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  -508,
    -529, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -1264, -2471,  -479, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471,   -94, -2471, -2471, -2471,  -267,  -266,  -365,  -364,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471,  2113,   460, -2471,   784, -2471, -2471, -2471, -2471, -1288,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471,   229, -2471, -2471,
     -25, -2471,  2291, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
    1262, -2471,  -666, -2471, -2471,  -601, -2471,  -220, -1186,   901,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1198,
   -2471, -2471, -2471,  1857, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471,  1194, -2471, -2471,   801, -2471, -2471,  -621, -2471, -2471,
   -2471,   265, -2471,   267, -2471, -2471, -2471, -2471,  1853, -2471,
   -2471, -2471,  1556, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1836,
   -2471, -2471, -2471,  1178, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1517,
   -2471, -2471,  1520, -2471, -2471,  1159,   810, -2471, -2471, -2471,
   -2471, -2471,  1822, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471,   530,  1473, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,  1471, -2471,
   -2471,   792, -2471,  1139, -2471, -2471, -1531,   523,   525, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471,  1803, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -1297,  1802, -2471, -2471, -2471,   773, -2471, -2471, -2471,
    1118, -2471, -2471, -2471,  -801,   774, -2471, -2471,   506, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471,   713, -1499, -2471, -2471, -2471, -2471,
   -2471, -2471,  1441,   765, -2471, -2471, -2471, -2471, -2471,  -499,
   -2471, -2471, -2471, -2471,  1097, -2471, -2471, -2471,  1775, -2471,
    1777, -2471, -2471, -2471,  2052, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471,   742, -2471, -2471, -2471, -2471, -2471,
    1779, -2471, -2471,  1084, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471,   480, -2471,  1087, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
    -156, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471, -2471,
     613, -2471,  1408, -2471, -2471,  -975, -2471,   986, -2471, -2471,
     989, -2471,   882, -2471,  1579, -2471,  1576, -1068, -2471,   909,
   -2471,   912,   488, -2471,   504, -2471,   507, -2471, -2471, -2471,
   -1576,   115, -1234, -2471, -2471,   238, -2471,   244, -1261,   498,
   -2471,   893, -2471,   896,  -363,  -918,  -302,  -812, -2471, -2471,
    1543, -1079,   780,   783,   785,   786,   813,   510,  -172,   873,
     880, -2471,  1278,   -21,  -703,  -261,  1090,  1818, -1677,  -196,
    -359, -2471,  -608, -2471,  -259, -2277,  1636, -1477,  -375,  1405,
   -2471,   425, -1173,  -192,  1720,  -294,  -279, -2471,   494,   297,
   -2471,   606, -2471,  -715, -1273, -2471,  1158,  -495,  -848, -2471,
     931,  -321,  1940, -1590,   684, -2471,  -164,  -331, -2471,  1220,
   -2471, -2471, -2471,  -293,  -447, -2471, -2471,  1379,  -477,  -486,
    -308,  1061, -1401,  1068,  -339,  -208,  -440,   -76, -2471, -2471,
   -2471,   125,  1985, -2471, -2471,   935, -2471, -2471, -2471, -2471,
   -2471, -2471, -2471, -2471, -2471, -2471, -2471, -1461, -2471, -2471,
     233, -2471, -2471, -2471, -2471,    34, -1687, -2471, -2471, -2471,
   -2130, -2471, -2471,  -968, -1885, -1967, -1196, -2471, -2471,   -57,
   -2471, -1155, -2471, -1813, -2471, -2471,   597, -2471,  -211, -1663,
   -1976, -2471, -2471, -2471, -2471, -1305, -1415,  -337,  -517, -1214,
    1403,   860, -2471, -2471,  -521, -2471, -2471, -2471,  -232, -2471,
   -2471, -2471,  1162, -2471,   895, -1905,  -834, -2471, -2471, -2471,
    -296,   755, -1693, -2470, -2471, -2471,  1083, -2471, -2471,  -212,
   -2471,  1141, -2471, -2471, -2471,   -44, -2471, -1568,  -335, -2471,
   -2471, -2471, -2471, -2471, -2471
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    12,
      57,    58,    59,    61,    18,    13,    23,    35,   428,    24,
      34,    80,    84,   236,   744,  1080,  1081,  1082,    19,    20,
      32,    33,    51,    52,   204,   400,   714,    53,   203,   390,
     391,   392,   393,   394,   395,   396,  1374,   397,   420,  1074,
    1408,  1409,  1410,  1740,    75,   218,   219,   220,   221,   222,
     418,   735,  1404,   736,   737,   223,   716,  1388,  1389,  1390,
    2074,  2279,  1391,  2692,   224,   425,   225,   728,   729,   730,
    1398,   226,  1055,  1056,   227,   228,  1394,   229,   230,   231,
     232,   233,   234,    47,    48,    71,   381,   202,   382,  1364,
    1723,  2053,  2054,  2486,  2487,  2488,  2391,  2532,  2525,  2055,
    2474,  2056,  2590,  2057,  2019,  2058,  2059,  2060,  2061,  2539,
    2567,  2062,  2063,  2064,  2065,  2066,  2491,  2067,  2068,  2268,
    2069,  1618,   698,   699,   700,   701,  1034,   702,  1030,  2276,
    2277,  2408,    29,   196,    30,    44,    67,   197,   198,   691,
     199,  1027,  1352,  1353,  2376,  1354,  2588,  2469,  2237,  1355,
    1356,  2037,  2384,  1357,  1358,  2379,  2462,  2463,  2464,  2465,
    1359,  2252,  2253,  1360,  2239,  1361,  1362,  1719,   373,  1329,
     374,   375,   683,   684,  1339,   685,  1024,  1025,  1701,  2234,
    2364,  2365,  2366,  2367,  2368,   686,  1949,   687,  1334,   688,
    1335,  2014,  1700,  1993,  1994,  1995,  2344,  1696,  1697,  1997,
    1998,  1999,  2000,  2001,  2002,  2785,  2885,  2003,  2341,  2451,
    2517,  2339,  2555,  2557,  2558,  1608,  2584,  2685,  2686,  2004,
    2005,  2006,  2007,  1695,  2334,  2198,  2199,  2446,  2009,   679,
    1689,  1015,  1942,  1333,  2196,  2332,  2439,  2548,  2578,  2607,
    2608,  2668,  2710,  2609,  2706,  2722,  2744,  2745,  2746,  2747,
    2748,  2749,  2665,  2709,  2751,  2764,  2789,  2790,  2847,  2874,
    2881,  2791,  2792,  2866,  2887,  2793,  2794,  2795,  2796,  2797,
    2798,  2823,  2824,  2827,  2828,  2799,  2800,  2801,  1693,  2333,
    2442,  2443,  2444,  2550,  2579,  2643,  1833,  1834,  2733,  2734,
    2735,  2739,  2644,  2645,    41,   752,  1421,    42,    89,   241,
     240,   430,   431,   432,   749,  1086,   243,  1088,  1747,   367,
     663,   664,  1929,  2176,   665,   666,  1321,  1191,  1192,  1542,
     667,    65,   142,   143,   317,   440,   758,   441,  1094,  1095,
    1096,  1119,  1097,  1441,  1442,  1098,  1475,  1476,  1477,  1478,
     757,   144,   318,   478,   786,   784,   145,   319,   495,  1171,
     146,   320,   507,   508,  1173,   147,   321,   516,  1175,   517,
     815,   861,  1212,  1569,  1570,  1571,  1808,   336,  2112,  2104,
    2292,  2105,  2290,  2106,   812,   148,   322,   520,   521,   149,
     323,   524,   821,   150,   324,   527,   826,   151,   152,   153,
     325,   536,   835,   838,   154,   326,   540,   541,   542,   543,
     851,   544,  1201,  1202,  1203,  1547,  1565,   842,   155,   327,
     548,   857,   156,   328,   551,   157,   329,   554,   555,   556,
     866,   867,   868,  1222,   869,  1217,  1218,  1575,   863,   158,
     330,   565,   337,   159,   331,   566,   160,   332,   569,   161,
     333,   572,  1229,   162,   163,   338,  1233,  1582,   164,   339,
     577,   911,  1242,  1585,  1856,  1857,  1858,  1859,   165,   340,
     580,   166,   341,   582,   583,   917,   918,  1254,   919,   920,
    1596,  1597,  1251,  1252,  1253,  1590,  1868,  1869,  1870,   167,
     342,   168,   343,   592,   169,   344,   594,   927,   170,   346,
     600,   601,   602,   931,  1886,   171,   347,   606,   935,  1622,
     936,   607,   608,   609,  1270,  1272,  1273,   172,   348,   616,
    1285,  1893,  1894,  1895,  1188,  1189,  1190,  2157,  1897,  2156,
    2313,   943,   173,   174,   349,   618,   175,   176,   350,   621,
     950,   177,   351,   623,  1632,  1633,   953,   178,   179,   352,
     626,   959,  1288,  1638,  1639,   957,   180,   353,   632,   738,
     974,   633,   634,  1308,  1309,   635,   636,   637,   638,   639,
     640,   641,   181,   354,   587,  1875,   921,  2148,  1259,  1604,
    2146,  2307,   182,   355,   649,  1311,   982,  1655,  1656,  1657,
     978,   183,   651,   984,  1918,   361,   184,   362,   652,   653,
     654,   992,  1670,  1667,   988,   185,   363,   657,   995,   186,
     365,   187,   366,   659,   188,   368,   668,   189,   369,   671,
     190,   370,   673,  1008,  1678,  1679,  1326,  1681,  1934,  2182,
    1936,  1006,  2177,  2321,  2427,  2428,  2429,  2701,  2430,  2574,
    2575,  2599,  2431,  2546,  2432,  2433,  2434,   191,   371,   675,
     948,  1327,  1278,  2187,  1010,  1431,  1753,  1432,  1433,  1750,
    1434,  1435,   845,  1196,   846,  1194,   847,  1514,  1797,  1515,
    1795,  1516,  1923,  2170,  1924,  2168,  1925,  1629,  2314,  2421,
    1630,  1902,  1903,  2188,  2330,  2189,  2328,  2190,  1538,  1539,
    1824,  1540,  1822,  1541,  2091,   575,   576,   558,   559,   897,
     898,   899,   900,   901,   902,   903,  1122,  1491,  1132,   497,
     498,   499,   500,   479,   528,   829,   619,   627,  1619,  1620,
     581,   642,   643,   908,   610,   510,   511,  2377,  2029,  1044,
    2023,  2024,  2030,   404,   731,   567,   530,   849,   480,   481,
    2128,   482,  2837,  1144,   502,  1128,  1495,  1598,  1862,   961,
    1863,   522,   611,  1423,  1761,  2092,  1280,  1424,   588,   646,
     669,  1599,  2130,   483,   443,   531,   532,   444,   761,   762,
    1425,  1399,  2825,  1057,   484,   485,   486,   487,   488,   489,
     490,   790,   770,  1151,  1148,  1141,  1133,  1135,   689,  1680,
    2561,   807,  1164,  1524,   946,  1659,   695,   832,  1184,  1818,
    2346,   314,   315,   316,  1687,  1774,  1717,  1368,  2400,  2015,
    1099,  1100,  2274,   433,   398,   417,  1704,  2134,  1835,  1366,
    2669,  1180,  2470,  2180,  1611,  2808,  2140,  2113,   410,  1066,
    1878,  2225,  2194,  2664,  2242,  1714,  1757,  2811,   764,  1260,
    1070,  1882,  2595,  1413,  2070,  1004,  2218,   408,  2206,  2011,
    2382,  2543,  1665,  1725,   910,  2454,   573,  2260,  2216,  2447,
     615,  1605,  1443,  1121,   830,  2572,   755,  2027,  2725,  2696,
    1729,  1708,   823,  2286,  1663,  1261,   399,  2756,  2762,  2850,
    2851,  2852,  2853,  2854,  2611
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     411,   412,   585,   378,   415,   546,   765,   660,   771,   824,
    1017,  1018,  1019,   237,  1578,   405,   840,    64,  1564,  1271,
    2021,   413,   645,  1317,   442,  1758,   503,   557,  1759,   523,
     983,  1945,  1535,   547,   970,   720,  1779,   723,  1946,  1324,
     726,  1225,  2008,  1763,   793,   578,  2075,   834,   584,  2073,
    1660,  1631,   568,  1219,   612,  1904,   833,  2689,   376,   644,
     568,   509,  1688,   529,  2244,   402,  1150,  1872,   402,  1737,
    2265,  2266,  1063,   429,   568,   670,  1160,   674,   429,    87,
    1727,  2460,  1153,   625, -1679,  1246,   864,  2573,  1742,  1703,
   -1940,  1076,  2515,  1488,   526, -1680,  1035,  1940,  1256,  1731,
   -1987,   951,  1847,  2281,  1770,   715,  1837,  2873,   446,  1228,
     739,   504,   416,   923,  1532,  1602,   534,  -697, -1882,  1023,
     933,  2886,  2183,   534,  2440,  1615,  1898,   525,  1479,   537,
    1267,   534,   914,  1748,   960,  1247,  1483,   526,  2107,  2544,
    1543,  1544,  1567,  2101,  1450,   534,   708,   496,  2144,  2577,
    1711,  1120,   617,  1286,   622,   766,  1210,  2161,  -366,   650,
    2263,   834,  1766,  1072,  1437,  1214,  1438,  2084,  2085,  2086,
     976,  2671,   875,   672,  2087,  2088,   706,   194,  2034,  2508,
   -1940,  1126,  2096,  1906,  1068,  1199, -1688,   435,   713,  1256,
    1789,  2435,  1077, -1987,   717,   718,  1613,   719, -1974,   797,
     797,   797,   724,   725, -1709,   423,  -695,   740,  1907,  1214,
    1415,  1927,  -538,  1726,   800,   631, -1987,   745,  2035,  2245,
     438,   913,  2025,    21,   612,  1264, -1987,   523,   513,   822,
    2042,  1658,  1488,   696,  2440,  2223,  2441,  2116,  1067,   409,
    -538,  -538,  1512,   505,  1572,    78,  2120,   772,   509,  2123,
    1200,  1673,    82,  2114,   753,   506,   747,  1760, -1985,  1248,
    -697,  2258,  2043,  1536,  -697,   586,  2534,  1738,  2389, -1987,
    2576,   614,   937,  2602,  1488,  1125,  2102,  1721,  2398,  2399,
    2763,  2388,   912,   794,   504,   504,   504,  2821,   907,  1064,
    1416,   938,  1406,  1319,  2803,   827,  1276,  2576,   501,   907,
     997,  2603,  2604,  1488,  1488,  2079,  2535,   454,  2445,  2115,
    1488,  1722,  2259,  2101,   612,  2672,  2390,  1129,   454,   631,
     534,   798,   801,  -697,  1249,   748,  1277,   802,   818,  1537,
    2374,  2136,  2822,  2137,  2080,    79,   962,  -697,  -697,   836,
    2026,   506,    83,  1058,   754,   968,  2441,  1185,  1158,  -695,
     454,   458, -1918,  -695,   697,   986,  1439,  1877,  -538,   534,
     568,   463,   458,   993,  1513,   907,   839,  2108,  2324,    22,
     534,  1905,   463,  1763,  2392,  1127,   696,  1181,   605,   773,
    1257,  1848,  1078,  2224,  1488,  1069,  1545,  -538,  2280,   514,
    2559,   515, -1882,  1488,   458,   436,  1898, -1882,  1040,   429,
    1583,   680,   969,   605,   463,   195,   423,   526,  1219,  1586,
    1616,  1219,  -695,  2467,   915,   795,   505,   505,   505,  1245,
     506,   963,  1941,  1494,   429,  1279,  -695,  -695,   439,  1790,
    2109,   534,  2145,  1489,  2215,  2162,   534,  1440,  1407,   661,
     732,   614,  1745,  2545,   934,  -366,   467,  2726,   409,  2110,
     439,  1800,  -366,  2103,  1519,  2834,  2708,   467,   760,  2083,
    2456,   788,  1101,  1016,   439,  1603,   708,   797,  2304,  -697,
    1294,   501,   501,   501,   797,   797,   797,  1617,  -538,   890,
    1771,  2690,  1838,   797,   797,   797,  1145,  1490,  1145,   467,
    1185,  1079,   916,  1038,   662,  1258,   797,   697,  1145,   797,
    2283,  1042,   732,  1029,  1090,  1047,  1323,  1775,   797,   797,
     797,   797,   797,  1576,   605,   710,  2461,   439,  2243,   875,
   -1913,   469,   822,  2036,   529,  2449,  1685,   971,  1071,  2072,
    1849,   614,   469,   760,  1473,  1199,  1083,   797,    88,  2605,
   -1876, -1882, -1876,  1732,  1124,   909, -1882,  1728,  1073,   439,
   -1974,  -366,   504,   964,  2560,  1204,   605,  1743,  -695,   504,
     504,   504,   557,  1250,   469,  1036,  1546,   472,   504,   504,
     504,  1146,  1489,  1146,  1911,   727,   526,  1156,   472,  2691,
    2315,   504,   377,  1146,   504,  1739,  1258,   661,  1123,   403,
    1548,   865,   403,   504,   504,   504,   504,   504,   529,   439,
    1200,  1572,   828,   439,  1140,  1140,  1140,  2300,  1282,  2652,
     472,  2111,   605,   439,  1489,  1482,  1215,  1159,  -538,   477,
     454,   962,   504,  2103,   549,   680, -1754,  1216,  2416,   797,
     477,  1263,   801,   574,  1266,  1511,  2375,   802, -1918,  1186,
     593,   595,   662,  1489,  1489,  1274,   568,   383,  2228,  1230,
    1489,  1156,  1653,   383,  1281,   384,   439,  1654,  1182,   655,
    1215,   384,   477,   526,   458,  1289, -1686,   529, -1756,  1518,
     526,  1216,   732, -1953,   463,  2195,   661,  2153,  1517,  2606,
    1275,  1496,   439,  1406,   505,   439,  1312,   526,   681,   907,
    1322,   505,   505,   505,     3,   682,  1316, -1752,  1502,   858,
     505,   505,   505,  1147, -1750,  1147,   963,   801,   962, -1987,
    2471,  2099,   802,   505,   504,  1147,   505,   534, -1882,  1909,
    1156, -1987,   409,  2497,  1489,   505,   505,   505,   505,   505,
    1370,   662, -1876,  1489,  2256,   529,  1300,  -702,   379,   501,
    2422,  1810,  1891, -1882,  1301,   518,   501,   501,   501,  2264,
    1760,  2637,  1093,    -5,   505,   501,   501,   501,  1591,   467,
     534,  1219,  -700,  1395,   439,  2160,  2028,  2697,   501,  1310,
    1422,   501,  2124,  2715,  2126,  1417,   732,   787, -1747,   518,
     501,   501,   501,   501,   501,  2161,   334,  1522,  1156,   454,
    2383,  2524,  1788,   963, -1758,  1379,  1640,  1063,  2531,  1101,
     843,  1644,  1645,  1646,  1647,  1648,  1649,  1650,  1651,   501,
    2592,  1906,  2149, -1876,  2305,   629,  1363,   962,    14,  -702,
     545, -1987,  1179,  2639,  2698,  2204,   890,   446,  1930,  1407,
     446,   797,  2699,   458,   469,   519,  1907,  1497,   964,  1380,
      15,  1921,   787,   463,  -700,  1661,   505, -1987,  1496,  1381,
    2476,  2477,  2478,  1606,  1371,  1078,   904,   658,  2640,  2173,
    2174,    49,  2729,  1840,   385,  1842,   972, -1882, -1987,  2231,
     385,  1283, -1987,  1418,   750,  1828,   454,  1877,  1402,  1403,
     472,  2641,  1426,   454,   859, -1987,  2649,  2229,   924,   803,
     746,  1526, -1882, -1987,   746,  2317,   529,  2012,   804,  2205,
     454,   501,   963,   973,   630,  1204,   605,   439,  1809,   380,
    1377,  1880,   681,  2536,  1528,  1302,   504,  2661,  2700,   682,
     458,  2642,  2316,  2730,  2118,   964,   439,   458,   467,  2863,
     463,  2306,   477,   844,  1383,   631,  2783,   463,  1124,  2593,
     386,  2472,  2219,  1607,   458,   534,   386,  1303,   985,   534,
     655,   732,  1493,   -35,   463,   787,  2246,  1627, -1987,  1892,
     962,  1600,   534,  2247,  1079,   335,   631,  2403,  1612,  1304,
    1512,  1928,  1533,     4,     5,  2479,  2705,  1198, -1987,  2702,
      50,   552,   605,   568,   907,   383,  1845,    17, -1884,  2480,
    1634,  1626,   553,   384,  1811,  1812,  1813,   605,   962,  2473,
     387, -1898,   534,   469, -1987,   388,   387,   439,  2784,  1384,
    1378,   388,   439,   356,  1064,   467,  1922,  2138,  1938,  1829,
    1668,  1662,   467,   751,  1305,  1672,  2135,  1314,   439, -1987,
    1668,  1799,  1682,  1682,   964,  1293,   850,   454,   439,   467,
     454,   439,  1372,  2786,  2372,   963,   963,  2423,   505,   472,
   -1953,  2537,   439,   439,   534,   534,   534,   681,  2565,   707,
     439,  1814,  2731,  2162,  1792,   709,  2787,  2732,  2119,  2232,
    2233,  2802,  2013,  1193,  2481,  2482,  2483,   732,    25,  1939,
    2712,   458,  1154,   963,   458,  2713,  2812,  2591,  1306,  2484,
     469,   463,  1513,  1864,   463,   439,   747,   469,  1224, -1987,
    1379,   477,   605,   501,  1373, -1644,  2788,  1387,   357,  1427,
    1746,   534,  1428,  1762,   469,  1043,  2831,   377,  2499,  1609,
     710,  1187,  1628,   605,  1698,   383, -1898,  2204,  1784,  1702,
    1512,  1705,    26,   384,  1710,  1712,   472,  1715,  1235,  1232,
    2693,  1236,  1237,   472,  1380,  2752,  2424,   787,  2832,  2753,
     358,  2369,  2369,  2538,  1381,  1209,  1211,  1315,   -21,  2457,
     472,  2370,  2370, -1758,  1268,   748,  2436,  2861,  1382,   402,
    1720,  1760,     4,     5,   206,  2761,   467,   964,   964,   467,
    2248,   944,   439,   359,  1807,  1932,  2485,  2425,   477,   439,
    1307,  1815,  1816, -1987,   904,   477,  1817,   535,   797,   797,
      27,  2207,   385,  2540,   998,   797,   439,   797,  1736,  2677,
    2719,  1179,   477,   439,  1145,   964,  -357,  1610, -1987,  1422,
   -1644,  2489,  2694,   207,  2695,  1265,  2426,   797,  2412,  2413,
    1806,   409,   945,  -357,  2683,  1764,  2227,   954,   560,  1383,
    1765,  2204,   797,  1429,   732,  1430,  2826,    31,  1807,   377,
    2848,   469,  1513, -1913,   469,   732, -1987,  2204,  1772,   605,
    2468,  2204,   208,  2707,   209,   999,   210,  2369,  1627,  1298,
    1947,  2249,  1851,  -357,   211,  2267,   806,  2370,   386,  2185,
    1313,   360,   409,   504,   504,  1853,  2868,  2518,  2519,  1011,
     504,  2547,   504,  1320,  1806,   962,  2250,   472,  2251,  1146,
     472,   801,  2556,  1600,   -21,  1841,   802,  1843,   733,  2768,
     734,   534,   504,  2117,  1384,  2209,  1885,  1385,  1386,  1776,
    1778, -1900,    28,  1888,  2750,   596,  1776,   504,  1776,  1899,
    1274,  2211,   212,   907,  1908,  2213,  2869,  1807,   387,  1827,
      43,   454,   385,   388,  -357,  1836,   439,  1048,  1802,   477,
    -692,  1839,   477,   529, -1987,  1536,  2766,  2767,   534,  2870,
     534,  2202,  1912,  1819,  2804,   561,   562, -1876,  2805,  2806,
     797,   979,  1536,  2653,  1427,  2864,   693,  1428,  -357, -1987,
     963,  2656,   597,  1806,   563,   458,  2586,   962,   963,  1634,
     598,  1049,    38,  2647,  1876,   463,  2017,  2829,  1031,  2131,
     694,  1050,   206,  2031,   534,    39,   534,  -357,  2095,  1177,
    1238,  1239,  1387,   529,  -357,   505,   505,  2186,   386,    45,
    2203,  1537,   505,  1887,   505,  -357,  2829,   213,   877,   878,
    1341,  1147,   980,  1628,  1178,   981,  1240,  1241,  1537,  2093,
    2093,   624,   564,  1762,   505,  2759,  1296,  1342,   605,   377,
    2596,   207,   389,   819,  1002,   504,  1003,  1297,  1866,   505,
    1579,   676,  2094,  2094,  1032,  1033,   534,    46,   879,   880,
     501,   501,   963,   214,  2121,  2122,   599,   501,   387,   501,
     467,  2760,  1830,   388,  2597,   206,  1051,  1343,  1867,  2010,
     208,  1917,   209,  -692,   210,  2020, -1688,  -692,  2754,   501,
    2501,  2147,   211,  2033,    54,  2598,  2093,  2093,  2755,  1831,
    2871,  1832,   964,   760,   501, -1644,  1635,  1826,    55,  2257,
     964,  1773,  1906, -1644, -1644,  2150,  1807,  2038, -1644,  2094,
    2094,  -357,  -357,  2872,   207,  1234,  2221,  1041,  1235,   774,
     775,  1236,  1237,  2836,  2838,    56,  -357,  1907,  -357,   780,
    2151,  2502,    60,  1162,  2740,   469,  -692,  2089,  2090,  2858,
     212,  1052,   589,   801,  2867,  2741,  2754,   215,   802,  2862,
    -692,  -692,  1806,   208,   589,   209,  2755,   210,    62,   820,
    1131,  1134,  1137,  2877,  1492,   211,   445,   505,  2742,   446,
    2294,    63,   801,   801,   810,  2527,  1643,   802,   802,  2159,
      66,   472,  2529,  2530,   964,  1161,  2200,  1053,    68,   605,
    2890,  1520,  2098,   216,  1671,  2651,  2662,  2663,  2743,  2570,
     801,   409,   801,  2571,  1781,   802,  1783,   802,  1344,  1785,
    1786,  1787,   534,   422,   534,  1791,  2809,  2810,  -357,  1345,
      69,  1498,   501,   212,  1500,    72,  1803,  1804,  2100,    70,
    1503,  2879,    73,   477,  1507,   213,    36,    37,   801,  1054,
    1509,    74,  1752,   802,  1755,   447, -1663, -1663, -1663, -1663,
    2220,  2078,   534,  2081,  1165,  1166,  2235,   448,   852,   853,
     854,   855,   449,  1167,  1168,  1169,  -357,    50,   217,   891,
     733,   892,   734,   403, -1662, -1662, -1662, -1662,    40,   512,
      49,   214,  -692,   533,  1179,   193,  1534,  2839,  2759,   200,
     533,   570,  1142,  1143,  2348,  2172,   201,  1706,   533,  1707,
     534,   590,  2208,  2210,  2212,  2214,   613,  1429,   620,  1430,
     620,   628,   647,   590,  1205,  1206,  1207,  1208,   213,   205,
    2269,  1793,  1794,   235,  2840,  1346,  1347,  2192,   242,  2193,
     620,   238,  2284,  2270,  2285,  2694,  2723,  2695,  2724,   239,
    1348,  2754,  1349,   345,   364,  1820,  1821,  1104,  2282,  1105,
     796,  2755,   799,   389,   372,   406,   407,   409,   450,   451,
     452,  2226,   416,   414,   214,  2371,  2371,   453,   419,   721,
     424,   721,   426,   427,   721,   215,   523,   437,   377,   454,
     550,   439,   571,   677,   579,  1852,   690,   678,   692,  1854,
    1238,  1239,   703,   704,   705,   712,   722,   727,   743,   756,
    2295,   741,   759,  2254,   760,   763,  2255,   767,   768,   783,
     788,   805,   455,  2262,   769,   809,  1240,  1241,   456,   776,
     457,   216,   811,   458,   777,   459,   460,   461,   778,   779,
     781,   462,  1350,   463,   789,   825,  1900,  1901,   464,  2200,
    2275,   742,   791,  2378,  2296,   792,  2297,   831,   837,   839,
     841,   905,   856,   860,   862,   909,  2278,  1887,   215,  2320,
     922,   925,   926,   928,   930, -1665,   512,  2323,   939,   940,
    2325,   941,   465,   947,   942,   956,   949,  2835,   958,   952,
    1351,  2371,   631,   965,   975,   977,   991,   533,   987,  1001,
     994,   466,  1005,  1007,  1009,  1012,   217,   534,  1014,   534,
    1013,  1890,  1016,  1028,   216,  1021,  1026,   732,  2373,  1043,
    1039,  1045,  2349,  1046,  1059,  2380,  1060,  1075,   467,  1061,
    1085,  1087,  1084,  1124,  2312,  1130,   533,  1138,  1139,  1149,
    1157,  1163,  1170,  1172,  1183,   506,  1187,   533,   844,   843,
    1220,  1223,  1919,  1919,  1231,  1244,   915,  1262,   605,  1269,
     468,  1284,  2350,  2351,  2352,  2353,  2354,  1287,  1299,   429,
    1318,  1291,  2841,  1292,  1331,  1325,  2842,  2843,  1332,  1330,
    1336,  1337,  1338,  1340,  1367,  1369,  1365,  2448,  1376,   217,
    1396,  2411,  2459,  1393,   628,  1397,  1419,  1401,  1414,  1960,
    1961,  1412,  1444,   469,  1420,  1480,  1481,  1484,   533,  2419,
    1486,  2492,  2493,   533,  1485,   470,   471,  2494,  1499,  1501,
    2844,  2437,  2452,  1504,  1487,  1505,  1506,  1530,  2727,  1508,
    1510,  1521,  1523,  1527,  1531,  2387,  1566,  2845,  2846,  1568,
    1573,  1574,  2394,  2395,  2396,  2397,  1257,  1580,  1581,   472,
    2402,  1587,  1584,  1588,  1601,  1614,  1621,  1623,  1624,   473,
    1636,  1637,  1664,  1674,  1675,  1641,  1676,  1677,  1686,  2506,
    2278,  1691,  1690,  2466,  1692,  1694,  1703,  1713,  1716,  1718,
     474,  1724,  2415,  1179,  1749,   475,  1741,   721,  1734,  2496,
    2492,  1756,  1768,   476,  1769,   439,  1773,  1512,  1887, -1687,
    1513,   477,  1536,  1537,  1865,  1855,  2355,  2356,  2357,  2358,
    2359,  2360,  2361,  1973,  1974,  1861,  1874,  1102,  1103,  1873,
   -1682,  1877,  1881,  1879,  1089,  1884,  1627,  2164,  2165,  1926,
    1628,  1931,  2514,  1933,  1935,  2032,  1943,  1948,  1944,  1947,
    2166,  2167,  2016,  2018,  2022,  2076, -1637,  2077,  2082, -1685,
    2378,  2125,  2522,  2127,  1155,  2133,  1866,  1867,  2152,  2139,
    1104,  2154,  1105,  2163,  1106,  1921,  2155,  2475,  1922,  2175,
    2179,  2582,  2181,  2197,  2215,  2222,  2230,  2236,  2238,  2378,
    2459,  2217,  2495,  2261,   383,  2272,  2273,  2241,  2102,  2298,
    2271,  2299,  2303,  2186,  2309,  2322,  2500,  2311,  1107,  1108,
    1109,  2185,  2318,  2319,  2580,  2338,  2459,  2340,  2337,  2343,
    1887,  2345,  2381,  2336,  2407,  2409,  2410,  2417,  2418,  2404,
    2450,  2438,  2455,  2453,  2458,  2490,  2498,  2504,  1155,  2511,
    2505,  2510,  2512,  2513,  2516,  2520,  2528,  2541,  2569,  2720,
    2542,  2549,  2551,  2554,  2423,  2587,  2583,  2552,  2566,  2594,
    1110,  2817,  1111,  2589,  2657,  2654,  2655,  2601,  2666,  1112,
    2362,  2667,  1113,  1766,  2679,  2682,  2807,  1760,  2688,  2768,
    1282,  -914,  2855,  2813,  -914,  2363,  2880,   512,  2684,  2856,
   -1758,  2883,  2884,  2889,  2815,    16,    85,    81,  1411,    77,
      86,  2553,    76,   711,   533,   401,  1744,  1155,  1730,   421,
    1405,  1062,  2378,  1392,  2405,  2568,  2393,  2523,   512,  2678,
    1037,  2401,  2406,  2564,  2521,   429,  1281,  2386,  1020,  1996,
    2287,  2288,  2289,  2638,  2342,  2878,  2581,  2585,  2703,  2650,
    2680,  2718,  2876,  2681,  2459,  2335,  2882,   533,  2860,  2509,
    2673,  2674,  2737,  2738,   434,  1846,   192,  1436,  1767,  2646,
    -914,  1114,  1525,  1115,   808, -1882,   523,  2610,  2648,  1529,
    1844,  2293,  2291,   817,  1176,  1155,  2711,  -914,   848,  1549,
     631,  1213,  1577,  1850,  1243,   906,  2132,  1221,  1871,  1255,
    1589,  2659,  2660,  2143,  2142,  2736,  1889,  1625,  1937,  1896,
    1290,  2158,  2670,   929,  1910,  1652,   648,  2675,  1920,   932,
    1683,  2178,   966,  1684,  2326,  2327,   967,  2728,  2600,  1328,
    1754,  1751,  1195,   523,  2184,  1798,  1197,  1796,  2331,  2171,
    2420,  2169,   990,  2329,  1825,  2191,  1823,  2301,  2302,  1913,
    1227,  2687,  1914,   955,  1915,  1916,  1174,  1375,  2240,  2310,
    1065,  2704,  2129,  1642,  1805,  2676,   439,   816,  2097,  1735,
     782,  1733,  2347,  2503,  2141,  2830,  2714,  2814,  2716,   590,
    1400,  2563,  2717,  -914,  -914,  -914,  1883,  1666,  2071,  2562,
    1860,  2721,  -914,  2849,     0,  1709,     0,     0,  1958,  2820,
       0,     0,     0,     0,  -914,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1887,     0,     0,  1437,
    1104,  1438,  1105,     0,  2857,     0,     0,     0,  2859,     0,
       0,     0,     0,   797,   797,     0,     0,  -914,     0,     0,
    2757,  2758,   533,  -914,     0,  -914,   533,     0,  -914,     0,
    -914,  -914,  -914,  1283,   797,  2765,  -914,     0,  -914,   533,
    2769,  2770,   512,  -914,     0,     0,  2875,  2875,     0,     0,
       0,     0,     0,   797,  1116,  1445,  2816,     0,  1446,  2818,
    2819,  1447,     0,     0,     0,     0,  2891,     0,     0,  1448,
       0,     0,     0,     0,     0,     0,  2888,  -914,     0,   533,
     797,     0,  -914,     0,     0,  2414,     0,     0,     0,     0,
       0,     0,  2833,     0,     0,     0,  -914,     0,   504,   504,
       0,     0,     0,     0,     0,  1117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1449,  1118,     0,   504,
       0,     0,     0,  -914,     0,     0,     0,     0,     0,     0,
       0,   533,   533,   533, -1882,  1450,     0,     0,   504,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2771,     0,
       0,     0,     0,     0,     0,  -914,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   504,     0,     0,     0,     0,
       0,     0,     0,     0,  1976,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   533,     0,
       0,  2772,  -914,  2773,     0,     0,     0,     0,  -914,     0,
       0,     0,     0,     0,     0,  1699,     0,     0,     0,     0,
    -914,  -914,     0,     0,     0,     0,     0,     0,  1451,     0,
       0,     0,     0,     0,  2774,     0,  1452,     0,     0,     0,
     505,   505,     0,     0,     0,     0,     0,     0,     0,     0,
    1453,     0,     0,     0,  -914,     0,  2775,     0,     0,     0,
       0,   505,     0,     0,  -914,     0,     0,     0,     0,     0,
       0,  -914,     0,     0,     0,     0,     0,     0,  1980,     0,
     505,     0,  1454,     0,  2776,  -914,     0,     0,     0,     0,
    -914,     0,     0, -1882,     0,   501,   501,     0,  -914,     0,
    -914,     0,  1455,     0,  1456,     0,  -914,   505,     0,     0,
       0,     0,     0,     0,     0,     0,   501,     0,     0,     0,
       0,     0,     0,   590,     0,     0,  1457,  1458,     0,     0,
       0,     0,     0,     0,     0,   501,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1460,
       0,     0,   501,  1984,     0,     0,     0,    90,     0,    91,
       0,    92,     0,  2777,     0,     0,    93,     0,     0,     0,
       0,     0,   721,     0,    94,     0,     0,     0,  1461,  1462,
    2778,     0,     0,     0,     0,     0,     0,     0,   533,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2779,     0,  1463,     0,     0,     0,    95,    96,
       0,  1464,     0,  1465,  1466,     0,     0,     0,     0,    97,
       0,     0,     0,  2780,     0,     0,     0,  1467,     0,     0,
      98,     0,  1468,    99,     0,   533,     0,   533,     0,     0,
       0,     0,     0,  2781,     0,     0,     0,   100,     0,  1469,
    1694,     0,  2782,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,  1470,     0,   102,     0,
     103,   533,     0,   533,     0,  1471,     0,     0,     0,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,     0,
    -740,  -740,  -740,     0,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,   104,     0,  1472,     0,     0,  -740,     0,
       0,     0,     0,  -740,   105,  1473,  -740,     0,     0,   106,
       0,  1474,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   533,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   590,   107,     0,     0,
       0,  1090,     0,     0,   108,     0, -1987,   109,   110, -1987,
       0,     0,     0,     0,     0,     0, -1987, -1987,   111,   721,
       0,     0,     0,     0,     0,   112,     0,   113,     0,     0,
     114,     0,     0,     0,  -740,     0,     0, -1876,     0, -1876,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1550,
       0,     0,  1551,     0,     0,     0,     0,     0,     0,  1552,
    1553,     0,     0,     0, -1987,     0,   590,   590,   590,     0,
       0,     0,   115,   590,   590,     0,   116,     0,   117,   590,
     590,   590,     0,   590,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,  -740,  -740,  -740,     0,  -740,
    -740,  -740,  -740,     0,     0,     0,     0,  1554,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,  2039,     0,     0,     0,     0,   120,
       0,     0,     0,     0,     0, -1987,   590,     0,     0,  2040,
       0,     0,     0,     0,     0,   590,   590,   590,   590,   533,
    2041,   533,     0,     0,     0,     0,     0,   121,   122,     0,
      90,     0,    91,     0,    92,     0, -1987,     0,   123,    93,
       0,     0,     0,     0,     0,     0,     0,    94,  1555,     0,
       0,   124,     0,   125,     0,   721,  1602,     0, -1987,   533,
     126,     0,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,   128,     0,     0,     0,     0,     0,  1556,
       0,    95,    96,     0,   129,     0,     0,     0,     0,     0,
       0,     0,    97,     0,  -740,   130,     0,     0,     0, -1876,
       0,  1557,     0,    98,   131,     0,    99,   533,     0,   132,
     133,     0, -1987,   134,     0,   135,     0,     0,     0,  1093,
     100,     0,     0,   136,     0,     0,     0,  2201,     0,     0,
       0,     0,     0,     0,     0,     0,  -740,     0,     0,     0,
       0,     0,     0,   101,     0,     0,  -740, -1987,     0,     0,
       0,   102,     0,   103,   138,  1558,     0,     0,     0,     0,
       0,   139,     0,     0,     0,     0,   140, -1987,     0,     0,
     447,     0,     0,     0,    90,     0,    91,     0,    92,     0,
   -1876,     0,     0,    93,     0,     0,   104,   449,  -740,     0,
    1559,    94,     0,     0,   141,     0,     0,   105,     0,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
    1560,     0,     0,     0,     0,     0,     0,  2042,     0,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0, -1987,
     107, -1987, -1987,     0,     0,     0,    97,   108,     0,     0,
     109,   110,     0,     0,     0, -1987,     0,    98,     0,  2043,
      99,   111,     0,     0,     0,     0,     0,     0,   112,  -241,
     113,     0,     0,   114,   100,     0,     0, -1987,     0,   590,
       0,     0,  1464,     0,  1465,  1466,     0,     0,     0,     0,
       0,     0,   603,   450,   451,   452,     0,   101,  1561,     0,
       0,     0,   453,     0,     0,   102,     0,   103,     0,     0,
       0,     0,     0,     0,   533,   115,   533,     0,     0,   116,
    1562,   117,     0,     0,  2044,     0,     0,     0,     0,  2045,
       0,   118,     0,     0,     0,     0,     0,  2308,     0,     0,
     104,     0,     0, -1987,     0,     0,     0,     0,     0,     0,
       0,   105,     0,     0,  1198,     0,   106,     0,   604,   119,
     459,   460,   461,  2046,     0,     0,   462,     0,     0,     0,
       0,  2047,   120,     0,   605,     0,     0,     0,     0,     0,
       0,     0,     0,  2048,   107,     0,  1563,     0,     0,     0,
       0,   108,     0,     0,   109,   110,     0,     0,     0,     0,
     121,   122,     0,     0,     0,   111,     0,   465,     0,     0,
       0,   123,   112,     0,   113,     0,  1603,   114,     0,     0,
    2049,     0,     0,     0,   124,     0,   125,   721,     0,  2050,
       0,     0,     0,   126,     0,     0,     0,   127,     0,     0,
    -238,     0,     0,  2385,  2385,     0,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,   115,
       0,     0,     0,   116,     0,   117,     0,     0,   130,     0,
    2051,     0,     0,  2052,     0,   118,     0,   131,     0,     0,
       0,     0,   132,   133,     0,   468,   134,     0,   135,     0,
       0,     0,     0,     0,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,   137,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   138,     0,     0,
       0,     0,     0,     0,   139,     0,     0,     0,     0,   140,
     470,   471,     0,     0,   121,   122,     0,     0,     0,     0,
       0,     0,     0, -1987,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   721,   141,   124,     0,
     125,    90,     0,    91,     0,    92,     0,   126,     0,     0,
      93,   127,     0,   721,   473,   721,   721,     0,    94,     0,
     128,   721,     0,     0,     0,     0, -1193,     0,     0,     0,
       0,   129,     0,     0,   512,   474,     0,     0,     0,     0,
     475,     0,   130,     0,     0, -1193,     0,     0,   476,   605,
     439,   131,    95,    96,     0,     0,   132,   133,     0,     0,
     134,     0,   135,    97,     0,     0,     0,     0,     0,     0,
     136,     0,     0,     0,    98,     0,     0,    99,     0,   721,
     721,     0,     0,  1000,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,   721,     0,     0,  2526,  2526,     0,
       0,   138,     0,     0,     0,  2526,  2526,  2533,   139,     0,
       0,     0,     0,   140,   101,     0,     0,     0,     0,   512,
       0,     0,   102,     0,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   721,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,   512,     0,   105,     0,
       0,     0,     0,   106,     0,   721,     0,     0,   721,     0,
       0,     0,     0,   721,   721,     0,     0,     0,     0,     0,
       0,     0,     0,   512,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,   108,     0,
     721,   109,   110,     0,     0,     0,     0,     0,  2658,     0,
       0,     0,   111,     0,     0,     0,     0,     0,     0,   112,
       0,   113,     0,     0,   114,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   721,     0,     0,     0,   115,     0,     0,     0,
     116,     0,   117,     0,     0,     0,     0,     0,     0,   590,
       0,     0,   118,     0,   590,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   721,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,   244,
       0,   245,     0,   120,     0,     0,   246,     0,   721,     0,
       0,     0,     0,     0,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   590,     0,     0,     0,   590,     0,
       0,   121,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,     0,     0,     0,     0,     0,   248,   249,
     446,     0,     0,     0,     0,   124,     0,   125,     0,   250,
       0,     0,     0,     0,   126,     0,     0,     0,   127,     0,
     251,     0,     0,   252,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   253,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
       0,     0,     0,     0,     0,     0,     0,     0,   131,     0,
     254,     0,     0,   132,   133,     0,     0,   134,   255,   135,
     256,     0,     0,     0,     0,     0,   447,   136,     0,   257,
       0,   258,   259,   260,   261,   262,   263,   264,   265,     0,
     266,   267,   268,   449,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,     0,     0,     0,   138,     0,
       0,     0,     0,     0,   279,   139,     0,     0,     0,   280,
     140,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   281,   141,     0,
       0,     0,     0,   445,   282,     0,   446,   283,   284,   870,
     871,   872,     0,     0,     0,     0,     0,   873,   285,     0,
       0,     0,     0,     0,     0,   286,     0,   287,     0,     0,
     288,     0,     0,     0,     0,     0,     0,     0,     0,   450,
     451,   452,     0,     0,     0,     0,     0,     0,   453,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   874,
     454,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   289,     0,     0,     0,   290,     0,   291,     0,
       0,     0,   447,     0,     0,     0,     0,     0,   292,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   449,
       0,     0,     0,     0,   458,     0,   459,   460,   461,     0,
       0,     0,   462,     0,   463,     0,   293,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   294,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   465,     0,     0,     0,   295,     0,     0,
       0,   875,     0,     0,     0,     0,     0,     0,   296,     0,
       0,   876,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   297,     0,     0,     0,     0,     0,     0,
     298,     0,     0,     0,   299,   450,   451,   452,     0,   467,
       0,     0,     0,   300,   453,     0,     0,     0,     0,     0,
     877,   878,     0,     0,   301,     0,   454,     0,     0,     0,
       0,     0,     0,     0,     0,   302,     0,     0,     0,     0,
       0,   468,     0,     0,   303,   447,  1226,     0,     0,   304,
     305,     0,     0,   306,     0,   307,     0,     0,     0,   455,
     879,   880,   449,   308,     0,   456,     0,   457,     0,     0,
     458,     0,   459,   460,   461,     0,   309,     0,   462,     0,
     463,     0,     0,     0,   469,   464,     0,     0,     0,     0,
       0,     0,     0,     0,   310,     0,   470,   471,   881,     0,
       0,   311,     0,     0,   882,     0,   312,   445,     0,   883,
     446,     0,     0,   870,   871,   872,     0,   884,     0,   465,
       0,   873,     0,     0,   885,     0,     0,     0,     0,   886,
     472,     0,     0,     0,   313,     0,     0,     0,   466,     0,
     473,     0,     0,     0,     0,     0,     0,     0,   887,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   450,   451,
     452,   474,     0,   874,     0,   467,   475,   453,     0,     0,
       0,     0,     0,     0,   476,     0,   439,     0,     0,     0,
       0,     0,   477,     0,     0,     0,   447,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   468,     0,     0,
       0,     0,     0,   449,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   813,     0,   459,   460,   461,     0,     0,
       0,   462,     0,     0,     0,     0,     0,     0,     0,     0,
     469,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   470,   471,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   875,     0,     0,     0,     0,
       0,     0,   465,     0,   888,   876,   889,     0,   890,     0,
       0,   891,     0,   892,   893,   894,   472,     0,   895,   896,
       0,     0,     0,     0,     0,     0,   473,     0,     0,   450,
     451,   452,     0,     0,     0,     0,     0,     0,   453,     0,
       0,     0,     0,   814,   877,   878,     0,   474,     0,     0,
     454,     0,   475,     0,     0,     0,     0,     0,     0,     0,
     476,   447,   439,     0,     0,     0,     0,     0,   477,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   449,     0,
     468,     0,     0,   455,   879,   880,     0,     0,     0,   456,
       0,   457,     0,     0,   458,     0,   459,   460,   461,     0,
       0,     0,   462,     0,   463,     0,     0,     0,     0,   464,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   881,     0,   445,     0,     0,   446,   882,     0,
       0,     0,     0,   883,     0,   470,   471,     0,     0,     0,
       0,   884,     0,   465,     0,     0,     0,     0,   885,  -982,
       0,     0,     0,   886,  -982,     0,     0,  -982,     0,     0,
       0,     0,   466,     0,  -982,  -982,     0,     0,     0,     0,
       0,     0,   887,   603,   450,   451,   452,     0,     0,   473,
       0,     0,     0,   453,     0,  -982,     0,  -982,     0,   467,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     474,     0,     0,   447,     0,   475,     0,   445,     0,     0,
     446,     0,  -982,   476,     0,   439,     0,     0,     0,     0,
     449,   468,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   813,
       0,   459,   460,   461,     0,     0,     0,   462,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   469,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,   471,     0,     0,
       0,     0,     0,  -982,     0,     0,   447,     0,   465,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   888,     0,
     889,     0,   890,   449,     0,   891,     0,   892,   893,   894,
     472,     0,   895,   896,  -982,     0,   450,   451,   452,     0,
     473,     0,     0,     0,     0,   453,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -982,   454,     0,     0,
       0,   474,     0,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,   476,     0,   439,     0,     0,     0,
     445,     0,   477,   446,     0,     0,   468, -1987,     0,     0,
     455,     0,     0,     0,     0,     0,   456,  -982,   457,     0,
       0,   458,     0,   459,   460,   461,     0,     0,     0,   462,
    -982,   463,     0,     0,     0,     0,   464,  -982,     0,   450,
     451,   452,     0,     0,     0,     0,     0,     0,   453,     0,
     334,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     454,   470,   471,     0,     0,  -982,     0,     0,     0,     0,
     465,     0,     0,     0, -1987,     0,     0,     0,     0,   447,
       0,     0,     0,   445,     0,  -982,   446,     0,     0,   466,
       0,     0,     0,   455,     0,     0,   449,     0,  -982,   456,
       0,   457,     0,     0,   458,   473,   459,   460,   461,     0,
       0,     0,   462,     0,   463,     0,   467, -1193,     0,   464,
       0,     0,     0,     0,     0,     0,   474,     0,     0,     0,
       0,   475,     0,     0,     0,     0, -1193, -1987,     0,   476,
     605,   439,     0,     0,     0,     0,     0,  -982,   468,  -982,
    -982,  1295,     0,   465,     0,     0,     0,     0,     0,     0,
       0,     0,   447,  -982,     0,     0,     0,     0,     0,     0,
       0,     0,   466,     0,     0,     0,     0,     0,     0,   449,
       0,     0,     0,     0,     0,  -982,     0,     0,     0,     0,
       0,   469,   450,   451,   452,     0,     0,     0,     0,   467,
       0,   453,     0,   470,   471,     0,     0,     0,     0,     0,
       0,     0,     0,   454,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
     445,   468,     0,   446,     0,     0,     0,   472,     0,     0,
       0,     0,     0,     0,     0,     0,   455,   473,     0,     0,
       0,  -982,   456,     0,   457,     0,     0,   458,     0,   459,
     460,   461,  -982,     0,     0,   462,     0,   463,   474,     0,
       0,     0,   464,   475,   469,   450,   451,   452,     0,     0,
       0,   476,  -982,   439,   453,     0,   470,   471,     0,   477,
       0,     0,     0,     0,     0,     0,   454,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   465,     0,     0,   447,
       0,     0,     0,   445,     0,     0,   446,     0,     0,     0,
     472,   591,     0,     0,     0,   466,   449,     0,     0,   455,
     473,     0,     0,     0,     0,   456,     0,   457,     0,     0,
     538,     0,   459,   460,   461,     0,     0,     0,   462,     0,
     463,   474,   467,     0,     0,   464,   475,     0,     0,     0,
       0,     0,     0,     0,   476,   605,   439,     0,     0,     0,
       0,     0,   477,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   468,     0,     0,     0,     0,   465,
       0,     0,   447,     0,   539,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   656,     0,     0,     0,   466,   449,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   450,   451,   452,     0,     0,   469,     0,     0,
       0,   453,     0,     0,     0,   467,     0,     0,     0,   470,
     471,     0,     0,   454,     0,     0,     0,     0,     0,     0,
     445,     0,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1296,   468,     0,     0,
       0,     0,     0,   472,     0,     0,   455,  1297,     0,     0,
       0,     0,   456,   473,   457,     0,     0,   458,     0,   459,
     460,   461,     0,     0,     0,   462,     0,   463,     0,     0,
       0,     0,   464,     0,   474,   450,   451,   452,     0,   475,
     469,     0,     0,     0,   453,     0,     0,   476,     0,   439,
       0,     0,   470,   471,     0,   477,   454,     0,     0,   447,
       0,     0,     0,     0,     0,     0,   465,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,     0,     0,     0,
       0,     0,     0,     0,     0,   466,   472,     0,     0,   455,
       0,     0,     0,     0,     0,   456,   473,   457,     0,     0,
     458,     0,   459,   460,   461,     0,     0,     0,   462,     0,
     463,     0,   467,     0,     0,   464,     0,   474,     0,     0,
       0,     0,   475,     0,     0,     0,   445,     0,     0,   446,
     476,     0,   439,     0,     0,     0,     0,     0,   477,     0,
       0,     0,     0,     0,   468,     0,     0,     0,     0,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,   450,   451,   452,     0,     0,     0,     0,     0,
       0,   453,     0,     0,     0,     0,     0,   469,     0,     0,
       0,     0,     0,   454,     0,   467,     0,     0,     0,   470,
     471,     0,     0,     0,     0,   447,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   449,     0,     0,     0,   455,   468,     0,     0,
       0,     0,   456,   472,   457,     0,     0,   458,     0,   459,
     460,   461,     0,   473,     0,   462,     0,   463,     0,     0,
       0,     0,   464,     0,   445,     0,     0,   446,     0,     0,
       0,     0,     0,     0,   474,     0,     0,     0,     0,   475,
     469,     0,     0,     0,     0,     0,     0,   476,     0,   439,
       0,     0,   470,   471,     0,   477,   465,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   466,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   472,     0,   450,   451,
     452,     0,     0,     0,     0,     0,   473,   453,     0,     0,
       0,     0,   467,   447,     0,   445,     0,     0,   446,   454,
       0,     0,     0,     0,     0,     0,     0,   474,     0,     0,
     449,     0,   475,     0,     0,     0,     0,     0,     0,     0,
     476,     0,   439,     0,   468,     0,     0,     0,   477,     0,
       0,     0,   455,     0,     0,     0,     0,     0,   456,     0,
     457,     0,     0,   458,     0,   459,   460,   461,     0,     0,
       0,   462,     0,   463,     0,     0,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,     0,   469,     0,     0,
       0,     0,     0,     0,   447,     0,     0,     0,     0,   470,
     471,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,   465,     0,     0,     0,     0,   539,     0,   785,
       0,     0,     0,     0,     0,     0,   450,   451,   452,     0,
       0,   466,     0,   472,     0,   453,     0,     0,     0,     0,
       0,   445,     0,   473,   446,     0,     0,   454,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   467,     0,
       0,     0,     0,   989,   474,     0,     0,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,   476,     0,   439,
     455,     0,     0,     0,     0,   477,   456,     0,   457,     0,
     468,   458,     0,   459,   460,   461,     0,     0,     0,   462,
       0,   463,     0,     0,     0,     0,   464,   450,   451,   452,
       0,   996,     0,     0,     0,     0,   453,     0,     0,     0,
     447,     0,     0,     0,     0,     0,     0,     0,   454,     0,
       0,     0,     0,   469,     0,     0,     0,   449,     0,     0,
     465,     0,     0,     0,     0,   470,   471,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   466,
       0,   455,     0,     0,     0,     0,     0,   456,     0,   457,
       0,     0,   458,     0,   459,   460,   461,     0,     0,   472,
     462,     0,   463,     0,     0,     0,   467,   464,     0,   473,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     474,     0,     0,     0,     0,   475,     0,     0,   468,     0,
       0,   465,     0,   476,     0,   439,     0,     0,     0,     0,
       0,   477,     0,   450,   451,   452,   445,     0,     0,   446,
     466,     0,   453,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   454,     0,     0,     0,     0,     0,
       0,   469,     0,     0,     0,     0,  1152,   467,     0,   446,
       0,     0,     0,   470,   471,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   455,     0,     0,
       0,     0,     0,   456,     0,   457,     0,     0,   458,   468,
     459,   460,   461,     0,     0,     0,   462,   472,   463,     0,
       0,     0,     0,   464,     0,   447,     0,   473,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   449,     0,     0,     0,     0,     0,   474,     0,
       0,     0,   469,   475,     0,   447,     0,   465,     0,     0,
       0,   476,     0,   439,   470,   471,     0,     0,     0,   477,
       0,     0,   449,     0,     0,     0,   466,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   472,     0,
       0,     0,     0,   467,     0,     0,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   474,
       0,     0,     0,     0,   475,   468,     0,     0,   450,   451,
     452,     0,   476,     0,   439,     0,     0,   453,     0,     0,
     477,     0,     0,     0,     0,     0,     0,     0,     0,   454,
       0,     0,     0,     0,     0,     0,     0,     0,   450,   451,
     452,     0,  1669,     0,     0,     0,     0,   453,   469,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   454,
     470,   471,   455,     0,     0,     0,     0,     0,   456,     0,
     457,     0,     0,   458,     0,   459,   460,   461,     0,     0,
       0,   462,     0,   463,     0,     0,     0,     0,   464,     0,
       0,     0,   455,     0,   472,     0,     0,     0,   456,     0,
     457,     0,     0,   458,   473,   459,   460,   461,     0,     0,
       0,   462,     0,   463,     0,     0,     0,     0,   464,     0,
       0,     0,   465,     0,     0,   474,     0,     0,     0,     0,
     475,     0,     0,     0,     0,     0,     0,     0,   476,     0,
     439,   466,     0,     0,     0,     0,   477,     0,     0,     0,
       0,     0,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   467,     0,
       0,   466,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2507,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   467,     0,
     468,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -377,     0,     0,  -377,     0,     0,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,     0,
     468,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   469,     0,     0,     0,     0,  -377,     0,
    -377,     0,     0,     0,     0,   470,   471,  -377,     0,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,     0,     0,     0,     0,
       0,     0,     0,   469,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   470,   471,     0,     0,   472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   473,
       0,     0,     0,  -377,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   472,
     474,     0,     0,     0,     0,   475,     0,     0,     0,   473,
       0,     0,     0,   476,     0,   439,     0,     0,     0,     0,
       0,   477,     0,     0,     0,     0,  -377,     0,     0,     0,
     474,     0,     0,     0,     0,   475,     0,     0,  1246,     0,
       0,     0,  1023,   476,     0,   439,  -377,  -377,  -377,  -377,
    -377,   477,     0,  -377,  -377,     0,     0,  -377,     0,     0,
       0,     0,     0,  -377,     0,  -377,     0,     0,     0,     0,
       0,  -377,     0,     0,     0,     0,  -377,     0,     0,  -377,
       0,     0,  1022,     0,     0,     0,     0,  -377,  1247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -377,     0,  -377,  -377,     0,     0,     0,     0,     0,  -377,
       0,  -377,     0,     0, -1136,     0,     0,     0,  -377,     0,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,     0,     0,
       0, -1136,     0,  -377,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -377,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -377,  -377,  -377,     0,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -377,     0,  -377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -377,  -377,
       0,     0,     0,     0,     0,     0,     0,  -377,     0,     0,
    -377,     0,     0,  -377,     0,     0,     0,     0,     0,     0,
       0,     0,  1248,     0,     0,  -377,     0,  -377,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -1136, -1136, -1136,
       0,     0,     0,     0,     0,     0, -1136,     0,     0,     0,
       0,     0,     0,  -377,     0,     0,     0,     0, -1136,     0,
    -377,     0,  -377,  -377,     0,     0,     0,  -377,     0,     0,
       0,     0,  1023,     0,     0,     0,  -377,  -377,  -377,  -377,
    -377,  -377,     0,  -377,  -377,     0,     0,  1249,     0,     0,
       0,     0,  -377,     0,  -377,  -377,  -377,     0,     0,     0,
       0,  -377, -1136,     0, -1136, -1136, -1136,     0,     0,  1592,
   -1136,     0, -1136,     0,     0,     0,     0,  -377,     0,     0,
       0,     0,     0,     0,     0,  -377,     0,     0,     0,     0,
    -377,     0,     0,  -377,     0,     0,  -377,     0,     0,  -377,
       0,  -377,     0,     0,     0,     0,  -377,     0,     0,     0,
       0, -1136,     0,     0,     0,     0,     0,     0,  -377,  1593,
       0,     0,     0,     0,  -377,     0,     0,     0,  -377,  -377,
    -377,     0,     0,     0,     0,  -377,     0,     0,     0,     0,
       0,     0,  -377,     0,     0,   447,     0,  -377,     0,  -377,
       0,     0,     0,     0,     0,     0,  1016, -1136,     0,     0,
       0,     0,   449,     0,     0,  -377,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -377,
       0,     0,     0,     0,     0,     0,     0,  -377,     0, -1136,
    -377,     0,  1950,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -377,     0,     0,  1951,     0,
       0,  1952,  1953,  1954,  1955,  1956,  1957,  1958,  -377,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1136,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1136, -1136,     0,  1959,     0,  1960,
    1961,  1962,  1963,  1964,  1965,  1966,     0,     0,   450,   451,
     452,     0,     0,     0,     0,     0,     0,   453,     0,     0,
       0,     0,  -377,     0,  -377,  -377,  -377,     0, -1136,   454,
       0,     0,     0,     0,     0,     0,  1250,     0, -1136,     0,
       0,     0,     0,  1967,     0,     0,     0,     0,     0,     0,
       0,     0,  -377,     0,     0,     0,     0,     0,  1594, -1136,
       0,     0,     0,     0, -1136,     0,     0,     0,     0,     0,
       0,  -377, -1136,   458, -1136,   459,   460,   461,     0,     0,
   -1136,   462,     0,   463,     0,     0,     0,     0,  -377,  1090,
       0, -1987,     0,     0, -1987,     0,  1091, -1987,  -377,  -377,
    -377,     0,     0,     0,     0, -1987,  1968,  1969,  1970,  1971,
    1972,     0,  -377,  1973,  1974,     0,     0,     0,     0,  -377,
       0,     0,   465,     0,     0, -1876,  1016, -1876,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1975,     0,     0,
       0,     0, -1987,     0,     0,     0,     0,     0,     0,     0,
     409,     0,     0,  1976,     0,     0,     0,     0,   467, -1963,
       0, -1987,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     468,     0,     0,     0,     0,  1977,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1978,     0,     0,     0,     0,
       0,     0,     0,   469,     0,     0,     0,     0,     0,  1979,
       0,     0,     0,     0, -1987,   470,   471,  1980,     0,     0,
    1981,  1092, -1987,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1982, -1987,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1983,   472,
       0,     0,     0,     0,     0,     0,     0,  1595,     0,   473,
       0,     0,     0,     0,     0,     0,     0,     0, -1987,     0,
       0,     0,     0,     0,     0,     0,     0, -1876,     0,     0,
     474,     0,     0,     0,     0,   475,     0,     0, -1987,     0,
   -1987,     0,     0,   476,     0,   439,     0,  1093,     0,     0,
       0,   477,  1984,     0,  1985,  1986,  1987,     0,     0,     0,
       0,     0, -1987, -1987,  2612,     0,     0,  2613,     0,     0,
    2614,  1952,  1953,  1954,  1955,  1956,  1957,  2615,  2616,     0,
       0,     0,  1988,     0, -1987,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1987,     0,     0,  1437,     0,
    1438,  -374,     0,     0,     0,     0,     0,  1959, -1876,  1960,
    1961,  1962,  1963,  1964,  1965,  1966,     0,     0, -1963,     0,
       0,     0,     0,     0, -1987, -1987,     0,     0,  1989,  1990,
    1991,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1992,     0,     0,     0,     0,     0,     0,  1694,
   -1987,     0,     0,  1967,     0,     0,     0, -1987,     0, -1987,
   -1987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1987,     0,     0,     0,     0, -1987,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1987,  2617,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1968,  1969,  1970,  1971,
    1972,     0, -1987,  1973,  1974,     0,     0,  2618,     0,     0,
   -1878, -1987,     0,  2619,     0,  2620,     0,     0,     0,     0,
       0, -1913,     0,     0,     0,     0,  2621,     0,     0,  2622,
       0,     0,     0,     0,     0,     0,     0,  1975,     0,     0,
       0, -1987,     0,     0,     0,     0,     0,     0,     0,     0,
     409, -1987,     0,  1976,     0,     0,     0, -1987,     0,     0,
       0,  2623,     0,     0,     0,     0,     0,     0,     0,     0,
    2624,     0,   605,   447,     0,     0,     0,  1952,  1953,  1954,
    1955,  1956,  1957,  2625,     0,     0,     0,     0,     0,     0,
     449,     0,     0,     0,     0,  1977,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2626,  1458,     0,     0,     0,
       0,     0,     0,  1959,     0,  1960,  1961,  1962,  1963,  1964,
    1965,  1966,     0,     0,     0,  2627,     0,  1459,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2628,  1979,
       0,     0,     0,     0,     0,     0,     0,  1980,     0,     0,
    1981,     0,     0,     0,     0,     0,     0,     0,     0,  1967,
       0,     0,     0,     0,     0,  1982,     0,  2629,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,     0,     0,     0,     0,     0,   450,   451,   452,     0,
       0,     0,     0,  2630,     0,   453,     0,   449,     0,     0,
    1464,     0,  1465,  1466,     0,     0,     0,   454,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,  2631,  1968,  1969,  1970,  1971,  1972,     0,     0,  1973,
    1974,     0,  1984,     0,  1985,  1986,  1987,   449,     0,     0,
     491,     0,     0,     0,     0,     0,   456,     0,   457,     0,
       0,   458,     0,   459,   460,   461,     0,     0,     0,   462,
       0,   463,     0,  1975,     0,  2632,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2633,     0,     0,     0,
       0,  -635,     0,     0,     0,     0,  2634,     0,     0,     0,
       0,     0,     0,   450,   451,   452,     0,     0,     0,     0,
     465,     0,   453,     0,  2635,     0,     0,     0,  1989,  1990,
    1991,     0,     0,     0,   454,     0,     0,     0,     0,   466,
       0,  1977,  1992,     0,   447,     0,     0,  2636,     0,  1694,
       0,     0,     0,   450,   451,   452,     0,     0,     0,     0,
       0,   449,   453,     0,     0,     0,   467,   491,     0,     0,
       0,     0,     0,   456,   454,   457,     0,     0,   458,     0,
     459,   460,   461,     0,     0,  1979,   462,     0,   463,     0,
       0,     0,     0,     0,     0,     0,  1981,     0,   468,     0,
       0,     0,     0,     0,     0,     0,     0,   491,     0,     0,
       0,  1982,     0,   456,     0,   457,     0,     0,   458,     0,
     459,   460,   461,     0,     0,     0,   462,   465,   463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   469,     0,     0,     0,     0,   466,     0,     0,     0,
       0,     0,     0,   470,   471,     0,     0,   450,   451,   452,
       0,     0,     0,     0,     0,     0,   453,   465,     0,     0,
       0,     0,     0,   467,     0,  1136,     0,     0,   454,     0,
    1985,  1986,  1987,     0,     0,   492,   466,   472,     0,   493,
     494,     0,     0,     0,     0,     0,     0,   473,     0,     0,
       0,     0,     0,     0,     0,   468,     0,     0,     0,     0,
       0,   491,     0,   467,     0,     0,     0,   456,   474,   457,
       0,     0,   458,   475,   459,   460,   461,     0,     0,     0,
     462,   476,   463,   439,     0,     0,     0,     0,     0,   477,
     447,     0,     0,     0,     0,   468,     0,     0,   469,     0,
       0,     0,     0,     0,  1989,  1990,  1991,   449,     0,     0,
     470,   471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   465,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1777,     0,     0,     0,     0,     0,   469,     0,
     466,     0,   492,     0,   472,     0,   493,   494,     0,     0,
     470,   471,     0,     0,   473,     0,     0,     0,  1780,     0,
       0,     0,     0,     0,     0,     0,     0,   467,     0,     0,
       0,     0,     0,     0,     0,   474,     0,     0,     0,     0,
     475,     0,   492,     0,   472,     0,   493,   494,   476,     0,
     439,   447,     0,     0,   473,     0,   477,     0,     0,   468,
       0,     0,     0,   450,   451,   452,     0,     0,   449,     0,
       0,     0,   453,     0,     0,   474,   447,     0,     0,     0,
     475,     0,     0,     0,   454,     0,     0,     0,   476,     0,
     439,     0,     0,   449,     0,     0,   477,     0,     0,     0,
       0,     0,   469,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   470,   471,     0,   491,     0,     0,
       0,     0,  1782,   456,     0,   457,     0,     0,   458,     0,
     459,   460,   461,     0,     0,     0,   462,     0,   463,     0,
       0,     0,     0,     0,     0,     0,   492,     0,   472,     0,
     493,   494,     0,     0,     0,     0,     0,     0,   473,     0,
       0,     0,     0,     0,   450,   451,   452,     0,     0,     0,
       0,     0,     0,   453,     0,     0,     0,   465,     0,   474,
       0,     0,     0,     0,   475,   454,     0,     0,     0,   450,
     451,   452,   476,     0,   439,     0,   466,     0,   453,     0,
     477,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     454,     0,     0,     0,     0,     0,     0,     0,   491,     0,
       0,     0,     0,   467,   456,     0,   457,     0,     0,   458,
       0,   459,   460,   461,     0,     0,     0,   462,     0,   463,
       0,     0,     0,   491,     0,     0,     0,     0,     0,   456,
       0,   457,   447,     0,   458,   468,   459,   460,   461,     0,
       0,     0,   462,     0,   463,     0,     0,     0,     0,   449,
       0,     0,     0,     0,     0,     0,     0,     0,   465,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   466,   469,     0,
       0,     0,     0,   465,     0,     0,     0,     0,     0,     0,
     470,   471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   466,     0,   467,     0,     0,     0,     0,     0,
       0,     0,  1801,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   492,     0,   472,     0,   493,   494,     0,   467,
       0,     0,     0,   447,   473,     0,   468,     0,     0,     0,
       0,     0,     0,     0,     0,   450,   451,   452,     0,     0,
     449,     0,     0,     0,   453,   474,     0,     0,     0,     0,
     475,   468,     0,     0,     0,     0,   454,     0,   476,     0,
     439,     0,     0,     0,     0,     0,   477,     0,     0,   469,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   470,   471,     0,     0,     0,     0,     0,     0,   491,
       0,     0,     0,     0,   469,   456,     0,   457,     0,     0,
     458,     0,   459,   460,   461,     0,   470,   471,   462,     0,
     463,     0,     0,   492,     0,   472,     0,   493,   494,     0,
       0,     0,     0,     0,   447,   473,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   450,   451,   452,     0,
     472,   449,   493,     0,     0,   453,   474,     0,     0,   465,
     473,   475,     0,     0,     0,     0,     0,   454,     0,   476,
       0,   439,     0,     0,     0,     0,     0,   477,   466,     0,
       0,   474,     0,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,   476,     0,   439,     0,     0,     0,
     491,     0,   477,     0,     0,   467,   456,     0,   457,     0,
       0,   458,     0,   459,   460,   461,     0,     0,     0,   462,
       0,   463,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2865,     0,     0,     0,     0,     0,   468,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   450,   451,   452,
       0,     0,     0,     0,     0,     0,   453,     0,     0,     0,
     465,     0,     0,     0,     0,     0,     0,     0,   454,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   466,
     469,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   470,   471,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   467,     0,     0,     0,
       0,     0,   458,     0,   459,   460,   461,     0,     0,     0,
     462,     0,   463,     0,     0,     0,   472,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   473,     0,   468,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   474,     0,     0,
       0,   465,   475,     0,     0,     0,     0,     0,     0,     0,
     476,     0,   439,     0,     0,     0,     0,     0,   477,     0,
       0,   469,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   470,   471,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   467,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   472,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   473,     0,   468,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   474,     0,
       0,     0,     0,   475,     0,     0,     0,     0,     0,     0,
       0,   476,     0,   439,     0,     0,     0,     0,     0,   477,
       0,     0,   469,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   470,   471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   472,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   474,
       0,     0,     0,     0,   475,     0,     0,     0,     0,     0,
       0,     0,   476,     0,   439,     0,     0,     0,     0,     0,
     477
};

static const yytype_int16 yycheck[] =
{
     211,   212,   341,   199,   215,   326,   446,   366,   455,   526,
     680,   681,   682,    81,  1228,   207,   537,    42,  1204,   937,
    1707,   213,   353,   991,   317,  1440,   319,   329,  1443,   322,
     651,  1694,  1187,   326,   642,   410,  1497,   412,  1696,  1007,
     415,   875,  1700,  1444,   491,   339,  1732,   533,   341,  1726,
    1311,  1285,   331,   865,   347,  1631,   533,     9,     1,   353,
     339,   320,  1329,   324,  2031,     1,   781,  1598,     1,     9,
    2046,  2047,    22,    50,   353,   368,   791,   370,    50,    57,
      59,    49,   785,     9,    32,     9,    17,     9,     1,    89,
      28,    75,  2451,    73,     6,    32,     1,  1687,   127,    17,
     110,   622,    90,   134,   126,   401,   126,   182,     9,   117,
     418,   319,    59,   590,  1182,    66,   324,     0,    90,   181,
     146,   182,  1935,   331,  2333,     9,  1625,   323,  1103,   325,
     931,   339,    95,  1421,   629,    59,  1111,     6,     6,   134,
      99,   100,  1210,   170,   113,   353,   391,   319,   232,     1,
    1346,   759,   348,   954,   350,   448,   859,   243,   132,   355,
    2045,   647,   131,    99,    67,    21,    69,  1757,  1758,  1759,
     647,   259,   164,   369,  1764,  1765,   387,   178,   180,  2440,
     118,   157,  1772,   269,   239,   851,   209,   317,   399,   127,
     248,  2321,   176,   339,   405,   406,  1264,   408,   113,   492,
     493,   494,   413,   414,   209,   220,     0,   418,   294,    21,
      33,  1672,    64,  1368,    59,   278,   337,   428,   220,  2032,
     317,   580,   317,   206,   517,   928,   194,   520,   278,   525,
     227,  1310,    73,   281,  2443,   249,  2333,  1827,   737,   239,
      92,    93,   306,   319,  1212,   263,  1836,   455,   507,  1839,
     851,  1319,   263,   408,   225,   263,   427,   263,   472,   183,
     143,   465,   259,   238,   147,   341,   431,   207,   128,   181,
    2547,   347,   501,    64,    73,   761,   303,   176,    23,    24,
    2750,  2257,   578,   491,   492,   493,   494,   293,   567,   239,
     113,   520,   205,   996,  2764,   164,     8,  2574,   319,   578,
     659,    92,    93,    73,    73,   207,   471,   219,   522,   464,
      73,   210,   516,   170,   607,   403,   176,   764,   219,   278,
     528,   493,   477,   206,   248,   496,    38,   482,   524,   304,
      59,  1862,   338,  1864,   236,   353,   629,   220,   221,   535,
     435,   263,   353,   718,   315,   639,  2443,   833,   788,   143,
     219,   263,   239,   147,   402,   651,   259,   244,   210,   567,
     639,   273,   263,   656,   428,   644,   363,   235,  2181,   352,
     578,  1632,   273,  1774,   371,   351,   281,   824,   524,   455,
     318,   369,   366,   397,    73,   440,   345,   239,  2074,   439,
    2520,   441,   369,    73,   263,   525,  1895,   369,   706,    50,
    1234,   132,   465,   524,   273,   406,   421,     6,  1220,  1243,
     294,  1223,   206,  2380,   377,   491,   492,   493,   494,   914,
     263,   629,  1689,   263,    50,   946,   220,   221,   525,   487,
     298,   639,   516,   413,   522,   521,   644,   340,   351,   470,
     263,   517,    33,   438,   470,   419,   358,  2708,   239,   317,
     525,  1519,   426,   480,  1157,  2814,  2665,   358,   481,  1747,
    2345,   466,   758,   525,   525,   416,   711,   760,  2145,   352,
     969,   492,   493,   494,   767,   768,   769,   361,   330,   471,
     502,   433,   502,   776,   777,   778,   779,   467,   781,   358,
     976,   475,   455,   704,   525,   524,   789,   402,   791,   792,
    2090,   712,   263,   695,    31,   716,  1001,  1482,   801,   802,
     803,   804,   805,   325,   524,   525,   484,   525,   465,   164,
     520,   433,   818,   525,   785,  2338,  1327,   126,   739,  1725,
     518,   607,   433,   481,   503,  1201,   747,   830,   516,   330,
      67,   518,    69,   461,   481,   460,   518,   526,   740,   525,
     465,   525,   760,   629,  2521,   851,   524,   470,   352,   767,
     768,   769,   864,   487,   433,   470,   525,   479,   776,   777,
     778,   779,   413,   781,  1653,   525,     6,   785,   479,   531,
    2156,   789,   525,   791,   792,   525,   524,   470,   760,   525,
    1198,   522,   525,   801,   802,   803,   804,   805,   859,   525,
    1201,  1569,   471,   525,   776,   777,   778,  2138,   947,  2585,
     479,   479,   524,   525,   413,  1110,   472,   789,   470,   531,
     219,   914,   830,   480,   327,   132,   467,   483,  2305,   922,
     531,   925,   477,   336,   930,  1152,   365,   482,   525,   835,
     343,   344,   525,   413,   413,   938,   925,    58,   248,   908,
     413,   859,   297,    58,   947,    66,   525,   302,   830,   362,
     472,    66,   531,     6,   263,   958,   209,   928,   467,  1155,
       6,   483,   263,    40,   273,  1942,   470,  1891,  1155,   470,
     939,  1128,   525,   205,   760,   525,   982,     6,   419,   968,
     998,   767,   768,   769,     0,   426,   989,   467,   467,    50,
     776,   777,   778,   779,   467,   781,   914,   477,  1001,   251,
     128,  1779,   482,   789,   922,   791,   792,   925,   369,  1637,
     928,   339,   239,  2409,   413,   801,   802,   803,   804,   805,
    1038,   525,   259,   413,  2039,   996,    39,   388,   241,   760,
    2316,    35,     7,   369,    47,   263,   767,   768,   769,   116,
     263,  2579,   279,     0,   830,   776,   777,   778,  1253,   358,
     968,  1573,   388,  1059,   525,   223,   263,   175,   789,   980,
     531,   792,  1840,  2678,  1842,  1083,   263,   480,   467,   263,
     801,   802,   803,   804,   805,   243,   209,   467,   996,   219,
     263,   263,  1507,  1001,   525,   219,  1291,    22,   263,  1095,
     170,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,   830,
     269,   269,  1880,   340,   209,   158,  1027,  1110,   125,   470,
     326,   243,   195,  2579,   232,   422,   471,     9,  1676,   351,
       9,  1124,   240,   263,   433,   353,   294,  1130,   914,   263,
     125,   305,   545,   273,   470,   251,   922,   269,  1295,   273,
     120,   121,   122,    28,   264,   366,   559,   363,  2579,  1927,
    1928,   313,   277,  1566,   275,  1568,   465,   518,   269,    51,
     275,   947,   294,  1084,   369,   259,   219,   244,  1070,  1071,
     479,  2579,  1093,   219,   235,   427,  2579,   487,   591,   469,
     430,  1170,   518,   294,   434,  2156,  1157,    27,   478,   496,
     219,   922,  1110,   502,   247,  1201,   524,   525,  1529,   412,
      29,  1614,   419,    34,  1173,   218,  1124,  2604,   326,   426,
     263,  2579,  2156,   338,   259,  1001,   525,   263,   358,  2834,
     273,   326,   531,   303,   358,   278,  2764,   273,   481,   398,
     351,   359,   128,   118,   263,  1153,   351,   250,   651,  1157,
     653,   263,  1124,   470,   273,   658,   177,   134,   223,   224,
    1253,  1254,  1170,   184,   475,   388,   278,  2272,  1262,   272,
     306,  1674,  1183,   220,   221,   245,  2663,   504,   243,  2656,
     432,   472,   524,  1262,  1263,    58,   317,   158,    61,   259,
    1286,  1284,   483,    66,   288,   289,   290,   524,  1291,   417,
     411,   374,  1210,   433,   269,   416,   411,   525,  2764,   433,
     129,   416,   525,   263,   239,   358,   480,  1865,   330,   403,
    1316,   427,   358,   518,   327,  1318,  1860,   166,   525,   294,
    1326,  1517,  1325,  1326,  1110,   465,   542,   219,   525,   358,
     219,   525,   452,  2764,  2233,  1253,  1254,    31,  1124,   479,
     417,   172,   525,   525,  1262,  1263,  1264,   419,  2535,   470,
     525,   355,   477,   521,  1511,   470,  2764,   482,   403,   251,
     252,  2764,   202,   844,   344,   345,   346,   263,   470,  1687,
    2670,   263,   785,  1291,   263,  2675,  2773,  2564,   391,   359,
     433,   273,   428,  1588,   273,   525,   427,   433,   869,   521,
     219,   531,   524,  1124,   514,    59,  2764,   531,   358,   167,
    1418,  1319,   170,  1444,   433,   525,  2803,   525,  2415,   225,
     525,   386,   299,   524,  1335,    58,   110,   422,  1503,  1340,
     306,  1342,   470,    66,  1345,  1346,   479,  1348,    12,   910,
     281,    15,    16,   479,   263,  2735,   130,   850,  2811,  2739,
     400,  2232,  2233,   274,   273,   858,   859,   296,   206,  2348,
     479,  2232,  2233,   525,   935,   496,  2321,  2830,   287,     1,
    1362,   263,   220,   221,    11,  2743,   358,  1253,  1254,   358,
     401,   292,   525,   433,  1523,  1680,   456,   171,   531,   525,
     493,   485,   486,   269,   897,   531,   490,   473,  1491,  1492,
     125,   496,   275,  2500,   409,  1498,   525,  1500,  1400,  2624,
    2687,   195,   531,   525,  1507,  1291,    48,   323,   294,   531,
     174,  2394,   363,    60,   365,   928,   210,  1520,  2296,  2297,
    1523,   239,   343,    65,  2649,  1446,   176,   624,   205,   358,
    1451,   422,  1535,   301,   263,   303,   338,    87,  1587,   525,
    2818,   433,   428,   210,   433,   263,   521,   422,  1469,   524,
     202,   422,    99,  2664,   101,   470,   103,  2348,   134,   972,
     210,   492,  1574,   105,   111,   294,   230,  2348,   351,   162,
     983,   531,   239,  1491,  1492,  1578,   194,  2460,  2461,   676,
    1498,  2505,  1500,   996,  1587,  1588,   517,   479,   519,  1507,
     479,   477,  2516,  1596,   352,  1566,   482,  1568,   316,   217,
     318,  1519,  1520,  1830,   433,   496,   392,   436,   437,  1491,
    1492,   263,   105,  1619,  2725,   175,  1498,  1535,  1500,  1625,
    1623,   496,   169,  1612,  1636,   496,   194,  1676,   411,  1550,
     473,   219,   275,   416,   176,  1556,   525,   219,  1520,   531,
       0,  1562,   531,  1614,   269,   238,  2757,  2758,  1566,   217,
    1568,   251,  1655,  1535,  2765,   332,   333,   351,  2769,  2770,
    1663,   183,   238,  2587,   167,  2836,   297,   170,   210,   294,
    1588,  2595,   232,  1676,   351,   263,  2559,  1680,  1596,  1685,
     240,   263,   470,  2579,  1605,   273,  1704,  2798,   363,  1846,
     321,   273,    11,  1711,  1612,   125,  1614,   239,  1771,   269,
     284,   285,   531,  1674,   246,  1491,  1492,   300,   351,   409,
     310,   304,  1498,  1619,  1500,   257,  2827,   264,   213,   214,
      48,  1507,   244,   299,   294,   247,   310,   311,   304,  1770,
    1771,   351,   409,  1774,  1520,    56,   472,    65,   524,   525,
     315,    60,   525,   368,   363,  1663,   365,   483,     8,  1535,
    1231,   371,  1770,  1771,   429,   430,  1674,   233,   253,   254,
    1491,  1492,  1680,   310,  1837,  1838,   326,  1498,   411,  1500,
     358,    92,   134,   416,   349,    11,   358,   105,    38,  1700,
      99,  1663,   101,   143,   103,  1706,   464,   147,   109,  1520,
    2418,  1876,   111,  1714,   470,   370,  1837,  1838,   119,   161,
     194,   163,  1588,   481,  1535,   469,  1287,  1542,   470,  2040,
    1596,     8,   269,   477,   478,   269,  1865,  1719,   482,  1837,
    1838,   363,   364,   217,    60,     9,  1983,   470,    12,   456,
     457,    15,    16,  2816,  2817,   147,   378,   294,   380,   466,
     294,    38,   143,   467,   183,   433,   206,  1768,  1769,  2823,
     169,   433,   342,   477,  2837,   194,   109,   404,   482,  2833,
     220,   221,  1865,    99,   354,   101,   119,   103,   470,   494,
     767,   768,   769,  2856,   468,   111,     6,  1663,   217,     9,
    2107,   125,   477,   477,   511,  2479,  1299,   482,   482,  1895,
     409,   479,  2486,  2487,  1680,   792,  1945,   479,   470,   524,
    2883,   468,   467,   450,  1317,  2583,   255,   256,   247,   166,
     477,   239,   477,   170,  1499,   482,  1501,   482,   246,  1504,
    1505,  1506,  1840,   470,  1842,  1510,   308,   309,   470,   257,
     409,  1131,  1663,   169,  1134,   470,  1521,  1522,   467,   179,
    1140,  2865,   470,   531,  1144,   264,    23,    24,   477,   531,
    1150,   434,  1433,   482,  1435,    85,   505,   506,   507,   508,
    1978,  1739,  1880,  1741,   801,   802,  2015,    97,   505,   506,
     507,   508,   102,   803,   804,   805,   518,   432,   525,   474,
     316,   476,   318,   525,   505,   506,   507,   508,   348,   320,
     313,   310,   352,   324,   195,   470,   197,    55,    56,   470,
     331,   332,   777,   778,  2231,  1926,   470,   363,   339,   365,
    1928,   342,  1954,  1955,  1956,  1957,   347,   301,   349,   303,
     351,   352,   353,   354,   852,   853,   854,   855,   264,   470,
    2048,  1512,  1513,    27,    92,   363,   364,   259,   388,   261,
     371,   470,   259,  2049,   261,   363,   259,   365,   261,   470,
     378,   109,   380,   414,   347,  1536,  1537,    68,  2089,    70,
     492,   119,   494,   525,   527,   440,   421,   239,   198,   199,
     200,  1992,    59,   421,   310,  2232,  2233,   207,   381,   410,
     225,   412,   263,   470,   415,   404,  2089,   470,   525,   219,
     263,   525,   465,   409,   525,  1576,   470,   268,   470,  1580,
     284,   285,   416,   427,    66,    61,    71,   525,   525,   135,
    2113,   470,   202,  2034,   481,   315,  2037,   481,   481,   136,
     466,   174,   252,  2044,   481,   465,   310,   311,   258,   481,
     260,   450,   137,   263,   481,   265,   266,   267,   481,   481,
     481,   271,   470,   273,   481,   138,  1627,  1628,   278,  2198,
    2071,   470,   481,  2238,  2125,   481,  2127,   399,   139,   363,
     140,   104,   141,   516,   142,   460,  2072,  2073,   404,  2172,
     481,   465,   145,    50,   420,   464,   507,  2180,   461,   464,
    2183,   458,   312,   202,   148,   151,   149,  2815,   520,   150,
     518,  2348,   278,   170,    32,   152,   115,   528,   153,   202,
     154,   331,   155,   115,   156,   470,   525,  2125,   262,  2127,
     409,  1624,   525,   321,   450,   470,   525,   263,  2236,   525,
     416,   470,     1,   110,   263,  2243,   263,   470,   358,   487,
     321,   112,   427,   481,  2155,   465,   567,   525,   525,   525,
     209,   230,   388,   350,   279,   263,   386,   578,   303,   170,
     522,   522,  1665,  1666,   133,   181,   377,   465,   524,   173,
     390,   235,    41,    42,    43,    44,    45,   134,    50,    50,
     202,   465,   330,   465,   409,   235,   334,   335,   378,   470,
     375,   470,   470,    88,    23,   470,   473,  2336,   279,   525,
     415,  2294,  2377,   461,   625,   263,   525,   239,    75,    78,
      79,   351,   462,   433,   470,   530,   529,   244,   639,  2312,
     308,  2396,  2397,   644,   440,   445,   446,  2402,   467,   467,
     378,  2324,  2340,   467,   283,   467,   467,   393,  2708,   467,
     467,   467,   465,   465,   374,  2256,   209,   395,   396,   209,
      17,   461,  2263,  2264,  2265,  2266,   318,   133,   144,   479,
    2271,   465,   377,    50,   127,   209,   146,     8,   202,   489,
     522,   522,   440,   209,   470,   316,   465,     9,     7,  2438,
    2276,   409,   470,  2379,   403,   518,    89,   279,    22,   315,
     510,   456,  2303,   195,    48,   515,   525,   718,   337,  2407,
    2475,   308,    58,   523,   427,   525,     8,   306,  2304,   209,
     428,   531,   238,   304,    50,   518,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   518,   416,    25,    26,   195,
     195,   244,   325,   323,   755,   319,   134,  1908,  1909,   339,
     299,   322,  2450,   116,   455,   520,   470,   461,   409,   210,
    1921,  1922,   210,   525,   525,   263,   209,   236,   470,   209,
    2535,   373,  2470,   373,   785,   105,     8,    38,    50,   475,
      68,   269,    70,   269,    72,   305,   244,  2388,   480,   512,
     225,  2556,    98,   470,   522,   239,   525,   465,   195,  2564,
    2565,   397,  2403,   417,    58,   269,    40,   261,   303,    50,
     440,   113,   348,   300,   393,   470,  2417,   269,   106,   107,
     108,   162,   269,   269,  2553,    54,  2591,   465,   531,    27,
    2416,   415,   427,   461,   340,    17,   112,   348,   501,   417,
     202,   360,   263,   464,   470,   436,   470,   351,   859,   418,
     110,   470,   472,   525,   117,   194,     7,   379,  2541,  2689,
     435,   470,   470,   230,    31,   117,   227,   465,   524,   348,
     158,  2778,   160,   449,   315,   522,   318,   470,   210,   167,
     339,   182,   170,   131,    58,   210,   228,   263,  2653,   217,
    2619,     6,   122,   216,     9,   354,   322,   908,   525,   202,
     525,    50,   442,   330,   522,     7,    58,    55,  1076,    53,
      60,  2512,    52,   397,   925,   204,  1409,   928,  1389,   219,
    1073,   728,  2687,  1055,  2275,  2538,  2262,  2475,   939,  2627,
     699,  2270,  2276,  2534,  2469,    50,  2619,  2255,   683,  1700,
    2101,  2102,  2103,  2579,  2226,  2863,  2555,  2558,  2659,  2581,
    2633,  2685,  2850,  2636,  2719,  2198,  2875,   968,  2827,  2443,
    2617,  2617,  2717,  2717,   241,  1571,    65,  1095,  1457,  2579,
      85,   259,  1164,   261,   507,    90,  2659,  2578,  2579,  1175,
    1569,  2106,  2105,   520,   818,   996,  2669,   102,   542,  1201,
     278,   864,  1223,  1573,   911,   563,  1856,   867,  1596,   918,
    1251,  2602,  2603,  1870,  1869,  2716,  1623,  1279,  1685,  1625,
     959,  1895,  2613,   600,  1639,  1308,   354,  2618,  1666,   607,
    1326,  1931,   637,  1326,  2185,  2186,   639,  2710,  2574,  1011,
    1434,  1432,   846,  2716,  1936,  1516,   847,  1515,  2190,  1925,
    2315,  1924,   653,  2189,  1541,  1937,  1540,  2140,  2141,  1659,
     897,  2652,  1659,   625,  1659,  1659,   810,  1042,  2023,  2152,
     730,  2662,  1846,  1295,  1523,  2619,   525,   517,  1774,  1398,
     475,  1393,  2229,  2429,  1867,  2802,  2677,  2775,  2679,  1090,
    1067,  2528,  2683,   198,   199,   200,  1616,  1315,  1723,  2523,
    1585,  2693,   207,  2818,    -1,  1344,    -1,    -1,    46,  2782,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2702,    -1,    -1,    67,
      68,    69,    70,    -1,  2822,    -1,    -1,    -1,  2826,    -1,
      -1,    -1,    -1,  2816,  2817,    -1,    -1,   252,    -1,    -1,
    2741,  2742,  1153,   258,    -1,   260,  1157,    -1,   263,    -1,
     265,   266,   267,  2619,  2837,  2756,   271,    -1,   273,  1170,
    2761,  2762,  1173,   278,    -1,    -1,  2849,  2850,    -1,    -1,
      -1,    -1,    -1,  2856,   462,    33,  2777,    -1,    36,  2780,
    2781,    39,    -1,    -1,    -1,    -1,  2884,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,  2879,   312,    -1,  1210,
    2883,    -1,   317,    -1,    -1,  2298,    -1,    -1,    -1,    -1,
      -1,    -1,  2813,    -1,    -1,    -1,   331,    -1,  2816,  2817,
      -1,    -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,   525,    -1,  2837,
      -1,    -1,    -1,   358,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1262,  1263,  1264,   369,   113,    -1,    -1,  2856,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,    -1,    -1,    -1,    -1,   390,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2883,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1319,    -1,
      -1,   259,   427,   261,    -1,    -1,    -1,    -1,   433,    -1,
      -1,    -1,    -1,    -1,    -1,  1336,    -1,    -1,    -1,    -1,
     445,   446,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,   292,    -1,   204,    -1,    -1,    -1,
    2816,  2817,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     218,    -1,    -1,    -1,   479,    -1,   314,    -1,    -1,    -1,
      -1,  2837,    -1,    -1,   489,    -1,    -1,    -1,    -1,    -1,
      -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,
    2856,    -1,   250,    -1,   342,   510,    -1,    -1,    -1,    -1,
     515,    -1,    -1,   518,    -1,  2816,  2817,    -1,   523,    -1,
     525,    -1,   270,    -1,   272,    -1,   531,  2883,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2837,    -1,    -1,    -1,
      -1,    -1,    -1,  1444,    -1,    -1,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2856,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,    -1,  2883,   421,    -1,    -1,    -1,     1,    -1,     3,
      -1,     5,    -1,   431,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,  1503,    -1,    18,    -1,    -1,    -1,   356,   357,
     448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1519,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   470,    -1,   382,    -1,    -1,    -1,    52,    53,
      -1,   389,    -1,   391,   392,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,   491,    -1,    -1,    -1,   405,    -1,    -1,
      74,    -1,   410,    77,    -1,  1566,    -1,  1568,    -1,    -1,
      -1,    -1,    -1,   511,    -1,    -1,    -1,    91,    -1,   427,
     518,    -1,   520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,   454,    -1,   122,    -1,
     124,  1612,    -1,  1614,    -1,   463,    -1,    -1,    -1,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,    -1,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,    -1,   493,    -1,    -1,   162,    -1,
      -1,    -1,    -1,   167,   168,   503,   170,    -1,    -1,   173,
      -1,   509,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1674,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1687,   201,    -1,    -1,
      -1,    31,    -1,    -1,   208,    -1,    36,   211,   212,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,   222,  1710,
      -1,    -1,    -1,    -1,    -1,   229,    -1,   231,    -1,    -1,
     234,    -1,    -1,    -1,   238,    -1,    -1,    67,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    94,    -1,  1757,  1758,  1759,    -1,
      -1,    -1,   276,  1764,  1765,    -1,   280,    -1,   282,  1770,
    1771,  1772,    -1,  1774,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,    -1,    -1,    -1,   299,   300,   301,    -1,   303,
     304,   305,   306,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,   333,
      -1,    -1,    -1,    -1,    -1,   165,  1827,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,  1836,  1837,  1838,  1839,  1840,
      30,  1842,    -1,    -1,    -1,    -1,    -1,   361,   362,    -1,
       1,    -1,     3,    -1,     5,    -1,   196,    -1,   372,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,   165,    -1,
      -1,   385,    -1,   387,    -1,  1876,    66,    -1,   218,  1880,
     394,    -1,    -1,    -1,   398,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   407,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    52,    53,    -1,   418,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,   428,   429,    -1,    -1,    -1,   259,
      -1,   218,    -1,    74,   438,    -1,    77,  1928,    -1,   443,
     444,    -1,   272,   447,    -1,   449,    -1,    -1,    -1,   279,
      91,    -1,    -1,   457,    -1,    -1,    -1,  1948,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   480,   307,    -1,    -1,
      -1,   122,    -1,   124,   488,   272,    -1,    -1,    -1,    -1,
      -1,   495,    -1,    -1,    -1,    -1,   500,   327,    -1,    -1,
      85,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,    -1,
     340,    -1,    -1,    10,    -1,    -1,   157,   102,   522,    -1,
     307,    18,    -1,    -1,   528,    -1,    -1,   168,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,   389,
     201,   391,   392,    -1,    -1,    -1,    63,   208,    -1,    -1,
     211,   212,    -1,    -1,    -1,   405,    -1,    74,    -1,   259,
      77,   222,    -1,    -1,    -1,    -1,    -1,    -1,   229,   269,
     231,    -1,    -1,   234,    91,    -1,    -1,   427,    -1,  2090,
      -1,    -1,   389,    -1,   391,   392,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   198,   199,   200,    -1,   114,   405,    -1,
      -1,    -1,   207,    -1,    -1,   122,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,  2125,   276,  2127,    -1,    -1,   280,
     427,   282,    -1,    -1,   324,    -1,    -1,    -1,    -1,   329,
      -1,   292,    -1,    -1,    -1,    -1,    -1,  2148,    -1,    -1,
     157,    -1,    -1,   493,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,    -1,   504,    -1,   173,    -1,   263,   320,
     265,   266,   267,   363,    -1,    -1,   271,    -1,    -1,    -1,
      -1,   371,   333,    -1,   524,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   383,   201,    -1,   493,    -1,    -1,    -1,
      -1,   208,    -1,    -1,   211,   212,    -1,    -1,    -1,    -1,
     361,   362,    -1,    -1,    -1,   222,    -1,   312,    -1,    -1,
      -1,   372,   229,    -1,   231,    -1,   416,   234,    -1,    -1,
     420,    -1,    -1,    -1,   385,    -1,   387,  2238,    -1,   429,
      -1,    -1,    -1,   394,    -1,    -1,    -1,   398,    -1,    -1,
     440,    -1,    -1,  2254,  2255,    -1,   407,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,   276,
      -1,    -1,    -1,   280,    -1,   282,    -1,    -1,   429,    -1,
     470,    -1,    -1,   473,    -1,   292,    -1,   438,    -1,    -1,
      -1,    -1,   443,   444,    -1,   390,   447,    -1,   449,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   457,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,   470,
      -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   488,    -1,    -1,
      -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,   500,
     445,   446,    -1,    -1,   361,   362,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   458,    -1,   372,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2377,   528,   385,    -1,
     387,     1,    -1,     3,    -1,     5,    -1,   394,    -1,    -1,
      10,   398,    -1,  2394,   489,  2396,  2397,    -1,    18,    -1,
     407,  2402,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,
      -1,   418,    -1,    -1,  2415,   510,    -1,    -1,    -1,    -1,
     515,    -1,   429,    -1,    -1,   520,    -1,    -1,   523,   524,
     525,   438,    52,    53,    -1,    -1,   443,   444,    -1,    -1,
     447,    -1,   449,    63,    -1,    -1,    -1,    -1,    -1,    -1,
     457,    -1,    -1,    -1,    74,    -1,    -1,    77,    -1,  2460,
    2461,    -1,    -1,   470,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,  2475,    -1,    -1,  2478,  2479,    -1,
      -1,   488,    -1,    -1,    -1,  2486,  2487,  2488,   495,    -1,
      -1,    -1,    -1,   500,   114,    -1,    -1,    -1,    -1,  2500,
      -1,    -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   528,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2535,    -1,    -1,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2547,    -1,   168,    -1,
      -1,    -1,    -1,   173,    -1,  2556,    -1,    -1,  2559,    -1,
      -1,    -1,    -1,  2564,  2565,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2574,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,
    2591,   211,   212,    -1,    -1,    -1,    -1,    -1,  2599,    -1,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,   229,
      -1,   231,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2653,    -1,    -1,    -1,   276,    -1,    -1,    -1,
     280,    -1,   282,    -1,    -1,    -1,    -1,    -1,    -1,  2670,
      -1,    -1,   292,    -1,  2675,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2687,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,   333,    -1,    -1,    10,    -1,  2719,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2735,    -1,    -1,    -1,  2739,    -1,
      -1,   361,   362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   372,    -1,    -1,    -1,    -1,    -1,    52,    53,
       9,    -1,    -1,    -1,    -1,   385,    -1,   387,    -1,    63,
      -1,    -1,    -1,    -1,   394,    -1,    -1,    -1,   398,    -1,
      74,    -1,    -1,    77,    -1,    -1,    -1,   407,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,   418,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,
     114,    -1,    -1,   443,   444,    -1,    -1,   447,   122,   449,
     124,    -1,    -1,    -1,    -1,    -1,    85,   457,    -1,   133,
      -1,   135,   136,   137,   138,   139,   140,   141,   142,    -1,
     144,   145,   146,   102,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,    -1,    -1,   488,    -1,
      -1,    -1,    -1,    -1,   168,   495,    -1,    -1,    -1,   173,
     500,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   528,    -1,
      -1,    -1,    -1,     6,   208,    -1,     9,   211,   212,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,   222,    -1,
      -1,    -1,    -1,    -1,    -1,   229,    -1,   231,    -1,    -1,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,
     199,   200,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   276,    -1,    -1,    -1,   280,    -1,   282,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,   263,    -1,   265,   266,   267,    -1,
      -1,    -1,   271,    -1,   273,    -1,   320,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   333,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   312,    -1,    -1,    -1,   361,    -1,    -1,
      -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   387,    -1,    -1,    -1,    -1,    -1,    -1,
     394,    -1,    -1,    -1,   398,   198,   199,   200,    -1,   358,
      -1,    -1,    -1,   407,   207,    -1,    -1,    -1,    -1,    -1,
     213,   214,    -1,    -1,   418,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   429,    -1,    -1,    -1,    -1,
      -1,   390,    -1,    -1,   438,    85,   239,    -1,    -1,   443,
     444,    -1,    -1,   447,    -1,   449,    -1,    -1,    -1,   252,
     253,   254,   102,   457,    -1,   258,    -1,   260,    -1,    -1,
     263,    -1,   265,   266,   267,    -1,   470,    -1,   271,    -1,
     273,    -1,    -1,    -1,   433,   278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   488,    -1,   445,   446,   291,    -1,
      -1,   495,    -1,    -1,   297,    -1,   500,     6,    -1,   302,
       9,    -1,    -1,    12,    13,    14,    -1,   310,    -1,   312,
      -1,    20,    -1,    -1,   317,    -1,    -1,    -1,    -1,   322,
     479,    -1,    -1,    -1,   528,    -1,    -1,    -1,   331,    -1,
     489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,   199,
     200,   510,    -1,    62,    -1,   358,   515,   207,    -1,    -1,
      -1,    -1,    -1,    -1,   523,    -1,   525,    -1,    -1,    -1,
      -1,    -1,   531,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   390,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   263,    -1,   265,   266,   267,    -1,    -1,
      -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   445,   446,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,
      -1,    -1,   312,    -1,   467,   174,   469,    -1,   471,    -1,
      -1,   474,    -1,   476,   477,   478,   479,    -1,   481,   482,
      -1,    -1,    -1,    -1,    -1,    -1,   489,    -1,    -1,   198,
     199,   200,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,
      -1,    -1,    -1,   353,   213,   214,    -1,   510,    -1,    -1,
     219,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     523,    85,   525,    -1,    -1,    -1,    -1,    -1,   531,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
     390,    -1,    -1,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,   260,    -1,    -1,   263,    -1,   265,   266,   267,    -1,
      -1,    -1,   271,    -1,   273,    -1,    -1,    -1,    -1,   278,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,    -1,     6,    -1,    -1,     9,   297,    -1,
      -1,    -1,    -1,   302,    -1,   445,   446,    -1,    -1,    -1,
      -1,   310,    -1,   312,    -1,    -1,    -1,    -1,   317,    31,
      -1,    -1,    -1,   322,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,   331,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,   341,   197,   198,   199,   200,    -1,    -1,   489,
      -1,    -1,    -1,   207,    -1,    67,    -1,    69,    -1,   358,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     510,    -1,    -1,    85,    -1,   515,    -1,     6,    -1,    -1,
       9,    -1,    94,   523,    -1,   525,    -1,    -1,    -1,    -1,
     102,   390,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,
      -1,   265,   266,   267,    -1,    -1,    -1,   271,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   445,   446,    -1,    -1,
      -1,    -1,    -1,   165,    -1,    -1,    85,    -1,   312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   467,    -1,
     469,    -1,   471,   102,    -1,   474,    -1,   476,   477,   478,
     479,    -1,   481,   482,   196,    -1,   198,   199,   200,    -1,
     489,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,   219,    -1,    -1,
      -1,   510,    -1,    -1,    -1,    -1,   515,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   523,    -1,   525,    -1,    -1,    -1,
       6,    -1,   531,     9,    -1,    -1,   390,   166,    -1,    -1,
     252,    -1,    -1,    -1,    -1,    -1,   258,   259,   260,    -1,
      -1,   263,    -1,   265,   266,   267,    -1,    -1,    -1,   271,
     272,   273,    -1,    -1,    -1,    -1,   278,   279,    -1,   198,
     199,   200,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   445,   446,    -1,    -1,   307,    -1,    -1,    -1,    -1,
     312,    -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,     6,    -1,   327,     9,    -1,    -1,   331,
      -1,    -1,    -1,   252,    -1,    -1,   102,    -1,   340,   258,
      -1,   260,    -1,    -1,   263,   489,   265,   266,   267,    -1,
      -1,    -1,   271,    -1,   273,    -1,   358,   501,    -1,   278,
      -1,    -1,    -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,
      -1,   515,    -1,    -1,    -1,    -1,   520,   296,    -1,   523,
     524,   525,    -1,    -1,    -1,    -1,    -1,   389,   390,   391,
     392,   157,    -1,   312,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,   405,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,
      -1,   433,   198,   199,   200,    -1,    -1,    -1,    -1,   358,
      -1,   207,    -1,   445,   446,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,
       6,   390,    -1,     9,    -1,    -1,    -1,   479,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   252,   489,    -1,    -1,
      -1,   493,   258,    -1,   260,    -1,    -1,   263,    -1,   265,
     266,   267,   504,    -1,    -1,   271,    -1,   273,   510,    -1,
      -1,    -1,   278,   515,   433,   198,   199,   200,    -1,    -1,
      -1,   523,   524,   525,   207,    -1,   445,   446,    -1,   531,
      -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    85,
      -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,
     479,    97,    -1,    -1,    -1,   331,   102,    -1,    -1,   252,
     489,    -1,    -1,    -1,    -1,   258,    -1,   260,    -1,    -1,
     263,    -1,   265,   266,   267,    -1,    -1,    -1,   271,    -1,
     273,   510,   358,    -1,    -1,   278,   515,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   523,   524,   525,    -1,    -1,    -1,
      -1,    -1,   531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   390,    -1,    -1,    -1,    -1,   312,
      -1,    -1,    85,    -1,   317,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,   331,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   198,   199,   200,    -1,    -1,   433,    -1,    -1,
      -1,   207,    -1,    -1,    -1,   358,    -1,    -1,    -1,   445,
     446,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   472,   390,    -1,    -1,
      -1,    -1,    -1,   479,    -1,    -1,   252,   483,    -1,    -1,
      -1,    -1,   258,   489,   260,    -1,    -1,   263,    -1,   265,
     266,   267,    -1,    -1,    -1,   271,    -1,   273,    -1,    -1,
      -1,    -1,   278,    -1,   510,   198,   199,   200,    -1,   515,
     433,    -1,    -1,    -1,   207,    -1,    -1,   523,    -1,   525,
      -1,    -1,   445,   446,    -1,   531,   219,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   331,   479,    -1,    -1,   252,
      -1,    -1,    -1,    -1,    -1,   258,   489,   260,    -1,    -1,
     263,    -1,   265,   266,   267,    -1,    -1,    -1,   271,    -1,
     273,    -1,   358,    -1,    -1,   278,    -1,   510,    -1,    -1,
      -1,    -1,   515,    -1,    -1,    -1,     6,    -1,    -1,     9,
     523,    -1,   525,    -1,    -1,    -1,    -1,    -1,   531,    -1,
      -1,    -1,    -1,    -1,   390,    -1,    -1,    -1,    -1,   312,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,    -1,
      -1,    -1,   198,   199,   200,    -1,    -1,    -1,    -1,    -1,
      -1,   207,    -1,    -1,    -1,    -1,    -1,   433,    -1,    -1,
      -1,    -1,    -1,   219,    -1,   358,    -1,    -1,    -1,   445,
     446,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   252,   390,    -1,    -1,
      -1,    -1,   258,   479,   260,    -1,    -1,   263,    -1,   265,
     266,   267,    -1,   489,    -1,   271,    -1,   273,    -1,    -1,
      -1,    -1,   278,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,    -1,   515,
     433,    -1,    -1,    -1,    -1,    -1,    -1,   523,    -1,   525,
      -1,    -1,   445,   446,    -1,   531,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   331,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,   489,   207,    -1,    -1,
      -1,    -1,   358,    85,    -1,     6,    -1,    -1,     9,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   510,    -1,    -1,
     102,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     523,    -1,   525,    -1,   390,    -1,    -1,    -1,   531,    -1,
      -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,   258,    -1,
     260,    -1,    -1,   263,    -1,   265,   266,   267,    -1,    -1,
      -1,   271,    -1,   273,    -1,    -1,    -1,    -1,   278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,   445,
     446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   312,    -1,    -1,    -1,    -1,   317,    -1,   465,
      -1,    -1,    -1,    -1,    -1,    -1,   198,   199,   200,    -1,
      -1,   331,    -1,   479,    -1,   207,    -1,    -1,    -1,    -1,
      -1,     6,    -1,   489,     9,    -1,    -1,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,
      -1,    -1,    -1,   235,   510,    -1,    -1,    -1,    -1,   515,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   523,    -1,   525,
     252,    -1,    -1,    -1,    -1,   531,   258,    -1,   260,    -1,
     390,   263,    -1,   265,   266,   267,    -1,    -1,    -1,   271,
      -1,   273,    -1,    -1,    -1,    -1,   278,   198,   199,   200,
      -1,   202,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,   433,    -1,    -1,    -1,   102,    -1,    -1,
     312,    -1,    -1,    -1,    -1,   445,   446,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,
      -1,   252,    -1,    -1,    -1,    -1,    -1,   258,    -1,   260,
      -1,    -1,   263,    -1,   265,   266,   267,    -1,    -1,   479,
     271,    -1,   273,    -1,    -1,    -1,   358,   278,    -1,   489,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     510,    -1,    -1,    -1,    -1,   515,    -1,    -1,   390,    -1,
      -1,   312,    -1,   523,    -1,   525,    -1,    -1,    -1,    -1,
      -1,   531,    -1,   198,   199,   200,     6,    -1,    -1,     9,
     331,    -1,   207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,
      -1,   433,    -1,    -1,    -1,    -1,     6,   358,    -1,     9,
      -1,    -1,    -1,   445,   446,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,
      -1,    -1,    -1,   258,    -1,   260,    -1,    -1,   263,   390,
     265,   266,   267,    -1,    -1,    -1,   271,   479,   273,    -1,
      -1,    -1,    -1,   278,    -1,    85,    -1,   489,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,   510,    -1,
      -1,    -1,   433,   515,    -1,    85,    -1,   312,    -1,    -1,
      -1,   523,    -1,   525,   445,   446,    -1,    -1,    -1,   531,
      -1,    -1,   102,    -1,    -1,    -1,   331,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,
      -1,    -1,    -1,   358,    -1,    -1,    -1,    -1,   489,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   510,
      -1,    -1,    -1,    -1,   515,   390,    -1,    -1,   198,   199,
     200,    -1,   523,    -1,   525,    -1,    -1,   207,    -1,    -1,
     531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,   199,
     200,    -1,   427,    -1,    -1,    -1,    -1,   207,   433,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     445,   446,   252,    -1,    -1,    -1,    -1,    -1,   258,    -1,
     260,    -1,    -1,   263,    -1,   265,   266,   267,    -1,    -1,
      -1,   271,    -1,   273,    -1,    -1,    -1,    -1,   278,    -1,
      -1,    -1,   252,    -1,   479,    -1,    -1,    -1,   258,    -1,
     260,    -1,    -1,   263,   489,   265,   266,   267,    -1,    -1,
      -1,   271,    -1,   273,    -1,    -1,    -1,    -1,   278,    -1,
      -1,    -1,   312,    -1,    -1,   510,    -1,    -1,    -1,    -1,
     515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   523,    -1,
     525,   331,    -1,    -1,    -1,    -1,   531,    -1,    -1,    -1,
      -1,    -1,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,
      -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,
     390,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
     390,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    -1,    -1,    -1,   445,   446,    76,    -1,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   445,   446,    -1,    -1,   479,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   489,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,
     510,    -1,    -1,    -1,    -1,   515,    -1,    -1,    -1,   489,
      -1,    -1,    -1,   523,    -1,   525,    -1,    -1,    -1,    -1,
      -1,   531,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
     510,    -1,    -1,    -1,    -1,   515,    -1,    -1,     9,    -1,
      -1,    -1,   181,   523,    -1,   525,   185,   186,   187,   188,
     189,   531,    -1,   192,   193,    -1,    -1,   196,    -1,    -1,
      -1,    -1,    -1,   202,    -1,   204,    -1,    -1,    -1,    -1,
      -1,   210,    -1,    -1,    -1,    -1,   215,    -1,    -1,   218,
      -1,    -1,     1,    -1,    -1,    -1,    -1,   226,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     239,    -1,    21,   242,    -1,    -1,    -1,    -1,    -1,   248,
      -1,   250,    -1,    -1,    85,    -1,    -1,    -1,    37,    -1,
     259,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,   102,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,   295,    76,    -1,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   314,    -1,   316,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,    -1,
     339,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,    -1,   354,    -1,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,   199,   200,
      -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
      -1,    -1,    -1,   382,    -1,    -1,    -1,    -1,   219,    -1,
     389,    -1,   391,   392,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,   181,    -1,    -1,    -1,   185,   186,   187,   188,
     189,   410,    -1,   192,   193,    -1,    -1,   248,    -1,    -1,
      -1,    -1,   421,    -1,   423,   424,   425,    -1,    -1,    -1,
      -1,   210,   263,    -1,   265,   266,   267,    -1,    -1,     9,
     271,    -1,   273,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   454,    -1,    -1,    -1,    -1,
     239,    -1,    -1,   242,    -1,    -1,   465,    -1,    -1,   248,
      -1,   470,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,
      -1,   312,    -1,    -1,    -1,    -1,    -1,    -1,   487,    59,
      -1,    -1,    -1,    -1,   493,    -1,    -1,    -1,   497,   498,
     499,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,
      -1,    -1,   511,    -1,    -1,    85,    -1,   516,    -1,   518,
      -1,    -1,    -1,    -1,    -1,    -1,   525,   358,    -1,    -1,
      -1,    -1,   102,    -1,    -1,   314,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   390,
     339,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,    37,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   445,   446,    -1,    76,    -1,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
      -1,    -1,   421,    -1,   423,   424,   425,    -1,   479,   219,
      -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,   489,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   451,    -1,    -1,    -1,    -1,    -1,   248,   510,
      -1,    -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,
      -1,   470,   523,   263,   525,   265,   266,   267,    -1,    -1,
     531,   271,    -1,   273,    -1,    -1,    -1,    -1,   487,    31,
      -1,    33,    -1,    -1,    36,    -1,    38,    39,   497,   498,
     499,    -1,    -1,    -1,    -1,    47,   185,   186,   187,   188,
     189,    -1,   511,   192,   193,    -1,    -1,    -1,    -1,   518,
      -1,    -1,   312,    -1,    -1,    67,   525,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     239,    -1,    -1,   242,    -1,    -1,    -1,    -1,   358,   248,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     390,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,   328,
      -1,    -1,    -1,    -1,   196,   445,   446,   336,    -1,    -1,
     339,   203,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   354,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   367,   479,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,   489,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,
     510,    -1,    -1,    -1,    -1,   515,    -1,    -1,   270,    -1,
     272,    -1,    -1,   523,    -1,   525,    -1,   279,    -1,    -1,
      -1,   531,   421,    -1,   423,   424,   425,    -1,    -1,    -1,
      -1,    -1,   294,   295,    33,    -1,    -1,    36,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,   451,    -1,   316,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    67,    -1,
      69,   470,    -1,    -1,    -1,    -1,    -1,    76,   340,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,   487,    -1,
      -1,    -1,    -1,    -1,   356,   357,    -1,    -1,   497,   498,
     499,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   511,    -1,    -1,    -1,    -1,    -1,    -1,   518,
     382,    -1,    -1,   122,    -1,    -1,    -1,   389,    -1,   391,
     392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   405,    -1,    -1,    -1,    -1,   410,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   427,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   185,   186,   187,   188,
     189,    -1,   454,   192,   193,    -1,    -1,   196,    -1,    -1,
     462,   463,    -1,   202,    -1,   204,    -1,    -1,    -1,    -1,
      -1,   210,    -1,    -1,    -1,    -1,   215,    -1,    -1,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,   493,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     239,   503,    -1,   242,    -1,    -1,    -1,   509,    -1,    -1,
      -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,    -1,   524,    85,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,   272,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,   295,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,    -1,   314,    -1,   316,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,    -1,
     339,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,   354,    -1,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,   198,   199,   200,    -1,
      -1,    -1,    -1,   382,    -1,   207,    -1,   102,    -1,    -1,
     389,    -1,   391,   392,    -1,    -1,    -1,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,   410,   185,   186,   187,   188,   189,    -1,    -1,   192,
     193,    -1,   421,    -1,   423,   424,   425,   102,    -1,    -1,
     252,    -1,    -1,    -1,    -1,    -1,   258,    -1,   260,    -1,
      -1,   263,    -1,   265,   266,   267,    -1,    -1,    -1,   271,
      -1,   273,    -1,   226,    -1,   454,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,
      -1,   470,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,
      -1,    -1,    -1,   198,   199,   200,    -1,    -1,    -1,    -1,
     312,    -1,   207,    -1,   493,    -1,    -1,    -1,   497,   498,
     499,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,   331,
      -1,   284,   511,    -1,    85,    -1,    -1,   516,    -1,   518,
      -1,    -1,    -1,   198,   199,   200,    -1,    -1,    -1,    -1,
      -1,   102,   207,    -1,    -1,    -1,   358,   252,    -1,    -1,
      -1,    -1,    -1,   258,   219,   260,    -1,    -1,   263,    -1,
     265,   266,   267,    -1,    -1,   328,   271,    -1,   273,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   339,    -1,   390,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,
      -1,   354,    -1,   258,    -1,   260,    -1,    -1,   263,    -1,
     265,   266,   267,    -1,    -1,    -1,   271,   312,   273,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   433,    -1,    -1,    -1,    -1,   331,    -1,    -1,    -1,
      -1,    -1,    -1,   445,   446,    -1,    -1,   198,   199,   200,
      -1,    -1,    -1,    -1,    -1,    -1,   207,   312,    -1,    -1,
      -1,    -1,    -1,   358,    -1,   467,    -1,    -1,   219,    -1,
     423,   424,   425,    -1,    -1,   477,   331,   479,    -1,   481,
     482,    -1,    -1,    -1,    -1,    -1,    -1,   489,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   390,    -1,    -1,    -1,    -1,
      -1,   252,    -1,   358,    -1,    -1,    -1,   258,   510,   260,
      -1,    -1,   263,   515,   265,   266,   267,    -1,    -1,    -1,
     271,   523,   273,   525,    -1,    -1,    -1,    -1,    -1,   531,
      85,    -1,    -1,    -1,    -1,   390,    -1,    -1,   433,    -1,
      -1,    -1,    -1,    -1,   497,   498,   499,   102,    -1,    -1,
     445,   446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   467,    -1,    -1,    -1,    -1,    -1,   433,    -1,
     331,    -1,   477,    -1,   479,    -1,   481,   482,    -1,    -1,
     445,   446,    -1,    -1,   489,    -1,    -1,    -1,   453,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,    -1,
     515,    -1,   477,    -1,   479,    -1,   481,   482,   523,    -1,
     525,    85,    -1,    -1,   489,    -1,   531,    -1,    -1,   390,
      -1,    -1,    -1,   198,   199,   200,    -1,    -1,   102,    -1,
      -1,    -1,   207,    -1,    -1,   510,    85,    -1,    -1,    -1,
     515,    -1,    -1,    -1,   219,    -1,    -1,    -1,   523,    -1,
     525,    -1,    -1,   102,    -1,    -1,   531,    -1,    -1,    -1,
      -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   445,   446,    -1,   252,    -1,    -1,
      -1,    -1,   453,   258,    -1,   260,    -1,    -1,   263,    -1,
     265,   266,   267,    -1,    -1,    -1,   271,    -1,   273,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,   479,    -1,
     481,   482,    -1,    -1,    -1,    -1,    -1,    -1,   489,    -1,
      -1,    -1,    -1,    -1,   198,   199,   200,    -1,    -1,    -1,
      -1,    -1,    -1,   207,    -1,    -1,    -1,   312,    -1,   510,
      -1,    -1,    -1,    -1,   515,   219,    -1,    -1,    -1,   198,
     199,   200,   523,    -1,   525,    -1,   331,    -1,   207,    -1,
     531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,
      -1,    -1,    -1,   358,   258,    -1,   260,    -1,    -1,   263,
      -1,   265,   266,   267,    -1,    -1,    -1,   271,    -1,   273,
      -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,   258,
      -1,   260,    85,    -1,   263,   390,   265,   266,   267,    -1,
      -1,    -1,   271,    -1,   273,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,   433,    -1,
      -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,    -1,    -1,
     445,   446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   331,    -1,   358,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   477,    -1,   479,    -1,   481,   482,    -1,   358,
      -1,    -1,    -1,    85,   489,    -1,   390,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   198,   199,   200,    -1,    -1,
     102,    -1,    -1,    -1,   207,   510,    -1,    -1,    -1,    -1,
     515,   390,    -1,    -1,    -1,    -1,   219,    -1,   523,    -1,
     525,    -1,    -1,    -1,    -1,    -1,   531,    -1,    -1,   433,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   445,   446,    -1,    -1,    -1,    -1,    -1,    -1,   252,
      -1,    -1,    -1,    -1,   433,   258,    -1,   260,    -1,    -1,
     263,    -1,   265,   266,   267,    -1,   445,   446,   271,    -1,
     273,    -1,    -1,   477,    -1,   479,    -1,   481,   482,    -1,
      -1,    -1,    -1,    -1,    85,   489,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   198,   199,   200,    -1,
     479,   102,   481,    -1,    -1,   207,   510,    -1,    -1,   312,
     489,   515,    -1,    -1,    -1,    -1,    -1,   219,    -1,   523,
      -1,   525,    -1,    -1,    -1,    -1,    -1,   531,   331,    -1,
      -1,   510,    -1,    -1,    -1,    -1,   515,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   523,    -1,   525,    -1,    -1,    -1,
     252,    -1,   531,    -1,    -1,   358,   258,    -1,   260,    -1,
      -1,   263,    -1,   265,   266,   267,    -1,    -1,    -1,   271,
      -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   384,    -1,    -1,    -1,    -1,    -1,   390,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,   199,   200,
      -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
     312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,
     433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   445,   446,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,
      -1,    -1,   263,    -1,   265,   266,   267,    -1,    -1,    -1,
     271,    -1,   273,    -1,    -1,    -1,   479,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   489,    -1,   390,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   510,    -1,    -1,
      -1,   312,   515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     523,    -1,   525,    -1,    -1,    -1,    -1,    -1,   531,    -1,
      -1,   433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   445,   446,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   489,    -1,   390,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   510,    -1,
      -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   523,    -1,   525,    -1,    -1,    -1,    -1,    -1,   531,
      -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   445,   446,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   489,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   510,
      -1,    -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   523,    -1,   525,    -1,    -1,    -1,    -1,    -1,
     531
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   535,   536,     0,   220,   221,   537,   538,   539,   540,
     541,   542,   543,   549,   125,   125,   539,   158,   548,   562,
     563,   206,   352,   550,   553,   470,   470,   125,   105,   676,
     678,    87,   564,   565,   554,   551,   548,   548,   470,   125,
     348,   838,   841,   473,   679,   409,   233,   627,   628,   313,
     432,   566,   567,   571,   470,   470,   147,   544,   545,   546,
     143,   547,   470,   125,   864,   865,   409,   680,   470,   409,
     179,   629,   470,   470,   434,   588,   571,   567,   263,   353,
     555,   555,   263,   353,   556,   546,   556,    57,   516,   842,
       1,     3,     5,    10,    18,    52,    53,    63,    74,    77,
      91,   114,   122,   124,   157,   168,   173,   201,   208,   211,
     212,   222,   229,   231,   234,   276,   280,   282,   292,   320,
     333,   361,   362,   372,   385,   387,   394,   398,   407,   418,
     429,   438,   443,   444,   447,   449,   457,   470,   488,   495,
     500,   528,   866,   867,   885,   890,   894,   899,   919,   923,
     927,   931,   932,   933,   938,   952,   956,   959,   973,   977,
     980,   983,   987,   988,   992,  1002,  1005,  1023,  1025,  1028,
    1032,  1039,  1051,  1066,  1067,  1070,  1071,  1075,  1081,  1082,
    1090,  1106,  1116,  1125,  1130,  1139,  1143,  1145,  1148,  1151,
    1154,  1181,   866,   470,   178,   406,   677,   681,   682,   684,
     470,   470,   631,   572,   568,   470,    11,    60,    99,   101,
     103,   111,   169,   264,   310,   404,   450,   525,   589,   590,
     591,   592,   593,   599,   608,   610,   615,   618,   619,   621,
     622,   623,   624,   625,   626,    27,   557,   557,   470,   470,
     844,   843,   388,   850,     3,     5,    10,    18,    52,    53,
      63,    74,    77,    91,   114,   122,   124,   133,   135,   136,
     137,   138,   139,   140,   141,   142,   144,   145,   146,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   168,
     173,   201,   208,   211,   212,   222,   229,   231,   234,   276,
     280,   282,   292,   320,   333,   361,   372,   387,   394,   398,
     407,   418,   429,   438,   443,   444,   447,   449,   457,   470,
     488,   495,   500,   528,  1335,  1336,  1337,   868,   886,   891,
     895,   900,   920,   924,   928,   934,   939,   953,   957,   960,
     974,   978,   981,   984,   209,   388,   911,   976,   989,   993,
    1003,  1006,  1024,  1026,  1029,   414,  1033,  1040,  1052,  1068,
    1072,  1076,  1083,  1091,  1107,  1117,   263,   358,   400,   433,
     531,  1129,  1131,  1140,   347,  1144,  1146,   853,  1149,  1152,
    1155,  1182,   527,   712,   714,   715,     1,   525,  1253,   241,
     412,   630,   632,    58,    66,   275,   351,   411,   416,   525,
     573,   574,   575,   576,   577,   578,   579,   581,  1348,  1410,
     569,   581,     1,   525,  1267,  1267,   440,   421,  1381,   239,
    1362,  1362,  1362,  1267,   421,  1362,    59,  1349,   594,   381,
     582,   591,   470,   592,   225,   609,   263,   470,   552,    50,
     845,   846,   847,  1347,   845,   317,   525,   470,   317,   525,
     869,   871,  1297,  1298,  1301,     6,     9,    85,    97,   102,
     198,   199,   200,   207,   219,   252,   258,   260,   263,   265,
     266,   267,   271,   273,   278,   312,   331,   358,   390,   433,
     445,   446,   479,   489,   510,   515,   523,   531,   887,  1247,
    1272,  1273,  1275,  1297,  1308,  1309,  1310,  1311,  1312,  1313,
    1314,   252,   477,   481,   482,   892,  1242,  1243,  1244,  1245,
    1246,  1247,  1278,  1297,  1309,  1311,   263,   896,   897,  1258,
    1259,  1260,  1301,   278,   439,   441,   901,   903,   263,   353,
     921,   922,  1285,  1297,   925,  1253,     6,   929,  1248,  1249,
    1270,  1299,  1300,  1301,  1309,   473,   935,  1253,   263,   317,
     940,   941,   942,   943,   945,  1272,  1285,  1297,   954,  1273,
     263,   958,   472,   483,   961,   962,   963,  1230,  1231,  1232,
     205,   332,   333,   351,   409,   975,   979,  1269,  1270,   982,
    1301,   465,   985,  1390,  1273,  1229,  1230,   994,  1269,   525,
    1004,  1254,  1007,  1008,  1297,  1308,  1311,  1108,  1292,  1293,
    1301,    97,  1027,  1273,  1030,  1273,   175,   232,   240,   326,
    1034,  1035,  1036,   197,   263,   524,  1041,  1045,  1046,  1047,
    1258,  1286,  1297,  1301,  1311,  1394,  1053,  1253,  1069,  1250,
    1301,  1073,  1253,  1077,  1250,     9,  1084,  1251,  1301,   158,
     247,   278,  1092,  1095,  1096,  1099,  1100,  1101,  1102,  1103,
    1104,  1105,  1255,  1256,  1269,  1291,  1293,  1301,  1108,  1118,
    1253,  1126,  1132,  1133,  1134,  1273,    97,  1141,  1272,  1147,
    1254,   470,   525,   854,   855,   858,   859,   864,  1150,  1294,
    1297,  1153,  1253,  1156,  1297,  1183,  1250,   409,   268,   773,
     132,   419,   426,   716,   717,   719,   729,   731,   733,  1322,
     470,   683,   470,   297,   321,  1330,   281,   402,   666,   667,
     668,   669,   671,   416,   427,    66,  1362,   470,   575,   470,
     525,   574,    61,  1362,   570,  1394,   600,  1362,  1362,  1362,
    1262,  1301,    71,  1262,  1362,  1362,  1262,   525,   611,   612,
     613,  1268,   263,   316,   318,   595,   597,   598,  1093,  1304,
    1362,   470,   470,   525,   558,  1362,   846,   427,   496,   848,
     369,   518,   839,   225,   315,  1400,   135,   884,   870,   202,
     481,  1302,  1303,   315,  1372,  1310,  1297,   481,   481,   481,
    1316,  1298,  1309,  1311,  1400,  1400,   481,   481,   481,   481,
    1400,   481,  1316,   136,   889,   465,   888,  1273,   466,   481,
    1315,   481,   481,  1298,  1309,  1311,  1246,  1297,  1242,  1246,
      59,   477,   482,   469,   478,   174,   230,  1325,   897,   465,
    1400,   137,   918,   263,   353,   904,  1286,   922,  1253,   368,
     494,   926,  1394,  1406,  1372,   138,   930,   164,   471,  1249,
    1398,   399,  1331,  1302,  1303,   936,  1253,   139,   937,   363,
    1378,   140,   951,   170,   303,  1196,  1198,  1200,   943,  1271,
    1272,   944,   505,   506,   507,   508,   141,   955,    50,   235,
     516,   905,   142,   972,    17,   522,   964,   965,   966,   968,
      12,    13,    14,    20,    62,   164,   174,   213,   214,   253,
     254,   291,   297,   302,   310,   317,   322,   341,   467,   469,
     471,   474,   476,   477,   478,   481,   482,  1233,  1234,  1235,
    1236,  1237,  1238,  1239,  1273,   104,   976,  1270,  1257,   460,
    1388,   995,  1394,  1254,    95,   377,   455,  1009,  1010,  1012,
    1013,  1110,   481,  1302,  1273,   465,   145,  1031,    50,  1035,
     420,  1037,  1046,   146,   470,  1042,  1044,   501,   520,   461,
     464,   458,   148,  1065,   292,   343,  1328,   202,  1184,   149,
    1074,  1378,   150,  1080,  1184,  1251,   151,  1089,   520,  1085,
    1281,  1283,  1297,  1309,  1311,   170,  1102,  1104,  1269,   465,
    1256,   126,   465,   502,  1094,    32,  1302,   152,  1124,   183,
     244,   247,  1120,   911,  1127,  1273,  1394,   153,  1138,   235,
    1134,   115,  1135,  1297,   154,  1142,   202,  1254,   409,   470,
     470,   202,   363,   365,  1379,   155,  1165,   115,  1157,   156,
    1188,  1184,   470,   409,   262,   775,   525,   721,   721,   721,
     717,   470,     1,   181,   720,   721,   525,   685,   321,  1267,
     672,   363,   429,   430,   670,     1,   470,   668,  1362,   416,
    1304,   470,  1362,   525,  1263,   470,   110,  1362,   219,   263,
     273,   358,   433,   479,   531,   616,   617,  1307,  1262,   263,
     263,   487,   612,    22,   239,  1268,  1363,  1093,   239,   440,
    1374,  1362,    99,  1267,   583,   470,    75,   176,   366,   475,
     559,   560,   561,  1362,   427,   321,   849,   112,   851,  1301,
      31,    38,   203,   279,   872,   873,   874,   876,   879,  1344,
    1345,  1394,    25,    26,    68,    70,    72,   106,   107,   108,
     158,   160,   167,   170,   259,   261,   462,   513,   525,   875,
    1256,  1397,  1240,  1242,   481,  1303,   157,   351,  1279,  1298,
     465,  1240,  1242,  1320,  1240,  1321,   467,  1240,   525,   525,
    1242,  1319,  1319,  1319,  1277,  1297,  1309,  1311,  1318,   525,
    1277,  1317,     6,  1248,  1273,  1301,  1309,   209,  1310,  1242,
    1277,  1240,   467,   230,  1326,  1243,  1243,  1244,  1244,  1244,
     388,   893,   350,   898,  1260,   902,   926,   269,   294,   195,
    1355,  1298,  1242,   279,  1332,  1303,  1253,   386,  1058,  1059,
    1060,   861,   862,   861,  1199,  1200,  1197,  1198,   504,   876,
     879,   946,   947,   948,  1394,  1196,  1196,  1196,  1196,  1273,
    1248,  1273,   906,   963,    21,   472,   483,   969,   970,  1231,
     522,   966,   967,   522,   861,  1390,   239,  1234,   117,   986,
    1258,   133,   861,   990,     9,    12,    15,    16,   284,   285,
     310,   311,   996,  1000,   181,  1281,     9,    59,   183,   248,
     487,  1016,  1017,  1018,  1011,  1012,   127,   318,   524,  1112,
    1373,  1409,   465,  1269,  1248,  1273,  1394,  1058,   861,   173,
    1048,  1229,  1049,  1050,  1297,  1258,     8,    38,  1186,  1378,
    1290,  1297,  1308,  1311,   235,  1054,  1058,   134,  1086,  1297,
    1086,   465,   465,   465,  1093,   157,   472,   483,  1273,    50,
      39,    47,   218,   250,   272,   327,   391,   493,  1097,  1098,
    1362,  1119,  1394,  1273,   166,   296,  1297,  1347,   202,  1248,
    1273,   860,  1304,  1281,  1347,   235,  1160,  1185,  1186,   713,
     470,   409,   378,   777,   732,   734,   375,   470,   470,   718,
      88,    48,    65,   105,   246,   257,   363,   364,   378,   380,
     470,   518,   686,   687,   689,   693,   694,   697,   698,   704,
     707,   709,   710,  1362,   633,   473,  1353,    23,  1341,   470,
    1304,   264,   452,   514,   580,  1263,   279,    29,   129,   219,
     263,   273,   287,   358,   433,   436,   437,   531,   601,   602,
     603,   606,   617,   461,   620,  1394,   415,   263,   614,  1305,
    1374,   239,  1267,  1267,   596,   597,   205,   351,   584,   585,
     586,   561,   351,  1377,    75,    33,   113,  1304,  1362,   525,
     470,   840,   531,  1287,  1291,  1304,  1362,   167,   170,   301,
     303,  1189,  1191,  1192,  1194,  1195,   874,    67,    69,   259,
     340,   877,   878,  1396,   462,    33,    36,    39,    47,    94,
     113,   196,   204,   218,   250,   270,   272,   294,   295,   316,
     327,   356,   357,   382,   389,   391,   392,   405,   410,   427,
     454,   463,   493,   503,   509,   880,   881,   882,   883,  1189,
     530,   529,  1281,  1189,   244,   440,   308,   283,    73,   413,
     467,  1241,   468,  1242,   263,  1280,  1298,  1297,  1241,   467,
    1241,   467,   467,  1241,   467,   467,   467,  1241,   467,  1241,
     467,  1372,   306,   428,  1201,  1203,  1205,  1302,  1303,  1248,
     468,   467,   467,   465,  1327,   893,  1270,   465,  1258,   905,
     393,   374,  1201,  1362,   197,  1355,   238,   304,  1222,  1223,
    1225,  1227,   863,    99,   100,   345,   525,   949,  1256,   947,
      36,    39,    46,    47,    94,   165,   196,   218,   272,   307,
     327,   405,   427,   493,   882,   950,   209,  1201,   209,   907,
     908,   909,  1347,    17,   461,   971,   325,   969,  1373,   861,
     133,   144,   991,  1390,   377,   997,  1390,   465,    50,  1017,
    1019,  1281,     9,    59,   248,   487,  1014,  1015,  1281,  1295,
    1297,   127,    66,   416,  1113,  1395,    28,   118,   759,   225,
     323,  1358,  1269,  1201,   209,     9,   294,   361,   665,  1252,
    1253,   146,  1043,     8,   202,  1054,  1297,   134,   299,  1211,
    1214,  1216,  1078,  1079,  1394,   861,   522,   522,  1087,  1088,
    1281,   316,  1280,  1273,  1093,  1093,  1093,  1093,  1093,  1093,
    1093,  1093,  1098,   297,   302,  1121,  1122,  1123,  1235,  1329,
    1222,   251,   427,  1408,   440,  1386,  1386,  1137,  1394,   427,
    1136,  1273,  1297,  1201,   209,   470,   465,     9,  1158,  1159,
    1323,  1161,  1297,  1137,  1161,  1058,     7,  1338,   714,   774,
     470,   409,   403,   822,   518,   767,   741,   742,  1362,  1301,
     736,   722,  1362,    89,  1350,  1362,   363,   365,  1405,  1405,
    1362,  1350,  1362,   279,  1369,  1362,    22,  1340,   315,   711,
    1267,   176,   210,   634,   456,  1387,  1355,    59,   526,  1404,
     603,    17,   461,  1307,   337,  1305,  1267,     9,   207,   525,
     587,   525,     1,   470,   586,    33,  1304,   852,   853,    48,
    1193,  1194,   861,  1190,  1191,   861,   308,  1370,  1370,  1370,
     263,  1288,  1291,  1306,  1362,  1362,   131,   883,    58,   427,
     126,   502,  1362,     8,  1339,  1189,  1242,   467,  1242,  1331,
     453,  1315,   453,  1315,  1262,  1315,  1315,  1315,  1277,   248,
     487,  1315,  1298,   861,   861,  1204,  1205,  1202,  1203,  1303,
    1201,   467,  1242,  1315,  1315,  1284,  1297,  1308,   910,   911,
      35,   288,   289,   290,   355,   485,   486,   490,  1333,  1242,
     861,   861,  1226,  1227,  1224,  1225,   864,  1362,   259,   403,
     134,   161,   163,   830,   831,  1352,  1362,   126,   502,  1362,
    1248,  1249,  1248,  1249,   908,   317,   848,    90,   369,   518,
     970,  1230,   861,  1297,   861,   518,   998,   999,  1000,  1001,
    1388,   518,  1282,  1284,  1281,    50,     8,    38,  1020,  1021,
    1022,  1015,  1020,   195,   416,  1109,  1362,   244,  1364,   323,
    1248,   325,  1375,  1375,   319,   392,  1038,  1253,  1394,  1050,
    1273,     7,   224,  1055,  1056,  1057,  1059,  1062,  1079,  1394,
     861,   861,  1215,  1216,  1214,  1222,   269,   294,  1230,  1229,
    1087,  1235,  1297,  1236,  1237,  1238,  1239,  1242,  1128,  1273,
    1128,   305,   480,  1206,  1208,  1210,   339,  1331,  1248,   856,
    1282,   322,  1281,   116,  1162,   455,  1164,  1078,   330,  1256,
    1287,   714,   776,   470,   409,  1363,   767,   210,   461,   730,
      21,    37,    40,    41,    42,    43,    44,    45,    46,    76,
      78,    79,    80,    81,    82,    83,    84,   122,   185,   186,
     187,   188,   189,   192,   193,   226,   242,   284,   314,   328,
     336,   339,   354,   367,   421,   423,   424,   425,   451,   497,
     498,   499,   511,   737,   738,   739,   742,   743,   744,   745,
     746,   747,   748,   751,   763,   764,   765,   766,   767,   772,
    1362,  1383,    27,   202,   735,  1343,   210,  1304,   525,   648,
    1362,  1340,   525,  1264,  1265,   317,   435,  1401,   263,  1262,
    1266,  1304,   520,  1362,   180,   220,   525,   695,  1267,     4,
      19,    30,   227,   259,   324,   329,   363,   371,   383,   420,
     429,   470,   473,   635,   636,   643,   645,   647,   649,   650,
     651,   652,   655,   656,   657,   658,   659,   661,   662,   664,
    1378,  1395,  1350,  1252,   604,   606,   263,   236,   557,   207,
     236,   557,   470,   853,  1287,  1287,  1287,  1287,  1287,  1362,
    1362,  1228,  1289,  1291,  1304,  1228,  1287,  1288,   467,  1201,
     467,   170,   303,   480,   913,   915,   917,     6,   235,   298,
     317,   479,   912,  1361,   408,   464,  1287,  1372,   259,   403,
    1287,  1228,  1228,  1287,  1201,   373,  1201,   373,  1274,  1275,
    1296,  1298,   999,   105,  1351,  1390,  1020,  1020,  1282,   475,
    1360,  1360,  1022,  1021,   232,   516,  1114,  1262,  1111,  1201,
     269,   294,    50,  1373,   269,   244,  1063,  1061,  1062,  1394,
     223,   243,   521,   269,   861,   861,   861,   861,  1209,  1210,
    1207,  1208,  1362,  1201,  1201,   512,   857,  1166,  1159,   225,
    1357,    98,  1163,  1357,  1206,   162,   300,  1187,  1217,  1219,
    1221,  1223,   259,   261,  1366,   714,   778,   470,   769,   770,
    1308,  1301,   251,   310,   422,   496,  1382,   496,  1382,   496,
    1382,   496,  1382,   496,  1382,   522,  1392,   397,  1380,   128,
    1304,  1298,   239,   249,   397,  1365,  1362,   176,   248,   487,
     525,    51,   251,   252,   723,  1308,   465,   692,   195,   708,
    1265,   261,  1368,   465,  1349,  1357,   177,   184,   401,   492,
     517,   519,   705,   706,  1362,  1362,  1369,  1378,   465,   516,
    1391,   417,  1362,  1348,   116,  1364,  1364,   294,   663,  1304,
    1394,   440,   269,    40,  1346,  1362,   673,   674,  1253,   605,
     606,   134,  1285,  1287,   259,   261,  1407,   861,   861,   861,
     916,   917,   914,   915,  1372,  1297,  1249,  1249,    50,   113,
    1020,  1273,  1273,   348,  1252,   209,   326,  1115,  1301,   393,
    1273,   269,  1362,  1064,  1212,  1214,  1216,  1222,   269,   269,
    1297,  1167,   470,  1297,  1357,  1297,   861,   861,  1220,  1221,
    1218,  1219,   779,   823,   768,   770,   461,   531,    54,   755,
     465,   752,   745,    27,   740,   415,  1334,  1334,  1372,     1,
      41,    42,    43,    44,    45,   185,   186,   187,   188,   189,
     190,   191,   339,   354,   724,   725,   726,   727,   728,   746,
     747,  1298,   724,  1304,    59,   365,   688,  1261,  1262,   699,
    1304,   427,  1384,   263,   696,  1301,   696,  1362,  1364,   128,
     176,   640,   371,   656,  1362,  1362,  1362,  1362,    23,    24,
    1342,   665,  1362,  1369,   417,   648,   674,   340,   675,    17,
     112,  1297,  1201,  1201,  1273,  1362,  1252,   348,   501,  1297,
    1215,  1213,  1214,    31,   130,   171,   210,  1168,  1169,  1170,
    1172,  1176,  1178,  1179,  1180,  1344,  1355,  1297,   360,   780,
     719,   733,   824,   825,   826,   522,   771,  1393,  1308,  1357,
     202,   753,  1304,   464,  1389,   263,  1348,   724,   470,  1262,
      49,   484,   700,   701,   702,   703,  1394,  1349,   202,   691,
    1356,   128,   359,   417,   644,  1362,   120,   121,   122,   245,
     259,   344,   345,   346,   359,   456,   637,   638,   639,  1266,
     436,   660,  1262,  1262,  1262,  1362,  1304,   606,   470,  1045,
    1362,  1229,    38,  1339,   351,   110,  1254,     1,   720,   826,
     470,   418,   472,   525,  1304,   752,   117,   754,  1266,  1266,
     194,   692,  1304,   660,   263,   642,  1301,   642,     7,   642,
     642,   263,   641,  1301,   431,   471,    34,   172,   274,   653,
    1045,   379,   435,  1385,   134,   438,  1177,  1373,   781,   470,
     827,   470,   465,  1362,   230,   756,  1373,   757,   758,  1344,
    1349,  1324,  1409,  1353,  1362,  1261,   524,   654,   654,  1297,
     166,   170,  1399,     9,  1173,  1174,  1259,     1,   782,   828,
    1308,   757,  1262,   227,   760,   759,  1266,   117,   690,   449,
     646,  1261,   269,   398,   348,  1376,   315,   349,   370,  1175,
    1174,   470,    64,    92,    93,   330,   470,   783,   784,   787,
    1362,  1418,    33,    36,    39,    46,    47,   165,   196,   202,
     204,   215,   218,   250,   259,   272,   294,   314,   327,   356,
     382,   410,   454,   465,   475,   493,   516,   743,   744,   748,
     763,   765,   767,   829,   836,   837,   881,   882,  1362,  1396,
     760,  1347,  1364,  1373,   522,   318,  1373,   315,  1301,  1362,
    1362,  1340,   255,   256,  1367,   796,   210,   182,   785,  1354,
    1362,   259,   403,   830,   831,  1362,  1290,  1370,  1304,    58,
    1297,  1297,   210,  1370,   525,   761,   762,  1362,  1262,     9,
     433,   531,   607,   281,   363,   365,  1403,   175,   232,   240,
     326,  1171,  1252,  1285,  1362,  1340,   788,  1306,   719,   797,
     786,  1297,  1287,  1287,  1362,  1389,  1362,  1362,   762,  1261,
    1310,  1403,   789,   259,   261,  1402,   720,   721,  1297,   277,
     338,   477,   482,   832,   833,   834,  1285,   832,   833,   835,
     183,   194,   217,   247,   790,   791,   792,   793,   794,   795,
    1306,   798,  1287,  1287,   109,   119,  1411,  1362,  1362,    56,
      92,  1411,  1412,  1397,   799,  1362,  1306,  1306,   217,  1362,
    1362,   216,   259,   261,   292,   314,   342,   431,   448,   470,
     491,   511,   520,   743,   748,   749,   763,   765,   767,   800,
     801,   805,   806,   809,   810,   811,   812,   813,   814,   819,
     820,   821,  1396,  1397,  1306,  1306,  1306,   228,  1359,   308,
     309,  1371,  1340,   216,  1304,   522,  1362,  1372,  1362,  1362,
    1297,   293,   338,   815,   816,  1306,   338,   817,   818,  1306,
    1371,  1340,  1363,  1362,   752,  1229,  1278,  1276,  1278,    55,
      92,   330,   334,   335,   378,   395,   396,   802,  1411,  1412,
    1413,  1414,  1415,  1416,  1417,   122,   202,  1304,   816,  1304,
     818,  1363,   816,  1389,  1331,   384,   807,  1278,   194,   194,
     217,   194,   217,   182,   803,  1297,   803,  1278,   754,  1373,
     322,   804,   804,    50,   442,   750,   182,   808,  1297,   330,
    1278,  1304
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   534,   536,   535,   537,   537,   538,   538,   539,   539,
     541,   540,   542,   543,   544,   544,   545,   545,   546,   547,
     548,   549,   549,   549,   551,   552,   550,   554,   553,   555,
     555,   556,   556,   557,   557,   558,   558,   559,   559,   559,
     559,   560,   560,   561,   561,   562,   563,   563,   564,   565,
     565,   566,   566,   566,   566,   566,   568,   567,   569,   569,
     570,   570,   572,   571,   573,   573,   573,   573,   574,   574,
     575,   575,   575,   575,   576,   577,   578,   579,   580,   580,
     580,   580,   581,   581,   582,   583,   582,   584,   584,   584,
     585,   585,   586,   586,   586,   586,   587,   587,   588,   588,
     589,   589,   590,   590,   591,   591,   592,   592,   592,   592,
     592,   592,   592,   592,   592,   592,   592,   592,   594,   593,
     595,   595,   595,   595,   596,   596,   597,   598,   598,   600,
     599,   601,   601,   601,   601,   601,   601,   602,   602,   603,
     603,   604,   603,   605,   605,   606,   606,   606,   606,   606,
     606,   607,   607,   608,   609,   609,   610,   611,   611,   612,
     613,   613,   614,   614,   615,   616,   616,   617,   617,   618,
     619,   620,   620,   621,   622,   623,   624,   625,   626,   627,
     628,   628,   629,   629,   630,   630,   631,   631,   633,   632,
     634,   634,   635,   635,   635,   635,   635,   635,   635,   635,
     635,   635,   635,   635,   635,   636,   636,   636,   636,   636,
     637,   637,   637,   638,   638,   638,   638,   639,   639,   640,
     640,   640,   641,   641,   642,   642,   642,   643,   644,   644,
     644,   645,   646,   646,   646,   647,   648,   649,   650,   650,
     650,   652,   651,   653,   653,   653,   654,   654,   654,   654,
     655,   655,   656,   656,   656,   656,   657,   658,   659,   660,
     660,   660,   661,   662,   663,   663,   664,   665,   665,   665,
     666,   666,   666,   667,   667,   668,   668,   669,   670,   670,
     670,   670,   672,   671,   673,   673,   674,   675,   675,   677,
     676,   678,   678,   679,   679,   680,   680,   681,   683,   682,
     682,   684,   684,   685,   685,   686,   686,   686,   686,   686,
     686,   686,   686,   686,   686,   686,   687,   688,   688,   688,
     689,   689,   689,   690,   690,   691,   691,   692,   692,   693,
     694,   694,   695,   695,   696,   696,   697,   698,   699,   699,
     700,   700,   700,   701,   702,   703,   704,   705,   705,   705,
     705,   705,   706,   706,   707,   708,   708,   709,   710,   710,
     711,   711,   712,   713,   712,   714,   715,   714,   716,   716,
     717,   717,   717,   718,   717,   717,   719,   720,   720,   720,
     721,   722,   722,   723,   723,   723,   723,   724,   724,   724,
     724,   724,   724,   724,   724,   724,   724,   724,   724,   724,
     725,   725,   726,   726,   727,   727,   727,   728,   728,   729,
     730,   730,   732,   731,   733,   734,   733,   735,   735,   736,
     736,   737,   737,   737,   737,   737,   737,   737,   737,   737,
     737,   737,   737,   737,   738,   739,   740,   740,   741,   741,
     742,   743,   744,   744,   745,   745,   745,   745,   745,   745,
     745,   745,   745,   745,   745,   745,   745,   745,   745,   745,
     745,   745,   745,   745,   745,   745,   745,   745,   745,   745,
     745,   745,   745,   745,   745,   745,   745,   745,   745,   745,
     746,   746,   747,   747,   748,   748,   749,   750,   750,   751,
     751,   752,   752,   753,   753,   754,   754,   755,   755,   756,
     756,   757,   758,   758,   759,   759,   760,   760,   761,   761,
     762,   763,   764,   765,   766,   768,   767,   769,   769,   770,
     770,   771,   771,   772,   772,   773,   774,   773,   775,   776,
     775,   777,   778,   777,   779,   779,   781,   780,   782,   782,
     782,   783,   783,   783,   783,   784,   785,   786,   786,   787,
     788,   788,   788,   789,   789,   790,   790,   790,   790,   790,
     791,   792,   793,   794,   795,   796,   796,   798,   797,   799,
     799,   800,   800,   800,   800,   800,   800,   800,   800,   800,
     800,   800,   800,   800,   800,   800,   800,   801,   802,   802,
     802,   802,   802,   802,   802,   803,   803,   803,   804,   804,
     805,   806,   807,   807,   808,   808,   809,   810,   811,   812,
     812,   813,   814,   814,   815,   815,   816,   816,   816,   817,
     817,   818,   818,   819,   820,   821,   822,   823,   822,   824,
     824,   825,   825,   826,   827,   826,   826,   828,   828,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   830,   830,   831,   831,
     832,   832,   833,   833,   834,   834,   834,   835,   835,   835,
     836,   837,   838,   839,   840,   838,   841,   838,   842,   843,
     842,   844,   842,   845,   845,   846,   847,   847,   847,   848,
     848,   848,   848,   848,   848,   849,   849,   850,   850,   850,
     851,   852,   851,   853,   853,   854,   854,   854,   854,   854,
     856,   855,   857,   857,   858,   859,   860,   860,   862,   863,
     861,   865,   864,   864,   866,   866,   866,   866,   866,   866,
     866,   866,   866,   866,   866,   866,   866,   866,   866,   866,
     866,   866,   866,   866,   866,   866,   866,   866,   866,   866,
     866,   866,   866,   866,   866,   866,   866,   866,   866,   866,
     866,   866,   866,   866,   866,   866,   866,   866,   866,   866,
     866,   866,   866,   866,   866,   868,   867,   870,   869,   869,
     869,   869,   869,   869,   869,   869,   869,   869,   869,   869,
     869,   869,   869,   869,   869,   869,   869,   871,   871,   872,
     872,   873,   873,   874,   874,   874,   874,   874,   875,   875,
     876,   876,   876,   877,   878,   878,   879,   880,   880,   880,
     880,   880,   880,   880,   880,   880,   880,   880,   880,   880,
     880,   880,   880,   880,   880,   880,   880,   880,   880,   880,
     880,   880,   880,   880,   880,   881,   881,   881,   882,   882,
     882,   883,   883,   884,   884,   886,   885,   887,   887,   887,
     888,   888,   889,   889,   891,   890,   892,   892,   893,   893,
     895,   894,   896,   896,   897,   898,   898,   900,   899,   902,
     901,   903,   903,   903,   903,   904,   904,   905,   906,   905,
     907,   907,   908,   908,   909,   909,   909,   909,   910,   910,
     910,   910,   910,   911,   911,   912,   912,   913,   913,   913,
     914,   914,   915,   915,   916,   916,   917,   918,   918,   920,
     919,   921,   921,   922,   922,   924,   923,   925,   925,   926,
     926,   926,   926,   926,   928,   927,   929,   930,   930,   931,
     932,   934,   933,   935,   935,   936,   936,   937,   937,   939,
     938,   940,   940,   940,   940,   940,   941,   941,   942,   942,
     944,   943,   945,   945,   946,   946,   947,   947,   947,   947,
     947,   948,   948,   948,   948,   949,   949,   950,   950,   950,
     950,   950,   950,   950,   950,   950,   950,   950,   950,   950,
     950,   950,   950,   950,   951,   951,   953,   952,   954,   954,
     954,   954,   954,   955,   955,   957,   956,   958,   960,   959,
     961,   962,   962,   963,   963,   963,   964,   964,   965,   965,
     966,   967,   968,   968,   969,   969,   970,   970,   970,   970,
     971,   971,   972,   972,   974,   973,   975,   975,   975,   975,
     975,   975,   975,   976,   976,   978,   977,   979,   981,   980,
     982,   984,   983,   985,   986,   986,   987,   989,   988,   990,
     990,   990,   991,   991,   993,   992,   994,   995,   995,   996,
     996,   996,   997,   997,   998,   998,   999,  1000,  1000,  1000,
    1000,  1000,  1000,  1000,  1001,  1001,  1003,  1002,  1004,  1004,
    1006,  1005,  1007,  1008,  1008,  1008,  1009,  1009,  1009,  1009,
    1011,  1010,  1012,  1013,  1014,  1014,  1015,  1015,  1015,  1015,
    1015,  1015,  1016,  1016,  1017,  1017,  1018,  1018,  1018,  1018,
    1018,  1019,  1020,  1020,  1020,  1020,  1020,  1021,  1022,  1024,
    1023,  1026,  1025,  1027,  1027,  1029,  1028,  1030,  1030,  1031,
    1031,  1033,  1032,  1034,  1034,  1035,  1036,  1036,  1036,  1036,
    1037,  1037,  1038,  1038,  1038,  1038,  1040,  1039,  1041,  1042,
    1041,  1041,  1043,  1043,  1044,  1044,  1045,  1045,  1046,  1046,
    1046,  1046,  1046,  1047,  1047,  1048,  1048,  1049,  1049,  1050,
    1052,  1051,  1053,  1054,  1054,  1055,  1055,  1055,  1055,  1056,
    1056,  1057,  1057,  1058,  1058,  1059,  1060,  1060,  1060,  1061,
    1061,  1062,  1062,  1062,  1063,  1063,  1064,  1064,  1065,  1065,
    1066,  1068,  1067,  1069,  1070,  1072,  1071,  1073,  1074,  1074,
    1076,  1075,  1077,  1078,  1078,  1079,  1079,  1080,  1080,  1081,
    1083,  1082,  1084,  1084,  1085,  1085,  1086,  1086,  1087,  1087,
    1088,  1089,  1089,  1091,  1090,  1092,  1092,  1092,  1092,  1092,
    1092,  1092,  1093,  1093,  1094,  1094,  1095,  1096,  1097,  1097,
    1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,  1099,  1099,
    1100,  1101,  1101,  1102,  1103,  1103,  1104,  1104,  1105,  1107,
    1106,  1109,  1108,  1110,  1110,  1111,  1111,  1112,  1112,  1113,
    1113,  1114,  1114,  1114,  1115,  1115,  1115,  1117,  1116,  1118,
    1119,  1119,  1120,  1120,  1120,  1120,  1121,  1121,  1121,  1121,
    1121,  1121,  1122,  1123,  1123,  1124,  1124,  1126,  1125,  1125,
    1127,  1127,  1127,  1127,  1127,  1128,  1128,  1129,  1129,  1129,
    1129,  1131,  1130,  1132,  1133,  1133,  1134,  1135,  1135,  1136,
    1136,  1137,  1137,  1138,  1138,  1140,  1139,  1141,  1141,  1141,
    1142,  1142,  1143,  1144,  1144,  1146,  1145,  1147,  1147,  1149,
    1148,  1150,  1152,  1151,  1153,  1155,  1154,  1156,  1157,  1157,
    1158,  1158,  1159,  1160,  1160,  1161,  1162,  1162,  1163,  1163,
    1164,  1164,  1165,  1165,  1167,  1166,  1168,  1168,  1168,  1168,
    1168,  1169,  1170,  1170,  1171,  1171,  1171,  1171,  1171,  1172,
    1173,  1173,  1174,  1174,  1174,  1175,  1175,  1175,  1175,  1176,
    1177,  1177,  1178,  1179,  1180,  1180,  1182,  1181,  1183,  1184,
    1184,  1185,  1185,  1185,  1185,  1186,  1186,  1187,  1187,  1187,
    1188,  1188,  1189,  1189,  1189,  1190,  1190,  1191,  1192,  1192,
    1193,  1193,  1194,  1195,  1195,  1196,  1196,  1196,  1197,  1197,
    1198,  1199,  1199,  1200,  1201,  1201,  1201,  1202,  1202,  1203,
    1204,  1204,  1205,  1206,  1206,  1206,  1207,  1207,  1208,  1209,
    1209,  1210,  1211,  1211,  1212,  1212,  1213,  1213,  1214,  1215,
    1215,  1216,  1217,  1217,  1218,  1218,  1219,  1220,  1220,  1221,
    1222,  1222,  1223,  1223,  1224,  1224,  1225,  1226,  1226,  1227,
    1228,  1228,  1229,  1230,  1232,  1231,  1233,  1233,  1233,  1234,
    1234,  1234,  1234,  1234,  1234,  1234,  1234,  1234,  1234,  1234,
    1234,  1234,  1234,  1234,  1234,  1234,  1234,  1234,  1234,  1234,
    1234,  1234,  1234,  1234,  1235,  1235,  1236,  1236,  1237,  1237,
    1238,  1239,  1240,  1240,  1241,  1241,  1241,  1242,  1242,  1242,
    1243,  1243,  1243,  1244,  1244,  1245,  1245,  1245,  1246,  1246,
    1247,  1247,  1247,  1247,  1247,  1247,  1248,  1248,  1249,  1250,
    1251,  1252,  1252,  1253,  1254,  1255,  1255,  1256,  1257,  1257,
    1258,  1259,  1259,  1259,  1260,  1261,  1261,  1262,  1263,  1264,
    1264,  1265,  1266,  1266,  1267,  1267,  1268,  1269,  1269,  1270,
    1270,  1270,  1271,  1271,  1272,  1272,  1273,  1273,  1274,  1274,
    1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1276,
    1276,  1277,  1277,  1277,  1278,  1278,  1278,  1278,  1278,  1278,
    1278,  1279,  1279,  1280,  1280,  1281,  1282,  1283,  1283,  1283,
    1284,  1284,  1285,  1285,  1286,  1286,  1286,  1287,  1287,  1287,
    1288,  1288,  1289,  1289,  1290,  1290,  1290,  1291,  1292,  1293,
    1293,  1294,  1295,  1296,  1297,  1298,  1298,  1298,  1298,  1299,
    1300,  1300,  1300,  1300,  1301,  1301,  1302,  1303,  1303,  1304,
    1305,  1306,  1307,  1307,  1307,  1307,  1307,  1307,  1307,  1308,
    1308,  1309,  1309,  1310,  1310,  1310,  1310,  1310,  1310,  1310,
    1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,
    1311,  1311,  1312,  1312,  1313,  1313,  1313,  1314,  1314,  1314,
    1314,  1315,  1315,  1315,  1316,  1316,  1316,  1317,  1317,  1317,
    1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,  1322,  1323,
    1323,  1324,  1324,  1325,  1325,  1326,  1326,  1327,  1327,  1328,
    1328,  1328,  1329,  1329,  1330,  1330,  1330,  1331,  1331,  1332,
    1332,  1333,  1333,  1333,  1333,  1333,  1333,  1333,  1333,  1334,
    1334,  1335,  1335,  1335,  1336,  1336,  1336,  1336,  1336,  1336,
    1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,
    1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,
    1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,
    1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,
    1336,  1336,  1336,  1337,  1337,  1337,  1337,  1337,  1337,  1337,
    1337,  1337,  1337,  1337,  1337,  1337,  1337,  1337,  1337,  1337,
    1337,  1337,  1337,  1338,  1338,  1339,  1339,  1340,  1340,  1341,
    1341,  1342,  1342,  1342,  1343,  1343,  1344,  1344,  1345,  1345,
    1346,  1346,  1347,  1347,  1348,  1348,  1349,  1349,  1350,  1350,
    1351,  1351,  1352,  1352,  1353,  1353,  1354,  1354,  1355,  1355,
    1356,  1356,  1357,  1357,  1358,  1358,  1358,  1359,  1359,  1360,
    1360,  1361,  1361,  1362,  1362,  1363,  1363,  1363,  1364,  1364,
    1365,  1365,  1365,  1366,  1366,  1366,  1367,  1367,  1367,  1368,
    1368,  1369,  1369,  1370,  1370,  1371,  1371,  1371,  1372,  1372,
    1373,  1373,  1374,  1374,  1374,  1374,  1375,  1375,  1376,  1376,
    1377,  1377,  1378,  1378,  1379,  1379,  1379,  1380,  1380,  1381,
    1381,  1382,  1382,  1383,  1383,  1383,  1384,  1384,  1385,  1385,
    1386,  1386,  1387,  1387,  1388,  1388,  1389,  1389,  1390,  1390,
    1391,  1391,  1391,  1392,  1392,  1393,  1393,  1394,  1394,  1395,
    1395,  1396,  1396,  1397,  1397,  1398,  1398,  1399,  1399,  1400,
    1400,  1401,  1401,  1402,  1402,  1403,  1403,  1404,  1404,  1405,
    1405,  1406,  1406,  1407,  1407,  1408,  1408,  1409,  1409,  1410,
    1410,  1410,  1411,  1411,  1412,  1412,  1413,  1413,  1414,  1414,
    1415,  1415,  1416,  1416,  1417,  1417,  1418,  1418
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     1,     1,
       0,     2,     4,     4,     0,     1,     1,     2,     3,     3,
       3,     0,     3,     3,     0,     0,     8,     0,     6,     1,
       1,     1,     1,     0,     2,     0,     3,     1,     1,     1,
       1,     2,     2,     1,     1,     3,     0,     3,     5,     0,
       3,     0,     1,     1,     2,     2,     0,     4,     0,     3,
       0,     3,     0,     4,     0,     2,     3,     2,     1,     2,
       1,     1,     1,     1,     5,     3,     3,     4,     1,     1,
       1,     1,     1,     2,     0,     0,     4,     0,     2,     3,
       1,     2,     3,     3,     3,     3,     1,     2,     0,     2,
       0,     1,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       2,     3,     3,     1,     0,     1,     1,     3,     4,     0,
       5,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     0,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     2,     3,     1,     2,     3,
       1,     2,     1,     2,     4,     1,     2,     1,     3,     4,
       5,     0,     3,     3,     5,     3,     4,     3,     3,     5,
       0,     3,     0,     2,     0,     2,     0,     2,     0,     6,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     5,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     0,
       1,     1,     1,     1,     0,     1,     1,     4,     1,     1,
       1,     7,     0,     4,     3,     3,     1,     4,     0,     1,
       1,     0,     5,     2,     2,     1,     0,     4,     5,     2,
       3,     1,     1,     3,     1,     2,     4,     4,     4,     1,
       3,     4,     4,     3,     1,     1,     3,     2,     2,     2,
       0,     2,     3,     1,     2,     1,     1,     5,     0,     1,
       1,     1,     0,     6,     1,     2,     2,     0,     2,     0,
       9,     0,     3,     0,     3,     0,     2,     2,     0,     5,
       3,     1,     1,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     1,
       4,     6,     9,     0,     3,     0,     2,     0,     2,     3,
       5,     5,     1,     1,     1,     1,     3,     5,     0,     2,
       1,     1,     1,     4,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     2,     2,     2,     2,
       1,     2,     0,     0,     5,     0,     0,     2,     2,     3,
       1,     1,     1,     0,     4,     3,     2,     0,     1,     1,
       1,     0,     2,     1,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     2,     0,     4,     5,     0,     5,     2,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     0,     2,     0,     1,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     6,     0,     2,     7,
       8,     0,     2,     0,     2,     0,     3,     0,     3,     0,
       1,     1,     0,     5,     1,     1,     0,     3,     1,     2,
       1,     2,     2,     3,     1,     0,     5,     1,     2,     1,
       3,     0,     4,     2,     2,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     0,     2,     0,     6,     0,     2,
       2,     2,     3,     1,     1,     2,     2,     1,     2,     4,
       1,     4,     2,     0,     2,     1,     1,     1,     1,     1,
       3,     4,     4,     4,     3,     0,     2,     0,     5,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       2,     1,     2,     1,     1,     0,     2,     2,     0,     2,
       4,     4,     0,     3,     1,     1,     3,     6,     2,     3,
       2,     2,     3,     2,     1,     2,     2,     1,     1,     1,
       2,     2,     1,     4,     2,     3,     0,     0,     5,     0,
       1,     2,     3,     1,     0,     4,     3,     0,     2,     2,
       2,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       1,     5,     5,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       3,     2,     0,     0,     0,     9,     0,     4,     0,     0,
       3,     0,     3,     1,     2,     4,     0,     2,     2,     0,
       3,     3,     4,     4,     3,     0,     1,     0,     2,     2,
       0,     0,     7,     0,     2,     1,     1,     2,     1,     1,
       0,     6,     0,     2,     2,     1,     0,     1,     0,     0,
       3,     0,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     4,     0,     4,     3,
       3,     4,     3,     4,     3,     3,     4,     4,     3,     4,
       3,     4,     5,     3,     4,     3,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     2,     3,     1,     2,
       2,     2,     2,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     4,     3,     1,     2,     1,     1,
       3,     3,     3,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     0,     4,     4,     5,     6,
       0,     2,     0,     1,     0,     3,     3,     4,     0,     2,
       0,     3,     1,     2,     4,     0,     2,     0,     4,     0,
       6,     0,     1,     1,     1,     1,     1,     0,     0,     3,
       1,     2,     2,     3,     0,     2,     2,     2,     0,     3,
       2,     2,     4,     1,     1,     1,     1,     0,     2,     2,
       0,     1,     2,     2,     0,     1,     2,     0,     1,     0,
       3,     1,     2,     1,     1,     0,     3,     2,     3,     0,
       1,     3,     3,     2,     0,     4,     4,     0,     1,     1,
       1,     0,     4,     4,     2,     1,     2,     0,     1,     0,
       4,     3,     3,     3,     3,     2,     2,     1,     1,     2,
       0,     3,     1,     1,     1,     2,     1,     2,     1,     1,
       2,     2,     2,     2,     2,     1,     1,     1,     2,     2,
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
       1,     4,     0,     1,     1,     2,     2,     3,     3,     0,
       3,     0,     3,     3,     4,     0,     4,     4,     6,     0,
       1,     0,     3,     1,     2,     5,     1,     1,     1,     1,
       0,     3,     0,     3,     2,     1,     0,     3,     2,     0,
       4,     2,     0,     1,     1,     1,     1,     3,     0,     2,
       1,     3,     3,     0,     3,     1,     1,     1,     3,     7,
       0,     4,     7,     0,     2,     0,     1,     2,     1,     2,
       3,     3,     1,     0,     1,     1,     4,     4,     2,     0,
       1,     1,     3,     2,     0,     3,     1,     1,     0,     1,
       1,     0,     3,     2,     1,     0,     4,     4,     0,     1,
       0,     4,     5,     0,     1,     2,     3,     0,     1,     1,
       0,     4,     4,     6,     0,     2,     0,     2,     1,     2,
       3,     0,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     3,
       4,     1,     2,     3,     1,     2,     3,     3,     4,     0,
       3,     0,     7,     0,     5,     0,     2,     0,     2,     0,
       3,     0,     2,     4,     0,     2,     4,     0,     4,     4,
       0,     3,     0,     4,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     2,     1,     0,     1,     0,     4,     2,
       0,     2,     1,     4,     4,     0,     1,     1,     1,     1,
       1,     0,     4,     5,     1,     2,     2,     0,     3,     1,
       1,     0,     4,     0,     1,     0,     4,     4,     6,     6,
       0,     1,     2,     0,     1,     0,     3,     1,     2,     0,
       3,     5,     0,     3,     2,     0,     4,     6,     0,     3,
       1,     3,     2,     2,     2,     3,     0,     3,     0,     3,
       0,     3,     0,     1,     0,     3,     1,     1,     1,     1,
       1,     7,     0,     1,     1,     1,     1,     1,     1,     4,
       1,     2,     1,     2,     3,     0,     1,     2,     1,     3,
       1,     1,     4,     1,     1,     1,     0,     4,     6,     0,
       2,     0,     4,     3,     3,     1,     1,     0,     1,     1,
       0,     1,     0,     2,     2,     0,     1,     2,     1,     1,
       0,     1,     2,     1,     1,     0,     2,     2,     0,     1,
       2,     0,     1,     2,     0,     2,     2,     0,     1,     2,
       0,     1,     2,     0,     2,     2,     0,     1,     2,     0,
       1,     2,     2,     2,     2,     2,     0,     1,     2,     0,
       1,     2,     2,     2,     0,     1,     2,     0,     1,     2,
       0,     1,     2,     2,     0,     1,     2,     0,     1,     2,
       0,     2,     1,     1,     0,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     1,     1,     3,     3,     1,
       3,     3,     1,     3,     1,     2,     2,     1,     3,     1,
       1,     3,     1,     3,     1,     3,     1,     2,     2,     1,
       1,     1,     2,     1,     1,     1,     2,     1,     0,     2,
       1,     1,     1,     3,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     4,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     3,     2,     2,     1,     1,
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
       1,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     2,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     1,
       0,     1,     1,     0,     1,     1,     0,     2,     2,     0,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     1,
       0,     1,     0,     2,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     1,     0,     1,     0,
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
#line 2208 "parser.y" /* yacc.c:1646  */
    {
	clear_initial_values ();
	current_program = NULL;
	defined_prog_list = NULL;
	cobc_cs_check = 0;
	prog_end = 0;
	depth = 0;
	main_flag_set = 0;
	current_program = cb_build_program (NULL, 0);
	cb_build_registers ();
  }
#line 7208 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 2220 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
	if (depth > 1) {
		cb_error (_("multiple PROGRAM-ID's without matching END PROGRAM"));
	}
	if (cobc_flag_main && !main_flag_set) {
		cb_error (_("executable requested but no program found"));
	}
	if (errorcount > 0) {
		YYABORT;
	}
	if (!current_program->entry_list) {
		emit_entry (current_program->program_id, 0, NULL);
	}
  }
#line 7231 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 2256 "parser.y" /* yacc.c:1646  */
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
#line 7255 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 2307 "parser.y" /* yacc.c:1646  */
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[-1]), CB_PROGRAM_TYPE);
  }
#line 7264 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 2315 "parser.y" /* yacc.c:1646  */
    {
	  clean_up_program ((yyvsp[-1]), CB_FUNCTION_TYPE);
  }
#line 7272 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 2338 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 7280 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 2342 "parser.y" /* yacc.c:1646  */
    {
	if (setup_program ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}

	setup_prototype ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE, 1);
  }
#line 7292 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 2350 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 7301 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 2358 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 7309 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 2362 "parser.y" /* yacc.c:1646  */
    {
	if (setup_program ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	setup_prototype ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE, 1);
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 7322 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 2374 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
	}
	/*
	  The program name is a key part of defining the current_program, so we
	  mustn't lose it (unlike in undefined_word).
	*/
	(yyval) = (yyvsp[0]);
  }
#line 7337 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 2393 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7343 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 2394 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7349 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 2403 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7362 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 2412 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7375 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 2422 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING (_("CALL prototypes"));
  }
#line 7383 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 2434 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 7391 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 2438 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 7399 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 2454 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 7407 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 2471 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 7419 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 2485 "parser.y" /* yacc.c:1646  */
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("phrases in non-standard order"));
	}
  }
#line 7429 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 2497 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
#line 7439 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 2512 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 7451 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 2525 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 7461 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2554 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 7469 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2562 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 7477 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2569 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 7485 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 2576 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 7497 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 2587 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7505 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 2591 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7513 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 2595 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7521 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2599 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7529 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 2613 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 7538 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2618 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 7546 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 2626 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7554 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2638 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 7562 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 2642 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) != cb_error_node) {
		setup_prototype ((yyvsp[-1]), (yyvsp[0]), CB_FUNCTION_TYPE, 0);
	}
  }
#line 7572 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2649 "parser.y" /* yacc.c:1646  */
    {
	  if ((yyvsp[-1]) != cb_error_node
	      && cb_verify (cb_program_prototypes, _("PROGRAM phrase"))) {
		setup_prototype ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE, 0);
	}
  }
#line 7583 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 2659 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7592 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2664 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7601 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 2675 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 7615 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2720 "parser.y" /* yacc.c:1646  */
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
			cb_error_x ((yyvsp[0]), _("invalid system-name '%s'"), system_name);
		}
	}
  }
#line 7643 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 2748 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("invalid %s clause"), "");
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 7657 "parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 2759 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (save_tree, _("invalid %s clause"), "SPECIAL NAMES");
		} else if (CB_VALID_TREE ((yyvsp[0]))) {
			CB_SYSTEM_NAME(save_tree)->value = (yyvsp[-2]);
			cb_define ((yyvsp[0]), save_tree);
			CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
					(yyvsp[0]), save_tree);
		}
	}
  }
#line 7674 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2772 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 7686 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2788 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 7694 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2795 "parser.y" /* yacc.c:1646  */
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
#line 7713 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2810 "parser.y" /* yacc.c:1646  */
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
#line 7732 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2830 "parser.y" /* yacc.c:1646  */
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
#line 7749 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2843 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 7761 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2854 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 7771 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2860 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7781 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2866 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7791 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2872 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 7801 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2878 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7811 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2884 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 7822 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2894 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 7830 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2898 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7838 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2905 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7846 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2909 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 7854 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2913 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 7862 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2917 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 7870 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2924 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7878 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2928 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 7886 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2934 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7892 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2935 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7898 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2936 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7904 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2937 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 7910 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2938 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 7916 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2939 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 7922 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2943 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7928 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2944 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7934 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2952 "parser.y" /* yacc.c:1646  */
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
#line 7949 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2966 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7957 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2970 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7965 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2978 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7973 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2985 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7981 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2989 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7993 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 3000 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l1;
	cb_tree		l2;

	if (cb_list_length ((yyvsp[-2])) != cb_list_length ((yyvsp[0]))) {
		cb_error (_("invalid %s clause"), "SYMBOLIC");
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
#line 8014 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 3020 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 8026 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 3028 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 8038 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 3038 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 8044 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 3039 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 8050 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 3046 "parser.y" /* yacc.c:1646  */
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
#line 8072 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 3066 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 8078 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 3067 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 8084 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 3072 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8092 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 3076 "parser.y" /* yacc.c:1646  */
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
#line 8112 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 3097 "parser.y" /* yacc.c:1646  */
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
#line 8134 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 3120 "parser.y" /* yacc.c:1646  */
    {
	unsigned char	*s = CB_LITERAL ((yyvsp[-1]))->data;
	unsigned int	error_ind = 0;
	unsigned int	char_seen = 0;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURRENCY", SYN_CLAUSE_1, &check_duplicate);
		if (strcmp("$", (const char *)s) != 0) {
			if ((yyvsp[0]) && CB_LITERAL ((yyvsp[-1]))->size != 1) {
				CB_PENDING_X ((yyvsp[-1]), _("CURRENCY SIGN longer than one character"));
				error_ind = 1;
			}
			while (*s) {
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
				case '+':
				case '-':
				case ',':
				case '.':
				case '*':
					error_ind = 2;
					break;
				case ' ':
					break;
				default:
					char_seen = 1;
					break;
				}
				s++;
			}
			if (!char_seen) {
				error_ind = 2;
			}
		} else {
			if (error_ind > 1) {;
				CB_PENDING_X ((yyvsp[-1]), _("CURRENCY SIGN other than '$'"));
			}
		}
		switch (error_ind) {
		case 0:
		case 1:
			/* FIXME: currency sign/symbol are currently mixed in cobc and libcob */
			/* current_program->currency_sign = CB_LITERAL ($4); */
			break;
		default:
			cb_error_x ((yyvsp[-1]), _("invalid CURRENCY SIGN '%s'"), (char*)CB_LITERAL ((yyvsp[-1]))->data);
			break;
		}
		if ((yyvsp[0])) {
			set_currency_picture_symbol ((yyvsp[0]));
		} else {
			set_currency_picture_symbol ((yyvsp[-1]));
		}
	}
  }
#line 8208 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 3194 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8216 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 3198 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8224 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 3207 "parser.y" /* yacc.c:1646  */
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
#line 8241 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 3226 "parser.y" /* yacc.c:1646  */
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
#line 8256 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 3242 "parser.y" /* yacc.c:1646  */
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
#line 8272 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 3260 "parser.y" /* yacc.c:1646  */
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
#line 8288 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 3278 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("SCREEN CONTROL", SYN_CLAUSE_5, &check_duplicate);
		CB_PENDING ("SCREEN CONTROL");
	}
  }
#line 8304 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 3295 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("EVENT STATUS", SYN_CLAUSE_6, &check_duplicate);
		CB_PENDING ("EVENT STATUS");
	}
  }
#line 8320 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 3316 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 8328 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 3323 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 8337 "parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 3331 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 8347 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 3340 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 8357 "parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 3355 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_FILE_CONTROL, 0);
	check_duplicate = 0;
	if (CB_VALID_TREE ((yyvsp[0]))) {
		/* Build new file */
		current_file = build_file ((yyvsp[0]));
		current_file->optional = CB_INTEGER ((yyvsp[-1]))->val;

		/* Add file to current program list */
		CB_ADD_TO_CHAIN (CB_TREE (current_file),
				 current_program->file_list);
	} else {
		current_file = NULL;
		if (current_program->file_list) {
			current_program->file_list
				= CB_CHAIN (current_program->file_list);
		}
	}
  }
#line 8383 "parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 3377 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-3]))) {
		validate_file (current_file, (yyvsp[-3]));
	}
  }
#line 8393 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 3409 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 8403 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 3415 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 8417 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 3425 "parser.y" /* yacc.c:1646  */
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
#line 8434 "parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 3438 "parser.y" /* yacc.c:1646  */
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
#line 8451 "parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 3451 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		/* RM/COBOL always expects an assignment name here - we ignore this
		   for PRINTER + PRINTER-1 as ACUCOBOL allows this for using as alias */
		current_file->flag_ext_assign = 0;
		if ((yyvsp[-1]) == cb_int0) {
			current_file->assign =
				cb_build_alphanumeric_literal ("PRINTER",	(size_t)7);
		} else if ((yyvsp[-1]) == cb_int1) {
			current_file->assign =
				cb_build_alphanumeric_literal ("PRINTER-1",	(size_t)9);
		} else {
			current_file->assign =
				cb_build_alphanumeric_literal ("LPT1",	(size_t)4);
		}

	}
  }
#line 8479 "parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 3477 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8485 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 3478 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8491 "parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 3479 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int4; }
#line 8497 "parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 3491 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 8505 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 3498 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 8513 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 3511 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8521 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 3523 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 8530 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3530 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 8536 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3531 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 8542 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3532 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 8548 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 3540 "parser.y" /* yacc.c:1646  */
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
#line 8573 "parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 3563 "parser.y" /* yacc.c:1646  */
    { }
#line 8579 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 3566 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN ALL");
  }
#line 8587 "parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 3571 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 8595 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 3581 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	CB_PENDING ("COLLATING SEQUENCE");
  }
#line 8604 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 3589 "parser.y" /* yacc.c:1646  */
    {
	  if (CB_ALPHABET_NAME_P (cb_ref ((yyvsp[0])))) {
		  (yyval) = (yyvsp[0]);
	  } else {
		  cb_error_x ((yyvsp[0]), _("'%s' is not an alphabet-name"),
			      cb_name ((yyvsp[0])));
		  (yyval) = cb_error_node;
	  }
  }
#line 8618 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 3604 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 8627 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 3619 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 8635 "parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 3627 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 8644 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 3632 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 8653 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 3637 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 8662 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 3646 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 8670 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 3650 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	CB_PENDING ("WITH ROLLBACK");
  }
#line 8679 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 3666 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 8688 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3671 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 8697 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3676 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 8706 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3681 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 8715 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3692 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 8724 "parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 3703 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 8732 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 3713 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8741 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3720 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8747 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 3721 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8753 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3722 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8759 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 3729 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8768 "parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 3740 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 8776 "parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 3754 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 8785 "parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 3761 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8791 "parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 3762 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 8797 "parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 3763 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8803 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 3772 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8811 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3791 "parser.y" /* yacc.c:1646  */
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
#line 8840 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3818 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8846 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3819 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8852 "parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 3820 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8858 "parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 3821 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8864 "parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 3828 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 8873 "parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 3833 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 8885 "parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 3862 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 8893 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3870 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 8901 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3877 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 8909 "parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 3886 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 8919 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3900 "parser.y" /* yacc.c:1646  */
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
#line 8937 "parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 3919 "parser.y" /* yacc.c:1646  */
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
#line 8957 "parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 3936 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8965 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 3943 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8973 "parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 3947 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8981 "parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 3958 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("file cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8995 "parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 3968 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_2, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_external) {
		cb_error (_("file cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		current_file->flag_global = 1;
		current_program->flag_file_global = 1;
	}
  }
#line 9014 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3998 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 9023 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 4011 "parser.y" /* yacc.c:1646  */
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
#line 9047 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 4031 "parser.y" /* yacc.c:1646  */
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
#line 9085 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 4066 "parser.y" /* yacc.c:1646  */
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
#line 9117 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 4097 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 9125 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 4103 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9131 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 4104 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9137 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 4108 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9143 "parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 4109 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9149 "parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 4117 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 9158 "parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 4128 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 9167 "parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 4133 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 9179 "parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 4156 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 9188 "parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 4168 "parser.y" /* yacc.c:1646  */
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
#line 9207 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 4196 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 9215 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 4203 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 9223 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 4210 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 9231 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 4219 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 9241 "parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 4232 "parser.y" /* yacc.c:1646  */
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("RECORDING MODE U or S can only be used with RECORD SEQUENTIAL files"));
	}
  }
#line 9251 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 4248 "parser.y" /* yacc.c:1646  */
    {
	struct cb_alphabet_name	*al;

	check_repeated ("CODE SET", SYN_CLAUSE_10, &check_duplicate);

	al = CB_ALPHABET_NAME (cb_ref ((yyvsp[-1])));
	switch (al->alphabet_type) {
#ifdef	COB_EBCDIC_MACHINE
	case CB_ALPHABET_ASCII:
#else
	case CB_ALPHABET_EBCDIC:
#endif
	case CB_ALPHABET_CUSTOM:
		current_file->code_set = al;
		break;
	default:
		if (warningopt && CB_VALID_TREE ((yyvsp[-1]))) {
			cb_warning_x ((yyvsp[-1]), _("ignoring CODE-SET '%s'"),
				      cb_name ((yyvsp[-1])));
		}
		break;
	}

	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("CODE-SET clause invalid for file type"));
	}

	if (warningopt) {
		CB_PENDING ("CODE-SET");
	}
  }
#line 9288 "parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 4284 "parser.y" /* yacc.c:1646  */
    {
	  if (warningopt) {
		  CB_PENDING ("FOR sub-records");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[0]));
  }
#line 9300 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 4297 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REPORT", SYN_CLAUSE_11, &check_duplicate);
	CB_PENDING("REPORT WRITER");
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = (yyvsp[0]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	}
  }
#line 9316 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 4317 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9330 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 4327 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9343 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 4342 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 9353 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 4348 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 9363 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 4357 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9371 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 4360 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 9381 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 4366 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 9394 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 4386 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9404 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 4392 "parser.y" /* yacc.c:1646  */
    {
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
#line 9417 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 4401 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9431 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 4414 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9439 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 4421 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9449 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 4427 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9459 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 4437 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 9469 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 4446 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 9477 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 4450 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 9490 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 4461 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9496 "parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 4462 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9502 "parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 4463 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9508 "parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 4464 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9514 "parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 4469 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9522 "parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 4473 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 9530 "parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 4477 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 9538 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 4481 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 9546 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 4485 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9554 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 4489 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 9562 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 4493 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 9570 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 4497 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 9578 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 4501 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 9586 "parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 4505 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 9594 "parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 4509 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9602 "parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 4513 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 9610 "parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 4517 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9622 "parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4549 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-4]), (yyvsp[-3]))) {
		YYERROR;
	}

	if (cb_ref ((yyvsp[-1])) != cb_error_node) {
		error_if_invalid_level_for_renames ((yyvsp[-1]));
		current_field->redefines = CB_FIELD (cb_ref ((yyvsp[-1])));
	}

	if ((yyvsp[0])) {
		error_if_invalid_level_for_renames ((yyvsp[0]));
		current_field->rename_thru = CB_FIELD (cb_ref ((yyvsp[0])));
	} else {
		/* If there is no THRU clause, RENAMES acts like REDEFINES. */
		current_field->pic = current_field->redefines->pic;
	}

	cb_validate_renames_item (current_field);
  }
#line 9647 "parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4573 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9655 "parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4577 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]) == cb_error_node ? NULL : (yyvsp[0]);
  }
#line 9663 "parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4584 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9673 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4590 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_88_item (current_field);
  }
#line 9681 "parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4597 "parser.y" /* yacc.c:1646  */
    {
	cb_tree x;
	int	level;

	cobc_cs_check = 0;
	level = cb_get_level ((yyvsp[-4]));
	/* Free tree associated with level number */
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
#line 9708 "parser.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4620 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9718 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4626 "parser.y" /* yacc.c:1646  */
    {
	/* Reset to last non-78 item */
	current_field = cb_validate_78_item (current_field, 0);
  }
#line 9727 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4634 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9735 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4638 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("CONSTANT FROM");
	(yyval) = NULL;
  }
#line 9744 "parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4646 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 9753 "parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 4652 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 9762 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4679 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REDEFINES", SYN_CLAUSE_1, &check_pic_duplicate);
	if ((yyvsp[-2]) != NULL) {
		if (cb_relaxed_syntax_checks) {
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
#line 9784 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4703 "parser.y" /* yacc.c:1646  */
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
#line 9812 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4730 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 9820 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4734 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 9828 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4747 "parser.y" /* yacc.c:1646  */
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
#line 9851 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4772 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 9860 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4788 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
#line 9868 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4792 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
#line 9876 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4796 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FLOAT);
  }
#line 9884 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4800 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_DOUBLE);
  }
#line 9892 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4804 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_PACKED);
  }
#line 9900 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4808 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
#line 9908 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4812 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_COMP_5);
  }
#line 9916 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4816 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_COMP_6);
  }
#line 9924 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4820 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_COMP_X);
  }
#line 9932 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4824 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_DISPLAY);
  }
#line 9940 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4828 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_INDEX);
  }
#line 9948 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4832 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_PACKED);
  }
#line 9956 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4836 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9965 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4841 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9974 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4846 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9982 "parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4850 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9990 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4854 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 10002 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4862 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 10010 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4866 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 10018 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4870 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 10030 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4878 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 10038 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4882 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 10046 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4886 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 10054 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4890 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 10062 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4894 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 10070 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4898 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 10078 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4902 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 10086 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4906 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 10094 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4910 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 10106 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4918 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 10118 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4926 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FP_BIN32);
  }
#line 10126 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4930 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FP_BIN64);
  }
#line 10134 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4934 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FP_BIN128);
  }
#line 10142 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4938 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FP_DEC64);
  }
#line 10150 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4942 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FP_DEC128);
  }
#line 10158 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4946 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	CB_UNFINISHED ("USAGE NATIONAL");
  }
#line 10167 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4966 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 10178 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4973 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 10189 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4987 "parser.y" /* yacc.c:1646  */
    {
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max ((yyvsp[-4]), (yyvsp[-3]));
  }
#line 10199 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4996 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 10207 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 5006 "parser.y" /* yacc.c:1646  */
    {
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max ((yyvsp[-5]), (yyvsp[-4]));
  }
#line 10217 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 5013 "parser.y" /* yacc.c:1646  */
    {
	setup_occurs ();
	current_field->occurs_min = (yyvsp[-4]) ? cb_get_int ((yyvsp[-4])) : 0;
	if ((yyvsp[-3])) {
		current_field->occurs_max = cb_get_int ((yyvsp[-3]));
		if (current_field->occurs_max <= current_field->occurs_min) {
			cb_error (_("OCCURS TO must be greater than OCCURS FROM"));
		}
	} else {
		current_field->occurs_max = 0;
	}
	CB_PENDING("OCCURS DYNAMIC");
  }
#line 10235 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 5029 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10241 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 5030 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10247 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 5034 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10253 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 5035 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10259 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 5040 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 10267 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 5047 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 10276 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 5055 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 10284 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 5062 "parser.y" /* yacc.c:1646  */
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
#line 10309 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 5085 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10315 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 5088 "parser.y" /* yacc.c:1646  */
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
#line 10332 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 5103 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 10338 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 5104 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 10344 "parser.c" /* yacc.c:1646  */
    break;

  case 507:
#line 5109 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 10352 "parser.c" /* yacc.c:1646  */
    break;

  case 508:
#line 5115 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10358 "parser.c" /* yacc.c:1646  */
    break;

  case 509:
#line 5117 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10364 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 5122 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 10373 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 5133 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 10382 "parser.c" /* yacc.c:1646  */
    break;

  case 512:
#line 5144 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 10391 "parser.c" /* yacc.c:1646  */
    break;

  case 513:
#line 5155 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 10400 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 5166 "parser.y" /* yacc.c:1646  */
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
#line 10427 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 5194 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 10436 "parser.c" /* yacc.c:1646  */
    break;

  case 517:
#line 5202 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10442 "parser.c" /* yacc.c:1646  */
    break;

  case 518:
#line 5203 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10448 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5207 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10454 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5208 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 10460 "parser.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5213 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 10471 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5225 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 10484 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5234 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY NUMERIC");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 10498 "parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5249 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 10511 "parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 5258 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10521 "parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5270 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 10531 "parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5276 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10541 "parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5287 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 10551 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5303 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 10564 "parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5318 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 10572 "parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5325 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 10581 "parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5330 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 10589 "parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5341 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 10597 "parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5360 "parser.y" /* yacc.c:1646  */
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
		cb_error (_("invalid %s clause"), "PAGE");
	}
  }
#line 10634 "parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5396 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 10642 "parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5400 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 10651 "parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5405 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 10659 "parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5425 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 10667 "parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5432 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 10675 "parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5439 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 10683 "parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5446 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 10691 "parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5453 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 10699 "parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 5464 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 10707 "parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 5495 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 10715 "parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5521 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10723 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5528 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 10731 "parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5544 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 10739 "parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5555 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 10747 "parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5567 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 10755 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5600 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 10763 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5607 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 10771 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5614 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10779 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5623 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10790 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5630 "parser.y" /* yacc.c:1646  */
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
#line 10806 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5655 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = cb_build_field_tree ((yyvsp[-1]), (yyvsp[0]), current_field, current_storage,
				 current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-1]));
	check_pic_duplicate = 0;
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	}

	current_field = CB_FIELD (x);
	if (current_field->parent) {
		current_field->screen_foreg = current_field->parent->screen_foreg;
		current_field->screen_backg = current_field->parent->screen_backg;
		current_field->screen_prompt = current_field->parent->screen_prompt;
	}
  }
#line 10830 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5675 "parser.y" /* yacc.c:1646  */
    {
	int	flags;

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

		flags = zero_conflicting_flags (current_field->screen_flag,
						flags);

		current_field->screen_flag |= flags;
	}

	if (current_field->screen_flag & COB_SCREEN_INITIAL) {
		if (!(current_field->screen_flag & COB_SCREEN_INPUT)) {
			cb_error (_("INITIAL specified on non-input field"));
		}
	}
	if (!qualifier) {
		current_field->flag_filler = 1;
	}

	if (likely (current_field)) {
		if (!description_field) {
			description_field = current_field;
		}
		if (current_field->flag_occurs
		    && !has_relative_pos (current_field)) {
			cb_error (_("relative LINE/COLUMN clause required with OCCURS"));
		}
	}
  }
#line 10874 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5715 "parser.y" /* yacc.c:1646  */
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
#line 10894 "parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 5738 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
				       "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10903 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5743 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				       "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10912 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5748 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10920 "parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 5752 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10928 "parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 5756 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
				       "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10937 "parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 5761 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				       "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10946 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5766 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				       "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10955 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5771 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				       "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10964 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5776 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10972 "parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 5780 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10980 "parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 5784 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	CB_PENDING ("OVERLINE");
  }
#line 10989 "parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 5789 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("GRID", COB_SCREEN_GRID);
	CB_PENDING ("GRID");
  }
#line 10998 "parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 5794 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	CB_PENDING ("LEFTLINE");
  }
#line 11007 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5799 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("AUTO", COB_SCREEN_AUTO,
				       "TAB", COB_SCREEN_TAB);
  }
#line 11016 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5804 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("TAB", COB_SCREEN_TAB,
				       "AUTO", COB_SCREEN_AUTO);
  }
#line 11025 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5809 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("SECURE", COB_SCREEN_SECURE,
				       "NO-ECHO", COB_SCREEN_NO_ECHO);
  }
#line 11034 "parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 5814 "parser.y" /* yacc.c:1646  */
    {
	if (cb_no_echo_means_secure) {
		set_screen_attr ("SECURE", COB_SCREEN_SECURE);
	} else {
		set_screen_attr_with_conflict ("NO-ECHO", COB_SCREEN_NO_ECHO,
					       "SECURE", COB_SCREEN_SECURE);
	}
  }
#line 11047 "parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 5823 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 11055 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5827 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 11063 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5831 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 11072 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5836 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 11080 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5840 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 11088 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5844 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 11097 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5849 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 11106 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5854 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 11115 "parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5859 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 11124 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5872 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 11137 "parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5881 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 11146 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5886 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 11158 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5917 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 11166 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5921 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 11174 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5925 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 11182 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5932 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 11190 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5936 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 11198 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5940 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 11206 "parser.c" /* yacc.c:1646  */
    break;

  case 690:
#line 5948 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 11218 "parser.c" /* yacc.c:1646  */
    break;

  case 691:
#line 5959 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 11226 "parser.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5968 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 11240 "parser.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5978 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main && !current_program->flag_chained && (yyvsp[-4])) {
		cb_error (_("executable program requested but PROCEDURE/ENTRY has USING clause"));
	}
	/* Main entry point */
	emit_entry (current_program->program_id, 0, (yyvsp[-4]));
	current_program->num_proc_params = cb_list_length ((yyvsp[-4]));
	if (current_program->source_name) {
		emit_entry (current_program->source_name, 1, (yyvsp[-4]));
	}
  }
#line 11256 "parser.c" /* yacc.c:1646  */
    break;

  case 695:
#line 5990 "parser.y" /* yacc.c:1646  */
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
#line 11275 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 6005 "parser.y" /* yacc.c:1646  */
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
#line 11308 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 6038 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11316 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 6042 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11325 "parser.c" /* yacc.c:1646  */
    break;

  case 700:
#line 6047 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11337 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 6055 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 11350 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 6064 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11362 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 6074 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11368 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 6076 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11374 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 6081 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	struct cb_field	*f;

	x = cb_build_identifier ((yyvsp[0]), 0);
	if ((yyvsp[-1]) == cb_int1 && CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
		f = CB_FIELD (cb_ref (x));
		f->flag_is_pdiv_opt = 1;
	}

	if (call_mode == CB_CALL_BY_VALUE
	    && CB_REFERENCE_P ((yyvsp[0]))
	    && CB_FIELD (cb_ref ((yyvsp[0])))->flag_any_length) {
		cb_error_x ((yyvsp[0]), _("ANY LENGTH items may only be BY REFERENCE formal parameters"));
	}

	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), x);
	CB_SIZES ((yyval)) = size_mode;
  }
#line 11398 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 6105 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11406 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 6109 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		CB_UNFINISHED (_("parameters passed BY VALUE"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11419 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 6122 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 11431 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 6130 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 11443 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 6138 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 11455 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 6146 "parser.y" /* yacc.c:1646  */
    {
	unsigned char *s = CB_LITERAL ((yyvsp[0]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[0]))->size != 1) {
		cb_error_x ((yyvsp[0]), _("invalid value for SIZE"));
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
			cb_error_x ((yyvsp[0]), _("invalid value for SIZE"));
			break;
		}
	}
  }
#line 11488 "parser.c" /* yacc.c:1646  */
    break;

  case 714:
#line 6175 "parser.y" /* yacc.c:1646  */
    {
	unsigned char *s = CB_LITERAL ((yyvsp[0]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[0]))->size != 1) {
		cb_error_x ((yyvsp[0]), _("invalid value for SIZE"));
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
			cb_error_x ((yyvsp[0]), _("invalid value for SIZE"));
			break;
		}
	}
  }
#line 11521 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 6207 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 11529 "parser.c" /* yacc.c:1646  */
    break;

  case 716:
#line 6211 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 11542 "parser.c" /* yacc.c:1646  */
    break;

  case 717:
#line 6223 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11552 "parser.c" /* yacc.c:1646  */
    break;

  case 718:
#line 6229 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main) {
		cb_error (_("RETURNING clause cannot be OMITTED for main program"));
	}
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause cannot be OMITTED for a FUNCTION"));
	}
	current_program->flag_void = 1;
  }
#line 11566 "parser.c" /* yacc.c:1646  */
    break;

  case 719:
#line 6239 "parser.y" /* yacc.c:1646  */
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
		} else if (f->flag_occurs) {
			cb_error(_("RETURNING item should not have OCCURS"));
		} else if (f->storage == CB_STORAGE_LOCAL) {
			cb_error (_("RETURNING item should not be in LOCAL-STORAGE"));
		} else {
			if (current_program->prog_type == CB_FUNCTION_TYPE) {
				if (f->flag_any_length) {
					cb_error (_("function RETURNING item may not be ANY LENGTH"));
				}

				f->flag_is_returning = 1;
			}
			current_program->returning = (yyvsp[0]);
		}
	}
  }
#line 11599 "parser.c" /* yacc.c:1646  */
    break;

  case 721:
#line 6271 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11608 "parser.c" /* yacc.c:1646  */
    break;

  case 722:
#line 6277 "parser.y" /* yacc.c:1646  */
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
#line 11638 "parser.c" /* yacc.c:1646  */
    break;

  case 727:
#line 6315 "parser.y" /* yacc.c:1646  */
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
#line 11659 "parser.c" /* yacc.c:1646  */
    break;

  case 729:
#line 6333 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11667 "parser.c" /* yacc.c:1646  */
    break;

  case 730:
#line 6343 "parser.y" /* yacc.c:1646  */
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
#line 11715 "parser.c" /* yacc.c:1646  */
    break;

  case 731:
#line 6387 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11723 "parser.c" /* yacc.c:1646  */
    break;

  case 734:
#line 6398 "parser.y" /* yacc.c:1646  */
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
	current_paragraph->flag_declaratives = !!in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_real_label = !in_debugging;
	current_paragraph->segment = current_section->segment;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
  }
#line 11772 "parser.c" /* yacc.c:1646  */
    break;

  case 735:
#line 6446 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		if (is_reserved_word (CB_NAME ((yyvsp[0])))) {
			cb_error_x ((yyvsp[0]), _("'%s' is not a statement"), CB_NAME ((yyvsp[0])));
		} else if (is_default_reserved_word (CB_NAME ((yyvsp[0])))) {
			cb_error_x ((yyvsp[0]), _("unknown statement '%s'; it may exist in another dialect"),
				    CB_NAME ((yyvsp[0])));
		} else {
			cb_error_x ((yyvsp[0]), _("unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	}
	YYERROR;
  }
#line 11792 "parser.c" /* yacc.c:1646  */
    break;

  case 736:
#line 6465 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11800 "parser.c" /* yacc.c:1646  */
    break;

  case 737:
#line 6469 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives) {
		cb_error (_("SECTION segment invalid within DECLARATIVE"));
	}
	if (cb_verify (cb_section_segments, _("SECTION segment"))) {
		current_program->flag_segments = 1;
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = NULL;
	}
  }
#line 11816 "parser.c" /* yacc.c:1646  */
    break;

  case 738:
#line 6487 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11826 "parser.c" /* yacc.c:1646  */
    break;

  case 739:
#line 6492 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11835 "parser.c" /* yacc.c:1646  */
    break;

  case 740:
#line 6497 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11845 "parser.c" /* yacc.c:1646  */
    break;

  case 741:
#line 6505 "parser.y" /* yacc.c:1646  */
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
#line 11876 "parser.c" /* yacc.c:1646  */
    break;

  case 742:
#line 6532 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11884 "parser.c" /* yacc.c:1646  */
    break;

  case 743:
#line 6536 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11892 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 6592 "parser.y" /* yacc.c:1646  */
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
#line 11910 "parser.c" /* yacc.c:1646  */
    break;

  case 794:
#line 6606 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11919 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 6617 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	cobc_cs_check = CB_CS_ACCEPT;
  }
#line 11928 "parser.c" /* yacc.c:1646  */
    break;

  case 797:
#line 6627 "parser.y" /* yacc.c:1646  */
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
#line 11938 "parser.c" /* yacc.c:1646  */
    break;

  case 798:
#line 6633 "parser.y" /* yacc.c:1646  */
    {
	/* Check for invalid use of screen clauses */
	if (current_statement->attr_ptr
	    || (!is_screen_field ((yyvsp[-3])) && line_column)) {
		cb_verify_x ((yyvsp[-3]), cb_accept_display_extensions,
			     _("non-standard ACCEPT"));
	}

	if (cb_accept_update && !has_dispattr (COB_SCREEN_NO_UPDATE)) {
		set_dispattr (COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto && !has_dispattr (COB_SCREEN_TAB)) {
		set_dispattr (COB_SCREEN_AUTO);
	}

	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-3]), line_column, current_statement->attr_ptr);
  }
#line 11961 "parser.c" /* yacc.c:1646  */
    break;

  case 799:
#line 6652 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11969 "parser.c" /* yacc.c:1646  */
    break;

  case 800:
#line 6656 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11977 "parser.c" /* yacc.c:1646  */
    break;

  case 801:
#line 6660 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11986 "parser.c" /* yacc.c:1646  */
    break;

  case 802:
#line 6665 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11995 "parser.c" /* yacc.c:1646  */
    break;

  case 803:
#line 6670 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 12004 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6675 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 12013 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 6680 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 12021 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6684 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 12029 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6688 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 12037 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6692 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 12045 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6696 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 12054 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6701 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 12062 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6705 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 12070 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6709 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 12078 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6713 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 12086 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6717 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 12094 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6721 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12102 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6725 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12110 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6733 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12118 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6751 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_2, &check_duplicate);
  }
#line 12126 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6755 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 12134 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6760 "parser.y" /* yacc.c:1646  */
    {
	check_repeated (_("TIME-OUT or BEFORE TIME clauses"), SYN_CLAUSE_4,
			&check_duplicate);
	set_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12144 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6774 "parser.y" /* yacc.c:1646  */
    {
	set_attr_with_conflict ("LINE", SYN_CLAUSE_1,
				_("AT screen-location"), SYN_CLAUSE_3, 1,
				&check_line_col_duplicate);

	if ((CB_LITERAL_P ((yyvsp[0])) && cb_get_int ((yyvsp[0])) == 0) || (yyvsp[0]) == cb_zero) {
		cb_verify (cb_accept_display_extensions, "LINE 0");
	}

	if (!line_column) {
		line_column = CB_BUILD_PAIR ((yyvsp[0]), cb_int0);
	} else {
		CB_PAIR_X (line_column) = (yyvsp[0]);
	}
  }
#line 12164 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6790 "parser.y" /* yacc.c:1646  */
    {
	set_attr_with_conflict ("COLUMN", SYN_CLAUSE_2,
				_("AT screen-location"), SYN_CLAUSE_3, 1,
				&check_line_col_duplicate);

	if ((CB_LITERAL_P ((yyvsp[0])) && cb_get_int ((yyvsp[0])) == 0) || (yyvsp[0]) == cb_zero) {
		cb_verify (cb_accept_display_extensions, "COLUMN 0");
	}

	if (!line_column) {
		line_column = CB_BUILD_PAIR (cb_int0, (yyvsp[0]));
	} else {
		CB_PAIR_Y (line_column) = (yyvsp[0]);
	}
  }
#line 12184 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6806 "parser.y" /* yacc.c:1646  */
    {
	set_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				_("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				1, &check_line_col_duplicate);

	cb_verify (cb_accept_display_extensions, "AT clause");

	line_column = (yyvsp[0]);
  }
#line 12198 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6818 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12204 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6822 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12210 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6823 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12216 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6828 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12224 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6835 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("AUTO", SYN_CLAUSE_5, &check_duplicate);
	set_dispattr_with_conflict ("AUTO", COB_SCREEN_AUTO,
				    "TAB", COB_SCREEN_TAB);
  }
#line 12234 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6841 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TAB", SYN_CLAUSE_6, &check_duplicate);
	set_dispattr_with_conflict ("TAB", COB_SCREEN_TAB,
				    "AUTO", COB_SCREEN_AUTO);
  }
#line 12244 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6847 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BELL", SYN_CLAUSE_7, &check_duplicate);
	set_dispattr (COB_SCREEN_BELL);
  }
#line 12253 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6852 "parser.y" /* yacc.c:1646  */
    {
        check_repeated ("BLINK", SYN_CLAUSE_8, &check_duplicate);
	set_dispattr (COB_SCREEN_BLINK);
  }
#line 12262 "parser.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6857 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONVERSION", SYN_CLAUSE_9, &check_duplicate);
	CB_PENDING ("ACCEPT CONVERSION");
  }
#line 12271 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6862 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FULL", SYN_CLAUSE_10, &check_duplicate);
	set_dispattr (COB_SCREEN_FULL);
  }
#line 12280 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6867 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("HIGHLIGHT", SYN_CLAUSE_11, &check_duplicate);
	set_dispattr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				    "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 12290 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6873 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LEFTLINE", SYN_CLAUSE_12, &check_duplicate);
	set_dispattr (COB_SCREEN_LEFTLINE);
  }
#line 12299 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6878 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOWER", SYN_CLAUSE_13, &check_duplicate);
	set_dispattr_with_conflict ("LOWER", COB_SCREEN_LOWER,
				    "UPPER", COB_SCREEN_UPPER);
  }
#line 12309 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6884 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOWLIGHT", SYN_CLAUSE_14, &check_duplicate);
	set_dispattr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				    "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 12319 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6890 "parser.y" /* yacc.c:1646  */
    {
	if (cb_no_echo_means_secure) {
		check_repeated ("SECURE", SYN_CLAUSE_20, &check_duplicate);
		set_dispattr (COB_SCREEN_SECURE);
	} else {
		check_repeated ("NO-ECHO", SYN_CLAUSE_15, &check_duplicate);
		set_dispattr_with_conflict ("NO-ECHO", COB_SCREEN_NO_ECHO,
					    "SECURE", COB_SCREEN_SECURE);
	}
  }
#line 12334 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6901 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OVERLINE", SYN_CLAUSE_16, &check_duplicate);
	set_dispattr (COB_SCREEN_OVERLINE);
  }
#line 12343 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6906 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PROMPT", SYN_CLAUSE_17, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 12352 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6911 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PROMPT", SYN_CLAUSE_17, &check_duplicate);
	set_dispattr (COB_SCREEN_PROMPT);
  }
#line 12361 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6916 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REQUIRED", SYN_CLAUSE_18, &check_duplicate);
	set_dispattr (COB_SCREEN_REQUIRED);
  }
#line 12370 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6921 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REVERSE-VIDEO", SYN_CLAUSE_19, &check_duplicate);
	set_dispattr (COB_SCREEN_REVERSE);
  }
#line 12379 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6926 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SECURE", SYN_CLAUSE_20, &check_duplicate);
	set_dispattr_with_conflict ("SECURE", COB_SCREEN_SECURE,
				    "NO-ECHO", COB_SCREEN_NO_ECHO);
  }
#line 12389 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6932 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIZE", SYN_CLAUSE_21, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12398 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6937 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIZE", SYN_CLAUSE_21, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12407 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6942 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UNDERLINE", SYN_CLAUSE_22, &check_duplicate);
	set_dispattr (COB_SCREEN_UNDERLINE);
  }
#line 12416 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6947 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NO UPDATE", SYN_CLAUSE_23, &check_duplicate);
	set_dispattr_with_conflict ("NO UPDATE", COB_SCREEN_NO_UPDATE,
				    "UPDATE", COB_SCREEN_UPDATE);
  }
#line 12426 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6953 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPDATE", SYN_CLAUSE_24, &check_duplicate);
	set_dispattr_with_conflict ("UPDATE", COB_SCREEN_UPDATE,
				    "NO UPDATE", COB_SCREEN_NO_UPDATE);
  }
#line 12436 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6959 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPPER", SYN_CLAUSE_25, &check_duplicate);
	set_dispattr_with_conflict ("UPPER", COB_SCREEN_UPPER,
				    "LOWER", COB_SCREEN_LOWER);
  }
#line 12446 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6965 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_26, &check_duplicate);
	set_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12455 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6970 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_27, &check_duplicate);
	set_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12464 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6975 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SCROLL UP", SYN_CLAUSE_28, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN);
  }
#line 12475 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 6982 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SCROLL DOWN", SYN_CLAUSE_19, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP);
  }
#line 12486 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6989 "parser.y" /* yacc.c:1646  */
    {
	check_repeated (_("TIME-OUT or BEFORE TIME clauses"), SYN_CLAUSE_4,
			&check_duplicate);
	set_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12496 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 7015 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 12504 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 7019 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ACCEPT);
# if 0 /* activate only for debugging purposes for attribs */
	if (current_statement->attr_ptr) {
		print_bits (current_statement->attr_ptr->dispattrs);
	} else {
		fprintf(stderr, "No Attribs\n");
	}
#endif
  }
#line 12519 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 7036 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 12527 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 7045 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 12535 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 7049 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 12543 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 7053 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 12551 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 7060 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12559 "parser.c" /* yacc.c:1646  */
    break;

  case 882:
#line 7067 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 12567 "parser.c" /* yacc.c:1646  */
    break;

  case 883:
#line 7071 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 12575 "parser.c" /* yacc.c:1646  */
    break;

  case 884:
#line 7081 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12584 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 7090 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 12592 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 7094 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12605 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 7105 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12611 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 7106 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12617 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 7114 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER");
  }
#line 12626 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 7128 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12634 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 7140 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
	cobc_allow_program_name = 1;
  }
#line 12645 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 7152 "parser.y" /* yacc.c:1646  */
    {
	cobc_allow_program_name = 0;
  }
#line 12653 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 7158 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	call_conv_bit;

	if (current_program->prog_type == CB_PROGRAM_TYPE
	    && !current_program->flag_recursive
	    && is_recursive_call ((yyvsp[-4]))) {
		cb_warning_x ((yyvsp[-4]), _("recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	/* For CALL ... RETURNING NOTHING, set the call convention bit */
	if (call_nothing) {
		if ((yyvsp[-5]) && CB_INTEGER_P ((yyvsp[-5]))) {
			call_conv_bit = cb_int ((CB_INTEGER ((yyvsp[-5]))->val)
						| CB_CONV_NO_RET_UPD);
		} else {
			call_conv_bit = cb_int (CB_CONV_NO_RET_UPD);
		}
	} else {
		call_conv_bit = (yyvsp[-5]);
	}
	cb_emit_call ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]), CB_PAIR_X ((yyvsp[0])), CB_PAIR_Y ((yyvsp[0])),
		      call_conv_bit);
  }
#line 12681 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 7185 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12690 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 7190 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12699 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 7195 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12708 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 7200 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[0]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME(x)->token != CB_FEATURE_CONVENTION) {
			cb_error_x ((yyvsp[0]), _("invalid mnemonic name"));
			(yyval) = NULL;
		} else {
			(yyval) = CB_SYSTEM_NAME(x)->value;
		}
	} else {
		(yyval) = NULL;
	}
	cobc_cs_check = 0;
  }
#line 12729 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 7221 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
#line 12737 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 7228 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12745 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 7232 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12754 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 7237 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12767 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 7248 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12773 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 7250 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12779 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 7255 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed when parameters are passed BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12791 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 7263 "parser.y" /* yacc.c:1646  */
    {
	int	save_mode;

	save_mode = call_mode;
	if (call_mode != CB_CALL_BY_REFERENCE) {
		if (CB_FILE_P ((yyvsp[0])) || (CB_REFERENCE_P ((yyvsp[0])) &&
		    CB_FILE_P (CB_REFERENCE ((yyvsp[0]))->value))) {
			cb_error_x (CB_TREE (current_statement),
				    _("invalid file name reference"));
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
#line 12817 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 7289 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 12825 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 7293 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 12838 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 7302 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 12851 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 7314 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12859 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 7318 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12867 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 7322 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12875 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 7326 "parser.y" /* yacc.c:1646  */
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
#line 12884 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 7331 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[0])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[0]));
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01 or 77"));
			(yyval) = NULL;
		} else if (f->storage != CB_STORAGE_LINKAGE &&
			   !f->flag_item_based) {
			cb_error (_("RETURNING item must be a LINKAGE SECTION item or have BASED clause"));
			(yyval) = NULL;
		} else {
			(yyval) = cb_build_address ((yyvsp[0]));
		}
	} else {
		(yyval) = NULL;
	}
  }
#line 12908 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 7364 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR (NULL, NULL);
  }
#line 12916 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 7368 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12924 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 7372 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 12936 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 7383 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12944 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 7387 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12952 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 7394 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12960 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 7398 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW");
	(yyval) = (yyvsp[0]);
  }
#line 12969 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 7406 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12977 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 7410 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12985 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 7417 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12993 "parser.c" /* yacc.c:1646  */
    break;

  case 937:
#line 7424 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 13001 "parser.c" /* yacc.c:1646  */
    break;

  case 938:
#line 7428 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 13009 "parser.c" /* yacc.c:1646  */
    break;

  case 939:
#line 7438 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
	cobc_allow_program_name = 1;
  }
#line 13018 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 7443 "parser.y" /* yacc.c:1646  */
    {
	cobc_allow_program_name = 0;
  }
#line 13026 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 7450 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 13034 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 7454 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 13042 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 7462 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
#line 13050 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 7471 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 13058 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 7479 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13067 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 7484 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13076 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 7491 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 13082 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 7492 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 13088 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 7493 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 13094 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 7494 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 13100 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 7495 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 13106 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 7503 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 13114 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 7512 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 13122 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7519 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 13130 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7523 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 13138 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7533 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 13147 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7544 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 13162 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 7561 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 13170 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7570 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-3]));
  }
#line 13178 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7578 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 13187 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 7583 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 13196 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 7591 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 13204 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 7595 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 13212 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 7605 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
	display_type = UNKNOWN_DISPLAY;
	is_first_display_item = 1;
  }
#line 13223 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 7617 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 13231 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7621 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 13239 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7625 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 13247 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7629 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 13255 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 7637 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) != NULL) {
		error_if_different_display_type ((yyvsp[0]), NULL, NULL, NULL);
		cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 0,
				 display_type);
	}
  }
#line 13267 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 7645 "parser.y" /* yacc.c:1646  */
    {
	set_display_type ((yyvsp[0]), NULL, NULL, NULL);
	cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 1,
			 display_type);
  }
#line 13277 "parser.c" /* yacc.c:1646  */
    break;

  case 980:
#line 7659 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 13289 "parser.c" /* yacc.c:1646  */
    break;

  case 981:
#line 7667 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) == cb_null) {
		/* Emit DISPLAY OMITTED. */
		error_if_no_advancing_in_screen_display (advancing_value);
		cb_emit_display_omitted (line_column,
					 current_statement->attr_ptr);
	} else {
		/* Emit device or screen DISPLAY. */

		/*
		  Check that disp_list does not contain an invalid mix of fields.
		*/
		if (display_type == UNKNOWN_DISPLAY) {
			set_display_type ((yyvsp[-2]), upon_value, line_column,
					  current_statement->attr_ptr);
		} else {
		        error_if_different_display_type ((yyvsp[-2]), upon_value,
							 line_column,
							 current_statement->attr_ptr);
		}

		if (display_type == SCREEN_DISPLAY
		    || display_type == FIELD_ON_SCREEN_DISPLAY) {
			error_if_no_advancing_in_screen_display (advancing_value);
		}

		cb_emit_display ((yyvsp[-2]), upon_value, advancing_value, line_column,
				 current_statement->attr_ptr,
				 is_first_display_item, display_type);
	}

	is_first_display_item = 0;
  }
#line 13327 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 7704 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13335 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 7708 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
#line 13344 "parser.c" /* yacc.c:1646  */
    break;

  case 986:
#line 7721 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 13352 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 7725 "parser.y" /* yacc.c:1646  */
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 13361 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7730 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 13369 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7739 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 13377 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7743 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_name ((yyvsp[0]));
  }
#line 13385 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7747 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_int0;
  }
#line 13393 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7751 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_null;
  }
#line 13401 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7763 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BELL", SYN_CLAUSE_4, &check_duplicate);
	set_dispattr (COB_SCREEN_BELL);
  }
#line 13410 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7768 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK LINE", SYN_CLAUSE_5, &check_duplicate);
	set_dispattr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
				    "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 13420 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7774 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK SCREEN", SYN_CLAUSE_6, &check_duplicate);
	set_dispattr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				    "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 13430 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7780 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLINK", SYN_CLAUSE_7, &check_duplicate);
	set_dispattr (COB_SCREEN_BLINK);
  }
#line 13439 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7785 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONVERSION", SYN_CLAUSE_8, &check_duplicate);
	cb_warning (_("ignoring CONVERSION"));
  }
#line 13448 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7790 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ERASE EOL", SYN_CLAUSE_9, &check_duplicate);
	set_dispattr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
				    "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 13458 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7796 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ERASE EOS", SYN_CLAUSE_10, &check_duplicate);
	set_dispattr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				    "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 13468 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7802 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("HIGHLIGHT", SYN_CLAUSE_11, &check_duplicate);
	set_dispattr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				    "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 13478 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7808 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOWLIGHT", SYN_CLAUSE_12, &check_duplicate);
	set_dispattr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				    "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 13488 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7814 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OVERLINE", SYN_CLAUSE_13, &check_duplicate);
	set_dispattr (COB_SCREEN_OVERLINE);
  }
#line 13497 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7819 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REVERSE-VIDEO", SYN_CLAUSE_14, &check_duplicate);
	set_dispattr (COB_SCREEN_REVERSE);
  }
#line 13506 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7824 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIZE", SYN_CLAUSE_15, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 13515 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7829 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UNDERLINE", SYN_CLAUSE_16, &check_duplicate);
	set_dispattr (COB_SCREEN_UNDERLINE);
  }
#line 13524 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7834 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_17, &check_duplicate);
	set_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 13533 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7839 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_18, &check_duplicate);
	set_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 13542 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7844 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SCROLL UP", SYN_CLAUSE_19, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN);
  }
#line 13553 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7851 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SCROLL DOWN", SYN_CLAUSE_20, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP);
  }
#line 13564 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7861 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 13572 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7865 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 13580 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7875 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 13588 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7884 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 13596 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7888 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 13604 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7892 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 13612 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7896 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13620 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7900 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13628 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7907 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 13636 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7911 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 13644 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7921 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 13653 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7930 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "ENTRY");
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "ENTRY");
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		if (!cobc_check_valid_name ((char *)(CB_LITERAL ((yyvsp[-1]))->data), ENTRY_NAME)) {
			emit_entry ((char *)(CB_LITERAL ((yyvsp[-1]))->data), 1, (yyvsp[0]));
		}
	}
  }
#line 13669 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7948 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EVALUATE", TERM_EVALUATE);
	eval_level++;
	if (eval_level >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
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
#line 13692 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7972 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 13701 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7979 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13707 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7981 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13713 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7986 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	eval_check[eval_level][eval_inc++] = (yyvsp[0]);
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 13728 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7997 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 13743 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 8008 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_false;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 13758 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 8022 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13766 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 8026 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13774 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 8032 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13780 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 8034 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13786 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 8040 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13795 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 8049 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13804 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 8057 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13813 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 8063 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13822 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 8070 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13828 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 8072 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13834 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 8077 "parser.y" /* yacc.c:1646  */
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
				cb_error_x (e2, _("invalid THROUGH usage"));
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
#line 13900 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 8138 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 13906 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 8139 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 13912 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 8140 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 13918 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 8144 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13924 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 8145 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13930 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 8150 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 13938 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 8154 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 13946 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 8164 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 13955 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 8169 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13963 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 8177 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != CB_PROGRAM_TYPE) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM not allowed within a FUNCTION"));
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
#line 13988 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 8198 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != CB_FUNCTION_TYPE) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION only allowed within a FUNCTION"));
	}
	check_unreached = 1;
	current_statement->name = (const char *)"EXIT FUNCTION";
	cb_emit_exit (0);
  }
#line 14006 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 8212 "parser.y" /* yacc.c:1646  */
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
#line 14032 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 8234 "parser.y" /* yacc.c:1646  */
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
#line 14058 "parser.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 8256 "parser.y" /* yacc.c:1646  */
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
#line 14082 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 8276 "parser.y" /* yacc.c:1646  */
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
#line 14106 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 8298 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14112 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 8299 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14118 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 8307 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 14127 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 8316 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 14135 "parser.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 8326 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	CB_PENDING("GENERATE");
  }
#line 14144 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 8342 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14157 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 8355 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 14166 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 8363 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 14175 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 8368 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 14184 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 8379 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 14197 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 8394 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 14205 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 8403 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14213 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 8407 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 14221 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 8411 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 14229 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 8418 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 14237 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 8422 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 14245 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 8432 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 14253 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 8441 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14261 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 8447 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14267 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 8448 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 14273 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 8452 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14279 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 8453 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 14285 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 8454 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 14291 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 8459 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14299 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 8463 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14307 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 8470 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14315 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 8475 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14323 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 8482 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 14331 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 8488 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 14337 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 8489 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 14343 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 8490 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 14349 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 8491 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 14355 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 8492 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 14361 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 8493 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 14367 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 8494 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 14373 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 8499 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14381 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 8503 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 14389 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 8512 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	CB_PENDING("INITIATE");
  }
#line 14398 "parser.c" /* yacc.c:1646  */
    break;

  case 1108:
#line 8521 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14408 "parser.c" /* yacc.c:1646  */
    break;

  case 1109:
#line 8527 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14418 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 8538 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 14427 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 8566 "parser.y" /* yacc.c:1646  */
    {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
#line 14436 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 8571 "parser.y" /* yacc.c:1646  */
    {
	if (!(previous_tallying_phrase == CHARACTERS_PHRASE
	      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
		cb_error (_("TALLYING clause is incomplete"));
	} else {
		cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), TALLYING_CLAUSE);
	}

	(yyval) = (yyvsp[-3]);
  }
#line 14451 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 8587 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), REPLACING_CLAUSE);
	inspect_keyword = 0;
  }
#line 14460 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 8597 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, CONVERTING_CLAUSE);
  }
#line 14470 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 8606 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14478 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 8610 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14486 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 8617 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (FOR_PHRASE);
	(yyval) = cb_build_tallying_data ((yyvsp[-1]));
  }
#line 14495 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 8622 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	(yyval) = cb_build_tallying_characters ((yyvsp[0]));
  }
#line 14504 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 8627 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_all ();
  }
#line 14513 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 8632 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_leading ();
  }
#line 14522 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 8637 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_trailing ();
  }
#line 14531 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 8642 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	(yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14540 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8649 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14546 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8650 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 14552 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8655 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 14561 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8660 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14569 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8667 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 14575 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8668 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 14581 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8669 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 14587 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8670 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 14593 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 8675 "parser.y" /* yacc.c:1646  */
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
				    _("INSPECT missing ALL/FIRST/LEADING/TRAILING"));
			(yyval) = cb_build_replacing_all ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
	}
  }
#line 14619 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 8702 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 14627 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 8706 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14635 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8710 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14643 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8714 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14651 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8718 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14659 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8725 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0]));
  }
#line 14667 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8732 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0]));
  }
#line 14675 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 8741 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 14684 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8753 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 14692 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8761 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14700 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8765 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14708 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8775 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 14716 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8784 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 14724 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8788 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 14732 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8795 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 14740 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8799 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 14748 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8809 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 14756 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8822 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[-3]) && (yyvsp[0])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", _("LOCK clauses"));
	}
	if ((yyvsp[0])) {
		x = (yyvsp[0]);
	} else {
		x = (yyvsp[-3]);
	}

	for (l = (yyvsp[-1]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[-4]), x);
		}
	}
  }
#line 14782 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8846 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 14788 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8847 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 14794 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8848 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 14800 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8849 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 14806 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8853 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14812 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8854 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14818 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8858 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14824 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8859 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14830 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8860 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14836 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8862 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 14845 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8873 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
	cobc_cs_check = CB_CS_PERFORM;
  }
#line 14857 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8885 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 14867 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8891 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 14878 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8898 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14887 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8903 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 14897 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8912 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 14909 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8920 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 14917 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8927 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 14925 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8931 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 14939 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8944 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 14950 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8951 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14962 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8962 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14970 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8966 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14979 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8971 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14987 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8975 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 15002 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8986 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15010 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8992 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 15016 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8993 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15022 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8997 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15028 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8998 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15034 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 9001 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15040 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 9003 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15046 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 9008 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 15054 "parser.c" /* yacc.c:1646  */
    break;

  case 1200:
#line 9018 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 15062 "parser.c" /* yacc.c:1646  */
    break;

  case 1202:
#line 9027 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;

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
		} else if (current_statement->handler_type == INVALID_KEY_HANDLER &&
			   (cf->organization != COB_ORG_RELATIVE &&
			    cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("INVALID KEY clause invalid with this file type"));
		} else {
			cb_emit_read ((yyvsp[-6]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[-2]));
		}
	}
  }
#line 15092 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 9055 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15098 "parser.c" /* yacc.c:1646  */
    break;

  case 1204:
#line 9056 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15104 "parser.c" /* yacc.c:1646  */
    break;

  case 1205:
#line 9061 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15112 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 9065 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 15120 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 9069 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15128 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 9073 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15136 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 9085 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("ADVANCING ON LOCK");
  }
#line 15144 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 9098 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("RETRY");
	cobc_cs_check = 0;
  }
#line 15153 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 9119 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 15161 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 9123 "parser.y" /* yacc.c:1646  */
    {
	/* TO-DO: Merge with RETRY phrase */
	(yyval) = cb_int4;
  }
#line 15170 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 9130 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15176 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 9131 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15182 "parser.c" /* yacc.c:1646  */
    break;

  case 1228:
#line 9141 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 15190 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 9145 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 15198 "parser.c" /* yacc.c:1646  */
    break;

  case 1230:
#line 9155 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 15207 "parser.c" /* yacc.c:1646  */
    break;

  case 1231:
#line 9165 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 15215 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 9173 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15223 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 9183 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 15232 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 9193 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 15240 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 9202 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15248 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 9209 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 15256 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 9213 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 15264 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 9223 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15275 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 9235 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 15284 "parser.c" /* yacc.c:1646  */
    break;

  case 1243:
#line 9243 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15292 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 9251 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 15300 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 9255 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 15308 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 9262 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 15316 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 9266 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 15324 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 9276 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 15333 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 9287 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 15341 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 9296 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15349 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 9301 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15358 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 9308 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15364 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 9309 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15370 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 9314 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15378 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 9319 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15386 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 9326 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15394 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 9330 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 15402 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 9338 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15410 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 9345 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 15418 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 9349 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 15426 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 9359 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	set_attr_val_on = 0;
	set_attr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 15437 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 9366 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 15445 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 9382 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15451 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 9383 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15457 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 9387 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15463 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 9388 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15469 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 9395 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15477 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 9404 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), set_attr_val_on, set_attr_val_off);
  }
#line 15485 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 9416 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 15493 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 9420 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 15501 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 9424 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (set_attr_val_on | set_attr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 15511 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 9430 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (set_attr_val_on | set_attr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 15521 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 9436 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 15529 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 9440 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 15537 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 9444 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 15545 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 9448 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 15553 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 9457 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 15561 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 9461 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15569 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 9470 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 15577 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9484 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15585 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9498 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 15593 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9502 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 15601 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 9511 "parser.y" /* yacc.c:1646  */
    {
	  cb_emit_set_last_exception_to_off ();
  }
#line 15609 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 9520 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 15617 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9528 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[-3]));
	if (CB_VALID_TREE (x)) {
		if (CB_INVALID_TREE ((yyvsp[-2]))) {
			if (CB_FILE_P (x)) {
				cb_error (_("file sort requires KEY phrase"));
			} else {
				/* FIXME: use key definition from OCCURS */
				cb_error (_("%s is not implemented"), _("table SORT without keys"));
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
#line 15643 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9550 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 15653 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9559 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15661 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 9564 "parser.y" /* yacc.c:1646  */
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
#line 15681 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 9582 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15687 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9583 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15693 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 9588 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 15702 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9595 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 15708 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 9596 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 15714 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 9601 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("file sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 15724 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9607 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 15738 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9617 "parser.y" /* yacc.c:1646  */
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
#line 15754 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9632 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("file sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 15764 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9638 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15778 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9648 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15792 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 9664 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 15801 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9674 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 15814 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 9686 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15822 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 9690 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15830 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9697 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15838 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9701 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 15847 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9706 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 15856 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9711 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 15865 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 9718 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 15871 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9719 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 15877 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9720 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 15883 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 9721 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 15889 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9722 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 15895 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 9723 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 15901 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9728 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition not allowed on START statement"));
  }
#line 15910 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9741 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 15918 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 9745 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 15926 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9755 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 15934 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9759 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 15944 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9765 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL, 1, DEVICE_DISPLAY);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 15957 "parser.c" /* yacc.c:1646  */
    break;

  case 1340:
#line 9777 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 15965 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 9781 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15973 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9785 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15981 "parser.c" /* yacc.c:1646  */
    break;

  case 1343:
#line 9789 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15993 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 9797 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 16005 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 9808 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16013 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 9812 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16021 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 9818 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16027 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9819 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16033 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9820 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16039 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9821 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16045 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9828 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
	save_tree = NULL;
  }
#line 16054 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9838 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string (save_tree, (yyvsp[-2]), (yyvsp[-1]));
  }
#line 16062 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9850 "parser.y" /* yacc.c:1646  */
    {
    if (!save_tree) {
		save_tree = CB_LIST_INIT ((yyvsp[-1]));
	} else {
		save_tree = cb_list_add (save_tree, (yyvsp[-1]));
	}
	if ((yyvsp[0])) {
		save_tree = cb_list_add (save_tree, (yyvsp[0]));
	}
  }
#line 16077 "parser.c" /* yacc.c:1646  */
    break;

  case 1357:
#line 9864 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16083 "parser.c" /* yacc.c:1646  */
    break;

  case 1358:
#line 9866 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16089 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9870 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 16095 "parser.c" /* yacc.c:1646  */
    break;

  case 1360:
#line 9871 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 16101 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9875 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16107 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9876 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16113 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9881 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 16121 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9885 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 16129 "parser.c" /* yacc.c:1646  */
    break;

  case 1365:
#line 9895 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 16137 "parser.c" /* yacc.c:1646  */
    break;

  case 1367:
#line 9904 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 16145 "parser.c" /* yacc.c:1646  */
    break;

  case 1368:
#line 9908 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 16153 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9912 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 16161 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9919 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 16169 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9923 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 16177 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9933 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	CB_PENDING("SUPPRESS");
  }
#line 16190 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9951 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	CB_PENDING("TERMINATE");
  }
#line 16199 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9960 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 16209 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9966 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 16219 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9977 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 16227 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9985 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, TRANSFORM_STATEMENT);
  }
#line 16238 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9998 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 16246 "parser.c" /* yacc.c:1646  */
    break;

  case 1384:
#line 10006 "parser.y" /* yacc.c:1646  */
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
#line 16261 "parser.c" /* yacc.c:1646  */
    break;

  case 1385:
#line 10022 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 16269 "parser.c" /* yacc.c:1646  */
    break;

  case 1387:
#line 10032 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 16277 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 10038 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16283 "parser.c" /* yacc.c:1646  */
    break;

  case 1389:
#line 10040 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16289 "parser.c" /* yacc.c:1646  */
    break;

  case 1390:
#line 10044 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16295 "parser.c" /* yacc.c:1646  */
    break;

  case 1391:
#line 10046 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 16301 "parser.c" /* yacc.c:1646  */
    break;

  case 1392:
#line 10051 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16309 "parser.c" /* yacc.c:1646  */
    break;

  case 1393:
#line 10057 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16315 "parser.c" /* yacc.c:1646  */
    break;

  case 1394:
#line 10059 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16321 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 10064 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 16329 "parser.c" /* yacc.c:1646  */
    break;

  case 1396:
#line 10070 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16335 "parser.c" /* yacc.c:1646  */
    break;

  case 1397:
#line 10071 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16341 "parser.c" /* yacc.c:1646  */
    break;

  case 1398:
#line 10075 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16347 "parser.c" /* yacc.c:1646  */
    break;

  case 1399:
#line 10076 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16353 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 10080 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16359 "parser.c" /* yacc.c:1646  */
    break;

  case 1401:
#line 10081 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16365 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 10086 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 16373 "parser.c" /* yacc.c:1646  */
    break;

  case 1403:
#line 10090 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 16381 "parser.c" /* yacc.c:1646  */
    break;

  case 1404:
#line 10100 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 16390 "parser.c" /* yacc.c:1646  */
    break;

  case 1411:
#line 10118 "parser.y" /* yacc.c:1646  */
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
#line 16416 "parser.c" /* yacc.c:1646  */
    break;

  case 1412:
#line 10143 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 16424 "parser.c" /* yacc.c:1646  */
    break;

  case 1413:
#line 10147 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 16437 "parser.c" /* yacc.c:1646  */
    break;

  case 1414:
#line 10159 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 16451 "parser.c" /* yacc.c:1646  */
    break;

  case 1415:
#line 10169 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 16460 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 10174 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 16469 "parser.c" /* yacc.c:1646  */
    break;

  case 1417:
#line 10179 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 16478 "parser.c" /* yacc.c:1646  */
    break;

  case 1418:
#line 10184 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 16487 "parser.c" /* yacc.c:1646  */
    break;

  case 1419:
#line 10192 "parser.y" /* yacc.c:1646  */
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
#line 16526 "parser.c" /* yacc.c:1646  */
    break;

  case 1422:
#line 10235 "parser.y" /* yacc.c:1646  */
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
#line 16570 "parser.c" /* yacc.c:1646  */
    break;

  case 1423:
#line 10275 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 16584 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 10285 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	if (current_program->flag_debugging) {
		/* Reference must be a data item */
		x = cb_ref ((yyvsp[0]));
		if (CB_INVALID_TREE (x) || !CB_FIELD_P (x)) {
			cb_error (_("invalid target for DEBUGGING ALL"));
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
#line 16609 "parser.c" /* yacc.c:1646  */
    break;

  case 1429:
#line 10315 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 16619 "parser.c" /* yacc.c:1646  */
    break;

  case 1430:
#line 10324 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM START");
  }
#line 16629 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 10330 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM END");
  }
#line 16639 "parser.c" /* yacc.c:1646  */
    break;

  case 1432:
#line 10340 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	CB_PENDING ("USE BEFORE REPORTING");
  }
#line 16649 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 10349 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 16659 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 10365 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 16670 "parser.c" /* yacc.c:1646  */
    break;

  case 1438:
#line 10377 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-5]))) {
		cb_emit_write ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 16681 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 10386 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16687 "parser.c" /* yacc.c:1646  */
    break;

  case 1440:
#line 10387 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16693 "parser.c" /* yacc.c:1646  */
    break;

  case 1441:
#line 10392 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 16701 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 10396 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16709 "parser.c" /* yacc.c:1646  */
    break;

  case 1443:
#line 10400 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16717 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 10404 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 16725 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 10410 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 16731 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 10411 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 16737 "parser.c" /* yacc.c:1646  */
    break;

  case 1450:
#line 10422 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 16745 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 10426 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 16753 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 10440 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 16764 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 10450 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16772 "parser.c" /* yacc.c:1646  */
    break;

  case 1456:
#line 10454 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16780 "parser.c" /* yacc.c:1646  */
    break;

  case 1457:
#line 10461 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16789 "parser.c" /* yacc.c:1646  */
    break;

  case 1462:
#line 10479 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16798 "parser.c" /* yacc.c:1646  */
    break;

  case 1467:
#line 10495 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 16809 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 10505 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16817 "parser.c" /* yacc.c:1646  */
    break;

  case 1469:
#line 10509 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16825 "parser.c" /* yacc.c:1646  */
    break;

  case 1470:
#line 10516 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16834 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 10529 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16843 "parser.c" /* yacc.c:1646  */
    break;

  case 1476:
#line 10541 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT SIZE ERROR before SIZE ERROR"));
	}
  }
#line 16854 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 10551 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16862 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 10555 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16870 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 10562 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16879 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 10575 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16888 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 10587 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT OVERFLOW before OVERFLOW"));
	}
  }
#line 16899 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 10597 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16907 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 10601 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16915 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 10608 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16924 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 10621 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16933 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 10633 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
  }
#line 16941 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 10642 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
	}
  }
#line 16951 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 10651 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16959 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 10655 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16967 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10662 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16976 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10675 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16985 "parser.c" /* yacc.c:1646  */
    break;

  case 1503:
#line 10686 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT AT END-OF-PAGE before AT END-OF-PAGE"));
	}
  }
#line 16996 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 10696 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17004 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 10700 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17012 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10707 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17021 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10720 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17030 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 10736 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT INVALID KEY before INVALID KEY"));
	}
  }
#line 17041 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10746 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17049 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 10750 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17057 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 10757 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17066 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 10770 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17075 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 10780 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 17083 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 10784 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17091 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 10794 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 17099 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 10801 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 17107 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 10807 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 17116 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 10812 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 17124 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10824 "parser.y" /* yacc.c:1646  */
    { push_expr ('x', (yyvsp[0])); }
#line 17130 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 10825 "parser.y" /* yacc.c:1646  */
    { push_expr ('C', (yyvsp[0])); }
#line 17136 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 10827 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 17142 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10828 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 17148 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 10830 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 17154 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 10831 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 17160 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10832 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 17166 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10833 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 17172 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10834 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 17178 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10836 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 17184 "parser.c" /* yacc.c:1646  */
    break;

  case 1539:
#line 10837 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 17190 "parser.c" /* yacc.c:1646  */
    break;

  case 1540:
#line 10838 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 17196 "parser.c" /* yacc.c:1646  */
    break;

  case 1541:
#line 10839 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 17202 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10840 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 17208 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10841 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 17214 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10843 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 17220 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10844 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 17226 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10845 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 17232 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10847 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 17238 "parser.c" /* yacc.c:1646  */
    break;

  case 1548:
#line 10848 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 17244 "parser.c" /* yacc.c:1646  */
    break;

  case 1549:
#line 10849 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 17250 "parser.c" /* yacc.c:1646  */
    break;

  case 1550:
#line 10850 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 17256 "parser.c" /* yacc.c:1646  */
    break;

  case 1551:
#line 10851 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 17262 "parser.c" /* yacc.c:1646  */
    break;

  case 1552:
#line 10854 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 17268 "parser.c" /* yacc.c:1646  */
    break;

  case 1553:
#line 10855 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 17274 "parser.c" /* yacc.c:1646  */
    break;

  case 1562:
#line 10885 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17282 "parser.c" /* yacc.c:1646  */
    break;

  case 1563:
#line 10889 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17290 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10900 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 17296 "parser.c" /* yacc.c:1646  */
    break;

  case 1568:
#line 10901 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 17302 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10902 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17308 "parser.c" /* yacc.c:1646  */
    break;

  case 1570:
#line 10906 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 17314 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10907 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 17320 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10908 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17326 "parser.c" /* yacc.c:1646  */
    break;

  case 1573:
#line 10913 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 17334 "parser.c" /* yacc.c:1646  */
    break;

  case 1574:
#line 10916 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17340 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 10920 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17346 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10921 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 17352 "parser.c" /* yacc.c:1646  */
    break;

  case 1577:
#line 10922 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17358 "parser.c" /* yacc.c:1646  */
    break;

  case 1578:
#line 10925 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17364 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10926 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17370 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10937 "parser.y" /* yacc.c:1646  */
    {
	if (current_linage > 1) {
		cb_error (_("LINAGE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (current_linage == 0) {
		cb_error (_("invalid LINAGE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = linage_file->linage_ctr;
	}
  }
#line 17386 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10949 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17399 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10958 "parser.y" /* yacc.c:1646  */
    {
	if (report_count > 1) {
		cb_error (_("LINE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("invalid LINE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->line_counter;
	}
  }
#line 17415 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10970 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17428 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10979 "parser.y" /* yacc.c:1646  */
    {
	if (report_count > 1) {
		cb_error (_("PAGE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("invalid PAGE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->page_counter;
	}
  }
#line 17444 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10991 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17457 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 11005 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17463 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 11007 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 17469 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 11012 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 17477 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 11020 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 17483 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 11027 "parser.y" /* yacc.c:1646  */
    {
	cb_tree x;

	x = cb_ref ((yyvsp[0]));
	if (!CB_FIELD_P (x)) {
		(yyval) = cb_error_node;
	} else if (!CB_FIELD (x)->index_list) {
		cb_error_x ((yyvsp[0]), _("'%s' not indexed"), cb_name ((yyvsp[0])));
		listprint_suppress ();
		cb_error_x (x, _("'%s' defined here"), cb_name (x));
		listprint_restore ();
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 17504 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 11049 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17512 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 11053 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	if (CB_VALID_TREE ((yyvsp[0]))) {
		for (l = (yyvsp[-1]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l)) &&
			    !strcasecmp (CB_NAME ((yyvsp[0])), CB_NAME (CB_VALUE (l)))) {
				cb_error_x ((yyvsp[0]), _("multiple reference to '%s' "),
					    CB_NAME ((yyvsp[0])));
				break;
			}
		}
		if (!l) {
			(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
		}
	}
  }
#line 17534 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 11074 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17547 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 11115 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17560 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 11128 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17566 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 11130 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17572 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 11134 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17578 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 11140 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17584 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 11142 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17590 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 11147 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 17603 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 11161 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17611 "parser.c" /* yacc.c:1646  */
    break;

  case 1604:
#line 11168 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 17621 "parser.c" /* yacc.c:1646  */
    break;

  case 1605:
#line 11178 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17627 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 11179 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17633 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 11184 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17642 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 11192 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17651 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 11200 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17659 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 11204 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17667 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 11211 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17677 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 11227 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 17690 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 11236 "parser.y" /* yacc.c:1646  */
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
#line 17700 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 11247 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 17714 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 11264 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17722 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 11268 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17730 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 11277 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17738 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 11283 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17744 "parser.c" /* yacc.c:1646  */
    break;

  case 1623:
#line 11284 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17750 "parser.c" /* yacc.c:1646  */
    break;

  case 1624:
#line 11289 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17758 "parser.c" /* yacc.c:1646  */
    break;

  case 1625:
#line 11293 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17766 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 11313 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17774 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 11317 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17782 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 11321 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17790 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 11325 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 17798 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 11329 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17806 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 11333 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	cb_tree		switch_id;

	x = cb_ref ((yyvsp[0]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME (x)->category != CB_SWITCH_NAME) {
			cb_error_x ((yyvsp[0]), _("invalid mnemonic identifier"));
			(yyval) = cb_error_node;
		} else {
			switch_id = cb_int (CB_SYSTEM_NAME (x)->token);
			(yyval) = CB_BUILD_FUNCALL_1 ("cob_switch_value", switch_id);
		}
	} else {
		(yyval) = cb_error_node;
	}
  }
#line 17828 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 11354 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17836 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 11358 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17844 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 11375 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17852 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 11379 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17860 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 11383 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17868 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 11400 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 17876 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 11407 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 17884 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 11425 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17892 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 11433 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17900 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 11442 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17908 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 11447 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 17916 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 11454 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17924 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 11462 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17932 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 11470 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17940 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 11480 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17946 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 11484 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 17952 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 11488 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17958 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11489 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17964 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 11494 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 17972 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 11501 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) != cb_error_node
	    && cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC) {
		cb_error_x ((yyvsp[0]), _("'%s' is not numeric"), cb_name ((yyvsp[0])));
	}
  }
#line 17983 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11511 "parser.y" /* yacc.c:1646  */
    {
	int     reference_to_existing_object;

	if (CB_REFERENCE_P ((yyvsp[0])) && (CB_FIELD_P (cb_ref ((yyvsp[0])))
				    || CB_FILE_P (cb_ref ((yyvsp[0]))))) {
		(yyval) = cb_build_identifier ((yyvsp[0]), 0);
	} else {
	        reference_to_existing_object =
			CB_REFERENCE_P ((yyvsp[0])) && cb_ref ((yyvsp[0])) != cb_error_node;
		if (!CB_REFERENCE_P ((yyvsp[0])) || reference_to_existing_object) {
			cb_error_x ((yyvsp[0]), _("'%s' is not a field or file"), cb_name ((yyvsp[0])));
		}
		(yyval) = cb_error_node;
	}
  }
#line 18003 "parser.c" /* yacc.c:1646  */
    break;

  case 1684:
#line 11530 "parser.y" /* yacc.c:1646  */
    {
	int     reference_to_existing_object;

	if (CB_REFERENCE_P ((yyvsp[0])) && CB_FIELD_P (cb_ref ((yyvsp[0])))) {
		(yyval) = cb_build_identifier ((yyvsp[0]), 0);
	} else {
	        reference_to_existing_object =
			CB_REFERENCE_P ((yyvsp[0])) && cb_ref ((yyvsp[0])) != cb_error_node;
		if (!CB_REFERENCE_P ((yyvsp[0])) || reference_to_existing_object) {
			cb_error_x ((yyvsp[0]), _("'%s' is not a field"), cb_name ((yyvsp[0])));
		}
		(yyval) = cb_error_node;
	}
  }
#line 18022 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11548 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 18033 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11555 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18044 "parser.c" /* yacc.c:1646  */
    break;

  case 1687:
#line 11562 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18055 "parser.c" /* yacc.c:1646  */
    break;

  case 1688:
#line 11569 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 18066 "parser.c" /* yacc.c:1646  */
    break;

  case 1689:
#line 11579 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 18074 "parser.c" /* yacc.c:1646  */
    break;

  case 1690:
#line 11586 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 18088 "parser.c" /* yacc.c:1646  */
    break;

  case 1691:
#line 11596 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18102 "parser.c" /* yacc.c:1646  */
    break;

  case 1692:
#line 11606 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18116 "parser.c" /* yacc.c:1646  */
    break;

  case 1693:
#line 11616 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 18130 "parser.c" /* yacc.c:1646  */
    break;

  case 1694:
#line 11629 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18138 "parser.c" /* yacc.c:1646  */
    break;

  case 1695:
#line 11633 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 18147 "parser.c" /* yacc.c:1646  */
    break;

  case 1696:
#line 11641 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 18156 "parser.c" /* yacc.c:1646  */
    break;

  case 1697:
#line 11649 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 18164 "parser.c" /* yacc.c:1646  */
    break;

  case 1698:
#line 11653 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 18173 "parser.c" /* yacc.c:1646  */
    break;

  case 1699:
#line 11663 "parser.y" /* yacc.c:1646  */
    {
	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[0]))->sign < 0
	    || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("non-negative integer value expected"));
		(yyval) = cb_build_numeric_literal(-1, "1", 0);
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 18188 "parser.c" /* yacc.c:1646  */
    break;

  case 1700:
#line 11677 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[0]))->sign || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[0]));
		if (n < 1 || n > 256) {
			cb_error (_("invalid symbolic integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[0]);
		}
	}
  }
#line 18212 "parser.c" /* yacc.c:1646  */
    break;

  case 1701:
#line 11700 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[0]))->sign
	    || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("unsigned positive integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[0]));
		if (n < 1) {
			cb_error (_("unsigned positive integer value expected"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[0]);
		}
	}
  }
#line 18235 "parser.c" /* yacc.c:1646  */
    break;

  case 1702:
#line 11722 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) == CB_CATEGORY_NUMERIC) {
		if (CB_LITERAL ((yyvsp[0]))->sign || CB_LITERAL ((yyvsp[0]))->scale) {
			cb_error (_("integer value expected"));
		} else {
			n = cb_get_int ((yyvsp[0]));
			if (n < 1 || n > 256) {
				cb_error (_("invalid CLASS value"));
			}
		}
	}
	(yyval) = (yyvsp[0]);
  }
#line 18255 "parser.c" /* yacc.c:1646  */
    break;

  case 1703:
#line 11737 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 18261 "parser.c" /* yacc.c:1646  */
    break;

  case 1704:
#line 11738 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 18267 "parser.c" /* yacc.c:1646  */
    break;

  case 1705:
#line 11739 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 18273 "parser.c" /* yacc.c:1646  */
    break;

  case 1706:
#line 11740 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 18279 "parser.c" /* yacc.c:1646  */
    break;

  case 1707:
#line 11741 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 18285 "parser.c" /* yacc.c:1646  */
    break;

  case 1708:
#line 11742 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 18291 "parser.c" /* yacc.c:1646  */
    break;

  case 1709:
#line 11747 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18299 "parser.c" /* yacc.c:1646  */
    break;

  case 1710:
#line 11751 "parser.y" /* yacc.c:1646  */
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
#line 18317 "parser.c" /* yacc.c:1646  */
    break;

  case 1711:
#line 11768 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18325 "parser.c" /* yacc.c:1646  */
    break;

  case 1712:
#line 11772 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 18333 "parser.c" /* yacc.c:1646  */
    break;

  case 1713:
#line 11778 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 18339 "parser.c" /* yacc.c:1646  */
    break;

  case 1714:
#line 11779 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 18345 "parser.c" /* yacc.c:1646  */
    break;

  case 1715:
#line 11780 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 18351 "parser.c" /* yacc.c:1646  */
    break;

  case 1716:
#line 11781 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 18357 "parser.c" /* yacc.c:1646  */
    break;

  case 1717:
#line 11782 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 18363 "parser.c" /* yacc.c:1646  */
    break;

  case 1718:
#line 11783 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 18369 "parser.c" /* yacc.c:1646  */
    break;

  case 1719:
#line 11784 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 18375 "parser.c" /* yacc.c:1646  */
    break;

  case 1720:
#line 11791 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 18383 "parser.c" /* yacc.c:1646  */
    break;

  case 1721:
#line 11795 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 18391 "parser.c" /* yacc.c:1646  */
    break;

  case 1722:
#line 11799 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18399 "parser.c" /* yacc.c:1646  */
    break;

  case 1723:
#line 11803 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18407 "parser.c" /* yacc.c:1646  */
    break;

  case 1724:
#line 11807 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 18415 "parser.c" /* yacc.c:1646  */
    break;

  case 1725:
#line 11811 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18423 "parser.c" /* yacc.c:1646  */
    break;

  case 1726:
#line 11815 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18431 "parser.c" /* yacc.c:1646  */
    break;

  case 1727:
#line 11819 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18439 "parser.c" /* yacc.c:1646  */
    break;

  case 1728:
#line 11823 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18447 "parser.c" /* yacc.c:1646  */
    break;

  case 1729:
#line 11827 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18455 "parser.c" /* yacc.c:1646  */
    break;

  case 1730:
#line 11831 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 18463 "parser.c" /* yacc.c:1646  */
    break;

  case 1731:
#line 11835 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 18471 "parser.c" /* yacc.c:1646  */
    break;

  case 1741:
#line 11860 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18479 "parser.c" /* yacc.c:1646  */
    break;

  case 1742:
#line 11864 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 18487 "parser.c" /* yacc.c:1646  */
    break;

  case 1743:
#line 11868 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 18495 "parser.c" /* yacc.c:1646  */
    break;

  case 1744:
#line 11875 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18503 "parser.c" /* yacc.c:1646  */
    break;

  case 1745:
#line 11879 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 18511 "parser.c" /* yacc.c:1646  */
    break;

  case 1746:
#line 11883 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18519 "parser.c" /* yacc.c:1646  */
    break;

  case 1747:
#line 11890 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 18530 "parser.c" /* yacc.c:1646  */
    break;

  case 1748:
#line 11897 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 18541 "parser.c" /* yacc.c:1646  */
    break;

  case 1749:
#line 11904 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 18552 "parser.c" /* yacc.c:1646  */
    break;

  case 1750:
#line 11914 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18563 "parser.c" /* yacc.c:1646  */
    break;

  case 1751:
#line 11921 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 18574 "parser.c" /* yacc.c:1646  */
    break;

  case 1752:
#line 11931 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18585 "parser.c" /* yacc.c:1646  */
    break;

  case 1753:
#line 11938 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 18596 "parser.c" /* yacc.c:1646  */
    break;

  case 1754:
#line 11948 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18604 "parser.c" /* yacc.c:1646  */
    break;

  case 1755:
#line 11952 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18618 "parser.c" /* yacc.c:1646  */
    break;

  case 1756:
#line 11965 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18626 "parser.c" /* yacc.c:1646  */
    break;

  case 1757:
#line 11969 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18640 "parser.c" /* yacc.c:1646  */
    break;

  case 1758:
#line 11983 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 18648 "parser.c" /* yacc.c:1646  */
    break;

  case 1759:
#line 11991 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18654 "parser.c" /* yacc.c:1646  */
    break;

  case 1760:
#line 11992 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18660 "parser.c" /* yacc.c:1646  */
    break;

  case 1761:
#line 11996 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18666 "parser.c" /* yacc.c:1646  */
    break;

  case 1762:
#line 11997 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18672 "parser.c" /* yacc.c:1646  */
    break;

  case 1763:
#line 12001 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18678 "parser.c" /* yacc.c:1646  */
    break;

  case 1764:
#line 12002 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18684 "parser.c" /* yacc.c:1646  */
    break;

  case 1765:
#line 12007 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18692 "parser.c" /* yacc.c:1646  */
    break;

  case 1766:
#line 12011 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18700 "parser.c" /* yacc.c:1646  */
    break;

  case 1767:
#line 12018 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18708 "parser.c" /* yacc.c:1646  */
    break;

  case 1768:
#line 12022 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18716 "parser.c" /* yacc.c:1646  */
    break;

  case 1769:
#line 12029 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18722 "parser.c" /* yacc.c:1646  */
    break;

  case 1770:
#line 12030 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18728 "parser.c" /* yacc.c:1646  */
    break;

  case 1771:
#line 12031 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 18734 "parser.c" /* yacc.c:1646  */
    break;

  case 1772:
#line 12035 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18740 "parser.c" /* yacc.c:1646  */
    break;

  case 1773:
#line 12036 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 18746 "parser.c" /* yacc.c:1646  */
    break;

  case 1774:
#line 12040 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 18752 "parser.c" /* yacc.c:1646  */
    break;

  case 1775:
#line 12041 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18758 "parser.c" /* yacc.c:1646  */
    break;

  case 1776:
#line 12042 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18764 "parser.c" /* yacc.c:1646  */
    break;

  case 1777:
#line 12047 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 18772 "parser.c" /* yacc.c:1646  */
    break;

  case 1778:
#line 12051 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 18785 "parser.c" /* yacc.c:1646  */
    break;

  case 1779:
#line 12063 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 18794 "parser.c" /* yacc.c:1646  */
    break;

  case 1780:
#line 12068 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 18803 "parser.c" /* yacc.c:1646  */
    break;

  case 1781:
#line 12076 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 18811 "parser.c" /* yacc.c:1646  */
    break;

  case 1782:
#line 12080 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 18819 "parser.c" /* yacc.c:1646  */
    break;

  case 1783:
#line 12084 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 18827 "parser.c" /* yacc.c:1646  */
    break;

  case 1784:
#line 12088 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 18835 "parser.c" /* yacc.c:1646  */
    break;

  case 1785:
#line 12092 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 18843 "parser.c" /* yacc.c:1646  */
    break;

  case 1786:
#line 12096 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 18851 "parser.c" /* yacc.c:1646  */
    break;

  case 1787:
#line 12100 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 18859 "parser.c" /* yacc.c:1646  */
    break;

  case 1788:
#line 12104 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 18867 "parser.c" /* yacc.c:1646  */
    break;

  case 1789:
#line 12110 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18873 "parser.c" /* yacc.c:1646  */
    break;

  case 1790:
#line 12111 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18879 "parser.c" /* yacc.c:1646  */
    break;

  case 1791:
#line 12118 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 1;
  }
#line 18887 "parser.c" /* yacc.c:1646  */
    break;

  case 1792:
#line 12122 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 1;
  }
#line 18895 "parser.c" /* yacc.c:1646  */
    break;

  case 1793:
#line 12126 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 0;
  }
#line 18903 "parser.c" /* yacc.c:1646  */
    break;


#line 18907 "parser.c" /* yacc.c:1646  */
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
#line 12302 "parser.y" /* yacc.c:1906  */

