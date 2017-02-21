/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 27 "parser.y"

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
int				cb_exp_line = 0;

cb_tree				cobc_printer_node = NULL;
int				functions_are_all = 0;
int				non_const_word = 0;
int				suppress_data_exceptions = 0;
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
static struct cb_cd		*current_cd;
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
static unsigned int		first_prog;
static unsigned int		setup_from_identification;
static unsigned int		use_global_ind;
static unsigned int		same_area;
static unsigned int		inspect_keyword;
static unsigned int		main_flag_set;
static int			next_label_id;
static int			eval_level;
static int			eval_inc;
static int			eval_inc2;
static int			depth;
static int			first_nested_program;
static int			call_mode;
static int			size_mode;
static cob_flags_t		set_attr_val_on;
static cob_flags_t		set_attr_val_off;
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
static cb_tree			default_rounded_mode;

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
#define	COBC_HD_COMMUNICATION_SECTION	(1U << 11)
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
	current_statement->flag_in_debug = in_debugging;
	emit_statement (CB_TREE (current_statement));
	if (term) {
		term_array[term]++;
	}
	main_statement = current_statement;
}

/* create a new statement with base attributes of current_statement
   and set this as new current_statement */
static void
begin_implicit_statement (void)
{
	struct cb_statement	*new_statement;
	new_statement = cb_build_statement (NULL);
	new_statement->common = current_statement->common;
	new_statement->name = current_statement->name;
	new_statement->flag_in_debug = !!in_debugging;
	current_statement = new_statement;
	main_statement->body = cb_list_add (main_statement->body,
					    CB_TREE (current_statement));
}

# if 0 /* activate only for debugging purposes for attribs */
static
void print_bits (cob_flags_t num)
{
	unsigned int 	size = sizeof (cob_flags_t);
	unsigned int	max_pow = 1 << (size * 8 - 1);
	int 		i = 0;

	for(; i < size * 8; ++i){
		/* Print last bit and shift left. */
		fprintf (stderr, "%u ", num & max_pow ? 1 : 0);
		num = num << 1;
 	}
	fprintf (stderr, "\n");
}
#endif

static void
emit_entry (const char *name, const int encode, cb_tree using_list, cb_tree convention)
{
	cb_tree		l;
	cb_tree		label;
	cb_tree		x;
	cb_tree		entry_conv;
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

	if (convention) {
		entry_conv = convention;
	} else {
		entry_conv = current_program->entry_convention;
	}

	current_program->entry_list =
		cb_list_append (current_program->entry_list,
				CB_BUILD_PAIR (label, CB_BUILD_PAIR(entry_conv, using_list)));
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
	} else {
		cobc_err_msg ("call to '%s' without any open term for %s",
			"terminator_warning", name);
		COBC_ABORT ();
	}
	if (cb_warn_terminator) {
		cb_warning_x (CB_TREE (current_statement),
			_("%s statement not terminated by END-%s"),
			name, name);
	}

	/* Free tree associated with terminator */
	if (stmt) {
		cobc_parse_free (stmt);
	}
}

static void
terminator_error (cb_tree stmt, const unsigned int termid, const char *name)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
	} else {
		cobc_err_msg ("call to '%s' without any open term for %s",
			"terminator_error", name);
		COBC_ABORT ();
	}
	cb_error_x (CB_TREE (current_statement),
		_("%s statement not terminated by END-%s"),
		name, name);

	/* Free tree associated with terminator */
	if (stmt) {
		cobc_parse_free (stmt);
	}
}

static void
terminator_clear (cb_tree stmt, const unsigned int termid)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
	} else {
		cobc_err_msg ("call to '%s' without any open term for %s",
			"terminator_warning", current_statement->name);
		COBC_ABORT ();
	}
	/* Free tree associated with terminator */
	if (stmt) {
		cobc_parse_free (stmt);
	}
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

	if (current_field->flag_unbounded) {
		if (current_field->storage != CB_STORAGE_LINKAGE) {
			cb_error_x (CB_TREE(current_field), _("'%s' is not in LINKAGE SECTION"),
				cb_name (CB_TREE(current_field)));
		}
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
		if (occurs_max != cb_int0) {
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
			if (current_field->occurs_max <= current_field->occurs_min) {
				cb_error (_ ("OCCURS TO must be greater than OCCURS FROM"));
			}
		} else {
			current_field->occurs_max = 0;
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
check_relaxed_syntax (const cob_flags_t lev)
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
	case COBC_HD_COMMUNICATION_SECTION:
		s = "COMMUNICATION SECTION";
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

/* check if headers are present - return 0 if fine, 1 if missing
   Lev1 must always be present and is checked
   Lev2/3/4, if non-zero (forced) may be present
*/
static int
check_headers_present (const cob_flags_t lev1, const cob_flags_t lev2,
		       const cob_flags_t lev3, const cob_flags_t lev4)
{
	int ret = 0;
	if (!(header_check & lev1)) {
		header_check |= lev1;
		check_relaxed_syntax (lev1);
		ret = 1;
	}
	if (lev2) {
		if (!(header_check & lev2)) {
			header_check |= lev2;
			check_relaxed_syntax (lev2);
			ret = 1;
		}
	}
	if (lev3) {
		if (!(header_check & lev3)) {
			header_check |= lev3;
			check_relaxed_syntax (lev3);
			ret = 1;
		}
	}
	if (lev4) {
		if (!(header_check & lev4)) {
			header_check |= lev4;
			check_relaxed_syntax (lev4);
			ret = 1;
		}
	}
	return ret;
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
	suppress_data_exceptions = 0;
	same_area = 1;
	memset ((void *)eval_check, 0, sizeof(eval_check));
	memset ((void *)term_array, 0, sizeof(term_array));
	linage_file = NULL;
	current_file = NULL;
	current_cd = NULL;
	current_report = NULL;
	report_instance = NULL;
	next_label_list = NULL;
	default_rounded_mode = cb_int (COB_STORE_ROUND);
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
end_scope_of_program_name (struct cb_program *program, const unsigned char type)
{
	struct	cb_list	*prev = NULL;
	struct	cb_list *l = (struct cb_list *) defined_prog_list;

	/* create empty entry if the program has no PROCEDURE DIVISION, error for UDF */
	if (!program->entry_list) {
		if (type == CB_FUNCTION_TYPE) {
			cb_error (_("function '%s' has no PROCEDURE DIVISION"), program->program_name);
		} else {
			emit_entry (program->program_id, 0, NULL, NULL);
		}
	}

	if (program->nested_level == 0) {
		return;
	}

	/* Remove any subprograms */
	l = CB_LIST (defined_prog_list);
	while (l) {
		if (CB_PROGRAM (l->value)->nested_level > program->nested_level) {
			remove_program_name (l, prev);
		} else {
			prev = l;
		}
		if (prev && prev->chain != NULL) {
			l = CB_LIST (prev->chain);
		} else {
			l = NULL;
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
				if (prev->chain != NULL) {
					l = CB_LIST (prev->chain);
				} else {
					l = NULL;
				}
				break;
			} else {
				prev = l;
				if (l->chain != NULL) {
					l = CB_LIST (l->chain);
				} else {
					l = NULL;
				}
			}
		}
	}
}

static void
setup_program_start (void)
{
	if (setup_from_identification) {
		setup_from_identification = 0;
		return;
	}
	current_section = NULL;
	current_paragraph = NULL;

	if (depth != 0 && first_nested_program) {
		check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0);
	}
	first_nested_program = 1;

	if (first_prog) {
		first_prog = 0;
	} else {
		if (!current_program->flag_validated) {
			current_program->flag_validated = 1;
			cb_validate_program_body (current_program);
		}

		clear_initial_values ();
		current_program = cb_build_program (current_program, depth);
		build_nested_special (depth);
		cb_build_registers ();
	}
}

static int
setup_program (cb_tree id, cb_tree as_literal, const unsigned char type)
{
	setup_program_start();

	if (CB_LITERAL_P (id)) {
		stack_progid[depth] = (char *)(CB_LITERAL (id)->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME (id));
	}

	if (depth != 0 && type == CB_FUNCTION_TYPE) {
		cb_error ("functions may not be defined within a program/function");
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

	end_scope_of_program_name (current_program, type);

	if (name) {
		if (CB_LITERAL_P (name)) {
			s = (char *)(CB_LITERAL (name)->data);
		} else {
			s = (char *)(CB_NAME (name));
		}

		decrement_depth (s, type);
	}

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
check_not_both (const cob_flags_t flag1, const cob_flags_t flag2,
		const char *flag1_name, const char *flag2_name,
		const cob_flags_t flags, const cob_flags_t flag_to_set)
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
check_not_highlight_and_lowlight (const cob_flags_t flags,
				  const cob_flags_t flag_to_set)
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
			const int local_check_duplicate, cob_flags_t *flags)
{
	if (local_check_duplicate && (*flags & bitval)) {
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
	current_statement->attr_ptr->dispattrs |= attrib;
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

static cob_flags_t
zero_conflicting_flag (const cob_flags_t screen_flag, cob_flags_t parent_flag,
				const cob_flags_t flag1, const cob_flags_t flag2)
{
	if (screen_flag & flag1) {
		parent_flag &= ~flag2;
	} else if (screen_flag & flag2) {
		parent_flag &= ~flag1;
	}

	return parent_flag;
}

static cob_flags_t
zero_conflicting_flags (const cob_flags_t screen_flag, cob_flags_t parent_flag)
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
deduce_display_type (cb_tree x_list, cb_tree local_upon_value, cb_tree local_line_column,
		     struct cb_attr_struct * const attr_ptr)
{
	int	using_default_device_which_is_crt =
		local_upon_value == NULL && get_default_display_device () == cb_null;

	if (contains_only_screen_fields ((struct cb_list *) x_list)) {
		if (!contains_one_screen_field ((struct cb_list *) x_list)
		    || attr_ptr) {
			cb_verify_x (x_list, cb_accept_display_extensions,
				     _("non-standard DISPLAY"));
		}

		if (local_upon_value != NULL && local_upon_value != cb_null) {
			cb_error_x (x_list, _("screens may only be displayed on CRT"));
		}

		return SCREEN_DISPLAY;
	} else if (contains_fields_and_screens ((struct cb_list *) x_list)) {
		cb_error_x (x_list, _("cannot mix screens and fields in the same DISPLAY statement"));
		return MIXED_DISPLAY;
	} else if (local_line_column || attr_ptr) {
		if (local_upon_value != NULL && local_upon_value != cb_null) {
			cb_error_x (x_list, _("screen clauses may only be used for DISPLAY on CRT"));
		}

		cb_verify_x (x_list, cb_accept_display_extensions,
			     _("non-standard DISPLAY"));

		return FIELD_ON_SCREEN_DISPLAY;
	} else if (local_upon_value == cb_null || using_default_device_which_is_crt) {
		/* This is the only format permitted by the standard */
		return FIELD_ON_SCREEN_DISPLAY;
	} else if (display_type == FIELD_ON_SCREEN_DISPLAY && local_upon_value == NULL) {
		/* This is for when fields without clauses follow fields with screen clauses */
		return FIELD_ON_SCREEN_DISPLAY;
	} else {
		return DEVICE_DISPLAY;
	}
}

static void
set_display_type (cb_tree x_list, cb_tree local_upon_value,
		  cb_tree local_line_column, struct cb_attr_struct * const attr_ptr)
{
	display_type = deduce_display_type (x_list, local_upon_value, local_line_column, attr_ptr);
}

static void
error_if_different_display_type (cb_tree x_list, cb_tree local_upon_value,
				 cb_tree local_line_column, struct cb_attr_struct * const attr_ptr)
{
        const enum cb_display_type	type =
		deduce_display_type (x_list, local_upon_value, local_line_column, attr_ptr);

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
		CB_REFERENCE_P (x) && CB_FIELD (cb_ref (x))
		&& CB_FIELD (cb_ref (x))->usage != CB_USAGE_DISPLAY;

	if (is_numeric_literal) {
		cb_error_x (x, _("%s is not an alphanumeric literal"), CB_LITERAL (x)->data);
	} else if (is_field_with_usage_not_display) {
		cb_error_x (x, _("'%s' is not USAGE DISPLAY"), cb_name (x));
	}
}
 

/* Line 371 of yacc.c  */
#line 1696 "parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
     CARD_PUNCH = 310,
     CARD_READER = 311,
     CASSETTE = 312,
     CD = 313,
     CF = 314,
     CH = 315,
     CHAINING = 316,
     CHARACTER = 317,
     CHARACTERS = 318,
     CLASS = 319,
     CLASSIFICATION = 320,
     CLASS_NAME = 321,
     CLOSE = 322,
     COBOL = 323,
     CODE = 324,
     CODE_SET = 325,
     COLLATING = 326,
     COL = 327,
     COLS = 328,
     COLUMN = 329,
     COLUMNS = 330,
     COMMA = 331,
     COMMAND_LINE = 332,
     COMMA_DELIM = 333,
     COMMIT = 334,
     COMMON = 335,
     COMMUNICATION = 336,
     COMP = 337,
     COMPUTE = 338,
     COMP_1 = 339,
     COMP_2 = 340,
     COMP_3 = 341,
     COMP_4 = 342,
     COMP_5 = 343,
     COMP_6 = 344,
     COMP_X = 345,
     CONCATENATE_FUNC = 346,
     CONDITION = 347,
     CONFIGURATION = 348,
     CONSTANT = 349,
     CONTAINS = 350,
     CONTENT = 351,
     CONTINUE = 352,
     CONTROL = 353,
     CONTROLS = 354,
     CONVERSION = 355,
     CONVERTING = 356,
     COPY = 357,
     CORRESPONDING = 358,
     COUNT = 359,
     CRT = 360,
     CRT_UNDER = 361,
     CURRENCY = 362,
     CURRENT_DATE_FUNC = 363,
     CURSOR = 364,
     CYCLE = 365,
     DATA = 366,
     DATE = 367,
     DAY = 368,
     DAY_OF_WEEK = 369,
     DE = 370,
     DEBUGGING = 371,
     DECIMAL_POINT = 372,
     DECLARATIVES = 373,
     DEFAULT = 374,
     DELETE = 375,
     DELIMITED = 376,
     DELIMITER = 377,
     DEPENDING = 378,
     DESCENDING = 379,
     DESTINATION = 380,
     DETAIL = 381,
     DISABLE = 382,
     DISC = 383,
     DISK = 384,
     DISPLAY = 385,
     DISPLAY_OF_FUNC = 386,
     DIVIDE = 387,
     DIVISION = 388,
     DOWN = 389,
     DUPLICATES = 390,
     DYNAMIC = 391,
     EBCDIC = 392,
     EC = 393,
     ECHO = 394,
     EGI = 395,
     EIGHTY_EIGHT = 396,
     ENABLE = 397,
     ELSE = 398,
     EMI = 399,
     END = 400,
     END_ACCEPT = 401,
     END_ADD = 402,
     END_CALL = 403,
     END_COMPUTE = 404,
     END_DELETE = 405,
     END_DISPLAY = 406,
     END_DIVIDE = 407,
     END_EVALUATE = 408,
     END_FUNCTION = 409,
     END_IF = 410,
     END_MULTIPLY = 411,
     END_PERFORM = 412,
     END_PROGRAM = 413,
     END_READ = 414,
     END_RECEIVE = 415,
     END_RETURN = 416,
     END_REWRITE = 417,
     END_SEARCH = 418,
     END_START = 419,
     END_STRING = 420,
     END_SUBTRACT = 421,
     END_UNSTRING = 422,
     END_WRITE = 423,
     ENTRY = 424,
     ENTRY_CONVENTION = 425,
     ENVIRONMENT = 426,
     ENVIRONMENT_NAME = 427,
     ENVIRONMENT_VALUE = 428,
     EOL = 429,
     EOP = 430,
     EOS = 431,
     EQUAL = 432,
     ERASE = 433,
     ERROR = 434,
     ESCAPE = 435,
     ESI = 436,
     EVALUATE = 437,
     EVENT_STATUS = 438,
     EXCEPTION = 439,
     EXCEPTION_CONDITION = 440,
     EXCLUSIVE = 441,
     EXIT = 442,
     EXPONENTIATION = 443,
     EXTEND = 444,
     EXTERNAL = 445,
     F = 446,
     FD = 447,
     FILE_CONTROL = 448,
     FILE_ID = 449,
     FILLER = 450,
     FINAL = 451,
     FIRST = 452,
     FIXED = 453,
     FLOAT_BINARY_128 = 454,
     FLOAT_BINARY_32 = 455,
     FLOAT_BINARY_64 = 456,
     FLOAT_DECIMAL_16 = 457,
     FLOAT_DECIMAL_34 = 458,
     FLOAT_DECIMAL_7 = 459,
     FLOAT_EXTENDED = 460,
     FLOAT_LONG = 461,
     FLOAT_SHORT = 462,
     FOOTING = 463,
     FOR = 464,
     FOREGROUND_COLOR = 465,
     FOREVER = 466,
     FORMATTED_DATE_FUNC = 467,
     FORMATTED_DATETIME_FUNC = 468,
     FORMATTED_TIME_FUNC = 469,
     FREE = 470,
     FROM = 471,
     FROM_CRT = 472,
     FULL = 473,
     FUNCTION = 474,
     FUNCTION_ID = 475,
     FUNCTION_NAME = 476,
     GENERATE = 477,
     GIVING = 478,
     GLOBAL = 479,
     GO = 480,
     GOBACK = 481,
     GREATER = 482,
     GREATER_OR_EQUAL = 483,
     GRID = 484,
     GROUP = 485,
     HEADING = 486,
     HIGHLIGHT = 487,
     HIGH_VALUE = 488,
     ID = 489,
     IDENTIFICATION = 490,
     IF = 491,
     IGNORE = 492,
     IGNORING = 493,
     IN = 494,
     INDEX = 495,
     INDEXED = 496,
     INDICATE = 497,
     INITIALIZE = 498,
     INITIALIZED = 499,
     INITIATE = 500,
     INPUT = 501,
     INPUT_OUTPUT = 502,
     INSPECT = 503,
     INTERMEDIATE = 504,
     INTO = 505,
     INTRINSIC = 506,
     INVALID = 507,
     INVALID_KEY = 508,
     IS = 509,
     I_O = 510,
     I_O_CONTROL = 511,
     JUSTIFIED = 512,
     KEPT = 513,
     KEY = 514,
     KEYBOARD = 515,
     LABEL = 516,
     LAST = 517,
     LEADING = 518,
     LEFT = 519,
     LEFTLINE = 520,
     LENGTH = 521,
     LENGTH_FUNC = 522,
     LENGTH_OF = 523,
     LESS = 524,
     LESS_OR_EQUAL = 525,
     LIMIT = 526,
     LIMITS = 527,
     LINAGE = 528,
     LINAGE_COUNTER = 529,
     LINE = 530,
     LINE_COUNTER = 531,
     LINES = 532,
     LINKAGE = 533,
     LITERAL = 534,
     LOCALE = 535,
     LOCALE_DATE_FUNC = 536,
     LOCALE_TIME_FUNC = 537,
     LOCALE_TIME_FROM_FUNC = 538,
     LOCAL_STORAGE = 539,
     LOCK = 540,
     LOWER = 541,
     LOWER_CASE_FUNC = 542,
     LOWLIGHT = 543,
     LOW_VALUE = 544,
     MANUAL = 545,
     MAGNETIC_TAPE = 546,
     MEMORY = 547,
     MERGE = 548,
     MESSAGE = 549,
     MINUS = 550,
     MNEMONIC_NAME = 551,
     MODE = 552,
     MOVE = 553,
     MULTIPLE = 554,
     MULTIPLY = 555,
     NAME = 556,
     NATIONAL = 557,
     NATIONAL_EDITED = 558,
     NATIONAL_OF_FUNC = 559,
     NATIVE = 560,
     NEAREST_AWAY_FROM_ZERO = 561,
     NEAREST_EVEN = 562,
     NEAREST_TOWARD_ZERO = 563,
     NEGATIVE = 564,
     NESTED = 565,
     NEXT = 566,
     NEXT_PAGE = 567,
     NO = 568,
     NO_DATA = 569,
     NO_ECHO = 570,
     NORMAL = 571,
     NOT = 572,
     NOTHING = 573,
     NOT_END = 574,
     NOT_EOP = 575,
     NOT_ESCAPE = 576,
     NOT_EQUAL = 577,
     NOT_EXCEPTION = 578,
     NOT_INVALID_KEY = 579,
     NOT_OVERFLOW = 580,
     NOT_SIZE_ERROR = 581,
     NO_ADVANCING = 582,
     NUMBER = 583,
     NUMBERS = 584,
     NUMERIC = 585,
     NUMERIC_EDITED = 586,
     NUMVALC_FUNC = 587,
     OBJECT_COMPUTER = 588,
     OCCURS = 589,
     OF = 590,
     OFF = 591,
     OMITTED = 592,
     ON = 593,
     ONLY = 594,
     OPEN = 595,
     OPTIONAL = 596,
     OPTIONS = 597,
     OR = 598,
     ORDER = 599,
     ORGANIZATION = 600,
     OTHER = 601,
     OUTPUT = 602,
     OVERLINE = 603,
     PACKED_DECIMAL = 604,
     PADDING = 605,
     PAGE = 606,
     PAGE_COUNTER = 607,
     PARAGRAPH = 608,
     PERFORM = 609,
     PH = 610,
     PF = 611,
     PICTURE = 612,
     PICTURE_SYMBOL = 613,
     PLUS = 614,
     POINTER = 615,
     POSITION = 616,
     POSITIVE = 617,
     PRESENT = 618,
     PREVIOUS = 619,
     PRINT = 620,
     PRINTER = 621,
     PRINTER_1 = 622,
     PRINTING = 623,
     PROCEDURE = 624,
     PROCEDURES = 625,
     PROCEED = 626,
     PROGRAM = 627,
     PROGRAM_ID = 628,
     PROGRAM_NAME = 629,
     PROGRAM_POINTER = 630,
     PROHIBITED = 631,
     PROMPT = 632,
     PROTECTED = 633,
     QUEUE = 634,
     QUOTE = 635,
     RANDOM = 636,
     RD = 637,
     READ = 638,
     READY_TRACE = 639,
     RECEIVE = 640,
     RECORD = 641,
     RECORDING = 642,
     RECORDS = 643,
     RECURSIVE = 644,
     REDEFINES = 645,
     REEL = 646,
     REFERENCE = 647,
     REFERENCES = 648,
     RELATIVE = 649,
     RELEASE = 650,
     REMAINDER = 651,
     REMOVAL = 652,
     RENAMES = 653,
     REPLACE = 654,
     REPLACING = 655,
     REPORT = 656,
     REPORTING = 657,
     REPORTS = 658,
     REPOSITORY = 659,
     REQUIRED = 660,
     RESERVE = 661,
     RESET = 662,
     RESET_TRACE = 663,
     RETRY = 664,
     RETURN = 665,
     RETURNING = 666,
     REVERSE = 667,
     REVERSE_FUNC = 668,
     REVERSE_VIDEO = 669,
     REVERSED = 670,
     REWIND = 671,
     REWRITE = 672,
     RF = 673,
     RH = 674,
     RIGHT = 675,
     ROLLBACK = 676,
     ROUNDED = 677,
     ROUNDING = 678,
     RUN = 679,
     S = 680,
     SAME = 681,
     SCREEN = 682,
     SCREEN_CONTROL = 683,
     SCROLL = 684,
     SD = 685,
     SEARCH = 686,
     SECONDS = 687,
     SECTION = 688,
     SECURE = 689,
     SEGMENT = 690,
     SEGMENT_LIMIT = 691,
     SELECT = 692,
     SEMI_COLON = 693,
     SENTENCE = 694,
     SEPARATE = 695,
     SEQUENCE = 696,
     SEQUENTIAL = 697,
     SET = 698,
     SEVENTY_EIGHT = 699,
     SHARING = 700,
     SIGN = 701,
     SIGNED = 702,
     SIGNED_INT = 703,
     SIGNED_LONG = 704,
     SIGNED_SHORT = 705,
     SIXTY_SIX = 706,
     SIZE = 707,
     SIZE_ERROR = 708,
     SORT = 709,
     SORT_MERGE = 710,
     SOURCE = 711,
     SOURCE_COMPUTER = 712,
     SPACE = 713,
     SPECIAL_NAMES = 714,
     STANDARD = 715,
     STANDARD_1 = 716,
     STANDARD_2 = 717,
     START = 718,
     STATIC = 719,
     STATUS = 720,
     STDCALL = 721,
     STEP = 722,
     STOP = 723,
     STRING = 724,
     SUB_QUEUE_1 = 725,
     SUB_QUEUE_2 = 726,
     SUB_QUEUE_3 = 727,
     SUBSTITUTE_FUNC = 728,
     SUBSTITUTE_CASE_FUNC = 729,
     SUBTRACT = 730,
     SUM = 731,
     SUPPRESS = 732,
     SYMBOLIC = 733,
     SYNCHRONIZED = 734,
     SYSTEM_DEFAULT = 735,
     SYSTEM_OFFSET = 736,
     TAB = 737,
     TABLE = 738,
     TALLYING = 739,
     TAPE = 740,
     TERMINAL = 741,
     TERMINATE = 742,
     TEXT = 743,
     TEST = 744,
     THAN = 745,
     THEN = 746,
     THRU = 747,
     TIME = 748,
     TIME_OUT = 749,
     TIMES = 750,
     TO = 751,
     TOK_AMPER = 752,
     TOK_CLOSE_PAREN = 753,
     TOK_COLON = 754,
     TOK_DIV = 755,
     TOK_DOT = 756,
     TOK_EQUAL = 757,
     TOK_EXTERN = 758,
     TOK_FALSE = 759,
     TOK_FILE = 760,
     TOK_GREATER = 761,
     TOK_INITIAL = 762,
     TOK_LESS = 763,
     TOK_MINUS = 764,
     TOK_MUL = 765,
     TOK_NULL = 766,
     TOK_OVERFLOW = 767,
     TOK_OPEN_PAREN = 768,
     TOK_PLUS = 769,
     TOK_TRUE = 770,
     TOP = 771,
     TOWARD_GREATER = 772,
     TOWARD_LESSER = 773,
     TRAILING = 774,
     TRANSFORM = 775,
     TRIM_FUNC = 776,
     TRUNCATION = 777,
     TYPE = 778,
     U = 779,
     UNBOUNDED = 780,
     UNDERLINE = 781,
     UNIT = 782,
     UNLOCK = 783,
     UNSIGNED = 784,
     UNSIGNED_INT = 785,
     UNSIGNED_LONG = 786,
     UNSIGNED_SHORT = 787,
     UNSTRING = 788,
     UNTIL = 789,
     UP = 790,
     UPDATE = 791,
     UPON = 792,
     UPON_ARGUMENT_NUMBER = 793,
     UPON_COMMAND_LINE = 794,
     UPON_ENVIRONMENT_NAME = 795,
     UPON_ENVIRONMENT_VALUE = 796,
     UPPER = 797,
     UPPER_CASE_FUNC = 798,
     USAGE = 799,
     USE = 800,
     USER = 801,
     USER_DEFAULT = 802,
     USER_FUNCTION_NAME = 803,
     USING = 804,
     V = 805,
     VALUE = 806,
     VARIABLE = 807,
     VARYING = 808,
     WAIT = 809,
     WHEN = 810,
     WHEN_COMPILED_FUNC = 811,
     WITH = 812,
     WORD = 813,
     WORDS = 814,
     WORKING_STORAGE = 815,
     WRITE = 816,
     YYYYDDD = 817,
     YYYYMMDD = 818,
     ZERO = 819,
     SHIFT_PREFER = 820,
     PURGE = 821,
     SEND = 822,
     OVERFLOW = 823
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 2331 "parser.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9694

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  569
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  960
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2206
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3207

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   823

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
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    12,    15,    17,
      20,    22,    24,    25,    28,    34,    40,    41,    43,    45,
      48,    52,    56,    60,    61,    65,    67,    69,    70,    71,
      80,    81,    88,    90,    92,    94,    96,    97,   100,   101,
     105,   107,   109,   111,   113,   116,   119,   121,   123,   124,
     128,   133,   134,   140,   141,   145,   147,   149,   151,   152,
     157,   159,   161,   163,   165,   169,   170,   174,   180,   181,
     185,   186,   188,   190,   193,   196,   197,   202,   203,   207,
     208,   212,   213,   218,   219,   222,   226,   229,   231,   234,
     236,   238,   240,   242,   248,   252,   256,   261,   263,   265,
     267,   269,   271,   274,   275,   276,   281,   282,   285,   289,
     291,   294,   298,   302,   306,   310,   312,   315,   316,   319,
     320,   322,   325,   329,   331,   334,   336,   338,   340,   342,
     344,   346,   348,   350,   352,   354,   356,   358,   359,   363,
     366,   370,   374,   376,   377,   379,   381,   385,   390,   391,
     397,   399,   401,   403,   405,   407,   409,   411,   414,   416,
     420,   421,   426,   428,   432,   434,   436,   438,   440,   442,
     444,   446,   448,   451,   452,   455,   459,   461,   464,   468,
     470,   473,   475,   478,   483,   485,   488,   490,   494,   499,
     505,   506,   510,   514,   520,   524,   529,   533,   537,   543,
     544,   548,   549,   552,   553,   556,   557,   560,   561,   568,
     569,   572,   574,   576,   578,   580,   582,   584,   586,   588,
     590,   592,   594,   596,   598,   604,   610,   616,   622,   628,
     634,   636,   638,   640,   642,   644,   646,   648,   650,   652,
     654,   656,   658,   660,   662,   663,   667,   668,   670,   672,
     674,   676,   677,   679,   681,   686,   688,   690,   692,   700,
     701,   706,   710,   714,   716,   721,   722,   724,   726,   727,
     733,   736,   739,   741,   742,   747,   753,   756,   760,   762,
     764,   768,   770,   773,   778,   783,   788,   790,   794,   799,
     804,   808,   810,   812,   816,   819,   822,   825,   826,   829,
     833,   835,   838,   840,   842,   848,   849,   851,   853,   855,
     856,   863,   865,   868,   871,   872,   875,   876,   887,   888,
     892,   893,   897,   898,   901,   904,   905,   911,   915,   917,
     919,   920,   923,   926,   929,   931,   933,   935,   937,   939,
     941,   943,   945,   947,   953,   954,   956,   958,   963,   970,
     980,   981,   985,   986,   989,   990,   993,   997,  1003,  1009,
    1011,  1013,  1015,  1017,  1021,  1027,  1028,  1031,  1033,  1035,
    1037,  1042,  1045,  1048,  1053,  1055,  1057,  1059,  1061,  1063,
    1065,  1067,  1072,  1073,  1076,  1079,  1082,  1085,  1087,  1090,
    1091,  1092,  1098,  1099,  1102,  1105,  1106,  1112,  1113,  1116,
    1121,  1125,  1130,  1131,  1133,  1135,  1137,  1140,  1145,  1150,
    1155,  1160,  1165,  1170,  1175,  1180,  1185,  1190,  1195,  1207,
    1208,  1210,  1212,  1215,  1220,  1225,  1230,  1237,  1242,  1246,
    1251,  1252,  1254,  1256,  1258,  1261,  1266,  1271,  1276,  1281,
    1286,  1291,  1298,  1299,  1300,  1306,  1307,  1308,  1311,  1314,
    1318,  1320,  1322,  1324,  1325,  1330,  1334,  1337,  1338,  1340,
    1342,  1344,  1345,  1348,  1350,  1353,  1356,  1360,  1362,  1364,
    1366,  1368,  1370,  1372,  1374,  1376,  1378,  1380,  1382,  1384,
    1387,  1389,  1391,  1393,  1395,  1397,  1399,  1401,  1403,  1405,
    1411,  1412,  1415,  1416,  1421,  1427,  1428,  1434,  1437,  1440,
    1441,  1444,  1446,  1448,  1450,  1452,  1454,  1456,  1458,  1460,
    1462,  1464,  1466,  1468,  1470,  1473,  1477,  1478,  1481,  1482,
    1484,  1487,  1489,  1491,  1495,  1497,  1499,  1501,  1503,  1505,
    1507,  1509,  1511,  1513,  1515,  1517,  1519,  1521,  1523,  1525,
    1527,  1529,  1531,  1533,  1535,  1538,  1541,  1544,  1547,  1550,
    1553,  1556,  1559,  1562,  1565,  1567,  1569,  1571,  1573,  1575,
    1577,  1579,  1581,  1583,  1585,  1589,  1593,  1600,  1601,  1604,
    1612,  1622,  1631,  1632,  1635,  1636,  1639,  1640,  1643,  1644,
    1648,  1649,  1653,  1654,  1656,  1658,  1659,  1665,  1667,  1669,
    1670,  1674,  1676,  1679,  1681,  1684,  1687,  1691,  1693,  1694,
    1700,  1702,  1705,  1707,  1711,  1712,  1717,  1720,  1723,  1724,
    1725,  1731,  1732,  1733,  1739,  1740,  1741,  1747,  1748,  1751,
    1752,  1759,  1760,  1763,  1766,  1769,  1773,  1775,  1777,  1780,
    1783,  1785,  1788,  1793,  1795,  1800,  1803,  1804,  1807,  1809,
    1811,  1813,  1815,  1817,  1821,  1826,  1831,  1836,  1840,  1841,
    1844,  1845,  1851,  1852,  1855,  1857,  1859,  1861,  1863,  1865,
    1867,  1869,  1871,  1873,  1875,  1877,  1879,  1881,  1883,  1885,
    1887,  1891,  1893,  1895,  1898,  1900,  1903,  1905,  1907,  1908,
    1911,  1914,  1915,  1918,  1923,  1928,  1929,  1933,  1935,  1937,
    1941,  1948,  1951,  1955,  1958,  1961,  1965,  1968,  1970,  1973,
    1976,  1978,  1980,  1982,  1985,  1988,  1990,  1995,  1998,  2002,
    2003,  2004,  2010,  2011,  2013,  2016,  2020,  2022,  2023,  2028,
    2032,  2033,  2036,  2039,  2042,  2044,  2046,  2049,  2052,  2054,
    2056,  2058,  2060,  2062,  2064,  2066,  2068,  2070,  2072,  2074,
    2076,  2078,  2083,  2085,  2087,  2093,  2099,  2103,  2107,  2109,
    2111,  2113,  2115,  2117,  2119,  2121,  2123,  2126,  2129,  2132,
    2134,  2137,  2139,  2142,  2144,  2146,  2148,  2150,  2151,  2153,
    2155,  2156,  2158,  2160,  2164,  2167,  2168,  2169,  2170,  2181,
    2182,  2187,  2188,  2189,  2193,  2194,  2198,  2200,  2203,  2208,
    2209,  2212,  2215,  2216,  2220,  2224,  2229,  2232,  2234,  2238,
    2239,  2241,  2242,  2245,  2248,  2249,  2250,  2258,  2259,  2262,
    2264,  2266,  2269,  2271,  2273,  2274,  2281,  2282,  2285,  2288,
    2290,  2291,  2293,  2294,  2295,  2299,  2300,  2303,  2306,  2308,
    2310,  2312,  2314,  2316,  2318,  2320,  2322,  2324,  2326,  2328,
    2330,  2332,  2334,  2336,  2338,  2340,  2342,  2344,  2346,  2348,
    2350,  2352,  2354,  2356,  2358,  2360,  2362,  2364,  2366,  2368,
    2370,  2372,  2374,  2376,  2378,  2380,  2382,  2384,  2386,  2388,
    2390,  2392,  2394,  2396,  2398,  2400,  2402,  2404,  2406,  2408,
    2410,  2412,  2414,  2417,  2420,  2421,  2426,  2427,  2432,  2436,
    2440,  2445,  2449,  2454,  2458,  2462,  2467,  2472,  2476,  2481,
    2485,  2490,  2496,  2500,  2505,  2509,  2513,  2517,  2519,  2521,
    2522,  2524,  2526,  2529,  2531,  2533,  2535,  2538,  2542,  2544,
    2547,  2550,  2553,  2556,  2560,  2564,  2568,  2572,  2574,  2576,
    2578,  2580,  2582,  2584,  2586,  2588,  2590,  2592,  2594,  2596,
    2601,  2603,  2605,  2607,  2609,  2614,  2618,  2620,  2623,  2625,
    2627,  2631,  2635,  2639,  2643,  2647,  2650,  2652,  2654,  2656,
    2658,  2660,  2662,  2664,  2665,  2667,  2668,  2673,  2678,  2684,
    2691,  2700,  2701,  2704,  2705,  2707,  2708,  2712,  2716,  2721,
    2722,  2725,  2726,  2730,  2732,  2735,  2740,  2741,  2744,  2745,
    2750,  2751,  2758,  2759,  2761,  2763,  2765,  2767,  2769,  2772,
    2773,  2776,  2778,  2780,  2781,  2782,  2786,  2788,  2791,  2794,
    2798,  2799,  2802,  2805,  2808,  2809,  2813,  2816,  2819,  2824,
    2826,  2828,  2830,  2832,  2833,  2836,  2839,  2840,  2842,  2845,
    2848,  2849,  2851,  2854,  2855,  2857,  2858,  2862,  2864,  2867,
    2869,  2871,  2872,  2876,  2879,  2883,  2884,  2886,  2890,  2894,
    2897,  2898,  2903,  2908,  2909,  2911,  2913,  2915,  2916,  2921,
    2926,  2929,  2931,  2934,  2935,  2937,  2938,  2942,  2946,  2947,
    2951,  2952,  2955,  2957,  2960,  2962,  2963,  2968,  2972,  2976,
    2980,  2984,  2987,  2990,  2992,  2994,  2997,  2998,  3002,  3004,
    3006,  3008,  3011,  3013,  3016,  3018,  3020,  3023,  3026,  3029,
    3032,  3035,  3037,  3039,  3041,  3044,  3047,  3049,  3051,  3054,
    3057,  3059,  3061,  3063,  3065,  3069,  3071,  3075,  3079,  3083,
    3087,  3088,  3090,  3091,  3096,  3101,  3108,  3115,  3124,  3133,
    3134,  3136,  3137,  3141,  3142,  3146,  3150,  3151,  3156,  3159,
    3161,  3165,  3167,  3169,  3171,  3174,  3176,  3178,  3181,  3184,
    3188,  3191,  3195,  3197,  3201,  3204,  3206,  3208,  3210,  3211,
    3214,  3215,  3217,  3218,  3222,  3223,  3226,  3228,  3231,  3233,
    3235,  3237,  3238,  3241,  3242,  3246,  3248,  3249,  3253,  3255,
    3256,  3260,  3264,  3265,  3269,  3272,  3273,  3280,  3284,  3287,
    3289,  3290,  3292,  3293,  3297,  3303,  3304,  3307,  3308,  3312,
    3316,  3317,  3320,  3322,  3325,  3330,  3332,  3334,  3336,  3338,
    3340,  3342,  3344,  3345,  3349,  3350,  3354,  3356,  3359,  3360,
    3364,  3367,  3369,  3371,  3373,  3376,  3378,  3380,  3382,  3383,
    3387,  3390,  3396,  3398,  3401,  3404,  3407,  3409,  3411,  3413,
    3416,  3418,  3421,  3426,  3429,  3430,  3432,  3434,  3436,  3438,
    3443,  3444,  3446,  3448,  3451,  3454,  3458,  3462,  3463,  3467,
    3468,  3472,  3476,  3481,  3482,  3487,  3492,  3499,  3500,  3502,
    3503,  3507,  3509,  3512,  3518,  3520,  3522,  3524,  3526,  3527,
    3531,  3532,  3536,  3539,  3541,  3542,  3546,  3549,  3550,  3555,
    3558,  3559,  3561,  3563,  3565,  3567,  3571,  3572,  3575,  3577,
    3581,  3585,  3586,  3590,  3592,  3594,  3596,  3600,  3608,  3609,
    3613,  3614,  3619,  3627,  3628,  3631,  3632,  3634,  3637,  3639,
    3642,  3646,  3650,  3652,  3653,  3655,  3657,  3662,  3667,  3670,
    3671,  3673,  3675,  3679,  3682,  3683,  3687,  3689,  3691,  3692,
    3694,  3696,  3697,  3702,  3708,  3710,  3712,  3713,  3716,  3719,
    3720,  3722,  3725,  3726,  3728,  3731,  3732,  3734,  3735,  3739,
    3742,  3744,  3745,  3750,  3755,  3756,  3758,  3759,  3764,  3770,
    3771,  3773,  3776,  3780,  3781,  3783,  3785,  3786,  3791,  3796,
    3803,  3804,  3807,  3808,  3811,  3813,  3816,  3820,  3821,  3823,
    3824,  3828,  3831,  3837,  3838,  3840,  3843,  3846,  3849,  3852,
    3855,  3856,  3859,  3860,  3864,  3866,  3868,  3870,  3872,  3874,
    3876,  3878,  3880,  3882,  3884,  3886,  3891,  3895,  3897,  3900,
    3903,  3906,  3909,  3912,  3915,  3918,  3921,  3924,  3929,  3933,
    3938,  3940,  3943,  3947,  3949,  3952,  3956,  3960,  3965,  3966,
    3970,  3971,  3979,  3980,  3986,  3987,  3990,  3991,  3994,  3995,
    3999,  4000,  4003,  4008,  4009,  4012,  4017,  4018,  4023,  4028,
    4029,  4033,  4034,  4039,  4041,  4043,  4045,  4048,  4051,  4054,
    4057,  4059,  4061,  4064,  4066,  4067,  4069,  4070,  4075,  4078,
    4079,  4082,  4084,  4089,  4094,  4095,  4097,  4099,  4101,  4103,
    4105,  4106,  4111,  4117,  4119,  4122,  4125,  4126,  4130,  4132,
    4134,  4135,  4140,  4141,  4143,  4144,  4149,  4154,  4161,  4168,
    4177,  4178,  4180,  4183,  4184,  4186,  4187,  4191,  4193,  4196,
    4197,  4201,  4207,  4208,  4212,  4215,  4216,  4221,  4228,  4229,
    4233,  4235,  4239,  4242,  4245,  4248,  4252,  4253,  4257,  4258,
    4262,  4263,  4267,  4268,  4270,  4271,  4275,  4277,  4279,  4281,
    4283,  4285,  4293,  4294,  4296,  4298,  4300,  4302,  4304,  4306,
    4311,  4313,  4316,  4318,  4321,  4325,  4326,  4328,  4331,  4333,
    4337,  4339,  4341,  4346,  4348,  4350,  4352,  4353,  4358,  4365,
    4366,  4369,  4370,  4375,  4379,  4383,  4385,  4387,  4388,  4390,
    4392,  4393,  4395,  4396,  4399,  4402,  4403,  4405,  4408,  4410,
    4412,  4413,  4415,  4418,  4420,  4422,  4423,  4426,  4429,  4430,
    4432,  4435,  4436,  4438,  4441,  4442,  4445,  4448,  4449,  4451,
    4454,  4455,  4457,  4460,  4461,  4464,  4467,  4468,  4470,  4473,
    4474,  4476,  4479,  4482,  4485,  4488,  4491,  4492,  4494,  4497,
    4498,  4500,  4503,  4506,  4509,  4510,  4512,  4515,  4516,  4518,
    4521,  4522,  4524,  4527,  4530,  4531,  4533,  4536,  4537,  4539,
    4542,  4543,  4546,  4548,  4550,  4551,  4554,  4556,  4559,  4561,
    4564,  4568,  4572,  4574,  4576,  4578,  4580,  4582,  4584,  4586,
    4588,  4590,  4592,  4593,  4595,  4597,  4599,  4601,  4603,  4605,
    4607,  4609,  4611,  4613,  4615,  4617,  4619,  4621,  4623,  4625,
    4627,  4630,  4632,  4634,  4636,  4638,  4640,  4642,  4644,  4648,
    4649,  4651,  4653,  4657,  4661,  4663,  4667,  4671,  4673,  4677,
    4679,  4682,  4685,  4687,  4691,  4693,  4695,  4699,  4701,  4705,
    4707,  4711,  4713,  4716,  4719,  4721,  4723,  4726,  4728,  4730,
    4733,  4735,  4737,  4739,  4741,  4744,  4746,  4747,  4750,  4752,
    4754,  4756,  4760,  4762,  4764,  4767,  4769,  4771,  4773,  4776,
    4778,  4780,  4782,  4784,  4786,  4788,  4790,  4793,  4795,  4797,
    4801,  4802,  4804,  4806,  4809,  4811,  4813,  4815,  4817,  4819,
    4821,  4823,  4826,  4829,  4832,  4837,  4841,  4843,  4845,  4848,
    4850,  4852,  4854,  4856,  4858,  4860,  4862,  4865,  4868,  4871,
    4873,  4875,  4877,  4879,  4881,  4883,  4885,  4887,  4889,  4891,
    4893,  4895,  4897,  4899,  4901,  4903,  4905,  4907,  4909,  4911,
    4913,  4915,  4917,  4919,  4921,  4923,  4925,  4927,  4929,  4931,
    4933,  4935,  4938,  4940,  4942,  4944,  4946,  4950,  4953,  4956,
    4958,  4960,  4964,  4967,  4970,  4972,  4974,  4978,  4982,  4987,
    4993,  4995,  4997,  4999,  5001,  5003,  5005,  5007,  5009,  5011,
    5013,  5015,  5018,  5020,  5024,  5026,  5028,  5030,  5032,  5034,
    5036,  5038,  5041,  5047,  5053,  5059,  5064,  5069,  5075,  5081,
    5087,  5093,  5099,  5102,  5105,  5107,  5109,  5111,  5113,  5115,
    5117,  5119,  5121,  5123,  5124,  5129,  5135,  5136,  5140,  5143,
    5145,  5149,  5153,  5154,  5157,  5159,  5163,  5165,  5169,  5171,
    5175,  5177,  5181,  5182,  5183,  5185,  5186,  5188,  5189,  5191,
    5192,  5195,  5196,  5199,  5200,  5202,  5204,  5205,  5207,  5208,
    5210,  5213,  5214,  5217,  5218,  5222,  5224,  5226,  5228,  5230,
    5232,  5234,  5236,  5238,  5239,  5242,  5243,  5249,  5250,  5254,
    5256,  5258,  5260,  5262,  5264,  5266,  5268,  5270,  5272,  5274,
    5276,  5278,  5280,  5282,  5284,  5286,  5288,  5290,  5292,  5294,
    5296,  5298,  5300,  5302,  5304,  5306,  5308,  5310,  5312,  5314,
    5316,  5318,  5320,  5322,  5324,  5326,  5328,  5330,  5332,  5334,
    5336,  5338,  5340,  5342,  5344,  5346,  5348,  5350,  5352,  5354,
    5356,  5358,  5360,  5362,  5364,  5366,  5368,  5370,  5372,  5374,
    5376,  5378,  5380,  5382,  5384,  5386,  5388,  5390,  5392,  5394,
    5396,  5398,  5400,  5401,  5403,  5404,  5406,  5407,  5409,  5410,
    5412,  5413,  5415,  5417,  5418,  5420,  5421,  5423,  5424,  5426,
    5427,  5429,  5430,  5432,  5433,  5435,  5436,  5438,  5439,  5441,
    5442,  5444,  5445,  5448,  5449,  5451,  5452,  5454,  5455,  5457,
    5458,  5460,  5461,  5463,  5464,  5466,  5469,  5470,  5472,  5473,
    5475,  5476,  5478,  5479,  5481,  5482,  5484,  5485,  5487,  5489,
    5490,  5492,  5493,  5495,  5497,  5498,  5500,  5501,  5503,  5505,
    5506,  5509,  5512,  5513,  5515,  5516,  5518,  5519,  5521,  5522,
    5524,  5525,  5527,  5529,  5530,  5532,  5533,  5535,  5536,  5539,
    5541,  5543,  5544,  5546,  5547,  5549,  5550,  5552,  5553,  5555,
    5556,  5558,  5560,  5561,  5563,  5564,  5566,  5567,  5569,  5570,
    5572,  5575,  5576,  5578,  5579,  5581,  5582,  5584,  5585,  5587,
    5588,  5590,  5591,  5593,  5594,  5596,  5597,  5599,  5600,  5602,
    5603,  5605,  5607,  5608,  5610,  5611,  5615,  5616,  5618,  5621,
    5623,  5625,  5627,  5629,  5631,  5633,  5635,  5637,  5639,  5641,
    5643,  5645,  5647,  5649,  5651,  5653,  5655,  5657,  5659,  5662,
    5665,  5667,  5669,  5671,  5673,  5675,  5677,  5680,  5682,  5686,
    5689,  5691,  5693,  5695,  5698,  5700,  5703,  5705,  5708,  5710,
    5713,  5715,  5718,  5720,  5723,  5725,  5728
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     570,     0,    -1,    -1,   571,   572,    -1,   577,    -1,   573,
      -1,    -1,   574,   575,    -1,   576,    -1,   575,   576,    -1,
     579,    -1,   580,    -1,    -1,   578,   585,    -1,   586,   588,
     600,   585,   581,    -1,   586,   591,   600,   585,   584,    -1,
      -1,   582,    -1,   583,    -1,   582,   583,    -1,   158,   594,
     501,    -1,   154,   594,   501,    -1,   607,   722,   904,    -1,
      -1,   587,   133,   501,    -1,   235,    -1,   234,    -1,    -1,
      -1,   373,   589,   501,   593,   595,   590,   596,   501,    -1,
      -1,   220,   592,   501,   593,   595,   501,    -1,   374,    -1,
     279,    -1,   374,    -1,   279,    -1,    -1,    27,   279,    -1,
      -1,  1468,   597,  1485,    -1,    80,    -1,   598,    -1,   599,
      -1,   190,    -1,   599,    80,    -1,    80,   599,    -1,   507,
      -1,   389,    -1,    -1,   342,   501,   601,    -1,   602,   603,
     605,   501,    -1,    -1,   119,   422,  1477,  1468,  1436,    -1,
      -1,   170,  1468,   604,    -1,    68,    -1,   503,    -1,   466,
      -1,    -1,   249,   423,  1468,   606,    -1,   306,    -1,   307,
      -1,   376,    -1,   522,    -1,   608,   609,   672,    -1,    -1,
     171,   133,   501,    -1,   610,   611,   633,   634,   627,    -1,
      -1,    93,   433,   501,    -1,    -1,   612,    -1,   616,    -1,
     612,   616,    -1,   616,   612,    -1,    -1,   457,   501,   613,
     614,    -1,    -1,   626,   615,   501,    -1,    -1,  1504,   116,
     297,    -1,    -1,   333,   501,   617,   618,    -1,    -1,   626,
     501,    -1,   626,   619,   501,    -1,   619,   501,    -1,   620,
      -1,   619,   620,    -1,   621,    -1,   622,    -1,   623,    -1,
     624,    -1,   292,   452,  1468,  1405,  1514,    -1,  1520,  1468,
    1363,    -1,   436,  1468,  1405,    -1,  1453,    65,  1468,   625,
      -1,  1363,    -1,   280,    -1,   547,    -1,   480,    -1,   558,
      -1,   626,   558,    -1,    -1,    -1,   404,   501,   628,   629,
      -1,    -1,   630,   501,    -1,   630,     1,   501,    -1,   631,
      -1,   630,   631,    -1,   219,     9,   251,    -1,   219,   558,
     595,    -1,   219,   632,   251,    -1,   372,   558,   595,    -1,
     221,    -1,   632,   221,    -1,    -1,   459,   501,    -1,    -1,
     635,    -1,   636,   501,    -1,   635,   636,   501,    -1,   637,
      -1,   636,   637,    -1,   638,    -1,   644,    -1,   653,    -1,
     663,    -1,   660,    -1,   664,    -1,   666,    -1,   667,    -1,
     668,    -1,   669,    -1,   670,    -1,   671,    -1,    -1,   558,
     639,   640,    -1,  1468,   105,    -1,  1405,  1468,  1367,    -1,
    1468,  1367,   641,    -1,   642,    -1,    -1,   642,    -1,   643,
      -1,  1188,  1482,  1367,    -1,   643,  1188,  1482,  1367,    -1,
      -1,    11,  1367,   645,  1468,   646,    -1,   305,    -1,   461,
      -1,   462,    -1,   137,    -1,    29,    -1,   647,    -1,   648,
      -1,   647,   648,    -1,   651,    -1,   651,   492,   651,    -1,
      -1,   651,    17,   649,   650,    -1,   651,    -1,   650,    17,
     651,    -1,   279,    -1,   458,    -1,   564,    -1,   380,    -1,
     233,    -1,   289,    -1,   458,    -1,   564,    -1,   655,   654,
      -1,    -1,   239,   558,    -1,   478,  1454,   656,    -1,   657,
      -1,   656,   657,    -1,   658,  1469,   659,    -1,  1368,    -1,
     658,  1368,    -1,  1406,    -1,   659,  1406,    -1,    64,  1367,
    1468,   661,    -1,   662,    -1,   661,   662,    -1,  1408,    -1,
    1408,   492,  1408,    -1,   280,  1367,  1468,   279,    -1,   107,
    1489,  1468,   279,   665,    -1,    -1,  1504,   358,   279,    -1,
     117,  1468,    76,    -1,   330,   446,  1468,   519,   440,    -1,
     109,  1468,  1362,    -1,   105,   465,  1468,  1362,    -1,   428,
    1468,  1362,    -1,   183,  1468,  1362,    -1,   673,   674,   676,
     675,   712,    -1,    -1,   247,   433,   501,    -1,    -1,   193,
     501,    -1,    -1,   256,   501,    -1,    -1,   676,   677,    -1,
      -1,   437,  1433,  1367,   678,   679,   501,    -1,    -1,   679,
     680,    -1,   681,    -1,   689,    -1,   691,    -1,   693,    -1,
     695,    -1,   697,    -1,   701,    -1,   703,    -1,   704,    -1,
     705,    -1,   707,    -1,   708,    -1,   710,    -1,    30,  1501,
     686,   685,   687,    -1,    30,  1501,   686,   683,   688,    -1,
      30,  1501,   686,   684,   688,    -1,    30,  1501,   686,   130,
     688,    -1,    30,  1501,   686,   260,   688,    -1,    30,  1501,
     686,   682,   688,    -1,   366,    -1,   367,    -1,   365,    -1,
     128,    -1,   129,    -1,   485,    -1,   381,    -1,    55,    -1,
      56,    -1,    57,    -1,   246,    -1,   247,    -1,   291,    -1,
     347,    -1,    -1,   275,     7,  1458,    -1,    -1,   190,    -1,
     136,    -1,   279,    -1,  1402,    -1,    -1,   279,    -1,  1402,
      -1,     4,  1477,  1468,   690,    -1,   442,    -1,   136,    -1,
     381,    -1,    19,  1486,  1470,  1468,   706,  1427,   692,    -1,
      -1,   477,   555,     9,  1411,    -1,   477,   555,   652,    -1,
    1505,  1468,   694,    -1,   558,    -1,   696,   465,  1468,  1362,
      -1,    -1,   505,    -1,   454,    -1,    -1,   698,   285,  1477,
    1468,   699,    -1,   290,   700,    -1,    34,   700,    -1,   186,
      -1,    -1,   557,   285,   338,  1513,    -1,   557,   285,   338,
     299,  1513,    -1,   557,   421,    -1,   345,  1468,   702,    -1,
     702,    -1,   241,    -1,  1486,  1451,   442,    -1,   394,    -1,
     275,   442,    -1,   350,  1453,  1468,  1366,    -1,   386,   122,
    1468,   461,    -1,   386,  1470,  1468,   706,    -1,  1362,    -1,
    1362,   502,  1361,    -1,  1362,   456,  1468,  1361,    -1,   394,
    1470,  1468,  1362,    -1,   406,   709,  1447,    -1,   313,    -1,
    1405,    -1,   445,  1504,   711,    -1,     9,  1483,    -1,   313,
    1483,    -1,   383,   339,    -1,    -1,   713,   501,    -1,   713,
       1,   501,    -1,   714,    -1,   713,   714,    -1,   715,    -1,
     717,    -1,   426,   716,  1446,  1460,  1351,    -1,    -1,   386,
      -1,   454,    -1,   455,    -1,    -1,   299,   718,  1458,  1496,
    1455,   719,    -1,   720,    -1,   719,   720,    -1,  1352,   721,
      -1,    -1,   361,  1405,    -1,    -1,   724,   725,   726,   723,
     777,   758,   839,   841,   843,   888,    -1,    -1,   111,   133,
     501,    -1,    -1,   505,   433,   501,    -1,    -1,   726,   727,
      -1,   728,   779,    -1,    -1,   730,  1352,   729,   731,   501,
      -1,   730,     1,   501,    -1,   192,    -1,   430,    -1,    -1,
     731,   732,    -1,  1468,   190,    -1,  1468,   224,    -1,   733,
      -1,   735,    -1,   739,    -1,   740,    -1,   743,    -1,   744,
      -1,   750,    -1,   753,    -1,   755,    -1,    48,  1455,  1405,
     738,   734,    -1,    -1,   388,    -1,    63,    -1,   386,  1455,
    1405,  1454,    -1,   386,  1455,  1405,   496,  1405,  1454,    -1,
     386,  1468,   553,  1462,  1492,   737,   738,  1454,   736,    -1,
      -1,   123,  1481,  1362,    -1,    -1,  1461,  1405,    -1,    -1,
     496,  1405,    -1,   261,  1515,  1511,    -1,   551,   335,   741,
    1468,   742,    -1,   551,   335,   194,  1468,   742,    -1,   558,
      -1,   234,    -1,   279,    -1,  1402,    -1,   111,  1515,  1364,
      -1,   273,  1468,  1366,  1475,   745,    -1,    -1,   745,   746,
      -1,   747,    -1,   748,    -1,   749,    -1,  1504,   208,  1449,
    1366,    -1,   516,  1366,    -1,    49,  1366,    -1,   387,  1477,
    1468,   751,    -1,   191,    -1,   550,    -1,   198,    -1,   552,
      -1,   752,    -1,   524,    -1,   425,    -1,    70,  1468,   694,
     754,    -1,    -1,   209,  1361,    -1,   756,   757,    -1,   401,
    1468,    -1,   403,  1445,    -1,  1367,    -1,   757,  1367,    -1,
      -1,    -1,    81,   433,   501,   759,   760,    -1,    -1,   760,
     761,    -1,   762,   779,    -1,    -1,    58,  1367,   763,   764,
     501,    -1,    -1,   764,   765,    -1,  1460,  1466,   246,   766,
      -1,  1460,   347,   770,    -1,  1460,  1466,   255,   773,    -1,
      -1,   767,    -1,   769,    -1,   768,    -1,   767,   768,    -1,
    1495,   379,  1468,  1398,    -1,  1495,   470,  1468,  1398,    -1,
    1495,   471,  1468,  1398,    -1,  1495,   472,  1468,  1398,    -1,
     294,   112,  1468,  1398,    -1,   294,   493,  1468,  1398,    -1,
    1495,   456,  1468,  1398,    -1,   488,   266,  1468,  1398,    -1,
     145,   259,  1468,  1398,    -1,   465,   259,  1468,  1398,    -1,
    1476,   104,  1468,  1398,    -1,  1398,  1398,  1398,  1398,  1398,
    1398,  1398,  1398,  1398,  1398,  1398,    -1,    -1,   771,    -1,
     772,    -1,   771,   772,    -1,   125,   104,  1468,  1398,    -1,
     488,   266,  1468,  1398,    -1,   465,   259,  1468,  1398,    -1,
     125,   483,   334,  1405,  1499,   826,    -1,   179,   259,  1468,
    1398,    -1,   125,  1468,  1398,    -1,   478,   125,  1468,  1398,
      -1,    -1,   774,    -1,   776,    -1,   775,    -1,   774,   775,
      -1,   294,   112,  1468,  1398,    -1,   294,   493,  1468,  1398,
      -1,  1495,   486,  1468,  1398,    -1,   488,   266,  1468,  1398,
      -1,   145,   259,  1468,  1398,    -1,   465,   259,  1468,  1398,
      -1,  1398,  1398,  1398,  1398,  1398,  1398,    -1,    -1,    -1,
     560,   433,   501,   778,   779,    -1,    -1,    -1,   780,   781,
      -1,   782,   501,    -1,   781,   782,   501,    -1,   798,    -1,
     794,    -1,   796,    -1,    -1,   784,   785,   783,   801,    -1,
     784,     1,   501,    -1,  1425,   558,    -1,    -1,   195,    -1,
     786,    -1,   558,    -1,    -1,  1468,   224,    -1,  1409,    -1,
     268,   789,    -1,   266,   789,    -1,    51,  1480,   789,    -1,
    1399,    -1,    42,    -1,    45,    -1,    44,    -1,    43,    -1,
      41,    -1,   793,    -1,   811,    -1,   812,    -1,   790,    -1,
     791,    -1,   792,    -1,     1,   501,    -1,   200,    -1,   204,
      -1,   201,    -1,   202,    -1,   199,    -1,   203,    -1,   205,
      -1,   360,    -1,   375,    -1,   451,   786,   398,  1402,   795,
      -1,    -1,   492,  1402,    -1,    -1,   141,   786,   797,   833,
      -1,   784,   786,    94,   787,   800,    -1,    -1,   444,   786,
     799,   806,   833,    -1,  1448,   788,    -1,   216,   558,    -1,
      -1,   801,   802,    -1,   803,    -1,   804,    -1,   807,    -1,
     808,    -1,   809,    -1,   813,    -1,   816,    -1,   829,    -1,
     830,    -1,   831,    -1,   832,    -1,   833,    -1,   838,    -1,
     390,  1399,    -1,  1468,   190,   805,    -1,    -1,    27,   279,
      -1,    -1,   807,    -1,  1468,   224,    -1,   357,    -1,   810,
      -1,   544,  1468,   810,    -1,    40,    -1,    82,    -1,   811,
      -1,   812,    -1,    86,    -1,    87,    -1,    88,    -1,    89,
      -1,    90,    -1,   130,    -1,   240,    -1,   349,    -1,   360,
      -1,   375,    -1,   450,    -1,   448,    -1,   449,    -1,   532,
      -1,   530,    -1,   531,    -1,    42,  1490,    -1,    42,   529,
      -1,    45,  1490,    -1,    45,   529,    -1,    44,  1490,    -1,
      44,   529,    -1,    43,  1490,    -1,    43,   529,    -1,    41,
    1490,    -1,    41,   529,    -1,   200,    -1,   201,    -1,   199,
      -1,   202,    -1,   203,    -1,   302,    -1,    84,    -1,   207,
      -1,    85,    -1,   206,    -1,  1491,   263,  1437,    -1,  1491,
     519,  1437,    -1,   334,  1405,   817,  1499,   820,   815,    -1,
      -1,   467,  1405,    -1,   334,  1405,   817,  1499,   820,   823,
     826,    -1,   334,   819,   525,  1499,   123,  1481,  1362,   823,
     826,    -1,   334,   136,   821,   818,   817,   822,   823,   826,
      -1,    -1,   496,  1405,    -1,    -1,   216,  1405,    -1,    -1,
    1405,   496,    -1,    -1,   123,  1481,  1362,    -1,    -1,    54,
    1462,   558,    -1,    -1,   244,    -1,   824,    -1,    -1,   824,
     825,  1470,  1468,  1361,    -1,    28,    -1,   124,    -1,    -1,
     241,  1452,   827,    -1,   828,    -1,   827,   828,    -1,   558,
      -1,   257,  1488,    -1,   479,  1471,    -1,    46,  1502,   564,
      -1,    37,    -1,    -1,   551,  1469,   835,   834,   837,    -1,
     836,    -1,   835,   836,    -1,   788,    -1,   788,   492,   788,
      -1,    -1,  1503,   504,  1468,   788,    -1,    21,   266,    -1,
      21,   330,    -1,    -1,    -1,   284,   433,   501,   840,   779,
      -1,    -1,    -1,   278,   433,   501,   842,   779,    -1,    -1,
      -1,   401,   433,   501,   844,   845,    -1,    -1,   845,   846,
      -1,    -1,   382,  1354,   847,   848,   501,   862,    -1,    -1,
     848,   849,    -1,     1,   501,    -1,  1468,   224,    -1,    69,
    1468,  1385,    -1,   850,    -1,   853,    -1,  1528,   851,    -1,
    1459,   852,    -1,  1398,    -1,   852,  1398,    -1,   351,  1474,
     854,   855,    -1,  1407,    -1,  1407,  1512,  1407,  1507,    -1,
    1407,  1512,    -1,    -1,   855,   856,    -1,   857,    -1,   858,
      -1,   859,    -1,   860,    -1,   861,    -1,   231,  1468,  1407,
      -1,   197,  1521,  1468,  1407,    -1,   262,  1522,  1468,  1407,
      -1,   262,  1521,  1468,  1407,    -1,   208,  1468,  1407,    -1,
      -1,   862,   863,    -1,    -1,   784,   785,   864,   865,   501,
      -1,    -1,   865,   866,    -1,   867,    -1,   871,    -1,   877,
      -1,   808,    -1,   887,    -1,   813,    -1,   829,    -1,   879,
      -1,   831,    -1,   885,    -1,   872,    -1,   833,    -1,   875,
      -1,   886,    -1,   814,    -1,   876,    -1,   523,  1468,   868,
      -1,  1526,    -1,  1524,    -1,  1522,   869,    -1,  1521,    -1,
    1523,   869,    -1,  1525,    -1,  1527,    -1,    -1,  1398,   870,
      -1,   196,   870,    -1,    -1,   343,   351,    -1,   311,   230,
    1468,   882,    -1,   476,  1480,  1376,   873,    -1,    -1,   407,
    1481,   874,    -1,  1398,    -1,   196,    -1,   363,   555,  1324,
      -1,   553,  1398,   216,  1378,    50,  1378,    -1,   878,   881,
      -1,   275,  1479,  1469,    -1,   277,  1445,    -1,   880,   883,
      -1,  1506,  1479,  1469,    -1,  1507,  1445,    -1,   882,    -1,
     881,   882,    -1,   359,  1405,    -1,  1407,    -1,   312,    -1,
     884,    -1,   883,   884,    -1,   359,  1405,    -1,  1407,    -1,
     456,  1468,  1378,  1434,    -1,   230,  1465,    -1,   544,  1468,
     130,    -1,    -1,    -1,   427,   433,   501,   889,   890,    -1,
      -1,   891,    -1,   892,   501,    -1,   891,   892,   501,    -1,
     798,    -1,    -1,   784,   785,   893,   894,    -1,   784,     1,
     501,    -1,    -1,   894,   895,    -1,    46,   275,    -1,    46,
     427,    -1,    39,    -1,    47,    -1,   178,   896,    -1,   178,
     897,    -1,   232,    -1,   288,    -1,   949,    -1,   526,    -1,
     348,    -1,   229,    -1,   265,    -1,    33,    -1,   482,    -1,
     434,    -1,   948,    -1,   405,    -1,   218,    -1,   377,    62,
    1468,  1385,    -1,   377,    -1,   507,    -1,   275,  1478,  1468,
     900,  1388,    -1,  1506,  1478,  1468,   901,  1388,    -1,   210,
    1468,  1388,    -1,    36,  1468,  1388,    -1,   809,    -1,   831,
      -1,   903,    -1,   829,    -1,   813,    -1,   833,    -1,   808,
      -1,   902,    -1,   549,  1398,    -1,   216,  1391,    -1,   496,
    1398,    -1,   174,    -1,  1457,   275,    -1,   176,    -1,  1457,
     427,    -1,   359,    -1,   514,    -1,   295,    -1,   509,    -1,
      -1,   898,    -1,   899,    -1,    -1,   898,    -1,   899,    -1,
     334,  1405,  1499,    -1,  1468,   224,    -1,    -1,    -1,    -1,
     369,   133,   970,   908,   917,   501,   905,   918,   906,   920,
      -1,    -1,   907,   931,   501,   920,    -1,    -1,    -1,   549,
     909,   911,    -1,    -1,    61,   910,   911,    -1,   912,    -1,
     911,   912,    -1,   913,   914,   916,   558,    -1,    -1,  1452,
     392,    -1,  1452,   551,    -1,    -1,   452,  1468,    33,    -1,
     452,  1468,   119,    -1,   529,   452,  1468,    33,    -1,   529,
     915,    -1,   915,    -1,   452,  1468,  1405,    -1,    -1,   341,
      -1,    -1,   411,   337,    -1,   411,   558,    -1,    -1,    -1,
     118,   501,   919,   920,   145,   118,   501,    -1,    -1,   920,
     921,    -1,   922,    -1,   925,    -1,   931,   501,    -1,   926,
      -1,   501,    -1,    -1,   558,   433,   927,   501,   923,   924,
      -1,    -1,  1261,   501,    -1,   558,   501,    -1,   558,    -1,
      -1,  1405,    -1,    -1,    -1,   929,   930,   931,    -1,    -1,
     932,   933,    -1,   931,   933,    -1,   934,    -1,   952,    -1,
     957,    -1,   961,    -1,   966,    -1,   988,    -1,   992,    -1,
    1000,    -1,   996,    -1,  1001,    -1,  1002,    -1,  1007,    -1,
    1012,    -1,  1026,    -1,  1030,    -1,  1032,    -1,  1035,    -1,
    1049,    -1,  1053,    -1,  1056,    -1,  1059,    -1,  1063,    -1,
    1064,    -1,  1068,    -1,  1078,    -1,  1081,    -1,  1099,    -1,
    1101,    -1,  1104,    -1,  1108,    -1,  1115,    -1,  1127,    -1,
    1129,    -1,  1144,    -1,  1145,    -1,  1155,    -1,  1158,    -1,
    1159,    -1,  1163,    -1,  1169,    -1,  1170,    -1,  1178,    -1,
    1185,    -1,  1201,    -1,  1211,    -1,  1220,    -1,  1225,    -1,
    1234,    -1,  1238,    -1,  1240,    -1,  1243,    -1,  1246,    -1,
    1249,    -1,  1276,    -1,   311,   439,    -1,     1,  1440,    -1,
      -1,     3,   935,   936,   951,    -1,    -1,   938,   937,   939,
    1284,    -1,  1398,   216,   942,    -1,  1398,   216,  1507,    -1,
    1398,   216,   112,   563,    -1,  1398,   216,   112,    -1,  1398,
     216,   113,   562,    -1,  1398,   216,   113,    -1,  1398,   216,
     114,    -1,  1398,   216,   180,   259,    -1,  1398,   216,   184,
     465,    -1,  1398,   216,   493,    -1,  1398,   216,   546,   301,
      -1,  1398,   216,    77,    -1,  1398,   216,   173,  1284,    -1,
    1398,   216,   171,  1381,  1284,    -1,  1398,   216,    25,    -1,
    1398,   216,    26,  1284,    -1,  1398,   216,  1356,    -1,  1398,
     216,   558,    -1,  1353,  1476,   104,    -1,  1398,    -1,   337,
      -1,    -1,   940,    -1,   941,    -1,   940,   941,    -1,   943,
      -1,   217,    -1,   946,    -1,  1504,   947,    -1,  1450,   493,
    1389,    -1,   277,    -1,   275,   328,    -1,  1449,   944,    -1,
    1449,   945,    -1,    31,  1388,    -1,   275,  1478,  1388,    -1,
    1506,  1478,  1388,    -1,   361,  1478,  1388,    -1,   297,  1468,
      48,    -1,    33,    -1,   482,    -1,    39,    -1,    47,    -1,
     100,    -1,   218,    -1,   232,    -1,   265,    -1,   286,    -1,
     288,    -1,   948,    -1,   348,    -1,   377,    62,  1468,  1385,
      -1,   377,    -1,   405,    -1,   949,    -1,   434,    -1,   378,
     452,  1468,  1388,    -1,   452,  1468,  1388,    -1,   526,    -1,
     313,   950,    -1,   950,    -1,   542,    -1,   210,  1468,  1388,
      -1,    36,  1468,  1388,    -1,   429,   535,  1323,    -1,   429,
     134,  1323,    -1,   494,  1444,  1389,    -1,   313,   139,    -1,
     315,    -1,   336,    -1,   414,    -1,   415,    -1,   412,    -1,
     536,    -1,   119,    -1,    -1,   146,    -1,    -1,     5,   953,
     954,   956,    -1,  1372,   496,  1346,  1296,    -1,  1372,   955,
     223,  1346,  1296,    -1,   103,  1398,   496,  1398,  1434,  1296,
      -1,   483,  1393,   496,  1393,  1434,  1438,  1439,  1296,    -1,
      -1,   496,  1373,    -1,    -1,   147,    -1,    -1,    10,   958,
     959,    -1,  1398,  1428,   960,    -1,  1340,    63,  1429,   960,
      -1,    -1,   411,  1370,    -1,    -1,    18,   962,   963,    -1,
     964,    -1,   963,   964,    -1,  1358,   496,   965,  1358,    -1,
      -1,   371,   496,    -1,    -1,    52,   967,   968,   987,    -1,
      -1,   970,   971,   969,   974,   979,   982,    -1,    -1,   464,
      -1,   466,    -1,   503,    -1,   296,    -1,  1386,    -1,   972,
     973,    -1,    -1,  1386,    27,    -1,   310,    -1,   374,    -1,
      -1,    -1,   549,   975,   976,    -1,   977,    -1,   976,   977,
      -1,   978,   337,    -1,   978,   914,  1374,    -1,    -1,  1452,
     392,    -1,  1452,    96,    -1,  1452,   551,    -1,    -1,   980,
    1467,  1398,    -1,   980,   981,    -1,   980,   318,    -1,   980,
       6,  1480,  1398,    -1,   411,    -1,   223,    -1,   511,    -1,
     337,    -1,    -1,   984,   985,    -1,   986,   983,    -1,    -1,
     984,    -1,   184,   928,    -1,   512,   928,    -1,    -1,   986,
      -1,   323,   928,    -1,    -1,   148,    -1,    -1,    53,   989,
     990,    -1,   991,    -1,   990,   991,    -1,  1385,    -1,   374,
      -1,    -1,    67,   993,   994,    -1,  1352,   995,    -1,   994,
    1352,   995,    -1,    -1,  1516,    -1,  1516,  1460,   397,    -1,
    1504,   313,   416,    -1,  1504,   285,    -1,    -1,    83,   997,
     998,   999,    -1,  1346,  1508,  1340,  1296,    -1,    -1,   149,
      -1,    79,    -1,    97,    -1,    -1,   120,  1003,  1004,  1006,
      -1,  1352,  1486,  1136,  1317,    -1,   505,  1005,    -1,  1352,
      -1,  1005,  1352,    -1,    -1,   150,    -1,    -1,   127,  1008,
    1009,    -1,  1011,  1353,  1010,    -1,    -1,  1504,   259,  1385,
      -1,    -1,   246,  1497,    -1,   347,    -1,   255,   486,    -1,
     486,    -1,    -1,   130,  1013,  1014,  1025,    -1,  1385,   540,
    1291,    -1,  1385,   541,  1291,    -1,  1385,   538,  1291,    -1,
    1385,   539,  1291,    -1,  1015,  1291,    -1,  1016,  1371,    -1,
    1372,    -1,  1017,    -1,  1016,  1017,    -1,    -1,  1019,  1018,
    1020,    -1,  1372,    -1,   337,    -1,  1021,    -1,  1020,  1021,
      -1,  1022,    -1,  1504,   327,    -1,   946,    -1,   943,    -1,
    1504,  1024,    -1,   537,  1356,    -1,   537,   558,    -1,   537,
     366,    -1,   537,  1023,    -1,   105,    -1,   106,    -1,    39,
      -1,    46,   275,    -1,    46,   427,    -1,    47,    -1,   100,
      -1,   178,   896,    -1,   178,   897,    -1,   232,    -1,   288,
      -1,   348,    -1,   949,    -1,   452,  1468,  1388,    -1,   526,
      -1,   210,  1468,  1388,    -1,    36,  1468,  1388,    -1,   429,
     535,  1323,    -1,   429,   134,  1323,    -1,    -1,   151,    -1,
      -1,   132,  1027,  1028,  1029,    -1,  1373,   250,  1346,  1296,
      -1,  1373,   250,  1373,   223,  1346,  1296,    -1,  1373,    50,
    1373,   223,  1346,  1296,    -1,  1373,   250,  1373,   223,  1347,
     396,  1347,  1296,    -1,  1373,    50,  1373,   223,  1347,   396,
    1347,  1296,    -1,    -1,   152,    -1,    -1,   142,  1031,  1009,
      -1,    -1,   169,  1033,  1034,    -1,   970,   279,   974,    -1,
      -1,   182,  1036,  1037,  1048,    -1,  1038,  1040,    -1,  1039,
      -1,  1038,    17,  1039,    -1,  1325,    -1,   515,    -1,   504,
      -1,  1041,  1043,    -1,  1041,    -1,  1042,    -1,  1041,  1042,
      -1,  1044,   928,    -1,   555,   346,   928,    -1,   555,  1045,
      -1,  1044,   555,  1045,    -1,  1046,    -1,  1045,    17,  1046,
      -1,  1326,  1047,    -1,    21,    -1,   515,    -1,   504,    -1,
      -1,   492,  1325,    -1,    -1,   153,    -1,    -1,   187,  1050,
    1051,    -1,    -1,   372,  1052,    -1,   219,    -1,   354,   110,
      -1,   354,    -1,   433,    -1,   353,    -1,    -1,   980,  1373,
      -1,    -1,   215,  1054,  1055,    -1,  1369,    -1,    -1,   222,
    1057,  1058,    -1,  1402,    -1,    -1,   225,  1060,  1061,    -1,
    1500,  1357,  1062,    -1,    -1,   123,  1481,  1398,    -1,   226,
    1052,    -1,    -1,   236,  1065,  1324,  1498,  1066,  1067,    -1,
     928,   143,   928,    -1,   143,   928,    -1,   928,    -1,    -1,
     155,    -1,    -1,   243,  1069,  1070,    -1,  1369,  1071,  1072,
    1073,  1077,    -1,    -1,  1504,   195,    -1,    -1,     9,  1500,
     551,    -1,  1076,  1500,   551,    -1,    -1,   400,  1074,    -1,
    1075,    -1,  1074,  1075,    -1,  1076,  1456,    50,  1373,    -1,
      12,    -1,    15,    -1,   330,    -1,    16,    -1,   331,    -1,
     302,    -1,   303,    -1,    -1,  1498,  1500,   119,    -1,    -1,
     245,  1079,  1080,    -1,  1354,    -1,  1080,  1354,    -1,    -1,
     248,  1082,  1083,    -1,  1084,  1085,    -1,  1398,    -1,  1409,
      -1,  1412,    -1,  1086,  1088,    -1,  1086,    -1,  1088,    -1,
    1089,    -1,    -1,   484,  1087,  1090,    -1,   400,  1092,    -1,
     101,  1381,   496,  1382,  1096,    -1,  1091,    -1,  1090,  1091,
      -1,  1396,   209,    -1,    63,  1096,    -1,     9,    -1,   263,
      -1,   519,    -1,  1381,  1096,    -1,  1093,    -1,  1092,  1093,
      -1,    63,    50,  1381,  1096,    -1,  1094,  1095,    -1,    -1,
       9,    -1,   263,    -1,   197,    -1,   519,    -1,  1381,    50,
    1382,  1096,    -1,    -1,  1097,    -1,  1098,    -1,  1097,  1098,
      -1,  1098,  1097,    -1,    38,  1466,  1373,    -1,     8,  1466,
    1373,    -1,    -1,   293,  1100,  1203,    -1,    -1,   298,  1102,
    1103,    -1,  1373,   496,  1369,    -1,   103,  1373,   496,  1369,
      -1,    -1,   300,  1105,  1106,  1107,    -1,  1373,    50,  1346,
    1296,    -1,  1373,    50,  1373,   223,  1346,  1296,    -1,    -1,
     156,    -1,    -1,   340,  1109,  1110,    -1,  1111,    -1,  1110,
    1111,    -1,  1112,  1113,  1136,  1351,  1114,    -1,   246,    -1,
     347,    -1,   255,    -1,   189,    -1,    -1,   445,  1504,   711,
      -1,    -1,  1504,   313,   416,    -1,  1504,   285,    -1,   415,
      -1,    -1,   354,  1116,  1117,    -1,  1121,  1122,    -1,    -1,
    1122,  1118,   928,  1119,    -1,  1122,  1120,    -1,    -1,   157,
      -1,   157,    -1,   501,    -1,  1358,    -1,  1358,   492,  1358,
      -1,    -1,  1387,   495,    -1,   211,    -1,  1123,   534,  1124,
      -1,  1123,   553,  1125,    -1,    -1,  1504,   489,  1281,    -1,
     187,    -1,  1324,    -1,  1126,    -1,  1125,     8,  1126,    -1,
    1398,   216,  1373,    50,  1373,   534,  1324,    -1,    -1,   566,
    1128,  1353,    -1,    -1,   383,  1130,  1131,  1143,    -1,  1352,
    1431,  1486,  1132,  1133,  1141,  1142,    -1,    -1,   250,  1398,
      -1,    -1,  1134,    -1,  1135,  1139,    -1,  1140,    -1,   238,
     285,    -1,  1504,   237,   285,    -1,     7,  1481,   285,    -1,
    1137,    -1,    -1,  1137,    -1,  1138,    -1,   409,  1460,  1340,
     495,    -1,   409,  1460,  1340,   432,    -1,   409,   211,    -1,
      -1,  1140,    -1,  1167,    -1,  1504,   258,   285,    -1,  1504,
     554,    -1,    -1,   259,  1468,  1398,    -1,  1317,    -1,  1307,
      -1,    -1,   159,    -1,   384,    -1,    -1,   385,  1146,  1147,
    1154,    -1,  1353,  1148,   250,  1398,  1149,    -1,   294,    -1,
     435,    -1,    -1,  1151,  1152,    -1,  1153,  1150,    -1,    -1,
    1151,    -1,   314,   928,    -1,    -1,  1153,    -1,   111,   928,
      -1,    -1,   160,    -1,    -1,   395,  1156,  1157,    -1,  1348,
    1279,    -1,   408,    -1,    -1,   410,  1160,  1161,  1162,    -1,
    1352,  1486,  1132,  1306,    -1,    -1,   161,    -1,    -1,   417,
    1164,  1165,  1168,    -1,  1349,  1279,  1136,  1166,  1317,    -1,
      -1,  1167,    -1,  1504,   285,    -1,  1504,   313,   285,    -1,
      -1,   162,    -1,   421,    -1,    -1,   431,  1171,  1172,  1177,
      -1,  1350,  1173,  1174,  1175,    -1,     9,  1350,  1174,   555,
    1325,   928,    -1,    -1,   553,  1398,    -1,    -1,   145,   928,
      -1,  1176,    -1,  1176,  1175,    -1,   555,  1324,   928,    -1,
      -1,   163,    -1,    -1,   567,  1179,  1180,    -1,  1353,  1182,
      -1,  1353,  1181,  1183,  1280,  1184,    -1,    -1,  1182,    -1,
     216,  1398,    -1,  1504,  1398,    -1,  1504,   181,    -1,  1504,
     144,    -1,  1504,   140,    -1,    -1,   400,  1472,    -1,    -1,
     443,  1186,  1187,    -1,  1190,    -1,  1191,    -1,  1194,    -1,
    1195,    -1,  1196,    -1,  1198,    -1,  1200,    -1,   338,    -1,
     336,    -1,   535,    -1,   134,    -1,   171,  1381,   496,  1381,
      -1,  1392,    32,  1192,    -1,  1193,    -1,  1192,  1193,    -1,
      39,  1188,    -1,    47,  1188,    -1,   232,  1188,    -1,   288,
    1188,    -1,   414,  1188,    -1,   526,  1188,    -1,   265,  1188,
      -1,   348,  1188,    -1,  1369,   496,   169,  1380,    -1,  1369,
     496,  1373,    -1,  1369,  1189,    50,  1373,    -1,  1197,    -1,
    1196,  1197,    -1,  1355,   496,  1188,    -1,  1199,    -1,  1198,
    1199,    -1,  1369,   496,   515,    -1,  1369,   496,   504,    -1,
     262,   184,   496,   336,    -1,    -1,   454,  1202,  1203,    -1,
      -1,  1393,  1205,  1207,  1208,  1204,  1209,  1210,    -1,    -1,
    1205,  1481,   825,  1470,  1206,    -1,    -1,  1206,  1402,    -1,
      -1,  1519,  1463,    -1,    -1,  1505,  1468,  1362,    -1,    -1,
     549,  1351,    -1,   246,   369,  1468,  1121,    -1,    -1,   223,
    1351,    -1,   347,   369,  1468,  1121,    -1,    -1,   463,  1212,
    1213,  1219,    -1,  1352,  1215,  1214,  1317,    -1,    -1,  1504,
    1518,  1340,    -1,    -1,   259,  1468,  1216,  1398,    -1,   197,
      -1,   262,    -1,  1333,    -1,  1432,  1334,    -1,  1432,  1335,
      -1,  1432,  1336,    -1,  1432,  1337,    -1,  1217,    -1,  1218,
      -1,   317,  1333,    -1,   322,    -1,    -1,   164,    -1,    -1,
     468,   424,  1221,  1222,    -1,   468,  1224,    -1,    -1,   980,
    1373,    -1,  1373,    -1,  1504,   179,  1494,  1223,    -1,  1504,
     316,  1494,  1223,    -1,    -1,  1373,    -1,   279,    -1,   458,
      -1,   564,    -1,   380,    -1,    -1,   469,  1226,  1227,  1233,
      -1,  1228,   250,  1398,  1232,  1301,    -1,  1229,    -1,  1228,
    1229,    -1,  1373,  1230,    -1,    -1,   121,  1452,  1231,    -1,
     452,    -1,  1373,    -1,    -1,  1504,   360,  1468,  1398,    -1,
      -1,   165,    -1,    -1,   475,  1235,  1236,  1237,    -1,  1372,
     216,  1346,  1296,    -1,  1372,   216,  1373,   223,  1346,  1296,
      -1,   103,  1398,   216,  1398,  1434,  1296,    -1,   483,  1393,
     216,  1393,  1434,  1438,  1439,  1296,    -1,    -1,   166,    -1,
     477,  1239,    -1,    -1,   368,    -1,    -1,   487,  1241,  1242,
      -1,  1354,    -1,  1242,  1354,    -1,    -1,   520,  1244,  1245,
      -1,  1395,   216,  1381,   496,  1382,    -1,    -1,   528,  1247,
    1248,    -1,  1352,  1487,    -1,    -1,   533,  1250,  1251,  1260,
      -1,  1398,  1252,  1255,  1232,  1259,  1301,    -1,    -1,   121,
    1452,  1253,    -1,  1254,    -1,  1253,   343,  1254,    -1,  1426,
    1381,    -1,   250,  1256,    -1,  1255,  1256,    -1,  1398,  1257,
    1258,    -1,    -1,   122,  1462,  1398,    -1,    -1,   104,  1462,
    1398,    -1,    -1,   484,  1462,  1398,    -1,    -1,   167,    -1,
      -1,   545,  1262,  1263,    -1,  1264,    -1,  1267,    -1,  1271,
      -1,  1273,    -1,  1274,    -1,  1265,  1444,  1493,  1509,  1484,
    1481,  1266,    -1,    -1,   224,    -1,  1351,    -1,   246,    -1,
     347,    -1,   255,    -1,   189,    -1,  1460,   116,  1481,  1268,
      -1,  1269,    -1,  1268,  1269,    -1,  1359,    -1,     9,   370,
      -1,     9,  1270,  1402,    -1,    -1,   393,    -1,   393,   335,
      -1,   335,    -1,  1449,   372,  1272,    -1,   463,    -1,   145,
      -1,  1265,    38,   402,  1398,    -1,  1275,    -1,   185,    -1,
     138,    -1,    -1,   561,  1277,  1278,  1283,    -1,  1349,  1279,
    1280,  1136,  1166,  1282,    -1,    -1,   216,  1391,    -1,    -1,
    1281,  1443,  1388,  1473,    -1,  1281,  1443,  1356,    -1,  1281,
    1443,   351,    -1,    38,    -1,     8,    -1,    -1,  1318,    -1,
    1312,    -1,    -1,   168,    -1,    -1,  1286,  1288,    -1,  1289,
    1285,    -1,    -1,  1286,    -1,  1287,   928,    -1,   180,    -1,
     184,    -1,    -1,  1289,    -1,  1290,   928,    -1,   321,    -1,
     323,    -1,    -1,  1293,  1294,    -1,  1295,  1292,    -1,    -1,
    1293,    -1,   184,   928,    -1,    -1,  1295,    -1,   323,   928,
      -1,    -1,  1298,  1299,    -1,  1300,  1297,    -1,    -1,  1298,
      -1,   453,   928,    -1,    -1,  1300,    -1,   326,   928,    -1,
      -1,  1303,  1304,    -1,  1305,  1302,    -1,    -1,  1303,    -1,
     512,   928,    -1,    -1,  1305,    -1,   325,   928,    -1,  1309,
    1310,    -1,  1311,  1309,    -1,  1309,  1310,    -1,  1311,  1308,
      -1,    -1,  1309,    -1,   145,   928,    -1,    -1,  1311,    -1,
     319,   928,    -1,  1314,  1315,    -1,  1316,  1313,    -1,    -1,
    1314,    -1,   175,   928,    -1,    -1,  1316,    -1,   320,   928,
      -1,    -1,  1318,    -1,  1320,  1321,    -1,  1322,  1319,    -1,
      -1,  1320,    -1,   253,   928,    -1,    -1,  1322,    -1,   324,
     928,    -1,    -1,  1390,  1517,    -1,  1325,    -1,  1326,    -1,
      -1,  1327,  1328,    -1,  1329,    -1,  1328,  1329,    -1,  1373,
      -1,  1468,  1332,    -1,   254,  1331,  1332,    -1,   254,  1330,
     564,    -1,   513,    -1,   498,    -1,   514,    -1,   509,    -1,
     510,    -1,   500,    -1,   188,    -1,  1331,    -1,    20,    -1,
     343,    -1,    -1,  1331,    -1,   317,    -1,    66,    -1,  1333,
      -1,  1334,    -1,  1335,    -1,  1336,    -1,  1337,    -1,   322,
      -1,   337,    -1,   330,    -1,    12,    -1,    13,    -1,    14,
      -1,   362,    -1,   309,    -1,   502,    -1,   177,  1500,    -1,
     506,    -1,   227,    -1,   508,    -1,   269,    -1,   228,    -1,
     270,    -1,  1340,    -1,  1338,  1339,  1340,    -1,    -1,    78,
      -1,   438,    -1,  1340,   514,  1341,    -1,  1340,   509,  1341,
      -1,  1341,    -1,  1341,   510,  1342,    -1,  1341,   500,  1342,
      -1,  1342,    -1,  1343,   188,  1342,    -1,  1343,    -1,   514,
    1344,    -1,   509,  1344,    -1,  1344,    -1,   513,  1340,   498,
      -1,  1378,    -1,   274,    -1,   274,  1510,   558,    -1,   276,
      -1,   276,  1510,   558,    -1,   352,    -1,   352,  1510,   558,
      -1,  1347,    -1,  1346,  1347,    -1,  1370,  1434,    -1,  1402,
      -1,  1348,    -1,   505,   558,    -1,  1402,    -1,  1352,    -1,
    1351,  1352,    -1,   558,    -1,   558,    -1,   558,    -1,  1356,
      -1,  1355,  1356,    -1,   296,    -1,    -1,  1357,  1358,    -1,
    1359,    -1,  1402,    -1,  1360,    -1,  1360,  1510,  1360,    -1,
     279,    -1,  1362,    -1,  1361,  1362,    -1,  1402,    -1,   558,
      -1,  1365,    -1,  1364,  1365,    -1,   558,    -1,  1362,    -1,
     279,    -1,   558,    -1,     1,    -1,   558,    -1,  1370,    -1,
    1369,  1370,    -1,  1400,    -1,  1410,    -1,     6,  1480,  1399,
      -1,    -1,  1372,    -1,  1373,    -1,  1372,  1373,    -1,  1398,
      -1,  1375,    -1,  1397,    -1,  1375,    -1,  1409,    -1,  1412,
      -1,  1345,    -1,   268,  1399,    -1,   268,  1410,    -1,   268,
    1412,    -1,     6,  1480,  1379,  1380,    -1,     6,  1480,  1399,
      -1,   296,    -1,  1378,    -1,  1376,  1378,    -1,  1398,    -1,
    1410,    -1,  1412,    -1,  1398,    -1,  1410,    -1,  1412,    -1,
    1345,    -1,   268,  1399,    -1,   268,  1410,    -1,   268,  1412,
      -1,   372,    -1,   169,    -1,  1399,    -1,   279,    -1,  1383,
      -1,  1384,    -1,  1398,    -1,  1410,    -1,  1412,    -1,  1398,
      -1,  1409,    -1,  1398,    -1,   279,    -1,  1398,    -1,   279,
      -1,  1412,    -1,  1398,    -1,   788,    -1,  1412,    -1,  1392,
      -1,  1405,    -1,   564,    -1,  1392,    -1,  1407,    -1,  1392,
      -1,  1405,    -1,  1398,    -1,  1409,    -1,  1412,    -1,  1394,
      -1,  1394,    -1,  1402,    -1,  1402,  1403,    -1,  1398,    -1,
    1398,    -1,  1399,    -1,  1399,    -1,  1402,  1403,  1404,    -1,
    1402,  1403,    -1,  1402,  1404,    -1,  1402,    -1,  1401,    -1,
    1402,  1403,  1404,    -1,  1402,  1403,    -1,  1402,  1404,    -1,
    1402,    -1,   558,    -1,   558,  1510,  1402,    -1,   513,  1338,
     498,    -1,   513,  1340,   499,   498,    -1,   513,  1340,   499,
    1340,   498,    -1,   279,    -1,   279,    -1,   279,    -1,   279,
      -1,   458,    -1,   564,    -1,   380,    -1,   233,    -1,   289,
      -1,   511,    -1,  1410,    -1,     9,  1411,    -1,  1411,    -1,
    1410,   497,  1411,    -1,   279,    -1,   458,    -1,   564,    -1,
     380,    -1,   233,    -1,   289,    -1,   511,    -1,  1413,  1416,
      -1,  1414,   513,  1377,   498,  1416,    -1,  1415,   513,  1338,
     498,  1416,    -1,   521,   513,  1418,   498,  1416,    -1,   267,
     513,  1419,   498,    -1,   332,   513,  1421,   498,    -1,   281,
     513,  1422,   498,  1416,    -1,   282,   513,  1422,   498,  1416,
      -1,   283,   513,  1422,   498,  1416,    -1,   213,   513,  1423,
     498,  1416,    -1,   214,   513,  1424,   498,  1416,    -1,   221,
    1417,    -1,   548,  1417,    -1,   108,    -1,   556,    -1,   543,
      -1,   287,    -1,   413,    -1,    91,    -1,   212,    -1,   473,
      -1,   474,    -1,    -1,   513,  1340,   499,   498,    -1,   513,
    1340,   499,  1340,   498,    -1,    -1,   513,  1338,   498,    -1,
     513,   498,    -1,  1377,    -1,  1377,  1339,   263,    -1,  1377,
    1339,   519,    -1,    -1,  1420,  1377,    -1,  1377,    -1,  1377,
    1339,  1377,    -1,  1340,    -1,  1340,  1339,  1362,    -1,  1338,
      -1,  1338,  1339,   481,    -1,  1338,    -1,  1338,  1339,   481,
      -1,    -1,    -1,     9,    -1,    -1,  1519,    -1,    -1,   244,
      -1,    -1,   244,  1430,    -1,    -1,   496,  1384,    -1,    -1,
     311,    -1,   364,    -1,    -1,   317,    -1,    -1,   341,    -1,
     317,   341,    -1,    -1,   422,  1435,    -1,    -1,   297,  1468,
    1436,    -1,    35,    -1,   306,    -1,   307,    -1,   308,    -1,
     376,    -1,   517,    -1,   518,    -1,   522,    -1,    -1,   440,
    1453,    -1,    -1,   216,  1464,  1390,   496,  1390,    -1,    -1,
     125,  1464,  1390,    -1,   501,    -1,  1441,    -1,  1442,    -1,
       3,    -1,     5,    -1,    10,    -1,    18,    -1,    52,    -1,
      53,    -1,    67,    -1,    79,    -1,    83,    -1,    97,    -1,
     120,    -1,   130,    -1,   132,    -1,   143,    -1,   169,    -1,
     182,    -1,   187,    -1,   215,    -1,   222,    -1,   225,    -1,
     226,    -1,   236,    -1,   243,    -1,   245,    -1,   248,    -1,
     293,    -1,   298,    -1,   300,    -1,   311,    -1,   340,    -1,
     354,    -1,   383,    -1,   395,    -1,   410,    -1,   417,    -1,
     421,    -1,   431,    -1,   443,    -1,   454,    -1,   463,    -1,
     468,    -1,   469,    -1,   475,    -1,   477,    -1,   487,    -1,
     520,    -1,   528,    -1,   533,    -1,   561,    -1,   146,    -1,
     147,    -1,   148,    -1,   149,    -1,   150,    -1,   151,    -1,
     152,    -1,   153,    -1,   155,    -1,   156,    -1,   157,    -1,
     159,    -1,   160,    -1,   161,    -1,   162,    -1,   163,    -1,
     164,    -1,   165,    -1,   166,    -1,   167,    -1,   168,    -1,
      -1,     7,    -1,    -1,     8,    -1,    -1,    22,    -1,    -1,
      23,    -1,    -1,    23,    -1,    24,    -1,    -1,    27,    -1,
      -1,    31,    -1,    -1,    38,    -1,    -1,    40,    -1,    -1,
      50,    -1,    -1,    62,    -1,    -1,    63,    -1,    -1,    95,
      -1,    -1,   111,    -1,    -1,   145,  1480,    -1,    -1,   505,
      -1,    -1,   196,    -1,    -1,   209,    -1,    -1,   216,    -1,
      -1,   239,    -1,    -1,   344,    -1,   239,   344,    -1,    -1,
     240,    -1,    -1,   242,    -1,    -1,   507,    -1,    -1,   250,
      -1,    -1,   254,    -1,    -1,   254,    -1,    22,    -1,    -1,
     259,    -1,    -1,   264,    -1,   420,    -1,    -1,   275,    -1,
      -1,   275,    -1,   277,    -1,    -1,   271,  1468,    -1,   272,
    1445,    -1,    -1,   277,    -1,    -1,   294,    -1,    -1,   297,
      -1,    -1,   328,    -1,    -1,   328,    -1,   329,    -1,    -1,
     335,    -1,    -1,   338,    -1,    -1,   465,   254,    -1,   465,
      -1,   254,    -1,    -1,   346,    -1,    -1,   369,    -1,    -1,
     372,    -1,    -1,   386,    -1,    -1,   386,    -1,   388,    -1,
      -1,   420,    -1,    -1,   446,    -1,    -1,   447,    -1,    -1,
     446,    -1,   446,   254,    -1,    -1,   452,    -1,    -1,   460,
      -1,    -1,   465,    -1,    -1,   478,    -1,    -1,   485,    -1,
      -1,   486,    -1,    -1,   491,    -1,    -1,   495,    -1,    -1,
     496,    -1,    -1,   496,    -1,   549,    -1,    -1,   555,    -1,
      -1,   555,   443,   496,    -1,    -1,   557,    -1,    71,   441,
      -1,   441,    -1,    74,    -1,    72,    -1,    75,    -1,    73,
      -1,   502,    -1,   177,    -1,   184,    -1,   179,    -1,   239,
      -1,   335,    -1,   460,    -1,   337,    -1,   275,    -1,   277,
      -1,   386,    -1,   388,    -1,    63,    -1,   559,    -1,   386,
    1468,    -1,   388,  1445,    -1,   391,    -1,   527,    -1,   275,
      -1,   277,    -1,   452,    -1,   266,    -1,   557,   135,    -1,
     135,    -1,   372,    71,   441,    -1,    71,   441,    -1,   441,
      -1,   126,    -1,   115,    -1,    98,   231,    -1,    60,    -1,
      98,   208,    -1,    59,    -1,   351,   231,    -1,   355,    -1,
     351,   208,    -1,   356,    -1,   401,   231,    -1,   419,    -1,
     401,   208,    -1,   418,    -1,    98,  1468,    -1,    99,  1445,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  2333,  2333,  2333,  2364,  2365,  2369,  2369,  2378,  2379,
    2383,  2384,  2388,  2388,  2411,  2423,  2432,  2435,  2439,  2440,
    2444,  2452,  2461,  2469,  2470,  2479,  2479,  2484,  2488,  2483,
    2504,  2503,  2519,  2530,  2537,  2538,  2545,  2546,  2549,  2550,
    2554,  2563,  2572,  2573,  2580,  2581,  2585,  2589,  2595,  2597,
    2605,  2613,  2616,  2626,  2628,  2637,  2641,  2645,  2651,  2653,
    2660,  2664,  2668,  2672,  2681,  2686,  2687,  2696,  2703,  2704,
    2714,  2715,  2716,  2717,  2718,  2731,  2730,  2740,  2741,  2744,
    2745,  2759,  2758,  2768,  2769,  2770,  2771,  2775,  2776,  2780,
    2781,  2782,  2783,  2787,  2795,  2802,  2809,  2820,  2824,  2828,
    2832,  2839,  2840,  2845,  2847,  2846,  2857,  2858,  2859,  2866,
    2867,  2871,  2875,  2881,  2882,  2892,  2897,  2907,  2908,  2920,
    2921,  2925,  2926,  2930,  2931,  2935,  2936,  2937,  2938,  2939,
    2940,  2941,  2942,  2943,  2944,  2945,  2946,  2954,  2953,  2982,
    2993,  3012,  3020,  3023,  3024,  3028,  3035,  3050,  3071,  3070,
    3094,  3100,  3106,  3112,  3118,  3124,  3134,  3138,  3145,  3149,
    3154,  3153,  3164,  3168,  3175,  3176,  3177,  3178,  3179,  3180,
    3184,  3185,  3192,  3207,  3210,  3217,  3225,  3229,  3240,  3260,
    3268,  3279,  3280,  3286,  3307,  3308,  3312,  3316,  3337,  3360,
    3435,  3438,  3447,  3466,  3482,  3500,  3518,  3535,  3552,  3562,
    3563,  3570,  3571,  3579,  3580,  3590,  3591,  3596,  3595,  3625,
    3626,  3630,  3631,  3632,  3633,  3634,  3635,  3636,  3637,  3638,
    3639,  3640,  3641,  3642,  3649,  3655,  3665,  3676,  3689,  3702,
    3735,  3736,  3737,  3742,  3743,  3744,  3745,  3749,  3750,  3751,
    3752,  3753,  3754,  3755,  3758,  3759,  3765,  3766,  3770,  3774,
    3775,  3780,  3783,  3784,  3791,  3799,  3800,  3801,  3808,  3832,
    3834,  3839,  3849,  3857,  3872,  3879,  3881,  3882,  3888,  3888,
    3895,  3900,  3905,  3912,  3913,  3914,  3918,  3929,  3930,  3934,
    3939,  3944,  3949,  3960,  3971,  3981,  3989,  3990,  3991,  3997,
    4008,  4015,  4016,  4022,  4030,  4031,  4032,  4038,  4039,  4040,
    4047,  4048,  4052,  4053,  4059,  4087,  4088,  4089,  4090,  4097,
    4096,  4112,  4113,  4117,  4120,  4121,  4131,  4128,  4145,  4146,
    4154,  4155,  4163,  4164,  4168,  4189,  4188,  4205,  4212,  4216,
    4222,  4223,  4227,  4237,  4252,  4253,  4254,  4255,  4256,  4257,
    4258,  4259,  4260,  4267,  4274,  4274,  4274,  4280,  4300,  4334,
    4365,  4366,  4373,  4374,  4378,  4379,  4386,  4397,  4402,  4413,
    4414,  4418,  4419,  4425,  4436,  4454,  4455,  4459,  4460,  4461,
    4465,  4472,  4479,  4488,  4497,  4498,  4499,  4500,  4501,  4510,
    4511,  4517,  4554,  4555,  4568,  4583,  4584,  4588,  4598,  4611,
    4613,  4612,  4627,  4628,  4632,  4649,  4648,  4669,  4670,  4674,
    4675,  4676,  4679,  4681,  4682,  4686,  4687,  4691,  4692,  4693,
    4694,  4695,  4696,  4697,  4698,  4699,  4700,  4701,  4705,  4709,
    4711,  4715,  4716,  4720,  4721,  4722,  4723,  4724,  4725,  4726,
    4729,  4731,  4732,  4736,  4737,  4741,  4742,  4743,  4744,  4745,
    4746,  4750,  4755,  4757,  4756,  4772,  4775,  4775,  4792,  4793,
    4797,  4798,  4799,  4801,  4800,  4815,  4828,  4836,  4841,  4847,
    4851,  4861,  4864,  4876,  4877,  4878,  4879,  4883,  4887,  4891,
    4895,  4899,  4903,  4907,  4911,  4915,  4919,  4923,  4927,  4931,
    4942,  4943,  4947,  4948,  4952,  4953,  4954,  4958,  4959,  4963,
    4988,  4991,  4999,  4998,  5011,  5035,  5034,  5048,  5052,  5061,
    5065,  5074,  5075,  5076,  5077,  5078,  5079,  5080,  5081,  5082,
    5083,  5084,  5085,  5086,  5093,  5117,  5145,  5148,  5156,  5157,
    5161,  5186,  5197,  5198,  5202,  5206,  5210,  5214,  5218,  5222,
    5226,  5230,  5234,  5238,  5242,  5246,  5250,  5255,  5260,  5264,
    5268,  5276,  5280,  5284,  5292,  5296,  5300,  5304,  5308,  5312,
    5316,  5320,  5324,  5332,  5340,  5344,  5348,  5352,  5356,  5360,
    5368,  5369,  5373,  5374,  5380,  5387,  5400,  5409,  5410,  5419,
    5426,  5438,  5456,  5457,  5461,  5462,  5466,  5467,  5470,  5471,
    5476,  5477,  5484,  5485,  5492,  5516,  5517,  5534,  5535,  5538,
    5539,  5546,  5547,  5552,  5563,  5574,  5585,  5596,  5625,  5624,
    5633,  5634,  5638,  5639,  5642,  5643,  5655,  5664,  5678,  5680,
    5679,  5699,  5701,  5700,  5716,  5718,  5717,  5726,  5727,  5734,
    5733,  5746,  5747,  5748,  5755,  5760,  5764,  5765,  5771,  5778,
    5782,  5783,  5789,  5826,  5830,  5835,  5841,  5842,  5847,  5848,
    5849,  5850,  5851,  5855,  5862,  5869,  5876,  5883,  5889,  5890,
    5895,  5894,  5901,  5902,  5906,  5907,  5908,  5909,  5910,  5911,
    5912,  5913,  5914,  5915,  5916,  5917,  5918,  5919,  5920,  5921,
    5925,  5932,  5933,  5934,  5935,  5936,  5937,  5938,  5941,  5942,
    5943,  5946,  5947,  5951,  5958,  5964,  5965,  5969,  5970,  5974,
    5981,  5985,  5992,  5993,  5997,  6004,  6005,  6009,  6010,  6014,
    6015,  6016,  6020,  6021,  6025,  6026,  6030,  6037,  6044,  6052,
    6054,  6053,  6074,  6075,  6079,  6080,  6084,  6086,  6085,  6145,
    6163,  6164,  6168,  6173,  6178,  6182,  6186,  6191,  6196,  6201,
    6206,  6210,  6214,  6219,  6224,  6229,  6234,  6239,  6244,  6253,
    6257,  6261,  6266,  6270,  6274,  6279,  6284,  6289,  6294,  6295,
    6296,  6297,  6298,  6299,  6300,  6301,  6302,  6311,  6316,  6327,
    6328,  6332,  6333,  6337,  6338,  6342,  6343,  6348,  6351,  6355,
    6363,  6366,  6370,  6378,  6389,  6397,  6399,  6417,  6398,  6444,
    6444,  6479,  6483,  6482,  6496,  6495,  6515,  6516,  6521,  6543,
    6545,  6549,  6560,  6562,  6570,  6578,  6586,  6592,  6596,  6630,
    6633,  6646,  6651,  6661,  6691,  6693,  6692,  6729,  6730,  6734,
    6735,  6736,  6753,  6754,  6765,  6764,  6814,  6815,  6819,  6868,
    6888,  6891,  6910,  6915,  6909,  6928,  6928,  6964,  6971,  6972,
    6973,  6974,  6975,  6976,  6977,  6978,  6979,  6980,  6981,  6982,
    6983,  6984,  6985,  6986,  6987,  6988,  6989,  6990,  6991,  6992,
    6993,  6994,  6995,  6996,  6997,  6998,  6999,  7000,  7001,  7002,
    7003,  7004,  7005,  7006,  7007,  7008,  7009,  7010,  7011,  7012,
    7013,  7014,  7015,  7016,  7017,  7018,  7019,  7020,  7021,  7022,
    7023,  7024,  7025,  7039,  7051,  7050,  7061,  7060,  7094,  7098,
    7102,  7107,  7112,  7117,  7122,  7126,  7130,  7134,  7138,  7143,
    7147,  7151,  7155,  7159,  7163,  7167,  7171,  7178,  7179,  7185,
    7187,  7191,  7192,  7196,  7197,  7201,  7205,  7206,  7215,  7216,
    7220,  7236,  7252,  7265,  7269,  7270,  7274,  7281,  7287,  7293,
    7298,  7303,  7308,  7313,  7319,  7324,  7330,  7336,  7347,  7352,
    7357,  7362,  7367,  7372,  7378,  7383,  7388,  7393,  7399,  7405,
    7411,  7416,  7421,  7428,  7435,  7444,  7445,  7446,  7450,  7451,
    7452,  7456,  7457,  7461,  7465,  7483,  7482,  7491,  7495,  7499,
    7503,  7510,  7511,  7518,  7522,  7533,  7532,  7541,  7545,  7557,
    7558,  7566,  7565,  7574,  7575,  7579,  7585,  7585,  7592,  7591,
    7604,  7603,  7639,  7643,  7652,  7657,  7662,  7682,  7688,  7708,
    7712,  7722,  7726,  7731,  7735,  7734,  7751,  7752,  7757,  7765,
    7789,  7791,  7795,  7804,  7817,  7820,  7824,  7828,  7833,  7856,
    7857,  7861,  7862,  7866,  7870,  7874,  7885,  7889,  7896,  7900,
    7908,  7912,  7919,  7926,  7930,  7941,  7940,  7952,  7956,  7963,
    7964,  7974,  7973,  7981,  7986,  7994,  7995,  7996,  7997,  7998,
    8006,  8005,  8014,  8021,  8025,  8035,  8046,  8064,  8063,  8072,
    8076,  8080,  8085,  8093,  8097,  8108,  8107,  8116,  8119,  8121,
    8127,  8129,  8130,  8131,  8132,  8140,  8139,  8151,  8155,  8159,
    8163,  8167,  8171,  8179,  8188,  8189,  8194,  8193,  8238,  8242,
    8250,  8251,  8255,  8259,  8264,  8268,  8269,  8273,  8277,  8281,
    8285,  8292,  8293,  8297,  8302,  8308,  8314,  8319,  8324,  8330,
    8336,  8342,  8348,  8353,  8358,  8363,  8368,  8373,  8378,  8385,
    8395,  8399,  8410,  8409,  8418,  8422,  8426,  8430,  8434,  8441,
    8445,  8456,  8455,  8467,  8466,  8475,  8494,  8493,  8517,  8525,
    8526,  8531,  8542,  8553,  8567,  8571,  8578,  8579,  8584,  8593,
    8602,  8607,  8616,  8617,  8622,  8684,  8685,  8686,  8690,  8691,
    8695,  8699,  8710,  8709,  8721,  8722,  8743,  8757,  8779,  8801,
    8821,  8844,  8845,  8853,  8852,  8861,  8872,  8871,  8881,  8888,
    8887,  8900,  8909,  8913,  8924,  8940,  8939,  8948,  8952,  8956,
    8963,  8967,  8978,  8977,  8985,  8993,  8994,  8998,  8999,  9000,
    9005,  9008,  9015,  9019,  9027,  9034,  9035,  9036,  9037,  9038,
    9039,  9040,  9052,  9055,  9065,  9064,  9073,  9079,  9091,  9090,
    9099,  9103,  9104,  9105,  9109,  9110,  9111,  9112,  9119,  9118,
    9139,  9149,  9158,  9162,  9169,  9174,  9179,  9184,  9189,  9194,
    9202,  9203,  9207,  9212,  9218,  9220,  9221,  9222,  9223,  9227,
    9255,  9258,  9262,  9266,  9270,  9277,  9284,  9294,  9293,  9306,
    9305,  9313,  9317,  9328,  9327,  9336,  9340,  9347,  9351,  9362,
    9361,  9369,  9370,  9374,  9399,  9400,  9401,  9402,  9406,  9407,
    9411,  9412,  9413,  9414,  9426,  9425,  9437,  9444,  9443,  9455,
    9464,  9472,  9479,  9483,  9496,  9503,  9515,  9518,  9523,  9527,
    9538,  9545,  9546,  9550,  9551,  9554,  9555,  9560,  9570,  9569,
    9582,  9581,  9590,  9619,  9620,  9624,  9628,  9632,  9636,  9643,
    9644,  9648,  9652,  9655,  9657,  9661,  9670,  9671,  9672,  9675,
    9677,  9681,  9685,  9689,  9697,  9698,  9702,  9703,  9707,  9711,
    9721,  9732,  9731,  9740,  9745,  9746,  9750,  9751,  9752,  9756,
    9757,  9761,  9765,  9766,  9770,  9774,  9778,  9788,  9787,  9795,
    9805,  9816,  9815,  9824,  9831,  9835,  9846,  9845,  9857,  9866,
    9869,  9873,  9877,  9884,  9888,  9898,  9910,  9909,  9918,  9922,
    9931,  9932,  9937,  9940,  9948,  9952,  9959,  9967,  9971,  9982,
    9981,  9989,  9992,  9997,  9999, 10003, 10009, 10010, 10011, 10012,
   10015, 10017, 10024, 10023, 10037, 10038, 10039, 10040, 10041, 10042,
   10043, 10047, 10048, 10052, 10053, 10059, 10068, 10075, 10076, 10080,
   10084, 10088, 10094, 10100, 10104, 10108, 10112, 10121, 10125, 10134,
   10143, 10144, 10148, 10157, 10158, 10162, 10166, 10175, 10185, 10184,
   10193, 10192, 10224, 10227, 10247, 10248, 10251, 10252, 10260, 10261,
   10266, 10271, 10281, 10298, 10303, 10313, 10331, 10330, 10340, 10353,
   10356, 10364, 10367, 10372, 10377, 10385, 10386, 10387, 10388, 10389,
   10390, 10394, 10402, 10403, 10407, 10411, 10422, 10421, 10431, 10444,
   10447, 10451, 10455, 10463, 10475, 10478, 10485, 10486, 10487, 10488,
   10495, 10494, 10504, 10511, 10512, 10516, 10531, 10532, 10537, 10538,
   10542, 10543, 10547, 10551, 10562, 10561, 10570, 10574, 10578, 10582,
   10590, 10594, 10604, 10615, 10616, 10623, 10622, 10631, 10637, 10649,
   10648, 10656, 10670, 10669, 10677, 10694, 10693, 10702, 10710, 10711,
   10716, 10717, 10722, 10729, 10730, 10735, 10742, 10743, 10747, 10748,
   10752, 10753, 10757, 10761, 10772, 10771, 10780, 10781, 10782, 10783,
   10784, 10788, 10815, 10818, 10830, 10840, 10845, 10850, 10855, 10863,
   10903, 10904, 10908, 10951, 10961, 10984, 10985, 10986, 10987, 10991,
   11000, 11006, 11016, 11025, 11034, 11035, 11042, 11041, 11053, 11063,
   11064, 11069, 11072, 11076, 11080, 11087, 11088, 11092, 11093, 11094,
   11098, 11102, 11114, 11115, 11116, 11126, 11130, 11137, 11145, 11146,
   11150, 11151, 11155, 11163, 11164, 11169, 11170, 11171, 11181, 11185,
   11192, 11200, 11201, 11205, 11215, 11216, 11217, 11227, 11231, 11238,
   11246, 11247, 11251, 11261, 11262, 11263, 11273, 11277, 11284, 11292,
   11293, 11297, 11308, 11309, 11316, 11318, 11327, 11331, 11338, 11346,
   11347, 11351, 11361, 11362, 11372, 11376, 11383, 11391, 11392, 11396,
   11406, 11407, 11411, 11412, 11422, 11426, 11433, 11441, 11442, 11446,
   11456, 11460, 11470, 11477, 11484, 11484, 11495, 11496, 11500, 11501,
   11503, 11505, 11507, 11508, 11510, 11511, 11512, 11513, 11514, 11516,
   11517, 11518, 11521, 11523, 11527, 11530, 11532, 11533, 11534, 11535,
   11536, 11537, 11539, 11540, 11541, 11542, 11543, 11546, 11547, 11551,
   11552, 11556, 11557, 11561, 11562, 11566, 11570, 11576, 11580, 11586,
   11587, 11588, 11592, 11593, 11594, 11598, 11599, 11600, 11604, 11608,
   11612, 11613, 11614, 11617, 11618, 11628, 11640, 11649, 11661, 11670,
   11682, 11697, 11698, 11703, 11712, 11718, 11728, 11742, 11764, 11768,
   11789, 11801, 11842, 11856, 11857, 11862, 11868, 11869, 11874, 11886,
   11887, 11888, 11895, 11906, 11907, 11911, 11919, 11927, 11931, 11938,
   11947, 11948, 11954, 11963, 11974, 11991, 11995, 12002, 12003, 12004,
   12011, 12012, 12016, 12020, 12027, 12028, 12032, 12033, 12037, 12038,
   12039, 12040, 12044, 12048, 12052, 12056, 12060, 12081, 12085, 12092,
   12093, 12094, 12098, 12099, 12100, 12101, 12102, 12106, 12110, 12117,
   12118, 12122, 12123, 12127, 12134, 12141, 12142, 12143, 12147, 12148,
   12152, 12156, 12160, 12164, 12165, 12169, 12173, 12174, 12178, 12182,
   12183, 12190, 12194, 12198, 12202, 12206, 12210, 12211, 12217, 12221,
   12225, 12226, 12230, 12237, 12247, 12266, 12284, 12291, 12298, 12305,
   12315, 12322, 12332, 12342, 12352, 12365, 12369, 12377, 12385, 12389,
   12399, 12413, 12436, 12458, 12474, 12475, 12476, 12477, 12478, 12479,
   12483, 12487, 12504, 12508, 12515, 12516, 12517, 12518, 12519, 12520,
   12521, 12527, 12531, 12535, 12539, 12543, 12547, 12551, 12555, 12559,
   12563, 12567, 12571, 12575, 12582, 12583, 12587, 12588, 12589, 12593,
   12594, 12595, 12596, 12600, 12604, 12608, 12615, 12619, 12623, 12630,
   12637, 12644, 12654, 12654, 12665, 12672, 12682, 12689, 12699, 12703,
   12716, 12720, 12735, 12743, 12744, 12748, 12749, 12753, 12754, 12759,
   12762, 12770, 12773, 12780, 12782, 12783, 12787, 12788, 12792, 12793,
   12794, 12799, 12802, 12815, 12819, 12827, 12831, 12835, 12839, 12843,
   12847, 12851, 12855, 12862, 12863, 12867, 12868, 12878, 12879, 12888,
   12892, 12896, 12903, 12904, 12905, 12906, 12907, 12908, 12909, 12910,
   12911, 12912, 12913, 12914, 12915, 12916, 12917, 12918, 12919, 12920,
   12921, 12922, 12923, 12924, 12925, 12926, 12927, 12928, 12929, 12930,
   12931, 12932, 12933, 12934, 12935, 12936, 12937, 12938, 12939, 12940,
   12941, 12942, 12943, 12944, 12945, 12946, 12947, 12948, 12949, 12950,
   12951, 12955, 12956, 12957, 12958, 12959, 12960, 12961, 12962, 12963,
   12964, 12965, 12966, 12967, 12968, 12969, 12970, 12971, 12972, 12973,
   12974, 12975, 12982, 12982, 12983, 12983, 12984, 12984, 12985, 12985,
   12986, 12986, 12986, 12987, 12987, 12988, 12988, 12989, 12989, 12990,
   12990, 12991, 12991, 12992, 12992, 12993, 12993, 12994, 12994, 12995,
   12995, 12996, 12996, 12997, 12997, 12998, 12998, 12999, 12999, 13000,
   13000, 13001, 13001, 13002, 13002, 13002, 13003, 13003, 13004, 13004,
   13005, 13005, 13006, 13006, 13007, 13007, 13008, 13008, 13008, 13009,
   13009, 13010, 13010, 13010, 13011, 13011, 13012, 13012, 13012, 13013,
   13013, 13013, 13014, 13014, 13015, 13015, 13016, 13016, 13017, 13017,
   13018, 13018, 13018, 13019, 13019, 13020, 13020, 13021, 13021, 13021,
   13021, 13022, 13022, 13023, 13023, 13024, 13024, 13025, 13025, 13026,
   13026, 13026, 13027, 13027, 13028, 13028, 13029, 13029, 13030, 13030,
   13030, 13031, 13031, 13032, 13032, 13033, 13033, 13034, 13034, 13035,
   13035, 13036, 13036, 13037, 13037, 13038, 13038, 13039, 13039, 13040,
   13040, 13040, 13041, 13041, 13042, 13042, 13043, 13043, 13047, 13047,
   13048, 13048, 13049, 13049, 13050, 13050, 13051, 13051, 13052, 13052,
   13053, 13053, 13054, 13054, 13055, 13055, 13056, 13056, 13057, 13057,
   13058, 13058, 13059, 13059, 13060, 13060, 13061, 13061, 13064, 13065,
   13066, 13070, 13070, 13071, 13071, 13072, 13072, 13073, 13073, 13074,
   13074, 13075, 13075, 13076, 13076, 13077, 13077
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
  "BOTTOM", "BY", "\"BYTE-LENGTH\"", "CALL", "CANCEL", "CAPACITY",
  "\"CARD-PUNCH\"", "\"CARD-READER\"", "CASSETTE", "CD", "CF", "CH",
  "CHAINING", "CHARACTER", "CHARACTERS", "CLASS", "CLASSIFICATION",
  "\"class-name\"", "CLOSE", "COBOL", "CODE", "\"CODE-SET\"", "COLLATING",
  "COL", "COLS", "COLUMN", "COLUMNS", "COMMA", "\"COMMAND-LINE\"",
  "\"comma delimiter\"", "COMMIT", "COMMON", "COMMUNICATION", "COMP",
  "COMPUTE", "\"COMP-1\"", "\"COMP-2\"", "\"COMP-3\"", "\"COMP-4\"",
  "\"COMP-5\"", "\"COMP-6\"", "\"COMP-X\"", "\"FUNCTION CONCATENATE\"",
  "CONDITION", "CONFIGURATION", "CONSTANT", "CONTAINS", "CONTENT",
  "CONTINUE", "CONTROL", "CONTROLS", "CONVERSION", "CONVERTING", "COPY",
  "CORRESPONDING", "COUNT", "CRT", "\"CRT-UNDER\"", "CURRENCY",
  "\"FUNCTION CURRENT-DATE\"", "CURSOR", "CYCLE", "DATA", "DATE", "DAY",
  "\"DAY-OF-WEEK\"", "DE", "DEBUGGING", "\"DECIMAL-POINT\"",
  "DECLARATIVES", "DEFAULT", "DELETE", "DELIMITED", "DELIMITER",
  "DEPENDING", "DESCENDING", "DESTINATION", "DETAIL", "DISABLE", "DISC",
  "DISK", "DISPLAY", "\"FUNCTION DISPLAY-OF\"", "DIVIDE", "DIVISION",
  "DOWN", "DUPLICATES", "DYNAMIC", "EBCDIC", "EC", "ECHO", "EGI", "\"88\"",
  "ENABLE", "ELSE", "EMI", "END", "\"END-ACCEPT\"", "\"END-ADD\"",
  "\"END-CALL\"", "\"END-COMPUTE\"", "\"END-DELETE\"", "\"END-DISPLAY\"",
  "\"END-DIVIDE\"", "\"END-EVALUATE\"", "\"END FUNCTION\"", "\"END-IF\"",
  "\"END-MULTIPLY\"", "\"END-PERFORM\"", "\"END PROGRAM\"", "\"END-READ\"",
  "\"END-RECEIVE\"", "\"END-RETURN\"", "\"END-REWRITE\"", "\"END-SEARCH\"",
  "\"END-START\"", "\"END-STRING\"", "\"END-SUBTRACT\"",
  "\"END-UNSTRING\"", "\"END-WRITE\"", "ENTRY", "\"ENTRY-CONVENTION\"",
  "ENVIRONMENT", "\"ENVIRONMENT-NAME\"", "\"ENVIRONMENT-VALUE\"", "EOL",
  "EOP", "EOS", "EQUAL", "ERASE", "ERROR", "ESCAPE", "ESI", "EVALUATE",
  "\"EVENT STATUS\"", "EXCEPTION", "\"EXCEPTION CONDITION\"", "EXCLUSIVE",
  "EXIT", "\"exponentiation operator\"", "EXTEND", "EXTERNAL", "F", "FD",
  "\"FILE-CONTROL\"", "\"FILE-ID\"", "FILLER", "FINAL", "FIRST", "FIXED",
  "\"FLOAT-BINARY-128\"", "\"FLOAT-BINARY-32\"", "\"FLOAT-BINARY-64\"",
  "\"FLOAT-DECIMAL-16\"", "\"FLOAT-DECIMAL-34\"", "\"FLOAT-DECIMAL-7\"",
  "\"FLOAT-EXTENDED\"", "\"FLOAT-LONG\"", "\"FLOAT-SHORT\"", "FOOTING",
  "FOR", "\"FOREGROUND-COLOR\"", "FOREVER", "\"FUNCTION FORMATTED-DATE\"",
  "\"FUNCTION FORMATTED-DATETIME\"", "\"FUNCTION FORMATTED-TIME\"", "FREE",
  "FROM", "\"FROM CRT\"", "FULL", "FUNCTION", "\"FUNCTION-ID\"",
  "\"intrinsic function name\"", "GENERATE", "GIVING", "GLOBAL", "GO",
  "GOBACK", "GREATER", "\"GREATER OR EQUAL\"", "GRID", "GROUP", "HEADING",
  "HIGHLIGHT", "\"HIGH-VALUE\"", "ID", "IDENTIFICATION", "IF", "IGNORE",
  "IGNORING", "IN", "INDEX", "INDEXED", "INDICATE", "INITIALIZE",
  "INITIALIZED", "INITIATE", "INPUT", "\"INPUT-OUTPUT\"", "INSPECT",
  "INTERMEDIATE", "INTO", "INTRINSIC", "INVALID", "\"INVALID KEY\"", "IS",
  "\"I-O\"", "\"I-O-CONTROL\"", "JUSTIFIED", "KEPT", "KEY", "KEYBOARD",
  "LABEL", "LAST", "LEADING", "LEFT", "LEFTLINE", "LENGTH",
  "\"FUNCTION LENGTH/BYTE-LENGTH\"", "\"LENGTH OF\"", "LESS",
  "\"LESS OR EQUAL\"", "LIMIT", "LIMITS", "LINAGE", "\"LINAGE-COUNTER\"",
  "LINE", "\"LINE-COUNTER\"", "LINES", "LINKAGE", "\"Literal\"", "LOCALE",
  "\"FUNCTION LOCALE-DATE\"", "\"FUNCTION LOCALE-TIME\"",
  "\"FUNCTION LOCALE-TIME-FROM-SECONDS\"", "\"LOCAL-STORAGE\"", "LOCK",
  "LOWER", "\"FUNCTION LOWER-CASE\"", "LOWLIGHT", "\"LOW-VALUE\"",
  "MANUAL", "\"MAGNETIC-TAPE\"", "MEMORY", "MERGE", "MESSAGE", "MINUS",
  "\"Mnemonic name\"", "MODE", "MOVE", "MULTIPLE", "MULTIPLY", "NAME",
  "NATIONAL", "\"NATIONAL-EDITED\"", "\"FUNCTION NATIONAL-OF\"", "NATIVE",
  "\"NEAREST-AWAY-FROM-ZERO\"", "\"NEAREST-EVEN\"",
  "\"NEAREST-TOWARD-ZERO\"", "NEGATIVE", "NESTED", "NEXT", "\"NEXT PAGE\"",
  "NO", "\"NO DATA\"", "\"NO-ECHO\"", "NORMAL", "NOT", "NOTHING",
  "\"NOT END\"", "\"NOT EOP\"", "\"NOT ESCAPE\"", "\"NOT EQUAL\"",
  "\"NOT EXCEPTION\"", "\"NOT INVALID KEY\"", "\"NOT OVERFLOW\"",
  "\"NOT SIZE ERROR\"", "\"NO ADVANCING\"", "NUMBER", "NUMBERS", "NUMERIC",
  "\"NUMERIC-EDITED\"", "\"FUNCTION NUMVAL-C\"", "\"OBJECT-COMPUTER\"",
  "OCCURS", "OF", "OFF", "OMITTED", "ON", "ONLY", "OPEN", "OPTIONAL",
  "OPTIONS", "OR", "ORDER", "ORGANIZATION", "OTHER", "OUTPUT", "OVERLINE",
  "\"PACKED-DECIMAL\"", "PADDING", "PAGE", "\"PAGE-COUNTER\"", "PARAGRAPH",
  "PERFORM", "PH", "PF", "PICTURE", "\"PICTURE SYMBOL\"", "PLUS",
  "POINTER", "POSITION", "POSITIVE", "PRESENT", "PREVIOUS", "PRINT",
  "PRINTER", "PRINTER_1", "PRINTING", "PROCEDURE", "PROCEDURES", "PROCEED",
  "PROGRAM", "\"PROGRAM-ID\"", "\"program name\"", "\"PROGRAM-POINTER\"",
  "PROHIBITED", "PROMPT", "\"PROTECTED\"", "QUEUE", "QUOTE", "RANDOM",
  "RD", "READ", "\"READY TRACE\"", "RECEIVE", "RECORD", "RECORDING",
  "RECORDS", "RECURSIVE", "REDEFINES", "REEL", "REFERENCE", "REFERENCES",
  "RELATIVE", "RELEASE", "REMAINDER", "REMOVAL", "RENAMES", "REPLACE",
  "REPLACING", "REPORT", "REPORTING", "REPORTS", "REPOSITORY", "REQUIRED",
  "RESERVE", "RESET", "\"RESET TRACE\"", "RETRY", "RETURN", "RETURNING",
  "REVERSE", "\"FUNCTION REVERSE\"", "\"REVERSE-VIDEO\"", "REVERSED",
  "REWIND", "REWRITE", "RF", "RH", "RIGHT", "ROLLBACK", "ROUNDED",
  "ROUNDING", "RUN", "S", "SAME", "SCREEN", "\"SCREEN-CONTROL\"", "SCROLL",
  "SD", "SEARCH", "SECONDS", "SECTION", "SECURE", "SEGMENT",
  "\"SEGMENT-LIMIT\"", "SELECT", "\"semi-colon\"", "SENTENCE", "SEPARATE",
  "SEQUENCE", "SEQUENTIAL", "SET", "\"78\"", "SHARING", "SIGN", "SIGNED",
  "\"SIGNED-INT\"", "\"SIGNED-LONG\"", "\"SIGNED-SHORT\"", "\"66\"",
  "SIZE", "\"SIZE ERROR\"", "SORT", "\"SORT-MERGE\"", "SOURCE",
  "\"SOURCE-COMPUTER\"", "SPACE", "\"SPECIAL-NAMES\"", "STANDARD",
  "\"STANDARD-1\"", "\"STANDARD-2\"", "START", "STATIC", "STATUS",
  "STDCALL", "STEP", "STOP", "STRING", "SUB_QUEUE_1", "SUB_QUEUE_2",
  "SUB_QUEUE_3", "\"FUNCTION SUBSTITUTE\"", "\"FUNCTION SUBSTITUTE-CASE\"",
  "SUBTRACT", "SUM", "SUPPRESS", "SYMBOLIC", "SYNCHRONIZED",
  "\"SYSTEM-DEFAULT\"", "\"SYSTEM-OFFSET\"", "TAB", "TABLE", "TALLYING",
  "TAPE", "TERMINAL", "TERMINATE", "TEXT", "TEST", "THAN", "THEN", "THRU",
  "TIME", "\"TIME-OUT\"", "TIMES", "TO", "\"&\"", "\")\"", "\":\"",
  "\"/\"", "\".\"", "\"=\"", "\"EXTERN\"", "\"FALSE\"", "\"FILE\"",
  "\">\"", "\"INITIAL\"", "\"<\"", "\"-\"", "\"*\"", "\"NULL\"",
  "\"OVERFLOW\"", "\"(\"", "\"+\"", "\"TRUE\"", "TOP",
  "\"TOWARD-GREATER\"", "\"TOWARD-LESSER\"", "TRAILING", "TRANSFORM",
  "\"FUNCTION TRIM\"", "TRUNCATION", "TYPE", "U", "UNBOUNDED", "UNDERLINE",
  "UNIT", "UNLOCK", "UNSIGNED", "\"UNSIGNED-INT\"", "\"UNSIGNED-LONG\"",
  "\"UNSIGNED-SHORT\"", "UNSTRING", "UNTIL", "UP", "UPDATE", "UPON",
  "\"UPON ARGUMENT-NUMBER\"", "\"UPON COMMAND-LINE\"",
  "\"UPON ENVIRONMENT-NAME\"", "\"UPON ENVIRONMENT-VALUE\"", "UPPER",
  "\"FUNCTION UPPER-CASE\"", "USAGE", "USE", "USER", "\"USER-DEFAULT\"",
  "\"user function name\"", "USING", "V", "VALUE", "VARIABLE", "VARYING",
  "WAIT", "WHEN", "\"FUNCTION WHEN-COMPILED\"", "WITH", "\"Identifier\"",
  "WORDS", "\"WORKING-STORAGE\"", "WRITE", "YYYYDDD", "YYYYMMDD", "ZERO",
  "SHIFT_PREFER", "PURGE", "SEND", "OVERFLOW", "$accept", "start", "$@1",
  "compilation_group", "nested_list", "$@2", "source_element_list",
  "source_element", "simple_prog", "$@3", "program_definition",
  "function_definition", "_end_program_list", "end_program_list",
  "end_program", "end_function", "_program_body", "_identification_header",
  "identification_or_id", "program_id_paragraph", "$@4", "$@5",
  "function_id_paragraph", "$@6", "program_id_name", "end_program_name",
  "_as_literal", "_program_type", "program_type_clause",
  "init_or_recurse_and_common", "init_or_recurse", "_options_paragraph",
  "_options_clauses", "_default_rounded_clause",
  "_entry_convention_clause", "convention_type",
  "_intermediate_rounding_clause", "intermediate_rounding_choice",
  "_environment_division", "_environment_header", "_configuration_section",
  "_configuration_header", "_source_object_computer_paragraphs",
  "source_computer_paragraph", "$@7", "_source_computer_entry",
  "_with_debugging_mode", "object_computer_paragraph", "$@8",
  "_object_computer_entry", "object_clauses_list", "object_clauses",
  "object_computer_memory", "object_computer_sequence",
  "object_computer_segment", "object_computer_class", "locale_class",
  "computer_words", "_repository_paragraph", "$@9", "_repository_entry",
  "repository_list", "repository_name", "repository_name_list",
  "_special_names_paragraph", "_special_names_sentence_list",
  "special_names_sentence_list", "special_name_list", "special_name",
  "mnemonic_name_clause", "$@10", "mnemonic_choices",
  "_special_name_mnemonic_on_off", "on_off_clauses", "on_off_clauses_1",
  "alphabet_name_clause", "@11", "alphabet_definition",
  "alphabet_literal_list", "alphabet_literal", "@12",
  "alphabet_also_sequence", "alphabet_lits", "space_or_zero",
  "symbolic_characters_clause", "_sym_in_word", "_symbolic_collection",
  "symbolic_chars_list", "symbolic_chars_phrase", "char_list",
  "integer_list", "class_name_clause", "class_item_list", "class_item",
  "locale_clause", "currency_sign_clause", "_with_pic_symbol",
  "decimal_point_clause", "numeric_sign_clause", "cursor_clause",
  "crt_status_clause", "screen_control", "event_status",
  "_input_output_section", "_input_output_header", "_file_control_header",
  "_i_o_control_header", "_file_control_sequence", "file_control_entry",
  "$@13", "_select_clause_sequence", "select_clause", "assign_clause",
  "printer_name", "general_device_name", "line_seq_device_name",
  "_line_adv_file", "_ext_clause", "assignment_name", "_assignment_name",
  "access_mode_clause", "access_mode", "alternative_record_key_clause",
  "_suppress_clause", "collating_sequence_clause", "alphabet_name",
  "file_status_clause", "_file_or_sort", "lock_mode_clause", "$@14",
  "lock_mode", "_lock_with", "organization_clause", "organization",
  "padding_character_clause", "record_delimiter_clause",
  "record_key_clause", "key_or_split_keys", "relative_key_clause",
  "reserve_clause", "no_or_integer", "sharing_clause", "sharing_option",
  "_i_o_control", "i_o_control_list", "i_o_control_clause", "same_clause",
  "_same_option", "multiple_file_tape_clause", "$@15",
  "multiple_file_list", "multiple_file", "_multiple_file_position",
  "_data_division", "$@16", "_data_division_header",
  "_file_section_header", "_file_description_sequence", "file_description",
  "file_description_entry", "$@17", "file_type",
  "_file_description_clause_sequence", "file_description_clause",
  "block_contains_clause", "_records_or_characters", "record_clause",
  "_record_depending", "_from_integer", "_to_integer",
  "label_records_clause", "value_of_clause", "file_id", "valueof_name",
  "data_records_clause", "linage_clause", "_linage_sequence",
  "linage_lines", "linage_footing", "linage_top", "linage_bottom",
  "recording_mode_clause", "recording_mode", "u_or_s", "code_set_clause",
  "_for_sub_records_clause", "report_clause", "report_keyword",
  "rep_name_list", "_communication_section", "$@18",
  "_communication_description_sequence", "communication_description",
  "communication_description_entry", "$@19",
  "_communication_description_clause_sequence",
  "communication_description_clause", "_input_cd_clauses",
  "named_input_cd_clauses", "named_input_cd_clause",
  "unnamed_input_cd_clauses", "_output_cd_clauses", "output_cd_clauses",
  "output_cd_clause", "_i_o_cd_clauses", "named_i_o_cd_clauses",
  "named_i_o_cd_clause", "unnamed_i_o_cd_clauses",
  "_working_storage_section", "$@20", "_record_description_list", "$@21",
  "record_description_list_2", "data_description", "$@22", "level_number",
  "_entry_name", "user_entry_name", "const_global", "lit_or_length",
  "con_identifier", "fp32_usage", "fp64_usage", "fp128_usage",
  "pointer_len", "renames_entry", "_renames_thru", "condition_name_entry",
  "$@23", "constant_entry", "$@24", "constant_source",
  "_data_description_clause_sequence", "data_description_clause",
  "redefines_clause", "external_clause", "_as_extname", "_global_clause",
  "global_clause", "picture_clause", "usage_clause", "usage",
  "float_usage", "double_usage", "sign_clause", "report_occurs_clause",
  "_occurs_step", "occurs_clause", "_occurs_to_integer",
  "_occurs_from_integer", "_occurs_integer_to", "_occurs_depending",
  "_capacity_in", "_occurs_initialized", "_occurs_keys",
  "_occurs_key_list", "ascending_or_descending", "_occurs_indexed",
  "occurs_index_list", "occurs_index", "justified_clause",
  "synchronized_clause", "blank_clause", "based_clause", "value_clause",
  "$@25", "value_item_list", "value_item", "_false_is",
  "any_length_clause", "_local_storage_section", "$@26",
  "_linkage_section", "$@27", "_report_section", "$@28",
  "_report_description_sequence", "report_description", "$@29",
  "_report_description_options", "report_description_option",
  "control_clause", "control_field_list", "identifier_list",
  "page_limit_clause", "page_line_column", "_page_heading_list",
  "page_detail", "heading_clause", "first_detail", "last_heading",
  "last_detail", "footing_clause", "_report_group_description_list",
  "report_group_description_entry", "$@30", "_report_group_options",
  "report_group_option", "type_clause", "type_option", "_control_final",
  "_or_page", "next_group_clause", "sum_clause_list", "_reset_clause",
  "data_or_final", "present_when_condition", "varying_clause",
  "line_clause", "line_keyword_clause", "column_clause",
  "col_keyword_clause", "report_line_integer_list", "line_or_plus",
  "report_col_integer_list", "col_or_plus", "source_clause",
  "group_indicate_clause", "report_usage_clause", "_screen_section",
  "$@31", "_screen_description_list", "screen_description_list",
  "screen_description", "$@32", "_screen_options", "screen_option", "eol",
  "eos", "plus_plus", "minus_minus", "_screen_line_plus_minus",
  "_screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "_procedure_division", "$@33", "$@34", "$@35",
  "_procedure_using_chaining", "$@36", "$@37", "procedure_param_list",
  "procedure_param", "_procedure_type", "_size_optional",
  "size_is_integer", "_procedure_optional", "_procedure_returning",
  "_procedure_declaratives", "$@38", "_procedure_list", "procedure",
  "section_header", "$@39", "_use_statement", "paragraph_header",
  "invalid_statement", "_segment", "statement_list", "@40", "@41",
  "statements", "$@42", "statement", "accept_statement", "$@43",
  "accept_body", "$@44", "accp_identifier", "_accept_clauses",
  "accept_clauses", "accept_clause", "lines_or_number", "at_line_column",
  "line_number", "column_number", "mode_is_block", "accp_attr", "no_echo",
  "reverse_video", "update_default", "end_accept", "add_statement", "$@45",
  "add_body", "_add_to", "end_add", "allocate_statement", "$@46",
  "allocate_body", "allocate_returning", "alter_statement", "$@47",
  "alter_body", "alter_entry", "_proceed_to", "call_statement", "$@48",
  "call_body", "$@49", "_mnemonic_conv", "program_or_prototype",
  "_id_or_lit_or_func_as", "nested_or_prototype", "call_using", "$@50",
  "call_param_list", "call_param", "call_type", "call_returning",
  "return_give", "null_or_omitted", "call_exception_phrases",
  "_call_on_exception", "call_on_exception", "_call_not_on_exception",
  "call_not_on_exception", "end_call", "cancel_statement", "$@51",
  "cancel_body", "id_or_lit_or_program_name", "close_statement", "$@52",
  "close_body", "close_option", "compute_statement", "$@53",
  "compute_body", "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "$@54", "delete_body", "delete_file_list",
  "end_delete", "disable_statement", "$@55", "enable_disable_handling",
  "_enable_disable_key", "communication_mode", "display_statement", "$@56",
  "display_body", "screen_or_device_display", "display_list",
  "display_atom", "$@57", "disp_list", "display_clauses", "display_clause",
  "display_upon", "crt_under", "disp_attr", "end_display",
  "divide_statement", "$@58", "divide_body", "end_divide",
  "enable_statement", "$@59", "entry_statement", "$@60", "entry_body",
  "evaluate_statement", "$@61", "evaluate_body", "evaluate_subject_list",
  "evaluate_subject", "evaluate_condition_list", "evaluate_case_list",
  "evaluate_case", "evaluate_other", "evaluate_when_list",
  "evaluate_object_list", "evaluate_object", "_evaluate_thru_expr",
  "end_evaluate", "exit_statement", "$@62", "exit_body",
  "exit_program_returning", "free_statement", "$@63", "free_body",
  "generate_statement", "$@64", "generate_body", "goto_statement", "$@65",
  "go_body", "goto_depending", "goback_statement", "if_statement", "$@66",
  "if_else_statements", "end_if", "initialize_statement", "$@67",
  "initialize_body", "initialize_filler", "initialize_value",
  "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "$@68", "initiate_body", "inspect_statement",
  "$@69", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@70", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region", "inspect_before",
  "inspect_after", "merge_statement", "$@71", "move_statement", "$@72",
  "move_body", "multiply_statement", "$@73", "multiply_body",
  "end_multiply", "open_statement", "$@74", "open_body", "open_file_entry",
  "open_mode", "open_sharing", "open_option", "perform_statement", "$@75",
  "perform_body", "$@76", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "purge_statement", "$@77",
  "read_statement", "$@78", "read_body", "read_into", "lock_phrases",
  "ignoring_lock", "advancing_lock_or_retry", "_retry_phrase",
  "retry_phrase", "retry_options", "_extended_with_lock",
  "extended_with_lock", "read_key", "read_handler", "end_read",
  "ready_statement", "receive_statement", "$@79", "receive_body",
  "message_or_segment", "_data_sentence_phrases", "_no_data_sentence",
  "no_data_sentence", "_with_data_sentence", "with_data_sentence",
  "end_receive", "release_statement", "$@80", "release_body",
  "reset_statement", "return_statement", "$@81", "return_body",
  "end_return", "rewrite_statement", "$@82", "rewrite_body", "_with_lock",
  "with_lock", "end_rewrite", "rollback_statement", "search_statement",
  "$@83", "search_body", "search_varying", "search_at_end", "search_whens",
  "search_when", "end_search", "send_statement", "$@84", "send_body",
  "_from_identifier", "from_identifier", "with_indicator",
  "_replacing_line", "set_statement", "$@85", "set_body", "on_or_off",
  "up_or_down", "set_environment", "set_attr", "set_attr_clause",
  "set_attr_one", "set_to", "set_up_down", "set_to_on_off_sequence",
  "set_to_on_off", "set_to_true_false_sequence", "set_to_true_false",
  "set_last_exception_to_off", "sort_statement", "$@86", "sort_body",
  "@87", "sort_key_list", "_key_list", "_sort_duplicates",
  "sort_collating", "sort_input", "sort_output", "start_statement", "$@88",
  "start_body", "sizelen_clause", "start_key", "start_op", "disallowed_op",
  "not_equal_op", "end_start", "stop_statement", "$@89", "stop_returning",
  "_status_x", "stop_literal", "string_statement", "$@90", "string_body",
  "string_item_list", "string_item", "_string_delimited",
  "string_delimiter", "_with_pointer", "end_string", "subtract_statement",
  "$@91", "subtract_body", "end_subtract", "suppress_statement",
  "_printing", "terminate_statement", "$@92", "terminate_body",
  "transform_statement", "$@93", "transform_body", "unlock_statement",
  "$@94", "unlock_body", "unstring_statement", "$@95", "unstring_body",
  "_unstring_delimited", "unstring_delimited_list",
  "unstring_delimited_item", "unstring_into", "unstring_into_item",
  "_unstring_into_delimiter", "_unstring_into_count", "_unstring_tallying",
  "end_unstring", "use_statement", "$@96", "use_phrase",
  "use_file_exception", "use_global", "use_file_exception_target",
  "use_debugging", "debugging_list", "debugging_target", "_all_refs",
  "use_start_end", "program_start_end", "use_reporting", "use_exception",
  "use_ex_keyw", "write_statement", "$@97", "write_body", "from_option",
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
  "condition", "expr", "partial_expr", "$@98", "expr_tokens", "expr_token",
  "_not", "not", "condition_or_class", "eq", "gt", "lt", "ge", "le",
  "exp_list", "_e_sep", "exp", "exp_term", "exp_factor", "exp_unary",
  "exp_atom", "line_linage_page_counter", "arithmetic_x_list",
  "arithmetic_x", "record_name", "file_or_record_name", "table_name",
  "file_name_list", "file_name", "cd_name", "report_name",
  "mnemonic_name_list", "mnemonic_name", "procedure_name_list",
  "procedure_name", "label", "integer_label", "reference_list",
  "reference", "single_reference", "optional_reference_list",
  "optional_reference", "reference_or_literal", "undefined_word",
  "unique_word", "target_x_list", "target_x", "_x_list", "x_list", "x",
  "call_x", "x_common", "report_x_list", "expr_x", "arith_x",
  "prog_or_entry", "alnum_or_id", "simple_display_value",
  "simple_display_all_value", "simple_value", "simple_all_value",
  "id_or_lit", "id_or_lit_or_func", "id_or_lit_or_length_or_func",
  "num_id_or_lit", "positive_id_or_lit", "pos_num_id_or_lit",
  "from_parameter", "sub_identifier", "table_identifier",
  "sub_identifier_1", "display_identifier", "numeric_identifier",
  "identifier_or_file_name", "identifier", "identifier_1",
  "target_identifier", "target_identifier_1", "qualified_word", "subref",
  "refmod", "integer", "symbolic_integer", "report_integer", "class_value",
  "literal", "basic_literal", "basic_value", "function", "func_no_parm",
  "func_one_parm", "func_multi_parm", "func_refmod", "func_args",
  "trim_args", "length_arg", "$@99", "numvalc_args", "locale_dt_args",
  "formatted_datetime_args", "formatted_time_args", "not_const_word",
  "flag_all", "flag_duplicates", "flag_initialized", "flag_initialized_to",
  "to_init_val", "_flag_next", "_flag_not", "flag_optional",
  "flag_rounded", "round_mode", "round_choice", "flag_separate",
  "_from_idx_to_idx", "_dest_index", "error_stmt_recover", "verb",
  "scope_terminator", "_advancing", "_after", "_are", "_area", "_areas",
  "_as", "_at", "_before", "_binary", "_by", "_character", "_characters",
  "_contains", "_data", "_end_of", "_file", "_final", "_for", "_from",
  "_in", "_in_order", "_index", "_indicate", "_initial", "_into", "_is",
  "_is_are", "_key", "_left_or_right", "_line", "_line_or_lines",
  "_limits", "_lines", "_message", "_mode", "_number", "_numbers", "_of",
  "_on", "_onoff_status", "_other", "_procedure", "_program", "_record",
  "_records", "_right", "_sign", "_signed", "_sign_is", "_size",
  "_standard", "_status", "_symbolic", "_tape", "_terminal", "_then",
  "_times", "_to", "_to_using", "_when", "_when_set_to", "_with",
  "coll_sequence", "column_or_col", "columns_or_cols", "comp_equal",
  "exception_or_error", "in_of", "label_option", "line_or_lines",
  "lock_records", "object_char_or_word", "records", "reel_or_unit",
  "scroll_line_or_lines", "size_or_length", "with_dups",
  "prog_coll_sequence", "detail_keyword", "ch_keyword", "cf_keyword",
  "ph_keyword", "pf_keyword", "rh_keyword", "rf_keyword",
  "control_keyword", YY_NULL
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
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   569,   571,   570,   572,   572,   574,   573,   575,   575,
     576,   576,   578,   577,   579,   580,   581,   581,   582,   582,
     583,   584,   585,   586,   586,   587,   587,   589,   590,   588,
     592,   591,   593,   593,   594,   594,   595,   595,   596,   596,
     597,   597,   597,   597,   598,   598,   599,   599,   600,   600,
     601,   602,   602,   603,   603,   604,   604,   604,   605,   605,
     606,   606,   606,   606,   607,   608,   608,   609,   610,   610,
     611,   611,   611,   611,   611,   613,   612,   614,   614,   615,
     615,   617,   616,   618,   618,   618,   618,   619,   619,   620,
     620,   620,   620,   621,   622,   623,   624,   625,   625,   625,
     625,   626,   626,   627,   628,   627,   629,   629,   629,   630,
     630,   631,   631,   631,   631,   632,   632,   633,   633,   634,
     634,   635,   635,   636,   636,   637,   637,   637,   637,   637,
     637,   637,   637,   637,   637,   637,   637,   639,   638,   640,
     640,   640,   640,   641,   641,   642,   643,   643,   645,   644,
     646,   646,   646,   646,   646,   646,   647,   647,   648,   648,
     649,   648,   650,   650,   651,   651,   651,   651,   651,   651,
     652,   652,   653,   654,   654,   655,   656,   656,   657,   658,
     658,   659,   659,   660,   661,   661,   662,   662,   663,   664,
     665,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     673,   674,   674,   675,   675,   676,   676,   678,   677,   679,
     679,   680,   680,   680,   680,   680,   680,   680,   680,   680,
     680,   680,   680,   680,   681,   681,   681,   681,   681,   681,
     682,   682,   682,   683,   683,   683,   683,   684,   684,   684,
     684,   684,   684,   684,   685,   685,   686,   686,   686,   687,
     687,   688,   688,   688,   689,   690,   690,   690,   691,   692,
     692,   692,   693,   694,   695,   696,   696,   696,   698,   697,
     699,   699,   699,   700,   700,   700,   700,   701,   701,   702,
     702,   702,   702,   703,   704,   705,   706,   706,   706,   707,
     708,   709,   709,   710,   711,   711,   711,   712,   712,   712,
     713,   713,   714,   714,   715,   716,   716,   716,   716,   718,
     717,   719,   719,   720,   721,   721,   723,   722,   724,   724,
     725,   725,   726,   726,   727,   729,   728,   728,   730,   730,
     731,   731,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   733,   734,   734,   734,   735,   735,   735,
     736,   736,   737,   737,   738,   738,   739,   740,   740,   741,
     741,   742,   742,   743,   744,   745,   745,   746,   746,   746,
     747,   748,   749,   750,   751,   751,   751,   751,   751,   752,
     752,   753,   754,   754,   755,   756,   756,   757,   757,   758,
     759,   758,   760,   760,   761,   763,   762,   764,   764,   765,
     765,   765,   766,   766,   766,   767,   767,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   769,   770,
     770,   771,   771,   772,   772,   772,   772,   772,   772,   772,
     773,   773,   773,   774,   774,   775,   775,   775,   775,   775,
     775,   776,   777,   778,   777,   779,   780,   779,   781,   781,
     782,   782,   782,   783,   782,   782,   784,   785,   785,   785,
     786,   787,   787,   788,   788,   788,   788,   789,   789,   789,
     789,   789,   789,   789,   789,   789,   789,   789,   789,   789,
     790,   790,   791,   791,   792,   792,   792,   793,   793,   794,
     795,   795,   797,   796,   798,   799,   798,   800,   800,   801,
     801,   802,   802,   802,   802,   802,   802,   802,   802,   802,
     802,   802,   802,   802,   803,   804,   805,   805,   806,   806,
     807,   808,   809,   809,   810,   810,   810,   810,   810,   810,
     810,   810,   810,   810,   810,   810,   810,   810,   810,   810,
     810,   810,   810,   810,   810,   810,   810,   810,   810,   810,
     810,   810,   810,   810,   810,   810,   810,   810,   810,   810,
     811,   811,   812,   812,   813,   813,   814,   815,   815,   816,
     816,   816,   817,   817,   818,   818,   819,   819,   820,   820,
     821,   821,   822,   822,   823,   824,   824,   825,   825,   826,
     826,   827,   827,   828,   829,   830,   831,   832,   834,   833,
     835,   835,   836,   836,   837,   837,   838,   838,   839,   840,
     839,   841,   842,   841,   843,   844,   843,   845,   845,   847,
     846,   848,   848,   848,   849,   849,   849,   849,   850,   851,
     852,   852,   853,   854,   854,   854,   855,   855,   856,   856,
     856,   856,   856,   857,   858,   859,   860,   861,   862,   862,
     864,   863,   865,   865,   866,   866,   866,   866,   866,   866,
     866,   866,   866,   866,   866,   866,   866,   866,   866,   866,
     867,   868,   868,   868,   868,   868,   868,   868,   869,   869,
     869,   870,   870,   871,   872,   873,   873,   874,   874,   875,
     876,   877,   878,   878,   879,   880,   880,   881,   881,   882,
     882,   882,   883,   883,   884,   884,   885,   886,   887,   888,
     889,   888,   890,   890,   891,   891,   892,   893,   892,   892,
     894,   894,   895,   895,   895,   895,   895,   895,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   896,
     896,   897,   897,   898,   898,   899,   899,   900,   900,   900,
     901,   901,   901,   902,   903,   904,   905,   906,   904,   907,
     904,   908,   909,   908,   910,   908,   911,   911,   912,   913,
     913,   913,   914,   914,   914,   914,   914,   914,   915,   916,
     916,   917,   917,   917,   918,   919,   918,   920,   920,   921,
     921,   921,   921,   921,   923,   922,   924,   924,   925,   926,
     927,   927,   929,   930,   928,   932,   931,   931,   933,   933,
     933,   933,   933,   933,   933,   933,   933,   933,   933,   933,
     933,   933,   933,   933,   933,   933,   933,   933,   933,   933,
     933,   933,   933,   933,   933,   933,   933,   933,   933,   933,
     933,   933,   933,   933,   933,   933,   933,   933,   933,   933,
     933,   933,   933,   933,   933,   933,   933,   933,   933,   933,
     933,   933,   933,   933,   935,   934,   937,   936,   936,   936,
     936,   936,   936,   936,   936,   936,   936,   936,   936,   936,
     936,   936,   936,   936,   936,   936,   936,   938,   938,   939,
     939,   940,   940,   941,   941,   941,   941,   941,   942,   942,
     943,   943,   943,   944,   945,   945,   946,   947,   947,   947,
     947,   947,   947,   947,   947,   947,   947,   947,   947,   947,
     947,   947,   947,   947,   947,   947,   947,   947,   947,   947,
     947,   947,   947,   947,   947,   948,   948,   948,   949,   949,
     949,   950,   950,   951,   951,   953,   952,   954,   954,   954,
     954,   955,   955,   956,   956,   958,   957,   959,   959,   960,
     960,   962,   961,   963,   963,   964,   965,   965,   967,   966,
     969,   968,   970,   970,   970,   970,   970,   971,   971,   972,
     972,   973,   973,   974,   975,   974,   976,   976,   977,   977,
     978,   978,   978,   978,   979,   979,   979,   979,   979,   980,
     980,   981,   981,   982,   982,   982,   983,   983,   984,   984,
     985,   985,   986,   987,   987,   989,   988,   990,   990,   991,
     991,   993,   992,   994,   994,   995,   995,   995,   995,   995,
     997,   996,   998,   999,   999,  1000,  1001,  1003,  1002,  1004,
    1004,  1005,  1005,  1006,  1006,  1008,  1007,  1009,  1010,  1010,
    1011,  1011,  1011,  1011,  1011,  1013,  1012,  1014,  1014,  1014,
    1014,  1014,  1015,  1015,  1016,  1016,  1018,  1017,  1019,  1019,
    1020,  1020,  1021,  1021,  1021,  1021,  1021,  1022,  1022,  1022,
    1022,  1023,  1023,  1024,  1024,  1024,  1024,  1024,  1024,  1024,
    1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,
    1025,  1025,  1027,  1026,  1028,  1028,  1028,  1028,  1028,  1029,
    1029,  1031,  1030,  1033,  1032,  1034,  1036,  1035,  1037,  1038,
    1038,  1039,  1039,  1039,  1040,  1040,  1041,  1041,  1042,  1043,
    1044,  1044,  1045,  1045,  1046,  1046,  1046,  1046,  1047,  1047,
    1048,  1048,  1050,  1049,  1051,  1051,  1051,  1051,  1051,  1051,
    1051,  1052,  1052,  1054,  1053,  1055,  1057,  1056,  1058,  1060,
    1059,  1061,  1062,  1062,  1063,  1065,  1064,  1066,  1066,  1066,
    1067,  1067,  1069,  1068,  1070,  1071,  1071,  1072,  1072,  1072,
    1073,  1073,  1074,  1074,  1075,  1076,  1076,  1076,  1076,  1076,
    1076,  1076,  1077,  1077,  1079,  1078,  1080,  1080,  1082,  1081,
    1083,  1084,  1084,  1084,  1085,  1085,  1085,  1085,  1087,  1086,
    1088,  1089,  1090,  1090,  1091,  1091,  1091,  1091,  1091,  1091,
    1092,  1092,  1093,  1093,  1094,  1094,  1094,  1094,  1094,  1095,
    1096,  1096,  1096,  1096,  1096,  1097,  1098,  1100,  1099,  1102,
    1101,  1103,  1103,  1105,  1104,  1106,  1106,  1107,  1107,  1109,
    1108,  1110,  1110,  1111,  1112,  1112,  1112,  1112,  1113,  1113,
    1114,  1114,  1114,  1114,  1116,  1115,  1117,  1118,  1117,  1117,
    1119,  1119,  1120,  1120,  1121,  1121,  1122,  1122,  1122,  1122,
    1122,  1123,  1123,  1124,  1124,  1125,  1125,  1126,  1128,  1127,
    1130,  1129,  1131,  1132,  1132,  1133,  1133,  1133,  1133,  1134,
    1134,  1135,  1135,  1136,  1136,  1137,  1138,  1138,  1138,  1139,
    1139,  1140,  1140,  1140,  1141,  1141,  1142,  1142,  1143,  1143,
    1144,  1146,  1145,  1147,  1148,  1148,  1149,  1149,  1149,  1150,
    1150,  1151,  1152,  1152,  1153,  1154,  1154,  1156,  1155,  1157,
    1158,  1160,  1159,  1161,  1162,  1162,  1164,  1163,  1165,  1166,
    1166,  1167,  1167,  1168,  1168,  1169,  1171,  1170,  1172,  1172,
    1173,  1173,  1174,  1174,  1175,  1175,  1176,  1177,  1177,  1179,
    1178,  1180,  1180,  1181,  1181,  1182,  1183,  1183,  1183,  1183,
    1184,  1184,  1186,  1185,  1187,  1187,  1187,  1187,  1187,  1187,
    1187,  1188,  1188,  1189,  1189,  1190,  1191,  1192,  1192,  1193,
    1193,  1193,  1193,  1193,  1193,  1193,  1193,  1194,  1194,  1195,
    1196,  1196,  1197,  1198,  1198,  1199,  1199,  1200,  1202,  1201,
    1204,  1203,  1205,  1205,  1206,  1206,  1207,  1207,  1208,  1208,
    1209,  1209,  1209,  1210,  1210,  1210,  1212,  1211,  1213,  1214,
    1214,  1215,  1215,  1215,  1215,  1216,  1216,  1216,  1216,  1216,
    1216,  1217,  1218,  1218,  1219,  1219,  1221,  1220,  1220,  1222,
    1222,  1222,  1222,  1222,  1223,  1223,  1224,  1224,  1224,  1224,
    1226,  1225,  1227,  1228,  1228,  1229,  1230,  1230,  1231,  1231,
    1232,  1232,  1233,  1233,  1235,  1234,  1236,  1236,  1236,  1236,
    1237,  1237,  1238,  1239,  1239,  1241,  1240,  1242,  1242,  1244,
    1243,  1245,  1247,  1246,  1248,  1250,  1249,  1251,  1252,  1252,
    1253,  1253,  1254,  1255,  1255,  1256,  1257,  1257,  1258,  1258,
    1259,  1259,  1260,  1260,  1262,  1261,  1263,  1263,  1263,  1263,
    1263,  1264,  1265,  1265,  1266,  1266,  1266,  1266,  1266,  1267,
    1268,  1268,  1269,  1269,  1269,  1270,  1270,  1270,  1270,  1271,
    1272,  1272,  1273,  1274,  1275,  1275,  1277,  1276,  1278,  1279,
    1279,  1280,  1280,  1280,  1280,  1281,  1281,  1282,  1282,  1282,
    1283,  1283,  1284,  1284,  1284,  1285,  1285,  1286,  1287,  1287,
    1288,  1288,  1289,  1290,  1290,  1291,  1291,  1291,  1292,  1292,
    1293,  1294,  1294,  1295,  1296,  1296,  1296,  1297,  1297,  1298,
    1299,  1299,  1300,  1301,  1301,  1301,  1302,  1302,  1303,  1304,
    1304,  1305,  1306,  1306,  1307,  1307,  1308,  1308,  1309,  1310,
    1310,  1311,  1312,  1312,  1313,  1313,  1314,  1315,  1315,  1316,
    1317,  1317,  1318,  1318,  1319,  1319,  1320,  1321,  1321,  1322,
    1323,  1323,  1324,  1325,  1327,  1326,  1328,  1328,  1329,  1329,
    1329,  1329,  1329,  1329,  1329,  1329,  1329,  1329,  1329,  1329,
    1329,  1329,  1330,  1330,  1331,  1332,  1332,  1332,  1332,  1332,
    1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1333,
    1333,  1334,  1334,  1335,  1335,  1336,  1337,  1338,  1338,  1339,
    1339,  1339,  1340,  1340,  1340,  1341,  1341,  1341,  1342,  1342,
    1343,  1343,  1343,  1344,  1344,  1345,  1345,  1345,  1345,  1345,
    1345,  1346,  1346,  1347,  1348,  1349,  1349,  1350,  1351,  1351,
    1352,  1353,  1354,  1355,  1355,  1356,  1357,  1357,  1358,  1359,
    1359,  1359,  1360,  1361,  1361,  1362,  1363,  1364,  1364,  1365,
    1366,  1366,  1367,  1367,  1368,  1369,  1369,  1370,  1370,  1370,
    1371,  1371,  1372,  1372,  1373,  1373,  1374,  1374,  1375,  1375,
    1375,  1375,  1375,  1375,  1375,  1375,  1375,  1376,  1376,  1377,
    1377,  1377,  1378,  1378,  1378,  1378,  1378,  1378,  1378,  1379,
    1379,  1380,  1380,  1381,  1382,  1383,  1383,  1383,  1384,  1384,
    1385,  1385,  1386,  1386,  1386,  1387,  1387,  1387,  1388,  1388,
    1388,  1389,  1389,  1390,  1390,  1391,  1391,  1391,  1392,  1393,
    1394,  1394,  1395,  1396,  1397,  1398,  1399,  1399,  1399,  1399,
    1400,  1401,  1401,  1401,  1401,  1402,  1402,  1403,  1404,  1404,
    1405,  1406,  1407,  1408,  1408,  1408,  1408,  1408,  1408,  1408,
    1409,  1409,  1410,  1410,  1411,  1411,  1411,  1411,  1411,  1411,
    1411,  1412,  1412,  1412,  1412,  1412,  1412,  1412,  1412,  1412,
    1412,  1412,  1412,  1412,  1413,  1413,  1414,  1414,  1414,  1415,
    1415,  1415,  1415,  1416,  1416,  1416,  1417,  1417,  1417,  1418,
    1418,  1418,  1420,  1419,  1421,  1421,  1422,  1422,  1423,  1423,
    1424,  1424,  1425,  1426,  1426,  1427,  1427,  1428,  1428,  1429,
    1429,  1430,  1430,  1431,  1431,  1431,  1432,  1432,  1433,  1433,
    1433,  1434,  1434,  1435,  1435,  1436,  1436,  1436,  1436,  1436,
    1436,  1436,  1436,  1437,  1437,  1438,  1438,  1439,  1439,  1440,
    1440,  1440,  1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,
    1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,
    1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,
    1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,
    1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,
    1441,  1442,  1442,  1442,  1442,  1442,  1442,  1442,  1442,  1442,
    1442,  1442,  1442,  1442,  1442,  1442,  1442,  1442,  1442,  1442,
    1442,  1442,  1443,  1443,  1444,  1444,  1445,  1445,  1446,  1446,
    1447,  1447,  1447,  1448,  1448,  1449,  1449,  1450,  1450,  1451,
    1451,  1452,  1452,  1453,  1453,  1454,  1454,  1455,  1455,  1456,
    1456,  1457,  1457,  1458,  1458,  1459,  1459,  1460,  1460,  1461,
    1461,  1462,  1462,  1463,  1463,  1463,  1464,  1464,  1465,  1465,
    1466,  1466,  1467,  1467,  1468,  1468,  1469,  1469,  1469,  1470,
    1470,  1471,  1471,  1471,  1472,  1472,  1473,  1473,  1473,  1474,
    1474,  1474,  1475,  1475,  1476,  1476,  1477,  1477,  1478,  1478,
    1479,  1479,  1479,  1480,  1480,  1481,  1481,  1482,  1482,  1482,
    1482,  1483,  1483,  1484,  1484,  1485,  1485,  1486,  1486,  1487,
    1487,  1487,  1488,  1488,  1489,  1489,  1490,  1490,  1491,  1491,
    1491,  1492,  1492,  1493,  1493,  1494,  1494,  1495,  1495,  1496,
    1496,  1497,  1497,  1498,  1498,  1499,  1499,  1500,  1500,  1501,
    1501,  1501,  1502,  1502,  1503,  1503,  1504,  1504,  1505,  1505,
    1506,  1506,  1507,  1507,  1508,  1508,  1509,  1509,  1510,  1510,
    1511,  1511,  1512,  1512,  1513,  1513,  1514,  1514,  1515,  1515,
    1516,  1516,  1517,  1517,  1518,  1518,  1519,  1519,  1520,  1520,
    1520,  1521,  1521,  1522,  1522,  1523,  1523,  1524,  1524,  1525,
    1525,  1526,  1526,  1527,  1527,  1528,  1528
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     0,     2,     1,     2,
       1,     1,     0,     2,     5,     5,     0,     1,     1,     2,
       3,     3,     3,     0,     3,     1,     1,     0,     0,     8,
       0,     6,     1,     1,     1,     1,     0,     2,     0,     3,
       1,     1,     1,     1,     2,     2,     1,     1,     0,     3,
       4,     0,     5,     0,     3,     1,     1,     1,     0,     4,
       1,     1,     1,     1,     3,     0,     3,     5,     0,     3,
       0,     1,     1,     2,     2,     0,     4,     0,     3,     0,
       3,     0,     4,     0,     2,     3,     2,     1,     2,     1,
       1,     1,     1,     5,     3,     3,     4,     1,     1,     1,
       1,     1,     2,     0,     0,     4,     0,     2,     3,     1,
       2,     3,     3,     3,     3,     1,     2,     0,     2,     0,
       1,     2,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     2,
       3,     3,     1,     0,     1,     1,     3,     4,     0,     5,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     2,     3,     1,     2,     3,     1,
       2,     1,     2,     4,     1,     2,     1,     3,     4,     5,
       0,     3,     3,     5,     3,     4,     3,     3,     5,     0,
       3,     0,     2,     0,     2,     0,     2,     0,     6,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     5,     5,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     1,     1,     1,
       1,     0,     1,     1,     4,     1,     1,     1,     7,     0,
       4,     3,     3,     1,     4,     0,     1,     1,     0,     5,
       2,     2,     1,     0,     4,     5,     2,     3,     1,     1,
       3,     1,     2,     4,     4,     4,     1,     3,     4,     4,
       3,     1,     1,     3,     2,     2,     2,     0,     2,     3,
       1,     2,     1,     1,     5,     0,     1,     1,     1,     0,
       6,     1,     2,     2,     0,     2,     0,    10,     0,     3,
       0,     3,     0,     2,     2,     0,     5,     3,     1,     1,
       0,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     0,     1,     1,     4,     6,     9,
       0,     3,     0,     2,     0,     2,     3,     5,     5,     1,
       1,     1,     1,     3,     5,     0,     2,     1,     1,     1,
       4,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     0,     2,     2,     2,     2,     1,     2,     0,
       0,     5,     0,     2,     2,     0,     5,     0,     2,     4,
       3,     4,     0,     1,     1,     1,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,    11,     0,
       1,     1,     2,     4,     4,     4,     6,     4,     3,     4,
       0,     1,     1,     1,     2,     4,     4,     4,     4,     4,
       4,     6,     0,     0,     5,     0,     0,     2,     2,     3,
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
       9,     8,     0,     2,     0,     2,     0,     2,     0,     3,
       0,     3,     0,     1,     1,     0,     5,     1,     1,     0,
       3,     1,     2,     1,     2,     2,     3,     1,     0,     5,
       1,     2,     1,     3,     0,     4,     2,     2,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     0,     2,     0,
       6,     0,     2,     2,     2,     3,     1,     1,     2,     2,
       1,     2,     4,     1,     4,     2,     0,     2,     1,     1,
       1,     1,     1,     3,     4,     4,     4,     3,     0,     2,
       0,     5,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     2,     1,     2,     1,     1,     0,     2,
       2,     0,     2,     4,     4,     0,     3,     1,     1,     3,
       6,     2,     3,     2,     2,     3,     2,     1,     2,     2,
       1,     1,     1,     2,     2,     1,     4,     2,     3,     0,
       0,     5,     0,     1,     2,     3,     1,     0,     4,     3,
       0,     2,     2,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     5,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     3,     2,     0,     0,     0,    10,     0,
       4,     0,     0,     3,     0,     3,     1,     2,     4,     0,
       2,     2,     0,     3,     3,     4,     2,     1,     3,     0,
       1,     0,     2,     2,     0,     0,     7,     0,     2,     1,
       1,     2,     1,     1,     0,     6,     0,     2,     2,     1,
       0,     1,     0,     0,     3,     0,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     0,     4,     0,     4,     3,     3,
       4,     3,     4,     3,     3,     4,     4,     3,     4,     3,
       4,     5,     3,     4,     3,     3,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     2,     3,     1,     2,
       2,     2,     2,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     4,     3,     1,     2,     1,     1,
       3,     3,     3,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     0,     4,     4,     5,     6,
       8,     0,     2,     0,     1,     0,     3,     3,     4,     0,
       2,     0,     3,     1,     2,     4,     0,     2,     0,     4,
       0,     6,     0,     1,     1,     1,     1,     1,     2,     0,
       2,     1,     1,     0,     0,     3,     1,     2,     2,     3,
       0,     2,     2,     2,     0,     3,     2,     2,     4,     1,
       1,     1,     1,     0,     2,     2,     0,     1,     2,     2,
       0,     1,     2,     0,     1,     0,     3,     1,     2,     1,
       1,     0,     3,     2,     3,     0,     1,     3,     3,     2,
       0,     4,     4,     0,     1,     1,     1,     0,     4,     4,
       2,     1,     2,     0,     1,     0,     3,     3,     0,     3,
       0,     2,     1,     2,     1,     0,     4,     3,     3,     3,
       3,     2,     2,     1,     1,     2,     0,     3,     1,     1,
       1,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     2,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     3,     1,     3,     3,     3,     3,
       0,     1,     0,     4,     4,     6,     6,     8,     8,     0,
       1,     0,     3,     0,     3,     3,     0,     4,     2,     1,
       3,     1,     1,     1,     2,     1,     1,     2,     2,     3,
       2,     3,     1,     3,     2,     1,     1,     1,     0,     2,
       0,     1,     0,     3,     0,     2,     1,     2,     1,     1,
       1,     0,     2,     0,     3,     1,     0,     3,     1,     0,
       3,     3,     0,     3,     2,     0,     6,     3,     2,     1,
       0,     1,     0,     3,     5,     0,     2,     0,     3,     3,
       0,     2,     1,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     0,     3,     1,     2,     0,     3,
       2,     1,     1,     1,     2,     1,     1,     1,     0,     3,
       2,     5,     1,     2,     2,     2,     1,     1,     1,     2,
       1,     2,     4,     2,     0,     1,     1,     1,     1,     4,
       0,     1,     1,     2,     2,     3,     3,     0,     3,     0,
       3,     3,     4,     0,     4,     4,     6,     0,     1,     0,
       3,     1,     2,     5,     1,     1,     1,     1,     0,     3,
       0,     3,     2,     1,     0,     3,     2,     0,     4,     2,
       0,     1,     1,     1,     1,     3,     0,     2,     1,     3,
       3,     0,     3,     1,     1,     1,     3,     7,     0,     3,
       0,     4,     7,     0,     2,     0,     1,     2,     1,     2,
       3,     3,     1,     0,     1,     1,     4,     4,     2,     0,
       1,     1,     3,     2,     0,     3,     1,     1,     0,     1,
       1,     0,     4,     5,     1,     1,     0,     2,     2,     0,
       1,     2,     0,     1,     2,     0,     1,     0,     3,     2,
       1,     0,     4,     4,     0,     1,     0,     4,     5,     0,
       1,     2,     3,     0,     1,     1,     0,     4,     4,     6,
       0,     2,     0,     2,     1,     2,     3,     0,     1,     0,
       3,     2,     5,     0,     1,     2,     2,     2,     2,     2,
       0,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     3,     4,
       1,     2,     3,     1,     2,     3,     3,     4,     0,     3,
       0,     7,     0,     5,     0,     2,     0,     2,     0,     3,
       0,     2,     4,     0,     2,     4,     0,     4,     4,     0,
       3,     0,     4,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     2,     1,     0,     1,     0,     4,     2,     0,
       2,     1,     4,     4,     0,     1,     1,     1,     1,     1,
       0,     4,     5,     1,     2,     2,     0,     3,     1,     1,
       0,     4,     0,     1,     0,     4,     4,     6,     6,     8,
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
       0,     2,     1,     1,     0,     2,     1,     2,     1,     2,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       1,     1,     3,     3,     1,     3,     3,     1,     3,     1,
       2,     2,     1,     3,     1,     1,     3,     1,     3,     1,
       3,     1,     2,     2,     1,     1,     2,     1,     1,     2,
       1,     1,     1,     1,     2,     1,     0,     2,     1,     1,
       1,     3,     1,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     4,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     3,     2,     2,     1,
       1,     3,     2,     2,     1,     1,     3,     3,     4,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     5,     5,     5,     4,     4,     5,     5,     5,
       5,     5,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     5,     0,     3,     2,     1,
       3,     3,     0,     2,     1,     3,     1,     3,     1,     3,
       1,     3,     0,     0,     1,     0,     1,     0,     1,     0,
       2,     0,     2,     0,     1,     1,     0,     1,     0,     1,
       2,     0,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     0,     5,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     2,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     1,     0,
       2,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     0,     1,     0,     1,     0,     2,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     1,     0,     1,     0,     3,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     2,
       1,     1,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    12,     1,     3,     5,    23,     4,    65,    26,
      25,    23,     8,    10,    11,     0,     0,     0,    13,   318,
      68,     9,    30,    27,    48,    48,     0,     0,     0,   779,
     320,     0,   199,    70,     0,     0,     0,    65,    65,    24,
      66,     0,     0,    22,   825,     0,   322,     0,     0,    64,
     201,     0,     0,   117,    71,    72,     0,     0,    51,    16,
       0,   319,   992,     0,     0,     0,   316,    69,     0,     0,
     205,    81,    75,     0,   119,    73,    74,    33,    32,    36,
      36,     0,    49,    53,     0,    14,    17,    18,     0,    15,
     996,   993,   994,   995,   781,     0,   884,   965,   975,   981,
     988,  1035,  1041,  1055,  1050,  1056,  1057,  1065,  1075,  1122,
    1131,  1133,  1136,  1162,  1173,  1176,  1179,  1171,  1185,  1192,
    1214,  1218,  1257,  1259,  1263,     0,  1269,  1284,  1310,  1340,
    1341,  1357,  1360,  1361,  1366,  1375,  1376,  1402,  1438,  1456,
       0,  1490,  1504,  1513,  1515,   807,  1519,  1522,  1525,  1576,
    1308,  1389,   827,   828,   829,   830,   831,   832,   833,   834,
     836,   835,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,   858,   859,   860,   861,   862,   863,   864,
     865,   866,   867,   868,   869,   870,   871,   872,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   826,   321,   328,
     329,   442,   323,   445,     0,   200,   202,   203,    83,    77,
     118,     0,     0,     0,  2124,  2074,  2074,  2074,     0,     0,
    2074,  2045,   137,   103,   120,     0,   123,   125,   126,   127,
     173,   129,   128,   130,   131,   132,   133,   134,   135,   136,
       0,     0,    28,  2096,  2074,    58,    35,    34,     0,    19,
       0,   784,   782,   801,  1952,  1953,  1954,  1955,  1956,  1957,
    1958,  1959,  1960,  1961,  1962,  1963,  1964,  1965,  2001,  2002,
    2003,  2004,  2005,  2006,  2007,  2008,  2009,  2010,  2011,  2012,
    2013,  2014,  2015,  2016,  2017,  2018,  2019,  2020,  2021,  1966,
    1967,  1968,  1969,  1970,  1971,  1972,  1973,  1974,  1975,  1976,
    1977,  1978,  1979,  1980,  1981,  1982,  1983,  1984,  1985,  1986,
    1987,  1988,  1989,  1990,  1991,  1992,  1993,  1994,  1995,  1996,
    1949,  1997,  1998,  1999,  2000,   883,  1950,  1951,     0,     0,
       0,     0,   992,     0,     0,     0,     0,  1070,     0,     0,
    1070,   992,  1664,  1164,     0,     0,  2147,  1020,  1019,     0,
    1184,  1664,     0,     0,     0,     0,     0,     0,   882,     0,
    1296,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1486,  1489,  1476,  1487,  1488,  1478,     0,     0,  1514,  1512,
       0,   825,     0,     0,     0,     0,     0,     0,     0,   389,
     324,  1912,     0,  1740,   325,     0,  1928,   297,   206,  2044,
       0,     0,     0,  2074,  2190,   101,    82,  2043,    87,    89,
      90,    91,    92,  2043,     0,  2074,    76,    79,  1763,  1762,
     148,  2074,  2074,  2125,  2074,  2075,     0,     0,     0,  2074,
    2074,     0,  2046,     0,  2074,     0,    67,     0,   121,   124,
       0,   172,    37,    31,  2074,  2097,  2074,     0,     0,     0,
      20,    21,   789,   789,     0,     0,   908,  1845,   963,   886,
    2094,   907,  1835,  1839,  2103,     0,  1889,     0,  1884,  1890,
       0,     0,  1896,  1868,     0,     0,  1725,  1727,  1864,     0,
       0,     0,  1887,  1869,  1786,     0,  1729,  1867,  1888,  1865,
    1891,  1892,     0,  1870,     0,  1886,  1896,  1885,  1845,  1866,
     973,  1780,   971,  1772,  1775,  1774,  1778,  1860,  1862,  1779,
    1893,     0,     0,     0,     0,     0,     0,   976,     0,  1714,
    1717,  1719,  1722,  1795,  1724,  1917,  1793,  1794,  1752,   982,
     983,     0,  1748,  1750,  1749,  1033,   999,  1811,  1040,  1036,
    1037,  1039,  1810,  1042,  1045,  2103,  1053,     0,  1731,  1931,
    1767,  1840,  1844,  1768,     0,  1063,  2117,  2141,     0,  1072,
    1074,  1066,     0,  1864,  1089,  1120,  1605,  1770,  1084,  1086,
    1083,     0,  1774,  1129,     0,  1132,     0,  1134,  1143,  1142,
    1160,     0,  1139,  1141,  1663,  2074,  1166,  1170,  1168,  1171,
    1169,  1163,  1174,  1175,  1765,  1177,  1178,  2148,  1180,  1746,
    1172,  2143,  1662,  1193,  1195,  1742,  1215,  1216,  1219,     0,
    1221,  1222,  1223,  1258,  1442,  1829,  1830,     0,  1260,     0,
    1267,     0,  1277,  1274,  1276,  1275,  1270,  1271,  1278,  2103,
    1298,     0,     0,  1752,  2157,  1816,  1285,  1296,  1287,     0,
    1294,     0,  1815,  1749,   463,  1817,     0,  1338,  1923,  1741,
    1355,     0,  1358,  1579,  1734,  1364,  2117,     0,  1373,  1735,
    1579,     0,  1387,  1380,  1737,     0,     0,  1745,  1403,  1404,
    1405,  1406,  1407,  1408,  1430,  1409,  1433,  1410,     0,  1743,
       0,     0,  1828,  1844,  1439,  1474,  1461,  1479,  1502,     0,
    1493,  1496,     0,     0,  1510,     0,  1516,  1517,   813,   819,
     808,   809,   810,   812,     0,  1520,     0,  1832,  1523,  2119,
    1542,  1528,  1590,  1579,  1309,  1390,  1393,     0,     0,   608,
       0,     0,     0,   447,     0,     0,   451,   452,   450,     0,
     327,   330,   204,     0,  1929,     0,   309,   305,   198,     0,
     300,   302,   303,  2189,  2074,     0,     0,    86,    88,    84,
     102,  2043,  2074,     0,     0,     0,  2074,     0,     0,     0,
     194,  1755,   192,   197,     0,     0,   196,  1764,   175,   176,
    2076,   179,  1850,  1412,  1411,   138,   142,   145,  2107,  2074,
       0,   104,   122,   174,     0,     0,     0,    55,    57,    56,
      54,  2074,    50,  2042,   789,   786,   792,     0,   789,   802,
     803,   776,  2168,  2169,     0,   964,   885,   909,  2095,     0,
       0,     0,  1837,  1838,  2104,     0,  1861,     0,     0,     0,
       0,  1882,  1902,  1781,  1782,  1783,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1883,   974,   966,     0,     0,
    1773,     0,     0,  1871,     0,     0,  1796,  1797,  1798,  1721,
    1792,     0,  1720,  1919,     0,     0,     0,     0,     0,  1918,
     979,   984,   986,     0,  1034,   989,  1813,   990,     0,   997,
    1812,  1814,  1038,  1045,  2180,  2181,  1043,     0,  1046,     0,
    1054,  1051,  2165,  2164,  1732,     0,  1933,  1733,  1842,  1843,
    1060,  1061,  1064,  1058,  2118,  1323,  2142,  1071,  1073,  1068,
    1121,  1076,   822,   822,  1081,  1611,  1608,  1085,  1082,  1771,
    2156,  1605,  1605,  1605,  1605,  1130,  1123,     0,     0,  1003,
    1161,  1137,  1664,  1664,  1138,  1145,  1146,   822,  1680,  1678,
    2075,  1684,  1681,  1673,  1677,  1675,  1676,  1672,  1674,  1665,
    1666,  1679,  1668,     0,  1167,  1165,  1766,  1182,  2144,   822,
    1197,     0,  1217,     0,  1244,  1228,  1220,  1225,  1226,  1227,
    1446,     0,  1831,     0,     0,  1268,  1264,     0,  1272,  2156,
    1323,     0,     0,   472,   468,   471,   470,   469,   560,   562,
     484,   480,   482,   483,   485,   481,   486,   563,   561,   487,
     488,   465,   476,   477,   478,   473,   474,   475,   467,   464,
    1286,  1292,  1293,   822,  1289,  1664,     0,     0,  1297,     0,
    1339,  1311,  1924,  1925,  2117,  1356,  1342,  1344,  1345,     0,
       0,  1359,  1365,  1362,  1313,  1736,  1374,  1367,  1323,  1382,
    1388,  1377,     0,  1382,     0,  1803,  1805,  1806,  1807,     0,
    1431,  1434,     0,     0,  1744,  1414,     0,  1413,     0,     0,
    1842,  1475,  1457,  1463,  2074,  1464,  1459,     0,  1477,  1481,
       0,  1503,  1491,     0,  1494,  2041,  1495,     0,     0,  1511,
    1505,     0,  1518,   820,   818,   811,     0,  2120,  2121,  1524,
    1543,  1526,  2041,     0,  1591,  1577,  1581,     0,  2156,  1391,
     443,     0,     0,   611,   460,   492,   495,     0,     0,   448,
       0,   458,   453,   459,   456,  2074,  1930,   207,  2053,   306,
     307,   308,  2028,     0,   298,   301,     0,  2188,    95,    85,
       0,  1756,    94,    78,     0,     0,  1857,  1853,  1858,  1856,
    1854,  1859,  1855,   183,   184,   186,   195,   190,   188,     0,
     177,  2078,  2077,   180,     0,  2107,  2110,  2109,     0,     0,
     139,   143,   106,    29,    40,    43,    47,    46,  2115,    41,
      42,  1935,  1936,  1937,  1938,  1939,  1940,  1941,  1942,    52,
       0,   787,  2074,     0,   799,   797,   790,   791,   804,  1846,
    2036,  2038,   914,  2074,  1592,   910,   911,   913,   915,     0,
       0,     0,   906,   902,  1592,  2163,  2162,   899,   891,   893,
     894,     0,  1592,     0,     0,     0,   918,   897,     0,   905,
     888,   904,   889,  1709,  1707,     0,  1836,  1800,  1799,     0,
    1785,     0,  1709,  1707,     0,  1709,     0,  1898,  1709,     0,
       0,  1726,  1728,  1709,     0,     0,     0,  1709,  1789,  1790,
    1791,     0,  1730,     0,  1709,     0,  2103,  1614,   972,  1844,
    1768,     0,  1863,     0,     0,  1709,  1723,  1921,   979,  1713,
    1712,  1716,  1715,  1718,     0,   977,     0,     0,  1751,  1003,
    1001,  1002,   998,  1000,  1044,  1049,     0,  2058,     0,  1769,
    1614,  2074,  1932,  1841,  1062,  2057,  1650,  1324,  1325,  1067,
       0,  1610,   823,  1613,  1606,  1612,  1607,  1609,     0,  1095,
    1094,  1087,  1090,  1092,     0,  1079,  1080,  1077,  1078,     0,
    1614,     0,  1004,  1135,  1140,  1155,  1157,  1156,  1150,  1152,
    1158,  1664,  1147,  1144,  1664,  1148,     0,  1683,  1667,  1694,
    1695,  1696,  1685,  2147,  1702,  1705,  1704,  1706,  1698,  1691,
    1693,  1692,  1697,  1699,  1701,  1703,  1669,  1686,  1687,  1688,
    1689,  1690,  2105,  1181,  1747,   822,  1189,  1190,  2147,  1205,
    1206,  1208,  1210,  1211,  1207,  1209,  1200,  2147,  1196,     0,
    1245,     0,  1247,  1246,  1248,  1230,  1240,     0,     0,  1224,
    2187,  2106,     0,  1448,     0,  2063,     0,  1261,  1614,     0,
       0,     0,   466,   479,  1290,  1303,  1299,  1304,  1300,  1305,
       0,  1295,  1586,  1585,  1302,  1313,     0,  1580,  1825,  1826,
    1827,     0,     0,  1369,   822,     0,  1381,     0,     0,     0,
       0,  1432,     0,  1436,  1435,  1428,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1416,  1417,  1926,  1650,     0,
    1480,  2135,  2135,  1500,     0,     0,     0,  1614,     0,     0,
     821,     0,  1913,     0,  1500,  1323,  2022,  1395,  1581,     0,
     445,   390,     0,     0,   614,     0,   518,     0,   449,   455,
     499,   461,  2047,  2074,     0,     0,  2074,  2047,  2096,  2074,
    2026,   326,     0,   331,   334,   335,   336,   337,   338,   339,
     340,   341,   342,     0,     0,   209,  2054,  2139,  2029,  2057,
     299,     0,    98,   100,    99,    96,    97,    80,   154,   153,
     168,   164,   169,   150,   167,   165,   151,   152,   166,   149,
     155,   156,   158,   185,     0,   189,     0,   193,  1851,   178,
     181,     0,  2108,   146,   140,   141,   144,     0,     0,   105,
       0,   109,    45,  2116,    39,    44,    60,    61,    62,    63,
      59,     0,  2074,   796,   800,     0,     0,   777,  1820,   922,
    1818,  1819,     0,  1598,  1599,  1603,  1604,   887,  1600,   822,
    1595,   822,   912,  2161,  2160,  2098,  2098,   920,   921,  2098,
       0,   927,  2074,   929,   930,   931,   962,  2074,   932,   933,
     934,   935,   936,     0,   956,   957,   938,   940,     0,   941,
     960,   958,   959,     0,   943,  2074,   928,  2024,   946,   961,
     949,   916,   937,   942,   948,   903,   890,   892,  1592,   900,
     895,   896,   919,   898,  1710,  1711,  1847,     0,     0,     0,
    1802,  1784,  1801,  1931,     0,  1893,     0,  1893,  1897,  1875,
    1903,     0,  1893,  1893,  1893,     0,  1876,  1931,     0,  1893,
       0,   822,   822,   967,  1620,  1617,  1842,  1843,  1614,     0,
    1893,  1893,     0,  1920,   978,   980,   987,   985,  1014,  1048,
    1047,  1052,     0,  1328,     0,   822,   822,  1059,  1651,  1657,
    1654,     0,   825,  1101,  1102,  1099,  1098,  1100,  1097,  1091,
    2074,  1103,     0,  1106,  1107,  2051,  2074,  1110,  1111,  1093,
    1112,     0,  2074,  1115,  1113,  1096,     0,  1124,     0,  1010,
    1664,  1664,  1154,   822,  1151,  1671,  1670,  1700,     0,  1188,
     822,  1191,  1186,     0,     0,  1212,     0,     0,     0,  1241,
    1243,     0,  1236,  1250,  1237,  1238,  1229,  1232,  1250,     0,
    1805,  2186,     0,  2159,  1440,  2074,   587,   588,  2079,     0,
    2064,  1447,  1262,  1265,     0,  2111,  2111,     0,  1279,  1280,
    1738,  1291,  1288,     0,     0,  1315,  1346,  1314,   822,   822,
    1363,  1639,     0,  1650,  1370,     0,  1383,  1664,  1664,  1378,
    1384,  1415,  1437,  1427,  1429,  1419,  1420,  1421,  1425,  1422,
    1426,  1423,  1424,  1418,  1927,  1473,     0,  1470,  1471,  1465,
       0,  1458,  2185,  2184,     0,  2136,  1484,  1484,  1623,     0,
    1498,  1497,  1499,  1931,  1931,  1506,     0,   814,     0,  1914,
    1529,  1530,     0,  1533,  1536,  1540,  1534,  1369,  2023,     0,
    1400,  1399,  1398,  1397,  1396,   444,   392,   609,     0,     0,
     709,  2076,   493,     0,   519,     0,   490,  2074,  2033,     0,
    2048,     0,     0,  2074,  2026,     0,     0,     0,     0,     0,
    2074,   385,  2027,   386,     0,     0,   387,   332,   333,  2117,
    2140,  2047,     0,  2176,  2177,    93,   157,   160,     0,   187,
       0,   182,   147,     0,   115,    36,     0,    36,     0,   107,
     110,   793,   794,   798,     0,   788,   805,   807,   926,  1593,
    1601,  1597,  1594,  1596,  1602,  2099,     0,     0,     0,  1852,
     917,  1821,  1822,     0,     0,   955,   947,  2074,  2074,  1660,
    1660,     0,  2025,     0,   901,  1708,  1848,     0,  1614,  1909,
    1880,  1911,  1881,  1907,  1877,  1878,  1879,  1905,  1945,  1900,
    1901,  1874,  1769,  1622,  1619,  1615,  1621,  1616,  1618,  1841,
     968,  1894,     0,  1872,  1873,  1922,  1808,  1809,  1023,  2072,
    1934,     0,  1656,  1659,  1652,  1658,  1653,  1655,  1069,     0,
       0,  1104,  1105,  2103,   759,   761,  1108,  1109,     0,     0,
    1660,  1660,     0,  1614,  1731,  1614,  1731,  1005,  1006,   792,
       0,  1153,  1159,  1149,  1183,  1187,  1198,  1201,  1202,  2049,
    1194,  2147,  1199,  1250,  1804,  1250,     0,  2070,  2070,  1235,
    1251,  1252,  1233,  1239,  1234,  2158,  1450,     0,  2080,  1444,
    2065,  1614,  2112,   294,   295,   296,  1283,  1273,  1739,     0,
    1306,     0,  2105,     0,  1334,  1316,  1329,  1322,  1318,  1331,
       0,   822,   822,  1343,  1352,  1349,  1638,  1641,  1632,  1640,
    1633,  1368,  1371,     0,   822,   822,  1385,  1472,  1462,  1466,
    1467,  1468,  1469,  1460,  1482,  1485,  1483,   822,   822,  1492,
    1629,  1626,  2074,  1614,  1945,  1614,   816,  1521,  1913,  1532,
    2061,  1538,  2061,  1623,  1587,  1584,  1583,  2086,  2084,  1392,
     391,   445,   612,     0,     0,   317,     0,   496,   520,     0,
     489,     0,   597,   524,  2126,  2126,  2126,  2126,  2126,  2152,
     525,   528,   529,   530,   531,   532,   533,   556,   554,   555,
     557,   558,   534,  2122,   559,   576,   535,   521,   536,   537,
       0,  2129,   539,   540,   538,  2081,   542,   543,   541,  2074,
     500,   501,   502,   503,   504,   505,   522,   526,   527,   506,
     507,   508,   509,   510,   511,   512,   513,     0,     0,  2034,
       0,   494,     0,   462,   354,   263,   382,  2178,  2179,  1759,
     363,  1757,  2171,  2170,   356,  1761,  1760,  2092,  2045,  2061,
       0,  2074,   360,   359,  2074,   388,  2096,  2117,  2149,   279,
       0,  2074,  2043,  2079,   281,     0,  2156,   267,   208,   266,
     210,   211,   212,   213,   214,   215,     0,   216,     0,   217,
     278,   218,   219,   220,   221,   222,   223,  2039,  2074,     0,
     304,     0,   159,   191,   111,   112,   116,   113,   114,   108,
     795,   807,   825,   923,   925,   924,   951,   950,     0,     0,
     953,     0,  1823,  1824,   952,   945,   954,  1849,   969,  2066,
    1947,  1895,   822,   822,   822,   991,  1030,  1026,  2103,  2073,
    1017,  1022,  1021,  1016,     0,  1327,  1326,  1117,  2052,   760,
     762,  1116,  1119,  1118,  1114,  1126,     0,  1125,     0,  1007,
    1008,     0,  1012,  1011,  1013,  1203,  2050,     0,     0,  1231,
    1242,  1250,  2071,     0,     0,  1253,  1254,     0,     0,  1453,
    1449,  1443,  1266,  1282,     0,     0,     0,  1319,  2074,  1650,
    1317,  1330,     0,     0,     0,  1333,  1354,  1351,  1347,  1353,
    1348,  1350,  1372,  1379,  1386,  1631,  1628,  1624,  1630,  1625,
    1627,     0,  1508,  1947,  1507,  1544,   815,     0,  1531,  2062,
       0,  2061,  1535,     0,  1527,   822,   822,  1578,  1589,  1647,
    1644,  1588,  2087,  2088,  1582,  2085,  1401,     0,   393,   445,
     610,   445,   615,     0,   602,   598,   600,   491,   606,   607,
    2127,   553,   552,   545,   544,   551,   550,   549,   548,   547,
     546,  2153,     0,  2123,   594,   580,     0,   572,   514,  2130,
    2082,  2083,   595,     0,   516,  1943,  1943,   498,   497,     0,
     344,     0,   381,  1758,  2093,   365,     0,   347,  2131,   374,
     376,   380,   379,   375,   377,   373,   378,     0,     0,  2074,
    2079,  2150,  2151,   246,   282,  2117,  2074,  2074,  2074,  2074,
     291,  2030,   292,     0,  2074,  2096,  2040,     0,     0,   310,
     311,   314,   161,   162,   825,   939,   944,  2182,  2183,  1661,
    2067,     0,  2066,  1614,  1028,  1032,  1029,  1024,  1031,  1025,
    1027,     0,  1015,  1614,  1614,  1009,  1777,  1776,  1834,     0,
    1213,  1249,  1256,  1255,  2074,  1451,     0,     0,  1441,  1445,
    1281,     0,  1321,     0,  1312,  1337,  1639,  1636,  1336,  1320,
    1332,  1501,  1614,  1552,   817,  1537,     0,  1541,  1646,  1649,
    1642,  1648,  1643,  1645,   395,   394,   613,   617,   710,     0,
     604,   601,   596,  2061,   574,  2145,   577,  2145,   523,     0,
     515,  2043,   564,   565,   355,   346,   345,   343,   383,  1753,
     364,  2045,  2132,   352,   361,   358,   362,   357,     0,  2074,
     248,   247,   244,   281,   277,     0,     0,     0,     0,  2031,
    2032,   290,   293,     0,  2074,   280,   262,   312,     0,   313,
       0,     0,     0,     0,   970,  1018,  1128,  1127,  1204,     0,
    1454,  2074,  1664,  1335,  1634,  1635,  1637,  1509,  2036,  1575,
    1574,  1553,  1545,  1546,  2024,  1547,  1548,  1549,  1550,  1573,
       0,     0,  1539,   397,   616,   712,   603,     0,   599,     0,
       0,     0,   572,  2146,     0,   573,   578,   517,  1944,  1754,
       0,     0,   366,   367,   368,   369,     0,   348,  2060,   354,
       0,   256,   257,   255,   254,     0,   237,   238,   239,   233,
     234,   251,   240,   241,   251,     0,   242,   243,   232,   230,
     231,   236,   235,   251,   251,   251,     0,   283,   284,   285,
     286,   289,   264,     0,   315,   163,     0,     0,  1948,  1452,
       0,  1307,     0,  2133,     0,  2105,  2057,     0,   618,     0,
     716,   711,   713,     0,     0,  2074,   581,   575,     0,   582,
    2105,  2105,   585,   372,   371,  2035,  2045,   353,  1915,   252,
     227,   253,   228,  2053,   229,   225,   226,   249,   224,   250,
    2074,     0,   273,   272,   273,   269,   806,  1946,  1455,     0,
    2134,     0,  1571,  1570,  1569,     0,   396,   398,  2070,   619,
       0,   717,     0,   714,  2155,     0,   583,   585,     0,     0,
     589,   584,     0,   350,   259,  1916,   245,     0,   287,     0,
     271,   270,  1572,  2167,  2166,  2113,  1565,  1559,  1560,  1562,
     419,     0,     0,   719,   720,   715,   605,   589,   585,   579,
    2041,   569,  2079,   370,  2105,   349,     0,   258,   288,     0,
     276,  2114,  2105,  1568,  1563,  1566,     0,  1561,  2074,     0,
       0,     0,     0,   400,   420,   421,   402,   430,     0,  2074,
    2128,   571,   589,     0,  2074,     0,     0,     0,     0,  1567,
    1564,  2074,     0,     0,  2074,  2074,  2074,  2074,   422,     0,
    2095,     0,  2138,     0,   399,   403,   405,   404,     0,     0,
       0,     0,     0,     0,     0,   401,   431,   433,   432,     0,
       0,   623,  2074,  2074,  2026,  2089,   648,   622,   626,   627,
       0,  2055,   735,  2074,   724,  2152,   725,  2051,  2074,     0,
     740,   733,   728,   734,  2098,   729,     0,     0,   732,   742,
     739,   737,   736,     0,   743,   731,     0,   754,   748,   752,
     751,   749,   753,   721,   755,   750,   738,   730,     0,  2098,
     570,   593,   590,   591,     0,   351,     0,   170,   171,   261,
       0,  2174,  2175,   274,  1558,  1555,  1557,  1556,  1551,  1554,
       0,     0,   428,     0,     0,     0,     0,  2074,  2074,  2074,
    2074,  2074,   406,     0,  2074,  2074,  2074,  2074,  2074,  2074,
    2074,  2074,  2074,  2074,  2074,   434,     0,  2074,     0,  2205,
    2206,  2074,  2026,     0,   620,   624,  2056,   628,     0,     0,
     722,   723,   726,   727,     0,   757,  2074,  2145,  2074,   758,
     756,   774,  2074,   592,   586,   260,   275,   423,  2145,   427,
     425,   429,   424,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   625,  2090,  2091,   636,   633,   457,   649,   629,
     630,   747,   746,   767,   773,     0,   770,   589,   415,   411,
     412,   416,   414,     0,   417,   407,   413,   408,   409,   410,
     439,   435,   436,   440,   438,     0,   437,   632,  2172,  2173,
     635,   650,   459,   631,   765,   763,   766,   764,   768,   769,
       0,   741,   771,   772,     0,   426,     0,     0,     0,  2074,
    2074,     0,   637,   638,   639,   640,   641,   642,     0,   652,
     744,   745,     0,   441,  2192,  2191,  2074,     0,     0,  2194,
       0,  2074,  2074,   634,  2128,     0,     0,   647,   643,  2193,
       0,     0,  2068,  2100,  2026,     0,     0,     0,  2074,  2103,
     651,  2074,  2074,     0,   657,   659,   668,   660,   662,   665,
     653,   654,   655,   664,   666,   669,   656,     0,   661,     0,
     663,   667,   658,  2100,  2026,     0,   644,   646,   645,  2069,
     707,  2101,  2102,  2076,   693,  2074,   572,  1664,     0,     0,
       0,     0,     0,   701,     0,   691,   697,   700,     0,   694,
     702,   705,  2076,   696,     0,   692,     0,  2145,   689,  1931,
     685,  1787,  2196,     0,     0,  2198,  2200,     0,  2204,  2202,
     670,   674,   678,   678,   672,   676,   671,   677,   708,     0,
     699,   698,   704,   703,   695,     0,   683,   578,   706,  2105,
     684,  1788,  2195,  2199,  2197,  2203,  2201,   681,   673,   681,
     675,     0,   418,   567,     0,     0,   680,   679,     0,     0,
     566,   688,   686,   687,   682,   690,   568
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,     6,    11,    12,     7,     8,
      13,    14,    85,    86,    87,    89,    18,    15,    16,    24,
      35,   454,    25,    34,    79,   258,   251,   794,  1168,  1169,
    1170,    37,    82,    83,   255,   800,   459,  1560,    19,    20,
      32,    33,    53,    54,   219,   426,   764,    55,   218,   416,
     417,   418,   419,   420,   421,   422,  1515,   423,   446,  1162,
    1549,  1550,  1551,  1896,    74,   233,   234,   235,   236,   237,
     444,   785,  1545,   786,   787,   238,   766,  1529,  1530,  1531,
    2231,  2452,  1532,  2899,   239,   451,   240,   778,   779,   780,
    1539,   241,  1143,  1144,   242,   243,  1535,   244,   245,   246,
     247,   248,   249,    49,    50,    70,   407,   217,   408,  1505,
    1879,  2210,  2211,  2653,  2654,  2655,  2656,  2552,  2708,  2700,
    2212,  2634,  2213,  2777,  2214,  2176,  2215,  2216,  2217,  2218,
    2715,  2750,  2219,  2220,  2221,  2222,  2223,  2659,  2224,  2225,
    2441,  2226,  1768,   748,   749,   750,   751,  1122,   752,  1118,
    2449,  2450,  2569,    29,   211,    30,    46,    66,   212,   213,
     741,   214,  1115,  1493,  1494,  2537,  1495,  2775,  2629,  2410,
    1496,  1497,  2194,  2545,  1498,  1499,  2540,  2622,  2623,  2624,
    2625,  1500,  2425,  2426,  1501,  2412,  1502,  1503,  1875,   729,
    1846,  2100,  2368,  2369,  2603,  2676,  2727,  2824,  2825,  2826,
    2827,  2793,  2794,  2795,  2835,  2836,  2837,  2838,   399,  1470,
     400,   401,   733,   734,  1480,   735,  1112,  1113,  1858,   645,
    1001,  1002,  1003,  1004,  1005,   736,  2110,   737,  1475,   738,
    1476,  2171,  1857,  2150,  2151,  2152,  2530,  1853,  1854,  2154,
    2155,  2156,  1006,  1007,  2159,  3096,  3200,  2160,  2527,  2612,
    2396,  2692,  2524,  2737,  2740,  2741,  1758,  2771,  2892,  2893,
    2161,  2162,  2163,  2164,  1852,  2520,  2375,  2376,  2608,  2166,
    1103,  2101,  1474,  2371,  1850,  2517,  2604,  2678,  2762,  2799,
    2847,  2848,  2947,  2999,  2849,  2995,  3027,  3052,  3053,  3054,
    3055,  3056,  3057,  2944,  2998,  3059,  3074,  3100,  3101,  3160,
    3188,  3196,  3102,  3103,  3180,  3202,  3104,  3105,  3106,  3107,
    3108,  3109,  3135,  3136,  3139,  3140,  3110,  3111,  3112,  2105,
    2605,  2681,  2682,  2683,  2764,  2800,  2883,  1986,  1987,  3038,
    3039,  3040,  3044,  2884,  2885,    43,  1188,  1907,    44,   263,
     463,   462,   804,   805,   806,  1184,  1185,  1565,   465,  1567,
    2241,   391,   710,   711,  2086,  2346,   712,   713,  1459,  1301,
    1302,  1692,   714,    64,   152,   153,   338,   468,   817,   469,
    1194,  1195,  1196,  1220,  1197,  1587,  1588,  1198,  1621,  1622,
    1623,  1624,   816,   154,   339,   510,   849,   847,   155,   340,
     527,  1275,   156,   341,   539,   540,  1277,   157,   342,   545,
    1279,    94,   877,   878,  1282,  1323,  1719,  1997,  1998,  1999,
    1968,   359,  2273,  2265,  2469,  2266,  2467,  2267,   875,   158,
     343,   549,   550,   159,   344,   553,   886,   160,   345,   556,
     891,   161,   162,   163,   346,   565,   900,   903,   164,   347,
     571,  1299,   572,   165,   348,   575,   576,   577,   578,   920,
     579,  1311,  1312,  1313,  1697,  1715,   911,   166,   349,   583,
     926,   167,   350,   168,   351,   587,   169,   352,   590,   591,
     592,   934,   935,   936,  1333,   937,  1328,  1329,  1722,   931,
     170,   353,   601,   360,   171,   354,   602,   172,   355,   605,
     173,   356,   608,  1363,   174,   175,   361,  1367,  1732,   176,
     362,   613,   960,  1376,  1735,  2007,  2008,  2009,  2010,   177,
     363,   616,   178,   364,   618,   619,   966,   967,  1388,   968,
     969,  1746,  1747,  1385,  1386,  1387,  1740,  2019,  2020,  2021,
     179,   365,   180,   366,   628,   181,   367,   630,   976,   182,
     369,   636,   637,   638,   980,  2037,   183,   370,   646,  1013,
    1772,  1014,   647,   648,   649,  1406,  1408,  1409,   184,   396,
     185,   371,   657,  1422,  2044,  2045,  2046,  1296,  1297,  1298,
    2320,  2048,  2319,  2494,  1021,   186,   187,   372,   660,  1029,
    2053,  2330,  2054,  2328,  2055,  1026,   188,   373,   662,   189,
     190,   374,   665,  1033,   191,   375,   668,  1783,  1784,  1037,
     192,   193,   376,   672,  1043,  1425,  1789,  1790,  1041,   194,
     397,   725,  1098,  1099,  1468,  2099,   195,   377,   678,   788,
    1058,   679,   680,  1445,  1446,   681,   682,   683,   684,   685,
     686,   687,   196,   378,   623,  2026,   970,  2311,  1393,  1754,
    2309,  2488,   197,   379,   695,  1448,  1066,  1806,  1807,  1808,
    1062,   198,   697,  1068,  2074,   385,   199,   386,   698,   699,
     700,  1076,  1821,  1818,  1072,   200,   387,   704,  1080,   201,
     389,   202,   390,   706,   203,   392,   715,   204,   393,   718,
     205,   394,   720,  1093,  1830,  1831,  1464,  1833,  2091,  2352,
    2093,  1091,  2347,  2503,  2592,  2593,  2594,  2908,  2595,  2757,
    2758,  2786,  2596,  2724,  2597,  2598,  2599,   206,   395,   722,
    1031,  1465,  1466,  2357,  1095,  1577,  1912,  1578,  1579,  1909,
    1580,  1581,   914,  1306,   915,  1304,   916,  1663,  1957,  1664,
    1955,  1665,  2079,  2339,  2080,  2337,  2081,  1780,  2495,  2585,
    1781,  2058,  2059,  2358,  2512,  2359,  2510,  2360,  1687,  1688,
    1976,  1689,  1974,  1690,  2250,   611,   612,   594,   595,   949,
     950,  1336,   951,  1356,  1357,  1358,  1359,  1360,  1361,  1223,
    1637,  1233,   529,   530,   531,   532,   511,   557,   894,   669,
     670,   673,  1769,  1770,   470,   617,   688,   689,   957,   650,
     542,   543,  2538,  2186,  1132,  2180,  2181,  2187,   430,   781,
     603,   559,   918,   512,   513,  2475,   514,  3150,  1247,   534,
    1229,  1641,  1748,  2013,  1045,  2014,   551,   879,   651,  1569,
    1920,  2251,  1417,  1570,   624,   692,   716,  1749,  2477,   515,
     472,   560,   561,   473,   822,   823,  1571,  1540,  3137,  1145,
     516,   517,   518,   519,   520,   521,   522,   853,   831,  1255,
    1239,  1240,  1251,  1244,  1234,  1236,   739,  1832,  2744,   870,
    1268,  1673,  1024,  1810,   745,   897,  1292,  1179,  2532,  2260,
    2463,   335,   336,   337,  1839,  1933,  1873,  1509,  2561,  2172,
    1199,  1200,  2447,   807,   424,   443,  1861,  2297,  1988,  1507,
    2948,  1288,  2630,  2350,  1761,  2461,  3120,  2303,  2274,   953,
    1154,  2029,  2402,  2366,  2364,  2943,  2415,  2829,   456,  1916,
    3123,   825,  1394,  1158,  2033,  2782,  1554,  2227,  1089,  2394,
     434,  2382,  2168,  2543,  2721,  1816,  2830,  1881,   907,   959,
    2614,   609,  2433,  2392,  2609,   656,  1755,  1589,  1222,   895,
    2755,   814,  2184,  3030,  2903,  1885,  1865,   888,  2459,  1814,
    1395,   425,  3066,  3072,  3163,  3164,  3165,  3166,  3167,  2851
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2775
static const yytype_int16 yypact[] =
{
   -2775,   288,  1390, -2775, -2775, -2775,  1576, -2775,   591, -2775,
   -2775,   844, -2775, -2775, -2775,    31,  1079,  1116, -2775,  1242,
    1278, -2775, -2775, -2775,  1142,  1142,   966,  1067,  1452,   790,
    1113,  1198,  1438,   860,  1143,  1190,  1219,   591,   591, -2775,
   -2775,  1268,  1579, -2775, -2775,  1362, -2775,  1329,  1405, -2775,
    1650,  1353,  1367,  1286,  1545,  1432,   905,   905,  1774,  1740,
    1761, -2775,  1058,  3763,  4488,  1418,   654, -2775,  1425,  1434,
   -2775, -2775, -2775,  1453,  1293, -2775, -2775, -2775, -2775,  1912,
    1912,  1540, -2775,  1800,   939, -2775,  1740, -2775,   939, -2775,
   -2775, -2775, -2775, -2775,    67,  4915, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775,   732, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775,  1538, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
     747, -2775, -2775,  1610, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775,  1423, -2775,   428,    81, -2775, -2775,     7,   447,  1429,
   -2775,    84,    84,  1524,  1544,  1741,  1741,  1741,    84,  1548,
    1741,  1936, -2775,  1598,  1293,  1045, -2775, -2775, -2775, -2775,
    1765, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
    1726,  1510, -2775,  1715,  1741,  1769, -2775, -2775,  1518, -2775,
    1520, -2775, -2775,  1611, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,   539,  2076,
    8912,   123,  1058,   425,  1465,   674,   365,   965,  5923,  6776,
     965,  1058,  1236,  1302,   674,  1471,  1534, -2775, -2775,  6776,
   -2775, -2775,   674,  1473,  2333,  1471,  6141,  6776, -2775,  1127,
    7518,  1465,  1475,  1471,  1465,   914,    78,    77,  1471,  1465,
   -2775, -2775, -2775, -2775, -2775, -2775,  6776,  5893, -2775, -2775,
    1473,   110,  1471,  1465,  1471,   914,  1475,  1475,  1601,  1955,
   -2775,   586,  1537, -2775, -2775,  1541,   -12,   841, -2775, -2775,
    1600,  1587,  1976,  1741, -2775, -2775, -2775,   923, -2775, -2775,
   -2775, -2775, -2775,   804,  1983,  1741, -2775,   -15, -2775, -2775,
   -2775,  1741,  1741, -2775,  1741, -2775,  1471,  1973,  1471,  1741,
    1741,  1471, -2775,  1492,  1387,  1550, -2775,  1061, -2775, -2775,
    1494, -2775, -2775, -2775,   563, -2775,  1741,    36,  1630,  1554,
   -2775, -2775,    63,    63,   550,  1557, -2775,  1135,  1910, -2775,
    1766,  1843, -2775,  1549,  1728,  1292, -2775,  1471, -2775, -2775,
    1551,  1553,  1556, -2775,  1559,  4143,   717,   717, -2775,  1560,
    1562,  1565, -2775, -2775, -2775,  1566,   717, -2775, -2775, -2775,
   -2775, -2775,  1471, -2775,  1567, -2775,  1556, -2775,   717, -2775,
    1918, -2775,  6255, -2775, -2775, -2775, -2775,  1570, -2775, -2775,
    1568,  1571,  1573,  4143,  7889,  8912,  7889, -2775,    42,   992,
   -2775,  1880, -2775, -2775, -2775,   589,  1570, -2775, -2775,   123,
   -2775,  1574, -2775,   717, -2775,  1923,  2886, -2775, -2775,   425,
   -2775, -2775, -2775,  1465,  1030,  1728,  1934,    68, -2775,  1666,
   -2775, -2775,  1549,  1570,  1465,  1939,  1704,  1605,  1606, -2775,
   -2775, -2775,  1475,  1408, -2775,  1945,   902,  6295, -2775, -2775,
    5213,  1476,  1487,  1947,   764, -2775,  1818, -2775, -2775, -2775,
    1948,    47, -2775, -2775, -2775,  5530, -2775, -2775,  1990,   732,
   -2775, -2775, -2775,   674, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775,  1612, -2775, -2775,   268, -2775,  1473, -2775, -2775,    37,
   -2775, -2775, -2775, -2775, -2775, -2775,  1591,  6776, -2775,  1613,
    1951,  2058, -2775, -2775, -2775, -2775,  1127, -2775,  1668,  1728,
   -2775,   114,   114,   639, -2775, -2775, -2775,  7656,   -17,   775,
    1622,  1620, -2775,  -204, -2775, -2775,  1628,  1957,  1129, -2775,
    1958,   646, -2775,  1903, -2775,  1959,  1704,  1564,  1961, -2775,
    1903,  1471,  1963,  1581, -2775,  4143,  1940, -2775, -2775, -2775,
   -2775, -2775, -2775,  1833, -2775,   674, -2775, -2775,   -74, -2775,
      70,  2103, -2775,    74, -2775,  1977,  1480,  3805,  1975,  6404,
   -2775,  2022,  1471,  1471,  1984,  6558,  1473, -2775, -2775,   789,
   -2775, -2775, -2775, -2775,  4252, -2775,  1935, -2775, -2775,  1147,
    1985,  2032,  1986,  1903, -2775, -2775,  1941,  1654,  1723,  1877,
    1608,  1608,  1608,   499,  1663,  7455, -2775, -2775, -2775,  1614,
   -2775, -2775, -2775,  1830, -2775,    84, -2775,  1253, -2775,    97,
   -2775, -2775, -2775, -2775,  1741,  1732,  1895, -2775, -2775, -2775,
   -2775,  1042,  1741,  1619,  1685,  2072,  1741,  1358,  1471,  1913,
   -2775, -2775, -2775, -2775,  1915,  1670, -2775, -2775,  1492, -2775,
      50, -2775, -2775, -2775, -2775, -2775, -2775,  1512,   600,  1741,
      69, -2775, -2775, -2775,  1690,    56,   838, -2775, -2775, -2775,
   -2775,  1741, -2775, -2775,   348, -2775,  -186,  -130,   376, -2775,
   -2775, -2775, -2775, -2775,  1471, -2775, -2775,  4364, -2775,  2092,
    1617,  8912,  1684, -2775, -2775,   -22, -2775,  1702,  8912,  8912,
    8253, -2775, -2775, -2775,  1570, -2775,  1641,  1644,  8912,  8912,
    8912,  4143,  1645,  1709,  4143, -2775, -2775, -2775,  6815,  1987,
   -2775,  1292,  8912, -2775,  4143,  8912, -2775,  1570, -2775, -2775,
   -2775,  1263, -2775,  1965,  8912,  8912,  8912,  8912,  8912, -2775,
    1796, -2775,  1844,  1942, -2775, -2775, -2775, -2775,   959,  2191,
   -2775, -2775, -2775,  1030, -2775, -2775, -2775,  1327,   621,  1471,
   -2775, -2775, -2775, -2775, -2775,  8912,  1926, -2775,  1684, -2775,
    1465, -2775, -2775, -2775, -2775,  1811, -2775, -2775, -2775,   -57,
   -2775, -2775, -2775, -2775, -2775,  1901,  2041, -2775, -2775,  5213,
     120,   902,   902,   902,   902, -2775, -2775,  6776,  6815,  1678,
   -2775, -2775,  1236,   108, -2775,  1673, -2775,  1680, -2775, -2775,
     506, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  5182,
   -2775, -2775, -2775,  2168, -2775, -2775, -2775,   -14, -2775,  2086,
     826,  2036, -2775,  4143,   126, -2775, -2775,  1836, -2775, -2775,
      61,  8912, -2775,  1745,   674, -2775, -2775,  6815, -2775,  1687,
    1811,   114,  1746, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775,  2055,  1471,   123, -2775,   264,
   -2775, -2775, -2775, -2775,  1704, -2775, -2775, -2775, -2775,  1996,
    2333, -2775, -2775, -2775,  1998, -2775, -2775, -2775,  1811,  2104,
   -2775, -2775,  1471,  2104,  1755, -2775, -2775,  1570, -2775,  1756,
   -2775, -2775,   320,  1512, -2775, -2775,  5779, -2775,  2203,   861,
     107, -2775, -2775, -2775,  1741, -2775,  -114,  6776, -2775, -2775,
      64, -2775, -2775,  1471, -2775,  2204, -2775,  2039,  2040, -2775,
   -2775,  6815, -2775,  1895, -2775, -2775,  4143, -2775, -2775, -2775,
   -2775, -2775,  2204,  2007, -2775, -2775,   264,  1471,  1687,   493,
   -2775,  1760,  1829,  1988, -2775, -2775, -2775,  1865,  1764, -2775,
    1767, -2775, -2775,  2173, -2775,  1759, -2775, -2775,  1768, -2775,
   -2775, -2775,  2248,  1771, -2775, -2775,  1895, -2775, -2775, -2775,
     924, -2775, -2775, -2775,  1978,   890, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775,  1358, -2775,  1784, -2775,   557, -2775,  1834,
   -2775, -2775, -2775, -2775,  2000,   600, -2775,  2023,    84,    84,
   -2775,  1512,    34, -2775,  -128, -2775, -2775, -2775,  1908, -2775,
    2201, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
     814, -2775,  1741,  1835,  1944, -2775, -2775, -2775,  2176, -2775,
     304, -2775, -2775,  1741,  1306,  4364, -2775, -2775, -2775,   729,
    1793,  3421, -2775, -2775,  1306, -2775, -2775, -2775,  1735,  1737,
   -2775,  4143,  1306,  2042,  1837,  1972, -2775, -2775,  2002, -2775,
   -2775, -2775, -2775,    33,  1244,  8912, -2775, -2775, -2775,   185,
   -2775,  1471,    75,   852,  1806,    86,  1809, -2775,   200,  1810,
    4143, -2775, -2775,   331,  1815,  1816,  1817,   350, -2775,  1570,
   -2775,  1820, -2775,  1471,   353,  1821,  1728,   649, -2775,   195,
     -45,   674, -2775,  1295,  1824,   354, -2775,  1832,  1796,   992,
     992, -2775, -2775, -2775,   674, -2775,  1838,   123, -2775,  1678,
   -2775, -2775, -2775, -2775, -2775, -2775,  1900, -2775,  1928, -2775,
     954,  1741, -2775, -2775, -2775,  1653,    18, -2775, -2775, -2775,
    2067, -2775, -2775, -2775, -2775, -2775, -2775, -2775,   111, -2775,
   -2775,  1713, -2775, -2775,  2059, -2775, -2775, -2775, -2775,  2106,
     649,  2107, -2775, -2775, -2775, -2775, -2775, -2775,  2314, -2775,
    1841,   100, -2775, -2775,   108, -2775,  1772,  2168, -2775, -2775,
   -2775, -2775, -2775,  1534, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775,  1997, -2775, -2775, -2775,  2194,  2183,  1534, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775,  1946,  1534, -2775,  1845,
   -2775,  2290, -2775, -2775, -2775,  1674, -2775,  4143,  2681, -2775,
   -2775, -2775,  2213,   104,   247,   991,   674,   674,   649,  2126,
     358,  1465, -2775, -2775,  2196, -2775, -2775, -2775,  2346, -2775,
    2144, -2775, -2775, -2775, -2775,  1998,  1471, -2775, -2775, -2775,
   -2775,  1471,   786,   734, -2775,  1807, -2775,  1812,  4143,  2025,
    1285, -2775,   185, -2775, -2775, -2775,  6776,  1512,  1512,  1512,
    1512,  1512,  1512,  1512,  1512,   861, -2775,   694,    18,   -61,
   -2775,  1899,  1899,   505,  6667,  1471,  1471,   649,  2143,  1867,
   -2775,  1874,  2362,  1471,   617,  1811,  2366, -2775,   264,   253,
     428, -2775,  1873,  1943,  1974,  1826,  1028,  1471, -2775, -2775,
   -2775,  1028,  2284,  1741,  1496,  1496,  1741,     5,  1715,  1741,
    2358, -2775,  2046, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775,    84,  1204, -2775, -2775,  1897, -2775,  2174,
   -2775,    27, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
    1089, -2775,    76, -2775,  1358, -2775,  2027, -2775, -2775,  2000,
   -2775,    84, -2775, -2775, -2775, -2775, -2775,    66,  1831, -2775,
     106, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775,   170,  1741, -2775, -2775,  1839,  1886, -2775, -2775, -2775,
   -2775, -2775,  2340, -2775, -2775, -2775, -2775, -2775,  1558, -2775,
     740, -2775, -2775, -2775, -2775,  2062,  2062, -2775, -2775,  2062,
     533, -2775,  1741, -2775, -2775, -2775, -2775,  1741, -2775, -2775,
   -2775, -2775, -2775,    41, -2775, -2775, -2775,  2329,  1949, -2775,
   -2775, -2775, -2775,    43, -2775,  1741, -2775,  2384, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  1306, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775,  8912,  8467,  1244,
   -2775, -2775, -2775,  1666,  8556,  1568,  8574,  1568, -2775, -2775,
   -2775,  1471,  1568,  1568,  1568,  4143, -2775,  1666,   -77,  1568,
     -22, -2775, -2775, -2775,  2068,  1952,   202,  2170,   649,  8860,
    1568,  1568,   622, -2775, -2775, -2775, -2775, -2775,   732, -2775,
   -2775, -2775,   838, -2775,  8912, -2775, -2775, -2775, -2775,  2074,
    2146,   542, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
    1741, -2775,     6, -2775, -2775,  1552,  1741, -2775, -2775, -2775,
   -2775,   121,  1741, -2775, -2775, -2775,   674, -2775,   674,    49,
     108, -2775, -2775, -2775,  2314, -2775, -2775, -2775,  1471, -2775,
   -2775, -2775, -2775,  1849,  1365,    14,  1851,   622,  4143, -2775,
   -2775,  2354, -2775,   290, -2775, -2775,  2681, -2775,   290,  2197,
    2200, -2775,  1969, -2775, -2775,  1741, -2775, -2775,  2152,  2070,
   -2775, -2775,   674, -2775,   674,  2066,  2066,  2077, -2775,  1100,
   -2775, -2775, -2775,  1471,  6776,   116,   109, -2775, -2775, -2775,
   -2775,  2096,  2272,    18, -2775,  1376, -2775, -2775, -2775, -2775,
    1812, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775,   -27, -2775,  1471, -2775, -2775, -2775,
    1156, -2775, -2775, -2775,  8912, -2775,  6776,  6776,   509,  2060,
   -2775, -2775, -2775,  1666,  1666, -2775,   674, -2775,   622, -2775,
    2075, -2775,  4143, -2775,  2297,  1937, -2775,   734, -2775,  1014,
    2026, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  1921,  1992,
    2003,   791, -2775,  1826, -2775,  2199,  1950,  8049,   925,  2207,
   -2775,  1895,  1875,  1741,  2358,  1876,   840,   548,  1895,  1879,
    1741, -2775, -2775, -2775,   262,  1047, -2775, -2775, -2775,  3604,
   -2775,  2284,  1465, -2775, -2775, -2775, -2775, -2775,  1089, -2775,
    2157, -2775, -2775,  2188, -2775,  1912,   718,  1912,  1953, -2775,
   -2775, -2775, -2775, -2775,   856, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775,   304,   304,   304, -2775,
   -2775, -2775, -2775,   304,   304, -2775, -2775,  1741,  1741,   607,
     607,   304, -2775,   533, -2775,   852, -2775,  1335,   897, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  2224, -2775,
   -2775, -2775,  2221, -2775, -2775, -2775, -2775, -2775, -2775,  2222,
   -2775, -2775,  1363, -2775, -2775, -2775, -2775, -2775,   113,    90,
   -2775,  1068, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  3183,
     304, -2775, -2775,  1728, -2775, -2775, -2775, -2775,   715,   304,
     607,   607,   304,   649,  2050,   649,  2051,  5561, -2775,   937,
      20, -2775, -2775, -2775, -2775, -2775, -2775,  1365, -2775,  2338,
   -2775,  1534, -2775,   290, -2775,   290,   622,  1954,  1954, -2775,
    2442,  2413, -2775, -2775, -2775, -2775,   -76,  1471, -2775, -2775,
   -2775,   649, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  1401,
   -2775,  2402,  1997,  2172,  2205, -2775,   942, -2775, -2775, -2775,
     950, -2775, -2775, -2775,  2342,  2141, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775,  2177, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775,   852, -2775, -2775, -2775, -2775, -2775, -2775,
    2133,  1956,  1741,   897,  2224,   649,  1914, -2775,  2362, -2775,
    2226,  2359,  2226,   509,  1123, -2775, -2775,  1624,  2195, -2775,
    2408,   428, -2775,  1968,  2043, -2775,   172, -2775, -2775,  1471,
   -2775,   967, -2775, -2775,  -171,   980,  1008,  1072,  1084,  1917,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775,  2064, -2775,   845, -2775, -2775, -2775, -2775,
    1471,  2225, -2775, -2775, -2775,   821, -2775, -2775, -2775,  1741,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775,  1380,   521, -2775,
    1920, -2775,   172, -2775,  1979, -2775,  2271, -2775, -2775, -2775,
    1876, -2775, -2775, -2775, -2775, -2775, -2775,  2209,    71,  2226,
     990,  1741, -2775, -2775,  1741, -2775,  1715,  1704,   995, -2775,
    2049,  1741,  2420,   363,   787,  1397,  1687, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775,  2028, -2775,  2210, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775,  2452,  1741,  1465,
    1465,  1089, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775,   530, -2775, -2775, -2775, -2775, -2775,   542,   304,
   -2775,  1627, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  2254,
    2371, -2775, -2775, -2775, -2775, -2775,  2178,   151,  1728, -2775,
   -2775, -2775, -2775, -2775,  1471, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775,   674, -2775,   674, -2775,
   -2775,  6776, -2775, -2775, -2775, -2775, -2775,  2447,  2380, -2775,
   -2775,   290, -2775,  6776,  6776, -2775, -2775,  2131,  1465,  1071,
   -2775,  1471, -2775, -2775,  2087,  6776,  2217, -2775,  1741,  1296,
   -2775, -2775,   963,  2219,  2228, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775,  1471, -2775,  2371, -2775, -2775, -2775,  2005, -2775, -2775,
    1471,  2226, -2775,  1471, -2775, -2775, -2775, -2775, -2775,  2187,
    2334, -2775, -2775, -2775, -2775, -2775, -2775,    84, -2775,   428,
   -2775,   428, -2775,  2009,  2024,   172, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775,  1960, -2775, -2775,  2460,  1993,  2019, -2775, -2775,
   -2775, -2775, -2775,  6936,  2490,  2079,  2079, -2775, -2775,  1895,
     315,  1471, -2775, -2775, -2775, -2775,  1895, -2775,  2069, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775,   625,   625,  1741,
    2152, -2775, -2775,   770, -2775,  1223,  1741,  1741,  1741,  1741,
   -2775,  1888, -2775,   358,  1741,  1715, -2775,  2078,  1875,  1465,
   -2775,  2161,  2506, -2775,   -31, -2775, -2775, -2775, -2775, -2775,
   -2775,   607,  2254,   897, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775,  1471, -2775,   897,   897, -2775, -2775, -2775, -2775,  6776,
   -2775, -2775, -2775, -2775,  1741,  1465,  1465,  2156, -2775, -2775,
   -2775,  1994, -2775,  1471, -2775, -2775,  2096,  2272, -2775, -2775,
   -2775, -2775,   897,  1211, -2775, -2775,  1471, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,   172,
    1091, -2775, -2775,  2226,  2310,  2038,  1895,  2038, -2775,  2252,
   -2775,  2420, -2775, -2775, -2775, -2775, -2775, -2775,  1471, -2775,
      46,  1936, -2775,    54, -2775, -2775, -2775, -2775,   528,  1741,
   -2775, -2775,  2783, -2775, -2775,   548,  2080,  1471,  1471, -2775,
   -2775, -2775, -2775,  1471,  1741, -2775, -2775, -2775,  1895, -2775,
    1089,  2409,  2044,   607, -2775, -2775, -2775, -2775, -2775,   123,
    1465,  1741, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775,  1258, -2775, -2775, -2775, -2775, -2775,
    2163,  2423, -2775, -2775,  2154,  -195, -2775,  2099, -2775,  2047,
    1995,  1895,  2048, -2775,  2425, -2775,  2429, -2775, -2775, -2775,
     548,   548, -2775, -2775, -2775, -2775,  2335, -2775, -2775,  1979,
    1895, -2775, -2775, -2775, -2775,  1471, -2775, -2775, -2775, -2775,
   -2775,   631, -2775, -2775,   631,  2548, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775,   631,   631,   631,   643, -2775, -2775, -2775,
     943, -2775, -2775,   882, -2775, -2775,  2056,   607, -2775, -2775,
     123, -2775,  2158,  2098,    91,  1997,    15,  1473, -2775,  7218,
   -2775, -2775,  -195,  2061,  2065,  1741, -2775, -2775,  1895,  2312,
    1997,  1997, -2775, -2775, -2775,  2533,  1936, -2775,   -23, -2775,
   -2775, -2775, -2775,  1768, -2775, -2775, -2775, -2775, -2775, -2775,
    1741,  1471,  2008, -2775,  2008, -2775, -2775, -2775, -2775,  1471,
   -2775,  1578, -2775, -2775, -2775,    93, -2775, -2775,   -87, -2775,
    2081, -2775,  2082, -2775, -2775,   172, -2775, -2775,  1471,  1471,
    2326,   247,   548,  2445,  2093, -2775, -2775,  1471,  1471,   -35,
   -2775, -2775, -2775, -2775, -2775,  2202,   -62,    93, -2775, -2775,
     738,  1486,   868, -2775, -2775, -2775, -2775,  2326, -2775, -2775,
    2204, -2775,  2152, -2775,  1997, -2775,  2014, -2775,  1471,  2235,
   -2775, -2775,  1997, -2775, -2775,  2241,  1471, -2775,    23,  2318,
    2319,  2455,  2315, -2775,   738, -2775,  1308,   974,  2083,    73,
    8189, -2775,  2326,  2030,  1741,  1471,    82,  1124,     1, -2775,
   -2775,  1741,  2260,  1471,  1741,  1741,  1741,  1741, -2775,  2336,
     167,  2337, -2775,  2332, -2775,  1375, -2775, -2775,  1471,  2495,
    1228,  2343,   183,  2344,  2339, -2775,   854, -2775, -2775,  1471,
    2115, -2775,  1741,  1741,  2358,  1671, -2775, -2775, -2775, -2775,
    2382,  2412, -2775,  1741, -2775,   520, -2775,  1552,  1741,  2333,
   -2775, -2775, -2775, -2775,  2062, -2775,  2465,  1895, -2775,  2547,
   -2775, -2775, -2775,  1471, -2775, -2775,  1471, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  2386,  2062,
   -2775, -2775,  2030, -2775,  1471, -2775,  1292, -2775, -2775, -2775,
    1530, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  1465,
    1471,  1895, -2775,  1471,  1471,  1471,  1471,  1741,  1741,  1741,
    1741,  1741, -2775,  1471,  1741,  1741,  1741,  1741,  1741,  1741,
    1741,  1741,  1741,  1741,  1741, -2775,  1471,  1741,   542, -2775,
   -2775,  1741,  2358,  2347,  2053, -2775, -2775, -2775,  1471,   304,
   -2775, -2775, -2775, -2775,   304, -2775,  1741,  2038,  1741, -2775,
   -2775, -2775,  1741, -2775,  1471, -2775, -2775, -2775,  2038, -2775,
   -2775, -2775, -2775,  1471,  1471,  1471,  1471,  1471,  1471,  1471,
    1471,  1471,  1471,  1471,  1471,  1471,  1471,  1471,  1471,  1471,
    1471,  1471, -2775, -2775, -2775, -2775,  1652,   -78, -2775,  1471,
   -2775, -2775, -2775,   922, -2775,   542,   922,  2326, -2775, -2775,
   -2775, -2775, -2775,  1471, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775,  1471, -2775,  1451, -2775, -2775,
    2347, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
     304, -2775, -2775, -2775,   304, -2775,  1471,  1471,  1676,  1741,
    1741,  1621, -2775, -2775, -2775, -2775, -2775, -2775,  1861, -2775,
   -2775, -2775,  1471, -2775, -2775, -2775,  1741,  2347,  2347, -2775,
    2390,  1741,  1741, -2775,  3391,  1471,  2347, -2775, -2775, -2775,
    2347,  2347,  2381,  1623,  2358,  2383,  1895,  2084,  1741,  1728,
   -2775,  1741,  1741,  1471, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775,  1206, -2775,   955,
   -2775, -2775, -2775,  1623,  2358,  1471, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775,   791, -2775,  1741,  2048, -2775,  9130,  9130,
    1782,  2497,  2414, -2775,  1895,  1206, -2775, -2775,  1895,   955,
   -2775, -2775,   791, -2775,  1471, -2775,  1206,  2038, -2775,  1666,
    9015, -2775, -2775,  1321,  1368, -2775, -2775,  1493, -2775, -2775,
   -2775, -2775,   -59,   -59, -2775, -2775, -2775, -2775, -2775,  9130,
   -2775, -2775, -2775, -2775, -2775,  1471, -2775,  2429, -2775,  1997,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775,  2282, -2775,  2282,
   -2775,  2579, -2775,  2164,    32,  2286, -2775, -2775,  9130,  1895,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2775, -2775, -2775, -2775, -2775, -2775, -2775,  2624, -2775, -2775,
   -2775, -2775, -2775, -2775,  2552, -2775,  1922, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775,  2584,  2554,   -73, -2775, -2775, -2775,
    1479,  2619, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775,  2590, -2775, -2775, -2775,  2592, -2775, -2775,
    2227,  -250, -2775, -2775, -2775, -2775, -2775,  2428, -2775, -2775,
   -2775, -2775,  1098, -2775, -2775, -2775, -2775,  2415,   624, -2775,
   -2775, -2775, -2775,  1490, -2775, -2775, -2775, -2775, -2775,  1122,
   -2775, -2775, -1821, -2775, -2775, -2775, -2775, -2775,  1878, -2775,
   -2775, -2775, -2775,  1511, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  -819,
   -2775, -2775, -2775, -2775, -2775,   205, -2775, -2775, -2775, -2775,
   -2775,   -56, -2775,   220, -2775, -2775, -2775,    22, -2775, -2775,
   -2775, -2775,   216, -2775, -2775,  1919, -2775, -2775, -2775, -2775,
   -2775,   214, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,    35,
   -2775, -2775, -2775,   238, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  -158,
   -2775, -2775, -2775,  -125, -2775, -2775,  -165, -2775, -2775, -2775,
   -1391, -2775, -2775,  1964, -2775, -2228, -2478,  -715, -2775, -2029,
    -409, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -1217,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,   815, -2621,
    -127,   272, -1812, -1807, -2408, -2775, -2775, -2775, -2534, -2775,
   -2775,  -500, -2775, -2775, -2444, -2775,   -63, -1764, -2775,  -213,
   -2314, -2775, -2087, -2775, -1809, -2775, -2775,   305, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
    -482,  -507, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -1320, -2775,  -456, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775,     3, -2775, -2775, -2775,  -173,  -170,  -317,
    -308, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775,  2223,   756, -2775,   689,  1508, -2775, -2775, -2775,
   -2775, -1759, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  -805,
   -2775, -2775,   -32, -2775,  2647, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775,  1522, -2775,  -796, -2775, -2775,  -789, -2775,   -85,
   -1292,  1115, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775,  1454, -2775, -2775, -2775,  2180, -2775, -2775, -2775, -2775,
   -2775,  1441, -2775, -2775, -2775,  1442, -2775, -2775,   723, -2775,
   -2775,  -661, -2775, -2775, -2775,   456, -2775,   458, -2775, -2775,
   -2775, -2775,  2179, -2775, -2775, -2775,  1842, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
    2376, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  2150, -2775,
   -2775, -2775,  1419, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
    1797, -2775, -2775,  1799, -2775, -2775,  1398,  1015, -2775, -2775,
   -2775, -2775, -2775,  2137, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775,   733,  1781, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  1775,
   -2775, -2775,   997, -2775,  1364, -2775, -2775, -1651,   726,   728,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775,  2114, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2310,  2105, -2775, -2775, -2775,   978, -2775, -2775,
   -2775, -2775, -2775,  1338, -2775, -2775, -2775,  -855,   979, -2775,
   -2775,   711, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775,   703, -2775,   705, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775,   926, -1313, -2775,
   -2775, -2775, -2775, -2775, -2775,  1717,   971, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,  -546,
   -2775, -2775, -2775, -2775,  1317, -2775, -2775, -2775,  2085, -2775,
    2088, -2775, -2775, -2775,  2387, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775,   947, -2775, -2775, -2775, -2775, -2775,
    2089, -2775, -2775,  1303, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775,   678, -2775,  1305, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
      17, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775, -2775,
     846,  1309,  1752, -2775, -2775, -1082, -2775,  1196, -2775, -2775,
    1200, -2775,   952, -2775,  1863, -2775,  1868, -1171, -2775,  1117,
   -2775,  1120,   687, -2775,   704, -2775,   706, -2775, -2775, -2775,
   -1724,   291, -1370, -2775, -2775,   430, -2775,   433, -1393,   699,
   -2775,  1104, -2775,  1106,  -257,  -988,  -326,  -862, -2775, -2775,
    1847, -2775,  1857,  1461, -1306,   989,   993,   994,   999,   938,
     585,   221,  1103,  1141, -2775,  1414,  -143,  -782,  -315,  2427,
    2407,  2134, -1843,  -153,  1020,  -384, -2775,  -647, -2775,  -282,
   -1793,  1938, -1637,  -427,  1683, -2775,   630, -1067,  -197,  2034,
    -309,  -320, -2775,   707,     2, -2775,   526, -2775,  -781, -1423,
   -2775,  1388,  -626,  -785, -2775,  1149,  -345, -2775, -2775, -1755,
     886, -1614,   -37,  -340,  -464,  -318, -2775, -2775, -2775,   -58,
    -431, -2775, -2775,  1555,  -506,  -511,  -424,  1284, -1446,  1294,
    -351,  -110,  -467,   168, -2775, -2775, -2775,   327,  2320, -2775,
   -2775, -2775, -2775,  1125, -2775, -2775, -2775, -2775, -2775, -2775,
   -2775, -2775, -2775, -2775, -2775, -1611, -2775,  1145,   424,   749,
     488, -2775, -2775, -2775, -2775,   240, -1831, -2775, -2775, -2775,
   -2265, -2775, -2775, -1052, -2036, -2102, -1361, -2775, -2775,   132,
   -2775, -1267, -2775, -1834, -2775,   374, -2775, -1953, -2775,  -225,
   -1816, -2123, -2775, -2775, -2775, -2775, -2775,  2367, -1445, -1565,
    -271,  -551, -1352,  1688,  1082, -2775, -2775,  -548, -2775, -2775,
   -2775,   -72, -2775, -2775, -2775,  1393, -1895, -2775, -2775,  1114,
   -2465, -1274, -2775, -2775, -2775,  -262,   972, -2007, -2774, -2775,
   -2775,  1312, -2775, -2775,   -50, -2775,  1374, -2775, -2775, -2775,
     155, -2775, -1933,  -270, -2775, -2775, -2775, -2775, -2775, -2775
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -2157
static const yytype_int16 yytable[] =
{
     436,   437,   438,   581,   889,   441,   707,   252,   826,   770,
    1728,   773,    63,   621,   776,  1105,  1106,  1107,   905,   654,
     789,  1917,  1714,  1454,  1918,   431,   593,  1407,  1684,   457,
     558,   439,  1938,  2178,   604,  2106,  1067,   691,   843,  2230,
    1462,  1054,   604,  1870,  2107,  2157,  1948,   625,  2165,  1044,
    2158,   899,  1782,   614,   833,  1811,   898,   604,  2060,   541,
     625,   404,  2616,  1254,   932,  2304,  1257,  2232,   690,  1727,
     428,  1330,  1151,  1264,   555,  1893,   555,  2374,  2689,  1845,
    2438,  2439,   402,   555,  2097,   428,  2417,   671,   981, -2105,
    1883,  2896,   856,  1887,  1733,  2620,  2268,  2023,  1123,   803,
    1860, -2156,  2756,  1736,   797,   863, -1830,  1898,  1303,  1362,
    -780,  1634,  1390,   803,  2571,   982,  2292,  1111,  1034,  1681,
     972,  1325,  1625,  2042,  1309,  1401,  1868,  2811,   261,  1325,
    1629,  1310,  1335, -2143,   442,  1380,  1164,  3187,   963, -1831,
    1011,  1809,  2842,  2408,  1922, -2041,  1320,  1227,  2242,  1717,
    1343,  1190, -2156,  1634,  1366,   983,   984,   985,   986,   987,
    1596,  2243,  2244,  2245,  1634,   765,  2436,   758,  2246,  2247,
    2307,  2843,  2844,  1221,  1160,  1752,  2255,  1929, -1860,  2877,
    1925,   475,   899,  1423,   625, -2105,  1949,  1060,   756,  1381,
    2904,   554, -2035,   566, -2035,  1398,  1390,   533,   988,   989,
     763,  2731, -2156,  1901,  1055,  1812,   767,   768,  1404,   769,
    1008,  1008,  2083,  2084,   774,   775,  1693,  1694,   658,   790,
    2051,   666,   677,   639,  1287,  2277,   696,  1763,  3201,   795,
     536,   796,   962,  1009,  2281,   563,  2722,  2284,  2600,  1078,
     719,  1155,  1882,  1451,   563,   892,  1165,  2905,   675,   731,
    2779,    22,   563,  1547, -2156,  1990,  2906,   541,  2353,   435,
    2760,  1166,  1186,   405,  -780,   538,  1182,   563,  -780,  2669,
    2628,  1685,  1412,  2783,   555,  1756,  2380,   435,  1634,  2918,
     471,  1981,   535,   956,  3073,   552,  1825,  1894,     3,  1902,
     582, -1839,   887,  2767,   956,  2931,   654,  2262,  2017,  1457,
    3114,   483,  1413,   483,  1152,   743,   620,  2549,  2784,   821,
     483,  1226,   652,   990,   991,   992,   993,   994,   995,   996,
     997,   998,  1082,  1382,  2802,  1547,   555,   435,  2018,   744,
    -780,  2785,  1128, -2059,   717,  2262,   721,  1379, -2156,   676,
    2269,  1146,  1686,  1183,  -780,  -780,  2374,   488,  2907,   488,
    1228,   584,   961, -2156,  2043,  2418,   488,   493,  2381,   493,
    2718,   610,  2299, -1912,  2300,   604,   493,  1765,   629,   631,
     956,  1757,   538,   677, -2156,   834,  1052,  2679,  2535,  1167,
    1452,   533,   533,   533,  1262,   625,  2780,  1293,   701,  1383,
    2061,  1813,  2879,  1841,  1230, -2035,   746,  1842,   803,  1391,
     883, -2156,   538, -2118,    23,   483,  1548,   677,  2270,  1634,
    2453,   901,  2293,   857,   536,   536,   536,  1193, -1839,   827,
    2302,  1187,  1053,  2052,  2845, -1837,   803,  2271,  1634, -2156,
    2742,  1634,  1634,  1982,  1843,  1070,  2263,   964,   641,  2627,
     642, -2041,  1950,   644,   406,  1166,  1723,   563,   497,   782,
     497,   488,   851,  3094,  2679, -2041,  2191,   497,  1289,  1650,
    1461,   493,  2049, -2156,  1640,  2485,   860,   860,   860,  1330,
     708,  1635,  1330,  2308,   999,  1353,  1415,  1695,  1548,  1668,
    1104, -2035,  2454,  -780,  1012,  2437,  2880,  1922,   880,  1000,
    2606,   552,  3004,   563,  2456,  2618,  2192,  1960,  2067,   508,
     644,   483,   798,  3007,   563,   958,  2812,  1431,   537,   409,
   -2143,   758, -2043,  1635,   850,  1309,  2726,  2506,   410,  3031,
    2229,   965,  1310,   747,  1635,  1295,   499,   709,   499,  1126,
    -778,  1636,   622,   558,  1392,   499,   508,  1130,   655,   799,
    2897,  1135,   644,   760,   508,  1753,  1934,   488,  1117,  1293,
    1008,   864,   497,   483,  2723,  1201,   865,   493, -2074,   403,
    1729,   528,  2621,  1167,  1159,  1047,  1056,  2416,  1888,  -446,
     893,  2294,  1402, -1908,  2846,   563,  1180,  1619,  1930,   503,
     563,   503,   850,   782, -1910,  1628,  1884,   821,   503,   652,
     508,  2157,  3147,  1161,  2743,  2496,  2158,   952,  1124,   488,
   -2041,  2272,   933,   644,  1326,  1057,   593,  1899,   777,   493,
    1837,   708,  1326,   558, -2041,  1327,   262,  1046,  1392,  1786,
    1225,   887,  2028,  1327,  1895,  2264,   508,   429,   508,   973,
     499,   475,   509, -1394,   509,   508,   508, -1394,  1635,   403,
     730,   509,   429,  2580,  1077,  1384,  2898,  1300,   497,  2804,
    2481,   508, -1792,   835,   604,   555,  1991,  1308,  1314,  1460,
    2919,  1698,   558,  2264,  2631,  1397,  3095,  2000,   709,  1696,
   -2156,  1766,   508,   644, -1394,  1364,  2932,   644,   533,  1419,
     555,   508,  3177,   503,  -778,   533,   533,   533,  -778,  2610,
    2316,   858,   537,   537,   537,   533,   533,   533,  1648,  1069,
     497,   701,  1511,  2536,   547,  1660,  2766,   850,   821,   533,
    2370,   536,   533,  2881,   881,  1225,  2997,  1400,   536,   536,
     536,   533,   533,   533,   533,   533,   499,   730,   536,   536,
     536,  1249,   956,  2049,  1249,  1411,   509,  2298,  1260,   411,
   -2041,  1767,   536,   508,  1249,   536,   861,  1294,  1667,  2665,
    -778,  2429,   533,  1666,   536,   536,   536,   536,   536,  -785,
    3097,  1741,    17,   860,  -778,  -778,   558,  2258, -2041,  1635,
     860,   860,   860,  2586,  1911,  2761,  1914, -1792,   499,   503,
     860,   860,   860,  1248,  2405,   536,  1248,  -783,  1635,  1657,
    -775,  1635,  1635,  2889,   860,  2950,  1248,   860,  1642,   548,
    2065,  1583,  1791,  1584,  1449, -2118,   860,   860,   860,   860,
     860,   508,  1919,  1151,   927,   655,  1430,   435,  1260,   412,
    2193,   547,  2285,   941,  2287,   644,   508,  2185,   533, -1906,
    1287,   503,   509,   869,  2077,  1368,  1469,   860,  1369,  1447,
     864,  1370,  1371,  1048,    -7,   865,   209,  2572, -1904,  -785,
    1258, -1899,  1671,  1047,  1156,   483,  1953,  1954,  1330,   449,
    2312,   536,   508,  2788,   563, -2156,   409,  1260,  1568,  2798,
     564,  1343,  -446,  1171,  1947,   410,   466,  -783,   508,  -446,
    1972,  1973,   483,   413,   509,  1536,   782,   809,   414,  2240,
    1504,  1795,  1796,  1797,  1798,  1799,  1800,  1801,  1802, -2041,
    1437,   488,  2840,  -778,  2544,  1046,  2550,   483,  1438,  2632,
    2699,   493,  2342,   860,  2344, -2156,  2712,  2789,  2003,  1518,
    1573,   850,  2707,   403,  1574,  2005,  2498, -2041,   488,  1319,
    1321,  1778,  2759,  1201,  1993,   625,  1995,  -621,   493,  2236,
    1027,  2840,   563,   731,  -775,  2000,   558,  2951,  -775,  2497,
     732,   952,  2169,   488,  1675,   357,   812,  1561,  1410,  2668,
    2551,  1543,  1544,   493,  2759,  2909,  -621,  -621,  1572,  2237,
    2633,  1260,  1418,  2056,  2057,  1661,  1047, -2156,  2515,  1399,
    2516,  2395,  2031,   508,  1426,   409,  -446,  3098,  2157,   537,
    2279,  2882,  1824,  2158,   410,  1677,   537,   537,   537,  2831,
    2564,  1642,   497,  2801,  1585,   415,   537,   537,   537,  1250,
    -775,  1804,  1250,  2940,   928,  1453,  1805,  1969, -2057, -2156,
     537,  2078,  1250,   537,  -775,  -775,   380,  1519,  1046,   497,
     731,   708,   537,   537,   537,   537,   537,   732,  2890,  1467,
    2406, -2079,  1224,  2087,  2085,  1152,  2028, -2156,   428,  1314,
   -1394, -1394,   813,  2717,   497,   580,   221, -1912,  1435,  1243,
    1243,  1243,   644,   537,   -38,  1157,  1682,  3113,  2713,  1450,
   -1682,   449,   221,  1263,  2748,  2391,   604,   956,     9,    10,
     499,  1028,   533,  1458,   210,  2400,   912,  1762,   709, -1792,
    1586,   508,  -621,  1439,   705,  -384,   411,   467, -1792, -1792,
     508,  1047,  1662, -1792,   409,  1779,   508,   499,   810,   222,
    2778,  2994,  2015,   410,   644,   536,  1290,  -384,  3071,  2831,
    1556,  1557,  -621,  1520,   782,   222,  1440,   381,  1372,  1373,
    1249,  1048,   499,   503, -1864,   782, -1864,  1903,   625,   537,
     746,  2170,  2280,   358,  1172,  1173,  1174,   563,  2832,  1441,
     223,   563,   224,  1046,   225,  1959,  1374,  1375,  -384,    42,
     503,  1785,   226,  -775,   563,   508,   223,   860,   224,  1521,
     225,   382,  2714,  1643,   644,   508,   412,  2182,   226,  1522,
     508,  2419,  1248,   508,    77,   503,   509,  2323,  2420,   508,
    1558,  1819,  2096,    51,  3001,  1523,  1353,  3161,  1420,  3002,
   -2156,   508,  1819,  2790,  1512,   383,  2089,   508,  2324,  1442,
     563,   567,    26,   509,  1175,   411,  2791,  3034,   256,  -621,
     568,  2324,  1083,  1661,  1943,   913,  2792, -2156,   227,  1952,
    1759,  2301,   508,  2378,  1919,  2062,  2601,  -384,   509, -1741,
     413,  2401,  2588,  3045,   227,   414,  2326,  2327,  2062,    27,
    1921,  1855, -2074,  3124,  1048, -2156,  1859,  2964,  1862,  2333,
    2334,  1867,  1869,  2063,  1871,  3099,  1932,   747,  2832,  1280,
    1524,  -384,  2335,  2336,  2290,  1443,  2063,  1047,  1047,    78,
    1661,  3035,   435,  3143,   919,  3060,   563,   563,   563,  3061,
    1084,   644,  2574,   782,  2486,   412,  2672,  2379,  2355,  2956,
    2183,  -384,  2576,  2577,   221,   759,  1876,  3145,  -384,  1015,
     677,   384,   569,   257,  3138, -2156,   632,    52,  1047,  2833,
    -384,  1967,  1520,  2725,  2962,   228,  3174, -2057,  1016,  1046,
    1750,  2587,  2822,  1281,   411,  1760,  1559,  1904,  2738,  2739,
   -2137,   228,  2834, -2156,  1892, -2079,  1978,   563,  1525,  2589,
    1662,  1526,  1527,    28,    90,  1176,  1177,   222,  1776,   413,
    1178,   864,   760,  1777,   414,  2095,   865,  1923,  1521,  -621,
    1046,    31,  1924,   633,   812,   229,  1685,  1369,  1522,  1048,
    1370,  1371,   634,  1344,  1345, -2156,  1967,  1444,  2680,  1182,
    1931,   229,   661,   537,  1877,  2002,  2590,  1823,   223,  2710,
     224,  1994,   225,  1996,  1513,  1834,  1834,  1662,  1250,  2728,
     226,  1844, -2094, -2156,   412,  2421,   724,   726,  2487,   667,
    1287,   884,  2805,  2900,   757,  1346,  1347,  2380,  1878, -1741,
    2808,  3036,  2278,  -384,  -384,  2591,  3037,  2174,  1794,  2833,
    1022,  1778,   956,  2356,  2188,  2711,  1639,  1686,  -384,   558,
    -384,   570,  2822,  2819,  1528,  2380,  1822,  2464,  2465,  2466,
   -2137,  2064,  2834,   864,  2199,  2680,  1183,    39,   865,  1524,
     813,  1514,   508,   230,   635,  1980,   227,  1967,   413, -2094,
    1903,  1989,  1131,   414,    36,  1919,  1573,  1992,  2657,   230,
    1574,  2431,   866,  1023,   533,   533, -2156,  2996,  2200,   644,
    2275,   533,   867,   533,  2325,  2253,  2253,  2039,  2887,  2383,
    2901,   558,  2902,  2050,  2422,  2036,  1038,  2325,  3133,  2380,
    2819,   596,    91,   231,    92,   483,   533,   536,   536,  3182,
    2027,  2380,   508,  1087,   536,  1088,   536,  2385,  3178,   231,
    2423,   533,  2424,  1129,  2432,  1249,   448,  1525,  -384,  1685,
    2508,  2509,  3079,  2693,  2694,  1048,  1048,   885,   563,   536,
    1181,    93,   792,  2276,  1181,  3134,  2253,  2253,    40,  1096,
    2404,   488,   508,   228,   536,  1785,  3183,   864,  1568,   860,
     860,   493,   865, -2035,  3058,    41,   860,   644,   860,  2252,
    2252,  1136,   909,  1921,  2671, -2154,  1048,  1248,  -384,  3184,
    2310,  2387,  2820,   232,  2108,   429,   563,  2925,   563,   904,
      -6,   860,  1285,  2389,  1966,  1779,  2038,  2553,    45,   232,
    1686,  3077,  3078,   229,    -6,    -6,   860,  1575,  1047,  1576,
    3116,    47,  2167,   552,  3117,  3118,  1047,  1137,  2177,  1119,
    1286,   435,  1203,  1204,    56,  2190,  2607,  1138,  3048,  2430,
    2252,  2252,   563,  1528,   563,   597,   598,   644,   403,  3049,
    1979,  2062,  1354,  3141,  1355,  1967,   782,  1372,  1373,  2820,
    2004,   533,   497,  2254,   599,  2773,   782,  1063,  2195,  1966,
    1046,  3069,  3050,  1380,  2926,    48,  2313, -2137,  1750,  2063,
    1205,    57,  1206,  3141,  1207,  1374,  1375,  1983,  2927,  2928,
    2929,  3185,  2248,  2249,   536,  3149,  3151,  1120,  1121,  2398,
    2440,  2397,    62,  3051,  2314,  1410,   563,  2471,  2803,  3070,
      58,   230,  1047,   783,  3186,   784,  1984,  3181,  1985,  1208,
    1209,  1210,  2796,  2282,  2283,   600,  3064,  1381,  1139,  1064,
     588,  2797,  1065,  1638,  1190,    73,  3191,  3065,  2068, -2156,
     499,   589, -2156,   864, -2137,   654,   860,  2753,   865, -2156,
   -2156,  1266,  2754,    -6, -2137, -1244,  1232,  1235,  1238,    61,
    1966,   231,   864,  2821,  1046,  3205,  2041,   865, -2137, -2137,
   -2137,  2442, -1244,   546,  2322, -2035,  2822, -2035,  1211,  1433,
    1212,  3064,   586,  1265,  1669,    65,  2823,  1213,   836,   837,
    1434,  1214,  3065,   503,   864,   537,   537,  1482,   842,   865,
       9,    10,   537, -2156,   537,  3171,  1140,  1644,  2075,  2075,
    1646,   654,  2235,  1250,  2238,  2702,  3176,  3194,  1651,  1483,
      67, -2137,  1655,  2257,  2704,  2705,  2706,   537,    68,  1658,
    2821,  3152,  3069,    69,   864, -2137, -2137, -2137,   783,   865,
     784,   232,   537,  2822,    71,   873,   509,  2341,  1935,  1937,
    2478,  2261,  1287,  2823,  1683,  1935,   508,  1935,    72,  1141,
    1484,  1382,   864,  1315,  1316,  1317,  1318,   865,    51,  1575,
    3153,  1576,  1863,   563,  1864,   563, -1244, -1244, -1244,    52,
    1962, -2156,  1215,    81,  1216, -1244,   544,  3064,    84,  2362,
     562,  2363,  2457,  2455,  2458,  1971,  1048, -1244,  3065,   562,
     606,  2559,  2560,   677,  1048,    88,  2901,   562,  2902,   208,
     626,   563,  1142, -2156,  2403,   653,   215,  3028,   664,  3029,
     664,   674,   693,   626,  1205,   216,  1206,  1383,   859,   250,
     862, -1244,  2941,  2942,  2443, -2156, -1811, -1811, -1811, -1811,
     664,  3121,  3122, -1244,   220, -1244, -1244, -1244,  1966,    59,
      60, -1244,   253, -1244,  1245,  1246,  2427,  1269,  1270,  2428,
     254,  2473,  1940,  2474,  1942,   563,  2435,   368,   388,  1944,
    1945,  1946,   537,   398,  2539,  2534,  1951,   415, -2035,   432,
     433,   771,  2541,   771,   440,   435,   771,  1963,  1964,   442,
    1048, -2156,   445,  2448,   450,   452, -1244,  1271,  1272,  1273,
    1193,   453,   455,   435,   921,   922,   923,   924,   458,   460,
    1485,   461,   464,   403,   654, -1810, -1810, -1810, -1810,   508,
     607,   615,  1486,   659,   727,  2073,   728,  2253,   740,   754,
   -2156,   753,   742,  2384,  2386,  2388,  2390,   755,   762,   772,
     777,   791,   793,   801, -1244,   802,   815,   626,   811,   820,
     818, -2156,   821,   824,   828,   846,   829,   851,   868,   830,
     872,   874,   832,   838, -2035,   839,  2451,  2038,   840,   841,
     844,   852,   474,   890,   854,   475,   855, -1244,   896,   902,
     904,   906,   908,  2493,   544,  1700,   910,   929,  1701,   925,
     954,   930,  2615,   958,   971,  1702,  1703,   975,   977,   974,
    1217,  2619,   562,   979,  1017,  1018,  1020,  1019,  1025,  1030,
    1032,  2252,  1035,  1036,  1049, -2156,  1040, -2156, -2156,   677,
    2660,  2661, -1244,  3154,  1042,  1059,  2662,  3155,  3156,  3148,
    1071,  1061, -2156,  1075,  2664,  1487,  1488, -1244, -1244,  2253,
    1079,  1086,  1090,  1092,  1094,  1100,  1101,  1097,   562,  1704,
    1489,  1102,  1490,  1218,  1109, -2156,  1104,   476,   654,   562,
    2514,  1116,  1114,  1127,   782,  1219,   563,  1131,   563,   477,
    1339,  1340,  1341,  3157,   478, -1244,  1133,  2687,  1134,  1149,
     552,  1163,  1147,  1384,  1148, -1244,  1202,  1225,  1231,  1241,
    3158,  3159,  1242,  1252,  2548,  1253,  2697,  1274,  2660,  1267,
    1261,  2555,  2556,  2557,  2558,  1276,  2472, -1244,  1283,  2563,
    1295,   538, -1244,  1291,   913,   912,   674,  1322,  1331,  1365,
   -1244,  1378, -1244,  2252,  1342,  1334,   964,  1705, -1244, -2156,
     562,  1396,  1405,  2253,   644,   562,  1416,  1403,  1421,  1424,
    1308,  1428,  1429,  1436,   803,  1455,  1456,  1463,   626,  2579,
    1491,  1471,  1472,  1477,  2615,  1478,  1473,  1481,  1479,  1706,
     644,  1508,  1510,  1506,  1537,  1517,  1534,  1542,  2626,  1538,
    1553,  1555,  3032,  2501,  2539,  1564,  1590,  1562,   479,   480,
     481,  1707,  2505,  2729,  1566,  2507,  2451,   482,  1626,  1627,
    1632,  1630,  1631,  1633,  1645,  2482,  2483,  1647,  1649,   483,
    1492,  2768,  2769,  1652,  1653,  1654,  1679,  2491,  1656,  1659,
    2539,  2619,  1670,   771,  2635,  1680,  1691,  2252,  1672,  1716,
    1718,  1720,  2038,  1721,  1676,  1391,  1725,  1730,  1731,  2663,
    1738,  1737,   475,   484,   485,  1343,  1734,  1708,  1751,  1764,
     486,  2619,   487,  1771,  1773,   488,  2670,   489,   490,   491,
    1774,  1792,  1787,   492,  1815,   493,  1826,  1788,  1827,  1189,
    1828,  1829,   494,  1838,  1847,  1849,  1848,  1851,  2895,  1860,
    1872,  1874,  1880,  1287,   654,  1890,  1709,  1906,  1908,  1897,
    1915,  1927,  1932, -1838,  1661,  1344,  1345,  1905,  1686,  1685,
    2006,  1928,  2012,  1259,  2016,  1662,  2024,  1710,   495, -1833,
    2025,  2028,  2032,  2575,  2030,  1779,  2035,  1778,  2088,  2090,
    2082,  2092,  2102,  2108,   476,  2103,  2098,  2038,   496,  2965,
    2104,  2173,  2189,  2175,  2179,  2583,  2233,  1346,  1347,  2234,
    2259,   478,  2109,  2957, -1785, -1836,  2286,  2288,  2602,  2296,
    2017,  2018,  2315,  2051,  2239,  2052,   497,  2317,  2077,  2345,
    2735,  2302,  2332,  2351,  2318,  2349,  2367,  2539,  2078,  2372,
    2365,  1610,  2391,  1611,  1612,  2409,  2373,  1348,  2407,  2399,
    2411,  2578,   409,  1259,  2393,  2747,  2414,  2968,  1711,   498,
    1349,  2434,  2446,  2444,  2460,  2445,  2462,  2479,  1350,  2480,
    2484,  2263,  2492,  2490,  2499,  1351,  2504,  2356,  1419,  2355,
    2518,  1712,   544,  2500,  2523,  2526,  2519,  2529,  2525,  2531,
    2565,  2542,  2568,  2570,  2522,  2581,  2611,  2666,  2582,   562,
    1352,  2617,  1259,  2613,   499,  2674,  2677,  2619,  3129,  2675,
    2667,  2658,  2684,  2695,  2688,   479,   480,   481,  2690,   500,
     501,  2685,  2691,  2686,   482,  2703,  2736,  2716,  2720,   502,
    2719,  2734,  2733,  2813,  2588,  2749,   483,  2770,  2774,  2806,
    2776,  2781,   544,  2807,  2850,  2888,  2809,  2814,  2815,  2894,
    2816,  2817,  2763,  2765,  2841,  1713,  2910,   503,  2891,  2913,
    2914,  2915,  2916,  2992,  2911,  2917,  2920,   504,  2921,  2924,
     484,  2937,  2930,  2933,  1925,  2934,  2945,   562,  2946,  2958,
    2961, -1912,   488,  3125,   489,   490,   491,  2938,  2939,   505,
     492,  3079,   493,  3119,   506,  3195,  1919,  3168,  2949,  3198,
    3169,  3199,   507,  2954,   508,    21,  1259,  3204,   259,  3127,
     509,    80,   260,  1552,    38,    76,    75,   427,  1900,   447,
     761,  1546,  1886,  2566,  1533,  2554,  1150,  2698,  2751,  2562,
    3041,  2752,  3126,  2567,  2696,   495,  2547,  2922,  1125,  2818,
    1353,  2935,  2153,  2878,  1354,  2528,  1355,  3193,  2772,  2963,
    2521,  3190,  3197,  3173,  2952,  2732,   808,  2953,  2291,  3042,
    1742,  1563,  2973,  2974,  2975,  2976,  2977,  1108,  3043,  2979,
    2980,  2981,  2982,  2983,  2984,  2985,  2986,  2987,  2988,  2989,
    3170,   207,  2991,   497,  3172,  2886,  2993,  1582,  1926,   871,
    2289,  1678,  1674,  2470,  2468,  1284,   585,   917,   882,  1324,
    1699,  3003,  1724,  3005,  1332,  2001,   955,  3006,  2828,  2839,
    2295,  1377,  1389,  2022,  1743,   626,   498,  2306,  2305,  1739,
     978,  2040,  1010,  1775,  2047,  2912,  2038,  2321,  2331,  2329,
    1427,  2066,  1803,  2094,  2076,   694,  2348,  1835,  1050,  1836,
    2923,  1414,   476,  1051,  2787,  3206,  1913,  1840,  1910,  1307,
    2354,  2936,  1958,  1305,  1956,  2340,  2338,  2584,  1074,   478,
    2513,   499,  2511,  2361,  1977,  1975,  1338,  1337,  1726,  2069,
     663,  1418,   723,  2070,  2071,  1039,   500,   501,   626,  2072,
    2413,  1278,   562,  1516,  1153,  2959,   562,  2476,  2960,  2256,
    1793,  1965,  2955,  1891,  3067,  3068,   845,  1970,  1889,   562,
    2533,  2502,   544,  2343,  2673,  2746,  2573,   819,  2636,  2637,
    2638,  3076,  3142,  1541,   503,  1817,  3080,  3081,  2034,  2011,
    2966,  2228,  2967,  2745,   504,  2969,  2970,  2971,  2972,  1866,
    3162,     0,     0,  3128,     0,  2978,  3130,  3131,     0,     0,
       0,     0,     0,     0,     0,   562,   505,     0,  2990,     0,
     552,   506,     0,     0,     0,     0,     0,     0,     0,   507,
    3000,   508,     0,   479,   480,   481,     0,   509,     0,     0,
    3146,     0,   482,     0,     0,     0,     0,     0,     0,     0,
       0,  2639,  2640,  2641,   483,  3008,  3009,  3010,  3011,  3012,
    3013,  3014,  3015,  3016,  3017,  3018,  3019,  3020,  3021,  3022,
    3023,  3024,  3025,  3026,     0,     0,     0,     0,     0,     0,
       0,  3033,     0,     0,  1744,     0,     0,   552,   484,     0,
       0,   562,   562,   562,     0,  3046,     0,     0,     0,     0,
     488,     0,   489,   490,   491,     0,     0,  3047,   492,     0,
     493,     0,     0,     0,     0,     0,     0,   476,     0,     0,
       0,     0,     0,     0,     0,   533,   533,     0,  3062,  3063,
       0,     0,     0,     0,   478,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3075,     0,     0,   533,     0,     0,
       0,   626,   562,   495,     0,     0,     0,  3115,   536,   536,
       0,     0,     0,     0,     0,     0,   533,  1420,     0,  2642,
    2643,     0,  1856,     0,     0,  3132,     0,     0,     0,     0,
     536,     0,     0,  2644,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   533,     0,  3144,  2645,   536,
       0,   497,     0,     0,     0,     0,     0,     0,     0,     0,
     860,   860,     0,     0,  2646,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3175,     0,   536,     0,
       0,     0,   860,     0,   498,     0,     0,     0,   479,   480,
     481,     0,     0,     0,  3189,  3189,     0,   482,     0,     0,
       0,   860,     0,     0,     0,     0,     0,  3192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2647,     0,     0,     0,     0,     0,  3203,     0,     0,   499,
     860,     0,     0,     0,     0,   626,     0,     0,  2648,  2649,
    2650,     0,     0,   484,   500,   501,     0,     0,     0,     0,
       0,     0,     0,     0,  2651,   876,     0,   489,   490,   491,
       0,     0,     0,   492,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,     0,    96,     0,    97,     0,
       0,     0,   503,    98,     0,     0,     0,     0,     0,     0,
    1745,    99,   504,     0,     0,     0,   771,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   495,     0,
       0,     0,     0,   562,   505,     0,     0,     0,     0,   506,
       0,     0,     0,     0,     0,   100,   101,   507,     0,   508,
       0,     0,     0,     0,     0,   509,     0,     0,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,     0,     0,     0,   104,     0,  2652,     0,
       0,   562,     0,   562,     0,     0,     0,     0,     0,     0,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -824,     0,   537,   537,     0,   498,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
     107,     0,     0,   108,     0,   109,     0,   562,   537,   562,
       0,     0,     0,     0,     0,   110,  -824,     0,  -824,  -824,
    -824,  -824,  -824,  -824,  -824,  -824,  -824,   537,  -824,  -824,
    -824,     0,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,
    -824,  -824,   111,     0,     0,     0,     0,     0,  -824,   500,
     501,     0,     0,  -824,     0,   112,   537,  -824,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   562,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   626,     0,     0,     0,   114,     0,
       0,     0,     0,     0,     0,   115,     0,   504,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   771,     0,     0,     0,   119,     0,   120,   505,
       0,   121,     0,     0,   506,     0,  -824,  2119,     0,     0,
       0,     0,   507,     0,   508,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1591,     0,     0,  1592,     0,     0,
    1593,     0,     0,  1583,  1205,  1584,  1206,     0,  1594,     0,
       0,   626,   626,   626,     0,     0,   122,     0,   626,   626,
       0,   123,     0,   124,   626,   626,   626,     0,   626,     0,
       0,     0,     0,     0,   125,     0,     0,  -824,     0,     0,
       0,     0,  -824,  -824,  -824,     0,  -824,  -824,  -824,  -824,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1595,     0,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   626,     0,   127,     0,     0,
    1596,     0,     0,     0,   626,   626,   626,   626,   562,     0,
     562,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,     0,
       0,     0,   771,     0,     0,     0,   562,     0,     0,     0,
       0,   132,     0,   133,     0,     0,     0,     0,     0,     0,
     134,     0,     0,     0,   135,     0,     0,     0,  2196,     0,
       0,     0,     0,     0,   136,     0,     0,     0,     0,     0,
       0,  3082,     0,  2197,     0,     0,   137,     0,     0,     0,
       0,  1597,     0,     0,  2198,     0,  -824,   138,     0,  1598,
     562,     0,     0,     0,     0,     0,   139,     0,  2133,     0,
       0,   140,   141,  1599,     0,     0,     0,     0,   142,     0,
     143,     0,     0,     0,  2377,     0,  3083,     0,  3084,     0,
     144,     0,     0,     0,     0,  1752,     0,     0,     0,     0,
       0,     0,     0,     0,  -824,     0,  1600,     0,     0,     0,
       0,     0,     0,     0,     0,  -824,     0,     0,     0,     0,
       0,     0,  3085,   146,     0,     0,     0,  1601,     0,  1602,
       0,   147,     0,     0,     0,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,  3086,     0,     0,     0,     0,
       0,     0,     0,     0,  1603,     0,  1604,     0,  -824,     0,
       0,     0,     0,     0,   149,     0,     0,     0,  2137,   150,
     151,     0,     0,     0,  3087,     0,     0,  1605,     0,     0,
       0,     0,     0,     0,    95,     0,    96,     0,    97,  1606,
       0,     0,     0,    98,     0,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1607,  1608,
       0,     0,     0,     0,   626,     0,     0,     0,     0,     0,
       0,   474,     0,     0,   475,   100,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1609,     0,     0,     0,
     102,     0,     0,  1610,     0,  1611,  1612,  2141,     0,     0,
       0,   562,   103,   562,     0,  2199,   104,  3088,     0,     0,
    1613,     0,     0,     0,     0,  1614,     0,     0,     0,     0,
     105,     0,     0,     0,     0,     0,  2489,  3089,     0,     0,
       0,     0,     0,  1615,     0,     0,     0,     0,     0,  2200,
       0,     0,     0,   106,     0,     0,     0,     0,     0,  -268,
     107,     0,  3090,   108,     0,   109,   476,     0,     0,     0,
       0,     0,     0,  1616,     0,   110,     0,     0,     0,     0,
       0,     0,     0,   478,  3091,  1617,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,  3092,     0,     0,     0,     0,
       0,     0,  1851,     0,  3093,   112,     0,  1618,     0,  2201,
     113,     0,     0,     0,  2202,     0,     0,  1619,     0,     0,
       0,     0,     0,  1620,     0,     0,   771,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,     0,
       0,     0,  2546,  2546, -2156,   115,     0,     0,   116,   117,
    2203,     0,     0,     0,     0,     0,     0,     0,  2204,   118,
       0,     0,     0,     0,     0,     0,   119,     0,   120,     0,
    2205,   121,     0,     0,     0,     0,   626,   479,   480,   481,
       0,     0,     0,     0,     0,     0,   482,     0,   357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   483,     0,
       0,     0,     0,     0,     0,  1753,     0,     0,     0,  2206,
       0,     0,     0,     0,     0,     0,   122,     0,  2207,     0,
       0,   123,     0,   124,     0,     0,     0,     0,     0,  -265,
       0,     0,   484,   485,   125,     0,     0,     0,     0,   486,
       0,   487,     0,     0,   488,     0,   489,   490,   491,     0,
       0,     0,   492,   771,   493,     0,     0,     0,     0,     0,
       0,   494,     0,   126,     0,  2208,     0,     0,     0,  2209,
     771,     0,   771,   771,     0,     0,     0,   127,   771,     0,
       0, -2156,     0,     0,     0,     0,     0,     0,   626,     0,
       0,     0,     0,     0,   544,     0,     0,   495,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,   496,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,     0,   133,     0,   771,   771,     0,     0,     0,
     134,     0,     0,     0,   135,   497,     0,     0,     0,     0,
     771,     0,     0,     0,   136,     0,  2701,     0,     0,  2701,
       0,     0,     0,     0,     0,     0,   137,     0,  2701,  2701,
    2701,  2709,     0,     0,     0,     0,   358,   138,   498,     0,
       0,     0,   626,     0,     0,   544,   139,     0,     0,     0,
       0,   140,   141,     0,   476,     0,     0,     0,   142,     0,
     143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   478,     0,    95,     0,    96,     0,    97,     0,     0,
       0,     0,    98,   499,   145,     0,   771,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,   500,   501,
     544,     0,     0,   146,     0,     0,     0,     0,     0,     0,
       0,   147,     0,   771,   771,     0,   148,   771,     0,     0,
       0,     0,   771,   771,   100,   101,     0,     0,     0,     0,
       0,     0,   544,     0,     0,     0,   503,     0,     0,   102,
       0,     0,     0,     0,   149,     0,   504,     0,     0,   150,
     151,   103,     0,   771,     0,   104,     0,     0,     0,     0,
       0,  2810,     0,     0,     0,     0,     0,     0,   505,   105,
       0,     0,     0,   506,     0,   479,   480,   481,     0,     0,
     771,   507,   644,   508,   482,     0,     0,     0,     0,   509,
       0,     0,   106,     0,     0,     0,   483,     0,     0,   107,
       0,     0,   108,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,  1190,     0, -2156,     0,     0,
   -2156,     0,  1191, -2156,     0,     0,     0,     0,     0,     0,
     484, -2156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   488,     0,   489,   490,   491,     0,     0,     0,
     492,     0,   493,     0,   112,     0, -2035,     0, -2035,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   771,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -2156,     0,     0,   114,     0,     0,
       0,     0,     0,     0,   115,   495,     0,   116,   117,     0,
       0,     0,     0, -2156,     0,     0,     0,     0,   118,    95,
       0,    96,     0,    97,     0,   119,     0,   120,    98,     0,
     121,     0,     0,     0,   626,     0,    99,     0,     0,   626,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   771,
       0,     0,     0,   497,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,     0,   122,     0,     0,     0,     0,
     123,     0,   124,     0,     0,   102,   498,     0,     0,     0,
       0,     0,     0,   125,     0,     0,     0,   103,     0,     0,
       0,   104,     0,     0, -2156,     0,     0,     0,     0,     0,
       0,  1192, -2156,     0,     0,   105,     0,     0,     0,     0,
       0,     0,   126,     0,     0,   626, -2156,     0,     0,   626,
       0,   499,     0,     0,     0,     0,   127,     0,   106,     0,
       0,     0,     0,     0,     0,   107,   500,   501,   108,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0, -2156,
     110,     0,     0,     0,     0,   128,   129,   130,     0, -2035,
       0,     0,     0,     0,     0,     0,     0,   131,     0,     0,
   -2156,     0, -2156,     0,   503,     0,     0,   111,     0,     0,
     132,  1193,   133,     0,   504,     0,     0,     0,     0,   134,
     112,     0,     0,   135,     0,   113,     0, -2156,     0, -2156,
       0,     0,     0,   136,     0,     0,   505,     0,     0,     0,
       0,   506,     0,     0,     0,   137,     0,     0,     0,   507,
   -2156,   508,     0,   114,     0,     0,   138,   509,     0,     0,
     115,     0, -2156,   116,   117,   139,     0,     0,     0,     0,
     140,   141,     0,     0,   118, -2035,     0,   142,     0,   143,
       0,   119,     0,   120,     0,     0,   121,     0,     0,   144,
       0, -2156, -2156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1085,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -2156,
       0,     0,   146,     0,     0,     0, -2156,     0, -2156, -2156,
     147,   122,     0,     0,     0,   148,   123,     0,   124,     0,
       0,     0,     0, -2156,     0,     0,     0,     0, -2156,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   149,     0,     0, -2156,     0,   150,   151,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   127,     0,     0,     0, -2156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -2037, -2156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,   129,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,     0,     0,     0,     0,     0,     0,
   -2156,     0,     0,     0,     0,     0,   132,     0,   133,     0,
   -2156,     0,     0,     0,     0,   134, -2156,     0,     0,   135,
       0,     0,     0,     0,     0,     0,     0,     0,   264,   136,
     265,   644,     0,     0,     0,   266,     0,     0,     0,     0,
       0,   137,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,   138,     0,     0,     0,     0,     0,     0,     0,
       0,   139,     0,     0,     0,     0,   140,   141,     0,     0,
       0,     0,     0,   142,     0,   143,     0,   268,   269,     0,
       0,     0,     0,     0,     0,   144,     0,     0,     0,     0,
       0,     0,   270,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   271,     0,     0,     0,   272,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   146,     0,
       0,     0,   273,     0,     0,     0,   147,     0,     0,     0,
       0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   275,     0,   276,     0,   149,
       0,     0,     0,     0,   150,   151,     0,     0,   277,     0,
       0,   278,   279,   280,   281,   282,   283,   284,   285,     0,
     286,   287,   288,     0,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   300,     0,     0,
       0,     0,   301,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     302,     0,     0,     0,     0,     0,     0,   303,     0,     0,
     304,   305,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   306,     0,     0,     0,     0,     0,     0,   307,     0,
     308,     0,     0,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   474,     0,
       0,   475,     0,     0, -2074, -2074, -2074,     0,     0,     0,
       0,     0,   938,     0,     0,     0,     0,     0,   310,     0,
       0,     0,     0,   311,     0,   312,     0,     0,     0,   474,
       0,     0,   475,     0,     0,     0,   313,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1088,     0,     0,     0, -2074, -1088,
       0,     0, -1088,     0,     0,   314,     0,     0,     0, -1088,
   -1088,     0,     0,     0,     0,     0,     0,     0,     0,   315,
       0,     0,     0,   476,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1088,     0, -1088,     0,     0,
     478,     0,     0,     0,     0,     0,     0,     0,   316,     0,
       0,     0,     0,     0,   476,     0,     0,     0,     0,     0,
     317,     0,     0, -1088,     0,     0,     0,     0,     0,     0,
       0,   478,     0,     0,     0,   318,     0,     0,     0,     0,
       0,     0,   319,     0,     0,     0,   320,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   321,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   322, -2074,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   323,
     939,     0,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,     0,   325,   326,     0,     0,     0,     0,     0,
     327, -1088,   328,     0,   479,   480,   481,     0,     0,     0,
       0,     0,   329,   482,     0,     0,     0,     0,     0, -2074,
   -2074,     0,     0,     0,     0,   483,   330,     0,     0,     0,
       0,     0,     0, -1088,     0,   479,   480,   481,     0,     0,
       0,     0,     0,     0,   482,   331,   940,     0,     0,     0,
       0,     0,     0,   332,     0, -1088,   483,     0,   333,   484,
     485, -2074, -2074,     0,     0,     0,   486,     0,   487,     0,
       0,   488,     0,   489,   490,   491,     0,     0,     0,   492,
       0,   493,     0,     0,     0,     0,   334,     0,   494,     0,
     484,   485,     0,     0,     0,     0,     0,   486, -1088,   487,
       0, -2074,   488,     0,   489,   490,   491,     0,     0,   941,
     492, -1088,   493,     0, -2074,     0,     0,     0,     0,   494,
   -1088,     0, -2074,     0,   495,     0,     0,     0,     0, -2074,
       0,     0,     0,     0,     0,   942,     0,     0,     0,     0,
       0,     0,     0,     0,   496,     0,   474,     0,     0,   475,
   -1088,     0,     0,     0, -2074,   495,     0,     0,     0,     0,
     938,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1088,   497,     0,     0,   496,     0, -1010,     0,     0,
   -1010,     0,     0,     0, -1088,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   497,     0,   498,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   803,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   476,     0,     0,     0, -1088,   498, -1088, -1088,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   478,     0,
     499,     0, -1088,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1010,     0,     0,   500,   501, -2041,     0,     0,
       0,     0,     0,     0,     0, -1088,     0,     0,     0, -1010,
       0,   499,     0,     0,     0,     0,     0,     0,     0,     0,
     943,     0,   944,     0, -2074,     0,   500,   501, -2074,     0,
   -2074,   945,   946,   503,     0,   947,   948,     0,     0,     0,
       0,     0,     0,   504,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   939,     0,
       0,     0,     0,     0,   503,   505,     0,     0,     0,     0,
     506,     0,     0,     0,   504,     0,     0,     0,   507, -1088,
     508,     0,   479,   480,   481,     0,   509,     0,     0,     0,
   -1088,   482,     0,     0,     0,     0,   505,     0,     0,     0,
       0,   506,     0,   483,     0,     0,     0,     0,     0,   507,
   -1088,   508,     0, -1010, -1010, -1010,     0,   509,     0,     0,
       0,     0, -1010,     0,   940,   474,     0,     0,   475,     0,
       0,     0,     0,     0, -1010,     0,     0,   484,   485,     0,
       0,     0,     0,     0,   486,     0,   487,     0,     0,   488,
       0,   489,   490,   491,     0,     0,     0,   492,     0,   493,
       0,     0,     0,     0,     0,     0,   494,     0, -1010, -1010,
       0,     0,     0,     0,     0, -1010,     0, -1010,     0,     0,
   -1010,     0, -1010, -1010, -1010,     0,     0,   941, -1010,     0,
   -1010,     0,     0,     0,     0,     0,     0, -1010,     0,     0,
       0,     0,   495,     0,     0,     0,     0,     0,     0,     0,
     476,     0,     0,   942,     0,     0,     0,     0,     0,     0,
       0,     0,   496,     0,     0,     0,     0,   478,     0,     0,
       0,     0,     0, -1010,     0,     0,     0,     0, -1010,   474,
       0,     0,   475,     0,     0,     0,     0,     0,     0,     0,
     497,     0,     0, -1010,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   474,
       0,     0,   475,     0,     0,     0,     0,     0,     0,     0,
       0, -1010,     0,   498,     0,     0,     0,     0,  1432,     0,
       0,     0,     0, -2041,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1010,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   476,     0,     0,     0,   499,     0,
       0,   479,   480,   481,     0,     0,   702,     0,     0,     0,
     482,   478,     0,   500,   501,     0,     0,     0,     0,     0,
       0,     0,   483, -1010,   476,     0,     0,     0,     0, -1010,
       0,     0,     0,     0,     0,     0,     0,     0,   943,     0,
     944,   478,     0,     0, -1010, -1010,     0,     0,     0,   945,
     946,   503,     0,   947,   948,     0,   484,   485,     0,     0,
       0,   504,     0,   486,     0,   487,     0,     0,   488,     0,
     489,   490,   491,     0,     0,     0,   492,     0,   493,     0,
       0,     0, -1010,   505,     0,   494,     0,     0,   506,     0,
       0,     0, -1010,     0,     0,     0,   507,     0,   508,     0,
   -1010,     0,     0,     0,   509,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1010,   479,   480,   481,     0, -1010,
       0,   495, -2041,     0,   482,     0,     0, -1010,     0, -1010,
       0,     0,     0,     0,     0, -1010,   483,     0,     0,     0,
       0,   496,     0,     0,     0,   479,   480,   481,     0,     0,
       0,     0,     0,     0,   482,     0,     0,   474,     0,     0,
     475,     0,     0,     0,     0,     0,   483,     0,     0,   497,
     484,   485,     0,     0,     0,     0,     0,   486,     0,   487,
       0,     0,   488,     0,   489,   490,   491,     0,     0,     0,
     492,     0,   493,     0,     0,     0,     0,     0,     0,   494,
     484,   485,   498,     0,     0,     0,     0,   486,     0,   487,
       0,     0,   573,     0,   489,   490,   491,     0,     0,     0,
     492,     0,   493,     0,     0,     0,     0,     0,     0,   494,
       0,     0,     0,     0,     0,   495,     0,     0,     0,     0,
       0,     0,   476,     0,     0,     0,     0,   499,     0,     0,
       0,     0,     0,     0,   627,   496,     0,     0,     0,   478,
       0,     0,   500,   501,     0,   495,     0,     0,     0,     0,
     574,   474,     0,     0,   475,     0,     0,     0,     0,     0,
       0,     0,     0,   497,     0,   496,     0,     0,     0,     0,
       0,     0,     0,  1433,     0,     0,     0,     0,     0,     0,
     503,     0,     0,     0,  1434,     0,     0,     0,     0,     0,
     504,   474,     0,   497,   475,     0,   498,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   505,     0,     0,     0,     0,   506,     0,     0,
       0,     0,     0,     0,     0,   507,   498,   508,     0,     0,
       0,     0,     0,   509,     0,     0,   476,     0,     0,     0,
       0,   499,     0,   479,   480,   481,     0,     0,     0,     0,
       0,     0,   482,   478,     0,     0,   500,   501,     0,     0,
       0,     0,     0,     0,   483,     0,   703,     0,     0,     0,
       0,   499,     0,     0,     0,     0,   476,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   500,   501,     0,     0,
       0,     0,     0,   478,   503,     0,     0,     0,   484,   485,
     474,     0,     0,   475,   504,   486,     0,   487,     0,     0,
     488,     0,   489,   490,   491,     0,     0,     0,   492,     0,
     493,     0,     0,     0,   503,     0,   505,   494,     0,     0,
       0,   506,     0,     0,   504,     0,     0,     0,     0,   507,
       0,   508,     0,     0,     0,     0,     0,   509,     0,     0,
       0,     0,     0,     0,     0,     0,   505,   479,   480,   481,
       0,   506,     0,   495,     0,     0,   482,     0,     0,   507,
       0,   508,     0,     0,     0,     0,     0,   509,   483,     0,
       0,     0,     0,   496,     0,   476,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   479,   480,   481,
       0,     0,   478,     0,     0,     0,   482,     0,     0,     0,
       0,   497,   484,   485,     0,     0,     0,     0,   483,   486,
       0,   487,     0,     0,   488,     0,   489,   490,   491,     0,
       0,     0,   492,     0,   493,     0,     0,     0,     0,     0,
       0,   494,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     0,   484,   485,   474,     0,     0,   475,     0,   486,
       0,   487,     0,     0,   488,     0,   489,   490,   491,     0,
       0,     0,   492,     0,   493,     0,     0,   495,     0,     0,
       0,   494,     0,     0,     0,     0,     0,     0,     0,   499,
       0,     0,     0,     0,     0,     0,     0,   496,     0,     0,
       0,     0,     0,     0,   500,   501,   479,   480,   481,     0,
       0,     0,     0,     0,     0,   482,     0,   495,     0,     0,
       0,     0,   574,     0,     0,   497,     0,   483,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   496,     0,   476,
       0,     0,   503,     0,  1073,     0,     0,     0,     0,     0,
       0,     0,   504,     0,     0,     0,   478,     0,   498,     0,
       0,   484,   485,   474,     0,   497,   475,     0,   486,     0,
     487,     0,     0,   488,   505,   489,   490,   491,     0,   506,
       0,   492,     0,   493,     0,     0,     0,   507,     0,   508,
     494,     0,     0,     0,     0,   509,     0,     0,   498,     0,
       0,     0,     0,   499,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   500,   501,
       0,     0,     0,     0,     0,     0,   495,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   848,     0,   499,     0,     0,   496,     0,   476,     0,
       0,     0,     0,     0,     0,     0,   503,     0,   500,   501,
     479,   480,   481,     0,  1081,   478,   504,     0,     0,   482,
       0,     0,   474,     0,   497,   475,     0,     0,     0,     0,
       0,   483,     0,     0,     0,     0,     0,     0,   505,     0,
       0,     0,     0,   506,     0,     0,   503,     0,     0,     0,
       0,   507,     0,   508,     0,     0,   504,   498,     0,   509,
       0,  1256,     0,     0,   475,   484,   485,     0,     0,     0,
       0,     0,   486,     0,   487,     0,     0,   488,   505,   489,
     490,   491,     0,   506,     0,   492,     0,   493,     0,     0,
       0,   507,     0,   508,   494,     0,     0,     0,     0,   509,
       0,     0,   499,     0,     0,     0,     0,   476,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   500,   501,   479,
     480,   481,     0,     0,   478,     0,     0,     0,   482,     0,
     495,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     483,     0,     0,     0,     0,     0,   476,     0,     0,     0,
     496,     0,     0,     0,     0,   503,     0,     0,     0,     0,
       0,     0,     0,   478,     0,   504,     0,     0,     0,     0,
       0,     0,     0,     0,   484,   485,     0,     0,   497,     0,
       0,   486,     0,   487,     0,     0,   488,   505,   489,   490,
     491,     0,   506,     0,   492,     0,   493,     0,     0,     0,
     507,     0,   508,   494,     0,     0,     0,     0,   509,     0,
       0,   498,     0,     0,     0,     0,  2113,  2114,  2115,  2116,
    2117,  2118,     0,     0,     0,     0,     0,     0,   479,   480,
     481,     0,     0,     0,     0,     0,     0,   482,     0,   495,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   483,
       0,     0,     0,     0,     0,     0,   499,     0,  2120,   496,
     988,   989,  2121,  2122,  2123,  2124,  2125,   479,   480,   481,
       0,   500,   501,     0,     0,     0,   482,     0,     0,     0,
       0,     0,     0,   484,   485,     0,     0,   497,   483,     0,
     486,     0,   487,     0,     0,   488,     0,   489,   490,   491,
       0,     0,     0,   492,     0,   493,  2126,     0,     0,   503,
       0,     0,   494,     0,     0,     0,     0,     0,     0,   504,
     498,     0,   484,   485,     0,     0,     0,     0,     0,   486,
       0,   487,     0,     0,   488,     0,   489,   490,   491,     0,
       0,   505,   492,     0,   493,     0,   506,     0,   495,     0,
       0,   494,     0,     0,   507,     0,   508,     0,     0,  1820,
       0,     0,   509,     0,     0,   499,     0,     0,   496,     0,
       0,     0,     0,     0,     0,  2127,  2128,  2129,  2130,  2131,
     500,   501,   997,   998,     0,     0,     0,   495,     0,     0,
       0,     0,     0,     0,     0,     0,   497,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   496,     0,     0,
       0,     0,     0,     0,     0,     0,  2132,     0,   503,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   504,   498,
       0,     0,     0,     0,     0,   497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     505,     0,     0,     0,     0,   506,     0,     0,     0,  2730,
       0,     0,     0,   507,     0,   508,     0,     0,   498,     0,
       0,   509,     0,     0,   499,     0,     0,     0,  2134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   500,
     501,  -457,     0,     0,  -457,     0,     0,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,     0,     0,     0,     0,
       0,     0,     0,   499,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2136,     0,   503,   500,   501,
    -457,     0,  -457,     0,     0,     0,  2138,   504,     0,     0,
    -457,     0,  -457,  -457,  -457,  -457,  -457,  -457,  -457,     0,
       0,  2139,     0,     0,     0,     0,     0,     0,     0,   505,
       0,     0,     0,     0,   506,     0,   503,     0,     0,     0,
       0,     0,   507,     0,   508,     0,   504,     0,     0,     0,
     509,     0,     0,     0,     0,     0,     0,     0,  -457,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   505,     0,
       0,     0,     0,   506,     0,     0,     0,     0,     0,     0,
       0,   507,     0,   508,     0,     0,     0,     0,     0,   509,
       0,     0,     0,     0,  2142,  2143,  2144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -457,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1111,     0,     0,     0,  -457,  -457,  -457,
    -457,  -457,     0,     0,  -457,  -457,     0,     0,  -457,     0,
       0,     0,     0,     0,  -457,     0,  -457,     0,     0,     0,
       0,     0,  -457,     0,     0,     0,     0,  -457,     0,     0,
    -457,     0,     0,     0,     0,     0,  1110,     0,  -457,     0,
       0,     0,     0,     0,     0,     0,  2146,  2147,  2148,     0,
       0,     0,  -457,     0,     0,  -457,  -457,     0,     0,     0,
       0,  -457,     0,  -457,     0,     0,     0,     0,     0,     0,
       0,     0,  -457,  -457,     0,  -457,  -457,  -457,  -457,  -457,
    -457,  -457,     0,     0,     0,     0,  -457,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -457,     0,     0,     0,     0,     0,     0,   475,     0,     0,
       0,  -457,     0,  -457,     0,     0,     0,  -457,     0,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,     0,     0,     0,     0,
       0,     0,  -457,     0,  -457,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -457,  -457,     0,   639,
       0,     0,     0,     0,     0,  -457,     0,     0,  -457,     0,
       0,     0,     0,     0,     0,  -457,     0,     0,     0,     0,
       0,     0,     0,  -457,     0,  -457,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   476,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -457,     0,     0,   478,     0,     0,     0,
    -457,     0,  -457,  -457,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -457,     0,     0,     0,     0,
    1111,     0,  -457,     0,  -457,  -457,  -457,  -457,  -457,     0,
       0,  -457,  -457,     0,  -457,   475,  -457,  -457,  -457,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -457,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -457,     0,     0,     0,     0,
    -457,     0,     0,     0,     0,     0,     0,   639,     0,  -457,
       0,     0,  -457,     0,  -457,     0,     0,     0,  -457,  -457,
       0,     0,     0,     0,     0,  -457,     0,     0,     0,   640,
     479,   480,   481,     0,     0,     0,     0,  -457,     0,   482,
       0,     0,     0,     0,  -457,     0,     0,   476,  -457,  -457,
    -457,   483,     0,     0,     0,     0,     0,  -457,     0,     0,
       0,     0,  -457,     0,   478,     0,     0,  -457,     0,  -457,
       0,     0,     0,     0,     0,     0,  1104,     0,     0,     0,
       0,     0,     0,     0,   641,   484,   642,     0,     0,  -457,
       0,     0,     0,     0,     0,     0,     0,   643,     0,   489,
     490,   491,     0,     0,  -457,   492,     0,   493,     0,     0,
       0,     0,  -457,     0,     0,  -457,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -457,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -457,     0,     0,     0,     0,
     495,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   640,   479,   480,
     481,     0,     0,     0,     0,     0,     0,   482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   483,
       0,     0,     0,     0,     0,     0,     0,     0,   497,     0,
       0,  -457,     0,  -457,  -457,  -457,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   641,   484,   642,     0,     0,     0,     0,     0,
       0,   498,     0,     0,  -457,   488,     0,   489,   490,   491,
       0,     0,     0,   492,     0,   493,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -457,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -457,     0,   499,     0,     0,     0,
     476,     0,     0,     0,     0,  -457,  -457,  -457,   495,     0,
       0,   500,   501,     0,     0,     0,     0,   478,     0,  -457,
       0,     0,     0,     0,     0,     0,  -457, -2156,     0,     0,
       0,     0,     0,  1104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   503,
       0,     0,     0,     0,     0,     0,   497,     0,     0,   504,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1301,     0,     0,     0,     0,     0,     0,     0,
       0,   505,     0,     0,     0,     0,   506,     0,     0,   498,
    2111, -1301,     0,     0,   507,   644,   508,     0,     0,     0,
       0,     0,   509,     0,     0,     0,  2112,     0,     0,  2113,
    2114,  2115,  2116,  2117,  2118,  2119,     0,     0,     0,     0,
       0,   479,   480,   481,     0,     0,     0,     0,     0,     0,
     482,     0,     0,     0,   499,     0,     0,     0,     0,     0,
       0,     0,   483,     0,     0,     0,     0,     0,     0,   500,
     501,  2120,     0,   988,   989,  2121,  2122,  2123,  2124,  2125,
       0,     0,     0,     0,     0, -2156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   484,   523,     0,     0,
       0,     0,     0,   486,     0,   487,     0,   503,   488,     0,
     489,   490,   491,     0,     0,     0,   492,   504,   493,  2126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -1301,     0,     0,     0,     0,     0,     0,     0,     0,   505,
       0,     0,     0,     0,   506,     0,     0,     0,     0, -1301,
       0,     0,   507,   644,   508,     0,     0,     0,     0,     0,
     509,   495,  2852,     0,     0,  2853,     0,     0,  2854,  2113,
    2114,  2115,  2116,  2117,  2118,  2855,  2856,     0,     0,     0,
       0,   496,     0,     0,     0,     0,     0,     0,  2127,  2128,
    2129,  2130,  2131,     0,     0,   997,   998,     0,     0,     0,
       0,  1583,     0,  1584,     0,     0,     0,     0,     0,   497,
       0,  2120,     0,   988,   989,  2121,  2122,  2123,  2124,  2125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   498,   435,     0,     0,  2133,     0,     0,     0,
       0,     0, -2128,     0,     0,     0,     0,     0,     0,  2126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   476,     0,     0,   499,     0,     0,
       0,  2134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   478,   500,   501,     0,     0,     0,  2857,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2135,     0,     0,     0,     0,  2127,  2128,
    2129,  2130,  2131,     0,     0,   997,   998,     0,  2136,  2858,
     503,     0,   525,     0,     0,  2859,  2137,  2860,     0,  2138,
     504,     0,     0, -2074,     0,     0,     0,     0,  2861,     0,
       0,  2862,     0,     0,  2139,     0,     0,     0,     0,  2132,
       0,     0,   505,     0,     0,     0,     0,   506,     0,  2140,
       0,     0,     0,   435,     0,   507,  2133,   508,     0,     0,
       0,     0,     0,   509,  2863,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2864,   479,   480,   481,     0,     0,
       0,     0,     0,     0,   482,     0,     0,  2865,     0,     0,
       0,     0,     0,     0,     0,     0,   483,     0,     0,     0,
       0,  2134,     0,     0,     0,  2141,     0,  2142,  2143,  2144,
       0,     0,  2866,     0,  1604,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     484,   523,     0,  2867,     0,  1605,     0,   486,  2145,   487,
       0,     0,   488,     0,   489,   490,   491,  2868,  2136,     0,
     492,     0,   493,     0,     0,     0,  2137,     0,     0,  2138,
    -454,     0,     0,     0,     0,     0,     0,     0,   476,     0,
       0,     0,     0,     0,  2139,     0,  2869,     0, -2128,     0,
       0,     0,     0,     0,     0,   478,     0,     0,     0,  2146,
    2147,  2148,     0,     0,     0,   495,     0,     0,     0,     0,
       0,     0,     0,  2149,  2870,     0,     0,     0,     0,     0,
    1851,  1610,     0,  1611,  1612,   496,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2871,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   497,     0,  2141,     0,  2142,  2143,  2144,
       0,     0,     0,     0,     0,     0,     0,   476,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   478,   476,   498,     0,     0,     0,
       0,  2872,     0,     0,     0,     0,     0,     0,     0,   479,
     480,   481,   478,     0,     0,  2873,     0,     0,   482,     0,
    -718,     0,     0,     0,     0,     0,  2874,     0,     0,     0,
     483,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   499,     0,     0,     0,  2875,     0,     0,     0,  2146,
    2147,  2148,     0,     0,     0,     0,   500,   501,     0,     0,
       0,     0,     0,  2149,   484,   523,     0,     0,  2876,     0,
    1851,   486,     0,   487,     0,     0,   488,     0,   489,   490,
     491,  1237,     0,     0,   492,     0,   493,     0,     0,     0,
       0,     0,   524,     0,   503,     0,   525,   526,   479,   480,
     481,     0,     0,     0,   504,     0,     0,   482,     0,     0,
       0,     0,     0,     0,     0,     0,   479,   480,   481,   483,
       0,     0,     0,     0,     0,   482,   505,     0,     0,   495,
       0,   506,     0,     0,     0,     0,     0,   483,     0,   507,
       0,   508,     0,     0,     0,     0,     0,   509,     0,   496,
       0,     0,     0,   484,   523,     0,     0,     0,     0,     0,
     486,     0,   487,     0,     0,   488,     0,   489,   490,   491,
       0,   484,   523,   492,     0,   493,     0,   497,   486,     0,
     487,     0,     0,   488,     0,   489,   490,   491,     0,     0,
       0,   492,     0,   493,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,     0,   495,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   495,     0,   496,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   499,   496,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   497,     0,     0,     0,
     500,   501,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   476,     0,     0,   497,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1936,     0,     0,   478,   498,
       0,     0,     0,     0,     0,     0,   524,     0,   503,     0,
     525,   526,     0,     0,     0,     0,     0,   498,   504,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   476,     0,     0,     0,     0,     0,     0,
     505,     0,     0,     0,   499,   506,     0,     0,     0,     0,
     478,     0,     0,   507,     0,   508,     0,     0,     0,   500,
     501,   509,   499,     0,     0,     0,     0,  1939,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   500,   501,     0,
       0,     0,     0,     0,     0,  1941,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   524,     0,   503,     0,   525,
     526,     0,   479,   480,   481,     0,     0,   504,     0,     0,
       0,   482,     0,   524,     0,   503,     0,   525,   526,     0,
       0,     0,     0,   483,     0,   504,     0,     0,     0,   505,
       0,     0,     0,     0,   506,     0,   476,     0,     0,     0,
       0,     0,   507,     0,   508,     0,     0,   505,     0,     0,
     509,     0,   506,   478,   479,   480,   481,   484,   523,     0,
     507,     0,   508,   482,   486,     0,   487,     0,   509,   488,
       0,   489,   490,   491,     0,   483,     0,   492,     0,   493,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   484,
     523,     0,     0,     0,     0,     0,   486,     0,   487,     0,
       0,   488,   495,   489,   490,   491,     0,     0,     0,   492,
       0,   493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   496,     0,     0,     0,     0,     0,     0,     0,
       0,   476,     0,     0,     0,     0,     0,   479,   480,   481,
       0,     0,     0,     0,     0,     0,   482,     0,   478,     0,
     497,     0,     0,     0,   495,     0,     0,     0,   483,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   496,     0,     0,     0,     0,     0,
       0,     0,     0,   498,     0,     0,     0,     0,     0,     0,
       0,     0,   484,   523,     0,     0,     0,     0,     0,   486,
       0,   487,   497,     0,   488,     0,   489,   490,   491,     0,
       0,     0,   492,     0,   493,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   499,     0,
       0,     0,     0,     0,     0,   498,     0,     0,     0,     0,
       0,     0,     0,   500,   501,     0,     0,     0,     0,     0,
       0,     0,   479,   480,   481,     0,     0,   495,     0,     0,
       0,   482,     0,     0,     0,     0,     0,     0,  1961,     0,
       0,     0,     0,   483,     0,     0,     0,   496,     0,   524,
     499,   503,     0,   525,   526,     0,     0,     0,     0,     0,
       0,   504,     0,     0,     0,   500,   501,     0,     0,     0,
       0,     0,     0,     0,     0,   497,     0,   484,   523,     0,
       0,     0,     0,   505,   486,     0,   487,     0,   506,   488,
       0,   489,   490,   491,     0,     0,   507,   492,   508,   493,
       0,   524,  3179,   503,   509,   525,   526,     0,   498,     0,
       0,     0,     0,   504,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   505,     0,     0,     0,     0,
     506,     0,   495,     0,     0,     0,     0,     0,   507,     0,
     508,     0,     0,   499,     0,     0,   509,     0,     0,     0,
       0,     0,   496,     0,     0,     0,     0,     0,   500,   501,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     497,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   503,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   504,     0,     0,     0,
       0,     0,     0,   498,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   505,     0,
       0,     0,     0,   506,     0,     0,     0,     0,     0,     0,
       0,   507,     0,   508,     0,     0,     0,     0,     0,   509,
       0,     0,     0,     0,     0,     0,     0,     0,   499,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   500,   501,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   503,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   504,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   505,     0,     0,     0,     0,   506,     0,
       0,     0,     0,     0,     0,     0,   507,     0,   508,     0,
       0,     0,     0,     0,   509
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2775)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     225,   226,   227,   348,   555,   230,   390,    80,   475,   436,
    1362,   438,    44,   364,   441,   730,   731,   732,   566,   370,
     444,  1586,  1314,  1075,  1589,   222,   352,  1015,  1295,   254,
     345,   228,  1643,  1864,   354,  1851,   697,   377,   502,  1882,
    1092,   688,   362,  1488,  1853,  1857,  1657,   365,  1857,   675,
    1857,   562,  1422,   362,   485,  1448,   562,   377,  1782,   341,
     378,   214,  2527,   844,    17,  2018,   848,  1888,   377,  1343,
       1,   933,    22,   854,     6,     9,     6,  2106,  2612,  1470,
    2203,  2204,     1,     6,  1839,     1,  2188,     9,   639,    28,
      63,     9,   523,    17,  1368,    49,     6,  1748,     1,    50,
      95,   116,     9,  1377,    68,    63,    32,     1,   913,   123,
       0,    78,   135,    50,   145,     1,    96,   195,   666,  1290,
     626,    21,  1204,     7,   920,   980,  1487,   104,    61,    21,
    1212,   920,   937,   119,    63,     9,    80,   196,   101,    32,
     157,  1447,    69,  2172,  1590,    96,   928,   169,  1907,  1320,
     177,    31,   266,    78,   959,    41,    42,    43,    44,    45,
     119,  1916,  1917,  1918,    78,   427,  2202,   417,  1923,  1924,
     246,    98,    99,   820,   105,    71,  1931,   134,   223,  2800,
     139,     9,   693,  1038,   502,   124,   263,   693,   413,    63,
     189,   344,    72,   346,    74,   977,   135,   340,    84,    85,
     425,  2679,   259,    33,   134,   266,   431,   432,  1013,   434,
     641,   642,  1823,  1824,   439,   440,   105,   106,   371,   444,
     111,   374,   296,    51,   209,  1980,   379,  1398,   196,   454,
     340,   456,   616,   642,  1989,   345,   145,  1992,  2503,   703,
     393,   787,  1509,   179,   354,   177,   190,   246,   171,   444,
     285,   220,   362,   219,   208,   134,   255,   539,  2092,   254,
     347,   389,   392,   256,   154,   279,   452,   377,   158,  2579,
     216,   253,     8,   335,     6,    28,   447,   254,    78,   112,
     338,   275,   340,   603,  3058,   343,  1457,   221,     0,   119,
     348,   495,   554,  2737,   614,   112,   647,   184,     8,  1081,
    3074,   233,    38,   233,   254,   317,   364,  2430,   370,   513,
     233,   822,   370,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   706,   197,  2768,   219,     6,   254,    38,   341,
     220,   393,   756,   279,   392,   184,   394,   963,   452,   262,
     250,   768,   324,   529,   234,   235,  2375,   279,   347,   279,
     372,   349,   614,   237,   238,  2189,   279,   289,   529,   289,
    2670,   359,  2013,   558,  2015,   685,   289,     9,   366,   367,
     690,   124,   279,   296,   258,   485,   685,  2605,    63,   507,
     316,   524,   525,   526,   851,   703,   421,   898,   386,   263,
    1783,   452,  2800,   140,   825,   275,   299,   144,    50,   338,
     553,   285,   279,    40,   373,   233,   372,   296,   318,    78,
    2231,   564,   392,   523,   524,   525,   526,   297,   223,   477,
     507,   551,   496,   314,   351,   223,    50,   337,    78,   313,
    2695,    78,    78,   427,   181,   697,   323,   400,   266,  2541,
     268,   392,   519,   557,   437,   389,   346,   557,   380,   279,
     380,   279,   497,  3074,  2682,   392,   194,   380,   889,  1240,
    1086,   289,  1775,   195,   279,  2308,   524,   525,   526,  1331,
     501,   438,  1334,   549,   360,   502,  1024,   366,   372,  1261,
     558,   361,  2241,   373,   501,   122,  2800,  1933,   546,   375,
    2519,   549,  2957,   603,  2249,  2531,   234,  1668,  1804,   558,
     557,   233,   466,  2968,   614,   491,   483,  1053,   340,    62,
     496,   761,    65,   438,   512,  1311,   501,  2351,    71,  2997,
    1881,   484,  1311,   426,   438,   409,   458,   558,   458,   754,
       0,   498,   364,   848,   557,   458,   558,   762,   370,   503,
     458,   766,   557,   558,   558,   441,  1628,   279,   745,  1060,
     981,   509,   380,   233,   463,   817,   514,   289,   553,   558,
    1365,   340,   516,   507,   789,   675,   496,   496,   492,   141,
     502,   551,   981,   498,   501,   685,   801,   536,   535,   511,
     690,   511,   580,   279,   498,  1211,   559,   513,   511,   647,
     558,  2403,  3126,   790,  2696,  2319,  2403,   595,   501,   279,
     551,   511,   555,   557,   504,   535,   932,   501,   558,   289,
    1465,   501,   504,   928,   551,   515,   549,   675,   557,  1424,
     513,   883,   259,   515,   558,   512,   558,   558,   558,   627,
     458,     9,   564,   140,   564,   558,   558,   144,   438,   558,
     141,   564,   558,  2486,   702,   519,   564,   909,   380,  2772,
    2301,   558,    63,   485,   974,     6,   535,   537,   920,  1083,
     493,  1308,   977,   512,   136,   974,  3074,  1719,   558,   558,
     554,   313,   558,   557,   181,   957,   493,   557,   821,  1030,
       6,   558,  3147,   511,   154,   828,   829,   830,   158,  2523,
    2042,   523,   524,   525,   526,   838,   839,   840,   498,   697,
     380,   699,  1126,   388,   279,  1256,  2735,   705,   513,   852,
    2101,   821,   855,  2800,   546,   513,  2944,   979,   828,   829,
     830,   864,   865,   866,   867,   868,   458,   141,   838,   839,
     840,   841,  1052,  2046,   844,  1017,   564,  2011,   848,   292,
     392,   383,   852,   558,   854,   855,   525,   900,  1259,  2570,
     220,  2196,   895,  1259,   864,   865,   866,   867,   868,   411,
    3074,  1387,   171,   821,   234,   235,  1081,  1938,   392,   438,
     828,   829,   830,  2497,  1579,  2728,  1581,   188,   458,   511,
     838,   839,   840,   841,   263,   895,   844,   411,   438,  1253,
       0,   438,   438,  2800,   852,   275,   854,   855,  1229,   374,
    1788,    72,  1428,    74,  1066,   442,   864,   865,   866,   867,
     868,   558,   279,    22,    50,   647,   496,   254,   928,   372,
     558,   279,  1993,   317,  1995,   557,   558,   279,   971,   498,
     209,   511,   564,   244,   325,     9,  1098,   895,    12,  1064,
     509,    15,    16,   675,     0,   514,   192,  2461,   498,   501,
     848,   498,   498,   963,   254,   233,  1661,  1662,  1720,   235,
    2031,   971,   558,   125,   974,   360,    62,   977,   564,     1,
     505,   177,   444,    35,  1655,    71,   337,   501,   558,   451,
    1685,  1686,   233,   436,   564,  1147,   279,   337,   441,    33,
    1115,  1437,  1438,  1439,  1440,  1441,  1442,  1443,  1444,   551,
      39,   279,  2797,   373,   279,   963,   136,   233,    47,   381,
     279,   289,  2083,   971,  2085,   358,    34,   179,  1723,    29,
     180,   919,   279,   558,   184,  1730,  2319,   551,   279,   927,
     928,   145,  2725,  1195,  1716,  1253,  1718,    69,   289,   221,
     294,  2836,  1052,   444,   154,  1997,  1261,   427,   158,  2319,
     451,   949,    27,   279,  1274,   223,   239,  1182,  1016,  2573,
     190,  1158,  1159,   289,  2757,  2808,    98,    99,  1193,   251,
     442,  1081,  1030,  1778,  1779,   326,  1086,   360,  2369,   977,
    2371,   136,  1764,   558,  1042,    62,   558,  3074,  2800,   821,
     275,  2800,  1456,  2800,    71,  1277,   828,   829,   830,   145,
    2445,  1432,   380,  2767,   275,   558,   838,   839,   840,   841,
     220,   317,   844,  2844,   250,  1073,   322,  1678,   397,   285,
     852,   512,   854,   855,   234,   235,   279,   137,  1086,   380,
     444,   501,   864,   865,   866,   867,   868,   451,  2802,  1097,
     519,   254,   821,  1828,  1826,   254,   259,   313,     1,  1311,
     557,   558,   335,  2667,   380,   348,    11,   558,  1056,   838,
     839,   840,   557,   895,   501,   465,  1291,  3074,   186,  1067,
     564,   447,    11,   852,  2711,   555,  1396,  1397,   234,   235,
     458,   435,  1225,  1081,   430,   264,   184,  1396,   558,   500,
     361,   558,   224,   232,   387,    48,   292,   558,   509,   510,
     558,  1211,   453,   514,    62,   319,   558,   458,   558,    64,
    2747,  2942,  1738,    71,   557,  1225,   895,    70,  3051,   145,
     306,   307,   254,   233,   279,    64,   265,   380,   302,   303,
    1240,   963,   458,   511,   495,   279,   497,  1561,  1456,   971,
     299,   216,   427,   411,   306,   307,   308,  1257,   294,   288,
     105,  1261,   107,  1211,   109,  1666,   330,   331,   111,   369,
     511,  1423,   117,   373,  1274,   558,   105,  1225,   107,   279,
     109,   424,   290,  1231,   557,   558,   372,   337,   117,   289,
     558,   191,  1240,   558,   279,   511,   564,   237,   198,   558,
     376,  1453,  1839,   333,  2949,   305,   502,  3130,  1030,  2954,
     258,   558,  1464,   465,   280,   458,  1832,   558,   258,   348,
    1320,   246,   133,   564,   376,   292,   478,   295,   279,   351,
     255,   258,   433,   326,  1651,   323,   488,   285,   183,  1660,
     239,  2016,   558,   266,   279,   285,  2503,   190,   564,   104,
     436,   420,    31,  3007,   183,   441,  2051,  2052,   285,   133,
    1590,  1476,   224,  3084,  1086,   313,  1481,  2894,  1483,  2064,
    2065,  1486,  1487,   313,  1489,  3074,     8,   426,   294,   310,
     380,   224,  2077,  2078,   337,   414,   313,  1387,  1388,   374,
     326,   359,   254,  3114,   577,  3040,  1396,  1397,  1398,  3044,
     501,   557,  2463,   279,   223,   372,    38,   330,   175,  2864,
     460,   254,  2473,  2474,    11,   501,  1503,  3123,   261,   534,
     296,   564,   347,   374,   359,   285,   189,   457,  1428,   465,
     273,  1672,   233,  2675,  2889,   280,  3142,   116,   553,  1387,
    1388,  2502,   478,   374,   292,   344,   522,  1562,  2690,  2691,
     486,   280,   488,   313,  1541,   558,  1691,  1457,   458,   138,
     453,   461,   462,   111,   296,   517,   518,    64,  1416,   436,
     522,   509,   558,  1421,   441,   351,   514,  1592,   279,   501,
    1428,    93,  1597,   246,   239,   330,   253,    12,   289,  1211,
      15,    16,   255,   227,   228,   285,  1737,   526,  2605,   452,
    1615,   330,   372,  1225,   190,  1721,   185,  1455,   105,   456,
     107,  1716,   109,  1718,   480,  1463,  1464,   453,  1240,  2676,
     117,  1469,   104,   313,   372,   425,   396,   397,   347,   505,
     209,   391,  2774,   299,   501,   269,   270,   447,   224,   294,
    2782,   509,  1983,   386,   387,   224,   514,  1861,  1436,   465,
     311,   145,  1762,   320,  1868,   502,  1225,   324,   401,  1764,
     403,   486,   478,   145,   564,   447,  1454,  2262,  2263,  2264,
     486,  1787,   488,   509,   241,  2682,   529,   501,   514,   380,
     335,   547,   558,   428,   347,  1700,   183,  1828,   436,   104,
    1904,  1706,   558,   441,   342,   279,   180,  1712,  2555,   428,
     184,   496,   500,   364,  1637,  1638,   554,  2943,   275,   557,
     432,  1644,   510,  1646,   554,  1929,  1930,  1769,  2800,   529,
     386,  1826,   388,  1775,   524,   415,   670,   554,   312,   447,
     145,   219,   464,   478,   466,   233,  1669,  1637,  1638,   208,
    1755,   447,   558,   386,  1644,   388,  1646,   529,  3149,   478,
     550,  1684,   552,   501,   549,  1655,   501,   458,   501,   253,
    2355,  2356,   231,  2620,  2621,  1387,  1388,   527,  1668,  1669,
     804,   503,   501,   495,   808,   359,  1990,  1991,   501,   723,
     190,   279,   558,   280,  1684,  1837,   208,   509,   564,  1637,
    1638,   289,   514,   372,  3030,   133,  1644,   557,  1646,  1929,
    1930,   233,   572,  1933,  2582,   504,  1428,  1655,   551,   231,
    2027,   529,   294,   558,   224,   558,  1716,   379,  1718,   386,
     220,  1669,   285,   529,  1672,   319,  1769,   394,   505,   558,
     324,  3067,  3068,   330,   234,   235,  1684,   321,  1738,   323,
    3076,   433,  1857,  1691,  3080,  3081,  1746,   279,  1863,   386,
     313,   254,    25,    26,   501,  1870,   555,   289,   197,  2197,
    1990,  1991,  1762,   564,  1764,   353,   354,   557,   558,   208,
    1692,   285,   506,  3109,   508,  2016,   279,   302,   303,   294,
    1728,  1814,   380,  1930,   372,  2742,   279,   197,  1875,  1737,
    1738,    60,   231,     9,   456,   247,   285,   379,  1746,   313,
      73,   501,    75,  3139,    77,   330,   331,   145,   470,   471,
     472,   208,  1927,  1928,  1814,  3128,  3129,   454,   455,  2140,
     313,  2135,   133,   262,   313,  1773,  1826,  2268,  2770,    98,
     501,   428,  1832,   336,   231,   338,   174,  3150,   176,   112,
     113,   114,   246,  1990,  1991,   433,   115,    63,   380,   259,
     504,   255,   262,   499,    31,   459,  3169,   126,  1806,    36,
     458,   515,    39,   509,   379,  2106,  1814,   179,   514,    46,
      47,   498,   184,   373,   456,    91,   828,   829,   830,   501,
    1828,   478,   509,   465,  1832,  3198,  1774,   514,   470,   471,
     472,  2205,   108,   342,  2046,    72,   478,    74,   171,   504,
     173,   115,   351,   855,   499,   433,   488,   180,   486,   487,
     515,   184,   126,   511,   509,  1637,  1638,    48,   496,   514,
     234,   235,  1644,   100,  1646,  3135,   458,  1232,  1816,  1817,
    1235,  2172,  1895,  1655,  1897,  2644,  3146,  3179,  1243,    70,
     501,   456,  1247,   498,  2653,  2654,  2655,  1669,   433,  1254,
     465,    59,    60,   193,   509,   470,   471,   472,   336,   514,
     338,   558,  1684,   478,   501,   543,   564,  2082,  1637,  1638,
    2291,   498,   209,   488,   211,  1644,   558,  1646,   501,   511,
     111,   197,   509,   921,   922,   923,   924,   514,   333,   321,
      98,   323,   386,  1993,   388,  1995,   212,   213,   214,   457,
    1669,   178,   275,   119,   277,   221,   341,   115,   158,   275,
     345,   277,   275,  2248,   277,  1684,  1738,   233,   126,   354,
     355,    23,    24,   296,  1746,   154,   386,   362,   388,   501,
     365,  2031,   564,   210,  2149,   370,   501,   275,   373,   277,
     375,   376,   377,   378,    73,   501,    75,   263,   524,    27,
     526,   267,   271,   272,  2206,   232,   538,   539,   540,   541,
     395,   328,   329,   279,   501,   281,   282,   283,  2016,    37,
      38,   287,   422,   289,   839,   840,  2191,   864,   865,  2194,
     170,  2286,  1645,  2288,  1647,  2085,  2201,   439,   368,  1652,
    1653,  1654,  1814,   560,  2411,  2409,  1659,   558,   275,   465,
     446,   436,  2416,   438,   446,   254,   441,  1670,  1671,    63,
    1832,   288,   404,  2228,   239,   279,   332,   866,   867,   868,
     297,   501,   297,   254,   538,   539,   540,   541,   249,   501,
     261,   501,   411,   558,  2375,   538,   539,   540,   541,   558,
     496,   558,   273,   558,   433,  1814,    81,  2461,   501,   452,
     327,   441,   501,  2115,  2116,  2117,  2118,    71,    65,    76,
     558,   501,   558,   423,   380,   501,   146,   502,   501,   216,
     294,   348,   513,   335,   513,   147,   513,   497,   188,   513,
     496,   148,   513,   513,   361,   513,  2229,  2230,   513,   513,
     513,   513,     6,   149,   513,     9,   513,   413,   422,   150,
     386,   486,   486,  2318,   539,    36,   151,   279,    39,   152,
     110,   153,  2526,   491,   513,    46,    47,   156,    50,   496,
     493,  2538,   557,   445,   492,   495,   159,   489,   160,   216,
     161,  2461,   558,   162,   184,   412,   163,   414,   415,   296,
    2557,  2558,   458,   351,   553,    32,  2563,   355,   356,  3127,
     165,   164,   429,   121,  2568,   386,   387,   473,   474,  2573,
     166,   216,   167,   121,   168,   501,   433,   216,   603,   100,
     401,   284,   403,   546,   501,   452,   558,    91,  2519,   614,
    2367,   341,   558,   441,   279,   558,  2286,   558,  2288,   103,
      12,    13,    14,   401,   108,   511,   501,  2611,   116,   519,
    2248,   501,   279,   519,   279,   521,   104,   513,   496,   558,
     418,   419,   558,   558,  2429,   496,  2630,   411,  2635,   244,
     223,  2436,  2437,  2438,  2439,   371,  2274,   543,    27,  2444,
     409,   279,   548,   297,   323,   184,   671,   549,   555,   143,
     556,   195,   558,  2573,    66,   555,   400,   178,   564,   526,
     685,   496,   187,  2667,   557,   690,   250,   501,   250,   145,
     537,   496,   496,    50,    50,   216,   216,   250,   703,  2484,
     501,   501,   433,   398,  2688,   501,   278,    94,   501,   210,
     557,    23,   501,   505,   440,   297,   492,   254,  2540,   279,
     372,    80,  2997,  2341,  2711,   341,   493,   452,   212,   213,
     214,   232,  2350,  2677,   118,  2353,  2449,   221,   563,   562,
     328,   259,   465,   301,   498,  2303,  2304,   498,   498,   233,
     551,  2738,  2739,   498,   498,   498,   416,  2315,   498,   498,
    2747,  2748,   498,   768,  2549,   397,   259,  2667,   496,   223,
     223,    17,  2485,   492,   496,   338,   564,   143,   155,  2564,
      50,   496,     9,   267,   268,   177,   400,   288,   135,   223,
     274,  2778,   276,   157,     8,   279,  2581,   281,   282,   283,
     216,   336,   555,   287,   465,   289,   223,   555,   501,   814,
     496,     9,   296,     7,   501,   401,   433,   551,  2805,    95,
      22,   335,   485,   209,  2735,   358,   327,   501,    48,   558,
     328,    62,     8,   223,   326,   227,   228,   558,   324,   253,
     551,   452,   551,   848,    50,   453,   209,   348,   332,   209,
     441,   259,   346,  2471,   344,   319,   339,   145,   343,   122,
     360,   484,   501,   224,    91,   433,   400,  2580,   352,  2896,
     427,   224,   553,   558,   558,  2493,   279,   269,   270,   251,
     216,   108,   492,  2867,   223,   223,   396,   396,  2506,   111,
       8,    38,    50,   111,   501,   314,   380,   285,   325,   545,
    2685,   507,   285,   104,   259,   239,    58,  2894,   512,   501,
     275,   412,   555,   414,   415,   496,   433,   309,   558,   254,
     209,  2479,    62,   928,   420,  2710,   277,  2911,   429,   413,
     322,   442,    40,   465,   240,   285,   125,    50,   330,   119,
     369,   323,   285,   416,   285,   337,   501,   320,  2859,   175,
     501,   452,   957,   285,    54,   496,   492,    27,   525,   440,
     442,   452,   361,    17,   564,   369,   216,   118,   534,   974,
     362,   279,   977,   495,   458,   372,   382,  2964,  3089,   116,
     496,   461,   443,   208,   496,   212,   213,   214,   123,   473,
     474,   504,   123,   558,   221,     7,   244,   501,   460,   483,
     402,   496,   501,  2788,    31,   557,   233,   241,   123,   555,
     477,   369,  1017,   338,  2799,  2800,   335,   259,   259,  2804,
     125,   266,   501,   501,   501,   526,  2811,   511,   558,  2814,
    2815,  2816,  2817,  2938,   334,   259,   259,   521,   266,   104,
     267,   486,   259,   259,   139,   266,   224,  1052,   196,    62,
     224,   558,   279,   230,   281,   282,   283,  2842,  2843,   543,
     287,   231,   289,   242,   548,   343,   279,   130,  2853,    50,
     216,   467,   556,  2858,   558,    11,  1081,   351,    86,   555,
     564,    57,    88,  1164,    25,    55,    54,   219,  1550,   234,
     423,  1161,  1530,  2448,  1143,  2435,   778,  2635,  2714,  2443,
    3005,  2719,  3086,  2449,  2629,   332,  2428,  2825,   749,  2794,
     502,  2836,  1857,  2800,   506,  2403,   508,  3177,  2741,  2892,
    2375,  3163,  3189,  3139,  2857,  2682,   463,  2857,  1999,  3006,
       9,  1183,  2917,  2918,  2919,  2920,  2921,   733,  3006,  2924,
    2925,  2926,  2927,  2928,  2929,  2930,  2931,  2932,  2933,  2934,
    3134,    64,  2937,   380,  3138,  2800,  2941,  1195,  1603,   539,
    1997,  1279,  1268,  2267,  2266,   883,   350,   577,   549,   932,
    1311,  2956,  1334,  2958,   935,  1720,   599,  2962,  2796,  2797,
    2007,   960,   967,  1746,    63,  1190,   413,  2021,  2020,  1385,
     636,  1773,   647,  1415,  1775,  2813,  2909,  2046,  2055,  2054,
    1043,  1790,  1445,  1837,  1817,   378,  2088,  1464,   683,  1464,
    2828,  1019,    91,   685,  2757,  3199,  1580,  1468,  1578,   916,
    2093,  2839,  1665,   915,  1664,  2081,  2080,  2496,   699,   108,
    2360,   458,  2359,  2094,  1690,  1689,   949,   940,  1337,  1810,
     373,  2859,   395,  1810,  1810,   671,   473,   474,  1253,  1810,
    2180,   873,  1257,  1130,   780,  2873,  1261,  2291,  2876,  1933,
    1432,  1672,  2859,  1539,  3049,  3050,   506,  1682,  1534,  1274,
    2406,  2343,  1277,  2084,  2594,  2703,  2462,   470,    55,    56,
      57,  3066,  3113,  1155,   511,  1452,  3071,  3072,  1766,  1735,
    2900,  1879,  2910,  2698,   521,  2913,  2914,  2915,  2916,  1485,
    3130,    -1,    -1,  3088,    -1,  2923,  3091,  3092,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1320,   543,    -1,  2936,    -1,
    2938,   548,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   556,
    2948,   558,    -1,   212,   213,   214,    -1,   564,    -1,    -1,
    3125,    -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   128,   129,   130,   233,  2973,  2974,  2975,  2976,  2977,
    2978,  2979,  2980,  2981,  2982,  2983,  2984,  2985,  2986,  2987,
    2988,  2989,  2990,  2991,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2999,    -1,    -1,   263,    -1,    -1,  3005,   267,    -1,
      -1,  1396,  1397,  1398,    -1,  3013,    -1,    -1,    -1,    -1,
     279,    -1,   281,   282,   283,    -1,    -1,  3025,   287,    -1,
     289,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3128,  3129,    -1,  3046,  3047,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  3062,    -1,    -1,  3150,    -1,    -1,
      -1,  1456,  1457,   332,    -1,    -1,    -1,  3075,  3128,  3129,
      -1,    -1,    -1,    -1,    -1,    -1,  3169,  2859,    -1,   246,
     247,    -1,  1477,    -1,    -1,  3093,    -1,    -1,    -1,    -1,
    3150,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3198,    -1,  3115,   275,  3169,
      -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    3128,  3129,    -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3144,    -1,  3198,    -1,
      -1,    -1,  3150,    -1,   413,    -1,    -1,    -1,   212,   213,
     214,    -1,    -1,    -1,  3162,  3163,    -1,   221,    -1,    -1,
      -1,  3169,    -1,    -1,    -1,    -1,    -1,  3175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,    -1,  3194,    -1,    -1,   458,
    3198,    -1,    -1,    -1,    -1,  1590,    -1,    -1,   365,   366,
     367,    -1,    -1,   267,   473,   474,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   381,   279,    -1,   281,   282,   283,
      -1,    -1,    -1,   287,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,    -1,
      -1,    -1,   511,    10,    -1,    -1,    -1,    -1,    -1,    -1,
     519,    18,   521,    -1,    -1,    -1,  1651,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,
      -1,    -1,    -1,  1668,   543,    -1,    -1,    -1,    -1,   548,
      -1,    -1,    -1,    -1,    -1,    52,    53,   556,    -1,   558,
      -1,    -1,    -1,    -1,    -1,   564,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    83,    -1,   485,    -1,
      -1,  1716,    -1,  1718,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,  3128,  3129,    -1,   413,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
     127,    -1,    -1,   130,    -1,   132,    -1,  1762,  3150,  1764,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,   152,   153,  3169,   155,   156,
     157,    -1,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,    -1,    -1,    -1,    -1,    -1,   175,   473,
     474,    -1,    -1,   180,    -1,   182,  3198,   184,    -1,    -1,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1826,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1839,    -1,    -1,    -1,   215,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   521,   225,   226,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
      -1,    -1,  1867,    -1,    -1,    -1,   243,    -1,   245,   543,
      -1,   248,    -1,    -1,   548,    -1,   253,    46,    -1,    -1,
      -1,    -1,   556,    -1,   558,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,
      39,    -1,    -1,    72,    73,    74,    75,    -1,    47,    -1,
      -1,  1916,  1917,  1918,    -1,    -1,   293,    -1,  1923,  1924,
      -1,   298,    -1,   300,  1929,  1930,  1931,    -1,  1933,    -1,
      -1,    -1,    -1,    -1,   311,    -1,    -1,   314,    -1,    -1,
      -1,    -1,   319,   320,   321,    -1,   323,   324,   325,   326,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   340,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1980,    -1,   354,    -1,    -1,
     119,    -1,    -1,    -1,  1989,  1990,  1991,  1992,  1993,    -1,
    1995,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   383,   384,   385,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,
      -1,    -1,  2027,    -1,    -1,    -1,  2031,    -1,    -1,    -1,
      -1,   408,    -1,   410,    -1,    -1,    -1,    -1,    -1,    -1,
     417,    -1,    -1,    -1,   421,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,   431,    -1,    -1,    -1,    -1,    -1,
      -1,   230,    -1,    19,    -1,    -1,   443,    -1,    -1,    -1,
      -1,   210,    -1,    -1,    30,    -1,   453,   454,    -1,   218,
    2085,    -1,    -1,    -1,    -1,    -1,   463,    -1,   257,    -1,
      -1,   468,   469,   232,    -1,    -1,    -1,    -1,   475,    -1,
     477,    -1,    -1,    -1,  2109,    -1,   275,    -1,   277,    -1,
     487,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   501,    -1,   265,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,
      -1,    -1,   311,   520,    -1,    -1,    -1,   286,    -1,   288,
      -1,   528,    -1,    -1,    -1,    -1,   533,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   313,    -1,   315,    -1,   555,    -1,
      -1,    -1,    -1,    -1,   561,    -1,    -1,    -1,   357,   566,
     567,    -1,    -1,    -1,   363,    -1,    -1,   336,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,   348,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,   378,
      -1,    -1,    -1,    -1,  2249,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   405,    -1,    -1,    -1,
      67,    -1,    -1,   412,    -1,   414,   415,   446,    -1,    -1,
      -1,  2286,    79,  2288,    -1,   241,    83,   456,    -1,    -1,
     429,    -1,    -1,    -1,    -1,   434,    -1,    -1,    -1,    -1,
      97,    -1,    -1,    -1,    -1,    -1,  2311,   476,    -1,    -1,
      -1,    -1,    -1,   452,    -1,    -1,    -1,    -1,    -1,   275,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,   285,
     127,    -1,   501,   130,    -1,   132,    91,    -1,    -1,    -1,
      -1,    -1,    -1,   482,    -1,   142,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,   523,   494,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   169,    -1,    -1,   544,    -1,    -1,    -1,    -1,
      -1,    -1,   551,    -1,   553,   182,    -1,   526,    -1,   345,
     187,    -1,    -1,    -1,   350,    -1,    -1,   536,    -1,    -1,
      -1,    -1,    -1,   542,    -1,    -1,  2411,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,
      -1,    -1,  2427,  2428,   179,   222,    -1,    -1,   225,   226,
     386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,   236,
      -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,   245,    -1,
     406,   248,    -1,    -1,    -1,    -1,  2461,   212,   213,   214,
      -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,    -1,   445,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,   454,    -1,
      -1,   298,    -1,   300,    -1,    -1,    -1,    -1,    -1,   465,
      -1,    -1,   267,   268,   311,    -1,    -1,    -1,    -1,   274,
      -1,   276,    -1,    -1,   279,    -1,   281,   282,   283,    -1,
      -1,    -1,   287,  2538,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,   340,    -1,   501,    -1,    -1,    -1,   505,
    2555,    -1,  2557,  2558,    -1,    -1,    -1,   354,  2563,    -1,
      -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,  2573,    -1,
      -1,    -1,    -1,    -1,  2579,    -1,    -1,   332,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   383,   384,   385,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,   395,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   408,    -1,   410,    -1,  2620,  2621,    -1,    -1,    -1,
     417,    -1,    -1,    -1,   421,   380,    -1,    -1,    -1,    -1,
    2635,    -1,    -1,    -1,   431,    -1,  2641,    -1,    -1,  2644,
      -1,    -1,    -1,    -1,    -1,    -1,   443,    -1,  2653,  2654,
    2655,  2656,    -1,    -1,    -1,    -1,   411,   454,   413,    -1,
      -1,    -1,  2667,    -1,    -1,  2670,   463,    -1,    -1,    -1,
      -1,   468,   469,    -1,    91,    -1,    -1,    -1,   475,    -1,
     477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     487,   108,    -1,     1,    -1,     3,    -1,     5,    -1,    -1,
      -1,    -1,    10,   458,   501,    -1,  2711,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,   474,
    2725,    -1,    -1,   520,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   528,    -1,  2738,  2739,    -1,   533,  2742,    -1,    -1,
      -1,    -1,  2747,  2748,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,  2757,    -1,    -1,    -1,   511,    -1,    -1,    67,
      -1,    -1,    -1,    -1,   561,    -1,   521,    -1,    -1,   566,
     567,    79,    -1,  2778,    -1,    83,    -1,    -1,    -1,    -1,
      -1,  2786,    -1,    -1,    -1,    -1,    -1,    -1,   543,    97,
      -1,    -1,    -1,   548,    -1,   212,   213,   214,    -1,    -1,
    2805,   556,   557,   558,   221,    -1,    -1,    -1,    -1,   564,
      -1,    -1,   120,    -1,    -1,    -1,   233,    -1,    -1,   127,
      -1,    -1,   130,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    31,    -1,    33,    -1,    -1,
      36,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
     267,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
     287,    -1,   289,    -1,   182,    -1,    72,    -1,    74,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2894,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,   215,    -1,    -1,
      -1,    -1,    -1,    -1,   222,   332,    -1,   225,   226,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,   236,     1,
      -1,     3,    -1,     5,    -1,   243,    -1,   245,    10,    -1,
     248,    -1,    -1,    -1,  2949,    -1,    18,    -1,    -1,  2954,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2964,
      -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,
     298,    -1,   300,    -1,    -1,    67,   413,    -1,    -1,    -1,
      -1,    -1,    -1,   311,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    83,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,   340,    -1,    -1,  3040,   232,    -1,    -1,  3044,
      -1,   458,    -1,    -1,    -1,    -1,   354,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   473,   474,   130,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,
     142,    -1,    -1,    -1,    -1,   383,   384,   385,    -1,   275,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,
     286,    -1,   288,    -1,   511,    -1,    -1,   169,    -1,    -1,
     408,   297,   410,    -1,   521,    -1,    -1,    -1,    -1,   417,
     182,    -1,    -1,   421,    -1,   187,    -1,   313,    -1,   315,
      -1,    -1,    -1,   431,    -1,    -1,   543,    -1,    -1,    -1,
      -1,   548,    -1,    -1,    -1,   443,    -1,    -1,    -1,   556,
     336,   558,    -1,   215,    -1,    -1,   454,   564,    -1,    -1,
     222,    -1,   348,   225,   226,   463,    -1,    -1,    -1,    -1,
     468,   469,    -1,    -1,   236,   361,    -1,   475,    -1,   477,
      -1,   243,    -1,   245,    -1,    -1,   248,    -1,    -1,   487,
      -1,   377,   378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   405,
      -1,    -1,   520,    -1,    -1,    -1,   412,    -1,   414,   415,
     528,   293,    -1,    -1,    -1,   533,   298,    -1,   300,    -1,
      -1,    -1,    -1,   429,    -1,    -1,    -1,    -1,   434,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   561,    -1,    -1,   452,    -1,   566,   567,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   354,    -1,    -1,    -1,   482,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   493,   494,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   383,   384,   385,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,
     526,    -1,    -1,    -1,    -1,    -1,   408,    -1,   410,    -1,
     536,    -1,    -1,    -1,    -1,   417,   542,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   431,
       5,   557,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,   443,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   463,    -1,    -1,    -1,    -1,   468,   469,    -1,    -1,
      -1,    -1,    -1,   475,    -1,   477,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,   487,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   520,    -1,
      -1,    -1,    97,    -1,    -1,    -1,   528,    -1,    -1,    -1,
      -1,   533,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   130,    -1,   132,    -1,   561,
      -1,    -1,    -1,    -1,   566,   567,    -1,    -1,   143,    -1,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,
     225,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,
     245,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,   293,    -1,
      -1,    -1,    -1,   298,    -1,   300,    -1,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    66,    36,
      -1,    -1,    39,    -1,    -1,   340,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   383,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
     395,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,    -1,    -1,   410,    -1,    -1,    -1,    -1,
      -1,    -1,   417,    -1,    -1,    -1,   421,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   431,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   443,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   454,
     188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   463,    -1,
      -1,    -1,    -1,   468,   469,    -1,    -1,    -1,    -1,    -1,
     475,   178,   477,    -1,   212,   213,   214,    -1,    -1,    -1,
      -1,    -1,   487,   221,    -1,    -1,    -1,    -1,    -1,   227,
     228,    -1,    -1,    -1,    -1,   233,   501,    -1,    -1,    -1,
      -1,    -1,    -1,   210,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   520,   254,    -1,    -1,    -1,
      -1,    -1,    -1,   528,    -1,   232,   233,    -1,   533,   267,
     268,   269,   270,    -1,    -1,    -1,   274,    -1,   276,    -1,
      -1,   279,    -1,   281,   282,   283,    -1,    -1,    -1,   287,
      -1,   289,    -1,    -1,    -1,    -1,   561,    -1,   296,    -1,
     267,   268,    -1,    -1,    -1,    -1,    -1,   274,   275,   276,
      -1,   309,   279,    -1,   281,   282,   283,    -1,    -1,   317,
     287,   288,   289,    -1,   322,    -1,    -1,    -1,    -1,   296,
     297,    -1,   330,    -1,   332,    -1,    -1,    -1,    -1,   337,
      -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   352,    -1,     6,    -1,    -1,     9,
     327,    -1,    -1,    -1,   362,   332,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   348,   380,    -1,    -1,   352,    -1,     6,    -1,    -1,
       9,    -1,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   380,    -1,   413,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,   412,   413,   414,   415,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
     458,    -1,   429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,   473,   474,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   452,    -1,    -1,    -1,   108,
      -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     498,    -1,   500,    -1,   502,    -1,   473,   474,   506,    -1,
     508,   509,   510,   511,    -1,   513,   514,    -1,    -1,    -1,
      -1,    -1,    -1,   521,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,
      -1,    -1,    -1,    -1,   511,   543,    -1,    -1,    -1,    -1,
     548,    -1,    -1,    -1,   521,    -1,    -1,    -1,   556,   526,
     558,    -1,   212,   213,   214,    -1,   564,    -1,    -1,    -1,
     537,   221,    -1,    -1,    -1,    -1,   543,    -1,    -1,    -1,
      -1,   548,    -1,   233,    -1,    -1,    -1,    -1,    -1,   556,
     557,   558,    -1,   212,   213,   214,    -1,   564,    -1,    -1,
      -1,    -1,   221,    -1,   254,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   267,   268,    -1,
      -1,    -1,    -1,    -1,   274,    -1,   276,    -1,    -1,   279,
      -1,   281,   282,   283,    -1,    -1,    -1,   287,    -1,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,   267,   268,
      -1,    -1,    -1,    -1,    -1,   274,    -1,   276,    -1,    -1,
     279,    -1,   281,   282,   283,    -1,    -1,   317,   287,    -1,
     289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,   332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,    -1,    -1,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,   337,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     380,    -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   380,    -1,   413,    -1,    -1,    -1,    -1,   169,    -1,
      -1,    -1,    -1,   392,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   413,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,   458,    -1,
      -1,   212,   213,   214,    -1,    -1,   103,    -1,    -1,    -1,
     221,   108,    -1,   473,   474,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,   452,    91,    -1,    -1,    -1,    -1,   458,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   498,    -1,
     500,   108,    -1,    -1,   473,   474,    -1,    -1,    -1,   509,
     510,   511,    -1,   513,   514,    -1,   267,   268,    -1,    -1,
      -1,   521,    -1,   274,    -1,   276,    -1,    -1,   279,    -1,
     281,   282,   283,    -1,    -1,    -1,   287,    -1,   289,    -1,
      -1,    -1,   511,   543,    -1,   296,    -1,    -1,   548,    -1,
      -1,    -1,   521,    -1,    -1,    -1,   556,    -1,   558,    -1,
     529,    -1,    -1,    -1,   564,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   543,   212,   213,   214,    -1,   548,
      -1,   332,   551,    -1,   221,    -1,    -1,   556,    -1,   558,
      -1,    -1,    -1,    -1,    -1,   564,   233,    -1,    -1,    -1,
      -1,   352,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,   221,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   380,
     267,   268,    -1,    -1,    -1,    -1,    -1,   274,    -1,   276,
      -1,    -1,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
     287,    -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
     267,   268,   413,    -1,    -1,    -1,    -1,   274,    -1,   276,
      -1,    -1,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
     287,    -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,   458,    -1,    -1,
      -1,    -1,    -1,    -1,   103,   352,    -1,    -1,    -1,   108,
      -1,    -1,   473,   474,    -1,   332,    -1,    -1,    -1,    -1,
     337,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   380,    -1,   352,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,
     511,    -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,
     521,     6,    -1,   380,     9,    -1,   413,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   543,    -1,    -1,    -1,    -1,   548,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   556,   413,   558,    -1,    -1,
      -1,    -1,    -1,   564,    -1,    -1,    91,    -1,    -1,    -1,
      -1,   458,    -1,   212,   213,   214,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   108,    -1,    -1,   473,   474,    -1,    -1,
      -1,    -1,    -1,    -1,   233,    -1,   483,    -1,    -1,    -1,
      -1,   458,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   473,   474,    -1,    -1,
      -1,    -1,    -1,   108,   511,    -1,    -1,    -1,   267,   268,
       6,    -1,    -1,     9,   521,   274,    -1,   276,    -1,    -1,
     279,    -1,   281,   282,   283,    -1,    -1,    -1,   287,    -1,
     289,    -1,    -1,    -1,   511,    -1,   543,   296,    -1,    -1,
      -1,   548,    -1,    -1,   521,    -1,    -1,    -1,    -1,   556,
      -1,   558,    -1,    -1,    -1,    -1,    -1,   564,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   543,   212,   213,   214,
      -1,   548,    -1,   332,    -1,    -1,   221,    -1,    -1,   556,
      -1,   558,    -1,    -1,    -1,    -1,    -1,   564,   233,    -1,
      -1,    -1,    -1,   352,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,   213,   214,
      -1,    -1,   108,    -1,    -1,    -1,   221,    -1,    -1,    -1,
      -1,   380,   267,   268,    -1,    -1,    -1,    -1,   233,   274,
      -1,   276,    -1,    -1,   279,    -1,   281,   282,   283,    -1,
      -1,    -1,   287,    -1,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,    -1,   413,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,   268,     6,    -1,    -1,     9,    -1,   274,
      -1,   276,    -1,    -1,   279,    -1,   281,   282,   283,    -1,
      -1,    -1,   287,    -1,   289,    -1,    -1,   332,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,    -1,
      -1,    -1,    -1,    -1,   473,   474,   212,   213,   214,    -1,
      -1,    -1,    -1,    -1,    -1,   221,    -1,   332,    -1,    -1,
      -1,    -1,   337,    -1,    -1,   380,    -1,   233,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,    91,
      -1,    -1,   511,    -1,   250,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   521,    -1,    -1,    -1,   108,    -1,   413,    -1,
      -1,   267,   268,     6,    -1,   380,     9,    -1,   274,    -1,
     276,    -1,    -1,   279,   543,   281,   282,   283,    -1,   548,
      -1,   287,    -1,   289,    -1,    -1,    -1,   556,    -1,   558,
     296,    -1,    -1,    -1,    -1,   564,    -1,    -1,   413,    -1,
      -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,   474,
      -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   496,    -1,   458,    -1,    -1,   352,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,   473,   474,
     212,   213,   214,    -1,   216,   108,   521,    -1,    -1,   221,
      -1,    -1,     6,    -1,   380,     9,    -1,    -1,    -1,    -1,
      -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,   543,    -1,
      -1,    -1,    -1,   548,    -1,    -1,   511,    -1,    -1,    -1,
      -1,   556,    -1,   558,    -1,    -1,   521,   413,    -1,   564,
      -1,     6,    -1,    -1,     9,   267,   268,    -1,    -1,    -1,
      -1,    -1,   274,    -1,   276,    -1,    -1,   279,   543,   281,
     282,   283,    -1,   548,    -1,   287,    -1,   289,    -1,    -1,
      -1,   556,    -1,   558,   296,    -1,    -1,    -1,    -1,   564,
      -1,    -1,   458,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,   474,   212,
     213,   214,    -1,    -1,   108,    -1,    -1,    -1,   221,    -1,
     332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
     352,    -1,    -1,    -1,    -1,   511,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   521,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,   268,    -1,    -1,   380,    -1,
      -1,   274,    -1,   276,    -1,    -1,   279,   543,   281,   282,
     283,    -1,   548,    -1,   287,    -1,   289,    -1,    -1,    -1,
     556,    -1,   558,   296,    -1,    -1,    -1,    -1,   564,    -1,
      -1,   413,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,   212,   213,
     214,    -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,   332,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   458,    -1,    82,   352,
      84,    85,    86,    87,    88,    89,    90,   212,   213,   214,
      -1,   473,   474,    -1,    -1,    -1,   221,    -1,    -1,    -1,
      -1,    -1,    -1,   267,   268,    -1,    -1,   380,   233,    -1,
     274,    -1,   276,    -1,    -1,   279,    -1,   281,   282,   283,
      -1,    -1,    -1,   287,    -1,   289,   130,    -1,    -1,   511,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,   521,
     413,    -1,   267,   268,    -1,    -1,    -1,    -1,    -1,   274,
      -1,   276,    -1,    -1,   279,    -1,   281,   282,   283,    -1,
      -1,   543,   287,    -1,   289,    -1,   548,    -1,   332,    -1,
      -1,   296,    -1,    -1,   556,    -1,   558,    -1,    -1,   452,
      -1,    -1,   564,    -1,    -1,   458,    -1,    -1,   352,    -1,
      -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,   203,
     473,   474,   206,   207,    -1,    -1,    -1,   332,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,   511,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   521,   413,
      -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     543,    -1,    -1,    -1,    -1,   548,    -1,    -1,    -1,     1,
      -1,    -1,    -1,   556,    -1,   558,    -1,    -1,   413,    -1,
      -1,   564,    -1,    -1,   458,    -1,    -1,    -1,   302,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,
     474,    33,    -1,    -1,    36,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   349,    -1,   511,   473,   474,
      72,    -1,    74,    -1,    -1,    -1,   360,   521,    -1,    -1,
      82,    -1,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   543,
      -1,    -1,    -1,    -1,   548,    -1,   511,    -1,    -1,    -1,
      -1,    -1,   556,    -1,   558,    -1,   521,    -1,    -1,    -1,
     564,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   543,    -1,
      -1,    -1,    -1,   548,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   556,    -1,   558,    -1,    -1,    -1,    -1,    -1,   564,
      -1,    -1,    -1,    -1,   448,   449,   450,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,   201,
     202,   203,    -1,    -1,   206,   207,    -1,    -1,   210,    -1,
      -1,    -1,    -1,    -1,   216,    -1,   218,    -1,    -1,    -1,
      -1,    -1,   224,    -1,    -1,    -1,    -1,   229,    -1,    -1,
     232,    -1,    -1,    -1,    -1,    -1,     1,    -1,   240,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   530,   531,   532,    -1,
      -1,    -1,   254,    -1,    -1,   257,    21,    -1,    -1,    -1,
      -1,   263,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,   275,    -1,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     302,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,   313,    -1,   315,    -1,    -1,    -1,    82,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,   334,    -1,   336,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   348,   349,    -1,    51,
      -1,    -1,    -1,    -1,    -1,   357,    -1,    -1,   360,    -1,
      -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   375,    -1,   377,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   405,    -1,    -1,   108,    -1,    -1,    -1,
     412,    -1,   414,   415,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,
     195,    -1,   434,    -1,   199,   200,   201,   202,   203,    -1,
      -1,   206,   207,    -1,   446,     9,   448,   449,   450,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,    -1,
     482,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,   254,
      -1,    -1,   257,    -1,   496,    -1,    -1,    -1,   263,   501,
      -1,    -1,    -1,    -1,    -1,   507,    -1,    -1,    -1,   211,
     212,   213,   214,    -1,    -1,    -1,    -1,   519,    -1,   221,
      -1,    -1,    -1,    -1,   526,    -1,    -1,    91,   530,   531,
     532,   233,    -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,
      -1,    -1,   544,    -1,   108,    -1,    -1,   549,    -1,   551,
      -1,    -1,    -1,    -1,    -1,    -1,   558,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   266,   267,   268,    -1,    -1,   334,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   279,    -1,   281,
     282,   283,    -1,    -1,   349,   287,    -1,   289,    -1,    -1,
      -1,    -1,   357,    -1,    -1,   360,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   390,    -1,    -1,    -1,    -1,
     332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,   212,   213,
     214,    -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,
      -1,   446,    -1,   448,   449,   450,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   266,   267,   268,    -1,    -1,    -1,    -1,    -1,
      -1,   413,    -1,    -1,   479,   279,    -1,   281,   282,   283,
      -1,    -1,    -1,   287,    -1,   289,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   519,    -1,   458,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,   530,   531,   532,   332,    -1,
      -1,   473,   474,    -1,    -1,    -1,    -1,   108,    -1,   544,
      -1,    -1,    -1,    -1,    -1,    -1,   551,   489,    -1,    -1,
      -1,    -1,    -1,   558,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   511,
      -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,   521,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   534,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   543,    -1,    -1,    -1,    -1,   548,    -1,    -1,   413,
      21,   553,    -1,    -1,   556,   557,   558,    -1,    -1,    -1,
      -1,    -1,   564,    -1,    -1,    -1,    37,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,
     221,    -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,   473,
     474,    82,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,   489,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   267,   268,    -1,    -1,
      -1,    -1,    -1,   274,    -1,   276,    -1,   511,   279,    -1,
     281,   282,   283,    -1,    -1,    -1,   287,   521,   289,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     534,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   543,
      -1,    -1,    -1,    -1,   548,    -1,    -1,    -1,    -1,   553,
      -1,    -1,   556,   557,   558,    -1,    -1,    -1,    -1,    -1,
     564,   332,    33,    -1,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,   352,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,
     201,   202,   203,    -1,    -1,   206,   207,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    -1,   380,
      -1,    82,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   413,   254,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,   458,    -1,    -1,
      -1,   302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,   473,   474,    -1,    -1,    -1,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,   199,   200,
     201,   202,   203,    -1,    -1,   206,   207,    -1,   349,   210,
     511,    -1,   513,    -1,    -1,   216,   357,   218,    -1,   360,
     521,    -1,    -1,   224,    -1,    -1,    -1,    -1,   229,    -1,
      -1,   232,    -1,    -1,   375,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   543,    -1,    -1,    -1,    -1,   548,    -1,   390,
      -1,    -1,    -1,   254,    -1,   556,   257,   558,    -1,    -1,
      -1,    -1,    -1,   564,   265,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   275,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,   221,    -1,    -1,   288,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,
      -1,   302,    -1,    -1,    -1,   446,    -1,   448,   449,   450,
      -1,    -1,   313,    -1,   315,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     267,   268,    -1,   334,    -1,   336,    -1,   274,   479,   276,
      -1,    -1,   279,    -1,   281,   282,   283,   348,   349,    -1,
     287,    -1,   289,    -1,    -1,    -1,   357,    -1,    -1,   360,
     501,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,   375,    -1,   377,    -1,   519,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,   530,
     531,   532,    -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   544,   405,    -1,    -1,    -1,    -1,    -1,
     551,   412,    -1,   414,   415,   352,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   434,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   380,    -1,   446,    -1,   448,   449,   450,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    91,   413,    -1,    -1,    -1,
      -1,   482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
     213,   214,   108,    -1,    -1,   496,    -1,    -1,   221,    -1,
     501,    -1,    -1,    -1,    -1,    -1,   507,    -1,    -1,    -1,
     233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   458,    -1,    -1,    -1,   526,    -1,    -1,    -1,   530,
     531,   532,    -1,    -1,    -1,    -1,   473,   474,    -1,    -1,
      -1,    -1,    -1,   544,   267,   268,    -1,    -1,   549,    -1,
     551,   274,    -1,   276,    -1,    -1,   279,    -1,   281,   282,
     283,   498,    -1,    -1,   287,    -1,   289,    -1,    -1,    -1,
      -1,    -1,   509,    -1,   511,    -1,   513,   514,   212,   213,
     214,    -1,    -1,    -1,   521,    -1,    -1,   221,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,   213,   214,   233,
      -1,    -1,    -1,    -1,    -1,   221,   543,    -1,    -1,   332,
      -1,   548,    -1,    -1,    -1,    -1,    -1,   233,    -1,   556,
      -1,   558,    -1,    -1,    -1,    -1,    -1,   564,    -1,   352,
      -1,    -1,    -1,   267,   268,    -1,    -1,    -1,    -1,    -1,
     274,    -1,   276,    -1,    -1,   279,    -1,   281,   282,   283,
      -1,   267,   268,   287,    -1,   289,    -1,   380,   274,    -1,
     276,    -1,    -1,   279,    -1,   281,   282,   283,    -1,    -1,
      -1,   287,    -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     413,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,   352,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   458,   352,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,
     473,   474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   498,    -1,    -1,   108,   413,
      -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,   511,    -1,
     513,   514,    -1,    -1,    -1,    -1,    -1,   413,   521,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
     543,    -1,    -1,    -1,   458,   548,    -1,    -1,    -1,    -1,
     108,    -1,    -1,   556,    -1,   558,    -1,    -1,    -1,   473,
     474,   564,   458,    -1,    -1,    -1,    -1,   481,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,   474,    -1,
      -1,    -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   509,    -1,   511,    -1,   513,
     514,    -1,   212,   213,   214,    -1,    -1,   521,    -1,    -1,
      -1,   221,    -1,   509,    -1,   511,    -1,   513,   514,    -1,
      -1,    -1,    -1,   233,    -1,   521,    -1,    -1,    -1,   543,
      -1,    -1,    -1,    -1,   548,    -1,    91,    -1,    -1,    -1,
      -1,    -1,   556,    -1,   558,    -1,    -1,   543,    -1,    -1,
     564,    -1,   548,   108,   212,   213,   214,   267,   268,    -1,
     556,    -1,   558,   221,   274,    -1,   276,    -1,   564,   279,
      -1,   281,   282,   283,    -1,   233,    -1,   287,    -1,   289,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,
     268,    -1,    -1,    -1,    -1,    -1,   274,    -1,   276,    -1,
      -1,   279,   332,   281,   282,   283,    -1,    -1,    -1,   287,
      -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,   212,   213,   214,
      -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,   108,    -1,
     380,    -1,    -1,    -1,   332,    -1,    -1,    -1,   233,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,   268,    -1,    -1,    -1,    -1,    -1,   274,
      -1,   276,   380,    -1,   279,    -1,   281,   282,   283,    -1,
      -1,    -1,   287,    -1,   289,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,    -1,
      -1,    -1,    -1,    -1,    -1,   413,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   473,   474,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   212,   213,   214,    -1,    -1,   332,    -1,    -1,
      -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,   498,    -1,
      -1,    -1,    -1,   233,    -1,    -1,    -1,   352,    -1,   509,
     458,   511,    -1,   513,   514,    -1,    -1,    -1,    -1,    -1,
      -1,   521,    -1,    -1,    -1,   473,   474,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   380,    -1,   267,   268,    -1,
      -1,    -1,    -1,   543,   274,    -1,   276,    -1,   548,   279,
      -1,   281,   282,   283,    -1,    -1,   556,   287,   558,   289,
      -1,   509,   407,   511,   564,   513,   514,    -1,   413,    -1,
      -1,    -1,    -1,   521,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   543,    -1,    -1,    -1,    -1,
     548,    -1,   332,    -1,    -1,    -1,    -1,    -1,   556,    -1,
     558,    -1,    -1,   458,    -1,    -1,   564,    -1,    -1,    -1,
      -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,   473,   474,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   521,    -1,    -1,    -1,
      -1,    -1,    -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   543,    -1,
      -1,    -1,    -1,   548,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   556,    -1,   558,    -1,    -1,    -1,    -1,    -1,   564,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   473,   474,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   543,    -1,    -1,    -1,    -1,   548,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   556,    -1,   558,    -1,
      -1,    -1,    -1,    -1,   564
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   570,   571,     0,   572,   573,   574,   577,   578,   234,
     235,   575,   576,   579,   580,   586,   587,   171,   585,   607,
     608,   576,   220,   373,   588,   591,   133,   133,   111,   722,
     724,    93,   609,   610,   592,   589,   342,   600,   600,   501,
     501,   133,   369,   904,   907,   505,   725,   433,   247,   672,
     673,   333,   457,   611,   612,   616,   501,   501,   501,   585,
     585,   501,   133,   931,   932,   433,   726,   501,   433,   193,
     674,   501,   501,   459,   633,   616,   612,   279,   374,   593,
     593,   119,   601,   602,   158,   581,   582,   583,   154,   584,
     296,   464,   466,   503,   970,     1,     3,     5,    10,    18,
      52,    53,    67,    79,    83,    97,   120,   127,   130,   132,
     142,   169,   182,   187,   215,   222,   225,   226,   236,   243,
     245,   248,   293,   298,   300,   311,   340,   354,   383,   384,
     385,   395,   408,   410,   417,   421,   431,   443,   454,   463,
     468,   469,   475,   477,   487,   501,   520,   528,   533,   561,
     566,   567,   933,   934,   952,   957,   961,   966,   988,   992,
     996,  1000,  1001,  1002,  1007,  1012,  1026,  1030,  1032,  1035,
    1049,  1053,  1056,  1059,  1063,  1064,  1068,  1078,  1081,  1099,
    1101,  1104,  1108,  1115,  1127,  1129,  1144,  1145,  1155,  1158,
    1159,  1163,  1169,  1170,  1178,  1185,  1201,  1211,  1220,  1225,
    1234,  1238,  1240,  1243,  1246,  1249,  1276,   933,   501,   192,
     430,   723,   727,   728,   730,   501,   501,   676,   617,   613,
     501,    11,    64,   105,   107,   109,   117,   183,   280,   330,
     428,   478,   558,   634,   635,   636,   637,   638,   644,   653,
     655,   660,   663,   664,   666,   667,   668,   669,   670,   671,
      27,   595,   595,   422,   170,   603,   279,   374,   594,   583,
     594,    61,   549,   908,     3,     5,    10,    18,    52,    53,
      67,    79,    83,    97,   120,   130,   132,   143,   146,   147,
     148,   149,   150,   151,   152,   153,   155,   156,   157,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     182,   187,   215,   222,   225,   226,   236,   243,   245,   248,
     293,   298,   300,   311,   340,   354,   383,   395,   410,   417,
     421,   431,   443,   454,   463,   468,   469,   475,   477,   487,
     501,   520,   528,   533,   561,  1440,  1441,  1442,   935,   953,
     958,   962,   967,   989,   993,   997,  1003,  1008,  1013,  1027,
    1031,  1033,  1036,  1050,  1054,  1057,  1060,   223,   411,   980,
    1052,  1065,  1069,  1079,  1082,  1100,  1102,  1105,   439,  1109,
    1116,  1130,  1146,  1156,  1160,  1164,  1171,  1186,  1202,  1212,
     279,   380,   424,   458,   564,  1224,  1226,  1235,   368,  1239,
    1241,   920,  1244,  1247,  1250,  1277,  1128,  1179,   560,   777,
     779,   780,     1,   558,  1352,   256,   437,   675,   677,    62,
      71,   292,   372,   436,   441,   558,   618,   619,   620,   621,
     622,   623,   624,   626,  1453,  1520,   614,   626,     1,   558,
    1367,  1367,   465,   446,  1489,   254,  1468,  1468,  1468,  1367,
     446,  1468,    63,  1454,   639,   404,   627,   636,   501,   637,
     239,   654,   279,   501,   590,   297,  1477,  1468,   249,   605,
     501,   501,   910,   909,   411,   917,   337,   558,   936,   938,
    1353,  1398,  1399,  1402,     6,     9,    91,   103,   108,   212,
     213,   214,   221,   233,   267,   268,   274,   276,   279,   281,
     282,   283,   287,   289,   296,   332,   352,   380,   413,   458,
     473,   474,   483,   511,   521,   543,   548,   556,   558,   564,
     954,  1345,  1372,  1373,  1375,  1398,  1409,  1410,  1411,  1412,
    1413,  1414,  1415,   268,   509,   513,   514,   959,  1340,  1341,
    1342,  1343,  1344,  1345,  1378,  1398,  1410,  1412,   279,   963,
     964,  1358,  1359,  1360,  1402,   968,   970,   279,   374,   990,
     991,  1385,  1398,   994,  1352,     6,   998,  1346,  1347,  1370,
    1400,  1401,  1402,  1410,   505,  1004,  1352,   246,   255,   347,
     486,  1009,  1011,   279,   337,  1014,  1015,  1016,  1017,  1019,
    1372,  1385,  1398,  1028,  1373,  1009,   970,  1034,   504,   515,
    1037,  1038,  1039,  1325,  1326,  1327,   219,   353,   354,   372,
     433,  1051,  1055,  1369,  1370,  1058,  1402,   496,  1061,  1500,
    1373,  1324,  1325,  1070,  1369,   558,  1080,  1354,  1083,  1084,
    1398,  1409,  1412,  1203,  1393,  1394,  1402,   103,  1103,  1373,
    1106,  1373,   189,   246,   255,   347,  1110,  1111,  1112,    51,
     211,   266,   268,   279,   557,   788,  1117,  1121,  1122,  1123,
    1358,  1387,  1398,  1402,  1409,  1412,  1504,  1131,  1352,   558,
    1147,  1353,  1157,  1348,  1402,  1161,  1352,   505,  1165,  1348,
    1349,     9,  1172,  1350,  1402,   171,   262,   296,  1187,  1190,
    1191,  1194,  1195,  1196,  1197,  1198,  1199,  1200,  1355,  1356,
    1369,  1392,  1394,  1402,  1203,  1213,  1352,  1221,  1227,  1228,
    1229,  1373,   103,   483,  1236,  1372,  1242,  1354,   501,   558,
     921,   922,   925,   926,   931,  1245,  1395,  1398,  1248,  1352,
    1251,  1398,  1278,  1349,  1353,  1180,  1353,   433,    81,   758,
     141,   444,   451,   781,   782,   784,   794,   796,   798,  1425,
     501,   729,   501,   317,   341,  1433,   299,   426,   712,   713,
     714,   715,   717,   441,   452,    71,  1468,   501,   620,   501,
     558,   619,    65,  1468,   615,  1504,   645,  1468,  1468,  1468,
    1362,  1402,    76,  1362,  1468,  1468,  1362,   558,   656,   657,
     658,  1368,   279,   336,   338,   640,   642,   643,  1188,  1405,
    1468,   501,   501,   558,   596,  1468,  1468,    68,   466,   503,
     604,   423,   501,    50,   911,   912,   913,  1452,   911,   337,
     558,   501,   239,   335,  1510,   146,   951,   937,   294,  1476,
     216,   513,  1403,  1404,   335,  1480,  1411,  1398,   513,   513,
     513,  1417,   513,  1399,  1410,  1412,  1510,  1510,   513,   513,
     513,   513,  1510,  1393,   513,  1417,   147,   956,   496,   955,
    1373,   497,   513,  1416,   513,   513,  1399,  1410,  1412,  1344,
    1398,  1340,  1344,    63,   509,   514,   500,   510,   188,   244,
    1428,   964,   496,  1510,   148,   987,   279,   971,   972,  1386,
    1398,  1412,   991,  1352,   391,   527,   995,  1504,  1516,  1480,
     149,   999,   177,   502,  1347,  1508,   422,  1434,  1403,  1404,
    1005,  1352,   150,  1006,   386,  1486,   486,  1497,   486,  1353,
     151,  1025,   184,   323,  1291,  1293,  1295,  1017,  1371,  1372,
    1018,   538,   539,   540,   541,   152,  1029,    50,   250,   279,
     153,  1048,    17,   555,  1040,  1041,  1042,  1044,    20,   188,
     254,   317,   343,   498,   500,   509,   510,   513,   514,  1328,
    1329,  1331,  1373,  1468,   110,  1052,  1370,  1357,   491,  1498,
    1071,  1504,  1354,   101,   400,   484,  1085,  1086,  1088,  1089,
    1205,   513,  1403,  1373,   496,   156,  1107,    50,  1111,   445,
    1113,  1480,     1,    41,    42,    43,    44,    45,    84,    85,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   360,
     375,   789,   790,   791,   792,   793,   811,   812,  1399,   789,
    1122,   157,   501,  1118,  1120,   534,   553,   492,   495,   489,
     159,  1143,   311,   364,  1431,   160,  1154,   294,   435,  1148,
     216,  1279,   161,  1162,  1486,   558,   162,  1168,  1279,  1350,
     163,  1177,   553,  1173,  1381,  1383,  1398,  1410,  1412,   184,
    1197,  1199,  1369,   496,  1356,   134,   496,   535,  1189,    32,
    1403,   164,  1219,   197,   259,   262,  1215,   980,  1222,  1373,
    1504,   165,  1233,   250,  1229,   121,  1230,  1398,  1393,   166,
    1237,   216,  1354,   433,   501,   501,   216,   386,   388,  1487,
     167,  1260,   121,  1252,   168,  1283,  1279,   216,  1181,  1182,
     501,   433,   284,   839,   558,   786,   786,   786,   782,   501,
       1,   195,   785,   786,   558,   731,   341,  1367,   718,   386,
     454,   455,   716,     1,   501,   714,  1468,   441,  1405,   501,
    1468,   558,  1363,   501,   116,  1468,   233,   279,   289,   380,
     458,   511,   564,   661,   662,  1408,  1362,   279,   279,   519,
     657,    22,   254,  1368,  1469,  1188,   254,   465,  1482,  1468,
     105,  1367,   628,   501,    80,   190,   389,   507,   597,   598,
     599,    35,   306,   307,   308,   376,   517,   518,   522,  1436,
    1468,   912,   452,   529,   914,   915,   392,   551,   905,  1402,
      31,    38,   217,   297,   939,   940,   941,   943,   946,  1449,
    1450,  1504,   104,    25,    26,    73,    75,    77,   112,   113,
     114,   171,   173,   180,   184,   275,   277,   493,   546,   558,
     942,  1356,  1507,  1338,  1340,   513,  1404,   169,   372,  1379,
    1399,   496,  1338,  1340,  1423,  1338,  1424,   498,  1338,  1419,
    1420,   558,   558,  1340,  1422,  1422,  1422,  1377,  1398,  1410,
    1412,  1421,   558,   496,  1377,  1418,     6,  1346,  1373,  1402,
    1410,   223,  1411,  1340,  1377,  1338,   498,   244,  1429,  1341,
    1341,  1342,  1342,  1342,   411,   960,   371,   965,  1360,   969,
     310,   374,   973,    27,   995,   285,   313,   209,  1460,  1399,
    1340,   297,  1435,  1404,  1352,   409,  1136,  1137,  1138,  1010,
    1504,   928,   929,   928,  1294,  1295,  1292,  1293,   537,   943,
     946,  1020,  1021,  1022,  1504,  1291,  1291,  1291,  1291,  1373,
    1346,  1373,   549,   974,  1039,    21,   504,   515,  1045,  1046,
    1326,   555,  1042,  1043,   555,   928,  1330,  1331,  1329,    12,
      13,    14,    66,   177,   227,   228,   269,   270,   309,   322,
     330,   337,   362,   502,   506,   508,  1332,  1333,  1334,  1335,
    1336,  1337,   123,  1062,  1358,   143,   928,  1066,     9,    12,
      15,    16,   302,   303,   330,   331,  1072,  1076,   195,  1381,
       9,    63,   197,   263,   519,  1092,  1093,  1094,  1087,  1088,
     135,   338,   557,  1207,  1481,  1519,   496,  1369,  1346,  1373,
    1504,  1136,   789,   501,   928,   187,  1124,  1324,  1125,  1126,
    1398,  1358,     8,    38,  1281,  1486,   250,  1391,  1398,  1409,
    1412,   250,  1132,  1136,   145,  1174,  1398,  1174,   496,   496,
     496,  1188,   169,   504,   515,  1373,    50,    39,    47,   232,
     265,   288,   348,   414,   526,  1192,  1193,  1468,  1214,  1504,
    1373,   179,   316,  1398,  1452,   216,   216,  1346,  1373,   927,
    1405,  1381,  1452,   250,  1255,  1280,  1281,  1398,  1183,  1504,
     778,   501,   433,   278,   841,   797,   799,   398,   501,   501,
     783,    94,    48,    70,   111,   261,   273,   386,   387,   401,
     403,   501,   551,   732,   733,   735,   739,   740,   743,   744,
     750,   753,   755,   756,  1468,   678,   505,  1458,    23,  1446,
     501,  1405,   280,   480,   547,   625,  1363,   297,    29,   137,
     233,   279,   289,   305,   380,   458,   461,   462,   564,   646,
     647,   648,   651,   662,   492,   665,  1504,   440,   279,   659,
    1406,  1482,   254,  1367,  1367,   641,   642,   219,   372,   629,
     630,   631,   599,   372,  1485,    80,   306,   307,   376,   522,
     606,  1468,   452,   915,   341,   916,   118,   918,   564,  1388,
    1392,  1405,  1468,   180,   184,   321,   323,  1284,  1286,  1287,
    1289,  1290,   941,    72,    74,   275,   361,   944,   945,  1506,
     493,    33,    36,    39,    47,   100,   119,   210,   218,   232,
     265,   286,   288,   313,   315,   336,   348,   377,   378,   405,
     412,   414,   415,   429,   434,   452,   482,   494,   526,   536,
     542,   947,   948,   949,   950,  1284,   563,   562,  1381,  1284,
     259,   465,   328,   301,    78,   438,   498,  1339,   499,  1340,
     279,  1380,  1399,  1398,  1339,   498,  1339,   498,   498,   498,
    1377,  1339,   498,   498,   498,  1339,   498,  1393,  1339,   498,
    1480,   326,   453,  1296,  1298,  1300,  1403,  1404,  1346,   499,
     498,   498,   496,  1430,   960,  1370,   496,  1358,   974,   416,
     397,  1296,  1468,   211,  1460,   253,   324,  1317,  1318,  1320,
    1322,   259,   930,   105,   106,   366,   558,  1023,  1356,  1021,
      36,    39,    46,    47,   100,   178,   210,   232,   288,   327,
     348,   429,   452,   526,   949,  1024,   223,  1296,   223,   975,
      17,   492,  1047,   346,  1045,   564,  1332,  1500,  1481,   928,
     143,   155,  1067,  1500,   400,  1073,  1500,   496,    50,  1093,
    1095,  1381,     9,    63,   263,   519,  1090,  1091,  1381,  1396,
    1398,   135,    71,   441,  1208,  1505,    28,   124,   825,   239,
     344,  1463,  1369,  1296,   223,     9,   313,   383,   711,  1351,
    1352,   157,  1119,     8,   216,  1132,  1398,  1398,   145,   319,
    1306,  1309,  1311,  1166,  1167,  1504,   928,   555,   555,  1175,
    1176,  1381,   336,  1380,  1373,  1188,  1188,  1188,  1188,  1188,
    1188,  1188,  1188,  1193,   317,   322,  1216,  1217,  1218,  1333,
    1432,  1317,   266,   452,  1518,   465,  1494,  1494,  1232,  1504,
     452,  1231,  1373,  1398,  1393,  1296,   223,   501,   496,     9,
    1253,  1254,  1426,  1256,  1398,  1232,  1256,  1136,     7,  1443,
    1280,   140,   144,   181,  1398,   779,   759,   501,   433,   401,
     843,   551,   833,   806,   807,  1468,  1402,   801,   787,  1468,
      95,  1455,  1468,   386,   388,  1515,  1515,  1468,  1455,  1468,
    1477,  1468,    22,  1445,   335,   757,  1367,   190,   224,   679,
     485,  1496,  1460,    63,   559,  1514,   648,    17,   492,  1408,
     358,  1406,  1367,     9,   221,   558,   632,   558,     1,   501,
     631,    33,   119,  1405,  1468,   558,   501,   906,    48,  1288,
    1289,   928,  1285,  1286,   928,   328,  1478,  1478,  1478,   279,
    1389,  1392,  1407,  1468,  1468,   139,   950,    62,   452,   134,
     535,  1468,     8,  1444,  1284,  1340,   498,  1340,  1434,   481,
    1416,   481,  1416,  1362,  1416,  1416,  1416,  1377,  1434,   263,
     519,  1416,  1399,   928,   928,  1299,  1300,  1297,  1298,  1404,
    1296,   498,  1340,  1416,  1416,  1384,  1398,  1409,   979,   980,
    1436,  1340,   928,   928,  1321,  1322,  1319,  1320,  1385,   931,
    1468,   275,   427,   145,   174,   176,   896,   897,  1457,  1468,
     134,   535,  1468,  1346,  1347,  1346,  1347,   976,   977,   978,
    1452,  1046,  1325,   928,  1398,   928,   551,  1074,  1075,  1076,
    1077,  1498,   551,  1382,  1384,  1381,    50,     8,    38,  1096,
    1097,  1098,  1091,  1096,   209,   441,  1204,  1468,   259,  1470,
     344,  1346,   346,  1483,  1483,   339,   415,  1114,  1352,  1504,
    1126,  1373,     7,   238,  1133,  1134,  1135,  1137,  1140,  1167,
    1504,   111,   314,  1149,  1151,  1153,   928,   928,  1310,  1311,
    1309,  1317,   285,   313,  1325,  1324,  1175,  1333,  1398,  1334,
    1335,  1336,  1337,  1340,  1223,  1373,  1223,   325,   512,  1301,
    1303,  1305,   360,  1434,  1434,  1346,   923,  1382,   343,  1381,
     122,  1257,   484,  1259,  1166,   351,  1356,  1388,   400,  1184,
     760,   840,   501,   433,   427,   888,  1469,   833,   224,   492,
     795,    21,    37,    40,    41,    42,    43,    44,    45,    46,
      82,    86,    87,    88,    89,    90,   130,   199,   200,   201,
     202,   203,   240,   257,   302,   334,   349,   357,   360,   375,
     390,   446,   448,   449,   450,   479,   530,   531,   532,   544,
     802,   803,   804,   807,   808,   809,   810,   811,   812,   813,
     816,   829,   830,   831,   832,   833,   838,  1468,  1491,    27,
     216,   800,  1448,   224,  1405,   558,   694,  1468,  1445,   558,
    1364,  1365,   337,   460,  1511,   279,  1362,  1366,  1405,   553,
    1468,   194,   234,   558,   741,  1367,     4,    19,    30,   241,
     275,   345,   350,   386,   394,   406,   445,   454,   501,   505,
     680,   681,   689,   691,   693,   695,   696,   697,   698,   701,
     702,   703,   704,   705,   707,   708,   710,  1486,  1505,  1455,
    1351,   649,   651,   279,   251,   595,   221,   251,   595,   501,
      33,   919,   920,  1388,  1388,  1388,  1388,  1388,  1468,  1468,
    1323,  1390,  1392,  1405,  1323,  1388,  1389,   498,  1296,   216,
    1438,   498,   184,   323,   512,   982,   984,   986,     6,   250,
     318,   337,   511,   981,  1467,   432,   495,  1388,  1480,   275,
     427,  1388,  1323,  1323,  1388,  1296,   396,  1296,   396,   977,
     337,   914,    96,   392,   551,  1075,   111,  1456,  1500,  1096,
    1096,  1382,   507,  1466,  1466,  1098,  1097,   246,   549,  1209,
    1362,  1206,  1296,   285,   313,    50,  1481,   285,   259,  1141,
    1139,  1140,  1504,   237,   258,   554,   928,   928,  1152,  1153,
    1150,  1151,   285,   928,   928,   928,   928,  1304,  1305,  1302,
    1303,  1468,  1296,  1438,  1296,   545,   924,  1261,  1254,   239,
    1462,   104,  1258,  1462,  1301,   175,   320,  1282,  1312,  1314,
    1316,  1318,   275,   277,  1473,   275,  1472,    58,   761,   762,
     779,   842,   501,   433,   788,   835,   836,  1402,   266,   330,
     447,   529,  1490,   529,  1490,   529,  1490,   529,  1490,   529,
    1490,   555,  1502,   420,  1488,   136,   819,  1405,  1399,   254,
     264,   420,  1471,  1468,   190,   263,   519,   558,   788,   496,
     738,   209,   754,  1365,   277,  1475,   496,  1454,  1462,   191,
     198,   425,   524,   550,   552,   751,   752,  1468,  1468,  1477,
    1486,   496,   549,  1501,   442,  1468,  1453,   122,  1470,  1470,
     313,   709,  1405,  1504,   465,   285,    40,  1451,  1468,   719,
     720,  1352,   650,   651,   920,  1385,  1388,   275,   277,  1517,
     240,  1464,   125,  1439,   928,   928,   928,   985,   986,   983,
     984,  1480,  1398,  1347,  1347,  1374,  1375,  1397,  1399,    50,
     119,  1096,  1373,  1373,   369,  1351,   223,   347,  1210,  1402,
     416,  1373,   285,  1468,  1142,  1307,  1309,  1311,  1317,   285,
     285,  1398,  1439,  1262,   501,  1398,  1462,  1398,   928,   928,
    1315,  1316,  1313,  1314,  1367,   779,   779,   844,   501,   492,
     834,   836,   564,    54,   821,   525,   496,   817,   810,    27,
     805,   440,  1437,  1437,  1405,    63,   388,   734,  1361,  1362,
     745,  1405,   452,  1492,   279,   742,  1402,   742,  1468,  1470,
     136,   190,   686,   394,   702,  1468,  1468,  1468,  1468,    23,
      24,  1447,   711,  1468,  1477,   442,   694,   720,   361,   721,
      17,   145,  1390,  1464,  1296,  1398,  1296,  1296,  1373,  1468,
    1351,   369,   534,  1398,  1310,  1308,  1309,  1296,    31,   138,
     185,   224,  1263,  1264,  1265,  1267,  1271,  1273,  1274,  1275,
    1449,  1460,  1398,   763,   845,   889,   788,   555,   837,  1503,
    1462,   216,   818,   495,  1499,  1405,  1499,   279,  1453,  1362,
      49,   516,   746,   747,   748,   749,  1504,  1454,   216,   737,
    1461,   136,   381,   442,   690,  1468,    55,    56,    57,   128,
     129,   130,   246,   247,   260,   275,   291,   347,   365,   366,
     367,   381,   485,   682,   683,   684,   685,  1366,   461,   706,
    1362,  1362,  1362,  1468,  1405,   651,   118,   496,  1390,  1121,
    1468,  1324,    38,  1444,   372,   116,   764,   382,   846,   784,
     798,   890,   891,   892,   443,   504,   558,  1405,   496,   817,
     123,   123,   820,  1366,  1366,   208,   738,  1405,   706,   279,
     688,  1402,   688,     7,   688,   688,   688,   279,   687,  1402,
     456,   502,    34,   186,   290,   699,   501,  1390,  1121,   402,
     460,  1493,   145,   463,  1272,  1481,   501,   765,  1460,  1354,
       1,   785,   892,   501,   496,  1468,   244,   822,  1481,  1481,
     823,   824,  1449,  1454,  1427,  1519,  1458,  1468,  1361,   557,
     700,   700,  1398,   179,   184,  1509,     9,  1268,  1269,  1359,
     347,  1466,   847,   501,   893,   501,   788,   823,  1362,  1362,
     241,   826,   825,  1366,   123,   736,   477,   692,  1361,   285,
     421,   369,  1484,   335,   370,   393,  1270,  1269,   125,   179,
     465,   478,   488,   770,   771,   772,   246,   255,     1,   848,
     894,   826,   823,  1452,  1470,  1481,   555,   338,  1481,   335,
    1402,   104,   483,  1468,   259,   259,   125,   266,   772,   145,
     294,   465,   478,   488,   766,   767,   768,   769,  1398,  1476,
    1495,   145,   294,   465,   488,   773,   774,   775,   776,  1398,
    1495,   501,    69,    98,    99,   351,   501,   849,   850,   853,
    1468,  1528,    33,    36,    39,    46,    47,   178,   210,   216,
     218,   229,   232,   265,   275,   288,   313,   334,   348,   377,
     405,   434,   482,   496,   507,   526,   549,   808,   809,   813,
     829,   831,   833,   895,   902,   903,   948,   949,  1468,  1506,
     826,   558,   827,   828,  1468,  1362,     9,   458,   564,   652,
     299,   386,   388,  1513,   189,   246,   255,   347,  1266,  1351,
    1468,   334,  1398,  1468,  1468,  1468,  1468,   259,   112,   493,
     259,   266,   768,  1398,   104,   379,   456,   470,   471,   472,
     259,   112,   493,   259,   266,   775,  1398,   486,  1468,  1468,
    1445,   271,   272,  1474,   862,   224,   196,   851,  1459,  1468,
     275,   427,   896,   897,  1468,  1391,  1478,  1405,    62,  1398,
    1398,   224,  1478,   828,  1361,  1411,  1513,  1398,  1405,  1398,
    1398,  1398,  1398,  1468,  1468,  1468,  1468,  1468,  1398,  1468,
    1468,  1468,  1468,  1468,  1468,  1468,  1468,  1468,  1468,  1468,
    1398,  1468,  1385,  1468,  1445,   854,  1407,   784,   863,   852,
    1398,  1388,  1388,  1468,  1499,  1468,  1468,  1499,  1398,  1398,
    1398,  1398,  1398,  1398,  1398,  1398,  1398,  1398,  1398,  1398,
    1398,  1398,  1398,  1398,  1398,  1398,  1398,   855,   275,   277,
    1512,   785,   786,  1398,   295,   359,   509,   514,   898,   899,
     900,  1385,   898,   899,   901,   826,  1398,  1398,   197,   208,
     231,   262,   856,   857,   858,   859,   860,   861,  1407,   864,
    1388,  1388,  1398,  1398,   115,   126,  1521,  1468,  1468,    60,
      98,  1521,  1522,  1507,   865,  1398,  1468,  1407,  1407,   231,
    1468,  1468,   230,   275,   277,   311,   334,   363,   456,   476,
     501,   523,   544,   553,   808,   813,   814,   829,   831,   833,
     866,   867,   871,   872,   875,   876,   877,   878,   879,   880,
     885,   886,   887,  1506,  1507,  1398,  1407,  1407,  1407,   242,
    1465,   328,   329,  1479,  1445,   230,  1405,   555,  1468,  1480,
    1468,  1468,  1398,   312,   359,   881,   882,  1407,   359,   883,
     884,  1407,  1479,  1445,  1398,  1469,  1468,   817,  1324,  1378,
    1376,  1378,    59,    98,   351,   355,   356,   401,   418,   419,
     868,  1521,  1522,  1523,  1524,  1525,  1526,  1527,   130,   216,
    1405,   882,  1405,   884,  1469,  1398,   882,  1499,  1434,   407,
     873,  1378,   208,   208,   231,   208,   231,   196,   869,  1398,
     869,  1378,  1398,   820,  1481,   343,   870,   870,    50,   467,
     815,   196,   874,  1398,   351,  1378,  1405
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
/* Line 1792 of yacc.c  */
#line 2333 "parser.y"
    {
	clear_initial_values ();
	current_program = NULL;
	defined_prog_list = NULL;
	cobc_cs_check = 0;
	main_flag_set = 0;
	current_program = cb_build_program (NULL, 0);
	cb_build_registers ();
  }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 2343 "parser.y"
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
		emit_entry (current_program->program_id, 0, NULL, NULL);
	}
  }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 2369 "parser.y"
    {
	first_prog = 1;
	depth = 0;
	setup_from_identification = 0;
  }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 2388 "parser.y"
    {
	cb_tree		l;

	current_section = NULL;
	current_paragraph = NULL;
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

  case 13:
/* Line 1792 of yacc.c  */
#line 2405 "parser.y"
    {
	clean_up_program (NULL, CB_PROGRAM_TYPE);
  }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 2432 "parser.y"
    {
	clean_up_program (NULL, CB_PROGRAM_TYPE);
  }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 2445 "parser.y"
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[(2) - (3)]), CB_PROGRAM_TYPE);
  }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 2453 "parser.y"
    {
	clean_up_program ((yyvsp[(2) - (3)]), CB_FUNCTION_TYPE);
  }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 2471 "parser.y"
    {
	setup_program_start();
	setup_from_identification = 1;
}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 2484 "parser.y"
    {
	cobc_in_id = 1;
  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 2488 "parser.y"
    {
	if (setup_program ((yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}

	setup_prototype ((yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]), CB_PROGRAM_TYPE, 1);
  }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 2496 "parser.y"
    {
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 2504 "parser.y"
    {
	cobc_in_id = 1;
  }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 2508 "parser.y"
    {
	if (setup_program ((yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	setup_prototype ((yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), CB_FUNCTION_TYPE, 1);
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 2520 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
	}
	/*
	  The program name is a key part of defining the current_program, so we
	  mustn't lose it (unlike in undefined_word).
	*/
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 2531 "parser.y"
    {
	cb_trim_program_id ((yyvsp[(1) - (1)]));
  }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 2539 "parser.y"
    {
	cb_trim_program_id ((yyvsp[(1) - (1)]));
  }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 2545 "parser.y"
    { (yyval) = NULL; }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 2546 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 2555 "parser.y"
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
/* Line 1792 of yacc.c  */
#line 2564 "parser.y"
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 2574 "parser.y"
    {
	CB_PENDING (_("CALL prototypes"));
  }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 2586 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 2590 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 2599 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 2613 "parser.y"
    {
	default_rounded_mode = cb_int (COB_STORE_ROUND);
  }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 2617 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		default_rounded_mode = (yyvsp[(5) - (5)]);
	} else {
		default_rounded_mode = cb_int (COB_STORE_ROUND);
	}
  }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 2629 "parser.y"
    {
	current_program->entry_convention = (yyvsp[(3) - (3)]);
	current_program->entry_convention->source_file = cb_source_file;
	current_program->entry_convention->source_line = cb_source_line;
  }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 2638 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_COBOL);
  }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 2642 "parser.y"
    {
	(yyval) = cb_int (0);
  }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 2646 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
  }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 2654 "parser.y"
    {
	CB_PENDING ("INTERMEDIATE ROUNDING");
  }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 2661 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 2665 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 2669 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 2673 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 2688 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 2705 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 2719 "parser.y"
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("phrases in non-standard order"));
	}
  }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 2731 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 2746 "parser.y"
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 2759 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 2788 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 2796 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 2803 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 2810 "parser.y"
    {
	if (current_program->classification) {
		cb_error (_("duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 2821 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 2825 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 2829 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 2833 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 2847 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 2852 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 2860 "parser.y"
    {
	yyerrok;
  }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 2872 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 2876 "parser.y"
    {
	if ((yyvsp[(2) - (3)]) != cb_error_node) {
		setup_prototype ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), CB_FUNCTION_TYPE, 0);
	}
  }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 2883 "parser.y"
    {
	  if ((yyvsp[(2) - (3)]) != cb_error_node
	      && cb_verify (cb_program_prototypes, _("PROGRAM phrase"))) {
		setup_prototype ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), CB_PROGRAM_TYPE, 0);
	}
  }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 2893 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 2898 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 2909 "parser.y"
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

  case 137:
/* Line 1792 of yacc.c  */
#line 2954 "parser.y"
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
		system_name[15] = 0;
		strncpy(system_name, CB_NAME ((yyvsp[(1) - (1)])), 15);
		if (system_name [6] == '_') {
			system_name [6] = ' ';
		}
		/* lookup system name */
		save_tree = lookup_system_name (system_name);
		if (!save_tree) {
			cb_error_x ((yyvsp[(1) - (1)]), _("invalid system-name '%s'"), system_name);
		}
	}
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 2983 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("invalid %s clause"), "");
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 2994 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (save_tree, _("invalid %s clause"), "SPECIAL NAMES");
		} else if (CB_VALID_TREE ((yyvsp[(3) - (3)]))) {
			CB_SYSTEM_NAME(save_tree)->value = (yyvsp[(1) - (3)]);
			cb_define ((yyvsp[(3) - (3)]), save_tree);
			CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
					(yyvsp[(3) - (3)]), save_tree);
			/* remove non-standard context-sensitive words when identical to mnemonic */
			if (strcasecmp (CB_NAME((yyvsp[(3) - (3)])), "EXTERN") == 0 ||
			    strcasecmp (CB_NAME((yyvsp[(3) - (3)])), "STDCALL") == 0 ||
			    strcasecmp (CB_NAME((yyvsp[(3) - (3)])), "STATIC") == 0) {
				remove_context_sensitivity (CB_NAME((yyvsp[(3) - (3)])), CB_CS_CALL);
			}
		}
	}
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 3013 "parser.y"
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[(2) - (3)]))) {
		cb_define ((yyvsp[(2) - (3)]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[(2) - (3)]), save_tree);
	}
  }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 3029 "parser.y"
    {
	  check_on_off_duplicate = 0;
  }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 3036 "parser.y"
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(3) - (3)]), save_tree, (yyvsp[(1) - (3)]) == cb_int1);
	if (x) {
		if ((yyvsp[(1) - (3)]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(3) - (3)]), x);
	}
  }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 3051 "parser.y"
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(4) - (4)]), save_tree, (yyvsp[(2) - (4)]) == cb_int1);
	if (x) {
		if ((yyvsp[(2) - (4)]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(4) - (4)]), x);
	}
  }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 3071 "parser.y"
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

  case 149:
/* Line 1792 of yacc.c  */
#line 3084 "parser.y"
    {
	if ((yyvsp[(3) - (5)])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[(3) - (5)]));
	}
	cobc_cs_check = 0;
  }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 3095 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 3101 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 3107 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 3113 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 3119 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 3125 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 3135 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 3139 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 3146 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 3150 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 3154 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 3158 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 3165 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 3169 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 3175 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 3176 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 3177 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 3178 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 3179 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 3180 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 3184 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 3185 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 3193 "parser.y"
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

  case 173:
/* Line 1792 of yacc.c  */
#line 3207 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 3211 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 3219 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 3226 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 3230 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	} else {
		(yyval) = (yyvsp[(1) - (2)]);
	}
  }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 3241 "parser.y"
    {
	cb_tree		l1;
	cb_tree		l2;

	if (cb_list_length ((yyvsp[(1) - (3)])) != cb_list_length ((yyvsp[(3) - (3)]))) {
		cb_error (_("invalid %s clause"), "SYMBOLIC");
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

  case 179:
/* Line 1792 of yacc.c  */
#line 3261 "parser.y"
    {
	if ((yyvsp[(1) - (1)]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 3269 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) == NULL) {
		(yyval) = (yyvsp[(1) - (2)]);
	} else {
		(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 3279 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 3280 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 3287 "parser.y"
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

  case 184:
/* Line 1792 of yacc.c  */
#line 3307 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 3308 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 3313 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 3317 "parser.y"
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

  case 188:
/* Line 1792 of yacc.c  */
#line 3338 "parser.y"
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

  case 189:
/* Line 1792 of yacc.c  */
#line 3361 "parser.y"
    {
	unsigned char	*s = CB_LITERAL ((yyvsp[(4) - (5)]))->data;
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
			if ((yyvsp[(5) - (5)]) && CB_LITERAL ((yyvsp[(4) - (5)]))->size != 1) {
				CB_PENDING_X ((yyvsp[(4) - (5)]), _("CURRENCY SIGN longer than one character"));
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
				CB_PENDING_X ((yyvsp[(4) - (5)]), _("CURRENCY SIGN other than '$'"));
			}
		}
		switch (error_ind) {
		case 0:
		case 1:
			/* FIXME: currency sign/symbol are currently mixed in cobc and libcob */
			/* current_program->currency_sign = CB_LITERAL ($4); */
			break;
		default:
			cb_error_x ((yyvsp[(4) - (5)]), _("invalid CURRENCY SIGN '%s'"), (char*)CB_LITERAL ((yyvsp[(4) - (5)]))->data);
			break;
		}
		if ((yyvsp[(5) - (5)])) {
			set_currency_picture_symbol ((yyvsp[(5) - (5)]));
		} else {
			set_currency_picture_symbol ((yyvsp[(4) - (5)]));
		}
	}
  }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 3435 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 3439 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 3448 "parser.y"
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
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 3467 "parser.y"
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

  case 194:
/* Line 1792 of yacc.c  */
#line 3483 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3, &check_duplicate);
		current_program->cursor_pos = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 3501 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CRT STATUS", SYN_CLAUSE_4, &check_duplicate);
		current_program->crt_status = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 3519 "parser.y"
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
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 3536 "parser.y"
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
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 3557 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 3564 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 3572 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 3581 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 3596 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_FILE_CONTROL, 0);
	check_duplicate = 0;
	if (CB_VALID_TREE ((yyvsp[(3) - (3)]))) {
		/* Build new file */
		current_file = build_file ((yyvsp[(3) - (3)]));
		current_file->optional = CB_INTEGER ((yyvsp[(2) - (3)]))->val;

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
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 3618 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(3) - (6)]))) {
		validate_file (current_file, (yyvsp[(3) - (6)]));
	}
  }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 3650 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 3656 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 3666 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 3677 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
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

  case 228:
/* Line 1792 of yacc.c  */
#line 3690 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
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

  case 229:
/* Line 1792 of yacc.c  */
#line 3703 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		/* RM/COBOL always expects an assignment name here - we ignore this
		   for PRINTER + PRINTER-1 as ACUCOBOL allows this for using as alias */
		current_file->flag_ext_assign = 0;
		if ((yyvsp[(4) - (5)]) == cb_int0) {
			current_file->assign =
				cb_build_alphanumeric_literal ("PRINTER",	(size_t)7);
		} else if ((yyvsp[(4) - (5)]) == cb_int1) {
			current_file->assign =
				cb_build_alphanumeric_literal ("PRINTER-1",	(size_t)9);
		} else {
			current_file->assign =
				cb_build_alphanumeric_literal ("LPT1",	(size_t)4);
		}

	}
  }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 3735 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 3736 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 3737 "parser.y"
    { (yyval) = cb_int4; }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 3760 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 3767 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 3780 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 3792 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 3799 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 3800 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 3801 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 3809 "parser.y"
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

  case 259:
/* Line 1792 of yacc.c  */
#line 3832 "parser.y"
    { }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 3835 "parser.y"
    {
	CB_PENDING ("SUPPRESS WHEN ALL");
  }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 3840 "parser.y"
    {
	CB_PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 3850 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	CB_PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 3858 "parser.y"
    {
	  if (CB_ALPHABET_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		  (yyval) = (yyvsp[(1) - (1)]);
	  } else {
		  cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not an alphabet-name"),
			      cb_name ((yyvsp[(1) - (1)])));
		  (yyval) = cb_error_node;
	  }
  }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 3873 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 3888 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 3896 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 3901 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 3906 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 3915 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 3919 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	CB_PENDING ("WITH ROLLBACK");
  }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 3935 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 3940 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 3945 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 3950 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 3961 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 3972 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 3982 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 3989 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 3990 "parser.y"
    { CB_PENDING ("SPLIT KEYS"); }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 3991 "parser.y"
    { CB_PENDING ("SPLIT KEYS"); }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 3998 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 4009 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 4023 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 4030 "parser.y"
    { (yyval) = NULL; }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 4031 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 4032 "parser.y"
    { (yyval) = NULL; }
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 4041 "parser.y"
    {
	yyerrok;
  }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 4060 "parser.y"
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
				CB_FILE (cb_ref (CB_VALUE (l)))->same_clause = same_area;
			}
		}
		same_area++;
		break;
	case 2:
		/* SAME SORT-MERGE */
		break;
	}
  }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 4087 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 4088 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 4089 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 4090 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 4097 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 4102 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 4131 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 4140 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 4147 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 4156 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 4170 "parser.y"
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

  case 325:
/* Line 1792 of yacc.c  */
#line 4189 "parser.y"
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

  case 327:
/* Line 1792 of yacc.c  */
#line 4206 "parser.y"
    {
	yyerrok;
  }
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 4213 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 4217 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 4228 "parser.y"
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("file cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 4238 "parser.y"
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
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 4268 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 4281 "parser.y"
    {
	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
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

  case 348:
/* Line 1792 of yacc.c  */
#line 4301 "parser.y"
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
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

  case 349:
/* Line 1792 of yacc.c  */
#line 4336 "parser.y"
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
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

  case 351:
/* Line 1792 of yacc.c  */
#line 4367 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 4373 "parser.y"
    { (yyval) = NULL; }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 4374 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 4378 "parser.y"
    { (yyval) = NULL; }
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 4379 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 4387 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 4398 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 4403 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	}
  }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 4426 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 4438 "parser.y"
    {
	check_repeated ("LINAGE", SYN_CLAUSE_8, &check_duplicate);
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

  case 370:
/* Line 1792 of yacc.c  */
#line 4466 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 4473 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 4480 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 4489 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 4502 "parser.y"
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("RECORDING MODE U or S can only be used with RECORD SEQUENTIAL files"));
	}
  }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 4518 "parser.y"
    {
	struct cb_alphabet_name	*al;

	check_repeated ("CODE SET", SYN_CLAUSE_10, &check_duplicate);

	if (CB_VALID_TREE ((yyvsp[(3) - (4)]))) {
		al = CB_ALPHABET_NAME (cb_ref ((yyvsp[(3) - (4)])));
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
			if (warningopt && CB_VALID_TREE ((yyvsp[(3) - (4)]))) {
				cb_warning_x ((yyvsp[(3) - (4)]), _("ignoring CODE-SET '%s'"),
						  cb_name ((yyvsp[(3) - (4)])));
			}
			break;
		}
	}

	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("CODE-SET clause invalid for file type"));
	}

	if (warningopt) {
		CB_PENDING ("CODE-SET");
	}
  }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 4556 "parser.y"
    {
	  if (warningopt) {
		  CB_PENDING ("FOR sub-records");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[(2) - (2)]));
  }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 4569 "parser.y"
    {
	check_repeated ("REPORT", SYN_CLAUSE_11, &check_duplicate);
	CB_PENDING("REPORT WRITER");
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = (yyvsp[(2) - (2)]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	}
  }
    break;

  case 387:
/* Line 1792 of yacc.c  */
#line 4589 "parser.y"
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

  case 388:
/* Line 1792 of yacc.c  */
#line 4599 "parser.y"
    {
	current_report = build_report ((yyvsp[(2) - (2)]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
    break;

  case 390:
/* Line 1792 of yacc.c  */
#line 4613 "parser.y"
    {
	current_storage = CB_STORAGE_COMMUNICATION;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_COMMUNICATION_SECTION;
	/* add a compiler configuration if either */
	if (cb_std_define > CB_STD_85) {
		cb_verify (CB_UNCONFORMABLE, _ ("COMMUNICATION SECTION"));
	} else if (cb_verify (CB_OBSOLETE, _("COMMUNICATION SECTION"))) {
		CB_PENDING ("COMMUNICATION SECTION");
	}
  }
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 4634 "parser.y"
    {
	if (CB_VALID_TREE (current_cd)) {
		if (CB_VALID_TREE ((yyvsp[(2) - (2)]))) {
			cb_finalize_cd (current_cd, CB_FIELD ((yyvsp[(2) - (2)])));
		} else if (!current_cd->record) {
			cb_error (_("CD record missing"));
		}
	}
  }
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 4649 "parser.y"
    {
	/* CD internally defines a new file */
	if (CB_VALID_TREE ((yyvsp[(2) - (2)]))) {
		current_cd = cb_build_cd ((yyvsp[(2) - (2)]));

		CB_ADD_TO_CHAIN (CB_TREE (current_cd),
				 current_program->cd_list);
	} else {
		current_cd = NULL;
		/* TO-DO: Is this necessary? */
		if (current_program->cd_list) {
			current_program->cd_list
				= CB_CHAIN (current_program->cd_list);
		}
	}
	check_duplicate = 0;
  }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 4757 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 4763 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 4772 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 4775 "parser.y"
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 4781 "parser.y"
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 4801 "parser.y"
    {
	if (set_current_field ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]))) {
		YYERROR;
	}
  }
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 4807 "parser.y"
    {
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 4816 "parser.y"
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[(1) - (3)]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 4829 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 4836 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 458:
/* Line 1792 of yacc.c  */
#line 4842 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 460:
/* Line 1792 of yacc.c  */
#line 4852 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 4861 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 4865 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 4876 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 4877 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 4878 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 4879 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 4884 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 4888 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 4892 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 4896 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 4900 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 4904 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 4908 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 4912 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 4916 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 476:
/* Line 1792 of yacc.c  */
#line 4920 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 4924 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 4928 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 4932 "parser.y"
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 4964 "parser.y"
    {
	if (set_current_field ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]))) {
		YYERROR;
	}

	if (cb_ref ((yyvsp[(4) - (5)])) != cb_error_node) {
		error_if_invalid_level_for_renames ((yyvsp[(4) - (5)]));
		current_field->redefines = CB_FIELD (cb_ref ((yyvsp[(4) - (5)])));
	}

	if ((yyvsp[(5) - (5)])) {
		error_if_invalid_level_for_renames ((yyvsp[(5) - (5)]));
		current_field->rename_thru = CB_FIELD (cb_ref ((yyvsp[(5) - (5)])));
	} else {
		/* If there is no THRU clause, RENAMES acts like REDEFINES. */
		current_field->pic = current_field->redefines->pic;
	}

	cb_validate_renames_item (current_field);
  }
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 4988 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 491:
/* Line 1792 of yacc.c  */
#line 4992 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]) == cb_error_node ? NULL : (yyvsp[(2) - (2)]);
  }
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 4999 "parser.y"
    {
	if (set_current_field ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]))) {
		YYERROR;
	}
  }
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 5005 "parser.y"
    {
	cb_validate_88_item (current_field);
  }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 5012 "parser.y"
    {
	cb_tree x;
	int	level;

	cobc_cs_check = 0;
	level = cb_get_level ((yyvsp[(1) - (5)]));
	/* Free tree associated with level number */
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

  case 495:
/* Line 1792 of yacc.c  */
#line 5035 "parser.y"
    {
	if (set_current_field ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]))) {
		YYERROR;
	}
  }
    break;

  case 496:
/* Line 1792 of yacc.c  */
#line 5041 "parser.y"
    {
	/* Reset to last non-78 item */
	current_field = cb_validate_78_item (current_field, 0);
  }
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 5049 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 5053 "parser.y"
    {
	CB_PENDING ("CONSTANT FROM");
	(yyval) = NULL;
  }
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 5061 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 5067 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 5094 "parser.y"
    {
	check_repeated ("REDEFINES", SYN_CLAUSE_1, &check_pic_duplicate);
	if ((yyvsp[(0) - (2)]) != NULL) {
		if (cb_relaxed_syntax_checks) {
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

  case 515:
/* Line 1792 of yacc.c  */
#line 5118 "parser.y"
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
    break;

  case 516:
/* Line 1792 of yacc.c  */
#line 5145 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 517:
/* Line 1792 of yacc.c  */
#line 5149 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 5162 "parser.y"
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
    break;

  case 521:
/* Line 1792 of yacc.c  */
#line 5187 "parser.y"
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 5203 "parser.y"
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 525:
/* Line 1792 of yacc.c  */
#line 5207 "parser.y"
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 526:
/* Line 1792 of yacc.c  */
#line 5211 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 5215 "parser.y"
    {
	check_and_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 5219 "parser.y"
    {
	check_and_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 529:
/* Line 1792 of yacc.c  */
#line 5223 "parser.y"
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 530:
/* Line 1792 of yacc.c  */
#line 5227 "parser.y"
    {
	check_and_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 5231 "parser.y"
    {
	check_and_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 5235 "parser.y"
    {
	check_and_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 533:
/* Line 1792 of yacc.c  */
#line 5239 "parser.y"
    {
	check_and_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 534:
/* Line 1792 of yacc.c  */
#line 5243 "parser.y"
    {
	check_and_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 5247 "parser.y"
    {
	check_and_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 536:
/* Line 1792 of yacc.c  */
#line 5251 "parser.y"
    {
	check_and_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 537:
/* Line 1792 of yacc.c  */
#line 5256 "parser.y"
    {
	check_and_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 538:
/* Line 1792 of yacc.c  */
#line 5261 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 539:
/* Line 1792 of yacc.c  */
#line 5265 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 540:
/* Line 1792 of yacc.c  */
#line 5269 "parser.y"
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
    break;

  case 541:
/* Line 1792 of yacc.c  */
#line 5277 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 542:
/* Line 1792 of yacc.c  */
#line 5281 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 5285 "parser.y"
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
    break;

  case 544:
/* Line 1792 of yacc.c  */
#line 5293 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 545:
/* Line 1792 of yacc.c  */
#line 5297 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 546:
/* Line 1792 of yacc.c  */
#line 5301 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 547:
/* Line 1792 of yacc.c  */
#line 5305 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 548:
/* Line 1792 of yacc.c  */
#line 5309 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 5313 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 5317 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 5321 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 5325 "parser.y"
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 5333 "parser.y"
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
    break;

  case 554:
/* Line 1792 of yacc.c  */
#line 5341 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 555:
/* Line 1792 of yacc.c  */
#line 5345 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 556:
/* Line 1792 of yacc.c  */
#line 5349 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 557:
/* Line 1792 of yacc.c  */
#line 5353 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 558:
/* Line 1792 of yacc.c  */
#line 5357 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 559:
/* Line 1792 of yacc.c  */
#line 5361 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	CB_UNFINISHED ("USAGE NATIONAL");
  }
    break;

  case 564:
/* Line 1792 of yacc.c  */
#line 5381 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 565:
/* Line 1792 of yacc.c  */
#line 5388 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 566:
/* Line 1792 of yacc.c  */
#line 5402 "parser.y"
    {
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]));
  }
    break;

  case 568:
/* Line 1792 of yacc.c  */
#line 5411 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 569:
/* Line 1792 of yacc.c  */
#line 5421 "parser.y"
    {
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max ((yyvsp[(2) - (7)]), (yyvsp[(3) - (7)]));
  }
    break;

  case 570:
/* Line 1792 of yacc.c  */
#line 5428 "parser.y"
    {
	current_field->flag_unbounded = 1;
	if (current_field->parent) {
		current_field->parent->flag_unbounded = 1;
	}
	current_field->depending = (yyvsp[(7) - (9)]);
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max ((yyvsp[(2) - (9)]), cb_int0);
  }
    break;

  case 571:
/* Line 1792 of yacc.c  */
#line 5440 "parser.y"
    {
	setup_occurs ();
	current_field->occurs_min = (yyvsp[(4) - (8)]) ? cb_get_int ((yyvsp[(4) - (8)])) : 0;
	if ((yyvsp[(5) - (8)])) {
		current_field->occurs_max = cb_get_int ((yyvsp[(5) - (8)]));
		if (current_field->occurs_max <= current_field->occurs_min) {
			cb_error (_("OCCURS TO must be greater than OCCURS FROM"));
		}
	} else {
		current_field->occurs_max = 0;
	}
	CB_PENDING("OCCURS DYNAMIC");
  }
    break;

  case 572:
/* Line 1792 of yacc.c  */
#line 5456 "parser.y"
    { (yyval) = NULL; }
    break;

  case 573:
/* Line 1792 of yacc.c  */
#line 5457 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 574:
/* Line 1792 of yacc.c  */
#line 5461 "parser.y"
    { (yyval) = NULL; }
    break;

  case 575:
/* Line 1792 of yacc.c  */
#line 5462 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 576:
/* Line 1792 of yacc.c  */
#line 5466 "parser.y"
    { (yyval) = NULL; }
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 5467 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 5472 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 5478 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 5486 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 5493 "parser.y"
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

  case 585:
/* Line 1792 of yacc.c  */
#line 5516 "parser.y"
    { (yyval) = NULL; }
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 5519 "parser.y"
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

  case 587:
/* Line 1792 of yacc.c  */
#line 5534 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 5535 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 5540 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 5546 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 5548 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 5553 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 5564 "parser.y"
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
    break;

  case 595:
/* Line 1792 of yacc.c  */
#line 5575 "parser.y"
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
    break;

  case 596:
/* Line 1792 of yacc.c  */
#line 5586 "parser.y"
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 597:
/* Line 1792 of yacc.c  */
#line 5597 "parser.y"
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
    break;

  case 598:
/* Line 1792 of yacc.c  */
#line 5625 "parser.y"
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 600:
/* Line 1792 of yacc.c  */
#line 5633 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 5634 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 5638 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 603:
/* Line 1792 of yacc.c  */
#line 5639 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 605:
/* Line 1792 of yacc.c  */
#line 5644 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 606:
/* Line 1792 of yacc.c  */
#line 5656 "parser.y"
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else {
		current_field->flag_any_length = 1;
	}
  }
    break;

  case 607:
/* Line 1792 of yacc.c  */
#line 5665 "parser.y"
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY NUMERIC");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
    break;

  case 609:
/* Line 1792 of yacc.c  */
#line 5680 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
    break;

  case 610:
/* Line 1792 of yacc.c  */
#line 5689 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 612:
/* Line 1792 of yacc.c  */
#line 5701 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 613:
/* Line 1792 of yacc.c  */
#line 5707 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 615:
/* Line 1792 of yacc.c  */
#line 5718 "parser.y"
    {
	CB_PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
    break;

  case 619:
/* Line 1792 of yacc.c  */
#line 5734 "parser.y"
    {
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[(2) - (2)])));
	}
	check_duplicate = 0;
  }
    break;

  case 623:
/* Line 1792 of yacc.c  */
#line 5749 "parser.y"
    {
	yyerrok;
  }
    break;

  case 624:
/* Line 1792 of yacc.c  */
#line 5756 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 625:
/* Line 1792 of yacc.c  */
#line 5761 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 628:
/* Line 1792 of yacc.c  */
#line 5772 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 632:
/* Line 1792 of yacc.c  */
#line 5791 "parser.y"
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
    break;

  case 633:
/* Line 1792 of yacc.c  */
#line 5827 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (1)]));
  }
    break;

  case 634:
/* Line 1792 of yacc.c  */
#line 5831 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
	current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
  }
    break;

  case 635:
/* Line 1792 of yacc.c  */
#line 5836 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (2)]));
  }
    break;

  case 643:
/* Line 1792 of yacc.c  */
#line 5856 "parser.y"
    {
	current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 644:
/* Line 1792 of yacc.c  */
#line 5863 "parser.y"
    {
	current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 645:
/* Line 1792 of yacc.c  */
#line 5870 "parser.y"
    {
	current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 646:
/* Line 1792 of yacc.c  */
#line 5877 "parser.y"
    {
	current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 647:
/* Line 1792 of yacc.c  */
#line 5884 "parser.y"
    {
	current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 650:
/* Line 1792 of yacc.c  */
#line 5895 "parser.y"
    {
	check_pic_duplicate = 0;
  }
    break;

  case 670:
/* Line 1792 of yacc.c  */
#line 5926 "parser.y"
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
    break;

  case 683:
/* Line 1792 of yacc.c  */
#line 5952 "parser.y"
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
    break;

  case 684:
/* Line 1792 of yacc.c  */
#line 5959 "parser.y"
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
    break;

  case 689:
/* Line 1792 of yacc.c  */
#line 5975 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
    break;

  case 691:
/* Line 1792 of yacc.c  */
#line 5986 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
    break;

  case 694:
/* Line 1792 of yacc.c  */
#line 5998 "parser.y"
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
    break;

  case 706:
/* Line 1792 of yacc.c  */
#line 6031 "parser.y"
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
    break;

  case 707:
/* Line 1792 of yacc.c  */
#line 6038 "parser.y"
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
    break;

  case 708:
/* Line 1792 of yacc.c  */
#line 6045 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
    break;

  case 710:
/* Line 1792 of yacc.c  */
#line 6054 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 711:
/* Line 1792 of yacc.c  */
#line 6061 "parser.y"
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

  case 717:
/* Line 1792 of yacc.c  */
#line 6086 "parser.y"
    {
	cb_tree	x;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[(1) - (2)]));
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
    break;

  case 718:
/* Line 1792 of yacc.c  */
#line 6106 "parser.y"
    {
	cob_flags_t	flags;

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
    break;

  case 719:
/* Line 1792 of yacc.c  */
#line 6146 "parser.y"
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

  case 722:
/* Line 1792 of yacc.c  */
#line 6169 "parser.y"
    {
	set_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
				       "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 723:
/* Line 1792 of yacc.c  */
#line 6174 "parser.y"
    {
	set_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				       "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 724:
/* Line 1792 of yacc.c  */
#line 6179 "parser.y"
    {
	set_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 725:
/* Line 1792 of yacc.c  */
#line 6183 "parser.y"
    {
	set_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 726:
/* Line 1792 of yacc.c  */
#line 6187 "parser.y"
    {
	set_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
				       "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 727:
/* Line 1792 of yacc.c  */
#line 6192 "parser.y"
    {
	set_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				       "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 728:
/* Line 1792 of yacc.c  */
#line 6197 "parser.y"
    {
	set_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				       "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 729:
/* Line 1792 of yacc.c  */
#line 6202 "parser.y"
    {
	set_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				       "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 730:
/* Line 1792 of yacc.c  */
#line 6207 "parser.y"
    {
	set_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 731:
/* Line 1792 of yacc.c  */
#line 6211 "parser.y"
    {
	set_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 732:
/* Line 1792 of yacc.c  */
#line 6215 "parser.y"
    {
	set_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	CB_PENDING ("OVERLINE");
  }
    break;

  case 733:
/* Line 1792 of yacc.c  */
#line 6220 "parser.y"
    {
	set_screen_attr ("GRID", COB_SCREEN_GRID);
	CB_PENDING ("GRID");
  }
    break;

  case 734:
/* Line 1792 of yacc.c  */
#line 6225 "parser.y"
    {
	set_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	CB_PENDING ("LEFTLINE");
  }
    break;

  case 735:
/* Line 1792 of yacc.c  */
#line 6230 "parser.y"
    {
	set_screen_attr_with_conflict ("AUTO", COB_SCREEN_AUTO,
				       "TAB", COB_SCREEN_TAB);
  }
    break;

  case 736:
/* Line 1792 of yacc.c  */
#line 6235 "parser.y"
    {
	set_screen_attr_with_conflict ("TAB", COB_SCREEN_TAB,
				       "AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 737:
/* Line 1792 of yacc.c  */
#line 6240 "parser.y"
    {
	set_screen_attr_with_conflict ("SECURE", COB_SCREEN_SECURE,
				       "NO-ECHO", COB_SCREEN_NO_ECHO);
  }
    break;

  case 738:
/* Line 1792 of yacc.c  */
#line 6245 "parser.y"
    {
	if (cb_no_echo_means_secure) {
		set_screen_attr ("SECURE", COB_SCREEN_SECURE);
	} else {
		set_screen_attr_with_conflict ("NO-ECHO", COB_SCREEN_NO_ECHO,
					       "SECURE", COB_SCREEN_SECURE);
	}
  }
    break;

  case 739:
/* Line 1792 of yacc.c  */
#line 6254 "parser.y"
    {
	set_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 740:
/* Line 1792 of yacc.c  */
#line 6258 "parser.y"
    {
	set_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 741:
/* Line 1792 of yacc.c  */
#line 6262 "parser.y"
    {
	set_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 742:
/* Line 1792 of yacc.c  */
#line 6267 "parser.y"
    {
	set_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 743:
/* Line 1792 of yacc.c  */
#line 6271 "parser.y"
    {
	set_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 744:
/* Line 1792 of yacc.c  */
#line 6275 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 745:
/* Line 1792 of yacc.c  */
#line 6280 "parser.y"
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 746:
/* Line 1792 of yacc.c  */
#line 6285 "parser.y"
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 747:
/* Line 1792 of yacc.c  */
#line 6290 "parser.y"
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 756:
/* Line 1792 of yacc.c  */
#line 6303 "parser.y"
    {
	check_not_88_level ((yyvsp[(2) - (2)]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 757:
/* Line 1792 of yacc.c  */
#line 6312 "parser.y"
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 758:
/* Line 1792 of yacc.c  */
#line 6317 "parser.y"
    {
	check_not_88_level ((yyvsp[(2) - (2)]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 767:
/* Line 1792 of yacc.c  */
#line 6348 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 768:
/* Line 1792 of yacc.c  */
#line 6352 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 769:
/* Line 1792 of yacc.c  */
#line 6356 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 770:
/* Line 1792 of yacc.c  */
#line 6363 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 771:
/* Line 1792 of yacc.c  */
#line 6367 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 772:
/* Line 1792 of yacc.c  */
#line 6371 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 773:
/* Line 1792 of yacc.c  */
#line 6379 "parser.y"
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 774:
/* Line 1792 of yacc.c  */
#line 6390 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 776:
/* Line 1792 of yacc.c  */
#line 6399 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	if ((yyvsp[(3) - (6)])) {
		if (current_program->entry_convention) {
			cb_warning (_("overriding convention specified in ENTRY-CONVENTION"));
		}
		current_program->entry_convention = (yyvsp[(3) - (6)]);
	} else if (!current_program->entry_convention) {
		current_program->entry_convention = cb_int (CB_CONV_COBOL);
	}
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
    break;

  case 777:
/* Line 1792 of yacc.c  */
#line 6417 "parser.y"
    {
	if (current_program->flag_main && !current_program->flag_chained && (yyvsp[(4) - (8)])) {
		cb_error (_("executable program requested but PROCEDURE/ENTRY has USING clause"));
	}
	/* Main entry point */
	emit_entry (current_program->program_id, 0, (yyvsp[(4) - (8)]), NULL);
	current_program->num_proc_params = cb_list_length ((yyvsp[(4) - (8)]));
	if (current_program->source_name) {
		emit_entry (current_program->source_name, 1, (yyvsp[(4) - (8)]), NULL);
	}
  }
    break;

  case 778:
/* Line 1792 of yacc.c  */
#line 6429 "parser.y"
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

  case 779:
/* Line 1792 of yacc.c  */
#line 6444 "parser.y"
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
	current_section->xref.skip = 1;
	CB_TREE (current_section)->source_file = cb_source_file;
	CB_TREE (current_section)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_section));
	label = cb_build_reference ("MAIN PARAGRAPH");
	current_paragraph = CB_LABEL (cb_build_label (label, NULL));
	current_paragraph->flag_declaratives = !!in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_dummy_paragraph = 1;
	current_paragraph->xref.skip = 1;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
	cb_set_system_names ();
  }
    break;

  case 781:
/* Line 1792 of yacc.c  */
#line 6479 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 782:
/* Line 1792 of yacc.c  */
#line 6483 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 783:
/* Line 1792 of yacc.c  */
#line 6488 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > MAX_CALL_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  MAX_CALL_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 784:
/* Line 1792 of yacc.c  */
#line 6496 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 785:
/* Line 1792 of yacc.c  */
#line 6505 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > MAX_CALL_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  MAX_CALL_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 786:
/* Line 1792 of yacc.c  */
#line 6515 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 787:
/* Line 1792 of yacc.c  */
#line 6517 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 788:
/* Line 1792 of yacc.c  */
#line 6522 "parser.y"
    {
	cb_tree		x;
	struct cb_field	*f;

	x = cb_build_identifier ((yyvsp[(4) - (4)]), 0);
	if ((yyvsp[(3) - (4)]) == cb_int1 && CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
		f = CB_FIELD (cb_ref (x));
		f->flag_is_pdiv_opt = 1;
	}

	if (call_mode == CB_CALL_BY_VALUE
	    && CB_REFERENCE_P ((yyvsp[(4) - (4)]))
	    && CB_FIELD (cb_ref ((yyvsp[(4) - (4)])))->flag_any_length) {
		cb_error_x ((yyvsp[(4) - (4)]), _("ANY LENGTH items may only be BY REFERENCE formal parameters"));
	}

	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), x);
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 790:
/* Line 1792 of yacc.c  */
#line 6546 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 791:
/* Line 1792 of yacc.c  */
#line 6550 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		CB_UNFINISHED (_("parameters passed BY VALUE"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 793:
/* Line 1792 of yacc.c  */
#line 6563 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 794:
/* Line 1792 of yacc.c  */
#line 6571 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 795:
/* Line 1792 of yacc.c  */
#line 6579 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 796:
/* Line 1792 of yacc.c  */
#line 6587 "parser.y"
    {
	if (size_mode) {
		size_mode |= CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 798:
/* Line 1792 of yacc.c  */
#line 6597 "parser.y"
    {
	unsigned char *s = CB_LITERAL ((yyvsp[(3) - (3)]))->data;
	size_mode = 0;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[(3) - (3)]))->size != 1) {
		cb_error_x ((yyvsp[(3) - (3)]), _("invalid value for SIZE"));
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
			cb_error_x ((yyvsp[(3) - (3)]), _("invalid value for SIZE"));
			break;
		}
	}
  }
    break;

  case 799:
/* Line 1792 of yacc.c  */
#line 6630 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 800:
/* Line 1792 of yacc.c  */
#line 6634 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 801:
/* Line 1792 of yacc.c  */
#line 6646 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 802:
/* Line 1792 of yacc.c  */
#line 6652 "parser.y"
    {
	if (current_program->flag_main) {
		cb_error (_("RETURNING clause cannot be OMITTED for main program"));
	}
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause cannot be OMITTED for a FUNCTION"));
	}
	current_program->flag_void = 1;
  }
    break;

  case 803:
/* Line 1792 of yacc.c  */
#line 6662 "parser.y"
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[(2) - (2)])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[(2) - (2)]));
		/* standard rule: returning item is allocated in the
		   activating runtime element */
		if (f->storage != CB_STORAGE_LINKAGE) {
			cb_error (_("RETURNING item is not defined in LINKAGE SECTION"));
		} else if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01"));
		} else if (f->flag_occurs) {
			cb_error (_("RETURNING item should not have OCCURS"));
		} else if (f->storage == CB_STORAGE_LOCAL) {
			cb_error (_("RETURNING item should not be in LOCAL-STORAGE"));
		} else {
			if (current_program->prog_type == CB_FUNCTION_TYPE) {
				if (f->flag_any_length) {
					cb_error (_("function RETURNING item may not be ANY LENGTH"));
				}

				f->flag_is_returning = 1;
			}
			current_program->returning = (yyvsp[(2) - (2)]);
		}
	}
  }
    break;

  case 805:
/* Line 1792 of yacc.c  */
#line 6693 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 806:
/* Line 1792 of yacc.c  */
#line 6699 "parser.y"
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

  case 811:
/* Line 1792 of yacc.c  */
#line 6737 "parser.y"
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

  case 813:
/* Line 1792 of yacc.c  */
#line 6755 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 814:
/* Line 1792 of yacc.c  */
#line 6765 "parser.y"
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

  case 815:
/* Line 1792 of yacc.c  */
#line 6809 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 818:
/* Line 1792 of yacc.c  */
#line 6820 "parser.y"
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
		current_section->xref.skip = 1;
		CB_TREE (current_section)->source_file = cb_source_file;
		CB_TREE (current_section)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_section));
	}
	current_paragraph = CB_LABEL (cb_build_label ((yyvsp[(1) - (2)]), current_section));
	current_paragraph->flag_declaratives = !!in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_real_label = !in_debugging;
	current_paragraph->segment = current_section->segment;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
  }
    break;

  case 819:
/* Line 1792 of yacc.c  */
#line 6869 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (1)]), 0) != cb_error_node) {
		if (is_reserved_word (CB_NAME ((yyvsp[(1) - (1)])))) {
			cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a statement"), CB_NAME ((yyvsp[(1) - (1)])));
		} else if (is_default_reserved_word (CB_NAME ((yyvsp[(1) - (1)])))) {
			cb_error_x ((yyvsp[(1) - (1)]), _("unknown statement '%s'; it may exist in another dialect"),
				    CB_NAME ((yyvsp[(1) - (1)])));
		} else {
			cb_error_x ((yyvsp[(1) - (1)]), _("unknown statement '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
		}
	}
	YYERROR;
  }
    break;

  case 820:
/* Line 1792 of yacc.c  */
#line 6888 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 821:
/* Line 1792 of yacc.c  */
#line 6892 "parser.y"
    {
	if (in_declaratives) {
		cb_error (_("SECTION segment invalid within DECLARATIVE"));
	}
	if (cb_verify (cb_section_segments, _("SECTION segment"))) {
		current_program->flag_segments = 1;
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		(yyval) = NULL;
	}
  }
    break;

  case 822:
/* Line 1792 of yacc.c  */
#line 6910 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 823:
/* Line 1792 of yacc.c  */
#line 6915 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 824:
/* Line 1792 of yacc.c  */
#line 6920 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 825:
/* Line 1792 of yacc.c  */
#line 6928 "parser.y"
    {
	cb_tree label;

	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->flag_section = 1;
		current_section->flag_dummy_section = 1;
		current_section->flag_skip_label = !!skip_statements;
		current_section->flag_declaratives = !!in_declaratives;
		current_section->xref.skip = 1;
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
		current_paragraph->xref.skip = 1;
		CB_TREE (current_paragraph)->source_file = cb_source_file;
		CB_TREE (current_paragraph)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_paragraph));
	}
	if (check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0) == 1) {
		if (current_program->prog_type == CB_PROGRAM_TYPE) {
			emit_entry (current_program->program_id, 0, NULL, NULL);
		}
	}
  }
    break;

  case 826:
/* Line 1792 of yacc.c  */
#line 6961 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 827:
/* Line 1792 of yacc.c  */
#line 6965 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 882:
/* Line 1792 of yacc.c  */
#line 7026 "parser.y"
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

  case 883:
/* Line 1792 of yacc.c  */
#line 7040 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 884:
/* Line 1792 of yacc.c  */
#line 7051 "parser.y"
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	cobc_cs_check = CB_CS_ACCEPT;
  }
    break;

  case 886:
/* Line 1792 of yacc.c  */
#line 7061 "parser.y"
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
    break;

  case 887:
/* Line 1792 of yacc.c  */
#line 7067 "parser.y"
    {
	/* Check for invalid use of screen clauses */
	if (current_statement->attr_ptr
	    || (!is_screen_field ((yyvsp[(1) - (4)])) && line_column)) {
		cb_verify_x ((yyvsp[(1) - (4)]), cb_accept_display_extensions,
			     _("non-standard ACCEPT"));
	}

	if (cb_accept_update && !has_dispattr (COB_SCREEN_NO_UPDATE)) {
		set_dispattr (COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto && !has_dispattr (COB_SCREEN_TAB)) {
		set_dispattr (COB_SCREEN_AUTO);
	}
	if ((yyvsp[(1) - (4)]) == cb_null && current_statement->attr_ptr) {
		if (current_statement->attr_ptr->prompt) {
			emit_conflicting_clause_message ("ACCEPT OMITTED",
				_("PROMPT clause"));
		}
		if (current_statement->attr_ptr->size_is) {
			emit_conflicting_clause_message ("ACCEPT OMITTED",
				_("SIZE IS clause"));
		}
	}
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (4)]), line_column, current_statement->attr_ptr);
  }
    break;

  case 888:
/* Line 1792 of yacc.c  */
#line 7095 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 889:
/* Line 1792 of yacc.c  */
#line 7099 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 890:
/* Line 1792 of yacc.c  */
#line 7103 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 891:
/* Line 1792 of yacc.c  */
#line 7108 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 892:
/* Line 1792 of yacc.c  */
#line 7113 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 893:
/* Line 1792 of yacc.c  */
#line 7118 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 894:
/* Line 1792 of yacc.c  */
#line 7123 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 895:
/* Line 1792 of yacc.c  */
#line 7127 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 896:
/* Line 1792 of yacc.c  */
#line 7131 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 897:
/* Line 1792 of yacc.c  */
#line 7135 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 898:
/* Line 1792 of yacc.c  */
#line 7139 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 899:
/* Line 1792 of yacc.c  */
#line 7144 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 900:
/* Line 1792 of yacc.c  */
#line 7148 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 901:
/* Line 1792 of yacc.c  */
#line 7152 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 902:
/* Line 1792 of yacc.c  */
#line 7156 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 903:
/* Line 1792 of yacc.c  */
#line 7160 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 904:
/* Line 1792 of yacc.c  */
#line 7164 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 905:
/* Line 1792 of yacc.c  */
#line 7168 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 906:
/* Line 1792 of yacc.c  */
#line 7172 "parser.y"
    {
	CB_PENDING ("ACCEPT MESSAGE COUNT");
  }
    break;

  case 908:
/* Line 1792 of yacc.c  */
#line 7180 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 914:
/* Line 1792 of yacc.c  */
#line 7198 "parser.y"
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 915:
/* Line 1792 of yacc.c  */
#line 7202 "parser.y"
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 917:
/* Line 1792 of yacc.c  */
#line 7207 "parser.y"
    {
	check_repeated (_("TIME-OUT or BEFORE TIME clauses"), SYN_CLAUSE_4,
			&check_duplicate);
	set_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 920:
/* Line 1792 of yacc.c  */
#line 7221 "parser.y"
    {
	set_attr_with_conflict ("LINE", SYN_CLAUSE_1,
				_("AT screen-location"), SYN_CLAUSE_3, 1,
				&check_line_col_duplicate);

	if ((CB_LITERAL_P ((yyvsp[(2) - (2)])) && cb_get_int ((yyvsp[(2) - (2)])) == 0) || (yyvsp[(2) - (2)]) == cb_zero) {
		cb_verify (cb_accept_display_extensions, "LINE 0");
	}

	if (!line_column) {
		line_column = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0);
	} else {
		CB_PAIR_X (line_column) = (yyvsp[(2) - (2)]);
	}
  }
    break;

  case 921:
/* Line 1792 of yacc.c  */
#line 7237 "parser.y"
    {
	set_attr_with_conflict ("COLUMN", SYN_CLAUSE_2,
				_("AT screen-location"), SYN_CLAUSE_3, 1,
				&check_line_col_duplicate);

	if ((CB_LITERAL_P ((yyvsp[(2) - (2)])) && cb_get_int ((yyvsp[(2) - (2)])) == 0) || (yyvsp[(2) - (2)]) == cb_zero) {
		cb_verify (cb_accept_display_extensions, "COLUMN 0");
	}

	if (!line_column) {
		line_column = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)]));
	} else {
		CB_PAIR_Y (line_column) = (yyvsp[(2) - (2)]);
	}
  }
    break;

  case 922:
/* Line 1792 of yacc.c  */
#line 7253 "parser.y"
    {
	set_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				_("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				1, &check_line_col_duplicate);

	cb_verify (cb_accept_display_extensions, "AT clause");

	line_column = (yyvsp[(2) - (2)]);
  }
    break;

  case 923:
/* Line 1792 of yacc.c  */
#line 7265 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 924:
/* Line 1792 of yacc.c  */
#line 7269 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 925:
/* Line 1792 of yacc.c  */
#line 7270 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 926:
/* Line 1792 of yacc.c  */
#line 7275 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 927:
/* Line 1792 of yacc.c  */
#line 7282 "parser.y"
    {
	check_repeated ("AUTO", SYN_CLAUSE_5, &check_duplicate);
	set_dispattr_with_conflict ("AUTO", COB_SCREEN_AUTO,
				    "TAB", COB_SCREEN_TAB);
  }
    break;

  case 928:
/* Line 1792 of yacc.c  */
#line 7288 "parser.y"
    {
	check_repeated ("TAB", SYN_CLAUSE_6, &check_duplicate);
	set_dispattr_with_conflict ("TAB", COB_SCREEN_TAB,
				    "AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 929:
/* Line 1792 of yacc.c  */
#line 7294 "parser.y"
    {
	check_repeated ("BELL", SYN_CLAUSE_7, &check_duplicate);
	set_dispattr (COB_SCREEN_BELL);
  }
    break;

  case 930:
/* Line 1792 of yacc.c  */
#line 7299 "parser.y"
    {
        check_repeated ("BLINK", SYN_CLAUSE_8, &check_duplicate);
	set_dispattr (COB_SCREEN_BLINK);
  }
    break;

  case 931:
/* Line 1792 of yacc.c  */
#line 7304 "parser.y"
    {
	check_repeated ("CONVERSION", SYN_CLAUSE_9, &check_duplicate);
	CB_PENDING ("ACCEPT CONVERSION");
  }
    break;

  case 932:
/* Line 1792 of yacc.c  */
#line 7309 "parser.y"
    {
	check_repeated ("FULL", SYN_CLAUSE_10, &check_duplicate);
	set_dispattr (COB_SCREEN_FULL);
  }
    break;

  case 933:
/* Line 1792 of yacc.c  */
#line 7314 "parser.y"
    {
	check_repeated ("HIGHLIGHT", SYN_CLAUSE_11, &check_duplicate);
	set_dispattr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				    "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 934:
/* Line 1792 of yacc.c  */
#line 7320 "parser.y"
    {
	check_repeated ("LEFTLINE", SYN_CLAUSE_12, &check_duplicate);
	set_dispattr (COB_SCREEN_LEFTLINE);
  }
    break;

  case 935:
/* Line 1792 of yacc.c  */
#line 7325 "parser.y"
    {
	check_repeated ("LOWER", SYN_CLAUSE_13, &check_duplicate);
	set_dispattr_with_conflict ("LOWER", COB_SCREEN_LOWER,
				    "UPPER", COB_SCREEN_UPPER);
  }
    break;

  case 936:
/* Line 1792 of yacc.c  */
#line 7331 "parser.y"
    {
	check_repeated ("LOWLIGHT", SYN_CLAUSE_14, &check_duplicate);
	set_dispattr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				    "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 937:
/* Line 1792 of yacc.c  */
#line 7337 "parser.y"
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
    break;

  case 938:
/* Line 1792 of yacc.c  */
#line 7348 "parser.y"
    {
	check_repeated ("OVERLINE", SYN_CLAUSE_16, &check_duplicate);
	set_dispattr (COB_SCREEN_OVERLINE);
  }
    break;

  case 939:
/* Line 1792 of yacc.c  */
#line 7353 "parser.y"
    {
	check_repeated ("PROMPT", SYN_CLAUSE_17, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 940:
/* Line 1792 of yacc.c  */
#line 7358 "parser.y"
    {
	check_repeated ("PROMPT", SYN_CLAUSE_17, &check_duplicate);
	set_dispattr (COB_SCREEN_PROMPT);
  }
    break;

  case 941:
/* Line 1792 of yacc.c  */
#line 7363 "parser.y"
    {
	check_repeated ("REQUIRED", SYN_CLAUSE_18, &check_duplicate);
	set_dispattr (COB_SCREEN_REQUIRED);
  }
    break;

  case 942:
/* Line 1792 of yacc.c  */
#line 7368 "parser.y"
    {
	check_repeated ("REVERSE-VIDEO", SYN_CLAUSE_19, &check_duplicate);
	set_dispattr (COB_SCREEN_REVERSE);
  }
    break;

  case 943:
/* Line 1792 of yacc.c  */
#line 7373 "parser.y"
    {
	check_repeated ("SECURE", SYN_CLAUSE_20, &check_duplicate);
	set_dispattr_with_conflict ("SECURE", COB_SCREEN_SECURE,
				    "NO-ECHO", COB_SCREEN_NO_ECHO);
  }
    break;

  case 944:
/* Line 1792 of yacc.c  */
#line 7379 "parser.y"
    {
	check_repeated ("SIZE", SYN_CLAUSE_21, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), 0);
  }
    break;

  case 945:
/* Line 1792 of yacc.c  */
#line 7384 "parser.y"
    {
	check_repeated ("SIZE", SYN_CLAUSE_21, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0);
  }
    break;

  case 946:
/* Line 1792 of yacc.c  */
#line 7389 "parser.y"
    {
	check_repeated ("UNDERLINE", SYN_CLAUSE_22, &check_duplicate);
	set_dispattr (COB_SCREEN_UNDERLINE);
  }
    break;

  case 947:
/* Line 1792 of yacc.c  */
#line 7394 "parser.y"
    {
	check_repeated ("NO UPDATE", SYN_CLAUSE_23, &check_duplicate);
	set_dispattr_with_conflict ("NO UPDATE", COB_SCREEN_NO_UPDATE,
				    "UPDATE", COB_SCREEN_UPDATE);
  }
    break;

  case 948:
/* Line 1792 of yacc.c  */
#line 7400 "parser.y"
    {
	check_repeated ("UPDATE", SYN_CLAUSE_24, &check_duplicate);
	set_dispattr_with_conflict ("UPDATE", COB_SCREEN_UPDATE,
				    "NO UPDATE", COB_SCREEN_NO_UPDATE);
  }
    break;

  case 949:
/* Line 1792 of yacc.c  */
#line 7406 "parser.y"
    {
	check_repeated ("UPPER", SYN_CLAUSE_25, &check_duplicate);
	set_dispattr_with_conflict ("UPPER", COB_SCREEN_UPPER,
				    "LOWER", COB_SCREEN_LOWER);
  }
    break;

  case 950:
/* Line 1792 of yacc.c  */
#line 7412 "parser.y"
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_26, &check_duplicate);
	set_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 951:
/* Line 1792 of yacc.c  */
#line 7417 "parser.y"
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_27, &check_duplicate);
	set_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 952:
/* Line 1792 of yacc.c  */
#line 7422 "parser.y"
    {
	check_repeated ("SCROLL UP", SYN_CLAUSE_28, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 953:
/* Line 1792 of yacc.c  */
#line 7429 "parser.y"
    {
	check_repeated ("SCROLL DOWN", SYN_CLAUSE_19, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP);
  }
    break;

  case 954:
/* Line 1792 of yacc.c  */
#line 7436 "parser.y"
    {
	check_repeated (_("TIME-OUT or BEFORE TIME clauses"), SYN_CLAUSE_4,
			&check_duplicate);
	set_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 963:
/* Line 1792 of yacc.c  */
#line 7462 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 964:
/* Line 1792 of yacc.c  */
#line 7466 "parser.y"
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
    break;

  case 965:
/* Line 1792 of yacc.c  */
#line 7483 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 967:
/* Line 1792 of yacc.c  */
#line 7492 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 968:
/* Line 1792 of yacc.c  */
#line 7496 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 969:
/* Line 1792 of yacc.c  */
#line 7500 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 970:
/* Line 1792 of yacc.c  */
#line 7504 "parser.y"
    {
	CB_PENDING ("ADD TABLE");
	cb_emit_tab_arithmetic (cb_build_add, (yyvsp[(4) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 972:
/* Line 1792 of yacc.c  */
#line 7512 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 973:
/* Line 1792 of yacc.c  */
#line 7519 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 974:
/* Line 1792 of yacc.c  */
#line 7523 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 975:
/* Line 1792 of yacc.c  */
#line 7533 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 977:
/* Line 1792 of yacc.c  */
#line 7542 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 978:
/* Line 1792 of yacc.c  */
#line 7546 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 979:
/* Line 1792 of yacc.c  */
#line 7557 "parser.y"
    { (yyval) = NULL; }
    break;

  case 980:
/* Line 1792 of yacc.c  */
#line 7558 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 981:
/* Line 1792 of yacc.c  */
#line 7566 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER");
  }
    break;

  case 985:
/* Line 1792 of yacc.c  */
#line 7580 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 988:
/* Line 1792 of yacc.c  */
#line 7592 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
	cobc_allow_program_name = 1;
  }
    break;

  case 990:
/* Line 1792 of yacc.c  */
#line 7604 "parser.y"
    {
	cobc_allow_program_name = 0;
  }
    break;

  case 991:
/* Line 1792 of yacc.c  */
#line 7610 "parser.y"
    {
	int call_conv = 0;

	if (current_program->prog_type == CB_PROGRAM_TYPE
	    && !current_program->flag_recursive
	    && is_recursive_call ((yyvsp[(2) - (6)]))) {
		cb_warning_x ((yyvsp[(2) - (6)]), _("recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	call_conv = current_call_convention;
	if ((yyvsp[(1) - (6)]) && CB_INTEGER_P ((yyvsp[(1) - (6)]))) {
		call_conv |= CB_INTEGER ((yyvsp[(1) - (6)]))->val;
		if (CB_INTEGER ((yyvsp[(1) - (6)]))->val & CB_CONV_COBOL) {
			call_conv &= ~CB_CONV_STDCALL;
		} else {
			call_conv &= ~CB_CONV_COBOL;
		}
	}
	/* For CALL ... RETURNING NOTHING, set the call convention bit */
	if (call_nothing) {
		call_conv |= CB_CONV_NO_RET_UPD;
	}
	cb_emit_call ((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), CB_PAIR_X ((yyvsp[(6) - (6)])), CB_PAIR_Y ((yyvsp[(6) - (6)])),
		      cb_int (call_conv));
  }
    break;

  case 992:
/* Line 1792 of yacc.c  */
#line 7639 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 993:
/* Line 1792 of yacc.c  */
#line 7644 "parser.y"
    {
	if (current_call_convention & CB_CONV_COBOL) {
		(yyval) = cb_int (CB_CONV_STATIC_LINK | CB_CONV_COBOL);
	} else {
		(yyval) = cb_int (CB_CONV_STATIC_LINK);
	}
	cobc_cs_check = 0;
  }
    break;

  case 994:
/* Line 1792 of yacc.c  */
#line 7653 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 995:
/* Line 1792 of yacc.c  */
#line 7658 "parser.y"
    {
	(yyval) = cb_int (0);
	cobc_cs_check = 0;
  }
    break;

  case 996:
/* Line 1792 of yacc.c  */
#line 7663 "parser.y"
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME(x)->token != CB_FEATURE_CONVENTION) {
			cb_error_x ((yyvsp[(1) - (1)]), _("invalid mnemonic name"));
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

  case 997:
/* Line 1792 of yacc.c  */
#line 7683 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(1) - (1)]))) {
		cb_trim_program_id ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 998:
/* Line 1792 of yacc.c  */
#line 7689 "parser.y"
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
	/* hack to push the prototype name */
	if ((yyvsp[(2) - (2)]) && CB_REFERENCE_P ((yyvsp[(2) - (2)]))) {
		if ((yyvsp[(1) - (2)])) {
			cb_warning_x ((yyvsp[(1) - (2)]), _("id/literal ignored, using prototype name"));
		}
		(yyval) = (yyvsp[(2) - (2)]);
	} else if ((yyvsp[(1) - (2)]) && CB_LITERAL_P ((yyvsp[(1) - (2)]))) {
		(yyval) = (yyvsp[(1) - (2)]);
	} else {
		cb_error (_("NESTED phrase is only valid with literal"));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 999:
/* Line 1792 of yacc.c  */
#line 7708 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1000:
/* Line 1792 of yacc.c  */
#line 7713 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(1) - (2)]))) {
		cb_trim_program_id ((yyvsp[(1) - (2)]));
	}
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1001:
/* Line 1792 of yacc.c  */
#line 7723 "parser.y"
    {
	CB_PENDING ("NESTED phrase for CALL statement");
  }
    break;

  case 1003:
/* Line 1792 of yacc.c  */
#line 7731 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1004:
/* Line 1792 of yacc.c  */
#line 7735 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 1005:
/* Line 1792 of yacc.c  */
#line 7740 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > MAX_CALL_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("number of parameters exceeds maximum %d"),
			    MAX_CALL_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1006:
/* Line 1792 of yacc.c  */
#line 7751 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1007:
/* Line 1792 of yacc.c  */
#line 7753 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1008:
/* Line 1792 of yacc.c  */
#line 7758 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed when parameters are passed BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 1009:
/* Line 1792 of yacc.c  */
#line 7766 "parser.y"
    {
	int	save_mode;

	save_mode = call_mode;
	if (call_mode != CB_CALL_BY_REFERENCE) {
		if (CB_FILE_P ((yyvsp[(3) - (3)])) || (CB_REFERENCE_P ((yyvsp[(3) - (3)])) &&
		    CB_FILE_P (CB_REFERENCE ((yyvsp[(3) - (3)]))->value))) {
			cb_error_x (CB_TREE (current_statement),
				    _("invalid file name reference"));
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

  case 1011:
/* Line 1792 of yacc.c  */
#line 7792 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 1012:
/* Line 1792 of yacc.c  */
#line 7796 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 1013:
/* Line 1792 of yacc.c  */
#line 7805 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 1014:
/* Line 1792 of yacc.c  */
#line 7817 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1015:
/* Line 1792 of yacc.c  */
#line 7821 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1016:
/* Line 1792 of yacc.c  */
#line 7825 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 1017:
/* Line 1792 of yacc.c  */
#line 7829 "parser.y"
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
    break;

  case 1018:
/* Line 1792 of yacc.c  */
#line 7834 "parser.y"
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[(4) - (4)])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[(4) - (4)]));
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01 or 77"));
			(yyval) = NULL;
		} else if (f->storage != CB_STORAGE_LINKAGE &&
			   !f->flag_item_based) {
			cb_error (_("RETURNING item must be a LINKAGE SECTION item or have BASED clause"));
			(yyval) = NULL;
		} else {
			(yyval) = cb_build_address ((yyvsp[(4) - (4)]));
		}
	} else {
		(yyval) = NULL;
	}
  }
    break;

  case 1023:
/* Line 1792 of yacc.c  */
#line 7867 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (NULL, NULL);
  }
    break;

  case 1024:
/* Line 1792 of yacc.c  */
#line 7871 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1025:
/* Line 1792 of yacc.c  */
#line 7875 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1026:
/* Line 1792 of yacc.c  */
#line 7886 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1027:
/* Line 1792 of yacc.c  */
#line 7890 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1028:
/* Line 1792 of yacc.c  */
#line 7897 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1029:
/* Line 1792 of yacc.c  */
#line 7901 "parser.y"
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW");
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1030:
/* Line 1792 of yacc.c  */
#line 7909 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1031:
/* Line 1792 of yacc.c  */
#line 7913 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1032:
/* Line 1792 of yacc.c  */
#line 7920 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1033:
/* Line 1792 of yacc.c  */
#line 7927 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 1034:
/* Line 1792 of yacc.c  */
#line 7931 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 1035:
/* Line 1792 of yacc.c  */
#line 7941 "parser.y"
    {
	begin_statement ("CANCEL", 0);
	cobc_allow_program_name = 1;
  }
    break;

  case 1036:
/* Line 1792 of yacc.c  */
#line 7946 "parser.y"
    {
	cobc_allow_program_name = 0;
  }
    break;

  case 1037:
/* Line 1792 of yacc.c  */
#line 7953 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 1038:
/* Line 1792 of yacc.c  */
#line 7957 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 1040:
/* Line 1792 of yacc.c  */
#line 7965 "parser.y"
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
    break;

  case 1041:
/* Line 1792 of yacc.c  */
#line 7974 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 1043:
/* Line 1792 of yacc.c  */
#line 7982 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1044:
/* Line 1792 of yacc.c  */
#line 7987 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1045:
/* Line 1792 of yacc.c  */
#line 7994 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 1046:
/* Line 1792 of yacc.c  */
#line 7995 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 1047:
/* Line 1792 of yacc.c  */
#line 7996 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 1048:
/* Line 1792 of yacc.c  */
#line 7997 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 1049:
/* Line 1792 of yacc.c  */
#line 7998 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 1050:
/* Line 1792 of yacc.c  */
#line 8006 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 1052:
/* Line 1792 of yacc.c  */
#line 8015 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 1053:
/* Line 1792 of yacc.c  */
#line 8022 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 1054:
/* Line 1792 of yacc.c  */
#line 8026 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 1055:
/* Line 1792 of yacc.c  */
#line 8036 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 1056:
/* Line 1792 of yacc.c  */
#line 8047 "parser.y"
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

  case 1057:
/* Line 1792 of yacc.c  */
#line 8064 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 1059:
/* Line 1792 of yacc.c  */
#line 8073 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (4)]));
  }
    break;

  case 1061:
/* Line 1792 of yacc.c  */
#line 8081 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 1062:
/* Line 1792 of yacc.c  */
#line 8086 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 1063:
/* Line 1792 of yacc.c  */
#line 8094 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 1064:
/* Line 1792 of yacc.c  */
#line 8098 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 1065:
/* Line 1792 of yacc.c  */
#line 8108 "parser.y"
    {
	begin_statement ("DISABLE", 0);
  }
    break;

  case 1069:
/* Line 1792 of yacc.c  */
#line 8122 "parser.y"
    {
	  /* Add cb_verify for <= COBOL-85 */
  }
    break;

  case 1075:
/* Line 1792 of yacc.c  */
#line 8140 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
	display_type = UNKNOWN_DISPLAY;
	is_first_display_item = 1;
  }
    break;

  case 1077:
/* Line 1792 of yacc.c  */
#line 8152 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 1078:
/* Line 1792 of yacc.c  */
#line 8156 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 1079:
/* Line 1792 of yacc.c  */
#line 8160 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 1080:
/* Line 1792 of yacc.c  */
#line 8164 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 1082:
/* Line 1792 of yacc.c  */
#line 8172 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) != NULL) {
		error_if_different_display_type ((yyvsp[(2) - (2)]), NULL, NULL, NULL);
		cb_emit_display ((yyvsp[(2) - (2)]), NULL, cb_int1, NULL, NULL, 0,
				 display_type);
	}
  }
    break;

  case 1083:
/* Line 1792 of yacc.c  */
#line 8180 "parser.y"
    {
	set_display_type ((yyvsp[(1) - (1)]), NULL, NULL, NULL);
	cb_emit_display ((yyvsp[(1) - (1)]), NULL, cb_int1, NULL, NULL, 1,
			 display_type);
  }
    break;

  case 1086:
/* Line 1792 of yacc.c  */
#line 8194 "parser.y"
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
    break;

  case 1087:
/* Line 1792 of yacc.c  */
#line 8202 "parser.y"
    {
	if ((yyvsp[(1) - (3)]) == cb_null) {
		/* Emit DISPLAY OMITTED. */
		CB_UNFINISHED ("DISPLAY OMITTED");
		error_if_no_advancing_in_screen_display (advancing_value);
		(yyvsp[(1) - (3)]) = cb_low;
	}

	/* Emit device or screen DISPLAY. */

	/*
	  Check that disp_list does not contain an invalid mix of fields.
	*/
	if (display_type == UNKNOWN_DISPLAY) {
		set_display_type ((yyvsp[(1) - (3)]), upon_value, line_column,
				  current_statement->attr_ptr);
	} else {
		error_if_different_display_type ((yyvsp[(1) - (3)]), upon_value,
						 line_column,
						 current_statement->attr_ptr);
	}

	if (display_type == SCREEN_DISPLAY
	    || display_type == FIELD_ON_SCREEN_DISPLAY) {
		error_if_no_advancing_in_screen_display (advancing_value);
	}

	cb_emit_display ((yyvsp[(1) - (3)]), upon_value, advancing_value, line_column,
			 current_statement->attr_ptr,
			 is_first_display_item, display_type);

	is_first_display_item = 0;
  }
    break;

  case 1088:
/* Line 1792 of yacc.c  */
#line 8239 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1089:
/* Line 1792 of yacc.c  */
#line 8243 "parser.y"
    {
	CB_PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
    break;

  case 1092:
/* Line 1792 of yacc.c  */
#line 8256 "parser.y"
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
    break;

  case 1093:
/* Line 1792 of yacc.c  */
#line 8260 "parser.y"
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
    break;

  case 1094:
/* Line 1792 of yacc.c  */
#line 8265 "parser.y"
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 1097:
/* Line 1792 of yacc.c  */
#line 8274 "parser.y"
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 1098:
/* Line 1792 of yacc.c  */
#line 8278 "parser.y"
    {
	upon_value = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 1099:
/* Line 1792 of yacc.c  */
#line 8282 "parser.y"
    {
	upon_value = cb_int0;
  }
    break;

  case 1100:
/* Line 1792 of yacc.c  */
#line 8286 "parser.y"
    {
	upon_value = cb_null;
  }
    break;

  case 1103:
/* Line 1792 of yacc.c  */
#line 8298 "parser.y"
    {
	check_repeated ("BELL", SYN_CLAUSE_4, &check_duplicate);
	set_dispattr (COB_SCREEN_BELL);
  }
    break;

  case 1104:
/* Line 1792 of yacc.c  */
#line 8303 "parser.y"
    {
	check_repeated ("BLANK LINE", SYN_CLAUSE_5, &check_duplicate);
	set_dispattr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
				    "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 1105:
/* Line 1792 of yacc.c  */
#line 8309 "parser.y"
    {
	check_repeated ("BLANK SCREEN", SYN_CLAUSE_6, &check_duplicate);
	set_dispattr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				    "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 1106:
/* Line 1792 of yacc.c  */
#line 8315 "parser.y"
    {
	check_repeated ("BLINK", SYN_CLAUSE_7, &check_duplicate);
	set_dispattr (COB_SCREEN_BLINK);
  }
    break;

  case 1107:
/* Line 1792 of yacc.c  */
#line 8320 "parser.y"
    {
	check_repeated ("CONVERSION", SYN_CLAUSE_8, &check_duplicate);
	cb_warning (_("ignoring CONVERSION"));
  }
    break;

  case 1108:
/* Line 1792 of yacc.c  */
#line 8325 "parser.y"
    {
	check_repeated ("ERASE EOL", SYN_CLAUSE_9, &check_duplicate);
	set_dispattr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
				    "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 1109:
/* Line 1792 of yacc.c  */
#line 8331 "parser.y"
    {
	check_repeated ("ERASE EOS", SYN_CLAUSE_10, &check_duplicate);
	set_dispattr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				    "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 1110:
/* Line 1792 of yacc.c  */
#line 8337 "parser.y"
    {
	check_repeated ("HIGHLIGHT", SYN_CLAUSE_11, &check_duplicate);
	set_dispattr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				    "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1111:
/* Line 1792 of yacc.c  */
#line 8343 "parser.y"
    {
	check_repeated ("LOWLIGHT", SYN_CLAUSE_12, &check_duplicate);
	set_dispattr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				    "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1112:
/* Line 1792 of yacc.c  */
#line 8349 "parser.y"
    {
	check_repeated ("OVERLINE", SYN_CLAUSE_13, &check_duplicate);
	set_dispattr (COB_SCREEN_OVERLINE);
  }
    break;

  case 1113:
/* Line 1792 of yacc.c  */
#line 8354 "parser.y"
    {
	check_repeated ("REVERSE-VIDEO", SYN_CLAUSE_14, &check_duplicate);
	set_dispattr (COB_SCREEN_REVERSE);
  }
    break;

  case 1114:
/* Line 1792 of yacc.c  */
#line 8359 "parser.y"
    {
	check_repeated ("SIZE", SYN_CLAUSE_15, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0);
  }
    break;

  case 1115:
/* Line 1792 of yacc.c  */
#line 8364 "parser.y"
    {
	check_repeated ("UNDERLINE", SYN_CLAUSE_16, &check_duplicate);
	set_dispattr (COB_SCREEN_UNDERLINE);
  }
    break;

  case 1116:
/* Line 1792 of yacc.c  */
#line 8369 "parser.y"
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_17, &check_duplicate);
	set_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 1117:
/* Line 1792 of yacc.c  */
#line 8374 "parser.y"
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_18, &check_duplicate);
	set_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 1118:
/* Line 1792 of yacc.c  */
#line 8379 "parser.y"
    {
	check_repeated ("SCROLL UP", SYN_CLAUSE_19, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 1119:
/* Line 1792 of yacc.c  */
#line 8386 "parser.y"
    {
	check_repeated ("SCROLL DOWN", SYN_CLAUSE_20, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP);
  }
    break;

  case 1120:
/* Line 1792 of yacc.c  */
#line 8396 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 1121:
/* Line 1792 of yacc.c  */
#line 8400 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 1122:
/* Line 1792 of yacc.c  */
#line 8410 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 1124:
/* Line 1792 of yacc.c  */
#line 8419 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 1125:
/* Line 1792 of yacc.c  */
#line 8423 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 1126:
/* Line 1792 of yacc.c  */
#line 8427 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 1127:
/* Line 1792 of yacc.c  */
#line 8431 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1128:
/* Line 1792 of yacc.c  */
#line 8435 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1129:
/* Line 1792 of yacc.c  */
#line 8442 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 1130:
/* Line 1792 of yacc.c  */
#line 8446 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 1131:
/* Line 1792 of yacc.c  */
#line 8456 "parser.y"
    {
	begin_statement ("ENABLE", 0);
  }
    break;

  case 1133:
/* Line 1792 of yacc.c  */
#line 8467 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 1135:
/* Line 1792 of yacc.c  */
#line 8476 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "ENTRY");
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "ENTRY");
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		if (!cobc_check_valid_name ((char *)(CB_LITERAL ((yyvsp[(2) - (3)]))->data), ENTRY_NAME)) {
			emit_entry ((char *)(CB_LITERAL ((yyvsp[(2) - (3)]))->data), 1, (yyvsp[(3) - (3)]), (yyvsp[(1) - (3)]));
		}
	}
  }
    break;

  case 1136:
/* Line 1792 of yacc.c  */
#line 8494 "parser.y"
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
    break;

  case 1138:
/* Line 1792 of yacc.c  */
#line 8518 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 1139:
/* Line 1792 of yacc.c  */
#line 8525 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1140:
/* Line 1792 of yacc.c  */
#line 8527 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1141:
/* Line 1792 of yacc.c  */
#line 8532 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	eval_check[eval_level][eval_inc++] = (yyvsp[(1) - (1)]);
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
    break;

  case 1142:
/* Line 1792 of yacc.c  */
#line 8543 "parser.y"
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
    break;

  case 1143:
/* Line 1792 of yacc.c  */
#line 8554 "parser.y"
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
    break;

  case 1144:
/* Line 1792 of yacc.c  */
#line 8568 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1145:
/* Line 1792 of yacc.c  */
#line 8572 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1146:
/* Line 1792 of yacc.c  */
#line 8578 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1147:
/* Line 1792 of yacc.c  */
#line 8580 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1148:
/* Line 1792 of yacc.c  */
#line 8586 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1149:
/* Line 1792 of yacc.c  */
#line 8595 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 1150:
/* Line 1792 of yacc.c  */
#line 8603 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1151:
/* Line 1792 of yacc.c  */
#line 8609 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 1152:
/* Line 1792 of yacc.c  */
#line 8616 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1153:
/* Line 1792 of yacc.c  */
#line 8618 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1154:
/* Line 1792 of yacc.c  */
#line 8623 "parser.y"
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
    break;

  case 1155:
/* Line 1792 of yacc.c  */
#line 8684 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 1156:
/* Line 1792 of yacc.c  */
#line 8685 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 1157:
/* Line 1792 of yacc.c  */
#line 8686 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 1158:
/* Line 1792 of yacc.c  */
#line 8690 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1159:
/* Line 1792 of yacc.c  */
#line 8691 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1160:
/* Line 1792 of yacc.c  */
#line 8696 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1161:
/* Line 1792 of yacc.c  */
#line 8700 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1162:
/* Line 1792 of yacc.c  */
#line 8710 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1163:
/* Line 1792 of yacc.c  */
#line 8715 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1165:
/* Line 1792 of yacc.c  */
#line 8723 "parser.y"
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
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	current_statement->name = (const char *)"EXIT PROGRAM";
	cb_emit_exit (0);
  }
    break;

  case 1166:
/* Line 1792 of yacc.c  */
#line 8744 "parser.y"
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
    break;

  case 1167:
/* Line 1792 of yacc.c  */
#line 8758 "parser.y"
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

  case 1168:
/* Line 1792 of yacc.c  */
#line 8780 "parser.y"
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

  case 1169:
/* Line 1792 of yacc.c  */
#line 8802 "parser.y"
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

  case 1170:
/* Line 1792 of yacc.c  */
#line 8822 "parser.y"
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

  case 1171:
/* Line 1792 of yacc.c  */
#line 8844 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1172:
/* Line 1792 of yacc.c  */
#line 8845 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1173:
/* Line 1792 of yacc.c  */
#line 8853 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1175:
/* Line 1792 of yacc.c  */
#line 8862 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1176:
/* Line 1792 of yacc.c  */
#line 8872 "parser.y"
    {
	begin_statement ("GENERATE", 0);
	CB_PENDING("GENERATE");
  }
    break;

  case 1179:
/* Line 1792 of yacc.c  */
#line 8888 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1181:
/* Line 1792 of yacc.c  */
#line 8901 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1182:
/* Line 1792 of yacc.c  */
#line 8909 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1183:
/* Line 1792 of yacc.c  */
#line 8914 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1184:
/* Line 1792 of yacc.c  */
#line 8925 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1185:
/* Line 1792 of yacc.c  */
#line 8940 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1187:
/* Line 1792 of yacc.c  */
#line 8949 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1188:
/* Line 1792 of yacc.c  */
#line 8953 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1189:
/* Line 1792 of yacc.c  */
#line 8957 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1190:
/* Line 1792 of yacc.c  */
#line 8964 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1191:
/* Line 1792 of yacc.c  */
#line 8968 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1192:
/* Line 1792 of yacc.c  */
#line 8978 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1194:
/* Line 1792 of yacc.c  */
#line 8987 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1195:
/* Line 1792 of yacc.c  */
#line 8993 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1196:
/* Line 1792 of yacc.c  */
#line 8994 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1197:
/* Line 1792 of yacc.c  */
#line 8998 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1198:
/* Line 1792 of yacc.c  */
#line 8999 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1199:
/* Line 1792 of yacc.c  */
#line 9000 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1200:
/* Line 1792 of yacc.c  */
#line 9005 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1201:
/* Line 1792 of yacc.c  */
#line 9009 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1202:
/* Line 1792 of yacc.c  */
#line 9016 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1203:
/* Line 1792 of yacc.c  */
#line 9021 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1204:
/* Line 1792 of yacc.c  */
#line 9028 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1205:
/* Line 1792 of yacc.c  */
#line 9034 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1206:
/* Line 1792 of yacc.c  */
#line 9035 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1207:
/* Line 1792 of yacc.c  */
#line 9036 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1208:
/* Line 1792 of yacc.c  */
#line 9037 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1209:
/* Line 1792 of yacc.c  */
#line 9038 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1210:
/* Line 1792 of yacc.c  */
#line 9039 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1211:
/* Line 1792 of yacc.c  */
#line 9040 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1212:
/* Line 1792 of yacc.c  */
#line 9052 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1213:
/* Line 1792 of yacc.c  */
#line 9056 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1214:
/* Line 1792 of yacc.c  */
#line 9065 "parser.y"
    {
	begin_statement ("INITIATE", 0);
	CB_PENDING("INITIATE");
  }
    break;

  case 1216:
/* Line 1792 of yacc.c  */
#line 9074 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1217:
/* Line 1792 of yacc.c  */
#line 9080 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1218:
/* Line 1792 of yacc.c  */
#line 9091 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1228:
/* Line 1792 of yacc.c  */
#line 9119 "parser.y"
    {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
    break;

  case 1229:
/* Line 1792 of yacc.c  */
#line 9124 "parser.y"
    {
	if (!(previous_tallying_phrase == CHARACTERS_PHRASE
	      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
		cb_error (_("TALLYING clause is incomplete"));
	} else {
		cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), TALLYING_CLAUSE);
	}

	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1230:
/* Line 1792 of yacc.c  */
#line 9140 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), REPLACING_CLAUSE);
	inspect_keyword = 0;
  }
    break;

  case 1231:
/* Line 1792 of yacc.c  */
#line 9150 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, CONVERTING_CLAUSE);
  }
    break;

  case 1232:
/* Line 1792 of yacc.c  */
#line 9159 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1233:
/* Line 1792 of yacc.c  */
#line 9163 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1234:
/* Line 1792 of yacc.c  */
#line 9170 "parser.y"
    {
	check_preceding_tallying_phrases (FOR_PHRASE);
	(yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)]));
  }
    break;

  case 1235:
/* Line 1792 of yacc.c  */
#line 9175 "parser.y"
    {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	(yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)]));
  }
    break;

  case 1236:
/* Line 1792 of yacc.c  */
#line 9180 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_all ();
  }
    break;

  case 1237:
/* Line 1792 of yacc.c  */
#line 9185 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_leading ();
  }
    break;

  case 1238:
/* Line 1792 of yacc.c  */
#line 9190 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_trailing ();
  }
    break;

  case 1239:
/* Line 1792 of yacc.c  */
#line 9195 "parser.y"
    {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	(yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1240:
/* Line 1792 of yacc.c  */
#line 9202 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1241:
/* Line 1792 of yacc.c  */
#line 9203 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1242:
/* Line 1792 of yacc.c  */
#line 9208 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1243:
/* Line 1792 of yacc.c  */
#line 9213 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1245:
/* Line 1792 of yacc.c  */
#line 9220 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1246:
/* Line 1792 of yacc.c  */
#line 9221 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1247:
/* Line 1792 of yacc.c  */
#line 9222 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1248:
/* Line 1792 of yacc.c  */
#line 9223 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1249:
/* Line 1792 of yacc.c  */
#line 9228 "parser.y"
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
				    _("INSPECT missing ALL/FIRST/LEADING/TRAILING"));
			(yyval) = cb_build_replacing_all ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
	}
  }
    break;

  case 1250:
/* Line 1792 of yacc.c  */
#line 9255 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1251:
/* Line 1792 of yacc.c  */
#line 9259 "parser.y"
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (1)]));
  }
    break;

  case 1252:
/* Line 1792 of yacc.c  */
#line 9263 "parser.y"
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (1)]));
  }
    break;

  case 1253:
/* Line 1792 of yacc.c  */
#line 9267 "parser.y"
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (2)])), (yyvsp[(2) - (2)]));
  }
    break;

  case 1254:
/* Line 1792 of yacc.c  */
#line 9271 "parser.y"
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (2)])), (yyvsp[(2) - (2)]));
  }
    break;

  case 1255:
/* Line 1792 of yacc.c  */
#line 9278 "parser.y"
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)]));
  }
    break;

  case 1256:
/* Line 1792 of yacc.c  */
#line 9285 "parser.y"
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)]));
  }
    break;

  case 1257:
/* Line 1792 of yacc.c  */
#line 9294 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1259:
/* Line 1792 of yacc.c  */
#line 9306 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1261:
/* Line 1792 of yacc.c  */
#line 9314 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1262:
/* Line 1792 of yacc.c  */
#line 9318 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1263:
/* Line 1792 of yacc.c  */
#line 9328 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1265:
/* Line 1792 of yacc.c  */
#line 9337 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1266:
/* Line 1792 of yacc.c  */
#line 9341 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1267:
/* Line 1792 of yacc.c  */
#line 9348 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1268:
/* Line 1792 of yacc.c  */
#line 9352 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1269:
/* Line 1792 of yacc.c  */
#line 9362 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1273:
/* Line 1792 of yacc.c  */
#line 9375 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(2) - (5)]) && (yyvsp[(5) - (5)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", _("LOCK clauses"));
	}
	if ((yyvsp[(5) - (5)])) {
		x = (yyvsp[(5) - (5)]);
	} else {
		x = (yyvsp[(2) - (5)]);
	}

	for (l = (yyvsp[(4) - (5)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[(1) - (5)]), x);
		}
	}
  }
    break;

  case 1274:
/* Line 1792 of yacc.c  */
#line 9399 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1275:
/* Line 1792 of yacc.c  */
#line 9400 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1276:
/* Line 1792 of yacc.c  */
#line 9401 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1277:
/* Line 1792 of yacc.c  */
#line 9402 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1278:
/* Line 1792 of yacc.c  */
#line 9406 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1279:
/* Line 1792 of yacc.c  */
#line 9407 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1280:
/* Line 1792 of yacc.c  */
#line 9411 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1281:
/* Line 1792 of yacc.c  */
#line 9412 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1282:
/* Line 1792 of yacc.c  */
#line 9413 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1283:
/* Line 1792 of yacc.c  */
#line 9415 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1284:
/* Line 1792 of yacc.c  */
#line 9426 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
	cobc_cs_check = CB_CS_PERFORM;
  }
    break;

  case 1286:
/* Line 1792 of yacc.c  */
#line 9438 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1287:
/* Line 1792 of yacc.c  */
#line 9444 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1288:
/* Line 1792 of yacc.c  */
#line 9451 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1289:
/* Line 1792 of yacc.c  */
#line 9456 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1290:
/* Line 1792 of yacc.c  */
#line 9465 "parser.y"
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1291:
/* Line 1792 of yacc.c  */
#line 9473 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1292:
/* Line 1792 of yacc.c  */
#line 9480 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1293:
/* Line 1792 of yacc.c  */
#line 9484 "parser.y"
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
    break;

  case 1294:
/* Line 1792 of yacc.c  */
#line 9497 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1295:
/* Line 1792 of yacc.c  */
#line 9504 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1296:
/* Line 1792 of yacc.c  */
#line 9515 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1297:
/* Line 1792 of yacc.c  */
#line 9519 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1298:
/* Line 1792 of yacc.c  */
#line 9524 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1299:
/* Line 1792 of yacc.c  */
#line 9528 "parser.y"
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

  case 1300:
/* Line 1792 of yacc.c  */
#line 9539 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1301:
/* Line 1792 of yacc.c  */
#line 9545 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1302:
/* Line 1792 of yacc.c  */
#line 9546 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1303:
/* Line 1792 of yacc.c  */
#line 9550 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1304:
/* Line 1792 of yacc.c  */
#line 9551 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1305:
/* Line 1792 of yacc.c  */
#line 9554 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1306:
/* Line 1792 of yacc.c  */
#line 9556 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1307:
/* Line 1792 of yacc.c  */
#line 9561 "parser.y"
    {
	(yyval) = cb_build_perform_varying ((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));
  }
    break;

  case 1308:
/* Line 1792 of yacc.c  */
#line 9570 "parser.y"
    {
	begin_statement ("PURGE", 0);
  }
    break;

  case 1309:
/* Line 1792 of yacc.c  */
#line 9574 "parser.y"
    {
  }
    break;

  case 1310:
/* Line 1792 of yacc.c  */
#line 9582 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1312:
/* Line 1792 of yacc.c  */
#line 9591 "parser.y"
    {
	cobc_cs_check = 0;

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
		} else if (current_statement->handler_type == INVALID_KEY_HANDLER &&
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

  case 1313:
/* Line 1792 of yacc.c  */
#line 9619 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1314:
/* Line 1792 of yacc.c  */
#line 9620 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1315:
/* Line 1792 of yacc.c  */
#line 9625 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1316:
/* Line 1792 of yacc.c  */
#line 9629 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1317:
/* Line 1792 of yacc.c  */
#line 9633 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1318:
/* Line 1792 of yacc.c  */
#line 9637 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1321:
/* Line 1792 of yacc.c  */
#line 9649 "parser.y"
    {
	CB_PENDING ("ADVANCING ON LOCK");
  }
    break;

  case 1325:
/* Line 1792 of yacc.c  */
#line 9662 "parser.y"
    {
	CB_PENDING ("RETRY");
	cobc_cs_check = 0;
  }
    break;

  case 1331:
/* Line 1792 of yacc.c  */
#line 9682 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1332:
/* Line 1792 of yacc.c  */
#line 9686 "parser.y"
    {
   (yyval) = cb_int5;
  }
    break;

  case 1333:
/* Line 1792 of yacc.c  */
#line 9690 "parser.y"
    {
	/* TO-DO: Merge with RETRY phrase */
	(yyval) = cb_int4;
  }
    break;

  case 1334:
/* Line 1792 of yacc.c  */
#line 9697 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1335:
/* Line 1792 of yacc.c  */
#line 9698 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1338:
/* Line 1792 of yacc.c  */
#line 9708 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1339:
/* Line 1792 of yacc.c  */
#line 9712 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1340:
/* Line 1792 of yacc.c  */
#line 9722 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1341:
/* Line 1792 of yacc.c  */
#line 9732 "parser.y"
    {
	begin_statement ("RECEIVE", TERM_RECEIVE);
  }
    break;

  case 1355:
/* Line 1792 of yacc.c  */
#line 9775 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RECEIVE);
  }
    break;

  case 1356:
/* Line 1792 of yacc.c  */
#line 9779 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RECEIVE);
  }
    break;

  case 1357:
/* Line 1792 of yacc.c  */
#line 9788 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1359:
/* Line 1792 of yacc.c  */
#line 9796 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1360:
/* Line 1792 of yacc.c  */
#line 9806 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1361:
/* Line 1792 of yacc.c  */
#line 9816 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1363:
/* Line 1792 of yacc.c  */
#line 9825 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1364:
/* Line 1792 of yacc.c  */
#line 9832 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1365:
/* Line 1792 of yacc.c  */
#line 9836 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1366:
/* Line 1792 of yacc.c  */
#line 9846 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1368:
/* Line 1792 of yacc.c  */
#line 9858 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
	start_debug = save_debug;
  }
    break;

  case 1369:
/* Line 1792 of yacc.c  */
#line 9866 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1371:
/* Line 1792 of yacc.c  */
#line 9874 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1372:
/* Line 1792 of yacc.c  */
#line 9878 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1373:
/* Line 1792 of yacc.c  */
#line 9885 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1374:
/* Line 1792 of yacc.c  */
#line 9889 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1375:
/* Line 1792 of yacc.c  */
#line 9899 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1376:
/* Line 1792 of yacc.c  */
#line 9910 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1378:
/* Line 1792 of yacc.c  */
#line 9919 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1379:
/* Line 1792 of yacc.c  */
#line 9924 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1380:
/* Line 1792 of yacc.c  */
#line 9931 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1381:
/* Line 1792 of yacc.c  */
#line 9932 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1382:
/* Line 1792 of yacc.c  */
#line 9937 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1383:
/* Line 1792 of yacc.c  */
#line 9942 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1384:
/* Line 1792 of yacc.c  */
#line 9949 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1385:
/* Line 1792 of yacc.c  */
#line 9953 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1386:
/* Line 1792 of yacc.c  */
#line 9961 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1387:
/* Line 1792 of yacc.c  */
#line 9968 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1388:
/* Line 1792 of yacc.c  */
#line 9972 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1389:
/* Line 1792 of yacc.c  */
#line 9982 "parser.y"
    {
	begin_statement ("SEND", 0);
  }
    break;

  case 1391:
/* Line 1792 of yacc.c  */
#line 9990 "parser.y"
    {
  }
    break;

  case 1392:
/* Line 1792 of yacc.c  */
#line 9993 "parser.y"
    {
  }
    break;

  case 1395:
/* Line 1792 of yacc.c  */
#line 10004 "parser.y"
    {
  }
    break;

  case 1402:
/* Line 1792 of yacc.c  */
#line 10024 "parser.y"
    {
	begin_statement ("SET", 0);
	set_attr_val_on = 0;
	set_attr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1403:
/* Line 1792 of yacc.c  */
#line 10031 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1411:
/* Line 1792 of yacc.c  */
#line 10047 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1412:
/* Line 1792 of yacc.c  */
#line 10048 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1413:
/* Line 1792 of yacc.c  */
#line 10052 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1414:
/* Line 1792 of yacc.c  */
#line 10053 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1415:
/* Line 1792 of yacc.c  */
#line 10060 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1416:
/* Line 1792 of yacc.c  */
#line 10069 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), set_attr_val_on, set_attr_val_off);
  }
    break;

  case 1419:
/* Line 1792 of yacc.c  */
#line 10081 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1420:
/* Line 1792 of yacc.c  */
#line 10085 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1421:
/* Line 1792 of yacc.c  */
#line 10089 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (set_attr_val_on | set_attr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1422:
/* Line 1792 of yacc.c  */
#line 10095 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (set_attr_val_on | set_attr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1423:
/* Line 1792 of yacc.c  */
#line 10101 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1424:
/* Line 1792 of yacc.c  */
#line 10105 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1425:
/* Line 1792 of yacc.c  */
#line 10109 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1426:
/* Line 1792 of yacc.c  */
#line 10113 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1427:
/* Line 1792 of yacc.c  */
#line 10122 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1428:
/* Line 1792 of yacc.c  */
#line 10126 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1429:
/* Line 1792 of yacc.c  */
#line 10135 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1432:
/* Line 1792 of yacc.c  */
#line 10149 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1435:
/* Line 1792 of yacc.c  */
#line 10163 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1436:
/* Line 1792 of yacc.c  */
#line 10167 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1437:
/* Line 1792 of yacc.c  */
#line 10176 "parser.y"
    {
	  cb_emit_set_last_exception_to_off ();
  }
    break;

  case 1438:
/* Line 1792 of yacc.c  */
#line 10185 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1440:
/* Line 1792 of yacc.c  */
#line 10193 "parser.y"
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[(1) - (4)]));
	if (CB_VALID_TREE (x)) {
		if (CB_INVALID_TREE ((yyvsp[(2) - (4)]))) {
			if (CB_FILE_P (x)) {
				cb_error (_("file sort requires KEY phrase"));
			} else {
				/* FIXME: use key definition from OCCURS */
				cb_error (_("%s is not implemented"), _("table SORT without keys"));
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

  case 1441:
/* Line 1792 of yacc.c  */
#line 10215 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1442:
/* Line 1792 of yacc.c  */
#line 10224 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1443:
/* Line 1792 of yacc.c  */
#line 10229 "parser.y"
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

  case 1444:
/* Line 1792 of yacc.c  */
#line 10247 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1445:
/* Line 1792 of yacc.c  */
#line 10248 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1447:
/* Line 1792 of yacc.c  */
#line 10253 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1448:
/* Line 1792 of yacc.c  */
#line 10260 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1449:
/* Line 1792 of yacc.c  */
#line 10261 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1450:
/* Line 1792 of yacc.c  */
#line 10266 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("file sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1451:
/* Line 1792 of yacc.c  */
#line 10272 "parser.y"
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

  case 1452:
/* Line 1792 of yacc.c  */
#line 10282 "parser.y"
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
	cobc_cs_check = 0;
  }
    break;

  case 1453:
/* Line 1792 of yacc.c  */
#line 10298 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("file sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1454:
/* Line 1792 of yacc.c  */
#line 10304 "parser.y"
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

  case 1455:
/* Line 1792 of yacc.c  */
#line 10314 "parser.y"
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[(4) - (4)]));
		}
	}
	cobc_cs_check = 0;
  }
    break;

  case 1456:
/* Line 1792 of yacc.c  */
#line 10331 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1458:
/* Line 1792 of yacc.c  */
#line 10341 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1459:
/* Line 1792 of yacc.c  */
#line 10353 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1460:
/* Line 1792 of yacc.c  */
#line 10357 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1461:
/* Line 1792 of yacc.c  */
#line 10364 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1462:
/* Line 1792 of yacc.c  */
#line 10368 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1463:
/* Line 1792 of yacc.c  */
#line 10373 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1464:
/* Line 1792 of yacc.c  */
#line 10378 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1465:
/* Line 1792 of yacc.c  */
#line 10385 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1466:
/* Line 1792 of yacc.c  */
#line 10386 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1467:
/* Line 1792 of yacc.c  */
#line 10387 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1468:
/* Line 1792 of yacc.c  */
#line 10388 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1469:
/* Line 1792 of yacc.c  */
#line 10389 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1470:
/* Line 1792 of yacc.c  */
#line 10390 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1471:
/* Line 1792 of yacc.c  */
#line 10395 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition not allowed on START statement"));
  }
    break;

  case 1474:
/* Line 1792 of yacc.c  */
#line 10408 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1475:
/* Line 1792 of yacc.c  */
#line 10412 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1476:
/* Line 1792 of yacc.c  */
#line 10422 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1477:
/* Line 1792 of yacc.c  */
#line 10426 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1478:
/* Line 1792 of yacc.c  */
#line 10432 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL, 1, DEVICE_DISPLAY);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1479:
/* Line 1792 of yacc.c  */
#line 10444 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1480:
/* Line 1792 of yacc.c  */
#line 10448 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1481:
/* Line 1792 of yacc.c  */
#line 10452 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1482:
/* Line 1792 of yacc.c  */
#line 10456 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1483:
/* Line 1792 of yacc.c  */
#line 10464 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1484:
/* Line 1792 of yacc.c  */
#line 10475 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1485:
/* Line 1792 of yacc.c  */
#line 10479 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1486:
/* Line 1792 of yacc.c  */
#line 10485 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1487:
/* Line 1792 of yacc.c  */
#line 10486 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1488:
/* Line 1792 of yacc.c  */
#line 10487 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1489:
/* Line 1792 of yacc.c  */
#line 10488 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1490:
/* Line 1792 of yacc.c  */
#line 10495 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
	save_tree = NULL;
  }
    break;

  case 1492:
/* Line 1792 of yacc.c  */
#line 10505 "parser.y"
    {
	cb_emit_string (save_tree, (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1495:
/* Line 1792 of yacc.c  */
#line 10517 "parser.y"
    {
    if (!save_tree) {
		save_tree = CB_LIST_INIT ((yyvsp[(1) - (2)]));
	} else {
		save_tree = cb_list_add (save_tree, (yyvsp[(1) - (2)]));
	}
	if ((yyvsp[(2) - (2)])) {
		save_tree = cb_list_add (save_tree, (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1496:
/* Line 1792 of yacc.c  */
#line 10531 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1497:
/* Line 1792 of yacc.c  */
#line 10533 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1498:
/* Line 1792 of yacc.c  */
#line 10537 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1499:
/* Line 1792 of yacc.c  */
#line 10538 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), NULL); }
    break;

  case 1500:
/* Line 1792 of yacc.c  */
#line 10542 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1501:
/* Line 1792 of yacc.c  */
#line 10543 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1502:
/* Line 1792 of yacc.c  */
#line 10548 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1503:
/* Line 1792 of yacc.c  */
#line 10552 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1504:
/* Line 1792 of yacc.c  */
#line 10562 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1506:
/* Line 1792 of yacc.c  */
#line 10571 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1507:
/* Line 1792 of yacc.c  */
#line 10575 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1508:
/* Line 1792 of yacc.c  */
#line 10579 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1509:
/* Line 1792 of yacc.c  */
#line 10583 "parser.y"
    {
	CB_PENDING ("SUBTRACT TABLE");
	cb_emit_tab_arithmetic (cb_build_sub, (yyvsp[(4) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1510:
/* Line 1792 of yacc.c  */
#line 10591 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1511:
/* Line 1792 of yacc.c  */
#line 10595 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1512:
/* Line 1792 of yacc.c  */
#line 10605 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	CB_PENDING("SUPPRESS");
  }
    break;

  case 1515:
/* Line 1792 of yacc.c  */
#line 10623 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
	CB_PENDING("TERMINATE");
  }
    break;

  case 1517:
/* Line 1792 of yacc.c  */
#line 10632 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1518:
/* Line 1792 of yacc.c  */
#line 10638 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1519:
/* Line 1792 of yacc.c  */
#line 10649 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1521:
/* Line 1792 of yacc.c  */
#line 10657 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, TRANSFORM_STATEMENT);
  }
    break;

  case 1522:
/* Line 1792 of yacc.c  */
#line 10670 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1524:
/* Line 1792 of yacc.c  */
#line 10678 "parser.y"
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

  case 1525:
/* Line 1792 of yacc.c  */
#line 10694 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1527:
/* Line 1792 of yacc.c  */
#line 10704 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1528:
/* Line 1792 of yacc.c  */
#line 10710 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1529:
/* Line 1792 of yacc.c  */
#line 10712 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1530:
/* Line 1792 of yacc.c  */
#line 10716 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1531:
/* Line 1792 of yacc.c  */
#line 10718 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1532:
/* Line 1792 of yacc.c  */
#line 10723 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1533:
/* Line 1792 of yacc.c  */
#line 10729 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1534:
/* Line 1792 of yacc.c  */
#line 10731 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1535:
/* Line 1792 of yacc.c  */
#line 10736 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1536:
/* Line 1792 of yacc.c  */
#line 10742 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1537:
/* Line 1792 of yacc.c  */
#line 10743 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1538:
/* Line 1792 of yacc.c  */
#line 10747 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1539:
/* Line 1792 of yacc.c  */
#line 10748 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1540:
/* Line 1792 of yacc.c  */
#line 10752 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1541:
/* Line 1792 of yacc.c  */
#line 10753 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1542:
/* Line 1792 of yacc.c  */
#line 10758 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1543:
/* Line 1792 of yacc.c  */
#line 10762 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1544:
/* Line 1792 of yacc.c  */
#line 10772 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1551:
/* Line 1792 of yacc.c  */
#line 10790 "parser.y"
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

  case 1552:
/* Line 1792 of yacc.c  */
#line 10815 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1553:
/* Line 1792 of yacc.c  */
#line 10819 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1554:
/* Line 1792 of yacc.c  */
#line 10831 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1555:
/* Line 1792 of yacc.c  */
#line 10841 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1556:
/* Line 1792 of yacc.c  */
#line 10846 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1557:
/* Line 1792 of yacc.c  */
#line 10851 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1558:
/* Line 1792 of yacc.c  */
#line 10856 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1559:
/* Line 1792 of yacc.c  */
#line 10864 "parser.y"
    {
	cb_tree		plabel;
	char		name[64];

	cb_verify (cb_use_for_debugging, "USE FOR DEBUGGING");

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

  case 1562:
/* Line 1792 of yacc.c  */
#line 10909 "parser.y"
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
			l = CB_VALUE (CB_WORD_ITEMS ((yyvsp[(1) - (1)])));
			switch (CB_TREE_TAG (l)) {
			case CB_TAG_CD:
				CB_CD (l)->debug_section = current_section;
				CB_CD (l)->flag_field_debug = 1;
				break;
			case CB_TAG_FILE:
				CB_FILE (l)->debug_section = current_section;
				CB_FILE (l)->flag_fl_debug = 1;
				break;
			case CB_TAG_FIELD:
				x = cb_ref ((yyvsp[(1) - (1)]));
				if (CB_INVALID_TREE (x)) {
					break;
				}
				needs_field_debug = 1;
				CB_FIELD (x)->debug_section = current_section;
				CB_FIELD (x)->flag_field_debug = 1;
				CB_PURPOSE (z) = x;
				break;
			default:
				break;
			}
		}
	}
  }
    break;

  case 1563:
/* Line 1792 of yacc.c  */
#line 10952 "parser.y"
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
    break;

  case 1564:
/* Line 1792 of yacc.c  */
#line 10962 "parser.y"
    {
	cb_tree		x;

	if (current_program->flag_debugging) {
		/* Reference must be a data item */
		x = cb_ref ((yyvsp[(3) - (3)]));
		if (CB_INVALID_TREE (x) || !CB_FIELD_P (x)) {
			cb_error (_("invalid target for DEBUGGING ALL"));
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

  case 1569:
/* Line 1792 of yacc.c  */
#line 10992 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
    break;

  case 1570:
/* Line 1792 of yacc.c  */
#line 11001 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL, NULL); */
	CB_PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1571:
/* Line 1792 of yacc.c  */
#line 11007 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL, NULL); */
	CB_PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1572:
/* Line 1792 of yacc.c  */
#line 11017 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	CB_PENDING ("USE BEFORE REPORTING");
  }
    break;

  case 1573:
/* Line 1792 of yacc.c  */
#line 11026 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1576:
/* Line 1792 of yacc.c  */
#line 11042 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1578:
/* Line 1792 of yacc.c  */
#line 11054 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (6)]))) {
		cb_emit_write ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1579:
/* Line 1792 of yacc.c  */
#line 11063 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1580:
/* Line 1792 of yacc.c  */
#line 11064 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1581:
/* Line 1792 of yacc.c  */
#line 11069 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1582:
/* Line 1792 of yacc.c  */
#line 11073 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1583:
/* Line 1792 of yacc.c  */
#line 11077 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1584:
/* Line 1792 of yacc.c  */
#line 11081 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1585:
/* Line 1792 of yacc.c  */
#line 11087 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1586:
/* Line 1792 of yacc.c  */
#line 11088 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1590:
/* Line 1792 of yacc.c  */
#line 11099 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1591:
/* Line 1792 of yacc.c  */
#line 11103 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1594:
/* Line 1792 of yacc.c  */
#line 11117 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
    break;

  case 1595:
/* Line 1792 of yacc.c  */
#line 11127 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1596:
/* Line 1792 of yacc.c  */
#line 11131 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1597:
/* Line 1792 of yacc.c  */
#line 11138 "parser.y"
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1602:
/* Line 1792 of yacc.c  */
#line 11156 "parser.y"
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1607:
/* Line 1792 of yacc.c  */
#line 11172 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
    break;

  case 1608:
/* Line 1792 of yacc.c  */
#line 11182 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1609:
/* Line 1792 of yacc.c  */
#line 11186 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1610:
/* Line 1792 of yacc.c  */
#line 11193 "parser.y"
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1613:
/* Line 1792 of yacc.c  */
#line 11206 "parser.y"
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1616:
/* Line 1792 of yacc.c  */
#line 11218 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT SIZE ERROR before SIZE ERROR"));
	}
  }
    break;

  case 1617:
/* Line 1792 of yacc.c  */
#line 11228 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1618:
/* Line 1792 of yacc.c  */
#line 11232 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1619:
/* Line 1792 of yacc.c  */
#line 11239 "parser.y"
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1622:
/* Line 1792 of yacc.c  */
#line 11252 "parser.y"
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1625:
/* Line 1792 of yacc.c  */
#line 11264 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT OVERFLOW before OVERFLOW"));
	}
  }
    break;

  case 1626:
/* Line 1792 of yacc.c  */
#line 11274 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1627:
/* Line 1792 of yacc.c  */
#line 11278 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1628:
/* Line 1792 of yacc.c  */
#line 11285 "parser.y"
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1631:
/* Line 1792 of yacc.c  */
#line 11298 "parser.y"
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1633:
/* Line 1792 of yacc.c  */
#line 11310 "parser.y"
    {
	cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
  }
    break;

  case 1635:
/* Line 1792 of yacc.c  */
#line 11319 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
	}
  }
    break;

  case 1636:
/* Line 1792 of yacc.c  */
#line 11328 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1637:
/* Line 1792 of yacc.c  */
#line 11332 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1638:
/* Line 1792 of yacc.c  */
#line 11339 "parser.y"
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1641:
/* Line 1792 of yacc.c  */
#line 11352 "parser.y"
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1643:
/* Line 1792 of yacc.c  */
#line 11363 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT AT END-OF-PAGE before AT END-OF-PAGE"));
	}
  }
    break;

  case 1644:
/* Line 1792 of yacc.c  */
#line 11373 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1645:
/* Line 1792 of yacc.c  */
#line 11377 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1646:
/* Line 1792 of yacc.c  */
#line 11384 "parser.y"
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1649:
/* Line 1792 of yacc.c  */
#line 11397 "parser.y"
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1653:
/* Line 1792 of yacc.c  */
#line 11413 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT INVALID KEY before INVALID KEY"));
	}
  }
    break;

  case 1654:
/* Line 1792 of yacc.c  */
#line 11423 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1655:
/* Line 1792 of yacc.c  */
#line 11427 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1656:
/* Line 1792 of yacc.c  */
#line 11434 "parser.y"
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1659:
/* Line 1792 of yacc.c  */
#line 11447 "parser.y"
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1660:
/* Line 1792 of yacc.c  */
#line 11457 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1661:
/* Line 1792 of yacc.c  */
#line 11461 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1662:
/* Line 1792 of yacc.c  */
#line 11471 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1663:
/* Line 1792 of yacc.c  */
#line 11478 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1664:
/* Line 1792 of yacc.c  */
#line 11484 "parser.y"
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
    break;

  case 1665:
/* Line 1792 of yacc.c  */
#line 11489 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1668:
/* Line 1792 of yacc.c  */
#line 11500 "parser.y"
    { push_expr ('x', (yyvsp[(1) - (1)])); }
    break;

  case 1671:
/* Line 1792 of yacc.c  */
#line 11505 "parser.y"
    { push_expr ('x', cb_zero); }
    break;

  case 1672:
/* Line 1792 of yacc.c  */
#line 11507 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1673:
/* Line 1792 of yacc.c  */
#line 11508 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1674:
/* Line 1792 of yacc.c  */
#line 11510 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1675:
/* Line 1792 of yacc.c  */
#line 11511 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1676:
/* Line 1792 of yacc.c  */
#line 11512 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1677:
/* Line 1792 of yacc.c  */
#line 11513 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1678:
/* Line 1792 of yacc.c  */
#line 11514 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1680:
/* Line 1792 of yacc.c  */
#line 11517 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1681:
/* Line 1792 of yacc.c  */
#line 11518 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1684:
/* Line 1792 of yacc.c  */
#line 11527 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1685:
/* Line 1792 of yacc.c  */
#line 11530 "parser.y"
    { push_expr ('C', (yyvsp[(1) - (1)])); }
    break;

  case 1686:
/* Line 1792 of yacc.c  */
#line 11532 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1687:
/* Line 1792 of yacc.c  */
#line 11533 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1688:
/* Line 1792 of yacc.c  */
#line 11534 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1689:
/* Line 1792 of yacc.c  */
#line 11535 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1690:
/* Line 1792 of yacc.c  */
#line 11536 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1691:
/* Line 1792 of yacc.c  */
#line 11537 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1692:
/* Line 1792 of yacc.c  */
#line 11539 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1693:
/* Line 1792 of yacc.c  */
#line 11540 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1694:
/* Line 1792 of yacc.c  */
#line 11541 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1695:
/* Line 1792 of yacc.c  */
#line 11542 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1696:
/* Line 1792 of yacc.c  */
#line 11543 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1697:
/* Line 1792 of yacc.c  */
#line 11546 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1698:
/* Line 1792 of yacc.c  */
#line 11547 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1707:
/* Line 1792 of yacc.c  */
#line 11577 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1708:
/* Line 1792 of yacc.c  */
#line 11581 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1712:
/* Line 1792 of yacc.c  */
#line 11592 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1713:
/* Line 1792 of yacc.c  */
#line 11593 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1714:
/* Line 1792 of yacc.c  */
#line 11594 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1715:
/* Line 1792 of yacc.c  */
#line 11598 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1716:
/* Line 1792 of yacc.c  */
#line 11599 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1717:
/* Line 1792 of yacc.c  */
#line 11600 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1718:
/* Line 1792 of yacc.c  */
#line 11605 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1719:
/* Line 1792 of yacc.c  */
#line 11608 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1720:
/* Line 1792 of yacc.c  */
#line 11612 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1721:
/* Line 1792 of yacc.c  */
#line 11613 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1722:
/* Line 1792 of yacc.c  */
#line 11614 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1723:
/* Line 1792 of yacc.c  */
#line 11617 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1724:
/* Line 1792 of yacc.c  */
#line 11618 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1725:
/* Line 1792 of yacc.c  */
#line 11629 "parser.y"
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
    break;

  case 1726:
/* Line 1792 of yacc.c  */
#line 11641 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1727:
/* Line 1792 of yacc.c  */
#line 11650 "parser.y"
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
    break;

  case 1728:
/* Line 1792 of yacc.c  */
#line 11662 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1729:
/* Line 1792 of yacc.c  */
#line 11671 "parser.y"
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
    break;

  case 1730:
/* Line 1792 of yacc.c  */
#line 11683 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1731:
/* Line 1792 of yacc.c  */
#line 11697 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1732:
/* Line 1792 of yacc.c  */
#line 11699 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1733:
/* Line 1792 of yacc.c  */
#line 11704 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1734:
/* Line 1792 of yacc.c  */
#line 11712 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1735:
/* Line 1792 of yacc.c  */
#line 11719 "parser.y"
    {
	if (!CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("%s requires a record name as subject"),
			current_statement->name);
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1736:
/* Line 1792 of yacc.c  */
#line 11729 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(2) - (2)])))) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		cb_error_x ((yyvsp[(2) - (2)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(2) - (2)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1737:
/* Line 1792 of yacc.c  */
#line 11743 "parser.y"
    {
	cb_tree x;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (!CB_FIELD_P (x)) {
		(yyval) = cb_error_node;
	} else if (!CB_FIELD (x)->index_list) {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' not indexed"), cb_name ((yyvsp[(1) - (1)])));
		listprint_suppress ();
		cb_error_x (x, _("'%s' defined here"), cb_name (x));
		listprint_restore ();
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1738:
/* Line 1792 of yacc.c  */
#line 11765 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1739:
/* Line 1792 of yacc.c  */
#line 11769 "parser.y"
    {
	cb_tree		l;

	if (CB_VALID_TREE ((yyvsp[(2) - (2)]))) {
		for (l = (yyvsp[(1) - (2)]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l)) &&
			    !strcasecmp (CB_NAME ((yyvsp[(2) - (2)])), CB_NAME (CB_VALUE (l)))) {
				cb_error_x ((yyvsp[(2) - (2)]), _("multiple reference to '%s' "),
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

  case 1740:
/* Line 1792 of yacc.c  */
#line 11790 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1741:
/* Line 1792 of yacc.c  */
#line 11802 "parser.y"
    {
	if (CB_CD_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a CD name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1742:
/* Line 1792 of yacc.c  */
#line 11843 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1743:
/* Line 1792 of yacc.c  */
#line 11856 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1744:
/* Line 1792 of yacc.c  */
#line 11858 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1745:
/* Line 1792 of yacc.c  */
#line 11862 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1746:
/* Line 1792 of yacc.c  */
#line 11868 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1747:
/* Line 1792 of yacc.c  */
#line 11870 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1748:
/* Line 1792 of yacc.c  */
#line 11875 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1751:
/* Line 1792 of yacc.c  */
#line 11889 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1752:
/* Line 1792 of yacc.c  */
#line 11896 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1753:
/* Line 1792 of yacc.c  */
#line 11906 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1754:
/* Line 1792 of yacc.c  */
#line 11907 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1755:
/* Line 1792 of yacc.c  */
#line 11912 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1756:
/* Line 1792 of yacc.c  */
#line 11920 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1757:
/* Line 1792 of yacc.c  */
#line 11928 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1758:
/* Line 1792 of yacc.c  */
#line 11932 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1759:
/* Line 1792 of yacc.c  */
#line 11939 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1762:
/* Line 1792 of yacc.c  */
#line 11955 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1763:
/* Line 1792 of yacc.c  */
#line 11964 "parser.y"
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
    break;

  case 1764:
/* Line 1792 of yacc.c  */
#line 11975 "parser.y"
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

  case 1765:
/* Line 1792 of yacc.c  */
#line 11992 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1766:
/* Line 1792 of yacc.c  */
#line 11996 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1769:
/* Line 1792 of yacc.c  */
#line 12005 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1770:
/* Line 1792 of yacc.c  */
#line 12011 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1771:
/* Line 1792 of yacc.c  */
#line 12012 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1772:
/* Line 1792 of yacc.c  */
#line 12017 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1773:
/* Line 1792 of yacc.c  */
#line 12021 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1781:
/* Line 1792 of yacc.c  */
#line 12041 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1782:
/* Line 1792 of yacc.c  */
#line 12045 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1783:
/* Line 1792 of yacc.c  */
#line 12049 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1784:
/* Line 1792 of yacc.c  */
#line 12053 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1785:
/* Line 1792 of yacc.c  */
#line 12057 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1786:
/* Line 1792 of yacc.c  */
#line 12061 "parser.y"
    {
	cb_tree		x;
	cb_tree		switch_id;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME (x)->category != CB_SWITCH_NAME) {
			cb_error_x ((yyvsp[(1) - (1)]), _("invalid mnemonic identifier"));
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

  case 1787:
/* Line 1792 of yacc.c  */
#line 12082 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1788:
/* Line 1792 of yacc.c  */
#line 12086 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1796:
/* Line 1792 of yacc.c  */
#line 12103 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1797:
/* Line 1792 of yacc.c  */
#line 12107 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1798:
/* Line 1792 of yacc.c  */
#line 12111 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1803:
/* Line 1792 of yacc.c  */
#line 12128 "parser.y"
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[(1) - (1)]));
  }
    break;

  case 1804:
/* Line 1792 of yacc.c  */
#line 12135 "parser.y"
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[(1) - (1)]));
  }
    break;

  case 1810:
/* Line 1792 of yacc.c  */
#line 12153 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1812:
/* Line 1792 of yacc.c  */
#line 12161 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1815:
/* Line 1792 of yacc.c  */
#line 12170 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1818:
/* Line 1792 of yacc.c  */
#line 12179 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1820:
/* Line 1792 of yacc.c  */
#line 12184 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1821:
/* Line 1792 of yacc.c  */
#line 12191 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1823:
/* Line 1792 of yacc.c  */
#line 12199 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1825:
/* Line 1792 of yacc.c  */
#line 12207 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1828:
/* Line 1792 of yacc.c  */
#line 12217 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1829:
/* Line 1792 of yacc.c  */
#line 12221 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1830:
/* Line 1792 of yacc.c  */
#line 12225 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1831:
/* Line 1792 of yacc.c  */
#line 12226 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1832:
/* Line 1792 of yacc.c  */
#line 12231 "parser.y"
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[(1) - (1)]));
  }
    break;

  case 1833:
/* Line 1792 of yacc.c  */
#line 12238 "parser.y"
    {
	if ((yyvsp[(1) - (1)]) != cb_error_node
	    && cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not numeric"), cb_name ((yyvsp[(1) - (1)])));
	}
  }
    break;

  case 1834:
/* Line 1792 of yacc.c  */
#line 12248 "parser.y"
    {
	int     reference_to_existing_object;

	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && (CB_FIELD_P (cb_ref ((yyvsp[(1) - (1)])))
				    || CB_FILE_P (cb_ref ((yyvsp[(1) - (1)]))))) {
		(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
	} else {
		reference_to_existing_object =
			CB_REFERENCE_P ((yyvsp[(1) - (1)])) && cb_ref ((yyvsp[(1) - (1)])) != cb_error_node;
		if (!CB_REFERENCE_P ((yyvsp[(1) - (1)])) || reference_to_existing_object) {
			cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a field or file"), cb_name ((yyvsp[(1) - (1)])));
		}
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1835:
/* Line 1792 of yacc.c  */
#line 12267 "parser.y"
    {
	int     reference_to_existing_object;

	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_FIELD_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
	} else {
		reference_to_existing_object =
			CB_REFERENCE_P ((yyvsp[(1) - (1)])) && cb_ref ((yyvsp[(1) - (1)])) != cb_error_node;
		if (!CB_REFERENCE_P ((yyvsp[(1) - (1)])) || reference_to_existing_object) {
			cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a field"), cb_name ((yyvsp[(1) - (1)])));
		}
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1836:
/* Line 1792 of yacc.c  */
#line 12285 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1837:
/* Line 1792 of yacc.c  */
#line 12292 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1838:
/* Line 1792 of yacc.c  */
#line 12299 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1839:
/* Line 1792 of yacc.c  */
#line 12306 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1840:
/* Line 1792 of yacc.c  */
#line 12316 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1841:
/* Line 1792 of yacc.c  */
#line 12323 "parser.y"
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

  case 1842:
/* Line 1792 of yacc.c  */
#line 12333 "parser.y"
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

  case 1843:
/* Line 1792 of yacc.c  */
#line 12343 "parser.y"
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

  case 1844:
/* Line 1792 of yacc.c  */
#line 12353 "parser.y"
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

  case 1845:
/* Line 1792 of yacc.c  */
#line 12366 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1846:
/* Line 1792 of yacc.c  */
#line 12370 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1847:
/* Line 1792 of yacc.c  */
#line 12378 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1848:
/* Line 1792 of yacc.c  */
#line 12386 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1849:
/* Line 1792 of yacc.c  */
#line 12390 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1850:
/* Line 1792 of yacc.c  */
#line 12400 "parser.y"
    {
	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("non-negative integer value expected"));
		(yyval) = cb_build_numeric_literal(-1, "1", 0);
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1851:
/* Line 1792 of yacc.c  */
#line 12414 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[(1) - (1)]));
		if (n < 1 || n > 256) {
			cb_error (_("invalid symbolic integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  }
    break;

  case 1852:
/* Line 1792 of yacc.c  */
#line 12437 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->sign
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("unsigned positive integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[(1) - (1)]));
		if (n < 1) {
			cb_error (_("unsigned positive integer value expected"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  }
    break;

  case 1853:
/* Line 1792 of yacc.c  */
#line 12459 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) == CB_CATEGORY_NUMERIC) {
		if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
			cb_error (_("integer value expected"));
		} else {
			n = cb_get_int ((yyvsp[(1) - (1)]));
			if (n < 1 || n > 256) {
				cb_error (_("invalid CLASS value"));
			}
		}
	}
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1854:
/* Line 1792 of yacc.c  */
#line 12474 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1855:
/* Line 1792 of yacc.c  */
#line 12475 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1856:
/* Line 1792 of yacc.c  */
#line 12476 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1857:
/* Line 1792 of yacc.c  */
#line 12477 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1858:
/* Line 1792 of yacc.c  */
#line 12478 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1859:
/* Line 1792 of yacc.c  */
#line 12479 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1860:
/* Line 1792 of yacc.c  */
#line 12484 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1861:
/* Line 1792 of yacc.c  */
#line 12488 "parser.y"
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

  case 1862:
/* Line 1792 of yacc.c  */
#line 12505 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1863:
/* Line 1792 of yacc.c  */
#line 12509 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1864:
/* Line 1792 of yacc.c  */
#line 12515 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1865:
/* Line 1792 of yacc.c  */
#line 12516 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1866:
/* Line 1792 of yacc.c  */
#line 12517 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1867:
/* Line 1792 of yacc.c  */
#line 12518 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1868:
/* Line 1792 of yacc.c  */
#line 12519 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1869:
/* Line 1792 of yacc.c  */
#line 12520 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1870:
/* Line 1792 of yacc.c  */
#line 12521 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1871:
/* Line 1792 of yacc.c  */
#line 12528 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1872:
/* Line 1792 of yacc.c  */
#line 12532 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1873:
/* Line 1792 of yacc.c  */
#line 12536 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1874:
/* Line 1792 of yacc.c  */
#line 12540 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1875:
/* Line 1792 of yacc.c  */
#line 12544 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1876:
/* Line 1792 of yacc.c  */
#line 12548 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1877:
/* Line 1792 of yacc.c  */
#line 12552 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1878:
/* Line 1792 of yacc.c  */
#line 12556 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1879:
/* Line 1792 of yacc.c  */
#line 12560 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1880:
/* Line 1792 of yacc.c  */
#line 12564 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1881:
/* Line 1792 of yacc.c  */
#line 12568 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1882:
/* Line 1792 of yacc.c  */
#line 12572 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1883:
/* Line 1792 of yacc.c  */
#line 12576 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1893:
/* Line 1792 of yacc.c  */
#line 12601 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1894:
/* Line 1792 of yacc.c  */
#line 12605 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1895:
/* Line 1792 of yacc.c  */
#line 12609 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1896:
/* Line 1792 of yacc.c  */
#line 12616 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1897:
/* Line 1792 of yacc.c  */
#line 12620 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1898:
/* Line 1792 of yacc.c  */
#line 12624 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1899:
/* Line 1792 of yacc.c  */
#line 12631 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1900:
/* Line 1792 of yacc.c  */
#line 12638 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1901:
/* Line 1792 of yacc.c  */
#line 12645 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1902:
/* Line 1792 of yacc.c  */
#line 12654 "parser.y"
    {
	suppress_data_exceptions = 1;
  }
    break;

  case 1903:
/* Line 1792 of yacc.c  */
#line 12658 "parser.y"
    {
	suppress_data_exceptions = 0;
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
  }
    break;

  case 1904:
/* Line 1792 of yacc.c  */
#line 12666 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1905:
/* Line 1792 of yacc.c  */
#line 12673 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1906:
/* Line 1792 of yacc.c  */
#line 12683 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1907:
/* Line 1792 of yacc.c  */
#line 12690 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1908:
/* Line 1792 of yacc.c  */
#line 12700 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1909:
/* Line 1792 of yacc.c  */
#line 12704 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[(1) - (3)]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1910:
/* Line 1792 of yacc.c  */
#line 12717 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1911:
/* Line 1792 of yacc.c  */
#line 12721 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[(1) - (3)]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1912:
/* Line 1792 of yacc.c  */
#line 12735 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1913:
/* Line 1792 of yacc.c  */
#line 12743 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1914:
/* Line 1792 of yacc.c  */
#line 12744 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1915:
/* Line 1792 of yacc.c  */
#line 12748 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1916:
/* Line 1792 of yacc.c  */
#line 12749 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1917:
/* Line 1792 of yacc.c  */
#line 12753 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1918:
/* Line 1792 of yacc.c  */
#line 12754 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1919:
/* Line 1792 of yacc.c  */
#line 12759 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1920:
/* Line 1792 of yacc.c  */
#line 12763 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1921:
/* Line 1792 of yacc.c  */
#line 12770 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1922:
/* Line 1792 of yacc.c  */
#line 12774 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1923:
/* Line 1792 of yacc.c  */
#line 12781 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1924:
/* Line 1792 of yacc.c  */
#line 12782 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1925:
/* Line 1792 of yacc.c  */
#line 12783 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1926:
/* Line 1792 of yacc.c  */
#line 12787 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1927:
/* Line 1792 of yacc.c  */
#line 12788 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1928:
/* Line 1792 of yacc.c  */
#line 12792 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1929:
/* Line 1792 of yacc.c  */
#line 12793 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1930:
/* Line 1792 of yacc.c  */
#line 12794 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1931:
/* Line 1792 of yacc.c  */
#line 12799 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1932:
/* Line 1792 of yacc.c  */
#line 12803 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = default_rounded_mode;
	}
	cobc_cs_check = 0;
  }
    break;

  case 1933:
/* Line 1792 of yacc.c  */
#line 12815 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1934:
/* Line 1792 of yacc.c  */
#line 12820 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1935:
/* Line 1792 of yacc.c  */
#line 12828 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1936:
/* Line 1792 of yacc.c  */
#line 12832 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1937:
/* Line 1792 of yacc.c  */
#line 12836 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1938:
/* Line 1792 of yacc.c  */
#line 12840 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1939:
/* Line 1792 of yacc.c  */
#line 12844 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1940:
/* Line 1792 of yacc.c  */
#line 12848 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1941:
/* Line 1792 of yacc.c  */
#line 12852 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1942:
/* Line 1792 of yacc.c  */
#line 12856 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1943:
/* Line 1792 of yacc.c  */
#line 12862 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1944:
/* Line 1792 of yacc.c  */
#line 12863 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1945:
/* Line 1792 of yacc.c  */
#line 12867 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1946:
/* Line 1792 of yacc.c  */
#line 12869 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(2) - (5)]));
	(yyval) = cb_list_add (x, (yyvsp[(4) - (5)]));
  }
    break;

  case 1947:
/* Line 1792 of yacc.c  */
#line 12878 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1948:
/* Line 1792 of yacc.c  */
#line 12880 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1949:
/* Line 1792 of yacc.c  */
#line 12889 "parser.y"
    {
	cobc_repeat_last_token = 1;
  }
    break;

  case 1950:
/* Line 1792 of yacc.c  */
#line 12893 "parser.y"
    {
	cobc_repeat_last_token = 1;
  }
    break;

  case 1951:
/* Line 1792 of yacc.c  */
#line 12897 "parser.y"
    {
	cobc_repeat_last_token = 0;
  }
    break;


/* Line 1792 of yacc.c  */
#line 20800 "parser.c"
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


/* Line 2055 of yacc.c  */
#line 13079 "parser.y"

