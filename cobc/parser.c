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
static unsigned int		prog_end;
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
	CB_LABEL (label)->xref.skip = 1;
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

static void
check_headers_present (const cob_flags_t lev1, const cob_flags_t lev2,
		       const cob_flags_t lev3, const cob_flags_t lev4)
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
	same_area = 1;
	memset ((void *)eval_check, 0, sizeof(eval_check));
	memset ((void *)term_array, 0, sizeof(term_array));
	linage_file = NULL;
	current_file = NULL;
	current_cd = NULL;
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
		} else {
			prev = l;
		}
		if (prev->chain != NULL) {
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
		CB_REFERENCE_P (x) && CB_FIELD_P (cb_ref (x))
		&& CB_FIELD (cb_ref (x))->usage != CB_USAGE_DISPLAY;

	if (is_numeric_literal) {
		cb_error_x (x, _("%s is not an alphanumeric literal"), CB_LITERAL (x)->data);
	} else if (is_field_with_usage_not_display) {
		cb_error_x (x, _("'%s' is not USAGE DISPLAY"), cb_name (x));
	}
}


/* Line 371 of yacc.c  */
#line 1646 "parser.c"

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
     CD = 310,
     CF = 311,
     CH = 312,
     CHAINING = 313,
     CHARACTER = 314,
     CHARACTERS = 315,
     CLASS = 316,
     CLASSIFICATION = 317,
     CLASS_NAME = 318,
     CLOSE = 319,
     CODE = 320,
     CODE_SET = 321,
     COLLATING = 322,
     COL = 323,
     COLS = 324,
     COLUMN = 325,
     COLUMNS = 326,
     COMMA = 327,
     COMMAND_LINE = 328,
     COMMA_DELIM = 329,
     COMMIT = 330,
     COMMON = 331,
     COMMUNICATION = 332,
     COMP = 333,
     COMPUTE = 334,
     COMP_1 = 335,
     COMP_2 = 336,
     COMP_3 = 337,
     COMP_4 = 338,
     COMP_5 = 339,
     COMP_6 = 340,
     COMP_X = 341,
     CONCATENATE_FUNC = 342,
     CONDITION = 343,
     CONFIGURATION = 344,
     CONSTANT = 345,
     CONTAINS = 346,
     CONTENT = 347,
     CONTINUE = 348,
     CONTROL = 349,
     CONTROLS = 350,
     CONVERSION = 351,
     CONVERTING = 352,
     COPY = 353,
     CORRESPONDING = 354,
     COUNT = 355,
     CRT = 356,
     CRT_UNDER = 357,
     CURRENCY = 358,
     CURRENT_DATE_FUNC = 359,
     CURSOR = 360,
     CYCLE = 361,
     DATA = 362,
     DATE = 363,
     DAY = 364,
     DAY_OF_WEEK = 365,
     DE = 366,
     DEBUGGING = 367,
     DECIMAL_POINT = 368,
     DECLARATIVES = 369,
     DEFAULT = 370,
     DELETE = 371,
     DELIMITED = 372,
     DELIMITER = 373,
     DEPENDING = 374,
     DESCENDING = 375,
     DESTINATION = 376,
     DETAIL = 377,
     DISABLE = 378,
     DISC = 379,
     DISK = 380,
     DISPLAY = 381,
     DISPLAY_OF_FUNC = 382,
     DIVIDE = 383,
     DIVISION = 384,
     DOWN = 385,
     DUPLICATES = 386,
     DYNAMIC = 387,
     EBCDIC = 388,
     EC = 389,
     ECHO = 390,
     EGI = 391,
     EIGHTY_EIGHT = 392,
     ENABLE = 393,
     ELSE = 394,
     EMI = 395,
     END = 396,
     END_ACCEPT = 397,
     END_ADD = 398,
     END_CALL = 399,
     END_COMPUTE = 400,
     END_DELETE = 401,
     END_DISPLAY = 402,
     END_DIVIDE = 403,
     END_EVALUATE = 404,
     END_FUNCTION = 405,
     END_IF = 406,
     END_MULTIPLY = 407,
     END_PERFORM = 408,
     END_PROGRAM = 409,
     END_READ = 410,
     END_RECEIVE = 411,
     END_RETURN = 412,
     END_REWRITE = 413,
     END_SEARCH = 414,
     END_START = 415,
     END_STRING = 416,
     END_SUBTRACT = 417,
     END_UNSTRING = 418,
     END_WRITE = 419,
     ENTRY = 420,
     ENVIRONMENT = 421,
     ENVIRONMENT_NAME = 422,
     ENVIRONMENT_VALUE = 423,
     EOL = 424,
     EOP = 425,
     EOS = 426,
     EQUAL = 427,
     ERASE = 428,
     ERROR = 429,
     ESCAPE = 430,
     ESI = 431,
     EVALUATE = 432,
     EVENT_STATUS = 433,
     EXCEPTION = 434,
     EXCEPTION_CONDITION = 435,
     EXCLUSIVE = 436,
     EXIT = 437,
     EXPONENTIATION = 438,
     EXTEND = 439,
     EXTERNAL = 440,
     F = 441,
     FD = 442,
     FILE_CONTROL = 443,
     FILE_ID = 444,
     FILLER = 445,
     FINAL = 446,
     FIRST = 447,
     FIXED = 448,
     FLOAT_BINARY_128 = 449,
     FLOAT_BINARY_32 = 450,
     FLOAT_BINARY_64 = 451,
     FLOAT_DECIMAL_16 = 452,
     FLOAT_DECIMAL_34 = 453,
     FLOAT_DECIMAL_7 = 454,
     FLOAT_EXTENDED = 455,
     FLOAT_LONG = 456,
     FLOAT_SHORT = 457,
     FOOTING = 458,
     FOR = 459,
     FOREGROUND_COLOR = 460,
     FOREVER = 461,
     FORMATTED_DATE_FUNC = 462,
     FORMATTED_DATETIME_FUNC = 463,
     FORMATTED_TIME_FUNC = 464,
     FREE = 465,
     FROM = 466,
     FROM_CRT = 467,
     FULL = 468,
     FUNCTION = 469,
     FUNCTION_ID = 470,
     FUNCTION_NAME = 471,
     GENERATE = 472,
     GIVING = 473,
     GLOBAL = 474,
     GO = 475,
     GOBACK = 476,
     GREATER = 477,
     GREATER_OR_EQUAL = 478,
     GRID = 479,
     GROUP = 480,
     HEADING = 481,
     HIGHLIGHT = 482,
     HIGH_VALUE = 483,
     ID = 484,
     IDENTIFICATION = 485,
     IF = 486,
     IGNORE = 487,
     IGNORING = 488,
     IN = 489,
     INDEX = 490,
     INDEXED = 491,
     INDICATE = 492,
     INITIALIZE = 493,
     INITIALIZED = 494,
     INITIATE = 495,
     INPUT = 496,
     INPUT_OUTPUT = 497,
     INSPECT = 498,
     INTO = 499,
     INTRINSIC = 500,
     INVALID = 501,
     INVALID_KEY = 502,
     IS = 503,
     I_O = 504,
     I_O_CONTROL = 505,
     JUSTIFIED = 506,
     KEPT = 507,
     KEY = 508,
     KEYBOARD = 509,
     LABEL = 510,
     LAST = 511,
     LEADING = 512,
     LEFT = 513,
     LEFTLINE = 514,
     LENGTH = 515,
     LENGTH_OF = 516,
     LESS = 517,
     LESS_OR_EQUAL = 518,
     LIMIT = 519,
     LIMITS = 520,
     LINAGE = 521,
     LINAGE_COUNTER = 522,
     LINE = 523,
     LINE_COUNTER = 524,
     LINES = 525,
     LINKAGE = 526,
     LITERAL = 527,
     LOCALE = 528,
     LOCALE_DATE_FUNC = 529,
     LOCALE_TIME_FUNC = 530,
     LOCALE_TIME_FROM_FUNC = 531,
     LOCAL_STORAGE = 532,
     LOCK = 533,
     LOWER = 534,
     LOWER_CASE_FUNC = 535,
     LOWLIGHT = 536,
     LOW_VALUE = 537,
     MANUAL = 538,
     MEMORY = 539,
     MERGE = 540,
     MESSAGE = 541,
     MINUS = 542,
     MNEMONIC_NAME = 543,
     MODE = 544,
     MOVE = 545,
     MULTIPLE = 546,
     MULTIPLY = 547,
     NAME = 548,
     NATIONAL = 549,
     NATIONAL_EDITED = 550,
     NATIONAL_OF_FUNC = 551,
     NATIVE = 552,
     NEAREST_AWAY_FROM_ZERO = 553,
     NEAREST_EVEN = 554,
     NEAREST_TOWARD_ZERO = 555,
     NEGATIVE = 556,
     NEXT = 557,
     NEXT_PAGE = 558,
     NO = 559,
     NO_DATA = 560,
     NO_ECHO = 561,
     NORMAL = 562,
     NOT = 563,
     NOTHING = 564,
     NOT_END = 565,
     NOT_EOP = 566,
     NOT_ESCAPE = 567,
     NOT_EQUAL = 568,
     NOT_EXCEPTION = 569,
     NOT_INVALID_KEY = 570,
     NOT_OVERFLOW = 571,
     NOT_SIZE_ERROR = 572,
     NO_ADVANCING = 573,
     NUMBER = 574,
     NUMBERS = 575,
     NUMERIC = 576,
     NUMERIC_EDITED = 577,
     NUMVALC_FUNC = 578,
     OBJECT_COMPUTER = 579,
     OCCURS = 580,
     OF = 581,
     OFF = 582,
     OMITTED = 583,
     ON = 584,
     ONLY = 585,
     OPEN = 586,
     OPTIONAL = 587,
     OR = 588,
     ORDER = 589,
     ORGANIZATION = 590,
     OTHER = 591,
     OUTPUT = 592,
     OVERLINE = 593,
     PACKED_DECIMAL = 594,
     PADDING = 595,
     PAGE = 596,
     PAGE_COUNTER = 597,
     PARAGRAPH = 598,
     PERFORM = 599,
     PH = 600,
     PF = 601,
     PICTURE = 602,
     PICTURE_SYMBOL = 603,
     PLUS = 604,
     POINTER = 605,
     POSITION = 606,
     POSITIVE = 607,
     PRESENT = 608,
     PREVIOUS = 609,
     PRINT = 610,
     PRINTER = 611,
     PRINTER_1 = 612,
     PRINTING = 613,
     PROCEDURE = 614,
     PROCEDURES = 615,
     PROCEED = 616,
     PROGRAM = 617,
     PROGRAM_ID = 618,
     PROGRAM_NAME = 619,
     PROGRAM_POINTER = 620,
     PROHIBITED = 621,
     PROMPT = 622,
     PROTECTED = 623,
     QUEUE = 624,
     QUOTE = 625,
     RANDOM = 626,
     RD = 627,
     READ = 628,
     READY_TRACE = 629,
     RECEIVE = 630,
     RECORD = 631,
     RECORDING = 632,
     RECORDS = 633,
     RECURSIVE = 634,
     REDEFINES = 635,
     REEL = 636,
     REFERENCE = 637,
     REFERENCES = 638,
     RELATIVE = 639,
     RELEASE = 640,
     REMAINDER = 641,
     REMOVAL = 642,
     RENAMES = 643,
     REPLACE = 644,
     REPLACING = 645,
     REPORT = 646,
     REPORTING = 647,
     REPORTS = 648,
     REPOSITORY = 649,
     REQUIRED = 650,
     RESERVE = 651,
     RESET = 652,
     RESET_TRACE = 653,
     RETRY = 654,
     RETURN = 655,
     RETURNING = 656,
     REVERSE = 657,
     REVERSE_FUNC = 658,
     REVERSE_VIDEO = 659,
     REVERSED = 660,
     REWIND = 661,
     REWRITE = 662,
     RF = 663,
     RH = 664,
     RIGHT = 665,
     ROLLBACK = 666,
     ROUNDED = 667,
     RUN = 668,
     S = 669,
     SAME = 670,
     SCREEN = 671,
     SCREEN_CONTROL = 672,
     SCROLL = 673,
     SD = 674,
     SEARCH = 675,
     SECONDS = 676,
     SECTION = 677,
     SECURE = 678,
     SEGMENT = 679,
     SEGMENT_LIMIT = 680,
     SELECT = 681,
     SEMI_COLON = 682,
     SENTENCE = 683,
     SEPARATE = 684,
     SEQUENCE = 685,
     SEQUENTIAL = 686,
     SET = 687,
     SEVENTY_EIGHT = 688,
     SHARING = 689,
     SIGN = 690,
     SIGNED = 691,
     SIGNED_INT = 692,
     SIGNED_LONG = 693,
     SIGNED_SHORT = 694,
     SIXTY_SIX = 695,
     SIZE = 696,
     SIZE_ERROR = 697,
     SORT = 698,
     SORT_MERGE = 699,
     SOURCE = 700,
     SOURCE_COMPUTER = 701,
     SPACE = 702,
     SPECIAL_NAMES = 703,
     STANDARD = 704,
     STANDARD_1 = 705,
     STANDARD_2 = 706,
     START = 707,
     STATIC = 708,
     STATUS = 709,
     STDCALL = 710,
     STEP = 711,
     STOP = 712,
     STRING = 713,
     SUB_QUEUE_1 = 714,
     SUB_QUEUE_2 = 715,
     SUB_QUEUE_3 = 716,
     SUBSTITUTE_FUNC = 717,
     SUBSTITUTE_CASE_FUNC = 718,
     SUBTRACT = 719,
     SUM = 720,
     SUPPRESS = 721,
     SYMBOLIC = 722,
     SYNCHRONIZED = 723,
     SYSTEM_DEFAULT = 724,
     SYSTEM_OFFSET = 725,
     TAB = 726,
     TABLE = 727,
     TALLYING = 728,
     TAPE = 729,
     TERMINAL = 730,
     TERMINATE = 731,
     TEXT = 732,
     TEST = 733,
     THAN = 734,
     THEN = 735,
     THRU = 736,
     TIME = 737,
     TIME_OUT = 738,
     TIMES = 739,
     TO = 740,
     TOK_AMPER = 741,
     TOK_CLOSE_PAREN = 742,
     TOK_COLON = 743,
     TOK_DIV = 744,
     TOK_DOT = 745,
     TOK_EQUAL = 746,
     TOK_FALSE = 747,
     TOK_FILE = 748,
     TOK_GREATER = 749,
     TOK_INITIAL = 750,
     TOK_LESS = 751,
     TOK_MINUS = 752,
     TOK_MUL = 753,
     TOK_NULL = 754,
     TOK_OVERFLOW = 755,
     TOK_OPEN_PAREN = 756,
     TOK_PLUS = 757,
     TOK_TRUE = 758,
     TOP = 759,
     TOWARD_GREATER = 760,
     TOWARD_LESSER = 761,
     TRAILING = 762,
     TRANSFORM = 763,
     TRIM_FUNC = 764,
     TRUNCATION = 765,
     TYPE = 766,
     U = 767,
     UNDERLINE = 768,
     UNIT = 769,
     UNLOCK = 770,
     UNSIGNED = 771,
     UNSIGNED_INT = 772,
     UNSIGNED_LONG = 773,
     UNSIGNED_SHORT = 774,
     UNSTRING = 775,
     UNTIL = 776,
     UP = 777,
     UPDATE = 778,
     UPON = 779,
     UPON_ARGUMENT_NUMBER = 780,
     UPON_COMMAND_LINE = 781,
     UPON_ENVIRONMENT_NAME = 782,
     UPON_ENVIRONMENT_VALUE = 783,
     UPPER = 784,
     UPPER_CASE_FUNC = 785,
     USAGE = 786,
     USE = 787,
     USER = 788,
     USER_DEFAULT = 789,
     USER_FUNCTION_NAME = 790,
     USING = 791,
     V = 792,
     VALUE = 793,
     VARIABLE = 794,
     VARYING = 795,
     WAIT = 796,
     WHEN = 797,
     WHEN_COMPILED_FUNC = 798,
     WITH = 799,
     WORD = 800,
     WORDS = 801,
     WORKING_STORAGE = 802,
     WRITE = 803,
     YYYYDDD = 804,
     YYYYMMDD = 805,
     ZERO = 806,
     SHIFT_PREFER = 807,
     PURGE = 808,
     SEND = 809,
     OVERFLOW = 810
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
#line 2268 "parser.c"

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
#define YYLAST   9697

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  556
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  936
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2152
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3111

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   810

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
     555
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    16,    18,
      20,    21,    24,    29,    34,    35,    37,    39,    42,    46,
      50,    54,    55,    59,    63,    64,    65,    74,    75,    82,
      84,    86,    88,    90,    91,    94,    95,    99,   101,   103,
     105,   107,   110,   113,   115,   117,   121,   122,   126,   132,
     133,   137,   138,   140,   142,   145,   148,   149,   154,   155,
     159,   160,   164,   165,   170,   171,   174,   178,   181,   183,
     186,   188,   190,   192,   194,   200,   204,   208,   213,   215,
     217,   219,   221,   223,   226,   227,   228,   233,   234,   237,
     241,   243,   246,   250,   254,   258,   262,   264,   267,   268,
     271,   272,   274,   277,   281,   283,   286,   288,   290,   292,
     294,   296,   298,   300,   302,   304,   306,   308,   310,   311,
     315,   318,   322,   326,   328,   329,   331,   333,   337,   342,
     343,   349,   351,   353,   355,   357,   359,   361,   363,   366,
     368,   372,   373,   378,   380,   384,   386,   388,   390,   392,
     394,   396,   398,   400,   403,   404,   407,   411,   413,   416,
     420,   422,   425,   427,   430,   435,   437,   440,   442,   446,
     451,   457,   458,   462,   466,   472,   476,   481,   485,   489,
     495,   496,   500,   501,   504,   505,   508,   509,   512,   513,
     520,   521,   524,   526,   528,   530,   532,   534,   536,   538,
     540,   542,   544,   546,   548,   550,   556,   562,   568,   574,
     580,   582,   584,   586,   588,   590,   592,   594,   595,   599,
     600,   602,   604,   606,   608,   609,   611,   613,   618,   620,
     622,   624,   632,   633,   638,   642,   646,   648,   653,   654,
     656,   658,   659,   665,   668,   671,   673,   674,   679,   685,
     688,   692,   694,   696,   700,   702,   705,   710,   715,   720,
     722,   726,   731,   736,   740,   742,   744,   748,   751,   754,
     757,   758,   761,   765,   767,   770,   772,   774,   780,   781,
     783,   785,   787,   788,   795,   797,   800,   803,   804,   807,
     808,   819,   820,   824,   825,   829,   830,   833,   836,   837,
     843,   847,   849,   851,   852,   855,   858,   861,   863,   865,
     867,   869,   871,   873,   875,   877,   879,   885,   886,   888,
     890,   895,   902,   912,   913,   917,   918,   921,   922,   925,
     929,   935,   941,   943,   945,   947,   949,   953,   959,   960,
     963,   965,   967,   969,   974,   977,   980,   985,   987,   989,
     991,   993,   995,   997,   999,  1004,  1005,  1008,  1011,  1014,
    1017,  1019,  1022,  1023,  1024,  1030,  1031,  1034,  1037,  1038,
    1044,  1045,  1048,  1053,  1057,  1062,  1063,  1065,  1067,  1069,
    1072,  1077,  1082,  1087,  1092,  1097,  1102,  1107,  1112,  1117,
    1122,  1127,  1139,  1140,  1142,  1144,  1147,  1152,  1157,  1162,
    1169,  1174,  1178,  1183,  1184,  1186,  1188,  1190,  1193,  1198,
    1203,  1208,  1213,  1218,  1223,  1230,  1231,  1232,  1238,  1239,
    1240,  1243,  1246,  1250,  1252,  1254,  1256,  1257,  1262,  1266,
    1269,  1270,  1272,  1274,  1276,  1277,  1280,  1282,  1285,  1288,
    1292,  1294,  1296,  1298,  1300,  1302,  1304,  1306,  1308,  1310,
    1312,  1314,  1316,  1319,  1321,  1323,  1325,  1327,  1329,  1331,
    1333,  1335,  1337,  1343,  1344,  1347,  1348,  1353,  1359,  1360,
    1366,  1369,  1372,  1373,  1376,  1378,  1380,  1382,  1384,  1386,
    1388,  1390,  1392,  1394,  1396,  1398,  1400,  1402,  1405,  1409,
    1410,  1413,  1414,  1416,  1419,  1421,  1423,  1427,  1429,  1431,
    1433,  1435,  1437,  1439,  1441,  1443,  1445,  1447,  1449,  1451,
    1453,  1455,  1457,  1459,  1461,  1463,  1465,  1467,  1470,  1473,
    1476,  1479,  1482,  1485,  1488,  1491,  1494,  1497,  1499,  1501,
    1503,  1505,  1507,  1509,  1511,  1513,  1515,  1517,  1521,  1525,
    1532,  1533,  1536,  1544,  1553,  1554,  1557,  1558,  1561,  1562,
    1566,  1567,  1571,  1572,  1574,  1576,  1577,  1583,  1585,  1587,
    1588,  1592,  1594,  1597,  1599,  1602,  1605,  1609,  1611,  1612,
    1618,  1620,  1623,  1625,  1629,  1630,  1635,  1638,  1641,  1642,
    1643,  1649,  1650,  1651,  1657,  1658,  1659,  1665,  1666,  1669,
    1670,  1677,  1678,  1681,  1684,  1687,  1691,  1693,  1695,  1698,
    1701,  1703,  1706,  1711,  1713,  1718,  1721,  1722,  1725,  1727,
    1729,  1731,  1733,  1735,  1739,  1744,  1749,  1754,  1758,  1759,
    1762,  1763,  1769,  1770,  1773,  1775,  1777,  1779,  1781,  1783,
    1785,  1787,  1789,  1791,  1793,  1795,  1797,  1799,  1801,  1803,
    1805,  1809,  1811,  1813,  1816,  1818,  1821,  1823,  1825,  1826,
    1829,  1832,  1833,  1836,  1841,  1846,  1847,  1851,  1853,  1855,
    1859,  1866,  1869,  1873,  1876,  1879,  1883,  1886,  1888,  1891,
    1894,  1896,  1898,  1900,  1903,  1906,  1908,  1913,  1916,  1920,
    1921,  1922,  1928,  1929,  1931,  1934,  1938,  1940,  1941,  1946,
    1950,  1951,  1954,  1957,  1960,  1962,  1964,  1967,  1970,  1972,
    1974,  1976,  1978,  1980,  1982,  1984,  1986,  1988,  1990,  1992,
    1994,  1996,  2001,  2003,  2005,  2011,  2017,  2021,  2025,  2027,
    2029,  2031,  2033,  2035,  2037,  2039,  2041,  2044,  2047,  2050,
    2052,  2055,  2057,  2060,  2062,  2064,  2066,  2068,  2069,  2071,
    2073,  2074,  2076,  2078,  2082,  2085,  2086,  2087,  2088,  2098,
    2099,  2104,  2105,  2106,  2110,  2111,  2115,  2117,  2120,  2125,
    2126,  2129,  2132,  2133,  2137,  2141,  2146,  2151,  2155,  2156,
    2158,  2159,  2162,  2165,  2166,  2167,  2175,  2176,  2179,  2181,
    2183,  2186,  2188,  2190,  2191,  2198,  2199,  2202,  2205,  2207,
    2208,  2210,  2211,  2212,  2216,  2217,  2220,  2223,  2225,  2227,
    2229,  2231,  2233,  2235,  2237,  2239,  2241,  2243,  2245,  2247,
    2249,  2251,  2253,  2255,  2257,  2259,  2261,  2263,  2265,  2267,
    2269,  2271,  2273,  2275,  2277,  2279,  2281,  2283,  2285,  2287,
    2289,  2291,  2293,  2295,  2297,  2299,  2301,  2303,  2305,  2307,
    2309,  2311,  2313,  2315,  2317,  2319,  2321,  2323,  2325,  2327,
    2329,  2331,  2334,  2337,  2338,  2343,  2344,  2349,  2353,  2357,
    2362,  2366,  2371,  2375,  2379,  2384,  2389,  2393,  2398,  2402,
    2407,  2413,  2417,  2422,  2426,  2430,  2434,  2436,  2438,  2439,
    2441,  2443,  2446,  2448,  2450,  2452,  2455,  2459,  2461,  2464,
    2467,  2470,  2473,  2477,  2481,  2485,  2489,  2491,  2493,  2495,
    2497,  2499,  2501,  2503,  2505,  2507,  2509,  2511,  2513,  2518,
    2520,  2522,  2524,  2526,  2531,  2535,  2537,  2540,  2542,  2544,
    2548,  2552,  2556,  2560,  2564,  2567,  2569,  2571,  2573,  2575,
    2577,  2579,  2581,  2582,  2584,  2585,  2590,  2595,  2601,  2608,
    2609,  2612,  2613,  2615,  2616,  2620,  2624,  2629,  2630,  2633,
    2634,  2638,  2640,  2643,  2648,  2649,  2652,  2653,  2658,  2659,
    2666,  2667,  2669,  2671,  2673,  2675,  2677,  2678,  2679,  2683,
    2685,  2688,  2691,  2695,  2696,  2699,  2702,  2705,  2706,  2710,
    2713,  2716,  2721,  2723,  2725,  2727,  2729,  2730,  2733,  2736,
    2737,  2739,  2742,  2745,  2746,  2748,  2751,  2752,  2754,  2755,
    2759,  2761,  2764,  2766,  2768,  2769,  2773,  2776,  2780,  2781,
    2783,  2787,  2791,  2794,  2795,  2800,  2805,  2806,  2808,  2810,
    2812,  2813,  2818,  2823,  2826,  2828,  2831,  2832,  2834,  2835,
    2839,  2843,  2844,  2848,  2849,  2852,  2854,  2857,  2859,  2860,
    2865,  2869,  2873,  2877,  2881,  2884,  2887,  2889,  2891,  2894,
    2895,  2899,  2901,  2903,  2905,  2908,  2910,  2913,  2915,  2917,
    2920,  2923,  2926,  2929,  2932,  2934,  2936,  2938,  2941,  2944,
    2946,  2948,  2951,  2954,  2956,  2958,  2960,  2962,  2966,  2968,
    2972,  2976,  2980,  2984,  2985,  2987,  2988,  2993,  2998,  3005,
    3012,  3021,  3030,  3031,  3033,  3034,  3038,  3039,  3043,  3046,
    3047,  3052,  3055,  3057,  3061,  3063,  3065,  3067,  3070,  3072,
    3074,  3077,  3080,  3084,  3087,  3091,  3093,  3097,  3100,  3102,
    3104,  3106,  3107,  3110,  3111,  3113,  3114,  3118,  3119,  3122,
    3124,  3127,  3129,  3131,  3133,  3134,  3137,  3138,  3142,  3144,
    3145,  3149,  3151,  3152,  3156,  3160,  3161,  3165,  3168,  3169,
    3176,  3180,  3183,  3185,  3186,  3188,  3189,  3193,  3199,  3200,
    3203,  3204,  3208,  3212,  3213,  3216,  3218,  3221,  3226,  3228,
    3230,  3232,  3234,  3236,  3238,  3240,  3241,  3245,  3246,  3250,
    3252,  3255,  3256,  3260,  3263,  3265,  3267,  3269,  3272,  3274,
    3276,  3278,  3279,  3283,  3286,  3292,  3294,  3297,  3300,  3303,
    3305,  3307,  3309,  3312,  3314,  3317,  3322,  3325,  3326,  3328,
    3330,  3332,  3334,  3339,  3340,  3342,  3344,  3347,  3350,  3354,
    3358,  3359,  3363,  3364,  3368,  3372,  3377,  3378,  3383,  3388,
    3395,  3396,  3398,  3399,  3403,  3405,  3408,  3414,  3416,  3418,
    3420,  3422,  3423,  3427,  3428,  3432,  3435,  3437,  3438,  3442,
    3445,  3446,  3451,  3454,  3455,  3457,  3459,  3461,  3463,  3467,
    3468,  3471,  3473,  3477,  3481,  3482,  3486,  3488,  3490,  3492,
    3496,  3504,  3505,  3509,  3510,  3515,  3523,  3524,  3527,  3528,
    3530,  3533,  3535,  3538,  3542,  3546,  3548,  3549,  3551,  3553,
    3558,  3563,  3566,  3567,  3569,  3571,  3575,  3578,  3579,  3583,
    3585,  3587,  3588,  3590,  3592,  3593,  3598,  3604,  3606,  3608,
    3609,  3612,  3615,  3616,  3618,  3621,  3622,  3624,  3627,  3628,
    3630,  3631,  3635,  3638,  3640,  3641,  3646,  3651,  3652,  3654,
    3655,  3660,  3666,  3667,  3669,  3672,  3676,  3677,  3679,  3681,
    3682,  3687,  3692,  3699,  3700,  3703,  3704,  3707,  3709,  3712,
    3716,  3717,  3719,  3720,  3724,  3727,  3733,  3734,  3736,  3739,
    3742,  3745,  3748,  3751,  3752,  3755,  3756,  3760,  3762,  3764,
    3766,  3768,  3770,  3772,  3774,  3776,  3778,  3780,  3782,  3787,
    3791,  3793,  3796,  3799,  3802,  3805,  3808,  3811,  3814,  3817,
    3820,  3825,  3829,  3834,  3836,  3839,  3843,  3845,  3848,  3852,
    3856,  3861,  3862,  3866,  3867,  3875,  3876,  3882,  3883,  3886,
    3887,  3890,  3891,  3895,  3896,  3899,  3904,  3905,  3908,  3913,
    3914,  3919,  3924,  3925,  3929,  3930,  3935,  3937,  3939,  3941,
    3944,  3947,  3950,  3953,  3955,  3957,  3960,  3962,  3963,  3965,
    3966,  3971,  3974,  3975,  3978,  3980,  3985,  3990,  3991,  3993,
    3995,  3997,  3999,  4001,  4002,  4007,  4013,  4015,  4018,  4021,
    4022,  4026,  4028,  4030,  4031,  4036,  4037,  4039,  4040,  4045,
    4050,  4057,  4064,  4065,  4067,  4070,  4071,  4073,  4074,  4078,
    4080,  4083,  4084,  4088,  4094,  4095,  4099,  4102,  4103,  4108,
    4115,  4116,  4120,  4122,  4126,  4129,  4132,  4135,  4139,  4140,
    4144,  4145,  4149,  4150,  4154,  4155,  4157,  4158,  4162,  4164,
    4166,  4168,  4170,  4172,  4180,  4181,  4183,  4185,  4187,  4189,
    4191,  4193,  4198,  4200,  4203,  4205,  4208,  4212,  4213,  4215,
    4218,  4220,  4224,  4226,  4228,  4233,  4235,  4237,  4239,  4240,
    4245,  4252,  4253,  4256,  4257,  4262,  4266,  4270,  4272,  4274,
    4275,  4277,  4279,  4280,  4282,  4283,  4286,  4289,  4290,  4292,
    4295,  4297,  4299,  4300,  4302,  4305,  4307,  4309,  4310,  4313,
    4316,  4317,  4319,  4322,  4323,  4325,  4328,  4329,  4332,  4335,
    4336,  4338,  4341,  4342,  4344,  4347,  4348,  4351,  4354,  4355,
    4357,  4360,  4361,  4363,  4366,  4369,  4372,  4375,  4378,  4379,
    4381,  4384,  4385,  4387,  4390,  4393,  4396,  4397,  4399,  4402,
    4403,  4405,  4408,  4409,  4411,  4414,  4417,  4418,  4420,  4423,
    4424,  4426,  4429,  4430,  4433,  4435,  4437,  4438,  4441,  4443,
    4446,  4449,  4451,  4453,  4455,  4457,  4459,  4461,  4463,  4465,
    4467,  4469,  4471,  4473,  4475,  4477,  4479,  4481,  4483,  4485,
    4487,  4489,  4491,  4493,  4495,  4497,  4499,  4501,  4504,  4506,
    4508,  4510,  4512,  4514,  4516,  4518,  4522,  4523,  4525,  4527,
    4531,  4535,  4537,  4541,  4545,  4547,  4551,  4553,  4556,  4559,
    4561,  4565,  4567,  4569,  4573,  4575,  4579,  4581,  4585,  4587,
    4590,  4593,  4595,  4597,  4599,  4602,  4604,  4606,  4608,  4610,
    4613,  4615,  4616,  4619,  4621,  4623,  4625,  4629,  4631,  4633,
    4636,  4638,  4640,  4642,  4645,  4647,  4649,  4651,  4653,  4655,
    4657,  4659,  4662,  4664,  4666,  4670,  4671,  4673,  4675,  4678,
    4680,  4682,  4684,  4686,  4688,  4690,  4692,  4695,  4698,  4701,
    4706,  4710,  4712,  4714,  4717,  4719,  4721,  4723,  4725,  4727,
    4729,  4731,  4734,  4737,  4740,  4742,  4744,  4746,  4748,  4750,
    4752,  4754,  4756,  4758,  4760,  4762,  4764,  4766,  4768,  4770,
    4772,  4774,  4776,  4778,  4780,  4782,  4784,  4786,  4788,  4790,
    4792,  4794,  4796,  4798,  4800,  4802,  4804,  4807,  4809,  4811,
    4813,  4815,  4819,  4822,  4825,  4827,  4829,  4833,  4836,  4839,
    4841,  4843,  4847,  4851,  4856,  4862,  4864,  4866,  4868,  4870,
    4872,  4874,  4876,  4878,  4880,  4882,  4884,  4887,  4889,  4893,
    4895,  4897,  4899,  4901,  4903,  4905,  4907,  4910,  4916,  4922,
    4928,  4933,  4939,  4945,  4951,  4957,  4963,  4966,  4969,  4971,
    4973,  4975,  4977,  4979,  4981,  4983,  4985,  4987,  4988,  4993,
    4999,  5000,  5004,  5007,  5009,  5013,  5017,  5019,  5023,  5025,
    5029,  5031,  5035,  5037,  5041,  5042,  5043,  5045,  5046,  5048,
    5049,  5051,  5052,  5055,  5056,  5059,  5060,  5062,  5064,  5065,
    5067,  5068,  5070,  5073,  5074,  5077,  5078,  5082,  5084,  5086,
    5088,  5090,  5092,  5094,  5096,  5098,  5099,  5102,  5104,  5106,
    5108,  5110,  5112,  5114,  5116,  5118,  5120,  5122,  5124,  5126,
    5128,  5130,  5132,  5134,  5136,  5138,  5140,  5142,  5144,  5146,
    5148,  5150,  5152,  5154,  5156,  5158,  5160,  5162,  5164,  5166,
    5168,  5170,  5172,  5174,  5176,  5178,  5180,  5182,  5184,  5186,
    5188,  5190,  5192,  5194,  5196,  5198,  5200,  5202,  5204,  5206,
    5208,  5210,  5212,  5214,  5216,  5218,  5220,  5222,  5224,  5226,
    5228,  5230,  5232,  5234,  5236,  5238,  5240,  5242,  5244,  5246,
    5248,  5249,  5251,  5252,  5254,  5255,  5257,  5258,  5260,  5261,
    5263,  5265,  5266,  5268,  5269,  5271,  5272,  5274,  5275,  5277,
    5278,  5280,  5281,  5283,  5284,  5286,  5287,  5289,  5290,  5292,
    5293,  5296,  5297,  5299,  5300,  5302,  5303,  5305,  5306,  5308,
    5309,  5311,  5312,  5314,  5317,  5318,  5320,  5321,  5323,  5324,
    5326,  5327,  5329,  5330,  5332,  5334,  5335,  5337,  5338,  5340,
    5342,  5343,  5345,  5346,  5348,  5350,  5351,  5354,  5357,  5358,
    5360,  5361,  5363,  5364,  5366,  5367,  5369,  5370,  5372,  5374,
    5375,  5377,  5378,  5380,  5381,  5384,  5386,  5388,  5389,  5391,
    5392,  5394,  5395,  5397,  5398,  5400,  5401,  5403,  5405,  5406,
    5408,  5409,  5411,  5412,  5414,  5415,  5417,  5420,  5421,  5423,
    5424,  5426,  5427,  5429,  5430,  5432,  5433,  5435,  5436,  5438,
    5439,  5441,  5442,  5444,  5445,  5447,  5448,  5450,  5452,  5453,
    5455,  5456,  5460,  5461,  5463,  5466,  5468,  5470,  5472,  5474,
    5476,  5478,  5480,  5482,  5484,  5486,  5488,  5490,  5492,  5494,
    5496,  5498,  5500,  5502,  5504,  5507,  5510,  5512,  5514,  5516,
    5518,  5520,  5522,  5525,  5527,  5531,  5534,  5536,  5538,  5540,
    5543,  5545,  5548,  5550,  5553,  5555,  5558,  5560,  5563,  5565,
    5568,  5570,  5573
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     557,     0,    -1,    -1,   558,   559,    -1,   562,    -1,   560,
      -1,   561,    -1,   560,   561,    -1,   564,    -1,   565,    -1,
      -1,   563,   570,    -1,   571,   572,   570,   566,    -1,   571,
     575,   570,   569,    -1,    -1,   567,    -1,   568,    -1,   567,
     568,    -1,   154,   578,   490,    -1,   150,   578,   490,    -1,
     584,   698,   879,    -1,    -1,   230,   129,   490,    -1,   229,
     129,   490,    -1,    -1,    -1,   363,   573,   490,   577,   579,
     574,   580,   490,    -1,    -1,   215,   576,   490,   577,   579,
     490,    -1,   364,    -1,   272,    -1,   364,    -1,   272,    -1,
      -1,    27,   272,    -1,    -1,  1431,   581,  1448,    -1,    76,
      -1,   582,    -1,   583,    -1,   185,    -1,   583,    76,    -1,
      76,   583,    -1,   495,    -1,   379,    -1,   585,   586,   649,
      -1,    -1,   166,   129,   490,    -1,   587,   588,   610,   611,
     604,    -1,    -1,    89,   422,   490,    -1,    -1,   589,    -1,
     593,    -1,   589,   593,    -1,   593,   589,    -1,    -1,   446,
     490,   590,   591,    -1,    -1,   603,   592,   490,    -1,    -1,
    1467,   112,   289,    -1,    -1,   324,   490,   594,   595,    -1,
      -1,   603,   490,    -1,   603,   596,   490,    -1,   596,   490,
      -1,   597,    -1,   596,   597,    -1,   598,    -1,   599,    -1,
     600,    -1,   601,    -1,   284,   441,  1431,  1373,  1477,    -1,
    1483,  1431,  1331,    -1,   425,  1431,  1373,    -1,  1417,    62,
    1431,   602,    -1,  1331,    -1,   273,    -1,   534,    -1,   469,
      -1,   545,    -1,   603,   545,    -1,    -1,    -1,   394,   490,
     605,   606,    -1,    -1,   607,   490,    -1,   607,     1,   490,
      -1,   608,    -1,   607,   608,    -1,   214,     9,   245,    -1,
     214,   545,   579,    -1,   214,   609,   245,    -1,   362,   545,
     579,    -1,   216,    -1,   609,   216,    -1,    -1,   448,   490,
      -1,    -1,   612,    -1,   613,   490,    -1,   612,   613,   490,
      -1,   614,    -1,   613,   614,    -1,   615,    -1,   621,    -1,
     630,    -1,   640,    -1,   637,    -1,   641,    -1,   643,    -1,
     644,    -1,   645,    -1,   646,    -1,   647,    -1,   648,    -1,
      -1,   545,   616,   617,    -1,  1431,   101,    -1,  1373,  1431,
    1335,    -1,  1431,  1335,   618,    -1,   619,    -1,    -1,   619,
      -1,   620,    -1,  1160,  1445,  1335,    -1,   620,  1160,  1445,
    1335,    -1,    -1,    11,  1335,   622,  1431,   623,    -1,   297,
      -1,   450,    -1,   451,    -1,   133,    -1,    29,    -1,   624,
      -1,   625,    -1,   624,   625,    -1,   628,    -1,   628,   481,
     628,    -1,    -1,   628,    17,   626,   627,    -1,   628,    -1,
     627,    17,   628,    -1,   272,    -1,   447,    -1,   551,    -1,
     370,    -1,   228,    -1,   282,    -1,   447,    -1,   551,    -1,
     632,   631,    -1,    -1,   234,   545,    -1,   467,  1418,   633,
      -1,   634,    -1,   633,   634,    -1,   635,  1432,   636,    -1,
    1336,    -1,   635,  1336,    -1,  1374,    -1,   636,  1374,    -1,
      61,  1335,  1431,   638,    -1,   639,    -1,   638,   639,    -1,
    1376,    -1,  1376,   481,  1376,    -1,   273,  1335,  1431,   272,
      -1,   103,  1452,  1431,   272,   642,    -1,    -1,  1467,   348,
     272,    -1,   113,  1431,    72,    -1,   321,   435,  1431,   507,
     429,    -1,   105,  1431,  1330,    -1,   101,   454,  1431,  1330,
      -1,   417,  1431,  1330,    -1,   178,  1431,  1330,    -1,   650,
     651,   653,   652,   688,    -1,    -1,   242,   422,   490,    -1,
      -1,   188,   490,    -1,    -1,   250,   490,    -1,    -1,   653,
     654,    -1,    -1,   426,  1399,  1335,   655,   656,   490,    -1,
      -1,   656,   657,    -1,   658,    -1,   665,    -1,   667,    -1,
     669,    -1,   671,    -1,   673,    -1,   677,    -1,   679,    -1,
     680,    -1,   681,    -1,   683,    -1,   684,    -1,   686,    -1,
      30,  1464,   662,   661,   663,    -1,    30,  1464,   662,   660,
     664,    -1,    30,  1464,   662,   126,   664,    -1,    30,  1464,
     662,   254,   664,    -1,    30,  1464,   662,   659,   664,    -1,
     356,    -1,   357,    -1,   355,    -1,   124,    -1,   125,    -1,
     474,    -1,   371,    -1,    -1,   268,     7,  1422,    -1,    -1,
     185,    -1,   132,    -1,   272,    -1,  1370,    -1,    -1,   272,
      -1,  1370,    -1,     4,  1440,  1431,   666,    -1,   431,    -1,
     132,    -1,   371,    -1,    19,  1449,  1433,  1431,   682,  1393,
     668,    -1,    -1,   466,   542,     9,  1379,    -1,   466,   542,
     629,    -1,  1468,  1431,   670,    -1,   545,    -1,   672,   454,
    1431,  1330,    -1,    -1,   493,    -1,   443,    -1,    -1,   674,
     278,  1440,  1431,   675,    -1,   283,   676,    -1,    34,   676,
      -1,   181,    -1,    -1,   544,   278,   329,  1476,    -1,   544,
     278,   329,   291,  1476,    -1,   544,   411,    -1,   335,  1431,
     678,    -1,   678,    -1,   236,    -1,  1449,  1415,   431,    -1,
     384,    -1,   268,   431,    -1,   340,  1417,  1431,  1334,    -1,
     376,   118,  1431,   450,    -1,   376,  1433,  1431,   682,    -1,
    1330,    -1,  1330,   491,  1329,    -1,  1330,   445,  1431,  1329,
      -1,   384,  1433,  1431,  1330,    -1,   396,   685,  1411,    -1,
     304,    -1,  1373,    -1,   434,  1467,   687,    -1,     9,  1446,
      -1,   304,  1446,    -1,   373,   330,    -1,    -1,   689,   490,
      -1,   689,     1,   490,    -1,   690,    -1,   689,   690,    -1,
     691,    -1,   693,    -1,   415,   692,  1410,  1424,  1319,    -1,
      -1,   376,    -1,   443,    -1,   444,    -1,    -1,   291,   694,
    1422,  1459,  1419,   695,    -1,   696,    -1,   695,   696,    -1,
    1320,   697,    -1,    -1,   351,  1373,    -1,    -1,   700,   701,
     702,   699,   753,   734,   814,   816,   818,   863,    -1,    -1,
     107,   129,   490,    -1,    -1,   493,   422,   490,    -1,    -1,
     702,   703,    -1,   704,   755,    -1,    -1,   706,  1320,   705,
     707,   490,    -1,   706,     1,   490,    -1,   187,    -1,   419,
      -1,    -1,   707,   708,    -1,  1431,   185,    -1,  1431,   219,
      -1,   709,    -1,   711,    -1,   715,    -1,   716,    -1,   719,
      -1,   720,    -1,   726,    -1,   729,    -1,   731,    -1,    48,
    1419,  1373,   714,   710,    -1,    -1,   378,    -1,    60,    -1,
     376,  1419,  1373,  1418,    -1,   376,  1419,  1373,   485,  1373,
    1418,    -1,   376,  1431,   540,  1426,  1455,   713,   714,  1418,
     712,    -1,    -1,   119,  1444,  1330,    -1,    -1,  1425,  1373,
      -1,    -1,   485,  1373,    -1,   255,  1478,  1474,    -1,   538,
     326,   717,  1431,   718,    -1,   538,   326,   189,  1431,   718,
      -1,   545,    -1,   229,    -1,   272,    -1,  1370,    -1,   107,
    1478,  1332,    -1,   266,  1431,  1334,  1438,   721,    -1,    -1,
     721,   722,    -1,   723,    -1,   724,    -1,   725,    -1,  1467,
     203,  1413,  1334,    -1,   504,  1334,    -1,    49,  1334,    -1,
     377,  1440,  1431,   727,    -1,   186,    -1,   537,    -1,   193,
      -1,   539,    -1,   728,    -1,   512,    -1,   414,    -1,    66,
    1431,   670,   730,    -1,    -1,   204,  1329,    -1,   732,   733,
      -1,   391,  1431,    -1,   393,  1409,    -1,  1335,    -1,   733,
    1335,    -1,    -1,    -1,    77,   422,   490,   735,   736,    -1,
      -1,   736,   737,    -1,   738,   755,    -1,    -1,    55,  1335,
     739,   740,   490,    -1,    -1,   740,   741,    -1,  1424,  1429,
     241,   742,    -1,  1424,   337,   746,    -1,  1424,  1429,   249,
     749,    -1,    -1,   743,    -1,   745,    -1,   744,    -1,   743,
     744,    -1,  1458,   369,  1431,  1366,    -1,  1458,   459,  1431,
    1366,    -1,  1458,   460,  1431,  1366,    -1,  1458,   461,  1431,
    1366,    -1,   286,   108,  1431,  1366,    -1,   286,   482,  1431,
    1366,    -1,  1458,   445,  1431,  1366,    -1,   477,   260,  1431,
    1366,    -1,   141,   253,  1431,  1366,    -1,   454,   253,  1431,
    1366,    -1,  1439,   100,  1431,  1366,    -1,  1366,  1366,  1366,
    1366,  1366,  1366,  1366,  1366,  1366,  1366,  1366,    -1,    -1,
     747,    -1,   748,    -1,   747,   748,    -1,   121,   100,  1431,
    1366,    -1,   477,   260,  1431,  1366,    -1,   454,   253,  1431,
    1366,    -1,   121,   472,   325,  1373,  1462,   801,    -1,   174,
     253,  1431,  1366,    -1,   121,  1431,  1366,    -1,   467,   121,
    1431,  1366,    -1,    -1,   750,    -1,   752,    -1,   751,    -1,
     750,   751,    -1,   286,   108,  1431,  1366,    -1,   286,   482,
    1431,  1366,    -1,  1458,   475,  1431,  1366,    -1,   477,   260,
    1431,  1366,    -1,   141,   253,  1431,  1366,    -1,   454,   253,
    1431,  1366,    -1,  1366,  1366,  1366,  1366,  1366,  1366,    -1,
      -1,    -1,   547,   422,   490,   754,   755,    -1,    -1,    -1,
     756,   757,    -1,   758,   490,    -1,   757,   758,   490,    -1,
     774,    -1,   770,    -1,   772,    -1,    -1,   760,   761,   759,
     777,    -1,   760,     1,   490,    -1,  1391,   545,    -1,    -1,
     190,    -1,   762,    -1,   545,    -1,    -1,  1431,   219,    -1,
    1377,    -1,   261,   765,    -1,   260,   765,    -1,    51,  1443,
     765,    -1,  1367,    -1,    42,    -1,    45,    -1,    44,    -1,
      43,    -1,    41,    -1,   769,    -1,   787,    -1,   788,    -1,
     766,    -1,   767,    -1,   768,    -1,     1,   490,    -1,   195,
      -1,   199,    -1,   196,    -1,   197,    -1,   194,    -1,   198,
      -1,   200,    -1,   350,    -1,   365,    -1,   440,   762,   388,
    1370,   771,    -1,    -1,   481,  1370,    -1,    -1,   137,   762,
     773,   808,    -1,   760,   762,    90,   763,   776,    -1,    -1,
     433,   762,   775,   782,   808,    -1,  1412,   764,    -1,   211,
     545,    -1,    -1,   777,   778,    -1,   779,    -1,   780,    -1,
     783,    -1,   784,    -1,   785,    -1,   789,    -1,   792,    -1,
     804,    -1,   805,    -1,   806,    -1,   807,    -1,   808,    -1,
     813,    -1,   380,  1367,    -1,  1431,   185,   781,    -1,    -1,
      27,   272,    -1,    -1,   783,    -1,  1431,   219,    -1,   347,
      -1,   786,    -1,   531,  1431,   786,    -1,    40,    -1,    78,
      -1,   787,    -1,   788,    -1,    82,    -1,    83,    -1,    84,
      -1,    85,    -1,    86,    -1,   126,    -1,   235,    -1,   339,
      -1,   350,    -1,   365,    -1,   439,    -1,   437,    -1,   438,
      -1,   519,    -1,   517,    -1,   518,    -1,    42,  1453,    -1,
      42,   516,    -1,    45,  1453,    -1,    45,   516,    -1,    44,
    1453,    -1,    44,   516,    -1,    43,  1453,    -1,    43,   516,
      -1,    41,  1453,    -1,    41,   516,    -1,   195,    -1,   196,
      -1,   194,    -1,   197,    -1,   198,    -1,   294,    -1,    80,
      -1,   202,    -1,    81,    -1,   201,    -1,  1454,   257,  1403,
      -1,  1454,   507,  1403,    -1,   325,  1373,   793,  1462,   795,
     791,    -1,    -1,   456,  1373,    -1,   325,  1373,   793,  1462,
     795,   798,   801,    -1,   325,   132,   796,   794,   793,   797,
     798,   801,    -1,    -1,   485,  1373,    -1,    -1,   211,  1373,
      -1,    -1,   119,  1444,  1330,    -1,    -1,    54,  1426,   545,
      -1,    -1,   239,    -1,   799,    -1,    -1,   799,   800,  1433,
    1431,  1329,    -1,    28,    -1,   120,    -1,    -1,   236,  1416,
     802,    -1,   803,    -1,   802,   803,    -1,   545,    -1,   251,
    1451,    -1,   468,  1434,    -1,    46,  1465,   551,    -1,    37,
      -1,    -1,   538,  1432,   810,   809,   812,    -1,   811,    -1,
     810,   811,    -1,   764,    -1,   764,   481,   764,    -1,    -1,
    1466,   492,  1431,   764,    -1,    21,   260,    -1,    21,   321,
      -1,    -1,    -1,   277,   422,   490,   815,   755,    -1,    -1,
      -1,   271,   422,   490,   817,   755,    -1,    -1,    -1,   391,
     422,   490,   819,   820,    -1,    -1,   820,   821,    -1,    -1,
     372,  1322,   822,   823,   490,   837,    -1,    -1,   823,   824,
      -1,     1,   490,    -1,  1431,   219,    -1,    65,  1431,  1353,
      -1,   825,    -1,   828,    -1,  1491,   826,    -1,  1423,   827,
      -1,  1366,    -1,   827,  1366,    -1,   341,  1437,   829,   830,
      -1,  1375,    -1,  1375,  1475,  1375,  1470,    -1,  1375,  1475,
      -1,    -1,   830,   831,    -1,   832,    -1,   833,    -1,   834,
      -1,   835,    -1,   836,    -1,   226,  1431,  1375,    -1,   192,
    1484,  1431,  1375,    -1,   256,  1485,  1431,  1375,    -1,   256,
    1484,  1431,  1375,    -1,   203,  1431,  1375,    -1,    -1,   837,
     838,    -1,    -1,   760,   761,   839,   840,   490,    -1,    -1,
     840,   841,    -1,   842,    -1,   846,    -1,   852,    -1,   784,
      -1,   862,    -1,   789,    -1,   804,    -1,   854,    -1,   806,
      -1,   860,    -1,   847,    -1,   808,    -1,   850,    -1,   861,
      -1,   790,    -1,   851,    -1,   511,  1431,   843,    -1,  1489,
      -1,  1487,    -1,  1485,   844,    -1,  1484,    -1,  1486,   844,
      -1,  1488,    -1,  1490,    -1,    -1,  1366,   845,    -1,   191,
     845,    -1,    -1,   333,   341,    -1,   302,   225,  1431,   857,
      -1,   465,  1443,  1344,   848,    -1,    -1,   397,  1444,   849,
      -1,  1366,    -1,   191,    -1,   353,   542,  1296,    -1,   540,
    1366,   211,  1346,    50,  1346,    -1,   853,   856,    -1,   268,
    1442,  1432,    -1,   270,  1409,    -1,   855,   858,    -1,  1469,
    1442,  1432,    -1,  1470,  1409,    -1,   857,    -1,   856,   857,
      -1,   349,  1373,    -1,  1375,    -1,   303,    -1,   859,    -1,
     858,   859,    -1,   349,  1373,    -1,  1375,    -1,   445,  1431,
    1346,  1400,    -1,   225,  1428,    -1,   531,  1431,   126,    -1,
      -1,    -1,   416,   422,   490,   864,   865,    -1,    -1,   866,
      -1,   867,   490,    -1,   866,   867,   490,    -1,   774,    -1,
      -1,   760,   761,   868,   869,    -1,   760,     1,   490,    -1,
      -1,   869,   870,    -1,    46,   268,    -1,    46,   416,    -1,
      39,    -1,    47,    -1,   173,   871,    -1,   173,   872,    -1,
     227,    -1,   281,    -1,   923,    -1,   513,    -1,   338,    -1,
     224,    -1,   259,    -1,    33,    -1,   471,    -1,   423,    -1,
     922,    -1,   395,    -1,   213,    -1,   367,    59,  1431,  1353,
      -1,   367,    -1,   495,    -1,   268,  1441,  1431,   875,  1356,
      -1,  1469,  1441,  1431,   876,  1356,    -1,   205,  1431,  1356,
      -1,    36,  1431,  1356,    -1,   785,    -1,   806,    -1,   878,
      -1,   804,    -1,   789,    -1,   808,    -1,   784,    -1,   877,
      -1,   536,  1366,    -1,   211,  1359,    -1,   485,  1366,    -1,
     169,    -1,  1421,   268,    -1,   171,    -1,  1421,   416,    -1,
     349,    -1,   502,    -1,   287,    -1,   497,    -1,    -1,   873,
      -1,   874,    -1,    -1,   873,    -1,   874,    -1,   325,  1373,
    1462,    -1,  1431,   219,    -1,    -1,    -1,    -1,   359,   129,
     883,   891,   490,   880,   892,   881,   894,    -1,    -1,   882,
     905,   490,   894,    -1,    -1,    -1,   536,   884,   886,    -1,
      -1,    58,   885,   886,    -1,   887,    -1,   886,   887,    -1,
     888,   889,   890,   545,    -1,    -1,  1416,   382,    -1,  1416,
     538,    -1,    -1,   441,  1431,    33,    -1,   441,  1431,   115,
      -1,   516,   441,  1431,    33,    -1,   516,   441,  1431,  1373,
      -1,   441,  1431,  1373,    -1,    -1,   332,    -1,    -1,   401,
     328,    -1,   401,   545,    -1,    -1,    -1,   114,   490,   893,
     894,   141,   114,   490,    -1,    -1,   894,   895,    -1,   896,
      -1,   899,    -1,   905,   490,    -1,   900,    -1,   490,    -1,
      -1,   545,   422,   901,   490,   897,   898,    -1,    -1,  1233,
     490,    -1,   545,   490,    -1,   545,    -1,    -1,  1373,    -1,
      -1,    -1,   903,   904,   905,    -1,    -1,   906,   907,    -1,
     905,   907,    -1,   908,    -1,   926,    -1,   931,    -1,   935,
      -1,   940,    -1,   960,    -1,   964,    -1,   972,    -1,   968,
      -1,   973,    -1,   974,    -1,   979,    -1,   984,    -1,   998,
      -1,  1002,    -1,  1004,    -1,  1007,    -1,  1021,    -1,  1025,
      -1,  1028,    -1,  1031,    -1,  1035,    -1,  1036,    -1,  1040,
      -1,  1050,    -1,  1053,    -1,  1071,    -1,  1073,    -1,  1076,
      -1,  1080,    -1,  1087,    -1,  1099,    -1,  1101,    -1,  1116,
      -1,  1117,    -1,  1127,    -1,  1130,    -1,  1131,    -1,  1135,
      -1,  1141,    -1,  1142,    -1,  1150,    -1,  1157,    -1,  1173,
      -1,  1183,    -1,  1192,    -1,  1197,    -1,  1206,    -1,  1210,
      -1,  1212,    -1,  1215,    -1,  1218,    -1,  1221,    -1,  1248,
      -1,   302,   428,    -1,     1,  1404,    -1,    -1,     3,   909,
     910,   925,    -1,    -1,   912,   911,   913,  1256,    -1,  1366,
     211,   916,    -1,  1366,   211,  1470,    -1,  1366,   211,   108,
     550,    -1,  1366,   211,   108,    -1,  1366,   211,   109,   549,
      -1,  1366,   211,   109,    -1,  1366,   211,   110,    -1,  1366,
     211,   175,   253,    -1,  1366,   211,   179,   454,    -1,  1366,
     211,   482,    -1,  1366,   211,   533,   293,    -1,  1366,   211,
      73,    -1,  1366,   211,   168,  1256,    -1,  1366,   211,   166,
    1349,  1256,    -1,  1366,   211,    25,    -1,  1366,   211,    26,
    1256,    -1,  1366,   211,  1324,    -1,  1366,   211,   545,    -1,
    1321,  1439,   100,    -1,  1366,    -1,   328,    -1,    -1,   914,
      -1,   915,    -1,   914,   915,    -1,   917,    -1,   212,    -1,
     920,    -1,  1467,   921,    -1,  1414,   482,  1357,    -1,   270,
      -1,   268,   319,    -1,  1413,   918,    -1,  1413,   919,    -1,
      31,  1356,    -1,   268,  1441,  1356,    -1,  1469,  1441,  1356,
      -1,   351,  1441,  1356,    -1,   289,  1431,    48,    -1,    33,
      -1,   471,    -1,    39,    -1,    47,    -1,    96,    -1,   213,
      -1,   227,    -1,   259,    -1,   279,    -1,   281,    -1,   922,
      -1,   338,    -1,   367,    59,  1431,  1353,    -1,   367,    -1,
     395,    -1,   923,    -1,   423,    -1,   368,   441,  1431,  1356,
      -1,   441,  1431,  1356,    -1,   513,    -1,   304,   924,    -1,
     924,    -1,   529,    -1,   205,  1431,  1356,    -1,    36,  1431,
    1356,    -1,   418,   522,  1295,    -1,   418,   130,  1295,    -1,
     483,  1408,  1357,    -1,   304,   135,    -1,   306,    -1,   327,
      -1,   404,    -1,   405,    -1,   402,    -1,   523,    -1,   115,
      -1,    -1,   142,    -1,    -1,     5,   927,   928,   930,    -1,
    1340,   485,  1315,  1268,    -1,  1340,   929,   218,  1315,  1268,
      -1,    99,  1366,   485,  1366,  1400,  1268,    -1,    -1,   485,
    1341,    -1,    -1,   143,    -1,    -1,    10,   932,   933,    -1,
    1366,  1394,   934,    -1,  1309,    60,  1395,   934,    -1,    -1,
     401,  1338,    -1,    -1,    18,   936,   937,    -1,   938,    -1,
     937,   938,    -1,  1326,   485,   939,  1326,    -1,    -1,   361,
     485,    -1,    -1,    52,   941,   942,   959,    -1,    -1,   944,
     945,   943,   946,   951,   954,    -1,    -1,   453,    -1,   455,
      -1,   288,    -1,  1354,    -1,   364,    -1,    -1,    -1,   536,
     947,   948,    -1,   949,    -1,   948,   949,    -1,   950,   328,
      -1,   950,   889,  1342,    -1,    -1,  1416,   382,    -1,  1416,
      92,    -1,  1416,   538,    -1,    -1,   952,  1430,  1366,    -1,
     952,   953,    -1,   952,   309,    -1,   952,     6,  1443,  1366,
      -1,   401,    -1,   218,    -1,   499,    -1,   328,    -1,    -1,
     956,   957,    -1,   958,   955,    -1,    -1,   956,    -1,   179,
     902,    -1,   500,   902,    -1,    -1,   958,    -1,   314,   902,
      -1,    -1,   144,    -1,    -1,    53,   961,   962,    -1,   963,
      -1,   962,   963,    -1,  1353,    -1,   364,    -1,    -1,    64,
     965,   966,    -1,  1320,   967,    -1,   966,  1320,   967,    -1,
      -1,  1479,    -1,  1479,  1424,   387,    -1,  1467,   304,   406,
      -1,  1467,   278,    -1,    -1,    79,   969,   970,   971,    -1,
    1315,  1471,  1309,  1268,    -1,    -1,   145,    -1,    75,    -1,
      93,    -1,    -1,   116,   975,   976,   978,    -1,  1320,  1449,
    1108,  1289,    -1,   493,   977,    -1,  1320,    -1,   977,  1320,
      -1,    -1,   146,    -1,    -1,   123,   980,   981,    -1,   983,
    1321,   982,    -1,    -1,  1467,   253,  1353,    -1,    -1,   241,
    1460,    -1,   337,    -1,   249,   475,    -1,   475,    -1,    -1,
     126,   985,   986,   997,    -1,  1353,   527,  1263,    -1,  1353,
     528,  1263,    -1,  1353,   525,  1263,    -1,  1353,   526,  1263,
      -1,   987,  1263,    -1,   988,  1339,    -1,  1340,    -1,   989,
      -1,   988,   989,    -1,    -1,   991,   990,   992,    -1,  1340,
      -1,   328,    -1,   993,    -1,   992,   993,    -1,   994,    -1,
    1467,   318,    -1,   920,    -1,   917,    -1,  1467,   996,    -1,
     524,  1324,    -1,   524,   545,    -1,   524,   356,    -1,   524,
     995,    -1,   101,    -1,   102,    -1,    39,    -1,    46,   268,
      -1,    46,   416,    -1,    47,    -1,    96,    -1,   173,   871,
      -1,   173,   872,    -1,   227,    -1,   281,    -1,   338,    -1,
     923,    -1,   441,  1431,  1356,    -1,   513,    -1,   205,  1431,
    1356,    -1,    36,  1431,  1356,    -1,   418,   522,  1295,    -1,
     418,   130,  1295,    -1,    -1,   147,    -1,    -1,   128,   999,
    1000,  1001,    -1,  1341,   244,  1315,  1268,    -1,  1341,   244,
    1341,   218,  1315,  1268,    -1,  1341,    50,  1341,   218,  1315,
    1268,    -1,  1341,   244,  1341,   218,  1316,   386,  1316,  1268,
      -1,  1341,    50,  1341,   218,  1316,   386,  1316,  1268,    -1,
      -1,   148,    -1,    -1,   138,  1003,   981,    -1,    -1,   165,
    1005,  1006,    -1,   272,   946,    -1,    -1,   177,  1008,  1009,
    1020,    -1,  1010,  1012,    -1,  1011,    -1,  1010,    17,  1011,
      -1,  1297,    -1,   503,    -1,   492,    -1,  1013,  1015,    -1,
    1013,    -1,  1014,    -1,  1013,  1014,    -1,  1016,   902,    -1,
     542,   336,   902,    -1,   542,  1017,    -1,  1016,   542,  1017,
      -1,  1018,    -1,  1017,    17,  1018,    -1,  1298,  1019,    -1,
      21,    -1,   503,    -1,   492,    -1,    -1,   481,  1297,    -1,
      -1,   149,    -1,    -1,   182,  1022,  1023,    -1,    -1,   362,
    1024,    -1,   214,    -1,   344,   106,    -1,   344,    -1,   422,
      -1,   343,    -1,    -1,   952,  1341,    -1,    -1,   210,  1026,
    1027,    -1,  1337,    -1,    -1,   217,  1029,  1030,    -1,  1370,
      -1,    -1,   220,  1032,  1033,    -1,  1463,  1325,  1034,    -1,
      -1,   119,  1444,  1366,    -1,   221,  1024,    -1,    -1,   231,
    1037,  1296,  1461,  1038,  1039,    -1,   902,   139,   902,    -1,
     139,   902,    -1,   902,    -1,    -1,   151,    -1,    -1,   238,
    1041,  1042,    -1,  1337,  1043,  1044,  1045,  1049,    -1,    -1,
    1467,   190,    -1,    -1,     9,  1463,   538,    -1,  1048,  1463,
     538,    -1,    -1,   390,  1046,    -1,  1047,    -1,  1046,  1047,
      -1,  1048,  1420,    50,  1341,    -1,    12,    -1,    15,    -1,
     321,    -1,    16,    -1,   322,    -1,   294,    -1,   295,    -1,
      -1,  1461,  1463,   115,    -1,    -1,   240,  1051,  1052,    -1,
    1322,    -1,  1052,  1322,    -1,    -1,   243,  1054,  1055,    -1,
    1056,  1057,    -1,  1366,    -1,  1377,    -1,  1380,    -1,  1058,
    1060,    -1,  1058,    -1,  1060,    -1,  1061,    -1,    -1,   473,
    1059,  1062,    -1,   390,  1064,    -1,    97,  1349,   485,  1350,
    1068,    -1,  1063,    -1,  1062,  1063,    -1,  1364,   204,    -1,
      60,  1068,    -1,     9,    -1,   257,    -1,   507,    -1,  1349,
    1068,    -1,  1065,    -1,  1064,  1065,    -1,    60,    50,  1349,
    1068,    -1,  1066,  1067,    -1,    -1,     9,    -1,   257,    -1,
     192,    -1,   507,    -1,  1349,    50,  1350,  1068,    -1,    -1,
    1069,    -1,  1070,    -1,  1069,  1070,    -1,  1070,  1069,    -1,
      38,  1429,  1341,    -1,     8,  1429,  1341,    -1,    -1,   285,
    1072,  1175,    -1,    -1,   290,  1074,  1075,    -1,  1341,   485,
    1337,    -1,    99,  1341,   485,  1337,    -1,    -1,   292,  1077,
    1078,  1079,    -1,  1341,    50,  1315,  1268,    -1,  1341,    50,
    1341,   218,  1315,  1268,    -1,    -1,   152,    -1,    -1,   331,
    1081,  1082,    -1,  1083,    -1,  1082,  1083,    -1,  1084,  1085,
    1108,  1319,  1086,    -1,   241,    -1,   337,    -1,   249,    -1,
     184,    -1,    -1,   434,  1467,   687,    -1,    -1,  1467,   304,
     406,    -1,  1467,   278,    -1,   405,    -1,    -1,   344,  1088,
    1089,    -1,  1093,  1094,    -1,    -1,  1094,  1090,   902,  1091,
      -1,  1094,  1092,    -1,    -1,   153,    -1,   153,    -1,   490,
      -1,  1326,    -1,  1326,   481,  1326,    -1,    -1,  1355,   484,
      -1,   206,    -1,  1095,   521,  1096,    -1,  1095,   540,  1097,
      -1,    -1,  1467,   478,  1253,    -1,   182,    -1,  1296,    -1,
    1098,    -1,  1097,     8,  1098,    -1,  1366,   211,  1341,    50,
    1341,   521,  1296,    -1,    -1,   553,  1100,  1321,    -1,    -1,
     373,  1102,  1103,  1115,    -1,  1320,  1397,  1449,  1104,  1105,
    1113,  1114,    -1,    -1,   244,  1366,    -1,    -1,  1106,    -1,
    1107,  1111,    -1,  1112,    -1,   233,   278,    -1,  1467,   232,
     278,    -1,     7,  1444,   278,    -1,  1109,    -1,    -1,  1109,
      -1,  1110,    -1,   399,  1424,  1309,   484,    -1,   399,  1424,
    1309,   421,    -1,   399,   206,    -1,    -1,  1112,    -1,  1139,
      -1,  1467,   252,   278,    -1,  1467,   541,    -1,    -1,   253,
    1431,  1366,    -1,  1289,    -1,  1279,    -1,    -1,   155,    -1,
     374,    -1,    -1,   375,  1118,  1119,  1126,    -1,  1321,  1120,
     244,  1366,  1121,    -1,   286,    -1,   424,    -1,    -1,  1123,
    1124,    -1,  1125,  1122,    -1,    -1,  1123,    -1,   305,   902,
      -1,    -1,  1125,    -1,   107,   902,    -1,    -1,   156,    -1,
      -1,   385,  1128,  1129,    -1,  1317,  1251,    -1,   398,    -1,
      -1,   400,  1132,  1133,  1134,    -1,  1320,  1449,  1104,  1278,
      -1,    -1,   157,    -1,    -1,   407,  1136,  1137,  1140,    -1,
    1317,  1251,  1108,  1138,  1289,    -1,    -1,  1139,    -1,  1467,
     278,    -1,  1467,   304,   278,    -1,    -1,   158,    -1,   411,
      -1,    -1,   420,  1143,  1144,  1149,    -1,  1318,  1145,  1146,
    1147,    -1,     9,  1318,  1146,   542,  1297,   902,    -1,    -1,
     540,  1366,    -1,    -1,   141,   902,    -1,  1148,    -1,  1148,
    1147,    -1,   542,  1296,   902,    -1,    -1,   159,    -1,    -1,
     554,  1151,  1152,    -1,  1321,  1154,    -1,  1321,  1153,  1155,
    1252,  1156,    -1,    -1,  1154,    -1,   211,  1366,    -1,  1467,
    1366,    -1,  1467,   176,    -1,  1467,   140,    -1,  1467,   136,
      -1,    -1,   390,  1435,    -1,    -1,   432,  1158,  1159,    -1,
    1162,    -1,  1163,    -1,  1166,    -1,  1167,    -1,  1168,    -1,
    1170,    -1,  1172,    -1,   329,    -1,   327,    -1,   522,    -1,
     130,    -1,   166,  1349,   485,  1349,    -1,  1360,    32,  1164,
      -1,  1165,    -1,  1164,  1165,    -1,    39,  1160,    -1,    47,
    1160,    -1,   227,  1160,    -1,   281,  1160,    -1,   404,  1160,
      -1,   513,  1160,    -1,   259,  1160,    -1,   338,  1160,    -1,
    1337,   485,   165,  1348,    -1,  1337,   485,  1341,    -1,  1337,
    1161,    50,  1341,    -1,  1169,    -1,  1168,  1169,    -1,  1323,
     485,  1160,    -1,  1171,    -1,  1170,  1171,    -1,  1337,   485,
     503,    -1,  1337,   485,   492,    -1,   256,   179,   485,   327,
      -1,    -1,   443,  1174,  1175,    -1,    -1,  1361,  1177,  1179,
    1180,  1176,  1181,  1182,    -1,    -1,  1177,  1444,   800,  1433,
    1178,    -1,    -1,  1178,  1370,    -1,    -1,  1482,  1427,    -1,
      -1,  1468,  1431,  1330,    -1,    -1,   536,  1319,    -1,   241,
     359,  1431,  1093,    -1,    -1,   218,  1319,    -1,   337,   359,
    1431,  1093,    -1,    -1,   452,  1184,  1185,  1191,    -1,  1320,
    1187,  1186,  1289,    -1,    -1,  1467,  1481,  1309,    -1,    -1,
     253,  1431,  1188,  1366,    -1,   192,    -1,   256,    -1,  1302,
      -1,  1398,  1303,    -1,  1398,  1304,    -1,  1398,  1305,    -1,
    1398,  1306,    -1,  1189,    -1,  1190,    -1,   308,  1302,    -1,
     313,    -1,    -1,   160,    -1,    -1,   457,   413,  1193,  1194,
      -1,   457,  1196,    -1,    -1,   952,  1341,    -1,  1341,    -1,
    1467,   174,  1457,  1195,    -1,  1467,   307,  1457,  1195,    -1,
      -1,  1341,    -1,   272,    -1,   447,    -1,   551,    -1,   370,
      -1,    -1,   458,  1198,  1199,  1205,    -1,  1200,   244,  1366,
    1204,  1273,    -1,  1201,    -1,  1200,  1201,    -1,  1341,  1202,
      -1,    -1,   117,  1416,  1203,    -1,   441,    -1,  1341,    -1,
      -1,  1467,   350,  1431,  1366,    -1,    -1,   161,    -1,    -1,
     464,  1207,  1208,  1209,    -1,  1340,   211,  1315,  1268,    -1,
    1340,   211,  1341,   218,  1315,  1268,    -1,    99,  1366,   211,
    1366,  1400,  1268,    -1,    -1,   162,    -1,   466,  1211,    -1,
      -1,   358,    -1,    -1,   476,  1213,  1214,    -1,  1322,    -1,
    1214,  1322,    -1,    -1,   508,  1216,  1217,    -1,  1363,   211,
    1349,   485,  1350,    -1,    -1,   515,  1219,  1220,    -1,  1320,
    1450,    -1,    -1,   520,  1222,  1223,  1232,    -1,  1366,  1224,
    1227,  1204,  1231,  1273,    -1,    -1,   117,  1416,  1225,    -1,
    1226,    -1,  1225,   333,  1226,    -1,  1392,  1349,    -1,   244,
    1228,    -1,  1227,  1228,    -1,  1366,  1229,  1230,    -1,    -1,
     118,  1426,  1366,    -1,    -1,   100,  1426,  1366,    -1,    -1,
     473,  1426,  1366,    -1,    -1,   163,    -1,    -1,   532,  1234,
    1235,    -1,  1236,    -1,  1239,    -1,  1243,    -1,  1245,    -1,
    1246,    -1,  1237,  1408,  1456,  1472,  1447,  1444,  1238,    -1,
      -1,   219,    -1,  1319,    -1,   241,    -1,   337,    -1,   249,
      -1,   184,    -1,  1424,   112,  1444,  1240,    -1,  1241,    -1,
    1240,  1241,    -1,  1327,    -1,     9,   360,    -1,     9,  1242,
    1370,    -1,    -1,   383,    -1,   383,   326,    -1,   326,    -1,
    1413,   362,  1244,    -1,   452,    -1,   141,    -1,  1237,    38,
     392,  1366,    -1,  1247,    -1,   180,    -1,   134,    -1,    -1,
     548,  1249,  1250,  1255,    -1,  1317,  1251,  1252,  1108,  1138,
    1254,    -1,    -1,   211,  1359,    -1,    -1,  1253,  1407,  1356,
    1436,    -1,  1253,  1407,  1324,    -1,  1253,  1407,   341,    -1,
      38,    -1,     8,    -1,    -1,  1290,    -1,  1284,    -1,    -1,
     164,    -1,    -1,  1258,  1260,    -1,  1261,  1257,    -1,    -1,
    1258,    -1,  1259,   902,    -1,   175,    -1,   179,    -1,    -1,
    1261,    -1,  1262,   902,    -1,   312,    -1,   314,    -1,    -1,
    1265,  1266,    -1,  1267,  1264,    -1,    -1,  1265,    -1,   179,
     902,    -1,    -1,  1267,    -1,   314,   902,    -1,    -1,  1270,
    1271,    -1,  1272,  1269,    -1,    -1,  1270,    -1,   442,   902,
      -1,    -1,  1272,    -1,   317,   902,    -1,    -1,  1275,  1276,
      -1,  1277,  1274,    -1,    -1,  1275,    -1,   500,   902,    -1,
      -1,  1277,    -1,   316,   902,    -1,  1281,  1282,    -1,  1283,
    1281,    -1,  1281,  1282,    -1,  1283,  1280,    -1,    -1,  1281,
      -1,   141,   902,    -1,    -1,  1283,    -1,   310,   902,    -1,
    1286,  1287,    -1,  1288,  1285,    -1,    -1,  1286,    -1,   170,
     902,    -1,    -1,  1288,    -1,   311,   902,    -1,    -1,  1290,
      -1,  1292,  1293,    -1,  1294,  1291,    -1,    -1,  1292,    -1,
     247,   902,    -1,    -1,  1294,    -1,   315,   902,    -1,    -1,
    1358,  1480,    -1,  1297,    -1,  1298,    -1,    -1,  1299,  1300,
      -1,  1301,    -1,  1300,   248,    -1,  1300,  1301,    -1,  1341,
      -1,    63,    -1,   501,    -1,   487,    -1,   502,    -1,   497,
      -1,   498,    -1,   489,    -1,   183,    -1,  1302,    -1,  1303,
      -1,  1304,    -1,  1305,    -1,  1306,    -1,   313,    -1,   308,
      -1,    20,    -1,   333,    -1,   328,    -1,   321,    -1,    12,
      -1,    13,    -1,    14,    -1,   352,    -1,   301,    -1,   491,
      -1,   172,  1463,    -1,   494,    -1,   222,    -1,   496,    -1,
     262,    -1,   223,    -1,   263,    -1,  1309,    -1,  1307,  1308,
    1309,    -1,    -1,    74,    -1,   427,    -1,  1309,   502,  1310,
      -1,  1309,   497,  1310,    -1,  1310,    -1,  1310,   498,  1311,
      -1,  1310,   489,  1311,    -1,  1311,    -1,  1312,   183,  1311,
      -1,  1312,    -1,   502,  1313,    -1,   497,  1313,    -1,  1313,
      -1,   501,  1309,   487,    -1,  1346,    -1,   267,    -1,   267,
    1473,   545,    -1,   269,    -1,   269,  1473,   545,    -1,   342,
      -1,   342,  1473,   545,    -1,  1316,    -1,  1315,  1316,    -1,
    1338,  1400,    -1,  1370,    -1,  1370,    -1,  1320,    -1,  1319,
    1320,    -1,   545,    -1,   545,    -1,   545,    -1,  1324,    -1,
    1323,  1324,    -1,   288,    -1,    -1,  1325,  1326,    -1,  1327,
      -1,  1370,    -1,  1328,    -1,  1328,  1473,  1328,    -1,   272,
      -1,  1330,    -1,  1329,  1330,    -1,  1370,    -1,   545,    -1,
    1333,    -1,  1332,  1333,    -1,   545,    -1,  1330,    -1,   272,
      -1,   545,    -1,     1,    -1,   545,    -1,  1338,    -1,  1337,
    1338,    -1,  1368,    -1,  1378,    -1,     6,  1443,  1367,    -1,
      -1,  1340,    -1,  1341,    -1,  1340,  1341,    -1,  1366,    -1,
    1343,    -1,  1365,    -1,  1343,    -1,  1377,    -1,  1380,    -1,
    1314,    -1,   261,  1367,    -1,   261,  1378,    -1,   261,  1380,
      -1,     6,  1443,  1347,  1348,    -1,     6,  1443,  1367,    -1,
     288,    -1,  1346,    -1,  1344,  1346,    -1,  1366,    -1,  1378,
      -1,  1380,    -1,  1366,    -1,  1378,    -1,  1380,    -1,  1314,
      -1,   261,  1367,    -1,   261,  1378,    -1,   261,  1380,    -1,
     362,    -1,   165,    -1,  1367,    -1,   272,    -1,  1351,    -1,
    1352,    -1,  1366,    -1,  1378,    -1,  1380,    -1,  1366,    -1,
    1377,    -1,  1366,    -1,   272,    -1,  1366,    -1,   272,    -1,
    1380,    -1,  1366,    -1,   764,    -1,  1380,    -1,  1360,    -1,
    1373,    -1,   551,    -1,  1360,    -1,  1375,    -1,  1360,    -1,
    1373,    -1,  1366,    -1,  1377,    -1,  1380,    -1,  1362,    -1,
    1362,    -1,  1370,    -1,  1370,  1371,    -1,  1366,    -1,  1366,
      -1,  1367,    -1,  1367,    -1,  1370,  1371,  1372,    -1,  1370,
    1371,    -1,  1370,  1372,    -1,  1370,    -1,  1369,    -1,  1370,
    1371,  1372,    -1,  1370,  1371,    -1,  1370,  1372,    -1,  1370,
      -1,   545,    -1,   545,  1473,  1370,    -1,   501,  1307,   487,
      -1,   501,  1309,   488,   487,    -1,   501,  1309,   488,  1309,
     487,    -1,   272,    -1,   272,    -1,   272,    -1,   272,    -1,
     447,    -1,   551,    -1,   370,    -1,   228,    -1,   282,    -1,
     499,    -1,  1378,    -1,     9,  1379,    -1,  1379,    -1,  1378,
     486,  1379,    -1,   272,    -1,   447,    -1,   551,    -1,   370,
      -1,   228,    -1,   282,    -1,   499,    -1,  1381,  1384,    -1,
    1382,   501,  1345,   487,  1384,    -1,  1383,   501,  1307,   487,
    1384,    -1,   509,   501,  1386,   487,  1384,    -1,   323,   501,
    1387,   487,    -1,   274,   501,  1388,   487,  1384,    -1,   275,
     501,  1388,   487,  1384,    -1,   276,   501,  1388,   487,  1384,
      -1,   208,   501,  1389,   487,  1384,    -1,   209,   501,  1390,
     487,  1384,    -1,   216,  1385,    -1,   535,  1385,    -1,   104,
      -1,   543,    -1,   530,    -1,   280,    -1,   403,    -1,    87,
      -1,   207,    -1,   462,    -1,   463,    -1,    -1,   501,  1309,
     488,   487,    -1,   501,  1309,   488,  1309,   487,    -1,    -1,
     501,  1307,   487,    -1,   501,   487,    -1,  1345,    -1,  1345,
    1308,   257,    -1,  1345,  1308,   507,    -1,  1345,    -1,  1345,
    1308,  1345,    -1,  1309,    -1,  1309,  1308,  1330,    -1,  1307,
      -1,  1307,  1308,   470,    -1,  1307,    -1,  1307,  1308,   470,
      -1,    -1,    -1,     9,    -1,    -1,  1482,    -1,    -1,   239,
      -1,    -1,   239,  1396,    -1,    -1,   485,  1352,    -1,    -1,
     302,    -1,   354,    -1,    -1,   308,    -1,    -1,   332,    -1,
     308,   332,    -1,    -1,   412,  1401,    -1,    -1,   289,  1431,
    1402,    -1,    35,    -1,   298,    -1,   299,    -1,   300,    -1,
     366,    -1,   505,    -1,   506,    -1,   510,    -1,    -1,   429,
    1417,    -1,   490,    -1,  1405,    -1,  1406,    -1,     3,    -1,
       5,    -1,    10,    -1,    18,    -1,    52,    -1,    53,    -1,
      64,    -1,    75,    -1,    79,    -1,    93,    -1,   116,    -1,
     126,    -1,   128,    -1,   139,    -1,   165,    -1,   177,    -1,
     182,    -1,   210,    -1,   217,    -1,   220,    -1,   221,    -1,
     231,    -1,   238,    -1,   240,    -1,   243,    -1,   285,    -1,
     290,    -1,   292,    -1,   302,    -1,   331,    -1,   344,    -1,
     373,    -1,   385,    -1,   400,    -1,   407,    -1,   411,    -1,
     420,    -1,   432,    -1,   443,    -1,   452,    -1,   457,    -1,
     458,    -1,   464,    -1,   466,    -1,   476,    -1,   508,    -1,
     515,    -1,   520,    -1,   548,    -1,   142,    -1,   143,    -1,
     144,    -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,
     149,    -1,   151,    -1,   152,    -1,   153,    -1,   155,    -1,
     156,    -1,   157,    -1,   158,    -1,   159,    -1,   160,    -1,
     161,    -1,   162,    -1,   163,    -1,   164,    -1,    -1,     7,
      -1,    -1,     8,    -1,    -1,    22,    -1,    -1,    23,    -1,
      -1,    23,    -1,    24,    -1,    -1,    27,    -1,    -1,    31,
      -1,    -1,    38,    -1,    -1,    40,    -1,    -1,    50,    -1,
      -1,    59,    -1,    -1,    60,    -1,    -1,    91,    -1,    -1,
     107,    -1,    -1,   141,  1443,    -1,    -1,   493,    -1,    -1,
     191,    -1,    -1,   204,    -1,    -1,   211,    -1,    -1,   234,
      -1,    -1,   334,    -1,   234,   334,    -1,    -1,   237,    -1,
      -1,   495,    -1,    -1,   244,    -1,    -1,   248,    -1,    -1,
     248,    -1,    22,    -1,    -1,   253,    -1,    -1,   258,    -1,
     410,    -1,    -1,   268,    -1,    -1,   268,    -1,   270,    -1,
      -1,   264,  1431,    -1,   265,  1409,    -1,    -1,   270,    -1,
      -1,   286,    -1,    -1,   289,    -1,    -1,   319,    -1,    -1,
     319,    -1,   320,    -1,    -1,   326,    -1,    -1,   329,    -1,
      -1,   454,   248,    -1,   454,    -1,   248,    -1,    -1,   336,
      -1,    -1,   359,    -1,    -1,   362,    -1,    -1,   376,    -1,
      -1,   376,    -1,   378,    -1,    -1,   410,    -1,    -1,   435,
      -1,    -1,   436,    -1,    -1,   435,    -1,   435,   248,    -1,
      -1,   441,    -1,    -1,   449,    -1,    -1,   454,    -1,    -1,
     467,    -1,    -1,   474,    -1,    -1,   475,    -1,    -1,   480,
      -1,    -1,   484,    -1,    -1,   485,    -1,    -1,   485,    -1,
     536,    -1,    -1,   542,    -1,    -1,   542,   432,   485,    -1,
      -1,   544,    -1,    67,   430,    -1,   430,    -1,    70,    -1,
      68,    -1,    71,    -1,    69,    -1,   491,    -1,   172,    -1,
     179,    -1,   174,    -1,   234,    -1,   326,    -1,   449,    -1,
     328,    -1,   268,    -1,   270,    -1,   376,    -1,   378,    -1,
      60,    -1,   546,    -1,   376,  1431,    -1,   378,  1409,    -1,
     381,    -1,   514,    -1,   268,    -1,   270,    -1,   441,    -1,
     260,    -1,   544,   131,    -1,   131,    -1,   362,    67,   430,
      -1,    67,   430,    -1,   430,    -1,   122,    -1,   111,    -1,
      94,   226,    -1,    57,    -1,    94,   203,    -1,    56,    -1,
     341,   226,    -1,   345,    -1,   341,   203,    -1,   346,    -1,
     391,   226,    -1,   409,    -1,   391,   203,    -1,   408,    -1,
      94,  1431,    -1,    95,  1409,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  2270,  2270,  2270,  2303,  2304,  2308,  2309,  2313,  2314,
    2318,  2318,  2341,  2352,  2358,  2359,  2363,  2364,  2368,  2376,
    2385,  2393,  2394,  2395,  2400,  2404,  2399,  2420,  2419,  2435,
    2446,  2453,  2454,  2461,  2462,  2465,  2466,  2470,  2479,  2488,
    2489,  2496,  2497,  2501,  2505,  2515,  2520,  2521,  2530,  2537,
    2538,  2548,  2549,  2550,  2551,  2552,  2565,  2564,  2574,  2575,
    2578,  2579,  2593,  2592,  2602,  2603,  2604,  2605,  2609,  2610,
    2614,  2615,  2616,  2617,  2621,  2629,  2636,  2643,  2654,  2658,
    2662,  2666,  2673,  2674,  2679,  2681,  2680,  2691,  2692,  2693,
    2700,  2701,  2705,  2709,  2715,  2716,  2726,  2731,  2741,  2742,
    2754,  2755,  2759,  2760,  2764,  2765,  2769,  2770,  2771,  2772,
    2773,  2774,  2775,  2776,  2777,  2778,  2779,  2780,  2788,  2787,
    2816,  2827,  2840,  2848,  2851,  2852,  2856,  2863,  2878,  2899,
    2898,  2922,  2928,  2934,  2940,  2946,  2952,  2962,  2966,  2973,
    2977,  2982,  2981,  2992,  2996,  3003,  3004,  3005,  3006,  3007,
    3008,  3012,  3013,  3020,  3035,  3038,  3045,  3053,  3057,  3068,
    3088,  3096,  3107,  3108,  3114,  3135,  3136,  3140,  3144,  3165,
    3188,  3263,  3266,  3275,  3294,  3310,  3328,  3346,  3363,  3380,
    3390,  3391,  3398,  3399,  3407,  3408,  3418,  3419,  3424,  3423,
    3453,  3454,  3458,  3459,  3460,  3461,  3462,  3463,  3464,  3465,
    3466,  3467,  3468,  3469,  3470,  3477,  3483,  3493,  3506,  3519,
    3546,  3547,  3548,  3552,  3553,  3554,  3555,  3558,  3559,  3565,
    3566,  3570,  3574,  3575,  3580,  3583,  3584,  3591,  3599,  3600,
    3601,  3608,  3632,  3634,  3639,  3649,  3657,  3672,  3679,  3681,
    3682,  3688,  3688,  3695,  3700,  3705,  3712,  3713,  3714,  3718,
    3729,  3730,  3734,  3739,  3744,  3749,  3760,  3771,  3781,  3789,
    3790,  3791,  3797,  3808,  3815,  3816,  3822,  3830,  3831,  3832,
    3838,  3839,  3840,  3847,  3848,  3852,  3853,  3859,  3887,  3888,
    3889,  3890,  3897,  3896,  3912,  3913,  3917,  3920,  3921,  3931,
    3928,  3945,  3946,  3954,  3955,  3963,  3964,  3968,  3989,  3988,
    4006,  4013,  4017,  4023,  4024,  4028,  4038,  4053,  4054,  4055,
    4056,  4057,  4058,  4059,  4060,  4061,  4068,  4075,  4075,  4075,
    4081,  4101,  4135,  4166,  4167,  4174,  4175,  4179,  4180,  4187,
    4198,  4203,  4214,  4215,  4219,  4220,  4226,  4237,  4255,  4256,
    4260,  4261,  4262,  4266,  4273,  4280,  4289,  4298,  4299,  4300,
    4301,  4302,  4311,  4312,  4318,  4355,  4356,  4369,  4384,  4385,
    4389,  4399,  4412,  4414,  4413,  4428,  4429,  4433,  4450,  4449,
    4470,  4471,  4475,  4476,  4477,  4480,  4482,  4483,  4487,  4488,
    4492,  4493,  4494,  4495,  4496,  4497,  4498,  4499,  4500,  4501,
    4502,  4506,  4510,  4512,  4516,  4517,  4521,  4522,  4523,  4524,
    4525,  4526,  4527,  4530,  4532,  4533,  4537,  4538,  4542,  4543,
    4544,  4545,  4546,  4547,  4551,  4556,  4558,  4557,  4573,  4576,
    4576,  4593,  4594,  4598,  4599,  4600,  4602,  4601,  4616,  4629,
    4637,  4642,  4648,  4652,  4662,  4665,  4677,  4678,  4679,  4680,
    4684,  4688,  4692,  4696,  4700,  4704,  4708,  4712,  4716,  4720,
    4724,  4728,  4732,  4743,  4744,  4748,  4749,  4753,  4754,  4755,
    4759,  4760,  4764,  4789,  4792,  4800,  4799,  4812,  4836,  4835,
    4849,  4853,  4862,  4866,  4875,  4876,  4877,  4878,  4879,  4880,
    4881,  4882,  4883,  4884,  4885,  4886,  4887,  4894,  4918,  4946,
    4949,  4957,  4958,  4962,  4987,  4998,  4999,  5003,  5007,  5011,
    5015,  5019,  5023,  5027,  5031,  5035,  5039,  5043,  5047,  5051,
    5056,  5061,  5065,  5069,  5077,  5081,  5085,  5093,  5097,  5101,
    5105,  5109,  5113,  5117,  5121,  5125,  5133,  5141,  5145,  5149,
    5153,  5157,  5161,  5169,  5170,  5174,  5175,  5181,  5188,  5201,
    5210,  5211,  5220,  5227,  5245,  5246,  5250,  5251,  5254,  5255,
    5261,  5262,  5269,  5270,  5277,  5301,  5302,  5319,  5320,  5323,
    5324,  5331,  5332,  5337,  5348,  5359,  5370,  5381,  5410,  5409,
    5418,  5419,  5423,  5424,  5427,  5428,  5440,  5449,  5463,  5465,
    5464,  5484,  5486,  5485,  5501,  5503,  5502,  5511,  5512,  5519,
    5518,  5531,  5532,  5533,  5540,  5545,  5549,  5550,  5556,  5563,
    5567,  5568,  5574,  5611,  5615,  5620,  5626,  5627,  5632,  5633,
    5634,  5635,  5636,  5640,  5647,  5654,  5661,  5668,  5674,  5675,
    5680,  5679,  5686,  5687,  5691,  5692,  5693,  5694,  5695,  5696,
    5697,  5698,  5699,  5700,  5701,  5702,  5703,  5704,  5705,  5706,
    5710,  5717,  5718,  5719,  5720,  5721,  5722,  5723,  5726,  5727,
    5728,  5731,  5732,  5736,  5743,  5749,  5750,  5754,  5755,  5759,
    5766,  5770,  5777,  5778,  5782,  5789,  5790,  5794,  5795,  5799,
    5800,  5801,  5805,  5806,  5810,  5811,  5815,  5822,  5829,  5837,
    5839,  5838,  5859,  5860,  5864,  5865,  5869,  5871,  5870,  5930,
    5948,  5949,  5953,  5958,  5963,  5967,  5971,  5976,  5981,  5986,
    5991,  5995,  5999,  6004,  6009,  6014,  6019,  6024,  6029,  6038,
    6042,  6046,  6051,  6055,  6059,  6064,  6069,  6074,  6079,  6080,
    6081,  6082,  6083,  6084,  6085,  6086,  6087,  6096,  6101,  6112,
    6113,  6117,  6118,  6122,  6123,  6127,  6128,  6133,  6136,  6140,
    6148,  6151,  6155,  6163,  6174,  6182,  6184,  6194,  6183,  6221,
    6221,  6256,  6260,  6259,  6273,  6272,  6292,  6293,  6298,  6320,
    6322,  6326,  6337,  6339,  6347,  6355,  6363,  6392,  6425,  6428,
    6441,  6446,  6456,  6487,  6489,  6488,  6525,  6526,  6530,  6531,
    6532,  6549,  6550,  6561,  6560,  6610,  6611,  6615,  6664,  6684,
    6687,  6706,  6711,  6705,  6724,  6724,  6756,  6763,  6764,  6765,
    6766,  6767,  6768,  6769,  6770,  6771,  6772,  6773,  6774,  6775,
    6776,  6777,  6778,  6779,  6780,  6781,  6782,  6783,  6784,  6785,
    6786,  6787,  6788,  6789,  6790,  6791,  6792,  6793,  6794,  6795,
    6796,  6797,  6798,  6799,  6800,  6801,  6802,  6803,  6804,  6805,
    6806,  6807,  6808,  6809,  6810,  6811,  6812,  6813,  6814,  6815,
    6816,  6817,  6831,  6843,  6842,  6853,  6852,  6877,  6881,  6885,
    6890,  6895,  6900,  6905,  6909,  6913,  6917,  6921,  6926,  6930,
    6934,  6938,  6942,  6946,  6950,  6954,  6961,  6962,  6968,  6970,
    6974,  6975,  6979,  6980,  6984,  6988,  6989,  6998,  6999,  7003,
    7019,  7035,  7048,  7052,  7053,  7057,  7064,  7070,  7076,  7081,
    7086,  7091,  7096,  7102,  7107,  7113,  7119,  7130,  7135,  7140,
    7145,  7150,  7155,  7161,  7166,  7171,  7176,  7182,  7188,  7194,
    7199,  7204,  7211,  7218,  7227,  7228,  7229,  7233,  7234,  7235,
    7239,  7240,  7244,  7248,  7266,  7265,  7274,  7278,  7282,  7288,
    7289,  7296,  7300,  7311,  7310,  7319,  7323,  7335,  7336,  7344,
    7343,  7352,  7353,  7357,  7363,  7363,  7370,  7369,  7382,  7381,
    7415,  7419,  7424,  7429,  7449,  7455,  7463,  7467,  7466,  7483,
    7484,  7489,  7497,  7521,  7523,  7527,  7536,  7549,  7552,  7556,
    7560,  7565,  7588,  7589,  7593,  7594,  7598,  7602,  7606,  7617,
    7621,  7628,  7632,  7640,  7644,  7651,  7658,  7662,  7673,  7672,
    7684,  7688,  7695,  7696,  7706,  7705,  7713,  7718,  7726,  7727,
    7728,  7729,  7730,  7738,  7737,  7746,  7753,  7757,  7767,  7778,
    7796,  7795,  7804,  7808,  7812,  7817,  7825,  7829,  7840,  7839,
    7848,  7851,  7853,  7859,  7861,  7862,  7863,  7864,  7872,  7871,
    7883,  7887,  7891,  7895,  7899,  7903,  7911,  7920,  7921,  7926,
    7925,  7970,  7974,  7982,  7983,  7987,  7991,  7996,  8000,  8001,
    8005,  8009,  8013,  8017,  8024,  8025,  8029,  8034,  8040,  8046,
    8051,  8056,  8062,  8068,  8074,  8080,  8085,  8090,  8095,  8100,
    8105,  8110,  8117,  8127,  8131,  8142,  8141,  8150,  8154,  8158,
    8162,  8166,  8173,  8177,  8188,  8187,  8199,  8198,  8207,  8226,
    8225,  8249,  8257,  8258,  8263,  8274,  8285,  8299,  8303,  8310,
    8311,  8316,  8325,  8334,  8339,  8348,  8349,  8354,  8416,  8417,
    8418,  8422,  8423,  8427,  8431,  8442,  8441,  8453,  8454,  8475,
    8489,  8511,  8533,  8553,  8576,  8577,  8585,  8584,  8593,  8604,
    8603,  8613,  8620,  8619,  8632,  8641,  8645,  8656,  8672,  8671,
    8680,  8684,  8688,  8695,  8699,  8710,  8709,  8717,  8725,  8726,
    8730,  8731,  8732,  8737,  8740,  8747,  8751,  8759,  8766,  8767,
    8768,  8769,  8770,  8771,  8772,  8777,  8780,  8790,  8789,  8798,
    8804,  8816,  8815,  8824,  8828,  8829,  8830,  8834,  8835,  8836,
    8837,  8844,  8843,  8864,  8874,  8883,  8887,  8894,  8899,  8904,
    8909,  8914,  8919,  8927,  8928,  8932,  8937,  8943,  8945,  8946,
    8947,  8948,  8952,  8980,  8983,  8987,  8991,  8995,  9002,  9009,
    9019,  9018,  9031,  9030,  9038,  9042,  9053,  9052,  9061,  9065,
    9072,  9076,  9087,  9086,  9094,  9095,  9099,  9124,  9125,  9126,
    9127,  9131,  9132,  9136,  9137,  9138,  9139,  9151,  9150,  9162,
    9169,  9168,  9180,  9189,  9197,  9204,  9208,  9221,  9228,  9240,
    9243,  9248,  9252,  9263,  9270,  9271,  9275,  9276,  9279,  9280,
    9285,  9295,  9294,  9307,  9306,  9315,  9344,  9345,  9349,  9353,
    9357,  9361,  9368,  9369,  9373,  9377,  9380,  9382,  9386,  9395,
    9396,  9397,  9400,  9402,  9406,  9410,  9414,  9422,  9423,  9427,
    9428,  9432,  9436,  9446,  9457,  9456,  9465,  9470,  9471,  9475,
    9476,  9477,  9481,  9482,  9486,  9490,  9491,  9495,  9499,  9503,
    9513,  9512,  9520,  9530,  9541,  9540,  9549,  9556,  9560,  9571,
    9570,  9582,  9591,  9594,  9598,  9602,  9609,  9613,  9623,  9635,
    9634,  9643,  9647,  9656,  9657,  9662,  9665,  9673,  9677,  9684,
    9692,  9696,  9707,  9706,  9714,  9717,  9722,  9724,  9728,  9734,
    9735,  9736,  9737,  9740,  9742,  9749,  9748,  9762,  9763,  9764,
    9765,  9766,  9767,  9768,  9772,  9773,  9777,  9778,  9784,  9793,
    9800,  9801,  9805,  9809,  9813,  9819,  9825,  9829,  9833,  9837,
    9846,  9850,  9859,  9868,  9869,  9873,  9882,  9883,  9887,  9891,
    9900,  9910,  9909,  9918,  9917,  9949,  9952,  9972,  9973,  9976,
    9977,  9985,  9986,  9991,  9996, 10006, 10022, 10027, 10037, 10054,
   10053, 10063, 10076, 10079, 10087, 10090, 10095, 10100, 10108, 10109,
   10110, 10111, 10112, 10113, 10117, 10125, 10126, 10130, 10134, 10145,
   10144, 10154, 10167, 10170, 10174, 10178, 10186, 10198, 10201, 10208,
   10209, 10210, 10211, 10218, 10217, 10227, 10234, 10235, 10239, 10254,
   10255, 10260, 10261, 10265, 10266, 10270, 10274, 10285, 10284, 10293,
   10297, 10301, 10308, 10312, 10322, 10333, 10334, 10341, 10340, 10349,
   10355, 10367, 10366, 10374, 10388, 10387, 10395, 10412, 10411, 10420,
   10428, 10429, 10434, 10435, 10440, 10447, 10448, 10453, 10460, 10461,
   10465, 10466, 10470, 10471, 10475, 10479, 10490, 10489, 10498, 10499,
   10500, 10501, 10502, 10506, 10533, 10536, 10548, 10558, 10563, 10568,
   10573, 10581, 10621, 10622, 10626, 10669, 10679, 10702, 10703, 10704,
   10705, 10709, 10718, 10724, 10734, 10743, 10752, 10753, 10760, 10759,
   10771, 10781, 10782, 10787, 10790, 10794, 10798, 10805, 10806, 10810,
   10811, 10812, 10816, 10820, 10832, 10833, 10834, 10844, 10848, 10855,
   10863, 10864, 10868, 10869, 10873, 10881, 10882, 10887, 10888, 10889,
   10899, 10903, 10910, 10918, 10919, 10923, 10933, 10934, 10935, 10945,
   10949, 10956, 10964, 10965, 10969, 10979, 10980, 10981, 10991, 10995,
   11002, 11010, 11011, 11015, 11026, 11027, 11034, 11036, 11045, 11049,
   11056, 11064, 11065, 11069, 11079, 11080, 11090, 11094, 11101, 11109,
   11110, 11114, 11124, 11125, 11129, 11130, 11140, 11144, 11151, 11159,
   11160, 11164, 11174, 11178, 11188, 11195, 11202, 11202, 11213, 11214,
   11215, 11219, 11220, 11222, 11223, 11225, 11226, 11227, 11228, 11229,
   11231, 11232, 11233, 11234, 11235, 11236, 11238, 11239, 11240, 11242,
   11243, 11244, 11245, 11246, 11249, 11250, 11254, 11255, 11259, 11260,
   11264, 11265, 11269, 11273, 11279, 11283, 11289, 11290, 11291, 11295,
   11296, 11297, 11301, 11302, 11303, 11307, 11311, 11315, 11316, 11317,
   11320, 11321, 11331, 11343, 11352, 11364, 11373, 11385, 11400, 11401,
   11406, 11415, 11421, 11443, 11447, 11468, 11480, 11521, 11535, 11536,
   11541, 11547, 11548, 11553, 11565, 11566, 11567, 11574, 11585, 11586,
   11590, 11598, 11606, 11610, 11617, 11626, 11627, 11633, 11642, 11653,
   11670, 11674, 11681, 11682, 11683, 11690, 11691, 11695, 11699, 11706,
   11707, 11711, 11712, 11716, 11717, 11718, 11719, 11723, 11727, 11731,
   11735, 11739, 11760, 11764, 11771, 11772, 11773, 11777, 11778, 11779,
   11780, 11781, 11785, 11789, 11796, 11797, 11801, 11802, 11806, 11813,
   11820, 11821, 11822, 11826, 11827, 11831, 11835, 11839, 11843, 11844,
   11848, 11852, 11853, 11857, 11861, 11862, 11869, 11873, 11877, 11881,
   11885, 11889, 11890, 11896, 11900, 11904, 11905, 11909, 11916, 11926,
   11945, 11963, 11970, 11977, 11984, 11994, 12001, 12011, 12021, 12031,
   12044, 12048, 12056, 12064, 12068, 12078, 12092, 12115, 12137, 12153,
   12154, 12155, 12156, 12157, 12158, 12162, 12166, 12183, 12187, 12194,
   12195, 12196, 12197, 12198, 12199, 12200, 12206, 12210, 12214, 12218,
   12222, 12226, 12230, 12234, 12238, 12242, 12246, 12250, 12257, 12258,
   12262, 12263, 12264, 12268, 12269, 12270, 12271, 12275, 12279, 12283,
   12290, 12294, 12298, 12305, 12312, 12319, 12329, 12336, 12346, 12353,
   12363, 12367, 12380, 12384, 12399, 12407, 12408, 12412, 12413, 12417,
   12418, 12423, 12426, 12434, 12437, 12444, 12446, 12447, 12451, 12452,
   12456, 12457, 12458, 12463, 12466, 12479, 12483, 12491, 12495, 12499,
   12503, 12507, 12511, 12515, 12519, 12526, 12527, 12533, 12537, 12541,
   12548, 12549, 12550, 12551, 12552, 12553, 12554, 12555, 12556, 12557,
   12558, 12559, 12560, 12561, 12562, 12563, 12564, 12565, 12566, 12567,
   12568, 12569, 12570, 12571, 12572, 12573, 12574, 12575, 12576, 12577,
   12578, 12579, 12580, 12581, 12582, 12583, 12584, 12585, 12586, 12587,
   12588, 12589, 12590, 12591, 12592, 12593, 12594, 12595, 12596, 12600,
   12601, 12602, 12603, 12604, 12605, 12606, 12607, 12608, 12609, 12610,
   12611, 12612, 12613, 12614, 12615, 12616, 12617, 12618, 12619, 12620,
   12627, 12627, 12628, 12628, 12629, 12629, 12630, 12630, 12631, 12631,
   12631, 12632, 12632, 12633, 12633, 12634, 12634, 12635, 12635, 12636,
   12636, 12637, 12637, 12638, 12638, 12639, 12639, 12640, 12640, 12641,
   12641, 12642, 12642, 12643, 12643, 12644, 12644, 12645, 12645, 12646,
   12646, 12647, 12647, 12647, 12648, 12648, 12649, 12649, 12650, 12650,
   12651, 12651, 12652, 12652, 12652, 12653, 12653, 12654, 12654, 12654,
   12655, 12655, 12656, 12656, 12656, 12657, 12657, 12657, 12658, 12658,
   12659, 12659, 12660, 12660, 12661, 12661, 12662, 12662, 12662, 12663,
   12663, 12664, 12664, 12665, 12665, 12665, 12665, 12666, 12666, 12667,
   12667, 12668, 12668, 12669, 12669, 12670, 12670, 12670, 12671, 12671,
   12672, 12672, 12673, 12673, 12674, 12674, 12674, 12675, 12675, 12676,
   12676, 12677, 12677, 12678, 12678, 12679, 12679, 12680, 12680, 12681,
   12681, 12682, 12682, 12683, 12683, 12684, 12684, 12684, 12685, 12685,
   12686, 12686, 12687, 12687, 12691, 12691, 12692, 12692, 12693, 12693,
   12694, 12694, 12695, 12695, 12696, 12696, 12697, 12697, 12698, 12698,
   12699, 12699, 12700, 12700, 12701, 12701, 12702, 12702, 12703, 12703,
   12704, 12704, 12705, 12705, 12708, 12709, 12710, 12714, 12714, 12715,
   12715, 12716, 12716, 12717, 12717, 12718, 12718, 12719, 12719, 12720,
   12720, 12721, 12721
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
  "BOTTOM", "BY", "\"BYTE-LENGTH\"", "CALL", "CANCEL", "CAPACITY", "CD",
  "CF", "CH", "CHAINING", "CHARACTER", "CHARACTERS", "CLASS",
  "CLASSIFICATION", "\"class-name\"", "CLOSE", "CODE", "\"CODE-SET\"",
  "COLLATING", "COL", "COLS", "COLUMN", "COLUMNS", "COMMA",
  "\"COMMAND-LINE\"", "\"comma delimiter\"", "COMMIT", "COMMON",
  "COMMUNICATION", "COMP", "COMPUTE", "\"COMP-1\"", "\"COMP-2\"",
  "\"COMP-3\"", "\"COMP-4\"", "\"COMP-5\"", "\"COMP-6\"", "\"COMP-X\"",
  "\"FUNCTION CONCATENATE\"", "CONDITION", "CONFIGURATION", "CONSTANT",
  "CONTAINS", "CONTENT", "CONTINUE", "CONTROL", "CONTROLS", "CONVERSION",
  "CONVERTING", "COPY", "CORRESPONDING", "COUNT", "CRT", "\"CRT-UNDER\"",
  "CURRENCY", "\"FUNCTION CURRENT-DATE\"", "CURSOR", "CYCLE", "DATA",
  "DATE", "DAY", "\"DAY-OF-WEEK\"", "DE", "DEBUGGING", "\"DECIMAL-POINT\"",
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
  "\"END-UNSTRING\"", "\"END-WRITE\"", "ENTRY", "ENVIRONMENT",
  "\"ENVIRONMENT-NAME\"", "\"ENVIRONMENT-VALUE\"", "EOL", "EOP", "EOS",
  "EQUAL", "ERASE", "ERROR", "ESCAPE", "ESI", "EVALUATE",
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
  "MANUAL", "MEMORY", "MERGE", "MESSAGE", "MINUS", "\"Mnemonic name\"",
  "MODE", "MOVE", "MULTIPLE", "MULTIPLY", "NAME", "NATIONAL",
  "\"NATIONAL-EDITED\"", "\"FUNCTION NATIONAL-OF\"", "NATIVE",
  "\"NEAREST-AWAY-FROM-ZERO\"", "\"NEAREST-EVEN\"",
  "\"NEAREST-TOWARD-ZERO\"", "NEGATIVE", "NEXT", "\"NEXT PAGE\"", "NO",
  "\"NO DATA\"", "\"NO-ECHO\"", "NORMAL", "NOT", "NOTHING", "\"NOT END\"",
  "\"NOT EOP\"", "\"NOT ESCAPE\"", "\"NOT EQUAL\"", "\"NOT EXCEPTION\"",
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
  "PROHIBITED", "PROMPT", "\"PROTECTED\"", "QUEUE", "QUOTE", "RANDOM",
  "RD", "READ", "\"READY TRACE\"", "RECEIVE", "RECORD", "RECORDING",
  "RECORDS", "RECURSIVE", "REDEFINES", "REEL", "REFERENCE", "REFERENCES",
  "RELATIVE", "RELEASE", "REMAINDER", "REMOVAL", "RENAMES", "REPLACE",
  "REPLACING", "REPORT", "REPORTING", "REPORTS", "REPOSITORY", "REQUIRED",
  "RESERVE", "RESET", "\"RESET TRACE\"", "RETRY", "RETURN", "RETURNING",
  "REVERSE", "\"FUNCTION REVERSE\"", "\"REVERSE-VIDEO\"", "REVERSED",
  "REWIND", "REWRITE", "RF", "RH", "RIGHT", "ROLLBACK", "ROUNDED", "RUN",
  "S", "SAME", "SCREEN", "\"SCREEN-CONTROL\"", "SCROLL", "SD", "SEARCH",
  "SECONDS", "SECTION", "SECURE", "SEGMENT", "\"SEGMENT-LIMIT\"", "SELECT",
  "\"semi-colon\"", "SENTENCE", "SEPARATE", "SEQUENCE", "SEQUENTIAL",
  "SET", "\"78\"", "SHARING", "SIGN", "SIGNED", "\"SIGNED-INT\"",
  "\"SIGNED-LONG\"", "\"SIGNED-SHORT\"", "\"66\"", "SIZE",
  "\"SIZE ERROR\"", "SORT", "\"SORT-MERGE\"", "SOURCE",
  "\"SOURCE-COMPUTER\"", "SPACE", "\"SPECIAL-NAMES\"", "STANDARD",
  "\"STANDARD-1\"", "\"STANDARD-2\"", "START", "STATIC", "STATUS",
  "STDCALL", "STEP", "STOP", "STRING", "SUB_QUEUE_1", "SUB_QUEUE_2",
  "SUB_QUEUE_3", "\"FUNCTION SUBSTITUTE\"", "\"FUNCTION SUBSTITUTE-CASE\"",
  "SUBTRACT", "SUM", "SUPPRESS", "SYMBOLIC", "SYNCHRONIZED",
  "\"SYSTEM-DEFAULT\"", "\"SYSTEM-OFFSET\"", "TAB", "TABLE", "TALLYING",
  "TAPE", "TERMINAL", "TERMINATE", "TEXT", "TEST", "THAN", "THEN", "THRU",
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
  "SHIFT_PREFER", "PURGE", "SEND", "OVERFLOW", "$accept", "start", "$@1",
  "nested_list", "source_element_list", "source_element", "simple_prog",
  "$@2", "program_definition", "function_definition", "_end_program_list",
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
  "rep_name_list", "_communication_section", "$@17",
  "_communication_description_sequence", "communication_description",
  "communication_description_entry", "$@18",
  "_communication_description_clause_sequence",
  "communication_description_clause", "_input_cd_clauses",
  "named_input_cd_clauses", "named_input_cd_clause",
  "unnamed_input_cd_clauses", "_output_cd_clauses", "output_cd_clauses",
  "output_cd_clause", "_i_o_cd_clauses", "named_i_o_cd_clauses",
  "named_i_o_cd_clause", "unnamed_i_o_cd_clauses",
  "_working_storage_section", "$@19", "_record_description_list", "$@20",
  "record_description_list_2", "data_description", "$@21", "level_number",
  "_entry_name", "user_entry_name", "const_global", "lit_or_length",
  "con_identifier", "fp32_usage", "fp64_usage", "fp128_usage",
  "pointer_len", "renames_entry", "_renames_thru", "condition_name_entry",
  "$@22", "constant_entry", "$@23", "constant_source",
  "_data_description_clause_sequence", "data_description_clause",
  "redefines_clause", "external_clause", "_as_extname", "_global_clause",
  "global_clause", "picture_clause", "usage_clause", "usage",
  "float_usage", "double_usage", "sign_clause", "report_occurs_clause",
  "_occurs_step", "occurs_clause", "_occurs_to_integer",
  "_occurs_from_integer", "_occurs_depending", "_capacity_in",
  "_occurs_initialized", "_occurs_keys", "_occurs_key_list",
  "ascending_or_descending", "_occurs_indexed", "occurs_index_list",
  "occurs_index", "justified_clause", "synchronized_clause",
  "blank_clause", "based_clause", "value_clause", "$@24",
  "value_item_list", "value_item", "_false_is", "any_length_clause",
  "_local_storage_section", "$@25", "_linkage_section", "$@26",
  "_report_section", "$@27", "_report_description_sequence",
  "report_description", "$@28", "_report_description_options",
  "report_description_option", "control_clause", "control_field_list",
  "identifier_list", "page_limit_clause", "page_line_column",
  "_page_heading_list", "page_detail", "heading_clause", "first_detail",
  "last_heading", "last_detail", "footing_clause",
  "_report_group_description_list", "report_group_description_entry",
  "$@29", "_report_group_options", "report_group_option", "type_clause",
  "type_option", "_control_final", "_or_page", "next_group_clause",
  "sum_clause_list", "_reset_clause", "data_or_final",
  "present_when_condition", "varying_clause", "line_clause",
  "line_keyword_clause", "column_clause", "col_keyword_clause",
  "report_line_integer_list", "line_or_plus", "report_col_integer_list",
  "col_or_plus", "source_clause", "group_indicate_clause",
  "report_usage_clause", "_screen_section", "$@30",
  "_screen_description_list", "screen_description_list",
  "screen_description", "$@31", "_screen_options", "screen_option", "eol",
  "eos", "plus_plus", "minus_minus", "_screen_line_plus_minus",
  "_screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "_procedure_division", "$@32", "$@33", "$@34",
  "_procedure_using_chaining", "$@35", "$@36", "procedure_param_list",
  "procedure_param", "_procedure_type", "_size_optional",
  "_procedure_optional", "_procedure_returning", "_procedure_declaratives",
  "$@37", "_procedure_list", "procedure", "section_header", "$@38",
  "_use_statement", "paragraph_header", "invalid_statement", "_segment",
  "statement_list", "@39", "@40", "statements", "$@41", "statement",
  "accept_statement", "$@42", "accept_body", "$@43", "accp_identifier",
  "_accept_clauses", "accept_clauses", "accept_clause", "lines_or_number",
  "at_line_column", "line_number", "column_number", "mode_is_block",
  "accp_attr", "no_echo", "reverse_video", "update_default", "end_accept",
  "add_statement", "$@44", "add_body", "_add_to", "end_add",
  "allocate_statement", "$@45", "allocate_body", "allocate_returning",
  "alter_statement", "$@46", "alter_body", "alter_entry", "_proceed_to",
  "call_statement", "$@47", "call_body", "$@48", "mnemonic_conv",
  "id_or_lit_or_func_or_program_name", "call_using", "$@49",
  "call_param_list", "call_param", "call_type", "call_returning",
  "return_give", "null_or_omitted", "call_exception_phrases",
  "_call_on_exception", "call_on_exception", "_call_not_on_exception",
  "call_not_on_exception", "end_call", "cancel_statement", "$@50",
  "cancel_body", "id_or_lit_or_program_name", "close_statement", "$@51",
  "close_body", "close_option", "compute_statement", "$@52",
  "compute_body", "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "$@53", "delete_body", "delete_file_list",
  "end_delete", "disable_statement", "$@54", "enable_disable_handling",
  "_enable_disable_key", "communication_mode", "display_statement", "$@55",
  "display_body", "screen_or_device_display", "display_list",
  "display_atom", "$@56", "disp_list", "display_clauses", "display_clause",
  "display_upon", "crt_under", "disp_attr", "end_display",
  "divide_statement", "$@57", "divide_body", "end_divide",
  "enable_statement", "$@58", "entry_statement", "$@59", "entry_body",
  "evaluate_statement", "$@60", "evaluate_body", "evaluate_subject_list",
  "evaluate_subject", "evaluate_condition_list", "evaluate_case_list",
  "evaluate_case", "evaluate_other", "evaluate_when_list",
  "evaluate_object_list", "evaluate_object", "_evaluate_thru_expr",
  "end_evaluate", "exit_statement", "$@61", "exit_body",
  "exit_program_returning", "free_statement", "$@62", "free_body",
  "generate_statement", "$@63", "generate_body", "goto_statement", "$@64",
  "go_body", "goto_depending", "goback_statement", "if_statement", "$@65",
  "if_else_statements", "end_if", "initialize_statement", "$@66",
  "initialize_body", "initialize_filler", "initialize_value",
  "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "$@67", "initiate_body", "inspect_statement",
  "$@68", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@69", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region", "inspect_before",
  "inspect_after", "merge_statement", "$@70", "move_statement", "$@71",
  "move_body", "multiply_statement", "$@72", "multiply_body",
  "end_multiply", "open_statement", "$@73", "open_body", "open_file_entry",
  "open_mode", "open_sharing", "open_option", "perform_statement", "$@74",
  "perform_body", "$@75", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "purge_statement", "$@76",
  "read_statement", "$@77", "read_body", "read_into", "lock_phrases",
  "ignoring_lock", "advancing_lock_or_retry", "_retry_phrase",
  "retry_phrase", "retry_options", "_extended_with_lock",
  "extended_with_lock", "read_key", "read_handler", "end_read",
  "ready_statement", "receive_statement", "$@78", "receive_body",
  "message_or_segment", "_data_sentence_phrases", "_no_data_sentence",
  "no_data_sentence", "_with_data_sentence", "with_data_sentence",
  "end_receive", "release_statement", "$@79", "release_body",
  "reset_statement", "return_statement", "$@80", "return_body",
  "end_return", "rewrite_statement", "$@81", "rewrite_body", "_with_lock",
  "with_lock", "end_rewrite", "rollback_statement", "search_statement",
  "$@82", "search_body", "search_varying", "search_at_end", "search_whens",
  "search_when", "end_search", "send_statement", "$@83", "send_body",
  "_from_identifier", "from_identifier", "with_indicator",
  "_replacing_line", "set_statement", "$@84", "set_body", "on_or_off",
  "up_or_down", "set_environment", "set_attr", "set_attr_clause",
  "set_attr_one", "set_to", "set_up_down", "set_to_on_off_sequence",
  "set_to_on_off", "set_to_true_false_sequence", "set_to_true_false",
  "set_last_exception_to_off", "sort_statement", "$@85", "sort_body",
  "@86", "sort_key_list", "_key_list", "_sort_duplicates",
  "sort_collating", "sort_input", "sort_output", "start_statement", "$@87",
  "start_body", "sizelen_clause", "start_key", "start_op", "disallowed_op",
  "not_equal_op", "end_start", "stop_statement", "$@88", "stop_returning",
  "_status_x", "stop_literal", "string_statement", "$@89", "string_body",
  "string_item_list", "string_item", "_string_delimited",
  "string_delimiter", "_with_pointer", "end_string", "subtract_statement",
  "$@90", "subtract_body", "end_subtract", "suppress_statement",
  "_printing", "terminate_statement", "$@91", "terminate_body",
  "transform_statement", "$@92", "transform_body", "unlock_statement",
  "$@93", "unlock_body", "unstring_statement", "$@94", "unstring_body",
  "_unstring_delimited", "unstring_delimited_list",
  "unstring_delimited_item", "unstring_into", "unstring_into_item",
  "_unstring_into_delimiter", "_unstring_into_count", "_unstring_tallying",
  "end_unstring", "use_statement", "$@95", "use_phrase",
  "use_file_exception", "use_global", "use_file_exception_target",
  "use_debugging", "debugging_list", "debugging_target", "_all_refs",
  "use_start_end", "program_start_end", "use_reporting", "use_exception",
  "use_ex_keyw", "write_statement", "$@96", "write_body", "from_option",
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
  "condition", "expr", "partial_expr", "$@97", "expr_tokens", "expr_token",
  "eq", "gt", "lt", "ge", "le", "exp_list", "_e_sep", "exp", "exp_term",
  "exp_factor", "exp_unary", "exp_atom", "line_linage_page_counter",
  "arithmetic_x_list", "arithmetic_x", "record_name", "table_name",
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
  "from_parameter", "sub_identifier", "sort_identifier",
  "sub_identifier_1", "display_identifier", "numeric_identifier",
  "identifier_or_file_name", "identifier", "identifier_1",
  "target_identifier", "target_identifier_1", "qualified_word", "subref",
  "refmod", "integer", "symbolic_integer", "report_integer", "class_value",
  "literal", "basic_literal", "basic_value", "function", "func_no_parm",
  "func_one_parm", "func_multi_parm", "func_refmod", "func_args",
  "trim_args", "numvalc_args", "locale_dt_args", "formatted_datetime_args",
  "formatted_time_args", "not_const_word", "flag_all", "flag_duplicates",
  "flag_initialized", "flag_initialized_to", "to_init_val", "_flag_next",
  "_flag_not", "flag_optional", "flag_rounded", "round_mode",
  "round_choice", "flag_separate", "error_stmt_recover", "verb",
  "scope_terminator", "_advancing", "_after", "_are", "_area", "_areas",
  "_as", "_at", "_before", "_binary", "_by", "_character", "_characters",
  "_contains", "_data", "_end_of", "_file", "_final", "_for", "_from",
  "_in", "_in_order", "_indicate", "_initial", "_into", "_is", "_is_are",
  "_key", "_left_or_right", "_line", "_line_or_lines", "_limits", "_lines",
  "_message", "_mode", "_number", "_numbers", "_of", "_on",
  "_onoff_status", "_other", "_procedure", "_program", "_record",
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
     805,   806,   807,   808,   809,   810
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   556,   558,   557,   559,   559,   560,   560,   561,   561,
     563,   562,   564,   565,   566,   566,   567,   567,   568,   569,
     570,   571,   571,   571,   573,   574,   572,   576,   575,   577,
     577,   578,   578,   579,   579,   580,   580,   581,   581,   581,
     581,   582,   582,   583,   583,   584,   585,   585,   586,   587,
     587,   588,   588,   588,   588,   588,   590,   589,   591,   591,
     592,   592,   594,   593,   595,   595,   595,   595,   596,   596,
     597,   597,   597,   597,   598,   599,   600,   601,   602,   602,
     602,   602,   603,   603,   604,   605,   604,   606,   606,   606,
     607,   607,   608,   608,   608,   608,   609,   609,   610,   610,
     611,   611,   612,   612,   613,   613,   614,   614,   614,   614,
     614,   614,   614,   614,   614,   614,   614,   614,   616,   615,
     617,   617,   617,   617,   618,   618,   619,   620,   620,   622,
     621,   623,   623,   623,   623,   623,   623,   624,   624,   625,
     625,   626,   625,   627,   627,   628,   628,   628,   628,   628,
     628,   629,   629,   630,   631,   631,   632,   633,   633,   634,
     635,   635,   636,   636,   637,   638,   638,   639,   639,   640,
     641,   642,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   650,   651,   651,   652,   652,   653,   653,   655,   654,
     656,   656,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   658,   658,   658,   658,   658,
     659,   659,   659,   660,   660,   660,   660,   661,   661,   662,
     662,   662,   663,   663,   664,   664,   664,   665,   666,   666,
     666,   667,   668,   668,   668,   669,   670,   671,   672,   672,
     672,   674,   673,   675,   675,   675,   676,   676,   676,   676,
     677,   677,   678,   678,   678,   678,   679,   680,   681,   682,
     682,   682,   683,   684,   685,   685,   686,   687,   687,   687,
     688,   688,   688,   689,   689,   690,   690,   691,   692,   692,
     692,   692,   694,   693,   695,   695,   696,   697,   697,   699,
     698,   700,   700,   701,   701,   702,   702,   703,   705,   704,
     704,   706,   706,   707,   707,   708,   708,   708,   708,   708,
     708,   708,   708,   708,   708,   708,   709,   710,   710,   710,
     711,   711,   711,   712,   712,   713,   713,   714,   714,   715,
     716,   716,   717,   717,   718,   718,   719,   720,   721,   721,
     722,   722,   722,   723,   724,   725,   726,   727,   727,   727,
     727,   727,   728,   728,   729,   730,   730,   731,   732,   732,
     733,   733,   734,   735,   734,   736,   736,   737,   739,   738,
     740,   740,   741,   741,   741,   742,   742,   742,   743,   743,
     744,   744,   744,   744,   744,   744,   744,   744,   744,   744,
     744,   745,   746,   746,   747,   747,   748,   748,   748,   748,
     748,   748,   748,   749,   749,   749,   750,   750,   751,   751,
     751,   751,   751,   751,   752,   753,   754,   753,   755,   756,
     755,   757,   757,   758,   758,   758,   759,   758,   758,   760,
     761,   761,   761,   762,   763,   763,   764,   764,   764,   764,
     765,   765,   765,   765,   765,   765,   765,   765,   765,   765,
     765,   765,   765,   766,   766,   767,   767,   768,   768,   768,
     769,   769,   770,   771,   771,   773,   772,   774,   775,   774,
     776,   776,   777,   777,   778,   778,   778,   778,   778,   778,
     778,   778,   778,   778,   778,   778,   778,   779,   780,   781,
     781,   782,   782,   783,   784,   785,   785,   786,   786,   786,
     786,   786,   786,   786,   786,   786,   786,   786,   786,   786,
     786,   786,   786,   786,   786,   786,   786,   786,   786,   786,
     786,   786,   786,   786,   786,   786,   786,   786,   786,   786,
     786,   786,   786,   787,   787,   788,   788,   789,   789,   790,
     791,   791,   792,   792,   793,   793,   794,   794,   795,   795,
     796,   796,   797,   797,   798,   799,   799,   800,   800,   801,
     801,   802,   802,   803,   804,   805,   806,   807,   809,   808,
     810,   810,   811,   811,   812,   812,   813,   813,   814,   815,
     814,   816,   817,   816,   818,   819,   818,   820,   820,   822,
     821,   823,   823,   823,   824,   824,   824,   824,   825,   826,
     827,   827,   828,   829,   829,   829,   830,   830,   831,   831,
     831,   831,   831,   832,   833,   834,   835,   836,   837,   837,
     839,   838,   840,   840,   841,   841,   841,   841,   841,   841,
     841,   841,   841,   841,   841,   841,   841,   841,   841,   841,
     842,   843,   843,   843,   843,   843,   843,   843,   844,   844,
     844,   845,   845,   846,   847,   848,   848,   849,   849,   850,
     851,   852,   853,   853,   854,   855,   855,   856,   856,   857,
     857,   857,   858,   858,   859,   859,   860,   861,   862,   863,
     864,   863,   865,   865,   866,   866,   867,   868,   867,   867,
     869,   869,   870,   870,   870,   870,   870,   870,   870,   870,
     870,   870,   870,   870,   870,   870,   870,   870,   870,   870,
     870,   870,   870,   870,   870,   870,   870,   870,   870,   870,
     870,   870,   870,   870,   870,   870,   870,   870,   870,   871,
     871,   872,   872,   873,   873,   874,   874,   875,   875,   875,
     876,   876,   876,   877,   878,   879,   880,   881,   879,   882,
     879,   883,   884,   883,   885,   883,   886,   886,   887,   888,
     888,   888,   889,   889,   889,   889,   889,   889,   890,   890,
     891,   891,   891,   892,   893,   892,   894,   894,   895,   895,
     895,   895,   895,   897,   896,   898,   898,   899,   900,   901,
     901,   903,   904,   902,   906,   905,   905,   907,   907,   907,
     907,   907,   907,   907,   907,   907,   907,   907,   907,   907,
     907,   907,   907,   907,   907,   907,   907,   907,   907,   907,
     907,   907,   907,   907,   907,   907,   907,   907,   907,   907,
     907,   907,   907,   907,   907,   907,   907,   907,   907,   907,
     907,   907,   907,   907,   907,   907,   907,   907,   907,   907,
     907,   907,   907,   909,   908,   911,   910,   910,   910,   910,
     910,   910,   910,   910,   910,   910,   910,   910,   910,   910,
     910,   910,   910,   910,   910,   910,   912,   912,   913,   913,
     914,   914,   915,   915,   915,   915,   915,   916,   916,   917,
     917,   917,   918,   919,   919,   920,   921,   921,   921,   921,
     921,   921,   921,   921,   921,   921,   921,   921,   921,   921,
     921,   921,   921,   921,   921,   921,   921,   921,   921,   921,
     921,   921,   921,   921,   922,   922,   922,   923,   923,   923,
     924,   924,   925,   925,   927,   926,   928,   928,   928,   929,
     929,   930,   930,   932,   931,   933,   933,   934,   934,   936,
     935,   937,   937,   938,   939,   939,   941,   940,   943,   942,
     944,   944,   944,   944,   945,   945,   946,   947,   946,   948,
     948,   949,   949,   950,   950,   950,   950,   951,   951,   951,
     951,   951,   952,   952,   953,   953,   954,   954,   954,   955,
     955,   956,   956,   957,   957,   958,   959,   959,   961,   960,
     962,   962,   963,   963,   965,   964,   966,   966,   967,   967,
     967,   967,   967,   969,   968,   970,   971,   971,   972,   973,
     975,   974,   976,   976,   977,   977,   978,   978,   980,   979,
     981,   982,   982,   983,   983,   983,   983,   983,   985,   984,
     986,   986,   986,   986,   986,   987,   987,   988,   988,   990,
     989,   991,   991,   992,   992,   993,   993,   993,   993,   993,
     994,   994,   994,   994,   995,   995,   996,   996,   996,   996,
     996,   996,   996,   996,   996,   996,   996,   996,   996,   996,
     996,   996,   996,   997,   997,   999,   998,  1000,  1000,  1000,
    1000,  1000,  1001,  1001,  1003,  1002,  1005,  1004,  1006,  1008,
    1007,  1009,  1010,  1010,  1011,  1011,  1011,  1012,  1012,  1013,
    1013,  1014,  1015,  1016,  1016,  1017,  1017,  1018,  1018,  1018,
    1018,  1019,  1019,  1020,  1020,  1022,  1021,  1023,  1023,  1023,
    1023,  1023,  1023,  1023,  1024,  1024,  1026,  1025,  1027,  1029,
    1028,  1030,  1032,  1031,  1033,  1034,  1034,  1035,  1037,  1036,
    1038,  1038,  1038,  1039,  1039,  1041,  1040,  1042,  1043,  1043,
    1044,  1044,  1044,  1045,  1045,  1046,  1046,  1047,  1048,  1048,
    1048,  1048,  1048,  1048,  1048,  1049,  1049,  1051,  1050,  1052,
    1052,  1054,  1053,  1055,  1056,  1056,  1056,  1057,  1057,  1057,
    1057,  1059,  1058,  1060,  1061,  1062,  1062,  1063,  1063,  1063,
    1063,  1063,  1063,  1064,  1064,  1065,  1065,  1066,  1066,  1066,
    1066,  1066,  1067,  1068,  1068,  1068,  1068,  1068,  1069,  1070,
    1072,  1071,  1074,  1073,  1075,  1075,  1077,  1076,  1078,  1078,
    1079,  1079,  1081,  1080,  1082,  1082,  1083,  1084,  1084,  1084,
    1084,  1085,  1085,  1086,  1086,  1086,  1086,  1088,  1087,  1089,
    1090,  1089,  1089,  1091,  1091,  1092,  1092,  1093,  1093,  1094,
    1094,  1094,  1094,  1094,  1095,  1095,  1096,  1096,  1097,  1097,
    1098,  1100,  1099,  1102,  1101,  1103,  1104,  1104,  1105,  1105,
    1105,  1105,  1106,  1106,  1107,  1107,  1108,  1108,  1109,  1110,
    1110,  1110,  1111,  1111,  1112,  1112,  1112,  1113,  1113,  1114,
    1114,  1115,  1115,  1116,  1118,  1117,  1119,  1120,  1120,  1121,
    1121,  1121,  1122,  1122,  1123,  1124,  1124,  1125,  1126,  1126,
    1128,  1127,  1129,  1130,  1132,  1131,  1133,  1134,  1134,  1136,
    1135,  1137,  1138,  1138,  1139,  1139,  1140,  1140,  1141,  1143,
    1142,  1144,  1144,  1145,  1145,  1146,  1146,  1147,  1147,  1148,
    1149,  1149,  1151,  1150,  1152,  1152,  1153,  1153,  1154,  1155,
    1155,  1155,  1155,  1156,  1156,  1158,  1157,  1159,  1159,  1159,
    1159,  1159,  1159,  1159,  1160,  1160,  1161,  1161,  1162,  1163,
    1164,  1164,  1165,  1165,  1165,  1165,  1165,  1165,  1165,  1165,
    1166,  1166,  1167,  1168,  1168,  1169,  1170,  1170,  1171,  1171,
    1172,  1174,  1173,  1176,  1175,  1177,  1177,  1178,  1178,  1179,
    1179,  1180,  1180,  1181,  1181,  1181,  1182,  1182,  1182,  1184,
    1183,  1185,  1186,  1186,  1187,  1187,  1187,  1187,  1188,  1188,
    1188,  1188,  1188,  1188,  1189,  1190,  1190,  1191,  1191,  1193,
    1192,  1192,  1194,  1194,  1194,  1194,  1194,  1195,  1195,  1196,
    1196,  1196,  1196,  1198,  1197,  1199,  1200,  1200,  1201,  1202,
    1202,  1203,  1203,  1204,  1204,  1205,  1205,  1207,  1206,  1208,
    1208,  1208,  1209,  1209,  1210,  1211,  1211,  1213,  1212,  1214,
    1214,  1216,  1215,  1217,  1219,  1218,  1220,  1222,  1221,  1223,
    1224,  1224,  1225,  1225,  1226,  1227,  1227,  1228,  1229,  1229,
    1230,  1230,  1231,  1231,  1232,  1232,  1234,  1233,  1235,  1235,
    1235,  1235,  1235,  1236,  1237,  1237,  1238,  1238,  1238,  1238,
    1238,  1239,  1240,  1240,  1241,  1241,  1241,  1242,  1242,  1242,
    1242,  1243,  1244,  1244,  1245,  1246,  1247,  1247,  1249,  1248,
    1250,  1251,  1251,  1252,  1252,  1252,  1252,  1253,  1253,  1254,
    1254,  1254,  1255,  1255,  1256,  1256,  1256,  1257,  1257,  1258,
    1259,  1259,  1260,  1260,  1261,  1262,  1262,  1263,  1263,  1263,
    1264,  1264,  1265,  1266,  1266,  1267,  1268,  1268,  1268,  1269,
    1269,  1270,  1271,  1271,  1272,  1273,  1273,  1273,  1274,  1274,
    1275,  1276,  1276,  1277,  1278,  1278,  1279,  1279,  1280,  1280,
    1281,  1282,  1282,  1283,  1284,  1284,  1285,  1285,  1286,  1287,
    1287,  1288,  1289,  1289,  1290,  1290,  1291,  1291,  1292,  1293,
    1293,  1294,  1295,  1295,  1296,  1297,  1299,  1298,  1300,  1300,
    1300,  1301,  1301,  1301,  1301,  1301,  1301,  1301,  1301,  1301,
    1301,  1301,  1301,  1301,  1301,  1301,  1301,  1301,  1301,  1301,
    1301,  1301,  1301,  1301,  1301,  1301,  1302,  1302,  1303,  1303,
    1304,  1304,  1305,  1306,  1307,  1307,  1308,  1308,  1308,  1309,
    1309,  1309,  1310,  1310,  1310,  1311,  1311,  1312,  1312,  1312,
    1313,  1313,  1314,  1314,  1314,  1314,  1314,  1314,  1315,  1315,
    1316,  1317,  1318,  1319,  1319,  1320,  1321,  1322,  1323,  1323,
    1324,  1325,  1325,  1326,  1327,  1327,  1327,  1328,  1329,  1329,
    1330,  1331,  1332,  1332,  1333,  1334,  1334,  1335,  1335,  1336,
    1337,  1337,  1338,  1338,  1338,  1339,  1339,  1340,  1340,  1341,
    1341,  1342,  1342,  1343,  1343,  1343,  1343,  1343,  1343,  1343,
    1343,  1343,  1344,  1344,  1345,  1345,  1345,  1346,  1346,  1346,
    1346,  1346,  1346,  1346,  1347,  1347,  1348,  1348,  1349,  1350,
    1351,  1351,  1351,  1352,  1352,  1353,  1353,  1354,  1354,  1354,
    1355,  1355,  1355,  1356,  1356,  1356,  1357,  1357,  1358,  1358,
    1359,  1359,  1359,  1360,  1361,  1362,  1362,  1363,  1364,  1365,
    1366,  1367,  1367,  1367,  1367,  1368,  1369,  1369,  1369,  1369,
    1370,  1370,  1371,  1372,  1372,  1373,  1374,  1375,  1376,  1376,
    1376,  1376,  1376,  1376,  1376,  1377,  1377,  1378,  1378,  1379,
    1379,  1379,  1379,  1379,  1379,  1379,  1380,  1380,  1380,  1380,
    1380,  1380,  1380,  1380,  1380,  1380,  1380,  1380,  1381,  1381,
    1382,  1382,  1382,  1383,  1383,  1383,  1383,  1384,  1384,  1384,
    1385,  1385,  1385,  1386,  1386,  1386,  1387,  1387,  1388,  1388,
    1389,  1389,  1390,  1390,  1391,  1392,  1392,  1393,  1393,  1394,
    1394,  1395,  1395,  1396,  1396,  1397,  1397,  1397,  1398,  1398,
    1399,  1399,  1399,  1400,  1400,  1401,  1401,  1402,  1402,  1402,
    1402,  1402,  1402,  1402,  1402,  1403,  1403,  1404,  1404,  1404,
    1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,
    1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,
    1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,
    1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,
    1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1406,
    1406,  1406,  1406,  1406,  1406,  1406,  1406,  1406,  1406,  1406,
    1406,  1406,  1406,  1406,  1406,  1406,  1406,  1406,  1406,  1406,
    1407,  1407,  1408,  1408,  1409,  1409,  1410,  1410,  1411,  1411,
    1411,  1412,  1412,  1413,  1413,  1414,  1414,  1415,  1415,  1416,
    1416,  1417,  1417,  1418,  1418,  1419,  1419,  1420,  1420,  1421,
    1421,  1422,  1422,  1423,  1423,  1424,  1424,  1425,  1425,  1426,
    1426,  1427,  1427,  1427,  1428,  1428,  1429,  1429,  1430,  1430,
    1431,  1431,  1432,  1432,  1432,  1433,  1433,  1434,  1434,  1434,
    1435,  1435,  1436,  1436,  1436,  1437,  1437,  1437,  1438,  1438,
    1439,  1439,  1440,  1440,  1441,  1441,  1442,  1442,  1442,  1443,
    1443,  1444,  1444,  1445,  1445,  1445,  1445,  1446,  1446,  1447,
    1447,  1448,  1448,  1449,  1449,  1450,  1450,  1450,  1451,  1451,
    1452,  1452,  1453,  1453,  1454,  1454,  1454,  1455,  1455,  1456,
    1456,  1457,  1457,  1458,  1458,  1459,  1459,  1460,  1460,  1461,
    1461,  1462,  1462,  1463,  1463,  1464,  1464,  1464,  1465,  1465,
    1466,  1466,  1467,  1467,  1468,  1468,  1469,  1469,  1470,  1470,
    1471,  1471,  1472,  1472,  1473,  1473,  1474,  1474,  1475,  1475,
    1476,  1476,  1477,  1477,  1478,  1478,  1479,  1479,  1480,  1480,
    1481,  1481,  1482,  1482,  1483,  1483,  1483,  1484,  1484,  1485,
    1485,  1486,  1486,  1487,  1487,  1488,  1488,  1489,  1489,  1490,
    1490,  1491,  1491
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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
      10,     0,     3,     0,     3,     0,     2,     2,     0,     5,
       3,     1,     1,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     1,
       4,     6,     9,     0,     3,     0,     2,     0,     2,     3,
       5,     5,     1,     1,     1,     1,     3,     5,     0,     2,
       1,     1,     1,     4,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     2,     2,     2,     2,
       1,     2,     0,     0,     5,     0,     2,     2,     0,     5,
       0,     2,     4,     3,     4,     0,     1,     1,     1,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,    11,     0,     1,     1,     2,     4,     4,     4,     6,
       4,     3,     4,     0,     1,     1,     1,     2,     4,     4,
       4,     4,     4,     4,     6,     0,     0,     5,     0,     0,
       2,     2,     3,     1,     1,     1,     0,     4,     3,     2,
       0,     1,     1,     1,     0,     2,     1,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     0,     2,     0,     4,     5,     0,     5,
       2,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     0,
       2,     0,     1,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       0,     2,     7,     8,     0,     2,     0,     2,     0,     3,
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
       0,     1,     1,     3,     2,     0,     0,     0,     9,     0,
       4,     0,     0,     3,     0,     3,     1,     2,     4,     0,
       2,     2,     0,     3,     3,     4,     4,     3,     0,     1,
       0,     2,     2,     0,     0,     7,     0,     2,     1,     1,
       2,     1,     1,     0,     6,     0,     2,     2,     1,     0,
       1,     0,     0,     3,     0,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     4,     0,     4,     3,     3,     4,
       3,     4,     3,     3,     4,     4,     3,     4,     3,     4,
       5,     3,     4,     3,     3,     3,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     2,     3,     1,     2,     2,
       2,     2,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     4,     3,     1,     2,     1,     1,     3,
       3,     3,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     0,     4,     4,     5,     6,     0,
       2,     0,     1,     0,     3,     3,     4,     0,     2,     0,
       3,     1,     2,     4,     0,     2,     0,     4,     0,     6,
       0,     1,     1,     1,     1,     1,     0,     0,     3,     1,
       2,     2,     3,     0,     2,     2,     2,     0,     3,     2,
       2,     4,     1,     1,     1,     1,     0,     2,     2,     0,
       1,     2,     2,     0,     1,     2,     0,     1,     0,     3,
       1,     2,     1,     1,     0,     3,     2,     3,     0,     1,
       3,     3,     2,     0,     4,     4,     0,     1,     1,     1,
       0,     4,     4,     2,     1,     2,     0,     1,     0,     3,
       3,     0,     3,     0,     2,     1,     2,     1,     0,     4,
       3,     3,     3,     3,     2,     2,     1,     1,     2,     0,
       3,     1,     1,     1,     2,     1,     2,     1,     1,     2,
       2,     2,     2,     2,     1,     1,     1,     2,     2,     1,
       1,     2,     2,     1,     1,     1,     1,     3,     1,     3,
       3,     3,     3,     0,     1,     0,     4,     4,     6,     6,
       8,     8,     0,     1,     0,     3,     0,     3,     2,     0,
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
       1,     1,     4,     0,     1,     1,     2,     2,     3,     3,
       0,     3,     0,     3,     3,     4,     0,     4,     4,     6,
       0,     1,     0,     3,     1,     2,     5,     1,     1,     1,
       1,     0,     3,     0,     3,     2,     1,     0,     3,     2,
       0,     4,     2,     0,     1,     1,     1,     1,     3,     0,
       2,     1,     3,     3,     0,     3,     1,     1,     1,     3,
       7,     0,     3,     0,     4,     7,     0,     2,     0,     1,
       2,     1,     2,     3,     3,     1,     0,     1,     1,     4,
       4,     2,     0,     1,     1,     3,     2,     0,     3,     1,
       1,     0,     1,     1,     0,     4,     5,     1,     1,     0,
       2,     2,     0,     1,     2,     0,     1,     2,     0,     1,
       0,     3,     2,     1,     0,     4,     4,     0,     1,     0,
       4,     5,     0,     1,     2,     3,     0,     1,     1,     0,
       4,     4,     6,     0,     2,     0,     2,     1,     2,     3,
       0,     1,     0,     3,     2,     5,     0,     1,     2,     2,
       2,     2,     2,     0,     2,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     3,     4,     1,     2,     3,     1,     2,     3,     3,
       4,     0,     3,     0,     7,     0,     5,     0,     2,     0,
       2,     0,     3,     0,     2,     4,     0,     2,     4,     0,
       4,     4,     0,     3,     0,     4,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     1,     0,     1,     0,
       4,     2,     0,     2,     1,     4,     4,     0,     1,     1,
       1,     1,     1,     0,     4,     5,     1,     2,     2,     0,
       3,     1,     1,     0,     4,     0,     1,     0,     4,     4,
       6,     6,     0,     1,     2,     0,     1,     0,     3,     1,
       2,     0,     3,     5,     0,     3,     2,     0,     4,     6,
       0,     3,     1,     3,     2,     2,     2,     3,     0,     3,
       0,     3,     0,     3,     0,     1,     0,     3,     1,     1,
       1,     1,     1,     7,     0,     1,     1,     1,     1,     1,
       1,     4,     1,     2,     1,     2,     3,     0,     1,     2,
       1,     3,     1,     1,     4,     1,     1,     1,     0,     4,
       6,     0,     2,     0,     4,     3,     3,     1,     1,     0,
       1,     1,     0,     1,     0,     2,     2,     0,     1,     2,
       1,     1,     0,     1,     2,     1,     1,     0,     2,     2,
       0,     1,     2,     0,     1,     2,     0,     2,     2,     0,
       1,     2,     0,     1,     2,     0,     2,     2,     0,     1,
       2,     0,     1,     2,     2,     2,     2,     2,     0,     1,
       2,     0,     1,     2,     2,     2,     0,     1,     2,     0,
       1,     2,     0,     1,     2,     2,     0,     1,     2,     0,
       1,     2,     0,     2,     1,     1,     0,     2,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     1,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     2,     2,     1,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     2,
       2,     1,     1,     1,     2,     1,     1,     1,     1,     2,
       1,     0,     2,     1,     1,     1,     3,     1,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     4,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     3,     2,     2,     1,     1,     3,     2,     2,     1,
       1,     3,     3,     4,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     5,     5,     5,
       4,     5,     5,     5,     5,     5,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     5,
       0,     3,     2,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     0,     0,     1,     0,     1,     0,
       1,     0,     2,     0,     2,     0,     1,     1,     0,     1,
       0,     1,     2,     0,     2,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     2,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     1,     0,     1,     0,     1,     1,
       0,     1,     0,     1,     1,     0,     2,     2,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     1,     0,     2,     1,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     1,
       0,     3,     0,     1,     2,     1,     1,     1,     1,     1,
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
       2,     0,    10,     1,     0,     0,     3,    21,     6,     4,
      46,     8,     9,     0,     0,     0,     7,     0,    11,   291,
      49,    27,    24,    46,    46,    23,    22,     0,     0,   749,
     293,     0,   180,    51,     0,     0,    14,     0,    47,     0,
       0,    20,   794,     0,   295,     0,     0,    45,   182,     0,
       0,    98,    52,    53,     0,     0,     0,    12,    15,    16,
       0,    13,   292,   751,     0,     0,     0,   289,    50,     0,
       0,   186,    62,    56,     0,   100,    54,    55,    30,    29,
      33,    33,    32,    31,     0,    17,     0,   754,   752,   770,
       0,   853,   934,   943,   949,   956,   998,  1004,  1018,  1013,
    1019,  1020,  1028,  1038,  1085,  1094,  1096,  1099,  1125,  1136,
    1139,  1142,  1134,  1148,  1155,  1177,  1181,  1220,  1222,  1226,
       0,  1232,  1247,  1273,  1303,  1304,  1320,  1323,  1324,  1329,
    1338,  1339,  1365,  1401,  1419,     0,  1453,  1467,  1475,  1477,
     776,  1481,  1484,  1487,  1538,  1271,  1352,   796,   797,   798,
     799,   800,   801,   802,   803,   805,   804,   806,   807,   808,
     809,   810,   811,   812,   813,   814,   815,   816,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,   831,   832,   833,   834,   835,   836,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,   850,   795,   294,   301,   302,   415,   296,   418,     0,
     181,   183,   184,    64,    58,    99,     0,     0,     0,  2070,
    2020,  2020,  2020,     0,     0,  2020,  1993,   118,    84,   101,
       0,   104,   106,   107,   108,   154,   110,   109,   111,   112,
     113,   114,   115,   116,   117,     0,     0,    25,    18,    19,
     759,   759,     0,     0,  1900,  1901,  1902,  1903,  1904,  1905,
    1906,  1907,  1908,  1909,  1910,  1911,  1912,  1913,  1949,  1950,
    1951,  1952,  1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,
    1961,  1962,  1963,  1964,  1965,  1966,  1967,  1968,  1969,  1914,
    1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,  1923,  1924,
    1925,  1926,  1927,  1928,  1929,  1930,  1931,  1932,  1933,  1934,
    1935,  1936,  1937,  1938,  1939,  1940,  1941,  1942,  1943,  1944,
    1897,  1945,  1946,  1947,  1948,   852,  1898,  1899,     0,     0,
       0,     0,   960,     0,     0,     0,     0,  1033,     0,     0,
    1033,     0,  1626,  1127,     0,     0,  2093,   983,   982,     0,
    1147,  1626,     0,     0,     0,     0,     0,     0,   851,     0,
    1259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1449,  1452,  1439,  1450,  1451,  1441,     0,     0,  1476,  1474,
       0,   794,     0,     0,     0,     0,     0,     0,     0,   362,
     297,  1864,     0,  1695,   298,     0,  1880,   270,   187,  1992,
       0,     0,     0,  2020,  2136,    82,    63,  1991,    68,    70,
      71,    72,    73,  1991,     0,  2020,    57,    60,  1718,  1717,
     129,  2020,  2020,  2071,  2020,  2021,     0,     0,     0,  2020,
    2020,     0,  1994,     0,  2020,     0,    48,     0,   102,   105,
       0,   153,    34,    28,  2020,  1990,   759,   756,   762,     0,
     759,   771,   772,   746,   877,  1800,   932,   855,  2040,   876,
    1790,  1794,  2049,     0,  1843,     0,  1838,  1844,     0,     0,
    1850,  1823,     0,  1682,  1684,  1819,     0,     0,     0,  1841,
    1824,  1741,     0,  1686,  1822,  1842,  1820,  1845,  1846,  1825,
       0,  1840,  1850,  1839,  1800,  1821,   941,  1735,   939,  1727,
    1730,  1729,  1733,  1815,  1817,  1734,  1847,     0,     0,     0,
       0,     0,     0,   944,     0,  1671,  1674,  1676,  1679,  1750,
    1681,  1869,  1748,  1749,  1707,   950,   951,     0,  1703,  1705,
    1704,   963,   961,   962,   996,     0,  1766,  1003,   999,  1000,
    1002,  1765,  1005,  1008,  2049,  1016,     0,  1688,  1883,  1722,
    1795,  1799,  1723,     0,  1026,  2063,  2087,     0,  1035,  1037,
    1029,     0,  1819,  1052,  1083,  1567,  1725,  1047,  1049,  1046,
       0,  1729,  1092,     0,  1095,   966,  1097,  1106,  1105,  1123,
       0,  1102,  1104,  1625,     0,  1129,  1133,  1131,  1134,  1132,
    1126,  1137,  1138,  1720,  1140,  1141,  2094,  1143,  1701,  1135,
    2089,  1624,  1156,  1158,  1697,  1178,  1179,  1182,     0,  1184,
    1185,  1186,  1221,  1405,  1784,  1785,     0,  1223,     0,  1230,
       0,  1240,  1237,  1239,  1238,  1233,  1234,  1241,  2049,  1261,
       0,     0,  1707,  2103,  1771,  1248,  1259,  1250,     0,  1257,
       0,  1770,  1704,   436,  1772,     0,  1301,  1875,  1696,  1318,
       0,  1321,  1541,  1691,  1327,  2063,  1336,  1541,     0,  1350,
    1343,  1692,     0,     0,  1700,  1366,  1367,  1368,  1369,  1370,
    1371,  1393,  1372,  1396,  1373,     0,  1698,     0,     0,  1783,
    1799,  1402,  1437,  1424,  1442,  1465,     0,  1456,  1459,     0,
    1472,     0,  1478,  1479,   782,   788,   777,   778,   779,   781,
       0,  1482,     0,  1787,  1485,  2065,  1504,  1490,  1552,  1541,
    1272,  1353,  1356,     0,     0,   578,     0,     0,     0,   420,
       0,     0,   424,   425,   423,     0,   300,   303,   185,     0,
    1881,     0,   282,   278,   179,     0,   273,   275,   276,  2135,
    2020,     0,     0,    67,    69,    65,    83,  1991,  2020,     0,
       0,     0,  2020,     0,     0,     0,   175,  1710,   173,   178,
       0,     0,   177,  1719,   156,   157,  2022,   160,  1805,  1375,
    1374,   119,   123,   126,  2053,  2020,     0,    85,   103,   155,
       0,     0,   757,  2020,     0,   768,   760,   761,   773,  2114,
    2115,     0,   933,   854,   878,  2041,     0,     0,     0,  1792,
    1793,  2050,     0,  1816,     0,     0,     0,     0,  1836,  1736,
    1737,  1738,     0,     0,     0,     0,     0,     0,     0,     0,
    1837,   942,   935,     0,     0,  1728,     0,     0,  1826,     0,
       0,  1751,  1752,  1753,  1678,  1747,     0,  1677,  1871,     0,
       0,     0,     0,     0,  1870,   947,   952,   954,     0,   997,
     957,  1768,   965,   958,   964,  1767,  1769,  1001,  1008,  2126,
    2127,  1006,     0,  1009,     0,  1017,  1014,  2111,  2110,  1689,
       0,  1885,  1690,  1797,  1798,  1023,  1024,  1027,  1021,  2064,
    1286,  2088,  1034,  1036,  1031,  1084,  1039,   791,   791,  1044,
    1573,  1570,  1048,  1045,  1726,  2102,  1567,  1567,  1567,  1567,
    1093,  1086,     0,     0,   967,  1098,  1124,  1100,  1626,  1626,
    1101,  1108,  1109,   791,  1651,  1652,  1653,  1647,  1632,  2093,
    1639,  1659,  1662,  1661,  1663,  1655,  1646,  1645,  1650,  1649,
    1648,  1654,  1634,  1638,  1656,  1658,  1660,  1636,  1637,  1633,
    1635,  1627,  1628,  1640,  1641,  1642,  1643,  1644,  1631,  1130,
    1128,  1721,  1145,  2090,   791,  1160,     0,  1180,     0,  1207,
    1191,  1183,  1188,  1189,  1190,  1409,     0,  1786,     0,     0,
    1231,  1227,     0,  1235,  2102,  1286,     0,     0,   445,   441,
     444,   443,   442,   533,   535,   457,   453,   455,   456,   458,
     454,   459,   536,   534,   460,   461,   438,   449,   450,   451,
     446,   447,   448,   440,   437,  1249,  1255,  1256,   791,  1252,
    1626,     0,     0,  1260,     0,  1302,  1274,  1876,  1877,  2063,
    1319,  1305,  1307,  1308,     0,     0,  1322,  1328,  1325,  1276,
    1337,  1330,  1286,  1345,  1351,  1340,     0,  1345,     0,  1758,
    1760,  1761,  1762,     0,  1394,  1397,     0,     0,  1699,  1377,
       0,  1376,     0,     0,  1797,  1438,  1420,  1426,  2020,  1427,
    1422,     0,  1440,  1444,     0,  1466,  1454,     0,  1457,  1989,
    1458,     0,  1473,  1468,     0,  1480,   789,   787,   780,     0,
    2066,  2067,  1486,  1505,  1488,  1989,     0,  1553,  1539,  1543,
       0,  2102,  1354,   416,     0,     0,   581,   433,   465,   468,
       0,     0,   421,     0,   431,   426,   432,   429,  2020,  1882,
     188,  2001,   279,   280,   281,  1976,     0,   271,   274,     0,
    2134,    76,    66,     0,  1711,    75,    59,     0,     0,  1812,
    1808,  1813,  1811,  1809,  1814,  1810,   164,   165,   167,   176,
     171,   169,     0,   158,  2024,  2023,   161,     0,  2053,  2056,
    2055,     0,     0,   120,   124,    87,    26,    37,    40,    44,
      43,  2061,    38,    39,     0,  2020,   769,     0,     0,   747,
    1801,  1984,  1986,   883,  2020,  1554,   879,   880,   882,   884,
       0,     0,     0,   875,   871,  1554,  2109,  2108,   868,   860,
     862,   863,     0,  1554,     0,     0,     0,   887,   866,     0,
     874,   857,   873,   858,  1666,  1664,     0,  1791,  1755,  1754,
       0,  1740,     0,  1666,  1664,     0,  1666,     0,  1852,  1666,
    1683,  1685,  1666,     0,     0,     0,  1666,  1744,  1745,  1746,
       0,  1687,  1666,     0,  2049,  1576,   940,  1799,  1723,     0,
    1818,     0,     0,  1666,  1680,  1873,   947,  1670,  1669,  1673,
    1672,  1675,     0,   945,     0,     0,  1706,   966,  1007,  1012,
       0,  2006,     0,  1724,  1576,  2020,  1884,  1796,  1025,  2005,
    1612,  1287,  1288,  1030,     0,  1572,   792,  1575,  1568,  1574,
    1569,  1571,     0,  1058,  1057,  1050,  1053,  1055,     0,  1042,
    1043,  1040,  1041,     0,  1576,     0,   973,  1103,  1118,  1120,
    1119,  1113,  1115,  1121,  1626,  1110,  1107,  1626,  1111,  1657,
    1629,  1630,  2051,  1144,  1702,   791,  1152,  1153,  2093,  1168,
    1169,  1171,  1173,  1174,  1170,  1172,  1163,  2093,  1159,     0,
    1208,     0,  1210,  1209,  1211,  1193,  1203,     0,     0,  1187,
    2133,  2052,     0,  1411,     0,  2011,     0,  1224,  1576,     0,
       0,     0,   439,   452,  1253,  1266,  1262,  1267,  1263,  1268,
       0,  1258,  1548,  1547,  1265,  1276,     0,  1542,  1780,  1781,
    1782,     0,     0,  1332,   791,     0,  1344,     0,     0,     0,
       0,  1395,     0,  1399,  1398,  1391,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1379,  1380,  1878,  1612,     0,
    1443,  2081,  2081,  1463,     0,     0,  1576,     0,     0,   790,
       0,  1865,     0,  1463,  1286,  1970,  1358,  1543,     0,   418,
     363,     0,     0,   584,     0,   491,     0,   422,   428,   472,
     434,  1995,  2020,     0,     0,  2020,  1995,  2042,  2020,  1974,
     299,     0,   304,   307,   308,   309,   310,   311,   312,   313,
     314,   315,     0,     0,   190,  2002,  2085,  1977,  2005,   272,
       0,    79,    81,    80,    77,    78,    61,   135,   134,   149,
     145,   150,   131,   148,   146,   132,   133,   147,   130,   136,
     137,   139,   166,     0,   170,     0,   174,  1806,   159,   162,
       0,  2054,   127,   121,   122,   125,     0,     0,    86,     0,
      90,    42,  2062,    36,    41,   763,   764,   767,     0,   758,
     774,   776,  1775,   891,  1773,  1774,     0,  1560,  1561,  1565,
    1566,   856,  1562,   791,  1557,   791,   881,  2107,  2106,  2044,
    2044,   889,   890,  2044,     0,   896,  2020,   898,   899,   900,
     931,  2020,   901,   902,   903,   904,   905,     0,   925,   926,
     907,   909,     0,   910,   929,   927,   928,     0,   912,  2020,
     897,  1972,   915,   930,   918,   885,   906,   911,   917,   872,
     859,   861,  1554,   869,   864,   865,   888,   867,  1667,  1668,
    1802,     0,     0,     0,  1757,  1739,  1756,  1883,     0,  1847,
       0,  1847,  1851,     0,  1847,  1847,  1847,     0,  1830,     0,
    1847,     0,   791,   791,   936,  1582,  1579,  1797,  1798,  1576,
       0,  1847,  1847,     0,  1872,   946,   948,   955,   953,   977,
    1011,  1010,  1015,     0,  1291,     0,   791,   791,  1022,  1613,
    1619,  1616,     0,   794,  1064,  1065,  1062,  1061,  1063,  1060,
    1054,  2020,  1066,     0,  1069,  1070,  1999,  2020,  1073,  1074,
    1056,  1075,     0,  2020,  1078,  1076,  1059,     0,  1087,     0,
     968,   969,   762,     0,  1626,  1626,  1117,   791,  1114,     0,
    1151,   791,  1154,  1149,     0,     0,  1175,     0,     0,     0,
    1204,  1206,     0,  1199,  1213,  1200,  1201,  1192,  1195,  1213,
       0,  1760,  2132,     0,  2105,  1403,  2020,   557,   558,  2025,
       0,  2012,  1410,  1225,  1228,     0,  2057,  2057,     0,  1242,
    1243,  1693,  1254,  1251,     0,     0,  1278,  1309,  1277,   791,
     791,  1326,  1601,     0,  1612,  1333,     0,  1346,  1626,  1626,
    1341,  1347,  1378,  1400,  1390,  1392,  1382,  1383,  1384,  1388,
    1385,  1389,  1386,  1387,  1381,  1879,  1436,     0,  1433,  1434,
    1428,     0,  1421,  2131,  2130,     0,  2082,  1447,  1447,  1585,
       0,  1461,  1460,  1462,  1883,  1469,     0,   783,     0,  1866,
    1491,  1492,     0,  1495,  1498,  1502,  1496,  1332,  1971,     0,
    1363,  1362,  1361,  1360,  1359,   417,   365,   579,     0,     0,
     679,  2022,   466,     0,   492,     0,   463,  2020,  1981,     0,
    1996,     0,     0,  2020,  1974,     0,     0,     0,     0,     0,
    2043,  2020,   358,  1975,   359,     0,     0,   360,   305,   306,
    2063,  2086,  1995,     0,  2122,  2123,    74,   138,   141,     0,
     168,     0,   163,   128,     0,    96,    33,     0,    33,     0,
      88,    91,   765,   766,   776,   794,   895,  1555,  1563,  1559,
    1556,  1558,  1564,  2045,     0,     0,     0,  1807,   886,  1776,
    1777,     0,     0,   924,   916,  2020,  2020,  1622,  1622,     0,
    1973,     0,   870,  1665,  1803,     0,  1576,  1861,  1834,  1863,
    1835,  1859,  1831,  1832,  1833,  1857,  1854,  1855,  1829,  1724,
    1584,  1581,  1577,  1583,  1578,  1580,  1796,   937,  1848,     0,
    1827,  1828,  1874,  1763,  1764,   986,  2018,  1887,  1888,  1889,
    1890,  1891,  1892,  1893,  1894,  1886,     0,  1618,  1621,  1614,
    1620,  1615,  1617,  1032,     0,     0,  1067,  1068,  2049,   729,
     731,  1071,  1072,     0,     0,  1622,  1622,     0,  1576,  1688,
    1576,  1688,   970,   971,     0,   975,   974,   976,  1116,  1122,
    1112,  1146,  1150,  1161,  1164,  1165,  1997,  1157,  2093,  1162,
    1213,  1759,  1213,     0,  2016,  2016,  1198,  1214,  1215,  1196,
    1202,  1197,  2104,  1413,     0,  2026,  1407,  2013,  1576,  2058,
     267,   268,   269,  1246,  1236,  1694,     0,  1269,     0,  2051,
       0,  1297,  1279,  1292,  1285,  1281,  1294,     0,   791,   791,
    1306,  1315,  1312,  1600,  1603,  1594,  1602,  1595,  1331,  1334,
       0,   791,   791,  1348,  1435,  1425,  1429,  1430,  1431,  1432,
    1423,  1445,  1448,  1446,   791,   791,  1455,  1591,  1588,  2020,
    1576,  1576,   785,  1483,  1865,  1494,  2009,  1500,  2009,  1585,
    1549,  1546,  1545,  2032,  2030,  1355,   364,   418,   582,     0,
       0,   290,     0,   469,   493,     0,   462,     0,   567,   497,
    2072,  2072,  2072,  2072,  2072,  2098,   498,   501,   502,   503,
     504,   505,   506,   529,   527,   528,   530,   531,   507,  2068,
     532,     0,   508,   494,   509,   510,     0,  2075,   512,   513,
     511,  2027,   515,   516,   514,  2020,   473,   474,   475,   476,
     477,   478,   495,   499,   500,   479,   480,   481,   482,   483,
     484,   485,   486,     0,     0,  1982,     0,   467,     0,   435,
     327,   236,   355,  2124,  2125,  1714,   336,  1712,  2117,  2116,
     329,  1716,  1715,  2038,  1993,  2009,     0,  2020,   333,   332,
    2020,   361,  2042,  2063,  2095,   252,     0,  2020,  1991,  2025,
     254,     0,  2102,   240,   189,   239,   191,   192,   193,   194,
     195,   196,     0,   197,     0,   198,   251,   199,   200,   201,
     202,   203,   204,  1987,  2020,     0,   277,     0,   140,   172,
      92,    93,    97,    94,    95,    89,   794,   892,   894,   893,
     920,   919,     0,     0,   922,     0,  1778,  1779,   921,   914,
     923,  1804,   938,  1849,   791,   791,   791,   959,   993,   989,
    2049,  2019,   980,   985,   984,   979,     0,  1290,  1289,  1080,
    2000,   730,   732,  1079,  1082,  1081,  1077,  1089,     0,  1088,
       0,   972,  1732,  1731,  1789,  1166,  1998,     0,     0,  1194,
    1205,  1213,  2017,     0,     0,  1216,  1217,     0,     0,  1416,
    1412,  1406,  1229,  1245,     0,     0,     0,  1282,  2020,  1612,
    1280,  1293,     0,     0,     0,  1296,  1317,  1314,  1310,  1316,
    1311,  1313,  1335,  1342,  1349,  1593,  1590,  1586,  1592,  1587,
    1589,     0,  1471,  1470,  1506,   784,     0,  1493,  2010,     0,
    2009,  1497,     0,  1489,   791,   791,  1540,  1551,  1609,  1606,
    1550,  2033,  2034,  1544,  2031,  1364,     0,   366,   418,   580,
     418,   585,     0,   572,   568,   570,   464,   576,   577,  2073,
     526,   525,   518,   517,   524,   523,   522,   521,   520,   519,
    2099,     0,  2069,   564,   550,   544,   487,  2076,  2028,  2029,
     565,     0,   489,  1895,  1895,   471,   470,     0,   317,     0,
     354,  1713,  2039,   338,     0,   320,  2077,   347,   349,   353,
     352,   348,   350,   346,   351,     0,     0,  2020,  2025,  2096,
    2097,   219,   255,  2063,  2020,  2020,  2020,  2020,   264,  1978,
     265,     0,  2020,  2042,  1988,     0,     0,   283,   284,   287,
     142,   143,     0,   908,   913,  2128,  2129,  1623,   991,   995,
     992,   987,   994,   988,   990,     0,   978,  1576,  1576,     0,
    1176,  1212,  1219,  1218,  2020,  1414,     0,     0,  1404,  1408,
    1244,     0,  1284,     0,  1275,  1300,  1601,  1598,  1299,  1283,
    1295,  1464,  1514,   786,  1499,     0,  1503,  1608,  1611,  1604,
    1610,  1605,  1607,   368,   367,   583,   587,   680,     0,   574,
     571,   566,  2009,   546,     0,  2091,   496,     0,   488,  1991,
     537,   538,   328,   319,   318,   316,   356,  1708,   337,  1993,
    2078,   325,   334,   331,   335,   330,     0,  2020,   221,   220,
     217,   254,   250,     0,     0,     0,     0,  1979,  1980,   263,
     266,     0,  2020,   253,   235,   285,     0,   286,     0,     0,
     981,  1091,  1090,  1167,     0,  1417,  2020,  1626,  1298,  1596,
    1597,  1599,  1984,  1537,  1536,  1515,  1507,  1508,  1972,  1509,
    1510,  1511,  1512,  1535,     0,     0,  1501,   370,   586,   682,
     573,     0,   569,     0,     0,     0,   544,   545,  2092,   548,
     490,  1896,  1709,     0,     0,   339,   340,   341,   342,     0,
     321,  2008,   327,     0,   229,   230,   228,   227,     0,   213,
     214,   224,   224,     0,   212,   210,   211,   216,   215,   224,
     224,     0,   256,   257,   258,   259,   262,   237,     0,   288,
     144,   775,  1415,     0,  1270,     0,  2079,     0,  2051,  2005,
       0,   588,     0,   686,   681,   683,     0,     0,  2020,   551,
     547,   552,  2051,   555,   345,   344,  1983,  1993,   326,  1867,
     225,   207,   226,   208,  2001,   209,   206,   222,   205,   223,
    2020,     0,   246,   245,   246,   242,  1418,     0,  2080,     0,
    1533,  1532,  1531,     0,   369,   371,  2016,   589,     0,   687,
       0,   684,  2101,     0,   553,   555,     0,   559,   554,     0,
     323,   232,  1868,   218,     0,   260,     0,   244,   243,  1534,
    2113,  2112,  2059,  1527,  1521,  1522,  1524,   392,     0,     0,
     689,   690,   685,   575,   559,   549,  1989,   542,  2025,   343,
    2051,   322,     0,   231,   261,     0,   249,  2060,  2051,  1530,
    1525,  1528,     0,  1523,  2020,     0,     0,     0,     0,   373,
     393,   394,   375,   403,     0,  2020,  2074,   543,     0,  2020,
       0,     0,     0,     0,  1529,  1526,  2020,     0,     0,  2020,
    2020,  2020,  2020,   395,     0,  2041,     0,  2084,     0,   372,
     376,   378,   377,     0,     0,     0,     0,     0,     0,     0,
     374,   404,   406,   405,     0,     0,   593,  2020,  2020,  1974,
    2035,   618,   592,   596,   597,     0,  2003,   705,  2020,   694,
    2098,   695,  1999,  2020,     0,   710,   703,   698,   704,  2044,
     699,     0,     0,   702,   712,   709,   707,   706,     0,   713,
     701,     0,   724,   718,   722,   721,   719,   723,   691,   725,
     720,   708,   700,     0,  2044,   563,   560,   561,     0,   324,
       0,   151,   152,   234,     0,  2120,  2121,   247,  1520,  1517,
    1519,  1518,  1513,  1516,     0,     0,   401,     0,     0,     0,
       0,  2020,  2020,  2020,  2020,  2020,   379,     0,  2020,  2020,
    2020,  2020,  2020,  2020,  2020,  2020,  2020,  2020,  2020,   407,
       0,  2020,     0,  2151,  2152,  2020,  1974,     0,   590,   594,
    2004,   598,     0,     0,   692,   693,   696,   697,     0,   727,
    2020,  2091,  2020,   728,   726,   744,  2020,   562,   556,   233,
     248,   396,  2091,   400,   398,   402,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   595,  2036,  2037,   606,
     603,   430,   619,   599,   600,   717,   716,   737,   743,     0,
     740,   559,   388,   384,   385,   389,   387,     0,   390,   380,
     386,   381,   382,   383,   412,   408,   409,   413,   411,     0,
     410,   602,  2118,  2119,   605,   620,   432,   601,   735,   733,
     736,   734,   738,   739,     0,   711,   741,   742,     0,   399,
       0,     0,     0,  2020,  2020,     0,   607,   608,   609,   610,
     611,   612,     0,   622,   714,   715,     0,   414,  2138,  2137,
    2020,     0,     0,  2140,     0,  2020,  2020,   604,  2074,     0,
       0,   617,   613,  2139,     0,     0,  2014,  2046,  1974,     0,
       0,     0,  2020,  2049,   621,  2020,  2020,     0,   627,   629,
     638,   630,   632,   635,   623,   624,   625,   634,   636,   639,
     626,     0,   631,     0,   633,   637,   628,  2046,  1974,     0,
     614,   616,   615,  2015,   677,  2047,  2048,  2022,   663,  2020,
     544,  1626,     0,     0,     0,     0,     0,   671,     0,   661,
     667,   670,     0,   664,   672,   675,  2022,   666,     0,   662,
       0,  2091,   659,  1883,   655,  1742,  2142,     0,     0,  2144,
    2146,     0,  2150,  2148,   640,   644,   648,   648,   642,   646,
     641,   647,   678,     0,   669,   668,   674,   673,   665,     0,
     653,   548,   676,  2051,   654,  1743,  2141,  2145,  2143,  2149,
    2147,   651,   643,   651,   645,     0,   391,   540,     0,     0,
     650,   649,     0,     0,   539,   658,   656,   657,   652,   660,
     541
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    12,
      57,    58,    59,    61,    18,    13,    23,    35,   444,    24,
      34,    80,    84,   246,   780,  1161,  1162,  1163,    19,    20,
      32,    33,    51,    52,   214,   416,   750,    53,   213,   406,
     407,   408,   409,   410,   411,   412,  1464,   413,   436,  1155,
    1498,  1499,  1500,  1837,    75,   228,   229,   230,   231,   232,
     434,   771,  1494,   772,   773,   233,   752,  1478,  1479,  1480,
    2177,  2390,  1481,  2803,   234,   441,   235,   764,   765,   766,
    1488,   236,  1136,  1137,   237,   238,  1484,   239,   240,   241,
     242,   243,   244,    47,    48,    71,   397,   212,   398,  1454,
    1820,  2156,  2157,  2569,  2570,  2571,  2480,  2618,  2611,  2158,
    2557,  2159,  2683,  2160,  2122,  2161,  2162,  2163,  2164,  2625,
    2657,  2165,  2166,  2167,  2168,  2169,  2574,  2170,  2171,  2379,
    2172,  1709,   734,   735,   736,   737,  1115,   738,  1111,  2387,
    2388,  2497,    29,   206,    30,    44,    67,   207,   208,   727,
     209,  1108,  1442,  1443,  2465,  1444,  2681,  2552,  2348,  1445,
    1446,  2140,  2473,  1447,  1448,  2468,  2545,  2546,  2547,  2548,
    1449,  2363,  2364,  1450,  2350,  1451,  1452,  1816,   715,  1786,
    2046,  2307,  2308,  2527,  2589,  2635,  2729,  2730,  2731,  2732,
    2699,  2700,  2701,  2740,  2741,  2742,  2743,   389,  1419,   390,
     391,   719,   720,  1429,   721,  1105,  1106,  1798,   634,   996,
     997,   998,   999,  1000,   722,  2056,   723,  1424,   724,  1425,
    2117,  1797,  2096,  2097,  2098,  2458,  1793,  1794,  2100,  2101,
    2102,  1001,  1002,  2105,  3000,  3104,  2106,  2455,  2536,  2603,
    2453,  2645,  2647,  2648,  1699,  2677,  2796,  2797,  2107,  2108,
    2109,  2110,  1792,  2449,  2314,  2315,  2532,  2112,  1096,  2047,
    1423,  2310,  1790,  2446,  2528,  2591,  2669,  2705,  2752,  2753,
    2851,  2903,  2754,  2899,  2931,  2956,  2957,  2958,  2959,  2960,
    2961,  2848,  2902,  2963,  2978,  3004,  3005,  3064,  3092,  3100,
    3006,  3007,  3084,  3106,  3008,  3009,  3010,  3011,  3012,  3013,
    3039,  3040,  3043,  3044,  3014,  3015,  3016,  2051,  2529,  2594,
    2595,  2596,  2671,  2706,  2788,  1931,  1932,  2942,  2943,  2944,
    2948,  2789,  2790,    41,   788,  1511,    42,    89,   251,   250,
     446,   447,   448,   785,  1167,   253,  1169,  1844,   381,   696,
     697,  2032,  2285,   698,   699,  1408,  1275,  1276,  1633,   700,
      65,   147,   148,   328,   456,   794,   457,  1175,  1176,  1177,
    1201,  1178,  1531,  1532,  1179,  1565,  1566,  1567,  1568,   793,
     149,   329,   496,   824,   822,   150,   330,   513,  1253,   151,
     331,   525,   526,  1255,   152,   332,   534,  1257,   535,   853,
     905,  1296,  1660,  1661,  1662,  1905,   349,  2215,  2207,  2403,
    2208,  2401,  2209,   850,   153,   333,   538,   539,   154,   334,
     542,   861,   155,   335,   545,   866,   156,   157,   158,   336,
     554,   875,   878,   159,   337,   560,  1273,   561,   160,   338,
     564,   565,   566,   567,   895,   568,  1285,  1286,  1287,  1638,
    1656,   886,   161,   339,   572,   901,   162,   340,   163,   341,
     576,   164,   342,   579,   580,   581,   910,   911,   912,  1306,
     913,  1301,  1302,  1666,   907,   165,   343,   590,   350,   166,
     344,   591,   167,   345,   594,   168,   346,   597,  1313,   169,
     170,   351,  1317,  1673,   171,   352,   602,   955,  1326,  1676,
    1954,  1955,  1956,  1957,   172,   353,   605,   173,   354,   607,
     608,   961,   962,  1338,   963,   964,  1687,  1688,  1335,  1336,
    1337,  1681,  1966,  1967,  1968,   174,   355,   175,   356,   617,
     176,   357,   619,   971,   177,   359,   625,   626,   627,   975,
    1984,   178,   360,   635,  1008,  1713,  1009,   636,   637,   638,
    1356,  1358,  1359,   179,   386,   180,   361,   646,  1372,  1991,
    1992,  1993,  1270,  1271,  1272,  2260,  1995,  2259,  2424,  1016,
     181,   182,   362,   649,  1024,  2000,  2270,  2001,  2268,  2002,
    1021,   183,   363,   651,   184,   185,   364,   654,  1028,   186,
     365,   656,  1724,  1725,  1031,   187,   188,   366,   659,  1037,
    1375,  1730,  1731,  1035,   189,   387,   711,  1091,  1092,  1417,
    2045,   190,   367,   665,   774,  1052,   666,   667,  1395,  1396,
     668,   669,   670,   671,   672,   673,   674,   191,   368,   612,
    1973,   965,  2251,  1343,  1695,  2249,  2418,   192,   369,   682,
    1398,  1060,  1747,  1748,  1749,  1056,   193,   684,  1062,  2021,
     375,   194,   376,   685,   686,   687,  1070,  1762,  1759,  1066,
     195,   377,   690,  1073,   196,   379,   197,   380,   692,   198,
     382,   701,   199,   383,   704,   200,   384,   706,  1086,  1770,
    1771,  1413,  1773,  2037,  2291,  2039,  1084,  2286,  2432,  2516,
    2517,  2518,  2812,  2519,  2664,  2665,  2692,  2520,  2632,  2521,
    2522,  2523,   201,   385,   708,  1026,  1414,  1415,  2296,  1088,
    1521,  1850,  1522,  1523,  1847,  1524,  1525,   889,  1280,   890,
    1278,   891,  1604,  1894,  1605,  1892,  1606,  2026,  2279,  2027,
    2277,  2028,  1721,  2425,  2510,  1722,  2005,  2006,  2297,  2441,
    2298,  2439,  2299,  1628,  1629,  1921,  1630,  1919,  1631,  2194,
     600,   601,   583,   584,   941,   942,   943,   944,   945,   946,
     947,  1204,  1581,  1214,   515,   516,   517,   518,   497,   546,
     869,   652,   660,  1710,  1711,   458,   606,   675,   676,   952,
     639,   528,   529,  2466,  2132,  1125,  2126,  2127,  2133,   420,
     767,   592,   548,   893,   498,   499,  2231,   500,  3054,  1226,
     520,  1210,  1585,  1689,  1960,  1039,  1961,   540,   854,   640,
    1513,  1858,  2195,  1367,  1514,   613,   679,   702,  1690,  2233,
     501,   460,   549,   550,   461,   799,   800,  1515,  1489,  3041,
    1138,   502,   503,   504,   505,   506,   507,   508,   828,   808,
    1233,  1230,  1223,  1215,  1217,   725,  1772,  2651,   845,  1246,
    1614,  1019,  1751,   731,   872,  1266,  1915,  2460,   325,   326,
     327,  1779,  1871,  1814,  1458,  2489,  2118,  1180,  1181,  2385,
     449,   414,   433,  1801,  2237,  1933,  1456,  2852,  1262,  2553,
    2289,  1702,  3024,  2243,  2216,   426,  1147,  1976,  2340,  2305,
    2303,  2847,  2353,  2734,  1811,  1854,  3027,   802,  1344,  1151,
    1980,  2688,  1503,  2173,  1082,  2333,   424,  2321,  2114,  2471,
    2629,  1757,  2735,  1822,   882,   954,  2539,   598,  2371,  2331,
    2533,   645,  1696,  1533,  1203,   870,  2662,   791,  2130,  2934,
    2807,  1826,  1805,   863,  2397,  1755,  1345,   415,  2970,  2976,
    3067,  3068,  3069,  3070,  3071,  2756
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2683
static const yytype_int16 yypact[] =
{
   -2683,   735,  1266, -2683,   733,   831, -2683,   800, -2683, -2683,
     860, -2683, -2683,     6,   783,   802, -2683,  1184, -2683,  1262,
    1289, -2683, -2683,   860,   860, -2683, -2683,   873,  1325,  1336,
    1052,  1135,  1343,   -84,  1122,  1144,  1497,  1508, -2683,  1197,
    1574, -2683, -2683,  1291, -2683,  1206,  1299, -2683,  1529,  1264,
    1272,  1281,  1467,  1367,   -26,   -26,   -15, -2683,  1497, -2683,
     -15, -2683, -2683,    43,  3994,  4549,  1327,   732, -2683,  1338,
    1349, -2683, -2683, -2683,  1353,    82, -2683, -2683, -2683, -2683,
    1809,  1809, -2683, -2683,  1356, -2683,  1360, -2683, -2683,  1454,
    4884, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683,    -3, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
    1430, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683,   591, -2683, -2683,  1505, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683,  1323, -2683,   279,    70,
   -2683, -2683,   626,   203,  1324, -2683,    74,    74,  1426,  1453,
    1641,  1641,  1641,    74,  1457,  1641,  1834, -2683,  1499,    82,
     904, -2683, -2683, -2683, -2683,  1663, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683,  1628,  1415, -2683, -2683, -2683,
      98,    98,  -161,  1417, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,   418,  4591,
    8837,   164,   693,   639,  1363,   724,   726,  1119,  5661,  6503,
    1119,  1639,  -202,   788,   724,  1368,  1432, -2683, -2683,  6503,
   -2683, -2683,   724,  1373,  3389,  1368,  5825,  6503, -2683,  1181,
    7207,  1363,  1376,  1368,  1363,  1368,    68,   159,  1368,  1363,
   -2683, -2683, -2683, -2683, -2683, -2683,  6503,  5865, -2683, -2683,
    1373,   104,  1368,  1363,  1368,  1368,  1376,  1376,  1493,  1837,
   -2683,   468,  1437, -2683, -2683,  1438,  1113,   927, -2683, -2683,
    1490,  1481,  1857,  1641, -2683, -2683, -2683,   949, -2683, -2683,
   -2683, -2683, -2683,   371,  1876,  1641, -2683,   141, -2683, -2683,
   -2683,  1641,  1641, -2683,  1641, -2683,  1368,  1868,  1368,  1641,
    1641,  1368, -2683,  1397,  1151,  1456, -2683,  1478, -2683, -2683,
    1399, -2683, -2683, -2683,   520, -2683,   110, -2683,  -177,  -164,
     112, -2683, -2683, -2683, -2683,   778,  1805, -2683,  1666,  1738,
   -2683,  1455,  1629,   610, -2683,  1368, -2683, -2683,  1458,  1465,
    1469, -2683,  7577,    37,    37, -2683,  1474,  1482,  1488, -2683,
   -2683, -2683,  1489,    37, -2683, -2683, -2683, -2683, -2683, -2683,
    1494, -2683,  1469, -2683,    37, -2683,  1814, -2683,  5950, -2683,
   -2683, -2683, -2683,  1510, -2683, -2683,  1496,  1498,  1500,  7577,
    8980,  8837,  8980, -2683,   145,   756, -2683,  1777, -2683, -2683,
   -2683,   226,  1510, -2683, -2683,   164, -2683,  1487, -2683,    37,
   -2683, -2683, -2683, -2683,  1847,  2001, -2683, -2683,   639, -2683,
   -2683, -2683,  1363,   668,  1629,  1853,    79, -2683,  1588, -2683,
   -2683,  1455,  1510,  1363,  1856,  1627,  1531,  1533, -2683, -2683,
   -2683,  1376,  -232, -2683,  1862,   709,  6129, -2683, -2683,  2905,
    1260,  1350,  1863,   875, -2683,  1468, -2683, -2683, -2683,  1861,
      62, -2683, -2683, -2683,  5175, -2683, -2683,  1906,    -3, -2683,
   -2683, -2683,   724, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
    1534, -2683, -2683,   384, -2683,  1373, -2683, -2683,    18, -2683,
   -2683, -2683, -2683, -2683, -2683,  1512,  6503, -2683,  1530,  1864,
    1967, -2683, -2683, -2683, -2683,  1181, -2683,  1584,  1629, -2683,
    1735,  1735,  1239, -2683, -2683, -2683,  7320,   -11,   711,  1538,
    1537, -2683,  -204, -2683, -2683,  1544,  1865,   976, -2683,  1869,
     473, -2683,  1813, -2683,  1870,  1627,  1872,  1813,  1368,  1873,
    1491, -2683,  7577,  1849, -2683, -2683, -2683, -2683, -2683, -2683,
    1745, -2683,   724, -2683, -2683,  -102, -2683,   677,  2002, -2683,
      88, -2683,  1875,  1261,  5484,  1878,  6214, -2683,  1919,  1368,
    1879,  6239,  1373, -2683, -2683,   571, -2683, -2683, -2683, -2683,
    4296, -2683,  1829, -2683, -2683,  1390,  1881,  1925,  1882,  1813,
   -2683, -2683,  1836,  1555,  1630,  1772,  1509,  1509,  1509,   339,
    1565,  7259, -2683, -2683, -2683,  1516, -2683, -2683, -2683,  1721,
   -2683,    74, -2683,  1161, -2683,   231, -2683, -2683, -2683, -2683,
    1641,  1633,  1785, -2683, -2683, -2683, -2683,   978,  1641,  1522,
    1578,  1957,  1641,   846,  1368,  1798, -2683, -2683, -2683, -2683,
    1799,  1566, -2683, -2683,  1397, -2683,    54, -2683, -2683, -2683,
   -2683, -2683, -2683,  1442,   661,  1641,    72, -2683, -2683, -2683,
    1587,    49, -2683,  1641,  1637,  1742, -2683, -2683,  1965, -2683,
   -2683,  1368, -2683, -2683,  7856, -2683,  1980,  1655,  8837,  1582,
   -2683, -2683,   -52, -2683,  1601,  8837,  8837,  8429, -2683, -2683,
    1510, -2683,  1546,  1547,  8837,  8837,  8837,  7577,  1548,  7577,
   -2683, -2683, -2683,  6659,  1871, -2683,   610,  8837, -2683,  7577,
    8837, -2683,  1510, -2683, -2683, -2683,  1153, -2683,  1848,  8837,
    8837,  8837,  8837,  8837, -2683,  1693, -2683,  1734,  1825, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,   668, -2683,
   -2683, -2683,  1359,   681,  1368, -2683, -2683, -2683, -2683, -2683,
    8837,  1810, -2683,  1582, -2683,  1363, -2683, -2683, -2683, -2683,
    1699, -2683, -2683, -2683,   -98, -2683, -2683, -2683, -2683, -2683,
    1788,  1927, -2683, -2683,  2905,    53,   709,   709,   709,   709,
   -2683, -2683,  6503,  6659, -2683, -2683, -2683, -2683,  -202,    95,
   -2683,  1562, -2683,  1568, -2683, -2683, -2683, -2683, -2683,  1432,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683,  5145, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683,   -27, -2683,  1968,  1577,  1918, -2683,  7577,   137,
   -2683, -2683,  1719, -2683, -2683,    59,  8837, -2683,  1626,   724,
   -2683, -2683,  6659, -2683,  1569,  1699,  1735,  1622, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
    1932,  1368,   164, -2683,   267, -2683, -2683, -2683, -2683,  1627,
   -2683, -2683, -2683, -2683,  1874,  3389, -2683, -2683, -2683,  1877,
   -2683, -2683,  1699,  1974, -2683, -2683,  1368,  1974,  1631, -2683,
   -2683,  1510, -2683,  1634, -2683, -2683,   907,  1442, -2683, -2683,
    5514, -2683,  2070,  1166,   108, -2683, -2683, -2683,  1641, -2683,
     434,  6503, -2683, -2683,   707, -2683, -2683,  1368, -2683,  2072,
   -2683,  1912, -2683, -2683,  6659, -2683,  1785, -2683, -2683,  7577,
   -2683, -2683, -2683, -2683, -2683,  2072,  1880, -2683, -2683,   267,
    1368,  1569,   274, -2683,  1635,  1705,  1859, -2683, -2683, -2683,
    1740,  1642, -2683,  1643, -2683, -2683,  2044, -2683,  1307, -2683,
   -2683,  1646, -2683, -2683, -2683,  2117,  1651, -2683, -2683,  1785,
   -2683, -2683, -2683,   582, -2683, -2683, -2683,  1854,   962, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683,   846, -2683,  1661, -2683,
    -149, -2683,  1715, -2683, -2683, -2683, -2683,  1885,   661, -2683,
    1897,    74,    74, -2683,  1442,    -2, -2683,   425, -2683, -2683,
   -2683,  1787, -2683,  2074,   781,  1641, -2683,  1606,  1662, -2683,
   -2683,   614, -2683, -2683,  1641,  1347,  7856, -2683, -2683, -2683,
     729,  1677,  8130, -2683, -2683,  1347, -2683, -2683, -2683,  1610,
    1614, -2683,  7577,  1347,  1911,  1711,  1850, -2683, -2683,  1883,
   -2683, -2683, -2683, -2683,    33,  1165,  8837, -2683, -2683, -2683,
     381, -2683,  1368,   218,  1051,  1679,   291,  1680, -2683,   304,
   -2683, -2683,   235,  1681,  1683,  1684,   315, -2683,  1510, -2683,
    1685, -2683,   318,  1686,  1629,   585, -2683,   189,   -43,   724,
   -2683,  1259,  1687,   328, -2683,  1690,  1693,   756,   756, -2683,
   -2683, -2683,   724, -2683,  1692,   164, -2683,  1468, -2683, -2683,
    1773, -2683,  1791, -2683,   746,  1641, -2683, -2683, -2683,  1596,
     994, -2683, -2683, -2683,  1928, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683,     1, -2683, -2683,  2529, -2683, -2683,  1156, -2683,
   -2683, -2683, -2683,  1964,   585,  1966,    30, -2683, -2683, -2683,
   -2683,  2166, -2683,  1704,   168, -2683, -2683,    95, -2683, -2683,
   -2683, -2683,  1866, -2683, -2683, -2683,  2051,  2040,  1432, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683,  1806,  1432, -2683,  1712,
   -2683,  2148, -2683, -2683, -2683,  4445, -2683,  7577,  4375, -2683,
   -2683, -2683,  2068,   221,   908,   997,   724,   724,   585,  1983,
     109,  1363, -2683, -2683,  2050, -2683, -2683, -2683,  2196, -2683,
    1994, -2683, -2683, -2683, -2683,  1877,  1368, -2683, -2683, -2683,
   -2683,  1368,    75,   686, -2683,  1664, -2683,  1665,  7577,  1887,
    1095, -2683,   381, -2683, -2683, -2683,  6503,  1442,  1442,  1442,
    1442,  1442,  1442,  1442,  1442,  1166, -2683,   675,   994,   438,
   -2683,  1758,  1758,   629,  6418,  1368,   585,  1997,  1728, -2683,
    1736,  2210,  1368,   623,  1699,  2215, -2683,   267,   123,   279,
   -2683,  1733,  1802,  1835,  1691,  1217,  1368, -2683, -2683, -2683,
    1217,  2134,  1641,  1434,  1434,  1641,     7,  1939,  1641,  2208,
   -2683,  1905, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683,    74,  1200, -2683, -2683,  1759, -2683,  2028, -2683,
      23, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,   645,
   -2683,   153, -2683,   846, -2683,  1886, -2683, -2683,  1885, -2683,
      74, -2683, -2683, -2683, -2683, -2683,    65,  1694, -2683,    90,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,   807, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683,  2189, -2683, -2683, -2683,
   -2683, -2683,  1506, -2683,  1388, -2683, -2683, -2683, -2683,  1921,
    1921, -2683, -2683,  1921,   444, -2683,  1641, -2683, -2683, -2683,
   -2683,  1641, -2683, -2683, -2683, -2683, -2683,    -9, -2683, -2683,
   -2683,  2182,  1801, -2683, -2683, -2683, -2683,   -22, -2683,  1641,
   -2683,  2235, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683,  1347, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683,  8837,  8529,  1165, -2683, -2683, -2683,  1588,  6339,  1496,
    8626,  1496, -2683,  1368,  1496,  1496,  1496,  7577, -2683,   -80,
    1496,   -52, -2683, -2683, -2683,  1929,  1807,   206,  2029,   585,
    8737,  1496,  1496,   702, -2683, -2683, -2683, -2683, -2683,    -3,
   -2683, -2683, -2683,   760, -2683,  8837, -2683, -2683, -2683, -2683,
    1933,  2004,   494, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683,  1641, -2683,   910, -2683, -2683,  1375,  1641, -2683, -2683,
   -2683, -2683,   -16,  1641, -2683, -2683, -2683,   724, -2683,   724,
    3527, -2683,   866,    17,    95, -2683, -2683, -2683,  2166,  1368,
   -2683, -2683, -2683, -2683,  1714,  1274,   208,  1716,   702,  7577,
   -2683, -2683,  2203, -2683,  1419, -2683, -2683,  4375, -2683,  1419,
    2054,  2056, -2683,  1831, -2683, -2683,  1641, -2683, -2683,  2009,
    1930, -2683, -2683,   724, -2683,   724,  1934,  1934,  1935, -2683,
     716, -2683, -2683, -2683,  1368,  6503,   173,   115, -2683, -2683,
   -2683, -2683,  1945,  2122,   994, -2683,  1369, -2683, -2683, -2683,
   -2683,  1665, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683,   -36, -2683,  1368, -2683, -2683,
   -2683,  1237, -2683, -2683, -2683,  8837, -2683,  6503,  6503,  -109,
    1922, -2683, -2683, -2683,  1588, -2683,   724, -2683,   702, -2683,
    1936, -2683,  7577, -2683,  2161,  1811, -2683,   686, -2683,   554,
    1893, -2683, -2683, -2683, -2683, -2683, -2683, -2683,  1796,  1867,
    1888,   817, -2683,  1691, -2683,  2069,  1812,  7794,   837,  2073,
   -2683,  1785,  1749,  1641,  2208,  1751,   -95,   505,  1785,  1747,
   -2683,  1641, -2683, -2683, -2683,   -57,  1416, -2683, -2683, -2683,
    2650, -2683,  2134,  1363, -2683, -2683, -2683, -2683, -2683,   645,
   -2683,  2023, -2683, -2683,  2052, -2683,  1809,  1309,  1809,  1815,
   -2683, -2683, -2683, -2683, -2683,   466, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683,   614,   614,   614, -2683, -2683, -2683,
   -2683,   614,   614, -2683, -2683,  1641,  1641,   548,   548,   614,
   -2683,   444, -2683,  1051, -2683,  1210,   -97, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,  2081,
   -2683, -2683, -2683, -2683, -2683, -2683,  2083, -2683, -2683,  1253,
   -2683, -2683, -2683, -2683, -2683,   -32,    91, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683,  1207, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683,  3406,   614, -2683, -2683,  1629, -2683,
   -2683, -2683, -2683,   968,   614,   548,   548,   614,   585,  1916,
     585,  1917, -2683, -2683,  6503, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683,  1274, -2683,  2199, -2683,  1432, -2683,
    1419, -2683,  1419,   702,  1816,  1816, -2683,  2299,  2270, -2683,
   -2683, -2683, -2683,     0,  1368, -2683, -2683, -2683,   585, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683,  1370, -2683,  2259,  1866,
    2034,  2060, -2683,   599, -2683, -2683, -2683,   576, -2683, -2683,
   -2683,  2207,  2010, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
    2038, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
    1051, -2683, -2683, -2683, -2683, -2683, -2683,  2003,  1817,  1641,
     -97,   585,  1786, -2683,  2210, -2683,  2086,  2222,  2086,  -109,
    1273, -2683, -2683,  1563,  2057, -2683,  2273,   279, -2683,  1839,
    1908, -2683,   925, -2683, -2683,  1368, -2683,   980, -2683, -2683,
    -201,  -170,   751,   880,   912,  1790, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,  1923,
   -2683,   105, -2683, -2683, -2683, -2683,  1368,  2088, -2683, -2683,
   -2683,   -34, -2683, -2683, -2683,  1641, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683,  1322,   555, -2683,  1789, -2683,   925, -2683,
    1852, -2683,  2135, -2683, -2683, -2683,  1751, -2683, -2683, -2683,
   -2683, -2683, -2683,  2071,    45,  2086,   617,  1641, -2683, -2683,
    1641, -2683,  1939,  1627,   409, -2683,  1909,  1641,  2284,   209,
     181,    13,  1569, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683,  1891, -2683,  2075, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683,  2306,  1641,  1363,  1363,   645, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683,   -42, -2683, -2683, -2683,
   -2683, -2683,   494,   614, -2683,  1567, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,  2033,    12,
    1629, -2683, -2683, -2683, -2683, -2683,  1368, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,   724, -2683,
     724, -2683, -2683, -2683, -2683, -2683, -2683,  2298,  2234, -2683,
   -2683,  1419, -2683,  6503,  6503, -2683, -2683,  1991,  1363,   957,
   -2683,  1368, -2683, -2683,  1946,  6503,  2076, -2683,  1641,  1157,
   -2683, -2683,   714,  2077,  2078, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683,  1368, -2683, -2683, -2683, -2683,  1884, -2683, -2683,  1368,
    2086, -2683,  1368, -2683, -2683, -2683, -2683, -2683,  2046,  2188,
   -2683, -2683, -2683, -2683, -2683, -2683,    74, -2683,   279, -2683,
     279, -2683,  1889,  1894,   925, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683,  1808, -2683, -2683,  2307,  1895, -2683, -2683, -2683, -2683,
   -2683,  8524,  2333,  1938,  1938, -2683, -2683,  1785,    85,  1368,
   -2683, -2683, -2683, -2683,  1785, -2683,  1931, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683,   551,   551,  1641,  2009, -2683,
   -2683,   135, -2683,   938,  1641,  1641,  1641,  1641, -2683,  1486,
   -2683,   109,  1641,  1939, -2683,  1937,  1749,  1363, -2683,  2012,
    2353, -2683,  2262, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683,  1368, -2683,   -97,   -97,  6503,
   -2683, -2683, -2683, -2683,  1641,  1363,  1363,  2019, -2683, -2683,
   -2683,  1892, -2683,  1368, -2683, -2683,  1945,  2122, -2683, -2683,
   -2683, -2683,   887, -2683, -2683,  1368, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,   925,   811,
   -2683, -2683,  2086,  2171,  1785,  1901, -2683,  2114, -2683,  2284,
   -2683, -2683, -2683, -2683, -2683, -2683,  1368, -2683,    39,  1834,
   -2683,    50, -2683, -2683, -2683, -2683,    22,  1641, -2683, -2683,
    1265, -2683, -2683,   505,  1940,  1368,  1368, -2683, -2683, -2683,
   -2683,  1368,  1641, -2683, -2683, -2683,  1785, -2683,   645,  1899,
   -2683, -2683, -2683, -2683,   164,  1363,  1641, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,  1542, -2683,
   -2683, -2683, -2683, -2683,  2025,  2279, -2683, -2683,  2020,   648,
   -2683,  1961, -2683,  1902,  1851,  1785,  1895, -2683, -2683,  2276,
   -2683, -2683, -2683,   505,   505, -2683, -2683, -2683, -2683,  2194,
   -2683, -2683,  1852,  1785, -2683, -2683, -2683, -2683,  1368, -2683,
   -2683,   578,   578,  2391, -2683, -2683, -2683, -2683, -2683,   578,
     578,   594, -2683, -2683, -2683,   960, -2683, -2683,   941, -2683,
   -2683, -2683, -2683,   164, -2683,  2008,  1952,   207,  1866,   171,
    1373, -2683,  7027, -2683, -2683,   648,  1913,  1920,  1641, -2683,
   -2683,  2163,  1866, -2683, -2683, -2683,  2375,  1834, -2683,   -35,
   -2683, -2683, -2683, -2683,  1646, -2683, -2683, -2683, -2683, -2683,
    1641,  1368,  1890, -2683,  1890, -2683, -2683,  1368, -2683,  1536,
   -2683, -2683, -2683,    81, -2683, -2683,  -139, -2683,  1924, -2683,
    1926, -2683, -2683,   925, -2683, -2683,  1368,  2172,   908,   505,
    2288,  1944, -2683, -2683,  1368,  1368,   894, -2683, -2683, -2683,
   -2683, -2683,  2053,   950,    81, -2683, -2683,   280,  1252,  1162,
   -2683, -2683, -2683, -2683,  2172, -2683,  2072, -2683,  2009, -2683,
    1866, -2683,  1896, -2683,  1368,  2089, -2683, -2683,  1866, -2683,
   -2683,  2091,  1368, -2683,    78,  2162,  2167,  2300,  2159, -2683,
     280, -2683,  1406,   355,  1942,   149,  8157, -2683,  1898,  1641,
    1368,    63,  1053,   600, -2683, -2683,  1641,  2097,  1368,  1641,
    1641,  1641,  1641, -2683,  2170,    26,  2173, -2683,  2164, -2683,
    1605, -2683, -2683,  1368,  2325,  1171,  2174,   175,  2176,  2175,
   -2683,   579, -2683, -2683,  1368,  1955, -2683,  1641,  1641,  2208,
    1473, -2683, -2683, -2683, -2683,  2214,  2245, -2683,  1641, -2683,
     155, -2683,  1375,  1641,  3389, -2683, -2683, -2683, -2683,  1921,
   -2683,  2302,  1785, -2683,  2380, -2683, -2683, -2683,  1368, -2683,
   -2683,  1368, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683,  2221,  1921, -2683,  1898, -2683,  1368, -2683,
     610, -2683, -2683, -2683,  1471, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683,  1363,  1368,  1785, -2683,  1368,  1368,  1368,
    1368,  1641,  1641,  1641,  1641,  1641, -2683,  1368,  1641,  1641,
    1641,  1641,  1641,  1641,  1641,  1641,  1641,  1641,  1641, -2683,
    1368,  1641,   494, -2683, -2683,  1641,  2208,  2169,  1900, -2683,
   -2683, -2683,  1368,   614, -2683, -2683, -2683, -2683,   614, -2683,
    1641,  1901,  1641, -2683, -2683, -2683,  1641, -2683,  1368, -2683,
   -2683, -2683,  1901, -2683, -2683, -2683, -2683,  1368,  1368,  1368,
    1368,  1368,  1368,  1368,  1368,  1368,  1368,  1368,  1368,  1368,
    1368,  1368,  1368,  1368,  1368,  1368, -2683, -2683, -2683, -2683,
    1586,   -59, -2683,  1368, -2683, -2683, -2683,  1000, -2683,   494,
    1000,  2172, -2683, -2683, -2683, -2683, -2683,  1368, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,  1368,
   -2683,  1346, -2683, -2683,  2169, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683,   614, -2683, -2683, -2683,   614, -2683,
    1368,  1368,  1492,  1641,  1641,  1600, -2683, -2683, -2683, -2683,
   -2683, -2683,  1793, -2683, -2683, -2683,  1368, -2683, -2683, -2683,
    1641,  2169,  2169, -2683,  2218,  1641,  1641, -2683,  1833,  1368,
    2169, -2683, -2683, -2683,  2169,  2169,  2209,  1429,  2208,  2223,
    1785,  1907,  1641,  1629, -2683,  1641,  1641,  1368, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683,  1139, -2683,   618, -2683, -2683, -2683,  1429,  2208,  1368,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683,   817, -2683,  1641,
    1895, -2683,  9146,  9146,  1344,  2321,  2239, -2683,  1785,  1139,
   -2683, -2683,  1785,   618, -2683, -2683,   817, -2683,  1368, -2683,
    1139,  1901, -2683,  1588,  9035, -2683, -2683,  1282,  1295, -2683,
   -2683,  1420, -2683, -2683, -2683, -2683,   -56,   -56, -2683, -2683,
   -2683, -2683, -2683,  9146, -2683, -2683, -2683, -2683, -2683,  1368,
   -2683,  2276, -2683,  1866, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683,  2119, -2683,  2119, -2683,  2403, -2683,  1998,   -30,  2115,
   -2683, -2683,  9146,  1785, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2683, -2683, -2683, -2683, -2683,  2448, -2683, -2683, -2683, -2683,
   -2683, -2683,  2399, -2683,  1750, -2683, -2683, -2683, -2683, -2683,
   -2683,  2404,  2400,   -66, -2683, -2683, -2683,  1304, -2683, -2683,
   -2683, -2683, -2683,  2409, -2683, -2683, -2683,  2413, -2683, -2683,
    2055,  -278, -2683, -2683, -2683, -2683, -2683,  2252, -2683, -2683,
   -2683, -2683,   970, -2683, -2683, -2683, -2683,  2238,   452, -2683,
   -2683, -2683, -2683,  1316, -2683, -2683, -2683, -2683, -2683,   993,
   -2683, -2683, -1760, -2683, -2683, -2683, -2683, -2683,  1710, -2683,
   -2683, -2683, -2683,  1339, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,  -892, -2683,
   -2683, -2683, -2683, -2683,    92, -2683, -2683, -2683, -2683, -2683,
    -148, -2683,   106, -2683, -2683, -2683,   -81, -2683, -2683, -2683,
   -2683,    99, -2683, -2683,  1746, -2683, -2683, -2683, -2683, -2683,
      96, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,   -70, -2683,
   -2683, -2683,   120, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,  -243, -2683,
   -2683, -2683,  -211, -2683, -2683,  -251, -2683, -2683, -2683, -1360,
   -2683, -2683,  1774, -2683, -2376, -2416,  -707, -2683, -1974,  -498,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2279, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683,   694, -1935,  -212,
     156, -1755, -1748, -1908, -2683, -2683, -2683, -2454, -2683,  -585,
   -2683, -2683,  -143, -2683,  -145, -2490, -2683,  -292, -1895, -2683,
   -1889, -2683, -1752, -2683, -2683,   192, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,  -559,  -584,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -1374, -2683,  -532, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683,   -83, -2683, -2683, -2683,  -249,  -248,  -395,  -394, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
    2266,  1256, -2683,   856, -2683, -2683, -2683, -2683, -1307, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683,   664, -2683, -2683,   -20,
   -2683,  2454, -2683, -2683, -2683, -2683, -2683, -2683, -2683,  1345,
   -2683,  -783, -2683, -2683,  -778, -2683,  -186, -1265,   975, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,  1277, -2683,
   -2683, -2683,  1999, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
    1268, -2683, -2683,   868, -2683, -2683,  -649, -2683, -2683, -2683,
     320, -2683,   322, -2683, -2683, -2683, -2683,  1996, -2683, -2683,
   -2683,  1674, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683,  2195, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683,  1972, -2683, -2683, -2683,  1254, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683,  1632, -2683, -2683,  1636, -2683,
   -2683,  1234,   879, -2683, -2683, -2683, -2683, -2683,  1960, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683,   595,  1590, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683,  1589, -2683, -2683,   863, -2683,  1218,
   -2683, -2683, -1619,   584,   587, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683,  1941, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2252,  1943, -2683,
   -2683, -2683,   841, -2683, -2683, -2683, -2683, -2683,  1191, -2683,
   -2683, -2683,  -851,   842, -2683, -2683,   564, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683,   557, -2683,   560,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683,   785, -1567, -2683, -2683, -2683, -2683, -2683, -2683,
    1526,   833, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683,  -715, -2683, -2683, -2683, -2683,  1172,
   -2683, -2683, -2683,  1910, -2683,  1914, -2683, -2683, -2683,  2201,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,   812,
   -2683, -2683, -2683, -2683, -2683,  1903, -2683, -2683,  1158, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
     538, -2683,  1164, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683,   -86, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -2683,   628,  1168,  1573, -2683, -2683,
   -1055, -2683,  1057, -2683, -2683,  1060, -2683,  1066, -2683,  1697,
   -2683,  1700, -1238, -2683,   977, -2683,   986,   553, -2683,   565,
   -2683,   567, -2683, -2683, -2683, -1663,   169, -1321, -2683, -2683,
     297, -2683,   300, -1345,   566, -2683,   974, -2683,   989,  -293,
   -1002,  -313,  -843, -2683, -2683,  1682, -1247,   870,   871,   876,
     877,   937,   616,  -263,   942,   916, -2683,  1372,  -282,  -766,
    -318,   -74,  1971, -1773,  -195,   536,  -374, -2683,  -645, -2683,
    -287, -2361,  1778, -1382,  -410,  1511, -2683,   507, -1209,  -210,
    1904,  -306,  -305, -2683,  -121,    83, -2683,   687, -2683,  -764,
   -1313, -2683,  1255,  -608, -1032, -2683,  1022,  -335, -2683, -2683,
   -1698,   767, -2683,  -124,  -336, -2683,   667, -2683, -2683, -2683,
     -54,  -420, -2683, -2683,  1459,  -488,  -487,  -406,  1154, -1501,
    1160,  -322,    29,  -458,   271, -2683, -2683, -2683,   382,  2152,
   -2683, -2683,   990, -2683, -2683, -2683, -2683, -2683, -2683, -2683,
   -2683, -2683, -2683, -2683, -1562, -2683, -2683,   302, -2683, -2683,
   -2683, -2683,   129, -1780, -2683, -2683, -2683, -1572, -2683, -2683,
   -1049, -1989, -2034, -1325, -2683, -2683,    36, -2683, -1232, -2683,
   -1910, -2683, -2683, -1897, -2683,  -221, -1764, -2055, -2683, -2683,
   -2683, -2683, -2683,  2193, -1946, -1490,  -365,  -542, -1300,  1507,
     946, -2683, -2683,  -536, -2683, -2683, -2683,   -76, -2683, -2683,
   -2683,  1257, -1483, -2683, -2683,   981, -1681,  -885, -2683, -2683,
   -2683,  -266,   836, -1853, -1544, -2683, -2683,  -205, -2683, -2683,
    -146, -2683,  1226, -2683, -2683, -2683,    52, -2683, -2682,  -369,
   -2683, -2683, -2683, -2683, -2683, -2683
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -2103
static const yytype_int16 yytable[] =
{
     427,   428,   864,   570,   431,   803,   693,   421,  1357,  1098,
    1099,  1100,  1669,   429,   394,   247,   756,   547,   759,   880,
    1404,   762,    64,  1655,  2124,  1876,  1622,  2052,   775,   582,
    1048,   678,   610,  1860,  1309,  1061,  1411,  1625,   643,   593,
    1855,  2053,  2103,  1856,   527,  2111,   603,   593,   519,  2104,
    2176,  1723,   809,  1752,  1038,  1232,  1658,  1235,  1148,  1785,
    2007,   677,   593,   873,   874,  1242,  1303,   514,  2244,  2178,
    1970,   392,  2800,   418,  1834,   418,  1144,   658,  2313,   908,
     445,  2043,  2601,  1824,  1171,   544,   976, -2051,  2543,   831,
    2663,  1839,  1312,   216,  2376,  2377,  1340,  2210,  1800,  2392,
    2355,    87,  1634,  1635,  -750,   432,  1540,  1578,  1867,  1945,
    1704,  1808,  1283,  1208,  1935,   958,  1298,  1284,  1706,  1029,
   -1785, -1983, -1989, -1983,  1351,  1157,  1863,   967,  2292,   744,
    1569,  1104,  2137,  1004,  2822,  3091,   919,  1294,  1573,   543,
   -1786,   555,  1006,   217,  2346,  2463,  1330,  2204,   445,  1996,
    1750,   751,  1202,  2592,  2554, -2102,  2187,  2188,  2189,  2374,
     445,  3105,   445,  2190,  2191,   544,   647,   451,  1765,   655,
    1828,  2199,  2138,  1153,   683, -1815,  2639,  1886,  2716, -2051,
    1989,  1373,   742,   218,  2707,   219,   664,   220,   705,  1298,
    1340,  2204,  1054,   874,   749,   221,  2367,  1331,  2667, -2102,
     753,   754,  2030,   755,  1845,   838,  1348,  2024,   760,   761,
    1003,  1003,  1496,   776,  2747,   347,  1719,   569,   786,  2592,
    1602,    21,  1998,   781,  2338,  2356,  1823,  2219,   519,   519,
     519,   957,  1116,  2128,  1158,  2319,  2223,  2334,   527,  2226,
      49,  2247, -2102,  2748,  2749,   524,    78,  1663,   836, -2064,
    2593,   867,  2582, -2102,  -750,   425,   691,    82,  -750,  1781,
     222,  2551,   399,  1782,   783, -1991,  2319,  2478,   812,   813,
     400,   789,  2666,  2975,   459,  1362,   521,   862,   818,   541,
   -1794,  1835,  2205,  2835,   571,   768, -1747,   951,  1693,   664,
     577,   657,  1578, -1766, -1766, -1766, -1766,   798,   951,  1783,
     609,   578,  1145,  2666,  1496,  1363,   641,   471,  1406,  1578,
    1209,   709,  1207,  2477,   643,  2320,  2593,  2378,  1075,  -750,
    2479, -1983, -2007, -2089,   848,   662,   425,  2375,   703,  1332,
     707,  2626,  1381,  -750,  -750,  2211,  1121,   956,    79,   784,
    2313,  2239,  1174,  2240,  1139,  1603,  2322,   858,  2630,    83,
    1329,   475,  3065,   524,  2129,   223,  2242,  1636,   876,   522,
    1497,   480,    50,   790,   552,  1578,  1046,   593,  1240,    22,
    1860,  1897,   951,   552,   787,  1261,  2339,   768,  1578,  2008,
    2435,   552,  1211,  1047,   452,  1720,  1267,   471,  1341,  1578,
     544,  2025,  1578,  2555,  1333,   633,   552,   425,   348,  1946,
    2212,  2694,  1578,   224, -1983, -2102,  1990, -1794,   959, -1747,
   -1357,   804, -1989,  1707, -1357,   663,  -419,  2391,  1064,  2213,
    1999,  2949,   573,  2854, -1792, -2102,  1996,  1887,  1159, -2025,
     399,   475,   599,  1674,  1975,  2550,   524,  2492,   400,   618,
     620,   480,  1677,   826,  1263,   894,   633,   664,   694,   484,
   -1357, -2102,  1497,  2556,  2695,   934,   835,   835,   835,   688,
    1579,  1303,  1975,  2464,  1303,   844,  -748,  -750,  2206,   744,
    2541,  1410,  2901,  1609,  2530,  2415,   716, -2102,  1352,  1007,
   -1989,   855,  1708,  1365,   541,  2935,  1097,   401,  2139,   494,
    2750,   960, -1989,   494, -1989,  2394,  2736,  2175,  2014,   225,
    1868,   810,  1283,   695,  1667,   547,  1936,  1284,  2823,  1342,
    2801,  -755,  2206,  -753,  1563,   494,   519,  1872,   494,  1119,
    1580,  1110,   732,   519,   519,   519,   486,  1123,  1182,   484,
    2354,  1128,   519,   519,   519,  1205,  2248,  2186,   832,   522,
     522,   522,  2534,  2544,  1160,   519,  1637, -2020,   519,   226,
    2717,  1222,  1222,  1222,  1152,  1947,  1003,   519,   519,   519,
     519,   519,  1164,  1777,  1241,   402,  1154,  1267, -1989,  1825,
     868,  2855,  1269,  2650, -2102,   552,  3051,  1282,   489,    88,
    1840,   825,   641,   633,  1572,   547,  2103,  1299,   519,   798,
    2214,   544,   862,  2104,   694,   582,  2426,   633,  1300,   763,
    -755,   523,  -753,  1342,   909,   716,   486,  1264,  1040,  1206,
    1836,  1663,   471,   494,  2802,   393,  -748,   419,  1274,   419,
    -748,   552,  2411,  2709,   494,   611,   494,   227,   403,  1288,
     495,   644,   552,   404,  1829,  1071, -1989,  1639,  2202,  2751,
   -2064,  2737,   839,  2505,  1334,  1579,   733,   840, -1989,   695,
   -1989,  1694,   825,  1584,   547,   401,   475,  2836,   489,  2631,
    1299,  2634,  1579,  1347,   593,  1314,   480,   948,   494,  2673,
    1409,  1300,  1736,  1737,  1738,  1739,  1740,  1741,  1742,  1743,
    1268,  -748,   439,   544,   519,   633,   746,  2309,   953,  2256,
     798,  1041,  1601, -2089, -2102,  -748,  -748,  2330,  1753,   968,
    2227,   552,  2229,  1369,   494, -1860,   552,  1206,  1350,   494,
     495,   463,  -419,  1460, -2102, -1747,  1857,   633,  1579,  -419,
    2736,  1117, -1858, -1747, -1747,  1361, -2025,  2012, -1747,  1682,
     544,  1579,   839,   402,  2696,     3,  2033,   840,  2580,  2668,
    2252,   951,  1579,   811,   835,  1579,   454,  2697,   405,  1607,
    1608,   835,   835,   835,   484,  1579,   547,  2698,  1507,  1022,
     835,   835,   835,  1227,  2511,  1227,   536,  1063,   425,   688,
    1732,  2782,   717,   835,   825,  1227,   835,  2131, -1862,   718,
     833,   523,   523,   523,  2808,   835,   835,   835,   835,   835,
    1586,  1592,  2282,  2283,  1399,  1907,   403,  1527,  2784,  1528,
      -5,   404, -1856,  2357,  1159, -1853,   856,  1049,  2263,  2738,
    2358,  2785,  2343,   471,  1505,  1612,   835,  2786, -1357, -1357,
     768,  1303,  2727,  2472,  -419,  1418,   768,   522,  2264,  -748,
   -2083,   486,  2739,  1885,   522,   522,   522,  1397,   471,  1144,
    1842,  2809,   664,   522,   522,   522,  1228,   919,  1228,  2810,
    2610, -2102,  1238,  2794,  2009,  1461,   522,   475,  1228,   522,
    2524,   745,    14,   370,  2115,  2737,  2617,   480,   522,   522,
     522,   522,   522,  1469,  1485, -2102,   395, -2102, -1696,  1754,
    2010,  1401,   475,   489, -1864,  1261,   768,  1453,   887,   439,
    1857,  1938,   480,  1940,  2369,  2041,  1506,  1023,   650,   522,
     494,   717,  1602, -2102,  1040,   471,  1236,   644,   718,  1149,
    1182,   536,   835,   544,  2428,   216,   746,  1470,  2512,   204,
    1160,   547,   710,   712,   519,   902,   494,  1471,   633,   494,
     471,  2241,  1238,  1042,   463,   495,  1697,  2811,  2427,  1978,
    2813,  1492,  1493,  1583,  1508,  2370, -2102,  1616,  2444,   475,
    2445,  2103,   471,  1516,  2787,   484,   694,  1360,  2104,   480,
      15,   371,  1586,   455, -2102,   217,  2264,  3042,  1618,  2844,
    1906,  1368, -2102, -2102,   475,  2622,   628,   825,   633, -2102,
     484,   531,  1376,  1745,   480,  1293,  1295,  1041,  1746,   494,
   -2102,  1467,  2009,  1076, -2102,   522,   475,  1529,   552, -2005,
    2031,  1238,   585,   537,   372,   218,   480,   219,   399,   220,
     -35,   695,   789,  1403,  1402,  1473,   400,   221,  2010,  1288,
   -2102,  2513,   614,   888,   948,  1040,    17,  1603,  1698,     4,
       5,  2359,   486,  2738,  2649,   614,  1416,   399,   373,   494,
    1703,   593,   951,  2998,  1623,   400,  2727,   484,  2116,   859,
     494,  1462,   396,   768, -2083,  1349,  2739,   486,  1908,  1909,
    1910,  1077,  2344,  1602, -1696,  1145,  2898,  2514, -2005,   523,
    2999,  1962,   484,  2238,  1129,   552,   523,   523,   523,   768,
    1530,   717,   222,  3001,   489,   523,   523,   523,  1229,  3002,
    1229,  1261,  1474,   494,   484,  1468,   494,   884,   523,   494,
    1229,   523,  1843,  1238,   790,  1512,  2515,  1726,  1041,   489,
     523,   523,   523,   523,   523,  1150,  1463,  2265,  1130,   903,
    1896,  1983,  2623,   494,   486,  3017,  1911,  1124,  1131,  2360,
     494,   586,   587,  1385,  2042,   471,   495,  1760,  1040,   494,
   -2102,   523,   374,   633,  1400,   393,   532,  1760,   533,   486,
     588,   205,   835,   471,  2361,  2905,  2362,  1407,  1587,   494,
    2906,   495,  1050,  2704,  2035,  1512,   934,   633,   494,  2501,
    2502,   486,  2685,   633,  2145,  2416,   489,   223,  1926,   475,
    2908,  1889,   860,  1881,   494,   630,   631,  2319,  1603,   480,
    1469,  2911,  1641, -1864,  1943,  1642,  1477,   475,  1859,  1051,
    2525,   489,  1643,  1644,  1795,  1387,  2146,   480,  3028,  1799,
     589,  1802,   633,  1388,  1807,  1809,  1132,  1812,   732,   553,
    2745,  1041,   494,   489,  2624,   224,  3003,  -591,   495,  1042,
     633,  1700,  1010,   401,  1470,   522,  2221,   523,  3047,  2655,
    2317,  1626,  1817,   839,  1471,   841,  2964,   494,   840, -1983,
    2965,  1011,  1645,   495,   842,  2265,  -591,  -591,  2745,  1472,
     633,   393,   401,  3049,   552,  1912,  1913,  2324,   552,   494,
    1914,   393,  2684,    25,  2572,   495,  2689,   484,  1017,  2860,
    1833,   552,  3078,  1040,  1691,  1032,  1319,  2938,  2633,  1320,
    1321,  1904,    26,  1133,  2417,   484,  1370,  1923,  1719,   519,
     519,  2318,  2646, -2100,  2866,  2686,   519,   783,   519,  1627,
    2690,   402,  1717,    27,   879,  1861,  2319,  1718,  1873,  1875,
    1862,   225,  2481,   552,  1040,  1873,  1927,  1873,   519,  1646,
    1018,  1701,  1473,  2691,  2604,  2605,  -745,  1089,  1869,  1939,
     402,  1941,   733,   519,  2804,  1134,  2900,  1899,  2319,  2939,
    1042,  1764,  1949,  2531,   486,  1431,  1904,  2636,  1774,  1774,
     556,  1647,  1916,    38,  1784,   621,  1041,  1041,   557,    28,
    3081,   226,   486,  1432,   403,   552,   552,   552,    31,   404,
    2710,  -591,   784,  1648,  2222,  1818,  2220,   547,  2713,  2559,
    2560,  2561,  1380,  1389,   438,  2120,  2326,  1135,   951,   425,
    3056,  2973,  2134,   403,  1626,  2620,   489,  1041,   404,  1474,
    -591,  1857,  1475,  1476,  1433,  2011,  2868,   418,  2977,  1819,
    1925,   729,   622,   768,   489,  1390,  1934,  1964,  2328,  2805,
     623,  2806,  1937,  2962,  3018,   552, -2020,  1649,  3057,   743,
    2679,  2792,  3037,  2294,  1986,   730,  1904,  1391,   547,   227,
    1997,  2621,   494,  1057,    39,  2968,   558,  1965,   495,   921,
     922,  2197,  2197,  1042,  -357,   425,  2969,  1720,  1122,  1735,
    2981,  2982,  1627,   519,  1650,  1974,   495,   523,   769,  3020,
     770,   -21,  -357,  3021,  3022,  3086,  -745,  1763,  3038,   216,
    -745,  3082,  2020,  2702,  1651,     4,     5,  2940,  3087,   923,
     924,  2703,  2941,  -591,  1392,  2584, -2040,  2342,  2983,  2487,
    2488,  1726,  3045,  1477,  1058,  1985,  1928,  1059,   624,  2562,
    1626,  3088,  1517,  -357,  2234,  2182,  1518,   835,   835,  2197,
    2197,  2196,  2196,  2563,   835,  1859,   835,  1112,  2952,   217,
    2829,  2054,  3045,  1227,  1929,    43,  1930,  2724,   839,  2953,
    1870,  -745,  1277,   840,  2183,   425,   835,    45,  1554,  1903,
    1555,  1556,  1434,  1517,  2250,  -745,  -745,  1518,  1322,  1323,
    1393,   835,  2954,  1435,  1652,  2198,  2113,  1308,   541,   218,
    2585,   219,  2123,   220,  2295,    46,  1318,  1383,  1627,  1319,
    2136,   221,  1320,  1321,   559,  1324,  1325,  1653,  1384,  2196,
    2196,  -357,  2955,  2968,  1113,  1114,  2141,  2368,  1042,  1042,
     522,   522,    54,  1924,  2969,  1951,  2830,   522,  1316,   522,
    2564,  2565,  2566,  3089,  1903,  1040,  1228,  2708,  2217,   -21,
    2831,  2832,  2833,  1691,    55,  -357,  2567,  1259,   552,   522,
    1244,  1904,  2224,  2225,  2192,  2193,  3090,  2009,  2253,  1042,
     839,    56,  -591,  1582,   522,   840,   222,  2973,    60,  1519,
    1360,  1520,   839,  1260,  -357,  3075,  2336,   840,  2405,  1654,
    2613,  -357,  1354,  2010,  2254,  2335,  3080,  2615,  2616,  1394,
    1184,  1185,  -357,  1436,  1437,  3058,   552,    62,   552,  3059,
    3060,  2218,  2725,  2015,  2974,    40,    68,  2201,  1438,  -745,
    1439,   835,   782,    63,   839, -2040,   782,   839,  1041,   840,
    2660,  2968,   840,    66,  1903,  2661,  1041,    70,  1040,  3053,
    3055,    69,  2969, -1819,  1186, -1819,  1187,  2262,  1188,    74,
     643,   935,   552,   936,   552,  3061,   977,  2845,  2846,  2568,
    2203,  3085,  1213,  1216,  1219,  2380,  2724,  1610,  3025,  3026,
     839,   223,  3062,  3063,    72,   840,   839,  1249,  1250,  1251,
    3095,   840,    73,  1189,  1190,  1191,  1080,  1243,  1081,   769,
    2181,   770,  2184,    36,    37, -2083,   978,   979,   980,   981,
     982,  1247,  1248,  3098,   522,   896,   897,   898,   899,  3109,
     530,    49,  -357,  -357,   551,   552,   643,  1440,  1988,   224,
    1261,  1041,  1624,   551,   595,  1224,  1225,  -357,  2281,  -357,
    1803,   551,  1804,    50,   615,   983,   984,   203,  1519,   642,
    1520,  1192,   653,  1193,   653,   661,   680,   615,   210,  1588,
    1194,  2301,  1590,  2302,  1195,  2395,   245,  2396,  1593,   211,
    2022,  2022,  1597,   215,   653,  1441,   248,  2805,  1599,  2806,
     249, -2083,   523,   523,  2932,   252,  2933,  2393,   358,   523,
    2726,   523,  1186,   378,  1187, -2083, -2083, -2083,  1229,   405,
     388,  1322,  1323,  2727,  2341, -1765, -1765, -1765, -1765,  2065,
     422,   523,   834,  2728,   837,   757,  2381,   757,   423,   425,
     757,  2725,   430,   435,   432,   225,   523,   440,  1324,  1325,
     442,  1527,  1186,  1528,  1187,   443,  -357,   453,   393,  1903,
    2407,   575,  2408,   494,   714,   713,  2365,   596,   604,  2366,
     739,   648,   740,  1196,   741,  1197,  2373,   726,   728,   985,
     986,   987,   988,   989,   990,   991,   992,   993,   748,  2467,
     758,  2462,   763,   664,   779,   226,   777,   792,  2469,   797,
    1042,   494,   795,  2386,  -357,   801,   798,   821,  1042,   805,
     843,   419,  1289,  1290,  1291,  1292,   806,   552,   778,   552,
     807,  1878,   847,  1880, -2083,   814,  1882,  1883,  1884,  1670,
    2389,  1985,  1888,   815,   530,  2323,  2325,  2327,  2329,   816,
     817,   849,   643,  1900,  1901,   819,   826,   827,   865,   829,
     871,   830,   877,   879,   904,   551,   881,   552,   883,   885,
     906,   900,   949,   966,   953,   969,   970,   972,   974,  1012,
    1015,  1013,  1014,   227,  1025,  1020,   523,  1027,  1043,  3052,
    1030,  1036,  1034,   664,  1053,  1055,  1069,  2423,  1727,  1065,
    1079,  1072,  1085,  1042,  1083,  1093,  1087,  1090,  2537,  1095,
   -2083,   551,  1094,  1109,  1097,  1102,  2542,   768,  2986,  2726,
     552,  1107,   551,  1120, -2083, -2083, -2083,  1124,  1126,  1127,
    1140,  1141,  2727,  1142,  1166,  2575,  2576,  1156,  1165,  1168,
    1183,  2577,  2728,  1206,  2079,   994,  1212,  1245,   464,  1239,
    2579,  1220,  1221,  1231,  1252,  1254,  2443,   524,  1269,  1265,
     995,  2987,   888,  2988,  1304,   466,   887,  1315,  1328,   959,
    1307,  1346,  1353,   633,  1355,  1374,  1378,   661,  1366,  1379,
    1386,  1371,   445,  1405,  1412,  1420,   643,  1421,  1426,  2600,
    1422,   551,  1427,  1428,  1430,  2989,   551,  1198,   541,  1455,
    1457,  1459,  1483,  1466,  1486,  1491,  2476,  2608,  2575,  1502,
    1504,  1509,  1510,  2483,  2484,  2485,  2486,  1487,  2990,  1534,
    1570,  2491,  2406,  1571,  1574,  1575,  1589,  1591,  1594,  1576,
    1595,  1596,  1598,  1600,  1611,  1613,  1577,  1617,  1621,  1620,
    2083,  1632,  1657,  1664,  1659,  1665,  2991,  1849,  1199,  1852,
    1671,  1672,  2389,  2504,  2936,  1341,  1675,  1678,  1679,  1692,
    1200,  1705,  2549,  1712,  1714,  1715,  1728,  1729,   467,   468,
     469,  2467,  1756,   757,  1733,  1766,  2637,   470,  1767,  1769,
    1985,  1768,  1778,  1787,  1788,  1800,  1789,  2431,  1810,  1791,
    1813,  1815,  1261,  1821,  1831,  2434,  2675,  1846,  2436,  1838,
    1853,  1865,  1866,  1870,  2467,  2542,  1602, -1793,  1627,  1603,
    1170,  1626,  1953,  1963,  1959,  1720,  2558,   552,  1971,   552,
   -1788,  1972,  1975,  1719,  1977,  1982,  1890,  1891,  2087,  2034,
    1979,  2578,  2029,   851,  2542,   476,   477,   478,  2992,  2036,
     494,   479,  1237,  2044,  2038,  2583,  2048,  2135,  2054,  2049,
    1917,  1918,  2119,  2055,  2121,  2179,  2125,  2180,  2993, -1740,
    2799, -1791,  2228,  2230,  2050,  2185,  2236,  1964,  1965,  2255,
    1985,  2242,  2257,  2258,  1998,  1999,  2272,  2025,  2284,  2024,
    2288,   643,  2290,  2994,   482,  2304,  2412,  2413,  2306,  2311,
    2312,  1950,  2330,  2332,  2345,  1952,  2337,  2347,  2421,  2349,
    2372,  2352,  2869,   399,  2995,  2382,  2384,  2205,  2409,  2410,
    2414,  2500,  2420,  2383,  2422,  2429,  2430,  2295,  2294,  2451,
    2457,  2452,  1237,  2496,  2996,   852,  2861,  2459,  2493,  2508,
    2498,  1791,  2470,  2997,  2433,  2448,  2499,  2643,  2506,  2447,
    2454,  2526,  2535,  2003,  2004,  2538,  2540,  2587,  2467,  2581,
    2573,  2588,  2590,  2597,  2598,  2602,  2599,  2606,  2614,  2654,
    2627,  2628,  2644,  2641,   485,  2642,  2512,  2680,  2676,  2872,
    2682,   530,  2687,  2507,  2670,  2719,  2672,  2714,  2712,  2722,
    2720,  2721,  2815,  2821,  2825,  2828,  2824,  2834,   551,  2837,
    2841,  1237,  2746,  2849,  2656,  2838,  2850,  1863,  2711,  2862,
    2865,  1857,  1369,  2795,  2983, -1864,  3023,  3072,  3029,  3031,
    3073,  3033,  3099,  3102,  3103,    16,  3108,    85,  2542,    81,
      86,  1501,    77,   487,   488,    76,   417,   437,   747,  1841,
    1495,   530,  1827,  2718,  1143,  1482,  2658,  2609,  2494,  2482,
    2490,  1118,  2607,  2495,  2755,  2793,  2475,  2826,  2798,  2723,
    2839,  2099,  2503,  1101,  2783,  2814,  3097,  2456,  2817,  2818,
    2819,  2820,  2674,  2678,  2867,   551,  2450,  2896,  3094,  3101,
     490,  3077,  2640,  2856,  2857,  2946,  2947,   450,  1944,   202,
    2791,  1526,  1864,  1615,   846,  1619,  2842,  2843,  1942,  2404,
    2402,   491,  1258,  1237,   857,   574,   492,  2853,   892,  1640,
    1297,  1668,  2858,  1948,   493,  1327,   494,  1305,   950,  2235,
    1969,  1339,  2246,  1680,  2245,  1987,  1716,  2261,  1994,  2271,
    1171,  2269,  2040,  1377,  2013, -2102,   973,  1744, -2102,   681,
    2023,  1775,  2287,  2659,  2945, -2102, -2102,  1776,  2693,  1005,
    1044,  1851,  1848,  1895,  3030,  1780,  1045,  1364,  1281,  1068,
    1279,  1893,  2293,  2280,  2278,  2509,  2442, -1983,  2440, -1983,
    2877,  2878,  2879,  2880,  2881,  1922,  2300,  2883,  2884,  2885,
    2886,  2887,  2888,  2889,  2890,  2891,  2892,  2893,  1985,  1920,
    2895,  2016,  2017,  1311,  2897, -2102,  1256,  2018,  2019,  1033,
     615,  2232,  3074,  2351,  1465,  1902,  3076,  1734,  2200,  2907,
    2859,  2909,  1832,  1830,   820,  2910,  2461,  2586,  2733,  2744,
    2653,   796,  3046,  1981,  2142,  1490,  2174,  1958,  2870,  1758,
    1806,  2652,  2266,  2267,  2816,  3066,     0,     0,     0,  2143,
    1146,     0,     0,     0,     0,  2273,  2274,     0,     0,  2827,
    2144,     0,     0,     0,     0,     0,     0,     0,  2275,  2276,
    2840,     0,     0,     0,   551,     0,     0,  3110,   551,     0,
       0,     0, -2102,     0,     0,     0,     0,     0,     0,     0,
    1368,   551,     0,     0,   530,     0,     0,  1693,     0,     0,
       0,     0,     0,     0,  2863,     0,     0,  2864,     0,     0,
       0,     0,  2971,  2972, -2102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2980,
     519,   519,     0,   551,  2984,  2985, -2102,     0,     0,     0,
    2871,     0,     0,  2873,  2874,  2875,  2876,     0,     0,     0,
       0,  3032,   519,  2882,  3034,  3035,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2894,     0,   541,     0,
       0,   519,     0,     0,     0,     0,     0, -1983,  2904,     0,
       0,     0,     0,     0,     0,   551,   551,   551,  3050,     0,
   -2102,     0,     0,     0,     0,     0,     0,     0,  1174,     0,
     519,     0,     0,  2912,  2913,  2914,  2915,  2916,  2917,  2918,
    2919,  2920,  2921,  2922,  2923,  2924,  2925,  2926,  2927,  2928,
    2929,  2930,     0,     0,     0,     0,     0, -2102,     0,  2937,
       0,     0,     0,     0,     0,   541,     0,     0,     0,     0,
       0,     0,     0,  2950,     0,   551,     0, -2102,  2398,  2399,
    2400,     0,     0,     0,     0,  2951,     0,     0,     0,     0,
   -1983,     0,     0,     0,     0,  1796,  2145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2966,  2967,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   462,  2979,     0,   463,     0,     0,     0,  2146,     0,
       0,     0,     0,     0,     0,  3019,     0,     0,  -241,     0,
       0, -2102,     0, -2102, -2102,     0, -1051,     0,     0,     0,
       0, -1051,     0,  3036, -1051,     0,     0, -2102,     0,     0,
       0, -1051, -1051,     0,     0,     0,     0,     0,  2437,  2438,
       0,     0,     0,     0,     0,  3048,     0,     0,     0,     0,
   -2102,     0,     0, -1051,     0, -1051,     0,     0,   835,   835,
       0,     0,     0,     0,     0,  2147,     0,     0,     0,     0,
    2148,     0,   464,   615,  3079,     0,     0,     0,     0,     0,
     835, -1051,     0,     0,     0,     0,     0,     0,     0,   466,
       0,     0,  3093,  3093,     0,     0,     0,     0,     0,   835,
       0,     0,     0,     0,     0,  3096,  2149,     0,     0,     0,
       0,     0,     0,     0,  2150,  1370,     0,     0,     0,     0,
       0,     0, -2102,     0,  3107,     0,  2151,     0,   835,     0,
       0,     0,   757,  1282,     0,     0,     0,     0,     0,     0,
       0,   522,   522,     0,     0,     0,     0,     0,   551,     0,
       0,     0,     0,   633,     0,     0,     0,     0, -1051,     0,
    1694,     0,     0,   522,  2152,     0,     0,     0,     0,     0,
       0,     0,     0,  2153,     0,     0,     0,     0,     0,     0,
       0,     0,   522,     0,  -238,     0,     0,     0,     0,     0,
   -1051,     0,   467,   468,   469,     0,   551,     0,   551,     0,
       0,   470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   522, -1051,   471,     0,     0,     0,     0,     0,     0,
    2154,     0,     0,  2155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   551,     0,   551,     0,   472,     0,     0,     0,
       0,     0,   473, -1051,   474,     0,     0,   475,     0,   476,
     477,   478,     0,     0,     0,   479, -1051,   480,     0,     0,
       0,     0,     0,   481, -1051,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1051,     0,   551,     0,     0,   482,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   615,     0,
       0,     0,     0, -1051,     0,     0,     0,   483,     0,     0,
       0,     0,     0,     0,     0,     0, -1051,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   757,     0,     0,     0,
       0,     0,     0,     0,     0,   484,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   523,   523,     0,     0, -1051,   485, -1051,
   -1051,     0,     0,   615,   615,   615,     0,     0,     0,     0,
     615,   615,     0, -1051,     0,   523,   615,   615,   615,     0,
     615,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   523,     0, -1051,     0,     0,     0,
       0,     0,   486,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   487,   488,     0,
       0,     0,     0,   523,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   615,     0,     0,     0,     0,     0,
       0,     0,     0,   615,   615,   615,   615,   551,   463,   551,
       0,     0,     0,     0,   489,     0,     0,    90,     0,    91,
       0,    92,     0,     0,   490,     0,    93,     0, -1051,     0,
       0,     0,     0,     0,    94,     0,     0,     0,     0, -1051,
       0,     0,     0,   757,     0,   491,     0,   551,     0,     0,
     492,     0,     0,     0,     0,     0,     0,     0,   493, -1051,
     494,     0,     0,     0,     0,     0,   495,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,   464,     0,     0,     0,
       0,    98,     0,     0,     0,    99,     0,     0,     0,     0,
     551,     0,     0,   466,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -793,  2316,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,  -973,   104,     0,  -973,     0,     0,     0,
       0,     0,     0,     0,   105,  -793,     0,  -793,  -793,  -793,
    -793,  -793,  -793,  -793,  -793,  -793,     0,  -793,  -793,  -793,
       0,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,
    -793,   106,     0,     0,     0,     0,  -793,   445,     0,     0,
       0,  -793,     0,   107,     0,  -793,     0,     0,   108,     0,
       0,     0,     0,     0,     0,     0,   467,   468,   469,     0,
       0,     0,     0,     0,     0,   470,     0,     0,     0,     0,
       0,     0,     0,     0,  -973,     0,   109,   471,     0, -1989,
       0,     0,     0,   110,     0,     0,   111,   112,     0,     0,
       0,  -973,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,   114,     0,   115,     0,     0,   116,
       0,     0,   615,  -793,     0,     0,     0,     0,     0,     0,
       0,   475,     0,   476,   477,   478,     0,     0,     0,   479,
       0,   480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   551,     0,   551,
       0,   117,     0,     0,     0,     0,   118,     0,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   120,     0,
    2419,  -793,   482,     0,     0,     0,  -793,  -793,  -793,     0,
    -793,  -793,  -793,  -793,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -973,  -973,  -973,   121,     0,     0,
       0,     0,     0,  -973,     0,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,  -973,     0,     0,     0,   484,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
     124,   125,     0,     0,     0,     0,     0,     0,  -973,     0,
       0,   126,   485,     0,  -973,     0,  -973,     0,     0,  -973,
       0,  -973,  -973,  -973,   127,     0,   128,  -973,   757,  -973,
       0,     0,     0,   129,     0,  -973,     0,   130,     0,     0,
       0,     0,     0,     0,  2474,  2474,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   486,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -793,   133,
    -973,   487,   488,     0,     0,  -973,     0,     0,   134,     0,
       0,     0,     0,   135,   136,     0,     0,     0,     0,  -973,
     137,     0,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,     0,     0,     0,     0,     0,   489,     0,
       0,     0,     0,     0,     0,     0,  -793,  -973,   490,     0,
       0,     0,     0,     0,     0,     0,  -793,     0,     0, -1989,
       0,     0,     0,     0,   141,     0,     0,     0,     0,   491,
       0,   142,     0,     0,   492,   757,   143,     0,     0,     0,
    -973,     0,   493,     0,   494,     0,     0,     0,     0,     0,
     495,     0,   757,     0,   757,   757,     0,     0,  -793,     0,
     757,     0,     0,     0,   144,     0,     0,     0,     0,   145,
     146,     0,     0,   530,     0,     0,     0,     0,  -973,     0,
       0,     0,     0,     0,  -973,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -973,
    -973,     0,     0,     0,     0,    90,     0,    91,     0,    92,
       0,     0,   757,   757,    93,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,     0,     0,   757,     0,     0,
    2612,  2612,     0,     0,     0,     0,  -973,     0,  2612,  2612,
    2619,     0,     0,     0,     0,     0,  -973,     0,     0,     0,
       0,     0,   530,  -973,     0,     0,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -973,    97,     0,
       0,     0,  -973,     0,     0, -1989,     0,     0,     0,    98,
    -973,     0,  -973,    99,     0,     0,     0,     0,  -973,     0,
     757,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,   530,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   757,     0,     0,   757,     0,
     101,     0,     0,   757,   757,     0,     0,   102,     0,     0,
     103,     0,   104,   530,     0,     0,     0,     0,     0,     0,
       0,     0,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   757,     0,     0,     0,     0,     0,     0,
       0,  2715,     0,     0,     0,     0,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   757,
       0,   107,     0,     0,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,     0,     0,     0,     0,     0,
       0,   110,     0,     0,   111,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,   114,     0,   115,     0,     0,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   757,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,     0,     0,   118,     0,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,    90,     0,    91,
       0,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,   615,     0,    94,     0,     0,   615,     0,     0,
       0,     0,     0,     0,     0,   121,     0,   757,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,   123,   124,   125,
       0,    98,     0,     0,     0,    99,     0,     0,     0,   126,
       0,     0,     0,     0,  1683,     0,     0,     0,     0,   100,
       0,     0,   127,     0,   128,     0,     0,     0,     0,     0,
       0,   129,     0,   615,     0,   130,     0,   615,     0,     0,
       0,     0,   101,     0,   131,     0,     0,     0,     0,   102,
       0,     0,   103,     0,   104,     0,   132,     0,     0,     0,
       0,     0,     0,     0,   105,  1684,     0,   133,     0,     0,
       0,     0,     0,     0,     0,     0,   134,     0,     0,     0,
       0,   135,   136,     0,  1330,     0,     0,     0,   137,     0,
     138,   106,   464,     0,     0,     0,     0,     0,     0,     0,
     139,     0,     0,   107,     0,     0,     0,     0,   108,   466,
       0,     0,     0,     0,   140,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   141,     0,     0,  1331,   109,     0,     0,   142,
       0,     0,     0,   110,   143,     0,   111,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0, -1207,     0,   114,     0,   115,     0,     0,   116,
       0,     0,   144,     0,     0,     0,     0,   145,   146, -1207,
      90,     0,    91,     0,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   467,   468,   469,     0,   118,     0,   119,     0,
       0,   470,     0,     0,     0,     0,     0,   462,   120,     0,
     463,    95,    96,   471,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,   121,    99,     0,
       0,     0,  1685,     0,     0,     0,     0,  1332,     0,     0,
     122,     0,   100,     0,     0,     0,     0,   475,     0,   476,
     477,   478, -1207, -1207, -1207,   479,     0,   480,     0,     0,
       0, -1207,     0,     0,     0,   101,     0,     0,     0,   123,
     124,   125,   102, -1207,     0,   103,     0,   104,   464,     0,
       0,   126,     0,     0,     0,     0,     0,   105,     0,     0,
     465,     0,     0,     0,   127,   466,   128,     0,   482,     0,
       0,     0,  1333,   129,     0,     0,     0,   130,     0,     0,
       0,     0,     0,     0,   106,     0,   131, -1207,     0, -1207,
   -1207, -1207,     0,     0,     0, -1207,   107, -1207,   132,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,   133,
       0,     0,     0,     0,     0,   484,     0,     0,   134,     0,
       0,     0,     0,   135,   136,     0,     0,     0,     0,   109,
     137,     0,   138,     0,     0,     0,   110,     0, -1207,   111,
     112,     0,   139,     0,     0,     0,     0,     0,   485,     0,
     113,     0,     0,     0,     0,     0,  1078,   114,     0,   115,
       0,     0,   116,     0,     0,     0,     0,     0,   467,   468,
     469,     0,     0,     0,   141,     0,     0,   470,     0,     0,
       0,   142,     0,     0,     0, -1207,   143,     0,     0,   471,
       0,     0,   486,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,   487,   488,   118,
       0,   119,     0,     0,   144,     0,     0,     0, -1207,   145,
     146,   120,   472,     0,     0,     0,     0,     0,   473,     0,
     474,     0,     0,   475,     0,   476,   477,   478,     0,     0,
       0,   479,     0,   480,   489,     0,     0,     0,     0,   481,
     121,     0,  1686,     0,   490,     0,     0,   254,     0,   255,
       0,     0, -1207,   122,   256,     0,     0,     0,     0,     0,
       0,     0,   257,     0,     0,   491,     0, -1207, -1207,     0,
     492,     0,     0,     0,   482,     0,     0,     0,   493,     0,
     494,     0,   123,   124,   125,     0,   495,     0,     0,     0,
       0,     0,     0,   483,   126,     0,   258,   259,     0,     0,
       0,     0,     0,     0, -1207,     0,     0,   127,   260,   128,
       0,     0,  1334,     0, -1207,     0,   129,     0,     0,   261,
     130,   484,     0,   262,     0,     0,     0,     0,     0,   131,
       0,     0,     0,     0,     0, -1207,     0,   263,     0,     0,
   -1207,   132,     0,     0,     0,     0,     0,     0, -1207,     0,
   -1207,     0,   133,     0,   485,     0, -1207,     0,     0,     0,
     264,   134,     0,     0,     0,     0,   135,   136,     0,     0,
     265,     0,   266,   137,     0,   138,     0,     0,     0,     0,
       0,     0,     0,   267,     0,   139,   268,   269,   270,   271,
     272,   273,   274,   275,     0,   276,   277,   278,   486,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
       0,     0,     0,   487,   488,     0,     0,   141,     0,     0,
       0,   290,     0,     0,   142,     0,   291,     0,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     489,     0,     0,     0,   292,     0,     0,   144,     0,     0,
     490,   293,   145,   146,   294,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   296,     0,     0,     0,     0,
       0,   491,   297,     0,   298,     0,   492,   299,     0,     0,
       0,     0,     0,     0,   493,     0,   494,     0,     0,     0,
       0,     0,   495,     0,     0,     0,     0,     0,     0,     0,
       0,   462,     0,     0,   463,     0,     0,   914,   915,   916,
       0,     0,     0,     0,     0,   917,     0,     0,     0,   300,
       0,     0,     0,     0,   301,     0,   302,     0,     0,     0,
       0,   462,     0,     0,   463,     0,   303,   914,   915,   916,
       0,     0,     0,     0,     0,   917,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   918,     0,
       0,     0,     0,     0,     0,   304,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   305,     0,
       0,     0,   464,     0,     0,     0,     0,     0,   918,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   466,
       0,     0,     0,     0,     0,     0,     0,   306,     0,     0,
       0,     0,   464,     0,     0,     0,     0,     0,     0,   307,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   466,
       0,     0,     0,     0,   308,     0,     0,     0,     0,     0,
       0,   309,     0,     0,     0,   310,     0,     0,     0,     0,
       0,     0,     0,     0,   311,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   312,   919,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   313,   920,     0,
       0,     0,     0,     0,     0,     0,   314,     0,     0,     0,
       0,   315,   316,     0,     0,     0,     0,   919,   317,     0,
     318,     0,   467,   468,   469,     0,     0,     0,   920,     0,
     319,   470,     0,     0,     0,     0,     0,   921,   922,     0,
       0,     0,     0,   471,   320,     0,     0,     0,     0,     0,
       0,     0,   467,   468,   469,     0,     0,     0,     0,     0,
       0,   470,   321,  1310,     0,     0,     0,   921,   922,   322,
       0,     0,     0,   471,   323,     0,   472,   923,   924,     0,
       0,     0,   473,     0,   474,     0,     0,   475,     0,   476,
     477,   478,     0,     0,     0,   479,     0,   480,     0,     0,
       0,     0,   324,   481,     0,     0,   472,   923,   924,     0,
       0,     0,   473,     0,   474,     0,   925,   475,     0,   476,
     477,   478,     0,   926,     0,   479,     0,   480,   927,     0,
       0,     0,     0,   481,     0,     0,   928,     0,   482,     0,
       0,     0,     0,   929,     0,     0,   925,     0,   930,     0,
       0,     0,     0,   926,     0,     0,     0,   483,   927,     0,
     462,     0,     0,   463,     0,     0,   928,   931,   482,     0,
       0,     0,     0,   929,     0,     0,     0,     0,   930,     0,
       0,     0,     0,     0,     0,   484,     0,   483,     0,     0,
     462,     0,     0,   463,     0,     0,     0,   931,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   484,     0,     0,   485,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,     0,   485,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,   486,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,   487,   488,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,   486,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   932,     0,   933,     0,   934,   487,   488,   935,
       0,   936,   937,   938,   489,     0,   939,   940,     0,     0,
       0,     0,     0,     0,   490,     0,     0,     0, -2102,     0,
       0,     0,   932,     0,   933,     0,   934,   462,     0,   935,
     463,   936,   937,   938,   489,   491,   939,   940,     0,  1382,
     492,     0,     0,     0,   490,     0,     0,     0,   493,     0,
     494,   467,   468,   469,     0,     0,   495,     0,     0,     0,
     470,     0,   347,     0,     0,   491,     0,     0,     0,     0,
     492,     0,   471,     0,     0,     0,     0,     0,   493,     0,
     494,   467,   468,   469,     0,     0,   495,     0,     0,     0,
     470,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   471,     0,     0,   472,     0,     0,   464,     0,
       0,   473,     0,   474,     0,     0,   475,     0,   476,   477,
     478,     0,     0,     0,   479,   466,   480,     0,     0,     0,
       0,     0,   481,     0,     0,   472,     0,     0,     0,     0,
       0,   473,     0,   474,     0,     0,   475,     0,   476,   477,
     478, -2102,     0,     0,   479,     0,   480,     0,     0,     0,
       0,     0,   481,     0,     0,     0,     0,   482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   483,     0,     0,     0,
       0,   462,     0,     0,   463,     0,     0,   482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   484,     0,   483,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   467,   468,
     469,   462,     0,     0,   463,     0,     0,   470,     0,     0,
       0,     0,     0,     0,   484,   348,     0,   485,     0,   471,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   464,     0,     0,     0,     0,   485,     0,     0,
       0,     0,   472,     0,   616,     0,     0,     0,   473,   466,
     474,   486,     0,   562,     0,   476,   477,   478,     0,     0,
       0,   479,     0,   480,     0,     0,   487,   488,     0,   481,
       0,     0,   464,     0,     0,     0,   462,     0,     0,   463,
       0,   486,     0,     0,   689,     0,     0,     0,     0,   466,
       0,     0,     0,     0,     0,     0,   487,   488,     0,     0,
       0,     0,     0,   489,   482,     0,     0,     0,     0,   563,
       0,     0,     0,   490,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   483,     0,     0,  1383,     0,     0,     0,
       0,     0,     0,   489,   491,     0,     0,  1384,     0,   492,
       0,     0,     0,   490,     0,     0,     0,   493,   633,   494,
       0,   484,   467,   468,   469,   495,     0,   464,     0,     0,
       0,   470,     0,     0,   491,     0,     0,     0,     0,   492,
       0,     0,     0,   471,   466,     0,     0,   493,     0,   494,
       0,     0,     0,     0,   485,   495,     0,     0,     0,     0,
       0,     0,   467,   468,   469,     0,     0,     0,     0,     0,
       0,   470,     0,     0,     0,     0,   472,     0,     0,     0,
       0,     0,   473,   471,   474,     0,     0,   475,     0,   476,
     477,   478,     0,     0,     0,   479,     0,   480,   486,     0,
       0,     0,     0,   481,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   487,   488,     0,   472,     0,     0,     0,
       0,     0,   473,     0,   474,   462,     0,   475,   463,   476,
     477,   478,     0,     0,     0,   479,     0,   480,   482,     0,
       0,     0,     0,   481,     0,     0,     0,   467,   468,   469,
     489,     0,     0,     0,     0,     0,   470,   483,     0,     0,
     490,     0,     0,     0,     0,     0,     0,     0,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   482,     0,
       0,   491,     0,     0,     0,   484,   492,     0,     0,     0,
       0,     0,     0,     0,   493,     0,   494,   483,     0,     0,
       0,   472,   495,     0,     0,     0,   464,   473,     0,   474,
     462,     0,   475,   463,   476,   477,   478,     0,   485,     0,
     479,     0,   480,   466,     0,   484,     0,     0,   481,     0,
       0,     0,     0,     0,     0,   462,     0,     0,   463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   485,     0,
       0,     0,   486,   482,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   487,   488,     0,
       0,     0,   483,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   486,     0,     0,     0,     0,     0,   466,     0,
     484,     0,     0,     0,   489,     0,   464,   487,   488,     0,
       0,     0,     0,     0,   490,     0,   467,   468,   469,     0,
       0,     0,     0,   466,     0,   470,     0,     0,     0,     0,
       0,     0,     0,   485,     0,   491,     0,   471,     0,     0,
     492,     0,     0,     0,   489,     0,     0,     0,   493,     0,
     494,     0,     0,     0,   490,     0,   495,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     472,     0,     0,     0,     0,   491,   473,   486,   474,     0,
     492,   475,     0,   476,   477,   478,     0,     0,   493,   479,
     494,   480,   487,   488,     0,     0,   495,   481,     0,     0,
       0,   467,   468,   469,   462,     0,   464,   463,     0,     0,
     470,     0,     0,     0,     0,   823,     0,     0,     0,     0,
       0,     0,   471,   466,     0,     0,   467,   468,   469,   489,
    1074,     0,   482,     0,     0,   470,     0,   563,  1067,   490,
       0,     0,     0,     0,     0,     0,     0,   471,     0,     0,
       0,   483,     0,     0,     0,   472,     0,     0,     0,     0,
     491,   473,     0,   474,     0,   492,   475,     0,   476,   477,
     478,     0,     0,   493,   479,   494,   480,     0,     0,   484,
     472,   495,   481,     0,     0,   464,   473,     0,   474,   462,
       0,   475,   463,   476,   477,   478,     0,     0,     0,   479,
       0,   480,   466,     0,     0,     0,     0,   481,     0,     0,
       0,     0,   485,     0,     0,     0,     0,   482,     0,     0,
       0,     0,     0,     0,     0,     0,   467,   468,   469,     0,
       0,     0,     0,     0,     0,   470,   483,     0,     0,     0,
       0,     0,   482,     0,     0,     0,     0,   471,     0,     0,
       0,     0,     0,     0,     0,     0,   486,     0,     0,     0,
       0,   483,     0,     0,   484,     0,     0,     0,     0,     0,
     464,   487,   488,     0,     0,     0,     0,     0,     0,     0,
     509,     0,     0,     0,     0,     0,   473,   466,   474,   484,
       0,   475,     0,   476,   477,   478,     0,   485,     0,   479,
       0,   480,     0,     0,     0,   467,   468,   469,   489,     0,
       0,     0,     0,     0,   470,     0,     0,     0,   490,     0,
       0,     0,   485,     0,     0,     0,   471,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   491,
       0,   486,   482,     0,   492,  1234,     0,     0,   463,     0,
       0,     0,   493,     0,   494,     0,   487,   488,     0,   472,
     495,   483,     0,     0,     0,   473,   486,   474,     0,     0,
     475,     0,   476,   477,   478,     0,     0,     0,   479,     0,
     480,   487,   488,     0,     0,     0,   481,     0,     0,   484,
     467,   468,   469,   489,     0,     0,     0,     0,     0,   470,
       0,     0,     0,   490,     0,     0,     0,     0,     0,     0,
       0,   471,     0,     0,     0,     0,     0,     0,   489,     0,
       0,   482,   485,     0,   491,     0,   464,     0,   490,   492,
       0,     0,     0,     0,     0,     0,     0,   493,     0,   494,
     483,     0,     0,   466,   472,   495,     0,     0,     0,   491,
     473,     0,   474,     0,   492,   475,     0,   476,   477,   478,
       0,     0,   493,   479,   494,   480,   486,     0,   484,     0,
     495,   481,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   487,   488,     0,     0,     0,     0,     0,     0,  1877,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   485,     0,     0,     0,     0,   482,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   510,     0,   489,     0,
     511,   512,     0,     0,     0,   483,     0,     0,   490,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1761,
       0,     0,     0,     0,     0,   486,   467,   468,   469,   491,
       0,     0,     0,   484,   492,   470,     0,     0,     0,     0,
     487,   488,   493,     0,   494,     0,     0,   471,     0,     0,
     495,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   485,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   489,     0,     0,
     472,     0,     0,     0,     0,     0,   473,   490,   474,     0,
       0,   475,     0,   476,   477,   478,     0,     0,     0,   479,
       0,   480,     0,     0,     0,     0,     0,   481,   491,     0,
     486,     0,     0,   492,     0,     0,     0,     0,     0,     0,
       0,   493,     0,   494,     0,   487,   488,     0,     0,   495,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   482,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   483,   489,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   490,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2638,   484,
       0,     0,     0,   491,     0,     0,     0,     0,   492,     0,
       0,     0,     0,     0,     0,     0,   493,     0,   494,     0,
       0,     0,     0,     0,   495,     0,     0,     0,     0,     0,
    -430,     0,   485,  -430,     0,     0,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -430,     0,  -430,     0,     0,
       0,     0,     0,     0,     0,  -430,   486,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,     0,     0,     0,     0,     0,     0,
       0,   487,   488,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -430,     0,     0,     0,     0,   489,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   490,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   491,
       0,     0,     0,     0,   492,     0,     0,     0,     0,     0,
    -430,     0,   493,     0,   494,     0,     0,     0,     0,     0,
     495,     0,     0,     0,     0,     0,   463,  1104,     0,     0,
       0,  -430,  -430,  -430,  -430,  -430,     0,     0,  -430,  -430,
       0,     0,  -430,     0,     0,     0,     0,     0,  -430,     0,
    -430,     0,     0,     0,     0,     0,  -430,     0,     0,     0,
       0,  -430,     0,     0,  -430,     0,     0,     0,   628,     0,
    1103,     0,  -430,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -430,     0,     0,  -430,     0,
    -430,     0,     0,     0,  -430,     0,  -430,     0,     0,     0,
       0,     0,     0,     0,   464,  -430,  -430,     0,     0,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,     0,     0,  -430,     0,
       0,   466,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -430,     0,     0,     0,     0,     0,     0,     0,   463,
       0,  -430,     0,  -430,     0,     0,     0,  -430,     0,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,     0,     0,     0,     0,
       0,     0,  -430,     0,  -430,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -430,  -430,     0,     0,     0,
       0,   628,     0,     0,  -430,     0,     0,  -430,     0,     0,
       0,     0,     0,     0,     0,  -430,     0,     0,     0,     0,
       0,     0,  -430,     0,  -430,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   464,     0,     0,
       0,     0,     0,   629,   467,   468,   469,     0,     0,     0,
       0,     0,  -430,   470,   466,     0,     0,     0,     0,  -430,
       0,  -430,  -430,     0,     0,   471,     0,     0,     0,     0,
       0,     0,     0,     0,  -430,     0,     0,     0,     0,  1104,
    -430,     0,     0,  -430,  -430,  -430,  -430,  -430,     0,     0,
    -430,  -430,  -430,     0,  -430,  -430,  -430,   630,   631,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -430,   632,
       0,   476,   477,   478,     0,     0,     0,   479,     0,   480,
       0,     0,     0,     0,  -430,     0,     0,     0,  -430,     0,
       0,     0,     0,     0,     0,     0,     0,  -430,     0,     0,
    -430,     0,  -430,     0,     0,     0,  -430,  -430,     0,     0,
       0,     0,  -430,     0,     0,     0,   629,   467,   468,   469,
     482,     0,     0,     0,  -430,     0,   470,     0,     0,     0,
    -430,     0,     0,     0,  -430,  -430,  -430,     0,   471,     0,
       0,     0,     0,  -430,     0,     0,     0,     0,  -430,     0,
       0,     0,     0,  -430,     0,  -430,     0,     0,     0,     0,
       0,     0,  1097,     0,     0,     0,     0,   484,     0,     0,
     630,   631,     0,     0,  -430,     0,     0,     0,     0,     0,
       0,     0,   475,     0,   476,   477,   478,     0,  -430,     0,
     479,     0,   480,     0,     0,     0,  -430,     0,     0,  -430,
     485,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -430,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -430,
       0,     0,     0,   482,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   486,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,   487,
     488,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   466,     0,     0,     0, -2102,     0,     0,     0,     0,
     484,     0,     0,     0,  -430,     0,  -430,  -430,  -430,     0,
       0,     0,     0,     0,     0,     0,   489,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   490,     0,     0,     0,
       0,     0,     0,   485,     0,     0,     0,  -430, -1264,     0,
       0,     0,     0,     0,     0,     0,     0,   491,     0,     0,
       0,     0,   492,     0,     0,     0,     0, -1264,     0,  -430,
     493,   633,   494,     0,     0,     0,     0,     0,   495,     0,
       0,     0,     0,     0,     0,     0,  -430,   486,     0,     0,
       0,     0,     0,     0,     0,     0,  -430,  -430,  -430,     0,
       0,     0,   487,   488,   467,   468,   469,     0,     0,     0,
    -430,     0,     0,   470,     0,     0,     0,  -430, -2102,     0,
       0,     0,     0,     0,  1097,   471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2057,     0,     0,     0,   489,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   490,
       0,  2058,     0,     0,  2059,  2060,  2061,  2062,  2063,  2064,
    2065, -1264,     0,     0,     0,     0,     0,     0,     0,   475,
     491,   476,   477,   478,     0,   492,     0,   479,     0,   480,
   -1264,     0,     0,   493,   633,   494,     0,     0,     0,     0,
       0,   495,  2066,     0,   983,   984,  2067,  2068,  2069,  2070,
    2071,     0,     0,     0,     0,     0,     0,  1171,     0, -2102,
       0,     0, -2102,     0,  1172, -2102,     0,     0,     0,     0,
     482,     0,     0, -2102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2072,     0,     0,     0, -1983,     0, -1983,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   484,     0,     0,
       0,     0, -2102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -2102,     0,     0,     0,     0,     0,     0,     0,     0,
     485,     0,     0,     0,     0,     0,     0,     0,  2073,  2074,
    2075,  2076,  2077,     0,     0,   992,   993,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   486,     0,     0,     0,     0,  2078,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   487,
     488,     0,   425,     0,     0,  2079,     0,     0,     0,     0,
       0, -2074,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -2102,     0,     0,     0,     0,     0,     0,  1173, -2102,
       0,     0,     0,     0,     0,     0,   489,     0,     0,     0,
       0,     0,     0, -2102,     0,     0,   490,     0,  2080,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   491,     0,     0,
       0,     0,   492,     0,     0, -2102,     0,     0,     0,  2081,
     493,     0,   494,     0, -1983,     0,     0,     0,   495,     0,
       0,     0,     0,  2082,     0, -2102,     0, -2102,     0,     0,
       0,  2083,     0,     0,  2084,  1174,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2085,
   -2102,     0, -2102,  1535,     0,     0,  1536,     0,     0,  1537,
       0,     0,     0,     0,  2086,     0,     0,  1538,     0,     0,
       0,     0,     0, -2102,     0,     0,     0,     0,     0,     0,
    2757,     0,     0,  2758, -2102,     0,  2759,  2059,  2060,  2061,
    2062,  2063,  2064,  2760,  2761,     0,     0, -1983,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -2102, -2102,  1527,  1539,  1528,     0,  2087,
       0,  2088,  2089,  2090,     0,  2066,     0,   983,   984,  2067,
    2068,  2069,  2070,  2071,     0,  1540,     0,     0,     0,     0,
       0, -2102,     0,     0,     0,     0,     0,     0, -2102,     0,
   -2102, -2102,  2091,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -2102,     0,     0,     0,     0, -2102,
       0,     0,     0,  2072,  -427,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -2102,     0,     0,
       0, -2074,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2092,  2093,  2094,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2095,     0, -2102,     0,     0,
    2762,     0,  1791,     0,     0,  1541,     0,     0, -1985, -2102,
       0,     0,     0,  1542,     0,     0,     0,     0,     0,     0,
       0,  2073,  2074,  2075,  2076,  2077,     0,  1543,   992,   993,
       0,     0,  2763,     0,     0,     0,     0,     0,  2764, -2102,
    2765,     0,     0,     0,     0,     0, -2020,     0,     0, -2102,
       0,  2766,     0,     0,  2767, -2102,     0,     0,     0,  1544,
       0,     0,  2078,     0,     0,     0,     0,     0,     0,     0,
     633,     0,     0,     0,     0,   425,     0,     0,  2079,  1545,
       0,  1546,     0,     0,     0,     0,  2768,     0,     0,     0,
       0,     0,     0,     0,     0,  2769,     0,     0,     0,     0,
       0,     0,     0,     0,  1547,     0,  1548,     0,  2770,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2080,     0,     0,     0,     0,     0,  1549,     0,     0,
       0,  2771,     0,  1548,     0,     0,     0,     0,  1550,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2772,     0,  1549,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2773,  2082,  1551,  1552,     0,
       0,     0,     0,     0,  2083,     0,     0,  2084,     0,     0,
       0,     0,     0,     0,     0,     0,   464,     0,     0,     0,
       0,     0,  2085,     0,  2774,  1553,     0,     0,     0,     0,
       0,     0,  1554,   466,  1555,  1556,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1557,     0,
       0,     0,  2775,  1558,     0,     0,     0,     0,     0,  1554,
       0,  1555,  1556,     0,  2059,  2060,  2061,  2062,  2063,  2064,
       0,  1559,     0,     0,     0,     0,     0,     0,     0,     0,
    2776,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2087,     0,  2088,  2089,  2090,     0,     0,     0,
       0,  1560,  2066,     0,   983,   984,  2067,  2068,  2069,  2070,
    2071,     0,     0,  1561,     0,     0,   464,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2777,     0,
       0,     0,     0,   466,     0,     0,   467,   468,   469,     0,
       0,     0,  2778,  1562,     0,   470,     0,  -688,     0,     0,
    2072,     0,  2779,  1563,     0,     0,     0,   471,     0,  1564,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2780,     0,     0,     0,  2092,  2093,  2094,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2095,     0,
     509,     0,     0,  2781,     0,  1791,   473,     0,   474,     0,
       0,   475,     0,   476,   477,   478,     0,     0,     0,   479,
       0,   480,     0,   464,     0,     0,     0,     0,  2073,  2074,
    2075,  2076,  2077,     0,     0,   992,   993,     0,     0,     0,
     466,     0,     0,     0,     0,     0,   467,   468,   469,     0,
       0,     0,     0,     0,     0,   470,     0,     0,     0,     0,
       0,     0,   482,     0,     0,     0,     0,   471,     0,  2078,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   483,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     509,     0,     0,     0,     0,     0,   473,     0,   474,   484,
       0,   475,     0,   476,   477,   478,     0,     0,     0,   479,
       0,   480,     0,     0,     0,     0,     0,     0,  2080,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,     0,
       0,     0,   485,   467,   468,   469,     0,     0,     0,     0,
       0,   466,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   482,     0,   471,     0,     0,     0,     0,     0,
       0,     0,     0,  2082,     0,     0,     0,     0,     0,     0,
       0,   483,     0,     0,  2084,     0,   486,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   509,     0,  2085,
       0,   487,   488,   473,     0,   474,     0,     0,   475,   484,
     476,   477,   478,     0,     0,     0,   479,     0,   480,     0,
       0,     0,     0,     0,     0,     0,  1218,     0,     0,     0,
       0,     0,     0,     0,   464,     0,   510,     0,   489,     0,
     511,   512,   485,     0,     0,     0,     0,     0,   490,     0,
       0,   466,     0,     0,   467,   468,   469,     0,     0,   482,
       0,     0,     0,   470,     0,     0,     0,     0,     0,   491,
       0,  2088,  2089,  2090,   492,   471,     0,     0,   483,     0,
       0,     0,   493,     0,   494,     0,   486,     0,     0,     0,
     495,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   487,   488,     0,     0,     0,   484,     0,   509,     0,
       0,     0,     0,     0,   473,     0,   474,     0,     0,   475,
       0,   476,   477,   478,     0,     0,  1874,   479,     0,   480,
       0,     0,     0,     0,     0,     0,   510,     0,   489,   485,
     511,   512,     0,     0,     0,     0,     0,     0,   490,     0,
       0,  2092,  2093,  2094,   467,   468,   469,     0,     0,     0,
       0,     0,     0,   470,     0,     0,     0,     0,     0,   491,
     482,     0,     0,     0,   492,   471,     0,   464,     0,     0,
       0,     0,   493,   486,   494,     0,     0,     0,     0,   483,
     495,     0,     0,     0,   466,     0,     0,     0,   487,   488,
       0,     0,     0,     0,     0,     0,  1879,     0,   509,     0,
       0,     0,     0,     0,   473,     0,   474,   484,     0,   475,
       0,   476,   477,   478,     0,     0,     0,   479,     0,   480,
       0,     0,   464,   510,     0,   489,     0,   511,   512,     0,
       0,     0,     0,     0,     0,   490,     0,     0,     0,   466,
     485,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   491,     0,     0,     0,
     482,   492,     0,     0,     0,     0,     0,     0,     0,   493,
       0,   494,     0,     0,     0,     0,     0,   495,     0,   483,
       0,     0,     0,     0,   486,     0,     0,   467,   468,   469,
       0,     0,     0,     0,     0,     0,   470,     0,     0,   487,
     488,     0,     0,     0,     0,     0,     0,   484,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1898,     0,     0,     0,     0,     0,
       0,     0,     0,   464,   510,     0,   489,     0,   511,   512,
     485,   509,   467,   468,   469,     0,   490,   473,     0,   474,
     466,   470,   475,     0,   476,   477,   478,     0,     0,     0,
     479,     0,   480,   471,     0,     0,     0,   491,     0,     0,
       0,     0,   492,     0,     0,     0,     0,     0,     0,     0,
     493,     0,   494,     0,   486,     0,     0,     0,   495,     0,
       0,     0,     0,     0,     0,     0,   509,     0,     0,   487,
     488,     0,   473,   482,   474,     0,     0,   475,     0,   476,
     477,   478,     0,     0,     0,   479,     0,   480,     0,     0,
       0,     0,   483,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   510,     0,   489,     0,   511,   512,
       0,     0,     0,     0,     0,     0,   490,     0,     0,     0,
     484,     0,     0,   467,   468,   469,     0,     0,   482,     0,
       0,     0,   470,     0,     0,     0,     0,   491,     0,     0,
       0,     0,   492,     0,   471,     0,     0,   483,     0,     0,
     493,     0,   494,   485,     0,     0,     0,     0,   495,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   484,     0,   509,     0,     0,
       0,     0,     0,   473,     0,   474,     0,     0,   475,     0,
     476,   477,   478,     0,     0,     0,   479,   486,   480,     0,
       0,     0,  3083,     0,     0,     0,     0,     0,   485,     0,
       0,     0,   487,   488,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   489,
       0,   511,   486,     0,     0,     0,     0,     0,   483,   490,
       0,     0,     0,     0,     0,     0,     0,   487,   488,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     491,     0,     0,     0,     0,   492,   484,     0,     0,     0,
       0,     0,     0,   493,     0,   494,     0,     0,     0,     0,
       0,   495,     0,     0,   489,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   490,     0,     0,     0,     0,   485,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   491,     0,     0,     0,     0,
     492,     0,     0,     0,     0,     0,     0,     0,   493,     0,
     494,     0,     0,     0,     0,     0,   495,     0,     0,     0,
       0,     0,     0,   486,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   487,   488,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   489,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   490,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   491,     0,     0,     0,
       0,   492,     0,     0,     0,     0,     0,     0,     0,   493,
       0,   494,     0,     0,     0,     0,     0,   495
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2683)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     221,   222,   544,   338,   225,   463,   380,   217,  1010,   716,
     717,   718,  1312,   223,   209,    81,   426,   335,   428,   555,
    1069,   431,    42,  1288,  1804,  1587,  1264,  1791,   434,   342,
     675,   367,   354,  1534,   919,   684,  1085,  1269,   360,   344,
    1530,  1793,  1797,  1533,   331,  1797,   352,   352,   330,  1797,
    1823,  1372,   472,  1398,   662,   819,  1294,   823,   773,  1419,
    1723,   367,   367,   551,   551,   829,   909,   330,  1965,  1829,
    1689,     1,     9,     1,     9,     1,    22,     9,  2052,    17,
      50,  1779,  2536,    60,    31,     6,   628,    28,    49,   509,
       9,     1,   119,    11,  2149,  2150,   131,     6,    91,   141,
    2134,    58,   101,   102,     0,    60,   115,    74,   130,    92,
    1348,  1436,   895,   165,   130,    97,    21,   895,     9,   655,
      32,    68,    92,    70,   975,    76,   135,   615,  2038,   407,
    1185,   190,   189,   631,   108,   191,   172,   903,  1193,   334,
      32,   336,   153,    61,  2118,    60,     9,   179,    50,  1716,
    1397,   417,   797,  2529,   132,   253,  1854,  1855,  1856,  2148,
      50,   191,    50,  1861,  1862,     6,   361,   328,  1406,   364,
      17,  1869,   229,   101,   369,   218,  2592,   257,   100,   120,
       7,  1032,   403,   101,  2674,   103,   288,   105,   383,    21,
     131,   179,   680,   680,   415,   113,  2142,    60,   337,   348,
     421,   422,  1764,   424,  1511,    60,   972,   316,   429,   430,
     630,   631,   214,   434,    65,   218,   141,   338,   382,  2595,
     317,   215,   107,   444,   258,  2135,  1458,  1925,   510,   511,
     512,   605,     1,   328,   185,   436,  1934,   132,   525,  1937,
     324,   241,   203,    94,    95,   272,   272,  1296,   511,    40,
    2529,   172,  2504,   112,   150,   248,   377,   272,   154,   136,
     178,   211,    59,   140,   441,    62,   436,   132,   473,   474,
      67,   234,  2633,  2955,   328,     8,   330,   543,   483,   333,
     484,   216,   314,   108,   338,   272,    60,   592,    67,   288,
     492,   365,    74,   525,   526,   527,   528,   501,   603,   176,
     354,   503,   248,  2664,   214,    38,   360,   228,  1074,    74,
     362,   385,   799,  2368,   636,   516,  2595,   304,   692,   215,
     185,   268,   272,   115,   529,   166,   248,   118,   382,   192,
     384,  2583,  1047,   229,   230,   244,   742,   603,   364,   516,
    2314,  1960,   289,  1962,   754,   442,   516,   542,   141,   364,
     958,   272,  3034,   272,   449,   273,   495,   356,   553,   330,
     362,   282,   446,   326,   335,    74,   672,   672,   826,   363,
    1871,  1609,   677,   344,   538,   204,   410,   272,    74,  1724,
    2290,   352,   802,   485,   545,   310,   873,   228,   329,    74,
       6,   500,    74,   371,   257,   544,   367,   248,   401,   382,
     309,   121,    74,   321,   351,   232,   233,   218,   390,   183,
     136,   465,   382,   304,   140,   256,   137,  2177,   684,   328,
     305,  2911,   339,   268,   218,   252,  1993,   507,   379,   248,
      59,   272,   349,  1318,   253,  2469,   272,  2383,    67,   356,
     357,   282,  1327,   486,   864,   566,   544,   288,   490,   370,
     176,   278,   362,   431,   174,   491,   510,   511,   512,   376,
     427,  1304,   253,   378,  1307,   239,     0,   363,   500,   747,
    2459,  1079,  2848,  1239,  2448,  2248,   137,   304,   976,   490,
     382,   535,   373,  1019,   538,  2901,   545,   284,   545,   545,
     341,   473,   382,   545,   382,  2193,   141,  1822,  1745,   417,
     522,   472,  1285,   545,   336,   823,   522,  1285,   482,   544,
     447,   401,   500,   401,   523,   545,   798,  1572,   545,   740,
     487,   731,   291,   805,   806,   807,   447,   748,   794,   370,
     485,   752,   814,   815,   816,   798,   536,  1844,   509,   510,
     511,   512,  2452,   504,   495,   827,   545,   540,   830,   467,
     472,   814,   815,   816,   775,   538,   976,   839,   840,   841,
     842,   843,   783,  1414,   827,   362,   776,  1054,   538,   546,
     491,   416,   399,  2607,   190,   546,  3030,   524,   499,   536,
     490,   498,   636,   544,  1192,   903,  2341,   492,   870,   501,
     499,     6,   858,  2341,   490,   908,  2259,   544,   503,   545,
     490,   330,   490,   544,   542,   137,   447,   870,   662,   501,
     545,  1660,   228,   545,   551,   545,   150,   545,   884,   545,
     154,   592,  2241,  2678,   545,   354,   545,   545,   425,   895,
     551,   360,   603,   430,   481,   689,   538,  1282,  1876,   490,
     431,   286,   497,  2416,   507,   427,   415,   502,   538,   545,
     538,   430,   569,   272,   972,   284,   272,   482,   499,   452,
     492,   490,   427,   969,   969,   952,   282,   584,   545,  2643,
    1076,   503,  1387,  1388,  1389,  1390,  1391,  1392,  1393,  1394,
     875,   215,   230,     6,   966,   544,   545,  2047,   480,  1989,
     501,   662,  1234,   485,   260,   229,   230,   542,   260,   616,
    1938,   672,  1940,  1025,   545,   487,   677,   501,   974,   545,
     551,     9,   433,  1119,   541,   489,   272,   544,   427,   440,
     141,   490,   487,   497,   498,  1012,   545,  1729,   502,  1337,
       6,   427,   497,   362,   454,     0,  1768,   502,  2498,  2636,
    1978,  1046,   427,   472,   798,   427,   328,   467,   545,  1237,
    1237,   805,   806,   807,   370,   427,  1074,   477,  1164,   286,
     814,   815,   816,   817,  2427,   819,   272,   684,   248,   686,
    1378,  2706,   433,   827,   691,   829,   830,   272,   487,   440,
     509,   510,   511,   512,   184,   839,   840,   841,   842,   843,
    1210,   487,  2030,  2031,  1060,    35,   425,    68,  2706,    70,
       0,   430,   487,   186,   379,   487,   535,   130,   232,   454,
     193,  2706,   257,   228,    33,   487,   870,  2706,   544,   545,
     272,  1664,   467,   272,   545,  1091,   272,   798,   252,   363,
     475,   447,   477,  1597,   805,   806,   807,  1058,   228,    22,
      33,   241,   288,   814,   815,   816,   817,   172,   819,   249,
     272,   252,   823,  2706,   278,   273,   827,   272,   829,   830,
    2432,   490,   129,   272,    27,   286,   272,   282,   839,   840,
     841,   842,   843,   228,  1140,   441,   250,   278,   100,   441,
     304,   174,   272,   499,   545,   204,   272,  1108,   179,   437,
     272,  1657,   282,  1659,   485,   341,   115,   424,   362,   870,
     545,   433,   317,   304,   958,   228,   823,   636,   440,   248,
    1176,   272,   966,     6,  2259,    11,   545,   272,    31,   187,
     495,  1239,   386,   387,  1206,    50,   545,   282,   544,   545,
     228,  1963,   903,   662,     9,   551,    28,   337,  2259,  1705,
    2713,  1151,  1152,  1206,  1165,   536,   278,  1252,  2308,   272,
    2310,  2706,   228,  1174,  2706,   370,   490,  1011,  2706,   282,
     129,   370,  1382,   545,   278,    61,   252,   349,  1255,  2749,
    1619,  1025,   304,   350,   272,    34,    51,   894,   544,   350,
     370,   288,  1036,   308,   282,   902,   903,   958,   313,   545,
     304,    29,   278,   422,   278,   966,   272,   268,   969,   112,
    1766,   972,   214,   364,   413,   101,   282,   103,    59,   105,
     490,   545,   234,  1067,   307,   370,    67,   113,   304,  1285,
     304,   134,   355,   314,   941,  1079,   166,   442,   120,   229,
     230,   414,   447,   454,  2606,   368,  1090,    59,   447,   545,
    1346,  1346,  1347,  2978,  1265,    67,   467,   370,   211,   381,
     545,   469,   426,   272,   475,   972,   477,   447,   298,   299,
     300,   490,   507,   317,   286,   248,  2846,   180,   387,   798,
    2978,  1679,   370,  1958,   228,  1046,   805,   806,   807,   272,
     351,   433,   178,  2978,   499,   814,   815,   816,   817,  2978,
     819,   204,   447,   545,   370,   133,   545,   561,   827,   545,
     829,   830,  1508,  1074,   326,   551,   219,  1373,  1079,   499,
     839,   840,   841,   842,   843,   454,   534,   541,   272,   244,
    1607,   405,   181,   545,   447,  2978,   366,   545,   282,   512,
     545,   343,   344,  1050,  1779,   228,   551,  1403,  1192,   545,
     541,   870,   551,   544,  1061,   545,   453,  1413,   455,   447,
     362,   419,  1206,   228,   537,  2853,   539,  1074,  1212,   545,
    2858,   551,   485,     1,  1772,   551,   491,   544,   545,  2407,
    2408,   447,   278,   544,   236,   218,   499,   273,   268,   272,
    2861,  1601,   514,  1593,   545,   260,   261,   436,   442,   282,
     228,  2872,    36,   545,   328,    39,   551,   272,  1534,   522,
    2432,   499,    46,    47,  1425,    39,   268,   282,  2988,  1430,
     422,  1432,   544,    47,  1435,  1436,   370,  1438,   291,   493,
    2703,  1192,   545,   499,   283,   321,  2978,    65,   551,   958,
     544,   234,   521,   284,   272,  1206,   268,   966,  3018,  2621,
     260,   247,  1452,   497,   282,   489,  2944,   545,   502,   362,
    2948,   540,    96,   551,   498,   541,    94,    95,  2741,   297,
     544,   545,   284,  3027,  1235,   505,   506,   516,  1239,   545,
     510,   545,  2654,   490,  2483,   551,   326,   370,   302,  2769,
    1490,  1252,  3046,  1337,  1338,   657,    12,   287,  2588,    15,
      16,  1613,   490,   447,   337,   370,  1025,  1632,   141,  1581,
    1582,   321,  2602,   492,  2794,   411,  1588,   441,  1590,   315,
     360,   362,  1366,   129,   376,  1536,   436,  1371,  1581,  1582,
    1541,   417,   384,  1294,  1378,  1588,   416,  1590,  1610,   173,
     354,   334,   370,   383,  2543,  2544,     0,   709,  1559,  1657,
     362,  1659,   415,  1625,   291,   499,  2847,  1610,   436,   349,
    1079,  1405,  1665,   542,   447,    48,  1678,  2589,  1412,  1413,
     241,   205,  1625,   490,  1418,   184,  1337,  1338,   249,   107,
    3051,   467,   447,    66,   425,  1346,  1347,  1348,    89,   430,
    2680,   219,   516,   227,   416,   185,  1928,  1705,  2688,   124,
     125,   126,   485,   227,   490,  1801,   516,   551,  1703,   248,
      56,    57,  1808,   425,   247,   445,   499,  1378,   430,   447,
     248,   272,   450,   451,   107,  1728,  2798,     1,  2962,   219,
    1641,   308,   241,   272,   499,   259,  1647,     8,   516,   376,
     249,   378,  1653,  2934,  2978,  1406,   219,   281,    94,   490,
    2649,  2706,   303,   170,  1710,   332,  1768,   281,  1766,   545,
    1716,   491,   545,   192,   129,   111,   337,    38,   551,   222,
     223,  1867,  1868,  1192,    48,   248,   122,   310,   490,  1386,
    2971,  2972,   315,  1755,   318,  1696,   551,  1206,   327,  2980,
     329,   215,    66,  2984,  2985,   203,   150,  1404,   349,    11,
     154,  3053,  1755,   241,   338,   229,   230,   497,   203,   262,
     263,   249,   502,   341,   338,  2507,   100,   185,   226,    23,
      24,  1777,  3013,   551,   253,  1710,   141,   256,   337,   254,
     247,   226,   175,   107,  1944,   216,   179,  1581,  1582,  1935,
    1936,  1867,  1868,   268,  1588,  1871,  1590,   376,   192,    61,
     369,   219,  3043,  1597,   169,   493,   171,   141,   497,   203,
       8,   215,   888,   502,   245,   248,  1610,   422,   402,  1613,
     404,   405,   255,   175,  1974,   229,   230,   179,   294,   295,
     404,  1625,   226,   266,   418,  1868,  1797,   913,  1632,   101,
      38,   103,  1803,   105,   311,   242,     9,   492,   315,    12,
    1811,   113,    15,    16,   475,   321,   322,   441,   503,  1935,
    1936,   185,   256,   111,   443,   444,  1816,  2143,  1337,  1338,
    1581,  1582,   490,  1633,   122,  1669,   445,  1588,   954,  1590,
     355,   356,   357,   203,  1678,  1679,  1597,  2676,   421,   363,
     459,   460,   461,  1687,   490,   219,   371,   278,  1609,  1610,
     487,  1963,  1935,  1936,  1865,  1866,   226,   278,   278,  1378,
     497,   154,   490,   488,  1625,   502,   178,    57,   150,   312,
    1714,   314,   497,   304,   248,  3039,  2086,   502,  2210,   513,
    2562,   255,  1008,   304,   304,  2081,  3050,  2569,  2570,   513,
      25,    26,   266,   376,   377,   341,  1657,   490,  1659,   345,
     346,   484,   286,  1747,    94,   359,   490,   487,   391,   363,
     393,  1755,   446,   129,   497,   100,   450,   497,  1679,   502,
     174,   111,   502,   422,  1768,   179,  1687,   188,  1772,  3032,
    3033,   422,   122,   484,    69,   486,    71,  1993,    73,   448,
    2052,   494,  1703,   496,  1705,   391,     1,   264,   265,   474,
     487,  3054,   805,   806,   807,  2151,   141,   488,   319,   320,
     497,   273,   408,   409,   490,   502,   497,   841,   842,   843,
    3073,   502,   490,   108,   109,   110,   376,   830,   378,   327,
    1836,   329,  1838,    23,    24,   369,    41,    42,    43,    44,
      45,   839,   840,  3083,  1755,   525,   526,   527,   528,  3102,
     331,   324,   376,   377,   335,  1766,  2118,   490,  1715,   321,
     204,  1772,   206,   344,   345,   815,   816,   391,  2029,   393,
     376,   352,   378,   446,   355,    80,    81,   490,   312,   360,
     314,   166,   363,   168,   365,   366,   367,   368,   490,  1213,
     175,   268,  1216,   270,   179,   268,    27,   270,  1222,   490,
    1757,  1758,  1226,   490,   385,   538,   490,   376,  1232,   378,
     490,   445,  1581,  1582,   268,   401,   270,  2192,   428,  1588,
     454,  1590,    69,   358,    71,   459,   460,   461,  1597,   545,
     547,   294,   295,   467,  2095,   525,   526,   527,   528,    46,
     454,  1610,   510,   477,   512,   426,  2152,   428,   435,   248,
     431,   286,   435,   394,    60,   417,  1625,   234,   321,   322,
     272,    68,    69,    70,    71,   490,   490,   490,   545,  1963,
    2228,   272,  2230,   545,    77,   422,  2137,   485,   545,  2140,
     430,   545,   441,   268,    67,   270,  2147,   490,   490,   194,
     195,   196,   197,   198,   199,   200,   201,   202,    62,  2349,
      72,  2347,   545,   288,   545,   467,   490,   142,  2354,   211,
    1679,   545,   286,  2174,   538,   326,   501,   143,  1687,   501,
     183,   545,   896,   897,   898,   899,   501,  1938,   490,  1940,
     501,  1589,   485,  1591,   369,   501,  1594,  1595,  1596,  1315,
    2175,  2176,  1600,   501,   525,  2061,  2062,  2063,  2064,   501,
     501,   144,  2314,  1611,  1612,   501,   486,   501,   145,   501,
     412,   501,   146,   376,   536,   546,   475,  1978,   475,   147,
     149,   148,   106,   501,   480,   485,   152,    50,   434,   481,
     155,   484,   478,   545,   211,   156,  1755,   157,   179,  3031,
     158,   540,   159,   288,    32,   160,   117,  2258,  1374,   161,
     211,   162,   117,  1772,   163,   490,   164,   211,  2454,   277,
     445,   592,   422,   332,   545,   490,  2466,   272,   225,   454,
    2031,   545,   603,   430,   459,   460,   461,   545,   490,   112,
     272,   272,   467,   507,   332,  2485,  2486,   490,   441,   114,
     100,  2491,   477,   501,   251,   350,   485,   239,    87,   218,
    2496,   545,   545,   545,   401,   361,  2306,   272,   399,   289,
     365,   268,   314,   270,   542,   104,   179,   139,   190,   390,
     542,   485,   490,   544,   182,   141,   485,   658,   244,   485,
      50,   244,    50,   211,   244,   490,  2448,   422,   388,  2535,
     271,   672,   490,   490,    90,   302,   677,   482,  2192,   493,
      23,   490,   481,   289,   429,   248,  2367,  2553,  2558,   362,
      76,   545,   490,  2374,  2375,  2376,  2377,   272,   325,   482,
     550,  2382,  2216,   549,   253,   454,   487,   487,   487,   319,
     487,   487,   487,   487,   487,   485,   293,   485,   387,   406,
     347,   253,   218,    17,   218,   481,   353,  1523,   533,  1525,
     139,   151,  2387,  2414,  2901,   329,   390,   485,    50,   131,
     545,   218,  2468,   153,     8,   211,   542,   542,   207,   208,
     209,  2621,   454,   754,   327,   218,  2590,   216,   490,     9,
    2415,   485,     7,   490,   422,    91,   391,  2281,   289,   538,
      22,   326,   204,   474,   348,  2289,  2646,    48,  2292,   545,
     319,    59,   441,     8,  2654,  2655,   317,   218,   315,   442,
     791,   247,   538,    50,   538,   310,  2477,  2228,   204,  2230,
     204,   430,   253,   141,   334,   330,  1602,  1603,   435,   333,
     336,  2492,   350,   272,  2684,   274,   275,   276,   445,   118,
     545,   280,   823,   390,   473,  2506,   490,   540,   219,   422,
    1626,  1627,   219,   481,   545,   272,   545,   245,   465,   218,
    2710,   218,   386,   386,   416,   490,   107,     8,    38,    50,
    2505,   495,   278,   253,   107,   305,   278,   500,   532,   316,
     234,  2643,   100,   490,   323,   268,  2243,  2244,    55,   490,
     422,  1667,   542,   410,   545,  1671,   248,   485,  2255,   204,
     431,   270,  2800,    59,   511,   454,    40,   314,    50,   115,
     359,  2405,   406,   278,   278,   278,   278,   311,   170,   551,
      27,    54,   903,   351,   531,   364,  2772,   429,   431,  2423,
      17,   538,   441,   540,   490,   481,   114,  2598,   359,   490,
     485,  2435,   211,  1719,  1720,   484,   272,   362,  2798,   490,
     450,   112,   372,   432,   492,   119,   545,   203,     7,  2620,
     392,   449,   239,   490,   403,   485,    31,   119,   236,  2815,
     466,   952,   359,   521,   490,   253,   490,   326,   329,   260,
     253,   121,   325,   253,   260,   100,   253,   253,   969,   253,
     475,   972,   490,   219,   544,   260,   191,   135,   542,    59,
     219,   272,  2764,   545,   226,   545,   237,   126,   225,   542,
     211,  2993,   333,    50,   456,     7,   341,    58,  2868,    55,
      60,  1157,    53,   462,   463,    52,   214,   229,   413,  1499,
    1154,  1012,  1479,  2694,   764,  1136,  2624,  2558,  2386,  2373,
    2381,   735,  2552,  2387,  2705,  2706,  2366,  2730,  2709,  2700,
    2741,  1797,  2409,   719,  2706,  2716,  3081,  2341,  2719,  2720,
    2721,  2722,  2645,  2648,  2796,  1046,  2314,  2842,  3067,  3093,
     509,  3043,  2595,  2762,  2762,  2910,  2910,   251,  1662,    65,
    2706,  1176,  1547,  1246,   525,  1257,  2747,  2748,  1660,  2209,
    2208,   530,   858,  1074,   538,   340,   535,  2758,   566,  1285,
     908,  1307,  2763,  1664,   543,   955,   545,   911,   588,  1954,
    1687,   962,  1968,  1335,  1967,  1714,  1365,  1993,  1716,  2002,
      31,  2001,  1777,  1037,  1731,    36,   625,  1395,    39,   368,
    1758,  1413,  2034,  2627,  2909,    46,    47,  1413,  2664,   636,
     670,  1524,  1522,  1606,  2990,  1417,   672,  1014,   891,   686,
     890,  1605,  2039,  2028,  2027,  2426,  2299,    68,  2298,    70,
    2821,  2822,  2823,  2824,  2825,  1631,  2040,  2828,  2829,  2830,
    2831,  2832,  2833,  2834,  2835,  2836,  2837,  2838,  2813,  1630,
    2841,  1751,  1751,   941,  2845,    96,   848,  1751,  1751,   658,
    1171,  1944,  3038,  2126,  1123,  1613,  3042,  1382,  1871,  2860,
    2764,  2862,  1488,  1483,   492,  2866,  2344,  2518,  2702,  2703,
    2614,   458,  3017,  1707,     4,  1148,  1820,  1676,  2804,  1402,
    1434,  2609,  1998,  1999,  2718,  3034,    -1,    -1,    -1,    19,
     766,    -1,    -1,    -1,    -1,  2011,  2012,    -1,    -1,  2733,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2024,  2025,
    2744,    -1,    -1,    -1,  1235,    -1,    -1,  3103,  1239,    -1,
      -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2764,  1252,    -1,    -1,  1255,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,  2778,    -1,    -1,  2781,    -1,    -1,
      -1,    -1,  2953,  2954,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2970,
    3032,  3033,    -1,  1294,  2975,  2976,   227,    -1,    -1,    -1,
    2814,    -1,    -1,  2817,  2818,  2819,  2820,    -1,    -1,    -1,
      -1,  2992,  3054,  2827,  2995,  2996,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2840,    -1,  2842,    -1,
      -1,  3073,    -1,    -1,    -1,    -1,    -1,   268,  2852,    -1,
      -1,    -1,    -1,    -1,    -1,  1346,  1347,  1348,  3029,    -1,
     281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,    -1,
    3102,    -1,    -1,  2877,  2878,  2879,  2880,  2881,  2882,  2883,
    2884,  2885,  2886,  2887,  2888,  2889,  2890,  2891,  2892,  2893,
    2894,  2895,    -1,    -1,    -1,    -1,    -1,   318,    -1,  2903,
      -1,    -1,    -1,    -1,    -1,  2909,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2917,    -1,  1406,    -1,   338,  2204,  2205,
    2206,    -1,    -1,    -1,    -1,  2929,    -1,    -1,    -1,    -1,
     351,    -1,    -1,    -1,    -1,  1426,   236,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2950,  2951,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,  2966,    -1,     9,    -1,    -1,    -1,   268,    -1,
      -1,    -1,    -1,    -1,    -1,  2979,    -1,    -1,   278,    -1,
      -1,   402,    -1,   404,   405,    -1,    31,    -1,    -1,    -1,
      -1,    36,    -1,  2997,    39,    -1,    -1,   418,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,  2294,  2295,
      -1,    -1,    -1,    -1,    -1,  3019,    -1,    -1,    -1,    -1,
     441,    -1,    -1,    68,    -1,    70,    -1,    -1,  3032,  3033,
      -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,
     340,    -1,    87,  1534,  3048,    -1,    -1,    -1,    -1,    -1,
    3054,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,  3066,  3067,    -1,    -1,    -1,    -1,    -1,  3073,
      -1,    -1,    -1,    -1,    -1,  3079,   376,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   384,  2764,    -1,    -1,    -1,    -1,
      -1,    -1,   513,    -1,  3098,    -1,   396,    -1,  3102,    -1,
      -1,    -1,  1593,   524,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  3032,  3033,    -1,    -1,    -1,    -1,    -1,  1609,    -1,
      -1,    -1,    -1,   544,    -1,    -1,    -1,    -1,   173,    -1,
     430,    -1,    -1,  3054,   434,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   443,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3073,    -1,   454,    -1,    -1,    -1,    -1,    -1,
     205,    -1,   207,   208,   209,    -1,  1657,    -1,  1659,    -1,
      -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  3102,   227,   228,    -1,    -1,    -1,    -1,    -1,    -1,
     490,    -1,    -1,   493,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1703,    -1,  1705,    -1,   261,    -1,    -1,    -1,
      -1,    -1,   267,   268,   269,    -1,    -1,   272,    -1,   274,
     275,   276,    -1,    -1,    -1,   280,   281,   282,    -1,    -1,
      -1,    -1,    -1,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   318,    -1,  1766,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1779,    -1,
      -1,    -1,    -1,   338,    -1,    -1,    -1,   342,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1807,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   370,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3032,  3033,    -1,    -1,   402,   403,   404,
     405,    -1,    -1,  1854,  1855,  1856,    -1,    -1,    -1,    -1,
    1861,  1862,    -1,   418,    -1,  3054,  1867,  1868,  1869,    -1,
    1871,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  3073,    -1,   441,    -1,    -1,    -1,
      -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,   463,    -1,
      -1,    -1,    -1,  3102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1925,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1934,  1935,  1936,  1937,  1938,     9,  1940,
      -1,    -1,    -1,    -1,   499,    -1,    -1,     1,    -1,     3,
      -1,     5,    -1,    -1,   509,    -1,    10,    -1,   513,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,   524,
      -1,    -1,    -1,  1974,    -1,   530,    -1,  1978,    -1,    -1,
     535,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   543,   544,
     545,    -1,    -1,    -1,    -1,    -1,   551,    -1,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
    2031,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,  2055,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,   126,     6,   128,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,    -1,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,    -1,    -1,    -1,    -1,   170,    50,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   207,   208,   209,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,   210,   228,    -1,    92,
      -1,    -1,    -1,   217,    -1,    -1,   220,   221,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,   240,    -1,    -1,   243,
      -1,    -1,  2193,   247,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,   274,   275,   276,    -1,    -1,    -1,   280,
      -1,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2228,    -1,  2230,
      -1,   285,    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,
    2251,   305,   323,    -1,    -1,    -1,   310,   311,   312,    -1,
     314,   315,   316,   317,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   207,   208,   209,   331,    -1,    -1,
      -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,
     344,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   370,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   373,
     374,   375,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,
      -1,   385,   403,    -1,   267,    -1,   269,    -1,    -1,   272,
      -1,   274,   275,   276,   398,    -1,   400,   280,  2349,   282,
      -1,    -1,    -1,   407,    -1,   288,    -1,   411,    -1,    -1,
      -1,    -1,    -1,    -1,  2365,  2366,   420,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,   432,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   442,   443,
     323,   462,   463,    -1,    -1,   328,    -1,    -1,   452,    -1,
      -1,    -1,    -1,   457,   458,    -1,    -1,    -1,    -1,   342,
     464,    -1,   466,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   476,    -1,    -1,    -1,    -1,    -1,   499,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   490,   370,   509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   500,    -1,    -1,   382,
      -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,   530,
      -1,   515,    -1,    -1,   535,  2466,   520,    -1,    -1,    -1,
     403,    -1,   543,    -1,   545,    -1,    -1,    -1,    -1,    -1,
     551,    -1,  2483,    -1,  2485,  2486,    -1,    -1,   542,    -1,
    2491,    -1,    -1,    -1,   548,    -1,    -1,    -1,    -1,   553,
     554,    -1,    -1,  2504,    -1,    -1,    -1,    -1,   441,    -1,
      -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,
     463,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
      -1,    -1,  2543,  2544,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,  2558,    -1,    -1,
    2561,  2562,    -1,    -1,    -1,    -1,   499,    -1,  2569,  2570,
    2571,    -1,    -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,
      -1,    -1,  2583,   516,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   530,    64,    -1,
      -1,    -1,   535,    -1,    -1,   538,    -1,    -1,    -1,    75,
     543,    -1,   545,    79,    -1,    -1,    -1,    -1,   551,    -1,
    2621,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,  2633,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2646,    -1,    -1,  2649,    -1,
     116,    -1,    -1,  2654,  2655,    -1,    -1,   123,    -1,    -1,
     126,    -1,   128,  2664,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2684,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2692,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2710,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,   240,    -1,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2798,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,
      -1,    -1,    -1,    -1,   290,    -1,   292,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   302,     1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,  2853,    -1,    18,    -1,    -1,  2858,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   331,    -1,  2868,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,   373,   374,   375,
      -1,    75,    -1,    -1,    -1,    79,    -1,    -1,    -1,   385,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    93,
      -1,    -1,   398,    -1,   400,    -1,    -1,    -1,    -1,    -1,
      -1,   407,    -1,  2944,    -1,   411,    -1,  2948,    -1,    -1,
      -1,    -1,   116,    -1,   420,    -1,    -1,    -1,    -1,   123,
      -1,    -1,   126,    -1,   128,    -1,   432,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,    60,    -1,   443,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   452,    -1,    -1,    -1,
      -1,   457,   458,    -1,     9,    -1,    -1,    -1,   464,    -1,
     466,   165,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     476,    -1,    -1,   177,    -1,    -1,    -1,    -1,   182,   104,
      -1,    -1,    -1,    -1,   490,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   508,    -1,    -1,    60,   210,    -1,    -1,   515,
      -1,    -1,    -1,   217,   520,    -1,   220,   221,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    87,    -1,   238,    -1,   240,    -1,    -1,   243,
      -1,    -1,   548,    -1,    -1,    -1,    -1,   553,   554,   104,
       1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,   207,   208,   209,    -1,   290,    -1,   292,    -1,
      -1,   216,    -1,    -1,    -1,    -1,    -1,     6,   302,    -1,
       9,    52,    53,   228,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,   331,    79,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,   192,    -1,    -1,
     344,    -1,    93,    -1,    -1,    -1,    -1,   272,    -1,   274,
     275,   276,   207,   208,   209,   280,    -1,   282,    -1,    -1,
      -1,   216,    -1,    -1,    -1,   116,    -1,    -1,    -1,   373,
     374,   375,   123,   228,    -1,   126,    -1,   128,    87,    -1,
      -1,   385,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,
      99,    -1,    -1,    -1,   398,   104,   400,    -1,   323,    -1,
      -1,    -1,   257,   407,    -1,    -1,    -1,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,   420,   272,    -1,   274,
     275,   276,    -1,    -1,    -1,   280,   177,   282,   432,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   443,
      -1,    -1,    -1,    -1,    -1,   370,    -1,    -1,   452,    -1,
      -1,    -1,    -1,   457,   458,    -1,    -1,    -1,    -1,   210,
     464,    -1,   466,    -1,    -1,    -1,   217,    -1,   323,   220,
     221,    -1,   476,    -1,    -1,    -1,    -1,    -1,   403,    -1,
     231,    -1,    -1,    -1,    -1,    -1,   490,   238,    -1,   240,
      -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,   207,   208,
     209,    -1,    -1,    -1,   508,    -1,    -1,   216,    -1,    -1,
      -1,   515,    -1,    -1,    -1,   370,   520,    -1,    -1,   228,
      -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,    -1,    -1,   462,   463,   290,
      -1,   292,    -1,    -1,   548,    -1,    -1,    -1,   403,   553,
     554,   302,   261,    -1,    -1,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,   272,    -1,   274,   275,   276,    -1,    -1,
      -1,   280,    -1,   282,   499,    -1,    -1,    -1,    -1,   288,
     331,    -1,   507,    -1,   509,    -1,    -1,     3,    -1,     5,
      -1,    -1,   447,   344,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,   530,    -1,   462,   463,    -1,
     535,    -1,    -1,    -1,   323,    -1,    -1,    -1,   543,    -1,
     545,    -1,   373,   374,   375,    -1,   551,    -1,    -1,    -1,
      -1,    -1,    -1,   342,   385,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,   499,    -1,    -1,   398,    64,   400,
      -1,    -1,   507,    -1,   509,    -1,   407,    -1,    -1,    75,
     411,   370,    -1,    79,    -1,    -1,    -1,    -1,    -1,   420,
      -1,    -1,    -1,    -1,    -1,   530,    -1,    93,    -1,    -1,
     535,   432,    -1,    -1,    -1,    -1,    -1,    -1,   543,    -1,
     545,    -1,   443,    -1,   403,    -1,   551,    -1,    -1,    -1,
     116,   452,    -1,    -1,    -1,    -1,   457,   458,    -1,    -1,
     126,    -1,   128,   464,    -1,   466,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,    -1,   476,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   447,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
      -1,    -1,    -1,   462,   463,    -1,    -1,   508,    -1,    -1,
      -1,   177,    -1,    -1,   515,    -1,   182,    -1,    -1,   520,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     499,    -1,    -1,    -1,   210,    -1,    -1,   548,    -1,    -1,
     509,   217,   553,   554,   220,   221,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,   530,   238,    -1,   240,    -1,   535,   243,    -1,    -1,
      -1,    -1,    -1,    -1,   543,    -1,   545,    -1,    -1,    -1,
      -1,    -1,   551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,   285,
      -1,    -1,    -1,    -1,   290,    -1,   292,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,   302,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,   331,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   373,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,   385,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,   400,    -1,    -1,    -1,    -1,    -1,
      -1,   407,    -1,    -1,    -1,   411,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   432,   172,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   443,   183,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   452,    -1,    -1,    -1,
      -1,   457,   458,    -1,    -1,    -1,    -1,   172,   464,    -1,
     466,    -1,   207,   208,   209,    -1,    -1,    -1,   183,    -1,
     476,   216,    -1,    -1,    -1,    -1,    -1,   222,   223,    -1,
      -1,    -1,    -1,   228,   490,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   207,   208,   209,    -1,    -1,    -1,    -1,    -1,
      -1,   216,   508,   248,    -1,    -1,    -1,   222,   223,   515,
      -1,    -1,    -1,   228,   520,    -1,   261,   262,   263,    -1,
      -1,    -1,   267,    -1,   269,    -1,    -1,   272,    -1,   274,
     275,   276,    -1,    -1,    -1,   280,    -1,   282,    -1,    -1,
      -1,    -1,   548,   288,    -1,    -1,   261,   262,   263,    -1,
      -1,    -1,   267,    -1,   269,    -1,   301,   272,    -1,   274,
     275,   276,    -1,   308,    -1,   280,    -1,   282,   313,    -1,
      -1,    -1,    -1,   288,    -1,    -1,   321,    -1,   323,    -1,
      -1,    -1,    -1,   328,    -1,    -1,   301,    -1,   333,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,   342,   313,    -1,
       6,    -1,    -1,     9,    -1,    -1,   321,   352,   323,    -1,
      -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    -1,   370,    -1,   342,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,   352,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   370,    -1,    -1,   403,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,   462,   463,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   487,    -1,   489,    -1,   491,   462,   463,   494,
      -1,   496,   497,   498,   499,    -1,   501,   502,    -1,    -1,
      -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,   174,    -1,
      -1,    -1,   487,    -1,   489,    -1,   491,     6,    -1,   494,
       9,   496,   497,   498,   499,   530,   501,   502,    -1,   165,
     535,    -1,    -1,    -1,   509,    -1,    -1,    -1,   543,    -1,
     545,   207,   208,   209,    -1,    -1,   551,    -1,    -1,    -1,
     216,    -1,   218,    -1,    -1,   530,    -1,    -1,    -1,    -1,
     535,    -1,   228,    -1,    -1,    -1,    -1,    -1,   543,    -1,
     545,   207,   208,   209,    -1,    -1,   551,    -1,    -1,    -1,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,   261,    -1,    -1,    87,    -1,
      -1,   267,    -1,   269,    -1,    -1,   272,    -1,   274,   275,
     276,    -1,    -1,    -1,   280,   104,   282,    -1,    -1,    -1,
      -1,    -1,   288,    -1,    -1,   261,    -1,    -1,    -1,    -1,
      -1,   267,    -1,   269,    -1,    -1,   272,    -1,   274,   275,
     276,   307,    -1,    -1,   280,    -1,   282,    -1,    -1,    -1,
      -1,    -1,   288,    -1,    -1,    -1,    -1,   323,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,   323,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   370,    -1,   342,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,   208,
     209,     6,    -1,    -1,     9,    -1,    -1,   216,    -1,    -1,
      -1,    -1,    -1,    -1,   370,   401,    -1,   403,    -1,   228,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,   403,    -1,    -1,
      -1,    -1,   261,    -1,    99,    -1,    -1,    -1,   267,   104,
     269,   447,    -1,   272,    -1,   274,   275,   276,    -1,    -1,
      -1,   280,    -1,   282,    -1,    -1,   462,   463,    -1,   288,
      -1,    -1,    87,    -1,    -1,    -1,     6,    -1,    -1,     9,
      -1,   447,    -1,    -1,    99,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,   462,   463,    -1,    -1,
      -1,    -1,    -1,   499,   323,    -1,    -1,    -1,    -1,   328,
      -1,    -1,    -1,   509,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   342,    -1,    -1,   492,    -1,    -1,    -1,
      -1,    -1,    -1,   499,   530,    -1,    -1,   503,    -1,   535,
      -1,    -1,    -1,   509,    -1,    -1,    -1,   543,   544,   545,
      -1,   370,   207,   208,   209,   551,    -1,    87,    -1,    -1,
      -1,   216,    -1,    -1,   530,    -1,    -1,    -1,    -1,   535,
      -1,    -1,    -1,   228,   104,    -1,    -1,   543,    -1,   545,
      -1,    -1,    -1,    -1,   403,   551,    -1,    -1,    -1,    -1,
      -1,    -1,   207,   208,   209,    -1,    -1,    -1,    -1,    -1,
      -1,   216,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
      -1,    -1,   267,   228,   269,    -1,    -1,   272,    -1,   274,
     275,   276,    -1,    -1,    -1,   280,    -1,   282,   447,    -1,
      -1,    -1,    -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   462,   463,    -1,   261,    -1,    -1,    -1,
      -1,    -1,   267,    -1,   269,     6,    -1,   272,     9,   274,
     275,   276,    -1,    -1,    -1,   280,    -1,   282,   323,    -1,
      -1,    -1,    -1,   288,    -1,    -1,    -1,   207,   208,   209,
     499,    -1,    -1,    -1,    -1,    -1,   216,   342,    -1,    -1,
     509,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,   530,    -1,    -1,    -1,   370,   535,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   543,    -1,   545,   342,    -1,    -1,
      -1,   261,   551,    -1,    -1,    -1,    87,   267,    -1,   269,
       6,    -1,   272,     9,   274,   275,   276,    -1,   403,    -1,
     280,    -1,   282,   104,    -1,   370,    -1,    -1,   288,    -1,
      -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   447,   323,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,   463,    -1,
      -1,    -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,   104,    -1,
     370,    -1,    -1,    -1,   499,    -1,    87,   462,   463,    -1,
      -1,    -1,    -1,    -1,   509,    -1,   207,   208,   209,    -1,
      -1,    -1,    -1,   104,    -1,   216,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   403,    -1,   530,    -1,   228,    -1,    -1,
     535,    -1,    -1,    -1,   499,    -1,    -1,    -1,   543,    -1,
     545,    -1,    -1,    -1,   509,    -1,   551,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     261,    -1,    -1,    -1,    -1,   530,   267,   447,   269,    -1,
     535,   272,    -1,   274,   275,   276,    -1,    -1,   543,   280,
     545,   282,   462,   463,    -1,    -1,   551,   288,    -1,    -1,
      -1,   207,   208,   209,     6,    -1,    87,     9,    -1,    -1,
     216,    -1,    -1,    -1,    -1,   485,    -1,    -1,    -1,    -1,
      -1,    -1,   228,   104,    -1,    -1,   207,   208,   209,   499,
     211,    -1,   323,    -1,    -1,   216,    -1,   328,   244,   509,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   342,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,
     530,   267,    -1,   269,    -1,   535,   272,    -1,   274,   275,
     276,    -1,    -1,   543,   280,   545,   282,    -1,    -1,   370,
     261,   551,   288,    -1,    -1,    87,   267,    -1,   269,     6,
      -1,   272,     9,   274,   275,   276,    -1,    -1,    -1,   280,
      -1,   282,   104,    -1,    -1,    -1,    -1,   288,    -1,    -1,
      -1,    -1,   403,    -1,    -1,    -1,    -1,   323,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   207,   208,   209,    -1,
      -1,    -1,    -1,    -1,    -1,   216,   342,    -1,    -1,    -1,
      -1,    -1,   323,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,
      -1,   342,    -1,    -1,   370,    -1,    -1,    -1,    -1,    -1,
      87,   462,   463,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     261,    -1,    -1,    -1,    -1,    -1,   267,   104,   269,   370,
      -1,   272,    -1,   274,   275,   276,    -1,   403,    -1,   280,
      -1,   282,    -1,    -1,    -1,   207,   208,   209,   499,    -1,
      -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,   509,    -1,
      -1,    -1,   403,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   530,
      -1,   447,   323,    -1,   535,     6,    -1,    -1,     9,    -1,
      -1,    -1,   543,    -1,   545,    -1,   462,   463,    -1,   261,
     551,   342,    -1,    -1,    -1,   267,   447,   269,    -1,    -1,
     272,    -1,   274,   275,   276,    -1,    -1,    -1,   280,    -1,
     282,   462,   463,    -1,    -1,    -1,   288,    -1,    -1,   370,
     207,   208,   209,   499,    -1,    -1,    -1,    -1,    -1,   216,
      -1,    -1,    -1,   509,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,
      -1,   323,   403,    -1,   530,    -1,    87,    -1,   509,   535,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   543,    -1,   545,
     342,    -1,    -1,   104,   261,   551,    -1,    -1,    -1,   530,
     267,    -1,   269,    -1,   535,   272,    -1,   274,   275,   276,
      -1,    -1,   543,   280,   545,   282,   447,    -1,   370,    -1,
     551,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   462,   463,    -1,    -1,    -1,    -1,    -1,    -1,   470,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   403,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   497,    -1,   499,    -1,
     501,   502,    -1,    -1,    -1,   342,    -1,    -1,   509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   441,
      -1,    -1,    -1,    -1,    -1,   447,   207,   208,   209,   530,
      -1,    -1,    -1,   370,   535,   216,    -1,    -1,    -1,    -1,
     462,   463,   543,    -1,   545,    -1,    -1,   228,    -1,    -1,
     551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,
     261,    -1,    -1,    -1,    -1,    -1,   267,   509,   269,    -1,
      -1,   272,    -1,   274,   275,   276,    -1,    -1,    -1,   280,
      -1,   282,    -1,    -1,    -1,    -1,    -1,   288,   530,    -1,
     447,    -1,    -1,   535,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   543,    -1,   545,    -1,   462,   463,    -1,    -1,   551,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   342,   499,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   509,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   370,
      -1,    -1,    -1,   530,    -1,    -1,    -1,    -1,   535,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   543,    -1,   545,    -1,
      -1,    -1,    -1,    -1,   551,    -1,    -1,    -1,    -1,    -1,
      33,    -1,   403,    36,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,   447,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   462,   463,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,   499,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   530,
      -1,    -1,    -1,    -1,   535,    -1,    -1,    -1,    -1,    -1,
     173,    -1,   543,    -1,   545,    -1,    -1,    -1,    -1,    -1,
     551,    -1,    -1,    -1,    -1,    -1,     9,   190,    -1,    -1,
      -1,   194,   195,   196,   197,   198,    -1,    -1,   201,   202,
      -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,   211,    -1,
     213,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,
      -1,   224,    -1,    -1,   227,    -1,    -1,    -1,    51,    -1,
       1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,   251,    -1,
      21,    -1,    -1,    -1,   257,    -1,   259,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,   268,    37,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,   281,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,   304,    -1,   306,    -1,    -1,    -1,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,   325,    -1,   327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   338,   339,    -1,    -1,    -1,
      -1,    51,    -1,    -1,   347,    -1,    -1,   350,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    -1,   365,    -1,   367,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,   206,   207,   208,   209,    -1,    -1,    -1,
      -1,    -1,   395,   216,   104,    -1,    -1,    -1,    -1,   402,
      -1,   404,   405,    -1,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,   190,
     423,    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,
     201,   202,   435,    -1,   437,   438,   439,   260,   261,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   272,
      -1,   274,   275,   276,    -1,    -1,    -1,   280,    -1,   282,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,   471,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,
     251,    -1,   485,    -1,    -1,    -1,   257,   490,    -1,    -1,
      -1,    -1,   495,    -1,    -1,    -1,   206,   207,   208,   209,
     323,    -1,    -1,    -1,   507,    -1,   216,    -1,    -1,    -1,
     513,    -1,    -1,    -1,   517,   518,   519,    -1,   228,    -1,
      -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,   531,    -1,
      -1,    -1,    -1,   536,    -1,   538,    -1,    -1,    -1,    -1,
      -1,    -1,   545,    -1,    -1,    -1,    -1,   370,    -1,    -1,
     260,   261,    -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,   274,   275,   276,    -1,   339,    -1,
     280,    -1,   282,    -1,    -1,    -1,   347,    -1,    -1,   350,
     403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,
      -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,   462,
     463,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,   478,    -1,    -1,    -1,    -1,
     370,    -1,    -1,    -1,   435,    -1,   437,   438,   439,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,
      -1,    -1,    -1,   403,    -1,    -1,    -1,   468,   521,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   530,    -1,    -1,
      -1,    -1,   535,    -1,    -1,    -1,    -1,   540,    -1,   490,
     543,   544,   545,    -1,    -1,    -1,    -1,    -1,   551,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   507,   447,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   517,   518,   519,    -1,
      -1,    -1,   462,   463,   207,   208,   209,    -1,    -1,    -1,
     531,    -1,    -1,   216,    -1,    -1,    -1,   538,   478,    -1,
      -1,    -1,    -1,    -1,   545,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,   499,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   509,
      -1,    37,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,   521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,
     530,   274,   275,   276,    -1,   535,    -1,   280,    -1,   282,
     540,    -1,    -1,   543,   544,   545,    -1,    -1,    -1,    -1,
      -1,   551,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,
      -1,    -1,    36,    -1,    38,    39,    -1,    -1,    -1,    -1,
     323,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,    -1,    -1,    -1,    68,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   370,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
     196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,
     463,    -1,   248,    -1,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,   212,   213,
      -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,   509,    -1,   294,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   530,    -1,    -1,
      -1,    -1,   535,    -1,    -1,   259,    -1,    -1,    -1,   325,
     543,    -1,   545,    -1,   268,    -1,    -1,    -1,   551,    -1,
      -1,    -1,    -1,   339,    -1,   279,    -1,   281,    -1,    -1,
      -1,   347,    -1,    -1,   350,   289,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,
     304,    -1,   306,    33,    -1,    -1,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,   380,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    36,   338,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   367,   368,    68,    96,    70,    -1,   435,
      -1,   437,   438,   439,    -1,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    -1,   115,    -1,    -1,    -1,    -1,
      -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,   402,    -1,
     404,   405,   468,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,    -1,    -1,   423,
      -1,    -1,    -1,   126,   490,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,
      -1,   507,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   517,   518,   519,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   531,    -1,   471,    -1,    -1,
     173,    -1,   538,    -1,    -1,   205,    -1,    -1,   482,   483,
      -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   194,   195,   196,   197,   198,    -1,   227,   201,   202,
      -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,   211,   513,
     213,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,   523,
      -1,   224,    -1,    -1,   227,   529,    -1,    -1,    -1,   259,
      -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     544,    -1,    -1,    -1,    -1,   248,    -1,    -1,   251,   279,
      -1,   281,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,   306,    -1,   281,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   294,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,
      -1,   304,    -1,   306,    -1,    -1,    -1,    -1,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,    -1,   327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   338,   339,   367,   368,    -1,
      -1,    -1,    -1,    -1,   347,    -1,    -1,   350,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,   365,    -1,   367,   395,    -1,    -1,    -1,    -1,
      -1,    -1,   402,   104,   404,   405,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,    -1,   395,   423,    -1,    -1,    -1,    -1,    -1,   402,
      -1,   404,   405,    -1,    40,    41,    42,    43,    44,    45,
      -1,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,    -1,   437,   438,   439,    -1,    -1,    -1,
      -1,   471,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,   483,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   471,    -1,
      -1,    -1,    -1,   104,    -1,    -1,   207,   208,   209,    -1,
      -1,    -1,   485,   513,    -1,   216,    -1,   490,    -1,    -1,
     126,    -1,   495,   523,    -1,    -1,    -1,   228,    -1,   529,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     513,    -1,    -1,    -1,   517,   518,   519,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   531,    -1,
     261,    -1,    -1,   536,    -1,   538,   267,    -1,   269,    -1,
      -1,   272,    -1,   274,   275,   276,    -1,    -1,    -1,   280,
      -1,   282,    -1,    87,    -1,    -1,    -1,    -1,   194,   195,
     196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,   207,   208,   209,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   323,    -1,    -1,    -1,    -1,   228,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     261,    -1,    -1,    -1,    -1,    -1,   267,    -1,   269,   370,
      -1,   272,    -1,   274,   275,   276,    -1,    -1,    -1,   280,
      -1,   282,    -1,    -1,    -1,    -1,    -1,    -1,   294,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   403,   207,   208,   209,    -1,    -1,    -1,    -1,
      -1,   104,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,    -1,   228,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   342,    -1,    -1,   350,    -1,   447,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,   365,
      -1,   462,   463,   267,    -1,   269,    -1,    -1,   272,   370,
     274,   275,   276,    -1,    -1,    -1,   280,    -1,   282,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,   497,    -1,   499,    -1,
     501,   502,   403,    -1,    -1,    -1,    -1,    -1,   509,    -1,
      -1,   104,    -1,    -1,   207,   208,   209,    -1,    -1,   323,
      -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,   530,
      -1,   437,   438,   439,   535,   228,    -1,    -1,   342,    -1,
      -1,    -1,   543,    -1,   545,    -1,   447,    -1,    -1,    -1,
     551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   462,   463,    -1,    -1,    -1,   370,    -1,   261,    -1,
      -1,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,   272,
      -1,   274,   275,   276,    -1,    -1,   487,   280,    -1,   282,
      -1,    -1,    -1,    -1,    -1,    -1,   497,    -1,   499,   403,
     501,   502,    -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,
      -1,   517,   518,   519,   207,   208,   209,    -1,    -1,    -1,
      -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,   530,
     323,    -1,    -1,    -1,   535,   228,    -1,    87,    -1,    -1,
      -1,    -1,   543,   447,   545,    -1,    -1,    -1,    -1,   342,
     551,    -1,    -1,    -1,   104,    -1,    -1,    -1,   462,   463,
      -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,   261,    -1,
      -1,    -1,    -1,    -1,   267,    -1,   269,   370,    -1,   272,
      -1,   274,   275,   276,    -1,    -1,    -1,   280,    -1,   282,
      -1,    -1,    87,   497,    -1,   499,    -1,   501,   502,    -1,
      -1,    -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,   104,
     403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   530,    -1,    -1,    -1,
     323,   535,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   543,
      -1,   545,    -1,    -1,    -1,    -1,    -1,   551,    -1,   342,
      -1,    -1,    -1,    -1,   447,    -1,    -1,   207,   208,   209,
      -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,   462,
     463,    -1,    -1,    -1,    -1,    -1,    -1,   370,   228,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   487,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,   497,    -1,   499,    -1,   501,   502,
     403,   261,   207,   208,   209,    -1,   509,   267,    -1,   269,
     104,   216,   272,    -1,   274,   275,   276,    -1,    -1,    -1,
     280,    -1,   282,   228,    -1,    -1,    -1,   530,    -1,    -1,
      -1,    -1,   535,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     543,    -1,   545,    -1,   447,    -1,    -1,    -1,   551,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,   462,
     463,    -1,   267,   323,   269,    -1,    -1,   272,    -1,   274,
     275,   276,    -1,    -1,    -1,   280,    -1,   282,    -1,    -1,
      -1,    -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   497,    -1,   499,    -1,   501,   502,
      -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,
     370,    -1,    -1,   207,   208,   209,    -1,    -1,   323,    -1,
      -1,    -1,   216,    -1,    -1,    -1,    -1,   530,    -1,    -1,
      -1,    -1,   535,    -1,   228,    -1,    -1,   342,    -1,    -1,
     543,    -1,   545,   403,    -1,    -1,    -1,    -1,   551,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   370,    -1,   261,    -1,    -1,
      -1,    -1,    -1,   267,    -1,   269,    -1,    -1,   272,    -1,
     274,   275,   276,    -1,    -1,    -1,   280,   447,   282,    -1,
      -1,    -1,   397,    -1,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   462,   463,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,
      -1,   501,   447,    -1,    -1,    -1,    -1,    -1,   342,   509,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,   463,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     530,    -1,    -1,    -1,    -1,   535,   370,    -1,    -1,    -1,
      -1,    -1,    -1,   543,    -1,   545,    -1,    -1,    -1,    -1,
      -1,   551,    -1,    -1,   499,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,    -1,   403,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   530,    -1,    -1,    -1,    -1,
     535,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   543,    -1,
     545,    -1,    -1,    -1,    -1,    -1,   551,    -1,    -1,    -1,
      -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,   463,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   530,    -1,    -1,    -1,
      -1,   535,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   543,
      -1,   545,    -1,    -1,    -1,    -1,    -1,   551
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   557,   558,     0,   229,   230,   559,   560,   561,   562,
     563,   564,   565,   571,   129,   129,   561,   166,   570,   584,
     585,   215,   363,   572,   575,   490,   490,   129,   107,   698,
     700,    89,   586,   587,   576,   573,   570,   570,   490,   129,
     359,   879,   882,   493,   701,   422,   242,   649,   650,   324,
     446,   588,   589,   593,   490,   490,   154,   566,   567,   568,
     150,   569,   490,   129,   905,   906,   422,   702,   490,   422,
     188,   651,   490,   490,   448,   610,   593,   589,   272,   364,
     577,   577,   272,   364,   578,   568,   578,    58,   536,   883,
       1,     3,     5,    10,    18,    52,    53,    64,    75,    79,
      93,   116,   123,   126,   128,   138,   165,   177,   182,   210,
     217,   220,   221,   231,   238,   240,   243,   285,   290,   292,
     302,   331,   344,   373,   374,   375,   385,   398,   400,   407,
     411,   420,   432,   443,   452,   457,   458,   464,   466,   476,
     490,   508,   515,   520,   548,   553,   554,   907,   908,   926,
     931,   935,   940,   960,   964,   968,   972,   973,   974,   979,
     984,   998,  1002,  1004,  1007,  1021,  1025,  1028,  1031,  1035,
    1036,  1040,  1050,  1053,  1071,  1073,  1076,  1080,  1087,  1099,
    1101,  1116,  1117,  1127,  1130,  1131,  1135,  1141,  1142,  1150,
    1157,  1173,  1183,  1192,  1197,  1206,  1210,  1212,  1215,  1218,
    1221,  1248,   907,   490,   187,   419,   699,   703,   704,   706,
     490,   490,   653,   594,   590,   490,    11,    61,   101,   103,
     105,   113,   178,   273,   321,   417,   467,   545,   611,   612,
     613,   614,   615,   621,   630,   632,   637,   640,   641,   643,
     644,   645,   646,   647,   648,    27,   579,   579,   490,   490,
     885,   884,   401,   891,     3,     5,    10,    18,    52,    53,
      64,    75,    79,    93,   116,   126,   128,   139,   142,   143,
     144,   145,   146,   147,   148,   149,   151,   152,   153,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     177,   182,   210,   217,   220,   221,   231,   238,   240,   243,
     285,   290,   292,   302,   331,   344,   373,   385,   400,   407,
     411,   420,   432,   443,   452,   457,   458,   464,   466,   476,
     490,   508,   515,   520,   548,  1404,  1405,  1406,   909,   927,
     932,   936,   941,   961,   965,   969,   975,   980,   985,   999,
    1003,  1005,  1008,  1022,  1026,  1029,  1032,   218,   401,   952,
    1024,  1037,  1041,  1051,  1054,  1072,  1074,  1077,   428,  1081,
    1088,  1102,  1118,  1128,  1132,  1136,  1143,  1158,  1174,  1184,
     272,   370,   413,   447,   551,  1196,  1198,  1207,   358,  1211,
    1213,   894,  1216,  1219,  1222,  1249,  1100,  1151,   547,   753,
     755,   756,     1,   545,  1320,   250,   426,   652,   654,    59,
      67,   284,   362,   425,   430,   545,   595,   596,   597,   598,
     599,   600,   601,   603,  1417,  1483,   591,   603,     1,   545,
    1335,  1335,   454,   435,  1452,   248,  1431,  1431,  1431,  1335,
     435,  1431,    60,  1418,   616,   394,   604,   613,   490,   614,
     234,   631,   272,   490,   574,    50,   886,   887,   888,  1416,
     886,   328,   545,   490,   328,   545,   910,   912,  1321,  1366,
    1367,  1370,     6,     9,    87,    99,   104,   207,   208,   209,
     216,   228,   261,   267,   269,   272,   274,   275,   276,   280,
     282,   288,   323,   342,   370,   403,   447,   462,   463,   499,
     509,   530,   535,   543,   545,   551,   928,  1314,  1340,  1341,
    1343,  1366,  1377,  1378,  1379,  1380,  1381,  1382,  1383,   261,
     497,   501,   502,   933,  1309,  1310,  1311,  1312,  1313,  1314,
    1346,  1366,  1378,  1380,   272,   937,   938,  1326,  1327,  1328,
    1370,   288,   453,   455,   942,   944,   272,   364,   962,   963,
    1353,  1366,   966,  1320,     6,   970,  1315,  1316,  1338,  1368,
    1369,  1370,  1378,   493,   976,  1320,   241,   249,   337,   475,
     981,   983,   272,   328,   986,   987,   988,   989,   991,  1340,
    1353,  1366,  1000,  1341,   981,   272,  1006,   492,   503,  1009,
    1010,  1011,  1297,  1298,  1299,   214,   343,   344,   362,   422,
    1023,  1027,  1337,  1338,  1030,  1370,   485,  1033,  1463,  1341,
    1296,  1297,  1042,  1337,   545,  1052,  1322,  1055,  1056,  1366,
    1377,  1380,  1175,  1361,  1362,  1370,    99,  1075,  1341,  1078,
    1341,   184,   241,   249,   337,  1082,  1083,  1084,    51,   206,
     260,   261,   272,   544,   764,  1089,  1093,  1094,  1095,  1326,
    1355,  1366,  1370,  1377,  1380,  1467,  1103,  1320,   545,  1119,
    1321,  1129,  1317,  1370,  1133,  1320,  1137,  1317,     9,  1144,
    1318,  1370,   166,   256,   288,  1159,  1162,  1163,  1166,  1167,
    1168,  1169,  1170,  1171,  1172,  1323,  1324,  1337,  1360,  1362,
    1370,  1175,  1185,  1320,  1193,  1199,  1200,  1201,  1341,    99,
    1208,  1340,  1214,  1322,   490,   545,   895,   896,   899,   900,
     905,  1217,  1363,  1366,  1220,  1320,  1223,  1366,  1250,  1317,
    1321,  1152,  1321,   422,    77,   734,   137,   433,   440,   757,
     758,   760,   770,   772,   774,  1391,   490,   705,   490,   308,
     332,  1399,   291,   415,   688,   689,   690,   691,   693,   430,
     441,    67,  1431,   490,   597,   490,   545,   596,    62,  1431,
     592,  1467,   622,  1431,  1431,  1431,  1330,  1370,    72,  1330,
    1431,  1431,  1330,   545,   633,   634,   635,  1336,   272,   327,
     329,   617,   619,   620,  1160,  1373,  1431,   490,   490,   545,
     580,  1431,   887,   441,   516,   889,   382,   538,   880,   234,
     326,  1473,   142,   925,   911,   286,  1439,   211,   501,  1371,
    1372,   326,  1443,  1379,  1366,   501,   501,   501,  1385,  1367,
    1378,  1380,  1473,  1473,   501,   501,   501,   501,  1473,   501,
    1385,   143,   930,   485,   929,  1341,   486,   501,  1384,   501,
     501,  1367,  1378,  1380,  1313,  1366,  1309,  1313,    60,   497,
     502,   489,   498,   183,   239,  1394,   938,   485,  1473,   144,
     959,   272,   364,   945,  1354,  1366,  1380,   963,  1320,   381,
     514,   967,  1467,  1479,  1443,   145,   971,   172,   491,  1316,
    1471,   412,  1400,  1371,  1372,   977,  1320,   146,   978,   376,
    1449,   475,  1460,   475,  1321,   147,   997,   179,   314,  1263,
    1265,  1267,   989,  1339,  1340,   990,   525,   526,   527,   528,
     148,  1001,    50,   244,   536,   946,   149,  1020,    17,   542,
    1012,  1013,  1014,  1016,    12,    13,    14,    20,    63,   172,
     183,   222,   223,   262,   263,   301,   308,   313,   321,   328,
     333,   352,   487,   489,   491,   494,   496,   497,   498,   501,
     502,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1341,   106,
    1024,  1338,  1325,   480,  1461,  1043,  1467,  1322,    97,   390,
     473,  1057,  1058,  1060,  1061,  1177,   501,  1371,  1341,   485,
     152,  1079,    50,  1083,   434,  1085,  1443,     1,    41,    42,
      43,    44,    45,    80,    81,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   350,   365,   765,   766,   767,   768,
     769,   787,   788,  1367,   765,  1094,   153,   490,  1090,  1092,
     521,   540,   481,   484,   478,   155,  1115,   302,   354,  1397,
     156,  1126,   286,   424,  1120,   211,  1251,   157,  1134,  1449,
     158,  1140,  1251,  1318,   159,  1149,   540,  1145,  1349,  1351,
    1366,  1378,  1380,   179,  1169,  1171,  1337,   485,  1324,   130,
     485,   522,  1161,    32,  1371,   160,  1191,   192,   253,   256,
    1187,   952,  1194,  1341,  1467,   161,  1205,   244,  1201,   117,
    1202,  1366,   162,  1209,   211,  1322,   422,   490,   490,   211,
     376,   378,  1450,   163,  1232,   117,  1224,   164,  1255,  1251,
     211,  1153,  1154,   490,   422,   277,   814,   545,   762,   762,
     762,   758,   490,     1,   190,   761,   762,   545,   707,   332,
    1335,   694,   376,   443,   444,   692,     1,   490,   690,  1431,
     430,  1373,   490,  1431,   545,  1331,   490,   112,  1431,   228,
     272,   282,   370,   447,   499,   551,   638,   639,  1376,  1330,
     272,   272,   507,   634,    22,   248,  1336,  1432,  1160,   248,
     454,  1445,  1431,   101,  1335,   605,   490,    76,   185,   379,
     495,   581,   582,   583,  1431,   441,   332,   890,   114,   892,
    1370,    31,    38,   212,   289,   913,   914,   915,   917,   920,
    1413,  1414,  1467,   100,    25,    26,    69,    71,    73,   108,
     109,   110,   166,   168,   175,   179,   268,   270,   482,   533,
     545,   916,  1324,  1470,  1307,  1309,   501,  1372,   165,   362,
    1347,  1367,   485,  1307,  1309,  1389,  1307,  1390,   487,  1307,
     545,   545,  1309,  1388,  1388,  1388,  1345,  1366,  1378,  1380,
    1387,   545,  1345,  1386,     6,  1315,  1341,  1370,  1378,   218,
    1379,  1309,  1345,  1307,   487,   239,  1395,  1310,  1310,  1311,
    1311,  1311,   401,   934,   361,   939,  1328,   943,   967,   278,
     304,   204,  1424,  1367,  1309,   289,  1401,  1372,  1320,   399,
    1108,  1109,  1110,   982,  1467,   902,   903,   902,  1266,  1267,
    1264,  1265,   524,   917,   920,   992,   993,   994,  1467,  1263,
    1263,  1263,  1263,  1341,  1315,  1341,   947,  1011,    21,   492,
     503,  1017,  1018,  1298,   542,  1014,  1015,   542,   902,  1463,
     248,  1301,   119,  1034,  1326,   139,   902,  1038,     9,    12,
      15,    16,   294,   295,   321,   322,  1044,  1048,   190,  1349,
       9,    60,   192,   257,   507,  1064,  1065,  1066,  1059,  1060,
     131,   329,   544,  1179,  1444,  1482,   485,  1337,  1315,  1341,
    1467,  1108,   765,   490,   902,   182,  1096,  1296,  1097,  1098,
    1366,  1326,     8,    38,  1253,  1449,   244,  1359,  1366,  1377,
    1380,   244,  1104,  1108,   141,  1146,  1366,  1146,   485,   485,
     485,  1160,   165,   492,   503,  1341,    50,    39,    47,   227,
     259,   281,   338,   404,   513,  1164,  1165,  1431,  1186,  1467,
    1341,   174,   307,  1366,  1416,   211,  1315,  1341,   901,  1373,
    1349,  1416,   244,  1227,  1252,  1253,  1366,  1155,  1467,   754,
     490,   422,   271,   816,   773,   775,   388,   490,   490,   759,
      90,    48,    66,   107,   255,   266,   376,   377,   391,   393,
     490,   538,   708,   709,   711,   715,   716,   719,   720,   726,
     729,   731,   732,  1431,   655,   493,  1422,    23,  1410,   490,
    1373,   273,   469,   534,   602,  1331,   289,    29,   133,   228,
     272,   282,   297,   370,   447,   450,   451,   551,   623,   624,
     625,   628,   639,   481,   642,  1467,   429,   272,   636,  1374,
    1445,   248,  1335,  1335,   618,   619,   214,   362,   606,   607,
     608,   583,   362,  1448,    76,    33,   115,  1373,  1431,   545,
     490,   881,   551,  1356,  1360,  1373,  1431,   175,   179,   312,
     314,  1256,  1258,  1259,  1261,  1262,   915,    68,    70,   268,
     351,   918,   919,  1469,   482,    33,    36,    39,    47,    96,
     115,   205,   213,   227,   259,   279,   281,   304,   306,   327,
     338,   367,   368,   395,   402,   404,   405,   418,   423,   441,
     471,   483,   513,   523,   529,   921,   922,   923,   924,  1256,
     550,   549,  1349,  1256,   253,   454,   319,   293,    74,   427,
     487,  1308,   488,  1309,   272,  1348,  1367,  1366,  1308,   487,
    1308,   487,   487,  1308,   487,   487,   487,  1308,   487,  1308,
     487,  1443,   317,   442,  1268,  1270,  1272,  1371,  1372,  1315,
     488,   487,   487,   485,  1396,   934,  1338,   485,  1326,   946,
     406,   387,  1268,  1431,   206,  1424,   247,   315,  1289,  1290,
    1292,  1294,   253,   904,   101,   102,   356,   545,   995,  1324,
     993,    36,    39,    46,    47,    96,   173,   205,   227,   281,
     318,   338,   418,   441,   513,   923,   996,   218,  1268,   218,
     948,   949,   950,  1416,    17,   481,  1019,   336,  1017,  1444,
     902,   139,   151,  1039,  1463,   390,  1045,  1463,   485,    50,
    1065,  1067,  1349,     9,    60,   257,   507,  1062,  1063,  1349,
    1364,  1366,   131,    67,   430,  1180,  1468,    28,   120,   800,
     234,   334,  1427,  1337,  1268,   218,     9,   304,   373,   687,
    1319,  1320,   153,  1091,     8,   211,  1104,  1366,  1366,   141,
     310,  1278,  1281,  1283,  1138,  1139,  1467,   902,   542,   542,
    1147,  1148,  1349,   327,  1348,  1341,  1160,  1160,  1160,  1160,
    1160,  1160,  1160,  1160,  1165,   308,   313,  1188,  1189,  1190,
    1302,  1398,  1289,   260,   441,  1481,   454,  1457,  1457,  1204,
    1467,   441,  1203,  1341,  1366,  1268,   218,   490,   485,     9,
    1225,  1226,  1392,  1228,  1366,  1204,  1228,  1108,     7,  1407,
    1252,   136,   140,   176,  1366,   755,   735,   490,   422,   391,
     818,   538,   808,   782,   783,  1431,  1370,   777,   763,  1431,
      91,  1419,  1431,   376,   378,  1478,  1478,  1431,  1419,  1431,
     289,  1440,  1431,    22,  1409,   326,   733,  1335,   185,   219,
     656,   474,  1459,  1424,    60,   546,  1477,   625,    17,   481,
    1376,   348,  1374,  1335,     9,   216,   545,   609,   545,     1,
     490,   608,    33,  1373,   893,   894,    48,  1260,  1261,   902,
    1257,  1258,   902,   319,  1441,  1441,  1441,   272,  1357,  1360,
    1375,  1431,  1431,   135,   924,    59,   441,   130,   522,  1431,
       8,  1408,  1256,  1309,   487,  1309,  1400,   470,  1384,   470,
    1384,  1330,  1384,  1384,  1384,  1345,   257,   507,  1384,  1367,
     902,   902,  1271,  1272,  1269,  1270,  1372,  1268,   487,  1309,
    1384,  1384,  1352,  1366,  1377,   951,   952,    35,   298,   299,
     300,   366,   505,   506,   510,  1402,  1309,   902,   902,  1293,
    1294,  1291,  1292,  1353,   905,  1431,   268,   416,   141,   169,
     171,   871,   872,  1421,  1431,   130,   522,  1431,  1315,  1316,
    1315,  1316,   949,   328,   889,    92,   382,   538,  1018,  1297,
     902,  1366,   902,   538,  1046,  1047,  1048,  1049,  1461,   538,
    1350,  1352,  1349,    50,     8,    38,  1068,  1069,  1070,  1063,
    1068,   204,   430,  1176,  1431,   253,  1433,   334,  1315,   336,
    1446,  1446,   330,   405,  1086,  1320,  1467,  1098,  1341,     7,
     233,  1105,  1106,  1107,  1109,  1112,  1139,  1467,   107,   305,
    1121,  1123,  1125,   902,   902,  1282,  1283,  1281,  1289,   278,
     304,  1297,  1296,  1147,  1302,  1366,  1303,  1304,  1305,  1306,
    1309,  1195,  1341,  1195,   316,   500,  1273,  1275,  1277,   350,
    1400,  1315,   897,  1350,   333,  1349,   118,  1229,   473,  1231,
    1138,   341,  1324,  1356,   390,  1156,   736,   815,   490,   422,
     416,   863,  1432,   808,   219,   481,   771,    21,    37,    40,
      41,    42,    43,    44,    45,    46,    78,    82,    83,    84,
      85,    86,   126,   194,   195,   196,   197,   198,   235,   251,
     294,   325,   339,   347,   350,   365,   380,   435,   437,   438,
     439,   468,   517,   518,   519,   531,   778,   779,   780,   783,
     784,   785,   786,   787,   788,   789,   792,   804,   805,   806,
     807,   808,   813,  1431,  1454,    27,   211,   776,  1412,   219,
    1373,   545,   670,  1431,  1409,   545,  1332,  1333,   328,   449,
    1474,   272,  1330,  1334,  1373,   540,  1431,   189,   229,   545,
     717,  1335,     4,    19,    30,   236,   268,   335,   340,   376,
     384,   396,   434,   443,   490,   493,   657,   658,   665,   667,
     669,   671,   672,   673,   674,   677,   678,   679,   680,   681,
     683,   684,   686,  1449,  1468,  1419,  1319,   626,   628,   272,
     245,   579,   216,   245,   579,   490,   894,  1356,  1356,  1356,
    1356,  1356,  1431,  1431,  1295,  1358,  1360,  1373,  1295,  1356,
    1357,   487,  1268,   487,   179,   314,   500,   954,   956,   958,
       6,   244,   309,   328,   499,   953,  1430,   421,   484,  1356,
    1443,   268,   416,  1356,  1295,  1295,  1356,  1268,   386,  1268,
     386,  1342,  1343,  1365,  1367,  1047,   107,  1420,  1463,  1068,
    1068,  1350,   495,  1429,  1429,  1070,  1069,   241,   536,  1181,
    1330,  1178,  1268,   278,   304,    50,  1444,   278,   253,  1113,
    1111,  1112,  1467,   232,   252,   541,   902,   902,  1124,  1125,
    1122,  1123,   278,   902,   902,   902,   902,  1276,  1277,  1274,
    1275,  1431,  1268,  1268,   532,   898,  1233,  1226,   234,  1426,
     100,  1230,  1426,  1273,   170,   311,  1254,  1284,  1286,  1288,
    1290,   268,   270,  1436,   268,  1435,    55,   737,   738,   755,
     817,   490,   422,   764,   810,   811,  1370,   260,   321,   436,
     516,  1453,   516,  1453,   516,  1453,   516,  1453,   516,  1453,
     542,  1465,   410,  1451,   132,  1373,  1367,   248,   258,   410,
    1434,  1431,   185,   257,   507,   545,   764,   485,   714,   204,
     730,  1333,   270,  1438,   485,  1418,  1426,   186,   193,   414,
     512,   537,   539,   727,   728,  1431,  1431,  1440,  1449,   485,
     536,  1464,   431,  1431,  1417,   118,  1433,  1433,   304,   685,
    1373,  1467,   454,   278,    40,  1415,  1431,   695,   696,  1320,
     627,   628,   141,  1353,  1356,   268,   270,  1480,   902,   902,
     902,   957,   958,   955,   956,  1443,  1366,  1316,  1316,    50,
     115,  1068,  1341,  1341,   359,  1319,   218,   337,  1182,  1370,
     406,  1341,   278,  1431,  1114,  1279,  1281,  1283,  1289,   278,
     278,  1366,  1234,   490,  1366,  1426,  1366,   902,   902,  1287,
    1288,  1285,  1286,  1335,   755,   755,   819,   490,   481,   809,
     811,   551,    54,   796,   485,   793,   786,    27,   781,   429,
    1403,  1403,  1373,    60,   378,   710,  1329,  1330,   721,  1373,
     441,  1455,   272,   718,  1370,   718,  1431,  1433,   132,   185,
     662,   384,   678,  1431,  1431,  1431,  1431,    23,    24,  1411,
     687,  1431,  1440,   431,   670,   696,   351,   697,    17,   114,
    1366,  1268,  1268,  1341,  1431,  1319,   359,   521,  1366,  1282,
    1280,  1281,    31,   134,   180,   219,  1235,  1236,  1237,  1239,
    1243,  1245,  1246,  1247,  1413,  1424,  1366,   739,   820,   864,
     764,   542,   812,  1466,  1426,   211,   794,  1373,   484,  1462,
     272,  1417,  1330,    49,   504,   722,   723,   724,   725,  1467,
    1418,   211,   713,  1425,   132,   371,   431,   666,  1431,   124,
     125,   126,   254,   268,   355,   356,   357,   371,   474,   659,
     660,   661,  1334,   450,   682,  1330,  1330,  1330,  1431,  1373,
     628,   490,  1093,  1431,  1296,    38,  1408,   362,   112,   740,
     372,   821,   760,   774,   865,   866,   867,   432,   492,   545,
    1373,   793,   119,   795,  1334,  1334,   203,   714,  1373,   682,
     272,   664,  1370,   664,     7,   664,   664,   272,   663,  1370,
     445,   491,    34,   181,   283,   675,  1093,   392,   449,  1456,
     141,   452,  1244,  1444,   490,   741,  1424,  1322,     1,   761,
     867,   490,   485,  1431,   239,   797,  1444,   798,   799,  1413,
    1418,  1393,  1482,  1422,  1431,  1329,   544,   676,   676,  1366,
     174,   179,  1472,     9,  1240,  1241,  1327,   337,  1429,   822,
     490,   868,   490,   764,   798,  1330,   236,   801,   800,  1334,
     119,   712,   466,   668,  1329,   278,   411,   359,  1447,   326,
     360,   383,  1242,  1241,   121,   174,   454,   467,   477,   746,
     747,   748,   241,   249,     1,   823,   869,   801,  1416,  1433,
    1444,   542,   329,  1444,   326,  1370,   100,   472,  1431,   253,
     253,   121,   260,   748,   141,   286,   454,   467,   477,   742,
     743,   744,   745,  1366,  1439,  1458,   141,   286,   454,   477,
     749,   750,   751,   752,  1366,  1458,   490,    65,    94,    95,
     341,   490,   824,   825,   828,  1431,  1491,    33,    36,    39,
      46,    47,   173,   205,   211,   213,   224,   227,   259,   268,
     281,   304,   325,   338,   367,   395,   423,   471,   485,   495,
     513,   536,   784,   785,   789,   804,   806,   808,   870,   877,
     878,   922,   923,  1431,  1469,   545,   802,   803,  1431,  1330,
       9,   447,   551,   629,   291,   376,   378,  1476,   184,   241,
     249,   337,  1238,  1319,  1431,   325,  1366,  1431,  1431,  1431,
    1431,   253,   108,   482,   253,   260,   744,  1366,   100,   369,
     445,   459,   460,   461,   253,   108,   482,   253,   260,   751,
    1366,   475,  1431,  1431,  1409,   264,   265,  1437,   837,   219,
     191,   826,  1423,  1431,   268,   416,   871,   872,  1431,  1359,
    1441,  1373,    59,  1366,  1366,   219,  1441,   803,  1329,  1379,
    1476,  1366,  1373,  1366,  1366,  1366,  1366,  1431,  1431,  1431,
    1431,  1431,  1366,  1431,  1431,  1431,  1431,  1431,  1431,  1431,
    1431,  1431,  1431,  1431,  1366,  1431,  1353,  1431,  1409,   829,
    1375,   760,   838,   827,  1366,  1356,  1356,  1431,  1462,  1431,
    1431,  1462,  1366,  1366,  1366,  1366,  1366,  1366,  1366,  1366,
    1366,  1366,  1366,  1366,  1366,  1366,  1366,  1366,  1366,  1366,
    1366,   830,   268,   270,  1475,   761,   762,  1366,   287,   349,
     497,   502,   873,   874,   875,  1353,   873,   874,   876,   801,
    1366,  1366,   192,   203,   226,   256,   831,   832,   833,   834,
     835,   836,  1375,   839,  1356,  1356,  1366,  1366,   111,   122,
    1484,  1431,  1431,    57,    94,  1484,  1485,  1470,   840,  1366,
    1431,  1375,  1375,   226,  1431,  1431,   225,   268,   270,   302,
     325,   353,   445,   465,   490,   511,   531,   540,   784,   789,
     790,   804,   806,   808,   841,   842,   846,   847,   850,   851,
     852,   853,   854,   855,   860,   861,   862,  1469,  1470,  1366,
    1375,  1375,  1375,   237,  1428,   319,   320,  1442,  1409,   225,
    1373,   542,  1431,  1443,  1431,  1431,  1366,   303,   349,   856,
     857,  1375,   349,   858,   859,  1375,  1442,  1409,  1366,  1432,
    1431,   793,  1296,  1346,  1344,  1346,    56,    94,   341,   345,
     346,   391,   408,   409,   843,  1484,  1485,  1486,  1487,  1488,
    1489,  1490,   126,   211,  1373,   857,  1373,   859,  1432,  1366,
     857,  1462,  1400,   397,   848,  1346,   203,   203,   226,   203,
     226,   191,   844,  1366,   844,  1346,  1366,   795,  1444,   333,
     845,   845,    50,   456,   791,   191,   849,  1366,   341,  1346,
    1373
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
#line 2270 "parser.y"
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
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 2282 "parser.y"
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
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 2318 "parser.y"
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

  case 18:
/* Line 1792 of yacc.c  */
#line 2369 "parser.y"
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[(2) - (3)]), CB_PROGRAM_TYPE);
  }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 2377 "parser.y"
    {
	  clean_up_program ((yyvsp[(2) - (3)]), CB_FUNCTION_TYPE);
  }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 2400 "parser.y"
    {
	cobc_in_id = 1;
  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 2404 "parser.y"
    {
	if (setup_program ((yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}

	setup_prototype ((yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]), CB_PROGRAM_TYPE, 1);
  }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 2412 "parser.y"
    {
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 2420 "parser.y"
    {
	cobc_in_id = 1;
  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 2424 "parser.y"
    {
	if (setup_program ((yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	setup_prototype ((yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), CB_FUNCTION_TYPE, 1);
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 2436 "parser.y"
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

  case 30:
/* Line 1792 of yacc.c  */
#line 2447 "parser.y"
    {
	cb_trim_program_id ((yyvsp[(1) - (1)]));
  }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 2455 "parser.y"
    {
	cb_trim_program_id ((yyvsp[(1) - (1)]));
  }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 2461 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 2462 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 2471 "parser.y"
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
/* Line 1792 of yacc.c  */
#line 2480 "parser.y"
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 2490 "parser.y"
    {
	CB_PENDING (_("CALL prototypes"));
  }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 2502 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 2506 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 2522 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 2539 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 2553 "parser.y"
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("phrases in non-standard order"));
	}
  }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 2565 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 2580 "parser.y"
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 2593 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 2622 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 2630 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 2637 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 2644 "parser.y"
    {
	if (current_program->classification) {
		cb_error (_("duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 2655 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 2659 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 2663 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 2667 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 2681 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 2686 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 2694 "parser.y"
    {
	yyerrok;
  }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 2706 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 2710 "parser.y"
    {
	if ((yyvsp[(2) - (3)]) != cb_error_node) {
		setup_prototype ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), CB_FUNCTION_TYPE, 0);
	}
  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 2717 "parser.y"
    {
	  if ((yyvsp[(2) - (3)]) != cb_error_node
	      && cb_verify (cb_program_prototypes, _("PROGRAM phrase"))) {
		setup_prototype ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), CB_PROGRAM_TYPE, 0);
	}
  }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 2727 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 2732 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 2743 "parser.y"
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

  case 118:
/* Line 1792 of yacc.c  */
#line 2788 "parser.y"
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

  case 120:
/* Line 1792 of yacc.c  */
#line 2817 "parser.y"
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

  case 121:
/* Line 1792 of yacc.c  */
#line 2828 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (save_tree, _("invalid %s clause"), "SPECIAL NAMES");
		} else if (CB_VALID_TREE ((yyvsp[(3) - (3)]))) {
			CB_SYSTEM_NAME(save_tree)->value = (yyvsp[(1) - (3)]);
			cb_define ((yyvsp[(3) - (3)]), save_tree);
			CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
					(yyvsp[(3) - (3)]), save_tree);
		}
	}
  }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 2841 "parser.y"
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[(2) - (3)]))) {
		cb_define ((yyvsp[(2) - (3)]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[(2) - (3)]), save_tree);
	}
  }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 2857 "parser.y"
    {
	  check_on_off_duplicate = 0;
  }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 2864 "parser.y"
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

  case 128:
/* Line 1792 of yacc.c  */
#line 2879 "parser.y"
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

  case 129:
/* Line 1792 of yacc.c  */
#line 2899 "parser.y"
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

  case 130:
/* Line 1792 of yacc.c  */
#line 2912 "parser.y"
    {
	if ((yyvsp[(3) - (5)])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[(3) - (5)]));
	}
	cobc_cs_check = 0;
  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 2923 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 2929 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 2935 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 2941 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 2947 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 2953 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 2963 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 2967 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 2974 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 2978 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 2982 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 2986 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 2993 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 2997 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 3003 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 3004 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 3005 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 3006 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 3007 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 3008 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 3012 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 3013 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 3021 "parser.y"
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

  case 154:
/* Line 1792 of yacc.c  */
#line 3035 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 3039 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 3047 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 3054 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 3058 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	} else {
		(yyval) = (yyvsp[(1) - (2)]);
	}
  }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 3069 "parser.y"
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

  case 160:
/* Line 1792 of yacc.c  */
#line 3089 "parser.y"
    {
	if ((yyvsp[(1) - (1)]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 3097 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) == NULL) {
		(yyval) = (yyvsp[(1) - (2)]);
	} else {
		(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 3107 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 3108 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 3115 "parser.y"
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

  case 165:
/* Line 1792 of yacc.c  */
#line 3135 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 3136 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 3141 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 3145 "parser.y"
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

  case 169:
/* Line 1792 of yacc.c  */
#line 3166 "parser.y"
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

  case 170:
/* Line 1792 of yacc.c  */
#line 3189 "parser.y"
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

  case 171:
/* Line 1792 of yacc.c  */
#line 3263 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 3267 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 3276 "parser.y"
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

  case 174:
/* Line 1792 of yacc.c  */
#line 3295 "parser.y"
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

  case 175:
/* Line 1792 of yacc.c  */
#line 3311 "parser.y"
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

  case 176:
/* Line 1792 of yacc.c  */
#line 3329 "parser.y"
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

  case 177:
/* Line 1792 of yacc.c  */
#line 3347 "parser.y"
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

  case 178:
/* Line 1792 of yacc.c  */
#line 3364 "parser.y"
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

  case 179:
/* Line 1792 of yacc.c  */
#line 3385 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 3392 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 3400 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 3409 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 3424 "parser.y"
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

  case 189:
/* Line 1792 of yacc.c  */
#line 3446 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(3) - (6)]))) {
		validate_file (current_file, (yyvsp[(3) - (6)]));
	}
  }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 3478 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 3484 "parser.y"
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

  case 207:
/* Line 1792 of yacc.c  */
#line 3494 "parser.y"
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

  case 208:
/* Line 1792 of yacc.c  */
#line 3507 "parser.y"
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

  case 209:
/* Line 1792 of yacc.c  */
#line 3520 "parser.y"
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

  case 210:
/* Line 1792 of yacc.c  */
#line 3546 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 3547 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 3548 "parser.y"
    { (yyval) = cb_int4; }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 3560 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 3567 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 3580 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 3592 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 3599 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 3600 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 3601 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 3609 "parser.y"
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

  case 232:
/* Line 1792 of yacc.c  */
#line 3632 "parser.y"
    { }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 3635 "parser.y"
    {
	CB_PENDING ("SUPPRESS WHEN ALL");
  }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 3640 "parser.y"
    {
	CB_PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 3650 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	CB_PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 3658 "parser.y"
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

  case 237:
/* Line 1792 of yacc.c  */
#line 3673 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 3688 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 3696 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 3701 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 3706 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 3715 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 3719 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	CB_PENDING ("WITH ROLLBACK");
  }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 3735 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 3740 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 3745 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 3750 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 3761 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 3772 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 3782 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 3789 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 3790 "parser.y"
    { CB_PENDING ("SPLIT KEYS"); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 3791 "parser.y"
    { CB_PENDING ("SPLIT KEYS"); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 3798 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 3809 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 3823 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 3830 "parser.y"
    { (yyval) = NULL; }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 3831 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 3832 "parser.y"
    { (yyval) = NULL; }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 3841 "parser.y"
    {
	yyerrok;
  }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 3860 "parser.y"
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

  case 278:
/* Line 1792 of yacc.c  */
#line 3887 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 3888 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 3889 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 3890 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 3897 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 3902 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 3931 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 3940 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 3947 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 3956 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 3970 "parser.y"
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

  case 298:
/* Line 1792 of yacc.c  */
#line 3989 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION,
			       COBC_HD_FILE_SECTION, 0, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)])) || cb_ref ((yyvsp[(2) - (2)])) == cb_error_node) {
		YYERROR;
	}
	current_file = CB_FILE (cb_ref ((yyvsp[(2) - (2)])));
	cobc_xref_link (&current_file->xref, cb_source_line);
	if (CB_VALID_TREE (current_file)) {
		if ((yyvsp[(1) - (2)])) {
			current_file->organization = COB_ORG_SORT;
		}
	}
  }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 4007 "parser.y"
    {
	yyerrok;
  }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 4014 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 4018 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 4029 "parser.y"
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

  case 306:
/* Line 1792 of yacc.c  */
#line 4039 "parser.y"
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

  case 316:
/* Line 1792 of yacc.c  */
#line 4069 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 4082 "parser.y"
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

  case 321:
/* Line 1792 of yacc.c  */
#line 4102 "parser.y"
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

  case 322:
/* Line 1792 of yacc.c  */
#line 4137 "parser.y"
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

  case 324:
/* Line 1792 of yacc.c  */
#line 4168 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 4174 "parser.y"
    { (yyval) = NULL; }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 4175 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 4179 "parser.y"
    { (yyval) = NULL; }
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 4180 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 4188 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 4199 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 4204 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	}
  }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 4227 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 4239 "parser.y"
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

  case 343:
/* Line 1792 of yacc.c  */
#line 4267 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 4274 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 4281 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 4290 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 4303 "parser.y"
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("RECORDING MODE U or S can only be used with RECORD SEQUENTIAL files"));
	}
  }
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 4319 "parser.y"
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

  case 356:
/* Line 1792 of yacc.c  */
#line 4357 "parser.y"
    {
	  if (warningopt) {
		  CB_PENDING ("FOR sub-records");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[(2) - (2)]));
  }
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 4370 "parser.y"
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

  case 360:
/* Line 1792 of yacc.c  */
#line 4390 "parser.y"
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

  case 361:
/* Line 1792 of yacc.c  */
#line 4400 "parser.y"
    {
	current_report = build_report ((yyvsp[(2) - (2)]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 4414 "parser.y"
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

  case 367:
/* Line 1792 of yacc.c  */
#line 4435 "parser.y"
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

  case 368:
/* Line 1792 of yacc.c  */
#line 4450 "parser.y"
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

  case 416:
/* Line 1792 of yacc.c  */
#line 4558 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 4564 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 4573 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 419:
/* Line 1792 of yacc.c  */
#line 4576 "parser.y"
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 420:
/* Line 1792 of yacc.c  */
#line 4582 "parser.y"
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 4602 "parser.y"
    {
	if (set_current_field ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]))) {
		YYERROR;
	}
  }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 4608 "parser.y"
    {
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 4617 "parser.y"
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

  case 429:
/* Line 1792 of yacc.c  */
#line 4630 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 4637 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 4643 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 4653 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 4662 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 4666 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 4677 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 4678 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 4679 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 4680 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 4685 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 4689 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 4693 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 4697 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 4701 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 4705 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 4709 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 4713 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 4717 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 4721 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 4725 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 4729 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 4733 "parser.y"
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 4765 "parser.y"
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

  case 463:
/* Line 1792 of yacc.c  */
#line 4789 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 4793 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]) == cb_error_node ? NULL : (yyvsp[(2) - (2)]);
  }
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 4800 "parser.y"
    {
	if (set_current_field ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]))) {
		YYERROR;
	}
  }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 4806 "parser.y"
    {
	cb_validate_88_item (current_field);
  }
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 4813 "parser.y"
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

  case 468:
/* Line 1792 of yacc.c  */
#line 4836 "parser.y"
    {
	if (set_current_field ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]))) {
		YYERROR;
	}
  }
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 4842 "parser.y"
    {
	/* Reset to last non-78 item */
	current_field = cb_validate_78_item (current_field, 0);
  }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 4850 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 4854 "parser.y"
    {
	CB_PENDING ("CONSTANT FROM");
	(yyval) = NULL;
  }
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 4862 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 4868 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 4895 "parser.y"
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

  case 488:
/* Line 1792 of yacc.c  */
#line 4919 "parser.y"
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

  case 489:
/* Line 1792 of yacc.c  */
#line 4946 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 4950 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 4963 "parser.y"
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

  case 494:
/* Line 1792 of yacc.c  */
#line 4988 "parser.y"
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 5004 "parser.y"
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 5008 "parser.y"
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 5012 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 5016 "parser.y"
    {
	check_and_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 5020 "parser.y"
    {
	check_and_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 5024 "parser.y"
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 5028 "parser.y"
    {
	check_and_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 5032 "parser.y"
    {
	check_and_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 505:
/* Line 1792 of yacc.c  */
#line 5036 "parser.y"
    {
	check_and_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 5040 "parser.y"
    {
	check_and_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 507:
/* Line 1792 of yacc.c  */
#line 5044 "parser.y"
    {
	check_and_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 5048 "parser.y"
    {
	check_and_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 5052 "parser.y"
    {
	check_and_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 510:
/* Line 1792 of yacc.c  */
#line 5057 "parser.y"
    {
	check_and_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 5062 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 5066 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 5070 "parser.y"
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 5078 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 5082 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 516:
/* Line 1792 of yacc.c  */
#line 5086 "parser.y"
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
    break;

  case 517:
/* Line 1792 of yacc.c  */
#line 5094 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 518:
/* Line 1792 of yacc.c  */
#line 5098 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 519:
/* Line 1792 of yacc.c  */
#line 5102 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 5106 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 521:
/* Line 1792 of yacc.c  */
#line 5110 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 522:
/* Line 1792 of yacc.c  */
#line 5114 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 5118 "parser.y"
    {
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 5122 "parser.y"
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 525:
/* Line 1792 of yacc.c  */
#line 5126 "parser.y"
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
    break;

  case 526:
/* Line 1792 of yacc.c  */
#line 5134 "parser.y"
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 5142 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 5146 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 529:
/* Line 1792 of yacc.c  */
#line 5150 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 530:
/* Line 1792 of yacc.c  */
#line 5154 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 5158 "parser.y"
    {
	check_and_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 5162 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	CB_UNFINISHED ("USAGE NATIONAL");
  }
    break;

  case 537:
/* Line 1792 of yacc.c  */
#line 5182 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 538:
/* Line 1792 of yacc.c  */
#line 5189 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 539:
/* Line 1792 of yacc.c  */
#line 5203 "parser.y"
    {
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]));
  }
    break;

  case 541:
/* Line 1792 of yacc.c  */
#line 5212 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 542:
/* Line 1792 of yacc.c  */
#line 5222 "parser.y"
    {
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max ((yyvsp[(2) - (7)]), (yyvsp[(3) - (7)]));
  }
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 5229 "parser.y"
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

  case 544:
/* Line 1792 of yacc.c  */
#line 5245 "parser.y"
    { (yyval) = NULL; }
    break;

  case 545:
/* Line 1792 of yacc.c  */
#line 5246 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 546:
/* Line 1792 of yacc.c  */
#line 5250 "parser.y"
    { (yyval) = NULL; }
    break;

  case 547:
/* Line 1792 of yacc.c  */
#line 5251 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 5256 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 5263 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 5271 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 554:
/* Line 1792 of yacc.c  */
#line 5278 "parser.y"
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

  case 555:
/* Line 1792 of yacc.c  */
#line 5301 "parser.y"
    { (yyval) = NULL; }
    break;

  case 556:
/* Line 1792 of yacc.c  */
#line 5304 "parser.y"
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

  case 557:
/* Line 1792 of yacc.c  */
#line 5319 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 558:
/* Line 1792 of yacc.c  */
#line 5320 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 560:
/* Line 1792 of yacc.c  */
#line 5325 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 561:
/* Line 1792 of yacc.c  */
#line 5331 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 562:
/* Line 1792 of yacc.c  */
#line 5333 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 563:
/* Line 1792 of yacc.c  */
#line 5338 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 564:
/* Line 1792 of yacc.c  */
#line 5349 "parser.y"
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
    break;

  case 565:
/* Line 1792 of yacc.c  */
#line 5360 "parser.y"
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
    break;

  case 566:
/* Line 1792 of yacc.c  */
#line 5371 "parser.y"
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 567:
/* Line 1792 of yacc.c  */
#line 5382 "parser.y"
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

  case 568:
/* Line 1792 of yacc.c  */
#line 5410 "parser.y"
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 570:
/* Line 1792 of yacc.c  */
#line 5418 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 571:
/* Line 1792 of yacc.c  */
#line 5419 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 572:
/* Line 1792 of yacc.c  */
#line 5423 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 573:
/* Line 1792 of yacc.c  */
#line 5424 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 575:
/* Line 1792 of yacc.c  */
#line 5429 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 576:
/* Line 1792 of yacc.c  */
#line 5441 "parser.y"
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else {
		current_field->flag_any_length = 1;
	}
  }
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 5450 "parser.y"
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

  case 579:
/* Line 1792 of yacc.c  */
#line 5465 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
    break;

  case 580:
/* Line 1792 of yacc.c  */
#line 5474 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 5486 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 5492 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 5503 "parser.y"
    {
	CB_PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 5519 "parser.y"
    {
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[(2) - (2)])));
	}
	check_duplicate = 0;
  }
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 5534 "parser.y"
    {
	yyerrok;
  }
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 5541 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 595:
/* Line 1792 of yacc.c  */
#line 5546 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 598:
/* Line 1792 of yacc.c  */
#line 5557 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 5576 "parser.y"
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

  case 603:
/* Line 1792 of yacc.c  */
#line 5612 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (1)]));
  }
    break;

  case 604:
/* Line 1792 of yacc.c  */
#line 5616 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
	current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
  }
    break;

  case 605:
/* Line 1792 of yacc.c  */
#line 5621 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (2)]));
  }
    break;

  case 613:
/* Line 1792 of yacc.c  */
#line 5641 "parser.y"
    {
	current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 614:
/* Line 1792 of yacc.c  */
#line 5648 "parser.y"
    {
	current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 615:
/* Line 1792 of yacc.c  */
#line 5655 "parser.y"
    {
	current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 616:
/* Line 1792 of yacc.c  */
#line 5662 "parser.y"
    {
	current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 617:
/* Line 1792 of yacc.c  */
#line 5669 "parser.y"
    {
	current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 620:
/* Line 1792 of yacc.c  */
#line 5680 "parser.y"
    {
	check_pic_duplicate = 0;
  }
    break;

  case 640:
/* Line 1792 of yacc.c  */
#line 5711 "parser.y"
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
    break;

  case 653:
/* Line 1792 of yacc.c  */
#line 5737 "parser.y"
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
    break;

  case 654:
/* Line 1792 of yacc.c  */
#line 5744 "parser.y"
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
    break;

  case 659:
/* Line 1792 of yacc.c  */
#line 5760 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
    break;

  case 661:
/* Line 1792 of yacc.c  */
#line 5771 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
    break;

  case 664:
/* Line 1792 of yacc.c  */
#line 5783 "parser.y"
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
    break;

  case 676:
/* Line 1792 of yacc.c  */
#line 5816 "parser.y"
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
    break;

  case 677:
/* Line 1792 of yacc.c  */
#line 5823 "parser.y"
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
    break;

  case 678:
/* Line 1792 of yacc.c  */
#line 5830 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
    break;

  case 680:
/* Line 1792 of yacc.c  */
#line 5839 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 681:
/* Line 1792 of yacc.c  */
#line 5846 "parser.y"
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

  case 687:
/* Line 1792 of yacc.c  */
#line 5871 "parser.y"
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

  case 688:
/* Line 1792 of yacc.c  */
#line 5891 "parser.y"
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

  case 689:
/* Line 1792 of yacc.c  */
#line 5931 "parser.y"
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

  case 692:
/* Line 1792 of yacc.c  */
#line 5954 "parser.y"
    {
	set_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
				       "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 693:
/* Line 1792 of yacc.c  */
#line 5959 "parser.y"
    {
	set_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				       "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 694:
/* Line 1792 of yacc.c  */
#line 5964 "parser.y"
    {
	set_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 695:
/* Line 1792 of yacc.c  */
#line 5968 "parser.y"
    {
	set_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 696:
/* Line 1792 of yacc.c  */
#line 5972 "parser.y"
    {
	set_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
				       "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 697:
/* Line 1792 of yacc.c  */
#line 5977 "parser.y"
    {
	set_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				       "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 698:
/* Line 1792 of yacc.c  */
#line 5982 "parser.y"
    {
	set_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				       "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 699:
/* Line 1792 of yacc.c  */
#line 5987 "parser.y"
    {
	set_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				       "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 700:
/* Line 1792 of yacc.c  */
#line 5992 "parser.y"
    {
	set_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 701:
/* Line 1792 of yacc.c  */
#line 5996 "parser.y"
    {
	set_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 702:
/* Line 1792 of yacc.c  */
#line 6000 "parser.y"
    {
	set_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	CB_PENDING ("OVERLINE");
  }
    break;

  case 703:
/* Line 1792 of yacc.c  */
#line 6005 "parser.y"
    {
	set_screen_attr ("GRID", COB_SCREEN_GRID);
	CB_PENDING ("GRID");
  }
    break;

  case 704:
/* Line 1792 of yacc.c  */
#line 6010 "parser.y"
    {
	set_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	CB_PENDING ("LEFTLINE");
  }
    break;

  case 705:
/* Line 1792 of yacc.c  */
#line 6015 "parser.y"
    {
	set_screen_attr_with_conflict ("AUTO", COB_SCREEN_AUTO,
				       "TAB", COB_SCREEN_TAB);
  }
    break;

  case 706:
/* Line 1792 of yacc.c  */
#line 6020 "parser.y"
    {
	set_screen_attr_with_conflict ("TAB", COB_SCREEN_TAB,
				       "AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 707:
/* Line 1792 of yacc.c  */
#line 6025 "parser.y"
    {
	set_screen_attr_with_conflict ("SECURE", COB_SCREEN_SECURE,
				       "NO-ECHO", COB_SCREEN_NO_ECHO);
  }
    break;

  case 708:
/* Line 1792 of yacc.c  */
#line 6030 "parser.y"
    {
	if (cb_no_echo_means_secure) {
		set_screen_attr ("SECURE", COB_SCREEN_SECURE);
	} else {
		set_screen_attr_with_conflict ("NO-ECHO", COB_SCREEN_NO_ECHO,
					       "SECURE", COB_SCREEN_SECURE);
	}
  }
    break;

  case 709:
/* Line 1792 of yacc.c  */
#line 6039 "parser.y"
    {
	set_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 710:
/* Line 1792 of yacc.c  */
#line 6043 "parser.y"
    {
	set_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 711:
/* Line 1792 of yacc.c  */
#line 6047 "parser.y"
    {
	set_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 712:
/* Line 1792 of yacc.c  */
#line 6052 "parser.y"
    {
	set_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 713:
/* Line 1792 of yacc.c  */
#line 6056 "parser.y"
    {
	set_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 714:
/* Line 1792 of yacc.c  */
#line 6060 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 715:
/* Line 1792 of yacc.c  */
#line 6065 "parser.y"
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 716:
/* Line 1792 of yacc.c  */
#line 6070 "parser.y"
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 717:
/* Line 1792 of yacc.c  */
#line 6075 "parser.y"
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 726:
/* Line 1792 of yacc.c  */
#line 6088 "parser.y"
    {
	check_not_88_level ((yyvsp[(2) - (2)]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 727:
/* Line 1792 of yacc.c  */
#line 6097 "parser.y"
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 728:
/* Line 1792 of yacc.c  */
#line 6102 "parser.y"
    {
	check_not_88_level ((yyvsp[(2) - (2)]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 737:
/* Line 1792 of yacc.c  */
#line 6133 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 738:
/* Line 1792 of yacc.c  */
#line 6137 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 739:
/* Line 1792 of yacc.c  */
#line 6141 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 740:
/* Line 1792 of yacc.c  */
#line 6148 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 741:
/* Line 1792 of yacc.c  */
#line 6152 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 742:
/* Line 1792 of yacc.c  */
#line 6156 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 743:
/* Line 1792 of yacc.c  */
#line 6164 "parser.y"
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 744:
/* Line 1792 of yacc.c  */
#line 6175 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 746:
/* Line 1792 of yacc.c  */
#line 6184 "parser.y"
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

  case 747:
/* Line 1792 of yacc.c  */
#line 6194 "parser.y"
    {
	if (current_program->flag_main && !current_program->flag_chained && (yyvsp[(3) - (7)])) {
		cb_error (_("executable program requested but PROCEDURE/ENTRY has USING clause"));
	}
	/* Main entry point */
	emit_entry (current_program->program_id, 0, (yyvsp[(3) - (7)]));
	current_program->num_proc_params = cb_list_length ((yyvsp[(3) - (7)]));
	if (current_program->source_name) {
		emit_entry (current_program->source_name, 1, (yyvsp[(3) - (7)]));
	}
  }
    break;

  case 748:
/* Line 1792 of yacc.c  */
#line 6206 "parser.y"
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

  case 749:
/* Line 1792 of yacc.c  */
#line 6221 "parser.y"
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

  case 751:
/* Line 1792 of yacc.c  */
#line 6256 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 752:
/* Line 1792 of yacc.c  */
#line 6260 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 753:
/* Line 1792 of yacc.c  */
#line 6265 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > MAX_CALL_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  MAX_CALL_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 754:
/* Line 1792 of yacc.c  */
#line 6273 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 755:
/* Line 1792 of yacc.c  */
#line 6282 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > MAX_CALL_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  MAX_CALL_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 756:
/* Line 1792 of yacc.c  */
#line 6292 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 757:
/* Line 1792 of yacc.c  */
#line 6294 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 758:
/* Line 1792 of yacc.c  */
#line 6299 "parser.y"
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

  case 760:
/* Line 1792 of yacc.c  */
#line 6323 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 761:
/* Line 1792 of yacc.c  */
#line 6327 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		CB_UNFINISHED (_("parameters passed BY VALUE"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 763:
/* Line 1792 of yacc.c  */
#line 6340 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 764:
/* Line 1792 of yacc.c  */
#line 6348 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 765:
/* Line 1792 of yacc.c  */
#line 6356 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 766:
/* Line 1792 of yacc.c  */
#line 6364 "parser.y"
    {
	unsigned char *s = CB_LITERAL ((yyvsp[(4) - (4)]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[(4) - (4)]))->size != 1) {
		cb_error_x ((yyvsp[(4) - (4)]), _("invalid value for SIZE"));
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
			cb_error_x ((yyvsp[(4) - (4)]), _("invalid value for SIZE"));
			break;
		}
	}
  }
    break;

  case 767:
/* Line 1792 of yacc.c  */
#line 6393 "parser.y"
    {
	unsigned char *s = CB_LITERAL ((yyvsp[(3) - (3)]))->data;

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

  case 768:
/* Line 1792 of yacc.c  */
#line 6425 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 769:
/* Line 1792 of yacc.c  */
#line 6429 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 770:
/* Line 1792 of yacc.c  */
#line 6441 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 771:
/* Line 1792 of yacc.c  */
#line 6447 "parser.y"
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

  case 772:
/* Line 1792 of yacc.c  */
#line 6457 "parser.y"
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

  case 774:
/* Line 1792 of yacc.c  */
#line 6489 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 775:
/* Line 1792 of yacc.c  */
#line 6495 "parser.y"
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

  case 780:
/* Line 1792 of yacc.c  */
#line 6533 "parser.y"
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

  case 782:
/* Line 1792 of yacc.c  */
#line 6551 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 783:
/* Line 1792 of yacc.c  */
#line 6561 "parser.y"
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

  case 784:
/* Line 1792 of yacc.c  */
#line 6605 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 787:
/* Line 1792 of yacc.c  */
#line 6616 "parser.y"
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

  case 788:
/* Line 1792 of yacc.c  */
#line 6665 "parser.y"
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

  case 789:
/* Line 1792 of yacc.c  */
#line 6684 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 790:
/* Line 1792 of yacc.c  */
#line 6688 "parser.y"
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

  case 791:
/* Line 1792 of yacc.c  */
#line 6706 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 792:
/* Line 1792 of yacc.c  */
#line 6711 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 793:
/* Line 1792 of yacc.c  */
#line 6716 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 794:
/* Line 1792 of yacc.c  */
#line 6724 "parser.y"
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
	check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0);
  }
    break;

  case 795:
/* Line 1792 of yacc.c  */
#line 6753 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 796:
/* Line 1792 of yacc.c  */
#line 6757 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 851:
/* Line 1792 of yacc.c  */
#line 6818 "parser.y"
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

  case 852:
/* Line 1792 of yacc.c  */
#line 6832 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 853:
/* Line 1792 of yacc.c  */
#line 6843 "parser.y"
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	cobc_cs_check = CB_CS_ACCEPT;
  }
    break;

  case 855:
/* Line 1792 of yacc.c  */
#line 6853 "parser.y"
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
    break;

  case 856:
/* Line 1792 of yacc.c  */
#line 6859 "parser.y"
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

	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (4)]), line_column, current_statement->attr_ptr);
  }
    break;

  case 857:
/* Line 1792 of yacc.c  */
#line 6878 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 858:
/* Line 1792 of yacc.c  */
#line 6882 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 859:
/* Line 1792 of yacc.c  */
#line 6886 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 860:
/* Line 1792 of yacc.c  */
#line 6891 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 861:
/* Line 1792 of yacc.c  */
#line 6896 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 862:
/* Line 1792 of yacc.c  */
#line 6901 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 863:
/* Line 1792 of yacc.c  */
#line 6906 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 864:
/* Line 1792 of yacc.c  */
#line 6910 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 865:
/* Line 1792 of yacc.c  */
#line 6914 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 866:
/* Line 1792 of yacc.c  */
#line 6918 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 867:
/* Line 1792 of yacc.c  */
#line 6922 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 868:
/* Line 1792 of yacc.c  */
#line 6927 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 869:
/* Line 1792 of yacc.c  */
#line 6931 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 870:
/* Line 1792 of yacc.c  */
#line 6935 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 871:
/* Line 1792 of yacc.c  */
#line 6939 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 872:
/* Line 1792 of yacc.c  */
#line 6943 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 873:
/* Line 1792 of yacc.c  */
#line 6947 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 874:
/* Line 1792 of yacc.c  */
#line 6951 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 875:
/* Line 1792 of yacc.c  */
#line 6955 "parser.y"
    {
	CB_PENDING ("ACCEPT MESSAGE COUNT");
  }
    break;

  case 877:
/* Line 1792 of yacc.c  */
#line 6963 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 883:
/* Line 1792 of yacc.c  */
#line 6981 "parser.y"
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 884:
/* Line 1792 of yacc.c  */
#line 6985 "parser.y"
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 886:
/* Line 1792 of yacc.c  */
#line 6990 "parser.y"
    {
	check_repeated (_("TIME-OUT or BEFORE TIME clauses"), SYN_CLAUSE_4,
			&check_duplicate);
	set_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 889:
/* Line 1792 of yacc.c  */
#line 7004 "parser.y"
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

  case 890:
/* Line 1792 of yacc.c  */
#line 7020 "parser.y"
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

  case 891:
/* Line 1792 of yacc.c  */
#line 7036 "parser.y"
    {
	set_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				_("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				1, &check_line_col_duplicate);

	cb_verify (cb_accept_display_extensions, "AT clause");

	line_column = (yyvsp[(2) - (2)]);
  }
    break;

  case 892:
/* Line 1792 of yacc.c  */
#line 7048 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 893:
/* Line 1792 of yacc.c  */
#line 7052 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 894:
/* Line 1792 of yacc.c  */
#line 7053 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 895:
/* Line 1792 of yacc.c  */
#line 7058 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 896:
/* Line 1792 of yacc.c  */
#line 7065 "parser.y"
    {
	check_repeated ("AUTO", SYN_CLAUSE_5, &check_duplicate);
	set_dispattr_with_conflict ("AUTO", COB_SCREEN_AUTO,
				    "TAB", COB_SCREEN_TAB);
  }
    break;

  case 897:
/* Line 1792 of yacc.c  */
#line 7071 "parser.y"
    {
	check_repeated ("TAB", SYN_CLAUSE_6, &check_duplicate);
	set_dispattr_with_conflict ("TAB", COB_SCREEN_TAB,
				    "AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 898:
/* Line 1792 of yacc.c  */
#line 7077 "parser.y"
    {
	check_repeated ("BELL", SYN_CLAUSE_7, &check_duplicate);
	set_dispattr (COB_SCREEN_BELL);
  }
    break;

  case 899:
/* Line 1792 of yacc.c  */
#line 7082 "parser.y"
    {
        check_repeated ("BLINK", SYN_CLAUSE_8, &check_duplicate);
	set_dispattr (COB_SCREEN_BLINK);
  }
    break;

  case 900:
/* Line 1792 of yacc.c  */
#line 7087 "parser.y"
    {
	check_repeated ("CONVERSION", SYN_CLAUSE_9, &check_duplicate);
	CB_PENDING ("ACCEPT CONVERSION");
  }
    break;

  case 901:
/* Line 1792 of yacc.c  */
#line 7092 "parser.y"
    {
	check_repeated ("FULL", SYN_CLAUSE_10, &check_duplicate);
	set_dispattr (COB_SCREEN_FULL);
  }
    break;

  case 902:
/* Line 1792 of yacc.c  */
#line 7097 "parser.y"
    {
	check_repeated ("HIGHLIGHT", SYN_CLAUSE_11, &check_duplicate);
	set_dispattr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				    "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 903:
/* Line 1792 of yacc.c  */
#line 7103 "parser.y"
    {
	check_repeated ("LEFTLINE", SYN_CLAUSE_12, &check_duplicate);
	set_dispattr (COB_SCREEN_LEFTLINE);
  }
    break;

  case 904:
/* Line 1792 of yacc.c  */
#line 7108 "parser.y"
    {
	check_repeated ("LOWER", SYN_CLAUSE_13, &check_duplicate);
	set_dispattr_with_conflict ("LOWER", COB_SCREEN_LOWER,
				    "UPPER", COB_SCREEN_UPPER);
  }
    break;

  case 905:
/* Line 1792 of yacc.c  */
#line 7114 "parser.y"
    {
	check_repeated ("LOWLIGHT", SYN_CLAUSE_14, &check_duplicate);
	set_dispattr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				    "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 906:
/* Line 1792 of yacc.c  */
#line 7120 "parser.y"
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

  case 907:
/* Line 1792 of yacc.c  */
#line 7131 "parser.y"
    {
	check_repeated ("OVERLINE", SYN_CLAUSE_16, &check_duplicate);
	set_dispattr (COB_SCREEN_OVERLINE);
  }
    break;

  case 908:
/* Line 1792 of yacc.c  */
#line 7136 "parser.y"
    {
	check_repeated ("PROMPT", SYN_CLAUSE_17, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 909:
/* Line 1792 of yacc.c  */
#line 7141 "parser.y"
    {
	check_repeated ("PROMPT", SYN_CLAUSE_17, &check_duplicate);
	set_dispattr (COB_SCREEN_PROMPT);
  }
    break;

  case 910:
/* Line 1792 of yacc.c  */
#line 7146 "parser.y"
    {
	check_repeated ("REQUIRED", SYN_CLAUSE_18, &check_duplicate);
	set_dispattr (COB_SCREEN_REQUIRED);
  }
    break;

  case 911:
/* Line 1792 of yacc.c  */
#line 7151 "parser.y"
    {
	check_repeated ("REVERSE-VIDEO", SYN_CLAUSE_19, &check_duplicate);
	set_dispattr (COB_SCREEN_REVERSE);
  }
    break;

  case 912:
/* Line 1792 of yacc.c  */
#line 7156 "parser.y"
    {
	check_repeated ("SECURE", SYN_CLAUSE_20, &check_duplicate);
	set_dispattr_with_conflict ("SECURE", COB_SCREEN_SECURE,
				    "NO-ECHO", COB_SCREEN_NO_ECHO);
  }
    break;

  case 913:
/* Line 1792 of yacc.c  */
#line 7162 "parser.y"
    {
	check_repeated ("SIZE", SYN_CLAUSE_21, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), 0);
  }
    break;

  case 914:
/* Line 1792 of yacc.c  */
#line 7167 "parser.y"
    {
	check_repeated ("SIZE", SYN_CLAUSE_21, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0);
  }
    break;

  case 915:
/* Line 1792 of yacc.c  */
#line 7172 "parser.y"
    {
	check_repeated ("UNDERLINE", SYN_CLAUSE_22, &check_duplicate);
	set_dispattr (COB_SCREEN_UNDERLINE);
  }
    break;

  case 916:
/* Line 1792 of yacc.c  */
#line 7177 "parser.y"
    {
	check_repeated ("NO UPDATE", SYN_CLAUSE_23, &check_duplicate);
	set_dispattr_with_conflict ("NO UPDATE", COB_SCREEN_NO_UPDATE,
				    "UPDATE", COB_SCREEN_UPDATE);
  }
    break;

  case 917:
/* Line 1792 of yacc.c  */
#line 7183 "parser.y"
    {
	check_repeated ("UPDATE", SYN_CLAUSE_24, &check_duplicate);
	set_dispattr_with_conflict ("UPDATE", COB_SCREEN_UPDATE,
				    "NO UPDATE", COB_SCREEN_NO_UPDATE);
  }
    break;

  case 918:
/* Line 1792 of yacc.c  */
#line 7189 "parser.y"
    {
	check_repeated ("UPPER", SYN_CLAUSE_25, &check_duplicate);
	set_dispattr_with_conflict ("UPPER", COB_SCREEN_UPPER,
				    "LOWER", COB_SCREEN_LOWER);
  }
    break;

  case 919:
/* Line 1792 of yacc.c  */
#line 7195 "parser.y"
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_26, &check_duplicate);
	set_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 920:
/* Line 1792 of yacc.c  */
#line 7200 "parser.y"
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_27, &check_duplicate);
	set_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 921:
/* Line 1792 of yacc.c  */
#line 7205 "parser.y"
    {
	check_repeated ("SCROLL UP", SYN_CLAUSE_28, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 922:
/* Line 1792 of yacc.c  */
#line 7212 "parser.y"
    {
	check_repeated ("SCROLL DOWN", SYN_CLAUSE_19, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP);
  }
    break;

  case 923:
/* Line 1792 of yacc.c  */
#line 7219 "parser.y"
    {
	check_repeated (_("TIME-OUT or BEFORE TIME clauses"), SYN_CLAUSE_4,
			&check_duplicate);
	set_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 932:
/* Line 1792 of yacc.c  */
#line 7245 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 933:
/* Line 1792 of yacc.c  */
#line 7249 "parser.y"
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

  case 934:
/* Line 1792 of yacc.c  */
#line 7266 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 936:
/* Line 1792 of yacc.c  */
#line 7275 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 937:
/* Line 1792 of yacc.c  */
#line 7279 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 938:
/* Line 1792 of yacc.c  */
#line 7283 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 940:
/* Line 1792 of yacc.c  */
#line 7290 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 941:
/* Line 1792 of yacc.c  */
#line 7297 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 942:
/* Line 1792 of yacc.c  */
#line 7301 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 943:
/* Line 1792 of yacc.c  */
#line 7311 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 945:
/* Line 1792 of yacc.c  */
#line 7320 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 946:
/* Line 1792 of yacc.c  */
#line 7324 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 947:
/* Line 1792 of yacc.c  */
#line 7335 "parser.y"
    { (yyval) = NULL; }
    break;

  case 948:
/* Line 1792 of yacc.c  */
#line 7336 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 949:
/* Line 1792 of yacc.c  */
#line 7344 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER");
  }
    break;

  case 953:
/* Line 1792 of yacc.c  */
#line 7358 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 956:
/* Line 1792 of yacc.c  */
#line 7370 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
	cobc_allow_program_name = 1;
  }
    break;

  case 958:
/* Line 1792 of yacc.c  */
#line 7382 "parser.y"
    {
	cobc_allow_program_name = 0;
  }
    break;

  case 959:
/* Line 1792 of yacc.c  */
#line 7388 "parser.y"
    {
	cb_tree	call_conv_bit;

	if (current_program->prog_type == CB_PROGRAM_TYPE
	    && !current_program->flag_recursive
	    && is_recursive_call ((yyvsp[(2) - (6)]))) {
		cb_warning_x ((yyvsp[(2) - (6)]), _("recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	/* For CALL ... RETURNING NOTHING, set the call convention bit */
	if (call_nothing) {
		if ((yyvsp[(1) - (6)]) && CB_INTEGER_P ((yyvsp[(1) - (6)]))) {
			call_conv_bit = cb_int ((CB_INTEGER ((yyvsp[(1) - (6)]))->val)
						| CB_CONV_NO_RET_UPD);
		} else {
			call_conv_bit = cb_int (CB_CONV_NO_RET_UPD);
		}
	} else {
		call_conv_bit = (yyvsp[(1) - (6)]);
	}
	cb_emit_call ((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), CB_PAIR_X ((yyvsp[(6) - (6)])), CB_PAIR_Y ((yyvsp[(6) - (6)])),
		      call_conv_bit);
  }
    break;

  case 960:
/* Line 1792 of yacc.c  */
#line 7415 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 961:
/* Line 1792 of yacc.c  */
#line 7420 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 962:
/* Line 1792 of yacc.c  */
#line 7425 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 963:
/* Line 1792 of yacc.c  */
#line 7430 "parser.y"
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

  case 964:
/* Line 1792 of yacc.c  */
#line 7450 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(1) - (1)]))) {
		cb_trim_program_id ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 965:
/* Line 1792 of yacc.c  */
#line 7456 "parser.y"
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
    break;

  case 966:
/* Line 1792 of yacc.c  */
#line 7463 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 967:
/* Line 1792 of yacc.c  */
#line 7467 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 968:
/* Line 1792 of yacc.c  */
#line 7472 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > MAX_CALL_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("number of parameters exceeds maximum %d"),
			    MAX_CALL_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 969:
/* Line 1792 of yacc.c  */
#line 7483 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 970:
/* Line 1792 of yacc.c  */
#line 7485 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 971:
/* Line 1792 of yacc.c  */
#line 7490 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed when parameters are passed BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 972:
/* Line 1792 of yacc.c  */
#line 7498 "parser.y"
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

  case 974:
/* Line 1792 of yacc.c  */
#line 7524 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 975:
/* Line 1792 of yacc.c  */
#line 7528 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 976:
/* Line 1792 of yacc.c  */
#line 7537 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 977:
/* Line 1792 of yacc.c  */
#line 7549 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 978:
/* Line 1792 of yacc.c  */
#line 7553 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 979:
/* Line 1792 of yacc.c  */
#line 7557 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 980:
/* Line 1792 of yacc.c  */
#line 7561 "parser.y"
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
    break;

  case 981:
/* Line 1792 of yacc.c  */
#line 7566 "parser.y"
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

  case 986:
/* Line 1792 of yacc.c  */
#line 7599 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (NULL, NULL);
  }
    break;

  case 987:
/* Line 1792 of yacc.c  */
#line 7603 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 988:
/* Line 1792 of yacc.c  */
#line 7607 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 989:
/* Line 1792 of yacc.c  */
#line 7618 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 990:
/* Line 1792 of yacc.c  */
#line 7622 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 991:
/* Line 1792 of yacc.c  */
#line 7629 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 992:
/* Line 1792 of yacc.c  */
#line 7633 "parser.y"
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW");
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 993:
/* Line 1792 of yacc.c  */
#line 7641 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 994:
/* Line 1792 of yacc.c  */
#line 7645 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 995:
/* Line 1792 of yacc.c  */
#line 7652 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 996:
/* Line 1792 of yacc.c  */
#line 7659 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 997:
/* Line 1792 of yacc.c  */
#line 7663 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 998:
/* Line 1792 of yacc.c  */
#line 7673 "parser.y"
    {
	begin_statement ("CANCEL", 0);
	cobc_allow_program_name = 1;
  }
    break;

  case 999:
/* Line 1792 of yacc.c  */
#line 7678 "parser.y"
    {
	cobc_allow_program_name = 0;
  }
    break;

  case 1000:
/* Line 1792 of yacc.c  */
#line 7685 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 1001:
/* Line 1792 of yacc.c  */
#line 7689 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 1003:
/* Line 1792 of yacc.c  */
#line 7697 "parser.y"
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
    break;

  case 1004:
/* Line 1792 of yacc.c  */
#line 7706 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 1006:
/* Line 1792 of yacc.c  */
#line 7714 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1007:
/* Line 1792 of yacc.c  */
#line 7719 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1008:
/* Line 1792 of yacc.c  */
#line 7726 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 1009:
/* Line 1792 of yacc.c  */
#line 7727 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 1010:
/* Line 1792 of yacc.c  */
#line 7728 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 1011:
/* Line 1792 of yacc.c  */
#line 7729 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 1012:
/* Line 1792 of yacc.c  */
#line 7730 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 1013:
/* Line 1792 of yacc.c  */
#line 7738 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 1015:
/* Line 1792 of yacc.c  */
#line 7747 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 1016:
/* Line 1792 of yacc.c  */
#line 7754 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 1017:
/* Line 1792 of yacc.c  */
#line 7758 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 1018:
/* Line 1792 of yacc.c  */
#line 7768 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 1019:
/* Line 1792 of yacc.c  */
#line 7779 "parser.y"
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

  case 1020:
/* Line 1792 of yacc.c  */
#line 7796 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 1022:
/* Line 1792 of yacc.c  */
#line 7805 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (4)]));
  }
    break;

  case 1024:
/* Line 1792 of yacc.c  */
#line 7813 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 1025:
/* Line 1792 of yacc.c  */
#line 7818 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 1026:
/* Line 1792 of yacc.c  */
#line 7826 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 1027:
/* Line 1792 of yacc.c  */
#line 7830 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 1028:
/* Line 1792 of yacc.c  */
#line 7840 "parser.y"
    {
	begin_statement ("DISABLE", 0);
  }
    break;

  case 1032:
/* Line 1792 of yacc.c  */
#line 7854 "parser.y"
    {
	  /* Add cb_verify for <= COBOL-85 */
  }
    break;

  case 1038:
/* Line 1792 of yacc.c  */
#line 7872 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
	display_type = UNKNOWN_DISPLAY;
	is_first_display_item = 1;
  }
    break;

  case 1040:
/* Line 1792 of yacc.c  */
#line 7884 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 1041:
/* Line 1792 of yacc.c  */
#line 7888 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 1042:
/* Line 1792 of yacc.c  */
#line 7892 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 1043:
/* Line 1792 of yacc.c  */
#line 7896 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 1045:
/* Line 1792 of yacc.c  */
#line 7904 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) != NULL) {
		error_if_different_display_type ((yyvsp[(2) - (2)]), NULL, NULL, NULL);
		cb_emit_display ((yyvsp[(2) - (2)]), NULL, cb_int1, NULL, NULL, 0,
				 display_type);
	}
  }
    break;

  case 1046:
/* Line 1792 of yacc.c  */
#line 7912 "parser.y"
    {
	set_display_type ((yyvsp[(1) - (1)]), NULL, NULL, NULL);
	cb_emit_display ((yyvsp[(1) - (1)]), NULL, cb_int1, NULL, NULL, 1,
			 display_type);
  }
    break;

  case 1049:
/* Line 1792 of yacc.c  */
#line 7926 "parser.y"
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
    break;

  case 1050:
/* Line 1792 of yacc.c  */
#line 7934 "parser.y"
    {
	if ((yyvsp[(1) - (3)]) == cb_null) {
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
	}

	is_first_display_item = 0;
  }
    break;

  case 1051:
/* Line 1792 of yacc.c  */
#line 7971 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1052:
/* Line 1792 of yacc.c  */
#line 7975 "parser.y"
    {
	CB_PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
    break;

  case 1055:
/* Line 1792 of yacc.c  */
#line 7988 "parser.y"
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
    break;

  case 1056:
/* Line 1792 of yacc.c  */
#line 7992 "parser.y"
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
    break;

  case 1057:
/* Line 1792 of yacc.c  */
#line 7997 "parser.y"
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 1060:
/* Line 1792 of yacc.c  */
#line 8006 "parser.y"
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 1061:
/* Line 1792 of yacc.c  */
#line 8010 "parser.y"
    {
	upon_value = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 1062:
/* Line 1792 of yacc.c  */
#line 8014 "parser.y"
    {
	upon_value = cb_int0;
  }
    break;

  case 1063:
/* Line 1792 of yacc.c  */
#line 8018 "parser.y"
    {
	upon_value = cb_null;
  }
    break;

  case 1066:
/* Line 1792 of yacc.c  */
#line 8030 "parser.y"
    {
	check_repeated ("BELL", SYN_CLAUSE_4, &check_duplicate);
	set_dispattr (COB_SCREEN_BELL);
  }
    break;

  case 1067:
/* Line 1792 of yacc.c  */
#line 8035 "parser.y"
    {
	check_repeated ("BLANK LINE", SYN_CLAUSE_5, &check_duplicate);
	set_dispattr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
				    "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 1068:
/* Line 1792 of yacc.c  */
#line 8041 "parser.y"
    {
	check_repeated ("BLANK SCREEN", SYN_CLAUSE_6, &check_duplicate);
	set_dispattr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				    "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 1069:
/* Line 1792 of yacc.c  */
#line 8047 "parser.y"
    {
	check_repeated ("BLINK", SYN_CLAUSE_7, &check_duplicate);
	set_dispattr (COB_SCREEN_BLINK);
  }
    break;

  case 1070:
/* Line 1792 of yacc.c  */
#line 8052 "parser.y"
    {
	check_repeated ("CONVERSION", SYN_CLAUSE_8, &check_duplicate);
	cb_warning (_("ignoring CONVERSION"));
  }
    break;

  case 1071:
/* Line 1792 of yacc.c  */
#line 8057 "parser.y"
    {
	check_repeated ("ERASE EOL", SYN_CLAUSE_9, &check_duplicate);
	set_dispattr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
				    "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 1072:
/* Line 1792 of yacc.c  */
#line 8063 "parser.y"
    {
	check_repeated ("ERASE EOS", SYN_CLAUSE_10, &check_duplicate);
	set_dispattr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				    "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 1073:
/* Line 1792 of yacc.c  */
#line 8069 "parser.y"
    {
	check_repeated ("HIGHLIGHT", SYN_CLAUSE_11, &check_duplicate);
	set_dispattr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				    "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1074:
/* Line 1792 of yacc.c  */
#line 8075 "parser.y"
    {
	check_repeated ("LOWLIGHT", SYN_CLAUSE_12, &check_duplicate);
	set_dispattr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				    "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1075:
/* Line 1792 of yacc.c  */
#line 8081 "parser.y"
    {
	check_repeated ("OVERLINE", SYN_CLAUSE_13, &check_duplicate);
	set_dispattr (COB_SCREEN_OVERLINE);
  }
    break;

  case 1076:
/* Line 1792 of yacc.c  */
#line 8086 "parser.y"
    {
	check_repeated ("REVERSE-VIDEO", SYN_CLAUSE_14, &check_duplicate);
	set_dispattr (COB_SCREEN_REVERSE);
  }
    break;

  case 1077:
/* Line 1792 of yacc.c  */
#line 8091 "parser.y"
    {
	check_repeated ("SIZE", SYN_CLAUSE_15, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0);
  }
    break;

  case 1078:
/* Line 1792 of yacc.c  */
#line 8096 "parser.y"
    {
	check_repeated ("UNDERLINE", SYN_CLAUSE_16, &check_duplicate);
	set_dispattr (COB_SCREEN_UNDERLINE);
  }
    break;

  case 1079:
/* Line 1792 of yacc.c  */
#line 8101 "parser.y"
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_17, &check_duplicate);
	set_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 1080:
/* Line 1792 of yacc.c  */
#line 8106 "parser.y"
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_18, &check_duplicate);
	set_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 1081:
/* Line 1792 of yacc.c  */
#line 8111 "parser.y"
    {
	check_repeated ("SCROLL UP", SYN_CLAUSE_19, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 1082:
/* Line 1792 of yacc.c  */
#line 8118 "parser.y"
    {
	check_repeated ("SCROLL DOWN", SYN_CLAUSE_20, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP);
  }
    break;

  case 1083:
/* Line 1792 of yacc.c  */
#line 8128 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 1084:
/* Line 1792 of yacc.c  */
#line 8132 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 1085:
/* Line 1792 of yacc.c  */
#line 8142 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 1087:
/* Line 1792 of yacc.c  */
#line 8151 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 1088:
/* Line 1792 of yacc.c  */
#line 8155 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 1089:
/* Line 1792 of yacc.c  */
#line 8159 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 1090:
/* Line 1792 of yacc.c  */
#line 8163 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1091:
/* Line 1792 of yacc.c  */
#line 8167 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1092:
/* Line 1792 of yacc.c  */
#line 8174 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 1093:
/* Line 1792 of yacc.c  */
#line 8178 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 1094:
/* Line 1792 of yacc.c  */
#line 8188 "parser.y"
    {
	begin_statement ("ENABLE", 0);
  }
    break;

  case 1096:
/* Line 1792 of yacc.c  */
#line 8199 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 1098:
/* Line 1792 of yacc.c  */
#line 8208 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "ENTRY");
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "ENTRY");
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		if (!cobc_check_valid_name ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), ENTRY_NAME)) {
			emit_entry ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), 1, (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 1099:
/* Line 1792 of yacc.c  */
#line 8226 "parser.y"
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

  case 1101:
/* Line 1792 of yacc.c  */
#line 8250 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 1102:
/* Line 1792 of yacc.c  */
#line 8257 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1103:
/* Line 1792 of yacc.c  */
#line 8259 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1104:
/* Line 1792 of yacc.c  */
#line 8264 "parser.y"
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

  case 1105:
/* Line 1792 of yacc.c  */
#line 8275 "parser.y"
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

  case 1106:
/* Line 1792 of yacc.c  */
#line 8286 "parser.y"
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

  case 1107:
/* Line 1792 of yacc.c  */
#line 8300 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1108:
/* Line 1792 of yacc.c  */
#line 8304 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1109:
/* Line 1792 of yacc.c  */
#line 8310 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1110:
/* Line 1792 of yacc.c  */
#line 8312 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1111:
/* Line 1792 of yacc.c  */
#line 8318 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1112:
/* Line 1792 of yacc.c  */
#line 8327 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 1113:
/* Line 1792 of yacc.c  */
#line 8335 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1114:
/* Line 1792 of yacc.c  */
#line 8341 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 1115:
/* Line 1792 of yacc.c  */
#line 8348 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1116:
/* Line 1792 of yacc.c  */
#line 8350 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1117:
/* Line 1792 of yacc.c  */
#line 8355 "parser.y"
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

  case 1118:
/* Line 1792 of yacc.c  */
#line 8416 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 1119:
/* Line 1792 of yacc.c  */
#line 8417 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 1120:
/* Line 1792 of yacc.c  */
#line 8418 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 1121:
/* Line 1792 of yacc.c  */
#line 8422 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1122:
/* Line 1792 of yacc.c  */
#line 8423 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1123:
/* Line 1792 of yacc.c  */
#line 8428 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1124:
/* Line 1792 of yacc.c  */
#line 8432 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1125:
/* Line 1792 of yacc.c  */
#line 8442 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1126:
/* Line 1792 of yacc.c  */
#line 8447 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1128:
/* Line 1792 of yacc.c  */
#line 8455 "parser.y"
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

  case 1129:
/* Line 1792 of yacc.c  */
#line 8476 "parser.y"
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

  case 1130:
/* Line 1792 of yacc.c  */
#line 8490 "parser.y"
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

  case 1131:
/* Line 1792 of yacc.c  */
#line 8512 "parser.y"
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

  case 1132:
/* Line 1792 of yacc.c  */
#line 8534 "parser.y"
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

  case 1133:
/* Line 1792 of yacc.c  */
#line 8554 "parser.y"
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

  case 1134:
/* Line 1792 of yacc.c  */
#line 8576 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1135:
/* Line 1792 of yacc.c  */
#line 8577 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1136:
/* Line 1792 of yacc.c  */
#line 8585 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1138:
/* Line 1792 of yacc.c  */
#line 8594 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1139:
/* Line 1792 of yacc.c  */
#line 8604 "parser.y"
    {
	begin_statement ("GENERATE", 0);
	CB_PENDING("GENERATE");
  }
    break;

  case 1142:
/* Line 1792 of yacc.c  */
#line 8620 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1144:
/* Line 1792 of yacc.c  */
#line 8633 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1145:
/* Line 1792 of yacc.c  */
#line 8641 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1146:
/* Line 1792 of yacc.c  */
#line 8646 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1147:
/* Line 1792 of yacc.c  */
#line 8657 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1148:
/* Line 1792 of yacc.c  */
#line 8672 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1150:
/* Line 1792 of yacc.c  */
#line 8681 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1151:
/* Line 1792 of yacc.c  */
#line 8685 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1152:
/* Line 1792 of yacc.c  */
#line 8689 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1153:
/* Line 1792 of yacc.c  */
#line 8696 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1154:
/* Line 1792 of yacc.c  */
#line 8700 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1155:
/* Line 1792 of yacc.c  */
#line 8710 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1157:
/* Line 1792 of yacc.c  */
#line 8719 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1158:
/* Line 1792 of yacc.c  */
#line 8725 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1159:
/* Line 1792 of yacc.c  */
#line 8726 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1160:
/* Line 1792 of yacc.c  */
#line 8730 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1161:
/* Line 1792 of yacc.c  */
#line 8731 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1162:
/* Line 1792 of yacc.c  */
#line 8732 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1163:
/* Line 1792 of yacc.c  */
#line 8737 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1164:
/* Line 1792 of yacc.c  */
#line 8741 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1165:
/* Line 1792 of yacc.c  */
#line 8748 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1166:
/* Line 1792 of yacc.c  */
#line 8753 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1167:
/* Line 1792 of yacc.c  */
#line 8760 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1168:
/* Line 1792 of yacc.c  */
#line 8766 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1169:
/* Line 1792 of yacc.c  */
#line 8767 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1170:
/* Line 1792 of yacc.c  */
#line 8768 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1171:
/* Line 1792 of yacc.c  */
#line 8769 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1172:
/* Line 1792 of yacc.c  */
#line 8770 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1173:
/* Line 1792 of yacc.c  */
#line 8771 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1174:
/* Line 1792 of yacc.c  */
#line 8772 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1175:
/* Line 1792 of yacc.c  */
#line 8777 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1176:
/* Line 1792 of yacc.c  */
#line 8781 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1177:
/* Line 1792 of yacc.c  */
#line 8790 "parser.y"
    {
	begin_statement ("INITIATE", 0);
	CB_PENDING("INITIATE");
  }
    break;

  case 1179:
/* Line 1792 of yacc.c  */
#line 8799 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1180:
/* Line 1792 of yacc.c  */
#line 8805 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1181:
/* Line 1792 of yacc.c  */
#line 8816 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1191:
/* Line 1792 of yacc.c  */
#line 8844 "parser.y"
    {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
    break;

  case 1192:
/* Line 1792 of yacc.c  */
#line 8849 "parser.y"
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

  case 1193:
/* Line 1792 of yacc.c  */
#line 8865 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), REPLACING_CLAUSE);
	inspect_keyword = 0;
  }
    break;

  case 1194:
/* Line 1792 of yacc.c  */
#line 8875 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, CONVERTING_CLAUSE);
  }
    break;

  case 1195:
/* Line 1792 of yacc.c  */
#line 8884 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1196:
/* Line 1792 of yacc.c  */
#line 8888 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1197:
/* Line 1792 of yacc.c  */
#line 8895 "parser.y"
    {
	check_preceding_tallying_phrases (FOR_PHRASE);
	(yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)]));
  }
    break;

  case 1198:
/* Line 1792 of yacc.c  */
#line 8900 "parser.y"
    {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	(yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)]));
  }
    break;

  case 1199:
/* Line 1792 of yacc.c  */
#line 8905 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_all ();
  }
    break;

  case 1200:
/* Line 1792 of yacc.c  */
#line 8910 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_leading ();
  }
    break;

  case 1201:
/* Line 1792 of yacc.c  */
#line 8915 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_trailing ();
  }
    break;

  case 1202:
/* Line 1792 of yacc.c  */
#line 8920 "parser.y"
    {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	(yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1203:
/* Line 1792 of yacc.c  */
#line 8927 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1204:
/* Line 1792 of yacc.c  */
#line 8928 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1205:
/* Line 1792 of yacc.c  */
#line 8933 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1206:
/* Line 1792 of yacc.c  */
#line 8938 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1208:
/* Line 1792 of yacc.c  */
#line 8945 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1209:
/* Line 1792 of yacc.c  */
#line 8946 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1210:
/* Line 1792 of yacc.c  */
#line 8947 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1211:
/* Line 1792 of yacc.c  */
#line 8948 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1212:
/* Line 1792 of yacc.c  */
#line 8953 "parser.y"
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

  case 1213:
/* Line 1792 of yacc.c  */
#line 8980 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1214:
/* Line 1792 of yacc.c  */
#line 8984 "parser.y"
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (1)]));
  }
    break;

  case 1215:
/* Line 1792 of yacc.c  */
#line 8988 "parser.y"
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (1)]));
  }
    break;

  case 1216:
/* Line 1792 of yacc.c  */
#line 8992 "parser.y"
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (2)])), (yyvsp[(2) - (2)]));
  }
    break;

  case 1217:
/* Line 1792 of yacc.c  */
#line 8996 "parser.y"
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (2)])), (yyvsp[(2) - (2)]));
  }
    break;

  case 1218:
/* Line 1792 of yacc.c  */
#line 9003 "parser.y"
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)]));
  }
    break;

  case 1219:
/* Line 1792 of yacc.c  */
#line 9010 "parser.y"
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)]));
  }
    break;

  case 1220:
/* Line 1792 of yacc.c  */
#line 9019 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1222:
/* Line 1792 of yacc.c  */
#line 9031 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1224:
/* Line 1792 of yacc.c  */
#line 9039 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1225:
/* Line 1792 of yacc.c  */
#line 9043 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1226:
/* Line 1792 of yacc.c  */
#line 9053 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1228:
/* Line 1792 of yacc.c  */
#line 9062 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1229:
/* Line 1792 of yacc.c  */
#line 9066 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1230:
/* Line 1792 of yacc.c  */
#line 9073 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1231:
/* Line 1792 of yacc.c  */
#line 9077 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1232:
/* Line 1792 of yacc.c  */
#line 9087 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1236:
/* Line 1792 of yacc.c  */
#line 9100 "parser.y"
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

  case 1237:
/* Line 1792 of yacc.c  */
#line 9124 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1238:
/* Line 1792 of yacc.c  */
#line 9125 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1239:
/* Line 1792 of yacc.c  */
#line 9126 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1240:
/* Line 1792 of yacc.c  */
#line 9127 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1241:
/* Line 1792 of yacc.c  */
#line 9131 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1242:
/* Line 1792 of yacc.c  */
#line 9132 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1243:
/* Line 1792 of yacc.c  */
#line 9136 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1244:
/* Line 1792 of yacc.c  */
#line 9137 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1245:
/* Line 1792 of yacc.c  */
#line 9138 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1246:
/* Line 1792 of yacc.c  */
#line 9140 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1247:
/* Line 1792 of yacc.c  */
#line 9151 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
	cobc_cs_check = CB_CS_PERFORM;
  }
    break;

  case 1249:
/* Line 1792 of yacc.c  */
#line 9163 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1250:
/* Line 1792 of yacc.c  */
#line 9169 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1251:
/* Line 1792 of yacc.c  */
#line 9176 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1252:
/* Line 1792 of yacc.c  */
#line 9181 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1253:
/* Line 1792 of yacc.c  */
#line 9190 "parser.y"
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1254:
/* Line 1792 of yacc.c  */
#line 9198 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1255:
/* Line 1792 of yacc.c  */
#line 9205 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1256:
/* Line 1792 of yacc.c  */
#line 9209 "parser.y"
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

  case 1257:
/* Line 1792 of yacc.c  */
#line 9222 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1258:
/* Line 1792 of yacc.c  */
#line 9229 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1259:
/* Line 1792 of yacc.c  */
#line 9240 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1260:
/* Line 1792 of yacc.c  */
#line 9244 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1261:
/* Line 1792 of yacc.c  */
#line 9249 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1262:
/* Line 1792 of yacc.c  */
#line 9253 "parser.y"
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

  case 1263:
/* Line 1792 of yacc.c  */
#line 9264 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1264:
/* Line 1792 of yacc.c  */
#line 9270 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1265:
/* Line 1792 of yacc.c  */
#line 9271 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1266:
/* Line 1792 of yacc.c  */
#line 9275 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1267:
/* Line 1792 of yacc.c  */
#line 9276 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1268:
/* Line 1792 of yacc.c  */
#line 9279 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1269:
/* Line 1792 of yacc.c  */
#line 9281 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1270:
/* Line 1792 of yacc.c  */
#line 9286 "parser.y"
    {
	(yyval) = cb_build_perform_varying ((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));
  }
    break;

  case 1271:
/* Line 1792 of yacc.c  */
#line 9295 "parser.y"
    {
	begin_statement ("PURGE", 0);
  }
    break;

  case 1272:
/* Line 1792 of yacc.c  */
#line 9299 "parser.y"
    {
  }
    break;

  case 1273:
/* Line 1792 of yacc.c  */
#line 9307 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1275:
/* Line 1792 of yacc.c  */
#line 9316 "parser.y"
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

  case 1276:
/* Line 1792 of yacc.c  */
#line 9344 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1277:
/* Line 1792 of yacc.c  */
#line 9345 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1278:
/* Line 1792 of yacc.c  */
#line 9350 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1279:
/* Line 1792 of yacc.c  */
#line 9354 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1280:
/* Line 1792 of yacc.c  */
#line 9358 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1281:
/* Line 1792 of yacc.c  */
#line 9362 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1284:
/* Line 1792 of yacc.c  */
#line 9374 "parser.y"
    {
	CB_PENDING ("ADVANCING ON LOCK");
  }
    break;

  case 1288:
/* Line 1792 of yacc.c  */
#line 9387 "parser.y"
    {
	CB_PENDING ("RETRY");
	cobc_cs_check = 0;
  }
    break;

  case 1294:
/* Line 1792 of yacc.c  */
#line 9407 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1295:
/* Line 1792 of yacc.c  */
#line 9411 "parser.y"
    {
   (yyval) = cb_int5;
  }
    break;

  case 1296:
/* Line 1792 of yacc.c  */
#line 9415 "parser.y"
    {
	/* TO-DO: Merge with RETRY phrase */
	(yyval) = cb_int4;
  }
    break;

  case 1297:
/* Line 1792 of yacc.c  */
#line 9422 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1298:
/* Line 1792 of yacc.c  */
#line 9423 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1301:
/* Line 1792 of yacc.c  */
#line 9433 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1302:
/* Line 1792 of yacc.c  */
#line 9437 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1303:
/* Line 1792 of yacc.c  */
#line 9447 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1304:
/* Line 1792 of yacc.c  */
#line 9457 "parser.y"
    {
	begin_statement ("RECEIVE", TERM_RECEIVE);
  }
    break;

  case 1318:
/* Line 1792 of yacc.c  */
#line 9500 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RECEIVE);
  }
    break;

  case 1319:
/* Line 1792 of yacc.c  */
#line 9504 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RECEIVE);
  }
    break;

  case 1320:
/* Line 1792 of yacc.c  */
#line 9513 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1322:
/* Line 1792 of yacc.c  */
#line 9521 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1323:
/* Line 1792 of yacc.c  */
#line 9531 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1324:
/* Line 1792 of yacc.c  */
#line 9541 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1326:
/* Line 1792 of yacc.c  */
#line 9550 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1327:
/* Line 1792 of yacc.c  */
#line 9557 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1328:
/* Line 1792 of yacc.c  */
#line 9561 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1329:
/* Line 1792 of yacc.c  */
#line 9571 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1331:
/* Line 1792 of yacc.c  */
#line 9583 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
	start_debug = save_debug;
  }
    break;

  case 1332:
/* Line 1792 of yacc.c  */
#line 9591 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1334:
/* Line 1792 of yacc.c  */
#line 9599 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1335:
/* Line 1792 of yacc.c  */
#line 9603 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1336:
/* Line 1792 of yacc.c  */
#line 9610 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1337:
/* Line 1792 of yacc.c  */
#line 9614 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1338:
/* Line 1792 of yacc.c  */
#line 9624 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1339:
/* Line 1792 of yacc.c  */
#line 9635 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1341:
/* Line 1792 of yacc.c  */
#line 9644 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1342:
/* Line 1792 of yacc.c  */
#line 9649 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1343:
/* Line 1792 of yacc.c  */
#line 9656 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1344:
/* Line 1792 of yacc.c  */
#line 9657 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1345:
/* Line 1792 of yacc.c  */
#line 9662 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1346:
/* Line 1792 of yacc.c  */
#line 9667 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1347:
/* Line 1792 of yacc.c  */
#line 9674 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1348:
/* Line 1792 of yacc.c  */
#line 9678 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1349:
/* Line 1792 of yacc.c  */
#line 9686 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1350:
/* Line 1792 of yacc.c  */
#line 9693 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1351:
/* Line 1792 of yacc.c  */
#line 9697 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1352:
/* Line 1792 of yacc.c  */
#line 9707 "parser.y"
    {
	begin_statement ("SEND", 0);
  }
    break;

  case 1354:
/* Line 1792 of yacc.c  */
#line 9715 "parser.y"
    {
  }
    break;

  case 1355:
/* Line 1792 of yacc.c  */
#line 9718 "parser.y"
    {
  }
    break;

  case 1358:
/* Line 1792 of yacc.c  */
#line 9729 "parser.y"
    {
  }
    break;

  case 1365:
/* Line 1792 of yacc.c  */
#line 9749 "parser.y"
    {
	begin_statement ("SET", 0);
	set_attr_val_on = 0;
	set_attr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1366:
/* Line 1792 of yacc.c  */
#line 9756 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1374:
/* Line 1792 of yacc.c  */
#line 9772 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1375:
/* Line 1792 of yacc.c  */
#line 9773 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1376:
/* Line 1792 of yacc.c  */
#line 9777 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1377:
/* Line 1792 of yacc.c  */
#line 9778 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1378:
/* Line 1792 of yacc.c  */
#line 9785 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1379:
/* Line 1792 of yacc.c  */
#line 9794 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), set_attr_val_on, set_attr_val_off);
  }
    break;

  case 1382:
/* Line 1792 of yacc.c  */
#line 9806 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1383:
/* Line 1792 of yacc.c  */
#line 9810 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1384:
/* Line 1792 of yacc.c  */
#line 9814 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (set_attr_val_on | set_attr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1385:
/* Line 1792 of yacc.c  */
#line 9820 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (set_attr_val_on | set_attr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1386:
/* Line 1792 of yacc.c  */
#line 9826 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1387:
/* Line 1792 of yacc.c  */
#line 9830 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1388:
/* Line 1792 of yacc.c  */
#line 9834 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1389:
/* Line 1792 of yacc.c  */
#line 9838 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1390:
/* Line 1792 of yacc.c  */
#line 9847 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1391:
/* Line 1792 of yacc.c  */
#line 9851 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1392:
/* Line 1792 of yacc.c  */
#line 9860 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1395:
/* Line 1792 of yacc.c  */
#line 9874 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1398:
/* Line 1792 of yacc.c  */
#line 9888 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1399:
/* Line 1792 of yacc.c  */
#line 9892 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1400:
/* Line 1792 of yacc.c  */
#line 9901 "parser.y"
    {
	  cb_emit_set_last_exception_to_off ();
  }
    break;

  case 1401:
/* Line 1792 of yacc.c  */
#line 9910 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1403:
/* Line 1792 of yacc.c  */
#line 9918 "parser.y"
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

  case 1404:
/* Line 1792 of yacc.c  */
#line 9940 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1405:
/* Line 1792 of yacc.c  */
#line 9949 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1406:
/* Line 1792 of yacc.c  */
#line 9954 "parser.y"
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

  case 1407:
/* Line 1792 of yacc.c  */
#line 9972 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1408:
/* Line 1792 of yacc.c  */
#line 9973 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1410:
/* Line 1792 of yacc.c  */
#line 9978 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1411:
/* Line 1792 of yacc.c  */
#line 9985 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1412:
/* Line 1792 of yacc.c  */
#line 9986 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1413:
/* Line 1792 of yacc.c  */
#line 9991 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("file sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1414:
/* Line 1792 of yacc.c  */
#line 9997 "parser.y"
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

  case 1415:
/* Line 1792 of yacc.c  */
#line 10007 "parser.y"
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

  case 1416:
/* Line 1792 of yacc.c  */
#line 10022 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("file sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1417:
/* Line 1792 of yacc.c  */
#line 10028 "parser.y"
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

  case 1418:
/* Line 1792 of yacc.c  */
#line 10038 "parser.y"
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

  case 1419:
/* Line 1792 of yacc.c  */
#line 10054 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1421:
/* Line 1792 of yacc.c  */
#line 10064 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1422:
/* Line 1792 of yacc.c  */
#line 10076 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1423:
/* Line 1792 of yacc.c  */
#line 10080 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1424:
/* Line 1792 of yacc.c  */
#line 10087 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1425:
/* Line 1792 of yacc.c  */
#line 10091 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1426:
/* Line 1792 of yacc.c  */
#line 10096 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1427:
/* Line 1792 of yacc.c  */
#line 10101 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1428:
/* Line 1792 of yacc.c  */
#line 10108 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1429:
/* Line 1792 of yacc.c  */
#line 10109 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1430:
/* Line 1792 of yacc.c  */
#line 10110 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1431:
/* Line 1792 of yacc.c  */
#line 10111 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1432:
/* Line 1792 of yacc.c  */
#line 10112 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1433:
/* Line 1792 of yacc.c  */
#line 10113 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1434:
/* Line 1792 of yacc.c  */
#line 10118 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition not allowed on START statement"));
  }
    break;

  case 1437:
/* Line 1792 of yacc.c  */
#line 10131 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1438:
/* Line 1792 of yacc.c  */
#line 10135 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1439:
/* Line 1792 of yacc.c  */
#line 10145 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1440:
/* Line 1792 of yacc.c  */
#line 10149 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1441:
/* Line 1792 of yacc.c  */
#line 10155 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL, 1, DEVICE_DISPLAY);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1442:
/* Line 1792 of yacc.c  */
#line 10167 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1443:
/* Line 1792 of yacc.c  */
#line 10171 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1444:
/* Line 1792 of yacc.c  */
#line 10175 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1445:
/* Line 1792 of yacc.c  */
#line 10179 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1446:
/* Line 1792 of yacc.c  */
#line 10187 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1447:
/* Line 1792 of yacc.c  */
#line 10198 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1448:
/* Line 1792 of yacc.c  */
#line 10202 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1449:
/* Line 1792 of yacc.c  */
#line 10208 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1450:
/* Line 1792 of yacc.c  */
#line 10209 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1451:
/* Line 1792 of yacc.c  */
#line 10210 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1452:
/* Line 1792 of yacc.c  */
#line 10211 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1453:
/* Line 1792 of yacc.c  */
#line 10218 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
	save_tree = NULL;
  }
    break;

  case 1455:
/* Line 1792 of yacc.c  */
#line 10228 "parser.y"
    {
	cb_emit_string (save_tree, (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1458:
/* Line 1792 of yacc.c  */
#line 10240 "parser.y"
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

  case 1459:
/* Line 1792 of yacc.c  */
#line 10254 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1460:
/* Line 1792 of yacc.c  */
#line 10256 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1461:
/* Line 1792 of yacc.c  */
#line 10260 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1462:
/* Line 1792 of yacc.c  */
#line 10261 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), NULL); }
    break;

  case 1463:
/* Line 1792 of yacc.c  */
#line 10265 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1464:
/* Line 1792 of yacc.c  */
#line 10266 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1465:
/* Line 1792 of yacc.c  */
#line 10271 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1466:
/* Line 1792 of yacc.c  */
#line 10275 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1467:
/* Line 1792 of yacc.c  */
#line 10285 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1469:
/* Line 1792 of yacc.c  */
#line 10294 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1470:
/* Line 1792 of yacc.c  */
#line 10298 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1471:
/* Line 1792 of yacc.c  */
#line 10302 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1472:
/* Line 1792 of yacc.c  */
#line 10309 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1473:
/* Line 1792 of yacc.c  */
#line 10313 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1474:
/* Line 1792 of yacc.c  */
#line 10323 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	CB_PENDING("SUPPRESS");
  }
    break;

  case 1477:
/* Line 1792 of yacc.c  */
#line 10341 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
	CB_PENDING("TERMINATE");
  }
    break;

  case 1479:
/* Line 1792 of yacc.c  */
#line 10350 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1480:
/* Line 1792 of yacc.c  */
#line 10356 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1481:
/* Line 1792 of yacc.c  */
#line 10367 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1483:
/* Line 1792 of yacc.c  */
#line 10375 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, TRANSFORM_STATEMENT);
  }
    break;

  case 1484:
/* Line 1792 of yacc.c  */
#line 10388 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1486:
/* Line 1792 of yacc.c  */
#line 10396 "parser.y"
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

  case 1487:
/* Line 1792 of yacc.c  */
#line 10412 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1489:
/* Line 1792 of yacc.c  */
#line 10422 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1490:
/* Line 1792 of yacc.c  */
#line 10428 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1491:
/* Line 1792 of yacc.c  */
#line 10430 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1492:
/* Line 1792 of yacc.c  */
#line 10434 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1493:
/* Line 1792 of yacc.c  */
#line 10436 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1494:
/* Line 1792 of yacc.c  */
#line 10441 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1495:
/* Line 1792 of yacc.c  */
#line 10447 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1496:
/* Line 1792 of yacc.c  */
#line 10449 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1497:
/* Line 1792 of yacc.c  */
#line 10454 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1498:
/* Line 1792 of yacc.c  */
#line 10460 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1499:
/* Line 1792 of yacc.c  */
#line 10461 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1500:
/* Line 1792 of yacc.c  */
#line 10465 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1501:
/* Line 1792 of yacc.c  */
#line 10466 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1502:
/* Line 1792 of yacc.c  */
#line 10470 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1503:
/* Line 1792 of yacc.c  */
#line 10471 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1504:
/* Line 1792 of yacc.c  */
#line 10476 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1505:
/* Line 1792 of yacc.c  */
#line 10480 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1506:
/* Line 1792 of yacc.c  */
#line 10490 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1513:
/* Line 1792 of yacc.c  */
#line 10508 "parser.y"
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

  case 1514:
/* Line 1792 of yacc.c  */
#line 10533 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1515:
/* Line 1792 of yacc.c  */
#line 10537 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1516:
/* Line 1792 of yacc.c  */
#line 10549 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1517:
/* Line 1792 of yacc.c  */
#line 10559 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1518:
/* Line 1792 of yacc.c  */
#line 10564 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1519:
/* Line 1792 of yacc.c  */
#line 10569 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1520:
/* Line 1792 of yacc.c  */
#line 10574 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1521:
/* Line 1792 of yacc.c  */
#line 10582 "parser.y"
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

  case 1524:
/* Line 1792 of yacc.c  */
#line 10627 "parser.y"
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

  case 1525:
/* Line 1792 of yacc.c  */
#line 10670 "parser.y"
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

  case 1526:
/* Line 1792 of yacc.c  */
#line 10680 "parser.y"
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

  case 1531:
/* Line 1792 of yacc.c  */
#line 10710 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
    break;

  case 1532:
/* Line 1792 of yacc.c  */
#line 10719 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1533:
/* Line 1792 of yacc.c  */
#line 10725 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1534:
/* Line 1792 of yacc.c  */
#line 10735 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	CB_PENDING ("USE BEFORE REPORTING");
  }
    break;

  case 1535:
/* Line 1792 of yacc.c  */
#line 10744 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1538:
/* Line 1792 of yacc.c  */
#line 10760 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1540:
/* Line 1792 of yacc.c  */
#line 10772 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (6)]))) {
		cb_emit_write ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1541:
/* Line 1792 of yacc.c  */
#line 10781 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1542:
/* Line 1792 of yacc.c  */
#line 10782 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1543:
/* Line 1792 of yacc.c  */
#line 10787 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1544:
/* Line 1792 of yacc.c  */
#line 10791 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1545:
/* Line 1792 of yacc.c  */
#line 10795 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1546:
/* Line 1792 of yacc.c  */
#line 10799 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1547:
/* Line 1792 of yacc.c  */
#line 10805 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1548:
/* Line 1792 of yacc.c  */
#line 10806 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1552:
/* Line 1792 of yacc.c  */
#line 10817 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1553:
/* Line 1792 of yacc.c  */
#line 10821 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1556:
/* Line 1792 of yacc.c  */
#line 10835 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
    break;

  case 1557:
/* Line 1792 of yacc.c  */
#line 10845 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1558:
/* Line 1792 of yacc.c  */
#line 10849 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1559:
/* Line 1792 of yacc.c  */
#line 10856 "parser.y"
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1564:
/* Line 1792 of yacc.c  */
#line 10874 "parser.y"
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1569:
/* Line 1792 of yacc.c  */
#line 10890 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
    break;

  case 1570:
/* Line 1792 of yacc.c  */
#line 10900 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1571:
/* Line 1792 of yacc.c  */
#line 10904 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1572:
/* Line 1792 of yacc.c  */
#line 10911 "parser.y"
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1575:
/* Line 1792 of yacc.c  */
#line 10924 "parser.y"
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1578:
/* Line 1792 of yacc.c  */
#line 10936 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT SIZE ERROR before SIZE ERROR"));
	}
  }
    break;

  case 1579:
/* Line 1792 of yacc.c  */
#line 10946 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1580:
/* Line 1792 of yacc.c  */
#line 10950 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1581:
/* Line 1792 of yacc.c  */
#line 10957 "parser.y"
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1584:
/* Line 1792 of yacc.c  */
#line 10970 "parser.y"
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1587:
/* Line 1792 of yacc.c  */
#line 10982 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT OVERFLOW before OVERFLOW"));
	}
  }
    break;

  case 1588:
/* Line 1792 of yacc.c  */
#line 10992 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1589:
/* Line 1792 of yacc.c  */
#line 10996 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1590:
/* Line 1792 of yacc.c  */
#line 11003 "parser.y"
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1593:
/* Line 1792 of yacc.c  */
#line 11016 "parser.y"
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1595:
/* Line 1792 of yacc.c  */
#line 11028 "parser.y"
    {
	cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
  }
    break;

  case 1597:
/* Line 1792 of yacc.c  */
#line 11037 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
	}
  }
    break;

  case 1598:
/* Line 1792 of yacc.c  */
#line 11046 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1599:
/* Line 1792 of yacc.c  */
#line 11050 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1600:
/* Line 1792 of yacc.c  */
#line 11057 "parser.y"
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1603:
/* Line 1792 of yacc.c  */
#line 11070 "parser.y"
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1605:
/* Line 1792 of yacc.c  */
#line 11081 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT AT END-OF-PAGE before AT END-OF-PAGE"));
	}
  }
    break;

  case 1606:
/* Line 1792 of yacc.c  */
#line 11091 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1607:
/* Line 1792 of yacc.c  */
#line 11095 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1608:
/* Line 1792 of yacc.c  */
#line 11102 "parser.y"
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1611:
/* Line 1792 of yacc.c  */
#line 11115 "parser.y"
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1615:
/* Line 1792 of yacc.c  */
#line 11131 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT INVALID KEY before INVALID KEY"));
	}
  }
    break;

  case 1616:
/* Line 1792 of yacc.c  */
#line 11141 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1617:
/* Line 1792 of yacc.c  */
#line 11145 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1618:
/* Line 1792 of yacc.c  */
#line 11152 "parser.y"
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1621:
/* Line 1792 of yacc.c  */
#line 11165 "parser.y"
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1622:
/* Line 1792 of yacc.c  */
#line 11175 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1623:
/* Line 1792 of yacc.c  */
#line 11179 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1624:
/* Line 1792 of yacc.c  */
#line 11189 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1625:
/* Line 1792 of yacc.c  */
#line 11196 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1626:
/* Line 1792 of yacc.c  */
#line 11202 "parser.y"
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
    break;

  case 1627:
/* Line 1792 of yacc.c  */
#line 11207 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1631:
/* Line 1792 of yacc.c  */
#line 11219 "parser.y"
    { push_expr ('x', (yyvsp[(1) - (1)])); }
    break;

  case 1632:
/* Line 1792 of yacc.c  */
#line 11220 "parser.y"
    { push_expr ('C', (yyvsp[(1) - (1)])); }
    break;

  case 1633:
/* Line 1792 of yacc.c  */
#line 11222 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1634:
/* Line 1792 of yacc.c  */
#line 11223 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1635:
/* Line 1792 of yacc.c  */
#line 11225 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1636:
/* Line 1792 of yacc.c  */
#line 11226 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1637:
/* Line 1792 of yacc.c  */
#line 11227 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1638:
/* Line 1792 of yacc.c  */
#line 11228 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1639:
/* Line 1792 of yacc.c  */
#line 11229 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1640:
/* Line 1792 of yacc.c  */
#line 11231 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1641:
/* Line 1792 of yacc.c  */
#line 11232 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1642:
/* Line 1792 of yacc.c  */
#line 11233 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1643:
/* Line 1792 of yacc.c  */
#line 11234 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1644:
/* Line 1792 of yacc.c  */
#line 11235 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1645:
/* Line 1792 of yacc.c  */
#line 11236 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1646:
/* Line 1792 of yacc.c  */
#line 11238 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1647:
/* Line 1792 of yacc.c  */
#line 11239 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1648:
/* Line 1792 of yacc.c  */
#line 11240 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1649:
/* Line 1792 of yacc.c  */
#line 11242 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1650:
/* Line 1792 of yacc.c  */
#line 11243 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1651:
/* Line 1792 of yacc.c  */
#line 11244 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1652:
/* Line 1792 of yacc.c  */
#line 11245 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1653:
/* Line 1792 of yacc.c  */
#line 11246 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1654:
/* Line 1792 of yacc.c  */
#line 11249 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1655:
/* Line 1792 of yacc.c  */
#line 11250 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1664:
/* Line 1792 of yacc.c  */
#line 11280 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1665:
/* Line 1792 of yacc.c  */
#line 11284 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1669:
/* Line 1792 of yacc.c  */
#line 11295 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1670:
/* Line 1792 of yacc.c  */
#line 11296 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1671:
/* Line 1792 of yacc.c  */
#line 11297 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1672:
/* Line 1792 of yacc.c  */
#line 11301 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1673:
/* Line 1792 of yacc.c  */
#line 11302 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1674:
/* Line 1792 of yacc.c  */
#line 11303 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1675:
/* Line 1792 of yacc.c  */
#line 11308 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1676:
/* Line 1792 of yacc.c  */
#line 11311 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1677:
/* Line 1792 of yacc.c  */
#line 11315 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1678:
/* Line 1792 of yacc.c  */
#line 11316 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1679:
/* Line 1792 of yacc.c  */
#line 11317 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1680:
/* Line 1792 of yacc.c  */
#line 11320 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1681:
/* Line 1792 of yacc.c  */
#line 11321 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1682:
/* Line 1792 of yacc.c  */
#line 11332 "parser.y"
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

  case 1683:
/* Line 1792 of yacc.c  */
#line 11344 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1684:
/* Line 1792 of yacc.c  */
#line 11353 "parser.y"
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

  case 1685:
/* Line 1792 of yacc.c  */
#line 11365 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1686:
/* Line 1792 of yacc.c  */
#line 11374 "parser.y"
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

  case 1687:
/* Line 1792 of yacc.c  */
#line 11386 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1688:
/* Line 1792 of yacc.c  */
#line 11400 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1689:
/* Line 1792 of yacc.c  */
#line 11402 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1690:
/* Line 1792 of yacc.c  */
#line 11407 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1691:
/* Line 1792 of yacc.c  */
#line 11415 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1692:
/* Line 1792 of yacc.c  */
#line 11422 "parser.y"
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

  case 1693:
/* Line 1792 of yacc.c  */
#line 11444 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1694:
/* Line 1792 of yacc.c  */
#line 11448 "parser.y"
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

  case 1695:
/* Line 1792 of yacc.c  */
#line 11469 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1696:
/* Line 1792 of yacc.c  */
#line 11481 "parser.y"
    {
	if (CB_CD_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a CD name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1697:
/* Line 1792 of yacc.c  */
#line 11522 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1698:
/* Line 1792 of yacc.c  */
#line 11535 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1699:
/* Line 1792 of yacc.c  */
#line 11537 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1700:
/* Line 1792 of yacc.c  */
#line 11541 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1701:
/* Line 1792 of yacc.c  */
#line 11547 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1702:
/* Line 1792 of yacc.c  */
#line 11549 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1703:
/* Line 1792 of yacc.c  */
#line 11554 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1706:
/* Line 1792 of yacc.c  */
#line 11568 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1707:
/* Line 1792 of yacc.c  */
#line 11575 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1708:
/* Line 1792 of yacc.c  */
#line 11585 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1709:
/* Line 1792 of yacc.c  */
#line 11586 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1710:
/* Line 1792 of yacc.c  */
#line 11591 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1711:
/* Line 1792 of yacc.c  */
#line 11599 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1712:
/* Line 1792 of yacc.c  */
#line 11607 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1713:
/* Line 1792 of yacc.c  */
#line 11611 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1714:
/* Line 1792 of yacc.c  */
#line 11618 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1717:
/* Line 1792 of yacc.c  */
#line 11634 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1718:
/* Line 1792 of yacc.c  */
#line 11643 "parser.y"
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
    break;

  case 1719:
/* Line 1792 of yacc.c  */
#line 11654 "parser.y"
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

  case 1720:
/* Line 1792 of yacc.c  */
#line 11671 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1721:
/* Line 1792 of yacc.c  */
#line 11675 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1724:
/* Line 1792 of yacc.c  */
#line 11684 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1725:
/* Line 1792 of yacc.c  */
#line 11690 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1726:
/* Line 1792 of yacc.c  */
#line 11691 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1727:
/* Line 1792 of yacc.c  */
#line 11696 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1728:
/* Line 1792 of yacc.c  */
#line 11700 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1736:
/* Line 1792 of yacc.c  */
#line 11720 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1737:
/* Line 1792 of yacc.c  */
#line 11724 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1738:
/* Line 1792 of yacc.c  */
#line 11728 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1739:
/* Line 1792 of yacc.c  */
#line 11732 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1740:
/* Line 1792 of yacc.c  */
#line 11736 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1741:
/* Line 1792 of yacc.c  */
#line 11740 "parser.y"
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

  case 1742:
/* Line 1792 of yacc.c  */
#line 11761 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1743:
/* Line 1792 of yacc.c  */
#line 11765 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1751:
/* Line 1792 of yacc.c  */
#line 11782 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1752:
/* Line 1792 of yacc.c  */
#line 11786 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1753:
/* Line 1792 of yacc.c  */
#line 11790 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1758:
/* Line 1792 of yacc.c  */
#line 11807 "parser.y"
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[(1) - (1)]));
  }
    break;

  case 1759:
/* Line 1792 of yacc.c  */
#line 11814 "parser.y"
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[(1) - (1)]));
  }
    break;

  case 1765:
/* Line 1792 of yacc.c  */
#line 11832 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1767:
/* Line 1792 of yacc.c  */
#line 11840 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1770:
/* Line 1792 of yacc.c  */
#line 11849 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1773:
/* Line 1792 of yacc.c  */
#line 11858 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1775:
/* Line 1792 of yacc.c  */
#line 11863 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1776:
/* Line 1792 of yacc.c  */
#line 11870 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1778:
/* Line 1792 of yacc.c  */
#line 11878 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1780:
/* Line 1792 of yacc.c  */
#line 11886 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1783:
/* Line 1792 of yacc.c  */
#line 11896 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1784:
/* Line 1792 of yacc.c  */
#line 11900 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1785:
/* Line 1792 of yacc.c  */
#line 11904 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1786:
/* Line 1792 of yacc.c  */
#line 11905 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1787:
/* Line 1792 of yacc.c  */
#line 11910 "parser.y"
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[(1) - (1)]));
  }
    break;

  case 1788:
/* Line 1792 of yacc.c  */
#line 11917 "parser.y"
    {
	if ((yyvsp[(1) - (1)]) != cb_error_node
	    && cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not numeric"), cb_name ((yyvsp[(1) - (1)])));
	}
  }
    break;

  case 1789:
/* Line 1792 of yacc.c  */
#line 11927 "parser.y"
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

  case 1790:
/* Line 1792 of yacc.c  */
#line 11946 "parser.y"
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

  case 1791:
/* Line 1792 of yacc.c  */
#line 11964 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1792:
/* Line 1792 of yacc.c  */
#line 11971 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1793:
/* Line 1792 of yacc.c  */
#line 11978 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1794:
/* Line 1792 of yacc.c  */
#line 11985 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1795:
/* Line 1792 of yacc.c  */
#line 11995 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1796:
/* Line 1792 of yacc.c  */
#line 12002 "parser.y"
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

  case 1797:
/* Line 1792 of yacc.c  */
#line 12012 "parser.y"
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

  case 1798:
/* Line 1792 of yacc.c  */
#line 12022 "parser.y"
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

  case 1799:
/* Line 1792 of yacc.c  */
#line 12032 "parser.y"
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

  case 1800:
/* Line 1792 of yacc.c  */
#line 12045 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1801:
/* Line 1792 of yacc.c  */
#line 12049 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1802:
/* Line 1792 of yacc.c  */
#line 12057 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1803:
/* Line 1792 of yacc.c  */
#line 12065 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1804:
/* Line 1792 of yacc.c  */
#line 12069 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1805:
/* Line 1792 of yacc.c  */
#line 12079 "parser.y"
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

  case 1806:
/* Line 1792 of yacc.c  */
#line 12093 "parser.y"
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

  case 1807:
/* Line 1792 of yacc.c  */
#line 12116 "parser.y"
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

  case 1808:
/* Line 1792 of yacc.c  */
#line 12138 "parser.y"
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

  case 1809:
/* Line 1792 of yacc.c  */
#line 12153 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1810:
/* Line 1792 of yacc.c  */
#line 12154 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1811:
/* Line 1792 of yacc.c  */
#line 12155 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1812:
/* Line 1792 of yacc.c  */
#line 12156 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1813:
/* Line 1792 of yacc.c  */
#line 12157 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1814:
/* Line 1792 of yacc.c  */
#line 12158 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1815:
/* Line 1792 of yacc.c  */
#line 12163 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1816:
/* Line 1792 of yacc.c  */
#line 12167 "parser.y"
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

  case 1817:
/* Line 1792 of yacc.c  */
#line 12184 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1818:
/* Line 1792 of yacc.c  */
#line 12188 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1819:
/* Line 1792 of yacc.c  */
#line 12194 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1820:
/* Line 1792 of yacc.c  */
#line 12195 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1821:
/* Line 1792 of yacc.c  */
#line 12196 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1822:
/* Line 1792 of yacc.c  */
#line 12197 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1823:
/* Line 1792 of yacc.c  */
#line 12198 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1824:
/* Line 1792 of yacc.c  */
#line 12199 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1825:
/* Line 1792 of yacc.c  */
#line 12200 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1826:
/* Line 1792 of yacc.c  */
#line 12207 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1827:
/* Line 1792 of yacc.c  */
#line 12211 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1828:
/* Line 1792 of yacc.c  */
#line 12215 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1829:
/* Line 1792 of yacc.c  */
#line 12219 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1830:
/* Line 1792 of yacc.c  */
#line 12223 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1831:
/* Line 1792 of yacc.c  */
#line 12227 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1832:
/* Line 1792 of yacc.c  */
#line 12231 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1833:
/* Line 1792 of yacc.c  */
#line 12235 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1834:
/* Line 1792 of yacc.c  */
#line 12239 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1835:
/* Line 1792 of yacc.c  */
#line 12243 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1836:
/* Line 1792 of yacc.c  */
#line 12247 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1837:
/* Line 1792 of yacc.c  */
#line 12251 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1847:
/* Line 1792 of yacc.c  */
#line 12276 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1848:
/* Line 1792 of yacc.c  */
#line 12280 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1849:
/* Line 1792 of yacc.c  */
#line 12284 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1850:
/* Line 1792 of yacc.c  */
#line 12291 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1851:
/* Line 1792 of yacc.c  */
#line 12295 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1852:
/* Line 1792 of yacc.c  */
#line 12299 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1853:
/* Line 1792 of yacc.c  */
#line 12306 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1854:
/* Line 1792 of yacc.c  */
#line 12313 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1855:
/* Line 1792 of yacc.c  */
#line 12320 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1856:
/* Line 1792 of yacc.c  */
#line 12330 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1857:
/* Line 1792 of yacc.c  */
#line 12337 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1858:
/* Line 1792 of yacc.c  */
#line 12347 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1859:
/* Line 1792 of yacc.c  */
#line 12354 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1860:
/* Line 1792 of yacc.c  */
#line 12364 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1861:
/* Line 1792 of yacc.c  */
#line 12368 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[(1) - (3)]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1862:
/* Line 1792 of yacc.c  */
#line 12381 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1863:
/* Line 1792 of yacc.c  */
#line 12385 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[(1) - (3)]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1864:
/* Line 1792 of yacc.c  */
#line 12399 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1865:
/* Line 1792 of yacc.c  */
#line 12407 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1866:
/* Line 1792 of yacc.c  */
#line 12408 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1867:
/* Line 1792 of yacc.c  */
#line 12412 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1868:
/* Line 1792 of yacc.c  */
#line 12413 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1869:
/* Line 1792 of yacc.c  */
#line 12417 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1870:
/* Line 1792 of yacc.c  */
#line 12418 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1871:
/* Line 1792 of yacc.c  */
#line 12423 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1872:
/* Line 1792 of yacc.c  */
#line 12427 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1873:
/* Line 1792 of yacc.c  */
#line 12434 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1874:
/* Line 1792 of yacc.c  */
#line 12438 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1875:
/* Line 1792 of yacc.c  */
#line 12445 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1876:
/* Line 1792 of yacc.c  */
#line 12446 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1877:
/* Line 1792 of yacc.c  */
#line 12447 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1878:
/* Line 1792 of yacc.c  */
#line 12451 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1879:
/* Line 1792 of yacc.c  */
#line 12452 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1880:
/* Line 1792 of yacc.c  */
#line 12456 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1881:
/* Line 1792 of yacc.c  */
#line 12457 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1882:
/* Line 1792 of yacc.c  */
#line 12458 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1883:
/* Line 1792 of yacc.c  */
#line 12463 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1884:
/* Line 1792 of yacc.c  */
#line 12467 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1885:
/* Line 1792 of yacc.c  */
#line 12479 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1886:
/* Line 1792 of yacc.c  */
#line 12484 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1887:
/* Line 1792 of yacc.c  */
#line 12492 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1888:
/* Line 1792 of yacc.c  */
#line 12496 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1889:
/* Line 1792 of yacc.c  */
#line 12500 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1890:
/* Line 1792 of yacc.c  */
#line 12504 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1891:
/* Line 1792 of yacc.c  */
#line 12508 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1892:
/* Line 1792 of yacc.c  */
#line 12512 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1893:
/* Line 1792 of yacc.c  */
#line 12516 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1894:
/* Line 1792 of yacc.c  */
#line 12520 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1895:
/* Line 1792 of yacc.c  */
#line 12526 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1896:
/* Line 1792 of yacc.c  */
#line 12527 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1897:
/* Line 1792 of yacc.c  */
#line 12534 "parser.y"
    {
	cobc_repeat_last_token = 1;
  }
    break;

  case 1898:
/* Line 1792 of yacc.c  */
#line 12538 "parser.y"
    {
	cobc_repeat_last_token = 1;
  }
    break;

  case 1899:
/* Line 1792 of yacc.c  */
#line 12542 "parser.y"
    {
	cobc_repeat_last_token = 0;
  }
    break;


/* Line 1792 of yacc.c  */
#line 20319 "parser.c"
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
#line 12723 "parser.y"

