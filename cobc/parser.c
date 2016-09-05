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
static int			size_mode;
static int			setattr_val_on;
static int			setattr_val_off;
static unsigned int		check_duplicate;
static unsigned int		check_on_off_duplicate;
static unsigned int		check_pic_duplicate;
static unsigned int		check_comp_duplicate;
static int			check_line_col_duplicate;
static unsigned int		skip_statements;
static unsigned int		start_debug;
static unsigned int		save_debug;
static unsigned int		needs_field_debug;
static unsigned int		needs_debug_item;
static unsigned int		env_div_seen;
static unsigned int		header_check;
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
set_up_use_file (struct cb_file *fileptr)
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
	setattr_val_on = 0;
	setattr_val_off = 0;
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
set_up_program (cb_tree id, cb_tree as_literal, const unsigned char type)
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
		break;
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
set_up_prototype (cb_tree prototype_name, cb_tree ext_name,
		  const int type, const int is_current_element)
{
	cb_tree 	prototype;
	int	        name_redefinition_allowed;

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
emit_duplicate_clause_message (const char *clause)
{
	if (cb_relaxed_syntax_checks) {
		cb_warning (_("duplicate %s clause"), clause);
	} else {
		cb_error (_("duplicate %s clause"), clause);
	}
}

static void
check_repeated (const char *clause, const unsigned int bitval, unsigned int *already_seen)
{
	if (*already_seen & bitval) {
		emit_duplicate_clause_message (clause);
	} else {
		*already_seen |= bitval;
	}
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
check_screen_attr (const char *clause, const int bitval)
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
check_attr_with_conflict (const char *clause, const int bitval,
			  const char *confl_clause, const int confl_bit,
			  int *flags)
{
	if (*flags & bitval) {
		emit_duplicate_clause_message (clause);
	} else if (*flags & confl_bit) {
		emit_conflicting_clause_message (clause, confl_clause);
	} else {
	        *flags |= bitval;
	}
}

static COB_INLINE COB_A_INLINE void
check_screen_attr_with_conflict (const char *clause, const int bitval,
			  const char *confl_clause, const int confl_bit)
{
	check_attr_with_conflict (clause, bitval, confl_clause, confl_bit,
				  &current_field->screen_flag);
}

static COB_INLINE COB_A_INLINE void
check_dispattr_with_conflict (const char *attrib_name, const int attrib,
			      const char *confl_name, const int confl_attrib)
{
	check_attr_with_conflict (attrib_name, attrib, confl_name, confl_attrib,
				  &current_statement->attr_ptr->dispattrs);
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
attach_attrib_to_cur_stmt (void)
{
	if (!current_statement->attr_ptr) {
		current_statement->attr_ptr =
			cobc_parse_malloc (sizeof(struct cb_attr_struct));
	}
}

static void
check_field_attribs (cb_tree fgc, cb_tree bgc, cb_tree scroll,
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
check_attribs (cb_tree fgc, cb_tree bgc, cb_tree scroll,
	       cb_tree timeout, cb_tree prompt, cb_tree size_is,
	       const int attrib)
{
	attach_attrib_to_cur_stmt ();
	check_field_attribs (fgc, bgc, scroll, timeout, prompt, size_is);

	current_statement->attr_ptr->dispattrs |= attrib;
}

static void
check_attribs_with_conflict (cb_tree fgc, cb_tree bgc, cb_tree scroll,
			     cb_tree timeout, cb_tree prompt, cb_tree size_is,
			     const char *attrib_name, const int attrib,
			     const char *confl_name, const int confl_attrib)
{
	attach_attrib_to_cur_stmt ();
	check_field_attribs (fgc, bgc, scroll, timeout, prompt, size_is);

	check_dispattr_with_conflict (attrib_name, attrib, confl_name,
				      confl_attrib);
}

static int
zero_conflicting_flag (const int screen_flag, int parent_flag, const int flag1, const int flag2)
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


#line 1556 "parser.c" /* yacc.c:339  */

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
    CLASS_NAME = 316,
    CLOSE = 317,
    CODE = 318,
    CODE_SET = 319,
    COLLATING = 320,
    COL = 321,
    COLS = 322,
    COLUMN = 323,
    COLUMNS = 324,
    COMMA = 325,
    COMMAND_LINE = 326,
    COMMA_DELIM = 327,
    COMMIT = 328,
    COMMON = 329,
    COMP = 330,
    COMPUTE = 331,
    COMP_1 = 332,
    COMP_2 = 333,
    COMP_3 = 334,
    COMP_4 = 335,
    COMP_5 = 336,
    COMP_6 = 337,
    COMP_X = 338,
    CONCATENATE_FUNC = 339,
    CONDITION = 340,
    CONFIGURATION = 341,
    CONSTANT = 342,
    CONTAINS = 343,
    CONTENT = 344,
    CONTINUE = 345,
    CONTROL = 346,
    CONTROLS = 347,
    CONVERSION = 348,
    CONVERTING = 349,
    COPY = 350,
    CORRESPONDING = 351,
    COUNT = 352,
    CRT = 353,
    CRT_UNDER = 354,
    CURRENCY = 355,
    CURRENT_DATE_FUNC = 356,
    CURSOR = 357,
    CYCLE = 358,
    DATA = 359,
    DATE = 360,
    DAY = 361,
    DAY_OF_WEEK = 362,
    DE = 363,
    DEBUGGING = 364,
    DECIMAL_POINT = 365,
    DECLARATIVES = 366,
    DEFAULT = 367,
    DELETE = 368,
    DELIMITED = 369,
    DELIMITER = 370,
    DEPENDING = 371,
    DESCENDING = 372,
    DETAIL = 373,
    DISC = 374,
    DISK = 375,
    DISPLAY = 376,
    DISPLAY_OF_FUNC = 377,
    DIVIDE = 378,
    DIVISION = 379,
    DOWN = 380,
    DUPLICATES = 381,
    DYNAMIC = 382,
    EBCDIC = 383,
    EC = 384,
    EIGHTY_EIGHT = 385,
    ELSE = 386,
    END = 387,
    END_ACCEPT = 388,
    END_ADD = 389,
    END_CALL = 390,
    END_COMPUTE = 391,
    END_DELETE = 392,
    END_DISPLAY = 393,
    END_DIVIDE = 394,
    END_EVALUATE = 395,
    END_FUNCTION = 396,
    END_IF = 397,
    END_MULTIPLY = 398,
    END_PERFORM = 399,
    END_PROGRAM = 400,
    END_READ = 401,
    END_RETURN = 402,
    END_REWRITE = 403,
    END_SEARCH = 404,
    END_START = 405,
    END_STRING = 406,
    END_SUBTRACT = 407,
    END_UNSTRING = 408,
    END_WRITE = 409,
    ENTRY = 410,
    ENVIRONMENT = 411,
    ENVIRONMENT_NAME = 412,
    ENVIRONMENT_VALUE = 413,
    EOL = 414,
    EOP = 415,
    EOS = 416,
    EQUAL = 417,
    ERASE = 418,
    ERROR = 419,
    ESCAPE = 420,
    EVALUATE = 421,
    EVENT_STATUS = 422,
    EXCEPTION = 423,
    EXCEPTION_CONDITION = 424,
    EXCLUSIVE = 425,
    EXIT = 426,
    EXPONENTIATION = 427,
    EXTEND = 428,
    EXTERNAL = 429,
    F = 430,
    FD = 431,
    FILE_CONTROL = 432,
    FILE_ID = 433,
    FILLER = 434,
    FINAL = 435,
    FIRST = 436,
    FIXED = 437,
    FLOAT_BINARY_128 = 438,
    FLOAT_BINARY_32 = 439,
    FLOAT_BINARY_64 = 440,
    FLOAT_DECIMAL_16 = 441,
    FLOAT_DECIMAL_34 = 442,
    FLOAT_DECIMAL_7 = 443,
    FLOAT_EXTENDED = 444,
    FLOAT_LONG = 445,
    FLOAT_SHORT = 446,
    FOOTING = 447,
    FOR = 448,
    FOREGROUND_COLOR = 449,
    FOREVER = 450,
    FORMATTED_DATE_FUNC = 451,
    FORMATTED_DATETIME_FUNC = 452,
    FORMATTED_TIME_FUNC = 453,
    FREE = 454,
    FROM = 455,
    FROM_CRT = 456,
    FULL = 457,
    FUNCTION = 458,
    FUNCTION_ID = 459,
    FUNCTION_NAME = 460,
    GENERATE = 461,
    GIVING = 462,
    GLOBAL = 463,
    GO = 464,
    GOBACK = 465,
    GREATER = 466,
    GREATER_OR_EQUAL = 467,
    GRID = 468,
    GROUP = 469,
    HEADING = 470,
    HIGHLIGHT = 471,
    HIGH_VALUE = 472,
    ID = 473,
    IDENTIFICATION = 474,
    IF = 475,
    IGNORE = 476,
    IGNORING = 477,
    IN = 478,
    INDEX = 479,
    INDEXED = 480,
    INDICATE = 481,
    INITIALIZE = 482,
    INITIALIZED = 483,
    INITIATE = 484,
    INPUT = 485,
    INPUT_OUTPUT = 486,
    INSPECT = 487,
    INTO = 488,
    INTRINSIC = 489,
    INVALID = 490,
    INVALID_KEY = 491,
    IS = 492,
    I_O = 493,
    I_O_CONTROL = 494,
    JUSTIFIED = 495,
    KEPT = 496,
    KEY = 497,
    KEYBOARD = 498,
    LABEL = 499,
    LAST = 500,
    LEADING = 501,
    LEFT = 502,
    LEFTLINE = 503,
    LENGTH = 504,
    LENGTH_OF = 505,
    LESS = 506,
    LESS_OR_EQUAL = 507,
    LIMIT = 508,
    LIMITS = 509,
    LINAGE = 510,
    LINAGE_COUNTER = 511,
    LINE = 512,
    LINE_COUNTER = 513,
    LINES = 514,
    LINKAGE = 515,
    LITERAL = 516,
    LOCALE = 517,
    LOCALE_DATE_FUNC = 518,
    LOCALE_TIME_FUNC = 519,
    LOCALE_TIME_FROM_FUNC = 520,
    LOCAL_STORAGE = 521,
    LOCK = 522,
    LOWER = 523,
    LOWER_CASE_FUNC = 524,
    LOWLIGHT = 525,
    LOW_VALUE = 526,
    MANUAL = 527,
    MEMORY = 528,
    MERGE = 529,
    MINUS = 530,
    MNEMONIC_NAME = 531,
    MODE = 532,
    MOVE = 533,
    MULTIPLE = 534,
    MULTIPLY = 535,
    NAME = 536,
    NATIONAL = 537,
    NATIONAL_EDITED = 538,
    NATIONAL_OF_FUNC = 539,
    NATIVE = 540,
    NEAREST_AWAY_FROM_ZERO = 541,
    NEAREST_EVEN = 542,
    NEAREST_TOWARD_ZERO = 543,
    NEGATIVE = 544,
    NEXT = 545,
    NEXT_PAGE = 546,
    NO = 547,
    NO_ECHO = 548,
    NORMAL = 549,
    NOT = 550,
    NOTHING = 551,
    NOT_END = 552,
    NOT_EOP = 553,
    NOT_ESCAPE = 554,
    NOT_EQUAL = 555,
    NOT_EXCEPTION = 556,
    NOT_INVALID_KEY = 557,
    NOT_OVERFLOW = 558,
    NOT_SIZE_ERROR = 559,
    NO_ADVANCING = 560,
    NUMBER = 561,
    NUMBERS = 562,
    NUMERIC = 563,
    NUMERIC_EDITED = 564,
    NUMVALC_FUNC = 565,
    OBJECT_COMPUTER = 566,
    OCCURS = 567,
    OF = 568,
    OFF = 569,
    OMITTED = 570,
    ON = 571,
    ONLY = 572,
    OPEN = 573,
    OPTIONAL = 574,
    OR = 575,
    ORDER = 576,
    ORGANIZATION = 577,
    OTHER = 578,
    OUTPUT = 579,
    OVERLINE = 580,
    PACKED_DECIMAL = 581,
    PADDING = 582,
    PAGE = 583,
    PAGE_COUNTER = 584,
    PARAGRAPH = 585,
    PERFORM = 586,
    PH = 587,
    PF = 588,
    PICTURE = 589,
    PICTURE_SYMBOL = 590,
    PLUS = 591,
    POINTER = 592,
    POSITION = 593,
    POSITIVE = 594,
    PRESENT = 595,
    PREVIOUS = 596,
    PRINT = 597,
    PRINTER = 598,
    PRINTER_1 = 599,
    PRINTING = 600,
    PROCEDURE = 601,
    PROCEDURES = 602,
    PROCEED = 603,
    PROGRAM = 604,
    PROGRAM_ID = 605,
    PROGRAM_NAME = 606,
    PROGRAM_POINTER = 607,
    PROHIBITED = 608,
    PROMPT = 609,
    PROTECTED = 610,
    QUOTE = 611,
    RANDOM = 612,
    RD = 613,
    READ = 614,
    READY_TRACE = 615,
    RECORD = 616,
    RECORDING = 617,
    RECORDS = 618,
    RECURSIVE = 619,
    REDEFINES = 620,
    REEL = 621,
    REFERENCE = 622,
    REFERENCES = 623,
    RELATIVE = 624,
    RELEASE = 625,
    REMAINDER = 626,
    REMOVAL = 627,
    RENAMES = 628,
    REPLACE = 629,
    REPLACING = 630,
    REPORT = 631,
    REPORTING = 632,
    REPORTS = 633,
    REPOSITORY = 634,
    REQUIRED = 635,
    RESERVE = 636,
    RESET = 637,
    RESET_TRACE = 638,
    RETURN = 639,
    RETURNING = 640,
    REVERSE_FUNC = 641,
    REVERSE_VIDEO = 642,
    REVERSED = 643,
    REWIND = 644,
    REWRITE = 645,
    RF = 646,
    RH = 647,
    RIGHT = 648,
    ROLLBACK = 649,
    ROUNDED = 650,
    RUN = 651,
    S = 652,
    SAME = 653,
    SCREEN = 654,
    SCREEN_CONTROL = 655,
    SCROLL = 656,
    SD = 657,
    SEARCH = 658,
    SECTION = 659,
    SECURE = 660,
    SEGMENT_LIMIT = 661,
    SELECT = 662,
    SEMI_COLON = 663,
    SENTENCE = 664,
    SEPARATE = 665,
    SEQUENCE = 666,
    SEQUENTIAL = 667,
    SET = 668,
    SEVENTY_EIGHT = 669,
    SHARING = 670,
    SIGN = 671,
    SIGNED = 672,
    SIGNED_INT = 673,
    SIGNED_LONG = 674,
    SIGNED_SHORT = 675,
    SIXTY_SIX = 676,
    SIZE = 677,
    SIZE_ERROR = 678,
    SORT = 679,
    SORT_MERGE = 680,
    SOURCE = 681,
    SOURCE_COMPUTER = 682,
    SPACE = 683,
    SPECIAL_NAMES = 684,
    STANDARD = 685,
    STANDARD_1 = 686,
    STANDARD_2 = 687,
    START = 688,
    STATIC = 689,
    STATUS = 690,
    STDCALL = 691,
    STEP = 692,
    STOP = 693,
    STRING = 694,
    SUBSTITUTE_FUNC = 695,
    SUBSTITUTE_CASE_FUNC = 696,
    SUBTRACT = 697,
    SUM = 698,
    SUPPRESS = 699,
    SYMBOLIC = 700,
    SYNCHRONIZED = 701,
    SYSTEM_DEFAULT = 702,
    SYSTEM_OFFSET = 703,
    TAB = 704,
    TALLYING = 705,
    TAPE = 706,
    TERMINATE = 707,
    TEST = 708,
    THAN = 709,
    THEN = 710,
    THRU = 711,
    TIME = 712,
    TIME_OUT = 713,
    TIMES = 714,
    TO = 715,
    TOK_AMPER = 716,
    TOK_CLOSE_PAREN = 717,
    TOK_COLON = 718,
    TOK_DIV = 719,
    TOK_DOT = 720,
    TOK_EQUAL = 721,
    TOK_FALSE = 722,
    TOK_FILE = 723,
    TOK_GREATER = 724,
    TOK_INITIAL = 725,
    TOK_LESS = 726,
    TOK_MINUS = 727,
    TOK_MUL = 728,
    TOK_NULL = 729,
    TOK_OVERFLOW = 730,
    TOK_OPEN_PAREN = 731,
    TOK_PLUS = 732,
    TOK_TRUE = 733,
    TOP = 734,
    TOWARD_GREATER = 735,
    TOWARD_LESSER = 736,
    TRAILING = 737,
    TRANSFORM = 738,
    TRIM_FUNC = 739,
    TRUNCATION = 740,
    TYPE = 741,
    U = 742,
    UNDERLINE = 743,
    UNIT = 744,
    UNLOCK = 745,
    UNSIGNED = 746,
    UNSIGNED_INT = 747,
    UNSIGNED_LONG = 748,
    UNSIGNED_SHORT = 749,
    UNSTRING = 750,
    UNTIL = 751,
    UP = 752,
    UPDATE = 753,
    UPON = 754,
    UPON_ARGUMENT_NUMBER = 755,
    UPON_COMMAND_LINE = 756,
    UPON_ENVIRONMENT_NAME = 757,
    UPON_ENVIRONMENT_VALUE = 758,
    UPPER = 759,
    UPPER_CASE_FUNC = 760,
    USAGE = 761,
    USE = 762,
    USER = 763,
    USER_DEFAULT = 764,
    USER_FUNCTION_NAME = 765,
    USING = 766,
    V = 767,
    VALUE = 768,
    VARIABLE = 769,
    VARYING = 770,
    WAIT = 771,
    WHEN = 772,
    WHEN_COMPILED_FUNC = 773,
    WITH = 774,
    WORD = 775,
    WORDS = 776,
    WORKING_STORAGE = 777,
    WRITE = 778,
    YYYYDDD = 779,
    YYYYMMDD = 780,
    ZERO = 781,
    SHIFT_PREFER = 782,
    OVERFLOW = 783
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

#line 2137 "parser.c" /* yacc.c:358  */

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
#define YYLAST   8977

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  529
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  872
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2009
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2858

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   783

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
     525,   526,   527,   528
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  2150,  2150,  2150,  2183,  2184,  2188,  2189,  2193,  2194,
    2198,  2198,  2221,  2232,  2238,  2239,  2243,  2244,  2248,  2256,
    2265,  2273,  2274,  2275,  2280,  2284,  2279,  2300,  2299,  2315,
    2326,  2330,  2331,  2335,  2336,  2339,  2340,  2344,  2353,  2362,
    2363,  2370,  2371,  2375,  2379,  2389,  2394,  2395,  2404,  2411,
    2412,  2422,  2423,  2424,  2425,  2426,  2439,  2438,  2448,  2449,
    2452,  2453,  2467,  2466,  2476,  2477,  2478,  2479,  2483,  2484,
    2488,  2489,  2490,  2491,  2495,  2503,  2510,  2517,  2528,  2532,
    2536,  2540,  2547,  2548,  2553,  2555,  2554,  2565,  2566,  2567,
    2574,  2575,  2579,  2583,  2589,  2590,  2600,  2605,  2615,  2616,
    2628,  2629,  2633,  2634,  2638,  2639,  2643,  2644,  2645,  2646,
    2647,  2648,  2649,  2650,  2651,  2652,  2653,  2654,  2662,  2661,
    2689,  2699,  2712,  2720,  2723,  2724,  2728,  2735,  2750,  2771,
    2770,  2794,  2800,  2806,  2812,  2818,  2824,  2834,  2838,  2845,
    2849,  2854,  2853,  2864,  2868,  2875,  2876,  2877,  2878,  2879,
    2880,  2884,  2885,  2892,  2907,  2910,  2917,  2925,  2929,  2940,
    2960,  2968,  2979,  2980,  2986,  3007,  3008,  3012,  3016,  3037,
    3060,  3135,  3138,  3147,  3166,  3182,  3200,  3218,  3235,  3252,
    3262,  3263,  3270,  3271,  3279,  3280,  3290,  3291,  3296,  3295,
    3325,  3326,  3330,  3331,  3332,  3333,  3334,  3335,  3336,  3337,
    3338,  3339,  3340,  3341,  3342,  3349,  3355,  3365,  3378,  3391,
    3418,  3419,  3420,  3424,  3425,  3426,  3427,  3430,  3431,  3437,
    3438,  3442,  3446,  3447,  3452,  3455,  3456,  3463,  3471,  3472,
    3473,  3480,  3504,  3506,  3511,  3521,  3529,  3544,  3551,  3553,
    3554,  3560,  3560,  3567,  3572,  3577,  3584,  3585,  3586,  3590,
    3601,  3602,  3606,  3611,  3616,  3621,  3632,  3643,  3653,  3661,
    3662,  3663,  3669,  3680,  3687,  3688,  3694,  3702,  3703,  3704,
    3710,  3711,  3712,  3719,  3720,  3724,  3725,  3731,  3759,  3760,
    3761,  3762,  3769,  3768,  3784,  3785,  3789,  3792,  3793,  3803,
    3800,  3816,  3817,  3825,  3826,  3834,  3835,  3839,  3860,  3859,
    3876,  3883,  3887,  3893,  3894,  3898,  3908,  3923,  3924,  3925,
    3926,  3927,  3928,  3929,  3930,  3931,  3938,  3945,  3945,  3945,
    3951,  3971,  4005,  4036,  4037,  4044,  4045,  4049,  4050,  4057,
    4068,  4073,  4084,  4085,  4089,  4090,  4096,  4107,  4125,  4126,
    4130,  4131,  4132,  4136,  4143,  4150,  4159,  4168,  4169,  4170,
    4171,  4172,  4181,  4182,  4188,  4223,  4224,  4237,  4252,  4253,
    4257,  4267,  4281,  4283,  4282,  4298,  4301,  4301,  4318,  4319,
    4323,  4324,  4325,  4327,  4326,  4341,  4354,  4362,  4367,  4373,
    4377,  4387,  4390,  4402,  4403,  4404,  4405,  4409,  4413,  4417,
    4421,  4425,  4429,  4433,  4437,  4441,  4445,  4449,  4453,  4457,
    4468,  4469,  4473,  4474,  4478,  4479,  4480,  4484,  4485,  4489,
    4514,  4517,  4525,  4524,  4537,  4561,  4560,  4574,  4578,  4587,
    4591,  4600,  4601,  4602,  4603,  4604,  4605,  4606,  4607,  4608,
    4609,  4610,  4611,  4612,  4619,  4643,  4671,  4674,  4682,  4683,
    4687,  4712,  4723,  4724,  4728,  4732,  4736,  4740,  4744,  4748,
    4752,  4756,  4760,  4764,  4768,  4772,  4776,  4781,  4786,  4790,
    4794,  4802,  4806,  4810,  4818,  4822,  4826,  4830,  4834,  4838,
    4842,  4846,  4850,  4858,  4866,  4870,  4874,  4878,  4882,  4886,
    4894,  4895,  4899,  4900,  4906,  4913,  4926,  4944,  4945,  4954,
    4986,  5016,  5017,  5021,  5022,  5025,  5026,  5032,  5033,  5040,
    5041,  5048,  5072,  5073,  5090,  5091,  5094,  5095,  5102,  5103,
    5108,  5119,  5130,  5141,  5152,  5181,  5180,  5189,  5190,  5194,
    5195,  5198,  5199,  5211,  5220,  5234,  5236,  5235,  5255,  5257,
    5256,  5272,  5274,  5273,  5282,  5283,  5290,  5289,  5302,  5303,
    5304,  5311,  5316,  5320,  5321,  5327,  5334,  5338,  5339,  5345,
    5382,  5386,  5391,  5397,  5398,  5403,  5404,  5405,  5406,  5407,
    5411,  5418,  5425,  5432,  5439,  5445,  5446,  5451,  5450,  5457,
    5458,  5462,  5463,  5464,  5465,  5466,  5467,  5468,  5469,  5470,
    5471,  5472,  5473,  5474,  5475,  5476,  5477,  5481,  5488,  5489,
    5490,  5491,  5492,  5493,  5494,  5497,  5498,  5499,  5502,  5503,
    5507,  5514,  5520,  5521,  5525,  5526,  5530,  5537,  5541,  5548,
    5549,  5553,  5560,  5561,  5565,  5566,  5570,  5571,  5572,  5576,
    5577,  5581,  5582,  5586,  5593,  5600,  5608,  5610,  5609,  5630,
    5631,  5635,  5636,  5640,  5642,  5641,  5701,  5719,  5720,  5724,
    5729,  5734,  5738,  5742,  5747,  5752,  5757,  5762,  5766,  5770,
    5775,  5780,  5785,  5789,  5793,  5797,  5801,  5806,  5810,  5814,
    5819,  5824,  5829,  5834,  5835,  5836,  5837,  5838,  5839,  5840,
    5841,  5842,  5851,  5856,  5867,  5868,  5872,  5873,  5877,  5878,
    5882,  5883,  5888,  5891,  5895,  5903,  5906,  5910,  5918,  5929,
    5937,  5939,  5949,  5938,  5976,  5976,  6009,  6013,  6012,  6026,
    6025,  6045,  6046,  6051,  6073,  6075,  6079,  6090,  6092,  6100,
    6108,  6116,  6145,  6178,  6181,  6194,  6199,  6209,  6240,  6242,
    6241,  6278,  6279,  6283,  6284,  6285,  6302,  6303,  6314,  6313,
    6363,  6364,  6368,  6416,  6436,  6439,  6458,  6463,  6457,  6476,
    6476,  6506,  6513,  6514,  6515,  6516,  6517,  6518,  6519,  6520,
    6521,  6522,  6523,  6524,  6525,  6526,  6527,  6528,  6529,  6530,
    6531,  6532,  6533,  6534,  6535,  6536,  6537,  6538,  6539,  6540,
    6541,  6542,  6543,  6544,  6545,  6546,  6547,  6548,  6549,  6550,
    6551,  6552,  6553,  6554,  6555,  6556,  6557,  6558,  6559,  6560,
    6561,  6562,  6576,  6588,  6587,  6604,  6603,  6621,  6625,  6629,
    6634,  6639,  6644,  6649,  6653,  6657,  6661,  6665,  6670,  6674,
    6678,  6682,  6686,  6690,  6694,  6701,  6702,  6708,  6710,  6714,
    6715,  6719,  6720,  6724,  6728,  6732,  6733,  6737,  6753,  6769,
    6782,  6786,  6787,  6791,  6798,  6802,  6808,  6812,  6816,  6820,
    6824,  6830,  6834,  6838,  6844,  6848,  6852,  6856,  6860,  6864,
    6868,  6872,  6876,  6880,  6884,  6890,  6894,  6898,  6902,  6906,
    6910,  6914,  6921,  6922,  6926,  6930,  6948,  6947,  6956,  6960,
    6964,  6970,  6971,  6978,  6982,  6993,  6992,  7001,  7005,  7017,
    7018,  7026,  7025,  7034,  7035,  7039,  7045,  7045,  7052,  7051,
    7064,  7063,  7097,  7101,  7106,  7111,  7131,  7132,  7140,  7144,
    7143,  7160,  7161,  7166,  7174,  7198,  7200,  7204,  7213,  7226,
    7229,  7233,  7237,  7242,  7265,  7266,  7270,  7271,  7275,  7279,
    7283,  7294,  7298,  7305,  7309,  7317,  7321,  7328,  7335,  7339,
    7350,  7349,  7361,  7365,  7372,  7373,  7383,  7382,  7390,  7395,
    7403,  7404,  7405,  7406,  7407,  7415,  7414,  7423,  7430,  7434,
    7444,  7455,  7473,  7472,  7481,  7485,  7489,  7494,  7502,  7506,
    7517,  7516,  7528,  7532,  7536,  7540,  7544,  7548,  7556,  7565,
    7566,  7571,  7570,  7615,  7619,  7627,  7628,  7632,  7636,  7641,
    7645,  7646,  7650,  7654,  7658,  7662,  7669,  7670,  7674,  7678,
    7684,  7690,  7694,  7698,  7704,  7710,  7716,  7722,  7726,  7730,
    7734,  7738,  7742,  7746,  7750,  7757,  7761,  7772,  7771,  7780,
    7784,  7788,  7792,  7796,  7803,  7807,  7818,  7817,  7826,  7845,
    7844,  7868,  7876,  7877,  7882,  7893,  7904,  7918,  7922,  7929,
    7930,  7935,  7944,  7953,  7958,  7967,  7968,  7973,  8035,  8036,
    8037,  8041,  8042,  8046,  8050,  8061,  8060,  8072,  8073,  8094,
    8108,  8130,  8152,  8172,  8195,  8196,  8204,  8203,  8212,  8223,
    8222,  8232,  8239,  8238,  8251,  8260,  8264,  8275,  8291,  8290,
    8299,  8303,  8307,  8314,  8318,  8329,  8328,  8336,  8344,  8345,
    8349,  8350,  8351,  8356,  8359,  8366,  8370,  8378,  8385,  8386,
    8387,  8388,  8389,  8390,  8391,  8396,  8399,  8409,  8408,  8417,
    8423,  8435,  8434,  8443,  8447,  8448,  8449,  8453,  8454,  8455,
    8456,  8463,  8462,  8483,  8493,  8502,  8506,  8513,  8518,  8523,
    8528,  8533,  8538,  8546,  8547,  8551,  8556,  8562,  8564,  8565,
    8566,  8567,  8571,  8599,  8602,  8606,  8610,  8614,  8621,  8628,
    8638,  8637,  8650,  8649,  8657,  8661,  8672,  8671,  8680,  8684,
    8691,  8695,  8706,  8705,  8713,  8734,  8758,  8759,  8760,  8761,
    8765,  8766,  8770,  8771,  8772,  8773,  8785,  8784,  8795,  8801,
    8800,  8811,  8819,  8827,  8834,  8838,  8851,  8858,  8870,  8873,
    8878,  8882,  8893,  8900,  8901,  8905,  8906,  8909,  8910,  8915,
    8926,  8925,  8934,  8961,  8962,  8967,  8970,  8974,  8978,  8982,
    8986,  8990,  8997,  8998,  9002,  9003,  9007,  9011,  9021,  9032,
    9031,  9039,  9049,  9060,  9059,  9068,  9075,  9079,  9090,  9089,
    9101,  9110,  9113,  9117,  9124,  9128,  9138,  9150,  9149,  9158,
    9162,  9171,  9172,  9177,  9180,  9188,  9192,  9199,  9207,  9211,
    9222,  9221,  9235,  9236,  9237,  9238,  9239,  9240,  9241,  9245,
    9246,  9250,  9251,  9257,  9266,  9273,  9274,  9278,  9282,  9286,
    9292,  9298,  9302,  9306,  9310,  9319,  9323,  9332,  9341,  9342,
    9346,  9355,  9356,  9360,  9364,  9373,  9383,  9382,  9391,  9390,
    9422,  9425,  9445,  9446,  9449,  9450,  9458,  9459,  9464,  9469,
    9479,  9495,  9500,  9510,  9527,  9526,  9536,  9549,  9552,  9560,
    9563,  9568,  9573,  9581,  9582,  9583,  9584,  9585,  9586,  9590,
    9598,  9599,  9603,  9607,  9618,  9617,  9627,  9640,  9643,  9647,
    9651,  9659,  9671,  9674,  9681,  9682,  9683,  9684,  9691,  9690,
    9700,  9707,  9708,  9712,  9727,  9728,  9733,  9734,  9738,  9739,
    9743,  9747,  9758,  9757,  9766,  9770,  9774,  9781,  9785,  9795,
    9806,  9807,  9814,  9813,  9822,  9828,  9840,  9839,  9847,  9861,
    9860,  9868,  9885,  9884,  9893,  9901,  9902,  9907,  9908,  9913,
    9920,  9921,  9926,  9933,  9934,  9938,  9939,  9943,  9944,  9948,
    9952,  9963,  9962,  9971,  9972,  9973,  9974,  9975,  9979, 10006,
   10009, 10021, 10031, 10036, 10041, 10046, 10054, 10092, 10093, 10097,
   10137, 10147, 10170, 10171, 10172, 10173, 10177, 10186, 10192, 10202,
   10211, 10220, 10221, 10228, 10227, 10239, 10249, 10250, 10255, 10258,
   10262, 10266, 10273, 10274, 10278, 10279, 10280, 10284, 10288, 10300,
   10301, 10302, 10312, 10316, 10323, 10331, 10332, 10336, 10337, 10341,
   10349, 10350, 10355, 10356, 10357, 10367, 10371, 10378, 10386, 10387,
   10391, 10401, 10402, 10403, 10413, 10417, 10424, 10432, 10433, 10437,
   10447, 10448, 10449, 10459, 10463, 10470, 10478, 10479, 10483, 10494,
   10495, 10502, 10504, 10513, 10517, 10524, 10532, 10533, 10537, 10547,
   10548, 10558, 10562, 10569, 10577, 10578, 10582, 10592, 10593, 10597,
   10598, 10608, 10612, 10619, 10627, 10628, 10632, 10642, 10646, 10656,
   10663, 10670, 10670, 10681, 10682, 10683, 10687, 10688, 10690, 10691,
   10693, 10694, 10695, 10696, 10697, 10699, 10700, 10701, 10702, 10703,
   10704, 10706, 10707, 10708, 10710, 10711, 10712, 10713, 10714, 10717,
   10718, 10722, 10723, 10727, 10728, 10732, 10733, 10737, 10741, 10747,
   10751, 10757, 10758, 10759, 10763, 10764, 10765, 10769, 10770, 10771,
   10775, 10779, 10783, 10784, 10785, 10788, 10789, 10799, 10811, 10820,
   10832, 10841, 10853, 10868, 10869, 10874, 10883, 10889, 10911, 10915,
   10936, 10977, 10991, 10992, 10997, 11003, 11004, 11009, 11021, 11022,
   11023, 11030, 11041, 11042, 11046, 11054, 11062, 11066, 11073, 11082,
   11083, 11089, 11098, 11109, 11126, 11130, 11137, 11138, 11139, 11146,
   11147, 11151, 11155, 11162, 11163, 11167, 11168, 11172, 11173, 11174,
   11175, 11179, 11183, 11187, 11191, 11195, 11216, 11220, 11227, 11228,
   11229, 11233, 11234, 11235, 11236, 11237, 11241, 11245, 11252, 11253,
   11257, 11258, 11262, 11269, 11276, 11277, 11278, 11282, 11283, 11287,
   11291, 11295, 11299, 11300, 11304, 11308, 11309, 11316, 11320, 11324,
   11328, 11332, 11336, 11337, 11343, 11347, 11351, 11352, 11356, 11363,
   11373, 11392, 11410, 11417, 11424, 11431, 11441, 11448, 11458, 11468,
   11478, 11491, 11495, 11503, 11511, 11515, 11525, 11539, 11562, 11584,
   11600, 11601, 11602, 11603, 11604, 11605, 11609, 11613, 11630, 11634,
   11641, 11642, 11643, 11644, 11645, 11646, 11647, 11653, 11657, 11661,
   11665, 11669, 11673, 11677, 11681, 11685, 11689, 11693, 11697, 11704,
   11705, 11709, 11710, 11711, 11715, 11716, 11717, 11718, 11722, 11726,
   11730, 11737, 11741, 11745, 11752, 11759, 11766, 11776, 11783, 11793,
   11800, 11810, 11814, 11827, 11831, 11846, 11854, 11855, 11859, 11860,
   11864, 11865, 11870, 11873, 11881, 11884, 11891, 11893, 11894, 11898,
   11899, 11903, 11904, 11905, 11910, 11913, 11926, 11930, 11938, 11942,
   11946, 11950, 11954, 11958, 11962, 11966, 11973, 11974, 11980, 11984,
   11988, 11995, 11996, 11997, 11998, 11999, 12000, 12001, 12002, 12003,
   12004, 12005, 12006, 12007, 12008, 12009, 12010, 12011, 12012, 12013,
   12014, 12015, 12016, 12017, 12018, 12019, 12020, 12021, 12022, 12023,
   12024, 12025, 12026, 12027, 12028, 12029, 12030, 12031, 12032, 12033,
   12034, 12035, 12036, 12037, 12038, 12039, 12040, 12041, 12042, 12043,
   12047, 12048, 12049, 12050, 12051, 12052, 12053, 12054, 12055, 12056,
   12057, 12058, 12059, 12060, 12061, 12062, 12063, 12064, 12065, 12066,
   12073, 12073, 12074, 12074, 12075, 12075, 12076, 12076, 12077, 12077,
   12078, 12078, 12079, 12079, 12080, 12080, 12081, 12081, 12082, 12082,
   12083, 12083, 12084, 12084, 12085, 12085, 12086, 12086, 12087, 12087,
   12088, 12088, 12089, 12089, 12090, 12090, 12091, 12091, 12091, 12092,
   12092, 12093, 12093, 12094, 12094, 12095, 12095, 12096, 12096, 12096,
   12097, 12097, 12098, 12098, 12098, 12099, 12099, 12099, 12100, 12100,
   12100, 12101, 12101, 12102, 12102, 12103, 12103, 12104, 12104, 12104,
   12105, 12105, 12106, 12106, 12107, 12107, 12107, 12107, 12108, 12108,
   12109, 12109, 12110, 12110, 12111, 12111, 12112, 12112, 12112, 12113,
   12113, 12114, 12114, 12115, 12115, 12116, 12116, 12116, 12117, 12117,
   12118, 12118, 12119, 12119, 12120, 12120, 12121, 12121, 12122, 12122,
   12123, 12123, 12124, 12124, 12124, 12125, 12125, 12126, 12126, 12127,
   12127, 12131, 12131, 12132, 12132, 12133, 12133, 12134, 12134, 12135,
   12135, 12136, 12136, 12137, 12137, 12138, 12138, 12139, 12139, 12140,
   12140, 12141, 12141, 12142, 12142, 12143, 12143, 12144, 12144, 12145,
   12145, 12148, 12149, 12150, 12154, 12154, 12155, 12155, 12156, 12156,
   12157, 12157, 12158, 12158, 12159, 12159, 12160, 12160, 12161, 12161
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
  "CLASSIFICATION", "\"class-name\"", "CLOSE", "CODE", "\"CODE-SET\"",
  "COLLATING", "COL", "COLS", "COLUMN", "COLUMNS", "COMMA",
  "\"COMMAND-LINE\"", "\"comma delimiter\"", "COMMIT", "COMMON", "COMP",
  "COMPUTE", "\"COMP-1\"", "\"COMP-2\"", "\"COMP-3\"", "\"COMP-4\"",
  "\"COMP-5\"", "\"COMP-6\"", "\"COMP-X\"", "\"FUNCTION CONCATENATE\"",
  "CONDITION", "CONFIGURATION", "CONSTANT", "CONTAINS", "CONTENT",
  "CONTINUE", "CONTROL", "CONTROLS", "CONVERSION", "CONVERTING", "COPY",
  "CORRESPONDING", "COUNT", "CRT", "\"CRT-UNDER\"", "CURRENCY",
  "\"FUNCTION CURRENT-DATE\"", "CURSOR", "CYCLE", "DATA", "DATE", "DAY",
  "\"DAY-OF-WEEK\"", "DE", "DEBUGGING", "\"DECIMAL-POINT\"",
  "DECLARATIVES", "DEFAULT", "DELETE", "DELIMITED", "DELIMITER",
  "DEPENDING", "DESCENDING", "DETAIL", "DISC", "DISK", "DISPLAY",
  "\"FUNCTION DISPLAY-OF\"", "DIVIDE", "DIVISION", "DOWN", "DUPLICATES",
  "DYNAMIC", "EBCDIC", "EC", "\"88\"", "ELSE", "END", "\"END-ACCEPT\"",
  "\"END-ADD\"", "\"END-CALL\"", "\"END-COMPUTE\"", "\"END-DELETE\"",
  "\"END-DISPLAY\"", "\"END-DIVIDE\"", "\"END-EVALUATE\"",
  "\"END FUNCTION\"", "\"END-IF\"", "\"END-MULTIPLY\"", "\"END-PERFORM\"",
  "\"END PROGRAM\"", "\"END-READ\"", "\"END-RETURN\"", "\"END-REWRITE\"",
  "\"END-SEARCH\"", "\"END-START\"", "\"END-STRING\"", "\"END-SUBTRACT\"",
  "\"END-UNSTRING\"", "\"END-WRITE\"", "ENTRY", "ENVIRONMENT",
  "\"ENVIRONMENT-NAME\"", "\"ENVIRONMENT-VALUE\"", "EOL", "EOP", "EOS",
  "EQUAL", "ERASE", "ERROR", "ESCAPE", "EVALUATE", "\"EVENT STATUS\"",
  "EXCEPTION", "\"EXCEPTION CONDITION\"", "EXCLUSIVE", "EXIT",
  "\"Exponentiation operator\"", "EXTEND", "EXTERNAL", "F", "FD",
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
  "\"RESET TRACE\"", "RETURN", "RETURNING", "\"FUNCTION REVERSE\"",
  "\"REVERSE-VIDEO\"", "REVERSED", "REWIND", "REWRITE", "RF", "RH",
  "RIGHT", "ROLLBACK", "ROUNDED", "RUN", "S", "SAME", "SCREEN",
  "\"SCREEN-CONTROL\"", "SCROLL", "SD", "SEARCH", "SECTION", "SECURE",
  "\"SEGMENT-LIMIT\"", "SELECT", "\"semi-colon\"", "SENTENCE", "SEPARATE",
  "SEQUENCE", "SEQUENTIAL", "SET", "\"78\"", "SHARING", "SIGN", "SIGNED",
  "\"SIGNED-INT\"", "\"SIGNED-LONG\"", "\"SIGNED-SHORT\"", "\"66\"",
  "SIZE", "\"SIZE ERROR\"", "SORT", "\"SORT-MERGE\"", "SOURCE",
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
  "_occurs_initialized", "occurs_keys", "_occurs_key_list",
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
  "accp_attr", "update_default", "end_accept", "add_statement", "$@42",
  "add_body", "_add_to", "end_add", "allocate_statement", "$@43",
  "allocate_body", "allocate_returning", "alter_statement", "$@44",
  "alter_body", "alter_entry", "_proceed_to", "call_statement", "$@45",
  "call_body", "$@46", "mnemonic_conv",
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
  "end_multiply", "open_statement", "$@69", "open_body", "open_mode",
  "open_sharing", "open_option", "perform_statement", "$@70",
  "perform_body", "$@71", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "read_statement", "$@72",
  "read_body", "read_into", "with_lock", "read_key", "read_handler",
  "end_read", "ready_statement", "release_statement", "$@73",
  "release_body", "reset_statement", "return_statement", "$@74",
  "return_body", "end_return", "rewrite_statement", "$@75", "rewrite_body",
  "write_lock", "end_rewrite", "rollback_statement", "search_statement",
  "$@76", "search_body", "search_varying", "search_at_end", "search_whens",
  "search_when", "end_search", "set_statement", "$@77", "set_body",
  "on_or_off", "up_or_down", "set_environment", "set_attr",
  "set_attr_clause", "set_attr_one", "set_to", "set_up_down",
  "set_to_on_off_sequence", "set_to_on_off", "set_to_true_false_sequence",
  "set_to_true_false", "set_last_exception_to_off", "sort_statement",
  "$@78", "sort_body", "@79", "sort_key_list", "_key_list",
  "_sort_duplicates", "sort_collating", "sort_input", "sort_output",
  "start_statement", "$@80", "start_body", "sizelen_clause", "start_key",
  "start_op", "disallowed_op", "not_equal_op", "end_start",
  "stop_statement", "$@81", "stop_returning", "_status_x", "stop_literal",
  "string_statement", "$@82", "string_body", "string_item_list",
  "string_item", "_string_delimited", "string_delimiter", "_with_pointer",
  "end_string", "subtract_statement", "$@83", "subtract_body",
  "end_subtract", "suppress_statement", "_printing", "terminate_statement",
  "$@84", "terminate_body", "transform_statement", "$@85",
  "transform_body", "unlock_statement", "$@86", "unlock_body",
  "unstring_statement", "$@87", "unstring_body", "_unstring_delimited",
  "unstring_delimited_list", "unstring_delimited_item", "unstring_into",
  "unstring_into_item", "_unstring_into_delimiter", "_unstring_into_count",
  "_unstring_tallying", "end_unstring", "use_statement", "$@88",
  "use_phrase", "use_file_exception", "use_global",
  "use_file_exception_target", "use_debugging", "debugging_list",
  "debugging_target", "_all_refs", "use_start_end", "program_start_end",
  "use_reporting", "use_exception", "use_ex_keyw", "write_statement",
  "$@89", "write_body", "from_option", "write_option", "before_or_after",
  "write_handler", "end_write", "_accept_exception_phrases",
  "_accp_on_exception", "accp_on_exception", "escape_or_exception",
  "_accp_not_on_exception", "accp_not_on_exception",
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
  "scope_terminator", "_advancing", "_after", "_are", "_area", "_as",
  "_at", "_binary", "_by", "_character", "_characters", "_contains",
  "_data", "_end_of", "_file", "_final", "_for", "_from", "_in",
  "_in_order", "_indicate", "_initial", "_into", "_is", "_is_are", "_key",
  "_left_or_right", "_line_or_lines", "_limits", "_lines", "_mode",
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
     775,   776,   777,   778,   779,   780,   781,   782,   783
};
# endif

#define YYPACT_NINF -2425

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2425)))

#define YYTABLE_NINF -1960

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2425,   268,  1338, -2425,   632,   817, -2425,   163, -2425, -2425,
     788, -2425, -2425,   -11,   610,   691, -2425,  1126, -2425,   751,
    1127, -2425, -2425,   788,   788, -2425, -2425,   778,  1152,   833,
     899,   976,  1256,   765,  1057,  1062,  1360,  1301, -2425,  1076,
    1420, -2425, -2425,  1148, -2425,  1099,  1177, -2425,  1407,  1111,
    1124,  1169,  1291,  1183,   -34,   -34,   -33, -2425,  1360, -2425,
     -33, -2425, -2425,    42,  3027,  3651,  1165,    -6, -2425,  1171,
    1185, -2425, -2425, -2425,  1200,  1598, -2425, -2425, -2425, -2425,
    1643,  1643, -2425, -2425,  1207, -2425,  1217, -2425, -2425,  1305,
    4045, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
     517, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1296, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425,   556, -2425, -2425,  1388, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425,  1215, -2425,   -37,    79,
   -2425, -2425,   -48,   387,  1220, -2425,    81,    81,  1321,  1341,
    1524,  1524,  1524,    81,  1362,  1524,  1729, -2425,  1409,  1598,
    1053, -2425, -2425, -2425, -2425,  1573, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425,  1537,  1332, -2425, -2425, -2425,
      92,    92,   347,  1335, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425,   390,  4117,  8114,
     412,   479,  -117,  1281,   840,   759,  5249,  6097,  1541,   904,
    1202,   840,  1283,  1344, -2425, -2425,  6097, -2425, -2425,   840,
    1286,  4428,  1283,  5378,  6097, -2425,  1034,  3372,  1281,  1283,
    1281,  1283,    70,   697,  1283,  1281, -2425, -2425, -2425, -2425,
   -2425, -2425,  6097,  5461, -2425, -2425,  1286,    74,  1283,  1281,
    1283,  1283,  1403,  1543, -2425,   286,  1347, -2425, -2425,  1349,
     964,   -78, -2425, -2425,  1402,  1395,  1753,  1524, -2425, -2425,
   -2425,   405, -2425, -2425, -2425, -2425, -2425,   767,  1759,  1524,
   -2425,   164, -2425, -2425, -2425,  1524,  1524, -2425,  1524, -2425,
    1283,  1750,  1283,  1524,  1524,  1283, -2425,  1302,  1156,  1359,
   -2425,  1399, -2425, -2425,  1307, -2425, -2425, -2425,   -64, -2425,
      83, -2425,   673,  -153,   313, -2425, -2425, -2425, -2425,     1,
    1695, -2425,  1631, -2425,  1356,  1520,  1213, -2425,  1283, -2425,
   -2425,  1358,  1361,  1363, -2425,  4481,     1,     1, -2425,  1365,
    1367,  1370, -2425, -2425, -2425,  1371,     1, -2425, -2425, -2425,
   -2425, -2425, -2425,  1372, -2425,  1363, -2425, -2425,  1701, -2425,
    5590, -2425, -2425, -2425, -2425,  1377, -2425, -2425,  1373,  1374,
    1375,  4481,  8222,  8114,  8222, -2425,   175,  1029, -2425,  1673,
   -2425, -2425, -2425,   820,  1377, -2425, -2425,   412, -2425,  1393,
   -2425,     1, -2425, -2425, -2425, -2425,  1719,  2176, -2425, -2425,
    -117, -2425, -2425, -2425,  1281,   799,  1520,  1723,   364, -2425,
    1466, -2425, -2425,  1356,  1377,  1281,  1725,  1502,  1116, -2425,
    1727,   644,  5673, -2425, -2425,  4812,  1221,  1266,  1731,   182,
    1357, -2425, -2425, -2425,  1726,    45, -2425, -2425, -2425,  4575,
   -2425, -2425,  1769,   517, -2425, -2425, -2425,   840, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425,  1418, -2425, -2425,   729, -2425,
    1286, -2425, -2425,    23, -2425, -2425, -2425, -2425, -2425, -2425,
    1406,  6097, -2425,  1415,  1735,  1834, -2425, -2425, -2425, -2425,
    1034,  1469, -2425,  1428, -2425, -2425,  3822,    15,   929,  1432,
    1430, -2425,   995, -2425,  1437,  1746,   598, -2425,  1694, -2425,
    1748,  1502,  1745,  1694,  1283,  1747,  1384, -2425,  4481,  1732,
   -2425, -2425, -2425, -2425, -2425, -2425,  1625, -2425,   840, -2425,
   -2425,   -21, -2425,   664,  1872, -2425,    52, -2425,  1754,    44,
    5107,  1756,  5802, -2425,  1791,  1283,  1758,  5885,  1286, -2425,
   -2425,   829, -2425, -2425, -2425, -2425,  3206, -2425,  1708, -2425,
   -2425,  1276,  1760,  1797,  1761,  1694,  1451,  1513,  1658,  1400,
    1400,  1400,     4,  1456,  6856, -2425, -2425, -2425,  1404, -2425,
   -2425, -2425,  1603, -2425,    81, -2425,   785, -2425,   138, -2425,
   -2425, -2425, -2425,  1524,  1512,  1665, -2425, -2425, -2425, -2425,
    1134,  1524,  1410,  1462,  1820,  1524,  1300,  1283,  1670, -2425,
   -2425, -2425, -2425,  1671,  1452, -2425, -2425,  1302, -2425,    59,
   -2425, -2425, -2425, -2425, -2425, -2425,  1348,   -80,  1524,    77,
   -2425, -2425, -2425,  1468,    35, -2425,  1524,  1514,  1616, -2425,
   -2425,  1826, -2425, -2425,  1283, -2425, -2425,  7185,  2037,  8114,
    1463, -2425, -2425,   -44, -2425,  1478,  8114,  8114,  7458, -2425,
   -2425,  1377, -2425,  1421,  1422,  8114,  8114,  8114,  4481,  1424,
    4481, -2425, -2425, -2425,  6226,  1733, -2425,  1213,  8114, -2425,
    4481,  8114, -2425,  1377, -2425, -2425, -2425,  1051, -2425,  1717,
    8114,  8114,  8114,  8114,  8114, -2425,  1561, -2425,  1599,  1687,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425,   799, -2425, -2425,
   -2425,   -18,   428,  1283, -2425, -2425, -2425, -2425, -2425,  8114,
    1672, -2425,  1463, -2425,  1281, -2425, -2425, -2425, -2425,    -4,
   -2425, -2425, -2425, -2425, -2425,  1649,  1783, -2425, -2425,  4812,
     115,   644,   644,   644,   644, -2425, -2425,  6097,  6226, -2425,
   -2425, -2425, -2425,   904,   171, -2425,  1435, -2425,  1439, -2425,
   -2425, -2425, -2425, -2425,  1344, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425,  4244, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425,   -17, -2425,  1824,
    1325,  1778, -2425,  4481,   107, -2425, -2425,  1584, -2425, -2425,
     113,  8114, -2425,  1501,   840, -2425, -2425,  6226,  1469,  1445,
    1281, -2425, -2425, -2425, -2425, -2425,  1794,  1283,   412, -2425,
     248, -2425, -2425, -2425, -2425,  1502,  4428, -2425, -2425, -2425,
    1736, -2425, -2425,   594,  1836, -2425, -2425,  1283,  1836,  1510,
   -2425, -2425,  1377, -2425,  1515, -2425, -2425,   603,  1348, -2425,
   -2425,  3265, -2425,  1923,   731,    73, -2425, -2425, -2425,  1524,
   -2425,   -81,  6097, -2425, -2425,   730, -2425, -2425,  1283, -2425,
    1924, -2425,  1774, -2425, -2425,  6226, -2425,  1665, -2425, -2425,
    4481, -2425, -2425, -2425, -2425, -2425,  1924,  1743, -2425, -2425,
     248, -2425,  1516,  1574,  1601, -2425, -2425, -2425,  1606,  1519,
   -2425,  1521, -2425, -2425,  1893, -2425,   604, -2425, -2425,  1517,
   -2425, -2425, -2425,  1964,  1526, -2425, -2425,  1665, -2425, -2425,
   -2425,   600, -2425, -2425, -2425,  1712,   889, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425,  1300, -2425,  1538, -2425,   408, -2425,
    1582, -2425, -2425, -2425, -2425,  1734,   -80, -2425,  1763,    81,
      81, -2425,  1348,   640, -2425,  -119, -2425, -2425, -2425,  1644,
   -2425,  1922,   843,  1524, -2425,  1482,  1539, -2425, -2425,   410,
   -2425,  1524,  1043,  7185, -2425, -2425, -2425,   590,  6932, -2425,
    1043, -2425, -2425, -2425,  1480,  1479, -2425,  4481,  1043,  1766,
    1575,  1705, -2425, -2425,  1728, -2425, -2425, -2425, -2425,   203,
    1058,  8114, -2425, -2425, -2425,   431, -2425,  1283,   259,   626,
    1550,   289,  1551, -2425,   296, -2425, -2425,   457,  1552,  1553,
    1554,   303, -2425,  1377, -2425,  1555, -2425,   318,  1556,  1520,
     883, -2425,   -43,    62,   840, -2425,  1191,  1558,   373, -2425,
    1562,  1561,  1029,  1029, -2425, -2425, -2425,   840, -2425,  1564,
     412, -2425,  1357, -2425, -2425,  1632, -2425,  1653, -2425,   709,
    1524, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1724,  1792,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425,    31, -2425, -2425,
    2154, -2425, -2425,  1566, -2425, -2425, -2425, -2425,  1822,   883,
    1827,    61, -2425, -2425, -2425, -2425,  2018, -2425,  1580,   179,
   -2425, -2425,   171, -2425, -2425, -2425, -2425,  1721, -2425, -2425,
   -2425,  1909,  1899,  1344, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425,  1667,  1344, -2425,  1585, -2425,  1995, -2425, -2425, -2425,
    1870, -2425,  4481,  6484, -2425, -2425, -2425,  1920,    47,   792,
      -5,   840,   840,   883,  1840,  1281,   336,   901, -2425,  1904,
   -2425, -2425, -2425,  2044, -2425,  1853, -2425, -2425, -2425, -2425,
    1736, -2425, -2425, -2425, -2425,  1283,    90,    -4,  1112, -2425,
    1542, -2425,  1546,  4481,  1741,   920, -2425,   431, -2425, -2425,
   -2425,  6097,  1348,  1348,  1348,  1348,  1348,  1348,  1348,  1348,
     731, -2425,   605,    -4,   608, -2425,  1623,  1623,   407,  6014,
    1283,   883,  1858,  1595, -2425,  1609,  2063,  1283,   513,   594,
    2066,   -37, -2425,  1611,  1674,  1675,  1567,  1114,  1283, -2425,
   -2425, -2425,  1114,  1989,  1524,  1322,  1322,  1524,    50,  1802,
    1524,  2059, -2425,  1770, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425,    81,    68, -2425, -2425,  1633, -2425,
    1889, -2425,    38, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425,  1158, -2425,    75, -2425,  1300, -2425,  1751, -2425, -2425,
    1734, -2425,    81, -2425, -2425, -2425, -2425, -2425,    66,  1568,
   -2425,   112, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
     139, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  2042, -2425,
   -2425, -2425, -2425, -2425,  1396, -2425,   102, -2425, -2425, -2425,
   -2425,  1784,  1784, -2425, -2425,  1784, -2425,  1524, -2425, -2425,
   -2425, -2425,  1524, -2425, -2425, -2425, -2425, -2425,   -10, -2425,
   -2425,  2034,  1676, -2425, -2425,   -25, -2425,  1524, -2425,  2084,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1043, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425,  8114,  7716,  1058,
   -2425, -2425, -2425,  1466,  7824,  1373,  7918,  1373, -2425,  1283,
    1373,  1373,  1373,  4481, -2425,   -97,  1373,   -44, -2425, -2425,
   -2425,  1789,  1677,   -40,  1887,   883,  8020,  1373,  1373,   888,
   -2425, -2425, -2425, -2425, -2425,   517, -2425, -2425, -2425,   662,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425,  1524, -2425,   -49, -2425, -2425,  1119,
    1524, -2425, -2425, -2425, -2425, -2425,   118,  1524, -2425, -2425,
     840, -2425,   840,  4901, -2425,   747,     0,   171, -2425, -2425,
   -2425,  2018,  1283, -2425, -2425, -2425, -2425,  1583,  1369,   342,
    1589,   888,  4481, -2425, -2425,  2046, -2425,  1346, -2425, -2425,
    6484, -2425,  1346,  1910,  1912, -2425,  1686, -2425, -2425,  1524,
   -2425, -2425,  1867,  1790, -2425, -2425,   840, -2425,   840,   901,
    1787,  1787,  1795, -2425, -2425, -2425, -2425,  1160, -2425, -2425,
    1283,  6097,   742, -2425, -2425, -2425, -2425,  1816,  1982, -2425,
   -2425,  1848, -2425, -2425, -2425, -2425,  1546, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
     -31, -2425,  1283, -2425, -2425, -2425,   977, -2425, -2425, -2425,
    8114, -2425,  6097,  6097,   396,  1780, -2425, -2425, -2425,  1466,
   -2425,   840, -2425,   888, -2425,  1799, -2425,  4481, -2425,  2006,
    1680, -2425,  1175, -2425,   726, -2425,   -37, -2425,  1657,  1720,
   -2425,   183, -2425,  1567, -2425,  1915,  1669,  7076,   814,  1918,
   -2425,  1665,  1617,  1524,  2059,  1618,   438,   471,  1665,  1621,
   -2425,  1524, -2425, -2425, -2425,   -41,  1536, -2425, -2425, -2425,
    2510, -2425,  1989,  1281, -2425, -2425, -2425, -2425, -2425,  1158,
   -2425,  1871, -2425, -2425,  1906, -2425,  1643,  1172,  1643,  1681,
   -2425, -2425, -2425, -2425, -2425,   161, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425,   410,   410,   410,   410,   410, -2425,
    1524,  1524,   484,   484,   410, -2425,   503, -2425,   626, -2425,
    1081,   -98, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425,  1938, -2425, -2425, -2425, -2425, -2425,
   -2425,  1940, -2425, -2425,  1093, -2425, -2425, -2425, -2425, -2425,
     521,   136, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425,  2579,   410, -2425, -2425,  1520, -2425, -2425, -2425, -2425,
     622,   410,   484,   484,   410,   883,  1781,   883,  1782, -2425,
   -2425,  6097, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425,  1369, -2425,  2045, -2425,  1344, -2425,  1346, -2425,  1346,
     888,  1684,  1684, -2425,  2143,  2119, -2425, -2425, -2425, -2425,
    -105,  1283, -2425, -2425, -2425,   883, -2425, -2425, -2425, -2425,
   -2425, -2425,  1768, -2425,  2109,  1892,  1921,   878, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425,   626, -2425, -2425, -2425, -2425, -2425, -2425,
    1857,  1689,  1524,   -98,   883,  1655, -2425,  2063, -2425,  1942,
    2069,  1942,   396, -2425, -2425, -2425, -2425,  1873,  2008, -2425,
   -2425, -2425,  1475, -2425,   -37, -2425,  1704,   220, -2425, -2425,
    1283, -2425,   595, -2425, -2425,  -170,   432,   713,   735,   805,
    1656, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1779, -2425,
     849, -2425, -2425, -2425, -2425,  1283,  1937, -2425, -2425, -2425,
     651, -2425, -2425, -2425,  1524, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425,    76,   -77, -2425,  1659, -2425,    86, -2425,  1716,
   -2425,  1984, -2425, -2425, -2425,  1618, -2425, -2425, -2425, -2425,
   -2425, -2425,  1919,    56,  1942,   494,  1524, -2425, -2425,  1524,
   -2425,  1802,  1502,   813, -2425,  1771,  1524,  2125,   146,   -63,
    1006,  1445, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425,  1752, -2425,  1927, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425,  2146,  1524,  1281,  1281,  1158, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425,   251, -2425, -2425, -2425, -2425,
   -2425,   538,   410, -2425,  1492, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
    1885,   -35,  1520, -2425, -2425, -2425, -2425, -2425,  1283, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,   840, -2425,
     840, -2425, -2425, -2425, -2425, -2425, -2425,  2141,  2079, -2425,
   -2425,  1346, -2425,  6097,  6097, -2425, -2425,  1850,  1281,   760,
   -2425,  1283, -2425, -2425,  6097, -2425,  1524,  1050,  1930,  1934,
   -2425,  1936, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425,  1283, -2425, -2425, -2425, -2425,  1739, -2425, -2425,  1283,
    1942, -2425,  1283, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425,   220, -2425,  1755, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425,  1682, -2425, -2425,  2153,  1749, -2425,
   -2425, -2425, -2425, -2425,  7618,  2181,  1803,  1803, -2425,  1520,
    1438,  1438, -2425, -2425,  1665,    85,  1283, -2425, -2425, -2425,
   -2425,  1665, -2425,  1793, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425,   560,   560,  1524,  1867, -2425, -2425,   954, -2425,
     699,  1524,  1524,  1524,  1524, -2425,  1964, -2425,   336,  1524,
    1802, -2425,  1800,  1617,  1281, -2425,  1878,  2201, -2425,  2108,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425,  1283, -2425,   -98,   -98,  6097, -2425, -2425, -2425,
   -2425,  1524,  1281,  1281,  1875, -2425, -2425,  1737,  1283, -2425,
   -2425,  1816,  1982, -2425, -2425, -2425, -2425, -2425,  1506, -2425,
   -2425,  1283, -2425,  1865,   674,  -227, -2425,   220, -2425,  1942,
    2025,  1665,  1772, -2425,  1966, -2425,  2125, -2425, -2425,  1438,
    1764, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1283, -2425,
     134,  1729, -2425,  1040, -2425, -2425, -2425, -2425,    29,  1524,
   -2425, -2425,  1303, -2425, -2425,   471,  1801,  1283,  1283, -2425,
   -2425,  1283,  1524, -2425, -2425, -2425,  1665, -2425,  1158,  1765,
   -2425, -2425, -2425, -2425,   412,  1281,  1524, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1355, -2425,
   -2425, -2425, -2425, -2425,  1886,  2127, -2425,  1286, -2425,  6593,
   -2425, -2425,   674,  1775,  1821, -2425,  1776, -2425,  1722,  1665,
    1749, -2425, -2425,  2121, -2425, -2425, -2425, -2425, -2425,   471,
     471, -2425, -2425, -2425, -2425,  2047, -2425, -2425,  1716,  1665,
   -2425, -2425, -2425, -2425,  1283, -2425, -2425,   566,   566,  2234,
   -2425, -2425, -2425, -2425, -2425,   566,   566,   576, -2425, -2425,
   -2425,   392, -2425, -2425,   682, -2425, -2425, -2425, -2425,   412,
   -2425,  1868,  1814,    22,  1721, -2425,  1785, -2425,  1786, -2425,
    1798,  1524, -2425, -2425,  2021,  1721, -2425, -2425, -2425,  2216,
    1729, -2425,   -32, -2425, -2425, -2425, -2425,  1517, -2425, -2425,
   -2425, -2425, -2425,  1524,  1283,  1738, -2425,  1738, -2425, -2425,
    1283, -2425,  1297, -2425, -2425, -2425,    67,   189, -2425, -2425,
   -2425, -2425,   220, -2425, -2425,  1283,  2027,   792,   471,  2137,
    1810, -2425, -2425,  1283,  1283,   768, -2425, -2425, -2425, -2425,
   -2425,  1913,  1089,    67, -2425, -2425,  1796,  1179,  7570, -2425,
    2027, -2425,  1924, -2425,  1867, -2425,  1721, -2425,  1757, -2425,
    1283,  1939, -2425, -2425,  1721, -2425, -2425,  1949,  1283, -2425,
   -2425,  1524,  1524,  2059,  1210, -2425, -2425, -2425, -2425,  2055,
    2085, -2425,  1524, -2425,   477, -2425,  1119,  1524,  4428, -2425,
   -2425, -2425, -2425,  1784, -2425,  1665, -2425,  2209, -2425, -2425,
   -2425,  1283, -2425, -2425,  1283, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425,  2060,  1784, -2425,  1762,  1524,  1283,
      82,   855,   110, -2425, -2425,   538, -2425, -2425,  1524,  2059,
    2010,  1767, -2425, -2425, -2425,  1283,   410, -2425, -2425, -2425,
   -2425,   410, -2425,  1524,  1772,  1524, -2425, -2425, -2425,  1524,
   -2425,  1762, -2425,  1283, -2425,  1213, -2425, -2425, -2425,  1392,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1281, -2425,
   -2425, -2425, -2425,  1505,   116, -2425,  1283, -2425, -2425, -2425,
     663, -2425,   538,   663, -2425,  1283, -2425, -2425,  1110, -2425,
   -2425,  2010, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425,   410, -2425, -2425, -2425,   410,  1211,  1524,  1524,  1612,
   -2425, -2425, -2425, -2425, -2425, -2425,  1703, -2425, -2425, -2425,
   -2425, -2425,  1524,  2010,  2010, -2425,  2052,  1524,  1524, -2425,
    2337,  2010, -2425, -2425, -2425,  2010,  2010,  2043,  1241,  2059,
    2058,  1665,  1773,  1524,  1520, -2425,  1524,  1524,  1283, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425,   911, -2425,   -13, -2425, -2425, -2425,  1241,  2059,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425,   183, -2425,  1524,
    1749, -2425,  8451,  8451,  1310,  2152,  2075, -2425,  1665,   911,
   -2425, -2425,  1665,   -13, -2425, -2425,   183, -2425, -2425,   911,
    1772, -2425,  1466,  8331, -2425, -2425,  1121,  1184, -2425, -2425,
    1198, -2425, -2425, -2425, -2425,   -60,   -60, -2425, -2425, -2425,
   -2425, -2425,  8451, -2425, -2425, -2425, -2425, -2425, -2425,  2121,
   -2425,  1721, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1956,
   -2425,  1956, -2425,  2229,  1842,   124,  1953, -2425, -2425,  8451,
    1665, -2425, -2425, -2425, -2425, -2425, -2425, -2425
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,    21,     6,     4,
      46,     8,     9,     0,     0,     0,     7,     0,    11,   291,
      49,    27,    24,    46,    46,    23,    22,     0,     0,   694,
     293,     0,   180,    51,     0,     0,    14,     0,    47,     0,
       0,    20,   739,     0,   295,     0,     0,    45,   182,     0,
       0,    98,    52,    53,     0,     0,     0,    12,    15,    16,
       0,    13,   292,   696,     0,     0,     0,   289,    50,     0,
       0,   186,    62,    56,     0,   100,    54,    55,    30,    29,
      33,    33,    32,    31,     0,    17,     0,   699,   697,   715,
       0,   793,   866,   875,   881,   888,   930,   936,   950,   945,
     951,   952,   960,  1007,  1016,  1019,  1045,  1056,  1059,  1062,
    1054,  1068,  1075,  1097,  1101,  1140,  1142,  1146,     0,  1152,
    1166,  1190,  1208,  1209,  1212,  1213,  1218,  1226,  1227,  1240,
    1276,  1294,     0,  1328,  1342,  1350,  1352,   721,  1356,  1359,
    1362,  1413,   741,   742,   743,   744,   745,   746,   747,   748,
     750,   749,   751,   752,   753,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,   776,   777,   778,
     779,   780,   781,   782,   783,   784,   785,   786,   787,   788,
     789,   790,   740,   294,   301,   302,   362,   296,   365,     0,
     181,   183,   184,    64,    58,    99,     0,     0,     0,  1931,
    1885,  1885,  1885,     0,     0,  1885,  1858,   118,    84,   101,
       0,   104,   106,   107,   108,   154,   110,   109,   111,   112,
     113,   114,   115,   116,   117,     0,     0,    25,    18,    19,
     704,   704,     0,     0,  1771,  1772,  1773,  1774,  1775,  1776,
    1777,  1778,  1779,  1780,  1781,  1782,  1783,  1784,  1820,  1821,
    1822,  1823,  1824,  1825,  1826,  1827,  1828,  1829,  1830,  1831,
    1832,  1833,  1834,  1835,  1836,  1837,  1838,  1839,  1785,  1786,
    1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,  1795,  1796,
    1797,  1798,  1799,  1800,  1801,  1802,  1803,  1804,  1805,  1806,
    1807,  1808,  1809,  1810,  1811,  1812,  1813,  1814,  1815,  1768,
    1816,  1817,  1818,  1819,   792,  1769,  1770,     0,     0,     0,
       0,   892,     0,     0,     0,     0,     0,     0,     0,  1501,
    1047,     0,     0,  1950,   915,   914,     0,  1067,  1501,     0,
       0,     0,     0,     0,     0,   791,     0,  1178,     0,     0,
       0,     0,     0,     0,     0,     0,  1324,  1327,  1314,  1325,
    1326,  1316,     0,     0,  1351,  1349,     0,   739,     0,     0,
       0,     0,     0,   525,   297,  1735,     0,  1570,   298,     0,
    1751,   270,   187,  1857,     0,     0,     0,  1885,  1993,    82,
      63,  1856,    68,    70,    71,    72,    73,  1856,     0,  1885,
      57,    60,  1592,  1591,   129,  1885,  1885,  1932,  1885,  1886,
       0,     0,     0,  1885,  1885,     0,  1859,     0,  1885,     0,
      48,     0,   102,   105,     0,   153,    34,    28,  1885,  1855,
     704,   701,   707,     0,   704,   716,   717,   691,   816,  1671,
     864,   795,   815,  1661,  1665,  1910,     0,  1714,     0,  1709,
    1715,     0,     0,  1721,  1694,     0,  1557,  1559,  1690,     0,
       0,     0,  1712,  1695,  1615,     0,  1561,  1693,  1713,  1691,
    1716,  1717,  1696,     0,  1711,  1721,  1710,  1692,   873,  1609,
     871,  1601,  1604,  1603,  1607,  1686,  1688,  1608,  1718,     0,
       0,     0,     0,     0,     0,   876,     0,  1546,  1549,  1551,
    1554,  1624,  1556,  1740,  1622,  1623,  1581,   882,   883,     0,
    1577,  1579,  1578,   895,   893,   894,   928,     0,  1640,   935,
     931,   932,   934,  1639,   937,   940,  1910,   948,     0,  1563,
    1754,  1596,  1666,  1670,  1597,     0,   958,  1924,  1690,   974,
    1005,  1442,  1599,   969,   971,   968,     0,  1603,  1014,     0,
     898,  1017,  1026,  1025,  1043,     0,  1022,  1024,  1500,     0,
    1049,  1053,  1051,  1054,  1052,  1046,  1057,  1058,  1594,  1060,
    1061,  1951,  1063,  1575,  1055,  1946,  1499,  1076,  1078,  1571,
    1098,  1099,  1102,     0,  1104,  1105,  1106,  1141,  1280,  1655,
    1656,     0,  1143,     0,  1150,     0,  1159,  1156,  1158,  1157,
    1153,  1160,  1180,  1581,  1960,  1167,  1178,  1169,     0,  1176,
       0,  1641,  1578,  1643,     0,  1206,  1746,  1210,  1416,  1566,
    1216,  1924,  1224,  1416,     0,  1238,  1231,  1567,     0,     0,
    1574,  1241,  1242,  1243,  1244,  1245,  1246,  1268,  1247,  1271,
    1248,     0,  1572,     0,     0,  1654,  1670,  1277,  1312,  1299,
    1317,  1340,     0,  1331,  1334,     0,  1347,     0,  1353,  1354,
     727,   733,   722,   723,   724,   726,     0,  1357,     0,  1658,
    1360,  1926,  1379,  1365,  1427,  1416,     0,     0,   528,     0,
       0,     0,   367,     0,     0,   371,   372,   370,     0,   300,
     303,   185,     0,  1752,     0,   282,   278,   179,     0,   273,
     275,   276,  1992,  1885,     0,     0,    67,    69,    65,    83,
    1856,  1885,     0,     0,     0,  1885,     0,     0,     0,   175,
    1584,   173,   178,     0,     0,   177,  1593,   156,   157,  1887,
     160,  1676,  1250,  1249,   119,   123,   126,  1914,  1885,     0,
      85,   103,   155,     0,     0,   702,  1885,     0,   713,   705,
     706,   718,  1971,  1972,     0,   865,   794,   817,     0,     0,
    1663,  1664,  1911,     0,  1687,     0,     0,     0,     0,  1707,
    1610,  1611,  1612,     0,     0,     0,     0,     0,     0,     0,
       0,  1708,   874,   867,     0,     0,  1602,     0,     0,  1697,
       0,     0,  1625,  1626,  1627,  1553,  1621,     0,  1552,  1742,
       0,     0,     0,     0,     0,  1741,   879,   884,   886,     0,
     929,   889,  1642,   897,   890,   896,   933,   940,  1983,  1984,
     938,     0,   941,     0,   949,   946,  1968,  1967,  1564,     0,
    1756,  1565,  1668,  1669,   955,   956,   959,   953,  1925,  1487,
    1006,   961,   736,   736,   966,  1448,  1445,   970,   967,  1600,
    1959,  1442,  1442,  1442,  1442,  1015,  1008,     0,     0,   899,
    1018,  1044,  1020,  1501,  1501,  1021,  1028,  1029,   736,  1526,
    1527,  1528,  1522,  1507,  1950,  1514,  1534,  1537,  1536,  1538,
    1530,  1521,  1520,  1525,  1524,  1523,  1529,  1509,  1513,  1531,
    1533,  1535,  1511,  1512,  1508,  1510,  1502,  1503,  1515,  1516,
    1517,  1518,  1519,  1506,  1050,  1048,  1595,  1065,  1947,   736,
    1080,     0,  1100,     0,  1127,  1111,  1103,  1108,  1109,  1110,
    1284,     0,  1657,     0,     0,  1151,  1147,     0,  1160,  1959,
       0,  1168,  1174,  1175,   736,  1171,  1501,     0,     0,  1179,
       0,  1207,  1191,  1747,  1748,  1924,     0,  1211,  1217,  1214,
    1193,  1225,  1219,  1221,  1233,  1239,  1228,     0,  1233,     0,
    1632,  1634,  1635,  1636,     0,  1269,  1272,     0,     0,  1573,
    1252,     0,  1251,     0,     0,  1668,  1313,  1295,  1301,  1885,
    1302,  1297,     0,  1315,  1319,     0,  1341,  1329,     0,  1332,
    1854,  1333,     0,  1348,  1343,     0,  1355,   734,   732,   725,
       0,  1927,  1928,  1361,  1380,  1363,  1854,     0,  1428,  1414,
    1418,   363,     0,     0,   531,   380,   412,   415,     0,     0,
     368,     0,   378,   373,   379,   376,  1885,  1753,   188,  1866,
     279,   280,   281,  1846,     0,   271,   274,     0,  1991,    76,
      66,     0,  1585,    75,    59,     0,     0,  1683,  1679,  1684,
    1682,  1680,  1685,  1681,   164,   165,   167,   176,   171,   169,
       0,   158,  1889,  1888,   161,     0,  1914,  1917,  1916,     0,
       0,   120,   124,    87,    26,    37,    40,    44,    43,  1922,
      38,    39,     0,  1885,   714,     0,     0,   692,  1672,  1851,
     822,  1885,  1429,   818,   819,   821,   823,     0,     0,   811,
    1429,  1966,  1965,   808,   800,   802,   803,     0,  1429,     0,
       0,     0,   825,   806,     0,   814,   797,   813,   798,  1541,
    1539,     0,  1662,  1629,  1628,     0,  1614,     0,  1541,  1539,
       0,  1541,     0,  1723,  1541,  1558,  1560,  1541,     0,     0,
       0,  1541,  1618,  1619,  1620,     0,  1562,  1541,     0,  1910,
    1451,   872,  1670,  1597,     0,  1689,     0,     0,  1541,  1555,
    1744,   879,  1545,  1544,  1548,  1547,  1550,     0,   877,     0,
       0,  1580,   898,   939,   944,     0,  1871,     0,  1598,  1451,
    1885,  1755,  1667,   957,   736,   736,   954,  1488,  1494,  1491,
    1447,   737,  1450,  1443,  1449,  1444,  1446,     0,   980,   979,
     972,   975,   977,     0,   964,   965,   962,   963,     0,  1451,
       0,   905,  1023,  1038,  1040,  1039,  1033,  1035,  1041,  1501,
    1030,  1027,  1501,  1031,  1532,  1504,  1505,  1912,  1064,  1576,
     736,  1072,  1073,  1950,  1088,  1089,  1091,  1093,  1094,  1090,
    1092,  1083,  1950,  1079,     0,  1128,     0,  1130,  1129,  1131,
    1113,  1123,     0,     0,  1107,  1990,  1913,     0,  1286,     0,
    1876,     0,  1144,  1451,     0,     0,     0,  1162,  1568,  1172,
    1185,  1181,  1186,  1182,  1187,     0,  1177,  1423,  1422,  1184,
    1193,  1417,  1651,  1652,  1653,     0,     0,  1487,     0,   736,
       0,  1232,     0,     0,     0,     0,  1270,     0,  1274,  1273,
    1266,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1254,  1255,  1749,  1487,     0,  1318,  1942,  1942,  1338,     0,
       0,  1451,     0,     0,   735,     0,  1736,     0,  1338,  1221,
    1840,   365,   526,     0,     0,   626,     0,   438,     0,   369,
     375,   419,   381,  1860,  1885,     0,     0,  1885,  1860,  1903,
    1885,  1844,   299,     0,   304,   307,   308,   309,   310,   311,
     312,   313,   314,   315,     0,     0,   190,  1867,  1944,  1847,
    1870,   272,     0,    79,    81,    80,    77,    78,    61,   135,
     134,   149,   145,   150,   131,   148,   146,   132,   133,   147,
     130,   136,   137,   139,   166,     0,   170,     0,   174,  1677,
     159,   162,     0,  1915,   127,   121,   122,   125,     0,     0,
      86,     0,    90,    42,  1923,    36,    41,   708,   709,   712,
       0,   703,   719,   721,  1646,   829,  1644,  1645,     0,  1435,
    1436,  1440,  1441,   796,  1437,   736,  1432,   736,   820,  1964,
    1963,  1905,  1905,   827,   828,  1905,   834,  1885,   836,   837,
     838,   863,  1885,   839,   840,   841,   842,   843,     0,   844,
     845,   847,     0,   848,   849,     0,   850,  1885,   835,  1842,
     853,   862,   856,   824,   855,   812,   799,   801,  1429,   809,
     804,   805,   826,   807,  1542,  1543,  1673,     0,     0,     0,
    1631,  1613,  1630,  1754,     0,  1718,     0,  1718,  1722,     0,
    1718,  1718,  1718,     0,  1701,     0,  1718,     0,   736,   736,
     868,  1457,  1454,  1668,  1669,  1451,     0,  1718,  1718,     0,
    1743,   878,   880,   887,   885,   909,   943,   942,   947,     0,
    1493,  1496,  1489,  1495,  1490,  1492,   739,   986,   987,   984,
     983,   985,   982,   976,  1885,   988,     0,   991,   992,  1864,
    1885,   995,   996,   978,   997,   998,     0,  1885,  1000,   981,
       0,  1009,     0,   900,   901,   707,     0,  1501,  1501,  1037,
     736,  1034,     0,  1071,   736,  1074,  1069,     0,     0,  1095,
       0,     0,     0,  1124,  1126,     0,  1119,  1133,  1120,  1121,
    1112,  1115,  1133,     0,  1634,  1989,     0,  1962,  1278,  1885,
     504,   505,  1890,     0,  1877,  1285,  1145,  1148,     0,  1162,
    1918,  1918,     0,  1161,  1165,  1154,  1569,     0,  1173,  1170,
       0,     0,  1195,  1194,   736,   736,  1215,  1476,     0,  1220,
    1222,     0,  1234,  1501,  1501,  1229,  1235,  1253,  1275,  1265,
    1267,  1257,  1258,  1259,  1263,  1260,  1264,  1261,  1262,  1256,
    1750,  1311,     0,  1308,  1309,  1303,     0,  1296,  1988,  1987,
       0,  1943,  1322,  1322,  1460,     0,  1336,  1335,  1337,  1754,
    1344,     0,   728,     0,  1737,  1366,  1367,     0,  1370,  1373,
    1377,  1371,  1424,  1841,     0,   364,   365,   529,     0,     0,
     290,  1887,   413,     0,   439,     0,   410,  1885,  1848,     0,
    1861,     0,     0,  1885,  1844,     0,     0,     0,     0,     0,
    1904,  1885,   358,  1845,   359,     0,     0,   360,   305,   306,
    1924,  1945,  1860,     0,  1979,  1980,    74,   138,   141,     0,
     168,     0,   163,   128,     0,    96,    33,     0,    33,     0,
      88,    91,   710,   711,   721,   739,   833,  1430,  1438,  1434,
    1431,  1433,  1439,  1906,     0,     0,     0,     0,     0,   854,
    1885,  1885,  1497,  1497,     0,  1843,     0,   810,  1540,  1674,
       0,  1451,  1732,  1705,  1734,  1706,  1730,  1702,  1703,  1704,
    1728,  1725,  1726,  1700,  1598,  1459,  1456,  1452,  1458,  1453,
    1455,  1667,   869,  1719,     0,  1698,  1699,  1745,  1637,  1638,
     918,  1883,  1758,  1759,  1760,  1761,  1762,  1763,  1764,  1765,
    1757,     0,     0,   989,   990,  1910,   674,   676,   993,   994,
       0,     0,  1497,  1497,     0,  1451,  1563,  1451,  1563,   902,
     903,     0,   907,   906,   908,  1036,  1042,  1032,  1066,  1070,
    1081,  1084,  1085,  1862,  1077,  1950,  1082,  1133,  1633,  1133,
       0,  1881,  1881,  1118,  1134,  1135,  1116,  1122,  1117,  1961,
    1288,     0,  1891,  1282,  1878,  1451,  1155,  1919,   267,   268,
     269,  1164,     0,  1188,     0,     0,  1202,     0,  1475,  1478,
    1469,  1477,  1470,  1223,   736,   736,  1236,  1310,  1300,  1304,
    1305,  1306,  1307,  1298,  1320,  1323,  1321,   736,   736,  1330,
    1466,  1463,  1885,  1451,  1451,   730,  1358,  1736,  1369,  1874,
    1375,  1874,  1460,   736,   736,  1415,  1426,  1484,  1481,  1425,
    1421,  1420,  1895,   527,   365,   532,     0,     0,   416,   440,
       0,   409,     0,   514,   444,  1933,  1933,  1933,  1933,  1933,
    1955,   445,   480,   482,   448,   449,   450,   451,   452,   453,
     476,   474,   475,   477,   478,   483,   481,   454,  1929,   479,
       0,   455,   441,   456,   457,     0,  1936,   459,   460,   458,
    1892,   462,   463,   461,  1885,   420,   421,   422,   423,   424,
     425,   442,   446,   447,   426,   427,   428,   429,   430,   431,
     432,   433,     0,     0,  1849,     0,   414,     0,   382,   327,
     236,   355,  1981,  1982,  1588,   336,  1586,  1974,  1973,   329,
    1590,  1589,  1901,  1858,  1874,     0,  1885,   333,   332,  1885,
     361,  1903,  1924,  1952,   252,     0,  1885,  1856,  1890,   254,
       0,  1959,   240,   189,   239,   191,   192,   193,   194,   195,
     196,     0,   197,     0,   198,   251,   199,   200,   201,   202,
     203,   204,  1852,  1885,     0,   277,     0,   140,   172,    92,
      93,    97,    94,    95,    89,   739,   830,   832,   831,   858,
     857,     0,     0,   860,     0,  1649,  1650,   859,   852,  1678,
     861,  1647,  1648,  1675,   870,  1720,   736,   736,   736,   891,
     925,   921,  1910,  1884,   912,   917,   916,   911,     0,  1002,
    1865,   675,   677,  1001,  1004,  1003,   999,  1011,     0,  1010,
       0,   904,  1606,  1605,  1660,  1086,  1863,     0,     0,  1114,
    1125,  1133,  1882,     0,     0,  1136,  1137,     0,     0,  1291,
    1287,  1281,  1149,  1163,     0,  1196,  1885,  1487,     0,     0,
    1197,     0,  1201,  1230,  1237,  1468,  1465,  1461,  1467,  1462,
    1464,     0,  1346,  1345,  1381,   729,     0,  1368,  1875,     0,
    1874,  1372,     0,  1364,  1483,  1486,  1479,  1485,  1480,  1482,
    1896,  1897,  1419,   530,   534,   627,   515,   517,   519,   411,
     523,   524,  1934,   473,   472,   465,   464,   471,   470,   469,
     468,   467,   466,  1956,     0,  1930,   511,   497,   491,   434,
    1937,  1893,  1894,   512,     0,   436,  1766,  1766,   418,  1910,
       0,     0,   417,   383,     0,   317,     0,   354,  1587,  1902,
     338,     0,   320,  1938,   347,   349,   353,   352,   348,   350,
     346,   351,     0,     0,  1885,  1890,  1953,  1954,   219,   255,
    1924,  1885,  1885,  1885,  1885,   264,  1846,   265,     0,  1885,
    1903,  1853,     0,     0,   283,   284,   287,   142,   143,     0,
     846,   851,  1985,  1986,  1498,   923,   927,   924,   919,   926,
     920,   922,     0,   910,  1451,  1451,     0,  1096,  1132,  1139,
    1138,  1885,  1289,     0,     0,  1279,  1283,     0,     0,  1192,
    1205,  1476,  1473,  1204,  1200,  1198,  1199,  1339,  1389,   731,
    1374,     0,  1378,   533,   629,   521,   518,     0,   513,  1874,
     493,     0,  1948,   443,     0,   435,  1856,   484,   485,     0,
       0,   392,   388,   391,   390,   389,   404,   400,   402,   403,
     405,   401,   406,   407,   408,   385,   396,   397,   398,   393,
     394,   395,   387,   384,   328,   319,   318,   316,   356,  1582,
     337,  1858,  1939,   325,   334,   331,   335,   330,     0,  1885,
     221,   220,   217,   254,   250,     0,     0,     0,     0,   263,
     266,     0,  1885,   253,   235,   285,     0,   286,     0,     0,
     913,  1013,  1012,  1087,     0,  1292,  1885,  1501,  1203,  1471,
    1472,  1474,  1851,  1412,  1411,  1390,  1382,  1383,  1842,  1384,
    1385,  1386,  1387,  1410,     0,     0,  1376,     0,   535,     0,
     633,   628,   630,     0,     0,   516,     0,   520,     0,     0,
     491,   492,  1949,   495,   437,  1767,   386,   399,  1583,     0,
       0,   339,   340,   341,   342,     0,   321,  1873,   327,     0,
     229,   230,   228,   227,     0,   213,   214,   224,   224,     0,
     212,   210,   211,   216,   215,   224,   224,     0,   256,   257,
     258,   259,   262,   237,     0,   288,   144,   720,  1290,     0,
    1189,     0,  1940,     0,  1912,   536,     0,   634,     0,   631,
       0,  1885,   498,   494,   499,  1912,   502,   345,   344,  1850,
    1858,   326,  1738,   225,   207,   226,   208,  1866,   209,   206,
     222,   205,   223,  1885,     0,   246,   245,   246,   242,  1293,
       0,  1941,     0,  1408,  1407,  1406,     0,     0,   636,   637,
     632,  1958,     0,   500,   502,     0,   506,   501,     0,   323,
     232,  1739,   218,     0,   260,     0,   244,   243,  1409,  1970,
    1969,  1920,  1402,  1396,  1397,  1399,     0,  1885,  1935,   522,
     506,   496,  1854,   489,  1890,   343,  1912,   322,     0,   231,
     261,     0,   249,  1921,  1912,  1405,  1400,  1403,     0,  1398,
     540,  1885,  1885,  1844,  1898,   565,   539,   543,   544,     0,
    1868,   652,  1885,   641,  1955,   642,  1864,  1885,     0,   655,
     650,   645,   651,  1905,   646,     0,   649,   657,   654,   647,
     653,     0,   658,   648,     0,   669,   663,   667,   666,   664,
     668,   638,   670,   665,     0,  1905,   490,     0,  1885,     0,
       0,     0,     0,  1404,  1401,     0,  2008,  2009,  1885,  1844,
       0,   537,   541,  1869,   545,     0,     0,   639,   640,   643,
     644,     0,   672,  1885,  1948,  1885,   673,   671,   689,  1885,
     510,   507,   508,     0,   324,     0,   151,   152,   234,     0,
    1977,  1978,   247,  1395,  1392,  1394,  1393,  1388,  1391,   542,
    1899,  1900,   553,   550,   377,   566,   546,   547,   662,   661,
     682,   688,     0,   685,   509,   503,   233,   248,   549,  1975,
    1976,   552,   567,   379,   548,   680,   678,   681,   679,   683,
     684,     0,   656,   686,   687,     0,     0,  1885,  1885,     0,
     554,   555,   556,   557,   558,   559,     0,   569,   659,   660,
    1995,  1994,  1885,     0,     0,  1997,     0,  1885,  1885,   551,
    1935,     0,   564,   560,  1996,     0,     0,  1879,  1907,  1844,
       0,     0,     0,  1885,  1910,   568,  1885,  1885,     0,   574,
     576,   585,   577,   579,   582,   570,   571,   572,   581,   583,
     586,   573,     0,   578,     0,   580,   584,   575,  1907,  1844,
     561,   563,   562,  1880,   624,  1908,  1909,  1887,   610,  1885,
     491,  1501,     0,     0,     0,     0,     0,   618,     0,   608,
     614,   617,     0,   611,   619,   622,  1887,   613,   609,     0,
    1948,   606,  1754,   602,  1616,  1999,     0,     0,  2001,  2003,
       0,  2007,  2005,   587,   591,   595,   595,   589,   593,   588,
     594,   625,     0,   616,   615,   621,   620,   612,   600,   495,
     623,  1912,   601,  1617,  1998,  2002,  2000,  2006,  2004,   598,
     590,   598,   592,     0,   487,     0,     0,   597,   596,     0,
       0,   486,   605,   603,   604,   599,   607,   488
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2425, -2425, -2425, -2425, -2425,  2277, -2425, -2425, -2425, -2425,
   -2425, -2425,  2227, -2425,  1693, -2425, -2425, -2425, -2425, -2425,
   -2425,  2231,  2228,   -62, -2425, -2425, -2425,  1214, -2425, -2425,
   -2425, -2425, -2425,  2238, -2425, -2425, -2425,  2241, -2425, -2425,
    1898,  -243, -2425, -2425, -2425, -2425, -2425,  2093, -2425, -2425,
   -2425, -2425,   890, -2425, -2425, -2425, -2425,  2080,   522, -2425,
   -2425, -2425, -2425,  1228, -2425, -2425, -2425, -2425, -2425,   912,
   -2425, -2425, -1665, -2425, -2425, -2425, -2425, -2425,  1577, -2425,
   -2425, -2425, -2425,  1251, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  -868, -2425,
   -2425, -2425, -2425, -2425,    54, -2425, -2425, -2425, -2425, -2425,
    -199, -2425,    69, -2425, -2425, -2425,  -132, -2425, -2425, -2425,
   -2425,    72, -2425, -2425,  1620, -2425, -2425, -2425, -2425, -2425,
      60, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  -123, -2425,
   -2425, -2425,    88, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -1265, -2425, -2425,  1634, -2425, -2004, -2231,  -667, -2425, -2425,
   -1084, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -1146,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,   627, -1735,
    -225,   121, -1121, -1010, -1725, -2425, -2425, -2425, -2305, -2425,
    -503, -2425, -2425,  -196, -2425,  -200,  -221, -2425,  -321, -1720,
   -2425, -1714, -2425, -1652, -2425, -2425,   155, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  -483,
    -507, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -1293, -2425,  -458, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425,   -74, -2425, -2425, -2425,  -247,  -246,  -342,  -341,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425,  2104,  1055, -2425,   781, -2425, -2425, -2425, -2425, -1101,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425,  -394, -2425, -2425,
     -24, -2425,  2282, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
    1257, -2425,  -729, -2425, -2425,  -703, -2425,   891, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1190, -2425, -2425,
   -2425,  1849, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1186,
   -2425, -2425,   794, -2425, -2425,  -603, -2425, -2425, -2425,   264,
   -2425,   272, -2425, -2425, -2425, -2425,  1843, -2425, -2425, -2425,
    1547, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1823, -2425, -2425,
   -2425,  1166, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1504, -2425, -2425,
    1503, -2425, -2425,  1146,   810, -2425, -2425, -2425, -2425, -2425,
    1815, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425,   542,  1474, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425,  1470, -2425, -2425,   789,
   -2425,  1135, -2425, -2425, -1515,   531,   535, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  1808,
    1464,   782, -2425, -2425, -2425, -2425, -2425, -2425, -2158,  1806,
   -2425, -2425, -2425,   775, -2425, -2425, -2425,  1118, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425,  1070, -2425, -2425, -2425, -2425, -2425,
   -2425,  1443,   766, -2425, -2425, -2425, -2425, -2425,  -499, -2425,
   -2425, -2425, -2425,  1104, -2425, -2425, -2425,  1807, -2425,  1777,
   -2425, -2425, -2425,  2062, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425,   746, -2425, -2425, -2425, -2425, -2425,  1804,
   -2425, -2425,  1090, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425,   512, -2425,  1092, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,  -122,
   -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425, -2425,   684,
   -2425,  1412, -2425, -2425,  -948, -2425,   987, -2425, -2425,   991,
   -2425,   932, -2425,  1581, -2425,  1588, -1108, -2425,   914, -2425,
     917,   518, -2425,   534, -2425,   536, -2425, -2425, -2425, -1565,
     151, -1238, -2425, -2425,   526, -2425,   529, -1226,   769, -2425,
    1258, -2425,  1260,  -390,  -925,  -283,  -808, -2425, -2425,  1557,
   -1194,   793,   798,   801,   802,   913,   578,   -47,   926,   909,
   -2425,  1287,  -184,  -731,  -285,   -89,  1831, -1222,  -197,  -357,
   -2425,  -612, -2425,  -266, -1395,  1641, -1468,  -405,  1419, -2425,
     456, -2176,  -187,  1740,  -284,  -301, -2425,  -164,  -294, -2425,
     631, -2425,  -720, -1244, -2425,  1167,  -570, -1486, -2425,   944,
    -323,  1948,  -970, -2425, -2425,  -121,  -328, -2425,  1113, -2425,
   -2425, -2425,  -282,  -434, -2425, -2425,  1243,  -466,  -430,  -312,
    1072, -1738,  1073,  -324,  -234,  -438,   -28, -2425, -2425, -2425,
     241,  1998, -2425, -2425,   969, -2425, -2425, -2425, -2425, -2425,
   -2425, -2425, -2425, -2425, -2425, -2425, -1471, -2425, -2425,   263,
   -2425, -2425, -2425, -2425,    80, -1672,   228, -2425, -2094, -2425,
    -975, -1904, -1929, -1240, -2425, -2425,   -22, -2425, -1336, -2425,
   -1648, -2425, -2425,   625, -2425,  -211, -1655, -1956, -2425, -2425,
   -2425, -2425, -1837, -1418,  -287,  -520, -1211,  1416,   872, -2425,
   -2425,  -514, -2425, -2425, -2425,  -144, -2425, -2425, -2425,  1168,
   -2425,   905, -2424,  -823, -2425, -2425, -2425,  -279,   770, -1688,
   -1285, -2425, -2425,  1068, -2425, -2425,  -172, -2425,  1142, -2425,
   -2425, -2425,    -3, -2425, -1853,  -293, -2425, -2425, -2425, -2425,
   -2425, -2425
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    12,
      57,    58,    59,    61,    18,    13,    23,    35,   428,    24,
      34,    80,    84,   236,   743,  1079,  1080,  1081,    19,    20,
      32,    33,    51,    52,   204,   400,   713,    53,   203,   390,
     391,   392,   393,   394,   395,   396,  1376,   397,   420,  1073,
    1410,  1411,  1412,  1737,    75,   218,   219,   220,   221,   222,
     418,   734,  1406,   735,   736,   223,   715,  1390,  1391,  1392,
    2056,  2257,  1393,  2658,   224,   425,   225,   727,   728,   729,
    1400,   226,  1054,  1055,   227,   228,  1396,   229,   230,   231,
     232,   233,   234,    47,    48,    71,   381,   202,   382,  1366,
    1720,  2035,  2036,  2455,  2456,  2457,  2362,  2501,  2494,  2037,
    2443,  2038,  2559,  2039,  2001,  2040,  2041,  2042,  2043,  2508,
    2536,  2044,  2045,  2046,  2047,  2048,  2460,  2049,  2050,  2246,
    2051,  1613,   697,   698,   699,   700,  1033,   701,  1029,  2254,
    2255,  2377,    29,   196,    30,    44,    67,   197,   198,   690,
     199,  1026,  1354,  1355,  2347,  1356,  2557,  2438,  2215,  1357,
    1358,  2019,  2355,  1359,  1360,  2350,  2431,  2432,  2433,  2434,
    1361,  2230,  2231,  1362,  2217,  1363,  1364,  1716,   373,  1331,
     374,   375,   682,   683,  1341,   684,  1023,  1024,  1698,  2212,
    2335,  2336,  2337,  2338,  2339,   685,  1931,   686,  1336,   687,
    1337,  1996,  1697,  1975,  1976,  1977,  2315,  1693,  1694,  1979,
    1980,  1981,  1982,  1983,  1984,  2751,  2851,  1985,  2312,  2420,
    2486,  2310,  2524,  2526,  2527,  1602,  2553,  2651,  2652,  1986,
    1987,  1988,  1989,  1692,  2305,  2176,  2177,  2415,  1991,   678,
    1686,  1014,  1924,  1335,  2174,  2303,  2408,  2517,  2547,  2576,
    2577,  2634,  2676,  2578,  2672,  2688,  2710,  2711,  2712,  2713,
    2714,  2715,  2631,  2675,  2717,  2730,  2755,  2756,  2813,  2840,
    2847,  2757,  2758,  2832,  2853,  2759,  2760,  2761,  2762,  2763,
    2764,  2789,  2790,  2793,  2794,  2765,  2766,  2767,  1690,  2304,
    2411,  2412,  2413,  2519,  2548,  2611,  1818,  1819,  2699,  2700,
    2701,  2705,  2612,  2613,    41,   751,  1423,    42,    89,   241,
     240,   430,   431,   432,   748,  1085,   243,  1087,  1744,   367,
     662,   663,  1905,  2155,   664,   665,  1323,  1190,  1191,  1536,
     666,    65,   142,   143,   317,   440,   757,   441,  1092,  1093,
    1094,  1116,  1095,  1443,  1444,  1096,  1473,  1474,   756,   144,
     318,   478,   785,   783,   145,   319,   495,  1168,   146,   320,
     507,   508,  1170,   147,   321,   516,  1172,   517,   814,   860,
    1211,  1563,  1564,  1565,  1800,   336,  2097,  2089,  2270,  2090,
    2268,  2091,   811,   148,   322,   520,   521,   149,   323,   524,
     820,   150,   324,   527,   825,   151,   152,   153,   325,   536,
     834,   837,   154,   326,   540,   541,   542,   543,   850,   544,
    1200,  1201,  1202,  1541,  1559,   841,   155,   327,   548,   856,
     156,   328,   551,   157,   329,   554,   555,   556,   865,   866,
     867,  1221,   868,  1216,  1217,  1569,   862,   158,   330,   565,
     337,   159,   331,   566,   160,   332,   569,   161,   333,   572,
    1228,   162,   163,   338,  1232,  1576,   164,   339,   577,   910,
    1241,  1579,  1841,  1842,  1843,  1844,   165,   340,   580,   166,
     341,   582,   583,   916,   917,  1253,   918,   919,  1590,  1591,
    1250,  1251,  1252,  1584,  1853,  1854,  1855,   167,   342,   168,
     343,   592,   169,   344,   594,   926,   170,   346,   600,   601,
     930,  1615,   171,   347,   605,   934,  1619,   935,   606,   607,
     608,  1271,  1273,  1274,   172,   348,   615,  1286,  1876,  2137,
    2289,   942,   173,   174,   349,   617,   175,   176,   350,   620,
     949,   177,   351,   622,  1287,   952,   178,   179,   352,   625,
     958,  1290,  1635,  1636,   956,   180,   353,   631,   737,   973,
     632,   633,  1310,  1311,   634,   635,   636,   637,   638,   639,
     640,   181,   354,   587,  1860,   920,  2131,  1258,  1598,  2129,
    2285,   182,   355,   648,  1313,   981,  1652,  1653,  1654,   977,
     183,   650,   983,  1894,   361,   184,   362,   651,   652,   653,
     991,  1667,  1664,   987,   185,   363,   656,   994,   186,   365,
     187,   366,   658,   188,   368,   667,   189,   369,   670,   190,
     370,   672,  1007,  1675,  1676,  1328,  1678,  1910,  2161,  1912,
    1005,  2156,  2298,  2396,  2397,  2398,  2667,  2399,  2543,  2544,
    2568,  2400,  2515,  2401,  2402,  2403,   191,   371,   674,   947,
    1329,  1279,  1915,  1009,  1433,  1750,  1434,  1435,  1747,  1436,
    1437,   844,  1195,   845,  1193,   846,  1510,  1789,  1511,  1787,
    1512,  1899,  2149,  1900,  2147,  1901,  1626,  2290,  2390,  1627,
    1880,  1881,  1916,  2168,  1917,  2166,  1918,  1186,  1187,  1534,
    1188,  1532,  1189,  2073,   575,   576,   558,   559,   896,   897,
     898,   899,   900,   901,   902,  1119,  1487,  1129,   497,   498,
     499,   500,   479,   528,   828,   618,   626,  1267,  1268,   581,
     641,   642,   907,   609,   510,   511,  2348,  2011,  1043,  2005,
    2006,  2012,   404,   730,   567,   530,   848,   480,   481,  2111,
     482,  2803,  1141,   502,  1125,  1491,  1592,  1847,   960,  1848,
     522,   610,  1425,  2080,  2074,  1281,  1426,   588,   645,   668,
    1593,  2113,   483,   443,   531,   532,   444,   760,   761,  1427,
    1401,  2791,  1056,   484,   485,   486,   487,   488,   489,   490,
     789,   769,  1148,  1145,  1138,  1130,  1132,   688,  1677,  2530,
     806,  1161,  1520,   945,  1656,   694,   831,  1181,  1810,  2317,
     314,   315,   316,  1684,  1766,  1714,  1370,  1997,  1097,  2252,
     433,   398,   417,  1701,  2117,  1820,  1368,  2635,  1177,  2439,
    2159,  1605,  2774,  2123,  2098,   410,  1065,  1863,  2203,  2172,
    2630,  2220,  1711,  1754,  2777,   763,  1259,  1069,  1868,  2564,
    1415,  2052,  1003,  2196,   408,  2184,  1993,  2353,  2512,  1662,
    1722,   909,  2423,   573,  2238,  2194,  2416,   614,  1599,  1445,
    1118,   829,  2541,   754,  2009,  2691,  2662,  1726,  1705,   822,
    2264,  1660,  1260,   399,  2722,  2728,  2816,  2817,  2818,  2819,
    2820,  2580
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     411,   412,   378,   546,   415,   719,   823,   722,   764,   659,
     725,  1272,  1016,  1017,  1018,  1319,  1572,   585,    64,   237,
     405,   770,  1771,   839,  1755,   644,   413,  1756,  2082,   969,
     568,  1326,  2003,   549,  1723,   442,  1927,   503,   568,   529,
     523,  1928,   574,  1609,   547,  1990,   557,   982,  1628,   593,
     595,  1224,   568,  1150,   509,   578,  1218,   792,   959,   584,
    1147,  1629,   863,  1882,  2057,   611,  1685,   832,   654,   643,
    1157,  1528,  2243,  2244,  -695,  1734,  2542,  1857,   402,   624,
     376,  1062,   402, -1656,  2222,   504,   669,  1657,   673,  1832,
     534,  2655,  1728,  -366,  1255,   446,  1724,   534,    87,  1227,
    1762,  1561,  1451,   833, -1657,   534,   738,   950,  1708,  1075,
     429,  1123,  1596,  1739,   416,  2484,  1245,   913,  1655,   534,
    2839,  1198,   714,  2241,   922,  2127,   525,  1209,   537,  1537,
    1538,   874,   429,  2086,   679,   501,  2209,  2016,  1700,  1034,
   -1912,   429,  2092,  2345,   518,  1089,  1117,  1199,   707,  1781,
   -1854,   616,  1475,   621,  2513,  1607,  2440,  1067,   649,   932,
    1479,  -693,   545,    -5, -1665,  1246,   765, -1663, -1959,  2206,
     194,  1742,   671,   409, -1890,  1071,   705,  2017,  2477,  1862,
     975, -1850,  2429, -1850,  2234, -1925,   786,  1906,   712,  2458,
    2546,   379,  1213,    21,   716,   717,  1263,   718,  1903,   657,
    1213,   695,   723,   724,  2404,  1062,  1508,   739,  1813,  1076,
     796,   796,   796,  1670,   749,  -695,   833,   744,  1603,  -695,
    2681,   771,  1624,   912,   752,   978,  2468,    78,    82,   446,
   -1912,   857,  1184,   799,   519,   611,  1566,  1066,   523,  1255,
   -1957,   509,  1718,  1822,   506,  1077,   821,  2182,  2079,  1174,
    2205,   786,  -538,  2487,  2488,   630,  1277,   793,   504,   504,
     504,  2242,   623,  2162,  1321,   903,   906,  1429,     3, -1686,
    1430,  1735,   496, -1959,  1175,  1484,  1719,   906,  -695,  2359,
    -538,  -538,   675,  2663,  1929,  1278,   979,   409,  1247,   980,
    2414,   505,  -695,  -695,   534,  1022,  1063,   923,  1185,   911,
    2409,   996,  -693,   454,  2852,  1124,  -693,   630,   501,   501,
     501,  2509,  1057,   586,   753,  1408,  1604,    79,    83,   613,
     696,  2183,  1745,  2792,   611,  1509, -1959,   817,   506,  1126,
    1122,  1484,  2119,   534,  2120,  2210,  2211,   568,   835,    22,
    2664, -1959,   906,  1244,   534,  1610,   961,   458,  2665,  1155,
    1814,  1078,  2555,  1248,   967,  1068,   984,   463,   654,   380,
     750,  1484,   429,   786,  2121,  -693,  2223,  1833,  1484,  2093,
     526,   985, -1850,   992,  1539,  1484,  2829,  -366,   849,  -693,
    -693,     4,     5,  2259,  -366,  1782,  2441,  1625,  1862,  1178,
    1484,  2258,  1091,  1039,   962,  2528,   195,  -538,   914,  1077,
     731,   -35,  1182,   439,   534,  2207,  2128,  1792,  2409,   534,
    1577,  1218,  2425,  2372,  1218,   858,   679,   695,   680,  1580,
    1063,  1923,  2436,  1515,  -695,   681,  -538,   772, -1854,  1256,
    1325,  1280,  2094,   759,  2666,   889,  1121,   454,   604,   968,
    2088,  2442,   467,  2692,   383,  1484,   797, -1856,  2346,  1192,
   -1854,  2095,   384, -1850, -1946,  2514,  1887, -1890,  1597, -1854,
     439,  1409,   383,   794,   505,   505,   505,   707,  -700,  1296,
     384,  1198,  1763,   915,  1223,  2800,   439,   796,  1098,  2018,
     933,   458,  2054,  -366,   796,   796,   796,  1257,  1471,   613,
    1151,   463,  1037,   796,   796,   796,  1142,  1199,  1142,   529,
    1041,  2055,  1570,   439,  1046,  1078,   796,  1028,  1142,   796,
    2656,  -693,  2301,  1834,   469,  1231,  2221,  -538,   796,   796,
     796,   796,   796,   787, -1735,   504,   826,  1070,   759,  1484,
    1767,  1729,   504,   504,   504,  1082,   696,  1478,   821,   660,
    1269,   504,   504,   504,  1143,  1182,  1143,   796,  -700,  1121,
    1153,  1540,  1072,    88,   504,   786,  1143,   504, -1925,  1725,
     472,  2529,   864,  1208,  1210, -1885,   504,   504,   504,   504,
     504,  1203,  2291,   529, -1854,   501,   467,  1740,   613,   726,
     557,   454,   501,   501,   501,  1542,  1736,   439,  1566,  1249,
     439,   501,   501,   501,   661,   504, -1854,   403,  2618,   377,
     963,   403,   903,  1035,   501, -1854,  2278,   501,  2657,   526,
    2096,  1485,   477,  2430,  1197,  1823,   501,   501,   501,   501,
     501,  1176,  1283,   568,  1153,   458,   660,  2674,  1611,  1507,
     377,   961,  1257,  1264,   604,   463,  1015,  1183,  1214,   796,
    1262,  1229,   529,  2065,   439,   501,  1214,   800,   469,  1215,
    1266,  1343,   801,   604,  -538,  1275,  1439,  1215,  1440,  2173,
     385,  2418,   435,  2084,  1282,  1486,   906,  1485,  1344,  2224,
     526,   731,  1276,   506,  1288,  1291,  2225,  1300,   385,   962,
   -1854,   661,  1585,   604,   709,  1324,  1513,   504,  1315,  2086,
     534,  1492,  1490,  1153,   472,  1612,  1802,  1485,  -698,  1897,
     680,  1322,  1314,   526,  1485,   438,  1318,   681,  1345,  1885,
     529,  1485,  1120,  2466,  1922,  2505,   660,  2107,   961,  2109,
     467, -1731,  1514,  1637,   334,  1372,  1485,  2391,  1137,  1137,
    1137,   505,  2010,   534,  2637,   526,   386,   501,   505,   505,
     505,  1156,   423, -1959, -1959,   731,   477,   505,   505,   505,
    1144, -1733,  1144,  2007,   386,   513,    14,  2132,  1498,  1218,
     505,  1153,  1144,   505,  2079, -1727,   962,   874,  1312,  1302,
    1419,   661,   505,   505,   505,   505,   505,  1303,  -698,  1397,
   -1724,  1485,  1179,  1780,  2066,  2067,  2068,  2069,  2070,   970,
    1530,  1531,   469,   387,  2078,  2152,  2153,   908,   388,   518,
   -1870,   505, -1946,  1641,  1642,  1643,  1644,  1645,  1646,  1647,
    1648,   387,   842,  2605,  1098,  1365,   388,   356,  2503,  1600,
     454,  2354,  2087,  2607,   383,   961, -1854,  2493,  2608,  1825,
     827,  1827,   384,  -690,  2609,  1518,  1573,  2500,   472,   796,
    1994,   409,  2099,  1408,  2180,  1493,   526,  1441,  1346,  2182,
   -1959,  2103,  2506,   628,  2106,    28,  2727,  1658,  2504,  1347,
    2615, -1959,  1373,  1492,   458,  1485,  1522,   436,  2008,   529,
     706,  1898,  1420,   962,   463,  1417,  2638,  1865, -1621,  2101,
    1428,   454,  1404,  1405,   439,   963, -1959,   504,   943,   526,
     477,  2226,  2673,   505,  1316,  1632,  2610,   446,  2201,  2292,
    1650,  2627,   335,  2181,  1524,  1651,  2282,   389, -1959,  1601,
     439,  2293,   357,   514,   454,   515,   534,  1379,  1284, -1729,
     534,  1203,  1801,  2185,  2024,   458,   604,   604,  1442,   800,
     439,  2814,   439,   534,   801,   463,  1424,   501,  2695,   944,
    1904,    15,   629,   423,    17,   843,   454,  1304,  1803,  1804,
    1805,   439,   358,  2716,  2507,  1418,  2025,  2671,   458,   467,
     568,   906,  2405, -1959,  1875,  1348,  1349,  2283,   463,  1529,
     961,  1594,   963,   630,  -690,   534,  2197,  1606,  -690,  1305,
    1350,  2227,  1351, -1959,   359,  2732,  2733,   731,  1617,  1409,
     458,   439, -1621,  2770,  2193,  2749,  2088,  2771,  2772,  2696,
     463,  1306,   630,  1623,   439,  2750,  2228,  1640,  2229, -1959,
    2752,   961,  1849,  1508,  1995,  1806,  2753,  1380,   962,   962,
     467,  2102,  2118,   439,  1317,  1668,  2795,   534,   534,   534,
    1659,   469,   604,   439, -1959,  2561,  2534,  -690,  1669,  1665,
     385,  1749,  2768,  1752,  2202,  1679,  1679,  1374,   805,  1665,
    1288,  -690,  -690,   467,  1920,  2795,  1307,   454,   439,   962,
     838,  2385,  1830,  1295,   206,  2560, -1959,  2778,  2363,  1352,
    1616,   889,  1921,  1784,  1489,    25,    49,   472,  2754,   963,
     439,  2360,   360,  1791,  2284,   467,   439,   534,   680,  2340,
    2340, -1959,   469,   505,  1776,   746,   439,  2797,   800,  2138,
     454,   458,  2261,   801,   731,   454,  1381,  1908,  1743,  1375,
     731,   463,   207,   604,  1785,  1786,   386,  1353,  1308,  2139,
    1042,  2545,  2798,   439,   971,   469,  1695,  2343,  2361,   477,
    2182,  1699,  1509,  1702,  2659,  2697,  1707,  1709,   472,  1712,
    2698,  2827,  1807,  1808,   458,  2140,  1030,  1809,  2545,   458,
    1382,   208,  2182,   209,   463,   210,    26,   469,  2410,   463,
    1383,   972,  2562,   211,   747,   818,  2381,  2382, -1959,   746,
    2141,   472,  2079,   387,  1384,  2643,  1837,  1717,   388,    40,
    1839,   800,  1624,  -690,   439,  2685,   801,  1508,   876,   877,
     477,   383,    50, -1959, -1735,  1799,   467,  2649,  2340,   384,
    2341,  2341,  2787,   472,  2187,   796,   796,   596,  1429,  1031,
    1032,  1430,   796,    31,   796,  1733,  2660,   439,  2661,  1309,
     212,  1142,  2182,   477,   963,   963,  2189,   535,   878,   879,
    1878,  1879,   708,   997,   796,  2426,  1757,  1798,   747,   467,
    2437,  1758,  2571,    38,   467,  1385,   439,  2788,   604,   439,
      27,  1815,  1424,   504,   504,   477,  1764,  1799, -1959,   692,
     504,   604,   504,  2516,   597,   963,  2410,   731,   469,  1143,
    2572,  2573,   598,  2236,  2525,  1826,    39,  1828,  1816,   377,
    1817,   534,   504,   693, -1621,  1836,  1184,   709,   819,  1614,
    1838,  2706, -1621, -1621,   998,  2100,  2191, -1621,  2245,  1798,
     961, -1872,  2707,   501,   501,   906,  1509,   953,  1594,  2341,
     501,   469,   501,  2834,   472,   213,   469,  1386,   604,  2720,
    1387,  1388, -1885,   529,  2237,  2708,   534,  1874,   534,  2721,
    1617,  2830,   501,  1812,  1233,  1913,  2734,  1234,  1275,  1821,
    1235,  1236,  1431,  1877,  1432,  2619,  1824,  1625,   962,  1799,
    1884,   409,  1185,  2622,  1851,  2709,   962,   472,   599,  1010,
     439,   214,   472,  1765,  2805,  2725,   477,    43,  1895,  1895,
    1888,   552,   534,  2077,   534,  1381,  2835,  2061,   796,  1630,
      45,  1234,   553,  1852,  1235,  1236,   529,  1298,  1861,  1999,
    2837,  1798,  2471,   409,  2142,   961,  2013,  2114,  1299,  2836,
    2668,  2806,  2565,   439,  1631,   560,  2062,   385,   439,   477,
     206,  1184,  1616,  2838,   477,  1389,   409,   731,  2720,  1382,
     604,   377,  2445,  2446,  2447,   936,   504,  1871,  2721,  1383,
     454,  2729,  2104,  2105,  2075,  2075,  2566,   534,  2081,  2320,
    1768,  1770,    60,   962,   937,  2769,   890,  1768,   891,  1768,
    2076,  2076,  1872,   215, -1665,   589,  2130,  2567,   207,   505,
     505,  2539,  2470,  2628,  2629,  2540,   505,   589,   505,  1794,
     732,   759,   733,  1914,   458,  1144,   501,  1185,  2321,  2322,
    2323,  2324,  2325,   386,   463,   745,  1992,    46,   505,   745,
    2143,  2144,  2002,   802,  2075,  2075,  2824,   208,   216,   209,
    2015,   210,   803,  2145,  2146,    56,  2828,  2574,  2235,   211,
    2076,  2076,  1811,  1159,  1385,  1942,  1943,  1047,   422,  2164,
    2165,  1488,    54,   800,   773,   774,  1799,    55,   801,  2020,
     800,  2199,   561,   562,   779,   801,  2392,   402,  2802,  2804,
     387,    62,   -21,  2083,    63,   388,  2448,  2775,  2776,  2071,
    2072,   563,    66,   800,   963,  2085,     4,     5,   801,  2833,
    2449,  1048,   963,   512,    68,   800,   212,   533,  1798,   467,
     801,  1049,  2272,   217,   533,   570,    72,  2617,  2843,   809,
    2496,    69,   533,  -357,    70,   590,  1386,  2498,  2499,    73,
     612,   534,   619,   534,   619,   627,   646,   590,    74,  1040,
    -357,  1544,    49,  2178,  1545,  2856,   564,  1237,  1238,   206,
      50,  1546,  1547,  1893,   619, -1870, -1640, -1640, -1640, -1640,
    2845,  2326,  2327,  2328,  2329,  2330,  2331,  2332,  1955,  1956,
     193,   534,   505,  1239,  1240,  2393,   200,  1001,  2807,  1002,
    -357,   469,  2808,  2809,  2575,  2450,  2451,  2452,  2198,   963,
     201,  1237,  1238,   720,  1516,   720,  1050,   207,   720,  1548,
    2453,   213,   732,   800,   733,   205,  2678,  2725,   801,   235,
     534,  2679,   238,  2213,  2060,  2394,  2063,  1239,  1240,  1128,
    1131,  1134,   239,  1703,  1389,  1704,  2810,   472,   -21,  2319,
     242,  2151,  2265,  2266,  2267,  1431,   208,  1432,   209,  1176,
     210,  2811,  2812,  2726,  1158,   345,  1494,   214,   211,  1496,
    -357,  1164,  1165,  1166,  2395,  1499,    36,    37,  2247,  1503,
    2720,   851,   852,   853,   854,  1505,  1162,  1163,  1051,  1549,
    2721,  2718,  2170,   364,  2171,  2719,  1773,   372,  1775,   477,
     389,  1777,  1778,  1779,  -357,  1139,  1140,  1783,  2260,  2262,
     512,  2263,  2248,  2660,  2454,  2661,   406,   407,  1795,  1796,
    1550,   409,  2689,  2204,  2690,   212, -1639, -1639, -1639, -1639,
    1101,   533,  1102,  -357,  1052,  2333,  2342,  2342,   414,   795,
    -357,   798,  1551,  1204,  1205,  1206,  1207,   416,   419,   523,
    2334,  -357,  2186,  2188,  2190,  2192,   424,   427,   426,   215,
     437,   377,   550,   439,   571,  2232,   579,   676,  2233,   677,
     533,  2349,   689,   702,   691,  2240,  2273,   703,   704,   711,
     721,   533,   726,  2274,   740,  2275,  1053,   742,   755,  2279,
    2280,   758,   759,   762,   766,   782,  1552,   767,   787,   768,
    2287,   775,  2253,   776,   216,   804,   777,   778,   780,   788,
     790,   791,  2178,   808,   810, -1850,  2801,  2256,  1616,   824,
     213,   830,   836,   838,   741,   840,   861,   627,   859,  2297,
     855,  1553,   904,   908,   534,   924,   534,  2300,   925,  1245,
    2302,   533,   921,   927,   929,  2342,   533, -1642,   938,   939,
     940,  1554,   941,   951,   946,   948,   955,  -357,  -357,   957,
     964,   630,  2344,   974,   976,   990,   214,   986,  1000,  2351,
     993,  1006,  -357,  1004,  -357,  1008,  1011,  1012,  1013,   217,
    1015,  1020,  1027,  1038,  1025,  2288,   731,  1044,  1246,  1045,
    1042,  1058,  1059,  1074,  1060,  1084,  1083,  1086,  1127,  1121,
    1154,  1135,  1136,  2428,  1146,  1160,  1167,  1169,   506,  1180,
     843,   842,  1219,  1555, -1127,  1230,  1222,  1243,   439,   914,
     720,  1261,  2461,  2462,   604,  1270,  2463,  1556,  1289,  1285,
    1293, -1127,  1301,   429,  1320,  1294,  1327,  1334,  1333,  1338,
    1342,  1332,  2383,  2417,  1339,  1367,  1340,  1369,  1557,  1378,
    2380,  1371,  1398,  1414,  1395,  1399,  1416,  1088,   215,  2421,
    1403,  -357,  1421,  1477,  1422,  1476,  2388,  2693,  1480,  1483,
    1481,  1482,  1495,  1497,  1500,  1501,  1502,  1504,  1506,  2406,
    1517,  1526,  1519,  2358,  1523,  1527,  1185,  1152,  1184,  1560,
    2365,  2366,  2367,  2368,  1562,  1567,  1568,  1256,  2371,  2461,
    1574,  1575,  1578,   216,  1582,  1581,  1595,  1608,  1618,  -357,
    2475,  1247,  1620,  1621,  1558,  1638,   403,  2256,  1661,  1633,
    1672,  1099,  1100,  1634,  2465,  1671, -1127, -1127, -1127,  1673,
    2384,  2435,  1674,  1683,  1689, -1127,  1687,  1700,  1688,  1710,
    1691,  1713,  1176,  1715,  1721,  1616,  1731, -1127,  1738,  1746,
    1753,  1760,  1765,  1508, -1664,  1850,  1840,  1859,  1761,  2349,
    1509,  1152,  1846,  1858,  1101, -1659,  1102,  2483,  1103,  1862,
    1867,  1864,  1870,  1625,  1624,  1883,  1248,  1902,   217,  1907,
    2551,  1909,  1925,  1929,  1926,  1930,  1998,  2491,  2349,  2428,
    1911, -1127,  2058, -1127, -1127, -1127,  2014,  2000,  2004, -1127,
    2059, -1127,  1104,  1105,  1106, -1614,  2064, -1662,  2444,  2116,
     512,  1851,  2108,  2110,  2122,  2428,  1852,  2133,  2134,  2135,
    1897,  2464,  2154,  2136,  1898,  2158,  2160,   533,  1913,  2175,
    1152,  1914,  2195,  2193,  2200,  2469,  2214,  2216,  2219,  2208,
   -1127,   512,   383,  2239,  1089,  2251,  2087,  2249,  1616, -1959,
    2276,  2277, -1959,  1107,  2250,  1108,  2281,  2294,  2549, -1959,
   -1959,  2295,  1109,  2296,  2299,  1110,  2309,  2314,  2308,  2311,
     533,  2307,  2373,  2316,  2654,  2352,  2376,  2686,  2378,  2379,
   -1850,  2386, -1850,  2407,  2783,  2419, -1127,  2424,  2538,  2427,
    2467,  2422,  2459,  2387,  2480,  2473,  2474,  2485,  1152,  2489,
    2479,  2497,  2482,  2481,  2511,  2510,  2392, -1959,  2349,  2523,
    2518,  2520,  2552,  2556,  2558,  2621, -1127,  2535,  2521,  2563,
     447,  2570,  2623,  2632,  1283,  2633,  2645,  2734,  2648,  2773,
    2522,  2079,  2779,  2821,  2620,  2822,  2846,   449,  2849,  2850,
    2428,  2855,  2650,  2644,    16,    85,    81, -1735,    86,  1413,
    2781,    77,  2533,    76,  1111,   710,  1112,   401, -1127,   421,
    1407,  1741,  2669,  1727,  1061,  1394,  1282,  2374,  2537,  2364,
   -1127, -1127,  2492,   630,  2375,  2490,  1019, -1959,  1036,  2646,
    2370,  2357,  2647,  2606,  1978,  2313,  2844,  2554,  2550,  2616,
    2684,  2306,   590,  2842,  2848,  2826,  2579,  2614,  2478,  2639,
    2640,  2703,  2704,   523, -1127,   434,  1831,   192, -1959,  1759,
    1438,  1521,  1249,  2677, -1127,  2271,   807,  1829,  1525,  2702,
    2625,  2626,  2269,   816,  1173,   847,  1543,  1212,  1571,  1220,
   -1959,  2636,   450,   451,   452, -1127,  2641,  1835,   905,  1856,
   -1127,   453,  1940,  2115,  1242,  1583,  2126,  1254, -1127,  2125,
   -1127,  1866,  1265,   533,  2694,  1873, -1127,   533,  1622,  1682,
     523,  1292,  1886,  1439,  1101,  1440,  1102,  2653,   928,  1896,
     533, -1850,   931,   512,  1649,   966,   647,  2670,  1680,  2157,
    1681,  2569,  1330,  1751, -1959,  1748,  1790,  1196,  1788,  2780,
    2163,  1091,  2680,  1194,  2682,  2150,  2148,   812,  2683,   459,
     460,   461,  2389,   965,  2169,   462,  2167,  1535,  1533,  1889,
    1171,  1919,   533,  1226,  1890,   954,   989,  1891,  1892, -1959,
    1377,  2218,  2112,  1797,  1639,   815,  2786,  2642,  1730,  1064,
    2318,  1616,  1732,   781,  2369,  2532,  2823,  2124,  2472, -1959,
    2825,  2796,  1402,  1869,  1845,  1663,   465,  2687,  1706,  2531,
    2053,  2815, -1850,     0,  1113,     0,  2723,  2724,     0,     0,
     796,   796,     0,     0,   533,   533,   533,     0,     0,     0,
       0,  2731,     0,     0,  2021,     0,  2735,  2736,     0,     0,
       0,   796,     0,     0,     0,     0,     0,   813,     0,  2022,
       0,     0,  2782,  2841,  2841,  2784,  2785,     0,  2857,  2023,
     796, -1959,     0,     0,     0,  1114,     0,     0,   504,   504,
       0,  2737,     0,     0,     0, -1959,     0,  1115,     0,     0,
    1284,     0,   468,  2854,   533,     0,     0,   796,  2799,   504,
       0,     0,     0,     0,     0,  1596, -1959,  1958,     0,     0,
      90,  1696,    91,     0,    92,     0,     0,     0,   504,    93,
       0,     0,     0,     0,  2738,     0,  2739,    94,   501,   501,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   504,   470,   471,     0,   501,
       0,     0,     0,     0,     0,     0,     0,  2740,     0,     0,
      95,    96,     0,     0,     0,     0,     0,     0,   501,     0,
       0,    97, -1959,     0,     0,     0,     0,     0,     0,  2741,
       0,     0,    98,  1197,     0,    99,     0,     0,     0,     0,
     473,     0,     0,     0,     0,   501,     0,     0,     0,   100,
       0,  1962,     0,   604,     0,     0,     0,  2742,     0,     0,
       0,   474,     0,     0,     0,     0,   475,     0,     0,     0,
       0,     0,   101,     0,   476,     0,   439,     0,     0,     0,
     102,     0,   103,     0,     0,     0,     0,     0,     0,     0,
    -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,
       0,  -738,  -738,  -738,     0,  -738,  -738,  -738,  -738,  -738,
    -738,  -738,  -738,  -738,   104,  2024,     0,     0,     0,  -738,
       0,     0,   720,     0,  -738,   105,     0,  -738,     0,     0,
     106,     0,     0,  1966,   505,   505,     0,     0,   533,     0,
       0,     0,     0,  2743,     0,     0,     0,  2025,     0,     0,
       0,     0,     0,     0,     0,   505,     0,  -241,   107,     0,
    2744,     0,     0,     0,     0,   108,     0,     0,   109,   110,
       0,     0,     0,     0,   505,     0,     0,     0,     0,   111,
       0,     0,  2745,   533,     0,   533,   112,     0,   113,     0,
       0,   114,     0,     0,     0,  -738,     0,     0,     0,     0,
       0,   505,     0,  2746,     0,     0,     0,     0,     0,     0,
       0,     0,  2026,     0,     0,     0,     0,  2027,     0,     0,
       0,     0,     0,  2747,     0,     0,     0,     0,     0,   533,
    1691,   533,  2748,   115,     0,     0,     0,   116,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,  2028,     0,     0,     0,     0,  -738,  -738,  -738,  2029,
    -738,  -738,  -738,  -738,     0,     0,     0,     0,     0,     0,
       0,  2030,     0,     0,     0,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,   533,     0,     0,     0,     0,     0,
       0,  1597,     0,     0,     0,  2031,     0,   590,     0,     0,
       0,     0,     0,     0,  2032,     0,     0,     0,   121,   122,
       0,     0,     0,     0,     0,  -238,     0,     0,     0,   123,
     720,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,   125,     0,     0,     0,     0,     0,   126,
       0,     0,     0,   127,     0,  2033,     0,     0,  2034,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,     0,     0,     0,   590,   590,   590,
     590,   590,  -738,   130,     0,   590,   590,   590,     0,   590,
       0,     0,   131,     0,     0,     0,     0,   132,   133,     0,
       0,   134,     0,   135,     0,     0,     0,     0,    90,     0,
      91,   136,    92,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,  -738,    94,     0,     0,     0,     0,
       0,     0,     0,     0,  -738,   590,     0,     0,     0,     0,
       0,     0,   138,     0,   590,   590,   590,   590,   533,   139,
     533,     0,     0,     0,   140,     0,     0,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,  -738,     0,     0,     0,
      98,     0,   141,    99,   720,     0,     0,     0,   533,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,   533,   102,     0,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2179,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,     0,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,    91,
       0,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,    94,     0,   107,     0,     0,     0,
       0,     0,     0,   108,     0,     0,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
       0,     0,     0,     0,   112,     0,   113,    95,    96,   114,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,   445,     0,     0,   446,     0,     0,     0,     0,    98,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,   117,     0,     0,
       0,     0,     0,     0,     0,   590,     0,   118,     0,   101,
       0,     0,     0,     0,     0,     0,     0,   102,     0,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,     0,     0,   447,
       0,   533,     0,   533,     0,     0,     0,     0,   120,     0,
       0,   104,     0,     0,     0,     0,   449,     0,     0,     0,
       0,     0,   105,     0,  2286,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     124,   125,   108,     0,     0,   109,   110,   126,     0,     0,
    1297,   127,     0,     0,     0,     0,   111,     0,     0,     0,
     128,     0,     0,   112,     0,   113,     0,     0,   114,     0,
     129,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,     0,     0,     0,     0,   447,     0,     0,   720,
     131,   450,   451,   452,     0,   132,   133,     0,     0,   134,
     453,   135,     0,   449,     0,  2356,  2356,     0,     0,   136,
     115,     0,   454,     0,   116,     0,   117,     0,     0,     0,
       0,     0,   137,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,     0,     0,     0,     0,   455,     0,   139,     0,     0,
       0,   456,   140,   457,   119,     0,   458,     0,   459,   460,
     461,     0,     0,     0,   462,     0,   463,   120,     0,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   122,   602,   450,   451,
     452,     0,     0,     0,     0,   465,   123,   453,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
     125,   720,     0,     0,   466,     0,   126,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,   720,   128,
     720,   720,     0,     0,   720,     0,     0,     0,     0,   129,
       0,   467,     0,     0,     0,     0,     0,   512,     0,     0,
     130,     0,     0,   603,     0,   459,   460,   461,     0,   131,
       0,   462,     0,     0,   132,   133,     0,     0,   134,     0,
     135,   468,    90,     0,    91,     0,    92,     0,   136,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,    94,
       0,   999,   720,   720,     0,     0,     0,     0,     0,     0,
       0,     0,   465,     0,     0,     0,     0,   720,     0,   138,
    2495,  2495,     0,   469,     0,     0,   139,     0,  2495,  2495,
    2502,   140,    95,    96,     0,   470,   471,     0,     0,     0,
       0,     0,   512,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,     0,   141,
       0,     0,  1298,     0,     0,     0,     0,     0,     0,   472,
       0,   100,     0,  1299,     0,     0,     0,   720,     0,   473,
       0,     0,     0,     0,     0,     0,     0,     0,   468,   512,
       0,     0,     0,     0,   101,     0,     0,     0,   720,     0,
     474,   720,   102,     0,   103,   475,   720,   720,     0,     0,
       0,     0,     0,   476,     0,   439,   512,     0,     0,     0,
       0,   477,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   720,     0,     0,   104,     0,     0,     0,
       0,  2624,   470,   471,     0,     0,     0,   105,     0,     0,
       0,     0,   106,     0,     0, -1959,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,     0,   473,   108,     0,     0,
     109,   110,   720,     0,     0,     0,     0,     0, -1183,     0,
       0,   111,     0,     0,     0,     0,     0,   474,   112,   590,
     113,     0,   475,   114,   590,     0,     0, -1183,     0,     0,
     476,   604,   439,     0,     0,     0,   720,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   449,     0,   115,     0,     0,   720,   116,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   590,     0,     0,     0,   590,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,     0,     0,     0,     0,     0,   602,   450,   451,
     452,   123,     0,     0,     0,     0,     0,   453,     0,     0,
       0,     0,     0,     0,   124,   125,     0,     0,     0,     0,
       0,   126,     0,     0,     0,   127,     0,     0,   244,     0,
     245,     0,     0,     0,   128,   246,     0,     0,     0,     0,
       0,     0,     0,   247,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   130,     0,     0,     0,     0,
       0,     0,     0,   812,   131,   459,   460,   461,     0,   132,
     133,   462,     0,   134,     0,   135,   248,   249,     0,     0,
       0,     0,     0,   136,     0,     0,     0,   250,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   251,     0,
       0,   252,     0,   445,     0,     0,   446,     0,     0,     0,
       0,     0,   465,     0,   138,   253,     0,     0,     0,     0,
       0,   139,     0,     0,     0,     0,   140,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   254,     0,
       0,     0,     0,     0,     0,     0,   255,     0,   256,     0,
       0,     0,     0,     0,   141,     0,   257,     0,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   267,   268,
       0,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   447,     0,     0,     0,     0,     0,     0,   468,     0,
       0,   279,     0,   448,     0,     0,   280,     0,   449,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   281,     0,     0,     0,     0,     0,
     445,   282,     0,   446,   283,   284,   869,   870,   871,     0,
       0,     0,   470,   471,   872,   285,     0,     0,     0,     0,
       0,     0,   286,     0,   287, -1959,     0,   288,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   873,   473,     0,     0,     0,
       0,     0,     0,   450,   451,   452,     0,     0, -1183,   289,
       0,     0,   453,   290,     0,   291,     0,   474,   447,     0,
       0,     0,   475,     0,   454,   292,     0, -1183,     0,     0,
     476,   604,   439,     0,     0,   449,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   293,     0,     0,     0,   455,     0,     0,
       0,     0,     0,   456,     0,   457,   294,     0,   458,     0,
     459,   460,   461,     0,     0,     0,   462,     0,   463,     0,
       0,     0,     0,   464,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   295,     0,   874,     0,     0,     0,
       0,     0,     0,     0,     0,   296,   875,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   465,     0,   297,
       0,     0,     0,     0,     0,   298,     0,   446,     0,   299,
     450,   451,   452,     0,     0,     0,   466,     0,   300,   453,
       0,     0,     0,     0,     0,   876,   877,     0,   301,     0,
       0,   454,     0,     0,     0,     0,     0,     0,     0,   302,
       0,     0,     0,   467,     0,     0,     0,     0,   303,     0,
       0,  1225,     0,   304,   305,     0,     0,   306,     0,   307,
       0,     0,     0,     0,   455,   878,   879,   308,     0,     0,
     456,     0,   457,   468,     0,   458,     0,   459,   460,   461,
     309,     0,   447,   462,     0,   463,     0,     0,     0,     0,
     464,     0,     0,     0,     0,     0,     0,     0,   310,   449,
       0,     0,     0,   880,     0,   311,     0,     0,     0,   881,
     312,     0,     0,     0,   882,   469,     0,     0,     0,     0,
       0,     0,   883,     0,   465,     0,     0,   470,   471,   884,
       0,     0,     0,     0,   885,   447,     0,     0,   313,     0,
       0,     0,     0,   466,     0,     0,     0,     0,     0,     0,
       0,   445,   449,   886,   446,     0,     0,   869,   870,   871,
       0,   472,     0,     0,     0,   872,     0,     0,     0,     0,
     467,   473,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   474,     0,   450,   451,   452,   475,     0,     0,
     468,     0,     0,   453,     0,   476,   873,   439,     0,     0,
       0,     0,     0,   477,     0,   454,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   469,     0,     0,     0,   449,   450,   451,   452,
       0,     0,     0,     0,   470,   471,   453,     0,     0,   458,
       0,   459,   460,   461,     0,     0,     0,   462,   454,   463,
       0,     0,     0,     0,     0,     0,   887,     0,   888,     0,
     889,     0,     0,   890,     0,   891,   892,   893,   472,     0,
     894,   895,     0,     0,     0,     0,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,     0,   874,   465,     0,
       0,     0,   458,     0,   459,   460,   461,   875,     0,   474,
     462,     0,   463,     0,   475,     0,     0,     0,     0,     0,
       0,     0,   476,     0,   439,     0,     0,     0,     0,     0,
     477,   450,   451,   452,     0,     0,     0,     0,     0,     0,
     453,     0,     0,     0,   467,     0,   876,   877,     0,     0,
       0,   465,   454,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   468,     0,     0,     0,   445,     0,
       0,   446,     0,     0,     0,   455,   878,   879,     0,     0,
       0,   456,     0,   457,     0,     0,   458,   467,   459,   460,
     461,     0,  -973,     0,   462,     0,   463,  -973,     0,     0,
    -973,   464,     0,     0,     0,     0,   469,  -973,  -973,     0,
       0,     0,     0,     0,   880,     0,     0,   468,   470,   471,
     881,     0,     0,     0,     0,   882,     0,     0,  -973,     0,
    -973,     0,     0,   883,     0,   465,     0,     0,     0,     0,
     884,     0,     0,     0,     0,   885,   447,     0,     0,     0,
       0,     0,   472,     0,   466,  -973,     0,  -905,     0,   469,
    -905,     0,   473,   449,   886,     0,     0,     0,     0,     0,
       0,   470,   471,     0,     0,     0,     0,     0,     0,     0,
       0,   467,     0,   474,     0,     0,     0,     0,   475,     0,
       0,     0,     0,     0,     0,     0,   476,     0,   439,     0,
     429,     0,     0,     0,   477,   472,     0,     0,     0,     0,
       0,   468,     0,     0,     0,   473,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -973,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -905,   474,     0,     0,     0,
   -1854,   475,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   439,  -905,   469,     0,     0,  -973,   477,   450,   451,
     452,     0,     0,     0,     0,   470,   471,   453,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -973,   454,
       0,     0,     0,     0,     0,     0,     0,   887,     0,   888,
       0,   889,     0,     0,   890,     0,   891,   892,   893,   472,
       0,   894,   895,     0,     0,     0,     0,     0,     0,   473,
       0,     0,   455,     0,     0,     0,     0,     0,   456,  -973,
     457,     0,     0,   458,     0,   459,   460,   461,     0,     0,
     474,   462,  -973,   463,     0,   475,     0,     0,   464,  -973,
       0,     0,     0,   476,     0,   439,     0,  -905,  -905,  -905,
       0,   477,     0,     0,     0,     0,  -905,     0,     0,     0,
       0,     0,     0,   445,     0,     0,   446,  -973,  -905,     0,
       0,     0,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -973,     0,     0,
       0,   466,     0,     0,     0,     0,     0,     0,     0,     0,
    -973,  -905,     0,     0,     0,     0,     0,  -905,     0,  -905,
       0,     0,  -905,     0,  -905,  -905,  -905,     0,   467,     0,
    -905,     0,  -905,     0,     0,     0,     0,  -905,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   447,     0,     0,     0,     0,     0,     0,   468,  -973,
       0,     0,     0,     0,     0,     0,     0,     0,   449,     0,
       0,  -905,     0,  -973,     0,     0,  -905,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -905,     0,     0,     0,  -973,     0,     0,     0,     0,     0,
     469,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   470,   471,     0,   445,     0,  -905,   446,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1854,     0,
       0, -1959,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   472,  -905,     0,     0,
       0,     0,     0,     0,     0,     0,   473,     0,     0,     0,
    -973,     0,     0,   450,   451,   452,     0,     0,     0,     0,
       0,  -973,   453,     0,   334,     0,     0,   474,     0,     0,
       0,     0,   475,  -905,   454,     0,     0,     0,     0,  -905,
     476,  -973,   439,   447,     0,     0,     0,     0,   477,     0,
       0,  -905,  -905,     0,     0,     0,     0,     0,     0,     0,
     449,     0,     0,     0,     0,     0,     0,   455,     0,     0,
       0,     0,     0,   456,     0,   457,     0,     0,   458,     0,
     459,   460,   461,     0,     0,  -905,   462,     0,   463,     0,
       0,     0,     0,   464,   445,  -905,     0,   446,     0,     0,
       0,     0,  -905,     0,     0,     0,     0,     0,     0,     0,
       0, -1959,     0,     0,     0,     0,  -905,     0,     0,     0,
       0,  -905,     0,     0, -1854,     0,     0,   465,     0,  -905,
       0,  -905,     0,     0,     0,     0,     0,  -905,     0,     0,
       0,     0,     0,     0,     0,     0,   466,     0,     0,     0,
       0,     0,     0,     0,     0,   450,   451,   452,     0,     0,
       0,     0,     0,     0,   453,     0,     0,     0,     0,     0,
       0,     0,   447,   467,     0,     0,   454,   445,     0,     0,
     446,     0,     0,     0,   591,     0,     0,     0,     0,   449,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335,   468,     0,     0,     0,     0,     0,   455,
       0,     0,     0,     0,     0,   456,     0,   457,     0,     0,
     538,     0,   459,   460,   461,     0,     0,     0,   462,     0,
     463,     0,     0,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,     0,   470,   471,     0,
       0,     0,     0,     0,     0,     0,     0,   655,     0,   465,
       0,     0,   449,     0,   539,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   450,   451,   452,     0,   466,     0,
       0,   472,     0,   453,     0,     0,     0,     0,     0,     0,
       0,   473,     0,     0,     0,   454,   445,     0,     0,   446,
       0,     0,     0,     0,     0,   467,     0,     0,     0,     0,
       0,     0,   474,     0,     0,     0,     0,   475,     0,     0,
       0,     0,     0,     0,     0,   476,   604,   439,   455,     0,
       0,     0,     0,   477,   456,   468,   457,     0,     0,   458,
       0,   459,   460,   461,     0,     0,     0,   462,     0,   463,
       0,     0,     0,     0,   464,     0,     0,   450,   451,   452,
       0,     0,     0,     0,     0,     0,   453,     0,     0,     0,
       0,     0,     0,     0,   447,     0,     0,   469,   454,   445,
       0,     0,   446,     0,     0,     0,     0,     0,   465,   470,
     471,   449,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   466,     0,     0,
       0,   455,     0,     0,     0,     0,     0,   456,     0,   457,
       0,     0,   458,   472,   459,   460,   461,     0,     0,     0,
     462,     0,   463,   473,   467,     0,     0,   464,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   474,     0,     0,   447,     0,   475,
       0,     0,     0,     0,   468,     0,     0,   476,     0,   439,
       0,   465,     0,     0,   449,   477,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   450,   451,   452,     0,
     466,     0,     0,     0,     0,   453,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   469,   454,   445,     0,
       0,   446,     0,     0,     0,     0,     0,   467,   470,   471,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     455,     0,     0,     0,     0,     0,   456,   468,   457,     0,
       0,   458,   472,   459,   460,   461,     0,     0,     0,   462,
       0,   463,   473,     0,     0,     0,   464,     0,     0,   450,
     451,   452,     0,     0,     0,     0,     0,     0,   453,     0,
       0,     0,     0,   474,     0,     0,   447,     0,   475,   469,
     454,   445,     0,     0,   446,     0,   476,     0,   439,     0,
     465,   470,   471,   449,   477,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   466,
       0,     0,     0,   455,     0,     0,     0,     0,     0,   456,
       0,   457,     0,     0,   458,   472,   459,   460,   461,     0,
       0,     0,   462,     0,   463,   473,   467,     0,     0,   464,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   474,     0,     0,   447,
       0,   475,     0,     0,     0,     0,   468,     0,     0,   476,
       0,   439,     0,   465,     0,     0,   449,   477,   539,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   450,   451,
     452,     0,   466,     0,     0,     0,     0,   453,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   469,   454,
     445,     0,     0,   446,     0,     0,     0,     0,     0,   467,
     470,   471,     0,     0,     0,   988,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     784,     0,   455,     0,     0,     0,     0,     0,   456,   468,
     457,     0,     0,   458,   472,   459,   460,   461,     0,     0,
       0,   462,     0,   463,   473,     0,     0,     0,   464,     0,
       0,   450,   451,   452,     0,   995,     0,     0,     0,     0,
     453,     0,     0,     0,     0,   474,     0,     0,   447,     0,
     475,   469,   454,   445,     0,     0,   446,     0,   476,     0,
     439,     0,   465,   470,   471,   449,   477,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   466,     0,     0,     0,   455,     0,     0,     0,     0,
       0,   456,     0,   457,     0,     0,   458,   472,   459,   460,
     461,     0,     0,     0,   462,     0,   463,   473,   467,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   474,     0,
       0,   447,     0,   475,     0,     0,     0,     0,   468,     0,
       0,   476,     0,   439,     0,   465,     0,     0,   449,   477,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     450,   451,   452,     0,   466,     0,     0,     0,     0,   453,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     469,   454,  1149,     0,     0,   446,     0,     0,     0,     0,
       0,   467,   470,   471,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   455,     0,     0,     0,     0,     0,
     456,   468,   457,     0,     0,   458,   472,   459,   460,   461,
       0,     0,     0,   462,     0,   463,   473,     0,     0,     0,
     464,     0,     0,   450,   451,   452,     0,     0,     0,     0,
       0,     0,   453,     0,     0,     0,     0,   474,     0,     0,
     447,     0,   475,   469,   454,     0,     0,     0,     0,     0,
     476,     0,   439,     0,   465,   470,   471,   449,   477,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   466,     0,     0,     0,   455,     0,     0,
       0,     0,     0,   456,     0,   457,     0,     0,   458,   472,
     459,   460,   461,     0,     0,     0,   462,     0,   463,   473,
     467,     0,     0,   464,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     474,     0,     0,     0,     0,   475,     0,     0,     0,     0,
     468,     0,     0,   476,     0,   439,     0,   465,     0,     0,
       0,   477,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   450,   451,   452,     0,   466,     0,     0,     0,
       0,   453,     0,     0,     0,     0,  1666,     0,     0,     0,
       0,     0,   469,   454,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   467,   470,   471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   455,     0,     0,     0,
       0,     0,   456,   468,   457,     0,     0,   458,   472,   459,
     460,   461,     0,  1586,     0,   462,     0,   463,   473,     0,
       0,     0,   464,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   474,
       0,     0,     0,     0,   475,   469,     0,     0,     0,     0,
       0,     0,   476,     0,   439,     0,   465,   470,   471,     0,
     477,     0,  1587,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   466,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,     0,
       0,   472,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   473,   467,     0,     0,   449,     0,     0,     0,     0,
       0,     0,     0,     0,  2476,     0,     0,     0,     0,     0,
       0,     0,   474,     0,     0,     0,     0,   475,     0,     0,
       0,     0,   468,     0,     0,   476,     0,   439,     0,     0,
       0,     0,     0,   477,     0,  -377,     0,     0,  -377,     0,
       0,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   469,     0,     0,     0,     0,  -377,
       0,  -377,     0,     0,     0,     0,   470,   471,  -377,     0,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,     0,     0,     0,
     450,   451,   452,     0,     0,     0,     0,     0,     0,   453,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     472,   454,     0,     0,     0,     0,     0,     0,     0,     0,
     473,     0,     0,     0,  -377,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1588,   474,     0,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,   476,   458,   439,   459,   460,   461,
       0,     0,   477,   462,     0,   463,  -377,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1022,     0,     0,     0,  -377,  -377,  -377,  -377,
    -377,     0,     0,  -377,  -377,     0,     0,  -377,     0,     0,
       0,     0,     0,  -377,   465,  -377,     0,     0,     0,     0,
       0,  -377,     0,     0,     0,     0,  -377,     0,     0,  -377,
       0,     0,     0,     0,     0,     0,     0,  -377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -377,     0,     0,  -377,     0,     0,     0,     0,     0,  -377,
     467,  -377,     0,     0,     0,     0,     0,     0,     0,     0,
    -377,     0,     0,     0,     0,     0,     0,  1021,     0,     0,
       0,     0,     0,  -377,     0,     0,     0,     0,     0,     0,
     468,     0,     0,     0,     0,  -377,     0,  -377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -377,     0,     0,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,     0,     0,     0,  -377,     0,     0,     0,     0,
       0,     0,   469,     0,     0,     0,     0,     0,  -377,  -377,
       0,     0,     0,     0,   470,   471,     0,  -377,     0,     0,
    -377,  -377,     0,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
       0,     0,     0,     0,     0,  -377,     0,  -377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   472,     0,
       0,     0,     0,     0,  1446,     0,  1589,  1447,   473,     0,
    1448,     0,     0,  -377,     0,     0,     0,  -377,  1449,     0,
    -377,     0,     0,     0,     0,     0,     0,     0,     0,   474,
       0,     0,     0,     0,   475,     0,     0,     0,  -377,     0,
       0,     0,   476,     0,   439,     0,     0,     0,     0,  -377,
     477,  -377,  -377,  -377,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1450,     0,     0,     0,     0,
    -377,     0,     0,     0,     0,  1022,     0,     0,     0,  -377,
    -377,  -377,  -377,  -377,  1451,     0,  -377,  -377,     0,     0,
       0,     0,     0,  -377,     0,     0,     0,     0,  -377,     0,
       0,     0,     0,  -377,  -377,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -377,     0,     0,     0,     0,
    -377,  -377,     0,     0,     0,  -377,  -377,  -377,     0,     0,
       0,     0,     0,  -377,     0,     0,  -377,  1932,     0,  -377,
       0,     0,  -377,     0,  -377,     0,  -377,     0,     0,     0,
       0,     0,  1933,  1015,     0,  1934,  1935,  1936,  1937,  1938,
    1939,  1940,     0,     0,     0,     0,  1452,     0,     0,     0,
       0,     0,     0,     0,  1453,     0,     0,     0,  -377,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1454,     0,
       0,  1941,     0,  1942,  1943,  1944,  1945,  1946,  1947,  1948,
       0,     0,     0,     0,     0,     0,     0,     0,  -377,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1455,     0,  -377,     0,     0,     0,     0,     0,     0,     0,
    -377,     0,     0,  -377,     0,     0,     0,  1949,     0,     0,
    1456,     0,  1457,     0,     0,     0,     0,     0,  -377,     0,
       0,     0,     0,     0,     0,  1089,     0, -1959,     0,     0,
   -1959,  -377,     0, -1959,  1458,  1459,     0,     0,     0,     0,
       0, -1959,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1850,     0, -1850,     0,     0,     0,  1460,     0,  1950,
    1951,  1952,  1953,  1954,     0,     0,  1955,  1956,     0,     0,
       0,     0,  -377,     0,  -377,  -377,  -377,     0, -1959,     0,
       0,     0,     0,     0,     0,     0,  1461,  1462,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -1959,     0,     0,
    1957,     0,  -377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1463,   409,     0,     0,  1958,     0,     0,  1464,
       0,  -377, -1935,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1465,     0,     0,     0,  1466,  -377,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -377,  -377,
    -377,     0,     0,     0,  1467,     0,     0,     0,  1959,     0,
       0,     0,  -377,     0,     0,     0,     0,     0,     0,  -377,
       0,     0,     0,     0,     0,     0,  1015,     0,     0, -1959,
       0,  1468,     0,     0,     0,     0,  1090, -1959,  1960,     0,
    1469,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1959,  1961,     0,     0,     0,     0,     0,     0,     0,
    1962,     0,     0,  1963,     0,     0,     0,     0,     0,     0,
    1470,     0,     0,     0,     0,     0,     0,     0,  1964,     0,
    1471,     0,     0, -1959,     0,     0,  1472,     0,     0,     0,
       0,  1965, -1850,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1959,     0, -1959,     0,     0,     0,     0,
       0,     0,  1091,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -1959, -1959,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1966,     0,  1967,  1968,  1969,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -1959,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1970, -1850,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1959,
   -1959,  -374,   447,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1935,   449,
       0,     0,     0,     0,     0, -1959,     0,     0,  1971,  1972,
    1973,     0, -1959,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1974,     0,     0,     0, -1959,     0,     0,  1691,
   -1959,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2581,     0,     0,  2582,     0, -1959,  2583,  1934,
    1935,  1936,  1937,  1938,  1939,  2584,  2585,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1959,     0,  1439,     0,  1440,     0,
       0,     0,     0, -1959,     0,  1941,     0,  1942,  1943,  1944,
    1945,  1946,  1947,  1948,   450,   451,   452,  1934,  1935,  1936,
    1937,  1938,  1939,   453,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1959,     0,   454,     0,     0,     0,     0,
       0,     0,     0, -1959,     0,     0,     0,     0,     0, -1959,
       0,  1949,     0,  1941,     0,  1942,  1943,  1944,  1945,  1946,
    1947,  1948,     0,     0,   604,     0,     0,     0,   491,     0,
       0,     0,     0,     0,   456,     0,   457,     0,     0,   458,
       0,   459,   460,   461,     0,     0,     0,   462,     0,   463,
       0,     0,     0,  2586,     0,     0,     0,     0,     0,  1949,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1950,  1951,  1952,  1953,  1954,     0,     0,
    1955,  1956,     0,     0,  2587,     0,     0,     0,   465,     0,
    2588,     0,  2589,     0,     0,     0,     0,     0, -1885,     0,
       0,     0,     0,  2590,     0,     0,  2591,   466,     0,     0,
       0,     0,     0,     0,  1957,     0,     0,     0,     0,     0,
     447,  1950,  1951,  1952,  1953,  1954,     0,   409,  1955,  1956,
    1958,     0,     0,     0,   467,     0,     0,   449,  2592,     0,
       0,     0,     0,     0,     0,     0,     0,  2593,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2594,     0,  1957,     0,   468,     0,     0,     0,     0,     0,
       0,     0,  1959,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2595,     0,     0,     0,   469,     0,     0,     0,
       0,     0,     0,     0,     0,  2596,  1961,     0,   470,   471,
    1959,     0,     0,     0,  1962,     0,     0,  1963,   447,     0,
       0,     0,   450,   451,   452,     0,     0,     0,     0,     0,
    1133,   453,  1964,     0,  2597,   449,     0,     0,     0,     0,
     492,     0,   472,   454,   493,   494,     0,     0,     0,     0,
       0,     0,   473,     0,  1961,     0,     0,     0,     0,     0,
    2598,     0,     0,     0,     0,  1963,     0,  2599,     0,     0,
       0,     0,     0,   474,     0,     0,   491,     0,   475,     0,
    1964,     0,   456,     0,   457,  2600,   476,   458,   439,   459,
     460,   461,     0,     0,   477,   462,  1966,   463,  1967,  1968,
    1969,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   449,
     450,   451,   452,     0,     0,     0,   465,     0,     0,   453,
    2601,     0,     0,     0,     0,  -635,  1967,  1968,  1969,     0,
    2602,   454,     0,     0,     0,   466,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2603,     0,
       0,     0,  1971,  1972,  1973,     0,     0,     0,     0,     0,
       0,     0,   467,     0,   491,     0,  1974,     0,     0,     0,
     456,  2604,   457,  1691,     0,   458,     0,   459,   460,   461,
       0,     0,     0,   462,     0,   463,     0,     0,     0,     0,
       0,     0,   468,     0,   447,     0,     0,     0,     0,     0,
    1971,  1972,  1973,     0,   450,   451,   452,     0,     0,     0,
       0,   449,     0,   453,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   465,   454,     0,     0,     0,     0,
       0,     0,     0,     0,   469,     0,     0,     0,     0,     0,
       0,     0,     0,   466,     0,     0,   470,   471,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,     0,
       0,     0,     0,     0,   456,     0,   457,     0,  1769,   458,
     467,   459,   460,   461,     0,     0,     0,   462,   492,   463,
     472,     0,   493,   494,     0,     0,     0,     0,   447,     0,
     473,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     468,     0,     0,     0,     0,   449,   450,   451,   452,     0,
       0,   474,     0,     0,     0,   453,   475,     0,   465,     0,
       0,     0,     0,     0,   476,     0,   439,   454,     0,     0,
       0,     0,   477,     0,     0,     0,     0,   466,     0,     0,
       0,     0,   469,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   470,   471,     0,     0,     0,     0,
     491,     0,  1772,     0,   467,     0,   456,     0,   457,     0,
       0,   458,     0,   459,   460,   461,     0,     0,     0,   462,
       0,   463,     0,     0,     0,     0,   492,     0,   472,     0,
     493,   494,     0,     0,   468,     0,   447,     0,   473,     0,
     450,   451,   452,     0,     0,     0,     0,     0,     0,   453,
       0,     0,     0,   449,     0,     0,     0,     0,     0,   474,
     465,   454,     0,     0,   475,     0,     0,     0,     0,     0,
       0,     0,   476,     0,   439,     0,   469,     0,     0,   466,
     477,     0,     0,     0,     0,     0,     0,     0,   470,   471,
       0,     0,     0,     0,   491,     0,  1774,     0,     0,     0,
     456,     0,   457,     0,     0,   458,   467,   459,   460,   461,
       0,     0,     0,   462,     0,   463,     0,     0,     0,     0,
     492,     0,   472,     0,   493,   494,     0,     0,     0,     0,
       0,     0,   473,     0,     0,     0,   468,     0,     0,     0,
       0,     0,     0,     0,     0,   447,     0,     0,   450,   451,
     452,     0,     0,   474,   465,     0,     0,   453,   475,     0,
       0,     0,   449,     0,     0,     0,   476,     0,   439,   454,
       0,     0,     0,   466,   477,     0,     0,     0,   469,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     470,   471,     0,     0,     0,     0,     0,     0,     0,     0,
     467,     0,   491,     0,     0,     0,     0,     0,   456,     0,
     457,     0,  1793,   458,     0,   459,   460,   461,     0,     0,
       0,   462,   492,   463,   472,     0,   493,   494,     0,     0,
     468,     0,     0,     0,   473,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   474,     0,   450,   451,   452,
     475,     0,   465,     0,     0,   447,   453,     0,   476,     0,
     439,     0,   469,     0,     0,     0,   477,     0,   454,     0,
       0,   466,   449,     0,   470,   471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   467,     0,
       0,   491,     0,     0,     0,     0,   492,   456,   472,   457,
     493,   494,   458,     0,   459,   460,   461,     0,   473,     0,
     462,     0,   463,     0,     0,     0,     0,     0,   468,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   474,
       0,     0,     0,     0,   475,     0,     0,     0,     0,     0,
       0,     0,   476,     0,   439,     0,     0,     0,     0,     0,
     477,   465,     0,     0,     0,     0,     0,   450,   451,   452,
     469,     0,     0,     0,     0,     0,   453,     0,     0,     0,
     466,     0,   470,   471,     0,     0,     0,     0,   454,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   467,     0,     0,
       0,     0,     0,     0,     0,     0,   472,     0,   493,     0,
       0,   491,     0,     0,     0,     0,   473,   456,     0,   457,
       0,     0,   458,  2831,   459,   460,   461,   468,     0,     0,
     462,     0,   463,     0,     0,     0,     0,   474,     0,     0,
       0,     0,   475,     0,     0,     0,     0,     0,     0,     0,
     476,     0,   439,     0,     0,     0,     0,     0,   477,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   469,
       0,   465,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   470,   471,     0,     0,     0,     0,     0,     0,     0,
     466,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   472,     0,   467,     0,     0,
       0,     0,     0,     0,     0,   473,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   474,   468,     0,     0,
       0,   475,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   439,     0,     0,     0,     0,     0,   477,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   469,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   470,   471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   472,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   473,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   474,     0,     0,     0,
       0,   475,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   439,     0,     0,     0,     0,     0,   477
};

static const yytype_int16 yycheck[] =
{
     211,   212,   199,   326,   215,   410,   526,   412,   446,   366,
     415,   936,   679,   680,   681,   990,  1227,   341,    42,    81,
     207,   455,  1493,   537,  1442,   353,   213,  1445,  1766,   641,
     331,  1006,  1704,   327,  1370,   317,  1691,   319,   339,   324,
     322,  1693,   336,  1265,   326,  1697,   329,   650,  1286,   343,
     344,   874,   353,   784,   320,   339,   864,   491,   628,   341,
     780,  1287,    17,  1628,  1729,   347,  1331,   533,   362,   353,
     790,  1179,  2028,  2029,     0,     9,     9,  1592,     1,     9,
       1,    22,     1,    31,  2013,   319,   368,  1313,   370,    89,
     324,     9,    17,   130,   126,     9,    58,   331,    56,   116,
     125,  1209,   112,   533,    31,   339,   418,   621,  1348,    74,
      49,   155,    65,     1,    58,  2420,     9,    94,  1312,   353,
     180,   850,   401,  2027,   590,   230,   323,   858,   325,    98,
      99,   162,    49,   168,   130,   319,    50,   178,    88,     1,
      27,    49,     6,    58,   261,    30,   758,   850,   391,   246,
      89,   348,  1100,   350,   132,  1263,   127,   237,   355,   144,
    1108,     0,   326,     0,   207,    58,   448,   207,   249,   246,
     176,    32,   369,   237,   237,    98,   387,   218,  2409,   242,
     646,    66,    48,    68,  2021,    39,   480,  1673,   399,  2365,
       1,   239,    21,   204,   405,   406,   927,   408,  1669,   363,
      21,   279,   413,   414,  2298,    22,   304,   418,   257,   174,
     492,   493,   494,  1321,   367,   141,   646,   428,   223,   145,
    2644,   455,   132,   580,   223,   181,  2384,   261,   261,     9,
     117,    49,   236,    58,   351,   517,  1211,   736,   520,   126,
     467,   507,   174,   125,   261,   364,   525,   417,   261,   267,
     174,   545,    63,  2429,  2430,   276,     8,   491,   492,   493,
     494,   115,   351,  1911,   995,   559,   567,   165,     0,   207,
     168,   205,   319,   109,   292,    72,   208,   578,   204,  2235,
      91,    92,   371,   173,   208,    37,   242,   237,   181,   245,
     517,   319,   218,   219,   528,   179,   237,   591,   302,   578,
    2304,   658,   141,   217,   180,   349,   145,   276,   492,   493,
     494,  2469,   717,   341,   313,   203,   321,   351,   351,   347,
     398,   491,  1423,   336,   606,   423,   192,   524,   261,   763,
     760,    72,  1847,   567,  1849,   249,   250,   638,   535,   350,
     230,   422,   643,   913,   578,     9,   628,   261,   238,   787,
     399,   470,  2528,   246,   638,   435,   650,   271,   652,   407,
     513,    72,    49,   657,  1850,   204,  2014,   367,    72,   233,
       6,   650,   257,   655,   343,    72,  2800,   414,   542,   218,
     219,   218,   219,   132,   421,   482,   357,   297,   242,   823,
      72,  2056,   277,   705,   628,  2489,   402,   208,   375,   364,
     261,   465,   832,   520,   638,   482,   511,  1515,  2412,   643,
    1233,  1219,  2316,  2250,  1222,   233,   130,   279,   414,  1242,
     237,  1686,  2351,  1154,   350,   421,   237,   455,   367,   316,
    1000,   945,   296,   476,   324,   466,   476,   217,   519,   460,
     475,   412,   356,  2674,    57,    72,   493,    60,   363,   843,
     367,   315,    65,   338,   112,   433,  1650,   520,   411,   367,
     520,   349,    57,   491,   492,   493,   494,   710,   385,   968,
      65,  1200,   497,   450,   868,  2780,   520,   759,   757,   520,
     465,   261,  1722,   520,   766,   767,   768,   519,   498,   517,
     784,   271,   703,   775,   776,   777,   778,  1200,   780,   784,
     711,  1723,   323,   520,   715,   470,   788,   694,   790,   791,
     428,   350,  2160,   513,   428,   909,   460,   328,   800,   801,
     802,   803,   804,   461,   520,   759,   162,   738,   476,    72,
    1478,   456,   766,   767,   768,   746,   398,  1107,   817,   465,
     934,   775,   776,   777,   778,   975,   780,   829,   465,   476,
     784,   520,   739,   511,   788,   849,   790,   791,   412,   521,
     474,  2490,   517,   857,   858,   515,   800,   801,   802,   803,
     804,   850,  2137,   858,   513,   759,   356,   465,   606,   520,
     863,   217,   766,   767,   768,  1197,   520,   520,  1563,   482,
     520,   775,   776,   777,   520,   829,   513,   520,  2554,   520,
     628,   520,   896,   465,   788,   513,  2121,   791,   526,     6,
     474,   408,   526,   479,   499,   497,   800,   801,   802,   803,
     804,   193,   946,   924,   858,   261,   465,  2631,   292,  1149,
     520,   913,   519,   927,   519,   271,   520,   834,   467,   921,
     924,   907,   927,  1744,   520,   829,   467,   472,   428,   478,
     929,    47,   477,   519,   465,   937,    66,   478,    68,  1924,
     273,  2309,   315,  1771,   946,   462,   967,   408,    64,   175,
       6,   261,   938,   261,   953,   957,   182,   971,   273,   913,
     367,   520,  1252,   519,   520,   997,  1152,   921,   982,   168,
     924,  1125,   261,   927,   474,   359,    34,   408,   385,   303,
     414,   995,   981,     6,   408,   315,   988,   421,   104,  1634,
     995,   408,   759,  2378,  1684,    33,   465,  1825,  1000,  1827,
     356,   462,  1152,  1293,   207,  1037,   408,  2292,   775,   776,
     777,   759,   261,   967,   257,     6,   349,   921,   766,   767,
     768,   788,   220,   335,   337,   261,   526,   775,   776,   777,
     778,   462,   780,   315,   349,   276,   124,  1865,   462,  1567,
     788,   995,   790,   791,   261,   462,  1000,   162,   979,    38,
    1082,   520,   800,   801,   802,   803,   804,    46,   465,  1058,
     462,   408,   829,  1503,  1754,  1755,  1756,  1757,  1758,   125,
    1184,  1185,   428,   406,  1764,  1903,  1904,   455,   411,   261,
     372,   829,   460,  1302,  1303,  1304,  1305,  1306,  1307,  1308,
    1309,   406,   168,  2548,  1093,  1026,   411,   261,   426,    27,
     217,   261,   301,  2548,    57,  1107,   513,   261,  2548,  1560,
     466,  1562,    65,     0,  2548,   462,  1230,   261,   474,  1121,
      26,   237,  1812,   203,   249,  1127,     6,   257,   244,   417,
     337,  1821,   170,   156,  1824,   104,  2709,   249,   466,   255,
    2548,   267,   262,  1297,   261,   408,  1167,   520,   430,  1154,
     465,   475,  1083,  1107,   271,    32,   399,  1608,    58,   257,
    1091,   217,  1069,  1070,   520,   913,   292,  1121,   290,     6,
     526,   397,  2630,   921,   164,  1289,  2548,     9,   247,  2137,
     295,  2573,   385,   308,  1170,   300,  2128,   520,   179,   117,
     520,  2137,   356,   434,   217,   436,  1150,    28,   946,   462,
    1154,  1200,  1525,   491,   225,   261,   519,   519,   338,   472,
     520,  2784,   520,  1167,   477,   271,   526,  1121,   275,   341,
    1671,   124,   245,   421,   156,   301,   217,   216,   286,   287,
     288,   520,   396,  2691,   272,   112,   257,  2629,   261,   356,
    1261,  1262,  2298,   221,   222,   361,   362,   207,   271,  1180,
    1252,  1253,  1000,   276,   141,  1209,   127,  1261,   145,   248,
     376,   487,   378,   241,   428,  2723,  2724,   261,  1267,   349,
     261,   520,   172,  2731,   517,  2730,   475,  2735,  2736,   336,
     271,   270,   276,  1285,   520,  2730,   512,  1301,   514,   267,
    2730,  1293,  1582,   304,   200,   353,  2730,   128,  1252,  1253,
     356,   399,  1845,   520,   294,  1319,  2764,  1261,  1262,  1263,
     422,   428,   519,   520,   292,   267,  2504,   204,  1320,  1318,
     273,  1435,  2730,  1437,   393,  1327,  1328,   447,   228,  1328,
    1329,   218,   219,   356,   328,  2793,   325,   217,   520,  1293,
     361,  2283,   315,   460,    11,  2533,   267,  2739,   369,   465,
    1267,   466,  1684,  1507,  1121,   465,   311,   474,  2730,  1107,
     520,   127,   526,  1513,   324,   356,   520,  1321,   414,  2210,
    2211,   292,   428,  1121,  1499,   422,   520,  2769,   472,   221,
     217,   261,  2072,   477,   261,   217,   217,  1677,  1420,   509,
     261,   271,    59,   519,  1508,  1509,   349,   513,   387,   241,
     520,  2516,  2777,   520,   460,   428,  1337,  2211,   174,   526,
     417,  1342,   423,  1344,   279,   472,  1347,  1348,   474,  1350,
     477,  2796,   480,   481,   261,   267,   361,   485,  2543,   261,
     261,    98,   417,   100,   271,   102,   465,   428,  2304,   271,
     271,   497,   394,   110,   491,   366,  2274,  2275,   267,   422,
     292,   474,   261,   406,   285,  2593,  1570,  1364,   411,   346,
    1574,   472,   132,   350,   520,  2653,   477,   304,   211,   212,
     526,    57,   427,   292,   520,  1519,   356,  2615,  2319,    65,
    2210,  2211,   291,   474,   491,  1487,  1488,   173,   165,   424,
     425,   168,  1494,    86,  1496,  1402,   361,   520,   363,   488,
     167,  1503,   417,   526,  1252,  1253,   491,   468,   251,   252,
    1624,  1625,   465,   404,  1516,  2319,  1447,  1519,   491,   356,
     200,  1452,    63,   465,   356,   356,   520,   336,   519,   520,
     124,   132,   526,  1487,  1488,   526,  1467,  1581,   516,   295,
    1494,   519,  1496,  2474,   230,  1293,  2412,   261,   428,  1503,
      91,    92,   238,   460,  2485,  1560,   124,  1562,   159,   520,
     161,  1515,  1516,   319,   464,  1568,   236,   520,   489,   388,
    1572,   181,   472,   473,   465,  1815,   491,   477,   292,  1581,
    1582,   261,   192,  1487,  1488,  1606,   423,   623,  1590,  2319,
    1494,   428,  1496,   192,   474,   262,   428,   428,   519,   108,
     431,   432,   208,  1608,   511,   215,  1560,  1621,  1562,   118,
    1609,  2802,  1516,  1544,     9,   160,   215,    12,  1620,  1550,
      15,    16,   299,  1622,   301,  2556,  1557,   297,  1582,  1673,
    1633,   237,   302,  2564,     8,   245,  1590,   474,   324,   675,
     520,   308,   474,     8,    54,    55,   526,   468,  1662,  1663,
    1652,   467,  1606,  1763,  1608,   217,   192,   205,  1660,   267,
     404,    12,   478,    37,    15,    16,  1671,   467,  1599,  1701,
     192,  1673,    37,   237,   516,  1677,  1708,  1831,   478,   215,
    2622,    91,   313,   520,   292,   203,   234,   273,   520,   526,
      11,   236,  1609,   215,   526,   526,   237,   261,   108,   261,
     519,   520,   119,   120,   121,   496,  1660,   267,   118,   271,
     217,  2716,  1822,  1823,  1762,  1763,   347,  1671,  1766,     1,
    1487,  1488,   141,  1677,   515,  2730,   469,  1494,   471,  1496,
    1762,  1763,   292,   400,   459,   342,  1861,   368,    59,  1487,
    1488,   164,  2387,   253,   254,   168,  1494,   354,  1496,  1516,
     314,   476,   316,   298,   261,  1503,  1660,   302,    40,    41,
      42,    43,    44,   349,   271,   430,  1697,   231,  1516,   434,
    1884,  1885,  1703,   464,  1822,  1823,  2789,    98,   445,   100,
    1711,   102,   473,  1897,  1898,   145,  2799,   328,  2022,   110,
    1822,  1823,  1536,   462,   356,    77,    78,   217,   465,  1913,
    1914,   463,   465,   472,   456,   457,  1850,   465,   477,  1716,
     472,  1965,   330,   331,   466,   477,    30,     1,  2782,  2783,
     406,   465,   204,   462,   124,   411,   243,   306,   307,  1760,
    1761,   349,   404,   472,  1582,   462,   218,   219,   477,  2803,
     257,   261,  1590,   320,   465,   472,   167,   324,  1850,   356,
     477,   271,  2092,   520,   331,   332,   465,  2552,  2822,   511,
    2448,   404,   339,    47,   177,   342,   428,  2455,  2456,   465,
     347,  1825,   349,  1827,   351,   352,   353,   354,   429,   465,
      64,    35,   311,  1927,    38,  2849,   404,   282,   283,    11,
     427,    45,    46,  1660,   371,   109,   500,   501,   502,   503,
    2831,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     465,  1865,  1660,   308,   309,   129,   465,   361,   328,   363,
     104,   428,   332,   333,   465,   342,   343,   344,  1960,  1677,
     465,   282,   283,   410,   463,   412,   356,    59,   415,    93,
     357,   262,   314,   472,   316,   465,  2636,    55,   477,    26,
    1904,  2641,   465,  1997,  1736,   169,  1738,   308,   309,   766,
     767,   768,   465,   361,   526,   363,   376,   474,   350,  2209,
     385,  1902,  2086,  2087,  2088,   299,    98,   301,   100,   193,
     102,   391,   392,    91,   791,   409,  1128,   308,   110,  1131,
     174,   802,   803,   804,   208,  1137,    23,    24,  2030,  1141,
     108,   500,   501,   502,   503,  1147,   800,   801,   428,   163,
     118,  2701,   257,   345,   259,  2705,  1495,   522,  1497,   526,
     520,  1500,  1501,  1502,   208,   776,   777,  1506,  2071,   257,
     507,   259,  2031,   361,   451,   363,   435,   416,  1517,  1518,
     194,   237,   257,  1974,   259,   167,   500,   501,   502,   503,
      67,   528,    69,   237,   474,   337,  2210,  2211,   416,   492,
     244,   494,   216,   851,   852,   853,   854,    58,   379,  2071,
     352,   255,  1936,  1937,  1938,  1939,   223,   465,   261,   400,
     465,   520,   261,   520,   460,  2016,   520,   404,  2019,   266,
     567,  2216,   465,   411,   465,  2026,  2098,   422,    65,    60,
      70,   578,   520,  2108,   465,  2110,   526,   520,   133,  2123,
    2124,   200,   476,   313,   476,   134,   270,   476,   461,   476,
    2134,   476,  2053,   476,   445,   172,   476,   476,   476,   476,
     476,   476,  2176,   460,   135,   349,  2781,  2054,  2055,   136,
     262,   395,   137,   361,   465,   138,   140,   624,   511,  2151,
     139,   305,   103,   455,  2108,   460,  2110,  2159,   143,     9,
    2162,   638,   476,    49,   415,  2319,   643,   459,   456,   459,
     453,   325,   146,   148,   200,   147,   149,   361,   362,   515,
     168,   276,  2214,    31,   150,   114,   308,   151,   200,  2221,
     152,   114,   376,   153,   378,   154,   465,   404,   260,   520,
     520,   465,   319,   411,   520,  2136,   261,   465,    58,   109,
     520,   261,   261,   465,   482,   319,   422,   111,   460,   476,
     207,   520,   520,  2348,   520,   228,   385,   348,   261,   277,
     301,   168,   517,   387,    84,   131,   517,   179,   520,   375,
     717,   460,  2367,  2368,   519,   171,  2371,   401,   132,   233,
     460,   101,    49,    49,   200,   460,   233,   376,   404,   373,
      87,   465,  2276,  2307,   465,   468,   465,    23,   422,   277,
    2272,   465,   410,   349,   456,   261,    74,   754,   400,  2311,
     237,   465,   520,   524,   465,   525,  2288,  2674,   242,   281,
     435,   306,   462,   462,   462,   462,   462,   462,   462,  2301,
     462,   389,   460,  2234,   460,   372,   302,   784,   236,   207,
    2241,  2242,  2243,  2244,   207,    17,   456,   316,  2249,  2444,
     131,   142,   375,   445,    49,   460,   126,   207,   144,   513,
    2407,   181,     8,   200,   488,   314,   520,  2254,   435,   517,
     465,    24,    25,   517,  2376,   207,   196,   197,   198,   460,
    2281,  2350,     9,     7,   399,   205,   465,    88,   404,   277,
     513,    22,   193,   313,   451,  2282,   335,   217,   520,    47,
     306,    57,     8,   304,   207,    49,   513,   411,   422,  2504,
     423,   858,   513,   193,    67,   193,    69,  2419,    71,   242,
     323,   321,   317,   297,   132,   267,   246,   337,   520,   320,
    2525,   115,   465,   208,   404,   456,   208,  2439,  2533,  2534,
     450,   261,   261,   263,   264,   265,   515,   520,   520,   269,
     234,   271,   105,   106,   107,   207,   465,   207,  2359,   104,
     907,     8,   371,   371,   470,  2560,    37,   389,    49,   267,
     303,  2372,   507,   242,   475,   223,    97,   924,   160,   465,
     927,   298,   393,   517,   237,  2386,   460,   193,   259,   520,
     310,   938,    57,   412,    30,    39,   301,   435,  2385,    35,
      49,   112,    38,   156,   267,   158,   346,   267,  2522,    45,
      46,   267,   165,   267,   465,   168,    53,    26,   526,   460,
     967,   456,   412,   410,  2619,   422,   338,  2655,    17,   111,
      66,   346,    68,   358,  2744,   200,   356,   261,  2510,   465,
     465,   459,   431,   496,   413,   349,   109,   116,   995,   192,
     465,     7,   520,   467,   430,   377,    30,    93,  2653,   228,
     465,   465,   225,   116,   444,   316,   386,   519,   460,   346,
      84,   465,   313,   208,  2588,   180,    57,   215,   208,   226,
    2481,   261,   214,   121,   517,   200,   320,   101,    49,   437,
    2685,   328,   520,  2595,     7,    58,    55,   520,    60,  1075,
     517,    53,  2503,    52,   257,   397,   259,   204,   428,   219,
    1072,  1411,  2625,  1391,   727,  1054,  2588,  2253,  2507,  2240,
     440,   441,  2444,   276,  2254,  2438,   682,   163,   698,  2601,
    2248,  2233,  2604,  2548,  1697,  2204,  2829,  2527,  2524,  2550,
    2651,  2176,  1089,  2816,  2841,  2793,  2547,  2548,  2412,  2586,
    2586,  2683,  2683,  2625,   474,   241,  1565,    65,   194,  1458,
    1093,  1161,   482,  2635,   484,  2091,   507,  1563,  1172,  2682,
    2571,  2572,  2090,   520,   817,   542,  1200,   863,  1222,   866,
     216,  2582,   196,   197,   198,   505,  2587,  1567,   563,  1590,
     510,   205,    45,  1841,   910,  1250,  1855,   917,   518,  1854,
     520,  1609,   928,  1150,  2676,  1620,   526,  1154,  1280,  1329,
    2682,   958,  1636,    66,    67,    68,    69,  2618,   600,  1663,
    1167,   257,   606,  1170,  1310,   638,   354,  2628,  1328,  1907,
    1328,  2543,  1010,  1436,   270,  1434,  1512,   846,  1511,  2741,
    1912,   277,  2643,   845,  2645,  1901,  1900,   261,  2649,   263,
     264,   265,  2291,   636,  1918,   269,  1917,  1189,  1188,  1656,
     809,  1682,  1209,   896,  1656,   624,   652,  1656,  1656,   305,
    1041,  2005,  1831,  1519,  1297,   517,  2748,  2588,  1395,   729,
    2207,  2668,  1400,   475,  2246,  2497,  2788,  1852,  2398,   325,
    2792,  2768,  1066,  1611,  1579,  1317,   310,  2659,  1346,  2492,
    1720,  2784,   338,    -1,   457,    -1,  2707,  2708,    -1,    -1,
    2782,  2783,    -1,    -1,  1261,  1262,  1263,    -1,    -1,    -1,
      -1,  2722,    -1,    -1,     4,    -1,  2727,  2728,    -1,    -1,
      -1,  2803,    -1,    -1,    -1,    -1,    -1,   351,    -1,    19,
      -1,    -1,  2743,  2815,  2816,  2746,  2747,    -1,  2850,    29,
    2822,   387,    -1,    -1,    -1,   508,    -1,    -1,  2782,  2783,
      -1,   214,    -1,    -1,    -1,   401,    -1,   520,    -1,    -1,
    2588,    -1,   386,  2845,  1321,    -1,    -1,  2849,  2779,  2803,
      -1,    -1,    -1,    -1,    -1,    65,   422,   240,    -1,    -1,
       1,  1338,     3,    -1,     5,    -1,    -1,    -1,  2822,    10,
      -1,    -1,    -1,    -1,   257,    -1,   259,    18,  2782,  2783,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2849,   440,   441,    -1,  2803,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,  2822,    -1,
      -1,    62,   488,    -1,    -1,    -1,    -1,    -1,    -1,   312,
      -1,    -1,    73,   499,    -1,    76,    -1,    -1,    -1,    -1,
     484,    -1,    -1,    -1,    -1,  2849,    -1,    -1,    -1,    90,
      -1,   334,    -1,   519,    -1,    -1,    -1,   340,    -1,    -1,
      -1,   505,    -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   518,    -1,   520,    -1,    -1,    -1,
     121,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   225,    -1,    -1,    -1,   160,
      -1,    -1,  1499,    -1,   165,   166,    -1,   168,    -1,    -1,
     171,    -1,    -1,   416,  2782,  2783,    -1,    -1,  1515,    -1,
      -1,    -1,    -1,   426,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2803,    -1,   267,   199,    -1,
     443,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,  2822,    -1,    -1,    -1,    -1,   220,
      -1,    -1,   465,  1560,    -1,  1562,   227,    -1,   229,    -1,
      -1,   232,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,
      -1,  2849,    -1,   486,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,    -1,    -1,    -1,   327,    -1,    -1,
      -1,    -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,  1606,
     513,  1608,   515,   274,    -1,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,
      -1,   361,    -1,    -1,    -1,    -1,   297,   298,   299,   369,
     301,   302,   303,   304,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   381,    -1,    -1,    -1,    -1,    -1,   318,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     331,    -1,    -1,    -1,  1671,    -1,    -1,    -1,    -1,    -1,
      -1,   411,    -1,    -1,    -1,   415,    -1,  1684,    -1,    -1,
      -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,   359,   360,
      -1,    -1,    -1,    -1,    -1,   435,    -1,    -1,    -1,   370,
    1707,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   383,   384,    -1,    -1,    -1,    -1,    -1,   390,
      -1,    -1,    -1,   394,    -1,   465,    -1,    -1,   468,    -1,
      -1,    -1,   403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   413,    -1,    -1,    -1,    -1,  1754,  1755,  1756,
    1757,  1758,   423,   424,    -1,  1762,  1763,  1764,    -1,  1766,
      -1,    -1,   433,    -1,    -1,    -1,    -1,   438,   439,    -1,
      -1,   442,    -1,   444,    -1,    -1,    -1,    -1,     1,    -1,
       3,   452,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,   465,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   475,  1812,    -1,    -1,    -1,    -1,
      -1,    -1,   483,    -1,  1821,  1822,  1823,  1824,  1825,   490,
    1827,    -1,    -1,    -1,   495,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,   517,    -1,    -1,    -1,
      73,    -1,   523,    76,  1861,    -1,    -1,    -1,  1865,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,  1904,   121,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1930,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,   199,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,   209,   210,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,   229,    51,    52,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,   274,    -1,    -1,    -1,   278,    -1,   280,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2072,    -1,   290,    -1,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   318,    -1,    -1,    -1,    84,
      -1,  2108,    -1,  2110,    -1,    -1,    -1,    -1,   331,    -1,
      -1,   155,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,   166,    -1,  2131,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   359,   360,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   370,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,
     383,   384,   206,    -1,    -1,   209,   210,   390,    -1,    -1,
     155,   394,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,
     403,    -1,    -1,   227,    -1,   229,    -1,    -1,   232,    -1,
     413,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   424,    -1,    -1,    -1,    -1,    84,    -1,    -1,  2216,
     433,   196,   197,   198,    -1,   438,   439,    -1,    -1,   442,
     205,   444,    -1,   101,    -1,  2232,  2233,    -1,    -1,   452,
     274,    -1,   217,    -1,   278,    -1,   280,    -1,    -1,    -1,
      -1,    -1,   465,    -1,    -1,    -1,   290,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     483,    -1,    -1,    -1,    -1,   250,    -1,   490,    -1,    -1,
      -1,   256,   495,   258,   318,    -1,   261,    -1,   263,   264,
     265,    -1,    -1,    -1,   269,    -1,   271,   331,    -1,    -1,
      -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     523,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   359,   360,   195,   196,   197,
     198,    -1,    -1,    -1,    -1,   310,   370,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   383,
     384,  2348,    -1,    -1,   329,    -1,   390,    -1,    -1,    -1,
     394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2365,   403,
    2367,  2368,    -1,    -1,  2371,    -1,    -1,    -1,    -1,   413,
      -1,   356,    -1,    -1,    -1,    -1,    -1,  2384,    -1,    -1,
     424,    -1,    -1,   261,    -1,   263,   264,   265,    -1,   433,
      -1,   269,    -1,    -1,   438,   439,    -1,    -1,   442,    -1,
     444,   386,     1,    -1,     3,    -1,     5,    -1,   452,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,   465,  2429,  2430,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   310,    -1,    -1,    -1,    -1,  2444,    -1,   483,
    2447,  2448,    -1,   428,    -1,    -1,   490,    -1,  2455,  2456,
    2457,   495,    51,    52,    -1,   440,   441,    -1,    -1,    -1,
      -1,    -1,  2469,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    -1,   523,
      -1,    -1,   467,    -1,    -1,    -1,    -1,    -1,    -1,   474,
      -1,    90,    -1,   478,    -1,    -1,    -1,  2504,    -1,   484,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,  2516,
      -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,  2525,    -1,
     505,  2528,   121,    -1,   123,   510,  2533,  2534,    -1,    -1,
      -1,    -1,    -1,   518,    -1,   520,  2543,    -1,    -1,    -1,
      -1,   526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2560,    -1,    -1,   155,    -1,    -1,    -1,
      -1,  2568,   440,   441,    -1,    -1,    -1,   166,    -1,    -1,
      -1,    -1,   171,    -1,    -1,   453,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,    -1,    -1,   484,   206,    -1,    -1,
     209,   210,  2619,    -1,    -1,    -1,    -1,    -1,   496,    -1,
      -1,   220,    -1,    -1,    -1,    -1,    -1,   505,   227,  2636,
     229,    -1,   510,   232,  2641,    -1,    -1,   515,    -1,    -1,
     518,   519,   520,    -1,    -1,    -1,  2653,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,   274,    -1,    -1,  2685,   278,
      -1,   280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   290,    -1,    -1,  2701,    -1,    -1,    -1,  2705,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   318,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     359,   360,    -1,    -1,    -1,    -1,    -1,   195,   196,   197,
     198,   370,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
      -1,    -1,    -1,    -1,   383,   384,    -1,    -1,    -1,    -1,
      -1,   390,    -1,    -1,    -1,   394,    -1,    -1,     3,    -1,
       5,    -1,    -1,    -1,   403,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,   413,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   261,   433,   263,   264,   265,    -1,   438,
     439,   269,    -1,   442,    -1,   444,    51,    52,    -1,    -1,
      -1,    -1,    -1,   452,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    76,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,   310,    -1,   483,    90,    -1,    -1,    -1,    -1,
      -1,   490,    -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,   123,    -1,
      -1,    -1,    -1,    -1,   523,    -1,   131,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    84,    -1,    -1,    -1,    -1,    -1,    -1,   386,    -1,
      -1,   166,    -1,    96,    -1,    -1,   171,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,
       6,   206,    -1,     9,   209,   210,    12,    13,    14,    -1,
      -1,    -1,   440,   441,    20,   220,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,   229,   453,    -1,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,   484,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   197,   198,    -1,    -1,   496,   274,
      -1,    -1,   205,   278,    -1,   280,    -1,   505,    84,    -1,
      -1,    -1,   510,    -1,   217,   290,    -1,   515,    -1,    -1,
     518,   519,   520,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   318,    -1,    -1,    -1,   250,    -1,    -1,
      -1,    -1,    -1,   256,    -1,   258,   331,    -1,   261,    -1,
     263,   264,   265,    -1,    -1,    -1,   269,    -1,   271,    -1,
      -1,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   359,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   370,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,   384,
      -1,    -1,    -1,    -1,    -1,   390,    -1,     9,    -1,   394,
     196,   197,   198,    -1,    -1,    -1,   329,    -1,   403,   205,
      -1,    -1,    -1,    -1,    -1,   211,   212,    -1,   413,    -1,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,
      -1,    -1,    -1,   356,    -1,    -1,    -1,    -1,   433,    -1,
      -1,   237,    -1,   438,   439,    -1,    -1,   442,    -1,   444,
      -1,    -1,    -1,    -1,   250,   251,   252,   452,    -1,    -1,
     256,    -1,   258,   386,    -1,   261,    -1,   263,   264,   265,
     465,    -1,    84,   269,    -1,   271,    -1,    -1,    -1,    -1,
     276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   483,   101,
      -1,    -1,    -1,   289,    -1,   490,    -1,    -1,    -1,   295,
     495,    -1,    -1,    -1,   300,   428,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,   310,    -1,    -1,   440,   441,   315,
      -1,    -1,    -1,    -1,   320,    84,    -1,    -1,   523,    -1,
      -1,    -1,    -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,   101,   339,     9,    -1,    -1,    12,    13,    14,
      -1,   474,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
     356,   484,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   505,    -1,   196,   197,   198,   510,    -1,    -1,
     386,    -1,    -1,   205,    -1,   518,    61,   520,    -1,    -1,
      -1,    -1,    -1,   526,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   428,    -1,    -1,    -1,   101,   196,   197,   198,
      -1,    -1,    -1,    -1,   440,   441,   205,    -1,    -1,   261,
      -1,   263,   264,   265,    -1,    -1,    -1,   269,   217,   271,
      -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,   464,    -1,
     466,    -1,    -1,   469,    -1,   471,   472,   473,   474,    -1,
     476,   477,    -1,    -1,    -1,    -1,    -1,    -1,   484,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,   310,    -1,
      -1,    -1,   261,    -1,   263,   264,   265,   172,    -1,   505,
     269,    -1,   271,    -1,   510,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   518,    -1,   520,    -1,    -1,    -1,    -1,    -1,
     526,   196,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,
     205,    -1,    -1,    -1,   356,    -1,   211,   212,    -1,    -1,
      -1,   310,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,   258,    -1,    -1,   261,   356,   263,   264,
     265,    -1,    30,    -1,   269,    -1,   271,    35,    -1,    -1,
      38,   276,    -1,    -1,    -1,    -1,   428,    45,    46,    -1,
      -1,    -1,    -1,    -1,   289,    -1,    -1,   386,   440,   441,
     295,    -1,    -1,    -1,    -1,   300,    -1,    -1,    66,    -1,
      68,    -1,    -1,   308,    -1,   310,    -1,    -1,    -1,    -1,
     315,    -1,    -1,    -1,    -1,   320,    84,    -1,    -1,    -1,
      -1,    -1,   474,    -1,   329,    93,    -1,     6,    -1,   428,
       9,    -1,   484,   101,   339,    -1,    -1,    -1,    -1,    -1,
      -1,   440,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   356,    -1,   505,    -1,    -1,    -1,    -1,   510,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   518,    -1,   520,    -1,
      49,    -1,    -1,    -1,   526,   474,    -1,    -1,    -1,    -1,
      -1,   386,    -1,    -1,    -1,   484,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,   505,    -1,    -1,    -1,
      89,   510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   518,
      -1,   520,   101,   428,    -1,    -1,   194,   526,   196,   197,
     198,    -1,    -1,    -1,    -1,   440,   441,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,   464,
      -1,   466,    -1,    -1,   469,    -1,   471,   472,   473,   474,
      -1,   476,   477,    -1,    -1,    -1,    -1,    -1,    -1,   484,
      -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,   256,   257,
     258,    -1,    -1,   261,    -1,   263,   264,   265,    -1,    -1,
     505,   269,   270,   271,    -1,   510,    -1,    -1,   276,   277,
      -1,    -1,    -1,   518,    -1,   520,    -1,   196,   197,   198,
      -1,   526,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,     9,   305,   217,    -1,
      -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,    -1,
      -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     338,   250,    -1,    -1,    -1,    -1,    -1,   256,    -1,   258,
      -1,    -1,   261,    -1,   263,   264,   265,    -1,   356,    -1,
     269,    -1,   271,    -1,    -1,    -1,    -1,   276,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,   386,   387,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,   310,    -1,   401,    -1,    -1,   315,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    -1,    -1,   422,    -1,    -1,    -1,    -1,    -1,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   440,   441,    -1,     6,    -1,   356,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   367,    -1,
      -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   474,   386,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   484,    -1,    -1,    -1,
     488,    -1,    -1,   196,   197,   198,    -1,    -1,    -1,    -1,
      -1,   499,   205,    -1,   207,    -1,    -1,   505,    -1,    -1,
      -1,    -1,   510,   422,   217,    -1,    -1,    -1,    -1,   428,
     518,   519,   520,    84,    -1,    -1,    -1,    -1,   526,    -1,
      -1,   440,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
      -1,    -1,    -1,   256,    -1,   258,    -1,    -1,   261,    -1,
     263,   264,   265,    -1,    -1,   474,   269,    -1,   271,    -1,
      -1,    -1,    -1,   276,     6,   484,    -1,     9,    -1,    -1,
      -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   294,    -1,    -1,    -1,    -1,   505,    -1,    -1,    -1,
      -1,   510,    -1,    -1,   513,    -1,    -1,   310,    -1,   518,
      -1,   520,    -1,    -1,    -1,    -1,    -1,   526,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,   198,    -1,    -1,
      -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,   356,    -1,    -1,   217,     6,    -1,    -1,
       9,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   385,   386,    -1,    -1,    -1,    -1,    -1,   250,
      -1,    -1,    -1,    -1,    -1,   256,    -1,   258,    -1,    -1,
     261,    -1,   263,   264,   265,    -1,    -1,    -1,   269,    -1,
     271,    -1,    -1,    -1,    -1,   276,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,   440,   441,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,   310,
      -1,    -1,   101,    -1,   315,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,   197,   198,    -1,   329,    -1,
      -1,   474,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   484,    -1,    -1,    -1,   217,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,   356,    -1,    -1,    -1,    -1,
      -1,    -1,   505,    -1,    -1,    -1,    -1,   510,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   518,   519,   520,   250,    -1,
      -1,    -1,    -1,   526,   256,   386,   258,    -1,    -1,   261,
      -1,   263,   264,   265,    -1,    -1,    -1,   269,    -1,   271,
      -1,    -1,    -1,    -1,   276,    -1,    -1,   196,   197,   198,
      -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,   428,   217,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,   310,   440,
     441,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,
      -1,   250,    -1,    -1,    -1,    -1,    -1,   256,    -1,   258,
      -1,    -1,   261,   474,   263,   264,   265,    -1,    -1,    -1,
     269,    -1,   271,   484,   356,    -1,    -1,   276,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   505,    -1,    -1,    84,    -1,   510,
      -1,    -1,    -1,    -1,   386,    -1,    -1,   518,    -1,   520,
      -1,   310,    -1,    -1,   101,   526,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,   197,   198,    -1,
     329,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   428,   217,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,   356,   440,   441,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     250,    -1,    -1,    -1,    -1,    -1,   256,   386,   258,    -1,
      -1,   261,   474,   263,   264,   265,    -1,    -1,    -1,   269,
      -1,   271,   484,    -1,    -1,    -1,   276,    -1,    -1,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
      -1,    -1,    -1,   505,    -1,    -1,    84,    -1,   510,   428,
     217,     6,    -1,    -1,     9,    -1,   518,    -1,   520,    -1,
     310,   440,   441,   101,   526,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,
      -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,   256,
      -1,   258,    -1,    -1,   261,   474,   263,   264,   265,    -1,
      -1,    -1,   269,    -1,   271,   484,   356,    -1,    -1,   276,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   505,    -1,    -1,    84,
      -1,   510,    -1,    -1,    -1,    -1,   386,    -1,    -1,   518,
      -1,   520,    -1,   310,    -1,    -1,   101,   526,   315,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,
     198,    -1,   329,    -1,    -1,    -1,    -1,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,   217,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,   356,
     440,   441,    -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     460,    -1,   250,    -1,    -1,    -1,    -1,    -1,   256,   386,
     258,    -1,    -1,   261,   474,   263,   264,   265,    -1,    -1,
      -1,   269,    -1,   271,   484,    -1,    -1,    -1,   276,    -1,
      -1,   196,   197,   198,    -1,   200,    -1,    -1,    -1,    -1,
     205,    -1,    -1,    -1,    -1,   505,    -1,    -1,    84,    -1,
     510,   428,   217,     6,    -1,    -1,     9,    -1,   518,    -1,
     520,    -1,   310,   440,   441,   101,   526,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   329,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,
      -1,   256,    -1,   258,    -1,    -1,   261,   474,   263,   264,
     265,    -1,    -1,    -1,   269,    -1,   271,   484,   356,    -1,
      -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   505,    -1,
      -1,    84,    -1,   510,    -1,    -1,    -1,    -1,   386,    -1,
      -1,   518,    -1,   520,    -1,   310,    -1,    -1,   101,   526,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,   197,   198,    -1,   329,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     428,   217,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,   356,   440,   441,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,
     256,   386,   258,    -1,    -1,   261,   474,   263,   264,   265,
      -1,    -1,    -1,   269,    -1,   271,   484,    -1,    -1,    -1,
     276,    -1,    -1,   196,   197,   198,    -1,    -1,    -1,    -1,
      -1,    -1,   205,    -1,    -1,    -1,    -1,   505,    -1,    -1,
      84,    -1,   510,   428,   217,    -1,    -1,    -1,    -1,    -1,
     518,    -1,   520,    -1,   310,   440,   441,   101,   526,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   329,    -1,    -1,    -1,   250,    -1,    -1,
      -1,    -1,    -1,   256,    -1,   258,    -1,    -1,   261,   474,
     263,   264,   265,    -1,    -1,    -1,   269,    -1,   271,   484,
     356,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     505,    -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,    -1,
     386,    -1,    -1,   518,    -1,   520,    -1,   310,    -1,    -1,
      -1,   526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,   197,   198,    -1,   329,    -1,    -1,    -1,
      -1,   205,    -1,    -1,    -1,    -1,   422,    -1,    -1,    -1,
      -1,    -1,   428,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   356,   440,   441,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,
      -1,    -1,   256,   386,   258,    -1,    -1,   261,   474,   263,
     264,   265,    -1,     9,    -1,   269,    -1,   271,   484,    -1,
      -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   505,
      -1,    -1,    -1,    -1,   510,   428,    -1,    -1,    -1,    -1,
      -1,    -1,   518,    -1,   520,    -1,   310,   440,   441,    -1,
     526,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,   474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   484,   356,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   505,    -1,    -1,    -1,    -1,   510,    -1,    -1,
      -1,    -1,   386,    -1,    -1,   518,    -1,   520,    -1,    -1,
      -1,    -1,    -1,   526,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,    66,
      -1,    68,    -1,    -1,    -1,    -1,   440,   441,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    -1,
     196,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     474,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     484,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,   505,    -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   518,   261,   520,   263,   264,   265,
      -1,    -1,   526,   269,    -1,   271,   163,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   179,    -1,    -1,    -1,   183,   184,   185,   186,
     187,    -1,    -1,   190,   191,    -1,    -1,   194,    -1,    -1,
      -1,    -1,    -1,   200,   310,   202,    -1,    -1,    -1,    -1,
      -1,   208,    -1,    -1,    -1,    -1,   213,    -1,    -1,   216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     237,    -1,    -1,   240,    -1,    -1,    -1,    -1,    -1,   246,
     356,   248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,   270,    -1,    -1,    -1,    -1,    -1,    -1,
     386,    -1,    -1,    -1,    -1,   282,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,
      -1,    -1,   428,    -1,    -1,    -1,    -1,    -1,   325,   326,
      -1,    -1,    -1,    -1,   440,   441,    -1,   334,    -1,    -1,
     337,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    -1,    -1,   352,    -1,   354,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   474,    -1,
      -1,    -1,    -1,    -1,    32,    -1,   482,    35,   484,    -1,
      38,    -1,    -1,   380,    -1,    -1,    -1,   121,    46,    -1,
     387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   505,
      -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,   405,    -1,
      -1,    -1,   518,    -1,   520,    -1,    -1,    -1,    -1,   416,
     526,   418,   419,   420,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
     174,    -1,    -1,    -1,    -1,   179,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   112,    -1,   190,   191,    -1,    -1,
      -1,    -1,    -1,   460,    -1,    -1,    -1,    -1,   465,    -1,
      -1,    -1,    -1,   470,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   482,    -1,    -1,    -1,    -1,
     224,   488,    -1,    -1,    -1,   492,   493,   494,    -1,    -1,
      -1,    -1,    -1,   237,    -1,    -1,   240,    21,    -1,   506,
      -1,    -1,   246,    -1,   511,    -1,   513,    -1,    -1,    -1,
      -1,    -1,    36,   520,    -1,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,   282,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     248,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,   337,    -1,    -1,    -1,   121,    -1,    -1,
     268,    -1,   270,    -1,    -1,    -1,    -1,    -1,   352,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    -1,    -1,
      35,   365,    -1,    38,   292,   293,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    68,    -1,    -1,    -1,   325,    -1,   183,
     184,   185,   186,   187,    -1,    -1,   190,   191,    -1,    -1,
      -1,    -1,   416,    -1,   418,   419,   420,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     224,    -1,   446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   380,   237,    -1,    -1,   240,    -1,    -1,   387,
      -1,   465,   246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   401,    -1,    -1,    -1,   405,   482,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,   493,
     494,    -1,    -1,    -1,   422,    -1,    -1,    -1,   282,    -1,
      -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,   513,
      -1,    -1,    -1,    -1,    -1,    -1,   520,    -1,    -1,   194,
      -1,   449,    -1,    -1,    -1,    -1,   201,   202,   312,    -1,
     458,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   216,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,   337,    -1,    -1,    -1,    -1,    -1,    -1,
     488,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,
     498,    -1,    -1,   248,    -1,    -1,   504,    -1,    -1,    -1,
      -1,   365,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   268,    -1,   270,    -1,    -1,    -1,    -1,
      -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,   293,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   416,    -1,   418,   419,   420,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   446,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,
     355,   465,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   482,   101,
      -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,   492,   493,
     494,    -1,   387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   506,    -1,    -1,    -1,   401,    -1,    -1,   513,
     405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,   422,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   449,    -1,    66,    -1,    68,    -1,
      -1,    -1,    -1,   458,    -1,    75,    -1,    77,    78,    79,
      80,    81,    82,    83,   196,   197,   198,    39,    40,    41,
      42,    43,    44,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   488,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   498,    -1,    -1,    -1,    -1,    -1,   504,
      -1,   121,    -1,    75,    -1,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,   519,    -1,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,   256,    -1,   258,    -1,    -1,   261,
      -1,   263,   264,   265,    -1,    -1,    -1,   269,    -1,   271,
      -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,   121,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,   184,   185,   186,   187,    -1,    -1,
     190,   191,    -1,    -1,   194,    -1,    -1,    -1,   310,    -1,
     200,    -1,   202,    -1,    -1,    -1,    -1,    -1,   208,    -1,
      -1,    -1,    -1,   213,    -1,    -1,   216,   329,    -1,    -1,
      -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,
      84,   183,   184,   185,   186,   187,    -1,   237,   190,   191,
     240,    -1,    -1,    -1,   356,    -1,    -1,   101,   248,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     270,    -1,   224,    -1,   386,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   312,    -1,    -1,    -1,   428,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,    -1,   440,   441,
     282,    -1,    -1,    -1,   334,    -1,    -1,   337,    84,    -1,
      -1,    -1,   196,   197,   198,    -1,    -1,    -1,    -1,    -1,
     462,   205,   352,    -1,   354,   101,    -1,    -1,    -1,    -1,
     472,    -1,   474,   217,   476,   477,    -1,    -1,    -1,    -1,
      -1,    -1,   484,    -1,   326,    -1,    -1,    -1,    -1,    -1,
     380,    -1,    -1,    -1,    -1,   337,    -1,   387,    -1,    -1,
      -1,    -1,    -1,   505,    -1,    -1,   250,    -1,   510,    -1,
     352,    -1,   256,    -1,   258,   405,   518,   261,   520,   263,
     264,   265,    -1,    -1,   526,   269,   416,   271,   418,   419,
     420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     196,   197,   198,    -1,    -1,    -1,   310,    -1,    -1,   205,
     460,    -1,    -1,    -1,    -1,   465,   418,   419,   420,    -1,
     470,   217,    -1,    -1,    -1,   329,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   488,    -1,
      -1,    -1,   492,   493,   494,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   356,    -1,   250,    -1,   506,    -1,    -1,    -1,
     256,   511,   258,   513,    -1,   261,    -1,   263,   264,   265,
      -1,    -1,    -1,   269,    -1,   271,    -1,    -1,    -1,    -1,
      -1,    -1,   386,    -1,    84,    -1,    -1,    -1,    -1,    -1,
     492,   493,   494,    -1,   196,   197,   198,    -1,    -1,    -1,
      -1,   101,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   329,    -1,    -1,   440,   441,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,   256,    -1,   258,    -1,   462,   261,
     356,   263,   264,   265,    -1,    -1,    -1,   269,   472,   271,
     474,    -1,   476,   477,    -1,    -1,    -1,    -1,    84,    -1,
     484,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     386,    -1,    -1,    -1,    -1,   101,   196,   197,   198,    -1,
      -1,   505,    -1,    -1,    -1,   205,   510,    -1,   310,    -1,
      -1,    -1,    -1,    -1,   518,    -1,   520,   217,    -1,    -1,
      -1,    -1,   526,    -1,    -1,    -1,    -1,   329,    -1,    -1,
      -1,    -1,   428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   440,   441,    -1,    -1,    -1,    -1,
     250,    -1,   448,    -1,   356,    -1,   256,    -1,   258,    -1,
      -1,   261,    -1,   263,   264,   265,    -1,    -1,    -1,   269,
      -1,   271,    -1,    -1,    -1,    -1,   472,    -1,   474,    -1,
     476,   477,    -1,    -1,   386,    -1,    84,    -1,   484,    -1,
     196,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   505,
     310,   217,    -1,    -1,   510,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   518,    -1,   520,    -1,   428,    -1,    -1,   329,
     526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   440,   441,
      -1,    -1,    -1,    -1,   250,    -1,   448,    -1,    -1,    -1,
     256,    -1,   258,    -1,    -1,   261,   356,   263,   264,   265,
      -1,    -1,    -1,   269,    -1,   271,    -1,    -1,    -1,    -1,
     472,    -1,   474,    -1,   476,   477,    -1,    -1,    -1,    -1,
      -1,    -1,   484,    -1,    -1,    -1,   386,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,   196,   197,
     198,    -1,    -1,   505,   310,    -1,    -1,   205,   510,    -1,
      -1,    -1,   101,    -1,    -1,    -1,   518,    -1,   520,   217,
      -1,    -1,    -1,   329,   526,    -1,    -1,    -1,   428,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     440,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     356,    -1,   250,    -1,    -1,    -1,    -1,    -1,   256,    -1,
     258,    -1,   462,   261,    -1,   263,   264,   265,    -1,    -1,
      -1,   269,   472,   271,   474,    -1,   476,   477,    -1,    -1,
     386,    -1,    -1,    -1,   484,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   505,    -1,   196,   197,   198,
     510,    -1,   310,    -1,    -1,    84,   205,    -1,   518,    -1,
     520,    -1,   428,    -1,    -1,    -1,   526,    -1,   217,    -1,
      -1,   329,   101,    -1,   440,   441,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,    -1,
      -1,   250,    -1,    -1,    -1,    -1,   472,   256,   474,   258,
     476,   477,   261,    -1,   263,   264,   265,    -1,   484,    -1,
     269,    -1,   271,    -1,    -1,    -1,    -1,    -1,   386,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   505,
      -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   518,    -1,   520,    -1,    -1,    -1,    -1,    -1,
     526,   310,    -1,    -1,    -1,    -1,    -1,   196,   197,   198,
     428,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,
     329,    -1,   440,   441,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   474,    -1,   476,    -1,
      -1,   250,    -1,    -1,    -1,    -1,   484,   256,    -1,   258,
      -1,    -1,   261,   382,   263,   264,   265,   386,    -1,    -1,
     269,    -1,   271,    -1,    -1,    -1,    -1,   505,    -1,    -1,
      -1,    -1,   510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     518,    -1,   520,    -1,    -1,    -1,    -1,    -1,   526,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,
      -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   440,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   474,    -1,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   484,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   505,   386,    -1,    -1,
      -1,   510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   518,
      -1,   520,    -1,    -1,    -1,    -1,    -1,   526,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   440,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   474,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   484,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   505,    -1,    -1,    -1,
      -1,   510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   518,
      -1,   520,    -1,    -1,    -1,    -1,    -1,   526
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   530,   531,     0,   218,   219,   532,   533,   534,   535,
     536,   537,   538,   544,   124,   124,   534,   156,   543,   557,
     558,   204,   350,   545,   548,   465,   465,   124,   104,   671,
     673,    86,   559,   560,   549,   546,   543,   543,   465,   124,
     346,   833,   836,   468,   674,   404,   231,   622,   623,   311,
     427,   561,   562,   566,   465,   465,   145,   539,   540,   541,
     141,   542,   465,   124,   859,   860,   404,   675,   465,   404,
     177,   624,   465,   465,   429,   583,   566,   562,   261,   351,
     550,   550,   261,   351,   551,   541,   551,    56,   511,   837,
       1,     3,     5,    10,    18,    51,    52,    62,    73,    76,
      90,   113,   121,   123,   155,   166,   171,   199,   206,   209,
     210,   220,   227,   229,   232,   274,   278,   280,   290,   318,
     331,   359,   360,   370,   383,   384,   390,   394,   403,   413,
     424,   433,   438,   439,   442,   444,   452,   465,   483,   490,
     495,   523,   861,   862,   878,   883,   887,   892,   912,   916,
     920,   924,   925,   926,   931,   945,   949,   952,   966,   970,
     973,   976,   980,   981,   985,   995,   998,  1016,  1018,  1021,
    1025,  1031,  1043,  1051,  1052,  1055,  1056,  1060,  1065,  1066,
    1074,  1090,  1100,  1109,  1114,  1123,  1127,  1129,  1132,  1135,
    1138,  1165,   861,   465,   176,   402,   672,   676,   677,   679,
     465,   465,   626,   567,   563,   465,    11,    59,    98,   100,
     102,   110,   167,   262,   308,   400,   445,   520,   584,   585,
     586,   587,   588,   594,   603,   605,   610,   613,   614,   616,
     617,   618,   619,   620,   621,    26,   552,   552,   465,   465,
     839,   838,   385,   845,     3,     5,    10,    18,    51,    52,
      62,    73,    76,    90,   113,   121,   123,   131,   133,   134,
     135,   136,   137,   138,   139,   140,   142,   143,   144,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   166,
     171,   199,   206,   209,   210,   220,   227,   229,   232,   274,
     278,   280,   290,   318,   331,   359,   370,   384,   390,   394,
     403,   413,   424,   433,   438,   439,   442,   444,   452,   465,
     483,   490,   495,   523,  1319,  1320,  1321,   863,   879,   884,
     888,   893,   913,   917,   921,   927,   932,   946,   950,   953,
     967,   971,   974,   977,   207,   385,   904,   969,   982,   986,
     996,   999,  1017,  1019,  1022,   409,  1026,  1032,  1044,  1053,
    1057,  1061,  1067,  1075,  1091,  1101,   261,   356,   396,   428,
     526,  1113,  1115,  1124,   345,  1128,  1130,   848,  1133,  1136,
    1139,  1166,   522,   707,   709,   710,     1,   520,  1237,   239,
     407,   625,   627,    57,    65,   273,   349,   406,   411,   520,
     568,   569,   570,   571,   572,   573,   574,   576,  1330,  1392,
     564,   576,     1,   520,  1251,  1251,   435,   416,  1363,   237,
    1344,  1344,  1344,  1251,   416,  1344,    58,  1331,   589,   379,
     577,   586,   465,   587,   223,   604,   261,   465,   547,    49,
     840,   841,   842,  1329,   840,   315,   520,   465,   315,   520,
     864,   866,  1281,  1282,  1285,     6,     9,    84,    96,   101,
     196,   197,   198,   205,   217,   250,   256,   258,   261,   263,
     264,   265,   269,   271,   276,   310,   329,   356,   386,   428,
     440,   441,   474,   484,   505,   510,   518,   526,   880,  1231,
    1256,  1257,  1259,  1281,  1292,  1293,  1294,  1295,  1296,  1297,
    1298,   250,   472,   476,   477,   885,  1226,  1227,  1228,  1229,
    1230,  1231,  1262,  1281,  1293,  1295,   261,   889,   890,  1242,
    1243,  1244,  1285,   276,   434,   436,   894,   896,   261,   351,
     914,   915,  1269,  1281,   918,  1237,     6,   922,  1232,  1233,
    1254,  1283,  1284,  1285,  1293,   468,   928,  1237,   261,   315,
     933,   934,   935,   936,   938,  1256,  1269,  1281,   947,  1257,
     261,   951,   467,   478,   954,   955,   956,  1214,  1215,  1216,
     203,   330,   331,   349,   404,   968,   972,  1253,  1254,   975,
    1285,   460,   978,  1372,  1257,  1213,  1214,   987,  1253,   520,
     997,  1238,  1000,  1001,  1281,  1292,  1295,  1092,  1276,  1277,
    1285,    96,  1020,  1257,  1023,  1257,   173,   230,   238,   324,
    1027,  1028,   195,   261,   519,  1033,  1037,  1038,  1039,  1242,
    1270,  1281,  1285,  1295,  1376,  1045,  1237,  1054,  1234,  1285,
    1058,  1237,  1062,  1234,     9,  1068,  1235,  1285,   156,   245,
     276,  1076,  1079,  1080,  1083,  1084,  1085,  1086,  1087,  1088,
    1089,  1239,  1240,  1253,  1275,  1277,  1285,  1092,  1102,  1237,
    1110,  1116,  1117,  1118,  1257,    96,  1125,  1256,  1131,  1238,
     465,   520,   849,   850,   853,   854,   859,  1134,  1278,  1281,
    1137,  1237,  1140,  1281,  1167,  1234,   404,   266,   768,   130,
     414,   421,   711,   712,   714,   724,   726,   728,  1306,   465,
     678,   465,   295,   319,  1314,   279,   398,   661,   662,   663,
     664,   666,   411,   422,    65,  1344,   465,   570,   465,   520,
     569,    60,  1344,   565,  1376,   595,  1344,  1344,  1344,  1246,
    1285,    70,  1246,  1344,  1344,  1246,   520,   606,   607,   608,
    1252,   261,   314,   316,   590,   592,   593,  1077,  1288,  1344,
     465,   465,   520,   553,  1344,   841,   422,   491,   843,   367,
     513,   834,   223,   313,  1382,   133,   877,   865,   200,   476,
    1286,  1287,   313,  1354,  1294,  1281,   476,   476,   476,  1300,
    1282,  1293,  1295,  1382,  1382,   476,   476,   476,   476,  1382,
     476,  1300,   134,   882,   460,   881,  1257,   461,   476,  1299,
     476,   476,  1282,  1293,  1295,  1230,  1281,  1226,  1230,    58,
     472,   477,   464,   473,   172,   228,  1309,   890,   460,  1382,
     135,   911,   261,   351,   897,  1270,   915,  1237,   366,   489,
     919,  1376,  1388,  1354,   136,   923,   162,   466,  1233,  1380,
     395,  1315,  1286,  1287,   929,  1237,   137,   930,   361,  1360,
     138,   944,   168,   301,  1180,  1182,  1184,   936,  1255,  1256,
     937,   500,   501,   502,   503,   139,   948,    49,   233,   511,
     898,   140,   965,    17,   517,   957,   958,   959,   961,    12,
      13,    14,    20,    61,   162,   172,   211,   212,   251,   252,
     289,   295,   300,   308,   315,   320,   339,   462,   464,   466,
     469,   471,   472,   473,   476,   477,  1217,  1218,  1219,  1220,
    1221,  1222,  1223,  1257,   103,   969,  1254,  1241,   455,  1370,
     988,  1376,  1238,    94,   375,   450,  1002,  1003,  1005,  1006,
    1094,   476,  1286,  1257,   460,   143,  1024,    49,  1028,   415,
    1029,  1038,   144,   465,  1034,  1036,   496,   515,   456,   459,
     453,   146,  1050,   290,   341,  1312,   200,  1168,   147,  1059,
    1360,   148,  1064,  1168,  1235,   149,  1073,   515,  1069,  1265,
    1267,  1281,  1293,  1295,   168,  1086,  1088,  1253,   460,  1240,
     125,   460,   497,  1078,    31,  1286,   150,  1108,   181,   242,
     245,  1104,   904,  1111,  1257,  1376,   151,  1122,   233,  1118,
     114,  1119,  1281,   152,  1126,   200,  1238,   404,   465,   465,
     200,   361,   363,  1361,   153,  1149,   114,  1141,   154,  1172,
    1168,   465,   404,   260,   770,   520,   716,   716,   716,   712,
     465,     1,   179,   715,   716,   520,   680,   319,  1251,   667,
     361,   424,   425,   665,     1,   465,   663,  1344,   411,  1288,
     465,  1344,   520,  1247,   465,   109,  1344,   217,   261,   271,
     356,   428,   474,   526,   611,   612,  1291,  1246,   261,   261,
     482,   607,    22,   237,  1252,  1345,  1077,   237,   435,  1356,
    1344,    98,  1251,   578,   465,    74,   174,   364,   470,   554,
     555,   556,  1344,   422,   319,   844,   111,   846,  1285,    30,
     201,   277,   867,   868,   869,   871,   874,  1327,  1376,    24,
      25,    67,    69,    71,   105,   106,   107,   156,   158,   165,
     168,   257,   259,   457,   508,   520,   870,  1240,  1379,  1224,
    1226,   476,  1287,   155,   349,  1263,  1282,   460,  1224,  1226,
    1304,  1224,  1305,   462,  1224,   520,   520,  1226,  1303,  1303,
    1303,  1261,  1281,  1293,  1295,  1302,   520,  1261,  1301,     6,
    1232,  1257,  1285,  1293,   207,  1294,  1226,  1261,  1224,   462,
     228,  1310,  1227,  1227,  1228,  1228,  1228,   385,   886,   348,
     891,  1244,   895,   919,   267,   292,   193,  1337,  1282,  1226,
     277,  1316,  1287,  1237,   236,   302,  1206,  1207,  1209,  1211,
     856,   857,   856,  1183,  1184,  1181,  1182,   499,   871,   874,
     939,   940,   941,  1376,  1180,  1180,  1180,  1180,  1257,  1232,
    1257,   899,   956,    21,   467,   478,   962,   963,  1215,   517,
     959,   960,   517,   856,  1372,   237,  1218,   116,   979,  1242,
     131,   856,   983,     9,    12,    15,    16,   282,   283,   308,
     309,   989,   993,   179,  1265,     9,    58,   181,   246,   482,
    1009,  1010,  1011,  1004,  1005,   126,   316,   519,  1096,  1355,
    1391,   460,  1253,  1232,  1257,  1029,  1376,  1236,  1237,   856,
     171,  1040,  1213,  1041,  1042,  1281,  1242,     8,    37,  1170,
    1360,  1274,  1281,  1292,  1295,   233,  1046,  1063,  1376,   132,
    1070,  1281,  1070,   460,   460,   460,  1077,   155,   467,   478,
    1257,    49,    38,    46,   216,   248,   270,   325,   387,   488,
    1081,  1082,  1344,  1103,  1376,  1257,   164,   294,  1281,  1329,
     200,  1232,  1257,   855,  1288,  1265,  1329,   233,  1144,  1169,
    1170,   708,   465,   404,   376,   772,   727,   729,   373,   465,
     465,   713,    87,    47,    64,   104,   244,   255,   361,   362,
     376,   378,   465,   513,   681,   682,   684,   688,   689,   692,
     693,   699,   702,   704,   705,  1344,   628,   468,  1335,    23,
    1325,   465,  1288,   262,   447,   509,   575,  1247,   277,    28,
     128,   217,   261,   271,   285,   356,   428,   431,   432,   526,
     596,   597,   598,   601,   612,   456,   615,  1376,   410,   261,
     609,  1289,  1356,   237,  1251,  1251,   591,   592,   203,   349,
     579,   580,   581,   556,   349,  1359,    74,    32,   112,  1288,
    1344,   520,   465,   835,   526,  1271,  1275,  1288,  1344,   165,
     168,   299,   301,  1173,  1175,  1176,  1178,  1179,   869,    66,
      68,   257,   338,   872,   873,  1378,    32,    35,    38,    46,
      93,   112,   194,   202,   216,   248,   268,   270,   292,   293,
     325,   354,   355,   380,   387,   401,   405,   422,   449,   458,
     488,   498,   504,   875,   876,  1173,   525,   524,  1265,  1173,
     242,   435,   306,   281,    72,   408,   462,  1225,   463,  1226,
     261,  1264,  1282,  1281,  1225,   462,  1225,   462,   462,  1225,
     462,   462,   462,  1225,   462,  1225,   462,  1354,   304,   423,
    1185,  1187,  1189,  1286,  1287,  1232,   463,   462,   462,   460,
    1311,   886,  1254,   460,  1242,   898,   389,   372,  1185,  1344,
     856,   856,  1210,  1211,  1208,  1209,   858,    98,    99,   343,
     520,   942,  1240,   940,    35,    38,    45,    46,    93,   163,
     194,   216,   270,   305,   325,   387,   401,   422,   488,   943,
     207,  1185,   207,   900,   901,   902,  1329,    17,   456,   964,
     323,   962,  1355,   856,   131,   142,   984,  1372,   375,   990,
    1372,   460,    49,  1010,  1012,  1265,     9,    58,   246,   482,
    1007,  1008,  1265,  1279,  1281,   126,    65,   411,  1097,  1377,
      27,   117,   754,   223,   321,  1340,  1253,  1185,   207,  1236,
       9,   292,   359,   660,   388,  1030,  1237,  1376,   144,  1035,
       8,   200,  1046,  1281,   132,   297,  1195,  1198,  1200,  1206,
     267,   292,   856,   517,   517,  1071,  1072,  1265,   314,  1264,
    1257,  1077,  1077,  1077,  1077,  1077,  1077,  1077,  1077,  1082,
     295,   300,  1105,  1106,  1107,  1219,  1313,  1206,   249,   422,
    1390,   435,  1368,  1368,  1121,  1376,   422,  1120,  1257,  1281,
    1185,   207,   465,   460,     9,  1142,  1143,  1307,  1145,  1281,
    1121,  1145,  1063,     7,  1322,   709,   769,   465,   404,   399,
     817,   513,   762,   736,   737,  1344,  1285,   731,   717,  1344,
      88,  1332,  1344,   361,   363,  1387,  1387,  1344,  1332,  1344,
     277,  1351,  1344,    22,  1324,   313,   706,  1251,   174,   208,
     629,   451,  1369,  1337,    58,   521,  1386,   598,    17,   456,
    1291,   335,  1289,  1251,     9,   205,   520,   582,   520,     1,
     465,   581,    32,  1288,   847,   848,    47,  1177,  1178,   856,
    1174,  1175,   856,   306,  1352,  1352,  1352,  1344,  1344,   876,
      57,   422,   125,   497,  1344,     8,  1323,  1173,  1226,   462,
    1226,  1315,   448,  1299,   448,  1299,  1246,  1299,  1299,  1299,
    1261,   246,   482,  1299,  1282,   856,   856,  1188,  1189,  1186,
    1187,  1287,  1185,   462,  1226,  1299,  1299,  1268,  1281,  1292,
     903,   904,    34,   286,   287,   288,   353,   480,   481,   485,
    1317,   859,  1344,   257,   399,   132,   159,   161,   825,   826,
    1334,  1344,   125,   497,  1344,  1232,  1233,  1232,  1233,   901,
     315,   843,    89,   367,   513,   963,  1214,   856,  1281,   856,
     513,   991,   992,   993,   994,  1370,   513,  1266,  1268,  1265,
      49,     8,    37,  1013,  1014,  1015,  1008,  1013,   193,   411,
    1093,  1344,   242,  1346,   321,  1232,  1030,   323,  1357,  1357,
     317,   267,   292,  1042,  1257,   222,  1047,  1376,   856,   856,
    1199,  1200,  1198,   267,  1214,  1213,  1071,  1219,  1281,  1220,
    1221,  1222,  1223,  1226,  1112,  1257,  1112,   303,   475,  1190,
    1192,  1194,   337,  1315,  1232,   851,  1266,   320,  1265,   115,
    1146,   450,  1148,   160,   298,  1171,  1201,  1203,  1205,  1207,
     328,  1240,  1271,   709,   771,   465,   404,  1345,   762,   208,
     456,   725,    21,    36,    39,    40,    41,    42,    43,    44,
      45,    75,    77,    78,    79,    80,    81,    82,    83,   121,
     183,   184,   185,   186,   187,   190,   191,   224,   240,   282,
     312,   326,   334,   337,   352,   365,   416,   418,   419,   420,
     446,   492,   493,   494,   506,   732,   733,   734,   737,   738,
     739,   740,   741,   742,   743,   746,   758,   759,   760,   761,
     762,   767,  1344,  1365,    26,   200,   730,  1326,   208,  1288,
     520,   643,  1344,  1324,   520,  1248,  1249,   315,   430,  1383,
     261,  1246,  1250,  1288,   515,  1344,   178,   218,   520,   690,
    1251,     4,    19,    29,   225,   257,   322,   327,   361,   369,
     381,   415,   424,   465,   468,   630,   631,   638,   640,   642,
     644,   645,   646,   647,   650,   651,   652,   653,   654,   656,
     657,   659,  1360,  1377,  1332,  1236,   599,   601,   261,   234,
     552,   205,   234,   552,   465,   848,  1271,  1271,  1271,  1271,
    1271,  1344,  1344,  1212,  1273,  1275,  1288,  1212,  1271,   261,
    1272,  1275,  1290,   462,  1185,   462,   168,   301,   475,   906,
     908,   910,     6,   233,   296,   315,   474,   905,  1343,  1271,
    1354,   257,   399,  1271,  1212,  1212,  1271,  1185,   371,  1185,
     371,  1258,  1259,  1280,  1282,   992,   104,  1333,  1372,  1013,
    1013,  1266,   470,  1342,  1342,  1015,  1014,   230,   511,  1098,
    1246,  1095,  1185,   389,    49,   267,   242,  1048,   221,   241,
     267,   292,   516,   856,   856,   856,   856,  1193,  1194,  1191,
    1192,  1344,  1185,  1185,   507,   852,  1150,  1143,   223,  1339,
      97,  1147,  1339,  1190,   856,   856,  1204,  1205,  1202,  1203,
     257,   259,  1348,   709,   773,   465,   764,   765,  1292,  1285,
     249,   308,   417,   491,  1364,   491,  1364,   491,  1364,   491,
    1364,   491,  1364,   517,  1374,   393,  1362,   127,  1288,  1282,
     237,   247,   393,  1347,  1344,   174,   246,   482,   520,    50,
     249,   250,   718,  1292,   460,   687,   193,   703,  1249,   259,
    1350,   460,  1331,  1339,   175,   182,   397,   487,   512,   514,
     700,   701,  1344,  1344,  1351,  1360,   460,   511,  1373,   412,
    1344,  1330,   115,  1346,  1346,   292,   658,  1288,  1376,   435,
     267,    39,  1328,  1344,   668,   669,  1237,   600,   601,   132,
    1269,  1271,   257,   259,  1389,   856,   856,   856,   909,   910,
     907,   908,  1354,  1281,  1233,  1233,    49,   112,  1013,  1257,
    1257,   346,  1236,   207,   324,  1099,  1285,  1257,  1344,  1049,
    1196,  1198,  1200,  1206,   267,   267,   267,  1281,  1151,   465,
    1281,  1339,  1281,   774,   818,   763,   765,   456,   526,    53,
     750,   460,   747,   740,    26,   735,   410,  1318,  1318,  1354,
       1,    40,    41,    42,    43,    44,   183,   184,   185,   186,
     187,   188,   189,   337,   352,   719,   720,   721,   722,   723,
     741,   742,  1282,   719,  1288,    58,   363,   683,  1245,  1246,
     694,  1288,   422,  1366,   261,   691,  1285,   691,  1344,  1346,
     127,   174,   635,   369,   651,  1344,  1344,  1344,  1344,  1325,
     660,  1344,  1351,   412,   643,   669,   338,   670,    17,   111,
    1281,  1185,  1185,  1257,  1344,  1236,   346,   496,  1281,  1199,
    1197,  1198,    30,   129,   169,   208,  1152,  1153,  1154,  1156,
    1160,  1162,  1163,  1164,  1327,  1337,  1281,   358,   775,   714,
     728,   819,   820,   821,   517,   766,  1375,  1292,  1339,   200,
     748,  1288,   459,  1371,   261,  1330,   719,   465,  1246,    48,
     479,   695,   696,   697,   698,  1376,  1331,   200,   686,  1338,
     127,   357,   412,   639,  1344,   119,   120,   121,   243,   257,
     342,   343,   344,   357,   451,   632,   633,   634,  1250,   431,
     655,  1246,  1246,  1246,  1344,  1288,   601,   465,  1037,  1344,
    1213,    37,  1323,   349,   109,  1238,     1,   715,   821,   465,
     413,   467,   520,  1288,   747,   116,   749,  1250,  1250,   192,
     687,  1288,   655,   261,   637,  1285,   637,     7,   637,   637,
     261,   636,  1285,   426,   466,    33,   170,   272,   648,  1037,
     377,   430,  1367,   132,   433,  1161,  1355,   776,   465,   822,
     465,   460,  1344,   228,   751,  1355,   752,   753,  1327,  1331,
    1308,  1391,  1335,  1344,  1245,   519,   649,   649,  1281,   164,
     168,  1381,     9,  1157,  1158,  1243,     1,   777,   823,  1292,
     752,  1246,   225,   755,   754,  1250,   116,   685,   444,   641,
    1245,   267,   394,   346,  1358,   313,   347,   368,  1159,  1158,
     465,    63,    91,    92,   328,   465,   778,   779,   782,  1344,
    1400,    32,    35,    38,    45,    46,   163,   194,   200,   202,
     213,   216,   248,   257,   270,   312,   325,   354,   380,   387,
     405,   460,   470,   488,   511,   738,   739,   743,   758,   760,
     762,   824,   831,   832,  1344,  1378,   755,  1329,  1346,  1355,
     517,   316,  1355,   313,  1285,  1344,  1344,  1324,   253,   254,
    1349,   791,   208,   180,   780,  1336,  1344,   257,   399,   825,
     826,  1344,  1274,  1352,  1288,    57,  1281,  1281,   208,  1352,
     520,   756,   757,  1344,  1246,     9,   428,   526,   602,   279,
     361,   363,  1385,   173,   230,   238,   324,  1155,  1236,  1269,
    1344,  1324,   783,  1290,   714,   792,   781,  1281,  1271,  1271,
    1344,  1371,  1344,  1344,   757,  1245,  1294,  1385,   784,   257,
     259,  1384,   715,   716,  1281,   275,   336,   472,   477,   827,
     828,   829,  1269,   827,   828,   830,   181,   192,   215,   245,
     785,   786,   787,   788,   789,   790,  1290,   793,  1271,  1271,
     108,   118,  1393,  1344,  1344,    55,    91,  1393,  1394,  1379,
     794,  1344,  1290,  1290,   215,  1344,  1344,   214,   257,   259,
     290,   312,   340,   426,   443,   465,   486,   506,   515,   738,
     743,   744,   758,   760,   762,   795,   796,   800,   801,   804,
     805,   806,   807,   808,   809,   814,   815,   816,  1378,  1379,
    1290,  1290,  1290,   226,  1341,   306,   307,  1353,  1324,   214,
    1288,   517,  1344,  1354,  1344,  1344,  1281,   291,   336,   810,
     811,  1290,   336,   812,   813,  1290,  1353,  1324,  1345,  1344,
     747,  1213,  1262,  1260,  1262,    54,    91,   328,   332,   333,
     376,   391,   392,   797,  1393,  1394,  1395,  1396,  1397,  1398,
    1399,   121,   200,  1288,   811,  1288,   813,  1345,   811,  1371,
    1315,   382,   802,  1262,   192,   192,   215,   192,   215,   180,
     798,  1281,   798,  1262,   749,  1355,   320,   799,   799,    49,
     437,   745,   180,   803,  1281,   328,  1262,  1288
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   529,   531,   530,   532,   532,   533,   533,   534,   534,
     536,   535,   537,   538,   539,   539,   540,   540,   541,   542,
     543,   544,   544,   544,   546,   547,   545,   549,   548,   550,
     550,   551,   551,   552,   552,   553,   553,   554,   554,   554,
     554,   555,   555,   556,   556,   557,   558,   558,   559,   560,
     560,   561,   561,   561,   561,   561,   563,   562,   564,   564,
     565,   565,   567,   566,   568,   568,   568,   568,   569,   569,
     570,   570,   570,   570,   571,   572,   573,   574,   575,   575,
     575,   575,   576,   576,   577,   578,   577,   579,   579,   579,
     580,   580,   581,   581,   581,   581,   582,   582,   583,   583,
     584,   584,   585,   585,   586,   586,   587,   587,   587,   587,
     587,   587,   587,   587,   587,   587,   587,   587,   589,   588,
     590,   590,   590,   590,   591,   591,   592,   593,   593,   595,
     594,   596,   596,   596,   596,   596,   596,   597,   597,   598,
     598,   599,   598,   600,   600,   601,   601,   601,   601,   601,
     601,   602,   602,   603,   604,   604,   605,   606,   606,   607,
     608,   608,   609,   609,   610,   611,   611,   612,   612,   613,
     614,   615,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   623,   624,   624,   625,   625,   626,   626,   628,   627,
     629,   629,   630,   630,   630,   630,   630,   630,   630,   630,
     630,   630,   630,   630,   630,   631,   631,   631,   631,   631,
     632,   632,   632,   633,   633,   633,   633,   634,   634,   635,
     635,   635,   636,   636,   637,   637,   637,   638,   639,   639,
     639,   640,   641,   641,   641,   642,   643,   644,   645,   645,
     645,   647,   646,   648,   648,   648,   649,   649,   649,   649,
     650,   650,   651,   651,   651,   651,   652,   653,   654,   655,
     655,   655,   656,   657,   658,   658,   659,   660,   660,   660,
     661,   661,   661,   662,   662,   663,   663,   664,   665,   665,
     665,   665,   667,   666,   668,   668,   669,   670,   670,   672,
     671,   673,   673,   674,   674,   675,   675,   676,   678,   677,
     677,   679,   679,   680,   680,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   682,   683,   683,   683,
     684,   684,   684,   685,   685,   686,   686,   687,   687,   688,
     689,   689,   690,   690,   691,   691,   692,   693,   694,   694,
     695,   695,   695,   696,   697,   698,   699,   700,   700,   700,
     700,   700,   701,   701,   702,   703,   703,   704,   705,   705,
     706,   706,   707,   708,   707,   709,   710,   709,   711,   711,
     712,   712,   712,   713,   712,   712,   714,   715,   715,   715,
     716,   717,   717,   718,   718,   718,   718,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     720,   720,   721,   721,   722,   722,   722,   723,   723,   724,
     725,   725,   727,   726,   728,   729,   728,   730,   730,   731,
     731,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   733,   734,   735,   735,   736,   736,
     737,   738,   739,   739,   740,   740,   740,   740,   740,   740,
     740,   740,   740,   740,   740,   740,   740,   740,   740,   740,
     740,   740,   740,   740,   740,   740,   740,   740,   740,   740,
     740,   740,   740,   740,   740,   740,   740,   740,   740,   740,
     741,   741,   742,   742,   743,   743,   744,   745,   745,   746,
     746,   747,   747,   748,   748,   749,   749,   750,   750,   751,
     751,   752,   753,   753,   754,   754,   755,   755,   756,   756,
     757,   758,   759,   760,   761,   763,   762,   764,   764,   765,
     765,   766,   766,   767,   767,   768,   769,   768,   770,   771,
     770,   772,   773,   772,   774,   774,   776,   775,   777,   777,
     777,   778,   778,   778,   778,   779,   780,   781,   781,   782,
     783,   783,   783,   784,   784,   785,   785,   785,   785,   785,
     786,   787,   788,   789,   790,   791,   791,   793,   792,   794,
     794,   795,   795,   795,   795,   795,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,   796,   797,   797,
     797,   797,   797,   797,   797,   798,   798,   798,   799,   799,
     800,   801,   802,   802,   803,   803,   804,   805,   806,   807,
     807,   808,   809,   809,   810,   810,   811,   811,   811,   812,
     812,   813,   813,   814,   815,   816,   817,   818,   817,   819,
     819,   820,   820,   821,   822,   821,   821,   823,   823,   824,
     824,   824,   824,   824,   824,   824,   824,   824,   824,   824,
     824,   824,   824,   824,   824,   824,   824,   824,   824,   824,
     824,   824,   824,   824,   824,   824,   824,   824,   824,   824,
     824,   824,   824,   824,   825,   825,   826,   826,   827,   827,
     828,   828,   829,   829,   829,   830,   830,   830,   831,   832,
     833,   834,   835,   833,   836,   833,   837,   838,   837,   839,
     837,   840,   840,   841,   842,   842,   842,   843,   843,   843,
     843,   843,   843,   844,   844,   845,   845,   845,   846,   847,
     846,   848,   848,   849,   849,   849,   849,   849,   851,   850,
     852,   852,   853,   854,   855,   855,   857,   858,   856,   860,
     859,   859,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   863,   862,   865,   864,   864,   864,   864,
     864,   864,   864,   864,   864,   864,   864,   864,   864,   864,
     864,   864,   864,   864,   864,   866,   866,   867,   867,   868,
     868,   869,   869,   869,   869,   870,   870,   871,   871,   871,
     872,   873,   873,   874,   875,   875,   875,   875,   875,   875,
     875,   875,   875,   875,   875,   875,   875,   875,   875,   875,
     875,   875,   875,   875,   875,   875,   875,   875,   875,   875,
     875,   875,   876,   876,   877,   877,   879,   878,   880,   880,
     880,   881,   881,   882,   882,   884,   883,   885,   885,   886,
     886,   888,   887,   889,   889,   890,   891,   891,   893,   892,
     895,   894,   896,   896,   896,   896,   897,   897,   898,   899,
     898,   900,   900,   901,   901,   902,   902,   902,   902,   903,
     903,   903,   903,   903,   904,   904,   905,   905,   906,   906,
     906,   907,   907,   908,   908,   909,   909,   910,   911,   911,
     913,   912,   914,   914,   915,   915,   917,   916,   918,   918,
     919,   919,   919,   919,   919,   921,   920,   922,   923,   923,
     924,   925,   927,   926,   928,   928,   929,   929,   930,   930,
     932,   931,   933,   933,   933,   933,   933,   934,   934,   935,
     935,   937,   936,   938,   938,   939,   939,   940,   940,   940,
     940,   940,   941,   941,   941,   941,   942,   942,   943,   943,
     943,   943,   943,   943,   943,   943,   943,   943,   943,   943,
     943,   943,   943,   943,   943,   944,   944,   946,   945,   947,
     947,   947,   947,   947,   948,   948,   950,   949,   951,   953,
     952,   954,   955,   955,   956,   956,   956,   957,   957,   958,
     958,   959,   960,   961,   961,   962,   962,   963,   963,   963,
     963,   964,   964,   965,   965,   967,   966,   968,   968,   968,
     968,   968,   968,   968,   969,   969,   971,   970,   972,   974,
     973,   975,   977,   976,   978,   979,   979,   980,   982,   981,
     983,   983,   983,   984,   984,   986,   985,   987,   988,   988,
     989,   989,   989,   990,   990,   991,   991,   992,   993,   993,
     993,   993,   993,   993,   993,   994,   994,   996,   995,   997,
     997,   999,   998,  1000,  1001,  1001,  1001,  1002,  1002,  1002,
    1002,  1004,  1003,  1005,  1006,  1007,  1007,  1008,  1008,  1008,
    1008,  1008,  1008,  1009,  1009,  1010,  1010,  1011,  1011,  1011,
    1011,  1011,  1012,  1013,  1013,  1013,  1013,  1013,  1014,  1015,
    1017,  1016,  1019,  1018,  1020,  1020,  1022,  1021,  1023,  1023,
    1024,  1024,  1026,  1025,  1027,  1027,  1028,  1028,  1028,  1028,
    1029,  1029,  1030,  1030,  1030,  1030,  1032,  1031,  1033,  1034,
    1033,  1033,  1035,  1035,  1036,  1036,  1037,  1037,  1038,  1038,
    1038,  1038,  1038,  1039,  1039,  1040,  1040,  1041,  1041,  1042,
    1044,  1043,  1045,  1046,  1046,  1047,  1047,  1047,  1047,  1047,
    1047,  1047,  1048,  1048,  1049,  1049,  1050,  1050,  1051,  1053,
    1052,  1054,  1055,  1057,  1056,  1058,  1059,  1059,  1061,  1060,
    1062,  1063,  1063,  1063,  1064,  1064,  1065,  1067,  1066,  1068,
    1068,  1069,  1069,  1070,  1070,  1071,  1071,  1072,  1073,  1073,
    1075,  1074,  1076,  1076,  1076,  1076,  1076,  1076,  1076,  1077,
    1077,  1078,  1078,  1079,  1080,  1081,  1081,  1082,  1082,  1082,
    1082,  1082,  1082,  1082,  1082,  1083,  1083,  1084,  1085,  1085,
    1086,  1087,  1087,  1088,  1088,  1089,  1091,  1090,  1093,  1092,
    1094,  1094,  1095,  1095,  1096,  1096,  1097,  1097,  1098,  1098,
    1098,  1099,  1099,  1099,  1101,  1100,  1102,  1103,  1103,  1104,
    1104,  1104,  1104,  1105,  1105,  1105,  1105,  1105,  1105,  1106,
    1107,  1107,  1108,  1108,  1110,  1109,  1109,  1111,  1111,  1111,
    1111,  1111,  1112,  1112,  1113,  1113,  1113,  1113,  1115,  1114,
    1116,  1117,  1117,  1118,  1119,  1119,  1120,  1120,  1121,  1121,
    1122,  1122,  1124,  1123,  1125,  1125,  1125,  1126,  1126,  1127,
    1128,  1128,  1130,  1129,  1131,  1131,  1133,  1132,  1134,  1136,
    1135,  1137,  1139,  1138,  1140,  1141,  1141,  1142,  1142,  1143,
    1144,  1144,  1145,  1146,  1146,  1147,  1147,  1148,  1148,  1149,
    1149,  1151,  1150,  1152,  1152,  1152,  1152,  1152,  1153,  1154,
    1154,  1155,  1155,  1155,  1155,  1155,  1156,  1157,  1157,  1158,
    1158,  1158,  1159,  1159,  1159,  1159,  1160,  1161,  1161,  1162,
    1163,  1164,  1164,  1166,  1165,  1167,  1168,  1168,  1169,  1169,
    1169,  1169,  1170,  1170,  1171,  1171,  1171,  1172,  1172,  1173,
    1173,  1173,  1174,  1174,  1175,  1176,  1176,  1177,  1177,  1178,
    1179,  1179,  1180,  1180,  1180,  1181,  1181,  1182,  1183,  1183,
    1184,  1185,  1185,  1185,  1186,  1186,  1187,  1188,  1188,  1189,
    1190,  1190,  1190,  1191,  1191,  1192,  1193,  1193,  1194,  1195,
    1195,  1196,  1196,  1197,  1197,  1198,  1199,  1199,  1200,  1201,
    1201,  1202,  1202,  1203,  1204,  1204,  1205,  1206,  1206,  1207,
    1207,  1208,  1208,  1209,  1210,  1210,  1211,  1212,  1212,  1213,
    1214,  1216,  1215,  1217,  1217,  1217,  1218,  1218,  1218,  1218,
    1218,  1218,  1218,  1218,  1218,  1218,  1218,  1218,  1218,  1218,
    1218,  1218,  1218,  1218,  1218,  1218,  1218,  1218,  1218,  1218,
    1218,  1219,  1219,  1220,  1220,  1221,  1221,  1222,  1223,  1224,
    1224,  1225,  1225,  1225,  1226,  1226,  1226,  1227,  1227,  1227,
    1228,  1228,  1229,  1229,  1229,  1230,  1230,  1231,  1231,  1231,
    1231,  1231,  1231,  1232,  1232,  1233,  1234,  1235,  1236,  1236,
    1237,  1238,  1239,  1239,  1240,  1241,  1241,  1242,  1243,  1243,
    1243,  1244,  1245,  1245,  1246,  1247,  1248,  1248,  1249,  1250,
    1250,  1251,  1251,  1252,  1253,  1253,  1254,  1254,  1254,  1255,
    1255,  1256,  1256,  1257,  1257,  1258,  1258,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1259,  1259,  1260,  1260,  1261,  1261,
    1261,  1262,  1262,  1262,  1262,  1262,  1262,  1262,  1263,  1263,
    1264,  1264,  1265,  1266,  1267,  1267,  1267,  1268,  1268,  1269,
    1269,  1270,  1270,  1270,  1271,  1271,  1271,  1272,  1272,  1273,
    1273,  1274,  1274,  1274,  1275,  1276,  1277,  1277,  1278,  1279,
    1280,  1281,  1282,  1282,  1282,  1282,  1283,  1284,  1284,  1284,
    1284,  1285,  1285,  1286,  1287,  1287,  1288,  1289,  1290,  1291,
    1291,  1291,  1291,  1291,  1291,  1291,  1292,  1292,  1293,  1293,
    1294,  1294,  1294,  1294,  1294,  1294,  1294,  1295,  1295,  1295,
    1295,  1295,  1295,  1295,  1295,  1295,  1295,  1295,  1295,  1296,
    1296,  1297,  1297,  1297,  1298,  1298,  1298,  1298,  1299,  1299,
    1299,  1300,  1300,  1300,  1301,  1301,  1301,  1302,  1302,  1303,
    1303,  1304,  1304,  1305,  1305,  1306,  1307,  1307,  1308,  1308,
    1309,  1309,  1310,  1310,  1311,  1311,  1312,  1312,  1312,  1313,
    1313,  1314,  1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,
    1317,  1317,  1317,  1317,  1317,  1317,  1318,  1318,  1319,  1319,
    1319,  1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,
    1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,
    1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,
    1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,
    1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,  1320,
    1321,  1321,  1321,  1321,  1321,  1321,  1321,  1321,  1321,  1321,
    1321,  1321,  1321,  1321,  1321,  1321,  1321,  1321,  1321,  1321,
    1322,  1322,  1323,  1323,  1324,  1324,  1325,  1325,  1326,  1326,
    1327,  1327,  1328,  1328,  1329,  1329,  1330,  1330,  1331,  1331,
    1332,  1332,  1333,  1333,  1334,  1334,  1335,  1335,  1336,  1336,
    1337,  1337,  1338,  1338,  1339,  1339,  1340,  1340,  1340,  1341,
    1341,  1342,  1342,  1343,  1343,  1344,  1344,  1345,  1345,  1345,
    1346,  1346,  1347,  1347,  1347,  1348,  1348,  1348,  1349,  1349,
    1349,  1350,  1350,  1351,  1351,  1352,  1352,  1353,  1353,  1353,
    1354,  1354,  1355,  1355,  1356,  1356,  1356,  1356,  1357,  1357,
    1358,  1358,  1359,  1359,  1360,  1360,  1361,  1361,  1361,  1362,
    1362,  1363,  1363,  1364,  1364,  1365,  1365,  1365,  1366,  1366,
    1367,  1367,  1368,  1368,  1369,  1369,  1370,  1370,  1371,  1371,
    1372,  1372,  1373,  1373,  1373,  1374,  1374,  1375,  1375,  1376,
    1376,  1377,  1377,  1378,  1378,  1379,  1379,  1380,  1380,  1381,
    1381,  1382,  1382,  1383,  1383,  1384,  1384,  1385,  1385,  1386,
    1386,  1387,  1387,  1388,  1388,  1389,  1389,  1390,  1390,  1391,
    1391,  1392,  1392,  1392,  1393,  1393,  1394,  1394,  1395,  1395,
    1396,  1396,  1397,  1397,  1398,  1398,  1399,  1399,  1400,  1400
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
       1,     1,     1,     1,     1,     1,     4,     1,     1,     5,
       5,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     2,     1,     2,     1,     1,
       1,     1,     0,     1,     1,     0,     1,     1,     3,     2,
       0,     0,     0,     9,     0,     4,     0,     0,     3,     0,
       3,     1,     2,     4,     0,     2,     2,     0,     3,     3,
       4,     4,     3,     0,     1,     0,     2,     2,     0,     0,
       7,     0,     2,     1,     1,     2,     1,     1,     0,     6,
       0,     2,     2,     1,     0,     1,     0,     0,     3,     0,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     4,     0,     4,     3,     3,     4,
       3,     4,     3,     3,     4,     4,     3,     4,     3,     4,
       5,     3,     4,     3,     3,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     2,     1,     2,     2,     2,     2,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     4,     3,     1,     2,     1,     1,     3,     3,     3,
       3,     3,     1,     1,     0,     1,     0,     4,     4,     5,
       6,     0,     2,     0,     1,     0,     3,     3,     4,     0,
       2,     0,     3,     1,     2,     4,     0,     2,     0,     4,
       0,     6,     0,     1,     1,     1,     1,     1,     0,     0,
       3,     1,     2,     2,     3,     0,     2,     2,     2,     0,
       3,     2,     2,     4,     1,     1,     1,     1,     0,     2,
       2,     0,     1,     2,     2,     0,     1,     2,     0,     1,
       0,     3,     1,     2,     1,     1,     0,     3,     2,     3,
       0,     1,     3,     3,     2,     0,     4,     4,     0,     1,
       1,     1,     0,     4,     3,     2,     1,     2,     0,     1,
       0,     4,     3,     3,     3,     3,     2,     2,     1,     1,
       2,     0,     3,     1,     1,     1,     2,     1,     2,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     2,
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
       1,     1,     4,     0,     1,     1,     2,     2,     3,     3,
       0,     3,     0,     3,     3,     4,     0,     4,     4,     6,
       0,     1,     0,     3,     4,     5,     1,     1,     1,     1,
       0,     3,     0,     3,     2,     1,     0,     3,     2,     0,
       4,     2,     0,     1,     1,     1,     1,     3,     0,     2,
       1,     3,     3,     0,     3,     1,     1,     1,     3,     7,
       0,     4,     7,     0,     2,     0,     2,     2,     3,     3,
       3,     2,     0,     3,     1,     1,     0,     1,     1,     0,
       3,     2,     1,     0,     4,     4,     0,     1,     0,     4,
       4,     0,     2,     3,     0,     1,     1,     0,     4,     4,
       6,     0,     2,     0,     2,     1,     2,     3,     0,     1,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     3,     4,     1,     2,
       3,     1,     2,     3,     3,     4,     0,     3,     0,     7,
       0,     5,     0,     2,     0,     2,     0,     3,     0,     2,
       4,     0,     2,     4,     0,     4,     4,     0,     3,     0,
       4,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       2,     1,     0,     1,     0,     4,     2,     0,     2,     1,
       4,     4,     0,     1,     1,     1,     1,     1,     0,     4,
       5,     1,     2,     2,     0,     3,     1,     1,     0,     4,
       0,     1,     0,     4,     4,     6,     6,     0,     1,     2,
       0,     1,     0,     3,     1,     2,     0,     3,     5,     0,
       3,     2,     0,     4,     6,     0,     3,     1,     3,     2,
       2,     2,     3,     0,     3,     0,     3,     0,     3,     0,
       1,     0,     3,     1,     1,     1,     1,     1,     7,     0,
       1,     1,     1,     1,     1,     1,     4,     1,     2,     1,
       2,     3,     0,     1,     2,     1,     3,     1,     1,     4,
       1,     1,     1,     0,     4,     5,     0,     2,     0,     4,
       3,     3,     1,     1,     0,     1,     1,     0,     1,     0,
       2,     2,     0,     1,     2,     1,     1,     0,     1,     2,
       1,     1,     0,     2,     2,     0,     1,     2,     0,     1,
       2,     0,     2,     2,     0,     1,     2,     0,     1,     2,
       0,     2,     2,     0,     1,     2,     0,     1,     2,     2,
       2,     2,     2,     0,     1,     2,     0,     1,     2,     2,
       2,     0,     1,     2,     0,     1,     2,     0,     1,     2,
       2,     0,     1,     2,     0,     1,     2,     0,     2,     1,
       1,     0,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     1,     1,     3,     3,     1,     3,     3,     1,
       3,     1,     2,     2,     1,     3,     1,     1,     3,     1,
       3,     1,     3,     1,     2,     2,     1,     1,     1,     2,
       1,     1,     1,     2,     1,     0,     2,     1,     1,     1,
       3,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     3,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     4,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     2,
       1,     1,     3,     3,     4,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     5,
       5,     4,     5,     5,     5,     5,     5,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       5,     0,     3,     2,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     0,     0,     1,     0,     1,
       0,     1,     0,     2,     0,     2,     0,     1,     1,     0,
       1,     0,     1,     2,     0,     2,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     2,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     2,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       0,     1,     0,     1,     1,     0,     1,     1,     0,     2,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       0,     1,     0,     1,     0,     2,     1,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     2,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     1,     0,     1,     0,     3,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     2,     1,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     2
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
#line 2150 "parser.y" /* yacc.c:1646  */
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
#line 7076 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 2162 "parser.y" /* yacc.c:1646  */
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
#line 7099 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 2198 "parser.y" /* yacc.c:1646  */
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
#line 7123 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 2249 "parser.y" /* yacc.c:1646  */
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[-1]), CB_PROGRAM_TYPE);
  }
#line 7132 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 2257 "parser.y" /* yacc.c:1646  */
    {
	  clean_up_program ((yyvsp[-1]), CB_FUNCTION_TYPE);
  }
#line 7140 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 2280 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 7148 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 2284 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}

	set_up_prototype ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE, 1);
  }
#line 7160 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 2292 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 7169 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 2300 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 7177 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 2304 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	set_up_prototype ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE, 1);
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 7190 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 2316 "parser.y" /* yacc.c:1646  */
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
#line 7205 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 2335 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7211 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 2336 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7217 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 2345 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7230 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 2354 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7243 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 2364 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING (_("CALL prototypes"));
  }
#line 7251 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 2376 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 7259 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 2380 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 7267 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 2396 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 7275 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 2413 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 7287 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 2427 "parser.y" /* yacc.c:1646  */
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("phrases in non-standard order"));
	}
  }
#line 7297 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 2439 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
#line 7307 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 2454 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 7319 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 2467 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 7329 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2496 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 7337 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2504 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 7345 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2511 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 7353 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 2518 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 7365 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 2529 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7373 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 2533 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7381 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 2537 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7389 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2541 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7397 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 2555 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 7406 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2560 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 7414 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 2568 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7422 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2580 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 7430 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 2584 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) != cb_error_node) {
		set_up_prototype ((yyvsp[-1]), (yyvsp[0]), CB_FUNCTION_TYPE, 0);
	}
  }
#line 7440 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2591 "parser.y" /* yacc.c:1646  */
    {
	  if ((yyvsp[-1]) != cb_error_node
	      && cb_verify (cb_program_prototypes, _("PROGRAM phrase"))) {
		set_up_prototype ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE, 0);
	}
  }
#line 7451 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 2601 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7460 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2606 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7469 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 2617 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 7483 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2662 "parser.y" /* yacc.c:1646  */
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
#line 7511 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 2690 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("invalid %s clause"), "");
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 7525 "parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 2700 "parser.y" /* yacc.c:1646  */
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
#line 7542 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2713 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 7554 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2729 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 7562 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2736 "parser.y" /* yacc.c:1646  */
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
#line 7581 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2751 "parser.y" /* yacc.c:1646  */
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
#line 7600 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2771 "parser.y" /* yacc.c:1646  */
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
#line 7617 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2784 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 7629 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2795 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 7639 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2801 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7649 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2807 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7659 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2813 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 7669 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2819 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7679 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2825 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 7690 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2835 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 7698 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2839 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7706 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2846 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7714 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2850 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 7722 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2854 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 7730 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2858 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 7738 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2865 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7746 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2869 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 7754 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2875 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7760 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2876 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7766 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2877 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7772 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2878 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 7778 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2879 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 7784 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2880 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 7790 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2884 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7796 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2885 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7802 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2893 "parser.y" /* yacc.c:1646  */
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
#line 7817 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2907 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7825 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2911 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7833 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2919 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7841 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2926 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7849 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2930 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7861 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2941 "parser.y" /* yacc.c:1646  */
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
#line 7882 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2961 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7894 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2969 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7906 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2979 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7912 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2980 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7918 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2987 "parser.y" /* yacc.c:1646  */
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
#line 7940 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 3007 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7946 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 3008 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7952 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 3013 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7960 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 3017 "parser.y" /* yacc.c:1646  */
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
#line 7980 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 3038 "parser.y" /* yacc.c:1646  */
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
#line 8002 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 3061 "parser.y" /* yacc.c:1646  */
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
#line 8076 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 3135 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8084 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 3139 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8092 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 3148 "parser.y" /* yacc.c:1646  */
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
#line 8109 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 3167 "parser.y" /* yacc.c:1646  */
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
#line 8124 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 3183 "parser.y" /* yacc.c:1646  */
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
#line 8140 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 3201 "parser.y" /* yacc.c:1646  */
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
#line 8156 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 3219 "parser.y" /* yacc.c:1646  */
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
#line 8172 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 3236 "parser.y" /* yacc.c:1646  */
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
#line 8188 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 3257 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 8196 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 3264 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 8205 "parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 3272 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 8215 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 3281 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 8225 "parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 3296 "parser.y" /* yacc.c:1646  */
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
#line 8251 "parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 3318 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-3]))) {
		validate_file (current_file, (yyvsp[-3]));
	}
  }
#line 8261 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 3350 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 8271 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 3356 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 8285 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 3366 "parser.y" /* yacc.c:1646  */
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
#line 8302 "parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 3379 "parser.y" /* yacc.c:1646  */
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
#line 8319 "parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 3392 "parser.y" /* yacc.c:1646  */
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
#line 8347 "parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 3418 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8353 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 3419 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8359 "parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 3420 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int4; }
#line 8365 "parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 3432 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 8373 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 3439 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 8381 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 3452 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8389 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 3464 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 8398 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3471 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 8404 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3472 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 8410 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3473 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 8416 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 3481 "parser.y" /* yacc.c:1646  */
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
#line 8441 "parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 3504 "parser.y" /* yacc.c:1646  */
    { }
#line 8447 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 3507 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN ALL");
  }
#line 8455 "parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 3512 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 8463 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 3522 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	CB_PENDING ("COLLATING SEQUENCE");
  }
#line 8472 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 3530 "parser.y" /* yacc.c:1646  */
    {
	  if (CB_ALPHABET_NAME_P (cb_ref ((yyvsp[0])))) {
		  (yyval) = (yyvsp[0]);
	  } else {
		  cb_error_x ((yyvsp[0]), _("'%s' is not an alphabet-name"),
			      cb_name ((yyvsp[0])));
		  (yyval) = cb_error_node;
	  }
  }
#line 8486 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 3545 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 8495 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 3560 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 8503 "parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 3568 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 8512 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 3573 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 8521 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 3578 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 8530 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 3587 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 8538 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 3591 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	CB_PENDING ("WITH ROLLBACK");
  }
#line 8547 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 3607 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 8556 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3612 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 8565 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3617 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 8574 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3622 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 8583 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3633 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 8592 "parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 3644 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 8600 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 3654 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8609 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3661 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8615 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 3662 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8621 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3663 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8627 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 3670 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8636 "parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 3681 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 8644 "parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 3695 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 8653 "parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 3702 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8659 "parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 3703 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 8665 "parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 3704 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8671 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 3713 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8679 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3732 "parser.y" /* yacc.c:1646  */
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
#line 8708 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3759 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8714 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3760 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8720 "parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 3761 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8726 "parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 3762 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8732 "parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 3769 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 8741 "parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 3774 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 8753 "parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 3803 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 8761 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3811 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 8769 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3818 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 8777 "parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 3827 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 8787 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3841 "parser.y" /* yacc.c:1646  */
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
#line 8805 "parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 3860 "parser.y" /* yacc.c:1646  */
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
#line 8825 "parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 3877 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8833 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 3884 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8841 "parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 3888 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8849 "parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 3899 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("file cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8863 "parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 3909 "parser.y" /* yacc.c:1646  */
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
#line 8882 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3939 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 8891 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3952 "parser.y" /* yacc.c:1646  */
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
#line 8915 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3972 "parser.y" /* yacc.c:1646  */
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
#line 8953 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 4007 "parser.y" /* yacc.c:1646  */
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
#line 8985 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 4038 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8993 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 4044 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8999 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 4045 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9005 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 4049 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9011 "parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 4050 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9017 "parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 4058 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 9026 "parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 4069 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 9035 "parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 4074 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 9047 "parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 4097 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 9056 "parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 4109 "parser.y" /* yacc.c:1646  */
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
#line 9075 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 4137 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 9083 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 4144 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 9091 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 4151 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 9099 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 4160 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 9109 "parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 4173 "parser.y" /* yacc.c:1646  */
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("RECORDING MODE U or S can only be used with RECORD SEQUENTIAL files"));
	}
  }
#line 9119 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 4189 "parser.y" /* yacc.c:1646  */
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
#line 9156 "parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 4225 "parser.y" /* yacc.c:1646  */
    {
	  if (warningopt) {
		  CB_PENDING ("FOR sub-records");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[0]));
  }
#line 9168 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 4238 "parser.y" /* yacc.c:1646  */
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
#line 9184 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 4258 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9198 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 4268 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9211 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 4283 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 9221 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 4289 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 9231 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 4298 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9239 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 4301 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 9249 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 4307 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 9262 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 4327 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9272 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 4333 "parser.y" /* yacc.c:1646  */
    {
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
#line 9285 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 4342 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9299 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 4355 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9307 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 4362 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9317 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 4368 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9327 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 4378 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 9337 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 4387 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 9345 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 4391 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 9358 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 4402 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9364 "parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 4403 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9370 "parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 4404 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9376 "parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 4405 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9382 "parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 4410 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9390 "parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 4414 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 9398 "parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 4418 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 9406 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 4422 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 9414 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 4426 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9422 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 4430 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 9430 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 4434 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 9438 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 4438 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 9446 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 4442 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 9454 "parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 4446 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 9462 "parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 4450 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9470 "parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 4454 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 9478 "parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 4458 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9490 "parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4490 "parser.y" /* yacc.c:1646  */
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
#line 9515 "parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4514 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9523 "parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4518 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]) == cb_error_node ? NULL : (yyvsp[0]);
  }
#line 9531 "parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4525 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9541 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4531 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_88_item (current_field);
  }
#line 9549 "parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4538 "parser.y" /* yacc.c:1646  */
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
#line 9576 "parser.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4561 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9586 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4567 "parser.y" /* yacc.c:1646  */
    {
	/* Reset to last non-78 item */
	current_field = cb_validate_78_item (current_field, 0);
  }
#line 9595 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4575 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9603 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4579 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("CONSTANT FROM");
	(yyval) = NULL;
  }
#line 9612 "parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4587 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 9621 "parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 4593 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 9630 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4620 "parser.y" /* yacc.c:1646  */
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
#line 9652 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4644 "parser.y" /* yacc.c:1646  */
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
#line 9680 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4671 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 9688 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4675 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 9696 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4688 "parser.y" /* yacc.c:1646  */
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
#line 9719 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4713 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 9728 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4729 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9736 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4733 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9744 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4737 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 9752 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4741 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 9760 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4745 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9768 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4749 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9776 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4753 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 9784 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4757 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 9792 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4761 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 9800 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4765 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 9808 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4769 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 9816 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4773 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9824 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4777 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9833 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4782 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9842 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4787 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9850 "parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4791 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9858 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4795 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 9870 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4803 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9878 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4807 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9886 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4811 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 9898 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4819 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 9906 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4823 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9914 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4827 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9922 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4831 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9930 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4835 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9938 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4839 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9946 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4843 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9954 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4847 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9962 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4851 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 9974 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4859 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 9986 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4867 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9994 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4871 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 10002 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4875 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 10010 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4879 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 10018 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4883 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 10026 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4887 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	CB_UNFINISHED ("USAGE NATIONAL");
  }
#line 10035 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4907 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 10046 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4914 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 10057 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4928 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->depending && !((yyvsp[-3]))) {
		cb_verify (cb_odo_without_to, _("ODO without TO clause"));
	}
	current_field->occurs_min = (yyvsp[-3]) ? cb_get_int ((yyvsp[-4])) : 1;
	current_field->occurs_max = (yyvsp[-3]) ? cb_get_int ((yyvsp[-3])) : cb_get_int ((yyvsp[-4]));
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	current_field->flag_occurs = 1;
  }
#line 10076 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4946 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 10084 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4956 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->indexes == COB_MAX_SUBSCRIPTS) {
		cb_error (_("maximum OCCURS depth exceeded (%d)"),
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
			cb_error (_("OCCURS TO must be greater than OCCURS FROM"));
		}
	} else {
		current_field->occurs_min = 1;
		current_field->occurs_max = cb_get_int ((yyvsp[-5]));
		if (current_field->depending) {
			cb_verify (cb_odo_without_to, _("ODO without TO clause"));
		}
	}
	current_field->flag_occurs = 1;
  }
#line 10119 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4988 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->indexes == COB_MAX_SUBSCRIPTS) {
		cb_error (_("maximum OCCURS depth exceeded (%d)"),
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
			cb_error (_("OCCURS TO must be greater than OCCURS FROM"));
		}
	} else {
		current_field->occurs_max = 0;
	}
	CB_PENDING("OCCURS DYNAMIC");
	current_field->flag_occurs = 1;
  }
#line 10149 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 5016 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10155 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 5017 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10161 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 5021 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10167 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 5022 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10173 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 5027 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 10181 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 5034 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 10190 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 5042 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 10198 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 5049 "parser.y" /* yacc.c:1646  */
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
#line 10223 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 5072 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10229 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 5075 "parser.y" /* yacc.c:1646  */
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
#line 10246 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 5090 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 10252 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 5091 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 10258 "parser.c" /* yacc.c:1646  */
    break;

  case 507:
#line 5096 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 10266 "parser.c" /* yacc.c:1646  */
    break;

  case 508:
#line 5102 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10272 "parser.c" /* yacc.c:1646  */
    break;

  case 509:
#line 5104 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10278 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 5109 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 10287 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 5120 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 10296 "parser.c" /* yacc.c:1646  */
    break;

  case 512:
#line 5131 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 10305 "parser.c" /* yacc.c:1646  */
    break;

  case 513:
#line 5142 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 10314 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 5153 "parser.y" /* yacc.c:1646  */
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
#line 10341 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 5181 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 10350 "parser.c" /* yacc.c:1646  */
    break;

  case 517:
#line 5189 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10356 "parser.c" /* yacc.c:1646  */
    break;

  case 518:
#line 5190 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10362 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5194 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10368 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5195 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 10374 "parser.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5200 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 10385 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5212 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 10398 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5221 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY NUMERIC");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 10412 "parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5236 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 10425 "parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 5245 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10435 "parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5257 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 10445 "parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5263 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10455 "parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5274 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 10465 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5290 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 10478 "parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5305 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 10486 "parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5312 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 10495 "parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5317 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 10503 "parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5328 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 10511 "parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5347 "parser.y" /* yacc.c:1646  */
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
#line 10548 "parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5383 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 10556 "parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5387 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 10565 "parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5392 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 10573 "parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5412 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 10581 "parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5419 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 10589 "parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5426 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 10597 "parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5433 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 10605 "parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5440 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 10613 "parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 5451 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 10621 "parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 5482 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 10629 "parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5508 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10637 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5515 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 10645 "parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5531 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 10653 "parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5542 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 10661 "parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5554 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 10669 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5587 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 10677 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5594 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 10685 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5601 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10693 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5610 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10704 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5617 "parser.y" /* yacc.c:1646  */
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
#line 10720 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5642 "parser.y" /* yacc.c:1646  */
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
#line 10744 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5662 "parser.y" /* yacc.c:1646  */
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
#line 10788 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5702 "parser.y" /* yacc.c:1646  */
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
#line 10808 "parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 5725 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
					 "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10817 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5730 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
					 "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10826 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5735 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10834 "parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 5739 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10842 "parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 5743 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
					 "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10851 "parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 5748 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
					 "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10860 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5753 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
					 "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10869 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5758 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
					 "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10878 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5763 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10886 "parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 5767 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10894 "parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 5771 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	CB_PENDING ("OVERLINE");
  }
#line 10903 "parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 5776 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	CB_PENDING ("GRID");
  }
#line 10912 "parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 5781 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	CB_PENDING ("LEFTLINE");
  }
#line 10921 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5786 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10929 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5790 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10937 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5794 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10945 "parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 5798 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10953 "parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 5802 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10962 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5807 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10970 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5811 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10978 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5815 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10987 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5820 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10996 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5825 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 11005 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5830 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 11014 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5843 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 11027 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5852 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 11036 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5857 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 11048 "parser.c" /* yacc.c:1646  */
    break;

  case 682:
#line 5888 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 11056 "parser.c" /* yacc.c:1646  */
    break;

  case 683:
#line 5892 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 11064 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5896 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 11072 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5903 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 11080 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5907 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 11088 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5911 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 11096 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5919 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 11108 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5930 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 11116 "parser.c" /* yacc.c:1646  */
    break;

  case 691:
#line 5939 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 11130 "parser.c" /* yacc.c:1646  */
    break;

  case 692:
#line 5949 "parser.y" /* yacc.c:1646  */
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
#line 11146 "parser.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5961 "parser.y" /* yacc.c:1646  */
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
#line 11165 "parser.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5976 "parser.y" /* yacc.c:1646  */
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
#line 11198 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 6009 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11206 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 6013 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11215 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 6018 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11227 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 6026 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 11240 "parser.c" /* yacc.c:1646  */
    break;

  case 700:
#line 6035 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11252 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 6045 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11258 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 6047 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11264 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 6052 "parser.y" /* yacc.c:1646  */
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
#line 11288 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 6076 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11296 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 6080 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		CB_UNFINISHED (_("parameters passed BY VALUE"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11309 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 6093 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 11321 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 6101 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 11333 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 6109 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 11345 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 6117 "parser.y" /* yacc.c:1646  */
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
#line 11378 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 6146 "parser.y" /* yacc.c:1646  */
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
#line 11411 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 6178 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 11419 "parser.c" /* yacc.c:1646  */
    break;

  case 714:
#line 6182 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 11432 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 6194 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11442 "parser.c" /* yacc.c:1646  */
    break;

  case 716:
#line 6200 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main) {
		cb_error (_("RETURNING clause cannot be OMITTED for main program"));
	}
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause cannot be OMITTED for a FUNCTION"));
	}
	current_program->flag_void = 1;
  }
#line 11456 "parser.c" /* yacc.c:1646  */
    break;

  case 717:
#line 6210 "parser.y" /* yacc.c:1646  */
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
#line 11489 "parser.c" /* yacc.c:1646  */
    break;

  case 719:
#line 6242 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11498 "parser.c" /* yacc.c:1646  */
    break;

  case 720:
#line 6248 "parser.y" /* yacc.c:1646  */
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
#line 11528 "parser.c" /* yacc.c:1646  */
    break;

  case 725:
#line 6286 "parser.y" /* yacc.c:1646  */
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
#line 11549 "parser.c" /* yacc.c:1646  */
    break;

  case 727:
#line 6304 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11557 "parser.c" /* yacc.c:1646  */
    break;

  case 728:
#line 6314 "parser.y" /* yacc.c:1646  */
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
#line 11605 "parser.c" /* yacc.c:1646  */
    break;

  case 729:
#line 6358 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11613 "parser.c" /* yacc.c:1646  */
    break;

  case 732:
#line 6369 "parser.y" /* yacc.c:1646  */
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
#line 11662 "parser.c" /* yacc.c:1646  */
    break;

  case 733:
#line 6417 "parser.y" /* yacc.c:1646  */
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
#line 11682 "parser.c" /* yacc.c:1646  */
    break;

  case 734:
#line 6436 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11690 "parser.c" /* yacc.c:1646  */
    break;

  case 735:
#line 6440 "parser.y" /* yacc.c:1646  */
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
#line 11706 "parser.c" /* yacc.c:1646  */
    break;

  case 736:
#line 6458 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11716 "parser.c" /* yacc.c:1646  */
    break;

  case 737:
#line 6463 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11725 "parser.c" /* yacc.c:1646  */
    break;

  case 738:
#line 6468 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11735 "parser.c" /* yacc.c:1646  */
    break;

  case 739:
#line 6476 "parser.y" /* yacc.c:1646  */
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
#line 11766 "parser.c" /* yacc.c:1646  */
    break;

  case 740:
#line 6503 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11774 "parser.c" /* yacc.c:1646  */
    break;

  case 741:
#line 6507 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11782 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 6563 "parser.y" /* yacc.c:1646  */
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
#line 11800 "parser.c" /* yacc.c:1646  */
    break;

  case 792:
#line 6577 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11809 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 6588 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	cobc_cs_check = CB_CS_ACCEPT;
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}
  }
#line 11824 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 6604 "parser.y" /* yacc.c:1646  */
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
#line 11834 "parser.c" /* yacc.c:1646  */
    break;

  case 796:
#line 6610 "parser.y" /* yacc.c:1646  */
    {
	/* Check for invalid use of screen clauses */
	  if (current_statement->attr_ptr
	      || (!is_screen_field ((yyvsp[-3])) && line_column)) {
		  cb_verify_x ((yyvsp[-3]), cb_accept_display_extensions,
			       _("non-standard ACCEPT"));
	  }

	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-3]), line_column, current_statement->attr_ptr);
  }
#line 11850 "parser.c" /* yacc.c:1646  */
    break;

  case 797:
#line 6622 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11858 "parser.c" /* yacc.c:1646  */
    break;

  case 798:
#line 6626 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11866 "parser.c" /* yacc.c:1646  */
    break;

  case 799:
#line 6630 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11875 "parser.c" /* yacc.c:1646  */
    break;

  case 800:
#line 6635 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11884 "parser.c" /* yacc.c:1646  */
    break;

  case 801:
#line 6640 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 11893 "parser.c" /* yacc.c:1646  */
    break;

  case 802:
#line 6645 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 11902 "parser.c" /* yacc.c:1646  */
    break;

  case 803:
#line 6650 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 11910 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6654 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 11918 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 6658 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 11926 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6662 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 11934 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6666 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11943 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6671 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11951 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6675 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11959 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6679 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 11967 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6683 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 11975 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6687 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11983 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6691 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11991 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6695 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11999 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6703 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12007 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6721 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_1, &check_duplicate);
  }
#line 12015 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6725 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_2, &check_duplicate);
  }
#line 12023 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6738 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict ("LINE", SYN_CLAUSE_1,
				  _("AT screen-location"), SYN_CLAUSE_3,
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
#line 12043 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6754 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict ("COLUMN", SYN_CLAUSE_2,
				  _("AT screen-location"), SYN_CLAUSE_3,
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
#line 12063 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6770 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				  _("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				  &check_line_col_duplicate);

	cb_verify (cb_accept_display_extensions, "AT clause");

	line_column = (yyvsp[0]);
  }
#line 12077 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6782 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12083 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6786 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12089 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6787 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12095 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6792 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12103 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6799 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 12111 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6803 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 12121 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6809 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12129 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6813 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12137 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6817 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("ACCEPT CONVERSION");
  }
#line 12145 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6821 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 12153 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6825 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 12163 "parser.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6831 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 12171 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6835 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 12179 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6839 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 12189 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6845 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 12197 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6849 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12205 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6853 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 12213 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6857 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 12221 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6861 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 12229 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6865 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12237 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6869 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 12245 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6873 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12253 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6877 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12261 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6881 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12269 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6885 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 12279 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6891 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 12287 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6895 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 12295 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6899 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12303 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6903 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12311 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6907 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12319 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6911 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12327 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6915 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12335 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6927 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 12343 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6931 "parser.y" /* yacc.c:1646  */
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
#line 12358 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6948 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 12366 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6957 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 12374 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6961 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 12382 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6965 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 12390 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6972 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12398 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6979 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 12406 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 6983 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 12414 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6993 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12423 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 7002 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 12431 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 7006 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12444 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 7017 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12450 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 7018 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12456 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 7026 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER");
  }
#line 12465 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 7040 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12473 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 7052 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
	cobc_allow_program_name = 1;
  }
#line 12484 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 7064 "parser.y" /* yacc.c:1646  */
    {
	cobc_allow_program_name = 0;
  }
#line 12492 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 7070 "parser.y" /* yacc.c:1646  */
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
#line 12520 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 7097 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12529 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 7102 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12538 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 7107 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12547 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 7112 "parser.y" /* yacc.c:1646  */
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
#line 12568 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 7133 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
#line 12576 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 7140 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12584 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 7144 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12593 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 7149 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12606 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 7160 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12612 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 7162 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12618 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 7167 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed when parameters are passed BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12630 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 7175 "parser.y" /* yacc.c:1646  */
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
#line 12656 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 7201 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 12664 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 7205 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 12677 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 7214 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 12690 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 7226 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12698 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 7230 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12706 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 7234 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12714 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 7238 "parser.y" /* yacc.c:1646  */
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
#line 12723 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 7243 "parser.y" /* yacc.c:1646  */
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
#line 12747 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 7276 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR (NULL, NULL);
  }
#line 12755 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 7280 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12763 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 7284 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 12775 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 7295 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12783 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 7299 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12791 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 7306 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12799 "parser.c" /* yacc.c:1646  */
    break;

  case 924:
#line 7310 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW");
	(yyval) = (yyvsp[0]);
  }
#line 12808 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 7318 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12816 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 7322 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12824 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 7329 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12832 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 7336 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 12840 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 7340 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 12848 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 7350 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
	cobc_allow_program_name = 1;
  }
#line 12857 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 7355 "parser.y" /* yacc.c:1646  */
    {
	cobc_allow_program_name = 0;
  }
#line 12865 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 7362 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12873 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 7366 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12881 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 7374 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
#line 12889 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 7383 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 12897 "parser.c" /* yacc.c:1646  */
    break;

  case 938:
#line 7391 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12906 "parser.c" /* yacc.c:1646  */
    break;

  case 939:
#line 7396 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12915 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 7403 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 12921 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 7404 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 12927 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 7405 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 12933 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 7406 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 12939 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 7407 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 12945 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 7415 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 12953 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 7424 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 12961 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 7431 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 12969 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 7435 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 12977 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 7445 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 12986 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 7456 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 13001 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 7473 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 13009 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 7482 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 13017 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 7490 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 13026 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7495 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 13035 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7503 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 13043 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7507 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 13051 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7517 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
	display_type = UNKNOWN_DISPLAY;
	is_first_display_item = 1;
  }
#line 13062 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7529 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 13070 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7533 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 13078 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 7537 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 13086 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7541 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 13094 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 7549 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) != NULL) {
		error_if_different_display_type ((yyvsp[0]), NULL, NULL, NULL);
		cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 0,
				 display_type);
	}
  }
#line 13106 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 7557 "parser.y" /* yacc.c:1646  */
    {
	set_display_type ((yyvsp[0]), NULL, NULL, NULL);
	cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 1,
			 display_type);
  }
#line 13116 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 7571 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 13128 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7579 "parser.y" /* yacc.c:1646  */
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
#line 13166 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7616 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13174 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7620 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
#line 13183 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 7633 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 13191 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 7637 "parser.y" /* yacc.c:1646  */
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 13200 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 7642 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 13208 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 7651 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 13216 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 7655 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_name ((yyvsp[0]));
  }
#line 13224 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7659 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_int0;
  }
#line 13232 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7663 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_null;
  }
#line 13240 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7675 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 13248 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7679 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 13258 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7685 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 13268 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7691 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 13276 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7695 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("ignoring CONVERSION"));
  }
#line 13284 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7699 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 13294 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7705 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 13304 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7711 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 13314 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7717 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 13324 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7723 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 13332 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7727 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 13340 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7731 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 13348 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7735 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 13356 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7739 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 13364 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7743 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 13372 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7747 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 13380 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7751 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 13388 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7758 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 13396 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7762 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 13404 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7772 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 13412 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7781 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 13420 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7785 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 13428 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7789 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 13436 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7793 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13444 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7797 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13452 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7804 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 13460 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7808 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 13468 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7818 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 13477 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7827 "parser.y" /* yacc.c:1646  */
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
#line 13493 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7845 "parser.y" /* yacc.c:1646  */
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
#line 13516 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7869 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 13525 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7876 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13531 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7878 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13537 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7883 "parser.y" /* yacc.c:1646  */
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
#line 13552 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7894 "parser.y" /* yacc.c:1646  */
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
#line 13567 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7905 "parser.y" /* yacc.c:1646  */
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
#line 13582 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7919 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13590 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7923 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13598 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7929 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13604 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7931 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13610 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7937 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13619 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7946 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13628 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7954 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13637 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7960 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13646 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7967 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13652 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7969 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13658 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7974 "parser.y" /* yacc.c:1646  */
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
#line 13724 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 8035 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 13730 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 8036 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 13736 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 8037 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 13742 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 8041 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13748 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 8042 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13754 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 8047 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 13762 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 8051 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 13770 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 8061 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 13779 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 8066 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13787 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 8074 "parser.y" /* yacc.c:1646  */
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
#line 13812 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 8095 "parser.y" /* yacc.c:1646  */
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
#line 13830 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 8109 "parser.y" /* yacc.c:1646  */
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
#line 13856 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 8131 "parser.y" /* yacc.c:1646  */
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
#line 13882 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 8153 "parser.y" /* yacc.c:1646  */
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
#line 13906 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 8173 "parser.y" /* yacc.c:1646  */
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
#line 13930 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 8195 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13936 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 8196 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13942 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 8204 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 13951 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 8213 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 13959 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 8223 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	CB_PENDING("GENERATE");
  }
#line 13968 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 8239 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13981 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 8252 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 13990 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 8260 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 13999 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 8265 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 14008 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 8276 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 14021 "parser.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 8291 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 14029 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 8300 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14037 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 8304 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 14045 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 8308 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 14053 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 8315 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 14061 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 8319 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 14069 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 8329 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 14077 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 8338 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14085 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 8344 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14091 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 8345 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 14097 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 8349 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14103 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 8350 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 14109 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 8351 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 14115 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 8356 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14123 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 8360 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14131 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 8367 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14139 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 8372 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14147 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 8379 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 14155 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 8385 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 14161 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 8386 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 14167 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 8387 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 14173 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 8388 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 14179 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 8389 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 14185 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 8390 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 14191 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 8391 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 14197 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 8396 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14205 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 8400 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 14213 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 8409 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	CB_PENDING("INITIATE");
  }
#line 14222 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 8418 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14232 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 8424 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14242 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 8435 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 14251 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 8463 "parser.y" /* yacc.c:1646  */
    {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
#line 14260 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 8468 "parser.y" /* yacc.c:1646  */
    {
	if (!(previous_tallying_phrase == CHARACTERS_PHRASE
	      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
		cb_error (_("TALLYING clause is incomplete"));
	} else {
		cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), TALLYING_CLAUSE);
	}

	(yyval) = (yyvsp[-3]);
  }
#line 14275 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 8484 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), REPLACING_CLAUSE);
	inspect_keyword = 0;
  }
#line 14284 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 8494 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, CONVERTING_CLAUSE);
  }
#line 14294 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 8503 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14302 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 8507 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14310 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 8514 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (FOR_PHRASE);
	(yyval) = cb_build_tallying_data ((yyvsp[-1]));
  }
#line 14319 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 8519 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	(yyval) = cb_build_tallying_characters ((yyvsp[0]));
  }
#line 14328 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 8524 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_all ();
  }
#line 14337 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 8529 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_leading ();
  }
#line 14346 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 8534 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_trailing ();
  }
#line 14355 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 8539 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	(yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14364 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 8546 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14370 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 8547 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 14376 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 8552 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 14385 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 8557 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14393 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 8564 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 14399 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 8565 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 14405 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 8566 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 14411 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 8567 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 14417 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8572 "parser.y" /* yacc.c:1646  */
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
#line 14443 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8599 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 14451 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8603 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14459 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8607 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14467 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8611 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14475 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8615 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14483 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8622 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0]));
  }
#line 14491 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8629 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0]));
  }
#line 14499 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8638 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 14508 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 8650 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 14516 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8658 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14524 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8662 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14532 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8672 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 14540 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8681 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 14548 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 8685 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 14556 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8692 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 14564 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8696 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 14572 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8706 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 14580 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8714 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[-2]) && (yyvsp[0])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", _("LOCK clauses"));
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
#line 14605 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8735 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[-2]) && (yyvsp[0])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", _("LOCK clauses"));
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
#line 14630 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8758 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 14636 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8759 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 14642 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8760 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 14648 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8761 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 14654 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8765 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14660 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8766 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14666 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8770 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14672 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8771 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14678 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8772 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14684 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8774 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 14693 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8785 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14704 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8796 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14713 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8801 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 14723 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8807 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14732 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8812 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 14741 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8820 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 14753 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8828 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 14761 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8835 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 14769 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8839 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 14783 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8852 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 14794 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8859 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14806 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8870 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14814 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8874 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14823 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8879 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14831 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8883 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 14846 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8894 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14854 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8900 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 14860 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8901 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14866 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8905 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14872 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8906 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14878 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8909 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14884 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8911 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14890 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8916 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14898 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8926 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 14906 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8935 "parser.y" /* yacc.c:1646  */
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
#line 14934 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8961 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14940 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8962 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14946 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8967 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14954 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8971 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14962 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8975 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14970 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8979 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14978 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 8983 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14986 "parser.c" /* yacc.c:1646  */
    break;

  case 1200:
#line 8987 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14994 "parser.c" /* yacc.c:1646  */
    break;

  case 1201:
#line 8991 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 15002 "parser.c" /* yacc.c:1646  */
    break;

  case 1202:
#line 8997 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15008 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 8998 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15014 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 9008 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 15022 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 9012 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 15030 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 9022 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 15039 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 9032 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 15047 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 9040 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15055 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 9050 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 15064 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 9060 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 15072 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 9069 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15080 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 9076 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 15088 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 9080 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 15096 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 9090 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15107 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 9102 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 15116 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 9110 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15124 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 9114 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 15132 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 9118 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 15140 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 9125 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 15148 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 9129 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 15156 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 9139 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 15165 "parser.c" /* yacc.c:1646  */
    break;

  case 1227:
#line 9150 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 15173 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 9159 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15181 "parser.c" /* yacc.c:1646  */
    break;

  case 1230:
#line 9164 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15190 "parser.c" /* yacc.c:1646  */
    break;

  case 1231:
#line 9171 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15196 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 9172 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15202 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 9177 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15210 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 9182 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15218 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 9189 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15226 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 9193 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 15234 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 9201 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15242 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 9208 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 15250 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 9212 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 15258 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 9222 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 15269 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 9229 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 15277 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 9245 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15283 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 9246 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15289 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 9250 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15295 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 9251 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15301 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 9258 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15309 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 9267 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 15317 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 9279 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 15325 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 9283 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 15333 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 9287 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 15343 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 9293 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 15353 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 9299 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 15361 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 9303 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 15369 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 9307 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 15377 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 9311 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 15385 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 9320 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 15393 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 9324 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15401 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 9333 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 15409 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 9347 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15417 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 9361 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 15425 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 9365 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 15433 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 9374 "parser.y" /* yacc.c:1646  */
    {
	  cb_emit_set_last_exception_to_off ();
  }
#line 15441 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 9383 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 15449 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 9391 "parser.y" /* yacc.c:1646  */
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
#line 15475 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 9413 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 15485 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 9422 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15493 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 9427 "parser.y" /* yacc.c:1646  */
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
#line 15513 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 9445 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15519 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 9446 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15525 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 9451 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 15534 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 9458 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 15540 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 9459 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 15546 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 9464 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("file sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 15556 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 9470 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 15570 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 9480 "parser.y" /* yacc.c:1646  */
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
#line 15586 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 9495 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("file sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 15596 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 9501 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15610 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9511 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15624 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 9527 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 15633 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9537 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 15646 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9549 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15654 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 9553 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15662 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 9560 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15670 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9564 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 15679 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9569 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 15688 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9574 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 15697 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9581 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 15703 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 9582 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 15709 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 9583 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 15715 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9584 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 15721 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9585 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 15727 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 9586 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 15733 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9591 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition not allowed on START statement"));
  }
#line 15742 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9604 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 15750 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9608 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 15758 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9618 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 15766 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9622 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 15776 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9628 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL, 1, DEVICE_DISPLAY);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 15789 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 9640 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 15797 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 9644 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15805 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9648 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15813 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 9652 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15825 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 9660 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 15837 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9671 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15845 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9675 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15853 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9681 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15859 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9682 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 15865 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 9683 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 15871 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9684 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 15877 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9691 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
	save_tree = NULL;
  }
#line 15886 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9701 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string (save_tree, (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15894 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 9713 "parser.y" /* yacc.c:1646  */
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
#line 15909 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 9727 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15915 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9729 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15921 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 9733 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 15927 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9734 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 15933 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9738 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15939 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9739 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15945 "parser.c" /* yacc.c:1646  */
    break;

  case 1340:
#line 9744 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 15953 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 9748 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 15961 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9758 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 15969 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 9767 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 15977 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 9771 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 15985 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 9775 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 15993 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 9782 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 16001 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9786 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 16009 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9796 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	CB_PENDING("SUPPRESS");
  }
#line 16022 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9814 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	CB_PENDING("TERMINATE");
  }
#line 16031 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9823 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 16041 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9829 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 16051 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9840 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 16059 "parser.c" /* yacc.c:1646  */
    break;

  case 1358:
#line 9848 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, TRANSFORM_STATEMENT);
  }
#line 16070 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9861 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 16078 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9869 "parser.y" /* yacc.c:1646  */
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
#line 16093 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9885 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 16101 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9895 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 16109 "parser.c" /* yacc.c:1646  */
    break;

  case 1365:
#line 9901 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16115 "parser.c" /* yacc.c:1646  */
    break;

  case 1366:
#line 9903 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16121 "parser.c" /* yacc.c:1646  */
    break;

  case 1367:
#line 9907 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16127 "parser.c" /* yacc.c:1646  */
    break;

  case 1368:
#line 9909 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 16133 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9914 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16141 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9920 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16147 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9922 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16153 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9927 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 16161 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9933 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16167 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9934 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16173 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9938 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16179 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9939 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16185 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9943 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16191 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9944 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16197 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9949 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 16205 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9953 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 16213 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9963 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 16222 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 9981 "parser.y" /* yacc.c:1646  */
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
#line 16248 "parser.c" /* yacc.c:1646  */
    break;

  case 1389:
#line 10006 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 16256 "parser.c" /* yacc.c:1646  */
    break;

  case 1390:
#line 10010 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 16269 "parser.c" /* yacc.c:1646  */
    break;

  case 1391:
#line 10022 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			set_up_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 16283 "parser.c" /* yacc.c:1646  */
    break;

  case 1392:
#line 10032 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 16292 "parser.c" /* yacc.c:1646  */
    break;

  case 1393:
#line 10037 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 16301 "parser.c" /* yacc.c:1646  */
    break;

  case 1394:
#line 10042 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 16310 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 10047 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 16319 "parser.c" /* yacc.c:1646  */
    break;

  case 1396:
#line 10055 "parser.y" /* yacc.c:1646  */
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
#line 16358 "parser.c" /* yacc.c:1646  */
    break;

  case 1399:
#line 10098 "parser.y" /* yacc.c:1646  */
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
#line 16402 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 10138 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 16416 "parser.c" /* yacc.c:1646  */
    break;

  case 1401:
#line 10148 "parser.y" /* yacc.c:1646  */
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
#line 16441 "parser.c" /* yacc.c:1646  */
    break;

  case 1406:
#line 10178 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 16451 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 10187 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM START");
  }
#line 16461 "parser.c" /* yacc.c:1646  */
    break;

  case 1408:
#line 10193 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM END");
  }
#line 16471 "parser.c" /* yacc.c:1646  */
    break;

  case 1409:
#line 10203 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	CB_PENDING ("USE BEFORE REPORTING");
  }
#line 16481 "parser.c" /* yacc.c:1646  */
    break;

  case 1410:
#line 10212 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 16491 "parser.c" /* yacc.c:1646  */
    break;

  case 1413:
#line 10228 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 16502 "parser.c" /* yacc.c:1646  */
    break;

  case 1415:
#line 10240 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 16513 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 10249 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16519 "parser.c" /* yacc.c:1646  */
    break;

  case 1417:
#line 10250 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16525 "parser.c" /* yacc.c:1646  */
    break;

  case 1418:
#line 10255 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 16533 "parser.c" /* yacc.c:1646  */
    break;

  case 1419:
#line 10259 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16541 "parser.c" /* yacc.c:1646  */
    break;

  case 1420:
#line 10263 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16549 "parser.c" /* yacc.c:1646  */
    break;

  case 1421:
#line 10267 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 16557 "parser.c" /* yacc.c:1646  */
    break;

  case 1422:
#line 10273 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 16563 "parser.c" /* yacc.c:1646  */
    break;

  case 1423:
#line 10274 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 16569 "parser.c" /* yacc.c:1646  */
    break;

  case 1427:
#line 10285 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 16577 "parser.c" /* yacc.c:1646  */
    break;

  case 1428:
#line 10289 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 16585 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 10303 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 16596 "parser.c" /* yacc.c:1646  */
    break;

  case 1432:
#line 10313 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16604 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 10317 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16612 "parser.c" /* yacc.c:1646  */
    break;

  case 1434:
#line 10324 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16621 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 10342 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16630 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 10358 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 16641 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 10368 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16649 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 10372 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16657 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 10379 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16666 "parser.c" /* yacc.c:1646  */
    break;

  case 1450:
#line 10392 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16675 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 10404 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT SIZE ERROR before SIZE ERROR"));
	}
  }
#line 16686 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 10414 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16694 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 10418 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16702 "parser.c" /* yacc.c:1646  */
    break;

  case 1456:
#line 10425 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16711 "parser.c" /* yacc.c:1646  */
    break;

  case 1459:
#line 10438 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16720 "parser.c" /* yacc.c:1646  */
    break;

  case 1462:
#line 10450 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT OVERFLOW before OVERFLOW"));
	}
  }
#line 16731 "parser.c" /* yacc.c:1646  */
    break;

  case 1463:
#line 10460 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16739 "parser.c" /* yacc.c:1646  */
    break;

  case 1464:
#line 10464 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16747 "parser.c" /* yacc.c:1646  */
    break;

  case 1465:
#line 10471 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16756 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 10484 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16765 "parser.c" /* yacc.c:1646  */
    break;

  case 1470:
#line 10496 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
  }
#line 16773 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 10505 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
	}
  }
#line 16783 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 10514 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16791 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 10518 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16799 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 10525 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16808 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 10538 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16817 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 10549 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT AT END-OF-PAGE before AT END-OF-PAGE"));
	}
  }
#line 16828 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 10559 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16836 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 10563 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16844 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 10570 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16853 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 10583 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16862 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 10599 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT INVALID KEY before INVALID KEY"));
	}
  }
#line 16873 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 10609 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16881 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 10613 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16889 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 10620 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16898 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 10633 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16907 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 10643 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 16915 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10647 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16923 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 10657 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 16931 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10664 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 16939 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10670 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 16948 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 10675 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 16956 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10687 "parser.y" /* yacc.c:1646  */
    { push_expr ('x', (yyvsp[0])); }
#line 16962 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 10688 "parser.y" /* yacc.c:1646  */
    { push_expr ('C', (yyvsp[0])); }
#line 16968 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 10690 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 16974 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10691 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 16980 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 10693 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 16986 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 10694 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 16992 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 10695 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 16998 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 10696 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 17004 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10697 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 17010 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 10699 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 17016 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 10700 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 17022 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 10701 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 17028 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 10702 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 17034 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 10703 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 17040 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 10704 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 17046 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 10706 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 17052 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 10707 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 17058 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 10708 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 17064 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 10710 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 17070 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 10711 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 17076 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10712 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 17082 "parser.c" /* yacc.c:1646  */
    break;

  case 1527:
#line 10713 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 17088 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10714 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 17094 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10717 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 17100 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 10718 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 17106 "parser.c" /* yacc.c:1646  */
    break;

  case 1539:
#line 10748 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17114 "parser.c" /* yacc.c:1646  */
    break;

  case 1540:
#line 10752 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17122 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10763 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 17128 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10764 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 17134 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10765 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17140 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10769 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 17146 "parser.c" /* yacc.c:1646  */
    break;

  case 1548:
#line 10770 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 17152 "parser.c" /* yacc.c:1646  */
    break;

  case 1549:
#line 10771 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17158 "parser.c" /* yacc.c:1646  */
    break;

  case 1550:
#line 10776 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 17166 "parser.c" /* yacc.c:1646  */
    break;

  case 1551:
#line 10779 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17172 "parser.c" /* yacc.c:1646  */
    break;

  case 1552:
#line 10783 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17178 "parser.c" /* yacc.c:1646  */
    break;

  case 1553:
#line 10784 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 17184 "parser.c" /* yacc.c:1646  */
    break;

  case 1554:
#line 10785 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17190 "parser.c" /* yacc.c:1646  */
    break;

  case 1555:
#line 10788 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17196 "parser.c" /* yacc.c:1646  */
    break;

  case 1556:
#line 10789 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17202 "parser.c" /* yacc.c:1646  */
    break;

  case 1557:
#line 10800 "parser.y" /* yacc.c:1646  */
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
#line 17218 "parser.c" /* yacc.c:1646  */
    break;

  case 1558:
#line 10812 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17231 "parser.c" /* yacc.c:1646  */
    break;

  case 1559:
#line 10821 "parser.y" /* yacc.c:1646  */
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
#line 17247 "parser.c" /* yacc.c:1646  */
    break;

  case 1560:
#line 10833 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17260 "parser.c" /* yacc.c:1646  */
    break;

  case 1561:
#line 10842 "parser.y" /* yacc.c:1646  */
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
#line 17276 "parser.c" /* yacc.c:1646  */
    break;

  case 1562:
#line 10854 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17289 "parser.c" /* yacc.c:1646  */
    break;

  case 1563:
#line 10868 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17295 "parser.c" /* yacc.c:1646  */
    break;

  case 1564:
#line 10870 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 17301 "parser.c" /* yacc.c:1646  */
    break;

  case 1565:
#line 10875 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 17309 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10883 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 17315 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10890 "parser.y" /* yacc.c:1646  */
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
#line 17336 "parser.c" /* yacc.c:1646  */
    break;

  case 1568:
#line 10912 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17344 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10916 "parser.y" /* yacc.c:1646  */
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
#line 17366 "parser.c" /* yacc.c:1646  */
    break;

  case 1570:
#line 10937 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17379 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10978 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17392 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10991 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17398 "parser.c" /* yacc.c:1646  */
    break;

  case 1573:
#line 10993 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17404 "parser.c" /* yacc.c:1646  */
    break;

  case 1574:
#line 10997 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17410 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 11003 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17416 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 11005 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17422 "parser.c" /* yacc.c:1646  */
    break;

  case 1577:
#line 11010 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 17435 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 11024 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17443 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 11031 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 17453 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 11041 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17459 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 11042 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17465 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 11047 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17474 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 11055 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17483 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 11063 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17491 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 11067 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17499 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 11074 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17509 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 11090 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 17522 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 11099 "parser.y" /* yacc.c:1646  */
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
#line 17532 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 11110 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 17546 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 11127 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17554 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 11131 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17562 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 11140 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17570 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 11146 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17576 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 11147 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17582 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 11152 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17590 "parser.c" /* yacc.c:1646  */
    break;

  case 1602:
#line 11156 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17598 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 11176 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17606 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 11180 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17614 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 11184 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17622 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 11188 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 17630 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 11192 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17638 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 11196 "parser.y" /* yacc.c:1646  */
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
#line 17660 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 11217 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17668 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 11221 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17676 "parser.c" /* yacc.c:1646  */
    break;

  case 1625:
#line 11238 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17684 "parser.c" /* yacc.c:1646  */
    break;

  case 1626:
#line 11242 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17692 "parser.c" /* yacc.c:1646  */
    break;

  case 1627:
#line 11246 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17700 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 11263 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 17708 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 11270 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 17716 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 11288 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17724 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 11296 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17732 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 11305 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17740 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 11310 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 17748 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 11317 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17756 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 11325 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17764 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 11333 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17772 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 11343 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17778 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 11347 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 17784 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 11351 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17790 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 11352 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17796 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 11357 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 17804 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 11364 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) != cb_error_node
	    && cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC) {
		cb_error_x ((yyvsp[0]), _("'%s' is not numeric"), cb_name ((yyvsp[0])));
	}
  }
#line 17815 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 11374 "parser.y" /* yacc.c:1646  */
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
#line 17835 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 11393 "parser.y" /* yacc.c:1646  */
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
#line 17854 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 11411 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17865 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 11418 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17876 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 11425 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17887 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 11432 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17898 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 11442 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 17906 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 11449 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17920 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 11459 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17934 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 11469 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17948 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 11479 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17962 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 11492 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17970 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 11496 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17979 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 11504 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 17988 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 11512 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 17996 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 11516 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 18005 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 11526 "parser.y" /* yacc.c:1646  */
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
#line 18020 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 11540 "parser.y" /* yacc.c:1646  */
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
#line 18044 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 11563 "parser.y" /* yacc.c:1646  */
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
#line 18067 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 11585 "parser.y" /* yacc.c:1646  */
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
#line 18087 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11600 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 18093 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 11601 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 18099 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 11602 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 18105 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11603 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 18111 "parser.c" /* yacc.c:1646  */
    break;

  case 1684:
#line 11604 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 18117 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11605 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 18123 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11610 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18131 "parser.c" /* yacc.c:1646  */
    break;

  case 1687:
#line 11614 "parser.y" /* yacc.c:1646  */
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
#line 18149 "parser.c" /* yacc.c:1646  */
    break;

  case 1688:
#line 11631 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18157 "parser.c" /* yacc.c:1646  */
    break;

  case 1689:
#line 11635 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 18165 "parser.c" /* yacc.c:1646  */
    break;

  case 1690:
#line 11641 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 18171 "parser.c" /* yacc.c:1646  */
    break;

  case 1691:
#line 11642 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 18177 "parser.c" /* yacc.c:1646  */
    break;

  case 1692:
#line 11643 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 18183 "parser.c" /* yacc.c:1646  */
    break;

  case 1693:
#line 11644 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 18189 "parser.c" /* yacc.c:1646  */
    break;

  case 1694:
#line 11645 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 18195 "parser.c" /* yacc.c:1646  */
    break;

  case 1695:
#line 11646 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 18201 "parser.c" /* yacc.c:1646  */
    break;

  case 1696:
#line 11647 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 18207 "parser.c" /* yacc.c:1646  */
    break;

  case 1697:
#line 11654 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 18215 "parser.c" /* yacc.c:1646  */
    break;

  case 1698:
#line 11658 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 18223 "parser.c" /* yacc.c:1646  */
    break;

  case 1699:
#line 11662 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18231 "parser.c" /* yacc.c:1646  */
    break;

  case 1700:
#line 11666 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18239 "parser.c" /* yacc.c:1646  */
    break;

  case 1701:
#line 11670 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 18247 "parser.c" /* yacc.c:1646  */
    break;

  case 1702:
#line 11674 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18255 "parser.c" /* yacc.c:1646  */
    break;

  case 1703:
#line 11678 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18263 "parser.c" /* yacc.c:1646  */
    break;

  case 1704:
#line 11682 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18271 "parser.c" /* yacc.c:1646  */
    break;

  case 1705:
#line 11686 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18279 "parser.c" /* yacc.c:1646  */
    break;

  case 1706:
#line 11690 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18287 "parser.c" /* yacc.c:1646  */
    break;

  case 1707:
#line 11694 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 18295 "parser.c" /* yacc.c:1646  */
    break;

  case 1708:
#line 11698 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 18303 "parser.c" /* yacc.c:1646  */
    break;

  case 1718:
#line 11723 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18311 "parser.c" /* yacc.c:1646  */
    break;

  case 1719:
#line 11727 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 18319 "parser.c" /* yacc.c:1646  */
    break;

  case 1720:
#line 11731 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 18327 "parser.c" /* yacc.c:1646  */
    break;

  case 1721:
#line 11738 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18335 "parser.c" /* yacc.c:1646  */
    break;

  case 1722:
#line 11742 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 18343 "parser.c" /* yacc.c:1646  */
    break;

  case 1723:
#line 11746 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18351 "parser.c" /* yacc.c:1646  */
    break;

  case 1724:
#line 11753 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 18362 "parser.c" /* yacc.c:1646  */
    break;

  case 1725:
#line 11760 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 18373 "parser.c" /* yacc.c:1646  */
    break;

  case 1726:
#line 11767 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 18384 "parser.c" /* yacc.c:1646  */
    break;

  case 1727:
#line 11777 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18395 "parser.c" /* yacc.c:1646  */
    break;

  case 1728:
#line 11784 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 18406 "parser.c" /* yacc.c:1646  */
    break;

  case 1729:
#line 11794 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18417 "parser.c" /* yacc.c:1646  */
    break;

  case 1730:
#line 11801 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 18428 "parser.c" /* yacc.c:1646  */
    break;

  case 1731:
#line 11811 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18436 "parser.c" /* yacc.c:1646  */
    break;

  case 1732:
#line 11815 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18450 "parser.c" /* yacc.c:1646  */
    break;

  case 1733:
#line 11828 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18458 "parser.c" /* yacc.c:1646  */
    break;

  case 1734:
#line 11832 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18472 "parser.c" /* yacc.c:1646  */
    break;

  case 1735:
#line 11846 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 18480 "parser.c" /* yacc.c:1646  */
    break;

  case 1736:
#line 11854 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18486 "parser.c" /* yacc.c:1646  */
    break;

  case 1737:
#line 11855 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18492 "parser.c" /* yacc.c:1646  */
    break;

  case 1738:
#line 11859 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18498 "parser.c" /* yacc.c:1646  */
    break;

  case 1739:
#line 11860 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18504 "parser.c" /* yacc.c:1646  */
    break;

  case 1740:
#line 11864 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18510 "parser.c" /* yacc.c:1646  */
    break;

  case 1741:
#line 11865 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18516 "parser.c" /* yacc.c:1646  */
    break;

  case 1742:
#line 11870 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18524 "parser.c" /* yacc.c:1646  */
    break;

  case 1743:
#line 11874 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18532 "parser.c" /* yacc.c:1646  */
    break;

  case 1744:
#line 11881 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18540 "parser.c" /* yacc.c:1646  */
    break;

  case 1745:
#line 11885 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18548 "parser.c" /* yacc.c:1646  */
    break;

  case 1746:
#line 11892 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18554 "parser.c" /* yacc.c:1646  */
    break;

  case 1747:
#line 11893 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18560 "parser.c" /* yacc.c:1646  */
    break;

  case 1748:
#line 11894 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 18566 "parser.c" /* yacc.c:1646  */
    break;

  case 1749:
#line 11898 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18572 "parser.c" /* yacc.c:1646  */
    break;

  case 1750:
#line 11899 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 18578 "parser.c" /* yacc.c:1646  */
    break;

  case 1751:
#line 11903 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 18584 "parser.c" /* yacc.c:1646  */
    break;

  case 1752:
#line 11904 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18590 "parser.c" /* yacc.c:1646  */
    break;

  case 1753:
#line 11905 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18596 "parser.c" /* yacc.c:1646  */
    break;

  case 1754:
#line 11910 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 18604 "parser.c" /* yacc.c:1646  */
    break;

  case 1755:
#line 11914 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 18617 "parser.c" /* yacc.c:1646  */
    break;

  case 1756:
#line 11926 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 18626 "parser.c" /* yacc.c:1646  */
    break;

  case 1757:
#line 11931 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 18635 "parser.c" /* yacc.c:1646  */
    break;

  case 1758:
#line 11939 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 18643 "parser.c" /* yacc.c:1646  */
    break;

  case 1759:
#line 11943 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 18651 "parser.c" /* yacc.c:1646  */
    break;

  case 1760:
#line 11947 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 18659 "parser.c" /* yacc.c:1646  */
    break;

  case 1761:
#line 11951 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 18667 "parser.c" /* yacc.c:1646  */
    break;

  case 1762:
#line 11955 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 18675 "parser.c" /* yacc.c:1646  */
    break;

  case 1763:
#line 11959 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 18683 "parser.c" /* yacc.c:1646  */
    break;

  case 1764:
#line 11963 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 18691 "parser.c" /* yacc.c:1646  */
    break;

  case 1765:
#line 11967 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 18699 "parser.c" /* yacc.c:1646  */
    break;

  case 1766:
#line 11973 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18705 "parser.c" /* yacc.c:1646  */
    break;

  case 1767:
#line 11974 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18711 "parser.c" /* yacc.c:1646  */
    break;

  case 1768:
#line 11981 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 1;
  }
#line 18719 "parser.c" /* yacc.c:1646  */
    break;

  case 1769:
#line 11985 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 1;
  }
#line 18727 "parser.c" /* yacc.c:1646  */
    break;

  case 1770:
#line 11989 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 0;
  }
#line 18735 "parser.c" /* yacc.c:1646  */
    break;


#line 18739 "parser.c" /* yacc.c:1646  */
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
#line 12163 "parser.y" /* yacc.c:1906  */

