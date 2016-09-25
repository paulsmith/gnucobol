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


#line 1555 "parser.c" /* yacc.c:339  */

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
    EIGHTY_EIGHT = 386,
    ELSE = 387,
    END = 388,
    END_ACCEPT = 389,
    END_ADD = 390,
    END_CALL = 391,
    END_COMPUTE = 392,
    END_DELETE = 393,
    END_DISPLAY = 394,
    END_DIVIDE = 395,
    END_EVALUATE = 396,
    END_FUNCTION = 397,
    END_IF = 398,
    END_MULTIPLY = 399,
    END_PERFORM = 400,
    END_PROGRAM = 401,
    END_READ = 402,
    END_RETURN = 403,
    END_REWRITE = 404,
    END_SEARCH = 405,
    END_START = 406,
    END_STRING = 407,
    END_SUBTRACT = 408,
    END_UNSTRING = 409,
    END_WRITE = 410,
    ENTRY = 411,
    ENVIRONMENT = 412,
    ENVIRONMENT_NAME = 413,
    ENVIRONMENT_VALUE = 414,
    EOL = 415,
    EOP = 416,
    EOS = 417,
    EQUAL = 418,
    ERASE = 419,
    ERROR = 420,
    ESCAPE = 421,
    EVALUATE = 422,
    EVENT_STATUS = 423,
    EXCEPTION = 424,
    EXCEPTION_CONDITION = 425,
    EXCLUSIVE = 426,
    EXIT = 427,
    EXPONENTIATION = 428,
    EXTEND = 429,
    EXTERNAL = 430,
    F = 431,
    FD = 432,
    FILE_CONTROL = 433,
    FILE_ID = 434,
    FILLER = 435,
    FINAL = 436,
    FIRST = 437,
    FIXED = 438,
    FLOAT_BINARY_128 = 439,
    FLOAT_BINARY_32 = 440,
    FLOAT_BINARY_64 = 441,
    FLOAT_DECIMAL_16 = 442,
    FLOAT_DECIMAL_34 = 443,
    FLOAT_DECIMAL_7 = 444,
    FLOAT_EXTENDED = 445,
    FLOAT_LONG = 446,
    FLOAT_SHORT = 447,
    FOOTING = 448,
    FOR = 449,
    FOREGROUND_COLOR = 450,
    FOREVER = 451,
    FORMATTED_DATE_FUNC = 452,
    FORMATTED_DATETIME_FUNC = 453,
    FORMATTED_TIME_FUNC = 454,
    FREE = 455,
    FROM = 456,
    FROM_CRT = 457,
    FULL = 458,
    FUNCTION = 459,
    FUNCTION_ID = 460,
    FUNCTION_NAME = 461,
    GENERATE = 462,
    GIVING = 463,
    GLOBAL = 464,
    GO = 465,
    GOBACK = 466,
    GREATER = 467,
    GREATER_OR_EQUAL = 468,
    GRID = 469,
    GROUP = 470,
    HEADING = 471,
    HIGHLIGHT = 472,
    HIGH_VALUE = 473,
    ID = 474,
    IDENTIFICATION = 475,
    IF = 476,
    IGNORE = 477,
    IGNORING = 478,
    IN = 479,
    INDEX = 480,
    INDEXED = 481,
    INDICATE = 482,
    INITIALIZE = 483,
    INITIALIZED = 484,
    INITIATE = 485,
    INPUT = 486,
    INPUT_OUTPUT = 487,
    INSPECT = 488,
    INTO = 489,
    INTRINSIC = 490,
    INVALID = 491,
    INVALID_KEY = 492,
    IS = 493,
    I_O = 494,
    I_O_CONTROL = 495,
    JUSTIFIED = 496,
    KEPT = 497,
    KEY = 498,
    KEYBOARD = 499,
    LABEL = 500,
    LAST = 501,
    LEADING = 502,
    LEFT = 503,
    LEFTLINE = 504,
    LENGTH = 505,
    LENGTH_OF = 506,
    LESS = 507,
    LESS_OR_EQUAL = 508,
    LIMIT = 509,
    LIMITS = 510,
    LINAGE = 511,
    LINAGE_COUNTER = 512,
    LINE = 513,
    LINE_COUNTER = 514,
    LINES = 515,
    LINKAGE = 516,
    LITERAL = 517,
    LOCALE = 518,
    LOCALE_DATE_FUNC = 519,
    LOCALE_TIME_FUNC = 520,
    LOCALE_TIME_FROM_FUNC = 521,
    LOCAL_STORAGE = 522,
    LOCK = 523,
    LOWER = 524,
    LOWER_CASE_FUNC = 525,
    LOWLIGHT = 526,
    LOW_VALUE = 527,
    MANUAL = 528,
    MEMORY = 529,
    MERGE = 530,
    MINUS = 531,
    MNEMONIC_NAME = 532,
    MODE = 533,
    MOVE = 534,
    MULTIPLE = 535,
    MULTIPLY = 536,
    NAME = 537,
    NATIONAL = 538,
    NATIONAL_EDITED = 539,
    NATIONAL_OF_FUNC = 540,
    NATIVE = 541,
    NEAREST_AWAY_FROM_ZERO = 542,
    NEAREST_EVEN = 543,
    NEAREST_TOWARD_ZERO = 544,
    NEGATIVE = 545,
    NEXT = 546,
    NEXT_PAGE = 547,
    NO = 548,
    NO_ECHO = 549,
    NORMAL = 550,
    NOT = 551,
    NOTHING = 552,
    NOT_END = 553,
    NOT_EOP = 554,
    NOT_ESCAPE = 555,
    NOT_EQUAL = 556,
    NOT_EXCEPTION = 557,
    NOT_INVALID_KEY = 558,
    NOT_OVERFLOW = 559,
    NOT_SIZE_ERROR = 560,
    NO_ADVANCING = 561,
    NUMBER = 562,
    NUMBERS = 563,
    NUMERIC = 564,
    NUMERIC_EDITED = 565,
    NUMVALC_FUNC = 566,
    OBJECT_COMPUTER = 567,
    OCCURS = 568,
    OF = 569,
    OFF = 570,
    OMITTED = 571,
    ON = 572,
    ONLY = 573,
    OPEN = 574,
    OPTIONAL = 575,
    OR = 576,
    ORDER = 577,
    ORGANIZATION = 578,
    OTHER = 579,
    OUTPUT = 580,
    OVERLINE = 581,
    PACKED_DECIMAL = 582,
    PADDING = 583,
    PAGE = 584,
    PAGE_COUNTER = 585,
    PARAGRAPH = 586,
    PERFORM = 587,
    PH = 588,
    PF = 589,
    PICTURE = 590,
    PICTURE_SYMBOL = 591,
    PLUS = 592,
    POINTER = 593,
    POSITION = 594,
    POSITIVE = 595,
    PRESENT = 596,
    PREVIOUS = 597,
    PRINT = 598,
    PRINTER = 599,
    PRINTER_1 = 600,
    PRINTING = 601,
    PROCEDURE = 602,
    PROCEDURES = 603,
    PROCEED = 604,
    PROGRAM = 605,
    PROGRAM_ID = 606,
    PROGRAM_NAME = 607,
    PROGRAM_POINTER = 608,
    PROHIBITED = 609,
    PROMPT = 610,
    PROTECTED = 611,
    QUOTE = 612,
    RANDOM = 613,
    RD = 614,
    READ = 615,
    READY_TRACE = 616,
    RECORD = 617,
    RECORDING = 618,
    RECORDS = 619,
    RECURSIVE = 620,
    REDEFINES = 621,
    REEL = 622,
    REFERENCE = 623,
    REFERENCES = 624,
    RELATIVE = 625,
    RELEASE = 626,
    REMAINDER = 627,
    REMOVAL = 628,
    RENAMES = 629,
    REPLACE = 630,
    REPLACING = 631,
    REPORT = 632,
    REPORTING = 633,
    REPORTS = 634,
    REPOSITORY = 635,
    REQUIRED = 636,
    RESERVE = 637,
    RESET = 638,
    RESET_TRACE = 639,
    RETRY = 640,
    RETURN = 641,
    RETURNING = 642,
    REVERSE_FUNC = 643,
    REVERSE_VIDEO = 644,
    REVERSED = 645,
    REWIND = 646,
    REWRITE = 647,
    RF = 648,
    RH = 649,
    RIGHT = 650,
    ROLLBACK = 651,
    ROUNDED = 652,
    RUN = 653,
    S = 654,
    SAME = 655,
    SCREEN = 656,
    SCREEN_CONTROL = 657,
    SCROLL = 658,
    SD = 659,
    SEARCH = 660,
    SECONDS = 661,
    SECTION = 662,
    SECURE = 663,
    SEGMENT_LIMIT = 664,
    SELECT = 665,
    SEMI_COLON = 666,
    SENTENCE = 667,
    SEPARATE = 668,
    SEQUENCE = 669,
    SEQUENTIAL = 670,
    SET = 671,
    SEVENTY_EIGHT = 672,
    SHARING = 673,
    SIGN = 674,
    SIGNED = 675,
    SIGNED_INT = 676,
    SIGNED_LONG = 677,
    SIGNED_SHORT = 678,
    SIXTY_SIX = 679,
    SIZE = 680,
    SIZE_ERROR = 681,
    SORT = 682,
    SORT_MERGE = 683,
    SOURCE = 684,
    SOURCE_COMPUTER = 685,
    SPACE = 686,
    SPECIAL_NAMES = 687,
    STANDARD = 688,
    STANDARD_1 = 689,
    STANDARD_2 = 690,
    START = 691,
    STATIC = 692,
    STATUS = 693,
    STDCALL = 694,
    STEP = 695,
    STOP = 696,
    STRING = 697,
    SUBSTITUTE_FUNC = 698,
    SUBSTITUTE_CASE_FUNC = 699,
    SUBTRACT = 700,
    SUM = 701,
    SUPPRESS = 702,
    SYMBOLIC = 703,
    SYNCHRONIZED = 704,
    SYSTEM_DEFAULT = 705,
    SYSTEM_OFFSET = 706,
    TAB = 707,
    TALLYING = 708,
    TAPE = 709,
    TERMINATE = 710,
    TEST = 711,
    THAN = 712,
    THEN = 713,
    THRU = 714,
    TIME = 715,
    TIME_OUT = 716,
    TIMES = 717,
    TO = 718,
    TOK_AMPER = 719,
    TOK_CLOSE_PAREN = 720,
    TOK_COLON = 721,
    TOK_DIV = 722,
    TOK_DOT = 723,
    TOK_EQUAL = 724,
    TOK_FALSE = 725,
    TOK_FILE = 726,
    TOK_GREATER = 727,
    TOK_INITIAL = 728,
    TOK_LESS = 729,
    TOK_MINUS = 730,
    TOK_MUL = 731,
    TOK_NULL = 732,
    TOK_OVERFLOW = 733,
    TOK_OPEN_PAREN = 734,
    TOK_PLUS = 735,
    TOK_TRUE = 736,
    TOP = 737,
    TOWARD_GREATER = 738,
    TOWARD_LESSER = 739,
    TRAILING = 740,
    TRANSFORM = 741,
    TRIM_FUNC = 742,
    TRUNCATION = 743,
    TYPE = 744,
    U = 745,
    UNDERLINE = 746,
    UNIT = 747,
    UNLOCK = 748,
    UNSIGNED = 749,
    UNSIGNED_INT = 750,
    UNSIGNED_LONG = 751,
    UNSIGNED_SHORT = 752,
    UNSTRING = 753,
    UNTIL = 754,
    UP = 755,
    UPDATE = 756,
    UPON = 757,
    UPON_ARGUMENT_NUMBER = 758,
    UPON_COMMAND_LINE = 759,
    UPON_ENVIRONMENT_NAME = 760,
    UPON_ENVIRONMENT_VALUE = 761,
    UPPER = 762,
    UPPER_CASE_FUNC = 763,
    USAGE = 764,
    USE = 765,
    USER = 766,
    USER_DEFAULT = 767,
    USER_FUNCTION_NAME = 768,
    USING = 769,
    V = 770,
    VALUE = 771,
    VARIABLE = 772,
    VARYING = 773,
    WAIT = 774,
    WHEN = 775,
    WHEN_COMPILED_FUNC = 776,
    WITH = 777,
    WORD = 778,
    WORDS = 779,
    WORKING_STORAGE = 780,
    WRITE = 781,
    YYYYDDD = 782,
    YYYYMMDD = 783,
    ZERO = 784,
    SHIFT_PREFER = 785,
    OVERFLOW = 786
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

#line 2139 "parser.c" /* yacc.c:358  */

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
#define YYLAST   9052

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  532
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  883
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2029
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2883

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   786

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
     525,   526,   527,   528,   529,   530,   531
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  2152,  2152,  2152,  2185,  2186,  2190,  2191,  2195,  2196,
    2200,  2200,  2223,  2234,  2240,  2241,  2245,  2246,  2250,  2258,
    2267,  2275,  2276,  2277,  2282,  2286,  2281,  2302,  2301,  2317,
    2328,  2332,  2333,  2337,  2338,  2341,  2342,  2346,  2355,  2364,
    2365,  2372,  2373,  2377,  2381,  2391,  2396,  2397,  2406,  2413,
    2414,  2424,  2425,  2426,  2427,  2428,  2441,  2440,  2450,  2451,
    2454,  2455,  2469,  2468,  2478,  2479,  2480,  2481,  2485,  2486,
    2490,  2491,  2492,  2493,  2497,  2505,  2512,  2519,  2530,  2534,
    2538,  2542,  2549,  2550,  2555,  2557,  2556,  2567,  2568,  2569,
    2576,  2577,  2581,  2585,  2591,  2592,  2602,  2607,  2617,  2618,
    2630,  2631,  2635,  2636,  2640,  2641,  2645,  2646,  2647,  2648,
    2649,  2650,  2651,  2652,  2653,  2654,  2655,  2656,  2664,  2663,
    2691,  2702,  2715,  2723,  2726,  2727,  2731,  2738,  2753,  2774,
    2773,  2797,  2803,  2809,  2815,  2821,  2827,  2837,  2841,  2848,
    2852,  2857,  2856,  2867,  2871,  2878,  2879,  2880,  2881,  2882,
    2883,  2887,  2888,  2895,  2910,  2913,  2920,  2928,  2932,  2943,
    2963,  2971,  2982,  2983,  2989,  3010,  3011,  3015,  3019,  3040,
    3063,  3138,  3141,  3150,  3169,  3185,  3203,  3221,  3238,  3255,
    3265,  3266,  3273,  3274,  3282,  3283,  3293,  3294,  3299,  3298,
    3328,  3329,  3333,  3334,  3335,  3336,  3337,  3338,  3339,  3340,
    3341,  3342,  3343,  3344,  3345,  3352,  3358,  3368,  3381,  3394,
    3421,  3422,  3423,  3427,  3428,  3429,  3430,  3433,  3434,  3440,
    3441,  3445,  3449,  3450,  3455,  3458,  3459,  3466,  3474,  3475,
    3476,  3483,  3507,  3509,  3514,  3524,  3532,  3547,  3554,  3556,
    3557,  3563,  3563,  3570,  3575,  3580,  3587,  3588,  3589,  3593,
    3604,  3605,  3609,  3614,  3619,  3624,  3635,  3646,  3656,  3664,
    3665,  3666,  3672,  3683,  3690,  3691,  3697,  3705,  3706,  3707,
    3713,  3714,  3715,  3722,  3723,  3727,  3728,  3734,  3762,  3763,
    3764,  3765,  3772,  3771,  3787,  3788,  3792,  3795,  3796,  3806,
    3803,  3819,  3820,  3828,  3829,  3837,  3838,  3842,  3863,  3862,
    3879,  3886,  3890,  3896,  3897,  3901,  3911,  3926,  3927,  3928,
    3929,  3930,  3931,  3932,  3933,  3934,  3941,  3948,  3948,  3948,
    3954,  3974,  4008,  4039,  4040,  4047,  4048,  4052,  4053,  4060,
    4071,  4076,  4087,  4088,  4092,  4093,  4099,  4110,  4128,  4129,
    4133,  4134,  4135,  4139,  4146,  4153,  4162,  4171,  4172,  4173,
    4174,  4175,  4184,  4185,  4191,  4226,  4227,  4240,  4255,  4256,
    4260,  4270,  4284,  4286,  4285,  4301,  4304,  4304,  4321,  4322,
    4326,  4327,  4328,  4330,  4329,  4344,  4357,  4365,  4370,  4376,
    4380,  4390,  4393,  4405,  4406,  4407,  4408,  4412,  4416,  4420,
    4424,  4428,  4432,  4436,  4440,  4444,  4448,  4452,  4456,  4460,
    4471,  4472,  4476,  4477,  4481,  4482,  4483,  4487,  4488,  4492,
    4517,  4520,  4528,  4527,  4540,  4564,  4563,  4577,  4581,  4590,
    4594,  4603,  4604,  4605,  4606,  4607,  4608,  4609,  4610,  4611,
    4612,  4613,  4614,  4615,  4622,  4646,  4674,  4677,  4685,  4686,
    4690,  4715,  4726,  4727,  4731,  4735,  4739,  4743,  4747,  4751,
    4755,  4759,  4763,  4767,  4771,  4775,  4779,  4784,  4789,  4793,
    4797,  4805,  4809,  4813,  4821,  4825,  4829,  4833,  4837,  4841,
    4845,  4849,  4853,  4861,  4869,  4873,  4877,  4881,  4885,  4889,
    4897,  4898,  4902,  4903,  4909,  4916,  4929,  4947,  4948,  4957,
    4989,  5019,  5020,  5024,  5025,  5028,  5029,  5035,  5036,  5043,
    5044,  5051,  5075,  5076,  5093,  5094,  5097,  5098,  5105,  5106,
    5111,  5122,  5133,  5144,  5155,  5184,  5183,  5192,  5193,  5197,
    5198,  5201,  5202,  5214,  5223,  5237,  5239,  5238,  5258,  5260,
    5259,  5275,  5277,  5276,  5285,  5286,  5293,  5292,  5305,  5306,
    5307,  5314,  5319,  5323,  5324,  5330,  5337,  5341,  5342,  5348,
    5385,  5389,  5394,  5400,  5401,  5406,  5407,  5408,  5409,  5410,
    5414,  5421,  5428,  5435,  5442,  5448,  5449,  5454,  5453,  5460,
    5461,  5465,  5466,  5467,  5468,  5469,  5470,  5471,  5472,  5473,
    5474,  5475,  5476,  5477,  5478,  5479,  5480,  5484,  5491,  5492,
    5493,  5494,  5495,  5496,  5497,  5500,  5501,  5502,  5505,  5506,
    5510,  5517,  5523,  5524,  5528,  5529,  5533,  5540,  5544,  5551,
    5552,  5556,  5563,  5564,  5568,  5569,  5573,  5574,  5575,  5579,
    5580,  5584,  5585,  5589,  5596,  5603,  5611,  5613,  5612,  5633,
    5634,  5638,  5639,  5643,  5645,  5644,  5704,  5722,  5723,  5727,
    5732,  5737,  5741,  5745,  5750,  5755,  5760,  5765,  5769,  5773,
    5778,  5783,  5788,  5792,  5796,  5800,  5804,  5809,  5813,  5817,
    5822,  5827,  5832,  5837,  5838,  5839,  5840,  5841,  5842,  5843,
    5844,  5845,  5854,  5859,  5870,  5871,  5875,  5876,  5880,  5881,
    5885,  5886,  5891,  5894,  5898,  5906,  5909,  5913,  5921,  5932,
    5940,  5942,  5952,  5941,  5979,  5979,  6012,  6016,  6015,  6029,
    6028,  6048,  6049,  6054,  6076,  6078,  6082,  6093,  6095,  6103,
    6111,  6119,  6148,  6181,  6184,  6197,  6202,  6212,  6243,  6245,
    6244,  6281,  6282,  6286,  6287,  6288,  6305,  6306,  6317,  6316,
    6366,  6367,  6371,  6419,  6439,  6442,  6461,  6466,  6460,  6479,
    6479,  6509,  6516,  6517,  6518,  6519,  6520,  6521,  6522,  6523,
    6524,  6525,  6526,  6527,  6528,  6529,  6530,  6531,  6532,  6533,
    6534,  6535,  6536,  6537,  6538,  6539,  6540,  6541,  6542,  6543,
    6544,  6545,  6546,  6547,  6548,  6549,  6550,  6551,  6552,  6553,
    6554,  6555,  6556,  6557,  6558,  6559,  6560,  6561,  6562,  6563,
    6564,  6565,  6579,  6591,  6590,  6607,  6606,  6624,  6628,  6632,
    6637,  6642,  6647,  6652,  6656,  6660,  6664,  6668,  6673,  6677,
    6681,  6685,  6689,  6693,  6697,  6704,  6705,  6711,  6713,  6717,
    6718,  6722,  6723,  6727,  6731,  6732,  6739,  6740,  6744,  6760,
    6776,  6789,  6793,  6794,  6798,  6805,  6809,  6815,  6819,  6823,
    6827,  6831,  6837,  6841,  6845,  6851,  6855,  6859,  6863,  6867,
    6871,  6875,  6879,  6883,  6887,  6891,  6897,  6901,  6905,  6909,
    6913,  6917,  6921,  6928,  6929,  6933,  6937,  6955,  6954,  6963,
    6967,  6971,  6977,  6978,  6985,  6989,  7000,  6999,  7008,  7012,
    7024,  7025,  7033,  7032,  7041,  7042,  7046,  7052,  7052,  7059,
    7058,  7071,  7070,  7104,  7108,  7113,  7118,  7138,  7139,  7147,
    7151,  7150,  7167,  7168,  7173,  7181,  7205,  7207,  7211,  7220,
    7233,  7236,  7240,  7244,  7249,  7272,  7273,  7277,  7278,  7282,
    7286,  7290,  7301,  7305,  7312,  7316,  7324,  7328,  7335,  7342,
    7346,  7357,  7356,  7368,  7372,  7379,  7380,  7390,  7389,  7397,
    7402,  7410,  7411,  7412,  7413,  7414,  7422,  7421,  7430,  7437,
    7441,  7451,  7462,  7480,  7479,  7488,  7492,  7496,  7501,  7509,
    7513,  7524,  7523,  7535,  7539,  7543,  7547,  7551,  7555,  7563,
    7572,  7573,  7578,  7577,  7622,  7626,  7634,  7635,  7639,  7643,
    7648,  7652,  7653,  7657,  7661,  7665,  7669,  7676,  7677,  7681,
    7685,  7691,  7697,  7701,  7705,  7711,  7717,  7723,  7729,  7733,
    7737,  7741,  7745,  7749,  7753,  7757,  7764,  7768,  7779,  7778,
    7787,  7791,  7795,  7799,  7803,  7810,  7814,  7825,  7824,  7833,
    7852,  7851,  7875,  7883,  7884,  7889,  7900,  7911,  7925,  7929,
    7936,  7937,  7942,  7951,  7960,  7965,  7974,  7975,  7980,  8042,
    8043,  8044,  8048,  8049,  8053,  8057,  8068,  8067,  8079,  8080,
    8101,  8115,  8137,  8159,  8179,  8202,  8203,  8211,  8210,  8219,
    8230,  8229,  8239,  8246,  8245,  8258,  8267,  8271,  8282,  8298,
    8297,  8306,  8310,  8314,  8321,  8325,  8336,  8335,  8343,  8351,
    8352,  8356,  8357,  8358,  8363,  8366,  8373,  8377,  8385,  8392,
    8393,  8394,  8395,  8396,  8397,  8398,  8403,  8406,  8416,  8415,
    8424,  8430,  8442,  8441,  8450,  8454,  8455,  8456,  8460,  8461,
    8462,  8463,  8470,  8469,  8490,  8500,  8509,  8513,  8520,  8525,
    8530,  8535,  8540,  8545,  8553,  8554,  8558,  8563,  8569,  8571,
    8572,  8573,  8574,  8578,  8606,  8609,  8613,  8617,  8621,  8628,
    8635,  8645,  8644,  8657,  8656,  8664,  8668,  8679,  8678,  8687,
    8691,  8698,  8702,  8713,  8712,  8720,  8721,  8725,  8750,  8751,
    8752,  8753,  8757,  8758,  8762,  8763,  8764,  8765,  8777,  8776,
    8788,  8795,  8794,  8806,  8815,  8823,  8830,  8834,  8847,  8854,
    8866,  8869,  8874,  8878,  8889,  8896,  8897,  8901,  8902,  8905,
    8906,  8911,  8922,  8921,  8930,  8959,  8960,  8964,  8968,  8972,
    8976,  8983,  8984,  8988,  8992,  8995,  8997,  9001,  9010,  9011,
    9012,  9015,  9017,  9021,  9022,  9026,  9034,  9035,  9039,  9040,
    9044,  9048,  9058,  9069,  9068,  9076,  9086,  9097,  9096,  9105,
    9112,  9116,  9127,  9126,  9138,  9147,  9150,  9154,  9158,  9165,
    9169,  9179,  9191,  9190,  9199,  9203,  9212,  9213,  9218,  9221,
    9229,  9233,  9240,  9248,  9252,  9263,  9262,  9276,  9277,  9278,
    9279,  9280,  9281,  9282,  9286,  9287,  9291,  9292,  9298,  9307,
    9314,  9315,  9319,  9323,  9327,  9333,  9339,  9343,  9347,  9351,
    9360,  9364,  9373,  9382,  9383,  9387,  9396,  9397,  9401,  9405,
    9414,  9424,  9423,  9432,  9431,  9463,  9466,  9486,  9487,  9490,
    9491,  9499,  9500,  9505,  9510,  9520,  9536,  9541,  9551,  9568,
    9567,  9577,  9590,  9593,  9601,  9604,  9609,  9614,  9622,  9623,
    9624,  9625,  9626,  9627,  9631,  9639,  9640,  9644,  9648,  9659,
    9658,  9668,  9681,  9684,  9688,  9692,  9700,  9712,  9715,  9722,
    9723,  9724,  9725,  9732,  9731,  9741,  9748,  9749,  9753,  9768,
    9769,  9774,  9775,  9779,  9780,  9784,  9788,  9799,  9798,  9807,
    9811,  9815,  9822,  9826,  9836,  9847,  9848,  9855,  9854,  9863,
    9869,  9881,  9880,  9888,  9902,  9901,  9909,  9926,  9925,  9934,
    9942,  9943,  9948,  9949,  9954,  9961,  9962,  9967,  9974,  9975,
    9979,  9980,  9984,  9985,  9989,  9993, 10004, 10003, 10012, 10013,
   10014, 10015, 10016, 10020, 10047, 10050, 10062, 10072, 10077, 10082,
   10087, 10095, 10133, 10134, 10138, 10178, 10188, 10211, 10212, 10213,
   10214, 10218, 10227, 10233, 10243, 10252, 10261, 10262, 10269, 10268,
   10280, 10290, 10291, 10296, 10299, 10303, 10307, 10314, 10315, 10319,
   10320, 10321, 10325, 10329, 10341, 10342, 10343, 10353, 10357, 10364,
   10372, 10373, 10377, 10378, 10382, 10390, 10391, 10396, 10397, 10398,
   10408, 10412, 10419, 10427, 10428, 10432, 10442, 10443, 10444, 10454,
   10458, 10465, 10473, 10474, 10478, 10488, 10489, 10490, 10500, 10504,
   10511, 10519, 10520, 10524, 10535, 10536, 10543, 10545, 10554, 10558,
   10565, 10573, 10574, 10578, 10588, 10589, 10599, 10603, 10610, 10618,
   10619, 10623, 10633, 10634, 10638, 10639, 10649, 10653, 10660, 10668,
   10669, 10673, 10683, 10687, 10697, 10704, 10711, 10711, 10722, 10723,
   10724, 10728, 10729, 10731, 10732, 10734, 10735, 10736, 10737, 10738,
   10740, 10741, 10742, 10743, 10744, 10745, 10747, 10748, 10749, 10751,
   10752, 10753, 10754, 10755, 10758, 10759, 10763, 10764, 10768, 10769,
   10773, 10774, 10778, 10782, 10788, 10792, 10798, 10799, 10800, 10804,
   10805, 10806, 10810, 10811, 10812, 10816, 10820, 10824, 10825, 10826,
   10829, 10830, 10840, 10852, 10861, 10873, 10882, 10894, 10909, 10910,
   10915, 10924, 10930, 10952, 10956, 10977, 11018, 11032, 11033, 11038,
   11044, 11045, 11050, 11062, 11063, 11064, 11071, 11082, 11083, 11087,
   11095, 11103, 11107, 11114, 11123, 11124, 11130, 11139, 11150, 11167,
   11171, 11178, 11179, 11180, 11187, 11188, 11192, 11196, 11203, 11204,
   11208, 11209, 11213, 11214, 11215, 11216, 11220, 11224, 11228, 11232,
   11236, 11257, 11261, 11268, 11269, 11270, 11274, 11275, 11276, 11277,
   11278, 11282, 11286, 11293, 11294, 11298, 11299, 11303, 11310, 11317,
   11318, 11319, 11323, 11324, 11328, 11332, 11336, 11340, 11341, 11345,
   11349, 11350, 11357, 11361, 11365, 11369, 11373, 11377, 11378, 11384,
   11388, 11392, 11393, 11397, 11404, 11414, 11433, 11451, 11458, 11465,
   11472, 11482, 11489, 11499, 11509, 11519, 11532, 11536, 11544, 11552,
   11556, 11566, 11580, 11603, 11625, 11641, 11642, 11643, 11644, 11645,
   11646, 11650, 11654, 11671, 11675, 11682, 11683, 11684, 11685, 11686,
   11687, 11688, 11694, 11698, 11702, 11706, 11710, 11714, 11718, 11722,
   11726, 11730, 11734, 11738, 11745, 11746, 11750, 11751, 11752, 11756,
   11757, 11758, 11759, 11763, 11767, 11771, 11778, 11782, 11786, 11793,
   11800, 11807, 11817, 11824, 11834, 11841, 11851, 11855, 11868, 11872,
   11887, 11895, 11896, 11900, 11901, 11905, 11906, 11911, 11914, 11922,
   11925, 11932, 11934, 11935, 11939, 11940, 11944, 11945, 11946, 11951,
   11954, 11967, 11971, 11979, 11983, 11987, 11991, 11995, 11999, 12003,
   12007, 12014, 12015, 12021, 12025, 12029, 12036, 12037, 12038, 12039,
   12040, 12041, 12042, 12043, 12044, 12045, 12046, 12047, 12048, 12049,
   12050, 12051, 12052, 12053, 12054, 12055, 12056, 12057, 12058, 12059,
   12060, 12061, 12062, 12063, 12064, 12065, 12066, 12067, 12068, 12069,
   12070, 12071, 12072, 12073, 12074, 12075, 12076, 12077, 12078, 12079,
   12080, 12081, 12082, 12083, 12084, 12088, 12089, 12090, 12091, 12092,
   12093, 12094, 12095, 12096, 12097, 12098, 12099, 12100, 12101, 12102,
   12103, 12104, 12105, 12106, 12107, 12114, 12114, 12115, 12115, 12116,
   12116, 12117, 12117, 12118, 12118, 12118, 12119, 12119, 12120, 12120,
   12121, 12121, 12122, 12122, 12123, 12123, 12124, 12124, 12125, 12125,
   12126, 12126, 12127, 12127, 12128, 12128, 12129, 12129, 12130, 12130,
   12131, 12131, 12132, 12132, 12133, 12133, 12134, 12134, 12134, 12135,
   12135, 12136, 12136, 12137, 12137, 12138, 12138, 12139, 12139, 12139,
   12140, 12140, 12141, 12141, 12141, 12142, 12142, 12142, 12143, 12143,
   12143, 12144, 12144, 12145, 12145, 12146, 12146, 12147, 12147, 12147,
   12148, 12148, 12149, 12149, 12150, 12150, 12150, 12150, 12151, 12151,
   12152, 12152, 12153, 12153, 12154, 12154, 12155, 12155, 12155, 12156,
   12156, 12157, 12157, 12158, 12158, 12159, 12159, 12159, 12160, 12160,
   12161, 12161, 12162, 12162, 12163, 12163, 12164, 12164, 12165, 12165,
   12166, 12166, 12167, 12167, 12167, 12168, 12168, 12169, 12169, 12170,
   12170, 12174, 12174, 12175, 12175, 12176, 12176, 12177, 12177, 12178,
   12178, 12179, 12179, 12180, 12180, 12181, 12181, 12182, 12182, 12183,
   12183, 12184, 12184, 12185, 12185, 12186, 12186, 12187, 12187, 12188,
   12188, 12191, 12192, 12193, 12197, 12197, 12198, 12198, 12199, 12199,
   12200, 12200, 12201, 12201, 12202, 12202, 12203, 12203, 12204, 12204
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
  "\"RESET TRACE\"", "RETRY", "RETURN", "RETURNING",
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
     785,   786
};
# endif

#define YYPACT_NINF -2458

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2458)))

#define YYTABLE_NINF -1980

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2458,   316,   987, -2458,   165,   666, -2458,   698, -2458, -2458,
     670, -2458, -2458,    23,   407,   431, -2458,  1029, -2458,  1096,
    1196, -2458, -2458,   670,   670, -2458, -2458,   806,  1167,   792,
     908,   981,  1162,   780,   939,   991,  1355,  1337, -2458,  1070,
    1417, -2458, -2458,  1105, -2458,  1095,  1150, -2458,  1406,  1109,
    1122,  1177,  1302,  1194,   807,   807,   861, -2458,  1355, -2458,
     861, -2458, -2458,    36,  3083,  3665,  1149,   609, -2458,  1163,
    1174, -2458, -2458, -2458,  1199,  1612, -2458, -2458, -2458, -2458,
    1664,  1664, -2458, -2458,  1209, -2458,  1230, -2458, -2458,  1315,
    3989, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
     545, -2458, -2458, -2458, -2458, -2458, -2458, -2458,  1307, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458,   662, -2458, -2458,  1366, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458,  1204, -2458,    32,    67,
   -2458, -2458,   584,   592,  1218, -2458,    77,    77,  1304,  1321,
    1518,  1518,  1518,    77,  1339,  1518,  1711, -2458,  1391,  1612,
    1324, -2458, -2458, -2458, -2458,  1557, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458,  1522,  1317, -2458, -2458, -2458,
     112,   112,  -148,  1318, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458,   -93,  3071,  8002,
     -77,   716,   -97,  1264,   752,  -198,  4874,  5857,  1529,   359,
    1113,   752,  1270,  1335, -2458, -2458,  5857, -2458, -2458,   752,
    1277,  6680,  1270,  5020,  5857, -2458,   902,  8478,  1264,  1270,
    1264,  1270,    81,   607,  1270,  1264, -2458, -2458, -2458, -2458,
   -2458, -2458,  5857,  5168, -2458, -2458,  1277,    76,  1270,  1264,
    1270,  1270,  1394,  1535, -2458,   539,  1336, -2458, -2458,  1338,
     -17,   649, -2458, -2458,  1395,  1380,  1742,  1518, -2458, -2458,
   -2458,   900, -2458, -2458, -2458, -2458, -2458,   707,  1749,  1518,
   -2458,    -2, -2458, -2458, -2458,  1518,  1518, -2458,  1518, -2458,
    1270,  1740,  1270,  1518,  1518,  1270, -2458,  1290,    20,  1344,
   -2458,  1589, -2458, -2458,  1293, -2458, -2458, -2458,   512, -2458,
     256, -2458,   383,  -149,   295, -2458, -2458, -2458, -2458,   857,
    1684, -2458,  1618, -2458,  1343,  1509,   737, -2458,  1270, -2458,
   -2458,  1345,  1346,  1349, -2458,  8186,   857,   857, -2458,  1350,
    1352,  1353, -2458, -2458, -2458,  1354,   857, -2458, -2458, -2458,
   -2458, -2458, -2458,  1357, -2458,  1349, -2458, -2458,  1695, -2458,
    5304, -2458, -2458, -2458, -2458,  1373, -2458, -2458,  1359,  1360,
    1361,  8186,  8105,  8002,  8105, -2458,   152,   685, -2458,  1668,
   -2458, -2458, -2458,   343,  1373, -2458, -2458,   -77, -2458,  1379,
   -2458,   857, -2458, -2458, -2458, -2458,  1707,  3703, -2458, -2458,
     -97, -2458, -2458, -2458,  1264,   566,  1509,  1709,   713, -2458,
    1451, -2458, -2458,  1343,  1373,  1264,  1712,  1487,  1141, -2458,
    1714,   745,  5387, -2458, -2458,  4639,  1202,  1241,  1715,   194,
    1348, -2458, -2458, -2458,  1716,    45, -2458, -2458, -2458,  4341,
   -2458, -2458,  1755,   545, -2458, -2458, -2458,   752, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458,  1409, -2458, -2458,   133, -2458,
    1277, -2458, -2458,     9, -2458, -2458, -2458, -2458, -2458, -2458,
    1385,  5857, -2458,  1402,  1725,  1822, -2458, -2458, -2458, -2458,
     902, -2458,  1456, -2458,  1414, -2458, -2458,  8529,     1,   862,
    1418,  1416, -2458,   929, -2458,  1426,  1738,   930, -2458,  1685,
   -2458,  1744,  1487,  1741,  1685,  1270,  1743,  1376, -2458,  8186,
    1726, -2458, -2458, -2458, -2458, -2458, -2458,  1619, -2458,   752,
   -2458, -2458,   474, -2458,   596,  1867, -2458,    54, -2458,  1750,
    1188,  4722,  1751,  5523, -2458,  1787,  1270,  1754,  5661,  1277,
   -2458, -2458,   756, -2458, -2458, -2458, -2458,  3536, -2458,  1718,
   -2458, -2458,  1234,  1758,  1793,  1761,  1685,  1449,  1513,  1661,
    1400,  1400,  1400,   121,  1460,  6582, -2458, -2458, -2458,  1408,
   -2458, -2458, -2458,  1609, -2458,    77, -2458,  1014, -2458,    78,
   -2458, -2458, -2458, -2458,  1518,  1519,  1672, -2458, -2458, -2458,
   -2458,  1042,  1518,  1412,  1471,  1830,  1518,  1125,  1270,  1679,
   -2458, -2458, -2458, -2458,  1680,  1459, -2458, -2458,  1290, -2458,
      85, -2458, -2458, -2458, -2458, -2458, -2458,  1289,   -49,  1518,
      65, -2458, -2458, -2458,  1478,   175, -2458,  1518,  1523,  1627,
   -2458, -2458,  1837, -2458, -2458,  1270, -2458, -2458,  6926,  1819,
    8002,  1473, -2458, -2458,   163, -2458,  1490,  8002,  8002,  7433,
   -2458, -2458,  1373, -2458,  1431,  1433,  8002,  8002,  8002,  8186,
    1434,  8186, -2458, -2458, -2458,  5880,  1752, -2458,   737,  8002,
   -2458,  8186,  8002, -2458,  1373, -2458, -2458, -2458,  1075, -2458,
    1729,  8002,  8002,  8002,  8002,  8002, -2458,  1572, -2458,  1613,
    1699, -2458, -2458, -2458, -2458, -2458, -2458, -2458,   566, -2458,
   -2458, -2458,  1103,   689,  1270, -2458, -2458, -2458, -2458, -2458,
    8002,  1686, -2458,  1473, -2458,  1264, -2458, -2458, -2458, -2458,
    1578, -2458, -2458, -2458, -2458, -2458,  1666,  1797, -2458, -2458,
    4639,   113,   745,   745,   745,   745, -2458, -2458,  5857,  5880,
   -2458, -2458, -2458, -2458,   359,   187, -2458,  1450, -2458,  1453,
   -2458, -2458, -2458, -2458, -2458,  1335, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458,  4189, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,    -8, -2458,
    1839,  1351,  1789, -2458,  8186,    82, -2458, -2458,  1601, -2458,
   -2458,    56,  8002, -2458,  1516,   752, -2458, -2458,  5880, -2458,
    1458,  1578, -2458, -2458, -2458, -2458, -2458,  1809,  1270,   -77,
   -2458,   847, -2458, -2458, -2458, -2458,  1487,  6680, -2458, -2458,
   -2458,  1748, -2458, -2458,  1578,  1850, -2458, -2458,  1270,  1850,
    1521, -2458, -2458,  1373, -2458,  1524, -2458, -2458,   643,  1289,
   -2458, -2458,  4493, -2458,  1936,   773,    55, -2458, -2458, -2458,
    1518, -2458,   437,  5857, -2458, -2458,    86, -2458, -2458,  1270,
   -2458,  1939, -2458,  1791, -2458, -2458,  5880, -2458,  1672, -2458,
   -2458,  8186, -2458, -2458, -2458, -2458, -2458,  1939,  1756, -2458,
   -2458,   847, -2458,  1528,  1590,  1621, -2458, -2458, -2458,  1626,
    1534, -2458,  1536, -2458, -2458,  1915, -2458,   701, -2458, -2458,
    1537, -2458, -2458, -2458,  1982,  1538, -2458, -2458,  1672, -2458,
   -2458, -2458,   726, -2458, -2458, -2458,  1731,  1286, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458,  1125, -2458,  1548, -2458,  -110,
   -2458,  1599, -2458, -2458, -2458, -2458,  1753,   -49, -2458,  1782,
      77,    77, -2458,  1289,   800, -2458,  -120, -2458, -2458, -2458,
    1671, -2458,  1951,   827,  1518, -2458,  1506,  1562, -2458, -2458,
     398, -2458, -2458,  1518,   944,  6926, -2458, -2458, -2458,   819,
    1571,  2275, -2458,   944, -2458, -2458, -2458,  1505,  1507, -2458,
    8186,   944,  1792,  1598,  1733, -2458, -2458,  1762, -2458, -2458,
   -2458, -2458,    29,   982,  8002, -2458, -2458, -2458,   149, -2458,
    1270,   229,   963,  1573,   267,  1580, -2458,   268, -2458, -2458,
      27,  1585,  1588,  1593,   310, -2458,  1373, -2458,  1594, -2458,
     320,  1597,  1509,   543, -2458,   -55,   -72,   752, -2458,  1099,
    1602,   325, -2458,  1592,  1572,   685,   685, -2458, -2458, -2458,
     752, -2458,  1600,   -77, -2458,  1348, -2458, -2458,  1652, -2458,
    1688, -2458,   560,  1518, -2458, -2458, -2458,  1407,  1008, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,    34, -2458,
   -2458,  2312, -2458, -2458,  1639, -2458, -2458, -2458, -2458,  1858,
     543,  1861,    35, -2458, -2458, -2458, -2458,  2053, -2458,  1616,
     135, -2458, -2458,   187, -2458, -2458, -2458, -2458,  1759, -2458,
   -2458, -2458,  1946,  1928,  1335, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458,  1704,  1335, -2458,  1620, -2458,  2031, -2458, -2458,
   -2458,  6536, -2458,  8186,  2964, -2458, -2458, -2458,  1955,    40,
    1098,   654,   752,   752,   543,  1876,   627,  1264,  1942, -2458,
   -2458, -2458,  2080, -2458,  1888, -2458, -2458, -2458, -2458,  1748,
   -2458, -2458, -2458, -2458,  1270,   731,   494, -2458,  1574, -2458,
    1575,  8186,  1776,  1016, -2458,   149, -2458, -2458, -2458,  5857,
    1289,  1289,  1289,  1289,  1289,  1289,  1289,  1289,   773, -2458,
     444,  1008,   617, -2458,  1654,  1654,  -113,  5763,  1270,   543,
    1885,  1629, -2458,  1635,  2090,  1270,  -161,  1578,  2094,    32,
   -2458,  1636,  1696,  1705,  1595,    59,  1270, -2458, -2458, -2458,
      59,  2016,  1518,  1263,  1263,  1518,     8,  1831,  1518,  2086,
   -2458,  1799, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458,    77,   101, -2458, -2458,  1660, -2458,  1921, -2458,
      24, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,   789,
   -2458,   107, -2458,  1125, -2458,  1780, -2458, -2458,  1753, -2458,
      77, -2458, -2458, -2458, -2458, -2458,    63,  1603, -2458,   114,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,   648, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458,  2069, -2458, -2458, -2458,
   -2458, -2458,  1330, -2458,  1155, -2458, -2458, -2458, -2458,  1811,
    1811, -2458, -2458,  1811,   329, -2458,  1518, -2458, -2458, -2458,
   -2458,  1518, -2458, -2458, -2458, -2458, -2458,    53, -2458, -2458,
    2061,  1697, -2458, -2458,   123, -2458,  1518, -2458,  2112, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458,   944, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458,  8002,  7540,   982, -2458,
   -2458, -2458,  1451,  7668,  1359,  7771,  1359, -2458,  1270,  1359,
    1359,  1359,  8186, -2458,   -51,  1359,   163, -2458, -2458, -2458,
    1818,  1698,     2,  1917,   543,  7874,  1359,  1359,   823, -2458,
   -2458, -2458, -2458, -2458,   545, -2458, -2458, -2458,   423, -2458,
    8002, -2458, -2458, -2458, -2458,  1824,  1892, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458,  1518, -2458,   651, -2458, -2458,
    1287,  1518, -2458, -2458, -2458, -2458, -2458,   130,  1518, -2458,
   -2458,   752, -2458,   752,  1966, -2458,   628,    42,   187, -2458,
   -2458, -2458,  2053,  1270, -2458, -2458, -2458, -2458,  1615,  1596,
     225,  1624,   823,  8186, -2458, -2458,  2091, -2458,  1173, -2458,
   -2458,  2964, -2458,  1173,  1943,  1948, -2458,  1722, -2458, -2458,
    1518, -2458, -2458,  1900,  1823, -2458, -2458,   752, -2458,   752,
    1820,  1820,  1828, -2458,  1251, -2458, -2458, -2458,  1270,  5857,
     154, -2458, -2458, -2458, -2458,  1849,  2015,  1008, -2458,  1187,
   -2458, -2458, -2458, -2458,  1575, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,   -16, -2458,
    1270, -2458, -2458, -2458,  1044, -2458, -2458, -2458,  8002, -2458,
    5857,  5857,   -88,  1813, -2458, -2458, -2458,  1451, -2458,   752,
   -2458,   823, -2458,  1838, -2458,  8186, -2458,  2033,  1713, -2458,
     494, -2458,   568, -2458,    32, -2458,  1690,  1745, -2458,   162,
   -2458,  1595, -2458,  1958,  1710,  7072,   691,  1959, -2458,  1672,
    1637,  1518,  2086,  1647,   -53,   375,  1672,  1655, -2458,  1518,
   -2458, -2458, -2458,   -28,  1420, -2458, -2458, -2458,  2197, -2458,
    2016,  1264, -2458, -2458, -2458, -2458, -2458,   789, -2458,  1912,
   -2458, -2458,  1940, -2458,  1664,  1078,  1664,  1708, -2458, -2458,
   -2458, -2458, -2458,    88, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458,   398,   398,   398, -2458, -2458, -2458, -2458,   398,
     398, -2458,  1518,  1518,   412,   412,   398, -2458,   329, -2458,
     963, -2458,  1089,   -57, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458,  1969, -2458, -2458, -2458,
   -2458, -2458, -2458,  1971, -2458, -2458,  1108, -2458, -2458, -2458,
   -2458, -2458,   -27,    97, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458,   889, -2458, -2458, -2458, -2458, -2458, -2458,
    2759,   398, -2458, -2458,  1509, -2458, -2458, -2458, -2458,   664,
     398,   412,   412,   398,   543,  1808,   543,  1815, -2458, -2458,
    5857, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
    1596, -2458,  2076, -2458,  1335, -2458,  1173, -2458,  1173,   823,
    1717,  1717, -2458,  2175,  2147, -2458, -2458, -2458, -2458,   -91,
    1270, -2458, -2458, -2458,   543, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458,  1190, -2458,  2139,  1759,  1923,  1949, -2458,   686,
   -2458, -2458, -2458,   905, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458,  1925, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458,   963, -2458, -2458, -2458, -2458, -2458, -2458,  1890,  1719,
    1518,   -57,   543,  1692, -2458,  2090, -2458,  1972,  2097,  1972,
     -88,  1172, -2458, -2458,  1378, -2458,    32, -2458,  1739,   170,
   -2458, -2458,  1270, -2458,     3, -2458, -2458,   811,   851,   906,
     934,   952,  1689, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
    1816, -2458,    87, -2458, -2458, -2458, -2458,  1270,  1968, -2458,
   -2458, -2458,   555, -2458, -2458, -2458,  1518, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458,   942,   497, -2458,  1687, -2458,  1219,
   -2458,  1757, -2458,  2014, -2458, -2458, -2458,  1647, -2458, -2458,
   -2458, -2458, -2458, -2458,  1952,    62,  1972,   680,  1518, -2458,
   -2458,  1518, -2458,  1831,  1487,   860, -2458,  1798,  1518,  2157,
     227,   -68,    16,  1458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458,  1781, -2458,  1953, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458,  2182,  1518,  1264,  1264,   789, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458,   -23, -2458, -2458,
   -2458, -2458, -2458,   445,   398, -2458,  1399, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,  1922,
      51,  1509, -2458, -2458, -2458, -2458, -2458,  1270, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,   752,
   -2458,   752, -2458, -2458, -2458, -2458, -2458, -2458,  2176,  2116,
   -2458, -2458,  1173, -2458,  5857,  5857, -2458, -2458,  1886,  1264,
     859, -2458,  1270, -2458, -2458,  1843,  5857,  1967, -2458,  1518,
     949, -2458, -2458,   579,  1976,  1977, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458,  1270, -2458, -2458, -2458,
   -2458,  1769, -2458, -2458,  1270,  1972, -2458,  1270, -2458, -2458,
   -2458, -2458, -2458,  1947,  2078, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458,   170, -2458,  1790, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
    1721, -2458, -2458,  2198,  1788, -2458, -2458, -2458, -2458, -2458,
    7469,  2226,  1841,  1841, -2458,  1509,  1577,  1577, -2458, -2458,
    1672,   221,  1270, -2458, -2458, -2458, -2458,  1672, -2458,  1832,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,   480,   480,
    1518,  1900, -2458, -2458,   990, -2458,  1043,  1518,  1518,  1518,
    1518, -2458,  1650, -2458,   627,  1518,  1831, -2458,  1840,  1637,
    1264, -2458,  1919,  2239, -2458,  2148, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,  1270, -2458,
     -57,   -57,  5857, -2458, -2458, -2458, -2458,  1518,  1264,  1264,
    1914, -2458, -2458, -2458,  1760, -2458,  1270, -2458, -2458,  1849,
    2015, -2458, -2458, -2458, -2458,  1220, -2458, -2458,  1270, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458,  1903,   725,   644, -2458,
     170, -2458,  1972,  2063,  1672,  1803, -2458,  2004, -2458,  2157,
   -2458, -2458,  1577,  1800, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458,  1270, -2458,    21,  1711, -2458,   612, -2458, -2458, -2458,
   -2458,   322,  1518, -2458, -2458,  1674, -2458, -2458,   375,  1833,
    1270,  1270, -2458, -2458, -2458, -2458,  1270,  1518, -2458, -2458,
   -2458,  1672, -2458,   789,  1801, -2458, -2458, -2458, -2458,   -77,
    1264,  1518, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458,  1274, -2458, -2458, -2458, -2458, -2458,  1920,
    2161, -2458,  1277, -2458,  6371, -2458, -2458,   725,  1806,  1857,
   -2458,  1810, -2458,  1763,  1672,  1788, -2458, -2458,  2158, -2458,
   -2458, -2458, -2458, -2458,   375,   375, -2458, -2458, -2458, -2458,
    2083, -2458, -2458,  1757,  1672, -2458, -2458, -2458, -2458,  1270,
   -2458, -2458,   505,   505,  2271, -2458, -2458, -2458, -2458, -2458,
     505,   505,   514, -2458, -2458, -2458,  -168, -2458, -2458,   195,
   -2458, -2458, -2458, -2458,   -77, -2458,  1905,  1852,   -35,  1759,
   -2458,  1821, -2458,  1825, -2458,  1827,  1518, -2458, -2458,  2062,
    1759, -2458, -2458, -2458,  2261,  1711, -2458,   -33, -2458, -2458,
   -2458, -2458,  1537, -2458, -2458, -2458, -2458, -2458,  1518,  1270,
    1772, -2458,  1772, -2458, -2458,  1270, -2458,  1295, -2458, -2458,
   -2458,    80,   758, -2458, -2458, -2458, -2458,   170, -2458, -2458,
    1270,  2071,  1098,   375,  2181,  1853, -2458, -2458,  1270,  1270,
     -32, -2458, -2458, -2458, -2458, -2458,  1954,   -54,    80, -2458,
   -2458,  1835,    79,  7259, -2458,  2071, -2458,  1939, -2458,  1900,
   -2458,  1759, -2458,  1779, -2458,  1270,  1987, -2458, -2458,  1759,
   -2458, -2458,  1991,  1270, -2458, -2458,  1518,  1518,  2086,  1427,
   -2458, -2458, -2458, -2458,  2098,  2125, -2458,  1518, -2458,   406,
   -2458,  1287,  1518,  6680, -2458, -2458, -2458, -2458,  1811, -2458,
    1672, -2458,  2251, -2458, -2458, -2458,  1270, -2458, -2458,  1270,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,  2101,
    1811, -2458,  1795,  1518,  1270,    83,   -10,   605, -2458, -2458,
     445, -2458, -2458,  1518,  2086,  2050,  1796, -2458, -2458, -2458,
    1270,   398, -2458, -2458, -2458, -2458,   398, -2458,  1518,  1803,
    1518, -2458, -2458, -2458,  1518, -2458,  1795, -2458,  1270, -2458,
     737, -2458, -2458, -2458,  1300, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458,  1264, -2458, -2458, -2458, -2458,  1410,   -63,
   -2458,  1270, -2458, -2458, -2458,   923, -2458,   445,   923, -2458,
    1270, -2458, -2458,  1329, -2458, -2458,  2050, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458,   398, -2458, -2458, -2458,
     398,  1303,  1518,  1518,  1384, -2458, -2458, -2458, -2458, -2458,
   -2458,  1631, -2458, -2458, -2458, -2458, -2458,  1518,  2050,  2050,
   -2458,  2099,  1518,  1518, -2458,  2087,  2050, -2458, -2458, -2458,
    2050,  2050,  2089,  1387,  2086,  2106,  1672,  1804,  1518,  1509,
   -2458,  1518,  1518,  1270, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458,    -3, -2458,   842,
   -2458, -2458, -2458,  1387,  2086, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458,   162, -2458,  1518,  1788, -2458,  8336,  8336,  1805,
    2203,  2126, -2458,  1672,    -3, -2458, -2458,  1672,   842, -2458,
   -2458,   162, -2458, -2458,    -3,  1803, -2458,  1451,  8208, -2458,
   -2458,  1003,  1312, -2458, -2458,  1333, -2458, -2458, -2458, -2458,
     -46,   -46, -2458, -2458, -2458, -2458, -2458,  8336, -2458, -2458,
   -2458, -2458, -2458, -2458,  2158, -2458,  1759, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458,  2008, -2458,  2008, -2458,  2281,  1897,
      57,  2003, -2458, -2458,  8336,  1672, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458
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
       0,   793,   867,   876,   882,   889,   931,   937,   951,   946,
     952,   953,   961,  1008,  1017,  1020,  1046,  1057,  1060,  1063,
    1055,  1069,  1076,  1098,  1102,  1141,  1143,  1147,     0,  1153,
    1168,  1192,  1222,  1223,  1226,  1227,  1232,  1241,  1242,  1255,
    1291,  1309,     0,  1343,  1357,  1365,  1367,   721,  1371,  1374,
    1377,  1428,   741,   742,   743,   744,   745,   746,   747,   748,
     750,   749,   751,   752,   753,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,   776,   777,   778,
     779,   780,   781,   782,   783,   784,   785,   786,   787,   788,
     789,   790,   740,   294,   301,   302,   362,   296,   365,     0,
     181,   183,   184,    64,    58,    99,     0,     0,     0,  1951,
    1905,  1905,  1905,     0,     0,  1905,  1878,   118,    84,   101,
       0,   104,   106,   107,   108,   154,   110,   109,   111,   112,
     113,   114,   115,   116,   117,     0,     0,    25,    18,    19,
     704,   704,     0,     0,  1786,  1787,  1788,  1789,  1790,  1791,
    1792,  1793,  1794,  1795,  1796,  1797,  1798,  1799,  1835,  1836,
    1837,  1838,  1839,  1840,  1841,  1842,  1843,  1844,  1845,  1846,
    1847,  1848,  1849,  1850,  1851,  1852,  1853,  1854,  1800,  1801,
    1802,  1803,  1804,  1805,  1806,  1807,  1808,  1809,  1810,  1811,
    1812,  1813,  1814,  1815,  1816,  1817,  1818,  1819,  1820,  1821,
    1822,  1823,  1824,  1825,  1826,  1827,  1828,  1829,  1830,  1783,
    1831,  1832,  1833,  1834,   792,  1784,  1785,     0,     0,     0,
       0,   893,     0,     0,     0,     0,     0,     0,     0,  1516,
    1048,     0,     0,  1970,   916,   915,     0,  1068,  1516,     0,
       0,     0,     0,     0,     0,   791,     0,  1180,     0,     0,
       0,     0,     0,     0,     0,     0,  1339,  1342,  1329,  1340,
    1341,  1331,     0,     0,  1366,  1364,     0,   739,     0,     0,
       0,     0,     0,   525,   297,  1750,     0,  1585,   298,     0,
    1766,   270,   187,  1877,     0,     0,     0,  1905,  2013,    82,
      63,  1876,    68,    70,    71,    72,    73,  1876,     0,  1905,
      57,    60,  1607,  1606,   129,  1905,  1905,  1952,  1905,  1906,
       0,     0,     0,  1905,  1905,     0,  1879,     0,  1905,     0,
      48,     0,   102,   105,     0,   153,    34,    28,  1905,  1875,
     704,   701,   707,     0,   704,   716,   717,   691,   816,  1686,
     865,   795,   815,  1676,  1680,  1930,     0,  1729,     0,  1724,
    1730,     0,     0,  1736,  1709,     0,  1572,  1574,  1705,     0,
       0,     0,  1727,  1710,  1630,     0,  1576,  1708,  1728,  1706,
    1731,  1732,  1711,     0,  1726,  1736,  1725,  1707,   874,  1624,
     872,  1616,  1619,  1618,  1622,  1701,  1703,  1623,  1733,     0,
       0,     0,     0,     0,     0,   877,     0,  1561,  1564,  1566,
    1569,  1639,  1571,  1755,  1637,  1638,  1596,   883,   884,     0,
    1592,  1594,  1593,   896,   894,   895,   929,     0,  1655,   936,
     932,   933,   935,  1654,   938,   941,  1930,   949,     0,  1578,
    1769,  1611,  1681,  1685,  1612,     0,   959,  1944,  1705,   975,
    1006,  1457,  1614,   970,   972,   969,     0,  1618,  1015,     0,
     899,  1018,  1027,  1026,  1044,     0,  1023,  1025,  1515,     0,
    1050,  1054,  1052,  1055,  1053,  1047,  1058,  1059,  1609,  1061,
    1062,  1971,  1064,  1590,  1056,  1966,  1514,  1077,  1079,  1586,
    1099,  1100,  1103,     0,  1105,  1106,  1107,  1142,  1295,  1670,
    1671,     0,  1144,     0,  1151,     0,  1161,  1158,  1160,  1159,
    1154,  1155,  1162,  1182,  1596,  1980,  1169,  1180,  1171,     0,
    1178,     0,  1656,  1593,  1658,     0,  1220,  1761,  1224,  1431,
    1581,  1230,  1944,  1239,  1431,     0,  1253,  1246,  1582,     0,
       0,  1589,  1256,  1257,  1258,  1259,  1260,  1261,  1283,  1262,
    1286,  1263,     0,  1587,     0,     0,  1669,  1685,  1292,  1327,
    1314,  1332,  1355,     0,  1346,  1349,     0,  1362,     0,  1368,
    1369,   727,   733,   722,   723,   724,   726,     0,  1372,     0,
    1673,  1375,  1946,  1394,  1380,  1442,  1431,     0,     0,   528,
       0,     0,     0,   367,     0,     0,   371,   372,   370,     0,
     300,   303,   185,     0,  1767,     0,   282,   278,   179,     0,
     273,   275,   276,  2012,  1905,     0,     0,    67,    69,    65,
      83,  1876,  1905,     0,     0,     0,  1905,     0,     0,     0,
     175,  1599,   173,   178,     0,     0,   177,  1608,   156,   157,
    1907,   160,  1691,  1265,  1264,   119,   123,   126,  1934,  1905,
       0,    85,   103,   155,     0,     0,   702,  1905,     0,   713,
     705,   706,   718,  1991,  1992,     0,   866,   794,   817,     0,
       0,  1678,  1679,  1931,     0,  1702,     0,     0,     0,     0,
    1722,  1625,  1626,  1627,     0,     0,     0,     0,     0,     0,
       0,     0,  1723,   875,   868,     0,     0,  1617,     0,     0,
    1712,     0,     0,  1640,  1641,  1642,  1568,  1636,     0,  1567,
    1757,     0,     0,     0,     0,     0,  1756,   880,   885,   887,
       0,   930,   890,  1657,   898,   891,   897,   934,   941,  2003,
    2004,   939,     0,   942,     0,   950,   947,  1988,  1987,  1579,
       0,  1771,  1580,  1683,  1684,   956,   957,   960,   954,  1945,
    1205,  1007,   962,   736,   736,   967,  1463,  1460,   971,   968,
    1615,  1979,  1457,  1457,  1457,  1457,  1016,  1009,     0,     0,
     900,  1019,  1045,  1021,  1516,  1516,  1022,  1029,  1030,   736,
    1541,  1542,  1543,  1537,  1522,  1970,  1529,  1549,  1552,  1551,
    1553,  1545,  1536,  1535,  1540,  1539,  1538,  1544,  1524,  1528,
    1546,  1548,  1550,  1526,  1527,  1523,  1525,  1517,  1518,  1530,
    1531,  1532,  1533,  1534,  1521,  1051,  1049,  1610,  1066,  1967,
     736,  1081,     0,  1101,     0,  1128,  1112,  1104,  1109,  1110,
    1111,  1299,     0,  1672,     0,     0,  1152,  1148,     0,  1156,
    1979,  1205,  1170,  1176,  1177,   736,  1173,  1516,     0,     0,
    1181,     0,  1221,  1193,  1762,  1763,  1944,     0,  1225,  1231,
    1228,  1195,  1240,  1233,  1205,  1248,  1254,  1243,     0,  1248,
       0,  1647,  1649,  1650,  1651,     0,  1284,  1287,     0,     0,
    1588,  1267,     0,  1266,     0,     0,  1683,  1328,  1310,  1316,
    1905,  1317,  1312,     0,  1330,  1334,     0,  1356,  1344,     0,
    1347,  1874,  1348,     0,  1363,  1358,     0,  1370,   734,   732,
     725,     0,  1947,  1948,  1376,  1395,  1378,  1874,     0,  1443,
    1429,  1433,   363,     0,     0,   531,   380,   412,   415,     0,
       0,   368,     0,   378,   373,   379,   376,  1905,  1768,   188,
    1886,   279,   280,   281,  1861,     0,   271,   274,     0,  2011,
      76,    66,     0,  1600,    75,    59,     0,     0,  1698,  1694,
    1699,  1697,  1695,  1700,  1696,   164,   165,   167,   176,   171,
     169,     0,   158,  1909,  1908,   161,     0,  1934,  1937,  1936,
       0,     0,   120,   124,    87,    26,    37,    40,    44,    43,
    1942,    38,    39,     0,  1905,   714,     0,     0,   692,  1687,
    1869,  1871,   822,  1905,  1444,   818,   819,   821,   823,     0,
       0,     0,   811,  1444,  1986,  1985,   808,   800,   802,   803,
       0,  1444,     0,     0,     0,   826,   806,     0,   814,   797,
     813,   798,  1556,  1554,     0,  1677,  1644,  1643,     0,  1629,
       0,  1556,  1554,     0,  1556,     0,  1738,  1556,  1573,  1575,
    1556,     0,     0,     0,  1556,  1633,  1634,  1635,     0,  1577,
    1556,     0,  1930,  1466,   873,  1685,  1612,     0,  1704,     0,
       0,  1556,  1570,  1759,   880,  1560,  1559,  1563,  1562,  1565,
       0,   878,     0,     0,  1595,   899,   940,   945,     0,  1891,
       0,  1613,  1466,  1905,  1770,  1682,   958,  1890,  1502,  1206,
    1207,  1462,   737,  1465,  1458,  1464,  1459,  1461,     0,   981,
     980,   973,   976,   978,     0,   965,   966,   963,   964,     0,
    1466,     0,   906,  1024,  1039,  1041,  1040,  1034,  1036,  1042,
    1516,  1031,  1028,  1516,  1032,  1547,  1519,  1520,  1932,  1065,
    1591,   736,  1073,  1074,  1970,  1089,  1090,  1092,  1094,  1095,
    1091,  1093,  1084,  1970,  1080,     0,  1129,     0,  1131,  1130,
    1132,  1114,  1124,     0,     0,  1108,  2010,  1933,     0,  1301,
       0,  1896,     0,  1145,  1466,     0,     0,     0,  1174,  1187,
    1183,  1188,  1184,  1189,     0,  1179,  1438,  1437,  1186,  1195,
    1432,  1666,  1667,  1668,     0,     0,  1235,   736,     0,  1247,
       0,     0,     0,     0,  1285,     0,  1289,  1288,  1281,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1269,  1270,
    1764,  1502,     0,  1333,  1962,  1962,  1353,     0,     0,  1466,
       0,     0,   735,     0,  1751,     0,  1353,  1205,  1855,   365,
     526,     0,     0,   626,     0,   438,     0,   369,   375,   419,
     381,  1880,  1905,     0,     0,  1905,  1880,  1923,  1905,  1859,
     299,     0,   304,   307,   308,   309,   310,   311,   312,   313,
     314,   315,     0,     0,   190,  1887,  1964,  1862,  1890,   272,
       0,    79,    81,    80,    77,    78,    61,   135,   134,   149,
     145,   150,   131,   148,   146,   132,   133,   147,   130,   136,
     137,   139,   166,     0,   170,     0,   174,  1692,   159,   162,
       0,  1935,   127,   121,   122,   125,     0,     0,    86,     0,
      90,    42,  1943,    36,    41,   708,   709,   712,     0,   703,
     719,   721,  1661,   830,  1659,  1660,     0,  1450,  1451,  1455,
    1456,   796,  1452,   736,  1447,   736,   820,  1984,  1983,  1925,
    1925,   828,   829,  1925,     0,   835,  1905,   837,   838,   839,
     864,  1905,   840,   841,   842,   843,   844,     0,   845,   846,
     848,     0,   849,   850,     0,   851,  1905,   836,  1857,   854,
     863,   857,   824,   856,   812,   799,   801,  1444,   809,   804,
     805,   827,   807,  1557,  1558,  1688,     0,     0,     0,  1646,
    1628,  1645,  1769,     0,  1733,     0,  1733,  1737,     0,  1733,
    1733,  1733,     0,  1716,     0,  1733,     0,   736,   736,   869,
    1472,  1469,  1683,  1684,  1466,     0,  1733,  1733,     0,  1758,
     879,   881,   888,   886,   910,   944,   943,   948,     0,  1210,
       0,   736,   736,   955,  1503,  1509,  1506,   739,   987,   988,
     985,   984,   986,   983,   977,  1905,   989,     0,   992,   993,
    1884,  1905,   996,   997,   979,   998,   999,     0,  1905,  1001,
     982,     0,  1010,     0,   901,   902,   707,     0,  1516,  1516,
    1038,   736,  1035,     0,  1072,   736,  1075,  1070,     0,     0,
    1096,     0,     0,     0,  1125,  1127,     0,  1120,  1134,  1121,
    1122,  1113,  1116,  1134,     0,  1649,  2009,     0,  1982,  1293,
    1905,   504,   505,  1910,     0,  1897,  1300,  1146,  1149,     0,
    1938,  1938,     0,  1163,  1164,  1583,  1175,  1172,     0,     0,
    1197,  1196,   736,   736,  1229,  1491,     0,  1502,  1236,     0,
    1249,  1516,  1516,  1244,  1250,  1268,  1290,  1280,  1282,  1272,
    1273,  1274,  1278,  1275,  1279,  1276,  1277,  1271,  1765,  1326,
       0,  1323,  1324,  1318,     0,  1311,  2008,  2007,     0,  1963,
    1337,  1337,  1475,     0,  1351,  1350,  1352,  1769,  1359,     0,
     728,     0,  1752,  1381,  1382,     0,  1385,  1388,  1392,  1386,
    1235,  1856,     0,   364,   365,   529,     0,     0,   290,  1907,
     413,     0,   439,     0,   410,  1905,  1866,     0,  1881,     0,
       0,  1905,  1859,     0,     0,     0,     0,     0,  1924,  1905,
     358,  1860,   359,     0,     0,   360,   305,   306,  1944,  1965,
    1880,     0,  1999,  2000,    74,   138,   141,     0,   168,     0,
     163,   128,     0,    96,    33,     0,    33,     0,    88,    91,
     710,   711,   721,   739,   834,  1445,  1453,  1449,  1446,  1448,
    1454,  1926,     0,     0,     0,  1693,   825,  1662,  1663,     0,
       0,   855,  1905,  1905,  1512,  1512,     0,  1858,     0,   810,
    1555,  1689,     0,  1466,  1747,  1720,  1749,  1721,  1745,  1717,
    1718,  1719,  1743,  1740,  1741,  1715,  1613,  1474,  1471,  1467,
    1473,  1468,  1470,  1682,   870,  1734,     0,  1713,  1714,  1760,
    1652,  1653,   919,  1903,  1773,  1774,  1775,  1776,  1777,  1778,
    1779,  1780,  1772,     0,  1508,  1511,  1504,  1510,  1505,  1507,
       0,     0,   990,   991,  1930,   674,   676,   994,   995,     0,
       0,  1512,  1512,     0,  1466,  1578,  1466,  1578,   903,   904,
       0,   908,   907,   909,  1037,  1043,  1033,  1067,  1071,  1082,
    1085,  1086,  1882,  1078,  1970,  1083,  1134,  1648,  1134,     0,
    1901,  1901,  1119,  1135,  1136,  1117,  1123,  1118,  1981,  1303,
       0,  1911,  1297,  1898,  1466,  1939,   267,   268,   269,  1167,
    1157,  1584,     0,  1190,     0,  1932,     0,  1216,  1198,  1211,
    1204,  1200,  1213,     0,  1490,  1493,  1484,  1492,  1485,  1234,
    1237,     0,   736,   736,  1251,  1325,  1315,  1319,  1320,  1321,
    1322,  1313,  1335,  1338,  1336,   736,   736,  1345,  1481,  1478,
    1905,  1466,  1466,   730,  1373,  1751,  1384,  1894,  1390,  1894,
    1475,  1439,  1436,  1435,  1915,   527,   365,   532,     0,     0,
     416,   440,     0,   409,     0,   514,   444,  1953,  1953,  1953,
    1953,  1953,  1975,   445,   480,   482,   448,   449,   450,   451,
     452,   453,   476,   474,   475,   477,   478,   483,   481,   454,
    1949,   479,     0,   455,   441,   456,   457,     0,  1956,   459,
     460,   458,  1912,   462,   463,   461,  1905,   420,   421,   422,
     423,   424,   425,   442,   446,   447,   426,   427,   428,   429,
     430,   431,   432,   433,     0,     0,  1867,     0,   414,     0,
     382,   327,   236,   355,  2001,  2002,  1603,   336,  1601,  1994,
    1993,   329,  1605,  1604,  1921,  1878,  1894,     0,  1905,   333,
     332,  1905,   361,  1923,  1944,  1972,   252,     0,  1905,  1876,
    1910,   254,     0,  1979,   240,   189,   239,   191,   192,   193,
     194,   195,   196,     0,   197,     0,   198,   251,   199,   200,
     201,   202,   203,   204,  1872,  1905,     0,   277,     0,   140,
     172,    92,    93,    97,    94,    95,    89,   739,   831,   833,
     832,   859,   858,     0,     0,   861,     0,  1664,  1665,   860,
     853,   862,  1690,   871,  1735,   736,   736,   736,   892,   926,
     922,  1930,  1904,   913,   918,   917,   912,     0,  1209,  1208,
    1003,  1885,   675,   677,  1002,  1005,  1004,  1000,  1012,     0,
    1011,     0,   905,  1621,  1620,  1675,  1087,  1883,     0,     0,
    1115,  1126,  1134,  1902,     0,     0,  1137,  1138,     0,     0,
    1306,  1302,  1296,  1150,  1166,     0,     0,     0,  1201,  1905,
    1502,  1199,  1212,     0,     0,     0,  1215,  1238,  1245,  1252,
    1483,  1480,  1476,  1482,  1477,  1479,     0,  1361,  1360,  1396,
     729,     0,  1383,  1895,     0,  1894,  1387,     0,  1379,   736,
     736,  1430,  1441,  1499,  1496,  1440,  1916,  1917,  1434,   530,
     534,   627,   515,   517,   519,   411,   523,   524,  1954,   473,
     472,   465,   464,   471,   470,   469,   468,   467,   466,  1976,
       0,  1950,   511,   497,   491,   434,  1957,  1913,  1914,   512,
       0,   436,  1781,  1781,   418,  1930,     0,     0,   417,   383,
       0,   317,     0,   354,  1602,  1922,   338,     0,   320,  1958,
     347,   349,   353,   352,   348,   350,   346,   351,     0,     0,
    1905,  1910,  1973,  1974,   219,   255,  1944,  1905,  1905,  1905,
    1905,   264,  1863,   265,     0,  1905,  1923,  1873,     0,     0,
     283,   284,   287,   142,   143,     0,   847,   852,  2005,  2006,
    1513,   924,   928,   925,   920,   927,   921,   923,     0,   911,
    1466,  1466,     0,  1097,  1133,  1140,  1139,  1905,  1304,     0,
       0,  1294,  1298,  1165,     0,  1203,     0,  1194,  1219,  1491,
    1488,  1218,  1202,  1214,  1354,  1404,   731,  1389,     0,  1393,
    1498,  1501,  1494,  1500,  1495,  1497,   533,   629,   521,   518,
       0,   513,  1894,   493,     0,  1968,   443,     0,   435,  1876,
     484,   485,     0,     0,   392,   388,   391,   390,   389,   404,
     400,   402,   403,   405,   401,   406,   407,   408,   385,   396,
     397,   398,   393,   394,   395,   387,   384,   328,   319,   318,
     316,   356,  1597,   337,  1878,  1959,   325,   334,   331,   335,
     330,     0,  1905,   221,   220,   217,   254,   250,     0,     0,
       0,     0,  1864,  1865,   263,   266,     0,  1905,   253,   235,
     285,     0,   286,     0,     0,   914,  1014,  1013,  1088,     0,
    1307,  1905,  1516,  1217,  1486,  1487,  1489,  1869,  1427,  1426,
    1405,  1397,  1398,  1857,  1399,  1400,  1401,  1402,  1425,     0,
       0,  1391,     0,   535,     0,   633,   628,   630,     0,     0,
     516,     0,   520,     0,     0,   491,   492,  1969,   495,   437,
    1782,   386,   399,  1598,     0,     0,   339,   340,   341,   342,
       0,   321,  1893,   327,     0,   229,   230,   228,   227,     0,
     213,   214,   224,   224,     0,   212,   210,   211,   216,   215,
     224,   224,     0,   256,   257,   258,   259,   262,   237,     0,
     288,   144,   720,  1305,     0,  1191,     0,  1960,     0,  1932,
     536,     0,   634,     0,   631,     0,  1905,   498,   494,   499,
    1932,   502,   345,   344,  1868,  1878,   326,  1753,   225,   207,
     226,   208,  1886,   209,   206,   222,   205,   223,  1905,     0,
     246,   245,   246,   242,  1308,     0,  1961,     0,  1423,  1422,
    1421,     0,     0,   636,   637,   632,  1978,     0,   500,   502,
       0,   506,   501,     0,   323,   232,  1754,   218,     0,   260,
       0,   244,   243,  1424,  1990,  1989,  1940,  1417,  1411,  1412,
    1414,     0,  1905,  1955,   522,   506,   496,  1874,   489,  1910,
     343,  1932,   322,     0,   231,   261,     0,   249,  1941,  1932,
    1420,  1415,  1418,     0,  1413,   540,  1905,  1905,  1859,  1918,
     565,   539,   543,   544,     0,  1888,   652,  1905,   641,  1975,
     642,  1884,  1905,     0,   655,   650,   645,   651,  1925,   646,
       0,   649,   657,   654,   647,   653,     0,   658,   648,     0,
     669,   663,   667,   666,   664,   668,   638,   670,   665,     0,
    1925,   490,     0,  1905,     0,     0,     0,     0,  1419,  1416,
       0,  2028,  2029,  1905,  1859,     0,   537,   541,  1889,   545,
       0,     0,   639,   640,   643,   644,     0,   672,  1905,  1968,
    1905,   673,   671,   689,  1905,   510,   507,   508,     0,   324,
       0,   151,   152,   234,     0,  1997,  1998,   247,  1410,  1407,
    1409,  1408,  1403,  1406,   542,  1919,  1920,   553,   550,   377,
     566,   546,   547,   662,   661,   682,   688,     0,   685,   509,
     503,   233,   248,   549,  1995,  1996,   552,   567,   379,   548,
     680,   678,   681,   679,   683,   684,     0,   656,   686,   687,
       0,     0,  1905,  1905,     0,   554,   555,   556,   557,   558,
     559,     0,   569,   659,   660,  2015,  2014,  1905,     0,     0,
    2017,     0,  1905,  1905,   551,  1955,     0,   564,   560,  2016,
       0,     0,  1899,  1927,  1859,     0,     0,     0,  1905,  1930,
     568,  1905,  1905,     0,   574,   576,   585,   577,   579,   582,
     570,   571,   572,   581,   583,   586,   573,     0,   578,     0,
     580,   584,   575,  1927,  1859,   561,   563,   562,  1900,   624,
    1928,  1929,  1907,   610,  1905,   491,  1516,     0,     0,     0,
       0,     0,   618,     0,   608,   614,   617,     0,   611,   619,
     622,  1907,   613,   609,     0,  1968,   606,  1769,   602,  1631,
    2019,     0,     0,  2021,  2023,     0,  2027,  2025,   587,   591,
     595,   595,   589,   593,   588,   594,   625,     0,   616,   615,
     621,   620,   612,   600,   495,   623,  1932,   601,  1632,  2018,
    2022,  2020,  2026,  2024,   598,   590,   598,   592,     0,   487,
       0,     0,   597,   596,     0,     0,   486,   605,   603,   604,
     599,   607,   488
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2458, -2458, -2458, -2458, -2458,  2331, -2458, -2458, -2458, -2458,
   -2458, -2458,  2282, -2458,  1701, -2458, -2458, -2458, -2458, -2458,
   -2458,  2286,  2284,   -65, -2458, -2458, -2458,  1273, -2458, -2458,
   -2458, -2458, -2458,  2293, -2458, -2458, -2458,  2298, -2458, -2458,
    1956,   -44, -2458, -2458, -2458, -2458, -2458,  2152, -2458, -2458,
   -2458, -2458,   951, -2458, -2458, -2458, -2458,  2144,   -34, -2458,
   -2458, -2458, -2458,  1291, -2458, -2458, -2458, -2458, -2458,   976,
   -2458, -2458, -1669, -2458, -2458, -2458, -2458, -2458,  1638, -2458,
   -2458, -2458, -2458,  1313, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,  -985, -2458,
   -2458, -2458, -2458, -2458,   102, -2458, -2458, -2458, -2458, -2458,
    -162, -2458,   116, -2458, -2458, -2458,   -96, -2458, -2458, -2458,
   -2458,   110, -2458, -2458,  1676, -2458, -2458, -2458, -2458, -2458,
     106, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,   -86, -2458,
   -2458, -2458,   131, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -1265, -2458, -2458,  1706, -2458, -1823, -2285,  -672, -2458, -2458,
   -1197, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -1277,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,   687, -1843,
    -189,   173, -1985, -1023, -1784, -2458, -2458, -2458, -2344, -2458,
    -464, -2458, -2458,  -155, -2458,  -157,  -176, -2458,  -278, -1747,
   -2458, -1745, -2458, -1650, -2458, -2458,   210, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,  -437,
    -463, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -1233, -2458,  -413, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458,   -30, -2458, -2458, -2458,  -200,  -199,  -295,  -292,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458,  2174,  1093, -2458,   852, -2458, -2458, -2458, -2458, -1299,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458,   108, -2458, -2458,
     -20, -2458,  2352, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
    1325, -2458,  -684, -2458, -2458,  -682, -2458,   962, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458,  1257, -2458, -2458,
   -2458,  1924, -2458, -2458, -2458, -2458, -2458, -2458, -2458,  1252,
   -2458, -2458,   865, -2458, -2458,  -605, -2458, -2458, -2458,   326,
   -2458,   331, -2458, -2458, -2458, -2458,  1913, -2458, -2458, -2458,
    1617, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458,  1895, -2458, -2458,
   -2458,  1238, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458,  1576, -2458, -2458,
    1581, -2458, -2458,  1226,   873, -2458, -2458, -2458, -2458, -2458,
    1884, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458,   600,  1540, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458,  1543, -2458, -2458,   863,
   -2458,  1201, -2458, -2458, -1534,   594,   593, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,  1862,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -1132,
    1859, -2458, -2458, -2458,   846, -2458, -2458, -2458,  1189, -2458,
   -2458, -2458,  -836,   849, -2458, -2458,   578, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458,   791, -1460, -2458, -2458, -2458, -2458, -2458, -2458,
    1514,   838, -2458, -2458, -2458, -2458, -2458,  -506, -2458, -2458,
   -2458, -2458,  1169, -2458, -2458, -2458,  1844, -2458,  1836, -2458,
   -2458, -2458,  2129, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458,   824, -2458, -2458, -2458, -2458, -2458,  1845, -2458,
   -2458,  1158, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458,   561, -2458,  1164, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,   -80, -2458,
   -2458, -2458, -2458, -2458, -2458, -2458, -2458, -2458,   717, -2458,
    1480, -2458, -2458,  -898, -2458,  1059, -2458, -2458,  1062, -2458,
     898, -2458,  1653, -2458,  1656, -1032, -2458,   988, -2458,   993,
     574, -2458,   586, -2458,   590, -2458, -2458, -2458, -1575,   200,
   -1242, -2458, -2458,   327, -2458,   330, -1255,   581, -2458,   974,
   -2458,   984, -1499,  -923,  -302,  -816, -2458, -2458,  1630, -1182,
     869,   872,   874,   876,   793,   553,  -254,   926,   848, -2458,
    1224,   -21,  -722,  -253,   917,  1906, -1674,  -196,  -359, -2458,
    -611, -2458,  -270, -2264,  1724, -2296,  -397,  1475, -2458,   515,
   -1123,  -177,  1826,  -284,  -279, -2458,   625,   290, -2458,   699,
   -2458,  -724, -1261, -2458,  1243,  -568,  -828, -2458,  1022,  -324,
    2026, -1640,   777, -2458,   -64,  -332, -2458,  1217, -2458, -2458,
   -2458,  -293,  -438, -2458, -2458,  1182,  -460,  -489,  -379,  1152,
   -1412,  1159,  -329,  -208,  -440,   -76, -2458, -2458, -2458,   238,
    2088, -2458, -2458,   958, -2458, -2458, -2458, -2458, -2458, -2458,
   -2458, -2458, -2458, -2458, -2458, -1469, -2458, -2458,   328, -2458,
   -2458, -2458, -2458,   139, -1662, -2458, -2458, -2458, -1618, -2458,
   -2458,  -972, -1882, -1926, -1241, -2458, -2458,    31, -2458, -1159,
   -2458, -1791, -2458, -2458,   697, -2458,  -211, -1664, -1959, -2458,
   -2458, -2458, -2458, -1841, -1406,  -229,  -521, -1208,  1498,   955,
   -2458, -2458,  -526, -2458, -2458, -2458,  -172, -2458, -2458, -2458,
    1256, -2458,   992, -2457,  -837, -2458, -2458, -2458,  -321,   855,
   -1719, -2450, -2458, -2458,  1021, -2458, -2458,  -109, -2458,  1236,
   -2458, -2458, -2458,    61, -2458, -1546,  -235, -2458, -2458, -2458,
   -2458, -2458, -2458
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    12,
      57,    58,    59,    61,    18,    13,    23,    35,   428,    24,
      34,    80,    84,   236,   744,  1080,  1081,  1082,    19,    20,
      32,    33,    51,    52,   204,   400,   714,    53,   203,   390,
     391,   392,   393,   394,   395,   396,  1374,   397,   420,  1074,
    1408,  1409,  1410,  1735,    75,   218,   219,   220,   221,   222,
     418,   735,  1404,   736,   737,   223,   716,  1388,  1389,  1390,
    2068,  2273,  1391,  2683,   224,   425,   225,   728,   729,   730,
    1398,   226,  1055,  1056,   227,   228,  1394,   229,   230,   231,
     232,   233,   234,    47,    48,    71,   381,   202,   382,  1364,
    1718,  2047,  2048,  2480,  2481,  2482,  2385,  2526,  2519,  2049,
    2468,  2050,  2584,  2051,  2013,  2052,  2053,  2054,  2055,  2533,
    2561,  2056,  2057,  2058,  2059,  2060,  2485,  2061,  2062,  2262,
    2063,  1613,   698,   699,   700,   701,  1034,   702,  1030,  2270,
    2271,  2402,    29,   196,    30,    44,    67,   197,   198,   691,
     199,  1027,  1352,  1353,  2370,  1354,  2582,  2463,  2231,  1355,
    1356,  2031,  2378,  1357,  1358,  2373,  2456,  2457,  2458,  2459,
    1359,  2246,  2247,  1360,  2233,  1361,  1362,  1714,   373,  1329,
     374,   375,   683,   684,  1339,   685,  1024,  1025,  1696,  2228,
    2358,  2359,  2360,  2361,  2362,   686,  1943,   687,  1334,   688,
    1335,  2008,  1695,  1987,  1988,  1989,  2338,  1691,  1692,  1991,
    1992,  1993,  1994,  1995,  1996,  2776,  2876,  1997,  2335,  2445,
    2511,  2333,  2549,  2551,  2552,  1603,  2578,  2676,  2677,  1998,
    1999,  2000,  2001,  1690,  2328,  2192,  2193,  2440,  2003,   679,
    1684,  1015,  1936,  1333,  2190,  2326,  2433,  2542,  2572,  2601,
    2602,  2659,  2701,  2603,  2697,  2713,  2735,  2736,  2737,  2738,
    2739,  2740,  2656,  2700,  2742,  2755,  2780,  2781,  2838,  2865,
    2872,  2782,  2783,  2857,  2878,  2784,  2785,  2786,  2787,  2788,
    2789,  2814,  2815,  2818,  2819,  2790,  2791,  2792,  1688,  2327,
    2436,  2437,  2438,  2544,  2573,  2636,  1827,  1828,  2724,  2725,
    2726,  2730,  2637,  2638,    41,   752,  1421,    42,    89,   241,
     240,   430,   431,   432,   749,  1086,   243,  1088,  1742,   367,
     663,   664,  1923,  2170,   665,   666,  1321,  1191,  1192,  1537,
     667,    65,   142,   143,   317,   440,   758,   441,  1094,  1095,
    1096,  1119,  1097,  1441,  1442,  1098,  1472,  1473,   757,   144,
     318,   478,   786,   784,   145,   319,   495,  1171,   146,   320,
     507,   508,  1173,   147,   321,   516,  1175,   517,   815,   861,
    1212,  1564,  1565,  1566,  1802,   336,  2106,  2098,  2286,  2099,
    2284,  2100,   812,   148,   322,   520,   521,   149,   323,   524,
     821,   150,   324,   527,   826,   151,   152,   153,   325,   536,
     835,   838,   154,   326,   540,   541,   542,   543,   851,   544,
    1201,  1202,  1203,  1542,  1560,   842,   155,   327,   548,   857,
     156,   328,   551,   157,   329,   554,   555,   556,   866,   867,
     868,  1222,   869,  1217,  1218,  1570,   863,   158,   330,   565,
     337,   159,   331,   566,   160,   332,   569,   161,   333,   572,
    1229,   162,   163,   338,  1233,  1577,   164,   339,   577,   911,
    1242,  1580,  1850,  1851,  1852,  1853,   165,   340,   580,   166,
     341,   582,   583,   917,   918,  1254,   919,   920,  1591,  1592,
    1251,  1252,  1253,  1585,  1862,  1863,  1864,   167,   342,   168,
     343,   592,   169,   344,   594,   927,   170,   346,   600,   601,
     602,   931,  1880,   171,   347,   606,   935,  1617,   936,   607,
     608,   609,  1270,  1272,  1273,   172,   348,   616,  1285,  1887,
    1888,  1889,  1188,  1189,  1190,  2151,  1891,  2150,  2307,   943,
     173,   174,   349,   618,   175,   176,   350,   621,   950,   177,
     351,   623,  1627,  1628,   953,   178,   179,   352,   626,   959,
    1288,  1633,  1634,   957,   180,   353,   632,   738,   974,   633,
     634,  1308,  1309,   635,   636,   637,   638,   639,   640,   641,
     181,   354,   587,  1869,   921,  2142,  1259,  1599,  2140,  2301,
     182,   355,   649,  1311,   982,  1650,  1651,  1652,   978,   183,
     651,   984,  1912,   361,   184,   362,   652,   653,   654,   992,
    1665,  1662,   988,   185,   363,   657,   995,   186,   365,   187,
     366,   659,   188,   368,   668,   189,   369,   671,   190,   370,
     673,  1008,  1673,  1674,  1326,  1676,  1928,  2176,  1930,  1006,
    2171,  2315,  2421,  2422,  2423,  2692,  2424,  2568,  2569,  2593,
    2425,  2540,  2426,  2427,  2428,   191,   371,   675,   948,  1327,
    1278,  2181,  1010,  1431,  1748,  1432,  1433,  1745,  1434,  1435,
     845,  1196,   846,  1194,   847,  1509,  1791,  1510,  1789,  1511,
    1917,  2164,  1918,  2162,  1919,  1624,  2308,  2415,  1625,  1896,
    1897,  2182,  2324,  2183,  2322,  2184,  1533,  1534,  1818,  1535,
    1816,  1536,  2085,   575,   576,   558,   559,   897,   898,   899,
     900,   901,   902,   903,  1122,  1486,  1132,   497,   498,   499,
     500,   479,   528,   829,   619,   627,  1614,  1615,   581,   642,
     643,   908,   610,   510,   511,  2371,  2023,  1044,  2017,  2018,
    2024,   404,   731,   567,   530,   849,   480,   481,  2122,   482,
    2828,  1144,   502,  1128,  1490,  1593,  1856,   961,  1857,   522,
     611,  1423,  1756,  2086,  1280,  1424,   588,   646,   669,  1594,
    2124,   483,   443,   531,   532,   444,   761,   762,  1425,  1399,
    2816,  1057,   484,   485,   486,   487,   488,   489,   490,   790,
     770,  1151,  1148,  1141,  1133,  1135,   689,  1675,  2555,   807,
    1164,  1519,   946,  1654,   695,   832,  1184,  1812,  2340,   314,
     315,   316,  1682,  1768,  1712,  1368,  2394,  2009,  1099,  1100,
    2268,   433,   398,   417,  1699,  2128,  1829,  1366,  2660,  1180,
    2464,  2174,  1606,  2799,  2134,  2107,   410,  1066,  1872,  2219,
    2188,  2655,  2236,  1709,  1752,  2802,   764,  1260,  1070,  1876,
    2589,  1413,  2064,  1004,  2212,   408,  2200,  2005,  2376,  2537,
    1660,  1720,   910,  2448,   573,  2254,  2210,  2441,   615,  1600,
    1443,  1121,   830,  2566,   755,  2021,  2716,  2687,  1724,  1703,
     823,  2280,  1658,  1261,   399,  2747,  2753,  2841,  2842,  2843,
    2844,  2845,  2605
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     411,   412,   546,   378,   415,   824,   765,   660,  1017,  1018,
    1019,   840,   585,   720,  1271,   723,   237,   771,   726,  1317,
    1573,   645,    64,  1773,   442,  1939,   503,   557,  1530,   523,
     405,   970,  1758,   547,  1753,  1324,   413,  1754,  1225,   739,
    2015,  1940,  1934,  1626,   834,  2002,   983,  2067,   584,  1219,
     509,  1898,   568,   793,   612,   578,  1655,  1150,  2069,  1866,
     568,   960,   864,  1153,  1683,   496,   402,  1160,   376,   644,
    2454,   529,  1732,   833,   568,   670,  -695,   674,   402,  1035,
     715,  2259,  2260,  1722, -1932,   429, -1671, -1672,  -693,  2567,
     625,  1246,  2680,    87,  1256,  1267,   951,  1698,  2538,  2238,
    1483,  2509,  1483,  2101,   914,  1706,  1597,  1063, -1979,  1228,
    2275,   504,  2078,  2079,  2080,  1737,   534,  1023,  1286,  2081,
    2082,   416,  1743,   534,  1726, -1874,  2090,   525,  1653,   537,
     923,   534,  1841,  1538,  1539,  2864, -1701,  1210,  2177,   526,
    2138,  1247,  2095,  2596,  1090,   534,   933,   875,  1120,  2502,
    1527,  2028,   617, -1680,   622,   766,  1214,  2257,   834,   650,
    1892,  1885,   429,  -366,  1072,   518,  1450,  1199,   435,  1200,
   -1910,  2597,  2598,   672, -1932,  1871,   706, -1979,  1562,   446,
   -1868,  2110, -1868,  1256,  1063,   506,   423,   976,   713,  1068,
    2114,  2029,  2250,  2117,   717,   718,  1783,   719,  1921,   797,
     797,   797,   724,   725,   822,  1474,  1264,   740,  1214,  1721,
   -1678,   800,  2706,  1478, -1979,  2213,  1915,   745,  -695,   750,
    2095,   913,  -695,   438,   612, -1979, -1979,   523,    21,  2530,
    -693,  1067,  1608,  2559,  -693,  2239,  2586,   509,  2877,   798,
    1567,  2363,  2363,   505,   858,  1078,   409,   772,  1507,  1764,
    1076,  1314,   680,  2196,   506,   519,  1831,   912,   409,  1755,
    2590,  2528,  2585,  2019,  1248,   586,  2089, -1945, -1905,  1733,
    2684,   614,  1125,   535,  1319,  2096,  1716,  2570,   732,   693,
    2368,  -695,   732,   794,   504,   504,   504,  1668,   907,  2812,
      14,  2754,  2382,  -693,  2591,  -695,  -695,   409,   501,   907,
     997,  2529,  1483,   694,  2570,  2794,   429,  -693,  -693,  2261,
    1717,   631,  2197, -1979,   612,  2592,     3,   409,  1406,  1126,
     534,  1058,  2130,  1064,  2131,   377,  1129,  1040,   818,  1249,
     986,  2102,  2115,  2116,  2813,   733,   962,   734, -1966,   836,
    1483,  1483,   506,  2258,  1185,   429,  1245,   708,  1158,   732,
    1077,   454,  2685,  1079,  2686,   968,  1758,  2363,   696,   534,
     568,   605,   439,   993,  2587,   907,  2531,   751,  2854,  1508,
     534, -1868,  1899,  1257,    22,   436, -1979,  1886,  1540,   773,
    2020,  1315,  2710,  1483,  2318,   915,  1181,   423,   454,  1069,
    1916,  1093,   788,  1483,  2103,   458, -1979,  1578,  1483,  2274,
    1064,  2539, -1636, -1874,  1219,   463,  1581,  1219,  2599,   605,
    1842,  1489,   605,  2104,  2717,   795,   505,   505,   505,  1935,
    1279,   963, -1979,  2139,   760,  2397,   439,  -695,   859,  1892,
     439,   534,   458,  1323,  1784,  1514,   534,  1101,  1484,  -693,
    1484,   614,   463,  2077,  2277,   661,   439, -1979,  2461,  -366,
    2465,  2097, -1868,   890,  1598, -1910,  -366,  2450,  1804,  1571,
    1016,  2825,   916,  1294,  1407,  2298,  1905,   797,  2532,   934,
    1871,   501,   501,   501,   797,   797,   797,   439,   697,  2066,
   -1874,  1124,  1794,   797,   797,   797,  1145,  1185,  1145,  1258,
     467,  1680, -1744,  1038,  1485,  2030,   797,   822,  1145,   797,
     662,  1042,   801,  2455,  2434,  1047,  1123,   802,   797,   797,
     797,   797,   797,  1127,  2681,   439, -1636,  1199,  1029,  1200,
     605,   710,  1140,  1140,  1140,  2237, -1905,   467,  1071,  2097,
    1204,   614,   529,   760,  1124,  1159,  1083,   797,   681,  1187,
    1078,  2443,  1477,   605,   661,   682,  1036,  2600,  1723,   526,
      88, -1874,   504,   964,  1470,  -366,   661,  1541,  1843,   504,
     504,   504,   557,  1073,   469,   865,  1727,  1250,   504,   504,
     504,  1146,   806,  1146,  2105,  2309,  1182,  1156,  1258,  1769,
     439,   504,  1738,  1146,   504,  2369,  1734,  1543,   403,  2554,
     377,  1755,  1567,   504,   504,   504,   504,   504,  2294,   662,
     403,   469,   526,   439,   439,  1215,   529,   875,   727,  1266,
     472,   662,  2682,   526,  2434,  1198,  1216,   549,  1282,  1322,
    2643,   962,   504,  1765, -1874,  2410,   574,   801, -1874,   797,
    1832,  1506,   802,   593,   595,   605,  1610,  2022,  1230,  1186,
    1484,  1263, -1945,  -700, -1750,  1274,   568,   472,  1079,   526,
     383,  1156,   655, -1876,  1281,   605,   439,  1215,   384,  1370,
     732,  1312,   477, -1874,  2662,  1289,  1513,   708,  1216,  1275,
     680,  2189,   439, -1979,   732,   529,   605,  2147,  1484,  1484,
    2466,  1740,  -698,   909,   505,  1586,   439, -1979, -1966,   907,
    1491,   505,   505,   505, -1746,  1512,  1316,  2429,    -5,   477,
     505,   505,   505,  1147,  1417,  1147,   963,   518,   962,  1903,
    1805,  1806,  1807,   505,   504,  1147,   505,   534,  2006,   526,
    1156,  1484,   971,  1635,  -700,   505,   505,   505,   505,   505,
    2630,  1484, -1748,  1497,  2491,  2416,  1484,  2467,  1395,   501,
    1648,  2093,  2377,   529,  2222,  1649,   501,   501,   501,  1341,
     409,   631,  1219,   334,   505,   501,   501,   501,   526,  2571,
     534,   454, -1979,  -698,   629,   383,  1342,  2518,   501,  1310,
     787,   501, -1874,   384,  1101, -1742,  2525,  1808,  1782,  2688,
     501,   501,   501,   501,   501, -1739,   194, -1979,  1156,  2632,
    1517,    15,  -690,   963,  1639,  1640,  1641,  1642,  1643,  1644,
    1645,  1646,  2118,  2217,  2120,   458,  1343,  2663,   747,   501,
   -1636, -1874,  1300,  2462,   454,   463,  1363,   962, -1636, -1636,
    1301,  2155,  -538, -1636,   379,   454,  2633,    17,  2634,   552,
     732,   797,   446,  2699, -1979,   787,  2689,  1492,   964,  1834,
     553,  1836,  2143,  1924,  2690,   631,   505,  1900,  1507,   904,
    -538,  -538,   439,   630,  2640,  1276,  2240,  1491,   458, -1979,
    1415,   454, -1979,  2241,  1622,  1507,   385,  1656,   463,   458,
    1488,  1283,  1901,  1418, -1892,    25,   827,   748,  1604,   463,
    1204,   924,  1426,  1179,   631,  1277,  1437,  1874,  1438,  2167,
    2168,  1521,  2007,  1402,  1403,  2311,  2553,  1932,   439,    26,
     467,   501,   963,  1523,   529,   458,  1809,  1810,  2310,  1822,
     732,  1811,  2774,   890,   843,   463,   504,     4,     5,  1803,
    1611,   439,  2112,  2635,   356,   964,  2209,  1422, -1979,   696,
    2691,   454,   335,   819,  -690,   439,  2652,   969,  -690,   409,
    1416,   985,   386,   655,  1839,   534,  1344,  1922,   787,   534,
    2218,   545,  1193,   467, -1979,   454,   681,  1345,   383,   605,
     962,  1595,   534,   682,   467,  1629,   384,  -538,   439,  1508,
     454,  2775,  1528,  2693,   469,   458,  1605,  1224,  1607, -1979,
     -35,   385,  2223,   568,   907,   463,  1508,  1612,   658,  1371,
    1302,  1621,  2696,   513,   380,  1663,  -538,  -690,   962,   458,
     467,   387,   534,   439,  1406,  1663,   388,  1379,  2777,   463,
    2778,  -690,  -690,   195,   458,  1858,   605,  2129,  1232,   357,
     472,  2703,  1303,  1793,   463,  1667,  2704,   469,   439,  1623,
    2366,  2132,  1677,  1677,   964,   801,  2793,   439,   469,  1741,
     802,   454,  1657,  1268,  1304,   963,   963,   844,   505,   697,
    2435,  1380,  1823,   747,   534,   534,   534,   386,   820,   972,
     358,  1381, -1890,  1346,  1347,  2113,   439,  2299,  1786,    78,
     467,  1933,   477,   472,   469,  1154,   596,  1439,  1348,  2242,
    1349,   753,  1622,   963,   472,   458,  2743,  -538,   605,   732,
    2744,   439,    49,   359,   467,   463,   973,  1422,  2156,  1305,
     383,  1778,  2803,   501,  1755,  2779,  1293,  1926,   384,   467,
    1427,   534,  1757,  1428, -1977,   389,   387,  2221,  2383,   439,
     472,   388,   748,    82,  1693,   477,  1601,  2154,   377,  1697,
     439,  1700,  2822,   597,  1705,  1707,   477,  1710,  2823,    40,
     787,   598,   681,  -690,   469,  2451,  1383,  2155,  1209,  1211,
    1407,  1941,   803,   514,    27,   515,  2430,  2852,  1440,    79,
    2435,   804,  1306,   998,  2439,  2384,   439,   850,   469,  1350,
    2243,   754,   477,  1900,   385,   709,  1372,   964,   964,  2817,
     467,  1860,   828,   469,  2300,  1715,  1531,   904,  2752,  1801,
     472,   360,   -21,   797,   797,  2244,  2859,  2245,  1901,  2720,
     797,    28,   797,  2364,  2364, -1979,     4,     5,   605,  1145,
      50,  1861,  2668,    83,   472,   964,  1602,  1351,  1265,  2759,
    1384,   944,   797,  1731,   999,  1800,  -538,   599,   446,   472,
     710,  2198,  1770,  1772,  2674,  1759,   439,   797,  1373,  1770,
    1760,  1770,   477,  2698,  1429,  1531,  1430,  1623, -1750,  1043,
     386,  2417,  1532,  1801,   469,  1766,   877,   878,  2406,  2407,
    2721,  1796,  1298,  2839,  1307,  2483,   477,  1845,   624,  2036,
    2225,  2198,   945,  1313,    38,   439,  1813,  2493,   504,   504,
    1847,   477,  1767,    31,  2073,   504,  1320,   504,   676,  1800,
     962,  2541,    39,  1882,  1146,  2108,   879,   880,  1595,  1893,
     472,  2037,  2550,  2111,  2741,  2199,   534,   504,  1835,   387,
    1837,  1532,  2496,  2074,   388,  1377,   385,   560,  1387,  2364,
    2011,  1427,   504,  2252,  1428,  1274,  2198,  2025,   907,  1902,
   -1890,  2512,  2513,  2179,  1821,   206,  2757,  2758,   -21,  1574,
    1830,   954,  1801,  1048,  2795,  2201,   439,  1833,  2796,  2797,
    2418,  2109,   477,   534,  2198,   534,   529,  1906,  2855,  1629,
    1234,   937,  2534,  1235,   801,   797,  1236,  1237,   707,   802,
     979,  1177,  2198,  2644,  2253,   963,  1031,  2820,  1800,    43,
     938,  2647,   962,   963,   207,  2088,  2088,  1049,    45,  1870,
    2419, -1680,   386,  1011,    46,  1630,  1178,  1050,  2722,   534,
    2203,   534,  2125,  2723,  1911,   839,  2820,    54,   760,  1531,
     505,   505,  2745,  2386,  1179,  1378,   529,   505,  1881,   505,
    1824,   402,  2746,   208,  2156,   209,  1147,   210,  2205,  2420,
    2580,   980,  2087,  2087,   981,   211,  1757,   454,   801,   505,
    2750,  1032,  1033,   802,   561,   562,  2207,  1825,  1487,  1826,
     504,   387,  2088,  2088,   505,  1900,   388,   801,  2144,    55,
    2564,   534,   802,   563,  2565,   501,   501,   963,  -357,  2226,
    2227,  2180,   501,  2141,   501,  1532,  2751,   774,   775,    60,
    1901,   458,  1051,  2145,  2004,  -357,  1296,   780,  2521,  2495,
    2014,   463,   212,  2745,   501,  2523,  2524,  1297,  2027,  2087,
    2087,    56,   512,  2746,  1379,  2860,   533,   964,  2251,   501,
    1041,  2731,    66,   533,   570,   964,   891,  1820,   892, -1979,
     564,   533,  2732,   746,   590,  -357,  2862,   746,  2861,   613,
    1801,   620,   810,   620,   628,   647,   590,  2032,    62,  2215,
    1162,  1747,    63,  1750, -1979,  2733,  2827,  2829,  1380,  2863,
     801,  2083,  2084,   620,  2092,   802,  1052,    69,  1381,   589,
    1131,  1134,  1137,    68,   801,  1515,  1800,  2858,  2153,   802,
   -1868,   589,  1382,  2094,   801,  2734,   467,    72,  2343,   802,
    2288,  2849,   505,   801,    70,  1161,  2868,   213,   802,  1638,
      73,  2853,   721,  2214,   721,  -357,  1002,   721,  1003,   964,
     206,  1179,  1053,  1529,   733,  2642,   734,  1666,  1235,    74,
    2194,  1236,  1237,  2881,    49,  1787,  1788,   193,  2344,  2345,
    2346,  2347,  2348,   206,    50,  1701,   534,  1702,   534,  -357,
    1429,   200,  1430,   214,  1238,  1239,  2186,   501,  2187,  1814,
    1815,  1879,   201,  1383, -1655, -1655, -1655, -1655,  2870,   207,
     469,  1167,  1168,  1169,  1054,  1954,  1955,  2278,  -357,  2279,
    1240,  1241,  2685,  2263,  2686,  -357,   534,   205,  2714,  2072,
    2715,  2075,   207,  2392,  2393,  1545,  -357,   238,  1546,  1846,
    2229,  2653,  2654,  1848,  1493,  1547,  1548,  1495,   208,   512,
     209,   235,   210,  1498,  2800,  2801,   472,  1502,   239,  1104,
     211,  1105,   242,  1504,  2342,   852,   853,   854,   855,  2166,
     533,   208,   364,   209,   534,   210,   796,  1384,   799,   345,
    1385,  1386,  2264,   211,    36,    37,   215,  1165,  1166,   372,
    1894,  1895,  1775,  1549,  1777,  1142,  1143,  1779,  1780,  1781,
     407,   389,   406,  1785, -1654, -1654, -1654, -1654,   477,   533,
    1205,  1206,  1207,  1208,  1797,  1798,   409,   212,   414,  2276,
     533,  2349,  2350,  2351,  2352,  2353,  2354,  2355,  1967,  1968,
     416,   419,   216,   605,   377,  2220,  2202,  2204,  2206,  2208,
     212,   424,  -357,  -357,   426,   427,   437,   377,  2365,  2365,
     523,   550,   422,   439,  2470,  2471,  2472,  -357,   571,  -357,
     579,   677,   678,  1550,   690,   704,   692,   628,   705,   703,
     712,   722,   741,   727,  2289,  1387,   743,  2248,   756,   759,
    2249,   533,   760,   763,   767,   768,   533,  2256,   769,   776,
     783,   777,   778,   779,  1551,  2372,   781,   788,   789,   791,
     792,   805,   809,   811,  1102,  1103,   825,   217,   831,   839,
     837,  2367,   213,   841,  2269,   856,  1552,   862,  2374,   905,
    2830,  2750,   860,  2194,   922,   925,  2290,   909,  2291,   926,
    2272,  1881,   928,  2314,   930,   213, -1657,   939,   940,  1238,
    1239,  2317,   941,  2826,  2319,   942,   947,  1104,  -357,  1105,
     952,  1106,   949,   956,   958,   965,   631,  2831,   214,   975,
     721,   977,   991,   987,  2365,  1240,  1241,   994,  1007,  1884,
    1553,   534,  1005,   534,  2745,  2356,  1009,  1012,  2473,  1001,
    1013,   214,  1014,  1016,  2746,  1107,  1108,  1109,  1021,  1028,
    2357,  1026,  2474,  1039,   732,  1043,  -357,  1089,  2306,  1045,
    1046,  1059,  1060,   403,  1061,  1554,  1075,  1085,  1084,  1087,
    1913,  1913,  1124,  1130,  1138,  2446,  1139,  1149,  1163,  1170,
    1157,   506,  1172,  1187,  1183,  1555,   843,  1155,   844,  1244,
    1220,  1231,  -906,  1223,  2453,  -906,  1110,   915,  1111,  1262,
     605,  1269,  1284,  1287,  1291,  1112,  1299,  1292,  1113,   429,
    1325,   215,  1318,  2486,  2487,  2405,  1330,  1331,  1332,  2488,
    1336,  2442,  1337,  1340,  1338,  1367,  1369,  1393,  1365,  1376,
    2158,  2159,  1396,  2413,   215,  1397,   429,  2475,  2476,  2477,
    1401,  1412,  2490,  2160,  2161,  2431,  1414,  2718,  1556,  1419,
    1420,  1444,  2478,  1475,  1476,  1479,  1480,   216,  1494,  2381,
    1481,  1155,  1557,  1525,  1482,  1496,  2388,  2389,  2390,  2391,
    1499,  -906,  2460,  1500,  2396,  1518, -1874,   742,  1501,  1503,
     216,  1526,  1505,  1522,  1558,  2508,  1561,  1516,  -906,  1563,
    1568,  1576,  2486,  2500,  2272,  1569,  1257,  1114,  1575,  1115,
    1579,  1583,  1596,  1582,  1609,  2516,  2409,  1616,  1618,  1619,
     512,  1636,  1659,  1669,  1631,  1632,   631,  1670,  1671,  1672,
     439,  1681,  1881,  1686,  1685,  1698,  1687,   533,  1711,  1708,
    1155,  1689,   217,  1713,  1719,  1179,  1729,  1744,  1751,  1762,
    1767,   512,  1763,  1507,  1508, -1679,  1736,  1532,  2479,  1531,
    1559,  1849,  2372,  1952,  2832,   217,  1868,  1867,  2833,  2834,
    1855,  1859, -1674,  1871,  1875,  1873,  1878,  1623,  1622,  1927,
     533,  1920,  1938,  2576,  1437,  1104,  1438,  1105,  1937,  1925,
    2012,  2372,  2453,  -906,  -906,  -906,  1929,  1941,  2010,  1942,
    2016,  2469,  -906,  2026,  2070,  2071,  2076, -1629,  1155, -1677,
    2119,  2127,  2835,  1860,  -906,  1861,  2489,  2121,  2453,  2146,
    2133,  2148,  2149,  2157,  1915,  2175,  2173,  1916,  2836,  2837,
    2494,  2033,  2169,  2281,  2282,  2283,  2216,  2191,  2232,  2209,
    2224,  2211,  2235,  2255,  1881,   383,  2034,  -906,  2574,  2265,
    2230,  2266,  2267,  -906,  2096,  -906,  2292,  2035,  -906,  2293,
    -906,  -906,  -906,  2297,  2303,  2305,  -906,  2316,  -906,  2179,
    2711,  2669,  2563,  -906,  2312,  2313,  2180,  2679,  2808,  2330,
    2331,  2334,  2332,  2337,  2339,  2398,  2403,  2375,  2401,  2412,
    2404,  2411,  2432,  1597,  2444,  2447,  2449,  2484,  2452,  2492,
    2498,  2499,   590,  2505,  2504,  2510,  2514,  -906,  2522,  1116,
    2506,  2372,  -906,  2535,  1282,  2536,  2507,  2320,  2321,  2543,
    2546,  2548,  2417,  2545,  2560,  2547,  -906,  2577,  2581,  2645,
    2583,  2588,  2762,  2595,  2646,  2648,  2658,  2657,  1445,  2670,
    2673,  1446,  1755,  2453,  1447,  2759,  2798,  2558,  2675, -1750,
    1281,  2804,  1448,  -906,  2806,  2846,  2694,  2847,  1970,  2871,
    1117,  2874,  2880,  2671, -1874,   533,  2672,  2875,    16,   533,
      85,    81,  1118,  1090,    86,  2763,    77,  2764, -1979,  1411,
      76, -1979,   533,   711,  -906,   512,   401,   523, -1979, -1979,
    1739,  2604,  2639,   421,  1405,  1725,  1062,  2702,  1392,  1449,
    2562,  2399,  2387,  2517,  2395,  1037,  2400,  2515,  2765, -1868,
    2380, -1868,  1990,  2727,  2631,  2650,  2651,  2805,  1450,  1020,
    2869,  -906,   533,  2336,  2575,  2579,  2661,  -906,  2709,  2641,
    2766,  2666,  2329,  2873,  2867,  2851, -1979,  2503,  2719,  -906,
    -906,  2664,  2665,  2728,   523,   434,  2729,   192,  1840,  1761,
    1436,  1520,  1974,  2036,  2295,  2296,  2287,  1524,  2767,  1838,
    2285,   808,  2678,   817,  2848,  1176,  2304,   848,  2850,  1544,
    1213,  1844,  2695,  -906,   533,   533,   533,   906,  1221,  1572,
    2126,  1243,  1584,  -906,  1865,  2037,  2136,  2705,  2137,  2707,
    -906,  1255,   929,  2708,  1883,  -241,   932,  2152,  1620,  1890,
    1451,  1931,  1904,  1290,  -906,   967, -1979,  1647,  1452,  -906,
    2811,   966, -1874,   648,  1678,  1914,  2172,  -906,  2594,  -906,
    1679,  1328,  1453,  1749,  1746,  -906,  2882,  1881,   990,  1792,
    1197,   533,  1195,  1790,  2178,  2165,  1978, -1979,  2163,  2414,
    1819,  2325,  2185,  2323,   797,   797,  2768,  1375,  1694,  1817,
    2038,  2748,  2749,  1907,  1454,  2039,  1908,  1227,  1909, -1979,
    1910,   955,  2234,  2769,  1174,   797,  2756,  1283,  1637,  2123,
    1799,  2760,  2761,   816,  1455,  2091,  1456,  2866,  2866,  2667,
    1730,  2341,  1728,  2557,   797,  2770,  1065,  2807,  2135,  2040,
    2809,  2810,  2497,   782,  2821,  1400,  1877,  2041,  1457,  1458,
   -1868,  1661,  1854,  2065,  2840,  2712,  2771,  2879,  2556,  2042,
    1704,   797,  2408, -1979,     0,     0,     0,     0,     0,     0,
    1093,     0,     0,  2824,     0,     0,  2772,     0,     0,   504,
     504,  1459,     0,  1689,     0,  2773,     0,     0,     0,     0,
       0,  1598,     0,     0,     0,  2043,     0,     0, -1979,     0,
     504,     0,     0,     0,  2044,     0,   590,     0,     0,     0,
    1460,  1461,     0,     0,     0,  -238,     0,     0, -1979,   504,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1868,     0,     0,     0,     0,  1462,     0,     0,     0,
       0,     0,     0,     0,  1463,  2045,   504,     0,  2046,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1464,     0,
     721,     0,     0,  1465,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   533,     0,     0,     0,
    1466, -1979,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1979,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1467,     0,     0,
       0,   505,   505,     0,     0,     0,  1468, -1979,     0,     0,
       0,     0,     0,   533,     0,   533,     0,     0,     0,     0,
       0,     0,   505,     0,     0,     0,     0,     0,     0,     0,
      90,     0,    91,     0,    92,     0,  1469,     0,     0,    93,
       0,   505,     0,     0,     0,     0,  1470,    94,     0,     0,
       0,     0,  1471,     0,     0,     0,   501,   501,     0,   533,
       0,   533,     0,     0,     0,     0,     0,     0,   505,     0,
       0,     0,     0, -1979,     0,     0,     0,   501,     0,     0,
       0,    95,    96,     0,  1198,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,   501,     0,     0,     0,
       0,     0,     0,    98,   605,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   533,     0,   501,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   590,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,     0,     0,     0,     0,
       0,   102,     0,   103,     0,     0,     0,   721,     0,     0,
       0,  -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,
    -738,     0,  -738,  -738,  -738,     0,  -738,  -738,  -738,  -738,
    -738,  -738,  -738,  -738,  -738,   104,     0,     0,     0,     0,
    -738,     0,     0,     0,     0,  -738,   105,     0,  -738,     0,
       0,   106,     0,     0,   590,   590,   590,     0,     0,     0,
       0,   590,   590,     0,     0,     0,   590,   590,   590,     0,
     590,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,   108,     0,     0,   109,
     110,     0,     0,  1587,     0,     0,     0,     0,     0,     0,
     111,     0,     0,     0,     0,     0,     0,   112,     0,   113,
       0,     0,   114,     0,     0,     0,  -738,     0,     0,     0,
       0,     0,     0,   590,     0,     0,     0,     0,     0,     0,
       0,     0,   590,   590,   590,   590,   533,     0,   533,     0,
       0,     0,     0,  1588,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,   447,
     118,     0,   721,     0,     0,     0,   533,  -738,  -738,  -738,
       0,  -738,  -738,  -738,  -738,     0,   449,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   445,   119,     0,
     446,     0,     0,     0,    90,     0,    91,     0,    92,     0,
       0,   120,     0,    93,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,   533,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,     0,     0,     0,  2195,     0,     0,     0,     0,     0,
     123,     0,     0,     0,     0,    95,    96,     0,     0,     0,
       0,     0,     0,   124,     0,   125,    97,     0,     0,     0,
       0,   126,     0,     0,     0,   127,   447,    98,     0,     0,
      99,   450,   451,   452,   128,     0,     0,     0,   448,     0,
     453,     0,     0,   449,   100,   129,     0,     0,     0,     0,
       0,     0,   454,     0,     0,  -738,   130,     0,     0,     0,
       0,     0,     0,     0,     0,   131,     0,   101,     0,     0,
     132,   133,     0,     0,   134,   102,   135,   103,     0,     0,
       0,  1589,     0,     0,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   458,  -738,   459,   460,
     461,     0,     0,     0,   462,     0,   463,  -738,     0,   104,
       0,     0,     0,     0,     0,   138,     0,     0,     0,     0,
     105,     0,   139,     0,     0,   106,     0,   140,     0,     0,
       0,     0,     0,     0,     0,     0,   590,     0,   450,   451,
     452,     0,     0,     0,     0,   465,     0,   453,     0,  -738,
       0,     0,     0,   107,     0,   141,     0,     0,     0,   454,
     108,     0,     0,   109,   110,     0,     0,     0,     0,     0,
       0,   533,     0,   533,   111,     0,     0,     0,     0,     0,
       0,   112,     0,   113,     0,     0,   114,     0,     0,     0,
       0,   467,   455,     0,  2302,     0,     0,     0,   456,     0,
     457,     0,     0,   458,     0,   459,   460,   461,     0,     0,
       0,   462,     0,   463,     0,     0,     0,     0,   464,     0,
       0,     0,   468,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   469,     0,     0,     0,     0,
       0,   466,   119,     0,     0,     0,     0,   470,   471,     0,
       0,     0,     0,     0,   721,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   467,     0,
    2379,  2379,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   472,     0,   121,   122,     0,     0,     0,     0,  1590,
       0,   473,     0,     0,   123,     0,     0,     0,     0,   468,
       0,     0,     0,     0,     0,     0,     0,   124,     0,   125,
       0,     0,   474,     0,     0,   126,     0,   475,     0,   127,
       0,     0,     0,     0,     0,   476,     0,   439,   128,     0,
       0,     0,     0,   477,     0,     0,     0,     0,     0,   129,
       0,     0,   469,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,     0,   470,   471,     0,     0,     0,   131,
       0,     0,     0,     0,   132,   133,     0,     0,   134,     0,
     135,     0,     0,     0,     0,     0,     0,    90,   136,    91,
       0,    92,     0,     0,     0,     0,    93,     0,   472,     0,
       0,   137,     0,   721,    94,     0,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     721,     0,   721,   721,     0,     0,   139,     0,   721,   474,
       0,   140,     0,     0,   475,     0,     0,     0,    95,    96,
       0,   512,   476,     0,   439,     0,     0,     0,     0,    97,
     477,     0,     0,     0,     0,     0,     0,     0,     0,   141,
      98,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   721,   721,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   721,     0,     0,  2520,  2520,     0,     0,   102,     0,
     103,     0,  2520,  2520,  2527,     0,    90,     0,    91,     0,
      92,     0,     0,     0,     0,    93,   512,     0,     0,     0,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,     0,     0,     0,     0,   106,     0,
       0,   721,     0,     0,     0,     0,     0,    95,    96,     0,
       0,     0,     0,   512,     0,     0,     0,     0,    97,     0,
       0,     0,   721,     0,     0,   721,   107,     0,     0,    98,
     721,   721,    99,   108,     0,     0,   109,   110,     0,     0,
     512,     0,     0,     0,     0,     0,   100,   111,     0,     0,
       0,     0,     0,     0,   112,     0,   113,   721,     0,   114,
       0,     0,     0,     0,     0,  2649,     0,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,   102,   447,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   449,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,   117,     0,     0,
       0,   104,     0,     0,     0,     0,   721,   118,     0,     0,
       0,     0,   105,     0,     0,     0,     0,   106,     0,     0,
       0,     0,     0,   590,     0,     0,     0,     0,   590,     0,
       0,     0,     0,     0,     0,   119,     0,     0,     0,     0,
     721,     0,     0,     0,     0,   107,     0,     0,   120,     0,
       0,     0,   108,     0,     0,   109,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,     0,
       0,     0,   721,   112,     0,   113,   121,   122,   114,     0,
     450,   451,   452,     0,     0,     0,     0,   123,   590,   453,
       0,     0,   590,     0,     0,     0,     0,     0,     0,     0,
     124,     0,   125,     0,     0,     0,     0,     0,   126,     0,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
     115,   128,     0,     0,   116,     0,   117,     0,     0,     0,
       0,     0,   129,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,   130,     0,   813,     0,   459,   460,   461,
       0,     0,   131,   462,     0,     0,     0,   132,   133,     0,
       0,   134,     0,   135,   119,     0,     0,     0,     0,     0,
       0,   136,   244,     0,   245,     0,     0,   120,     0,   246,
       0,     0,     0,     0,  1000,     0,     0,   247,     0,     0,
       0,     0,     0,     0,   465,     0,     0,     0,     0,     0,
       0,     0,   138,     0,     0,   121,   122,     0,     0,   139,
       0,     0,     0,     0,   140,     0,   123,     0,     0,     0,
       0,   248,   249,     0,     0,     0,     0,     0,     0,   124,
       0,   125,   250,     0,     0,   814,     0,   126,     0,     0,
       0,   127,   141,   251,     0,     0,   252,     0,     0,     0,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     253,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   468,   130,     0,     0,     0,     0,     0,     0,     0,
       0,   131,     0,   254,     0,     0,   132,   133,     0,     0,
     134,   255,   135,   256,     0,     0,     0,     0,     0,     0,
     136,   257,     0,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,   267,   268,     0,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   470,   471,     0,     0,
       0,   138,     0,     0,     0,     0,   279,     0,   139,     0,
       0,   280,     0,   140,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   281,
     473,   141,     0,     0,     0,   445,   282,     0,   446,   283,
     284,   870,   871,   872,     0,     0,     0,     0,     0,   873,
     285,   474,     0,     0,     0,     0,   475,   286,     0,   287,
       0,     0,   288,     0,   476,     0,   439,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   874,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   289,     0,     0,     0,   290,     0,
     291,     0,     0,     0,   447,     0,     0,     0,     0,     0,
     292,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   293,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   294,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   445,     0,   295,
     446,     0,   875,   870,   871,   872,     0,     0,     0,     0,
     296,   873,   876,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   297,     0,     0,     0,     0,
       0,   298,     0,     0,     0,   299,   450,   451,   452,     0,
       0,     0,     0,     0,   300,   453,     0,     0,     0,     0,
       0,   877,   878,   874,     0,   301,     0,   454,     0,     0,
       0,     0,     0,     0,     0,     0,   302,     0,     0,     0,
       0,     0,     0,     0,     0,   303,   447,  1226,     0,     0,
     304,   305,     0,     0,   306,     0,   307,     0,     0,     0,
     455,   879,   880,   449,   308,     0,   456,     0,   457,     0,
       0,   458,     0,   459,   460,   461,     0,   309,     0,   462,
       0,   463,     0,     0,     0,     0,   464,     0,     0,     0,
       0,     0,     0,     0,     0,   310,     0,     0,     0,   881,
       0,     0,   311,     0,     0,   882,     0,   312,     0,     0,
     883,     0,     0,     0,     0,     0,     0,     0,   884,   445,
     465,     0,   446,     0,   875,   885,     0,     0,     0,     0,
     886,     0,     0,     0,   876,   313,     0,     0,     0,   466,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   887,
       0,     0,     0,     0,     0,     0,     0,     0,   450,   451,
     452,     0,     0,     0,     0,     0,   467,   453,     0,     0,
       0,     0,     0,   877,   878,     0,     0,     0,     0,   454,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   468,   447,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   455,   879,   880,   449,     0,     0,   456,     0,
     457,     0,     0,   458,     0,   459,   460,   461,     0,     0,
       0,   462,     0,   463,     0,     0,     0,     0,   464,     0,
     469,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   881,   470,   471,     0,     0,     0,   882,     0,     0,
       0,     0,   883,     0,     0,   445,     0,     0,   446,  1295,
     884,     0,   465,     0,   888,     0,   889,   885,   890,     0,
       0,   891,   886,   892,   893,   894,   472,     0,   895,   896,
    -974,   466,     0,     0,     0,  -974,   473,     0,  -974,     0,
       0,   887,     0,     0,     0,  -974,  -974,     0,     0,     0,
     450,   451,   452,     0,     0,     0,     0,   474,   467,   453,
       0,     0,   475,     0,     0,     0,  -974,     0,  -974,     0,
     476,   454,   439,     0,     0,     0,     0,     0,   477,     0,
       0,     0,     0,     0,   447,     0,     0,     0,   445,   468,
       0,   446,     0,  -974,     0,     0,     0,     0,     0,     0,
       0,   449,     0,     0,   455,     0,     0,     0,     0,     0,
     456,     0,   457,     0,     0,   458,     0,   459,   460,   461,
       0,     0,     0,   462,     0,   463,     0,     0,     0,     0,
     464,     0,   469,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   470,   471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -974,   465,     0,   888,   447,   889,     0,
     890,     0,     0,   891,     0,   892,   893,   894,   472,     0,
     895,   896,     0,   466,   449,     0,     0,     0,   473,     0,
       0,     0,     0,     0,  -974,     0,   450,   451,   452,     0,
       0,     0,     0,     0,     0,   453,     0,     0,     0,   474,
     467,     0,     0,     0,   475,     0,  -974,   454,     0,     0,
       0,     0,   476,     0,   439,     0,     0,     0,     0,     0,
     477,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     445,   468,     0,   446,     0,     0,     0, -1979,     0,     0,
     455,     0,     0,     0,     0,     0,   456,  -974,   457,     0,
       0,   458,     0,   459,   460,   461,     0,     0,     0,   462,
    -974,   463,     0,     0,     0,     0,   464,  -974,     0,   450,
     451,   452,     0,     0,   469,     0,     0,     0,   453,     0,
     334,     0,     0,     0,     0,     0,   470,   471,     0,     0,
     454,     0,     0,     0,     0,  -974,     0,     0,     0,     0,
     465,     0,     0,     0,     0,     0,     0,     0,     0,   447,
       0,     0,     0,  1296,     0,  -974,     0,     0,     0,   466,
     472,     0,     0,   455,  1297,     0,   449,     0,  -974,   456,
     473,   457,     0,     0,   458,     0,   459,   460,   461,     0,
       0,     0,   462,     0,   463,     0,   467,     0,     0,   464,
       0,   474,     0,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,   476,     0,   439, -1979,     0,     0,
       0,     0,   477,     0,     0,     0,   445,   468,  -974,   446,
       0,     0,     0,   465,     0,     0,     0,     0,     0,     0,
       0,     0,  -974,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   466,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -974,     0,     0,     0,     0,     0,
     469,   450,   451,   452,     0,     0,     0,     0,     0,   467,
     453,     0,   470,   471,     0,     0,     0,     0,     0,     0,
       0,     0,   454,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,     0,     0,     0,   335,
     468,     0,     0,     0,     0,     0,   472,   591,     0,     0,
       0,     0,   449,     0,     0,   455,   473,     0,     0,     0,
    -974,   456,     0,   457,     0,     0,   538,     0,   459,   460,
     461,  -974,     0,     0,   462,     0,   463,   474,     0,     0,
       0,   464,   475,   469,     0,     0,     0,     0,     0,     0,
     476,  -974,   439,     0,     0,   470,   471,     0,   477,     0,
       0,     0,     0,     0,   445,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,   465,     0,     0,     0,     0,
     539,     0,     0,     0,     0,     0,     0,     0,     0,   472,
       0,     0,     0,     0,   466,     0,     0,     0,     0,   473,
       0,     0,     0,     0,     0,     0,     0,   450,   451,   452,
       0,     0,     0,     0,     0,     0,   453,     0,     0,     0,
     474,   467,     0,     0,     0,   475,     0,     0,   454,     0,
       0,     0,     0,   476,   605,   439,     0,     0,     0,     0,
       0,   477,     0,   447,     0,     0,     0,     0,     0,     0,
       0,     0,   468,     0,     0,   656,     0,     0,     0,     0,
     449,   455,     0,     0,     0,     0,     0,   456,     0,   457,
       0,     0,   458,     0,   459,   460,   461,     0,     0,     0,
     462,     0,   463,     0,     0,     0,     0,   464,     0,     0,
       0,     0,     0,     0,     0,   469,     0,     0,     0,     0,
     445,     0,     0,   446,     0,     0,     0,   470,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   465,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     466,   472,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   473,     0,     0,     0,   450,   451,   452,     0,     0,
       0,     0,     0,     0,   453,     0,     0,   467,     0,     0,
       0,     0,   474,     0,     0,     0,   454,   475,     0,   447,
       0,     0,     0,   445,     0,   476,   446,   439,     0,     0,
       0,     0,     0,   477,     0,     0,   449,     0,   468,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   455,
       0,     0,     0,     0,     0,   456,     0,   457,     0,     0,
     458,     0,   459,   460,   461,     0,     0,     0,   462,     0,
     463,     0,     0,     0,     0,   464,     0,     0,     0,     0,
       0,   469,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   470,   471,     0,     0,     0,     0,     0,
       0,     0,   447,     0,     0,     0,     0,     0,     0,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   449,
       0,     0,     0,     0,     0,     0,     0,   472,   466,     0,
       0,   450,   451,   452,     0,     0,     0,   473,     0,     0,
     453,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   454,     0,     0,   467,     0,     0,   474,   445,
       0,     0,   446,   475,     0,     0,     0,     0,     0,     0,
       0,   476,     0,   439,     0,     0,     0,     0,     0,   477,
       0,     0,     0,     0,     0,   455,   468,     0,     0,     0,
       0,   456,     0,   457,     0,     0,   458,     0,   459,   460,
     461,     0,     0,     0,   462,     0,   463,     0,     0,     0,
       0,   464,     0,     0,   450,   451,   452,     0,     0,     0,
       0,     0,     0,   453,     0,     0,     0,     0,     0,   469,
       0,     0,     0,     0,     0,   454,     0,     0,   447,     0,
       0,   470,   471,     0,     0,   465,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   449,     0,     0,     0,     0,
       0,     0,     0,     0,   466,     0,     0,     0,   455,     0,
       0,     0,     0,     0,   456,   472,   457,     0,     0,   458,
       0,   459,   460,   461,     0,   473,     0,   462,     0,   463,
       0,   467,     0,     0,   464,     0,     0,   445,     0,     0,
     446,     0,     0,     0,     0,     0,   474,     0,     0,     0,
       0,   475,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   439,   468,     0,     0,     0,     0,   477,   465,     0,
       0,     0,     0,   539,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   466,     0,     0,
     450,   451,   452,     0,     0,     0,     0,     0,     0,   453,
       0,     0,     0,     0,     0,   469,     0,     0,     0,     0,
       0,   454,     0,     0,   467,     0,   447,   470,   471,     0,
       0,     0,     0,     0,     0,     0,     0,   989,     0,     0,
       0,     0,     0,   449,     0,     0,     0,   785,     0,   445,
       0,     0,   446,     0,   455,   468,     0,     0,     0,     0,
     456,   472,   457,     0,     0,   458,     0,   459,   460,   461,
       0,   473,     0,   462,     0,   463,     0,     0,     0,     0,
     464,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   474,     0,     0,     0,     0,   475,   469,     0,
       0,     0,     0,     0,     0,   476,     0,   439,     0,     0,
     470,   471,     0,   477,   465,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,     0,
       0,     0,     0,   466,     0,     0,     0,     0,   450,   451,
     452,     0,   996,   445,   472,   449,   446,   453,     0,     0,
       0,     0,     0,     0,   473,     0,     0,     0,     0,   454,
     467,     0,     0,     0,     0,     0,  1152,     0,     0,   446,
       0,     0,     0,     0,     0,   474,     0,     0,     0,     0,
     475,     0,     0,     0,     0,     0,     0,     0,   476,     0,
     439,   468,   455,     0,     0,     0,   477,     0,   456,     0,
     457,     0,     0,   458,     0,   459,   460,   461,     0,     0,
       0,   462,     0,   463,     0,     0,     0,     0,   464,     0,
       0,     0,   447,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   469,     0,     0,     0,     0,   449,
     450,   451,   452,     0,     0,   447,   470,   471,     0,   453,
       0,     0,   465,     0,     0,     0,     0,     0,     0,     0,
       0,   454,   449,     0,     0,     0,     0,     0,     0,     0,
       0,   466,     0,     0,     0,     0,     0,     0,     0,     0,
     472,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     473,     0,     0,     0,   455,     0,     0,     0,   467,     0,
     456,     0,   457,     0,     0,   458,     0,   459,   460,   461,
       0,   474,     0,   462,     0,   463,   475,     0,     0,     0,
     464,     0,     0,     0,   476,     0,   439,     0,     0,   468,
       0,     0,   477,     0,   450,   451,   452,     0,     0,     0,
       0,     0,     0,   453,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   465,   454,     0,   450,   451,   452,
       0,     0,     0,     0,     0,     0,   453,     0,     0,     0,
       0,     0,   469,   466,     0,     0,     0,     0,   454,     0,
       0,     0,     0,     0,   470,   471,     0,     0,   455,     0,
       0,     0,     0,     0,   456,     0,   457,     0,     0,   458,
     467,   459,   460,   461,     0,     0,     0,   462,     0,   463,
       0,   455,     0,     0,   464,     0,     0,   456,   472,   457,
       0,     0,   458,     0,   459,   460,   461,     0,   473,     0,
     462,   468,   463,     0,     0,     0,     0,   464,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   465,   474,
       0,     0,     0,     0,   475,     0,     0,     0,     0,     0,
       0,     0,   476,     0,   439,     0,     0,   466,  1664,     0,
     477,   465,     0,     0,   469,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,   471,     0,     0,
     466,     0,     0,     0,   467,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   467,     0,     0,
     472,     0,     0,     0,     0,   468,     0,     0,     0,     0,
     473,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   468,     0,
       0,   474,     0,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,   476,     0,   439,     0,   469,     0,
       0,     0,   477,     0,     0,     0,     0,     0,     0,     0,
     470,   471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   469,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   470,   471,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   472,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   473,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   472,     0,     0,
       0,     0,     0,     0,     0,   474,     0,   473,     0,     0,
     475,     0,  2501,     0,     0,     0,     0,     0,   476,     0,
     439,     0,     0,     0,     0,     0,   477,     0,   474,     0,
       0,     0,     0,   475,     0,     0,     0,     0,     0,     0,
       0,   476,     0,   439,  -377,     0,     0,  -377,     0,   477,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -377,     0,
    -377,     0,     0,     0,     0,     0,     0,  -377,     0,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -377,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -377,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1246,     0,     0,     0,     0,
       0,  1023,     0,     0,     0,  -377,  -377,  -377,  -377,  -377,
       0,     0,  -377,  -377,     0,     0,  -377,     0,     0,     0,
       0,     0,  -377,     0,  -377,     0,     0,     0,     0,     0,
    -377,     0,     0,  1022,     0,  -377,     0,     0,  -377,     0,
       0,     0,     0,     0,     0,  1247,  -377,     0,     0,     0,
       0,     0,     0,  -377,     0,     0,     0,     0,     0,  -377,
       0,     0,  -377,     0,     0,     0,     0,     0,  -377,  -377,
    -377, -1128,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
       0,     0,     0,     0,     0,     0,     0,     0, -1128,     0,
       0,     0,  -377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -377,     0,     0,     0,  -377,     0,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -377,     0,     0,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,  -377,  -377,     0,
       0,     0,     0,     0,  -377,     0,  -377,     0,     0,  -377,
       0,     0,     0,     0,     0,     0,     0,     0,  1248,     0,
       0,     0,     0,     0,  -377,     0,  -377,     0,     0,     0,
       0,     0,     0, -1128, -1128, -1128,     0,     0,     0,     0,
       0,     0, -1128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -377,     0, -1128,     0,     0,  -377,     0,     0,
    -377,     0,  1023,     0,     0,   447,  -377,  -377,  -377,  -377,
    -377,     0,     0,  -377,  -377,     0,     0,     0,     0,  -377,
       0,     0,   449,  1249,     0,     0,     0,     0,     0,     0,
    -377,  -377,  -377,  -377,  -377,     0,     0,     0, -1128,     0,
   -1128, -1128, -1128,     0,     0,     0, -1128,  -377, -1128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -377,     0,     0,  -377,     0,     0,     0,     0,     0,  -377,
       0,     0,     0,     0,  -377,     0,     0,     0,     0,  -377,
       0,     0,     0,     0,  -377,     0,     0, -1128,     0,     0,
       0,     0,     0,     0,     0,     0,  -377,     0,     0,     0,
       0,     0,  -377,     0,     0,  -377,  -377,  -377,  -377,     0,
       0,     0,     0,     0,     0,     0,     0,   450,   451,   452,
    -377,     0,     0,     0,     0,  -377,   453,  -377,     0,     0,
       0,     0,     0, -1128,  1016,  -377,     0,     0,   454,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -377,
       0,     0,     0,     0,     0,     0,     0,  -377,     0,     0,
    -377,     0,     0,     0, -1128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -377,     0,     0,     0,     0,
       0,     0,   458,     0,   459,   460,   461,     0,  -377,     0,
     462,     0,   463,     0,     0,     0,     0,  1090,     0, -1979,
       0,     0, -1979,     0,  1091, -1979,     0, -1128,     0,     0,
       0,     0,     0, -1979,     0,     0,     0,     0,     0, -1128,
   -1128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   465,     0, -1868,     0, -1868,     0,     0,     0,     0,
       0,  -377,     0,  -377,  -377,  -377,     0,     0,     0,     0,
       0,     0,     0, -1128,     0,     0,     0,     0,     0,     0,
   -1979,  1250,     0, -1128,     0,     0,     0,     0,     0,     0,
       0,  -377,     0,     0,     0,     0,     0,   467,     0, -1979,
       0,     0,     0,     0, -1128,     0,     0,     0,     0, -1128,
    -377,     0,     0,     0,     0,     0,     0, -1128,     0, -1128,
       0,     0,     0,     0,     0, -1128,     0,  -377,   468,     0,
       0,     0,     0,     0,     0,     0,     0,  -377,  -377,  -377,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -377,     0,  1944,     0,     0,     0,     0,  -377,     0,
       0,     0,     0,     0,     0,  1016,     0,     0,     0,  1945,
       0,   469,  1946,  1947,  1948,  1949,  1950,  1951,  1952,     0,
       0, -1979,     0,   470,   471,     0,     0,     0,  1092, -1979,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1979,     0,     0,     0,     0,  1953,     0,
    1954,  1955,  1956,  1957,  1958,  1959,  1960,   472,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   473,     0,     0,
       0,     0,     0,     0,     0, -1979,     0,     0,     0,     0,
       0,     0,     0,     0, -1868,     0,     0,     0,   474,     0,
       0,     0,     0,   475,  1961, -1979,     0, -1979,     0,     0,
       0,   476,     0,   439,  1093,     0,     0,     0,     0,   477,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1979,
   -1979,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1979,     0,     0,     0,  1962,  1963,  1964,  1965,
    1966,     0,     0,  1967,  1968, -1868,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1979, -1979,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2606,     0,     0,  2607,     0,  1969,  2608,  1946,
    1947,  1948,  1949,  1950,  1951,  2609,  2610, -1979,     0,     0,
     409,     0,     0,  1970,     0, -1979,     0,     0,     0, -1955,
       0,     0,     0,     0,     0,     0,  1437,     0,  1438, -1979,
       0,     0,     0,     0, -1979,  1953,     0,  1954,  1955,  1956,
    1957,  1958,  1959,  1960,     0,     0,     0,     0,     0,     0,
       0, -1979,     0,     0,     0,  1971,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1979,     0,
       0,  1961,     0,     0,     0,  1972, -1870, -1979,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1973,
       0,     0,     0,     0,     0,     0,     0,  1974,     0,     0,
    1975,     0,     0,     0,     0,     0,     0, -1979,     0,     0,
       0,     0,     0,  2611,     0,  1976,     0, -1979,     0,     0,
       0,     0,     0, -1979,     0,     0,     0,     0,  1977,     0,
       0,     0,     0,  1962,  1963,  1964,  1965,  1966,   605,     0,
    1967,  1968,     0,     0,  2612,     0,     0,     0,     0,     0,
    2613,     0,  2614,     0,     0,     0,     0,     0, -1905,     0,
       0,     0,     0,  2615,     0,     0,  2616,     0,     0,     0,
       0,     0,     0,     0,  1969,     0,     0,     0,     0,     0,
       0,  1978,     0,  1979,  1980,  1981,     0,   409,     0,     0,
    1970,     0,     0,     0,     0,     0,     0,     0,  2617,  1946,
    1947,  1948,  1949,  1950,  1951,     0,     0,  2618,   447,     0,
       0,  1982,     0,     0,     0,     0,     0,     0,     0,     0,
    2619,     0,     0,     0,     0,   449,     0,     0,     0,     0,
    -374,     0,  1971,     0,     0,  1953,     0,  1954,  1955,  1956,
    1957,  1958,  1959,  1960,     0,     0,     0, -1955,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1983,  1984,  1985,
       0,     0,  2620,     0,     0,     0,     0,     0,     0,     0,
       0,  1986,     0,     0,     0,  2621,  1973,     0,  1689,     0,
       0,  1961,     0,     0,  1974,     0,     0,  1975,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1976,     0,  2622,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,     0,     0,     0,     0,
     450,   451,   452,     0,     0,     0,     0,     0,     0,   453,
    2623,     0,   449,     0,     0,     0,     0,     0,  2624,     0,
       0,   454,     0,  1962,  1963,  1964,  1965,  1966,     0,     0,
    1967,  1968,     0,     0,     0,     0,     0,  2625,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1978,     0,
    1979,  1980,  1981,     0,   491,     0,     0,     0,     0,     0,
     456,     0,   457,     0,  1969,   458,     0,   459,   460,   461,
       0,     0,     0,   462,     0,   463,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2626,     0,     0,     0,     0,  -635,     0,     0,
       0,     0,  2627,     0,     0,     0,     0,   450,   451,   452,
       0,     0,     0,     0,   465,     0,   453,     0,     0,     0,
    2628,     0,  1971,   447,  1983,  1984,  1985,     0,   454,     0,
       0,     0,     0,   466,     0,     0,     0,     0,  1986,     0,
     449,     0,     0,  2629,     0,  1689,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     467,   491,     0,     0,     0,     0,  1973,   456,     0,   457,
       0,     0,   458,     0,   459,   460,   461,  1975,     0,     0,
     462,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,   468,  1976,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   465,     0,     0,     0,     0,   447,     0,     0,     0,
       0,     0,     0,     0,   469,   450,   451,   452,     0,     0,
     466,     0,     0,   449,   453,     0,   470,   471,     0,     0,
       0,     0,     0,     0,     0,     0,   454,     0,     0,     0,
    1979,  1980,  1981,     0,     0,     0,     0,   467,  1136,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   492,     0,
     472,     0,   493,   494,     0,     0,     0,     0,     0,   491,
     473,     0,     0,     0,     0,   456,     0,   457,   468,     0,
     458,     0,   459,   460,   461,     0,     0,     0,   462,     0,
     463,   474,     0,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,   476,     0,   439,     0,     0,   447,
       0,     0,   477,     0,  1983,  1984,  1985,     0,   450,   451,
     452,   469,     0,     0,     0,     0,   449,   453,     0,   465,
       0,     0,     0,   470,   471,     0,     0,     0,     0,   454,
       0,     0,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,     0,     0,     0,  1771,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   492,     0,   472,     0,   493,
     494,     0,   491,     0,     0,   467,     0,   473,   456,     0,
     457,     0,     0,   458,     0,   459,   460,   461,     0,     0,
       0,   462,     0,   463,     0,     0,     0,     0,   474,     0,
       0,     0,     0,   475,     0,     0,   468,     0,     0,     0,
       0,   476,     0,   439,     0,     0,     0,     0,     0,   477,
       0,   450,   451,   452,     0,     0,     0,     0,     0,     0,
     453,     0,   465,     0,     0,     0,     0,   447,     0,     0,
       0,     0,   454,     0,     0,     0,     0,     0,     0,   469,
       0,   466,     0,     0,   449,     0,     0,     0,     0,     0,
       0,   470,   471,     0,     0,     0,     0,     0,     0,  1774,
       0,     0,     0,     0,     0,   491,     0,     0,   467,     0,
       0,   456,     0,   457,     0,     0,   458,     0,   459,   460,
     461,     0,     0,   492,   462,   472,   463,   493,   494,     0,
       0,     0,     0,     0,     0,   473,     0,     0,     0,   468,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   474,     0,     0,     0,
       0,   475,     0,     0,     0,   465,     0,     0,     0,   476,
     447,   439,     0,     0,     0,     0,     0,   477,     0,   450,
     451,   452,   469,     0,   466,     0,     0,   449,   453,     0,
       0,     0,     0,     0,   470,   471,     0,     0,     0,     0,
     454,     0,  1776,     0,     0,     0,     0,     0,     0,     0,
       0,   467,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   492,     0,   472,     0,
     493,   494,     0,   491,     0,     0,     0,     0,   473,   456,
       0,   457,   468,     0,   458,     0,   459,   460,   461,     0,
       0,   447,   462,     0,   463,     0,     0,     0,     0,   474,
       0,     0,     0,     0,   475,     0,     0,     0,   449,     0,
       0,     0,   476,   447,   439,     0,     0,     0,     0,     0,
     477,     0,   450,   451,   452,   469,     0,     0,     0,     0,
     449,   453,     0,   465,     0,     0,     0,   470,   471,     0,
       0,     0,     0,   454,     0,     0,     0,     0,     0,     0,
       0,     0,   466,     0,     0,     0,     0,     0,     0,  1795,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   492,
       0,   472,     0,   493,   494,     0,   491,     0,     0,   467,
       0,   473,   456,     0,   457,     0,     0,   458,     0,   459,
     460,   461,     0,     0,     0,   462,     0,   463,     0,     0,
       0,     0,   474,   450,   451,   452,     0,   475,     0,     0,
     468,     0,   453,     0,     0,   476,     0,   439,     0,     0,
       0,     0,     0,   477,   454,   450,   451,   452,     0,     0,
       0,     0,     0,     0,   453,     0,   465,     0,     0,     0,
       0,   447,     0,     0,     0,     0,   454,     0,     0,     0,
       0,     0,     0,   469,     0,   466,     0,     0,   449,     0,
       0,     0,     0,     0,     0,   470,   471,     0,   458,     0,
     459,   460,   461,     0,     0,     0,   462,     0,   463,   491,
       0,     0,   467,     0,     0,   456,     0,   457,     0,     0,
     458,     0,   459,   460,   461,     0,     0,   492,   462,   472,
     463,   493,   494,     0,     0,     0,     0,     0,     0,   473,
       0,     0,     0,   468,     0,     0,     0,   465,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     474,     0,     0,     0,     0,   475,     0,     0,     0,   465,
       0,     0,     0,   476,     0,   439,     0,     0,     0,     0,
       0,   477,     0,   450,   451,   452,   469,     0,   466,     0,
       0,     0,   453,   467,     0,     0,     0,     0,   470,   471,
       0,     0,     0,     0,   454,     0,     0,     0,     0,     0,
       0,     0,     0,   447,     0,   467,     0,     0,     0,     0,
       0,     0,     0,     0,   468,     0,     0,     0,     0,     0,
     449,     0,   472,     0,   493,     0,     0,   491,     0,     0,
       0,  2856,   473,   456,     0,   457,   468,     0,   458,     0,
     459,   460,   461,     0,     0,     0,   462,     0,   463,     0,
       0,     0,     0,   474,   447,     0,     0,   469,   475,     0,
       0,     0,     0,     0,     0,     0,   476,     0,   439,   470,
     471,   449,     0,     0,   477,     0,     0,     0,     0,   469,
       0,     0,     0,     0,     0,     0,     0,   465,     0,     0,
       0,   470,   471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   472,     0,     0,   466,     0,     0,     0,
       0,     0,     0,   473,   603,   450,   451,   452,     0,     0,
       0,     0,     0,     0,   453,   472,     0,     0,     0,     0,
       0,     0,     0,   467,   474,   473,     0,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,   476,     0,   439,
       0,     0,     0,     0,     0,   477,   474,     0,     0,     0,
       0,   475,     0,     0,   468,   603,   450,   451,   452,   476,
       0,   439,     0,     0,     0,   453,     0,   477,     0,     0,
     604,     0,   459,   460,   461,     0,     0,     0,   462,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   469,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   470,
     471,     0,     0,     0,     0,     0,     0,     0,     0,   465,
       0,   813,     0,   459,   460,   461,     0,     0,     0,   462,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   473,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     465,     0,     0,     0,   474,     0,     0,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,   476,     0,   439,
       0,     0,     0,     0,     0,   477,   468,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   468,     0,     0,
       0,   470,   471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1979,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   473,     0,     0,     0,     0,
       0,     0,   470,   471,     0,     0,     0, -1185,     0,     0,
       0,     0,     0,     0,     0, -1979,   474,     0,     0,     0,
       0,   475,     0,     0,     0,     0, -1185,     0,     0,   476,
     605,   439,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   473,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1185,     0,
       0,     0,     0,     0,     0,     0,     0,   474,     0,     0,
       0,     0,   475,     0,     0,     0,     0, -1185,     0,     0,
     476,   605,   439
};

static const yytype_int16 yycheck[] =
{
     211,   212,   326,   199,   215,   526,   446,   366,   680,   681,
     682,   537,   341,   410,   937,   412,    81,   455,   415,   991,
    1228,   353,    42,  1492,   317,  1689,   319,   329,  1187,   322,
     207,   642,  1444,   326,  1440,  1007,   213,  1443,   875,   418,
    1702,  1691,  1682,  1285,   533,  1695,   651,  1721,   341,   865,
     320,  1626,   331,   491,   347,   339,  1311,   781,  1727,  1593,
     339,   629,    17,   785,  1329,   319,     1,   791,     1,   353,
      49,   324,     9,   533,   353,   368,     0,   370,     1,     1,
     401,  2040,  2041,    59,    28,    50,    32,    32,     0,     9,
       9,     9,     9,    57,   127,   931,   622,    89,   133,  2025,
      73,  2445,    73,     6,    95,  1346,    66,    22,   110,   117,
     133,   319,  1752,  1753,  1754,     1,   324,   180,   954,  1759,
    1760,    59,  1421,   331,    17,    90,  1766,   323,  1310,   325,
     590,   339,    90,    99,   100,   181,   208,   859,  1929,     6,
     231,    59,   169,    64,    31,   353,   145,   163,   759,  2434,
    1182,   179,   348,   208,   350,   448,    21,  2039,   647,   355,
    1620,     7,    50,   131,    99,   262,   113,   851,   316,   851,
     238,    92,    93,   369,   118,   243,   387,   338,  1210,     9,
      67,  1821,    69,   127,    22,   262,   220,   647,   399,   238,
    1830,   219,  2033,  1833,   405,   406,   247,   408,  1667,   492,
     493,   494,   413,   414,   525,  1103,   928,   418,    21,  1368,
     208,    59,  2669,  1111,   193,   128,   304,   428,   142,   368,
     169,   580,   146,   316,   517,   338,   336,   520,   205,    34,
     142,   737,  1264,  2529,   146,  2026,   268,   507,   181,   493,
    1212,  2226,  2227,   319,    50,   365,   238,   455,   305,   126,
      75,   165,   131,   250,   262,   352,   126,   578,   238,   262,
     314,   429,  2558,   316,   182,   341,  1765,    40,   209,   206,
     280,   347,   761,   471,   996,   302,   175,  2541,   262,   296,
      59,   205,   262,   491,   492,   493,   494,  1319,   567,   292,
     125,  2741,  2251,   205,   348,   219,   220,   238,   319,   578,
     659,   469,    73,   320,  2568,  2755,    50,   219,   220,   293,
     209,   277,   309,   180,   607,   369,     0,   238,   204,   156,
     528,   718,  1856,   238,  1858,   523,   764,   706,   524,   247,
     651,   234,  1831,  1832,   337,   315,   629,   317,   113,   535,
      73,    73,   262,   116,   833,    50,   914,   391,   788,   262,
     175,   218,   362,   473,   364,   639,  1768,  2342,   280,   567,
     639,   522,   523,   656,   396,   644,   171,   516,  2825,   426,
     578,   258,  1627,   317,   351,   523,   222,   223,   344,   455,
     433,   295,  2678,    73,  2175,   376,   824,   421,   218,   438,
     478,   278,   464,    73,   297,   262,   242,  1234,    73,  2068,
     238,   436,    59,   368,  1220,   272,  1243,  1223,   329,   522,
     368,   262,   522,   316,  2699,   491,   492,   493,   494,  1684,
     946,   629,   268,   514,   479,  2266,   523,   351,   234,  1889,
     523,   639,   262,  1001,   485,  1157,   644,   758,   411,   351,
     411,   517,   272,  1742,  2084,   468,   523,   293,  2374,   417,
     128,   478,   339,   469,   414,   523,   424,  2339,    35,   324,
     523,  2805,   453,   969,   350,  2139,  1648,   760,   273,   468,
     243,   492,   493,   494,   767,   768,   769,   523,   400,  1720,
     368,   479,  1514,   776,   777,   778,   779,   976,   781,   522,
     357,  1327,   465,   704,   465,   523,   789,   818,   791,   792,
     523,   712,   475,   482,  2327,   716,   760,   480,   801,   802,
     803,   804,   805,   350,   431,   523,   173,  1201,   695,  1201,
     522,   523,   776,   777,   778,   463,   518,   357,   739,   478,
     851,   607,   785,   479,   479,   789,   747,   830,   417,   385,
     365,  2332,  1110,   522,   468,   424,   468,   468,   524,     6,
     514,   516,   760,   629,   501,   523,   468,   523,   516,   767,
     768,   769,   864,   740,   431,   520,   459,   485,   776,   777,
     778,   779,   229,   781,   477,  2150,   830,   785,   522,  1477,
     523,   789,   468,   791,   792,   364,   523,  1198,   523,  2515,
     523,   262,  1564,   801,   802,   803,   804,   805,  2132,   523,
     523,   431,     6,   523,   523,   470,   859,   163,   523,   930,
     477,   523,   529,     6,  2437,   502,   481,   327,   947,   998,
    2579,   914,   830,   500,   368,  2299,   336,   475,   516,   922,
     500,  1152,   480,   343,   344,   522,     9,   262,   908,   835,
     411,   925,   415,   387,   523,   938,   925,   477,   473,     6,
      58,   859,   362,    61,   947,   522,   523,   470,    66,  1038,
     262,   982,   529,   368,   258,   958,  1155,   711,   481,   939,
     131,  1936,   523,   519,   262,   928,   522,  1885,   411,   411,
     358,    33,   387,   458,   760,  1253,   523,   250,   463,   968,
    1128,   767,   768,   769,   465,  1155,   989,  2315,     0,   529,
     776,   777,   778,   779,  1083,   781,   914,   262,  1001,  1632,
     287,   288,   289,   789,   922,   791,   792,   925,    27,     6,
     928,   411,   126,  1291,   468,   801,   802,   803,   804,   805,
    2573,   411,   465,   465,  2403,  2310,   411,   415,  1059,   760,
     296,  1773,   262,   996,   247,   301,   767,   768,   769,    48,
     238,   277,  1568,   208,   830,   776,   777,   778,     6,     1,
     968,   218,   268,   468,   157,    58,    65,   262,   789,   980,
     480,   792,   516,    66,  1095,   465,   262,   354,  1502,   174,
     801,   802,   803,   804,   805,   465,   177,   293,   996,  2573,
     465,   125,     0,  1001,  1300,  1301,  1302,  1303,  1304,  1305,
    1306,  1307,  1834,   248,  1836,   262,   105,   401,   425,   830,
     467,   516,    39,   201,   218,   272,  1027,  1110,   475,   476,
      47,   242,    64,   480,   240,   218,  2573,   157,  2573,   470,
     262,  1124,     9,  2656,   268,   545,   231,  1130,   914,  1561,
     481,  1563,  1874,  1671,   239,   277,   922,   268,   305,   559,
      92,    93,   523,   246,  2573,     8,   176,  1295,   262,   293,
      33,   218,   425,   183,   133,   305,   274,   250,   272,   262,
    1124,   947,   293,  1084,   262,   468,   163,   494,   224,   272,
    1201,   591,  1093,   194,   277,    38,    67,  1609,    69,  1921,
    1922,  1170,   201,  1070,  1071,  2150,  2514,   329,   523,   468,
     357,   922,  1110,  1173,  1157,   262,   483,   484,  2150,   258,
     262,   488,  2755,   469,   169,   272,  1124,   219,   220,  1524,
     293,   523,   258,  2573,   262,  1001,   520,   529,   242,   280,
     325,   218,   387,   367,   142,   523,  2598,   463,   146,   238,
     113,   651,   350,   653,   316,  1153,   245,  1669,   658,  1157,
     395,   326,   844,   357,   268,   218,   417,   256,    58,   522,
    1253,  1254,  1170,   424,   357,  1286,    66,   209,   523,   426,
     218,  2755,  1183,  2647,   431,   262,   322,   869,  1262,   293,
     468,   274,   485,  1262,  1263,   272,   426,   360,   363,   263,
     217,  1284,  2654,   277,   410,  1316,   238,   205,  1291,   262,
     357,   409,  1210,   523,   204,  1326,   414,   218,  2755,   272,
    2755,   219,   220,   404,   262,  1583,   522,  1854,   910,   357,
     477,  2661,   249,  1512,   272,  1318,  2666,   431,   523,   298,
    2227,  1859,  1325,  1326,  1110,   475,  2755,   523,   431,  1418,
     480,   218,   425,   935,   271,  1253,  1254,   302,  1124,   400,
    2327,   262,   401,   425,  1262,  1263,  1264,   350,   492,   463,
     398,   272,   373,   362,   363,   401,   523,   208,  1506,   262,
     357,  1682,   529,   477,   431,   785,   174,   258,   377,   399,
     379,   224,   133,  1291,   477,   262,  2726,   329,   522,   262,
    2730,   523,   312,   431,   357,   272,   500,   529,   519,   326,
      58,  1498,  2764,  1124,   262,  2755,   463,  1675,    66,   357,
     166,  1319,  1444,   169,   470,   523,   409,   175,   128,   523,
     477,   414,   494,   262,  1335,   529,    28,   222,   523,  1340,
     523,  1342,  2794,   231,  1345,  1346,   529,  1348,  2802,   347,
     850,   239,   417,   351,   431,  2342,   357,   242,   858,   859,
     350,   209,   467,   437,   125,   439,  2315,  2821,   339,   352,
    2437,   476,   389,   407,   520,   175,   523,   542,   431,   468,
     490,   314,   529,   268,   274,   468,   450,  1253,  1254,   337,
     357,     8,   469,   431,   325,  1362,   237,   897,  2734,  1518,
     477,   529,   205,  1486,  1487,   515,   193,   517,   293,   276,
    1493,   105,  1495,  2226,  2227,   519,   219,   220,   522,  1502,
     430,    38,  2618,   352,   477,  1291,   118,   516,   928,   216,
     431,   291,  1515,  1400,   468,  1518,   468,   325,     9,   477,
     523,   420,  1486,  1487,  2640,  1446,   523,  1530,   512,  1493,
    1451,  1495,   529,  2655,   300,   237,   302,   298,   523,   523,
     350,    31,   303,  1582,   431,  1466,   212,   213,  2290,  2291,
     337,  1515,   972,  2809,   491,  2388,   529,  1569,   351,   226,
      51,   420,   342,   983,   468,   523,  1530,  2409,  1486,  1487,
    1573,   529,     8,    87,   206,  1493,   996,  1495,   371,  1582,
    1583,  2499,   125,  1614,  1502,   406,   252,   253,  1591,  1620,
     477,   258,  2510,  1824,  2716,   494,  1514,  1515,  1561,   409,
    1563,   303,    38,   235,   414,    29,   274,   204,   529,  2342,
    1699,   166,  1530,   463,   169,  1618,   420,  1706,  1607,  1631,
     110,  2454,  2455,   161,  1545,    11,  2748,  2749,   351,  1231,
    1551,   624,  1671,   218,  2756,   494,   523,  1558,  2760,  2761,
     130,   462,   529,  1561,   420,  1563,  1609,  1650,  2827,  1680,
       9,   499,  2494,    12,   475,  1658,    15,    16,   468,   480,
     182,   268,   420,  2581,   514,  1583,   362,  2789,  1671,   471,
     518,  2589,  1675,  1591,    60,  1764,  1765,   262,   407,  1600,
     170,   462,   350,   676,   232,  1287,   293,   272,   475,  1607,
     494,  1609,  1840,   480,  1658,   362,  2818,   468,   479,   237,
    1486,  1487,   109,   370,   194,   129,  1669,  1493,  1614,  1495,
     133,     1,   119,    99,   519,   101,  1502,   103,   494,   209,
    2553,   243,  1764,  1765,   246,   111,  1768,   218,   475,  1515,
      56,   427,   428,   480,   331,   332,   494,   160,   466,   162,
    1658,   409,  1831,  1832,  1530,   268,   414,   475,   268,   468,
     165,  1669,   480,   350,   169,  1486,  1487,  1675,    48,   250,
     251,   299,  1493,  1870,  1495,   303,    92,   456,   457,   142,
     293,   262,   357,   293,  1695,    65,   470,   466,  2473,  2412,
    1701,   272,   168,   109,  1515,  2480,  2481,   481,  1709,  1831,
    1832,   146,   320,   119,   218,   193,   324,  1583,  2034,  1530,
     468,   182,   407,   331,   332,  1591,   472,  1537,   474,   268,
     407,   339,   193,   430,   342,   105,   193,   434,   216,   347,
    1859,   349,   511,   351,   352,   353,   354,  1714,   468,  1977,
     465,  1433,   125,  1435,   293,   216,  2807,  2808,   262,   216,
     475,  1762,  1763,   371,   465,   480,   431,   407,   272,   342,
     767,   768,   769,   468,   475,   466,  1859,  2828,  1889,   480,
     350,   354,   286,   465,   475,   246,   357,   468,     1,   480,
    2101,  2814,  1658,   475,   178,   792,  2847,   263,   480,  1299,
     468,  2824,   410,  1972,   412,   175,   362,   415,   364,  1675,
      11,   194,   477,   196,   315,  2577,   317,  1317,    12,   432,
    1939,    15,    16,  2874,   312,  1507,  1508,   468,    41,    42,
      43,    44,    45,    11,   430,   362,  1834,   364,  1836,   209,
     300,   468,   302,   309,   283,   284,   258,  1658,   260,  1531,
    1532,   390,   468,   357,   503,   504,   505,   506,  2856,    60,
     431,   803,   804,   805,   529,    78,    79,   258,   238,   260,
     309,   310,   362,  2042,   364,   245,  1874,   468,   258,  1734,
     260,  1736,    60,    23,    24,    36,   256,   468,    39,  1571,
    2009,   254,   255,  1575,  1131,    46,    47,  1134,    99,   507,
     101,    27,   103,  1140,   307,   308,   477,  1144,   468,    68,
     111,    70,   387,  1150,  2225,   503,   504,   505,   506,  1920,
     528,    99,   346,   101,  1922,   103,   492,   431,   494,   412,
     434,   435,  2043,   111,    23,    24,   402,   801,   802,   525,
    1622,  1623,  1494,    94,  1496,   777,   778,  1499,  1500,  1501,
     419,   523,   438,  1505,   503,   504,   505,   506,   529,   567,
     852,   853,   854,   855,  1516,  1517,   238,   168,   419,  2083,
     578,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      59,   380,   448,   522,   523,  1986,  1948,  1949,  1950,  1951,
     168,   224,   362,   363,   262,   468,   468,   523,  2226,  2227,
    2083,   262,   468,   523,   120,   121,   122,   377,   463,   379,
     523,   407,   267,   164,   468,   425,   468,   625,    66,   414,
      61,    71,   468,   523,  2107,   529,   523,  2028,   134,   201,
    2031,   639,   479,   314,   479,   479,   644,  2038,   479,   479,
     135,   479,   479,   479,   195,  2232,   479,   464,   479,   479,
     479,   173,   463,   136,    25,    26,   137,   523,   397,   362,
     138,  2230,   263,   139,  2065,   140,   217,   141,  2237,   104,
      55,    56,   514,  2192,   479,   463,  2119,   458,  2121,   144,
    2066,  2067,    50,  2166,   418,   263,   462,   459,   462,   283,
     284,  2174,   456,  2806,  2177,   147,   201,    68,   468,    70,
     149,    72,   148,   150,   518,   169,   277,    92,   309,    32,
     718,   151,   115,   152,  2342,   309,   310,   153,   115,  1619,
     271,  2119,   154,  2121,   109,   338,   155,   468,   244,   201,
     407,   309,   261,   523,   119,   106,   107,   108,   468,   320,
     353,   523,   258,   414,   262,   523,   516,   755,  2149,   468,
     110,   262,   262,   523,   485,   306,   468,   320,   425,   112,
    1660,  1661,   479,   463,   523,  2334,   523,   523,   229,   387,
     208,   262,   349,   385,   278,   326,   169,   785,   302,   180,
     520,   132,     6,   520,  2371,     9,   157,   376,   159,   463,
     522,   172,   234,   133,   463,   166,    50,   463,   169,    50,
     234,   402,   201,  2390,  2391,  2288,   468,   407,   377,  2396,
     374,  2330,   468,    88,   468,    23,   468,   459,   471,   278,
    1902,  1903,   413,  2306,   402,   262,    50,   343,   344,   345,
     238,   350,  2401,  1915,  1916,  2318,    75,  2699,   389,   523,
     468,   460,   358,   528,   527,   243,   438,   448,   465,  2250,
     307,   859,   403,   391,   282,   465,  2257,  2258,  2259,  2260,
     465,    85,  2373,   465,  2265,   463,    90,   468,   465,   465,
     448,   373,   465,   463,   425,  2444,   208,   465,   102,   208,
      17,   143,  2469,  2432,  2270,   459,   317,   258,   132,   260,
     376,    50,   127,   463,   208,  2464,  2297,   145,     8,   201,
     908,   315,   438,   208,   520,   520,   277,   468,   463,     9,
     523,     7,  2298,   407,   468,    89,   401,   925,    22,   278,
     928,   516,   523,   314,   454,   194,   336,    48,   307,    58,
       8,   939,   425,   305,   426,   208,   523,   303,   454,   237,
     491,   516,  2529,    46,   329,   523,   414,   194,   333,   334,
     516,    50,   194,   243,   324,   322,   318,   298,   133,   116,
     968,   338,   407,  2550,    67,    68,    69,    70,   468,   321,
     523,  2558,  2559,   197,   198,   199,   453,   209,   209,   459,
     523,  2382,   206,   518,   262,   235,   468,   208,   996,   208,
     372,   105,   377,     8,   218,    38,  2397,   372,  2585,    50,
     473,   268,   243,   268,   304,    98,   224,   478,   393,   394,
    2411,     4,   510,  2095,  2096,  2097,   238,   468,   194,   520,
     523,   395,   260,   415,  2410,    58,    19,   251,  2547,   438,
     463,   268,    40,   257,   302,   259,    50,    30,   262,   113,
     264,   265,   266,   347,   391,   268,   270,   468,   272,   161,
    2680,  2620,  2535,   277,   268,   268,   299,  2644,  2769,   459,
     529,   463,    54,    27,   413,   415,    17,   425,   339,   499,
     112,   347,   359,    66,   201,   462,   262,   434,   468,   468,
     350,   110,  1090,   416,   468,   117,   193,   311,     7,   460,
     470,  2678,   316,   378,  2613,   433,   523,  2179,  2180,   468,
     463,   229,    31,   468,   522,  2506,   330,   226,   117,   520,
     447,   347,   215,   468,   317,   314,   181,   209,    33,    58,
     209,    36,   262,  2710,    39,   216,   227,  2528,   523,   523,
    2613,   215,    47,   357,   520,   122,  2650,   201,   241,   321,
     511,    50,   329,  2626,   368,  1153,  2629,   440,     7,  1157,
      58,    55,   523,    31,    60,   258,    53,   260,    36,  1076,
      52,    39,  1170,   397,   388,  1173,   204,  2650,    46,    47,
    1409,  2572,  2573,   219,  1073,  1389,   728,  2660,  1055,    94,
    2532,  2269,  2256,  2469,  2264,   699,  2270,  2463,   291,    67,
    2249,    69,  1695,  2707,  2573,  2596,  2597,  2766,   113,   683,
    2854,   425,  1210,  2220,  2549,  2552,  2607,   431,  2676,  2575,
     313,  2612,  2192,  2866,  2841,  2818,    94,  2437,  2701,   443,
     444,  2611,  2611,  2708,  2707,   241,  2708,    65,  1566,  1457,
    1095,  1164,   335,   226,  2134,  2135,  2100,  1175,   341,  1564,
    2099,   507,  2643,   520,  2813,   818,  2146,   542,  2817,  1201,
     864,  1568,  2653,   477,  1262,  1263,  1264,   563,   867,  1223,
    1850,   911,  1251,   487,  1591,   258,  1863,  2668,  1864,  2670,
     494,   918,   600,  2674,  1618,   268,   607,  1889,  1279,  1620,
     195,  1680,  1634,   959,   508,   639,   164,  1308,   203,   513,
    2773,   637,   516,   354,  1326,  1661,  1925,   521,  2568,   523,
    1326,  1011,   217,  1434,  1432,   529,  2875,  2693,   653,  1511,
     847,  1319,   846,  1510,  1930,  1919,   419,   195,  1918,  2309,
    1536,  2184,  1931,  2183,  2807,  2808,   429,  1042,  1336,  1535,
     323,  2732,  2733,  1654,   249,   328,  1654,   897,  1654,   217,
    1654,   625,  2017,   446,   810,  2828,  2747,  2613,  1295,  1840,
    1518,  2752,  2753,   517,   269,  1768,   271,  2840,  2841,  2613,
    1398,  2223,  1393,  2522,  2847,   468,   730,  2768,  1861,   362,
    2771,  2772,  2423,   475,  2793,  1067,  1611,   370,   293,   294,
     258,  1315,  1580,  1718,  2809,  2684,   489,  2870,  2517,   382,
    1344,  2874,  2292,   271,    -1,    -1,    -1,    -1,    -1,    -1,
     278,    -1,    -1,  2804,    -1,    -1,   509,    -1,    -1,  2807,
    2808,   326,    -1,   516,    -1,   518,    -1,    -1,    -1,    -1,
      -1,   414,    -1,    -1,    -1,   418,    -1,    -1,   306,    -1,
    2828,    -1,    -1,    -1,   427,    -1,  1444,    -1,    -1,    -1,
     355,   356,    -1,    -1,    -1,   438,    -1,    -1,   326,  2847,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   339,    -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   389,   468,  2874,    -1,   471,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   403,    -1,
    1498,    -1,    -1,   408,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1514,    -1,    -1,    -1,
     425,   389,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   452,    -1,    -1,
      -1,  2807,  2808,    -1,    -1,    -1,   461,   425,    -1,    -1,
      -1,    -1,    -1,  1561,    -1,  1563,    -1,    -1,    -1,    -1,
      -1,    -1,  2828,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,    -1,     5,    -1,   491,    -1,    -1,    10,
      -1,  2847,    -1,    -1,    -1,    -1,   501,    18,    -1,    -1,
      -1,    -1,   507,    -1,    -1,    -1,  2807,  2808,    -1,  1607,
      -1,  1609,    -1,    -1,    -1,    -1,    -1,    -1,  2874,    -1,
      -1,    -1,    -1,   491,    -1,    -1,    -1,  2828,    -1,    -1,
      -1,    52,    53,    -1,   502,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,  2847,    -1,    -1,    -1,
      -1,    -1,    -1,    74,   522,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,  1669,    -1,  2874,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1682,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,   124,    -1,    -1,    -1,  1705,    -1,    -1,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,    -1,   143,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,    -1,    -1,    -1,
     161,    -1,    -1,    -1,    -1,   166,   167,    -1,   169,    -1,
      -1,   172,    -1,    -1,  1752,  1753,  1754,    -1,    -1,    -1,
      -1,  1759,  1760,    -1,    -1,    -1,  1764,  1765,  1766,    -1,
    1768,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,   210,
     211,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,   230,
      -1,    -1,   233,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,  1821,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1830,  1831,  1832,  1833,  1834,    -1,  1836,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,   279,    -1,
     281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
     291,    -1,  1870,    -1,    -1,    -1,  1874,   298,   299,   300,
      -1,   302,   303,   304,   305,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,   319,    -1,
       9,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,    -1,
      -1,   332,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,  1922,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,
     361,    -1,    -1,    -1,  1942,    -1,    -1,    -1,    -1,    -1,
     371,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,   384,    -1,   386,    63,    -1,    -1,    -1,
      -1,   392,    -1,    -1,    -1,   396,    85,    74,    -1,    -1,
      77,   197,   198,   199,   405,    -1,    -1,    -1,    97,    -1,
     206,    -1,    -1,   102,    91,   416,    -1,    -1,    -1,    -1,
      -1,    -1,   218,    -1,    -1,   426,   427,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   436,    -1,   114,    -1,    -1,
     441,   442,    -1,    -1,   445,   122,   447,   124,    -1,    -1,
      -1,   247,    -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   262,   468,   264,   265,
     266,    -1,    -1,    -1,   270,    -1,   272,   478,    -1,   156,
      -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,    -1,
     167,    -1,   493,    -1,    -1,   172,    -1,   498,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2084,    -1,   197,   198,
     199,    -1,    -1,    -1,    -1,   311,    -1,   206,    -1,   520,
      -1,    -1,    -1,   200,    -1,   526,    -1,    -1,    -1,   218,
     207,    -1,    -1,   210,   211,    -1,    -1,    -1,    -1,    -1,
      -1,  2119,    -1,  2121,   221,    -1,    -1,    -1,    -1,    -1,
      -1,   228,    -1,   230,    -1,    -1,   233,    -1,    -1,    -1,
      -1,   357,   251,    -1,  2142,    -1,    -1,    -1,   257,    -1,
     259,    -1,    -1,   262,    -1,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,    -1,    -1,   277,    -1,
      -1,    -1,   388,    -1,    -1,    -1,    -1,    -1,   275,    -1,
      -1,    -1,   279,    -1,   281,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   431,    -1,    -1,    -1,    -1,
      -1,   330,   319,    -1,    -1,    -1,    -1,   443,   444,    -1,
      -1,    -1,    -1,    -1,  2232,   332,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,
    2248,  2249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   477,    -1,   360,   361,    -1,    -1,    -1,    -1,   485,
      -1,   487,    -1,    -1,   371,    -1,    -1,    -1,    -1,   388,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,   386,
      -1,    -1,   508,    -1,    -1,   392,    -1,   513,    -1,   396,
      -1,    -1,    -1,    -1,    -1,   521,    -1,   523,   405,    -1,
      -1,    -1,    -1,   529,    -1,    -1,    -1,    -1,    -1,   416,
      -1,    -1,   431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     427,    -1,    -1,    -1,   443,   444,    -1,    -1,    -1,   436,
      -1,    -1,    -1,    -1,   441,   442,    -1,    -1,   445,    -1,
     447,    -1,    -1,    -1,    -1,    -1,    -1,     1,   455,     3,
      -1,     5,    -1,    -1,    -1,    -1,    10,    -1,   477,    -1,
      -1,   468,    -1,  2371,    18,    -1,    -1,    -1,   487,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   486,
    2388,    -1,  2390,  2391,    -1,    -1,   493,    -1,  2396,   508,
      -1,   498,    -1,    -1,   513,    -1,    -1,    -1,    52,    53,
      -1,  2409,   521,    -1,   523,    -1,    -1,    -1,    -1,    63,
     529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   526,
      74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2454,  2455,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,  2469,    -1,    -1,  2472,  2473,    -1,    -1,   122,    -1,
     124,    -1,  2480,  2481,  2482,    -1,     1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    10,  2494,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,   172,    -1,
      -1,  2529,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,    -1,    -1,  2541,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,  2550,    -1,    -1,  2553,   200,    -1,    -1,    74,
    2558,  2559,    77,   207,    -1,    -1,   210,   211,    -1,    -1,
    2568,    -1,    -1,    -1,    -1,    -1,    91,   221,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,   230,  2585,    -1,   233,
      -1,    -1,    -1,    -1,    -1,  2593,    -1,    -1,    -1,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    85,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,   275,    -1,    -1,    -1,   279,    -1,   281,    -1,    -1,
      -1,   156,    -1,    -1,    -1,    -1,  2644,   291,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    -1,  2661,    -1,    -1,    -1,    -1,  2666,    -1,
      -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,    -1,    -1,
    2678,    -1,    -1,    -1,    -1,   200,    -1,    -1,   332,    -1,
      -1,    -1,   207,    -1,    -1,   210,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,
      -1,    -1,  2710,   228,    -1,   230,   360,   361,   233,    -1,
     197,   198,   199,    -1,    -1,    -1,    -1,   371,  2726,   206,
      -1,    -1,  2730,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     384,    -1,   386,    -1,    -1,    -1,    -1,    -1,   392,    -1,
      -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     275,   405,    -1,    -1,   279,    -1,   281,    -1,    -1,    -1,
      -1,    -1,   416,    -1,    -1,    -1,   291,    -1,    -1,    -1,
      -1,    -1,    -1,   427,    -1,   262,    -1,   264,   265,   266,
      -1,    -1,   436,   270,    -1,    -1,    -1,   441,   442,    -1,
      -1,   445,    -1,   447,   319,    -1,    -1,    -1,    -1,    -1,
      -1,   455,     3,    -1,     5,    -1,    -1,   332,    -1,    10,
      -1,    -1,    -1,    -1,   468,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   486,    -1,    -1,   360,   361,    -1,    -1,   493,
      -1,    -1,    -1,    -1,   498,    -1,   371,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,   384,
      -1,   386,    63,    -1,    -1,   352,    -1,   392,    -1,    -1,
      -1,   396,   526,    74,    -1,    -1,    77,    -1,    -1,    -1,
     405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   388,   427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   436,    -1,   114,    -1,    -1,   441,   442,    -1,    -1,
     445,   122,   447,   124,    -1,    -1,    -1,    -1,    -1,    -1,
     455,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,    -1,   143,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   443,   444,    -1,    -1,
      -1,   486,    -1,    -1,    -1,    -1,   167,    -1,   493,    -1,
      -1,   172,    -1,   498,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
     487,   526,    -1,    -1,    -1,     6,   207,    -1,     9,   210,
     211,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
     221,   508,    -1,    -1,    -1,    -1,   513,   228,    -1,   230,
      -1,    -1,   233,    -1,   521,    -1,   523,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,   279,    -1,
     281,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
     291,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,   360,
       9,    -1,   163,    12,    13,    14,    -1,    -1,    -1,    -1,
     371,    20,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,    -1,
      -1,   392,    -1,    -1,    -1,   396,   197,   198,   199,    -1,
      -1,    -1,    -1,    -1,   405,   206,    -1,    -1,    -1,    -1,
      -1,   212,   213,    62,    -1,   416,    -1,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   436,    85,   238,    -1,    -1,
     441,   442,    -1,    -1,   445,    -1,   447,    -1,    -1,    -1,
     251,   252,   253,   102,   455,    -1,   257,    -1,   259,    -1,
      -1,   262,    -1,   264,   265,   266,    -1,   468,    -1,   270,
      -1,   272,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,   290,
      -1,    -1,   493,    -1,    -1,   296,    -1,   498,    -1,    -1,
     301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,     6,
     311,    -1,     9,    -1,   163,   316,    -1,    -1,    -1,    -1,
     321,    -1,    -1,    -1,   173,   526,    -1,    -1,    -1,   330,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   198,
     199,    -1,    -1,    -1,    -1,    -1,   357,   206,    -1,    -1,
      -1,    -1,    -1,   212,   213,    -1,    -1,    -1,    -1,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   251,   252,   253,   102,    -1,    -1,   257,    -1,
     259,    -1,    -1,   262,    -1,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,    -1,    -1,   277,    -1,
     431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   290,   443,   444,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,   301,    -1,    -1,     6,    -1,    -1,     9,   156,
     309,    -1,   311,    -1,   465,    -1,   467,   316,   469,    -1,
      -1,   472,   321,   474,   475,   476,   477,    -1,   479,   480,
      31,   330,    -1,    -1,    -1,    36,   487,    -1,    39,    -1,
      -1,   340,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
     197,   198,   199,    -1,    -1,    -1,    -1,   508,   357,   206,
      -1,    -1,   513,    -1,    -1,    -1,    67,    -1,    69,    -1,
     521,   218,   523,    -1,    -1,    -1,    -1,    -1,   529,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,     6,   388,
      -1,     9,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,   259,    -1,    -1,   262,    -1,   264,   265,   266,
      -1,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,    -1,
     277,    -1,   431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   443,   444,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,   311,    -1,   465,    85,   467,    -1,
     469,    -1,    -1,   472,    -1,   474,   475,   476,   477,    -1,
     479,   480,    -1,   330,   102,    -1,    -1,    -1,   487,    -1,
      -1,    -1,    -1,    -1,   195,    -1,   197,   198,   199,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   508,
     357,    -1,    -1,    -1,   513,    -1,   217,   218,    -1,    -1,
      -1,    -1,   521,    -1,   523,    -1,    -1,    -1,    -1,    -1,
     529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,   388,    -1,     9,    -1,    -1,    -1,   165,    -1,    -1,
     251,    -1,    -1,    -1,    -1,    -1,   257,   258,   259,    -1,
      -1,   262,    -1,   264,   265,   266,    -1,    -1,    -1,   270,
     271,   272,    -1,    -1,    -1,    -1,   277,   278,    -1,   197,
     198,   199,    -1,    -1,   431,    -1,    -1,    -1,   206,    -1,
     208,    -1,    -1,    -1,    -1,    -1,   443,   444,    -1,    -1,
     218,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,   470,    -1,   326,    -1,    -1,    -1,   330,
     477,    -1,    -1,   251,   481,    -1,   102,    -1,   339,   257,
     487,   259,    -1,    -1,   262,    -1,   264,   265,   266,    -1,
      -1,    -1,   270,    -1,   272,    -1,   357,    -1,    -1,   277,
      -1,   508,    -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   521,    -1,   523,   295,    -1,    -1,
      -1,    -1,   529,    -1,    -1,    -1,     6,   388,   389,     9,
      -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   425,    -1,    -1,    -1,    -1,    -1,
     431,   197,   198,   199,    -1,    -1,    -1,    -1,    -1,   357,
     206,    -1,   443,   444,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,   387,
     388,    -1,    -1,    -1,    -1,    -1,   477,    97,    -1,    -1,
      -1,    -1,   102,    -1,    -1,   251,   487,    -1,    -1,    -1,
     491,   257,    -1,   259,    -1,    -1,   262,    -1,   264,   265,
     266,   502,    -1,    -1,   270,    -1,   272,   508,    -1,    -1,
      -1,   277,   513,   431,    -1,    -1,    -1,    -1,    -1,    -1,
     521,   522,   523,    -1,    -1,   443,   444,    -1,   529,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,
     316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,
      -1,    -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,   487,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   198,   199,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
     508,   357,    -1,    -1,    -1,   513,    -1,    -1,   218,    -1,
      -1,    -1,    -1,   521,   522,   523,    -1,    -1,    -1,    -1,
      -1,   529,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   388,    -1,    -1,    97,    -1,    -1,    -1,    -1,
     102,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,   259,
      -1,    -1,   262,    -1,   264,   265,   266,    -1,    -1,    -1,
     270,    -1,   272,    -1,    -1,    -1,    -1,   277,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   431,    -1,    -1,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,   443,   444,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     330,   477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   487,    -1,    -1,    -1,   197,   198,   199,    -1,    -1,
      -1,    -1,    -1,    -1,   206,    -1,    -1,   357,    -1,    -1,
      -1,    -1,   508,    -1,    -1,    -1,   218,   513,    -1,    85,
      -1,    -1,    -1,     6,    -1,   521,     9,   523,    -1,    -1,
      -1,    -1,    -1,   529,    -1,    -1,   102,    -1,   388,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,
      -1,    -1,    -1,    -1,    -1,   257,    -1,   259,    -1,    -1,
     262,    -1,   264,   265,   266,    -1,    -1,    -1,   270,    -1,
     272,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,
      -1,   431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   443,   444,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,   330,    -1,
      -1,   197,   198,   199,    -1,    -1,    -1,   487,    -1,    -1,
     206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   218,    -1,    -1,   357,    -1,    -1,   508,     6,
      -1,    -1,     9,   513,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   521,    -1,   523,    -1,    -1,    -1,    -1,    -1,   529,
      -1,    -1,    -1,    -1,    -1,   251,   388,    -1,    -1,    -1,
      -1,   257,    -1,   259,    -1,    -1,   262,    -1,   264,   265,
     266,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,
      -1,   277,    -1,    -1,   197,   198,   199,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,   431,
      -1,    -1,    -1,    -1,    -1,   218,    -1,    -1,    85,    -1,
      -1,   443,   444,    -1,    -1,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   330,    -1,    -1,    -1,   251,    -1,
      -1,    -1,    -1,    -1,   257,   477,   259,    -1,    -1,   262,
      -1,   264,   265,   266,    -1,   487,    -1,   270,    -1,   272,
      -1,   357,    -1,    -1,   277,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,
      -1,   513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   521,
      -1,   523,   388,    -1,    -1,    -1,    -1,   529,   311,    -1,
      -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,    -1,    -1,
     197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,    -1,    -1,    -1,   431,    -1,    -1,    -1,    -1,
      -1,   218,    -1,    -1,   357,    -1,    85,   443,   444,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   463,    -1,     6,
      -1,    -1,     9,    -1,   251,   388,    -1,    -1,    -1,    -1,
     257,   477,   259,    -1,    -1,   262,    -1,   264,   265,   266,
      -1,   487,    -1,   270,    -1,   272,    -1,    -1,    -1,    -1,
     277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   508,    -1,    -1,    -1,    -1,   513,   431,    -1,
      -1,    -1,    -1,    -1,    -1,   521,    -1,   523,    -1,    -1,
     443,   444,    -1,   529,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,   197,   198,
     199,    -1,   201,     6,   477,   102,     9,   206,    -1,    -1,
      -1,    -1,    -1,    -1,   487,    -1,    -1,    -1,    -1,   218,
     357,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,
     513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   521,    -1,
     523,   388,   251,    -1,    -1,    -1,   529,    -1,   257,    -1,
     259,    -1,    -1,   262,    -1,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,    -1,    -1,   277,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   431,    -1,    -1,    -1,    -1,   102,
     197,   198,   199,    -1,    -1,    85,   443,   444,    -1,   206,
      -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   218,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     487,    -1,    -1,    -1,   251,    -1,    -1,    -1,   357,    -1,
     257,    -1,   259,    -1,    -1,   262,    -1,   264,   265,   266,
      -1,   508,    -1,   270,    -1,   272,   513,    -1,    -1,    -1,
     277,    -1,    -1,    -1,   521,    -1,   523,    -1,    -1,   388,
      -1,    -1,   529,    -1,   197,   198,   199,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   311,   218,    -1,   197,   198,   199,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
      -1,    -1,   431,   330,    -1,    -1,    -1,    -1,   218,    -1,
      -1,    -1,    -1,    -1,   443,   444,    -1,    -1,   251,    -1,
      -1,    -1,    -1,    -1,   257,    -1,   259,    -1,    -1,   262,
     357,   264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,
      -1,   251,    -1,    -1,   277,    -1,    -1,   257,   477,   259,
      -1,    -1,   262,    -1,   264,   265,   266,    -1,   487,    -1,
     270,   388,   272,    -1,    -1,    -1,    -1,   277,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,   508,
      -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   521,    -1,   523,    -1,    -1,   330,   425,    -1,
     529,   311,    -1,    -1,   431,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   443,   444,    -1,    -1,
     330,    -1,    -1,    -1,   357,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,    -1,
     477,    -1,    -1,    -1,    -1,   388,    -1,    -1,    -1,    -1,
     487,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   508,    -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   521,    -1,   523,    -1,   431,    -1,
      -1,    -1,   529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     443,   444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   443,   444,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   487,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   508,    -1,   487,    -1,    -1,
     513,    -1,     1,    -1,    -1,    -1,    -1,    -1,   521,    -1,
     523,    -1,    -1,    -1,    -1,    -1,   529,    -1,   508,    -1,
      -1,    -1,    -1,   513,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   521,    -1,   523,    33,    -1,    -1,    36,    -1,   529,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    -1,   184,   185,   186,   187,   188,
      -1,    -1,   191,   192,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,   201,    -1,   203,    -1,    -1,    -1,    -1,    -1,
     209,    -1,    -1,     1,    -1,   214,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    59,   225,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,   247,    37,
     249,    85,    40,    41,    42,    43,    44,    45,    46,   258,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   283,    -1,    -1,    -1,    76,    -1,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   326,   327,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   335,    -1,    -1,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,   353,    -1,   355,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   198,   199,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   381,    -1,   218,    -1,    -1,   175,    -1,    -1,
     389,    -1,   180,    -1,    -1,    85,   184,   185,   186,   187,
     188,    -1,    -1,   191,   192,    -1,    -1,    -1,    -1,   408,
      -1,    -1,   102,   247,    -1,    -1,    -1,    -1,    -1,    -1,
     419,   209,   421,   422,   423,    -1,    -1,    -1,   262,    -1,
     264,   265,   266,    -1,    -1,    -1,   270,   225,   272,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,   463,    -1,    -1,    -1,    -1,   468,
      -1,    -1,    -1,    -1,   473,    -1,    -1,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   485,    -1,    -1,    -1,
      -1,    -1,   491,    -1,    -1,   283,   495,   496,   497,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   198,   199,
     509,    -1,    -1,    -1,    -1,   514,   206,   516,    -1,    -1,
      -1,    -1,    -1,   357,   523,   313,    -1,    -1,   218,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,
     338,    -1,    -1,    -1,   388,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,   264,   265,   266,    -1,   366,    -1,
     270,    -1,   272,    -1,    -1,    -1,    -1,    31,    -1,    33,
      -1,    -1,    36,    -1,    38,    39,    -1,   431,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,   443,
     444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   311,    -1,    67,    -1,    69,    -1,    -1,    -1,    -1,
      -1,   419,    -1,   421,   422,   423,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,
      94,   485,    -1,   487,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   449,    -1,    -1,    -1,    -1,    -1,   357,    -1,   113,
      -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,   513,
     468,    -1,    -1,    -1,    -1,    -1,    -1,   521,    -1,   523,
      -1,    -1,    -1,    -1,    -1,   529,    -1,   485,   388,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,   496,   497,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   509,    -1,    21,    -1,    -1,    -1,    -1,   516,    -1,
      -1,    -1,    -1,    -1,    -1,   523,    -1,    -1,    -1,    37,
      -1,   431,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,   195,    -1,   443,   444,    -1,    -1,    -1,   202,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    76,    -1,
      78,    79,    80,    81,    82,    83,    84,   477,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,   508,    -1,
      -1,    -1,    -1,   513,   122,   269,    -1,   271,    -1,    -1,
      -1,   521,    -1,   523,   278,    -1,    -1,    -1,    -1,   529,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,
     294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   326,    -1,    -1,    -1,   184,   185,   186,   187,
     188,    -1,    -1,   191,   192,   339,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    36,    -1,   225,    39,    40,
      41,    42,    43,    44,    45,    46,    47,   381,    -1,    -1,
     238,    -1,    -1,   241,    -1,   389,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,   403,
      -1,    -1,    -1,    -1,   408,    76,    -1,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   425,    -1,    -1,    -1,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   452,    -1,
      -1,   122,    -1,    -1,    -1,   313,   460,   461,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,
     338,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,
      -1,    -1,    -1,   164,    -1,   353,    -1,   501,    -1,    -1,
      -1,    -1,    -1,   507,    -1,    -1,    -1,    -1,   366,    -1,
      -1,    -1,    -1,   184,   185,   186,   187,   188,   522,    -1,
     191,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,
     201,    -1,   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,
      -1,    -1,    -1,   214,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,
      -1,   419,    -1,   421,   422,   423,    -1,   238,    -1,    -1,
     241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    40,
      41,    42,    43,    44,    45,    -1,    -1,   258,    85,    -1,
      -1,   449,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     271,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
     468,    -1,   283,    -1,    -1,    76,    -1,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,   485,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,   496,   497,
      -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   509,    -1,    -1,    -1,   326,   327,    -1,   516,    -1,
      -1,   122,    -1,    -1,   335,    -1,    -1,   338,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   353,    -1,   355,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
     197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,   206,
     381,    -1,   102,    -1,    -1,    -1,    -1,    -1,   389,    -1,
      -1,   218,    -1,   184,   185,   186,   187,   188,    -1,    -1,
     191,   192,    -1,    -1,    -1,    -1,    -1,   408,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,
     421,   422,   423,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,   259,    -1,   225,   262,    -1,   264,   265,   266,
      -1,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   463,    -1,    -1,    -1,    -1,   468,    -1,    -1,
      -1,    -1,   473,    -1,    -1,    -1,    -1,   197,   198,   199,
      -1,    -1,    -1,    -1,   311,    -1,   206,    -1,    -1,    -1,
     491,    -1,   283,    85,   495,   496,   497,    -1,   218,    -1,
      -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,   509,    -1,
     102,    -1,    -1,   514,    -1,   516,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     357,   251,    -1,    -1,    -1,    -1,   327,   257,    -1,   259,
      -1,    -1,   262,    -1,   264,   265,   266,   338,    -1,    -1,
     270,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   388,   353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   311,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   431,   197,   198,   199,    -1,    -1,
     330,    -1,    -1,   102,   206,    -1,   443,   444,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,
     421,   422,   423,    -1,    -1,    -1,    -1,   357,   465,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,
     477,    -1,   479,   480,    -1,    -1,    -1,    -1,    -1,   251,
     487,    -1,    -1,    -1,    -1,   257,    -1,   259,   388,    -1,
     262,    -1,   264,   265,   266,    -1,    -1,    -1,   270,    -1,
     272,   508,    -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   521,    -1,   523,    -1,    -1,    85,
      -1,    -1,   529,    -1,   495,   496,   497,    -1,   197,   198,
     199,   431,    -1,    -1,    -1,    -1,   102,   206,    -1,   311,
      -1,    -1,    -1,   443,   444,    -1,    -1,    -1,    -1,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,    -1,
      -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   475,    -1,   477,    -1,   479,
     480,    -1,   251,    -1,    -1,   357,    -1,   487,   257,    -1,
     259,    -1,    -1,   262,    -1,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,    -1,    -1,   508,    -1,
      -1,    -1,    -1,   513,    -1,    -1,   388,    -1,    -1,    -1,
      -1,   521,    -1,   523,    -1,    -1,    -1,    -1,    -1,   529,
      -1,   197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,   311,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,   431,
      -1,   330,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,   443,   444,    -1,    -1,    -1,    -1,    -1,    -1,   451,
      -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,   357,    -1,
      -1,   257,    -1,   259,    -1,    -1,   262,    -1,   264,   265,
     266,    -1,    -1,   475,   270,   477,   272,   479,   480,    -1,
      -1,    -1,    -1,    -1,    -1,   487,    -1,    -1,    -1,   388,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,
      -1,   513,    -1,    -1,    -1,   311,    -1,    -1,    -1,   521,
      85,   523,    -1,    -1,    -1,    -1,    -1,   529,    -1,   197,
     198,   199,   431,    -1,   330,    -1,    -1,   102,   206,    -1,
      -1,    -1,    -1,    -1,   443,   444,    -1,    -1,    -1,    -1,
     218,    -1,   451,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,   477,    -1,
     479,   480,    -1,   251,    -1,    -1,    -1,    -1,   487,   257,
      -1,   259,   388,    -1,   262,    -1,   264,   265,   266,    -1,
      -1,    85,   270,    -1,   272,    -1,    -1,    -1,    -1,   508,
      -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   521,    85,   523,    -1,    -1,    -1,    -1,    -1,
     529,    -1,   197,   198,   199,   431,    -1,    -1,    -1,    -1,
     102,   206,    -1,   311,    -1,    -1,    -1,   443,   444,    -1,
      -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,   465,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   475,
      -1,   477,    -1,   479,   480,    -1,   251,    -1,    -1,   357,
      -1,   487,   257,    -1,   259,    -1,    -1,   262,    -1,   264,
     265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,
      -1,    -1,   508,   197,   198,   199,    -1,   513,    -1,    -1,
     388,    -1,   206,    -1,    -1,   521,    -1,   523,    -1,    -1,
      -1,    -1,    -1,   529,   218,   197,   198,   199,    -1,    -1,
      -1,    -1,    -1,    -1,   206,    -1,   311,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,
      -1,    -1,    -1,   431,    -1,   330,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,   443,   444,    -1,   262,    -1,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,   251,
      -1,    -1,   357,    -1,    -1,   257,    -1,   259,    -1,    -1,
     262,    -1,   264,   265,   266,    -1,    -1,   475,   270,   477,
     272,   479,   480,    -1,    -1,    -1,    -1,    -1,    -1,   487,
      -1,    -1,    -1,   388,    -1,    -1,    -1,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     508,    -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,   311,
      -1,    -1,    -1,   521,    -1,   523,    -1,    -1,    -1,    -1,
      -1,   529,    -1,   197,   198,   199,   431,    -1,   330,    -1,
      -1,    -1,   206,   357,    -1,    -1,    -1,    -1,   443,   444,
      -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,   357,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   388,    -1,    -1,    -1,    -1,    -1,
     102,    -1,   477,    -1,   479,    -1,    -1,   251,    -1,    -1,
      -1,   383,   487,   257,    -1,   259,   388,    -1,   262,    -1,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,    -1,    -1,   508,    85,    -1,    -1,   431,   513,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   521,    -1,   523,   443,
     444,   102,    -1,    -1,   529,    -1,    -1,    -1,    -1,   431,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,
      -1,   443,   444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   477,    -1,    -1,   330,    -1,    -1,    -1,
      -1,    -1,    -1,   487,   196,   197,   198,   199,    -1,    -1,
      -1,    -1,    -1,    -1,   206,   477,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   357,   508,   487,    -1,    -1,    -1,   513,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   521,    -1,   523,
      -1,    -1,    -1,    -1,    -1,   529,   508,    -1,    -1,    -1,
      -1,   513,    -1,    -1,   388,   196,   197,   198,   199,   521,
      -1,   523,    -1,    -1,    -1,   206,    -1,   529,    -1,    -1,
     262,    -1,   264,   265,   266,    -1,    -1,    -1,   270,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   431,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   443,
     444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,
      -1,   262,    -1,   264,   265,   266,    -1,    -1,    -1,   270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   487,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     311,    -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,   513,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   521,    -1,   523,
      -1,    -1,    -1,    -1,    -1,   529,   388,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,    -1,
      -1,   443,   444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   487,    -1,    -1,    -1,    -1,
      -1,    -1,   443,   444,    -1,    -1,    -1,   499,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   456,   508,    -1,    -1,    -1,
      -1,   513,    -1,    -1,    -1,    -1,   518,    -1,    -1,   521,
     522,   523,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   508,    -1,    -1,
      -1,    -1,   513,    -1,    -1,    -1,    -1,   518,    -1,    -1,
     521,   522,   523
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   533,   534,     0,   219,   220,   535,   536,   537,   538,
     539,   540,   541,   547,   125,   125,   537,   157,   546,   560,
     561,   205,   351,   548,   551,   468,   468,   125,   105,   674,
     676,    87,   562,   563,   552,   549,   546,   546,   468,   125,
     347,   836,   839,   471,   677,   407,   232,   625,   626,   312,
     430,   564,   565,   569,   468,   468,   146,   542,   543,   544,
     142,   545,   468,   125,   862,   863,   407,   678,   468,   407,
     178,   627,   468,   468,   432,   586,   569,   565,   262,   352,
     553,   553,   262,   352,   554,   544,   554,    57,   514,   840,
       1,     3,     5,    10,    18,    52,    53,    63,    74,    77,
      91,   114,   122,   124,   156,   167,   172,   200,   207,   210,
     211,   221,   228,   230,   233,   275,   279,   281,   291,   319,
     332,   360,   361,   371,   384,   386,   392,   396,   405,   416,
     427,   436,   441,   442,   445,   447,   455,   468,   486,   493,
     498,   526,   864,   865,   881,   886,   890,   895,   915,   919,
     923,   927,   928,   929,   934,   948,   952,   955,   969,   973,
     976,   979,   983,   984,   988,   998,  1001,  1019,  1021,  1024,
    1028,  1035,  1047,  1062,  1063,  1066,  1067,  1071,  1077,  1078,
    1086,  1102,  1112,  1121,  1126,  1135,  1139,  1141,  1144,  1147,
    1150,  1177,   864,   468,   177,   404,   675,   679,   680,   682,
     468,   468,   629,   570,   566,   468,    11,    60,    99,   101,
     103,   111,   168,   263,   309,   402,   448,   523,   587,   588,
     589,   590,   591,   597,   606,   608,   613,   616,   617,   619,
     620,   621,   622,   623,   624,    27,   555,   555,   468,   468,
     842,   841,   387,   848,     3,     5,    10,    18,    52,    53,
      63,    74,    77,    91,   114,   122,   124,   132,   134,   135,
     136,   137,   138,   139,   140,   141,   143,   144,   145,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   167,
     172,   200,   207,   210,   211,   221,   228,   230,   233,   275,
     279,   281,   291,   319,   332,   360,   371,   386,   392,   396,
     405,   416,   427,   436,   441,   442,   445,   447,   455,   468,
     486,   493,   498,   526,  1331,  1332,  1333,   866,   882,   887,
     891,   896,   916,   920,   924,   930,   935,   949,   953,   956,
     970,   974,   977,   980,   208,   387,   907,   972,   985,   989,
     999,  1002,  1020,  1022,  1025,   412,  1029,  1036,  1048,  1064,
    1068,  1072,  1079,  1087,  1103,  1113,   262,   357,   398,   431,
     529,  1125,  1127,  1136,   346,  1140,  1142,   851,  1145,  1148,
    1151,  1178,   525,   710,   712,   713,     1,   523,  1249,   240,
     410,   628,   630,    58,    66,   274,   350,   409,   414,   523,
     571,   572,   573,   574,   575,   576,   577,   579,  1344,  1406,
     567,   579,     1,   523,  1263,  1263,   438,   419,  1377,   238,
    1358,  1358,  1358,  1263,   419,  1358,    59,  1345,   592,   380,
     580,   589,   468,   590,   224,   607,   262,   468,   550,    50,
     843,   844,   845,  1343,   843,   316,   523,   468,   316,   523,
     867,   869,  1293,  1294,  1297,     6,     9,    85,    97,   102,
     197,   198,   199,   206,   218,   251,   257,   259,   262,   264,
     265,   266,   270,   272,   277,   311,   330,   357,   388,   431,
     443,   444,   477,   487,   508,   513,   521,   529,   883,  1243,
    1268,  1269,  1271,  1293,  1304,  1305,  1306,  1307,  1308,  1309,
    1310,   251,   475,   479,   480,   888,  1238,  1239,  1240,  1241,
    1242,  1243,  1274,  1293,  1305,  1307,   262,   892,   893,  1254,
    1255,  1256,  1297,   277,   437,   439,   897,   899,   262,   352,
     917,   918,  1281,  1293,   921,  1249,     6,   925,  1244,  1245,
    1266,  1295,  1296,  1297,  1305,   471,   931,  1249,   262,   316,
     936,   937,   938,   939,   941,  1268,  1281,  1293,   950,  1269,
     262,   954,   470,   481,   957,   958,   959,  1226,  1227,  1228,
     204,   331,   332,   350,   407,   971,   975,  1265,  1266,   978,
    1297,   463,   981,  1386,  1269,  1225,  1226,   990,  1265,   523,
    1000,  1250,  1003,  1004,  1293,  1304,  1307,  1104,  1288,  1289,
    1297,    97,  1023,  1269,  1026,  1269,   174,   231,   239,   325,
    1030,  1031,  1032,   196,   262,   522,  1037,  1041,  1042,  1043,
    1254,  1282,  1293,  1297,  1307,  1390,  1049,  1249,  1065,  1246,
    1297,  1069,  1249,  1073,  1246,     9,  1080,  1247,  1297,   157,
     246,   277,  1088,  1091,  1092,  1095,  1096,  1097,  1098,  1099,
    1100,  1101,  1251,  1252,  1265,  1287,  1289,  1297,  1104,  1114,
    1249,  1122,  1128,  1129,  1130,  1269,    97,  1137,  1268,  1143,
    1250,   468,   523,   852,   853,   856,   857,   862,  1146,  1290,
    1293,  1149,  1249,  1152,  1293,  1179,  1246,   407,   267,   771,
     131,   417,   424,   714,   715,   717,   727,   729,   731,  1318,
     468,   681,   468,   296,   320,  1326,   280,   400,   664,   665,
     666,   667,   669,   414,   425,    66,  1358,   468,   573,   468,
     523,   572,    61,  1358,   568,  1390,   598,  1358,  1358,  1358,
    1258,  1297,    71,  1258,  1358,  1358,  1258,   523,   609,   610,
     611,  1264,   262,   315,   317,   593,   595,   596,  1089,  1300,
    1358,   468,   468,   523,   556,  1358,   844,   425,   494,   846,
     368,   516,   837,   224,   314,  1396,   134,   880,   868,   201,
     479,  1298,  1299,   314,  1368,  1306,  1293,   479,   479,   479,
    1312,  1294,  1305,  1307,  1396,  1396,   479,   479,   479,   479,
    1396,   479,  1312,   135,   885,   463,   884,  1269,   464,   479,
    1311,   479,   479,  1294,  1305,  1307,  1242,  1293,  1238,  1242,
      59,   475,   480,   467,   476,   173,   229,  1321,   893,   463,
    1396,   136,   914,   262,   352,   900,  1282,   918,  1249,   367,
     492,   922,  1390,  1402,  1368,   137,   926,   163,   469,  1245,
    1394,   397,  1327,  1298,  1299,   932,  1249,   138,   933,   362,
    1374,   139,   947,   169,   302,  1192,  1194,  1196,   939,  1267,
    1268,   940,   503,   504,   505,   506,   140,   951,    50,   234,
     514,   901,   141,   968,    17,   520,   960,   961,   962,   964,
      12,    13,    14,    20,    62,   163,   173,   212,   213,   252,
     253,   290,   296,   301,   309,   316,   321,   340,   465,   467,
     469,   472,   474,   475,   476,   479,   480,  1229,  1230,  1231,
    1232,  1233,  1234,  1235,  1269,   104,   972,  1266,  1253,   458,
    1384,   991,  1390,  1250,    95,   376,   453,  1005,  1006,  1008,
    1009,  1106,   479,  1298,  1269,   463,   144,  1027,    50,  1031,
     418,  1033,  1042,   145,   468,  1038,  1040,   499,   518,   459,
     462,   456,   147,  1061,   291,   342,  1324,   201,  1180,   148,
    1070,  1374,   149,  1076,  1180,  1247,   150,  1085,   518,  1081,
    1277,  1279,  1293,  1305,  1307,   169,  1098,  1100,  1265,   463,
    1252,   126,   463,   500,  1090,    32,  1298,   151,  1120,   182,
     243,   246,  1116,   907,  1123,  1269,  1390,   152,  1134,   234,
    1130,   115,  1131,  1293,   153,  1138,   201,  1250,   407,   468,
     468,   201,   362,   364,  1375,   154,  1161,   115,  1153,   155,
    1184,  1180,   468,   407,   261,   773,   523,   719,   719,   719,
     715,   468,     1,   180,   718,   719,   523,   683,   320,  1263,
     670,   362,   427,   428,   668,     1,   468,   666,  1358,   414,
    1300,   468,  1358,   523,  1259,   468,   110,  1358,   218,   262,
     272,   357,   431,   477,   529,   614,   615,  1303,  1258,   262,
     262,   485,   610,    22,   238,  1264,  1359,  1089,   238,   438,
    1370,  1358,    99,  1263,   581,   468,    75,   175,   365,   473,
     557,   558,   559,  1358,   425,   320,   847,   112,   849,  1297,
      31,    38,   202,   278,   870,   871,   872,   874,   877,  1340,
    1341,  1390,    25,    26,    68,    70,    72,   106,   107,   108,
     157,   159,   166,   169,   258,   260,   460,   511,   523,   873,
    1252,  1393,  1236,  1238,   479,  1299,   156,   350,  1275,  1294,
     463,  1236,  1238,  1316,  1236,  1317,   465,  1236,   523,   523,
    1238,  1315,  1315,  1315,  1273,  1293,  1305,  1307,  1314,   523,
    1273,  1313,     6,  1244,  1269,  1297,  1305,   208,  1306,  1238,
    1273,  1236,   465,   229,  1322,  1239,  1239,  1240,  1240,  1240,
     387,   889,   349,   894,  1256,   898,   922,   268,   293,   194,
    1351,  1294,  1238,   278,  1328,  1299,  1249,   385,  1054,  1055,
    1056,   859,   860,   859,  1195,  1196,  1193,  1194,   502,   874,
     877,   942,   943,   944,  1390,  1192,  1192,  1192,  1192,  1269,
    1244,  1269,   902,   959,    21,   470,   481,   965,   966,  1227,
     520,   962,   963,   520,   859,  1386,   238,  1230,   117,   982,
    1254,   132,   859,   986,     9,    12,    15,    16,   283,   284,
     309,   310,   992,   996,   180,  1277,     9,    59,   182,   247,
     485,  1012,  1013,  1014,  1007,  1008,   127,   317,   522,  1108,
    1369,  1405,   463,  1265,  1244,  1269,  1390,  1054,   859,   172,
    1044,  1225,  1045,  1046,  1293,  1254,     8,    38,  1182,  1374,
    1286,  1293,  1304,  1307,   234,  1050,  1054,   133,  1082,  1293,
    1082,   463,   463,   463,  1089,   156,   470,   481,  1269,    50,
      39,    47,   217,   249,   271,   326,   389,   491,  1093,  1094,
    1358,  1115,  1390,  1269,   165,   295,  1293,  1343,   201,  1244,
    1269,   858,  1300,  1277,  1343,   234,  1156,  1181,  1182,   711,
     468,   407,   377,   775,   730,   732,   374,   468,   468,   716,
      88,    48,    65,   105,   245,   256,   362,   363,   377,   379,
     468,   516,   684,   685,   687,   691,   692,   695,   696,   702,
     705,   707,   708,  1358,   631,   471,  1349,    23,  1337,   468,
    1300,   263,   450,   512,   578,  1259,   278,    29,   129,   218,
     262,   272,   286,   357,   431,   434,   435,   529,   599,   600,
     601,   604,   615,   459,   618,  1390,   413,   262,   612,  1301,
    1370,   238,  1263,  1263,   594,   595,   204,   350,   582,   583,
     584,   559,   350,  1373,    75,    33,   113,  1300,  1358,   523,
     468,   838,   529,  1283,  1287,  1300,  1358,   166,   169,   300,
     302,  1185,  1187,  1188,  1190,  1191,   872,    67,    69,   258,
     339,   875,   876,  1392,   460,    33,    36,    39,    47,    94,
     113,   195,   203,   217,   249,   269,   271,   293,   294,   326,
     355,   356,   381,   389,   403,   408,   425,   452,   461,   491,
     501,   507,   878,   879,  1185,   528,   527,  1277,  1185,   243,
     438,   307,   282,    73,   411,   465,  1237,   466,  1238,   262,
    1276,  1294,  1293,  1237,   465,  1237,   465,   465,  1237,   465,
     465,   465,  1237,   465,  1237,   465,  1368,   305,   426,  1197,
    1199,  1201,  1298,  1299,  1244,   466,   465,   465,   463,  1323,
     889,  1266,   463,  1254,   901,   391,   373,  1197,  1358,   196,
    1351,   237,   303,  1218,  1219,  1221,  1223,   861,    99,   100,
     344,   523,   945,  1252,   943,    36,    39,    46,    47,    94,
     164,   195,   217,   271,   306,   326,   389,   403,   425,   491,
     946,   208,  1197,   208,   903,   904,   905,  1343,    17,   459,
     967,   324,   965,  1369,   859,   132,   143,   987,  1386,   376,
     993,  1386,   463,    50,  1013,  1015,  1277,     9,    59,   247,
     485,  1010,  1011,  1277,  1291,  1293,   127,    66,   414,  1109,
    1391,    28,   118,   757,   224,   322,  1354,  1265,  1197,   208,
       9,   293,   360,   663,  1248,  1249,   145,  1039,     8,   201,
    1050,  1293,   133,   298,  1207,  1210,  1212,  1074,  1075,  1390,
     859,   520,   520,  1083,  1084,  1277,   315,  1276,  1269,  1089,
    1089,  1089,  1089,  1089,  1089,  1089,  1089,  1094,   296,   301,
    1117,  1118,  1119,  1231,  1325,  1218,   250,   425,  1404,   438,
    1382,  1382,  1133,  1390,   425,  1132,  1269,  1293,  1197,   208,
     468,   463,     9,  1154,  1155,  1319,  1157,  1293,  1133,  1157,
    1054,     7,  1334,   712,   772,   468,   407,   401,   820,   516,
     765,   739,   740,  1358,  1297,   734,   720,  1358,    89,  1346,
    1358,   362,   364,  1401,  1401,  1358,  1346,  1358,   278,  1365,
    1358,    22,  1336,   314,   709,  1263,   175,   209,   632,   454,
    1383,  1351,    59,   524,  1400,   601,    17,   459,  1303,   336,
    1301,  1263,     9,   206,   523,   585,   523,     1,   468,   584,
      33,  1300,   850,   851,    48,  1189,  1190,   859,  1186,  1187,
     859,   307,  1366,  1366,  1366,   262,  1284,  1287,  1302,  1358,
    1358,   879,    58,   425,   126,   500,  1358,     8,  1335,  1185,
    1238,   465,  1238,  1327,   451,  1311,   451,  1311,  1258,  1311,
    1311,  1311,  1273,   247,   485,  1311,  1294,   859,   859,  1200,
    1201,  1198,  1199,  1299,  1197,   465,  1238,  1311,  1311,  1280,
    1293,  1304,   906,   907,    35,   287,   288,   289,   354,   483,
     484,   488,  1329,  1238,   859,   859,  1222,  1223,  1220,  1221,
     862,  1358,   258,   401,   133,   160,   162,   828,   829,  1348,
    1358,   126,   500,  1358,  1244,  1245,  1244,  1245,   904,   316,
     846,    90,   368,   516,   966,  1226,   859,  1293,   859,   516,
     994,   995,   996,   997,  1384,   516,  1278,  1280,  1277,    50,
       8,    38,  1016,  1017,  1018,  1011,  1016,   194,   414,  1105,
    1358,   243,  1360,   322,  1244,   324,  1371,  1371,   318,   390,
    1034,  1249,  1390,  1046,  1269,     7,   223,  1051,  1052,  1053,
    1055,  1058,  1075,  1390,   859,   859,  1211,  1212,  1210,  1218,
     268,   293,  1226,  1225,  1083,  1231,  1293,  1232,  1233,  1234,
    1235,  1238,  1124,  1269,  1124,   304,   478,  1202,  1204,  1206,
     338,  1327,  1244,   854,  1278,   321,  1277,   116,  1158,   453,
    1160,  1074,   329,  1252,  1283,   712,   774,   468,   407,  1359,
     765,   209,   459,   728,    21,    37,    40,    41,    42,    43,
      44,    45,    46,    76,    78,    79,    80,    81,    82,    83,
      84,   122,   184,   185,   186,   187,   188,   191,   192,   225,
     241,   283,   313,   327,   335,   338,   353,   366,   419,   421,
     422,   423,   449,   495,   496,   497,   509,   735,   736,   737,
     740,   741,   742,   743,   744,   745,   746,   749,   761,   762,
     763,   764,   765,   770,  1358,  1379,    27,   201,   733,  1339,
     209,  1300,   523,   646,  1358,  1336,   523,  1260,  1261,   316,
     433,  1397,   262,  1258,  1262,  1300,   518,  1358,   179,   219,
     523,   693,  1263,     4,    19,    30,   226,   258,   323,   328,
     362,   370,   382,   418,   427,   468,   471,   633,   634,   641,
     643,   645,   647,   648,   649,   650,   653,   654,   655,   656,
     657,   659,   660,   662,  1374,  1391,  1346,  1248,   602,   604,
     262,   235,   555,   206,   235,   555,   468,   851,  1283,  1283,
    1283,  1283,  1283,  1358,  1358,  1224,  1285,  1287,  1300,  1224,
    1283,  1284,   465,  1197,   465,   169,   302,   478,   909,   911,
     913,     6,   234,   297,   316,   477,   908,  1357,   406,   462,
    1283,  1368,   258,   401,  1283,  1224,  1224,  1283,  1197,   372,
    1197,   372,  1270,  1271,  1292,  1294,   995,   105,  1347,  1386,
    1016,  1016,  1278,   473,  1356,  1356,  1018,  1017,   231,   514,
    1110,  1258,  1107,  1197,   268,   293,    50,  1369,   268,   243,
    1059,  1057,  1058,  1390,   222,   242,   519,   268,   859,   859,
     859,   859,  1205,  1206,  1203,  1204,  1358,  1197,  1197,   510,
     855,  1162,  1155,   224,  1353,    98,  1159,  1353,  1202,   161,
     299,  1183,  1213,  1215,  1217,  1219,   258,   260,  1362,   712,
     776,   468,   767,   768,  1304,  1297,   250,   309,   420,   494,
    1378,   494,  1378,   494,  1378,   494,  1378,   494,  1378,   520,
    1388,   395,  1376,   128,  1300,  1294,   238,   248,   395,  1361,
    1358,   175,   247,   485,   523,    51,   250,   251,   721,  1304,
     463,   690,   194,   706,  1261,   260,  1364,   463,  1345,  1353,
     176,   183,   399,   490,   515,   517,   703,   704,  1358,  1358,
    1365,  1374,   463,   514,  1387,   415,  1358,  1344,   116,  1360,
    1360,   293,   661,  1300,  1390,   438,   268,    40,  1342,  1358,
     671,   672,  1249,   603,   604,   133,  1281,  1283,   258,   260,
    1403,   859,   859,   859,   912,   913,   910,   911,  1368,  1293,
    1245,  1245,    50,   113,  1016,  1269,  1269,   347,  1248,   208,
     325,  1111,  1297,   391,  1269,   268,  1358,  1060,  1208,  1210,
    1212,  1218,   268,   268,  1293,  1163,   468,  1293,  1353,  1293,
     859,   859,  1216,  1217,  1214,  1215,   777,   821,   766,   768,
     459,   529,    54,   753,   463,   750,   743,    27,   738,   413,
    1330,  1330,  1368,     1,    41,    42,    43,    44,    45,   184,
     185,   186,   187,   188,   189,   190,   338,   353,   722,   723,
     724,   725,   726,   744,   745,  1294,   722,  1300,    59,   364,
     686,  1257,  1258,   697,  1300,   425,  1380,   262,   694,  1297,
     694,  1358,  1360,   128,   175,   638,   370,   654,  1358,  1358,
    1358,  1358,    23,    24,  1338,   663,  1358,  1365,   415,   646,
     672,   339,   673,    17,   112,  1293,  1197,  1197,  1269,  1358,
    1248,   347,   499,  1293,  1211,  1209,  1210,    31,   130,   170,
     209,  1164,  1165,  1166,  1168,  1172,  1174,  1175,  1176,  1340,
    1351,  1293,   359,   778,   717,   731,   822,   823,   824,   520,
     769,  1389,  1304,  1353,   201,   751,  1300,   462,  1385,   262,
    1344,   722,   468,  1258,    49,   482,   698,   699,   700,   701,
    1390,  1345,   201,   689,  1352,   128,   358,   415,   642,  1358,
     120,   121,   122,   244,   258,   343,   344,   345,   358,   454,
     635,   636,   637,  1262,   434,   658,  1258,  1258,  1258,  1358,
    1300,   604,   468,  1041,  1358,  1225,    38,  1335,   350,   110,
    1250,     1,   718,   824,   468,   416,   470,   523,  1300,   750,
     117,   752,  1262,  1262,   193,   690,  1300,   658,   262,   640,
    1297,   640,     7,   640,   640,   262,   639,  1297,   429,   469,
      34,   171,   273,   651,  1041,   378,   433,  1381,   133,   436,
    1173,  1369,   779,   468,   825,   468,   463,  1358,   229,   754,
    1369,   755,   756,  1340,  1345,  1320,  1405,  1349,  1358,  1257,
     522,   652,   652,  1293,   165,   169,  1395,     9,  1169,  1170,
    1255,     1,   780,   826,  1304,   755,  1258,   226,   758,   757,
    1262,   117,   688,   447,   644,  1257,   268,   396,   347,  1372,
     314,   348,   369,  1171,  1170,   468,    64,    92,    93,   329,
     468,   781,   782,   785,  1358,  1414,    33,    36,    39,    46,
      47,   164,   195,   201,   203,   214,   217,   249,   258,   271,
     313,   326,   355,   381,   389,   408,   463,   473,   491,   514,
     741,   742,   746,   761,   763,   765,   827,   834,   835,  1358,
    1392,   758,  1343,  1360,  1369,   520,   317,  1369,   314,  1297,
    1358,  1358,  1336,   254,   255,  1363,   794,   209,   181,   783,
    1350,  1358,   258,   401,   828,   829,  1358,  1286,  1366,  1300,
      58,  1293,  1293,   209,  1366,   523,   759,   760,  1358,  1258,
       9,   431,   529,   605,   280,   362,   364,  1399,   174,   231,
     239,   325,  1167,  1248,  1281,  1358,  1336,   786,  1302,   717,
     795,   784,  1293,  1283,  1283,  1358,  1385,  1358,  1358,   760,
    1257,  1306,  1399,   787,   258,   260,  1398,   718,   719,  1293,
     276,   337,   475,   480,   830,   831,   832,  1281,   830,   831,
     833,   182,   193,   216,   246,   788,   789,   790,   791,   792,
     793,  1302,   796,  1283,  1283,   109,   119,  1407,  1358,  1358,
      56,    92,  1407,  1408,  1393,   797,  1358,  1302,  1302,   216,
    1358,  1358,   215,   258,   260,   291,   313,   341,   429,   446,
     468,   489,   509,   518,   741,   746,   747,   761,   763,   765,
     798,   799,   803,   804,   807,   808,   809,   810,   811,   812,
     817,   818,   819,  1392,  1393,  1302,  1302,  1302,   227,  1355,
     307,   308,  1367,  1336,   215,  1300,   520,  1358,  1368,  1358,
    1358,  1293,   292,   337,   813,   814,  1302,   337,   815,   816,
    1302,  1367,  1336,  1359,  1358,   750,  1225,  1274,  1272,  1274,
      55,    92,   329,   333,   334,   377,   393,   394,   800,  1407,
    1408,  1409,  1410,  1411,  1412,  1413,   122,   201,  1300,   814,
    1300,   816,  1359,   814,  1385,  1327,   383,   805,  1274,   193,
     193,   216,   193,   216,   181,   801,  1293,   801,  1274,   752,
    1369,   321,   802,   802,    50,   440,   748,   181,   806,  1293,
     329,  1274,  1300
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   532,   534,   533,   535,   535,   536,   536,   537,   537,
     539,   538,   540,   541,   542,   542,   543,   543,   544,   545,
     546,   547,   547,   547,   549,   550,   548,   552,   551,   553,
     553,   554,   554,   555,   555,   556,   556,   557,   557,   557,
     557,   558,   558,   559,   559,   560,   561,   561,   562,   563,
     563,   564,   564,   564,   564,   564,   566,   565,   567,   567,
     568,   568,   570,   569,   571,   571,   571,   571,   572,   572,
     573,   573,   573,   573,   574,   575,   576,   577,   578,   578,
     578,   578,   579,   579,   580,   581,   580,   582,   582,   582,
     583,   583,   584,   584,   584,   584,   585,   585,   586,   586,
     587,   587,   588,   588,   589,   589,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   592,   591,
     593,   593,   593,   593,   594,   594,   595,   596,   596,   598,
     597,   599,   599,   599,   599,   599,   599,   600,   600,   601,
     601,   602,   601,   603,   603,   604,   604,   604,   604,   604,
     604,   605,   605,   606,   607,   607,   608,   609,   609,   610,
     611,   611,   612,   612,   613,   614,   614,   615,   615,   616,
     617,   618,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   626,   627,   627,   628,   628,   629,   629,   631,   630,
     632,   632,   633,   633,   633,   633,   633,   633,   633,   633,
     633,   633,   633,   633,   633,   634,   634,   634,   634,   634,
     635,   635,   635,   636,   636,   636,   636,   637,   637,   638,
     638,   638,   639,   639,   640,   640,   640,   641,   642,   642,
     642,   643,   644,   644,   644,   645,   646,   647,   648,   648,
     648,   650,   649,   651,   651,   651,   652,   652,   652,   652,
     653,   653,   654,   654,   654,   654,   655,   656,   657,   658,
     658,   658,   659,   660,   661,   661,   662,   663,   663,   663,
     664,   664,   664,   665,   665,   666,   666,   667,   668,   668,
     668,   668,   670,   669,   671,   671,   672,   673,   673,   675,
     674,   676,   676,   677,   677,   678,   678,   679,   681,   680,
     680,   682,   682,   683,   683,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   685,   686,   686,   686,
     687,   687,   687,   688,   688,   689,   689,   690,   690,   691,
     692,   692,   693,   693,   694,   694,   695,   696,   697,   697,
     698,   698,   698,   699,   700,   701,   702,   703,   703,   703,
     703,   703,   704,   704,   705,   706,   706,   707,   708,   708,
     709,   709,   710,   711,   710,   712,   713,   712,   714,   714,
     715,   715,   715,   716,   715,   715,   717,   718,   718,   718,
     719,   720,   720,   721,   721,   721,   721,   722,   722,   722,
     722,   722,   722,   722,   722,   722,   722,   722,   722,   722,
     723,   723,   724,   724,   725,   725,   725,   726,   726,   727,
     728,   728,   730,   729,   731,   732,   731,   733,   733,   734,
     734,   735,   735,   735,   735,   735,   735,   735,   735,   735,
     735,   735,   735,   735,   736,   737,   738,   738,   739,   739,
     740,   741,   742,   742,   743,   743,   743,   743,   743,   743,
     743,   743,   743,   743,   743,   743,   743,   743,   743,   743,
     743,   743,   743,   743,   743,   743,   743,   743,   743,   743,
     743,   743,   743,   743,   743,   743,   743,   743,   743,   743,
     744,   744,   745,   745,   746,   746,   747,   748,   748,   749,
     749,   750,   750,   751,   751,   752,   752,   753,   753,   754,
     754,   755,   756,   756,   757,   757,   758,   758,   759,   759,
     760,   761,   762,   763,   764,   766,   765,   767,   767,   768,
     768,   769,   769,   770,   770,   771,   772,   771,   773,   774,
     773,   775,   776,   775,   777,   777,   779,   778,   780,   780,
     780,   781,   781,   781,   781,   782,   783,   784,   784,   785,
     786,   786,   786,   787,   787,   788,   788,   788,   788,   788,
     789,   790,   791,   792,   793,   794,   794,   796,   795,   797,
     797,   798,   798,   798,   798,   798,   798,   798,   798,   798,
     798,   798,   798,   798,   798,   798,   798,   799,   800,   800,
     800,   800,   800,   800,   800,   801,   801,   801,   802,   802,
     803,   804,   805,   805,   806,   806,   807,   808,   809,   810,
     810,   811,   812,   812,   813,   813,   814,   814,   814,   815,
     815,   816,   816,   817,   818,   819,   820,   821,   820,   822,
     822,   823,   823,   824,   825,   824,   824,   826,   826,   827,
     827,   827,   827,   827,   827,   827,   827,   827,   827,   827,
     827,   827,   827,   827,   827,   827,   827,   827,   827,   827,
     827,   827,   827,   827,   827,   827,   827,   827,   827,   827,
     827,   827,   827,   827,   828,   828,   829,   829,   830,   830,
     831,   831,   832,   832,   832,   833,   833,   833,   834,   835,
     836,   837,   838,   836,   839,   836,   840,   841,   840,   842,
     840,   843,   843,   844,   845,   845,   845,   846,   846,   846,
     846,   846,   846,   847,   847,   848,   848,   848,   849,   850,
     849,   851,   851,   852,   852,   852,   852,   852,   854,   853,
     855,   855,   856,   857,   858,   858,   860,   861,   859,   863,
     862,   862,   864,   864,   864,   864,   864,   864,   864,   864,
     864,   864,   864,   864,   864,   864,   864,   864,   864,   864,
     864,   864,   864,   864,   864,   864,   864,   864,   864,   864,
     864,   864,   864,   864,   864,   864,   864,   864,   864,   864,
     864,   864,   864,   864,   864,   864,   864,   864,   864,   864,
     864,   864,   864,   866,   865,   868,   867,   867,   867,   867,
     867,   867,   867,   867,   867,   867,   867,   867,   867,   867,
     867,   867,   867,   867,   867,   869,   869,   870,   870,   871,
     871,   872,   872,   872,   872,   872,   873,   873,   874,   874,
     874,   875,   876,   876,   877,   878,   878,   878,   878,   878,
     878,   878,   878,   878,   878,   878,   878,   878,   878,   878,
     878,   878,   878,   878,   878,   878,   878,   878,   878,   878,
     878,   878,   878,   879,   879,   880,   880,   882,   881,   883,
     883,   883,   884,   884,   885,   885,   887,   886,   888,   888,
     889,   889,   891,   890,   892,   892,   893,   894,   894,   896,
     895,   898,   897,   899,   899,   899,   899,   900,   900,   901,
     902,   901,   903,   903,   904,   904,   905,   905,   905,   905,
     906,   906,   906,   906,   906,   907,   907,   908,   908,   909,
     909,   909,   910,   910,   911,   911,   912,   912,   913,   914,
     914,   916,   915,   917,   917,   918,   918,   920,   919,   921,
     921,   922,   922,   922,   922,   922,   924,   923,   925,   926,
     926,   927,   928,   930,   929,   931,   931,   932,   932,   933,
     933,   935,   934,   936,   936,   936,   936,   936,   937,   937,
     938,   938,   940,   939,   941,   941,   942,   942,   943,   943,
     943,   943,   943,   944,   944,   944,   944,   945,   945,   946,
     946,   946,   946,   946,   946,   946,   946,   946,   946,   946,
     946,   946,   946,   946,   946,   946,   947,   947,   949,   948,
     950,   950,   950,   950,   950,   951,   951,   953,   952,   954,
     956,   955,   957,   958,   958,   959,   959,   959,   960,   960,
     961,   961,   962,   963,   964,   964,   965,   965,   966,   966,
     966,   966,   967,   967,   968,   968,   970,   969,   971,   971,
     971,   971,   971,   971,   971,   972,   972,   974,   973,   975,
     977,   976,   978,   980,   979,   981,   982,   982,   983,   985,
     984,   986,   986,   986,   987,   987,   989,   988,   990,   991,
     991,   992,   992,   992,   993,   993,   994,   994,   995,   996,
     996,   996,   996,   996,   996,   996,   997,   997,   999,   998,
    1000,  1000,  1002,  1001,  1003,  1004,  1004,  1004,  1005,  1005,
    1005,  1005,  1007,  1006,  1008,  1009,  1010,  1010,  1011,  1011,
    1011,  1011,  1011,  1011,  1012,  1012,  1013,  1013,  1014,  1014,
    1014,  1014,  1014,  1015,  1016,  1016,  1016,  1016,  1016,  1017,
    1018,  1020,  1019,  1022,  1021,  1023,  1023,  1025,  1024,  1026,
    1026,  1027,  1027,  1029,  1028,  1030,  1030,  1031,  1032,  1032,
    1032,  1032,  1033,  1033,  1034,  1034,  1034,  1034,  1036,  1035,
    1037,  1038,  1037,  1037,  1039,  1039,  1040,  1040,  1041,  1041,
    1042,  1042,  1042,  1042,  1042,  1043,  1043,  1044,  1044,  1045,
    1045,  1046,  1048,  1047,  1049,  1050,  1050,  1051,  1051,  1051,
    1051,  1052,  1052,  1053,  1053,  1054,  1054,  1055,  1056,  1056,
    1056,  1057,  1057,  1058,  1058,  1058,  1059,  1059,  1060,  1060,
    1061,  1061,  1062,  1064,  1063,  1065,  1066,  1068,  1067,  1069,
    1070,  1070,  1072,  1071,  1073,  1074,  1074,  1075,  1075,  1076,
    1076,  1077,  1079,  1078,  1080,  1080,  1081,  1081,  1082,  1082,
    1083,  1083,  1084,  1085,  1085,  1087,  1086,  1088,  1088,  1088,
    1088,  1088,  1088,  1088,  1089,  1089,  1090,  1090,  1091,  1092,
    1093,  1093,  1094,  1094,  1094,  1094,  1094,  1094,  1094,  1094,
    1095,  1095,  1096,  1097,  1097,  1098,  1099,  1099,  1100,  1100,
    1101,  1103,  1102,  1105,  1104,  1106,  1106,  1107,  1107,  1108,
    1108,  1109,  1109,  1110,  1110,  1110,  1111,  1111,  1111,  1113,
    1112,  1114,  1115,  1115,  1116,  1116,  1116,  1116,  1117,  1117,
    1117,  1117,  1117,  1117,  1118,  1119,  1119,  1120,  1120,  1122,
    1121,  1121,  1123,  1123,  1123,  1123,  1123,  1124,  1124,  1125,
    1125,  1125,  1125,  1127,  1126,  1128,  1129,  1129,  1130,  1131,
    1131,  1132,  1132,  1133,  1133,  1134,  1134,  1136,  1135,  1137,
    1137,  1137,  1138,  1138,  1139,  1140,  1140,  1142,  1141,  1143,
    1143,  1145,  1144,  1146,  1148,  1147,  1149,  1151,  1150,  1152,
    1153,  1153,  1154,  1154,  1155,  1156,  1156,  1157,  1158,  1158,
    1159,  1159,  1160,  1160,  1161,  1161,  1163,  1162,  1164,  1164,
    1164,  1164,  1164,  1165,  1166,  1166,  1167,  1167,  1167,  1167,
    1167,  1168,  1169,  1169,  1170,  1170,  1170,  1171,  1171,  1171,
    1171,  1172,  1173,  1173,  1174,  1175,  1176,  1176,  1178,  1177,
    1179,  1180,  1180,  1181,  1181,  1181,  1181,  1182,  1182,  1183,
    1183,  1183,  1184,  1184,  1185,  1185,  1185,  1186,  1186,  1187,
    1188,  1188,  1189,  1189,  1190,  1191,  1191,  1192,  1192,  1192,
    1193,  1193,  1194,  1195,  1195,  1196,  1197,  1197,  1197,  1198,
    1198,  1199,  1200,  1200,  1201,  1202,  1202,  1202,  1203,  1203,
    1204,  1205,  1205,  1206,  1207,  1207,  1208,  1208,  1209,  1209,
    1210,  1211,  1211,  1212,  1213,  1213,  1214,  1214,  1215,  1216,
    1216,  1217,  1218,  1218,  1219,  1219,  1220,  1220,  1221,  1222,
    1222,  1223,  1224,  1224,  1225,  1226,  1228,  1227,  1229,  1229,
    1229,  1230,  1230,  1230,  1230,  1230,  1230,  1230,  1230,  1230,
    1230,  1230,  1230,  1230,  1230,  1230,  1230,  1230,  1230,  1230,
    1230,  1230,  1230,  1230,  1230,  1230,  1231,  1231,  1232,  1232,
    1233,  1233,  1234,  1235,  1236,  1236,  1237,  1237,  1237,  1238,
    1238,  1238,  1239,  1239,  1239,  1240,  1240,  1241,  1241,  1241,
    1242,  1242,  1243,  1243,  1243,  1243,  1243,  1243,  1244,  1244,
    1245,  1246,  1247,  1248,  1248,  1249,  1250,  1251,  1251,  1252,
    1253,  1253,  1254,  1255,  1255,  1255,  1256,  1257,  1257,  1258,
    1259,  1260,  1260,  1261,  1262,  1262,  1263,  1263,  1264,  1265,
    1265,  1266,  1266,  1266,  1267,  1267,  1268,  1268,  1269,  1269,
    1270,  1270,  1271,  1271,  1271,  1271,  1271,  1271,  1271,  1271,
    1271,  1272,  1272,  1273,  1273,  1273,  1274,  1274,  1274,  1274,
    1274,  1274,  1274,  1275,  1275,  1276,  1276,  1277,  1278,  1279,
    1279,  1279,  1280,  1280,  1281,  1281,  1282,  1282,  1282,  1283,
    1283,  1283,  1284,  1284,  1285,  1285,  1286,  1286,  1286,  1287,
    1288,  1289,  1289,  1290,  1291,  1292,  1293,  1294,  1294,  1294,
    1294,  1295,  1296,  1296,  1296,  1296,  1297,  1297,  1298,  1299,
    1299,  1300,  1301,  1302,  1303,  1303,  1303,  1303,  1303,  1303,
    1303,  1304,  1304,  1305,  1305,  1306,  1306,  1306,  1306,  1306,
    1306,  1306,  1307,  1307,  1307,  1307,  1307,  1307,  1307,  1307,
    1307,  1307,  1307,  1307,  1308,  1308,  1309,  1309,  1309,  1310,
    1310,  1310,  1310,  1311,  1311,  1311,  1312,  1312,  1312,  1313,
    1313,  1313,  1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,
    1318,  1319,  1319,  1320,  1320,  1321,  1321,  1322,  1322,  1323,
    1323,  1324,  1324,  1324,  1325,  1325,  1326,  1326,  1326,  1327,
    1327,  1328,  1328,  1329,  1329,  1329,  1329,  1329,  1329,  1329,
    1329,  1330,  1330,  1331,  1331,  1331,  1332,  1332,  1332,  1332,
    1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,
    1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,
    1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,
    1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,
    1332,  1332,  1332,  1332,  1332,  1333,  1333,  1333,  1333,  1333,
    1333,  1333,  1333,  1333,  1333,  1333,  1333,  1333,  1333,  1333,
    1333,  1333,  1333,  1333,  1333,  1334,  1334,  1335,  1335,  1336,
    1336,  1337,  1337,  1338,  1338,  1338,  1339,  1339,  1340,  1340,
    1341,  1341,  1342,  1342,  1343,  1343,  1344,  1344,  1345,  1345,
    1346,  1346,  1347,  1347,  1348,  1348,  1349,  1349,  1350,  1350,
    1351,  1351,  1352,  1352,  1353,  1353,  1354,  1354,  1354,  1355,
    1355,  1356,  1356,  1357,  1357,  1358,  1358,  1359,  1359,  1359,
    1360,  1360,  1361,  1361,  1361,  1362,  1362,  1362,  1363,  1363,
    1363,  1364,  1364,  1365,  1365,  1366,  1366,  1367,  1367,  1367,
    1368,  1368,  1369,  1369,  1370,  1370,  1370,  1370,  1371,  1371,
    1372,  1372,  1373,  1373,  1374,  1374,  1375,  1375,  1375,  1376,
    1376,  1377,  1377,  1378,  1378,  1379,  1379,  1379,  1380,  1380,
    1381,  1381,  1382,  1382,  1383,  1383,  1384,  1384,  1385,  1385,
    1386,  1386,  1387,  1387,  1387,  1388,  1388,  1389,  1389,  1390,
    1390,  1391,  1391,  1392,  1392,  1393,  1393,  1394,  1394,  1395,
    1395,  1396,  1396,  1397,  1397,  1398,  1398,  1399,  1399,  1400,
    1400,  1401,  1401,  1402,  1402,  1403,  1403,  1404,  1404,  1405,
    1405,  1406,  1406,  1406,  1407,  1407,  1408,  1408,  1409,  1409,
    1410,  1410,  1411,  1411,  1412,  1412,  1413,  1413,  1414,  1414
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
       2,     1,     1,     1,     2,     3,     1,     2,     2,     2,
       2,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     4,     3,     1,     2,     1,     1,     3,     3,
       3,     3,     3,     1,     1,     0,     1,     0,     4,     4,
       5,     6,     0,     2,     0,     1,     0,     3,     3,     4,
       0,     2,     0,     3,     1,     2,     4,     0,     2,     0,
       4,     0,     6,     0,     1,     1,     1,     1,     1,     0,
       0,     3,     1,     2,     2,     3,     0,     2,     2,     2,
       0,     3,     2,     2,     4,     1,     1,     1,     1,     0,
       2,     2,     0,     1,     2,     2,     0,     1,     2,     0,
       1,     0,     3,     1,     2,     1,     1,     0,     3,     2,
       3,     0,     1,     3,     3,     2,     0,     4,     4,     0,
       1,     1,     1,     0,     4,     4,     2,     1,     2,     0,
       1,     0,     4,     3,     3,     3,     3,     2,     2,     1,
       1,     2,     0,     3,     1,     1,     1,     2,     1,     2,
       1,     1,     2,     2,     2,     2,     2,     1,     1,     1,
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
       1,     1,     1,     4,     0,     1,     1,     2,     2,     3,
       3,     0,     3,     0,     3,     3,     4,     0,     4,     4,
       6,     0,     1,     0,     3,     1,     2,     5,     1,     1,
       1,     1,     0,     3,     0,     3,     2,     1,     0,     3,
       2,     0,     4,     2,     0,     1,     1,     1,     1,     3,
       0,     2,     1,     3,     3,     0,     3,     1,     1,     1,
       3,     7,     0,     4,     7,     0,     2,     0,     1,     2,
       1,     2,     3,     3,     1,     0,     1,     1,     4,     4,
       2,     0,     1,     1,     3,     2,     0,     3,     1,     1,
       0,     1,     1,     0,     3,     2,     1,     0,     4,     4,
       0,     1,     0,     4,     5,     0,     1,     2,     3,     0,
       1,     1,     0,     4,     4,     6,     0,     2,     0,     2,
       1,     2,     3,     0,     1,     0,     3,     1,     1,     1,
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
       2,     1,     1,     1,     2,     1,     1,     1,     2,     1,
       0,     2,     1,     1,     1,     3,     1,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     4,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     3,     2,     2,
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
       1,     1,     1,     1,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     1,     0,     1,     0,     1,
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
#line 2152 "parser.y" /* yacc.c:1646  */
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
#line 7116 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 2164 "parser.y" /* yacc.c:1646  */
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
#line 7139 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 2200 "parser.y" /* yacc.c:1646  */
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
#line 7163 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 2251 "parser.y" /* yacc.c:1646  */
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[-1]), CB_PROGRAM_TYPE);
  }
#line 7172 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 2259 "parser.y" /* yacc.c:1646  */
    {
	  clean_up_program ((yyvsp[-1]), CB_FUNCTION_TYPE);
  }
#line 7180 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 2282 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 7188 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 2286 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}

	set_up_prototype ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE, 1);
  }
#line 7200 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 2294 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 7209 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 2302 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 7217 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 2306 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	set_up_prototype ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE, 1);
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 7230 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 2318 "parser.y" /* yacc.c:1646  */
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
#line 7245 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 2337 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7251 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 2338 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7257 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 2347 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7270 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 2356 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7283 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 2366 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING (_("CALL prototypes"));
  }
#line 7291 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 2378 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 7299 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 2382 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 7307 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 2398 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 7315 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 2415 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 7327 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 2429 "parser.y" /* yacc.c:1646  */
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("phrases in non-standard order"));
	}
  }
#line 7337 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 2441 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
#line 7347 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 2456 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 7359 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 2469 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 7369 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2498 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 7377 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2506 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 7385 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2513 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 7393 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 2520 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 7405 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 2531 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7413 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 2535 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7421 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 2539 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7429 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2543 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7437 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 2557 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 7446 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2562 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 7454 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 2570 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7462 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2582 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 7470 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 2586 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) != cb_error_node) {
		set_up_prototype ((yyvsp[-1]), (yyvsp[0]), CB_FUNCTION_TYPE, 0);
	}
  }
#line 7480 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2593 "parser.y" /* yacc.c:1646  */
    {
	  if ((yyvsp[-1]) != cb_error_node
	      && cb_verify (cb_program_prototypes, _("PROGRAM phrase"))) {
		set_up_prototype ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE, 0);
	}
  }
#line 7491 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 2603 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7500 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2608 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7509 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 2619 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 7523 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2664 "parser.y" /* yacc.c:1646  */
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
#line 7551 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 2692 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("invalid %s clause"), "");
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 7565 "parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 2703 "parser.y" /* yacc.c:1646  */
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
#line 7582 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2716 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 7594 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2732 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 7602 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2739 "parser.y" /* yacc.c:1646  */
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
#line 7621 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2754 "parser.y" /* yacc.c:1646  */
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
#line 7640 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2774 "parser.y" /* yacc.c:1646  */
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
#line 7657 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2787 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 7669 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2798 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 7679 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2804 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7689 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2810 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7699 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2816 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 7709 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2822 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7719 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2828 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 7730 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2838 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 7738 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2842 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7746 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2849 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7754 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2853 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 7762 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2857 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 7770 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2861 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 7778 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2868 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7786 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2872 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 7794 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2878 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7800 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2879 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7806 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2880 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7812 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2881 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 7818 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2882 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 7824 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2883 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 7830 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2887 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7836 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2888 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7842 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2896 "parser.y" /* yacc.c:1646  */
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
#line 7857 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2910 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7865 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2914 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7873 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2922 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7881 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2929 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7889 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2933 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7901 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2944 "parser.y" /* yacc.c:1646  */
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
#line 7922 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2964 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7934 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2972 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7946 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2982 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7952 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2983 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7958 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2990 "parser.y" /* yacc.c:1646  */
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
#line 7980 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 3010 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7986 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 3011 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7992 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 3016 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8000 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 3020 "parser.y" /* yacc.c:1646  */
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
#line 8020 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 3041 "parser.y" /* yacc.c:1646  */
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
#line 8042 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 3064 "parser.y" /* yacc.c:1646  */
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
#line 8116 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 3138 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8124 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 3142 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8132 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 3151 "parser.y" /* yacc.c:1646  */
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
#line 8149 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 3170 "parser.y" /* yacc.c:1646  */
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
#line 8164 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 3186 "parser.y" /* yacc.c:1646  */
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
#line 8180 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 3204 "parser.y" /* yacc.c:1646  */
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
#line 8196 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 3222 "parser.y" /* yacc.c:1646  */
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
#line 8212 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 3239 "parser.y" /* yacc.c:1646  */
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
#line 8228 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 3260 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 8236 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 3267 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 8245 "parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 3275 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 8255 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 3284 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 8265 "parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 3299 "parser.y" /* yacc.c:1646  */
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
#line 8291 "parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 3321 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-3]))) {
		validate_file (current_file, (yyvsp[-3]));
	}
  }
#line 8301 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 3353 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 8311 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 3359 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 8325 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 3369 "parser.y" /* yacc.c:1646  */
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
#line 8342 "parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 3382 "parser.y" /* yacc.c:1646  */
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
#line 8359 "parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 3395 "parser.y" /* yacc.c:1646  */
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
#line 8387 "parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 3421 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8393 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 3422 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8399 "parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 3423 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int4; }
#line 8405 "parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 3435 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 8413 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 3442 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 8421 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 3455 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8429 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 3467 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 8438 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3474 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 8444 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3475 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 8450 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3476 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 8456 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 3484 "parser.y" /* yacc.c:1646  */
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
#line 8481 "parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 3507 "parser.y" /* yacc.c:1646  */
    { }
#line 8487 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 3510 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN ALL");
  }
#line 8495 "parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 3515 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 8503 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 3525 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	CB_PENDING ("COLLATING SEQUENCE");
  }
#line 8512 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 3533 "parser.y" /* yacc.c:1646  */
    {
	  if (CB_ALPHABET_NAME_P (cb_ref ((yyvsp[0])))) {
		  (yyval) = (yyvsp[0]);
	  } else {
		  cb_error_x ((yyvsp[0]), _("'%s' is not an alphabet-name"),
			      cb_name ((yyvsp[0])));
		  (yyval) = cb_error_node;
	  }
  }
#line 8526 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 3548 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 8535 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 3563 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 8543 "parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 3571 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 8552 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 3576 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 8561 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 3581 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 8570 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 3590 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 8578 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 3594 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	CB_PENDING ("WITH ROLLBACK");
  }
#line 8587 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 3610 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 8596 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3615 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 8605 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3620 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 8614 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3625 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 8623 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3636 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 8632 "parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 3647 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 8640 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 3657 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8649 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3664 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8655 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 3665 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8661 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3666 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8667 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 3673 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8676 "parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 3684 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 8684 "parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 3698 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 8693 "parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 3705 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8699 "parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 3706 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 8705 "parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 3707 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8711 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 3716 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8719 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3735 "parser.y" /* yacc.c:1646  */
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
#line 8748 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3762 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8754 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3763 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8760 "parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 3764 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8766 "parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 3765 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8772 "parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 3772 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 8781 "parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 3777 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 8793 "parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 3806 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 8801 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3814 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 8809 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3821 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 8817 "parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 3830 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 8827 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3844 "parser.y" /* yacc.c:1646  */
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
#line 8845 "parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 3863 "parser.y" /* yacc.c:1646  */
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
#line 8865 "parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 3880 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8873 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 3887 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8881 "parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 3891 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8889 "parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 3902 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("file cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8903 "parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 3912 "parser.y" /* yacc.c:1646  */
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
#line 8922 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3942 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 8931 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3955 "parser.y" /* yacc.c:1646  */
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
#line 8955 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3975 "parser.y" /* yacc.c:1646  */
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
#line 8993 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 4010 "parser.y" /* yacc.c:1646  */
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
#line 9025 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 4041 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 9033 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 4047 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9039 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 4048 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9045 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 4052 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9051 "parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 4053 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9057 "parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 4061 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 9066 "parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 4072 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 9075 "parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 4077 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 9087 "parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 4100 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 9096 "parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 4112 "parser.y" /* yacc.c:1646  */
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
#line 9115 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 4140 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 9123 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 4147 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 9131 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 4154 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 9139 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 4163 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 9149 "parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 4176 "parser.y" /* yacc.c:1646  */
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("RECORDING MODE U or S can only be used with RECORD SEQUENTIAL files"));
	}
  }
#line 9159 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 4192 "parser.y" /* yacc.c:1646  */
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
#line 9196 "parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 4228 "parser.y" /* yacc.c:1646  */
    {
	  if (warningopt) {
		  CB_PENDING ("FOR sub-records");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[0]));
  }
#line 9208 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 4241 "parser.y" /* yacc.c:1646  */
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
#line 9224 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 4261 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9238 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 4271 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9251 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 4286 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 9261 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 4292 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 9271 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 4301 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9279 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 4304 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 9289 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 4310 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 9302 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 4330 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9312 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 4336 "parser.y" /* yacc.c:1646  */
    {
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
#line 9325 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 4345 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9339 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 4358 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9347 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 4365 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9357 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 4371 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9367 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 4381 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 9377 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 4390 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 9385 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 4394 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 9398 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 4405 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9404 "parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 4406 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9410 "parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 4407 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9416 "parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 4408 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9422 "parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 4413 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9430 "parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 4417 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 9438 "parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 4421 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 9446 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 4425 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 9454 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 4429 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9462 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 4433 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 9470 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 4437 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 9478 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 4441 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 9486 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 4445 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 9494 "parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 4449 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 9502 "parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 4453 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9510 "parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 4457 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 9518 "parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 4461 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9530 "parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4493 "parser.y" /* yacc.c:1646  */
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
#line 9555 "parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4517 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9563 "parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4521 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]) == cb_error_node ? NULL : (yyvsp[0]);
  }
#line 9571 "parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4528 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9581 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4534 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_88_item (current_field);
  }
#line 9589 "parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4541 "parser.y" /* yacc.c:1646  */
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
#line 9616 "parser.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4564 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9626 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4570 "parser.y" /* yacc.c:1646  */
    {
	/* Reset to last non-78 item */
	current_field = cb_validate_78_item (current_field, 0);
  }
#line 9635 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4578 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9643 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4582 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("CONSTANT FROM");
	(yyval) = NULL;
  }
#line 9652 "parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4590 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 9661 "parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 4596 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 9670 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4623 "parser.y" /* yacc.c:1646  */
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
#line 9692 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4647 "parser.y" /* yacc.c:1646  */
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
#line 9720 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4674 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 9728 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4678 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 9736 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4691 "parser.y" /* yacc.c:1646  */
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
#line 9759 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4716 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 9768 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4732 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9776 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4736 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9784 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4740 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 9792 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4744 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 9800 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4748 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9808 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4752 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9816 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4756 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 9824 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4760 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 9832 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4764 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 9840 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4768 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 9848 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4772 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 9856 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4776 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9864 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4780 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9873 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4785 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9882 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4790 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9890 "parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4794 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9898 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4798 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 9910 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4806 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9918 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4810 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9926 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4814 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 9938 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4822 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 9946 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4826 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9954 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4830 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9962 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4834 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9970 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4838 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9978 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4842 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9986 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4846 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9994 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4850 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 10002 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4854 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 10014 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4862 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 10026 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4870 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 10034 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4874 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 10042 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4878 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 10050 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4882 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 10058 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4886 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 10066 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4890 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	CB_UNFINISHED ("USAGE NATIONAL");
  }
#line 10075 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4910 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 10086 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4917 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 10097 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4931 "parser.y" /* yacc.c:1646  */
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
#line 10116 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4949 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 10124 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4959 "parser.y" /* yacc.c:1646  */
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
#line 10159 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4991 "parser.y" /* yacc.c:1646  */
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
#line 10189 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 5019 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10195 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 5020 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10201 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 5024 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10207 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 5025 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10213 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 5030 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 10221 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 5037 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 10230 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 5045 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 10238 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 5052 "parser.y" /* yacc.c:1646  */
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
#line 10263 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 5075 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10269 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 5078 "parser.y" /* yacc.c:1646  */
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
#line 10286 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 5093 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 10292 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 5094 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 10298 "parser.c" /* yacc.c:1646  */
    break;

  case 507:
#line 5099 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 10306 "parser.c" /* yacc.c:1646  */
    break;

  case 508:
#line 5105 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10312 "parser.c" /* yacc.c:1646  */
    break;

  case 509:
#line 5107 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10318 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 5112 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 10327 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 5123 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 10336 "parser.c" /* yacc.c:1646  */
    break;

  case 512:
#line 5134 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 10345 "parser.c" /* yacc.c:1646  */
    break;

  case 513:
#line 5145 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 10354 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 5156 "parser.y" /* yacc.c:1646  */
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
#line 10381 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 5184 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 10390 "parser.c" /* yacc.c:1646  */
    break;

  case 517:
#line 5192 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10396 "parser.c" /* yacc.c:1646  */
    break;

  case 518:
#line 5193 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10402 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5197 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10408 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5198 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 10414 "parser.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5203 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 10425 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5215 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 10438 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5224 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY NUMERIC");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 10452 "parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5239 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 10465 "parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 5248 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10475 "parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5260 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 10485 "parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5266 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10495 "parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5277 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 10505 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5293 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 10518 "parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5308 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 10526 "parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5315 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 10535 "parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5320 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 10543 "parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5331 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 10551 "parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5350 "parser.y" /* yacc.c:1646  */
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
#line 10588 "parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5386 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 10596 "parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5390 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 10605 "parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5395 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 10613 "parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5415 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 10621 "parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5422 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 10629 "parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5429 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 10637 "parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5436 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 10645 "parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5443 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 10653 "parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 5454 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 10661 "parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 5485 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 10669 "parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5511 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10677 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5518 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 10685 "parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5534 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 10693 "parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5545 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 10701 "parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5557 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 10709 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5590 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 10717 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5597 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 10725 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5604 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10733 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5613 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10744 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5620 "parser.y" /* yacc.c:1646  */
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
#line 10760 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5645 "parser.y" /* yacc.c:1646  */
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
#line 10784 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5665 "parser.y" /* yacc.c:1646  */
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
#line 10828 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5705 "parser.y" /* yacc.c:1646  */
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
#line 10848 "parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 5728 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
					 "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10857 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5733 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
					 "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10866 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5738 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10874 "parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 5742 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10882 "parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 5746 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
					 "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10891 "parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 5751 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
					 "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10900 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5756 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
					 "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10909 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5761 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
					 "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10918 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5766 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10926 "parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 5770 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10934 "parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 5774 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	CB_PENDING ("OVERLINE");
  }
#line 10943 "parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 5779 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	CB_PENDING ("GRID");
  }
#line 10952 "parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 5784 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	CB_PENDING ("LEFTLINE");
  }
#line 10961 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5789 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10969 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5793 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10977 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5797 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10985 "parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 5801 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10993 "parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 5805 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 11002 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5810 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 11010 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5814 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 11018 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5818 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 11027 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5823 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 11036 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5828 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 11045 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5833 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 11054 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5846 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 11067 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5855 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 11076 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5860 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 11088 "parser.c" /* yacc.c:1646  */
    break;

  case 682:
#line 5891 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 11096 "parser.c" /* yacc.c:1646  */
    break;

  case 683:
#line 5895 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 11104 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5899 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 11112 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5906 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 11120 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5910 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 11128 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5914 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 11136 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5922 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 11148 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5933 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 11156 "parser.c" /* yacc.c:1646  */
    break;

  case 691:
#line 5942 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 11170 "parser.c" /* yacc.c:1646  */
    break;

  case 692:
#line 5952 "parser.y" /* yacc.c:1646  */
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
#line 11186 "parser.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5964 "parser.y" /* yacc.c:1646  */
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
#line 11205 "parser.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5979 "parser.y" /* yacc.c:1646  */
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
#line 11238 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 6012 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11246 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 6016 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11255 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 6021 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11267 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 6029 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 11280 "parser.c" /* yacc.c:1646  */
    break;

  case 700:
#line 6038 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11292 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 6048 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11298 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 6050 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11304 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 6055 "parser.y" /* yacc.c:1646  */
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
#line 11328 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 6079 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11336 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 6083 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		CB_UNFINISHED (_("parameters passed BY VALUE"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11349 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 6096 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 11361 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 6104 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 11373 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 6112 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 11385 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 6120 "parser.y" /* yacc.c:1646  */
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
#line 11418 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 6149 "parser.y" /* yacc.c:1646  */
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
#line 11451 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 6181 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 11459 "parser.c" /* yacc.c:1646  */
    break;

  case 714:
#line 6185 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 11472 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 6197 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11482 "parser.c" /* yacc.c:1646  */
    break;

  case 716:
#line 6203 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main) {
		cb_error (_("RETURNING clause cannot be OMITTED for main program"));
	}
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause cannot be OMITTED for a FUNCTION"));
	}
	current_program->flag_void = 1;
  }
#line 11496 "parser.c" /* yacc.c:1646  */
    break;

  case 717:
#line 6213 "parser.y" /* yacc.c:1646  */
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
#line 11529 "parser.c" /* yacc.c:1646  */
    break;

  case 719:
#line 6245 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11538 "parser.c" /* yacc.c:1646  */
    break;

  case 720:
#line 6251 "parser.y" /* yacc.c:1646  */
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
#line 11568 "parser.c" /* yacc.c:1646  */
    break;

  case 725:
#line 6289 "parser.y" /* yacc.c:1646  */
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
#line 11589 "parser.c" /* yacc.c:1646  */
    break;

  case 727:
#line 6307 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11597 "parser.c" /* yacc.c:1646  */
    break;

  case 728:
#line 6317 "parser.y" /* yacc.c:1646  */
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
#line 11645 "parser.c" /* yacc.c:1646  */
    break;

  case 729:
#line 6361 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11653 "parser.c" /* yacc.c:1646  */
    break;

  case 732:
#line 6372 "parser.y" /* yacc.c:1646  */
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
#line 11702 "parser.c" /* yacc.c:1646  */
    break;

  case 733:
#line 6420 "parser.y" /* yacc.c:1646  */
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
#line 11722 "parser.c" /* yacc.c:1646  */
    break;

  case 734:
#line 6439 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11730 "parser.c" /* yacc.c:1646  */
    break;

  case 735:
#line 6443 "parser.y" /* yacc.c:1646  */
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
#line 11746 "parser.c" /* yacc.c:1646  */
    break;

  case 736:
#line 6461 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11756 "parser.c" /* yacc.c:1646  */
    break;

  case 737:
#line 6466 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11765 "parser.c" /* yacc.c:1646  */
    break;

  case 738:
#line 6471 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11775 "parser.c" /* yacc.c:1646  */
    break;

  case 739:
#line 6479 "parser.y" /* yacc.c:1646  */
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
#line 11806 "parser.c" /* yacc.c:1646  */
    break;

  case 740:
#line 6506 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11814 "parser.c" /* yacc.c:1646  */
    break;

  case 741:
#line 6510 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11822 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 6566 "parser.y" /* yacc.c:1646  */
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
#line 11840 "parser.c" /* yacc.c:1646  */
    break;

  case 792:
#line 6580 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11849 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 6591 "parser.y" /* yacc.c:1646  */
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
#line 11864 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 6607 "parser.y" /* yacc.c:1646  */
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
#line 11874 "parser.c" /* yacc.c:1646  */
    break;

  case 796:
#line 6613 "parser.y" /* yacc.c:1646  */
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
#line 11890 "parser.c" /* yacc.c:1646  */
    break;

  case 797:
#line 6625 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11898 "parser.c" /* yacc.c:1646  */
    break;

  case 798:
#line 6629 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11906 "parser.c" /* yacc.c:1646  */
    break;

  case 799:
#line 6633 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11915 "parser.c" /* yacc.c:1646  */
    break;

  case 800:
#line 6638 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11924 "parser.c" /* yacc.c:1646  */
    break;

  case 801:
#line 6643 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 11933 "parser.c" /* yacc.c:1646  */
    break;

  case 802:
#line 6648 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 11942 "parser.c" /* yacc.c:1646  */
    break;

  case 803:
#line 6653 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 11950 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6657 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 11958 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 6661 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 11966 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6665 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 11974 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6669 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11983 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6674 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11991 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6678 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11999 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6682 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 12007 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6686 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 12015 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6690 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 12023 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6694 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12031 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6698 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12039 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6706 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12047 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6724 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_1, &check_duplicate);
  }
#line 12055 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6728 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_2, &check_duplicate);
  }
#line 12063 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6733 "parser.y" /* yacc.c:1646  */
    {
	  check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12071 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6745 "parser.y" /* yacc.c:1646  */
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
#line 12091 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6761 "parser.y" /* yacc.c:1646  */
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
#line 12111 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6777 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				  _("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				  &check_line_col_duplicate);

	cb_verify (cb_accept_display_extensions, "AT clause");

	line_column = (yyvsp[0]);
  }
#line 12125 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6789 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12131 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6793 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12137 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6794 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12143 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6799 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12151 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6806 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 12159 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6810 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 12169 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6816 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12177 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6820 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12185 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6824 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("ACCEPT CONVERSION");
  }
#line 12193 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6828 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 12201 "parser.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6832 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 12211 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6838 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 12219 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6842 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 12227 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6846 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 12237 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6852 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 12245 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6856 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12253 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6860 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 12261 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6864 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 12269 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6868 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 12277 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6872 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12285 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6876 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 12293 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6880 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12301 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6884 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12309 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6888 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12317 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6892 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 12327 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6898 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 12335 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6902 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 12343 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6906 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12351 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6910 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12359 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6914 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12367 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6918 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12375 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6922 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12383 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6934 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 12391 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6938 "parser.y" /* yacc.c:1646  */
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
#line 12406 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6955 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 12414 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6964 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 12422 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6968 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 12430 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6972 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 12438 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6979 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12446 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 6986 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 12454 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6990 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 12462 "parser.c" /* yacc.c:1646  */
    break;

  case 876:
#line 7000 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12471 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 7009 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 12479 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 7013 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12492 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 7024 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12498 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 7025 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12504 "parser.c" /* yacc.c:1646  */
    break;

  case 882:
#line 7033 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER");
  }
#line 12513 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 7047 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12521 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 7059 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
	cobc_allow_program_name = 1;
  }
#line 12532 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 7071 "parser.y" /* yacc.c:1646  */
    {
	cobc_allow_program_name = 0;
  }
#line 12540 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 7077 "parser.y" /* yacc.c:1646  */
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
#line 12568 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 7104 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12577 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 7109 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12586 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 7114 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12595 "parser.c" /* yacc.c:1646  */
    break;

  case 896:
#line 7119 "parser.y" /* yacc.c:1646  */
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
#line 12616 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 7140 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
#line 12624 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 7147 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12632 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 7151 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12641 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 7156 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12654 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 7167 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12660 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 7169 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12666 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 7174 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed when parameters are passed BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12678 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 7182 "parser.y" /* yacc.c:1646  */
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
#line 12704 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 7208 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 12712 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 7212 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 12725 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 7221 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 12738 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 7233 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12746 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 7237 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12754 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 7241 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12762 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 7245 "parser.y" /* yacc.c:1646  */
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
#line 12771 "parser.c" /* yacc.c:1646  */
    break;

  case 914:
#line 7250 "parser.y" /* yacc.c:1646  */
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
#line 12795 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 7283 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR (NULL, NULL);
  }
#line 12803 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 7287 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12811 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 7291 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 12823 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 7302 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12831 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 7306 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12839 "parser.c" /* yacc.c:1646  */
    break;

  case 924:
#line 7313 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12847 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 7317 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW");
	(yyval) = (yyvsp[0]);
  }
#line 12856 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 7325 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12864 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 7329 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12872 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 7336 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12880 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 7343 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 12888 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 7347 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 12896 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 7357 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
	cobc_allow_program_name = 1;
  }
#line 12905 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 7362 "parser.y" /* yacc.c:1646  */
    {
	cobc_allow_program_name = 0;
  }
#line 12913 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 7369 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12921 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 7373 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12929 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 7381 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
#line 12937 "parser.c" /* yacc.c:1646  */
    break;

  case 937:
#line 7390 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 12945 "parser.c" /* yacc.c:1646  */
    break;

  case 939:
#line 7398 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12954 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 7403 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12963 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 7410 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 12969 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 7411 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 12975 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 7412 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 12981 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 7413 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 12987 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 7414 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 12993 "parser.c" /* yacc.c:1646  */
    break;

  case 946:
#line 7422 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 13001 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 7431 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 13009 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 7438 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 13017 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 7442 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 13025 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 7452 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 13034 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 7463 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 13049 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 7480 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 13057 "parser.c" /* yacc.c:1646  */
    break;

  case 955:
#line 7489 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-3]));
  }
#line 13065 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7497 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 13074 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7502 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 13083 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7510 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 13091 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7514 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 13099 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 7524 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
	display_type = UNKNOWN_DISPLAY;
	is_first_display_item = 1;
  }
#line 13110 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7536 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 13118 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 7540 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 13126 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7544 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 13134 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 7548 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 13142 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 7556 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) != NULL) {
		error_if_different_display_type ((yyvsp[0]), NULL, NULL, NULL);
		cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 0,
				 display_type);
	}
  }
#line 13154 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 7564 "parser.y" /* yacc.c:1646  */
    {
	set_display_type ((yyvsp[0]), NULL, NULL, NULL);
	cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 1,
			 display_type);
  }
#line 13164 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7578 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 13176 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7586 "parser.y" /* yacc.c:1646  */
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
#line 13214 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7623 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13222 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 7627 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
#line 13231 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 7640 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 13239 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 7644 "parser.y" /* yacc.c:1646  */
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 13248 "parser.c" /* yacc.c:1646  */
    break;

  case 980:
#line 7649 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 13256 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 7658 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 13264 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7662 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_name ((yyvsp[0]));
  }
#line 13272 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7666 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_int0;
  }
#line 13280 "parser.c" /* yacc.c:1646  */
    break;

  case 986:
#line 7670 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_null;
  }
#line 13288 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7682 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 13296 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7686 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 13306 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7692 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 13316 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7698 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 13324 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7702 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("ignoring CONVERSION"));
  }
#line 13332 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7706 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 13342 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7712 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 13352 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7718 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 13362 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7724 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 13372 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7730 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 13380 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7734 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 13388 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7738 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 13396 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7742 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 13404 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7746 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 13412 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7750 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 13420 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7754 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 13428 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7758 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 13436 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7765 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 13444 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7769 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 13452 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7779 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 13460 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7788 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 13468 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7792 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 13476 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7796 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 13484 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7800 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13492 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7804 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13500 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7811 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 13508 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7815 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 13516 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7825 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 13525 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7834 "parser.y" /* yacc.c:1646  */
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
#line 13541 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7852 "parser.y" /* yacc.c:1646  */
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
#line 13564 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7876 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 13573 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7883 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13579 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7885 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13585 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7890 "parser.y" /* yacc.c:1646  */
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
#line 13600 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7901 "parser.y" /* yacc.c:1646  */
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
#line 13615 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7912 "parser.y" /* yacc.c:1646  */
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
#line 13630 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7926 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13638 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7930 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13646 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7936 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13652 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7938 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13658 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7944 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13667 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7953 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13676 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7961 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13685 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7967 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13694 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7974 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13700 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7976 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13706 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7981 "parser.y" /* yacc.c:1646  */
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
#line 13772 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 8042 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 13778 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 8043 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 13784 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 8044 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 13790 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 8048 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13796 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 8049 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13802 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 8054 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 13810 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 8058 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 13818 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 8068 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 13827 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 8073 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13835 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 8081 "parser.y" /* yacc.c:1646  */
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
#line 13860 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 8102 "parser.y" /* yacc.c:1646  */
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
#line 13878 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 8116 "parser.y" /* yacc.c:1646  */
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
#line 13904 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 8138 "parser.y" /* yacc.c:1646  */
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
#line 13930 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 8160 "parser.y" /* yacc.c:1646  */
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
#line 13954 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 8180 "parser.y" /* yacc.c:1646  */
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
#line 13978 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 8202 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13984 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 8203 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13990 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 8211 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 13999 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 8220 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 14007 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 8230 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	CB_PENDING("GENERATE");
  }
#line 14016 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 8246 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14029 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 8259 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 14038 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 8267 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 14047 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 8272 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 14056 "parser.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 8283 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 14069 "parser.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 8298 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 14077 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 8307 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14085 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 8311 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 14093 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 8315 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 14101 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 8322 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 14109 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 8326 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 14117 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 8336 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 14125 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 8345 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14133 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 8351 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14139 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 8352 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 14145 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 8356 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14151 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 8357 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 14157 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 8358 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 14163 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 8363 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14171 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 8367 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14179 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 8374 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14187 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 8379 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14195 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 8386 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 14203 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 8392 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 14209 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 8393 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 14215 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 8394 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 14221 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 8395 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 14227 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 8396 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 14233 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 8397 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 14239 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 8398 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 14245 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 8403 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14253 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 8407 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 14261 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 8416 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	CB_PENDING("INITIATE");
  }
#line 14270 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 8425 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14280 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 8431 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14290 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 8442 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 14299 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 8470 "parser.y" /* yacc.c:1646  */
    {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
#line 14308 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 8475 "parser.y" /* yacc.c:1646  */
    {
	if (!(previous_tallying_phrase == CHARACTERS_PHRASE
	      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
		cb_error (_("TALLYING clause is incomplete"));
	} else {
		cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), TALLYING_CLAUSE);
	}

	(yyval) = (yyvsp[-3]);
  }
#line 14323 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 8491 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), REPLACING_CLAUSE);
	inspect_keyword = 0;
  }
#line 14332 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 8501 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, CONVERTING_CLAUSE);
  }
#line 14342 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 8510 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14350 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 8514 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14358 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 8521 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (FOR_PHRASE);
	(yyval) = cb_build_tallying_data ((yyvsp[-1]));
  }
#line 14367 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 8526 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	(yyval) = cb_build_tallying_characters ((yyvsp[0]));
  }
#line 14376 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 8531 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_all ();
  }
#line 14385 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 8536 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_leading ();
  }
#line 14394 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 8541 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_trailing ();
  }
#line 14403 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 8546 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	(yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14412 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 8553 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14418 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 8554 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 14424 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 8559 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 14433 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 8564 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14441 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 8571 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 14447 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 8572 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 14453 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 8573 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 14459 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8574 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 14465 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8579 "parser.y" /* yacc.c:1646  */
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
#line 14491 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8606 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 14499 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8610 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14507 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8614 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14515 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8618 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14523 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8622 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14531 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8629 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0]));
  }
#line 14539 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8636 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0]));
  }
#line 14547 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 8645 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 14556 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 8657 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 14564 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8665 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14572 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8669 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14580 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8679 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 14588 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 8688 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 14596 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8692 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 14604 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8699 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 14612 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8703 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 14620 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8713 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 14628 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8726 "parser.y" /* yacc.c:1646  */
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
#line 14654 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8750 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 14660 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8751 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 14666 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8752 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 14672 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8753 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 14678 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8757 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14684 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8758 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14690 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8762 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14696 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8763 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14702 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8764 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14708 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8766 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 14717 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8777 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
	cobc_cs_check = CB_CS_PERFORM;
  }
#line 14729 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8789 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;	
	cobc_cs_check = 0;
  }
#line 14739 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8795 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 14750 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8802 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14759 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8807 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 14769 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8816 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 14781 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8824 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 14789 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8831 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 14797 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8835 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 14811 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8848 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 14822 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8855 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14834 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8866 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14842 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8870 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14851 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8875 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14859 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8879 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 14874 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8890 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14882 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8896 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 14888 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8897 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14894 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8901 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14900 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8902 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14906 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8905 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14912 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8907 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14918 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8912 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14926 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8922 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 14934 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8931 "parser.y" /* yacc.c:1646  */
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
#line 14964 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8959 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14970 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8960 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14976 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8965 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14984 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8969 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14992 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 8973 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15000 "parser.c" /* yacc.c:1646  */
    break;

  case 1200:
#line 8977 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15008 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 8989 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("ADVANCING ON LOCK");
  }
#line 15016 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 9002 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("RETRY");
	cobc_cs_check = 0;
  }
#line 15025 "parser.c" /* yacc.c:1646  */
    break;

  case 1214:
#line 9023 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 15033 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 9027 "parser.y" /* yacc.c:1646  */
    {
	/* TO-DO: Merge with RETRY phrase */
	(yyval) = cb_int4;
  }
#line 15042 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 9034 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15048 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 9035 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15054 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 9045 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 15062 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 9049 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 15070 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 9059 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 15079 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 9069 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 15087 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 9077 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15095 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 9087 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 15104 "parser.c" /* yacc.c:1646  */
    break;

  case 1227:
#line 9097 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 15112 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 9106 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15120 "parser.c" /* yacc.c:1646  */
    break;

  case 1230:
#line 9113 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 15128 "parser.c" /* yacc.c:1646  */
    break;

  case 1231:
#line 9117 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 15136 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 9127 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15147 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 9139 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 15156 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 9147 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15164 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 9155 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 15172 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 9159 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 15180 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 9166 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 15188 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 9170 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 15196 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 9180 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 15205 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 9191 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 15213 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 9200 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15221 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 9205 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15230 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 9212 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15236 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 9213 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15242 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 9218 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15250 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 9223 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15258 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 9230 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15266 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 9234 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 15274 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 9242 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15282 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 9249 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 15290 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 9253 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 15298 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 9263 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 15309 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 9270 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 15317 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 9286 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15323 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 9287 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15329 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 9291 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15335 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 9292 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15341 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 9299 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15349 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 9308 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 15357 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 9320 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 15365 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 9324 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 15373 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 9328 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 15383 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 9334 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 15393 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 9340 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 15401 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 9344 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 15409 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 9348 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 15417 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 9352 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 15425 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 9361 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 15433 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 9365 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15441 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 9374 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 15449 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 9388 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15457 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 9402 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 15465 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 9406 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 15473 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 9415 "parser.y" /* yacc.c:1646  */
    {
	  cb_emit_set_last_exception_to_off ();
  }
#line 15481 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 9424 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 15489 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9432 "parser.y" /* yacc.c:1646  */
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
#line 15515 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 9454 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 15525 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 9463 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15533 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9468 "parser.y" /* yacc.c:1646  */
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
#line 15553 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9486 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15559 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 9487 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15565 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9492 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 15574 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9499 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 15580 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9500 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 15586 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9505 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("file sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 15596 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 9511 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 15610 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 9521 "parser.y" /* yacc.c:1646  */
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
#line 15626 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9536 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("file sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 15636 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9542 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15650 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 9552 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15664 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9568 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 15673 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 9578 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 15686 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9590 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15694 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9594 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15702 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9601 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15710 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9605 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 15719 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9610 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 15728 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 9615 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 15737 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 9622 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 15743 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9623 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 15749 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 9624 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 15755 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 9625 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 15761 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9626 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 15767 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9627 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 15773 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9632 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition not allowed on START statement"));
  }
#line 15782 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9645 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 15790 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9649 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 15798 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 9659 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 15806 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9663 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 15816 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 9669 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL, 1, DEVICE_DISPLAY);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 15829 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9681 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 15837 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 9685 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15845 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 9689 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15853 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9693 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15865 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 9701 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 15877 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9712 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15885 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9716 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15893 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9722 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15899 "parser.c" /* yacc.c:1646  */
    break;

  case 1340:
#line 9723 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 15905 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 9724 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 15911 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9725 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 15917 "parser.c" /* yacc.c:1646  */
    break;

  case 1343:
#line 9732 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
	save_tree = NULL;
  }
#line 15926 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 9742 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string (save_tree, (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15934 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9754 "parser.y" /* yacc.c:1646  */
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
#line 15949 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9768 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15955 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9770 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15961 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9774 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 15967 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9775 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 15973 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9779 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15979 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9780 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15985 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9785 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 15993 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9789 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 16001 "parser.c" /* yacc.c:1646  */
    break;

  case 1357:
#line 9799 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 16009 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9808 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 16017 "parser.c" /* yacc.c:1646  */
    break;

  case 1360:
#line 9812 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 16025 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9816 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 16033 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9823 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 16041 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9827 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 16049 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9837 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	CB_PENDING("SUPPRESS");
  }
#line 16062 "parser.c" /* yacc.c:1646  */
    break;

  case 1367:
#line 9855 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	CB_PENDING("TERMINATE");
  }
#line 16071 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9864 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 16081 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9870 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 16091 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9881 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 16099 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9889 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, TRANSFORM_STATEMENT);
  }
#line 16110 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9902 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 16118 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9910 "parser.y" /* yacc.c:1646  */
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
#line 16133 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9926 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 16141 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9936 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 16149 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9942 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16155 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9944 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16161 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9948 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16167 "parser.c" /* yacc.c:1646  */
    break;

  case 1383:
#line 9950 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 16173 "parser.c" /* yacc.c:1646  */
    break;

  case 1384:
#line 9955 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16181 "parser.c" /* yacc.c:1646  */
    break;

  case 1385:
#line 9961 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16187 "parser.c" /* yacc.c:1646  */
    break;

  case 1386:
#line 9963 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16193 "parser.c" /* yacc.c:1646  */
    break;

  case 1387:
#line 9968 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 16201 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 9974 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16207 "parser.c" /* yacc.c:1646  */
    break;

  case 1389:
#line 9975 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16213 "parser.c" /* yacc.c:1646  */
    break;

  case 1390:
#line 9979 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16219 "parser.c" /* yacc.c:1646  */
    break;

  case 1391:
#line 9980 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16225 "parser.c" /* yacc.c:1646  */
    break;

  case 1392:
#line 9984 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16231 "parser.c" /* yacc.c:1646  */
    break;

  case 1393:
#line 9985 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16237 "parser.c" /* yacc.c:1646  */
    break;

  case 1394:
#line 9990 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 16245 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 9994 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 16253 "parser.c" /* yacc.c:1646  */
    break;

  case 1396:
#line 10004 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 16262 "parser.c" /* yacc.c:1646  */
    break;

  case 1403:
#line 10022 "parser.y" /* yacc.c:1646  */
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
#line 16288 "parser.c" /* yacc.c:1646  */
    break;

  case 1404:
#line 10047 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 16296 "parser.c" /* yacc.c:1646  */
    break;

  case 1405:
#line 10051 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 16309 "parser.c" /* yacc.c:1646  */
    break;

  case 1406:
#line 10063 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			set_up_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 16323 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 10073 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 16332 "parser.c" /* yacc.c:1646  */
    break;

  case 1408:
#line 10078 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 16341 "parser.c" /* yacc.c:1646  */
    break;

  case 1409:
#line 10083 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 16350 "parser.c" /* yacc.c:1646  */
    break;

  case 1410:
#line 10088 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 16359 "parser.c" /* yacc.c:1646  */
    break;

  case 1411:
#line 10096 "parser.y" /* yacc.c:1646  */
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
#line 16398 "parser.c" /* yacc.c:1646  */
    break;

  case 1414:
#line 10139 "parser.y" /* yacc.c:1646  */
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
#line 16442 "parser.c" /* yacc.c:1646  */
    break;

  case 1415:
#line 10179 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 16456 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 10189 "parser.y" /* yacc.c:1646  */
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
#line 16481 "parser.c" /* yacc.c:1646  */
    break;

  case 1421:
#line 10219 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 16491 "parser.c" /* yacc.c:1646  */
    break;

  case 1422:
#line 10228 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM START");
  }
#line 16501 "parser.c" /* yacc.c:1646  */
    break;

  case 1423:
#line 10234 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM END");
  }
#line 16511 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 10244 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	CB_PENDING ("USE BEFORE REPORTING");
  }
#line 16521 "parser.c" /* yacc.c:1646  */
    break;

  case 1425:
#line 10253 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 16531 "parser.c" /* yacc.c:1646  */
    break;

  case 1428:
#line 10269 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 16542 "parser.c" /* yacc.c:1646  */
    break;

  case 1430:
#line 10281 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-5]))) {
		cb_emit_write ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 16553 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 10290 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16559 "parser.c" /* yacc.c:1646  */
    break;

  case 1432:
#line 10291 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16565 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 10296 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 16573 "parser.c" /* yacc.c:1646  */
    break;

  case 1434:
#line 10300 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16581 "parser.c" /* yacc.c:1646  */
    break;

  case 1435:
#line 10304 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16589 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 10308 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 16597 "parser.c" /* yacc.c:1646  */
    break;

  case 1437:
#line 10314 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 16603 "parser.c" /* yacc.c:1646  */
    break;

  case 1438:
#line 10315 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 16609 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 10326 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 16617 "parser.c" /* yacc.c:1646  */
    break;

  case 1443:
#line 10330 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 16625 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 10344 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 16636 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 10354 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16644 "parser.c" /* yacc.c:1646  */
    break;

  case 1448:
#line 10358 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16652 "parser.c" /* yacc.c:1646  */
    break;

  case 1449:
#line 10365 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16661 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 10383 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16670 "parser.c" /* yacc.c:1646  */
    break;

  case 1459:
#line 10399 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 16681 "parser.c" /* yacc.c:1646  */
    break;

  case 1460:
#line 10409 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16689 "parser.c" /* yacc.c:1646  */
    break;

  case 1461:
#line 10413 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16697 "parser.c" /* yacc.c:1646  */
    break;

  case 1462:
#line 10420 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16706 "parser.c" /* yacc.c:1646  */
    break;

  case 1465:
#line 10433 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16715 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 10445 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT SIZE ERROR before SIZE ERROR"));
	}
  }
#line 16726 "parser.c" /* yacc.c:1646  */
    break;

  case 1469:
#line 10455 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16734 "parser.c" /* yacc.c:1646  */
    break;

  case 1470:
#line 10459 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16742 "parser.c" /* yacc.c:1646  */
    break;

  case 1471:
#line 10466 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16751 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 10479 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16760 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 10491 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT OVERFLOW before OVERFLOW"));
	}
  }
#line 16771 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 10501 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16779 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 10505 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16787 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 10512 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16796 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 10525 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16805 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 10537 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
  }
#line 16813 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 10546 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
	}
  }
#line 16823 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 10555 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16831 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 10559 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16839 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 10566 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16848 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 10579 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16857 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 10590 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT AT END-OF-PAGE before AT END-OF-PAGE"));
	}
  }
#line 16868 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 10600 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16876 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 10604 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16884 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10611 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16893 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10624 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16902 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 10640 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT INVALID KEY before INVALID KEY"));
	}
  }
#line 16913 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10650 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16921 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 10654 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16929 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 10661 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16938 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 10674 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16947 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 10684 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 16955 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 10688 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16963 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10698 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 16971 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 10705 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 16979 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 10711 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 16988 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 10716 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 16996 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 10728 "parser.y" /* yacc.c:1646  */
    { push_expr ('x', (yyvsp[0])); }
#line 17002 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 10729 "parser.y" /* yacc.c:1646  */
    { push_expr ('C', (yyvsp[0])); }
#line 17008 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 10731 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 17014 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 10732 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 17020 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 10734 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 17026 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10735 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 17032 "parser.c" /* yacc.c:1646  */
    break;

  case 1527:
#line 10736 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 17038 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10737 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 17044 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10738 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 17050 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 10740 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 17056 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 10741 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 17062 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10742 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 17068 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 10743 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 17074 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 10744 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 17080 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10745 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 17086 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10747 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 17092 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10748 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 17098 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10749 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 17104 "parser.c" /* yacc.c:1646  */
    break;

  case 1539:
#line 10751 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 17110 "parser.c" /* yacc.c:1646  */
    break;

  case 1540:
#line 10752 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 17116 "parser.c" /* yacc.c:1646  */
    break;

  case 1541:
#line 10753 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 17122 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10754 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 17128 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10755 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 17134 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10758 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 17140 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10759 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 17146 "parser.c" /* yacc.c:1646  */
    break;

  case 1554:
#line 10789 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17154 "parser.c" /* yacc.c:1646  */
    break;

  case 1555:
#line 10793 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17162 "parser.c" /* yacc.c:1646  */
    break;

  case 1559:
#line 10804 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 17168 "parser.c" /* yacc.c:1646  */
    break;

  case 1560:
#line 10805 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 17174 "parser.c" /* yacc.c:1646  */
    break;

  case 1561:
#line 10806 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17180 "parser.c" /* yacc.c:1646  */
    break;

  case 1562:
#line 10810 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 17186 "parser.c" /* yacc.c:1646  */
    break;

  case 1563:
#line 10811 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 17192 "parser.c" /* yacc.c:1646  */
    break;

  case 1564:
#line 10812 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17198 "parser.c" /* yacc.c:1646  */
    break;

  case 1565:
#line 10817 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 17206 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10820 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17212 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10824 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17218 "parser.c" /* yacc.c:1646  */
    break;

  case 1568:
#line 10825 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 17224 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10826 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17230 "parser.c" /* yacc.c:1646  */
    break;

  case 1570:
#line 10829 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17236 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10830 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17242 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10841 "parser.y" /* yacc.c:1646  */
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
#line 17258 "parser.c" /* yacc.c:1646  */
    break;

  case 1573:
#line 10853 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17271 "parser.c" /* yacc.c:1646  */
    break;

  case 1574:
#line 10862 "parser.y" /* yacc.c:1646  */
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
#line 17287 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 10874 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17300 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10883 "parser.y" /* yacc.c:1646  */
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
#line 17316 "parser.c" /* yacc.c:1646  */
    break;

  case 1577:
#line 10895 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17329 "parser.c" /* yacc.c:1646  */
    break;

  case 1578:
#line 10909 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17335 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10911 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 17341 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10916 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 17349 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10924 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 17355 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10931 "parser.y" /* yacc.c:1646  */
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
#line 17376 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10953 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17384 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10957 "parser.y" /* yacc.c:1646  */
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
#line 17406 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10978 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17419 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 11019 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17432 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 11032 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17438 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 11034 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17444 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 11038 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17450 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 11044 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17456 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 11046 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17462 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 11051 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 17475 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 11065 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17483 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 11072 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 17493 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 11082 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17499 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 11083 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17505 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 11088 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17514 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 11096 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17523 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 11104 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17531 "parser.c" /* yacc.c:1646  */
    break;

  case 1602:
#line 11108 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17539 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 11115 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17549 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 11131 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 17562 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 11140 "parser.y" /* yacc.c:1646  */
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
#line 17572 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 11151 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 17586 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 11168 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17594 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 11172 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17602 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 11181 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17610 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 11187 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17616 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 11188 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17622 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 11193 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17630 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 11197 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17638 "parser.c" /* yacc.c:1646  */
    break;

  case 1625:
#line 11217 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17646 "parser.c" /* yacc.c:1646  */
    break;

  case 1626:
#line 11221 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17654 "parser.c" /* yacc.c:1646  */
    break;

  case 1627:
#line 11225 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17662 "parser.c" /* yacc.c:1646  */
    break;

  case 1628:
#line 11229 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 17670 "parser.c" /* yacc.c:1646  */
    break;

  case 1629:
#line 11233 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17678 "parser.c" /* yacc.c:1646  */
    break;

  case 1630:
#line 11237 "parser.y" /* yacc.c:1646  */
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
#line 17700 "parser.c" /* yacc.c:1646  */
    break;

  case 1631:
#line 11258 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17708 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 11262 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17716 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 11279 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17724 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 11283 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17732 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 11287 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17740 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 11304 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 17748 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 11311 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 17756 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 11329 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17764 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 11337 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17772 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 11346 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17780 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 11351 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 17788 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 11358 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17796 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 11366 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17804 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 11374 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17812 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 11384 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17818 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 11388 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 17824 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 11392 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17830 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 11393 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17836 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 11398 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 17844 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 11405 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) != cb_error_node
	    && cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC) {
		cb_error_x ((yyvsp[0]), _("'%s' is not numeric"), cb_name ((yyvsp[0])));
	}
  }
#line 17855 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 11415 "parser.y" /* yacc.c:1646  */
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
#line 17875 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 11434 "parser.y" /* yacc.c:1646  */
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
#line 17894 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 11452 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17905 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 11459 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17916 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 11466 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17927 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11473 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17938 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 11483 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 17946 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 11490 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17960 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11500 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17974 "parser.c" /* yacc.c:1646  */
    break;

  case 1684:
#line 11510 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17988 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11520 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 18002 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11533 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18010 "parser.c" /* yacc.c:1646  */
    break;

  case 1687:
#line 11537 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 18019 "parser.c" /* yacc.c:1646  */
    break;

  case 1688:
#line 11545 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 18028 "parser.c" /* yacc.c:1646  */
    break;

  case 1689:
#line 11553 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 18036 "parser.c" /* yacc.c:1646  */
    break;

  case 1690:
#line 11557 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 18045 "parser.c" /* yacc.c:1646  */
    break;

  case 1691:
#line 11567 "parser.y" /* yacc.c:1646  */
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
#line 18060 "parser.c" /* yacc.c:1646  */
    break;

  case 1692:
#line 11581 "parser.y" /* yacc.c:1646  */
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
#line 18084 "parser.c" /* yacc.c:1646  */
    break;

  case 1693:
#line 11604 "parser.y" /* yacc.c:1646  */
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
#line 18107 "parser.c" /* yacc.c:1646  */
    break;

  case 1694:
#line 11626 "parser.y" /* yacc.c:1646  */
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
#line 18127 "parser.c" /* yacc.c:1646  */
    break;

  case 1695:
#line 11641 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 18133 "parser.c" /* yacc.c:1646  */
    break;

  case 1696:
#line 11642 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 18139 "parser.c" /* yacc.c:1646  */
    break;

  case 1697:
#line 11643 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 18145 "parser.c" /* yacc.c:1646  */
    break;

  case 1698:
#line 11644 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 18151 "parser.c" /* yacc.c:1646  */
    break;

  case 1699:
#line 11645 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 18157 "parser.c" /* yacc.c:1646  */
    break;

  case 1700:
#line 11646 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 18163 "parser.c" /* yacc.c:1646  */
    break;

  case 1701:
#line 11651 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18171 "parser.c" /* yacc.c:1646  */
    break;

  case 1702:
#line 11655 "parser.y" /* yacc.c:1646  */
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
#line 18189 "parser.c" /* yacc.c:1646  */
    break;

  case 1703:
#line 11672 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18197 "parser.c" /* yacc.c:1646  */
    break;

  case 1704:
#line 11676 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 18205 "parser.c" /* yacc.c:1646  */
    break;

  case 1705:
#line 11682 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 18211 "parser.c" /* yacc.c:1646  */
    break;

  case 1706:
#line 11683 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 18217 "parser.c" /* yacc.c:1646  */
    break;

  case 1707:
#line 11684 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 18223 "parser.c" /* yacc.c:1646  */
    break;

  case 1708:
#line 11685 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 18229 "parser.c" /* yacc.c:1646  */
    break;

  case 1709:
#line 11686 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 18235 "parser.c" /* yacc.c:1646  */
    break;

  case 1710:
#line 11687 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 18241 "parser.c" /* yacc.c:1646  */
    break;

  case 1711:
#line 11688 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 18247 "parser.c" /* yacc.c:1646  */
    break;

  case 1712:
#line 11695 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 18255 "parser.c" /* yacc.c:1646  */
    break;

  case 1713:
#line 11699 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 18263 "parser.c" /* yacc.c:1646  */
    break;

  case 1714:
#line 11703 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18271 "parser.c" /* yacc.c:1646  */
    break;

  case 1715:
#line 11707 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18279 "parser.c" /* yacc.c:1646  */
    break;

  case 1716:
#line 11711 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 18287 "parser.c" /* yacc.c:1646  */
    break;

  case 1717:
#line 11715 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18295 "parser.c" /* yacc.c:1646  */
    break;

  case 1718:
#line 11719 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18303 "parser.c" /* yacc.c:1646  */
    break;

  case 1719:
#line 11723 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18311 "parser.c" /* yacc.c:1646  */
    break;

  case 1720:
#line 11727 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18319 "parser.c" /* yacc.c:1646  */
    break;

  case 1721:
#line 11731 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18327 "parser.c" /* yacc.c:1646  */
    break;

  case 1722:
#line 11735 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 18335 "parser.c" /* yacc.c:1646  */
    break;

  case 1723:
#line 11739 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 18343 "parser.c" /* yacc.c:1646  */
    break;

  case 1733:
#line 11764 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18351 "parser.c" /* yacc.c:1646  */
    break;

  case 1734:
#line 11768 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 18359 "parser.c" /* yacc.c:1646  */
    break;

  case 1735:
#line 11772 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 18367 "parser.c" /* yacc.c:1646  */
    break;

  case 1736:
#line 11779 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18375 "parser.c" /* yacc.c:1646  */
    break;

  case 1737:
#line 11783 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 18383 "parser.c" /* yacc.c:1646  */
    break;

  case 1738:
#line 11787 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18391 "parser.c" /* yacc.c:1646  */
    break;

  case 1739:
#line 11794 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 18402 "parser.c" /* yacc.c:1646  */
    break;

  case 1740:
#line 11801 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 18413 "parser.c" /* yacc.c:1646  */
    break;

  case 1741:
#line 11808 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 18424 "parser.c" /* yacc.c:1646  */
    break;

  case 1742:
#line 11818 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18435 "parser.c" /* yacc.c:1646  */
    break;

  case 1743:
#line 11825 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 18446 "parser.c" /* yacc.c:1646  */
    break;

  case 1744:
#line 11835 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18457 "parser.c" /* yacc.c:1646  */
    break;

  case 1745:
#line 11842 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 18468 "parser.c" /* yacc.c:1646  */
    break;

  case 1746:
#line 11852 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18476 "parser.c" /* yacc.c:1646  */
    break;

  case 1747:
#line 11856 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18490 "parser.c" /* yacc.c:1646  */
    break;

  case 1748:
#line 11869 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18498 "parser.c" /* yacc.c:1646  */
    break;

  case 1749:
#line 11873 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18512 "parser.c" /* yacc.c:1646  */
    break;

  case 1750:
#line 11887 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 18520 "parser.c" /* yacc.c:1646  */
    break;

  case 1751:
#line 11895 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18526 "parser.c" /* yacc.c:1646  */
    break;

  case 1752:
#line 11896 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18532 "parser.c" /* yacc.c:1646  */
    break;

  case 1753:
#line 11900 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18538 "parser.c" /* yacc.c:1646  */
    break;

  case 1754:
#line 11901 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18544 "parser.c" /* yacc.c:1646  */
    break;

  case 1755:
#line 11905 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18550 "parser.c" /* yacc.c:1646  */
    break;

  case 1756:
#line 11906 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18556 "parser.c" /* yacc.c:1646  */
    break;

  case 1757:
#line 11911 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18564 "parser.c" /* yacc.c:1646  */
    break;

  case 1758:
#line 11915 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18572 "parser.c" /* yacc.c:1646  */
    break;

  case 1759:
#line 11922 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18580 "parser.c" /* yacc.c:1646  */
    break;

  case 1760:
#line 11926 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18588 "parser.c" /* yacc.c:1646  */
    break;

  case 1761:
#line 11933 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18594 "parser.c" /* yacc.c:1646  */
    break;

  case 1762:
#line 11934 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18600 "parser.c" /* yacc.c:1646  */
    break;

  case 1763:
#line 11935 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 18606 "parser.c" /* yacc.c:1646  */
    break;

  case 1764:
#line 11939 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18612 "parser.c" /* yacc.c:1646  */
    break;

  case 1765:
#line 11940 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 18618 "parser.c" /* yacc.c:1646  */
    break;

  case 1766:
#line 11944 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 18624 "parser.c" /* yacc.c:1646  */
    break;

  case 1767:
#line 11945 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18630 "parser.c" /* yacc.c:1646  */
    break;

  case 1768:
#line 11946 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18636 "parser.c" /* yacc.c:1646  */
    break;

  case 1769:
#line 11951 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 18644 "parser.c" /* yacc.c:1646  */
    break;

  case 1770:
#line 11955 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 18657 "parser.c" /* yacc.c:1646  */
    break;

  case 1771:
#line 11967 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 18666 "parser.c" /* yacc.c:1646  */
    break;

  case 1772:
#line 11972 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 18675 "parser.c" /* yacc.c:1646  */
    break;

  case 1773:
#line 11980 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 18683 "parser.c" /* yacc.c:1646  */
    break;

  case 1774:
#line 11984 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 18691 "parser.c" /* yacc.c:1646  */
    break;

  case 1775:
#line 11988 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 18699 "parser.c" /* yacc.c:1646  */
    break;

  case 1776:
#line 11992 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 18707 "parser.c" /* yacc.c:1646  */
    break;

  case 1777:
#line 11996 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 18715 "parser.c" /* yacc.c:1646  */
    break;

  case 1778:
#line 12000 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 18723 "parser.c" /* yacc.c:1646  */
    break;

  case 1779:
#line 12004 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 18731 "parser.c" /* yacc.c:1646  */
    break;

  case 1780:
#line 12008 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 18739 "parser.c" /* yacc.c:1646  */
    break;

  case 1781:
#line 12014 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18745 "parser.c" /* yacc.c:1646  */
    break;

  case 1782:
#line 12015 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18751 "parser.c" /* yacc.c:1646  */
    break;

  case 1783:
#line 12022 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 1;
  }
#line 18759 "parser.c" /* yacc.c:1646  */
    break;

  case 1784:
#line 12026 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 1;
  }
#line 18767 "parser.c" /* yacc.c:1646  */
    break;

  case 1785:
#line 12030 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 0;
  }
#line 18775 "parser.c" /* yacc.c:1646  */
    break;


#line 18779 "parser.c" /* yacc.c:1646  */
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
#line 12206 "parser.y" /* yacc.c:1906  */

