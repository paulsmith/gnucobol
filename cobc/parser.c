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
cb_tree				defined_prog_list = NULL;
char				*cobc_glob_line = NULL;
int				cb_exp_line = 0;

cb_tree				cobc_printer_node = NULL;
int				functions_are_all = 0;
int				non_const_word = 0;
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
void printBits(unsigned int num){
	unsigned int size = sizeof(unsigned int);
	unsigned int maxPow = 1<<(size*8-1);
	int i=0;

	for(;i<size*8;++i){
		/* print last bit and shift left. */
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
		if (!contains_one_screen_field ((struct cb_list *) x_list)) {
			cb_error_x (x_list, _("each screen must have its own DISPLAY statement"));
		}

		if (upon_value != NULL && upon_value != cb_null) {
			cb_error_x (x_list, _("screens may only be displayed on CRT"));
		}

		if (attr_ptr) {
			cb_verify_x (x_list, cb_accept_display_extensions,
				     _("non-standard DISPLAY"));
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
			cb_error_x (x_list, _("a screen must be displayed in its own DISPLAY statement"));
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


#line 1475 "parser.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
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
    EIGHTY_EIGHT = 384,
    ELSE = 385,
    END = 386,
    END_ACCEPT = 387,
    END_ADD = 388,
    END_CALL = 389,
    END_COMPUTE = 390,
    END_DELETE = 391,
    END_DISPLAY = 392,
    END_DIVIDE = 393,
    END_EVALUATE = 394,
    END_FUNCTION = 395,
    END_IF = 396,
    END_MULTIPLY = 397,
    END_PERFORM = 398,
    END_PROGRAM = 399,
    END_READ = 400,
    END_RETURN = 401,
    END_REWRITE = 402,
    END_SEARCH = 403,
    END_START = 404,
    END_STRING = 405,
    END_SUBTRACT = 406,
    END_UNSTRING = 407,
    END_WRITE = 408,
    ENTRY = 409,
    ENVIRONMENT = 410,
    ENVIRONMENT_NAME = 411,
    ENVIRONMENT_VALUE = 412,
    EOL = 413,
    EOP = 414,
    EOS = 415,
    EQUAL = 416,
    ERASE = 417,
    ERROR = 418,
    ESCAPE = 419,
    EVALUATE = 420,
    EVENT_STATUS = 421,
    EXCEPTION = 422,
    EXCEPTION_CONDITION = 423,
    EXCLUSIVE = 424,
    EXIT = 425,
    EXPONENTIATION = 426,
    EXTEND = 427,
    EXTERNAL = 428,
    F = 429,
    FD = 430,
    FILE_CONTROL = 431,
    FILE_ID = 432,
    FILLER = 433,
    FINAL = 434,
    FIRST = 435,
    FIXED = 436,
    FLOAT_BINARY_128 = 437,
    FLOAT_BINARY_32 = 438,
    FLOAT_BINARY_64 = 439,
    FLOAT_DECIMAL_16 = 440,
    FLOAT_DECIMAL_34 = 441,
    FLOAT_DECIMAL_7 = 442,
    FLOAT_EXTENDED = 443,
    FLOAT_LONG = 444,
    FLOAT_SHORT = 445,
    FOOTING = 446,
    FOR = 447,
    FOREGROUND_COLOR = 448,
    FOREVER = 449,
    FORMATTED_DATE_FUNC = 450,
    FORMATTED_DATETIME_FUNC = 451,
    FORMATTED_TIME_FUNC = 452,
    FREE = 453,
    FROM = 454,
    FROM_CRT = 455,
    FULL = 456,
    FUNCTION = 457,
    FUNCTION_ID = 458,
    FUNCTION_NAME = 459,
    GENERATE = 460,
    GIVING = 461,
    GLOBAL = 462,
    GO = 463,
    GOBACK = 464,
    GREATER = 465,
    GREATER_OR_EQUAL = 466,
    GRID = 467,
    GROUP = 468,
    HEADING = 469,
    HIGHLIGHT = 470,
    HIGH_VALUE = 471,
    ID = 472,
    IDENTIFICATION = 473,
    IF = 474,
    IGNORE = 475,
    IGNORING = 476,
    IN = 477,
    INDEX = 478,
    INDEXED = 479,
    INDICATE = 480,
    INITIALIZE = 481,
    INITIALIZED = 482,
    INITIATE = 483,
    INPUT = 484,
    INPUT_OUTPUT = 485,
    INSPECT = 486,
    INTO = 487,
    INTRINSIC = 488,
    INVALID = 489,
    INVALID_KEY = 490,
    IS = 491,
    I_O = 492,
    I_O_CONTROL = 493,
    JUSTIFIED = 494,
    KEPT = 495,
    KEY = 496,
    KEYBOARD = 497,
    LABEL = 498,
    LAST = 499,
    LEADING = 500,
    LEFT = 501,
    LEFTLINE = 502,
    LENGTH = 503,
    LENGTH_OF = 504,
    LESS = 505,
    LESS_OR_EQUAL = 506,
    LIMIT = 507,
    LIMITS = 508,
    LINAGE = 509,
    LINAGE_COUNTER = 510,
    LINE = 511,
    LINE_COUNTER = 512,
    LINES = 513,
    LINKAGE = 514,
    LITERAL = 515,
    LOCALE = 516,
    LOCALE_DATE_FUNC = 517,
    LOCALE_TIME_FUNC = 518,
    LOCALE_TIME_FROM_FUNC = 519,
    LOCAL_STORAGE = 520,
    LOCK = 521,
    LOWER = 522,
    LOWER_CASE_FUNC = 523,
    LOWLIGHT = 524,
    LOW_VALUE = 525,
    MANUAL = 526,
    MEMORY = 527,
    MERGE = 528,
    MINUS = 529,
    MNEMONIC_NAME = 530,
    MODE = 531,
    MOVE = 532,
    MULTIPLE = 533,
    MULTIPLY = 534,
    NAME = 535,
    NATIONAL = 536,
    NATIONAL_EDITED = 537,
    NATIONAL_OF_FUNC = 538,
    NATIVE = 539,
    NEAREST_AWAY_FROM_ZERO = 540,
    NEAREST_EVEN = 541,
    NEAREST_TOWARD_ZERO = 542,
    NEGATIVE = 543,
    NEXT = 544,
    NEXT_PAGE = 545,
    NO = 546,
    NO_ECHO = 547,
    NORMAL = 548,
    NOT = 549,
    NOTHING = 550,
    NOT_END = 551,
    NOT_EOP = 552,
    NOT_ESCAPE = 553,
    NOT_EQUAL = 554,
    NOT_EXCEPTION = 555,
    NOT_INVALID_KEY = 556,
    NOT_OVERFLOW = 557,
    NOT_SIZE_ERROR = 558,
    NO_ADVANCING = 559,
    NUMBER = 560,
    NUMBERS = 561,
    NUMERIC = 562,
    NUMERIC_EDITED = 563,
    NUMVALC_FUNC = 564,
    OBJECT_COMPUTER = 565,
    OCCURS = 566,
    OF = 567,
    OFF = 568,
    OMITTED = 569,
    ON = 570,
    ONLY = 571,
    OPEN = 572,
    OPTIONAL = 573,
    OR = 574,
    ORDER = 575,
    ORGANIZATION = 576,
    OTHER = 577,
    OUTPUT = 578,
    OVERLINE = 579,
    PACKED_DECIMAL = 580,
    PADDING = 581,
    PAGE = 582,
    PAGE_COUNTER = 583,
    PARAGRAPH = 584,
    PERFORM = 585,
    PH = 586,
    PF = 587,
    PICTURE = 588,
    PICTURE_SYMBOL = 589,
    PLUS = 590,
    POINTER = 591,
    POSITION = 592,
    POSITIVE = 593,
    PRESENT = 594,
    PREVIOUS = 595,
    PRINT = 596,
    PRINTER = 597,
    PRINTER_1 = 598,
    PRINTING = 599,
    PROCEDURE = 600,
    PROCEDURES = 601,
    PROCEED = 602,
    PROGRAM = 603,
    PROGRAM_ID = 604,
    PROGRAM_NAME = 605,
    PROGRAM_POINTER = 606,
    PROHIBITED = 607,
    PROMPT = 608,
    PROTECTED = 609,
    QUOTE = 610,
    RANDOM = 611,
    RD = 612,
    READ = 613,
    READY_TRACE = 614,
    RECORD = 615,
    RECORDING = 616,
    RECORDS = 617,
    RECURSIVE = 618,
    REDEFINES = 619,
    REEL = 620,
    REFERENCE = 621,
    REFERENCES = 622,
    RELATIVE = 623,
    RELEASE = 624,
    REMAINDER = 625,
    REMOVAL = 626,
    RENAMES = 627,
    REPLACE = 628,
    REPLACING = 629,
    REPORT = 630,
    REPORTING = 631,
    REPORTS = 632,
    REPOSITORY = 633,
    REQUIRED = 634,
    RESERVE = 635,
    RESET = 636,
    RESET_TRACE = 637,
    RETURN = 638,
    RETURNING = 639,
    REVERSE_FUNC = 640,
    REVERSE_VIDEO = 641,
    REVERSED = 642,
    REWIND = 643,
    REWRITE = 644,
    RF = 645,
    RH = 646,
    RIGHT = 647,
    ROLLBACK = 648,
    ROUNDED = 649,
    RUN = 650,
    S = 651,
    SAME = 652,
    SCREEN = 653,
    SCREEN_CONTROL = 654,
    SCROLL = 655,
    SD = 656,
    SEARCH = 657,
    SECTION = 658,
    SECURE = 659,
    SEGMENT_LIMIT = 660,
    SELECT = 661,
    SEMI_COLON = 662,
    SENTENCE = 663,
    SEPARATE = 664,
    SEQUENCE = 665,
    SEQUENTIAL = 666,
    SET = 667,
    SEVENTY_EIGHT = 668,
    SHARING = 669,
    SIGN = 670,
    SIGNED = 671,
    SIGNED_INT = 672,
    SIGNED_LONG = 673,
    SIGNED_SHORT = 674,
    SIXTY_SIX = 675,
    SIZE = 676,
    SIZE_ERROR = 677,
    SORT = 678,
    SORT_MERGE = 679,
    SOURCE = 680,
    SOURCE_COMPUTER = 681,
    SPACE = 682,
    SPECIAL_NAMES = 683,
    STANDARD = 684,
    STANDARD_1 = 685,
    STANDARD_2 = 686,
    START = 687,
    STATIC = 688,
    STATUS = 689,
    STDCALL = 690,
    STEP = 691,
    STOP = 692,
    STRING = 693,
    SUBSTITUTE_FUNC = 694,
    SUBSTITUTE_CASE_FUNC = 695,
    SUBTRACT = 696,
    SUM = 697,
    SUPPRESS = 698,
    SYMBOLIC = 699,
    SYNCHRONIZED = 700,
    SYSTEM_DEFAULT = 701,
    SYSTEM_OFFSET = 702,
    TAB = 703,
    TALLYING = 704,
    TAPE = 705,
    TERMINATE = 706,
    TEST = 707,
    THAN = 708,
    THEN = 709,
    THRU = 710,
    TIME = 711,
    TIME_OUT = 712,
    TIMES = 713,
    TO = 714,
    TOK_AMPER = 715,
    TOK_CLOSE_PAREN = 716,
    TOK_COLON = 717,
    TOK_DIV = 718,
    TOK_DOT = 719,
    TOK_EQUAL = 720,
    TOK_FALSE = 721,
    TOK_FILE = 722,
    TOK_GREATER = 723,
    TOK_INITIAL = 724,
    TOK_LESS = 725,
    TOK_MINUS = 726,
    TOK_MUL = 727,
    TOK_NULL = 728,
    TOK_OVERFLOW = 729,
    TOK_OPEN_PAREN = 730,
    TOK_PLUS = 731,
    TOK_TRUE = 732,
    TOP = 733,
    TOWARD_GREATER = 734,
    TOWARD_LESSER = 735,
    TRAILING = 736,
    TRANSFORM = 737,
    TRIM_FUNC = 738,
    TRUNCATION = 739,
    TYPE = 740,
    U = 741,
    UNDERLINE = 742,
    UNIT = 743,
    UNLOCK = 744,
    UNSIGNED = 745,
    UNSIGNED_INT = 746,
    UNSIGNED_LONG = 747,
    UNSIGNED_SHORT = 748,
    UNSTRING = 749,
    UNTIL = 750,
    UP = 751,
    UPDATE = 752,
    UPON = 753,
    UPON_ARGUMENT_NUMBER = 754,
    UPON_COMMAND_LINE = 755,
    UPON_ENVIRONMENT_NAME = 756,
    UPON_ENVIRONMENT_VALUE = 757,
    UPPER = 758,
    UPPER_CASE_FUNC = 759,
    USAGE = 760,
    USE = 761,
    USER = 762,
    USER_DEFAULT = 763,
    USER_FUNCTION_NAME = 764,
    USING = 765,
    V = 766,
    VALUE = 767,
    VARIABLE = 768,
    VARYING = 769,
    WAIT = 770,
    WHEN = 771,
    WHEN_COMPILED_FUNC = 772,
    WITH = 773,
    WORD = 774,
    WORDS = 775,
    WORKING_STORAGE = 776,
    WRITE = 777,
    YYYYDDD = 778,
    YYYYMMDD = 779,
    ZERO = 780,
    SHIFT_PREFER = 781,
    OVERFLOW = 782
  };
#endif
/* Tokens.  */
#define TOKEN_EOF 0
#define ACCEPT 258
#define ACCESS 259
#define ADD 260
#define ADDRESS 261
#define ADVANCING 262
#define AFTER 263
#define ALL 264
#define ALLOCATE 265
#define ALPHABET 266
#define ALPHABETIC 267
#define ALPHABETIC_LOWER 268
#define ALPHABETIC_UPPER 269
#define ALPHANUMERIC 270
#define ALPHANUMERIC_EDITED 271
#define ALSO 272
#define ALTER 273
#define ALTERNATE 274
#define AND 275
#define ANY 276
#define ARE 277
#define AREA 278
#define ARGUMENT_NUMBER 279
#define ARGUMENT_VALUE 280
#define AS 281
#define ASCENDING 282
#define ASCII 283
#define ASSIGN 284
#define AT 285
#define ATTRIBUTE 286
#define AUTO 287
#define AUTOMATIC 288
#define AWAY_FROM_ZERO 289
#define BACKGROUND_COLOR 290
#define BASED 291
#define BEFORE 292
#define BELL 293
#define BINARY 294
#define BINARY_C_LONG 295
#define BINARY_CHAR 296
#define BINARY_DOUBLE 297
#define BINARY_LONG 298
#define BINARY_SHORT 299
#define BLANK 300
#define BLINK 301
#define BLOCK 302
#define BOTTOM 303
#define BY 304
#define BYTE_LENGTH 305
#define CALL 306
#define CANCEL 307
#define CAPACITY 308
#define CF 309
#define CH 310
#define CHAINING 311
#define CHARACTER 312
#define CHARACTERS 313
#define CLASS 314
#define CLASSIFICATION 315
#define CLOSE 316
#define CODE 317
#define CODE_SET 318
#define COLLATING 319
#define COL 320
#define COLS 321
#define COLUMN 322
#define COLUMNS 323
#define COMMA 324
#define COMMAND_LINE 325
#define COMMA_DELIM 326
#define COMMIT 327
#define COMMON 328
#define COMP 329
#define COMPUTE 330
#define COMP_1 331
#define COMP_2 332
#define COMP_3 333
#define COMP_4 334
#define COMP_5 335
#define COMP_6 336
#define COMP_X 337
#define CONCATENATE_FUNC 338
#define CONDITION 339
#define CONFIGURATION 340
#define CONSTANT 341
#define CONTAINS 342
#define CONTENT 343
#define CONTINUE 344
#define CONTROL 345
#define CONTROLS 346
#define CONVERSION 347
#define CONVERTING 348
#define COPY 349
#define CORRESPONDING 350
#define COUNT 351
#define CRT 352
#define CRT_UNDER 353
#define CURRENCY 354
#define CURRENT_DATE_FUNC 355
#define CURSOR 356
#define CYCLE 357
#define DATA 358
#define DATE 359
#define DAY 360
#define DAY_OF_WEEK 361
#define DE 362
#define DEBUGGING 363
#define DECIMAL_POINT 364
#define DECLARATIVES 365
#define DEFAULT 366
#define DELETE 367
#define DELIMITED 368
#define DELIMITER 369
#define DEPENDING 370
#define DESCENDING 371
#define DETAIL 372
#define DISC 373
#define DISK 374
#define DISPLAY 375
#define DISPLAY_OF_FUNC 376
#define DIVIDE 377
#define DIVISION 378
#define DOWN 379
#define DUPLICATES 380
#define DYNAMIC 381
#define EBCDIC 382
#define EC 383
#define EIGHTY_EIGHT 384
#define ELSE 385
#define END 386
#define END_ACCEPT 387
#define END_ADD 388
#define END_CALL 389
#define END_COMPUTE 390
#define END_DELETE 391
#define END_DISPLAY 392
#define END_DIVIDE 393
#define END_EVALUATE 394
#define END_FUNCTION 395
#define END_IF 396
#define END_MULTIPLY 397
#define END_PERFORM 398
#define END_PROGRAM 399
#define END_READ 400
#define END_RETURN 401
#define END_REWRITE 402
#define END_SEARCH 403
#define END_START 404
#define END_STRING 405
#define END_SUBTRACT 406
#define END_UNSTRING 407
#define END_WRITE 408
#define ENTRY 409
#define ENVIRONMENT 410
#define ENVIRONMENT_NAME 411
#define ENVIRONMENT_VALUE 412
#define EOL 413
#define EOP 414
#define EOS 415
#define EQUAL 416
#define ERASE 417
#define ERROR 418
#define ESCAPE 419
#define EVALUATE 420
#define EVENT_STATUS 421
#define EXCEPTION 422
#define EXCEPTION_CONDITION 423
#define EXCLUSIVE 424
#define EXIT 425
#define EXPONENTIATION 426
#define EXTEND 427
#define EXTERNAL 428
#define F 429
#define FD 430
#define FILE_CONTROL 431
#define FILE_ID 432
#define FILLER 433
#define FINAL 434
#define FIRST 435
#define FIXED 436
#define FLOAT_BINARY_128 437
#define FLOAT_BINARY_32 438
#define FLOAT_BINARY_64 439
#define FLOAT_DECIMAL_16 440
#define FLOAT_DECIMAL_34 441
#define FLOAT_DECIMAL_7 442
#define FLOAT_EXTENDED 443
#define FLOAT_LONG 444
#define FLOAT_SHORT 445
#define FOOTING 446
#define FOR 447
#define FOREGROUND_COLOR 448
#define FOREVER 449
#define FORMATTED_DATE_FUNC 450
#define FORMATTED_DATETIME_FUNC 451
#define FORMATTED_TIME_FUNC 452
#define FREE 453
#define FROM 454
#define FROM_CRT 455
#define FULL 456
#define FUNCTION 457
#define FUNCTION_ID 458
#define FUNCTION_NAME 459
#define GENERATE 460
#define GIVING 461
#define GLOBAL 462
#define GO 463
#define GOBACK 464
#define GREATER 465
#define GREATER_OR_EQUAL 466
#define GRID 467
#define GROUP 468
#define HEADING 469
#define HIGHLIGHT 470
#define HIGH_VALUE 471
#define ID 472
#define IDENTIFICATION 473
#define IF 474
#define IGNORE 475
#define IGNORING 476
#define IN 477
#define INDEX 478
#define INDEXED 479
#define INDICATE 480
#define INITIALIZE 481
#define INITIALIZED 482
#define INITIATE 483
#define INPUT 484
#define INPUT_OUTPUT 485
#define INSPECT 486
#define INTO 487
#define INTRINSIC 488
#define INVALID 489
#define INVALID_KEY 490
#define IS 491
#define I_O 492
#define I_O_CONTROL 493
#define JUSTIFIED 494
#define KEPT 495
#define KEY 496
#define KEYBOARD 497
#define LABEL 498
#define LAST 499
#define LEADING 500
#define LEFT 501
#define LEFTLINE 502
#define LENGTH 503
#define LENGTH_OF 504
#define LESS 505
#define LESS_OR_EQUAL 506
#define LIMIT 507
#define LIMITS 508
#define LINAGE 509
#define LINAGE_COUNTER 510
#define LINE 511
#define LINE_COUNTER 512
#define LINES 513
#define LINKAGE 514
#define LITERAL 515
#define LOCALE 516
#define LOCALE_DATE_FUNC 517
#define LOCALE_TIME_FUNC 518
#define LOCALE_TIME_FROM_FUNC 519
#define LOCAL_STORAGE 520
#define LOCK 521
#define LOWER 522
#define LOWER_CASE_FUNC 523
#define LOWLIGHT 524
#define LOW_VALUE 525
#define MANUAL 526
#define MEMORY 527
#define MERGE 528
#define MINUS 529
#define MNEMONIC_NAME 530
#define MODE 531
#define MOVE 532
#define MULTIPLE 533
#define MULTIPLY 534
#define NAME 535
#define NATIONAL 536
#define NATIONAL_EDITED 537
#define NATIONAL_OF_FUNC 538
#define NATIVE 539
#define NEAREST_AWAY_FROM_ZERO 540
#define NEAREST_EVEN 541
#define NEAREST_TOWARD_ZERO 542
#define NEGATIVE 543
#define NEXT 544
#define NEXT_PAGE 545
#define NO 546
#define NO_ECHO 547
#define NORMAL 548
#define NOT 549
#define NOTHING 550
#define NOT_END 551
#define NOT_EOP 552
#define NOT_ESCAPE 553
#define NOT_EQUAL 554
#define NOT_EXCEPTION 555
#define NOT_INVALID_KEY 556
#define NOT_OVERFLOW 557
#define NOT_SIZE_ERROR 558
#define NO_ADVANCING 559
#define NUMBER 560
#define NUMBERS 561
#define NUMERIC 562
#define NUMERIC_EDITED 563
#define NUMVALC_FUNC 564
#define OBJECT_COMPUTER 565
#define OCCURS 566
#define OF 567
#define OFF 568
#define OMITTED 569
#define ON 570
#define ONLY 571
#define OPEN 572
#define OPTIONAL 573
#define OR 574
#define ORDER 575
#define ORGANIZATION 576
#define OTHER 577
#define OUTPUT 578
#define OVERLINE 579
#define PACKED_DECIMAL 580
#define PADDING 581
#define PAGE 582
#define PAGE_COUNTER 583
#define PARAGRAPH 584
#define PERFORM 585
#define PH 586
#define PF 587
#define PICTURE 588
#define PICTURE_SYMBOL 589
#define PLUS 590
#define POINTER 591
#define POSITION 592
#define POSITIVE 593
#define PRESENT 594
#define PREVIOUS 595
#define PRINT 596
#define PRINTER 597
#define PRINTER_1 598
#define PRINTING 599
#define PROCEDURE 600
#define PROCEDURES 601
#define PROCEED 602
#define PROGRAM 603
#define PROGRAM_ID 604
#define PROGRAM_NAME 605
#define PROGRAM_POINTER 606
#define PROHIBITED 607
#define PROMPT 608
#define PROTECTED 609
#define QUOTE 610
#define RANDOM 611
#define RD 612
#define READ 613
#define READY_TRACE 614
#define RECORD 615
#define RECORDING 616
#define RECORDS 617
#define RECURSIVE 618
#define REDEFINES 619
#define REEL 620
#define REFERENCE 621
#define REFERENCES 622
#define RELATIVE 623
#define RELEASE 624
#define REMAINDER 625
#define REMOVAL 626
#define RENAMES 627
#define REPLACE 628
#define REPLACING 629
#define REPORT 630
#define REPORTING 631
#define REPORTS 632
#define REPOSITORY 633
#define REQUIRED 634
#define RESERVE 635
#define RESET 636
#define RESET_TRACE 637
#define RETURN 638
#define RETURNING 639
#define REVERSE_FUNC 640
#define REVERSE_VIDEO 641
#define REVERSED 642
#define REWIND 643
#define REWRITE 644
#define RF 645
#define RH 646
#define RIGHT 647
#define ROLLBACK 648
#define ROUNDED 649
#define RUN 650
#define S 651
#define SAME 652
#define SCREEN 653
#define SCREEN_CONTROL 654
#define SCROLL 655
#define SD 656
#define SEARCH 657
#define SECTION 658
#define SECURE 659
#define SEGMENT_LIMIT 660
#define SELECT 661
#define SEMI_COLON 662
#define SENTENCE 663
#define SEPARATE 664
#define SEQUENCE 665
#define SEQUENTIAL 666
#define SET 667
#define SEVENTY_EIGHT 668
#define SHARING 669
#define SIGN 670
#define SIGNED 671
#define SIGNED_INT 672
#define SIGNED_LONG 673
#define SIGNED_SHORT 674
#define SIXTY_SIX 675
#define SIZE 676
#define SIZE_ERROR 677
#define SORT 678
#define SORT_MERGE 679
#define SOURCE 680
#define SOURCE_COMPUTER 681
#define SPACE 682
#define SPECIAL_NAMES 683
#define STANDARD 684
#define STANDARD_1 685
#define STANDARD_2 686
#define START 687
#define STATIC 688
#define STATUS 689
#define STDCALL 690
#define STEP 691
#define STOP 692
#define STRING 693
#define SUBSTITUTE_FUNC 694
#define SUBSTITUTE_CASE_FUNC 695
#define SUBTRACT 696
#define SUM 697
#define SUPPRESS 698
#define SYMBOLIC 699
#define SYNCHRONIZED 700
#define SYSTEM_DEFAULT 701
#define SYSTEM_OFFSET 702
#define TAB 703
#define TALLYING 704
#define TAPE 705
#define TERMINATE 706
#define TEST 707
#define THAN 708
#define THEN 709
#define THRU 710
#define TIME 711
#define TIME_OUT 712
#define TIMES 713
#define TO 714
#define TOK_AMPER 715
#define TOK_CLOSE_PAREN 716
#define TOK_COLON 717
#define TOK_DIV 718
#define TOK_DOT 719
#define TOK_EQUAL 720
#define TOK_FALSE 721
#define TOK_FILE 722
#define TOK_GREATER 723
#define TOK_INITIAL 724
#define TOK_LESS 725
#define TOK_MINUS 726
#define TOK_MUL 727
#define TOK_NULL 728
#define TOK_OVERFLOW 729
#define TOK_OPEN_PAREN 730
#define TOK_PLUS 731
#define TOK_TRUE 732
#define TOP 733
#define TOWARD_GREATER 734
#define TOWARD_LESSER 735
#define TRAILING 736
#define TRANSFORM 737
#define TRIM_FUNC 738
#define TRUNCATION 739
#define TYPE 740
#define U 741
#define UNDERLINE 742
#define UNIT 743
#define UNLOCK 744
#define UNSIGNED 745
#define UNSIGNED_INT 746
#define UNSIGNED_LONG 747
#define UNSIGNED_SHORT 748
#define UNSTRING 749
#define UNTIL 750
#define UP 751
#define UPDATE 752
#define UPON 753
#define UPON_ARGUMENT_NUMBER 754
#define UPON_COMMAND_LINE 755
#define UPON_ENVIRONMENT_NAME 756
#define UPON_ENVIRONMENT_VALUE 757
#define UPPER 758
#define UPPER_CASE_FUNC 759
#define USAGE 760
#define USE 761
#define USER 762
#define USER_DEFAULT 763
#define USER_FUNCTION_NAME 764
#define USING 765
#define V 766
#define VALUE 767
#define VARIABLE 768
#define VARYING 769
#define WAIT 770
#define WHEN 771
#define WHEN_COMPILED_FUNC 772
#define WITH 773
#define WORD 774
#define WORDS 775
#define WORKING_STORAGE 776
#define WRITE 777
#define YYYYDDD 778
#define YYYYMMDD 779
#define ZERO 780
#define SHIFT_PREFER 781
#define OVERFLOW 782

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

#line 2582 "parser.c" /* yacc.c:358  */

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
#define YYLAST   8568

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  528
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  863
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1997
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2845

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   782

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
     525,   526,   527
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  2068,  2068,  2068,  2101,  2102,  2106,  2107,  2111,  2112,
    2116,  2116,  2139,  2150,  2156,  2157,  2161,  2162,  2166,  2174,
    2183,  2191,  2192,  2193,  2198,  2202,  2197,  2218,  2217,  2233,
    2244,  2248,  2249,  2253,  2254,  2257,  2258,  2262,  2271,  2280,
    2281,  2288,  2289,  2293,  2297,  2307,  2312,  2313,  2322,  2329,
    2330,  2340,  2341,  2342,  2343,  2344,  2357,  2356,  2366,  2367,
    2370,  2371,  2385,  2384,  2394,  2395,  2396,  2397,  2401,  2402,
    2406,  2407,  2408,  2409,  2413,  2421,  2428,  2435,  2446,  2450,
    2454,  2458,  2465,  2466,  2471,  2473,  2472,  2483,  2484,  2485,
    2492,  2493,  2497,  2501,  2507,  2508,  2518,  2523,  2533,  2534,
    2546,  2547,  2551,  2552,  2556,  2557,  2561,  2562,  2563,  2564,
    2565,  2566,  2567,  2568,  2569,  2570,  2571,  2572,  2580,  2579,
    2607,  2617,  2630,  2638,  2641,  2642,  2646,  2653,  2668,  2689,
    2688,  2712,  2718,  2724,  2730,  2736,  2742,  2752,  2756,  2763,
    2767,  2772,  2771,  2782,  2786,  2793,  2794,  2795,  2796,  2797,
    2798,  2802,  2803,  2810,  2825,  2828,  2835,  2843,  2847,  2858,
    2878,  2886,  2897,  2898,  2904,  2925,  2926,  2930,  2934,  2955,
    2978,  3060,  3063,  3072,  3091,  3107,  3125,  3143,  3160,  3177,
    3187,  3188,  3195,  3196,  3204,  3205,  3215,  3216,  3221,  3220,
    3250,  3251,  3255,  3256,  3257,  3258,  3259,  3260,  3261,  3262,
    3263,  3264,  3265,  3266,  3267,  3274,  3280,  3290,  3303,  3316,
    3343,  3344,  3345,  3349,  3350,  3351,  3352,  3355,  3356,  3362,
    3363,  3367,  3371,  3372,  3377,  3380,  3381,  3388,  3396,  3397,
    3398,  3405,  3429,  3431,  3436,  3446,  3454,  3469,  3476,  3478,
    3479,  3485,  3485,  3492,  3497,  3502,  3509,  3510,  3511,  3515,
    3526,  3527,  3531,  3536,  3541,  3546,  3557,  3568,  3578,  3586,
    3587,  3588,  3594,  3605,  3612,  3613,  3619,  3627,  3628,  3629,
    3635,  3636,  3637,  3644,  3645,  3649,  3650,  3656,  3684,  3685,
    3686,  3687,  3694,  3693,  3709,  3710,  3714,  3717,  3718,  3728,
    3725,  3741,  3742,  3750,  3751,  3759,  3760,  3764,  3785,  3784,
    3801,  3808,  3812,  3818,  3819,  3823,  3833,  3848,  3849,  3850,
    3851,  3852,  3853,  3854,  3855,  3856,  3863,  3870,  3870,  3870,
    3876,  3896,  3930,  3961,  3962,  3969,  3970,  3974,  3975,  3982,
    3993,  3998,  4009,  4010,  4014,  4015,  4021,  4032,  4050,  4051,
    4055,  4056,  4057,  4061,  4068,  4075,  4084,  4093,  4094,  4095,
    4096,  4097,  4106,  4107,  4113,  4148,  4149,  4162,  4177,  4178,
    4182,  4192,  4206,  4208,  4207,  4223,  4226,  4226,  4243,  4244,
    4248,  4249,  4250,  4252,  4251,  4266,  4279,  4287,  4292,  4298,
    4302,  4312,  4315,  4327,  4328,  4329,  4330,  4334,  4338,  4342,
    4346,  4350,  4354,  4358,  4362,  4366,  4370,  4374,  4378,  4382,
    4393,  4394,  4398,  4399,  4403,  4404,  4405,  4409,  4410,  4414,
    4439,  4442,  4450,  4449,  4462,  4486,  4485,  4499,  4503,  4512,
    4516,  4525,  4526,  4527,  4528,  4529,  4530,  4531,  4532,  4533,
    4534,  4535,  4536,  4537,  4544,  4568,  4596,  4599,  4607,  4608,
    4612,  4637,  4648,  4649,  4653,  4657,  4661,  4665,  4669,  4673,
    4677,  4681,  4685,  4689,  4693,  4697,  4701,  4706,  4711,  4715,
    4719,  4727,  4731,  4735,  4743,  4747,  4751,  4755,  4759,  4763,
    4767,  4771,  4775,  4783,  4791,  4795,  4799,  4803,  4807,  4811,
    4819,  4820,  4824,  4825,  4831,  4837,  4849,  4867,  4868,  4877,
    4909,  4939,  4940,  4944,  4945,  4948,  4949,  4955,  4956,  4963,
    4964,  4971,  4995,  4996,  5013,  5014,  5017,  5018,  5025,  5026,
    5031,  5042,  5053,  5064,  5075,  5104,  5103,  5112,  5113,  5117,
    5118,  5121,  5122,  5134,  5143,  5157,  5159,  5158,  5178,  5180,
    5179,  5195,  5197,  5196,  5205,  5206,  5213,  5212,  5225,  5226,
    5227,  5234,  5239,  5243,  5244,  5250,  5257,  5261,  5262,  5268,
    5305,  5309,  5314,  5320,  5321,  5326,  5327,  5328,  5329,  5330,
    5334,  5341,  5348,  5355,  5362,  5368,  5369,  5374,  5373,  5380,
    5381,  5385,  5386,  5387,  5388,  5389,  5390,  5391,  5392,  5393,
    5394,  5395,  5396,  5397,  5398,  5399,  5400,  5404,  5411,  5412,
    5413,  5414,  5415,  5416,  5417,  5420,  5421,  5422,  5425,  5426,
    5430,  5437,  5443,  5444,  5448,  5449,  5453,  5460,  5464,  5471,
    5472,  5476,  5483,  5484,  5488,  5489,  5493,  5494,  5495,  5499,
    5500,  5504,  5505,  5509,  5516,  5523,  5531,  5533,  5532,  5553,
    5554,  5558,  5559,  5563,  5565,  5564,  5624,  5642,  5643,  5647,
    5652,  5657,  5661,  5665,  5670,  5675,  5680,  5685,  5689,  5693,
    5698,  5703,  5708,  5712,  5716,  5720,  5724,  5729,  5733,  5737,
    5742,  5747,  5752,  5757,  5758,  5759,  5760,  5761,  5762,  5763,
    5764,  5765,  5774,  5779,  5790,  5791,  5795,  5796,  5800,  5801,
    5805,  5806,  5811,  5814,  5818,  5826,  5829,  5833,  5841,  5852,
    5860,  5862,  5872,  5861,  5899,  5899,  5932,  5936,  5935,  5949,
    5948,  5968,  5969,  5974,  5996,  5998,  6002,  6013,  6015,  6023,
    6031,  6039,  6068,  6101,  6104,  6117,  6122,  6132,  6163,  6165,
    6164,  6201,  6202,  6206,  6207,  6208,  6225,  6226,  6237,  6236,
    6286,  6287,  6291,  6339,  6359,  6362,  6381,  6386,  6380,  6399,
    6399,  6429,  6436,  6437,  6438,  6439,  6440,  6441,  6442,  6443,
    6444,  6445,  6446,  6447,  6448,  6449,  6450,  6451,  6452,  6453,
    6454,  6455,  6456,  6457,  6458,  6459,  6460,  6461,  6462,  6463,
    6464,  6465,  6466,  6467,  6468,  6469,  6470,  6471,  6472,  6473,
    6474,  6475,  6476,  6477,  6478,  6479,  6480,  6481,  6482,  6483,
    6484,  6485,  6499,  6511,  6510,  6527,  6526,  6544,  6548,  6552,
    6557,  6562,  6567,  6572,  6576,  6580,  6584,  6588,  6593,  6597,
    6601,  6605,  6609,  6613,  6617,  6624,  6625,  6631,  6633,  6637,
    6638,  6642,  6643,  6647,  6651,  6655,  6656,  6660,  6676,  6692,
    6705,  6709,  6710,  6714,  6721,  6725,  6731,  6735,  6739,  6743,
    6747,  6753,  6757,  6761,  6767,  6771,  6775,  6779,  6783,  6787,
    6791,  6795,  6799,  6803,  6807,  6813,  6817,  6821,  6825,  6829,
    6833,  6837,  6844,  6845,  6849,  6853,  6871,  6870,  6879,  6883,
    6887,  6893,  6894,  6901,  6905,  6916,  6915,  6924,  6928,  6940,
    6941,  6949,  6948,  6957,  6958,  6962,  6968,  6968,  6975,  6974,
    6987,  6986,  7014,  7018,  7023,  7028,  7048,  7049,  7057,  7061,
    7060,  7077,  7078,  7083,  7091,  7115,  7117,  7121,  7130,  7143,
    7146,  7150,  7154,  7159,  7182,  7183,  7187,  7188,  7192,  7196,
    7200,  7211,  7215,  7222,  7226,  7234,  7238,  7245,  7252,  7256,
    7267,  7266,  7278,  7282,  7289,  7290,  7300,  7299,  7307,  7312,
    7320,  7321,  7322,  7323,  7324,  7332,  7331,  7340,  7347,  7351,
    7361,  7372,  7390,  7389,  7398,  7402,  7406,  7411,  7419,  7423,
    7434,  7433,  7445,  7449,  7453,  7457,  7461,  7465,  7473,  7482,
    7483,  7488,  7487,  7532,  7536,  7544,  7545,  7549,  7553,  7558,
    7562,  7563,  7567,  7571,  7575,  7579,  7586,  7587,  7591,  7595,
    7601,  7607,  7611,  7615,  7621,  7627,  7633,  7639,  7643,  7647,
    7651,  7655,  7659,  7663,  7667,  7674,  7678,  7689,  7688,  7697,
    7701,  7705,  7709,  7713,  7720,  7724,  7735,  7734,  7743,  7762,
    7761,  7785,  7793,  7794,  7799,  7810,  7821,  7835,  7839,  7846,
    7847,  7852,  7861,  7870,  7875,  7884,  7885,  7890,  7952,  7953,
    7954,  7958,  7959,  7963,  7967,  7978,  7977,  7989,  7990,  8011,
    8025,  8047,  8069,  8089,  8112,  8113,  8121,  8120,  8129,  8140,
    8139,  8149,  8156,  8155,  8168,  8177,  8181,  8192,  8208,  8207,
    8216,  8220,  8224,  8231,  8235,  8246,  8245,  8253,  8261,  8262,
    8266,  8267,  8268,  8273,  8276,  8283,  8287,  8295,  8302,  8303,
    8304,  8305,  8306,  8307,  8308,  8313,  8316,  8326,  8325,  8334,
    8340,  8352,  8351,  8360,  8364,  8368,  8372,  8379,  8380,  8381,
    8382,  8389,  8388,  8409,  8419,  8428,  8432,  8439,  8444,  8449,
    8454,  8459,  8464,  8472,  8473,  8477,  8482,  8488,  8490,  8491,
    8492,  8493,  8497,  8525,  8528,  8532,  8536,  8540,  8547,  8554,
    8564,  8563,  8576,  8575,  8583,  8587,  8598,  8597,  8606,  8610,
    8617,  8621,  8632,  8631,  8639,  8660,  8684,  8685,  8686,  8687,
    8691,  8692,  8696,  8697,  8698,  8699,  8711,  8710,  8721,  8727,
    8726,  8737,  8745,  8753,  8760,  8764,  8777,  8784,  8796,  8799,
    8804,  8808,  8819,  8826,  8827,  8831,  8832,  8835,  8836,  8841,
    8852,  8851,  8860,  8887,  8888,  8893,  8896,  8900,  8904,  8908,
    8912,  8916,  8923,  8924,  8928,  8929,  8933,  8937,  8947,  8958,
    8957,  8965,  8975,  8986,  8985,  8994,  9001,  9005,  9016,  9015,
    9027,  9036,  9039,  9043,  9050,  9054,  9064,  9076,  9075,  9084,
    9088,  9097,  9098,  9103,  9106,  9114,  9118,  9125,  9133,  9137,
    9148,  9147,  9161,  9162,  9163,  9164,  9165,  9166,  9167,  9171,
    9172,  9176,  9177,  9183,  9192,  9199,  9200,  9204,  9208,  9212,
    9218,  9224,  9228,  9232,  9236,  9245,  9249,  9258,  9267,  9268,
    9272,  9281,  9282,  9286,  9290,  9299,  9309,  9308,  9317,  9316,
    9348,  9351,  9371,  9372,  9375,  9376,  9384,  9385,  9390,  9395,
    9405,  9421,  9426,  9436,  9453,  9452,  9462,  9475,  9478,  9486,
    9489,  9494,  9499,  9507,  9508,  9509,  9510,  9511,  9512,  9516,
    9524,  9525,  9529,  9533,  9544,  9543,  9553,  9566,  9569,  9573,
    9577,  9585,  9597,  9600,  9607,  9608,  9609,  9610,  9617,  9616,
    9626,  9633,  9634,  9638,  9653,  9654,  9659,  9660,  9664,  9665,
    9669,  9673,  9684,  9683,  9692,  9696,  9700,  9707,  9711,  9721,
    9732,  9733,  9740,  9739,  9748,  9754,  9766,  9765,  9773,  9787,
    9786,  9794,  9811,  9810,  9819,  9827,  9828,  9833,  9834,  9839,
    9846,  9847,  9852,  9859,  9860,  9864,  9865,  9869,  9870,  9874,
    9878,  9889,  9888,  9897,  9898,  9899,  9900,  9901,  9905,  9932,
    9935,  9947,  9957,  9962,  9967,  9972,  9980, 10018, 10019, 10023,
   10063, 10073, 10096, 10097, 10098, 10099, 10103, 10112, 10118, 10128,
   10137, 10146, 10147, 10154, 10153, 10165, 10175, 10176, 10181, 10184,
   10188, 10192, 10199, 10200, 10204, 10205, 10206, 10210, 10214, 10226,
   10227, 10228, 10238, 10242, 10249, 10257, 10258, 10262, 10263, 10267,
   10275, 10276, 10281, 10282, 10283, 10293, 10297, 10304, 10312, 10313,
   10317, 10327, 10328, 10329, 10339, 10343, 10350, 10358, 10359, 10363,
   10373, 10374, 10375, 10385, 10389, 10396, 10404, 10405, 10409, 10420,
   10421, 10428, 10430, 10439, 10443, 10450, 10458, 10459, 10463, 10473,
   10474, 10484, 10488, 10495, 10503, 10504, 10508, 10518, 10519, 10523,
   10524, 10534, 10538, 10545, 10553, 10554, 10558, 10568, 10572, 10582,
   10589, 10596, 10596, 10607, 10608, 10609, 10613, 10622, 10623, 10625,
   10626, 10627, 10628, 10629, 10631, 10632, 10633, 10634, 10635, 10636,
   10638, 10639, 10640, 10642, 10643, 10644, 10645, 10646, 10649, 10650,
   10654, 10655, 10659, 10660, 10664, 10665, 10669, 10673, 10679, 10683,
   10689, 10690, 10691, 10695, 10696, 10697, 10701, 10702, 10703, 10707,
   10711, 10715, 10716, 10717, 10720, 10721, 10731, 10743, 10752, 10764,
   10773, 10785, 10800, 10801, 10806, 10815, 10821, 10843, 10847, 10868,
   10909, 10923, 10924, 10929, 10935, 10936, 10941, 10953, 10954, 10955,
   10962, 10973, 10974, 10978, 10986, 10994, 10998, 11005, 11014, 11015,
   11021, 11030, 11041, 11058, 11062, 11069, 11070, 11071, 11078, 11079,
   11083, 11087, 11094, 11095, 11096, 11097, 11098, 11102, 11106, 11110,
   11114, 11118, 11139, 11143, 11150, 11151, 11152, 11156, 11157, 11158,
   11159, 11160, 11164, 11168, 11175, 11176, 11180, 11181, 11185, 11186,
   11190, 11191, 11202, 11206, 11210, 11214, 11215, 11219, 11223, 11224,
   11231, 11235, 11239, 11243, 11247, 11251, 11252, 11258, 11262, 11266,
   11267, 11271, 11275, 11282, 11289, 11296, 11306, 11313, 11323, 11333,
   11343, 11356, 11360, 11368, 11376, 11380, 11390, 11404, 11427, 11449,
   11465, 11466, 11467, 11468, 11469, 11470, 11474, 11478, 11495, 11499,
   11506, 11507, 11508, 11509, 11510, 11511, 11512, 11518, 11522, 11526,
   11530, 11534, 11538, 11542, 11546, 11550, 11554, 11558, 11562, 11569,
   11570, 11574, 11575, 11576, 11580, 11581, 11582, 11583, 11587, 11591,
   11595, 11602, 11606, 11610, 11617, 11624, 11631, 11641, 11648, 11658,
   11665, 11675, 11679, 11692, 11696, 11711, 11719, 11720, 11724, 11725,
   11729, 11730, 11735, 11738, 11746, 11749, 11756, 11758, 11759, 11763,
   11764, 11768, 11769, 11770, 11775, 11778, 11791, 11795, 11803, 11807,
   11811, 11815, 11819, 11823, 11827, 11831, 11838, 11839, 11845, 11846,
   11847, 11848, 11849, 11850, 11851, 11852, 11853, 11854, 11855, 11856,
   11857, 11858, 11859, 11860, 11861, 11862, 11863, 11864, 11865, 11866,
   11867, 11868, 11869, 11870, 11871, 11872, 11873, 11874, 11875, 11876,
   11877, 11878, 11879, 11880, 11881, 11882, 11883, 11884, 11885, 11886,
   11887, 11888, 11889, 11890, 11891, 11892, 11893, 11894, 11895, 11896,
   11897, 11898, 11899, 11900, 11901, 11902, 11903, 11904, 11905, 11906,
   11907, 11908, 11909, 11910, 11911, 11912, 11913, 11914, 11921, 11921,
   11922, 11922, 11923, 11923, 11924, 11924, 11925, 11925, 11926, 11926,
   11927, 11927, 11928, 11928, 11929, 11929, 11930, 11930, 11931, 11931,
   11932, 11932, 11933, 11933, 11934, 11934, 11935, 11935, 11936, 11936,
   11937, 11937, 11938, 11938, 11939, 11939, 11939, 11940, 11940, 11941,
   11941, 11942, 11942, 11943, 11943, 11944, 11944, 11944, 11945, 11945,
   11946, 11946, 11946, 11947, 11947, 11947, 11948, 11948, 11948, 11949,
   11949, 11950, 11950, 11951, 11951, 11952, 11952, 11952, 11953, 11953,
   11954, 11954, 11955, 11955, 11955, 11955, 11956, 11956, 11957, 11957,
   11958, 11958, 11959, 11959, 11960, 11960, 11960, 11961, 11961, 11962,
   11962, 11963, 11963, 11964, 11964, 11964, 11965, 11965, 11966, 11966,
   11967, 11967, 11968, 11968, 11969, 11969, 11970, 11970, 11971, 11971,
   11972, 11972, 11972, 11973, 11973, 11974, 11974, 11975, 11975, 11979,
   11979, 11980, 11980, 11981, 11981, 11982, 11982, 11983, 11983, 11984,
   11984, 11985, 11985, 11986, 11986, 11987, 11987, 11988, 11988, 11989,
   11989, 11990, 11990, 11991, 11991, 11992, 11992, 11993, 11993, 11996,
   11997, 11998, 12002, 12002, 12003, 12003, 12004, 12004, 12005, 12005,
   12006, 12006, 12007, 12007, 12008, 12008, 12009, 12009
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
  "MANUAL", "MEMORY", "MERGE", "MINUS", "\"MNEMONIC NAME\"", "MODE",
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
  "x_list", "x", "report_x_list", "expr_x", "arith_x", "prog_or_entry",
  "alnum_or_id", "simple_value", "simple_all_value", "id_or_lit",
  "id_or_lit_or_func", "num_id_or_lit", "positive_id_or_lit",
  "pos_num_id_or_lit", "from_parameter", "sub_identifier",
  "sort_identifier", "sub_identifier_1", "identifier", "identifier_1",
  "target_identifier", "target_identifier_1", "qualified_word", "subref",
  "refmod", "integer", "symbolic_integer", "report_integer", "class_value",
  "literal", "basic_literal", "basic_value", "function", "func_no_parm",
  "func_one_parm", "func_multi_parm", "func_refmod", "func_args",
  "trim_args", "numvalc_args", "locale_dt_args", "formatted_datetime_args",
  "formatted_time_args", "not_const_word", "flag_all", "flag_duplicates",
  "flag_initialized", "flag_initialized_to", "to_init_val", "_flag_next",
  "_flag_not", "flag_optional", "flag_rounded", "round_mode",
  "round_choice", "flag_separate", "error_stmt_recover", "_advancing",
  "_after", "_are", "_area", "_as", "_at", "_binary", "_by", "_character",
  "_characters", "_contains", "_data", "_end_of", "_file", "_final",
  "_for", "_from", "_in", "_in_order", "_indicate", "_initial", "_into",
  "_is", "_is_are", "_key", "_left_or_right", "_line_or_lines", "_limits",
  "_lines", "_mode", "_number", "_numbers", "_of", "_on", "_onoff_status",
  "_other", "_procedure", "_program", "_record", "_records", "_right",
  "_sign", "_signed", "_sign_is", "_size", "_standard", "_status", "_tape",
  "_then", "_times", "_to", "_to_using", "_when", "_when_set_to", "_with",
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
     775,   776,   777,   778,   779,   780,   781,   782
};
# endif

#define YYPACT_NINF -2470

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2470)))

#define YYTABLE_NINF -1948

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2470,   260,  1100, -2470,   720,   782, -2470,   867, -2470, -2470,
     112, -2470, -2470,    -9,   454,   564, -2470,   933, -2470,   957,
    1053, -2470, -2470,   112,   112, -2470, -2470,   692,  1041,  1551,
     761,   851,  1075,  -122,   899,   931,  1267,  1287, -2470,   938,
    1350, -2470, -2470,  1114, -2470,  1057,  1123, -2470,  1354,  1078,
    1082,  1135,  1244,  1143,   626,   626,   638, -2470,  1267, -2470,
     638, -2470, -2470,    32,  3271,  3731,  1111,   529, -2470,  1118,
    1121, -2470, -2470, -2470,  1129,   706, -2470, -2470, -2470, -2470,
    1552,  1552, -2470, -2470,  1149, -2470,  1166, -2470, -2470,  1264,
    4126, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
     -59, -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1234, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470,   585, -2470, -2470,  1308, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470,  1159, -2470,    13,    65,
   -2470, -2470,   -11,   742,  1137, -2470,    73,    73,  1230,  1278,
    1462,  1462,  1462,    73,  1288,  1462,  1648, -2470,  1334,   706,
    1154, -2470, -2470, -2470, -2470,  1495, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470,  1465,  1271, -2470, -2470, -2470,
      47,    47,  -159,  1280, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470,  -147,  2028,  7688,  -100,   661,
     395,  1229,  1180,  -242,  4969,  5853,  1491,  -214,   982,  1180,
    1240,  1293, -2470, -2470,  5853, -2470, -2470,  1180,  1242,  2923,
    1240,  5098,  5853, -2470,  1216,  2542,  1229,  1240,  1229,  1240,
      76,    92,  1240,  1229, -2470, -2470, -2470, -2470, -2470, -2470,
    5853,  5294, -2470, -2470,  1242,   233,  1240,  1229,  1240,  1240,
    1359,  1498, -2470,   327,  1302, -2470, -2470,  1306,  1142,   -97,
   -2470, -2470,  1362,  1353,  1707,  1462, -2470, -2470, -2470,  1126,
   -2470, -2470, -2470, -2470, -2470,   961,  1717,  1462, -2470,     6,
   -2470, -2470, -2470,  1462,  1462, -2470,  1462, -2470,  1240,  1712,
    1240,  1462,  1462,  1240, -2470,  1263,  1219,  1322, -2470,  1812,
   -2470, -2470,  1270, -2470, -2470, -2470,   -90, -2470,    71, -2470,
    -215,   411,   246, -2470, -2470, -2470, -2470,   750,  1658, -2470,
    1594, -2470,  1325,  1485,   855, -2470,  1240, -2470, -2470,  1327,
    1329,  1341, -2470,  8043,   750,   750, -2470,  1342,  1343,  1356,
   -2470, -2470, -2470,  1363,   750, -2470, -2470, -2470, -2470, -2470,
   -2470,  1366, -2470,  1341, -2470, -2470,  1668, -2470,  5331, -2470,
   -2470, -2470,  1368, -2470, -2470,  1369,  1371,  1372,  8043,  7791,
    7688,  7791, -2470,   170,  -204, -2470,  1665, -2470, -2470, -2470,
     690,  1368, -2470, -2470,  -100, -2470,  1380, -2470,   750, -2470,
   -2470, -2470, -2470,  1715,  4335, -2470, -2470,   395, -2470, -2470,
   -2470,  1229,   990,  1485,  1722,   919, -2470,  1456, -2470, -2470,
    1325,  1368,  1229,  1716,  1501,  1256, -2470,  1721,   628,  5414,
   -2470, -2470,  4825,  1379,  1415,  1724,   136,  1355, -2470, -2470,
   -2470,  1730,    55, -2470, -2470, -2470,  4534, -2470, -2470,  1761,
     -59, -2470, -2470, -2470,  1180, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470,  1416, -2470, -2470,   250, -2470,  1242, -2470, -2470,
     234, -2470, -2470, -2470, -2470, -2470, -2470,  1397,  5853, -2470,
    1417,  1733,  1833, -2470, -2470, -2470, -2470,  1216,  1469, -2470,
    1429, -2470, -2470,  3847,   189,  -249,  1434,  1433, -2470,   892,
   -2470,  1440,  1749,   -70, -2470,  1696, -2470,  1752,  1501,  1755,
    1696,  1240,  1756,  1389, -2470,  1300,  1740, -2470, -2470, -2470,
   -2470, -2470, -2470,  1633, -2470,  1180, -2470, -2470,   501, -2470,
     615,  1879, -2470,    46, -2470,  1773,  1066,  4687,  1776,  5620,
   -2470,  1814,  1240,  1777,  5709,  1242, -2470, -2470,  -179, -2470,
   -2470, -2470, -2470,  3467, -2470,  1732, -2470,  1199,  1784,  1825,
    1789,  1696,  1484,  1548,  1693,  1437,  1437,  1437,    49,  1496,
    6625, -2470, -2470, -2470,  1443, -2470, -2470, -2470,  1641, -2470,
      73, -2470,  1039, -2470,   143, -2470, -2470, -2470, -2470,  1462,
    1553,  1708, -2470, -2470, -2470, -2470,  1128,  1462,  1445,  1503,
    1861,  1462,  1361,  1240,  1714, -2470, -2470, -2470, -2470,  1719,
    1499, -2470, -2470,  1263, -2470,    56, -2470, -2470, -2470, -2470,
   -2470, -2470,  1297,   -71,  1462,    53, -2470, -2470, -2470,  1508,
     144, -2470,  1462,  1561,  1669, -2470, -2470,  1874, -2470, -2470,
    1240, -2470, -2470,  6882,  1941,  7688,  1511, -2470, -2470,   -41,
   -2470,  1530,  7688,  7688,  6255, -2470, -2470,  1368, -2470,  1471,
    1473,  7688,  7688,  7688,  8043,  1480,  8043, -2470, -2470, -2470,
    6026,  1797, -2470,   855,  7688, -2470,  8043,  7688, -2470,  1368,
   -2470, -2470, -2470,  1048, -2470,  1778,  7688,  7688,  7688,  7688,
    7688, -2470,  1620, -2470,  1667,  1753, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470,   990, -2470, -2470, -2470,   -40,   581,  1240,
   -2470, -2470, -2470, -2470, -2470,  7688,  1745, -2470,  1511, -2470,
    1229, -2470, -2470, -2470, -2470,   -17, -2470, -2470, -2470, -2470,
   -2470,  1723,  1849, -2470, -2470,  4825,   105,   628,   628,   628,
     628, -2470, -2470,  5853,  6026, -2470, -2470, -2470, -2470,  -214,
     152, -2470,  1506, -2470,  1510, -2470, -2470, -2470, -2470,  1293,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470,  4198, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470,    -6, -2470,  1894,  1139,  1851, -2470,  1300,    58,
   -2470, -2470,  1653, -2470, -2470,    88,  7688, -2470,  1571,  1180,
   -2470, -2470,  6026,  1469,  1514,  1229, -2470, -2470, -2470, -2470,
   -2470,  1865,  1240,  -100, -2470,   237, -2470, -2470, -2470, -2470,
    1501,  2923, -2470, -2470, -2470,  1806, -2470, -2470,   -43,  1909,
   -2470, -2470,  1240,  1909,  1582, -2470,  1368,  1583, -2470, -2470,
    1152,  1297, -2470, -2470,  1466, -2470,  1995,   948,    61, -2470,
   -2470, -2470,  1462, -2470,   453,  5853, -2470, -2470,    16, -2470,
   -2470,  1240, -2470,  2003, -2470,  1854, -2470, -2470,  6026, -2470,
    1708, -2470, -2470,  1300, -2470, -2470, -2470, -2470, -2470,  2003,
    1822, -2470, -2470,   237, -2470,  1591,  1656,  1685, -2470, -2470,
   -2470,  1689,  1598, -2470,  1599, -2470, -2470,  1978, -2470,  1228,
   -2470, -2470,  1601, -2470, -2470, -2470,  2042,  1602, -2470, -2470,
    1708, -2470, -2470, -2470,   595, -2470, -2470, -2470,  1793,   527,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1361, -2470,  1615,
   -2470,   505, -2470,  1662, -2470, -2470, -2470, -2470,  1817,   -71,
   -2470,  1836,    73,    73, -2470,  1297,   649, -2470,  -132, -2470,
   -2470, -2470,  1726, -2470,  2007,   111,  1462, -2470,  1562,  1618,
   -2470, -2470,   556, -2470,  1462,   978,  6882, -2470, -2470, -2470,
     799,  7134, -2470,   978, -2470, -2470, -2470,  1559,  1563, -2470,
    1300,   978,  1843,  1651,  1782, -2470, -2470,  1808, -2470, -2470,
   -2470, -2470,   215,  1170,  7688, -2470, -2470, -2470,   387, -2470,
    1240,   218,   883,  1628,   268,  1631, -2470,   280, -2470, -2470,
     364,  1632,  1634,  1636,   311, -2470,  1368, -2470,  1638, -2470,
     337,  1640,  1485,   817, -2470,   -66,   -85,  1180, -2470,  1212,
    1642,   367, -2470,  1643,  1620,  -204,  -204, -2470, -2470, -2470,
    1180, -2470,  1647,  -100, -2470,  1355, -2470, -2470,  1725, -2470,
    1736, -2470,   843,  1462, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470,  1809,  1880, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
     132, -2470, -2470,  2371, -2470, -2470,  1704, -2470, -2470, -2470,
   -2470,  1903,   817,  1908,    38, -2470, -2470, -2470, -2470,  2099,
   -2470,  1663,   150, -2470, -2470,   152, -2470, -2470, -2470, -2470,
    1802, -2470, -2470, -2470,  1992,  1983,  1293, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470,  1757,  1293, -2470,  1670, -2470,  2077,
   -2470, -2470, -2470,  1349, -2470,  1300,  1575, -2470, -2470, -2470,
    2002,   138,   231,    -1,  1180,  1180,   817,  1924,  1229,   287,
     603, -2470,  1989, -2470, -2470, -2470,  2125, -2470,  1935, -2470,
   -2470, -2470, -2470,  1806, -2470, -2470, -2470, -2470,  1240,   557,
     -17,   -29, -2470,  1621, -2470,  1622,  1300,  1823,  1004, -2470,
     387, -2470, -2470, -2470,  5853,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,   948, -2470,   542,   -17,   -65, -2470,  1705,
    1705,   359,  5746,  1240,   817,  1934,  1677, -2470,  1683,  2134,
    1240,  -161,   -43,  2138,    13, -2470,  1682,  1746,  1754,  1639,
     693,  1240, -2470, -2470, -2470,   693,  2063,  1462,  1262,  1262,
    1462,    14,  1877,  1462,  2132, -2470,  1844, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470,    73,   736, -2470,
   -2470,  1709, -2470,  1963, -2470,    24, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470,   813, -2470,    91, -2470,  1361, -2470,
    1824, -2470, -2470,  1817, -2470,    73, -2470, -2470, -2470, -2470,
   -2470,    60,  1644, -2470,    96, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470,   129, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470,  2110, -2470, -2470, -2470, -2470, -2470,  1338, -2470,  1351,
   -2470, -2470, -2470, -2470,  1855,  1855, -2470, -2470,  1855, -2470,
    1462, -2470, -2470, -2470, -2470,  1462, -2470, -2470, -2470, -2470,
   -2470,   -18, -2470, -2470,  2107,  1744, -2470, -2470,   -20, -2470,
    1462, -2470,  2158, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470,   978, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
    7688,  7280,  1170, -2470, -2470, -2470,  1456,  7406,  1369,  7562,
    1369, -2470,  1240,  1369,  1369,  1369,  8043, -2470,   -94,  1369,
     -41, -2470, -2470, -2470,  1864,  1747,   -57,  1962,   817,  7664,
    1369,  1369,   201, -2470, -2470, -2470, -2470, -2470,   -59, -2470,
   -2470, -2470,   503, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1462, -2470,   -74,
   -2470, -2470,  1326,  1462, -2470, -2470, -2470, -2470, -2470,   -13,
    1462, -2470, -2470,  1180, -2470,  1180,  3613, -2470,   814,    22,
     152, -2470, -2470, -2470,  2099,  1240, -2470, -2470, -2470, -2470,
    1659,  1768,   160,  1661,   201,  1300, -2470, -2470,  2121, -2470,
    1029, -2470, -2470,  1575, -2470,   777, -2470,  1764, -2470, -2470,
    1462, -2470, -2470,  1936,  1856, -2470, -2470,  1180, -2470,  1180,
     603,  1853,  1853,  1862, -2470, -2470, -2470, -2470,  1081, -2470,
   -2470,  1240,  5853,  1419, -2470, -2470, -2470, -2470,  1883,  2049,
   -2470, -2470,  1915, -2470, -2470, -2470, -2470,  1622, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470,   -33, -2470,  1240, -2470, -2470, -2470,  1317, -2470, -2470,
   -2470,  7688, -2470,  5853,  5853,  -126,  1847, -2470, -2470, -2470,
    1456, -2470,  1180, -2470,   201, -2470,  1867, -2470,  1300, -2470,
    2070,  1738, -2470,   941, -2470,   588, -2470,    13, -2470,  1728,
    1785, -2470,   130, -2470,  1639, -2470,  1982,  1735,  6845,   800,
    1987, -2470,  1708,  1676,  1462,  2132,  1679,  -124,   455,  1708,
    1687, -2470,  1462, -2470, -2470, -2470,   133,  1524, -2470, -2470,
   -2470,  2181, -2470,  2063,  1229, -2470, -2470, -2470, -2470, -2470,
     813, -2470,  1942, -2470, -2470,  1970, -2470,  1552,  1210,  1552,
    1743, -2470, -2470, -2470, -2470, -2470,   236, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470,   556,   556,   556,   556,   556,
   -2470,  1462,  1462,   486,   486,   556, -2470,   496, -2470,   883,
   -2470,  1076,  -116, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470,  1990, -2470, -2470, -2470, -2470,
   -2470, -2470,  1998, -2470, -2470,  1115, -2470, -2470, -2470, -2470,
   -2470,   -31,   235, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470,  2813,   556, -2470, -2470,  1485, -2470, -2470, -2470,
   -2470,   540,   556,   486,   486,   556,   817,  1838,   817,  1839,
   -2470, -2470,  5853, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470,  1768, -2470,  2109, -2470,  1293, -2470,  1029,  1029,
     201,  1748,  1748, -2470,  2206,  2182, -2470, -2470, -2470, -2470,
     -76,  1240, -2470, -2470, -2470,   817, -2470, -2470, -2470, -2470,
   -2470, -2470,  1830, -2470,  2171,  1955,  1986,   546, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470,   883, -2470, -2470, -2470, -2470, -2470, -2470,
    1926,  1759,  1462,  -116,   817,  1729, -2470,  2134, -2470,  2008,
    2133,  2008,  -126, -2470, -2470, -2470, -2470,  1939,  2072, -2470,
   -2470, -2470,  1393, -2470,    13, -2470,  1779,    85, -2470, -2470,
    1240, -2470,   717, -2470, -2470,  -218,   611,   707,   741,   790,
    1731, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1845, -2470,
      54, -2470, -2470, -2470, -2470,  1240,  2005, -2470, -2470, -2470,
     614, -2470, -2470, -2470,  1462, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470,  1184,   517, -2470,  1727, -2470,    74, -2470,  1790,
   -2470,  2056, -2470, -2470, -2470,  1679, -2470, -2470, -2470, -2470,
   -2470, -2470,  1993,    67,  2008,   620,  1462, -2470, -2470,  1462,
   -2470,  1877,  1501,   757, -2470,  1841,  1462,  2193,    52,   513,
     966,  1514, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470,  1819, -2470,  1988, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470,  2216,  1462,  1229,  1229,   813, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470,   -42, -2470, -2470, -2470, -2470,
   -2470,   507,   556, -2470,  1438, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
    1958,   -28,  1485, -2470, -2470, -2470, -2470, -2470,  1240, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1180, -2470,
    1180, -2470, -2470, -2470,  2210,  2149, -2470, -2470,  1029, -2470,
    5853,  5853, -2470, -2470,  1916,  1229,   536, -2470,  1240, -2470,
   -2470,  5853, -2470,  1462,  1117,  1996,  1997, -2470,  1999, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1240, -2470,
   -2470, -2470, -2470,  1800, -2470, -2470,  1240,  2008, -2470,  1240,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470,    85, -2470,  1811, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470,  1742, -2470, -2470,  2215,  1810, -2470, -2470, -2470, -2470,
   -2470,  2578,  2244,  1866,  1866, -2470,  1485,  1625,  1625, -2470,
   -2470,  1708,    90,  1240, -2470, -2470, -2470, -2470,  1708, -2470,
    1852, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,   524,
     524,  1462,  1936, -2470, -2470,   118, -2470,   956,  1462,  1462,
    1462,  1462, -2470,  2042, -2470,   287,  1462,  1877, -2470,  1863,
    1676,  1229, -2470,  1943,  2261, -2470,  2172, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1240,
   -2470,  -116,  -116,  5853, -2470, -2470, -2470, -2470,  1462,  1229,
    1229,  1944, -2470, -2470,  1791,  1240, -2470, -2470,  1883,  2049,
   -2470, -2470, -2470, -2470, -2470,   734, -2470, -2470,  1240, -2470,
    1927,   699,   708, -2470,    85, -2470,  2008,  2088,  1708,  1837,
   -2470,  2037, -2470,  2193, -2470, -2470,  1625,  1835, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470,  1240, -2470,    51,  1648, -2470,
     621, -2470, -2470, -2470, -2470,   545,  1462, -2470, -2470,  1258,
   -2470, -2470,   455,  1870,  1240,  1240, -2470, -2470,  1240,  1462,
   -2470, -2470, -2470,  1708, -2470,   813,  1840, -2470, -2470, -2470,
   -2470,  -100,  1229,  1462, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470,  1451, -2470, -2470, -2470, -2470,
   -2470,  1953,  2194, -2470,  1242, -2470,  6364, -2470, -2470,   699,
    1846,  1893, -2470,  1842, -2470,  1788,  1708,  1810, -2470, -2470,
    2196, -2470, -2470, -2470, -2470, -2470,   455,   455, -2470, -2470,
   -2470, -2470,  2123, -2470, -2470,  1790,  1708, -2470, -2470, -2470,
   -2470,  1240, -2470, -2470,   549,   549,  2308, -2470, -2470, -2470,
   -2470, -2470,   549,   549,   553, -2470, -2470, -2470,   716, -2470,
   -2470,   786, -2470, -2470, -2470, -2470,  -100, -2470,  1940,  1888,
     248,  1802, -2470,  1857, -2470,  1858, -2470,  1859,  1462, -2470,
   -2470,  2092,  1802, -2470, -2470, -2470,  2290,  1648, -2470,    -7,
   -2470, -2470, -2470, -2470,  1601, -2470, -2470, -2470, -2470, -2470,
    1462,  1240,  1807, -2470,  1807, -2470, -2470,  1240, -2470,   818,
   -2470, -2470, -2470,    81,   759, -2470, -2470, -2470, -2470,    85,
   -2470, -2470,  1240,  2102,   231,   455,  2212,  1885, -2470, -2470,
    1240,  1240,   -77, -2470, -2470, -2470, -2470, -2470,  1984,  1003,
      81, -2470, -2470,  1868,   634,  7234, -2470,  2102, -2470,  2003,
   -2470,  1936, -2470,  1802, -2470,  1820, -2470,  1240,  2023, -2470,
   -2470,  1802, -2470, -2470,  2027,  1240, -2470, -2470,  1462,  1462,
    2132,  1364, -2470, -2470, -2470, -2470,  2135,  2162, -2470,  1462,
   -2470,  -111, -2470,  1326,  1462,  2923, -2470, -2470, -2470, -2470,
    1855, -2470,  1708, -2470,  2286, -2470, -2470, -2470,  1240, -2470,
   -2470,  1240, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470,  2137,  1855, -2470,  1826,  1462,  1240,    72,   904,   101,
   -2470, -2470,   507, -2470, -2470,  1462,  2132,  2086,  1831, -2470,
   -2470, -2470,  1240,   556, -2470, -2470, -2470, -2470,   556, -2470,
    1462,  1837,  1462, -2470, -2470, -2470,  1462, -2470,  1826, -2470,
    1240, -2470,   855, -2470, -2470, -2470,  1347, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470,  1229, -2470, -2470, -2470, -2470,
    1455,   -49, -2470,  1240, -2470, -2470, -2470,   774, -2470,   507,
     774, -2470,  1240, -2470, -2470,  1109, -2470, -2470,  2086, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,   556, -2470,
   -2470, -2470,   556,   913,  1462,  1462,   159, -2470, -2470, -2470,
   -2470, -2470, -2470,  1652, -2470, -2470, -2470, -2470, -2470,  1462,
    2086,  2086, -2470,  2139,  1462,  1462, -2470,  2842,  2086, -2470,
   -2470, -2470,  2086,  2086,  2124,  1370,  2132,  2141,  1708,  1848,
    1462,  1485, -2470,  1462,  1462,  1240, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1133,
   -2470,   519, -2470, -2470, -2470,  1370,  2132, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470,   130, -2470,  1462,  1810, -2470,  8029,
    8029,   727,  2232,  2156, -2470,  1708,  1133, -2470, -2470,  1708,
     519, -2470, -2470,   130, -2470, -2470,  1133,  1837, -2470,  1456,
    8005, -2470, -2470,  1005,  1203, -2470, -2470,  1276, -2470, -2470,
   -2470, -2470,   149,   149, -2470, -2470, -2470, -2470, -2470,  8029,
   -2470, -2470, -2470, -2470, -2470, -2470,  2196, -2470,  1802, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470,  2038, -2470,  2038, -2470,
    2310,  1925,   154,  2033, -2470, -2470,  8029,  1708, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470
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
     181,   183,   184,    64,    58,    99,     0,     0,     0,  1919,
    1873,  1873,  1873,     0,     0,  1873,  1846,   118,    84,   101,
       0,   104,   106,   107,   108,   154,   110,   109,   111,   112,
     113,   114,   115,   116,   117,     0,     0,    25,    18,    19,
     704,   704,     0,     0,  1759,  1760,  1761,  1762,  1763,  1764,
    1765,  1766,  1767,  1768,  1769,  1770,  1771,  1772,  1808,  1809,
    1810,  1811,  1812,  1813,  1814,  1815,  1816,  1817,  1818,  1819,
    1820,  1821,  1822,  1823,  1824,  1825,  1826,  1827,  1773,  1774,
    1775,  1776,  1777,  1778,  1779,  1780,  1781,  1782,  1783,  1784,
    1785,  1786,  1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,
    1795,  1796,  1797,  1798,  1799,  1800,  1801,  1802,  1803,  1758,
    1804,  1805,  1806,  1807,   792,     0,     0,     0,     0,   892,
       0,     0,     0,     0,     0,     0,     0,  1501,  1047,     0,
       0,  1938,   915,   914,     0,  1067,  1501,     0,     0,     0,
       0,     0,     0,   791,     0,  1178,     0,     0,     0,     0,
       0,     0,     0,     0,  1324,  1327,  1314,  1325,  1326,  1316,
       0,     0,  1351,  1349,     0,   739,     0,     0,     0,     0,
       0,   525,   297,  1725,     0,  1569,   298,     0,  1741,   270,
     187,  1845,     0,     0,     0,  1873,  1981,    82,    63,  1844,
      68,    70,    71,    72,    73,  1844,     0,  1873,    57,    60,
    1591,  1590,   129,  1873,  1873,  1920,  1873,  1874,     0,     0,
       0,  1873,  1873,     0,  1847,     0,  1873,     0,    48,     0,
     102,   105,     0,   153,    34,    28,  1873,  1843,   704,   701,
     707,     0,   704,   716,   717,   691,   816,  1661,   864,   795,
     815,  1651,  1655,  1898,     0,  1704,     0,  1699,  1705,     0,
       0,  1711,  1684,     0,  1556,  1558,  1680,     0,     0,     0,
    1702,  1685,  1611,     0,  1560,  1683,  1703,  1681,  1706,  1707,
    1686,     0,  1701,  1711,  1700,  1682,   873,  1605,   871,  1600,
    1602,  1603,  1676,  1678,  1604,  1708,     0,     0,     0,     0,
       0,     0,   876,     0,  1545,  1548,  1550,  1553,  1620,  1555,
    1730,  1618,  1619,  1580,   882,   883,     0,  1576,  1578,  1577,
     895,   893,   894,   928,     0,  1633,   935,   931,   932,   934,
    1632,   937,   940,  1898,   948,     0,  1562,  1744,  1595,  1656,
    1660,  1596,     0,   958,  1912,  1680,   974,  1005,  1442,  1598,
     969,   971,   968,     0,  1602,  1014,     0,   898,  1017,  1026,
    1025,  1043,     0,  1022,  1024,  1500,     0,  1049,  1053,  1051,
    1054,  1052,  1046,  1057,  1058,  1593,  1060,  1061,  1939,  1063,
    1574,  1055,  1934,  1499,  1076,  1078,  1570,  1098,  1099,  1102,
       0,  1104,  1105,  1106,  1141,  1280,  1648,  1649,     0,  1143,
       0,  1150,     0,  1159,  1156,  1158,  1157,  1153,  1160,  1180,
    1580,  1948,  1167,  1178,  1169,     0,  1176,     0,  1634,  1577,
    1636,     0,  1206,  1736,  1210,  1416,  1565,  1216,  1912,  1224,
    1416,     0,  1238,  1231,  1566,     0,     0,  1573,  1241,  1242,
    1243,  1244,  1245,  1246,  1268,  1247,  1271,  1248,     0,  1571,
       0,     0,  1647,  1660,  1277,  1312,  1299,  1317,  1340,     0,
    1331,  1334,     0,  1347,     0,  1353,  1354,   727,   733,   722,
     723,   724,   726,     0,  1357,     0,  1360,  1914,  1379,  1365,
    1427,  1416,     0,     0,   528,     0,     0,     0,   367,     0,
       0,   371,   372,   370,     0,   300,   303,   185,     0,  1742,
       0,   282,   278,   179,     0,   273,   275,   276,  1980,  1873,
       0,     0,    67,    69,    65,    83,  1844,  1873,     0,     0,
       0,  1873,     0,     0,     0,   175,  1583,   173,   178,     0,
       0,   177,  1592,   156,   157,  1875,   160,  1666,  1250,  1249,
     119,   123,   126,  1902,  1873,     0,    85,   103,   155,     0,
       0,   702,  1873,     0,   713,   705,   706,   718,  1959,  1960,
       0,   865,   794,   817,     0,     0,  1653,  1654,  1899,     0,
    1677,     0,     0,     0,     0,  1697,  1606,  1607,  1608,     0,
       0,     0,     0,     0,     0,     0,     0,  1698,   874,   867,
       0,     0,  1601,     0,     0,  1687,     0,     0,  1621,  1622,
    1623,  1552,  1617,     0,  1551,  1732,     0,     0,     0,     0,
       0,  1731,   879,   884,   886,     0,   929,   889,  1635,   897,
     890,   896,   933,   940,  1971,  1972,   938,     0,   941,     0,
     949,   946,  1956,  1955,  1563,     0,  1746,  1564,  1658,  1659,
     955,   956,   959,   953,  1913,  1487,  1006,   961,   736,   736,
     966,  1448,  1445,   970,   967,  1599,  1947,  1442,  1442,  1442,
    1442,  1015,  1008,     0,     0,   899,  1018,  1044,  1020,  1501,
    1501,  1021,  1028,  1029,   736,  1525,  1526,  1527,  1521,  1938,
    1513,  1533,  1536,  1535,  1537,  1529,  1520,  1519,  1524,  1523,
    1522,  1528,  1508,  1512,  1530,  1532,  1534,  1510,  1511,  1507,
    1509,  1502,  1503,  1514,  1515,  1516,  1517,  1518,  1506,  1050,
    1048,  1594,  1065,  1935,   736,  1080,     0,  1100,     0,  1127,
    1111,  1103,  1108,  1109,  1110,  1284,     0,  1650,     0,     0,
    1151,  1147,     0,  1160,  1947,     0,  1168,  1174,  1175,   736,
    1171,  1501,     0,     0,  1179,     0,  1207,  1191,  1737,  1738,
    1912,     0,  1211,  1217,  1214,  1193,  1225,  1219,  1221,  1233,
    1239,  1228,     0,  1233,     0,  1628,  1629,     0,  1269,  1272,
       0,     0,  1572,  1252,     0,  1251,     0,     0,  1658,  1313,
    1295,  1301,  1873,  1302,  1297,     0,  1315,  1319,     0,  1341,
    1329,     0,  1332,  1842,  1333,     0,  1348,  1343,     0,  1355,
     734,   732,   725,     0,  1915,  1916,  1361,  1380,  1363,  1842,
       0,  1428,  1414,  1418,   363,     0,     0,   531,   380,   412,
     415,     0,     0,   368,     0,   378,   373,   379,   376,  1873,
    1743,   188,  1854,   279,   280,   281,  1834,     0,   271,   274,
       0,  1979,    76,    66,     0,  1584,    75,    59,     0,     0,
    1673,  1669,  1674,  1672,  1670,  1675,  1671,   164,   165,   167,
     176,   171,   169,     0,   158,  1877,  1876,   161,     0,  1902,
    1905,  1904,     0,     0,   120,   124,    87,    26,    37,    40,
      44,    43,  1910,    38,    39,     0,  1873,   714,     0,     0,
     692,  1662,  1839,   822,  1873,  1429,   818,   819,   821,   823,
       0,     0,   811,  1429,  1954,  1953,   808,   800,   802,   803,
       0,  1429,     0,     0,     0,   825,   806,     0,   814,   797,
     813,   798,  1540,  1538,     0,  1652,  1625,  1624,     0,  1610,
       0,  1540,  1538,     0,  1540,     0,  1713,  1540,  1557,  1559,
    1540,     0,     0,     0,  1540,  1614,  1615,  1616,     0,  1561,
    1540,     0,  1898,  1451,   872,  1660,  1596,     0,  1679,     0,
       0,  1540,  1554,  1734,   879,  1544,  1543,  1547,  1546,  1549,
       0,   877,     0,     0,  1579,   898,   939,   944,     0,  1859,
       0,  1597,  1451,  1873,  1745,  1657,   957,   736,   736,   954,
    1488,  1494,  1491,  1447,   737,  1450,  1443,  1449,  1444,  1446,
       0,   980,   979,   972,   975,   977,     0,   964,   965,   962,
     963,     0,  1451,     0,   905,  1023,  1038,  1040,  1039,  1033,
    1035,  1041,  1501,  1030,  1027,  1501,  1031,  1531,  1504,  1505,
    1900,  1064,  1575,   736,  1072,  1073,  1938,  1088,  1089,  1091,
    1093,  1094,  1090,  1092,  1083,  1938,  1079,     0,  1128,     0,
    1130,  1129,  1131,  1113,  1123,     0,     0,  1107,  1978,  1901,
       0,  1286,     0,  1864,     0,  1144,  1451,     0,     0,     0,
    1162,  1567,  1172,  1185,  1181,  1186,  1182,  1187,     0,  1177,
    1423,  1422,  1184,  1193,  1417,  1644,  1645,  1646,     0,     0,
    1487,     0,   736,     0,  1232,     0,     0,     0,     0,  1270,
       0,  1274,  1273,  1266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1254,  1255,  1739,  1487,     0,  1318,  1930,
    1930,  1338,     0,     0,  1451,     0,     0,   735,     0,  1726,
       0,  1338,  1221,  1828,   365,   526,     0,     0,   626,     0,
     438,     0,   369,   375,   419,   381,  1848,  1873,     0,     0,
    1873,  1848,  1891,  1873,  1832,   299,     0,   304,   307,   308,
     309,   310,   311,   312,   313,   314,   315,     0,     0,   190,
    1855,  1932,  1835,  1858,   272,     0,    79,    81,    80,    77,
      78,    61,   135,   134,   149,   145,   150,   131,   148,   146,
     132,   133,   147,   130,   136,   137,   139,   166,     0,   170,
       0,   174,  1667,   159,   162,     0,  1903,   127,   121,   122,
     125,     0,     0,    86,     0,    90,    42,  1911,    36,    41,
     708,   709,   712,     0,   703,   719,   721,  1639,   829,  1637,
    1638,     0,  1435,  1436,  1440,  1441,   796,  1437,   736,  1432,
     736,   820,  1952,  1951,  1893,  1893,   827,   828,  1893,   834,
    1873,   836,   837,   838,   863,  1873,   839,   840,   841,   842,
     843,     0,   844,   845,   847,     0,   848,   849,     0,   850,
    1873,   835,  1830,   853,   862,   856,   824,   855,   812,   799,
     801,  1429,   809,   804,   805,   826,   807,  1541,  1542,  1663,
       0,     0,     0,  1627,  1609,  1626,  1744,     0,  1708,     0,
    1708,  1712,     0,  1708,  1708,  1708,     0,  1691,     0,  1708,
       0,   736,   736,   868,  1457,  1454,  1658,  1659,  1451,     0,
    1708,  1708,     0,  1733,   878,   880,   887,   885,   909,   943,
     942,   947,     0,  1493,  1496,  1489,  1495,  1490,  1492,   739,
     986,   987,   984,   983,   985,   982,   976,  1873,   988,     0,
     991,   992,  1852,  1873,   995,   996,   978,   997,   998,     0,
    1873,  1000,   981,     0,  1009,     0,   900,   901,   707,     0,
    1501,  1501,  1037,   736,  1034,     0,  1071,   736,  1074,  1069,
       0,     0,  1095,     0,     0,     0,  1124,  1126,     0,  1119,
    1133,  1120,  1121,  1112,  1115,  1133,  1977,     0,  1950,  1278,
    1873,   504,   505,  1878,     0,  1865,  1285,  1145,  1148,     0,
    1162,  1906,  1906,     0,  1161,  1165,  1154,  1568,     0,  1173,
    1170,     0,     0,  1195,  1194,   736,   736,  1215,  1476,     0,
    1220,  1222,     0,  1234,  1501,  1501,  1229,  1235,  1253,  1275,
    1265,  1267,  1257,  1258,  1259,  1263,  1260,  1264,  1261,  1262,
    1256,  1740,  1311,     0,  1308,  1309,  1303,     0,  1296,  1976,
    1975,     0,  1931,  1322,  1322,  1460,     0,  1336,  1335,  1337,
    1744,  1344,     0,   728,     0,  1727,  1366,  1367,     0,  1370,
    1373,  1377,  1371,  1424,  1829,     0,   364,   365,   529,     0,
       0,   290,  1875,   413,     0,   439,     0,   410,  1873,  1836,
       0,  1849,     0,     0,  1873,  1832,     0,     0,     0,     0,
       0,  1892,  1873,   358,  1833,   359,     0,     0,   360,   305,
     306,  1912,  1933,  1848,     0,  1967,  1968,    74,   138,   141,
       0,   168,     0,   163,   128,     0,    96,    33,     0,    33,
       0,    88,    91,   710,   711,   721,   739,   833,  1430,  1438,
    1434,  1431,  1433,  1439,  1894,     0,     0,     0,     0,     0,
     854,  1873,  1873,  1497,  1497,     0,  1831,     0,   810,  1539,
    1664,     0,  1451,  1722,  1695,  1724,  1696,  1720,  1692,  1693,
    1694,  1718,  1715,  1716,  1690,  1597,  1459,  1456,  1452,  1458,
    1453,  1455,  1657,   869,  1709,     0,  1688,  1689,  1735,  1630,
    1631,   918,  1871,  1748,  1749,  1750,  1751,  1752,  1753,  1754,
    1755,  1747,     0,     0,   989,   990,  1898,   674,   676,   993,
     994,     0,     0,  1497,  1497,     0,  1451,  1562,  1451,  1562,
     902,   903,     0,   907,   906,   908,  1036,  1042,  1032,  1066,
    1070,  1081,  1084,  1085,  1850,  1077,  1938,  1082,  1133,  1133,
       0,  1869,  1869,  1118,  1134,  1135,  1116,  1117,  1122,  1949,
    1288,     0,  1879,  1282,  1866,  1451,  1155,  1907,   267,   268,
     269,  1164,     0,  1188,     0,     0,  1202,     0,  1475,  1478,
    1469,  1477,  1470,  1223,   736,   736,  1236,  1310,  1300,  1304,
    1305,  1306,  1307,  1298,  1320,  1323,  1321,   736,   736,  1330,
    1466,  1463,  1873,  1451,  1451,   730,  1358,  1726,  1369,  1862,
    1375,  1862,  1460,   736,   736,  1415,  1426,  1484,  1481,  1425,
    1421,  1420,  1883,   527,   365,   532,     0,     0,   416,   440,
       0,   409,     0,   514,   444,  1921,  1921,  1921,  1921,  1921,
    1943,   445,   480,   482,   448,   449,   450,   451,   452,   453,
     476,   474,   475,   477,   478,   483,   481,   454,  1917,   479,
       0,   455,   441,   456,   457,     0,  1924,   459,   460,   458,
    1880,   462,   463,   461,  1873,   420,   421,   422,   423,   424,
     425,   442,   446,   447,   426,   427,   428,   429,   430,   431,
     432,   433,     0,     0,  1837,     0,   414,     0,   382,   327,
     236,   355,  1969,  1970,  1587,   336,  1585,  1962,  1961,   329,
    1589,  1588,  1889,  1846,  1862,     0,  1873,   333,   332,  1873,
     361,  1891,  1912,  1940,   252,     0,  1873,  1844,  1878,   254,
       0,  1947,   240,   189,   239,   191,   192,   193,   194,   195,
     196,     0,   197,     0,   198,   251,   199,   200,   201,   202,
     203,   204,  1840,  1873,     0,   277,     0,   140,   172,    92,
      93,    97,    94,    95,    89,   739,   830,   832,   831,   858,
     857,     0,     0,   860,     0,  1642,  1643,   859,   852,  1668,
     861,  1640,  1641,  1665,   870,  1710,   736,   736,   736,   891,
     925,   921,  1898,  1872,   912,   917,   916,   911,     0,  1002,
    1853,   675,   677,  1001,  1004,  1003,   999,  1011,     0,  1010,
       0,   904,  1086,  1851,     0,     0,  1114,  1125,  1133,  1870,
       0,     0,  1136,  1137,     0,     0,  1291,  1287,  1281,  1149,
    1163,     0,  1196,  1873,  1487,     0,     0,  1197,     0,  1201,
    1230,  1237,  1468,  1465,  1461,  1467,  1462,  1464,     0,  1346,
    1345,  1381,   729,     0,  1368,  1863,     0,  1862,  1372,     0,
    1364,  1483,  1486,  1479,  1485,  1480,  1482,  1884,  1885,  1419,
     530,   534,   627,   515,   517,   519,   411,   523,   524,  1922,
     473,   472,   465,   464,   471,   470,   469,   468,   467,   466,
    1944,     0,  1918,   511,   497,   491,   434,  1925,  1881,  1882,
     512,     0,   436,  1756,  1756,   418,  1898,     0,     0,   417,
     383,     0,   317,     0,   354,  1586,  1890,   338,     0,   320,
    1926,   347,   349,   353,   352,   348,   350,   346,   351,     0,
       0,  1873,  1878,  1941,  1942,   219,   255,  1912,  1873,  1873,
    1873,  1873,   264,  1834,   265,     0,  1873,  1891,  1841,     0,
       0,   283,   284,   287,   142,   143,     0,   846,   851,  1973,
    1974,  1498,   923,   927,   924,   919,   926,   920,   922,     0,
     910,  1451,  1451,     0,  1096,  1132,  1139,  1138,  1873,  1289,
       0,     0,  1279,  1283,     0,     0,  1192,  1205,  1476,  1473,
    1204,  1200,  1198,  1199,  1339,  1389,   731,  1374,     0,  1378,
     533,   629,   521,   518,     0,   513,  1862,   493,     0,  1936,
     443,     0,   435,  1844,   484,   485,     0,     0,   392,   388,
     391,   390,   389,   404,   400,   402,   403,   405,   401,   406,
     407,   408,   385,   396,   397,   398,   393,   394,   395,   387,
     384,   328,   319,   318,   316,   356,  1581,   337,  1846,  1927,
     325,   334,   331,   335,   330,     0,  1873,   221,   220,   217,
     254,   250,     0,     0,     0,     0,   263,   266,     0,  1873,
     253,   235,   285,     0,   286,     0,     0,   913,  1013,  1012,
    1087,     0,  1292,  1873,  1501,  1203,  1471,  1472,  1474,  1839,
    1412,  1411,  1390,  1382,  1383,  1830,  1384,  1385,  1386,  1387,
    1410,     0,     0,  1376,     0,   535,     0,   633,   628,   630,
       0,     0,   516,     0,   520,     0,     0,   491,   492,  1937,
     495,   437,  1757,   386,   399,  1582,     0,     0,   339,   340,
     341,   342,     0,   321,  1861,   327,     0,   229,   230,   228,
     227,     0,   213,   214,   224,   224,     0,   212,   210,   211,
     216,   215,   224,   224,     0,   256,   257,   258,   259,   262,
     237,     0,   288,   144,   720,  1290,     0,  1189,     0,  1928,
       0,  1900,   536,     0,   634,     0,   631,     0,  1873,   498,
     494,   499,  1900,   502,   345,   344,  1838,  1846,   326,  1728,
     225,   207,   226,   208,  1854,   209,   206,   222,   205,   223,
    1873,     0,   246,   245,   246,   242,  1293,     0,  1929,     0,
    1408,  1407,  1406,     0,     0,   636,   637,   632,  1946,     0,
     500,   502,     0,   506,   501,     0,   323,   232,  1729,   218,
       0,   260,     0,   244,   243,  1409,  1958,  1957,  1908,  1402,
    1396,  1397,  1399,     0,  1873,  1923,   522,   506,   496,  1842,
     489,  1878,   343,  1900,   322,     0,   231,   261,     0,   249,
    1909,  1900,  1405,  1400,  1403,     0,  1398,   540,  1873,  1873,
    1832,  1886,   565,   539,   543,   544,     0,  1856,   652,  1873,
     641,  1943,   642,  1852,  1873,     0,   655,   650,   645,   651,
    1893,   646,     0,   649,   657,   654,   647,   653,     0,   658,
     648,     0,   669,   663,   667,   666,   664,   668,   638,   670,
     665,     0,  1893,   490,     0,  1873,     0,     0,     0,     0,
    1404,  1401,     0,  1996,  1997,  1873,  1832,     0,   537,   541,
    1857,   545,     0,     0,   639,   640,   643,   644,     0,   672,
    1873,  1936,  1873,   673,   671,   689,  1873,   510,   507,   508,
       0,   324,     0,   151,   152,   234,     0,  1965,  1966,   247,
    1395,  1392,  1394,  1393,  1388,  1391,   542,  1887,  1888,   553,
     550,   377,   566,   546,   547,   662,   661,   682,   688,     0,
     685,   509,   503,   233,   248,   549,  1963,  1964,   552,   567,
     379,   548,   680,   678,   681,   679,   683,   684,     0,   656,
     686,   687,     0,     0,  1873,  1873,     0,   554,   555,   556,
     557,   558,   559,     0,   569,   659,   660,  1983,  1982,  1873,
       0,     0,  1985,     0,  1873,  1873,   551,  1923,     0,   564,
     560,  1984,     0,     0,  1867,  1895,  1832,     0,     0,     0,
    1873,  1898,   568,  1873,  1873,     0,   574,   576,   585,   577,
     579,   582,   570,   571,   572,   581,   583,   586,   573,     0,
     578,     0,   580,   584,   575,  1895,  1832,   561,   563,   562,
    1868,   624,  1896,  1897,  1875,   610,  1873,   491,  1501,     0,
       0,     0,     0,     0,   618,     0,   608,   614,   617,     0,
     611,   619,   622,  1875,   613,   609,     0,  1936,   606,  1744,
     602,  1612,  1987,     0,     0,  1989,  1991,     0,  1995,  1993,
     587,   591,   595,   595,   589,   593,   588,   594,   625,     0,
     616,   615,   621,   620,   612,   600,   495,   623,  1900,   601,
    1613,  1986,  1990,  1988,  1994,  1992,   598,   590,   598,   592,
       0,   487,     0,     0,   597,   596,     0,     0,   486,   605,
     603,   604,   599,   607,   488
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2470, -2470, -2470, -2470, -2470,  2355, -2470, -2470, -2470, -2470,
   -2470, -2470,  2307, -2470,  1666, -2470, -2470, -2470, -2470, -2470,
   -2470,  2311,  2309,   -69, -2470, -2470, -2470,  1299, -2470, -2470,
   -2470, -2470, -2470,  2315, -2470, -2470, -2470,  2318, -2470, -2470,
    1976,  -294, -2470, -2470, -2470, -2470, -2470,  2168, -2470, -2470,
   -2470, -2470,   969, -2470, -2470, -2470, -2470,  2155,   508, -2470,
   -2470, -2470, -2470,  1310, -2470, -2470, -2470, -2470, -2470,   992,
   -2470, -2470, -1644, -2470, -2470, -2470, -2470, -2470,  1654, -2470,
   -2470, -2470, -2470,  1331, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,  -756, -2470,
   -2470, -2470, -2470, -2470,   139, -2470, -2470, -2470, -2470, -2470,
    -112, -2470,   157, -2470, -2470, -2470,   -46, -2470, -2470, -2470,
   -2470,   151, -2470, -2470,  1694, -2470, -2470, -2470, -2470, -2470,
     155, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,   -36, -2470,
   -2470, -2470,   171, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -1279, -2470, -2470,  1720, -2470, -2159, -2262,  -661, -2470, -2470,
   -1315, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -1396,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,   702, -1778,
    -143,   204, -1054, -1010, -1742, -2470, -2470, -2470, -2269, -2470,
    -417, -2470, -2470,  -109, -2470,  -114,  -134, -2470,  -231, -1683,
   -2470, -1677, -2470, -1648, -2470, -2470,   245, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,  -392,
    -416, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -1344, -2470,  -366, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470,    19, -2470, -2470, -2470,  -158,  -153,  -248,  -247,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470,  2183,   928, -2470,   868, -2470, -2470, -2470, -2470, -1087,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470,  -331, -2470, -2470,
     -23, -2470,  2363, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
    1344, -2470,  -744, -2470, -2470,  -729, -2470,   981, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1275, -2470, -2470,
   -2470,  1929, -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1269,
   -2470, -2470,   879, -2470, -2470,  -619, -2470, -2470, -2470,   358,
   -2470,   360, -2470, -2470, -2470, -2470,  1928, -2470, -2470, -2470,
    1629, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1902, -2470, -2470,
   -2470,  1250, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1585, -2470, -2470,
    1584, -2470, -2470,  1235,   889, -2470, -2470, -2470, -2470, -2470,
    1891, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470,   622,  1547, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470,  1544, -2470, -2470,   874,
   -2470,  1215, -2470, -2470, -1527,   616,   618, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,  1869,
    1536,   864, -2470, -2470, -2470, -2470, -2470, -2470, -2174,  1871,
   -2470, -2470, -2470,   858, -2470, -2470, -2470,  1197, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470,  1150, -2470, -2470, -2470, -2470, -2470,
   -2470,  1518,   846, -2470, -2470, -2470, -2470, -2470,  -564, -2470,
   -2470, -2470, -2470,  1172, -2470, -2470, -2470,  1860, -2470,  1850,
   -2470, -2470, -2470,  2126, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470,   822, -2470, -2470, -2470, -2470, -2470,  1828,
   -2470, -2470,  1161, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470,   582, -2470,  1165, -2470, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,   -50,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470,   623,
   -2470,  1487, -2470, -2470,  -840, -2470,  1062, -2470, -2470,  1065,
   -2470,  1097, -2470,  1655, -2470,  1664, -1102, -2470,   989, -2470,
     991,   594, -2470,   608, -2470,   610, -2470, -2470, -2470, -1557,
     228, -1236, -2470, -2470,   601, -2470,   605, -1233,   837, -2470,
    1332, -2470,  1335,  -605,  -920,  -302,  -801, -2470, -2470,  1624,
   -1183,   866,   870,   871,   877,   733,   703,  -287,   936,   797,
   -2470,  1233,  -106,  -731,  -258,  1136,  1904, -1219,  -190,  -361,
   -2470,  -597, -2470,  -270, -1168,  1734, -1691,  -400,  1492, -2470,
     533, -1213,  -184,  1804,  -286,  -276, -2470,   552,   659, -2470,
    -726, -1549, -2470,  1241,  -573, -1444,  -318,  2016, -1355, -2470,
   -2470,   -39,  -320, -2470,  1158,  -282,  -433, -2470, -2470,  1079,
    -484,  -459,  -348,  1141, -1701,  1147,  -337,  -210,  -437,   148,
   -2470, -2470, -2470,   430,  2065, -2470, -2470,   965, -2470, -2470,
   -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -2470, -1464,
   -2470, -2470,   346, -2470, -2470,   158, -1663,   309, -2470, -1596,
   -2470,  -965, -1880, -1897, -1172, -2470, -2470,    62, -2470, -1326,
   -2470, -1702, -2470, -2470,   709, -2470,  -211, -1656, -1939, -2470,
   -2470, -2470, -2470, -1248, -1411,  -207,  -518, -1203,  1493,   942,
   -2470, -2470,  -513, -2470, -2470, -2470,    68, -2470, -2470, -2470,
    1246, -2470,   985, -2469,  -825, -2470, -2470, -2470,  -144,   847,
   -1664, -1155, -2470, -2470,  1047, -2470, -2470,   -84, -2470,  1224,
   -2470, -2470, -2470,    86, -2470, -1863,  -205, -2470, -2470, -2470,
   -2470, -2470, -2470
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    12,
      57,    58,    59,    61,    18,    13,    23,    35,   426,    24,
      34,    80,    84,   236,   739,  1072,  1073,  1074,    19,    20,
      32,    33,    51,    52,   204,   398,   709,    53,   203,   388,
     389,   390,   391,   392,   393,   394,  1369,   395,   418,  1066,
    1403,  1404,  1405,  1728,    75,   218,   219,   220,   221,   222,
     416,   730,  1399,   731,   732,   223,   711,  1383,  1384,  1385,
    2046,  2244,  1386,  2645,   224,   423,   225,   723,   724,   725,
    1393,   226,  1047,  1048,   227,   228,  1389,   229,   230,   231,
     232,   233,   234,    47,    48,    71,   379,   202,   380,  1359,
    1711,  2025,  2026,  2442,  2443,  2444,  2349,  2488,  2481,  2027,
    2430,  2028,  2546,  2029,  1991,  2030,  2031,  2032,  2033,  2495,
    2523,  2034,  2035,  2036,  2037,  2038,  2447,  2039,  2040,  2233,
    2041,  1604,   693,   694,   695,   696,  1026,   697,  1022,  2241,
    2242,  2364,    29,   196,    30,    44,    67,   197,   198,   686,
     199,  1019,  1347,  1348,  2334,  1349,  2544,  2425,  2202,  1350,
    1351,  2009,  2342,  1352,  1353,  2337,  2418,  2419,  2420,  2421,
    1354,  2217,  2218,  1355,  2204,  1356,  1357,  1707,   371,  1324,
     372,   373,   678,   679,  1334,   680,  1016,  1017,  1689,  2199,
    2322,  2323,  2324,  2325,  2326,   681,  1921,   682,  1329,   683,
    1330,  1986,  1688,  1965,  1966,  1967,  2302,  1684,  1685,  1969,
    1970,  1971,  1972,  1973,  1974,  2738,  2838,  1975,  2299,  2407,
    2473,  2297,  2511,  2513,  2514,  1593,  2540,  2638,  2639,  1976,
    1977,  1978,  1979,  1683,  2292,  2163,  2164,  2402,  1981,   674,
    1677,  1007,  1914,  1328,  2161,  2290,  2395,  2504,  2534,  2563,
    2564,  2621,  2663,  2565,  2659,  2675,  2697,  2698,  2699,  2700,
    2701,  2702,  2618,  2662,  2704,  2717,  2742,  2743,  2800,  2827,
    2834,  2744,  2745,  2819,  2840,  2746,  2747,  2748,  2749,  2750,
    2751,  2776,  2777,  2780,  2781,  2752,  2753,  2754,  1681,  2291,
    2398,  2399,  2400,  2506,  2535,  2598,  1809,  1810,  2686,  2687,
    2688,  2692,  2599,  2600,    41,   747,  1416,    42,    89,   241,
     240,   428,   429,   430,   744,  1078,   243,  1080,  1735,   365,
     659,   660,  1895,  2142,   661,   662,  1316,  1183,  1184,  1529,
     663,    65,   142,   143,   315,   438,   753,   439,  1085,  1086,
    1087,  1109,  1088,  1436,  1437,  1089,  1466,  1467,   752,   144,
     316,   476,   781,   779,   145,   317,   492,  1161,   146,   318,
     504,   505,  1163,   147,   319,   513,  1165,   514,   810,   856,
    1204,  1556,  1557,  1558,  1791,   334,  2087,  2079,  2257,  2080,
    2255,  2081,   807,   148,   320,   517,   518,   149,   321,   521,
     816,   150,   322,   524,   821,   151,   152,   153,   323,   533,
     830,   833,   154,   324,   537,   538,   539,   540,   846,   541,
    1193,  1194,  1195,  1534,  1552,   837,   155,   325,   545,   852,
     156,   326,   548,   157,   327,   551,   552,   553,   861,   862,
     863,  1214,   864,  1209,  1210,  1562,   858,   158,   328,   562,
     335,   159,   329,   563,   160,   330,   566,   161,   331,   569,
    1221,   162,   163,   336,  1225,  1569,   164,   337,   574,   905,
    1234,  1572,  1832,  1833,  1834,  1835,   165,   338,   577,   166,
     339,   579,   580,   911,   912,  1246,   913,   914,  1583,  1584,
    1243,  1244,  1245,  1577,  1843,  1844,  1845,   167,   340,   168,
     341,   589,   169,   342,   591,   921,   170,   344,   597,   598,
     925,  1606,   171,   345,   602,   929,  1610,   930,   603,   604,
     605,  1264,  1266,  1267,   172,   346,   612,  1279,  1866,  2124,
    2276,   937,   173,   174,   347,   614,   175,   176,   348,   617,
     944,   177,   349,   619,  1280,   947,   178,   179,   350,   622,
     953,  1283,  1626,  1627,   951,   180,   351,   628,   733,   966,
     629,   630,  1303,  1304,   631,   632,   633,   634,   635,   636,
     637,   181,   352,   584,  1850,   915,  2118,  1251,  1589,  2116,
    2272,   182,   353,   645,  1306,   974,  1643,  1644,  1645,   970,
     183,   647,   976,  1884,   359,   184,   360,   648,   649,   650,
     984,  1658,  1655,   980,   185,   361,   653,   987,   186,   363,
     187,   364,   655,   188,   366,   664,   189,   367,   666,   190,
     368,   668,  1000,  1666,  1667,  1321,  1669,  1900,  2148,  1902,
     998,  2143,  2285,  2383,  2384,  2385,  2654,  2386,  2530,  2531,
    2555,  2387,  2502,  2388,  2389,  2390,   191,   369,   670,   942,
    1322,  1272,  1905,  1002,  1426,  1741,  1427,  1428,  1738,  1429,
    1430,   840,  1188,   841,  1186,   842,  1503,  1780,  1504,  1778,
    1505,  1889,  2136,  1890,  2134,  1891,  1617,  2277,  2377,  1618,
    1870,  1871,  1906,  2155,  1907,  2153,  1908,  1179,  1180,  1527,
    1181,  1525,  1182,  2063,   572,   573,   555,   556,   891,   892,
     893,   894,   895,   896,   897,  1112,  1480,  1122,   494,   495,
     496,   497,   477,   525,   824,   615,   623,  1260,  1261,   578,
     638,   639,   902,   606,   507,   508,  2335,  2001,  1036,  1995,
    1996,  2002,   402,   726,   564,   527,   844,   478,   479,  2790,
    1134,   499,  1118,  1484,  1585,  1788,   519,   607,  1418,  2070,
    2064,  1274,  1419,   585,   642,   480,   441,   528,   529,   442,
     756,   757,  1420,  1394,  2778,  1049,   481,   482,   483,   484,
     485,   486,   487,   785,   765,  1141,  1138,  1131,  1123,  1125,
     684,  1668,  2517,   802,  1154,  1513,   940,  1647,   690,   827,
    1174,  1801,  2304,   314,  1675,  1757,  1705,  1363,  1987,  1090,
    2239,   431,   396,   415,  1692,  2104,  1811,  1361,  2622,  1170,
    2426,  2146,  1596,  2761,  2110,  2088,   408,  1058,  1853,  2190,
    2159,  2617,  2207,  1702,  1745,  2764,   759,  1252,  1062,  1858,
    2551,  1408,  2042,   996,  2183,   406,  2171,  1983,  2340,  2499,
    1653,  1713,   904,  2410,   570,  2225,  2181,  2403,   611,  1590,
    1438,  1111,   825,  2528,   750,  1999,  2678,  2649,  1717,  1696,
     818,  2251,  1651,  1253,   397,  2709,  2715,  2803,  2804,  2805,
    2806,  2807,  2567
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     409,   410,   582,   656,   413,   819,   543,   760,   715,   376,
     718,  1265,   237,   721,  1009,  1010,  1011,  1565,  1312,    64,
     766,   835,  1762,   403,  1746,   554,  1917,  1747,   975,   411,
     493,   641,  1993,   440,  1319,   500,  1918,  1714,   520,  1600,
    1980,   962,   544,  1619,  1217,  1676,   828,  1620,   506,  1143,
    1140,   575,   954,   565,   400,   788,  2072,   581,  1848,  1211,
    1150,   565,  1872,   608,   526,   640,   374,  1238,   734,  1725,
    1521,   829,   859,  1648,   400,   565,  2047, -1649,  1055,  2230,
    2231,  2642,  1715,   444,   665,   621,   669,   427,    87,  2246,
    2529, -1913, -1650,  1444,   444,   703,   427,  1730,   523,  2416,
    1554,  1691,  1191,   917,  1753,   945,  2209,   501,  1719,  1220,
    1823,  1813,   531,  1116, -1947, -1900,  1239,  1192,  1248,   531,
     427, -1676,  1646,  1202,  2196,   414, -1842,   531,   869,  1015,
    1838,   522,  2396,   534,  2464,  1082,  2076,  2228,  2471,  2076,
   -1655,   531,  -366,  1410,  1027,  2624,   407,   332,  2332, -1653,
    1064,  1772,  1055,  2114,  1598,   433,   613,  1110,   618,   968,
     503,  1733,  2668,   646,   761,  1060,  2229,   436,  1059,  1699,
   -1838,  1206, -1838,  1206,   701, -1947,  1887,   667,   675,  1309,
    2184,   691,  1804,  1649,   829,   853,   708,  1501,    49,  2548,
    1997,  1256,   712,   713,    21,   714,  1893,  2455,  2169,  2149,
     719,   720,  1587,   793, -1900,   735,   742,   792,   792,   792,
     444,   498,  1661,  1248,  2712,   740,   907,  1068,  1177,   938,
    1896,  1594,  1411, -1947,   990,   532,  1167,   377,   795,  1530,
    1531,  1070,   608,  -695,   506,   520,  -693,  1621,  1240,  1559,
    2396,  2082, -1947,   767,  2347,  1270,   931,   625, -1947,  2713,
     407,  1168,   549,  1468,   503,   710,   523,  1314,  1591,   798,
       3,  1472,  1622,   550,  1726,   932,  2707,    17,   799,  2077,
     939, -1934,  2170,  2650,  1271,   743,  2708,   375,   789,   501,
     501,   501,  2496,  2346,  1178,   991,  1477,  2625,   901,  1477,
     452,  2348,  1056,  1852,   989,   427,  1601,  1115,  1401,   901,
     692,   452,  2210,  1241,    50,  1998,  1502,  1117,   452,  1310,
    2006,  2106,  2107,  1050,   727,   531,  2549,  1069,  2816,  1595,
    1912,   608,  2197,  2198,  1805,   333,  1119,   908,  2826,  1736,
    2651,   813,   927,  2839,   456,  1237,   626,  1071,  2652,  1477,
      22,   503,   831,   955,   461,   456,  1148,  1592,  1888,   960,
    2007,  1477,   456,  1032,   531,   461,  1650,   601,   437,   565,
     434, -1838,   461,  1061,   901,   531,  1056,   627,   854,  1175,
     985,   727,   437,  -695,   -35,   783,  -693,  -695,   817,  2500,
    -693,  1084,  1477,   498,   498,   498,  1171,  1773,  1824,   727,
    2056,  2057,  2058,  2059,  2060,   378,  2108,  1289,  1913,  2679,
    2068,  1570,  2245,  1249, -1842,  2180,  1783,   627,  1477,   755,
    1573,  1211,   703, -1842,  1211,   956,  1508,   452,  1114,   437,
    1318,   691,   657,  2412,  2653,   531,  -366,  1273, -1947,   465,
     531,   906,   884,  -366,  2115,  1477,  -695, -1842,  1477,  -693,
     465,  2423, -1838,  2078,  1402,  2288,  2078,   465,  2089,  1191,
    -695,  -695,  2333,  -693,  -693,  -700,   675,  2093,  1877,  2661,
    2096,   456,   676, -1913,  1192,   502,   452,  2083,  1113,   677,
    1008,   461,  1563,   792,  1532,   601,  1754,   658,   437,  1464,
     792,   792,   792,  1814,  1130,  1130,  1130,   583,  1030,   792,
     792,   792,  1135,   610,  1135,  2045,  1034,  1149,  2787,  2643,
    1039,   467,   792,   978,  1135,   792,  1021,  1070,  1185,  1175,
     456,  1250,   467,   437,   792,   792,   792,   792,   792,   467,
     461,   755,   526,  1063,   601,   705,  2208,  1471, -1873,  2417,
    2084,  1075,  -366,  1216,  1825,  -700,  1114,  1793,  1172,  1242,
     692,  2044,    88,   792,  1716,   501,  1720,   470,  1588,  2085,
   -1842,  1065,   501,   501,   501,  1372,   465,   554,   470, -1842,
    1731,   501,   501,   501,  1136,   470,  1136,  2278, -1725,   601,
    1146,   860,   401,  1224,   501,   722,  1136,   501,  1602,  1727,
    2516,  2265,  -695, -1842,   375,  -693,   501,   501,   501,   501,
     501,  1559,   401,  1535,  2405,   437,   526,  2644,  1262,   475,
     437,   768,  2605,  1190,  1276,   465,  1250,  1028,   909,  1091,
     475,   437, -1842,  1071,   903,   501,  1207,   475,  1207, -1934,
     375,   523,  1478,   601,  1500,  1478,   955,  1208,   467,  1208,
    -698,  1758,  1222,  1255,   792,  2160,   790,   502,   502,   502,
    1176,   796,  1317,   565,  1146,  1603,   797,  1483,  2055,   498,
    1268,  1533,  2008,   928,  1373,   515,   498,   498,   498,  1275,
    2074,  1506,   610,  1269,   526,   498,   498,   498,   437,   817,
    1284,  2427,  1578,   437,   470,  1478,  1479,   467,   498, -1721,
    2501,   498,  1365,   910,   901,  1485,  1507,  1478,  1615,  2391,
     498,   498,   498,   498,   498, -1947,  2558,   657,   956,  1311,
     657, -1947,  1196,   869,   194,  1875,   501,  2248,  2086,   531,
    -698,   955,  1146,  1628,  2097,  2000,  2099,   206,  1478,   498,
     437,  2453,  2378,   470,  2559,  2560,   475,  1412,   421, -1723,
     526,  1632,  1633,  1634,  1635,  1636,  1637,  1638,  1639,   963,
     676,  1491,  2270,  1374,  1478,   516,   727,   677, -1617, -1878,
     531,   610,   658,  2119,  1852,   658,  2069,  2592, -1842,  1211,
    2533,  1305,  2193,  2221,  2379,   207,  2125,   515,   601,   437,
    1771,  1478, -1717,  1169,  1478,   475,   627,   745,  1146,  2069,
    1259,  2792,  2712,   956,  2341,  1841,  2126,  1375,  1794,  1795,
    1796,  2139,  2140,  2594,  2211,   838,  2091,  1376, -1714,   381,
    2521,  2212, -1844,   208,  1281,   209,   382,   210,  1358,  2480,
     498,  1377,  2127,  2487,  1842,   211,   727,  2793,   955,  2492,
    2424,  -538,  1816,   523,  1818, -1719,  1984,  1482,  1511,  2547,
    1307,   452,   792,  2714,  2707,   796,  1641,  2128,  1486, -1947,
     797,  1642, -1858,    14,  2708,   354,  1523,  1524,   727,  -538,
    -538,  1401,  2595,  1616,  2779,  1797,  1366,  1485,  2596,  2271,
    2188, -1617,  2380,   627,  1432,  1413,  1433,    -5,  1855, -1947,
     407,  2602,   212,  1421, -1947,   456,   542,   601,  1397,  1398,
    2515, -1860,  1378,  2330,  1515,   461,    78,  2597,  2279,   526,
     956,  2280,  1566,  1517, -1947,  2397,  2269,  2614,    82,  1792,
   -1873,  2428,  2381,   502,   501,    15,   437,  1390,  2801,  1709,
     502,   502,   502,   654,   437,  1910,  2660,   801,    25,   502,
     502,   502,  1137,   746,  1137,   523,  1169,   421,   839,   407,
     195,  1894,   502,   531,  1137,   502,   510,   531,  2092,  2736,
     355,  2382,  1091,  1710,   502,   502,   502,   502,   502,  2672,
     531,  1623, -1858,  2658,  1379,  2493,  2429,  1380,  1381,  2392,
     961,  2561,  1522,   955,   955,  2167,  -538,   213,  1597,  1847,
     465,   601,   748,   502,   437,  2737,    79,  2703,   565,   901,
     356,  2526,  1798,  1799,   546,  2527,  1295,  1800,    83,  2359,
    1605,  2413,   531,   571,  1296,  -538,  1614,  1402,  2194,  1985,
     590,   592,  1839,  2397,   955,   437,  2189,   884,   498,  2719,
    2720,  2105,   357,   214,   383,   437,  2213,  2757,   381,   651,
    2707,  2758,  2759,   601,  2168,   382,   437,  2169,    26,  1374,
    2708,  1660, -1878,   452,  2739,   956,   956,  1841,  1670,  1670,
    2740,  1367,   467,   437,   531,   531,   531,  1782,  2682,  1196,
    2782,  2372,  1382,  2755,  2794,  1434,    27,  2494,  2795,  2796,
      28,  2129,   749,  2765,   502,  1734,  1842,  1775,   437,  2741,
    1607,   452,   437,  1375,   964,   437,   956,   456,  1911,  2782,
     822,  1417, -1838,  1376,     4,     5,  -538,   461,   470,  1277,
     384,   845,  1767,  2784,   511,  1898,   512,  1740,  2562,  1743,
    1903,  2172,  2797,  1368,   531,   215,  2214,   437,  2785,  2683,
     358,   965,   676,  1417,  1035,   456,  1608,  2798,  2799,  1686,
    1501,   601,   375,  2169,  1690,   461,  1693,  2814,  1821,  1698,
    1700,  2215,  1703,  2216,   437,   452,  1435,   782,    31,  2445,
     475,  2490,  1422,  2327,  2327,  1423,  1501,   385,  1226,  2067,
     216,  1227,   386, -1617,  1228,  1229,    38,  2169,   523,  2368,
    2369, -1617, -1617,  1297,    39,   206, -1617,  1656,  1378,  2630,
    1776,  1777,   465,  1708, -1945,  1790,  1177,  1656,  1281,   456,
    2014,  2491,  2646,   381,   557,   381,   523,  2328,  2328,   461,
     382,  2636,   382,  1759,  1761,  1298,  2821,  2174,   792,   792,
    1759,   782,  1759,  2474,  2475,   792,  2169,   792,  2094,  2095,
     465,  1724,  2015,   207,  1135,   898,  2223,  1299, -1725,  2721,
    2789,  2791,  1785,  -538,  2401,   217,   727,   792,    43,  1748,
    1789,  2176,  1828,   383,  1749,   742,  1830,  1790,  1904,  1502,
    1379,  2820,  1178,   948,   467,  2684,   971,   918,  1615,  1755,
    2685,   208,  2327,   209,    45,   210, -1947,  2232,  2503,  1827,
    2830,   387,   502,   211,  2647,  1502,  2648,  2224,  2665,  2512,
     501,   501,  1300,  2666,   465,  1336,  1424,   501,  1425,   501,
    2178, -1947,   467,  1829,  1868,  1869,  1136,  2843,  2090,  2693,
     470,  1337,  1789,   955,  1003,  1817,  2328,  1819,   531,   501,
    2694,   955,  2542,   -21,   743,    46,   977,   972,   651,   384,
     973,   558,   559,   782,   796,  2552,   834,     4,     5,   797,
     212,   901,  1874,  2695,  2350,  2817,  1803,  1790,   470,  1268,
     560,  1338,  1812,  2705,  1301,  2532,   437,  2706,  1382,  1815,
    2606,   526,   475,   531,  1989,   531,   467,  1861,  2609,  2553,
   -1655,  2003,  1177,  2696,   796,   814,   741,  2192,  1238,   797,
     741,  1878,  2532,    54,  1883,   956,   385,   755,   452,   792,
    2554,   386,  1862,   956,   498,   498,  2432,  2433,  2434,  1851,
     475,   498,  1789,   498,   823,   561,   955,   531,   593,   531,
    2655,  1919,   470,  2069,  2822,    55,   452,   509,   383,  1023,
     383,   530,    62,   498,   526,  2066,  2066,  1239,   530,   567,
    1607,    56,   456,  1616,  2051,   213,   530,  2823,  1178,   587,
    1230,  1231,   461,  2774,   609,   704,   616,    60,   616,   624,
     643,   587,  2811,  2065,  2065,  1302,   688,  2071,   437,  1144,
     456,   501,  2815,  2052,   475,   594,  1232,  1233,   616,   -21,
     461,  2117,   531,   595,  2457,   407,  1608,  1806,   956,  1756,
     689,   214,  1024,  1025,   407,  2066,  2066,  2824,  2775,  1867,
    1291,  1339,   443,    63,   384,   444,   384,  1982,   815,   727,
     705,  1292,  1340,  1992,  1807,   620,  1808,   716,  2458,   716,
    2825,  2005,   716,  2065,  2065,  1121,  1124,  1127,   586,  2222,
    2435,   769,   770,  1790,   782,   671,  1802,   465,   601,  1152,
     586,   775,  1201,  1203,  2436,  1422,   452,    66,  1423,   796,
    1151,    68,  2186,  2010,   797,   400,    69,   871,   872,  1240,
      70,   385,   728,   385,   729,   465,   386,  2073,   386,   596,
    2061,  2062,    72,  2130,  2131,   498,    73,   796,  2716,   445,
     898,  -690,   797,   215,    49,   805,  2132,  2133,  1789,   994,
     456,   995,  2756,    74,  2259, -1127,   447,   873,   874,    50,
     461,  -357,  2151,  2152,  2604,   193,  2075,  1040,   235,   467,
    2165,  1257,   200,   509,  1579,   201,   796,  -357,  1341,  1342,
     702,   797,  1033,   205,  1241,  1157,  1158,  1159,   216,  2437,
    2438,  2439,  2185,  1343,   530,  1344,   531,   467,   531, -1127,
     728,  1288,   729,   238,  2440,  2832,  2615,  2616,   420, -1127,
    1290,  1041,  1694,  1293,  1695,   470,  2307,  -357,   502,   502,
     239,  1042,  1481,  1580,  1308,   502,  1424,   502,  1425, -1947,
    1865,   796,   343,   530,  1137,   531,   797,  1315,   242,  2157,
    2200,  2158,   362,   470,   530,   465,   387,   502,  2050, -1947,
    2053,   448,   449,   450,   404,  2308,  2309,  2310,  2311,  2312,
     451,   437,  2234,   217,  1509,  2762,  2763,   475,  2306,  2483,
     370,  2138,   452,   796,   531, -1947,  2485,  2486,   797,    36,
      37,  -690,  1345,   405,  2249,  -690,  2250,  -357,   407,   437,
     624,  1932,  1933,   412, -1127,   475,   414,  2647,  2441,  2648,
   -1947,  2676,   417,  2677,   530,   453,  1043,   422,  1094,   530,
    1095,   454,   791,   455,   794,   424,   456,   467,   457,   458,
     459,  -357,  1155,  1156,   460,   425,   461,  1132,  1133,  1537,
    1346,   462,  1538,  2247,   435,  2252,  2253,  2254,   375,  1539,
    1540,   547,   568,  2191,  -690, -1633, -1633, -1633, -1633,   437,
    -357,   576,   672,   673,  2329,  2329,   685,  -357,  -690,  -690,
     687,   700,   698,   470,   699,   463, -1127,   707,  -357,   520,
    1227,   717,   722,  1228,  1229,   885,   736,   886,  1044,   738,
     751,   452,   716,   754,   464,  2219,  1541,   758,  2220,   502,
     755,   778,   762,  2336,   763,  2227,  2260,  2313,  2314,  2315,
    2316,  2317,  2318,  2319,  1945,  1946,   764,   771,   772,   437,
    1581,   465, -1127,   206,  1487,   475,  2165,  1489,   783,  1081,
    1242,   773,  2240,  1492,  1045,   456,   800,  1496,   774,   804,
    2261,   776,  2262,  1498,   784,   461,   786,   787,  2788,   806,
     826,   466,   832,  2331,  2243,  1607,  2284,   820,   836,  1145,
    2338,   834,   851,   899,  2287,   855,  1542,  2289, -1127,   857,
     903,   207,   916,  2329, -1127,   920,   919,  2235,   847,   848,
     849,   850,   922,   924,  -357,  -357,  1046, -1635,   531,   933,
     531,   934,   935,   467,   936,   941,    40,  1543,   943,  -357,
    -690,  -357,   946,   952,   950,   468,   469,   957,   627,   208,
     967,   209,  2275,   210, -1632, -1632, -1632, -1632,  1764,  1544,
    1766,   211,   969,  1768,  1769,  1770,   979,   983,   986,  1774,
     465,   993,  1291,  1145, -1947,  2415,   997,   601,   999,   470,
    1786,  1787,  1001,  1292,  1197,  1198,  1199,  1200,  1004,   471,
    2408,  1005,  1006,  1631,  2448,  2449,  1008,  2404,  2450,  1020,
    1013,  2320,  1018,  1031,  1035,  1092,  1093,  1037,   727,  1038,
     472,  1659,  1067,  1545,  1051,   473,  2321,  2367,   212,  1052,
    1053,   509,  1076,   474,  1079,   437,  1114,  1077,  -357,  1120,
    1128,   475,  1129,  2375,  2173,  2175,  2177,  2179,   530,  1139,
    2680,  1145,   467,  1147,  1160,  1153,  2393,  1094,  1546,  1095,
    2345,  1096,   509,   503,  1162,  2452,   838,  2352,  2353,  2354,
    2355,  1173,  1212,   839,  1223,  2358,  1215,   909,  1547,  1236,
    1254,  2448,   601,  2462,   443,  1263,  -357,   444,  1278,   530,
    1282,  1286,  1287,   401,  1294,  1097,  1098,  1099,   470,  1230,
    1231,  2243,   427,  1313,  1320,  1325,  1582,  2371,  2470,  1326,
    1327,  1331,  1332,  1333,  1335,  1362,  1364,  1145,  1360,  1371,
    1388,  1391,  1396,   213,  1407,  1232,  1233,  1392,  2478,  1607,
    1409,  1414,  1415,  1469,  1473,  1474,  1470,  1475,  1476,  1488,
    1548,  2336,  1490,  1493,   437,  1494,  1100,  1495,  1101,  1497,
     475,  1499,  1512,  1510,  1549,  1102,  1516,  1520,  1103,  1553,
    1178,   445,  2538,  1519,  1555,  1177,  1560,  1249,  1561,   214,
    2336,  2415,  1567,   446,  1568,  1550,  1575,  1586,   447,  1574,
    1599,  1571,  1609,  1611,  1612,  2431,  1629,  1624,  1625,  1652,
    1662,  1663,  1664,  1665,   437,  1674,  1678,  2415,  2451,  1679,
    1691,  1682,  1680,  1701,  1704,  1169,  1706,  1737,  1722,  1712,
    1744,   587,  2456,  1729,  1751,  1752,  1756,  1501, -1654,  1502,
    1840,  1831,  2536,  1837,  1849,  1857,  1854,  1852,  1860,  1616,
    1615,  1873,  1607,  1892,  1899,  2011,  1897,  1901,  1916,  1919,
    1920,  1551,  1915,  2422,  1988,  1990, -1610,  1104,  1994,  1105,
    2012,  2004,  2048,  2049, -1652,  2673,  2641,  2054,  2098,  2100,
    2013,   215,  2103,  2770,  1841,  2525,   627,  2109,  2120,  1842,
    2121,  2122,   530,   448,   449,   450,   530,  2123,  1887,  2147,
    2145,  1903,   451,  1888,  2631,  2141,  1904,  2182,  1276,   530,
    2336,  2187,   509,  2162,   452,  1587,  2195,  2180,  2203,  2201,
     381,  2206,  2226,  2236,  2237,  2238,   216,  2509,  2077,  2263,
    2264,  2268,  2281,  2282,  2286,  2283,  2294,  2295,  2296,  2298,
    2301,  1864,  2415,  2339,  2360,  2303,   737,   453,  2365,  2520,
    2363,   530,  2366,   454,  2394,   455,  2374,  2406,   456,  2373,
     457,   458,   459,  1275,  2656,  2409,   460,  2411,   461,  2414,
    2446,  2460,  2461,   462,  2454,  2467,  2633,  2469,  2468,  2634,
    2466,  2472,  1885,  1885,  2476,  2484,  2497,  2498,  2508,  2510,
    2379,  2505,  2507,  2566,  2601,  2522,  2539,  2543,  2545,  2550,
     520,   217,  2557,   530,   530,   530,  2607,   463,  2608,  2610,
    2664,  2620,  2619,  2632,  2635,  2637,  2069,  2612,  2613,  2760,
   -1725,  2689,  2808,  2721,  2766,  2809,   464,  2833,  2623,  2836,
    2842,  2837,    16,  2628,  2768,    85,    81,  1406,    77,    86,
      76,   706,   399,  1732,   419,  1400,  1718,  1054,  1387,  2361,
    2767,  2681,  2524,   465,  2351,  2479,  2357,   520,  1029,  2477,
    1968,  2344,  2593,   530,  2640,  2300,  2362,  1106,  1012,  2831,
    2541,  1082,  2537,  2603,  2657,  2014, -1947,  2671,  2293, -1947,
    1687,  2829,  2835,   466,  2813,  2626, -1947, -1947,  2465,  2667,
    2627,  2669,  2690,  2691,   432,  2670,  1822,  2810,   192,  1514,
    1431,  2812,  1750,   803,  1518,  1820, -1838,  2015, -1838,  2258,
    2256,   843,  1166,  1536,  1205,   812,  1213,  -241,  1107,  1826,
    1564,   900,  1235,  2773,  2102,   467,  1247,  1846,  1576,  1258,
    1108,  2113,  2112, -1947,  1856,  1607,   923,   468,   469,  1863,
    1613,  1285,  1673,  1876,   926,  1640,  1886,   982,   644,  2144,
    2556,  2101,  1671,  2710,  2711,   959,  1672,   792,   792,  2844,
    1323,  1742,  1739,   958,  1781,  1779,  2150,  1189,  2718,  2137,
    2135,   470,  2016,  2722,  2723,  1187,  2376,  2017,   792,  2156,
    1909,   471,  2154,  1879,  1528,  1219,  1526,  1880,  1881,  2769,
    2828,  2828,  2771,  2772,  1882,   949,  1370,   792,  2205,  1057,
     811,  1630,   472, -1947,  1723,  1721,  2629,   473,   777,  1164,
    2305,  2018,  2356,  2459,  1859,   474,  2519,   437,  2783,  2019,
    2841,  2111,  1395,   475,   792,  2786,  1654,  1836,  2043,   501,
     501,  2020,  2674,  1697, -1947,  2518,  2802,     0,     0,     0,
       0,   716,     0,     0,     0,     0,     0,     0,     0,     0,
     501,     0,     0,     0,     0,     0, -1947,   530,     0,     0,
       0,  1588,     0,     0,     0,  2021,     0,     0,     0,   501,
       0,     0,     0,     0,  2022,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -238,     0,  1924,  1925,  1926,
    1927,  1928,  1929,     0,     0,   445,   501, -1838,     0,     0,
       0,     0,   530,     0,   530,     0,     0,     0,     0,     0,
   -1947,     0,   447,     0,     0,  2023,     0,  1084,  2024,     0,
       0,     0,  1931,     0,  1932,  1933,  1934,  1935,  1936,  1937,
    1938,     0,     0,   498,   498,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1947,   530,     0,   530,     0,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1947,     0,     0,  1939,     0,
       0,     0,     0,   498,     0,     0,     0,     0, -1838,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1277,     0,     0,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,   599,   448,   449,   450,
       0,   530,     0,     0,     0,     0,   451,     0,     0,     0,
       0,     0,     0,     0,   587,     0,     0, -1947,     0,     0,
    1940,  1941,  1942,  1943,  1944,     0,     0,  1945,  1946,  2266,
    2267, -1947,     0,     0,     0,     0,     0,   716,     0,     0,
    2274,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1947,     0,     0,     0,     0,     0,     0,     0,
       0,  1947,   600,     0,   457,   458,   459,     0,     0,     0,
     460,     0,     0,     0,    90,     0,    91,     0,    92,     0,
       0,     0,     0,    93,   587,   587,   587,   587,   587,     0,
       0,    94,   587,   587,   587,     0,   587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   463,     0,     0,     0,     0,     0,     0, -1947,  1949,
       0,     0,     0,     0,    95,    96,     0,     0,     0,  1190,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,   587,     0,     0,    98,     0,  1930,    99,   601,
       0,   587,   587,   587,   587,   530,     0,   530,     0,     0,
       0,     0,   100,  1951,     0,     0,     0,  1432,  1094,  1433,
    1095,     0,     0,     0,  1953,     0,     0,   502,   502,     0,
       0,     0,  2370,     0,     0,   101,     0,   466,     0,  1954,
     716,     0,   444,   102,   530,   103,     0,     0,   502,     0,
       0,     0,     0,  -738,  -738,  -738,  -738,  -738,  -738,  -738,
    -738,  -738,  -738,     0,  -738,  -738,  -738,   502,  -738,  -738,
    -738,  -738,  -738,  -738,  -738,  -738,  -738,   104,     0,     0,
       0,     0,  -738,   530,     0,     0,     0,  -738,   105,     0,
    -738,   468,   469,   106,   502,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1947,  1957,  1958,  1959,     0,  2166,
       0,     0,     0,     0,     0,     0,   445,     0,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,   108,     0,
       0,   109,   110,   447,     0,   471,     0,     0,     0,     0,
       0,     0,   111,     0,     0,     0,     0, -1183,     0,   112,
       0,   113,     0,     0,   114,     0,   472,     0,  -738,     0,
       0,   473,     0,     0,     0,  2724, -1183,     0,     0,   474,
     601,   437,     0,     0,     0,     0,     0,     0,     0,  1961,
    1962,  1963,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1948,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,   117,     0,     0,     0,     0,     0,  2725,     0,
    2726,     0,   118,     0,     0,     0,     0,     0,     0,  -738,
    -738,  -738,     0,  -738,  -738,  -738,  -738,     0,   448,   449,
     450,     0,     0,     0,     0,     0,     0,   451,     0,     0,
     119,  2727,     0,     0,     0,     0,     0,     0,     0,   452,
       0,   587,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2728,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,     0,     0,  1952,     0,   530,     0,   530,
       0,  2729,   123,   456,     0,   457,   458,   459,     0,     0,
       0,   460,     0,   461,     0,   124,   125,  2273,     0,     0,
       0,     0,   126,     0,     0,     0,   127,     0,     0,     0,
       0,     0,     0,     0,     0,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,     0,     0,
       0,     0,   463,     0,     0,  -738,   130,     0,     0,     0,
       0,     0,     0,     0,     0,   131,     0,     0,     0,     0,
     132,   133,     0,     0,   134,     0,   135,  1956,     0,     0,
       0,     0,     0,     0,   136,     0,     0,  2730,     0,     0,
       0,     0,    90,     0,    91,     0,    92,  -738,   465,     0,
       0,    93,   716,     0,  2731,     0,     0,  -738,     0,    94,
       0,     0,     0,     0,     0,   138,     0,     0,  2343,  2343,
       0,     0,   139,     0,     0,     0,  2732,   140,   466,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,     0,     0,     0,  2733,     0,  -738,
       0,     0,    97,     0,     0,   141,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,  2734,     0,     0,
     467,     0,     0,     0,  1682,     0,  2735,     0,     0,     0,
     100,     0,   468,   469,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,     0,     0,     0,     0,
       0,   102,     0,   103,     0,     0,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   471,     0,     0,     0,
       0,     0,     0,     0,   716,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,     0,   472,     0,     0,
       0,   716,   473,   716,   716,     0,   105,   716,     0,     0,
     474,   106,   437,     0,     0,     0,     0,     0,   475,     0,
     509,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,   107,
      91,     0,    92,     0,     0,     0,   108,    93,     0,   109,
     110,     0,     0,     0,     0,    94,     0,     0,     0,     0,
     111,     0,     0,     0,     0,   716,   716,   112,     0,   113,
       0,     0,   114,     0,     0,     0,     0,     0,     0,     0,
     716,     0,     0,  2482,  2482,     0,     0,     0,    95,    96,
       0,  2482,  2482,  2489,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,   509,     0,     0,     0,    98,
       0,     0,    99,     0,   115,     0,     0,     0,   116,     0,
     117,     0,     0,     0,     0,     0,   100,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     716,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       0,     0,   509,     0,     0,     0,     0,   102,   119,   103,
       0,   716,     0,     0,   716,     0,     0,     0,     0,   716,
     716,   120,     0,     0,     0,     0,     0,     0,     0,   509,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -905,
       0,   104,  -905,     0,     0,     0,   716,     0,     0,   121,
     122,     0,   105,     0,  2611,     0,     0,   106,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,   125,     0,     0,     0,     0,     0,
     126,     0,   427,     0,   127,   107,     0,     0,     0,     0,
       0,     0,   108,   128,     0,   109,   110,     0,     0,     0,
       0,     0,     0,   129,     0,   716,   111,     0,     0,     0,
       0,     0,     0,   112,   130,   113,  -905,     0,   114,     0,
       0, -1842,   587,   131,     0,     0,     0,   587,   132,   133,
       0,     0,   134,  -905,   135,     0,     0,     0,     0,   716,
       0,     0,   136,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,     0,    91,   137,    92,     0,     0,     0,
     115,    93,     0,     0,   116,     0,   117,     0,     0,    94,
       0,   716,     0,   138,     0,     0,   118,     0,     0,     0,
     139,     0,     0,     0,     0,   140,     0,   587,     0,     0,
       0,   587,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,   119,     0,     0,     0,     0,     0,
       0,     0,    97,   141,     0,     0,     0,   120,     0,     0,
       0,     0,     0,    98,     0,     0,    99,     0,  -905,  -905,
    -905,     0,     0,     0,     0,     0,     0,  -905,     0,     0,
     100,     0,     0,     0,     0,   121,   122,     0,     0,  -905,
       0,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,   101,     0,     0,     0,     0,     0,   124,
     125,   102,     0,   103,     0,     0,   126,     0,     0,     0,
     127,     0,  -905,     0,     0,     0,     0,     0,  -905,   128,
    -905,     0,     0,  -905,     0,  -905,  -905,  -905,     0,   129,
       0,  -905,     0,  -905,     0,   104,     0,     0,  -905,     0,
     130,     0,     0,     0,     0,     0,   105,     0,     0,   131,
       0,   106,     0,     0,   132,   133,     0,     0,   134,     0,
     135,     0,     0,     0,     0,     0,     0,     0,   136,     0,
       0,     0,  -905,     0,     0,     0,     0,  -905,     0,   107,
     445,   992,     0,     0,     0,     0,   108,     0,     0,   109,
     110,  -905,     0,     0,     0,     0,     0,   447,     0,   138,
     111,     0,     0,     0,     0,     0,   139,   112,     0,   113,
       0,   140,   114,     0,     0,     0,     0,     0,  -905,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1842,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,     0,     0,     0,     0,     0,     0,  -905,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -905,     0,     0,     0,     0,     0,
    -905,   599,   448,   449,   450,     0,     0,     0,   119,     0,
       0,   451,  -905,  -905,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -905,     0,     0,   121,
     122,     0,     0,     0,     0,     0,  -905,     0,     0,     0,
     123,     0,     0,  -905,     0,     0,     0,   808,     0,   457,
     458,   459,     0,   124,   125,   460,     0,  -905,     0,     0,
     126,     0,  -905,     0,   127, -1842,     0,     0,     0,   244,
    -905,   245,  -905,   128,     0,     0,   246,     0,  -905,     0,
       0,     0,     0,   129,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   130,     0,   463,     0,     0,     0,
       0,     0,     0,   131,     0,     0,     0,     0,   132,   133,
       0,     0,   134,     0,   135,     0,     0,   248,   249,     0,
       0,     0,   136,     0,     0,     0,     0,   250,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   251,     0,
       0,   252,     0,     0,   443,     0,     0,   444,     0,     0,
     865,   866,   867,   138,     0,   253,     0,     0,   868,     0,
     139,     0,     0,     0,     0,   140,     0,     0,     0,     0,
       0,     0,   466,     0,     0,     0,     0,     0,   254,     0,
       0,     0,     0,     0,     0,     0,   255,     0,   256,     0,
       0,     0,     0,   141,     0,     0,   257,     0,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   267,   268,
       0,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   445,     0,     0,     0,     0,   468,   469,     0,     0,
       0,   279,     0,     0,     0,     0,   280,     0,   447, -1947,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   281,     0,     0,     0,     0,     0,
     471,   282,     0,     0,   283,   284,     0,     0,     0,     0,
       0,     0, -1183,     0,     0,   285,     0,     0,     0,     0,
       0,   472,   286,     0,   287,     0,   473,   288,     0,   869,
       0, -1183,     0,     0,   474,   601,   437,     0,     0,   870,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   448,   449,   450,     0,     0,     0,   289,
       0,     0,   451,   290,     0,   291,     0,     0,   871,   872,
       0,     0,     0,     0,   452,   292,     0,     0,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1218,   447,     0,     0,     0,     0,
       0,     0,     0,   293,     0,     0,     0,   453,   873,   874,
       0,     0,     0,   454,     0,   455,   294,     0,   456,     0,
     457,   458,   459,     0,     0,     0,   460,     0,   461,     0,
       0,     0,     0,   462,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   295,     0,   875,     0,     0,     0,
       0,     0,   876,     0,     0,   296,     0,   877,     0,     0,
       0,     0,     0,     0,     0,   878,     0,   463,     0,   297,
       0,     0,   879,     0,     0,   298,     0,   880,     0,   299,
       0,     0,     0,     0,     0,     0,   464,     0,   300,     0,
     448,   449,   450,     0,     0,     0,   881,     0,   301,   451,
     443,     0,     0,   444,     0,     0,   865,   866,   867,   302,
       0,     0,     0,   465,   868,     0,     0,     0,   303,     0,
       0,     0,     0,   304,   305,     0,     0,   306,     0,   307,
       0,     0,     0,     0,     0,     0,     0,   308,     0,     0,
       0,     0,     0,   466,     0,     0,     0,     0,     0,     0,
     309,     0,     0,     0,     0,   808,     0,   457,   458,   459,
       0,     0,     0,   460,     0,     0,     0,     0,   310,     0,
       0,     0,     0,     0,     0,   311,     0,   445,     0,     0,
     312,     0,     0,     0,     0,   467,     0,     0,     0,     0,
       0,     0,     0,     0,   447,     0,     0,   468,   469,     0,
       0,     0,     0,     0,   463,     0,     0,     0,   313,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   882,
       0,   883,     0,   884,     0,     0,   885,     0,   886,   887,
     888,   470,     0,   889,   890,     0,     0,     0,     0,     0,
       0,   471,     0,     0,     0,   809,     0,     0,     0,     0,
       0,     0,     0,   443,     0,   869,   444,     0,     0,     0,
       0,     0,   472,     0,     0,   870,     0,   473,     0,     0,
       0,     0,     0,     0,     0,   474,     0,   437,     0,     0,
     466,     0,     0,   475,     0,     0,     0,     0,     0,   448,
     449,   450,     0,     0,     0,     0,     0,     0,   451,     0,
       0,     0,     0,     0,   871,   872,     0,     0,     0,     0,
     452,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     445,     0,     0,     0,   468,   469,     0,     0,     0,     0,
       0,     0,     0,   453,   873,   874,     0,   447,     0,   454,
       0,   455,     0,     0,   456,     0,   457,   458,   459,     0,
       0,     0,   460,     0,   461,     0,     0,     0,     0,   462,
       0,     0,     0,     0,     0,     0,     0,     0,   471,     0,
       0,     0,   875,     0,     0,     0,     0,     0,   876,     0,
       0,   443,     0,   877,   444,     0,     0,     0,     0,   472,
       0,   878,     0,   463,   473,     0,     0,     0,   879,     0,
   -1947,     0,   474,   880,   437,  -973,     0,     0,     0,     0,
    -973,     0,   464,  -973,     0,     0,     0,     0,     0,     0,
    -973,  -973,   881,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   448,   449,   450,     0,     0,     0,     0,   465,
    -973,   451,  -973,   332,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   452,     0,     0,     0,     0,   445,     0,
       0,     0,     0,     0,     0,     0,     0,  -973,     0,   466,
       0,     0,     0,     0,     0,   447,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   453,     0,     0,     0,
       0,     0,   454,     0,   455,     0,     0,   456,     0,   457,
     458,   459,     0,     0,     0,   460,     0,   461,     0,     0,
       0,   467,   462,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   468,   469,   443,     0,     0,   444,     0,
   -1947,     0,     0,     0,     0,     0,     0,  -973,     0,     0,
       0,     0,     0,     0,     0,   882,   463,   883,     0,   884,
       0,     0,   885,     0,   886,   887,   888,   470,     0,   889,
     890,     0,     0,     0,     0,   464,     0,   471,  -973,     0,
     448,   449,   450,     0,     0,     0,     0,     0,     0,   451,
       0,     0,     0,     0,     0,     0,     0,     0,   472,     0,
    -973,   452,   465,   473,     0,     0,     0,     0,     0,     0,
       0,   474,   445,   437,     0,     0,     0,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
       0,   333,   466,     0,   453,     0,     0,     0,     0,     0,
     454,  -973,   455,     0,     0,   456,     0,   457,   458,   459,
       0,     0,     0,   460,  -973,   461,     0,     0,     0,     0,
     462,  -973,     0,     0,   443,     0,     0,   444,     0,     0,
       0,     0,     0,     0,   467,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   468,   469,     0,  -973,
       0,     0,     0,     0,   463,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -973,
       0,     0,     0,   464,     0,     0,     0,     0,     0,     0,
     470,     0,  -973,     0,   448,   449,   450,     0,     0,     0,
     471,     0,     0,   451,     0,     0,     0,     0,     0,     0,
     465,   445,     0,     0,     0,   452,     0,     0,     0,     0,
       0,   472,     0,   588,     0,     0,   473,     0,   447,     0,
       0,     0,     0,     0,   474,   601,   437,     0,     0,     0,
     466,  -973,   475,     0,     0,     0,     0,     0,   453,     0,
       0,     0,     0,     0,   454,  -973,   455,     0,     0,   535,
       0,   457,   458,   459,     0,     0,     0,   460,     0,   461,
       0,     0,     0,     0,   462,     0,  -973,     0,     0,     0,
       0,     0,   467,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   468,   469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   463,     0,
       0,     0,     0,   536,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   448,   449,   450,     0,   464,   470,     0,
     443,     0,   451,   444,     0,     0,     0,     0,   471,     0,
       0,     0,  -973,     0,   452,     0,     0,     0,     0,     0,
       0,     0,     0,  -973,   465,     0,     0,     0,     0,   472,
       0,     0,     0,     0,   473,     0,     0,   443,     0,     0,
     444,     0,   474,  -973,   437,     0,     0,   453,     0,     0,
     475,     0,     0,   454,   466,   455,     0,     0,   456,     0,
     457,   458,   459,     0,     0,     0,   460,     0,   461,     0,
       0,     0,     0,   462,     0,     0,     0,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   652,
       0,     0,     0,     0,   447,     0,   467,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   463,   468,   469,
       0,     0,     0,     0,   445,     0,     0,     0,     0,     0,
     443,     0,     0,   444,     0,     0,   464,     0,     0,     0,
       0,   447,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   471,   465,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   472,     0,     0,     0,     0,   473,     0,
       0,     0,     0,   466,     0,     0,   474,     0,   437,   448,
     449,   450,     0,     0,   475,     0,     0,   445,   451,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     452,     0,     0,     0,   447,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   467,   448,   449,   450,     0,
       0,     0,     0,     0,     0,   451,     0,   468,   469,     0,
       0,     0,     0,   453,     0,     0,     0,   452,     0,   454,
       0,   455,     0,     0,   456,     0,   457,   458,   459,     0,
       0,     0,   460,     0,   461,     0,     0,     0,     0,   462,
       0,   470,     0,     0,     0,     0,     0,     0,     0,     0,
     453,   471,     0,     0,     0,     0,   454,     0,   455,     0,
       0,   456,     0,   457,   458,   459,     0,     0,     0,   460,
       0,   461,   472,   463,     0,     0,   462,   473,     0,   448,
     449,   450,     0,     0,     0,   474,     0,   437,   451,     0,
       0,     0,   464,   475,     0,     0,   443,     0,     0,   444,
     452,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     463,     0,     0,     0,     0,     0,     0,     0,     0,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   464,
       0,     0,     0,   453,     0,     0,     0,     0,     0,   454,
       0,   455,     0,     0,   456,     0,   457,   458,   459,   466,
       0,     0,   460,     0,   461,     0,   465,     0,     0,   462,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,   466,     0,   444,     0,
     447,   467,     0,   463,     0,     0,     0,     0,   536,     0,
       0,     0,     0,   468,   469,     0,     0,     0,     0,     0,
       0,     0,   464,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   443,     0,     0,   444,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,   470,     0,   465,
     468,   469,     0,     0,     0,     0,     0,   471,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     780,     0,   445,     0,     0,     0,     0,     0,   472,   466,
       0,     0,     0,   473,   470,     0,     0,     0,     0,   447,
       0,   474,     0,   437,   471,   448,   449,   450,     0,   475,
       0,     0,     0,     0,   451,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,   472,   452,     0,     0,     0,
     473,   467,     0,     0,     0,     0,   447,     0,   474,     0,
     437,     0,   981,   468,   469,     0,   475,     0,     0,   443,
       0,     0,   444,     0,     0,     0,     0,     0,     0,   453,
       0,     0,     0,     0,     0,   454,     0,   455,     0,     0,
     456,     0,   457,   458,   459,     0,     0,   470,   460,     0,
     461,     0,     0,     0,     0,   462,     0,   471,     0,     0,
       0,     0,     0,     0,   448,   449,   450,     0,   988,     0,
       0,     0,     0,   451,     0,     0,     0,     0,   472,     0,
       0,     0,     0,   473,     0,   452,     0,     0,     0,   463,
       0,   474,     0,   437,     0,     0,   445,     0,     0,   475,
       0,   448,   449,   450,     0,     0,     0,     0,   464,     0,
     451,     0,     0,   447,     0,     0,     0,     0,   453,     0,
       0,     0,   452,     0,   454,     0,   455,     0,     0,   456,
       0,   457,   458,   459,     0,   465,     0,   460,     0,   461,
       0,     0,     0,     0,   462,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   453,     0,     0,     0,     0,
       0,   454,     0,   455,     0,   466,   456,     0,   457,   458,
     459,     0,     0,     0,   460,     0,   461,     0,   463,     0,
       0,   462,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1142,     0,     0,   444,     0,   464,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   467,   448,   449,
     450,     0,     0,     0,     0,   463,     0,   451,     0,   468,
     469,     0,     0,     0,   465,     0,     0,     0,     0,   452,
       0,     0,     0,     0,   464,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   470,   466,     0,     0,     0,     0,     0,
       0,   465,   453,   471,     0,     0,     0,     0,   454,   445,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
       0,   460,     0,   461,   472,     0,   447,     0,   462,   473,
       0,   466,     0,     0,     0,     0,   467,   474,     0,   437,
       0,     0,     0,     0,     0,   475,     0,     0,   468,   469,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   463,     0,     0,     0,     0,  1657,     0,     0,
       0,     0,     0,   467,     0,     0,     0,     0,     0,     0,
       0,   464,   470,     0,     0,   468,   469,     0,     0,     0,
       0,     0,   471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   465,     0,
       0,     0,     0,   472,     0,     0,     0,     0,   473,   470,
       0,   448,   449,   450,     0,     0,   474,     0,   437,   471,
     451,     0,     0,     0,   475,     0,     0,     0,   466,     0,
       0,     0,   452,     0,     0,     0,     0,     0,     0,     0,
     472,     0,     0,     0,     0,   473,     0,     0,     0,     0,
       0,     0,     0,   474,     0,   437,     0,     0,     0,     0,
       0,   475,     0,     0,     0,   453,     0,     0,     0,     0,
     467,   454,     0,   455,     0,     0,   456,     0,   457,   458,
     459,     0,   468,   469,   460,     0,   461,     0,     0,     0,
       0,   462,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,     0,     0,
       0,     0,     0,     0,     0,   463,   471,     0,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,   447,     0,   472,     0,     0,
       0,     0,   473,     0,     0,  2463,     0,     0,     0,     0,
     474,     0,   437,     0,     0,     0,     0,     0,   475,     0,
       0,   465,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -377,     0,     0,  -377,
       0,     0,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,   466,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -377,
       0,  -377,     0,     0,     0,     0,     0,     0,  -377,     0,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,     0,     0,     0,
     448,   449,   450,   467,     0,     0,     0,     0,     0,   451,
       0,     0,     0,     0,     0,   468,   469,     0,     0,     0,
       0,   452,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -377,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   470,
       0,     0,     0,     0,   488,     0,     0,     0,     0,   471,
     454,     0,   455,     0,     0,   456,     0,   457,   458,   459,
       0,     0,     0,   460,     0,   461,  -377,     0,     0,     0,
     472,     0,     0,     0,     0,   473,     0,     0,     0,     0,
       0,     0,  1015,   474,     0,   437,  -377,  -377,  -377,  -377,
    -377,   475,     0,  -377,  -377,     0,     0,  -377,     0,     0,
       0,     0,     0,  -377,   463,  -377,     0,     0,     0,     0,
       0,  -377,     0,     0,     0,     0,  -377,     0,     0,  -377,
       0,     0,     0,   464,     0,     0,     0,  -377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -377,     0,     0,  -377,     0,     0,     0,     0,     0,  -377,
     465,  -377,     0,     0,     0,     0,     0,     0,     0,     0,
    -377,     0,     0,     0,     0,     0,  1014,     0,     0,     0,
       0,     0,     0,  -377,     0,     0,     0,     0,     0,     0,
     466,     0,     0,     0,     0,  -377,  -377,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -377,     0,     0,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,     0,     0,     0,     0,  -377,     0,     0,     0,     0,
       0,     0,   467,     0,     0,     0,     0,     0,  -377,  -377,
       0,     0,     0,     0,   468,   469,     0,  -377,     0,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,     0,     0,
       0,     0,     0,     0,     0,  -377,  1126,  -377,     0,     0,
       0,     0,     0,     0,     0,     0,   489,     0,   470,     0,
     490,   491,     0,     0,     0,     0,     0,     0,   471,     0,
       0,     0,     0,  -377,     0,  -377,     0,     0,     0,     0,
    -377,     0,     0,     0,     0,     0,     0,     0,     0,   472,
       0,     0,     0,     0,   473,     0,     0,     0,  -377,     0,
       0,     0,   474,     0,   437,     0,     0,     0,     0,  -377,
     475,  -377,  -377,  -377,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -377,     0,
       0,     0,     0,  1015,     0,     0,     0,  -377,  -377,  -377,
    -377,  -377,     0,     0,  -377,  -377,     0,     0,     0,     0,
       0,     0,     0,  -377,     0,     0,     0,     0,  -377,     0,
       0,     0,  -377,  -377,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -377,     0,     0,  -377,     0,
       0,  -377,     0,     0,     0,  -377,  -377,  -377,     0,     0,
       0,  -377,     0,     0,  -377,     0,  1922,     0,     0,  -377,
    -377,     0,     0,     0,  -377,     0,  -377,     0,     0,     0,
       0,  1923,     0,  1008,  1924,  1925,  1926,  1927,  1928,  1929,
    1930,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -377,     0,     0,     0,
       0,     0,  1082,     0, -1947,     0,     0, -1947,     0,  1931,
   -1947,  1932,  1933,  1934,  1935,  1936,  1937,  1938, -1947,     0,
       0,     0,     0,     0,     0,     0,  -377,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -1838,     0, -1838,
    -377,     0,     0,     0,     0,     0,     0,     0,  -377,     0,
       0,  -377,     0,     0,     0,  1939,     0,     0,     0,     0,
       0,     0,     0,     0, -1947,     0,  -377,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -377,
       0,     0,     0, -1947,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1940,  1941,  1942,
    1943,  1944,     0,     0,  1945,  1946,     0,     0,     0,     0,
    -377,     0,  -377,  -377,  -377,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1947,     0,
    -377,     0,     0,     0,     0, -1947,     0,     0,     0,     0,
       0,   407,  1083, -1947,  1948,     0,     0,     0,     0,  -377,
   -1923,     0,     0,     0,     0,     0,     0, -1947,     0,     0,
       0,     0,     0,     0,     0,     0,  -377,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -377,  -377,  -377,     0,
       0,     0,     0,     0,     0,     0,  1949,     0,     0, -1947,
    -377,     0,     0,     0,     0,     0,     0,  -377, -1838,     0,
       0,     0,     0,     0,  1008,     0,     0,     0,     0, -1947,
       0, -1947,     0,     0,     0,     0,  1950,     0,  1084,     0,
       0,     0,     0,     0,     0,     0,  1439,     0,     0,  1440,
    1951,     0,  1441, -1947, -1947,     0,     0,     0,  1952,     0,
    1442,  1953,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1954,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1947,     0,     0,  1955,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1838,
       0,     0,     0,     0,     0,     0,  1443,     0,     0,     0,
       0,     0,     0,     0,     0, -1947, -1947,     0,     0,     0,
       0,     0,     0,     0,     0,  1444,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1956, -1947,  1957,  1958,  1959,     0,  2568,     0, -1947,  2569,
       0,     0,  2570,  1924,  1925,  1926,  1927,  1928,  1929,  2571,
    2572,     0, -1947,     0,     0,     0, -1947,     0,     0,     0,
    1960,     0,     0,     0,     0,     0,     0,     0,     0,  1432,
       0,  1433,     0, -1947,     0,     0,     0,     0,  1931,  -374,
    1932,  1933,  1934,  1935,  1936,  1937,  1938,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1923,  1445,     0,     0,
   -1947,     0,     0,     0,     0,  1446,  1961,  1962,  1963, -1947,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1447,
    1964,     0,     0,     0,  1939,     0,     0,  1682,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0, -1947,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1947,
     447,  1448,     0,     0,     0, -1947,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2573,     0,     0,     0,
     601,  1449,     0,  1450,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1940,  1941,  1942,  1943,
    1944,     0,     0,  1945,  1946,  1451,  1452,  2574,     0,     0,
       0,     0,     0,  2575,     0,  2576,     0,     0,     0,     0,
       0, -1873,     0,     0,     0,     0,  2577,     0,     0,  2578,
       0,     0,     0,     0,     0,     0,     0,  1947,  1453,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     407,     0,     0,  1948,     0,   448,   449,   450,     0,     0,
       0,  2579,     0,     0,   451,     0,     0,  1454,  1455,   445,
    2580,     0,     0,     0,     0,     0,   452,     0,     0,     0,
       0,     0,     0,  2581,     0,     0,   447,     0,     0,     0,
       0,     0,     0,  1456,     0,  1949,     0,     0,     0,     0,
    1457,     0,     0,     0,     0,     0,     0,     0,     0,   488,
       0,     0,     0,     0,  1458,   454,     0,   455,  1459,     0,
     456,     0,   457,   458,   459,  2582,     0,     0,   460,     0,
     461,     0,     0,     0,     0,  1460,     0,     0,  2583,  1951,
       0,     0,     0,     0,     0,     0,     0,  1952,     0,     0,
    1953,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1461,     0,     0,  1954,     0,  2584,     0,   463,
       0,  1462,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   448,   449,   450,     0,     0,     0,     0,   464,     0,
     451,     0,     0,  2585,     0,     0,     0,     0,     0,     0,
    2586,  1463,   452,     0,     0,     0,     0,     0,     0,     0,
       0,  1464,     0,     0,     0,   465,     0,  1465,  2587,     0,
       0,     0,     0,     0,     0,   445,     0,     0,     0,  1956,
       0,  1957,  1958,  1959,     0,   488,     0,     0,     0,     0,
       0,   454,   447,   455,     0,   466,   456,     0,   457,   458,
     459,     0,     0,     0,   460,     0,   461,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2588,     0,     0,     0,     0,  -635,     0,
       0,     0,     0,  2589,     0,     0,     0,   467,     0,     0,
       0,     0,     0,     0,     0,   463,     0,     0,     0,   468,
     469,  2590,     0,     0,     0,  1961,  1962,  1963,     0,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,  1964,
       0,  1760,     0,     0,  2591,     0,  1682,   445,     0,     0,
       0,   489,     0,   470,     0,   490,   491,   448,   449,   450,
       0,   465,     0,   471,   447,     0,   451,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,   452,     0,
       0,     0,     0,     0,   472,     0,     0,     0,   447,   473,
       0,   466,     0,     0,     0,     0,     0,   474,     0,   437,
       0,     0,     0,     0,     0,   475,     0,     0,     0,     0,
       0,   488,     0,     0,     0,     0,     0,   454,     0,   455,
       0,     0,   456,     0,   457,   458,   459,     0,     0,     0,
     460,     0,   461,   467,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   468,   469,     0,     0,     0,
       0,     0,     0,  1763,     0,     0,     0,     0,     0,   448,
     449,   450,     0,     0,     0,     0,     0,     0,   451,     0,
       0,   463,     0,     0,   445,     0,     0,   489,     0,   470,
     452,   490,   491,   448,   449,   450,     0,     0,     0,   471,
     464,   447,   451,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   452,     0,     0,     0,     0,     0,
     472,     0,     0,   488,     0,   473,     0,   465,     0,   454,
       0,   455,     0,   474,   456,   437,   457,   458,   459,     0,
       0,   475,   460,     0,   461,     0,     0,   488,     0,     0,
       0,     0,     0,   454,     0,   455,     0,   466,   456,     0,
     457,   458,   459,     0,     0,     0,   460,     0,   461,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   463,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   448,   449,   450,   467,
       0,     0,   464,     0,     0,   451,     0,   463,     0,     0,
       0,   468,   469,     0,     0,     0,     0,   452,     0,  1765,
       0,     0,     0,     0,     0,     0,   464,     0,     0,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   489,     0,   470,     0,   490,   491,     0,
     488,     0,     0,   465,     0,   471,   454,     0,   455,   466,
       0,   456,     0,   457,   458,   459,     0,     0,     0,   460,
       0,   461,     0,     0,     0,     0,   472,     0,     0,     0,
       0,   473,     0,   466,     0,     0,     0,     0,     0,   474,
       0,   437,     0,     0,     0,     0,     0,   475,   445,     0,
       0,   467,     0,     0,     0,     0,     0,     0,     0,     0,
     463,     0,     0,   468,   469,   447,     0,     0,     0,     0,
       0,     0,   445,     0,     0,   467,     0,     0,     0,   464,
       0,     0,     0,     0,     0,  1784,   445,   468,   469,   447,
       0,     0,     0,     0,     0,   489,     0,   470,     0,   490,
     491,     0,     0,   447,     0,     0,   465,   471,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   489,
       0,   470,     0,   490,   491,     0,     0,     0,   472,     0,
       0,   471,     0,   473,     0,     0,   466,     0,     0,     0,
       0,   474,     0,   437,     0,     0,     0,     0,     0,   475,
       0,     0,   472,     0,     0,     0,     0,   473,     0,     0,
     448,   449,   450,     0,     0,   474,     0,   437,     0,   451,
       0,     0,     0,   475,     0,     0,     0,     0,   467,     0,
       0,   452,     0,     0,   448,   449,   450,     0,     0,     0,
     468,   469,     0,   451,     0,     0,     0,     0,   448,   449,
     450,     0,     0,     0,     0,   452,     0,   451,     0,     0,
       0,     0,     0,     0,   488,     0,     0,     0,     0,   452,
     454,     0,   455,     0,   470,   456,   490,   457,   458,   459,
       0,     0,     0,   460,   471,   461,     0,     0,   488,     0,
       0,     0,     0,     0,   454,     0,   455,     0,     0,   456,
       0,   457,   458,   459,     0,   472,     0,   460,     0,   461,
     473,     0,     0,   456,     0,   457,   458,   459,   474,     0,
     437,   460,     0,   461,   463,     0,   475,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   464,     0,     0,     0,     0,   463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   463,     0,     0,     0,     0,   464,     0,     0,
     465,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   465,     0,  2818,     0,     0,     0,
     466,     0,     0,     0,     0,     0,     0,     0,   465,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,   467,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   468,   469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   467,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   468,   469,
     467,     0,     0,     0,     0,     0,     0,     0,   470,     0,
       0,     0,   468,   469,     0,     0,     0,     0,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,     0,   472,
       0,     0,   471,     0,   473,     0,   470,     0,     0,     0,
       0,     0,   474,     0,   437,     0,   471,     0,     0,     0,
     475,     0,     0,   472,     0,     0,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,   474,   472,   437,     0,
       0,     0,   473,     0,   475,     0,     0,     0,     0,     0,
     474,     0,   437,     0,     0,     0,     0,     0,   475
};

static const yytype_int16 yycheck[] =
{
     211,   212,   339,   364,   215,   523,   324,   444,   408,   199,
     410,   931,    81,   413,   675,   676,   677,  1220,   983,    42,
     453,   534,  1486,   207,  1435,   327,  1682,  1438,   647,   213,
     317,   351,  1695,   315,   999,   317,  1684,  1363,   320,  1258,
    1688,   638,   324,  1279,   869,  1324,   530,  1280,   318,   780,
     776,   337,   625,   329,     1,   488,  1757,   339,  1585,   860,
     786,   337,  1619,   345,   322,   351,     1,     9,   416,     9,
    1172,   530,    17,  1306,     1,   351,  1720,    31,    22,  2018,
    2019,     9,    58,     9,   366,     9,   368,    49,    56,   131,
       9,    39,    31,   111,     9,   389,    49,     1,     6,    48,
    1202,    87,   846,   587,   124,   618,  2003,   317,    17,   115,
      88,   124,   322,   154,   108,    27,    58,   846,   125,   329,
      49,   206,  1305,   854,    50,    58,    88,   337,   161,   178,
    1574,   321,  2291,   323,  2396,    30,   167,  2017,  2407,   167,
     206,   351,   129,    32,     1,   256,   236,   206,    58,   206,
      97,   245,    22,   229,  1256,   314,   346,   754,   348,   643,
     260,    32,  2631,   353,   446,   236,   114,   314,   732,  1341,
      65,    21,    67,    21,   385,   336,   302,   367,   129,   163,
     126,   278,   256,   248,   643,    49,   397,   303,   310,   266,
     314,   922,   403,   404,   203,   406,  1660,  2371,   416,  1901,
     411,   412,    64,   490,   116,   416,   421,   489,   490,   491,
       9,   317,  1314,   125,    55,   426,   577,    73,   235,   289,
    1664,   222,   111,   266,   403,   467,   266,   238,    58,    97,
      98,   363,   514,     0,   504,   517,     0,   266,   180,  1204,
    2399,     6,   191,   453,   126,     8,   495,   155,   291,    90,
     236,   291,   466,  1093,   260,   399,     6,   988,    27,   463,
       0,  1101,   291,   477,   204,   514,   107,   155,   472,   300,
     340,   111,   490,   172,    37,   490,   117,   519,   488,   489,
     490,   491,  2456,  2222,   301,   464,    71,   398,   564,    71,
     216,   173,   236,   241,   655,    49,     9,   756,   202,   575,
     397,   216,  2004,   245,   426,   429,   422,   348,   216,   293,
     177,  1838,  1839,   713,   260,   525,   393,   173,  2787,   320,
    1675,   603,   248,   249,   398,   384,   759,    93,   179,  1416,
     229,   521,   143,   179,   260,   908,   244,   469,   237,    71,
     349,   260,   532,   625,   270,   260,   783,   116,   474,   635,
     217,    71,   260,   701,   564,   270,   421,   518,   519,   635,
     519,   256,   270,   434,   640,   575,   236,   275,   232,   828,
     652,   260,   519,   140,   464,   460,   140,   144,   522,   131,
     144,   276,    71,   489,   490,   491,   819,   481,   366,   260,
    1745,  1746,  1747,  1748,  1749,   406,  1840,   961,  1677,  2661,
    1755,  1226,  2046,   315,   366,   516,  1508,   275,    71,   475,
    1235,  1212,   706,   366,  1215,   625,  1147,   216,   475,   519,
     993,   278,   464,  2303,   323,   635,   413,   940,   178,   355,
     640,   575,   465,   420,   510,    71,   203,   366,    71,   203,
     355,  2338,   337,   474,   348,  2147,   474,   355,  1803,  1193,
     217,   218,   362,   217,   218,   384,   129,  1812,  1641,  2618,
    1815,   260,   413,   411,  1193,   317,   216,   232,   755,   420,
     519,   270,   322,   755,   342,   518,   496,   519,   519,   497,
     762,   763,   764,   496,   771,   772,   773,   339,   699,   771,
     772,   773,   774,   345,   776,  1714,   707,   784,  2767,   427,
     711,   427,   784,   647,   786,   787,   690,   363,   839,   968,
     260,   518,   427,   519,   796,   797,   798,   799,   800,   427,
     270,   475,   780,   734,   518,   519,   459,  1100,   514,   478,
     295,   742,   519,   864,   512,   464,   475,    34,   825,   481,
     397,  1713,   510,   825,   520,   755,   455,   473,   410,   314,
     512,   735,   762,   763,   764,    28,   355,   859,   473,   512,
     464,   771,   772,   773,   774,   473,   776,  2124,   519,   518,
     780,   516,   519,   904,   784,   519,   786,   787,   291,   519,
    2477,  2108,   349,   512,   519,   349,   796,   797,   798,   799,
     800,  1556,   519,  1190,  2296,   519,   854,   525,   929,   525,
     519,   453,  2541,   498,   941,   355,   518,   464,   374,   753,
     525,   519,   366,   469,   454,   825,   466,   525,   466,   459,
     519,     6,   407,   518,  1142,   407,   908,   477,   427,   477,
     384,  1471,   902,   919,   916,  1914,   488,   489,   490,   491,
     830,   471,   990,   919,   854,   358,   476,   260,  1735,   755,
     932,   519,   519,   464,   127,   260,   762,   763,   764,   941,
    1762,  1145,   514,   933,   922,   771,   772,   773,   519,   813,
     952,   126,  1245,   519,   473,   407,   461,   427,   784,   461,
     432,   787,  1030,   449,   960,  1118,  1145,   407,   131,  2285,
     796,   797,   798,   799,   800,   336,    62,   464,   908,   981,
     464,   248,   846,   161,   175,  1625,   916,  2062,   473,   919,
     464,   993,   922,  1286,  1816,   260,  1818,    11,   407,   825,
     519,  2365,  2279,   473,    90,    91,   525,  1075,   220,   461,
     988,  1295,  1296,  1297,  1298,  1299,  1300,  1301,  1302,   124,
     413,   461,   206,   216,   407,   350,   260,   420,    58,   236,
     960,   603,   519,  1855,   241,   519,   260,  2535,   512,  1560,
       1,   972,   245,  2011,    30,    59,   220,   260,   518,   519,
    1496,   407,   461,   192,   407,   525,   275,   366,   988,   260,
     924,    54,    55,   993,   260,     8,   240,   260,   285,   286,
     287,  1893,  1894,  2535,   174,   167,   256,   270,   461,    57,
    2491,   181,    60,    97,   948,    99,    64,   101,  1019,   260,
     916,   284,   266,   260,    37,   109,   260,    90,  1100,    33,
     199,    62,  1553,     6,  1555,   461,    26,  1114,   461,  2520,
     974,   216,  1114,  2696,   107,   471,   294,   291,  1120,   334,
     476,   299,   108,   123,   117,   260,  1177,  1178,   260,    90,
      91,   202,  2535,   296,   335,   352,   261,  1290,  2535,   323,
     246,   171,   128,   275,    65,  1076,    67,     0,  1599,   266,
     236,  2535,   166,  1084,   421,   260,   324,   518,  1062,  1063,
    2476,   260,   355,  2198,  1160,   270,   260,  2535,  2124,  1147,
    1100,  2124,  1223,  1163,   291,  2291,  2115,  2560,   260,  1518,
     207,   356,   168,   755,  1114,   123,   519,  1051,  2771,   173,
     762,   763,   764,   361,   519,   327,  2617,   227,   464,   771,
     772,   773,   774,   512,   776,     6,   192,   419,   300,   236,
     401,  1662,   784,  1143,   786,   787,   275,  1147,   398,  2717,
     355,   207,  1086,   207,   796,   797,   798,   799,   800,  2640,
    1160,  1282,   371,  2616,   427,   169,   411,   430,   431,  2285,
     459,   327,  1173,  1245,  1246,   248,   207,   261,  1254,   192,
     355,   518,   222,   825,   519,  2717,   350,  2678,  1254,  1255,
     395,   163,   479,   480,   325,   167,    38,   484,   350,  2237,
     387,  2306,  1202,   334,    46,   236,  1278,   348,   481,   199,
     341,   342,  1575,  2399,  1286,   519,   392,   465,  1114,  2710,
    2711,  1836,   427,   307,   272,   519,   396,  2718,    57,   360,
     107,  2722,  2723,   518,   307,    64,   519,   416,   464,   216,
     117,  1313,   519,   216,  2717,  1245,  1246,     8,  1320,  1321,
    2717,   446,   427,   519,  1254,  1255,  1256,  1506,   274,  1193,
    2751,  2270,   525,  2717,   327,   256,   123,   271,   331,   332,
     103,   515,   312,  2726,   916,  1413,    37,  1500,   519,  2717,
    1260,   216,   519,   260,   459,   519,  1286,   260,  1675,  2780,
     161,   525,   348,   270,   217,   218,   327,   270,   473,   941,
     348,   539,  1492,  2756,   433,  1668,   435,  1428,   464,  1430,
     159,   490,   375,   508,  1314,   399,   486,   519,  2764,   335,
     525,   496,   413,   525,   519,   260,  1260,   390,   391,  1330,
     303,   518,   519,   416,  1335,   270,  1337,  2783,   314,  1340,
    1341,   511,  1343,   513,   519,   216,   337,   478,    85,  2352,
     525,   425,   164,  2197,  2198,   167,   303,   405,     9,  1754,
     444,    12,   410,   463,    15,    16,   464,   416,     6,  2261,
    2262,   471,   472,   215,   123,    11,   476,  1311,   355,  2580,
    1501,  1502,   355,  1357,   466,  1512,   235,  1321,  1322,   260,
     224,   465,   278,    57,   202,    57,     6,  2197,  2198,   270,
      64,  2602,    64,  1480,  1481,   247,   191,   490,  1480,  1481,
    1487,   542,  1489,  2416,  2417,  1487,   416,  1489,  1813,  1814,
     355,  1395,   256,    59,  1496,   556,   459,   269,   519,   214,
    2769,  2770,  1509,   464,   516,   519,   260,  1509,   467,  1440,
    1512,   490,  1563,   272,  1445,   421,  1567,  1574,   297,   422,
     427,  2790,   301,   620,   427,   471,   180,   588,   131,  1460,
     476,    97,  2306,    99,   403,   101,   266,   291,  2461,  1561,
    2809,   519,  1114,   109,   360,   422,   362,   510,  2623,  2472,
    1480,  1481,   324,  2628,   355,    47,   298,  1487,   300,  1489,
     490,   291,   427,  1565,  1615,  1616,  1496,  2836,  1806,   180,
     473,    63,  1574,  1575,   671,  1553,  2306,  1555,  1508,  1509,
     191,  1583,  2515,   203,   490,   230,   647,   241,   649,   348,
     244,   329,   330,   654,   471,   312,   360,   217,   218,   476,
     166,  1597,  1624,   214,   368,  2789,  1537,  1664,   473,  1611,
     348,   103,  1543,  2688,   386,  2503,   519,  2692,   525,  1550,
    2543,  1599,   525,  1553,  1692,  1555,   427,   266,  2551,   346,
     458,  1699,   235,   244,   471,   365,   428,   173,     9,   476,
     432,  1643,  2530,   464,  1651,  1575,   405,   475,   216,  1651,
     367,   410,   291,  1583,  1480,  1481,   118,   119,   120,  1590,
     525,  1487,  1664,  1489,   465,   403,  1668,  1597,   172,  1599,
    2609,   207,   473,   260,   191,   464,   216,   318,   272,   360,
     272,   322,   464,  1509,  1662,  1753,  1754,    58,   329,   330,
    1600,   144,   260,   296,   204,   261,   337,   214,   301,   340,
     281,   282,   270,   290,   345,   464,   347,   140,   349,   350,
     351,   352,  2776,  1753,  1754,   487,   294,  1757,   519,   780,
     260,  1651,  2786,   233,   525,   229,   307,   308,   369,   349,
     270,  1851,  1662,   237,  2374,   236,  1600,   131,  1668,     8,
     318,   307,   423,   424,   236,  1813,  1814,   191,   335,  1613,
     466,   243,     6,   123,   348,     9,   348,  1688,   488,   260,
     519,   477,   254,  1694,   158,   349,   160,   408,    37,   410,
     214,  1702,   413,  1813,  1814,   762,   763,   764,   340,  2012,
     242,   454,   455,  1840,   845,   369,  1529,   355,   518,   461,
     352,   464,   853,   854,   256,   164,   216,   403,   167,   471,
     787,   464,  1955,  1707,   476,     1,   403,   210,   211,   180,
     176,   405,   313,   405,   315,   355,   410,   461,   410,   323,
    1751,  1752,   464,  1874,  1875,  1651,   464,   471,  2703,    83,
     891,     0,   476,   399,   310,   508,  1887,  1888,  1840,   360,
     260,   362,  2717,   428,  2082,   216,   100,   250,   251,   426,
     270,    47,  1903,  1904,  2539,   464,   461,   216,    26,   427,
    1917,   922,   464,   504,     9,   464,   471,    63,   360,   361,
     464,   476,   464,   464,   245,   798,   799,   800,   444,   341,
     342,   343,  1950,   375,   525,   377,  1816,   427,  1818,   260,
     313,   459,   315,   464,   356,  2818,   252,   253,   464,   270,
     154,   260,   360,   964,   362,   473,     1,   103,  1480,  1481,
     464,   270,   462,    58,   975,  1487,   298,  1489,   300,   220,
     221,   471,   408,   564,  1496,  1855,   476,   988,   384,   256,
    1987,   258,   344,   473,   575,   355,   519,  1509,  1727,   240,
    1729,   195,   196,   197,   434,    40,    41,    42,    43,    44,
     204,   519,  2020,   519,   462,   305,   306,   525,  2196,  2435,
     521,  1892,   216,   471,  1894,   266,  2442,  2443,   476,    23,
      24,   140,   464,   415,   256,   144,   258,   173,   236,   519,
     621,    76,    77,   415,   355,   525,    58,   360,   450,   362,
     291,   256,   378,   258,   635,   249,   355,   222,    66,   640,
      68,   255,   489,   257,   491,   260,   260,   427,   262,   263,
     264,   207,   796,   797,   268,   464,   270,   772,   773,    35,
     512,   275,    38,  2061,   464,  2076,  2077,  2078,   519,    45,
      46,   260,   459,  1964,   203,   499,   500,   501,   502,   519,
     236,   519,   403,   265,  2197,  2198,   464,   243,   217,   218,
     464,    64,   410,   473,   421,   309,   427,    60,   254,  2061,
      12,    69,   519,    15,    16,   468,   464,   470,   427,   519,
     132,   216,   713,   199,   328,  2006,    92,   312,  2009,  1651,
     475,   133,   475,  2203,   475,  2016,  2088,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   475,   475,   475,   519,
     245,   355,   473,    11,  1121,   525,  2163,  1124,   460,   750,
     481,   475,  2043,  1130,   473,   260,   171,  1134,   475,   459,
    2098,   475,  2100,  1140,   475,   270,   475,   475,  2768,   134,
     394,   385,   136,  2201,  2044,  2045,  2138,   135,   137,   780,
    2208,   360,   138,   102,  2146,   510,   162,  2149,   519,   139,
     454,    59,   475,  2306,   525,   142,   459,  2021,   499,   500,
     501,   502,    49,   414,   360,   361,   525,   458,  2098,   455,
    2100,   458,   452,   427,   145,   199,   345,   193,   146,   375,
     349,   377,   147,   514,   148,   439,   440,   167,   275,    97,
      31,    99,  2123,   101,   499,   500,   501,   502,  1488,   215,
    1490,   109,   149,  1493,  1494,  1495,   150,   113,   151,  1499,
     355,   199,   466,   854,   515,  2335,   152,   518,   113,   473,
    1510,  1511,   153,   477,   847,   848,   849,   850,   464,   483,
    2298,   403,   259,  1294,  2354,  2355,   519,  2294,  2358,   318,
     464,   336,   519,   410,   519,    24,    25,   464,   260,   108,
     504,  1312,   464,   269,   260,   509,   351,  2259,   166,   260,
     481,   902,   421,   517,   110,   519,   475,   318,   464,   459,
     519,   525,   519,  2275,  1926,  1927,  1928,  1929,   919,   519,
    2661,   922,   427,   206,   384,   227,  2288,    66,   304,    68,
    2221,    70,   933,   260,   347,  2363,   167,  2228,  2229,  2230,
    2231,   276,   516,   300,   130,  2236,   516,   374,   324,   178,
     459,  2431,   518,  2394,     6,   170,   512,     9,   232,   960,
     131,   459,   459,   519,    49,   104,   105,   106,   473,   281,
     282,  2241,    49,   199,   232,   464,   481,  2268,  2406,   403,
     375,   372,   464,   464,    86,    23,   464,   988,   467,   276,
     455,   409,   236,   261,   348,   307,   308,   260,  2426,  2269,
      73,   519,   464,   524,   241,   434,   523,   305,   280,   461,
     386,  2491,   461,   461,   519,   461,   155,   461,   157,   461,
     525,   461,   459,   461,   400,   164,   459,   371,   167,   206,
     301,    83,  2512,   388,   206,   235,    17,   315,   455,   307,
    2520,  2521,   130,    95,   141,   421,    49,   125,   100,   459,
     206,   374,   143,     8,   199,  2346,   313,   516,   516,   434,
     206,   464,   459,     9,   519,     7,   464,  2547,  2359,   403,
      87,   512,   398,   276,    22,   192,   312,    47,   334,   450,
     305,  1082,  2373,   519,    57,   421,     8,   303,   206,   422,
      49,   512,  2509,   512,   410,   322,   320,   241,   316,   296,
     131,   266,  2372,   336,   114,     4,   319,   449,   403,   207,
     455,   487,   464,  2337,   207,   519,   206,   256,   519,   258,
      19,   514,   260,   233,   206,  2642,  2606,   464,   370,   370,
      29,   399,   103,  2731,     8,  2497,   275,   469,   388,    37,
      49,   266,  1143,   195,   196,   197,  1147,   241,   302,    96,
     222,   159,   204,   474,  2582,   506,   297,   392,  2575,  1160,
    2640,   236,  1163,   464,   216,    64,   519,   516,   192,   459,
      57,   258,   411,   434,   266,    39,   444,  2468,   300,    49,
     111,   345,   266,   266,   464,   266,   455,   525,    53,   459,
      26,  1612,  2672,   421,   411,   409,   464,   249,    17,  2490,
     337,  1202,   110,   255,   357,   257,   495,   199,   260,   345,
     262,   263,   264,  2575,  2612,   458,   268,   260,   270,   464,
     430,   348,   108,   275,   464,   412,  2588,   519,   466,  2591,
     464,   115,  1653,  1654,   191,     7,   376,   429,   459,   227,
      30,   464,   464,  2534,  2535,   518,   224,   115,   443,   345,
    2612,   519,   464,  1254,  1255,  1256,   516,   309,   315,   312,
    2622,   179,   207,    57,   207,   519,   260,  2558,  2559,   225,
     519,  2669,   120,   214,   213,   199,   328,   319,  2569,    49,
     327,   436,     7,  2574,   516,    58,    55,  1068,    53,    60,
      52,   395,   204,  1404,   219,  1065,  1384,   723,  1047,  2240,
    2728,  2663,  2494,   355,  2227,  2431,  2235,  2669,   694,  2425,
    1688,  2220,  2535,  1314,  2605,  2191,  2241,   456,   678,  2816,
    2514,    30,  2511,  2537,  2615,   224,    35,  2638,  2163,    38,
    1331,  2803,  2828,   385,  2780,  2573,    45,    46,  2399,  2630,
    2573,  2632,  2670,  2670,   241,  2636,  1558,  2775,    65,  1154,
    1086,  2779,  1451,   504,  1165,  1556,    65,   256,    67,  2081,
    2080,   539,   813,  1193,   859,   517,   862,   266,   507,  1560,
    1215,   560,   905,  2735,  1832,   427,   912,  1583,  1243,   923,
     519,  1845,  1844,    92,  1600,  2655,   597,   439,   440,  1611,
    1273,   953,  1322,  1627,   603,  1303,  1654,   649,   352,  1897,
    2530,  1822,  1321,  2694,  2695,   635,  1321,  2769,  2770,  2837,
    1003,  1429,  1427,   633,  1505,  1504,  1902,   842,  2709,  1891,
    1890,   473,   321,  2714,  2715,   841,  2278,   326,  2790,  1908,
    1673,   483,  1907,  1647,  1182,   891,  1181,  1647,  1647,  2730,
    2802,  2803,  2733,  2734,  1647,   621,  1034,  2809,  1995,   725,
     514,  1290,   504,   162,  1393,  1388,  2575,   509,   473,   805,
    2194,   360,  2233,  2385,  1602,   517,  2484,   519,  2755,   368,
    2832,  1842,  1059,   525,  2836,  2766,  1310,  1572,  1711,  2769,
    2770,   380,  2646,  1339,   193,  2479,  2771,    -1,    -1,    -1,
      -1,  1492,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2790,    -1,    -1,    -1,    -1,    -1,   215,  1508,    -1,    -1,
      -1,   410,    -1,    -1,    -1,   414,    -1,    -1,    -1,  2809,
      -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   434,    -1,    39,    40,    41,
      42,    43,    44,    -1,    -1,    83,  2836,   256,    -1,    -1,
      -1,    -1,  1553,    -1,  1555,    -1,    -1,    -1,    -1,    -1,
     269,    -1,   100,    -1,    -1,   464,    -1,   276,   467,    -1,
      -1,    -1,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,  2769,  2770,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,  1597,    -1,  1599,    -1,
      -1,    -1,    -1,    -1,  2790,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,   120,    -1,
      -1,    -1,    -1,  2809,    -1,    -1,    -1,    -1,   337,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2575,    -1,    -1,    -1,    -1,    -1,    -1,
    2836,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,   197,
      -1,  1662,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1675,    -1,    -1,   386,    -1,    -1,
     182,   183,   184,   185,   186,    -1,    -1,   189,   190,  2110,
    2111,   400,    -1,    -1,    -1,    -1,    -1,  1698,    -1,    -1,
    2121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   223,   260,    -1,   262,   263,   264,    -1,    -1,    -1,
     268,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,    -1,
      -1,    -1,    -1,    10,  1745,  1746,  1747,  1748,  1749,    -1,
      -1,    18,  1753,  1754,  1755,    -1,  1757,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,   487,   281,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,   498,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1803,    -1,    -1,    72,    -1,    45,    75,   518,
      -1,  1812,  1813,  1814,  1815,  1816,    -1,  1818,    -1,    -1,
      -1,    -1,    89,   325,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    -1,   336,    -1,    -1,  2769,  2770,    -1,
      -1,    -1,  2263,    -1,    -1,   112,    -1,   385,    -1,   351,
    1851,    -1,     9,   120,  1855,   122,    -1,    -1,  2790,    -1,
      -1,    -1,    -1,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,  2809,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,    -1,    -1,
      -1,    -1,   159,  1894,    -1,    -1,    -1,   164,   165,    -1,
     167,   439,   440,   170,  2836,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   452,   417,   418,   419,    -1,  1920,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
      -1,   208,   209,   100,    -1,   483,    -1,    -1,    -1,    -1,
      -1,    -1,   219,    -1,    -1,    -1,    -1,   495,    -1,   226,
      -1,   228,    -1,    -1,   231,    -1,   504,    -1,   235,    -1,
      -1,   509,    -1,    -1,    -1,   213,   514,    -1,    -1,   517,
     518,   519,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,
     492,   493,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   239,    -1,    -1,    -1,    -1,   273,    -1,    -1,    -1,
     277,    -1,   279,    -1,    -1,    -1,    -1,    -1,   256,    -1,
     258,    -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
     297,   298,    -1,   300,   301,   302,   303,    -1,   195,   196,
     197,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,
     317,   289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,
      -1,  2062,    -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   358,   359,    -1,    -1,   333,    -1,  2098,    -1,  2100,
      -1,   339,   369,   260,    -1,   262,   263,   264,    -1,    -1,
      -1,   268,    -1,   270,    -1,   382,   383,  2118,    -1,    -1,
      -1,    -1,   389,    -1,    -1,    -1,   393,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   402,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   412,    -1,    -1,    -1,    -1,
      -1,    -1,   309,    -1,    -1,   422,   423,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   432,    -1,    -1,    -1,    -1,
     437,   438,    -1,    -1,   441,    -1,   443,   415,    -1,    -1,
      -1,    -1,    -1,    -1,   451,    -1,    -1,   425,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,     5,   464,   355,    -1,
      -1,    10,  2203,    -1,   442,    -1,    -1,   474,    -1,    18,
      -1,    -1,    -1,    -1,    -1,   482,    -1,    -1,  2219,  2220,
      -1,    -1,   489,    -1,    -1,    -1,   464,   494,   385,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,   485,    -1,   516,
      -1,    -1,    61,    -1,    -1,   522,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,   505,    -1,    -1,
     427,    -1,    -1,    -1,   512,    -1,   514,    -1,    -1,    -1,
      89,    -1,   439,   440,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,   122,    -1,    -1,   473,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2335,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   154,    -1,   504,    -1,    -1,
      -1,  2352,   509,  2354,  2355,    -1,   165,  2358,    -1,    -1,
     517,   170,   519,    -1,    -1,    -1,    -1,    -1,   525,    -1,
    2371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   198,
       3,    -1,     5,    -1,    -1,    -1,   205,    10,    -1,   208,
     209,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
     219,    -1,    -1,    -1,    -1,  2416,  2417,   226,    -1,   228,
      -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2431,    -1,    -1,  2434,  2435,    -1,    -1,    -1,    51,    52,
      -1,  2442,  2443,  2444,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,  2456,    -1,    -1,    -1,    72,
      -1,    -1,    75,    -1,   273,    -1,    -1,    -1,   277,    -1,
     279,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
     289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,  2503,    -1,    -1,    -1,    -1,   120,   317,   122,
      -1,  2512,    -1,    -1,  2515,    -1,    -1,    -1,    -1,  2520,
    2521,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2530,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      -1,   154,     9,    -1,    -1,    -1,  2547,    -1,    -1,   358,
     359,    -1,   165,    -1,  2555,    -1,    -1,   170,    -1,    -1,
     369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   382,   383,    -1,    -1,    -1,    -1,    -1,
     389,    -1,    49,    -1,   393,   198,    -1,    -1,    -1,    -1,
      -1,    -1,   205,   402,    -1,   208,   209,    -1,    -1,    -1,
      -1,    -1,    -1,   412,    -1,  2606,   219,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   423,   228,    83,    -1,   231,    -1,
      -1,    88,  2623,   432,    -1,    -1,    -1,  2628,   437,   438,
      -1,    -1,   441,   100,   443,    -1,    -1,    -1,    -1,  2640,
      -1,    -1,   451,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,   464,     5,    -1,    -1,    -1,
     273,    10,    -1,    -1,   277,    -1,   279,    -1,    -1,    18,
      -1,  2672,    -1,   482,    -1,    -1,   289,    -1,    -1,    -1,
     489,    -1,    -1,    -1,    -1,   494,    -1,  2688,    -1,    -1,
      -1,  2692,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,   317,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,   522,    -1,    -1,    -1,   330,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    -1,   195,   196,
     197,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,
      89,    -1,    -1,    -1,    -1,   358,   359,    -1,    -1,   216,
      -1,    -1,    -1,    -1,    -1,    -1,   369,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,   382,
     383,   120,    -1,   122,    -1,    -1,   389,    -1,    -1,    -1,
     393,    -1,   249,    -1,    -1,    -1,    -1,    -1,   255,   402,
     257,    -1,    -1,   260,    -1,   262,   263,   264,    -1,   412,
      -1,   268,    -1,   270,    -1,   154,    -1,    -1,   275,    -1,
     423,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,   432,
      -1,   170,    -1,    -1,   437,   438,    -1,    -1,   441,    -1,
     443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   451,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,   314,    -1,   198,
      83,   464,    -1,    -1,    -1,    -1,   205,    -1,    -1,   208,
     209,   328,    -1,    -1,    -1,    -1,    -1,   100,    -1,   482,
     219,    -1,    -1,    -1,    -1,    -1,   489,   226,    -1,   228,
      -1,   494,   231,    -1,    -1,    -1,    -1,    -1,   355,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   522,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,
      -1,    -1,    -1,    -1,   273,    -1,    -1,    -1,   277,    -1,
     279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,
     427,   194,   195,   196,   197,    -1,    -1,    -1,   317,    -1,
      -1,   204,   439,   440,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   473,    -1,    -1,   358,
     359,    -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,    -1,
     369,    -1,    -1,   490,    -1,    -1,    -1,   260,    -1,   262,
     263,   264,    -1,   382,   383,   268,    -1,   504,    -1,    -1,
     389,    -1,   509,    -1,   393,   512,    -1,    -1,    -1,     3,
     517,     5,   519,   402,    -1,    -1,    10,    -1,   525,    -1,
      -1,    -1,    -1,   412,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   423,    -1,   309,    -1,    -1,    -1,
      -1,    -1,    -1,   432,    -1,    -1,    -1,    -1,   437,   438,
      -1,    -1,   441,    -1,   443,    -1,    -1,    51,    52,    -1,
      -1,    -1,   451,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,   482,    -1,    89,    -1,    -1,    20,    -1,
     489,    -1,    -1,    -1,    -1,   494,    -1,    -1,    -1,    -1,
      -1,    -1,   385,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,   122,    -1,
      -1,    -1,    -1,   522,    -1,    -1,   130,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    83,    -1,    -1,    -1,    -1,   439,   440,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,   170,    -1,   100,   452,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
     483,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,
      -1,    -1,   495,    -1,    -1,   219,    -1,    -1,    -1,    -1,
      -1,   504,   226,    -1,   228,    -1,   509,   231,    -1,   161,
      -1,   514,    -1,    -1,   517,   518,   519,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,   196,   197,    -1,    -1,    -1,   273,
      -1,    -1,   204,   277,    -1,   279,    -1,    -1,   210,   211,
      -1,    -1,    -1,    -1,   216,   289,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   236,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   317,    -1,    -1,    -1,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,   257,   330,    -1,   260,    -1,
     262,   263,   264,    -1,    -1,    -1,   268,    -1,   270,    -1,
      -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   358,    -1,   288,    -1,    -1,    -1,
      -1,    -1,   294,    -1,    -1,   369,    -1,   299,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,   309,    -1,   383,
      -1,    -1,   314,    -1,    -1,   389,    -1,   319,    -1,   393,
      -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,   402,    -1,
     195,   196,   197,    -1,    -1,    -1,   338,    -1,   412,   204,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,   423,
      -1,    -1,    -1,   355,    20,    -1,    -1,    -1,   432,    -1,
      -1,    -1,    -1,   437,   438,    -1,    -1,   441,    -1,   443,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   451,    -1,    -1,
      -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,    -1,    -1,
     464,    -1,    -1,    -1,    -1,   260,    -1,   262,   263,   264,
      -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,   482,    -1,
      -1,    -1,    -1,    -1,    -1,   489,    -1,    83,    -1,    -1,
     494,    -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,   439,   440,    -1,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,   522,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,
      -1,   463,    -1,   465,    -1,    -1,   468,    -1,   470,   471,
     472,   473,    -1,   475,   476,    -1,    -1,    -1,    -1,    -1,
      -1,   483,    -1,    -1,    -1,   350,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    -1,   161,     9,    -1,    -1,    -1,
      -1,    -1,   504,    -1,    -1,   171,    -1,   509,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   517,    -1,   519,    -1,    -1,
     385,    -1,    -1,   525,    -1,    -1,    -1,    -1,    -1,   195,
     196,   197,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,
      -1,    -1,    -1,    -1,   210,   211,    -1,    -1,    -1,    -1,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,   439,   440,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   249,   250,   251,    -1,   100,    -1,   255,
      -1,   257,    -1,    -1,   260,    -1,   262,   263,   264,    -1,
      -1,    -1,   268,    -1,   270,    -1,    -1,    -1,    -1,   275,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   483,    -1,
      -1,    -1,   288,    -1,    -1,    -1,    -1,    -1,   294,    -1,
      -1,     6,    -1,   299,     9,    -1,    -1,    -1,    -1,   504,
      -1,   307,    -1,   309,   509,    -1,    -1,    -1,   314,    -1,
     163,    -1,   517,   319,   519,    30,    -1,    -1,    -1,    -1,
      35,    -1,   328,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,   196,   197,    -1,    -1,    -1,    -1,   355,
      65,   204,    67,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,   385,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,
      -1,    -1,   255,    -1,   257,    -1,    -1,   260,    -1,   262,
     263,   264,    -1,    -1,    -1,   268,    -1,   270,    -1,    -1,
      -1,   427,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   439,   440,     6,    -1,    -1,     9,    -1,
     293,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   461,   309,   463,    -1,   465,
      -1,    -1,   468,    -1,   470,   471,   472,   473,    -1,   475,
     476,    -1,    -1,    -1,    -1,   328,    -1,   483,   193,    -1,
     195,   196,   197,    -1,    -1,    -1,    -1,    -1,    -1,   204,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,
     215,   216,   355,   509,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   517,    83,   519,    -1,    -1,    -1,    -1,    -1,   525,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,   384,   385,    -1,   249,    -1,    -1,    -1,    -1,    -1,
     255,   256,   257,    -1,    -1,   260,    -1,   262,   263,   264,
      -1,    -1,    -1,   268,   269,   270,    -1,    -1,    -1,    -1,
     275,   276,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   439,   440,    -1,   304,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,
     473,    -1,   337,    -1,   195,   196,   197,    -1,    -1,    -1,
     483,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,
     355,    83,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,   504,    -1,    95,    -1,    -1,   509,    -1,   100,    -1,
      -1,    -1,    -1,    -1,   517,   518,   519,    -1,    -1,    -1,
     385,   386,   525,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,    -1,    -1,   255,   400,   257,    -1,    -1,   260,
      -1,   262,   263,   264,    -1,    -1,    -1,   268,    -1,   270,
      -1,    -1,    -1,    -1,   275,    -1,   421,    -1,    -1,    -1,
      -1,    -1,   427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   439,   440,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,   196,   197,    -1,   328,   473,    -1,
       6,    -1,   204,     9,    -1,    -1,    -1,    -1,   483,    -1,
      -1,    -1,   487,    -1,   216,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   498,   355,    -1,    -1,    -1,    -1,   504,
      -1,    -1,    -1,    -1,   509,    -1,    -1,     6,    -1,    -1,
       9,    -1,   517,   518,   519,    -1,    -1,   249,    -1,    -1,
     525,    -1,    -1,   255,   385,   257,    -1,    -1,   260,    -1,
     262,   263,   264,    -1,    -1,    -1,   268,    -1,   270,    -1,
      -1,    -1,    -1,   275,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,   100,    -1,   427,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   439,   440,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,   328,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   473,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   483,   355,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,   509,    -1,
      -1,    -1,    -1,   385,    -1,    -1,   517,    -1,   519,   195,
     196,   197,    -1,    -1,   525,    -1,    -1,    83,   204,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     216,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   427,   195,   196,   197,    -1,
      -1,    -1,    -1,    -1,    -1,   204,    -1,   439,   440,    -1,
      -1,    -1,    -1,   249,    -1,    -1,    -1,   216,    -1,   255,
      -1,   257,    -1,    -1,   260,    -1,   262,   263,   264,    -1,
      -1,    -1,   268,    -1,   270,    -1,    -1,    -1,    -1,   275,
      -1,   473,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     249,   483,    -1,    -1,    -1,    -1,   255,    -1,   257,    -1,
      -1,   260,    -1,   262,   263,   264,    -1,    -1,    -1,   268,
      -1,   270,   504,   309,    -1,    -1,   275,   509,    -1,   195,
     196,   197,    -1,    -1,    -1,   517,    -1,   519,   204,    -1,
      -1,    -1,   328,   525,    -1,    -1,     6,    -1,    -1,     9,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,
      -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,   255,
      -1,   257,    -1,    -1,   260,    -1,   262,   263,   264,   385,
      -1,    -1,   268,    -1,   270,    -1,   355,    -1,    -1,   275,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,   385,    -1,     9,    -1,
     100,   427,    -1,   309,    -1,    -1,    -1,    -1,   314,    -1,
      -1,    -1,    -1,   439,   440,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,   427,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,    -1,   355,
     439,   440,    -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     459,    -1,    83,    -1,    -1,    -1,    -1,    -1,   504,   385,
      -1,    -1,    -1,   509,   473,    -1,    -1,    -1,    -1,   100,
      -1,   517,    -1,   519,   483,   195,   196,   197,    -1,   525,
      -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,   504,   216,    -1,    -1,    -1,
     509,   427,    -1,    -1,    -1,    -1,   100,    -1,   517,    -1,
     519,    -1,   232,   439,   440,    -1,   525,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,   249,
      -1,    -1,    -1,    -1,    -1,   255,    -1,   257,    -1,    -1,
     260,    -1,   262,   263,   264,    -1,    -1,   473,   268,    -1,
     270,    -1,    -1,    -1,    -1,   275,    -1,   483,    -1,    -1,
      -1,    -1,    -1,    -1,   195,   196,   197,    -1,   199,    -1,
      -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,   504,    -1,
      -1,    -1,    -1,   509,    -1,   216,    -1,    -1,    -1,   309,
      -1,   517,    -1,   519,    -1,    -1,    83,    -1,    -1,   525,
      -1,   195,   196,   197,    -1,    -1,    -1,    -1,   328,    -1,
     204,    -1,    -1,   100,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,   216,    -1,   255,    -1,   257,    -1,    -1,   260,
      -1,   262,   263,   264,    -1,   355,    -1,   268,    -1,   270,
      -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,
      -1,   255,    -1,   257,    -1,   385,   260,    -1,   262,   263,
     264,    -1,    -1,    -1,   268,    -1,   270,    -1,   309,    -1,
      -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,     9,    -1,   328,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   427,   195,   196,
     197,    -1,    -1,    -1,    -1,   309,    -1,   204,    -1,   439,
     440,    -1,    -1,    -1,   355,    -1,    -1,    -1,    -1,   216,
      -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   473,   385,    -1,    -1,    -1,    -1,    -1,
      -1,   355,   249,   483,    -1,    -1,    -1,    -1,   255,    83,
     257,    -1,    -1,   260,    -1,   262,   263,   264,    -1,    -1,
      -1,   268,    -1,   270,   504,    -1,   100,    -1,   275,   509,
      -1,   385,    -1,    -1,    -1,    -1,   427,   517,    -1,   519,
      -1,    -1,    -1,    -1,    -1,   525,    -1,    -1,   439,   440,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,   421,    -1,    -1,
      -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   328,   473,    -1,    -1,   439,   440,    -1,    -1,    -1,
      -1,    -1,   483,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,
      -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,   509,   473,
      -1,   195,   196,   197,    -1,    -1,   517,    -1,   519,   483,
     204,    -1,    -1,    -1,   525,    -1,    -1,    -1,   385,    -1,
      -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     504,    -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   517,    -1,   519,    -1,    -1,    -1,    -1,
      -1,   525,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,
     427,   255,    -1,   257,    -1,    -1,   260,    -1,   262,   263,
     264,    -1,   439,   440,   268,    -1,   270,    -1,    -1,    -1,
      -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   473,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,   483,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   328,   100,    -1,   504,    -1,    -1,
      -1,    -1,   509,    -1,    -1,     1,    -1,    -1,    -1,    -1,
     517,    -1,   519,    -1,    -1,    -1,    -1,    -1,   525,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    -1,
     195,   196,   197,   427,    -1,    -1,    -1,    -1,    -1,   204,
      -1,    -1,    -1,    -1,    -1,   439,   440,    -1,    -1,    -1,
      -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,
      -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,   483,
     255,    -1,   257,    -1,    -1,   260,    -1,   262,   263,   264,
      -1,    -1,    -1,   268,    -1,   270,   162,    -1,    -1,    -1,
     504,    -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,    -1,
      -1,    -1,   178,   517,    -1,   519,   182,   183,   184,   185,
     186,   525,    -1,   189,   190,    -1,    -1,   193,    -1,    -1,
      -1,    -1,    -1,   199,   309,   201,    -1,    -1,    -1,    -1,
      -1,   207,    -1,    -1,    -1,    -1,   212,    -1,    -1,   215,
      -1,    -1,    -1,   328,    -1,    -1,    -1,   223,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     236,    -1,    -1,   239,    -1,    -1,    -1,    -1,    -1,   245,
     355,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     256,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   281,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,
      -1,    -1,   427,    -1,    -1,    -1,    -1,    -1,   324,   325,
      -1,    -1,    -1,    -1,   439,   440,    -1,   333,    -1,    74,
     336,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   351,   461,   353,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   471,    -1,   473,    -1,
     475,   476,    -1,    -1,    -1,    -1,    -1,    -1,   483,    -1,
      -1,    -1,    -1,   379,    -1,   120,    -1,    -1,    -1,    -1,
     386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   504,
      -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,   404,    -1,
      -1,    -1,   517,    -1,   519,    -1,    -1,    -1,    -1,   415,
     525,   417,   418,   419,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,    -1,   178,    -1,    -1,    -1,   182,   183,   184,
     185,   186,    -1,    -1,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   459,    -1,    -1,    -1,    -1,   464,    -1,
      -1,    -1,   207,   469,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   481,    -1,    -1,   223,    -1,
      -1,   487,    -1,    -1,    -1,   491,   492,   493,    -1,    -1,
      -1,   236,    -1,    -1,   239,    -1,    21,    -1,    -1,   505,
     245,    -1,    -1,    -1,   510,    -1,   512,    -1,    -1,    -1,
      -1,    36,    -1,   519,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,    74,
      38,    76,    77,    78,    79,    80,    81,    82,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
     325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,
      -1,   336,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   364,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,   184,
     185,   186,    -1,    -1,   189,   190,    -1,    -1,    -1,    -1,
     415,    -1,   417,   418,   419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
     445,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,
      -1,   236,   200,   201,   239,    -1,    -1,    -1,    -1,   464,
     245,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   491,   492,   493,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,   247,
     505,    -1,    -1,    -1,    -1,    -1,    -1,   512,   256,    -1,
      -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,    -1,   267,
      -1,   269,    -1,    -1,    -1,    -1,   311,    -1,   276,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
     325,    -1,    38,   291,   292,    -1,    -1,    -1,   333,    -1,
      46,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   353,   354,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     415,   379,   417,   418,   419,    -1,    32,    -1,   386,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,   400,    -1,    -1,    -1,   404,    -1,    -1,    -1,
     445,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    67,    -1,   421,    -1,    -1,    -1,    -1,    74,   464,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   481,   193,    -1,    -1,
     448,    -1,    -1,    -1,    -1,   201,   491,   492,   493,   457,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
     505,    -1,    -1,    -1,   120,    -1,    -1,   512,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,   487,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   497,
     100,   247,    -1,    -1,    -1,   503,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
     518,   267,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   182,   183,   184,   185,
     186,    -1,    -1,   189,   190,   291,   292,   193,    -1,    -1,
      -1,    -1,    -1,   199,    -1,   201,    -1,    -1,    -1,    -1,
      -1,   207,    -1,    -1,    -1,    -1,   212,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     236,    -1,    -1,   239,    -1,   195,   196,   197,    -1,    -1,
      -1,   247,    -1,    -1,   204,    -1,    -1,   353,   354,    83,
     256,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,    -1,   269,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   379,    -1,   281,    -1,    -1,    -1,    -1,
     386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,
      -1,    -1,    -1,    -1,   400,   255,    -1,   257,   404,    -1,
     260,    -1,   262,   263,   264,   311,    -1,    -1,   268,    -1,
     270,    -1,    -1,    -1,    -1,   421,    -1,    -1,   324,   325,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,
     336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   448,    -1,    -1,   351,    -1,   353,    -1,   309,
      -1,   457,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   195,   196,   197,    -1,    -1,    -1,    -1,   328,    -1,
     204,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,
     386,   487,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   497,    -1,    -1,    -1,   355,    -1,   503,   404,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,   415,
      -1,   417,   418,   419,    -1,   249,    -1,    -1,    -1,    -1,
      -1,   255,   100,   257,    -1,   385,   260,    -1,   262,   263,
     264,    -1,    -1,    -1,   268,    -1,   270,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   459,    -1,    -1,    -1,    -1,   464,    -1,
      -1,    -1,    -1,   469,    -1,    -1,    -1,   427,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,   439,
     440,   487,    -1,    -1,    -1,   491,   492,   493,    -1,    -1,
      -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,   505,
      -1,   461,    -1,    -1,   510,    -1,   512,    83,    -1,    -1,
      -1,   471,    -1,   473,    -1,   475,   476,   195,   196,   197,
      -1,   355,    -1,   483,   100,    -1,   204,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,   100,   509,
      -1,   385,    -1,    -1,    -1,    -1,    -1,   517,    -1,   519,
      -1,    -1,    -1,    -1,    -1,   525,    -1,    -1,    -1,    -1,
      -1,   249,    -1,    -1,    -1,    -1,    -1,   255,    -1,   257,
      -1,    -1,   260,    -1,   262,   263,   264,    -1,    -1,    -1,
     268,    -1,   270,   427,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   439,   440,    -1,    -1,    -1,
      -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,   195,
     196,   197,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,
      -1,   309,    -1,    -1,    83,    -1,    -1,   471,    -1,   473,
     216,   475,   476,   195,   196,   197,    -1,    -1,    -1,   483,
     328,   100,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,
     504,    -1,    -1,   249,    -1,   509,    -1,   355,    -1,   255,
      -1,   257,    -1,   517,   260,   519,   262,   263,   264,    -1,
      -1,   525,   268,    -1,   270,    -1,    -1,   249,    -1,    -1,
      -1,    -1,    -1,   255,    -1,   257,    -1,   385,   260,    -1,
     262,   263,   264,    -1,    -1,    -1,   268,    -1,   270,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   195,   196,   197,   427,
      -1,    -1,   328,    -1,    -1,   204,    -1,   309,    -1,    -1,
      -1,   439,   440,    -1,    -1,    -1,    -1,   216,    -1,   447,
      -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,   355,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   471,    -1,   473,    -1,   475,   476,    -1,
     249,    -1,    -1,   355,    -1,   483,   255,    -1,   257,   385,
      -1,   260,    -1,   262,   263,   264,    -1,    -1,    -1,   268,
      -1,   270,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,
      -1,   509,    -1,   385,    -1,    -1,    -1,    -1,    -1,   517,
      -1,   519,    -1,    -1,    -1,    -1,    -1,   525,    83,    -1,
      -1,   427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,    -1,    -1,   439,   440,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,   427,    -1,    -1,    -1,   328,
      -1,    -1,    -1,    -1,    -1,   461,    83,   439,   440,   100,
      -1,    -1,    -1,    -1,    -1,   471,    -1,   473,    -1,   475,
     476,    -1,    -1,   100,    -1,    -1,   355,   483,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   471,
      -1,   473,    -1,   475,   476,    -1,    -1,    -1,   504,    -1,
      -1,   483,    -1,   509,    -1,    -1,   385,    -1,    -1,    -1,
      -1,   517,    -1,   519,    -1,    -1,    -1,    -1,    -1,   525,
      -1,    -1,   504,    -1,    -1,    -1,    -1,   509,    -1,    -1,
     195,   196,   197,    -1,    -1,   517,    -1,   519,    -1,   204,
      -1,    -1,    -1,   525,    -1,    -1,    -1,    -1,   427,    -1,
      -1,   216,    -1,    -1,   195,   196,   197,    -1,    -1,    -1,
     439,   440,    -1,   204,    -1,    -1,    -1,    -1,   195,   196,
     197,    -1,    -1,    -1,    -1,   216,    -1,   204,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,   216,
     255,    -1,   257,    -1,   473,   260,   475,   262,   263,   264,
      -1,    -1,    -1,   268,   483,   270,    -1,    -1,   249,    -1,
      -1,    -1,    -1,    -1,   255,    -1,   257,    -1,    -1,   260,
      -1,   262,   263,   264,    -1,   504,    -1,   268,    -1,   270,
     509,    -1,    -1,   260,    -1,   262,   263,   264,   517,    -1,
     519,   268,    -1,   270,   309,    -1,   525,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,   328,    -1,    -1,
     355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   355,    -1,   381,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,
      -1,    -1,   427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   439,   440,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   439,   440,
     427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,    -1,
      -1,    -1,   439,   440,    -1,    -1,    -1,    -1,   483,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   473,    -1,    -1,    -1,    -1,    -1,    -1,   504,
      -1,    -1,   483,    -1,   509,    -1,   473,    -1,    -1,    -1,
      -1,    -1,   517,    -1,   519,    -1,   483,    -1,    -1,    -1,
     525,    -1,    -1,   504,    -1,    -1,    -1,    -1,   509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   517,   504,   519,    -1,
      -1,    -1,   509,    -1,   525,    -1,    -1,    -1,    -1,    -1,
     517,    -1,   519,    -1,    -1,    -1,    -1,    -1,   525
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   529,   530,     0,   217,   218,   531,   532,   533,   534,
     535,   536,   537,   543,   123,   123,   533,   155,   542,   556,
     557,   203,   349,   544,   547,   464,   464,   123,   103,   670,
     672,    85,   558,   559,   548,   545,   542,   542,   464,   123,
     345,   832,   835,   467,   673,   403,   230,   621,   622,   310,
     426,   560,   561,   565,   464,   464,   144,   538,   539,   540,
     140,   541,   464,   123,   858,   859,   403,   674,   464,   403,
     176,   623,   464,   464,   428,   582,   565,   561,   260,   350,
     549,   549,   260,   350,   550,   540,   550,    56,   510,   836,
       1,     3,     5,    10,    18,    51,    52,    61,    72,    75,
      89,   112,   120,   122,   154,   165,   170,   198,   205,   208,
     209,   219,   226,   228,   231,   273,   277,   279,   289,   317,
     330,   358,   359,   369,   382,   383,   389,   393,   402,   412,
     423,   432,   437,   438,   441,   443,   451,   464,   482,   489,
     494,   522,   860,   861,   877,   882,   886,   891,   911,   915,
     919,   923,   924,   925,   930,   944,   948,   951,   965,   969,
     972,   975,   979,   980,   984,   994,   997,  1015,  1017,  1020,
    1024,  1030,  1042,  1050,  1051,  1054,  1055,  1059,  1064,  1065,
    1073,  1089,  1099,  1108,  1113,  1122,  1126,  1128,  1131,  1134,
    1137,  1164,   860,   464,   175,   401,   671,   675,   676,   678,
     464,   464,   625,   566,   562,   464,    11,    59,    97,    99,
     101,   109,   166,   261,   307,   399,   444,   519,   583,   584,
     585,   586,   587,   593,   602,   604,   609,   612,   613,   615,
     616,   617,   618,   619,   620,    26,   551,   551,   464,   464,
     838,   837,   384,   844,     3,     5,    10,    18,    51,    52,
      61,    72,    75,    89,   112,   120,   122,   130,   132,   133,
     134,   135,   136,   137,   138,   139,   141,   142,   143,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   165,
     170,   198,   205,   208,   209,   219,   226,   228,   231,   273,
     277,   279,   289,   317,   330,   358,   369,   383,   389,   393,
     402,   412,   423,   432,   437,   438,   441,   443,   451,   464,
     482,   489,   494,   522,  1311,   862,   878,   883,   887,   892,
     912,   916,   920,   926,   931,   945,   949,   952,   966,   970,
     973,   976,   206,   384,   903,   968,   981,   985,   995,   998,
    1016,  1018,  1021,   408,  1025,  1031,  1043,  1052,  1056,  1060,
    1066,  1074,  1090,  1100,   260,   355,   395,   427,   525,  1112,
    1114,  1123,   344,  1127,  1129,   847,  1132,  1135,  1138,  1165,
     521,   706,   708,   709,     1,   519,  1236,   238,   406,   624,
     626,    57,    64,   272,   348,   405,   410,   519,   567,   568,
     569,   570,   571,   572,   573,   575,  1320,  1382,   563,   575,
       1,   519,  1250,  1250,   434,   415,  1353,   236,  1334,  1334,
    1334,  1250,   415,  1334,    58,  1321,   588,   378,   576,   585,
     464,   586,   222,   603,   260,   464,   546,    49,   839,   840,
     841,  1319,   839,   314,   519,   464,   314,   519,   863,   865,
    1273,  1274,  1277,     6,     9,    83,    95,   100,   195,   196,
     197,   204,   216,   249,   255,   257,   260,   262,   263,   264,
     268,   270,   275,   309,   328,   355,   385,   427,   439,   440,
     473,   483,   504,   509,   517,   525,   879,  1230,  1255,  1256,
    1273,  1284,  1285,  1286,  1287,  1288,  1289,  1290,   249,   471,
     475,   476,   884,  1225,  1226,  1227,  1228,  1229,  1230,  1259,
    1273,  1285,  1287,   260,   888,   889,  1241,  1242,  1243,  1277,
     275,   433,   435,   893,   895,   260,   350,   913,   914,  1264,
    1273,   917,  1236,     6,   921,  1231,  1232,  1253,  1275,  1276,
    1277,  1285,   467,   927,  1236,   260,   314,   932,   933,   934,
     935,   937,  1255,  1264,  1273,   946,  1256,   260,   950,   466,
     477,   953,   954,   955,  1213,  1214,  1215,   202,   329,   330,
     348,   403,   967,   971,  1252,  1253,   974,  1277,   459,   977,
    1362,  1256,  1212,  1213,   986,  1252,   519,   996,  1237,   999,
    1000,  1273,  1284,  1287,  1091,  1271,  1272,  1277,    95,  1019,
    1256,  1022,  1256,   172,   229,   237,   323,  1026,  1027,   194,
     260,   518,  1032,  1036,  1037,  1038,  1241,  1265,  1273,  1277,
    1287,  1366,  1044,  1236,  1053,  1233,  1277,  1057,  1236,  1061,
    1233,     9,  1067,  1234,  1277,   155,   244,   275,  1075,  1078,
    1079,  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1238,  1239,
    1252,  1270,  1272,  1277,  1091,  1101,  1236,  1109,  1115,  1116,
    1117,  1256,    95,  1124,  1255,  1130,  1237,   464,   519,   848,
     849,   852,   853,   858,  1133,  1273,  1136,  1236,  1139,  1273,
    1166,  1233,   403,   265,   767,   129,   413,   420,   710,   711,
     713,   723,   725,   727,  1298,   464,   677,   464,   294,   318,
    1306,   278,   397,   660,   661,   662,   663,   665,   410,   421,
      64,  1334,   464,   569,   464,   519,   568,    60,  1334,   564,
    1366,   594,  1334,  1334,  1334,  1245,  1277,    69,  1245,  1334,
    1334,  1245,   519,   605,   606,   607,  1251,   260,   313,   315,
     589,   591,   592,  1076,  1280,  1334,   464,   464,   519,   552,
    1334,   840,   421,   490,   842,   366,   512,   833,   222,   312,
    1372,   132,   876,   864,   199,   475,  1278,  1279,   312,  1344,
    1286,  1273,   475,   475,   475,  1292,  1274,  1285,  1287,  1372,
    1372,   475,   475,   475,   475,  1372,   475,  1292,   133,   881,
     459,   880,  1256,   460,   475,  1291,   475,   475,  1274,  1285,
    1287,  1229,  1273,  1225,  1229,    58,   471,   476,   463,   472,
     171,   227,  1301,   889,   459,  1372,   134,   910,   260,   350,
     896,  1265,   914,  1236,   365,   488,   918,  1366,  1378,  1344,
     135,   922,   161,   465,  1232,  1370,   394,  1307,  1278,  1279,
     928,  1236,   136,   929,   360,  1350,   137,   943,   167,   300,
    1179,  1181,  1183,   935,  1254,  1255,   936,   499,   500,   501,
     502,   138,   947,    49,   232,   510,   897,   139,   964,    17,
     516,   956,   957,   958,   960,    12,    13,    14,    20,   161,
     171,   210,   211,   250,   251,   288,   294,   299,   307,   314,
     319,   338,   461,   463,   465,   468,   470,   471,   472,   475,
     476,  1216,  1217,  1218,  1219,  1220,  1221,  1222,  1256,   102,
     968,  1253,  1240,   454,  1360,   987,  1366,  1237,    93,   374,
     449,  1001,  1002,  1004,  1005,  1093,   475,  1278,  1256,   459,
     142,  1023,    49,  1027,   414,  1028,  1037,   143,   464,  1033,
    1035,   495,   514,   455,   458,   452,   145,  1049,   289,   340,
    1304,   199,  1167,   146,  1058,  1350,   147,  1063,  1167,  1234,
     148,  1072,   514,  1068,  1262,  1273,  1285,   167,  1085,  1087,
    1252,   459,  1239,   124,   459,   496,  1077,    31,  1278,   149,
    1107,   180,   241,   244,  1103,   903,  1110,  1256,  1366,   150,
    1121,   232,  1117,   113,  1118,  1273,   151,  1125,   199,  1237,
     403,   464,   464,   199,   360,   362,  1351,   152,  1148,   113,
    1140,   153,  1171,  1167,   464,   403,   259,   769,   519,   715,
     715,   715,   711,   464,     1,   178,   714,   715,   519,   679,
     318,  1250,   666,   360,   423,   424,   664,     1,   464,   662,
    1334,   410,  1280,   464,  1334,   519,  1246,   464,   108,  1334,
     216,   260,   270,   355,   427,   473,   525,   610,   611,  1283,
    1245,   260,   260,   481,   606,    22,   236,  1251,  1335,  1076,
     236,   434,  1346,  1334,    97,  1250,   577,   464,    73,   173,
     363,   469,   553,   554,   555,  1334,   421,   318,   843,   110,
     845,  1277,    30,   200,   276,   866,   867,   868,   870,   873,
    1317,  1366,    24,    25,    66,    68,    70,   104,   105,   106,
     155,   157,   164,   167,   256,   258,   456,   507,   519,   869,
    1239,  1369,  1223,  1225,   475,  1279,   154,   348,  1260,  1274,
     459,  1223,  1225,  1296,  1223,  1297,   461,  1223,   519,   519,
    1225,  1295,  1295,  1295,  1258,  1273,  1285,  1287,  1294,   519,
    1258,  1293,     6,  1231,  1256,  1277,  1285,   206,  1286,  1225,
    1258,  1223,   461,   227,  1302,  1226,  1226,  1227,  1227,  1227,
     384,   885,   347,   890,  1243,   894,   918,   266,   291,   192,
    1327,  1274,  1225,   276,  1308,  1279,  1236,   235,   301,  1205,
    1206,  1208,  1210,   855,   856,   855,  1182,  1183,  1180,  1181,
     498,   870,   873,   938,   939,   940,  1366,  1179,  1179,  1179,
    1179,  1256,  1231,  1256,   898,   955,    21,   466,   477,   961,
     962,  1214,   516,   958,   959,   516,   855,  1362,   236,  1217,
     115,   978,  1241,   130,   855,   982,     9,    12,    15,    16,
     281,   282,   307,   308,   988,   992,   178,  1262,     9,    58,
     180,   245,   481,  1008,  1009,  1010,  1003,  1004,   125,   315,
     518,  1095,  1345,  1381,   459,  1252,  1231,  1256,  1028,  1366,
    1235,  1236,   855,   170,  1039,  1212,  1040,  1041,  1273,  1241,
       8,    37,  1169,  1350,  1269,  1273,  1284,  1287,   232,  1045,
    1062,  1366,   131,  1069,  1273,  1069,   459,   459,   459,  1076,
     154,   466,   477,  1256,    49,    38,    46,   215,   247,   269,
     324,   386,   487,  1080,  1081,  1334,  1102,  1366,  1256,   163,
     293,  1273,  1319,   199,  1231,  1256,   854,  1280,  1262,  1319,
     232,  1143,  1168,  1169,   707,   464,   403,   375,   771,   726,
     728,   372,   464,   464,   712,    86,    47,    63,   103,   243,
     254,   360,   361,   375,   377,   464,   512,   680,   681,   683,
     687,   688,   691,   692,   698,   701,   703,   704,  1334,   627,
     467,  1325,    23,  1315,   464,  1280,   261,   446,   508,   574,
    1246,   276,    28,   127,   216,   260,   270,   284,   355,   427,
     430,   431,   525,   595,   596,   597,   600,   611,   455,   614,
    1366,   409,   260,   608,  1281,  1346,   236,  1250,  1250,   590,
     591,   202,   348,   578,   579,   580,   555,   348,  1349,    73,
      32,   111,  1280,  1334,   519,   464,   834,   525,  1266,  1270,
    1280,  1334,   164,   167,   298,   300,  1172,  1174,  1175,  1177,
    1178,   868,    65,    67,   256,   337,   871,   872,  1368,    32,
      35,    38,    46,    92,   111,   193,   201,   215,   247,   267,
     269,   291,   292,   324,   353,   354,   379,   386,   400,   404,
     421,   448,   457,   487,   497,   503,   874,   875,  1172,   524,
     523,  1262,  1172,   241,   434,   305,   280,    71,   407,   461,
    1224,   462,  1225,   260,  1261,  1274,  1273,  1224,   461,  1224,
     461,   461,  1224,   461,   461,   461,  1224,   461,  1224,   461,
    1344,   303,   422,  1184,  1186,  1188,  1278,  1279,  1231,   462,
     461,   461,   459,  1303,   885,  1253,   459,  1241,   897,   388,
     371,  1184,  1334,   855,   855,  1209,  1210,  1207,  1208,   857,
      97,    98,   342,   519,   941,  1239,   939,    35,    38,    45,
      46,    92,   162,   193,   215,   269,   304,   324,   386,   400,
     421,   487,   942,   206,  1184,   206,   899,   900,   901,  1319,
      17,   455,   963,   322,   961,  1345,   855,   130,   141,   983,
    1362,   374,   989,  1362,   459,    49,  1009,  1011,  1262,     9,
      58,   245,   481,  1006,  1007,  1262,   125,    64,   410,  1096,
    1367,    27,   116,   753,   222,   320,  1330,  1252,  1184,   206,
    1235,     9,   291,   358,   659,   387,  1029,  1236,  1366,   143,
    1034,     8,   199,  1045,  1273,   131,   296,  1194,  1197,  1199,
    1205,   266,   291,   855,   516,   516,  1070,  1071,  1262,   313,
    1261,  1256,  1076,  1076,  1076,  1076,  1076,  1076,  1076,  1076,
    1081,   294,   299,  1104,  1105,  1106,  1218,  1305,  1205,   248,
     421,  1380,   434,  1358,  1358,  1120,  1366,   421,  1119,  1256,
    1273,  1184,   206,   464,   459,     9,  1141,  1142,  1299,  1144,
    1273,  1120,  1144,  1062,     7,  1312,   708,   768,   464,   403,
     398,   816,   512,   761,   735,   736,  1334,  1277,   730,   716,
    1334,    87,  1322,  1334,   360,   362,  1377,  1377,  1334,  1322,
    1334,   276,  1341,  1334,    22,  1314,   312,   705,  1250,   173,
     207,   628,   450,  1359,  1327,    58,   520,  1376,   597,    17,
     455,  1283,   334,  1281,  1250,     9,   204,   519,   581,   519,
       1,   464,   580,    32,  1280,   846,   847,    47,  1176,  1177,
     855,  1173,  1174,   855,   305,  1342,  1342,  1342,  1334,  1334,
     875,    57,   421,   124,   496,  1334,     8,  1313,  1172,  1225,
     461,  1225,  1307,   447,  1291,   447,  1291,  1245,  1291,  1291,
    1291,  1258,   245,   481,  1291,  1274,   855,   855,  1187,  1188,
    1185,  1186,  1279,  1184,   461,  1225,  1291,  1291,  1263,  1273,
    1284,   902,   903,    34,   285,   286,   287,   352,   479,   480,
     484,  1309,   858,  1334,   256,   398,   131,   158,   160,   824,
     825,  1324,  1334,   124,   496,  1334,  1231,  1232,  1231,  1232,
     900,   314,   842,    88,   366,   512,   962,  1213,   855,  1273,
     855,   512,   990,   991,   992,   993,  1360,   512,  1263,  1262,
      49,     8,    37,  1012,  1013,  1014,  1007,   192,  1012,   410,
    1092,  1334,   241,  1336,   320,  1231,  1029,   322,  1347,  1347,
     316,   266,   291,  1041,  1256,   221,  1046,  1366,   855,   855,
    1198,  1199,  1197,   266,  1213,  1212,  1070,  1218,  1273,  1219,
    1220,  1221,  1222,  1225,  1111,  1256,  1111,   302,   474,  1189,
    1191,  1193,   336,  1307,  1231,   850,  1263,   319,  1262,   114,
    1145,   449,  1147,   159,   297,  1170,  1200,  1202,  1204,  1206,
     327,  1239,  1266,   708,   770,   464,   403,  1335,   761,   207,
     455,   724,    21,    36,    39,    40,    41,    42,    43,    44,
      45,    74,    76,    77,    78,    79,    80,    81,    82,   120,
     182,   183,   184,   185,   186,   189,   190,   223,   239,   281,
     311,   325,   333,   336,   351,   364,   415,   417,   418,   419,
     445,   491,   492,   493,   505,   731,   732,   733,   736,   737,
     738,   739,   740,   741,   742,   745,   757,   758,   759,   760,
     761,   766,  1334,  1355,    26,   199,   729,  1316,   207,  1280,
     519,   642,  1334,  1314,   519,  1247,  1248,   314,   429,  1373,
     260,  1245,  1249,  1280,   514,  1334,   177,   217,   519,   689,
    1250,     4,    19,    29,   224,   256,   321,   326,   360,   368,
     380,   414,   423,   464,   467,   629,   630,   637,   639,   641,
     643,   644,   645,   646,   649,   650,   651,   652,   653,   655,
     656,   658,  1350,  1367,  1322,  1235,   598,   600,   260,   233,
     551,   204,   233,   551,   464,   847,  1266,  1266,  1266,  1266,
    1266,  1334,  1334,  1211,  1268,  1270,  1280,  1211,  1266,   260,
    1267,  1270,  1282,   461,  1184,   461,   167,   300,   474,   905,
     907,   909,     6,   232,   295,   314,   473,   904,  1333,  1266,
    1344,   256,   398,  1266,  1211,  1211,  1266,  1184,   370,  1184,
     370,  1256,   991,   103,  1323,  1362,  1012,  1012,  1263,   469,
    1332,  1332,  1014,  1013,   229,   510,  1097,  1245,  1094,  1184,
     388,    49,   266,   241,  1047,   220,   240,   266,   291,   515,
     855,   855,   855,   855,  1192,  1193,  1190,  1191,  1334,  1184,
    1184,   506,   851,  1149,  1142,   222,  1329,    96,  1146,  1329,
    1189,   855,   855,  1203,  1204,  1201,  1202,   256,   258,  1338,
     708,   772,   464,   763,   764,  1284,  1277,   248,   307,   416,
     490,  1354,   490,  1354,   490,  1354,   490,  1354,   490,  1354,
     516,  1364,   392,  1352,   126,  1280,  1274,   236,   246,   392,
    1337,  1334,   173,   245,   481,   519,    50,   248,   249,   717,
    1284,   459,   686,   192,   702,  1248,   258,  1340,   459,  1321,
    1329,   174,   181,   396,   486,   511,   513,   699,   700,  1334,
    1334,  1341,  1350,   459,   510,  1363,   411,  1334,  1320,   114,
    1336,  1336,   291,   657,  1280,  1366,   434,   266,    39,  1318,
    1334,   667,   668,  1236,   599,   600,   131,  1264,  1266,   256,
     258,  1379,   855,   855,   855,   908,   909,   906,   907,  1344,
    1273,  1232,  1232,    49,   111,  1012,  1256,  1256,   345,  1235,
     206,   323,  1098,  1277,  1256,  1334,  1048,  1195,  1197,  1199,
    1205,   266,   266,   266,  1273,  1150,   464,  1273,  1329,  1273,
     773,   817,   762,   764,   455,   525,    53,   749,   459,   746,
     739,    26,   734,   409,  1310,  1310,  1344,     1,    40,    41,
      42,    43,    44,   182,   183,   184,   185,   186,   187,   188,
     336,   351,   718,   719,   720,   721,   722,   740,   741,  1274,
     718,  1280,    58,   362,   682,  1244,  1245,   693,  1280,   421,
    1356,   260,   690,  1277,   690,  1334,  1336,   126,   173,   634,
     368,   650,  1334,  1334,  1334,  1334,  1315,   659,  1334,  1341,
     411,   642,   668,   337,   669,    17,   110,  1273,  1184,  1184,
    1256,  1334,  1235,   345,   495,  1273,  1198,  1196,  1197,    30,
     128,   168,   207,  1151,  1152,  1153,  1155,  1159,  1161,  1162,
    1163,  1317,  1327,  1273,   357,   774,   713,   727,   818,   819,
     820,   516,   765,  1365,  1284,  1329,   199,   747,  1280,   458,
    1361,   260,  1320,   718,   464,  1245,    48,   478,   694,   695,
     696,   697,  1366,  1321,   199,   685,  1328,   126,   356,   411,
     638,  1334,   118,   119,   120,   242,   256,   341,   342,   343,
     356,   450,   631,   632,   633,  1249,   430,   654,  1245,  1245,
    1245,  1334,  1280,   600,   464,  1036,  1334,  1212,    37,  1313,
     348,   108,  1237,     1,   714,   820,   464,   412,   466,   519,
    1280,   746,   115,   748,  1249,  1249,   191,   686,  1280,   654,
     260,   636,  1277,   636,     7,   636,   636,   260,   635,  1277,
     425,   465,    33,   169,   271,   647,  1036,   376,   429,  1357,
     131,   432,  1160,  1345,   775,   464,   821,   464,   459,  1334,
     227,   750,  1345,   751,   752,  1317,  1321,  1300,  1381,  1325,
    1334,  1244,   518,   648,   648,  1273,   163,   167,  1371,     9,
    1156,  1157,  1242,     1,   776,   822,  1284,   751,  1245,   224,
     754,   753,  1249,   115,   684,   443,   640,  1244,   266,   393,
     345,  1348,   312,   346,   367,  1158,  1157,   464,    62,    90,
      91,   327,   464,   777,   778,   781,  1334,  1390,    32,    35,
      38,    45,    46,   162,   193,   199,   201,   212,   215,   247,
     256,   269,   311,   324,   353,   379,   386,   404,   459,   469,
     487,   510,   737,   738,   742,   757,   759,   761,   823,   830,
     831,  1334,  1368,   754,  1319,  1336,  1345,   516,   315,  1345,
     312,  1277,  1334,  1334,  1314,   252,   253,  1339,   790,   207,
     179,   779,  1326,  1334,   256,   398,   824,   825,  1334,  1269,
    1342,  1280,    57,  1273,  1273,   207,  1342,   519,   755,   756,
    1334,  1245,     9,   427,   525,   601,   278,   360,   362,  1375,
     172,   229,   237,   323,  1154,  1235,  1264,  1334,  1314,   782,
    1282,   713,   791,   780,  1273,  1266,  1266,  1334,  1361,  1334,
    1334,   756,  1244,  1286,  1375,   783,   256,   258,  1374,   714,
     715,  1273,   274,   335,   471,   476,   826,   827,   828,  1264,
     826,   827,   829,   180,   191,   214,   244,   784,   785,   786,
     787,   788,   789,  1282,   792,  1266,  1266,   107,   117,  1383,
    1334,  1334,    55,    90,  1383,  1384,  1369,   793,  1334,  1282,
    1282,   214,  1334,  1334,   213,   256,   258,   289,   311,   339,
     425,   442,   464,   485,   505,   514,   737,   742,   743,   757,
     759,   761,   794,   795,   799,   800,   803,   804,   805,   806,
     807,   808,   813,   814,   815,  1368,  1369,  1282,  1282,  1282,
     225,  1331,   305,   306,  1343,  1314,   213,  1280,   516,  1334,
    1344,  1334,  1334,  1273,   290,   335,   809,   810,  1282,   335,
     811,   812,  1282,  1343,  1314,  1335,  1334,   746,  1212,  1259,
    1257,  1259,    54,    90,   327,   331,   332,   375,   390,   391,
     796,  1383,  1384,  1385,  1386,  1387,  1388,  1389,   120,   199,
    1280,   810,  1280,   812,  1335,   810,  1361,  1307,   381,   801,
    1259,   191,   191,   214,   191,   214,   179,   797,  1273,   797,
    1259,   748,  1345,   319,   798,   798,    49,   436,   744,   179,
     802,  1273,   327,  1259,  1280
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   528,   530,   529,   531,   531,   532,   532,   533,   533,
     535,   534,   536,   537,   538,   538,   539,   539,   540,   541,
     542,   543,   543,   543,   545,   546,   544,   548,   547,   549,
     549,   550,   550,   551,   551,   552,   552,   553,   553,   553,
     553,   554,   554,   555,   555,   556,   557,   557,   558,   559,
     559,   560,   560,   560,   560,   560,   562,   561,   563,   563,
     564,   564,   566,   565,   567,   567,   567,   567,   568,   568,
     569,   569,   569,   569,   570,   571,   572,   573,   574,   574,
     574,   574,   575,   575,   576,   577,   576,   578,   578,   578,
     579,   579,   580,   580,   580,   580,   581,   581,   582,   582,
     583,   583,   584,   584,   585,   585,   586,   586,   586,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   588,   587,
     589,   589,   589,   589,   590,   590,   591,   592,   592,   594,
     593,   595,   595,   595,   595,   595,   595,   596,   596,   597,
     597,   598,   597,   599,   599,   600,   600,   600,   600,   600,
     600,   601,   601,   602,   603,   603,   604,   605,   605,   606,
     607,   607,   608,   608,   609,   610,   610,   611,   611,   612,
     613,   614,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   622,   623,   623,   624,   624,   625,   625,   627,   626,
     628,   628,   629,   629,   629,   629,   629,   629,   629,   629,
     629,   629,   629,   629,   629,   630,   630,   630,   630,   630,
     631,   631,   631,   632,   632,   632,   632,   633,   633,   634,
     634,   634,   635,   635,   636,   636,   636,   637,   638,   638,
     638,   639,   640,   640,   640,   641,   642,   643,   644,   644,
     644,   646,   645,   647,   647,   647,   648,   648,   648,   648,
     649,   649,   650,   650,   650,   650,   651,   652,   653,   654,
     654,   654,   655,   656,   657,   657,   658,   659,   659,   659,
     660,   660,   660,   661,   661,   662,   662,   663,   664,   664,
     664,   664,   666,   665,   667,   667,   668,   669,   669,   671,
     670,   672,   672,   673,   673,   674,   674,   675,   677,   676,
     676,   678,   678,   679,   679,   680,   680,   680,   680,   680,
     680,   680,   680,   680,   680,   680,   681,   682,   682,   682,
     683,   683,   683,   684,   684,   685,   685,   686,   686,   687,
     688,   688,   689,   689,   690,   690,   691,   692,   693,   693,
     694,   694,   694,   695,   696,   697,   698,   699,   699,   699,
     699,   699,   700,   700,   701,   702,   702,   703,   704,   704,
     705,   705,   706,   707,   706,   708,   709,   708,   710,   710,
     711,   711,   711,   712,   711,   711,   713,   714,   714,   714,
     715,   716,   716,   717,   717,   717,   717,   718,   718,   718,
     718,   718,   718,   718,   718,   718,   718,   718,   718,   718,
     719,   719,   720,   720,   721,   721,   721,   722,   722,   723,
     724,   724,   726,   725,   727,   728,   727,   729,   729,   730,
     730,   731,   731,   731,   731,   731,   731,   731,   731,   731,
     731,   731,   731,   731,   732,   733,   734,   734,   735,   735,
     736,   737,   738,   738,   739,   739,   739,   739,   739,   739,
     739,   739,   739,   739,   739,   739,   739,   739,   739,   739,
     739,   739,   739,   739,   739,   739,   739,   739,   739,   739,
     739,   739,   739,   739,   739,   739,   739,   739,   739,   739,
     740,   740,   741,   741,   742,   742,   743,   744,   744,   745,
     745,   746,   746,   747,   747,   748,   748,   749,   749,   750,
     750,   751,   752,   752,   753,   753,   754,   754,   755,   755,
     756,   757,   758,   759,   760,   762,   761,   763,   763,   764,
     764,   765,   765,   766,   766,   767,   768,   767,   769,   770,
     769,   771,   772,   771,   773,   773,   775,   774,   776,   776,
     776,   777,   777,   777,   777,   778,   779,   780,   780,   781,
     782,   782,   782,   783,   783,   784,   784,   784,   784,   784,
     785,   786,   787,   788,   789,   790,   790,   792,   791,   793,
     793,   794,   794,   794,   794,   794,   794,   794,   794,   794,
     794,   794,   794,   794,   794,   794,   794,   795,   796,   796,
     796,   796,   796,   796,   796,   797,   797,   797,   798,   798,
     799,   800,   801,   801,   802,   802,   803,   804,   805,   806,
     806,   807,   808,   808,   809,   809,   810,   810,   810,   811,
     811,   812,   812,   813,   814,   815,   816,   817,   816,   818,
     818,   819,   819,   820,   821,   820,   820,   822,   822,   823,
     823,   823,   823,   823,   823,   823,   823,   823,   823,   823,
     823,   823,   823,   823,   823,   823,   823,   823,   823,   823,
     823,   823,   823,   823,   823,   823,   823,   823,   823,   823,
     823,   823,   823,   823,   824,   824,   825,   825,   826,   826,
     827,   827,   828,   828,   828,   829,   829,   829,   830,   831,
     832,   833,   834,   832,   835,   832,   836,   837,   836,   838,
     836,   839,   839,   840,   841,   841,   841,   842,   842,   842,
     842,   842,   842,   843,   843,   844,   844,   844,   845,   846,
     845,   847,   847,   848,   848,   848,   848,   848,   850,   849,
     851,   851,   852,   853,   854,   854,   856,   857,   855,   859,
     858,   858,   860,   860,   860,   860,   860,   860,   860,   860,
     860,   860,   860,   860,   860,   860,   860,   860,   860,   860,
     860,   860,   860,   860,   860,   860,   860,   860,   860,   860,
     860,   860,   860,   860,   860,   860,   860,   860,   860,   860,
     860,   860,   860,   860,   860,   860,   860,   860,   860,   860,
     860,   860,   860,   862,   861,   864,   863,   863,   863,   863,
     863,   863,   863,   863,   863,   863,   863,   863,   863,   863,
     863,   863,   863,   863,   863,   865,   865,   866,   866,   867,
     867,   868,   868,   868,   868,   869,   869,   870,   870,   870,
     871,   872,   872,   873,   874,   874,   874,   874,   874,   874,
     874,   874,   874,   874,   874,   874,   874,   874,   874,   874,
     874,   874,   874,   874,   874,   874,   874,   874,   874,   874,
     874,   874,   875,   875,   876,   876,   878,   877,   879,   879,
     879,   880,   880,   881,   881,   883,   882,   884,   884,   885,
     885,   887,   886,   888,   888,   889,   890,   890,   892,   891,
     894,   893,   895,   895,   895,   895,   896,   896,   897,   898,
     897,   899,   899,   900,   900,   901,   901,   901,   901,   902,
     902,   902,   902,   902,   903,   903,   904,   904,   905,   905,
     905,   906,   906,   907,   907,   908,   908,   909,   910,   910,
     912,   911,   913,   913,   914,   914,   916,   915,   917,   917,
     918,   918,   918,   918,   918,   920,   919,   921,   922,   922,
     923,   924,   926,   925,   927,   927,   928,   928,   929,   929,
     931,   930,   932,   932,   932,   932,   932,   933,   933,   934,
     934,   936,   935,   937,   937,   938,   938,   939,   939,   939,
     939,   939,   940,   940,   940,   940,   941,   941,   942,   942,
     942,   942,   942,   942,   942,   942,   942,   942,   942,   942,
     942,   942,   942,   942,   942,   943,   943,   945,   944,   946,
     946,   946,   946,   946,   947,   947,   949,   948,   950,   952,
     951,   953,   954,   954,   955,   955,   955,   956,   956,   957,
     957,   958,   959,   960,   960,   961,   961,   962,   962,   962,
     962,   963,   963,   964,   964,   966,   965,   967,   967,   967,
     967,   967,   967,   967,   968,   968,   970,   969,   971,   973,
     972,   974,   976,   975,   977,   978,   978,   979,   981,   980,
     982,   982,   982,   983,   983,   985,   984,   986,   987,   987,
     988,   988,   988,   989,   989,   990,   990,   991,   992,   992,
     992,   992,   992,   992,   992,   993,   993,   995,   994,   996,
     996,   998,   997,   999,  1000,  1000,  1000,  1001,  1001,  1001,
    1001,  1003,  1002,  1004,  1005,  1006,  1006,  1007,  1007,  1007,
    1007,  1007,  1007,  1008,  1008,  1009,  1009,  1010,  1010,  1010,
    1010,  1010,  1011,  1012,  1012,  1012,  1012,  1012,  1013,  1014,
    1016,  1015,  1018,  1017,  1019,  1019,  1021,  1020,  1022,  1022,
    1023,  1023,  1025,  1024,  1026,  1026,  1027,  1027,  1027,  1027,
    1028,  1028,  1029,  1029,  1029,  1029,  1031,  1030,  1032,  1033,
    1032,  1032,  1034,  1034,  1035,  1035,  1036,  1036,  1037,  1037,
    1037,  1037,  1037,  1038,  1038,  1039,  1039,  1040,  1040,  1041,
    1043,  1042,  1044,  1045,  1045,  1046,  1046,  1046,  1046,  1046,
    1046,  1046,  1047,  1047,  1048,  1048,  1049,  1049,  1050,  1052,
    1051,  1053,  1054,  1056,  1055,  1057,  1058,  1058,  1060,  1059,
    1061,  1062,  1062,  1062,  1063,  1063,  1064,  1066,  1065,  1067,
    1067,  1068,  1068,  1069,  1069,  1070,  1070,  1071,  1072,  1072,
    1074,  1073,  1075,  1075,  1075,  1075,  1075,  1075,  1075,  1076,
    1076,  1077,  1077,  1078,  1079,  1080,  1080,  1081,  1081,  1081,
    1081,  1081,  1081,  1081,  1081,  1082,  1082,  1083,  1084,  1084,
    1085,  1086,  1086,  1087,  1087,  1088,  1090,  1089,  1092,  1091,
    1093,  1093,  1094,  1094,  1095,  1095,  1096,  1096,  1097,  1097,
    1097,  1098,  1098,  1098,  1100,  1099,  1101,  1102,  1102,  1103,
    1103,  1103,  1103,  1104,  1104,  1104,  1104,  1104,  1104,  1105,
    1106,  1106,  1107,  1107,  1109,  1108,  1108,  1110,  1110,  1110,
    1110,  1110,  1111,  1111,  1112,  1112,  1112,  1112,  1114,  1113,
    1115,  1116,  1116,  1117,  1118,  1118,  1119,  1119,  1120,  1120,
    1121,  1121,  1123,  1122,  1124,  1124,  1124,  1125,  1125,  1126,
    1127,  1127,  1129,  1128,  1130,  1130,  1132,  1131,  1133,  1135,
    1134,  1136,  1138,  1137,  1139,  1140,  1140,  1141,  1141,  1142,
    1143,  1143,  1144,  1145,  1145,  1146,  1146,  1147,  1147,  1148,
    1148,  1150,  1149,  1151,  1151,  1151,  1151,  1151,  1152,  1153,
    1153,  1154,  1154,  1154,  1154,  1154,  1155,  1156,  1156,  1157,
    1157,  1157,  1158,  1158,  1158,  1158,  1159,  1160,  1160,  1161,
    1162,  1163,  1163,  1165,  1164,  1166,  1167,  1167,  1168,  1168,
    1168,  1168,  1169,  1169,  1170,  1170,  1170,  1171,  1171,  1172,
    1172,  1172,  1173,  1173,  1174,  1175,  1175,  1176,  1176,  1177,
    1178,  1178,  1179,  1179,  1179,  1180,  1180,  1181,  1182,  1182,
    1183,  1184,  1184,  1184,  1185,  1185,  1186,  1187,  1187,  1188,
    1189,  1189,  1189,  1190,  1190,  1191,  1192,  1192,  1193,  1194,
    1194,  1195,  1195,  1196,  1196,  1197,  1198,  1198,  1199,  1200,
    1200,  1201,  1201,  1202,  1203,  1203,  1204,  1205,  1205,  1206,
    1206,  1207,  1207,  1208,  1209,  1209,  1210,  1211,  1211,  1212,
    1213,  1215,  1214,  1216,  1216,  1216,  1217,  1217,  1217,  1217,
    1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,
    1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,
    1218,  1218,  1219,  1219,  1220,  1220,  1221,  1222,  1223,  1223,
    1224,  1224,  1224,  1225,  1225,  1225,  1226,  1226,  1226,  1227,
    1227,  1228,  1228,  1228,  1229,  1229,  1230,  1230,  1230,  1230,
    1230,  1230,  1231,  1231,  1232,  1233,  1234,  1235,  1235,  1236,
    1237,  1238,  1238,  1239,  1240,  1240,  1241,  1242,  1242,  1242,
    1243,  1244,  1244,  1245,  1246,  1247,  1247,  1248,  1249,  1249,
    1250,  1250,  1251,  1252,  1252,  1253,  1253,  1253,  1254,  1254,
    1255,  1255,  1256,  1256,  1256,  1256,  1256,  1256,  1256,  1256,
    1256,  1256,  1257,  1257,  1258,  1258,  1258,  1259,  1259,  1259,
    1259,  1259,  1259,  1259,  1260,  1260,  1261,  1261,  1262,  1262,
    1263,  1263,  1264,  1264,  1265,  1265,  1265,  1266,  1266,  1266,
    1267,  1267,  1268,  1268,  1269,  1269,  1269,  1270,  1271,  1272,
    1272,  1273,  1274,  1274,  1274,  1274,  1275,  1276,  1276,  1276,
    1276,  1277,  1277,  1278,  1279,  1279,  1280,  1281,  1282,  1283,
    1283,  1283,  1283,  1283,  1283,  1283,  1284,  1284,  1285,  1285,
    1286,  1286,  1286,  1286,  1286,  1286,  1286,  1287,  1287,  1287,
    1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1288,
    1288,  1289,  1289,  1289,  1290,  1290,  1290,  1290,  1291,  1291,
    1291,  1292,  1292,  1292,  1293,  1293,  1293,  1294,  1294,  1295,
    1295,  1296,  1296,  1297,  1297,  1298,  1299,  1299,  1300,  1300,
    1301,  1301,  1302,  1302,  1303,  1303,  1304,  1304,  1304,  1305,
    1305,  1306,  1306,  1306,  1307,  1307,  1308,  1308,  1309,  1309,
    1309,  1309,  1309,  1309,  1309,  1309,  1310,  1310,  1311,  1311,
    1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,
    1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,
    1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,
    1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,
    1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,
    1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,
    1311,  1311,  1311,  1311,  1311,  1311,  1311,  1311,  1312,  1312,
    1313,  1313,  1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,
    1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,  1322,  1322,
    1323,  1323,  1324,  1324,  1325,  1325,  1326,  1326,  1327,  1327,
    1328,  1328,  1329,  1329,  1330,  1330,  1330,  1331,  1331,  1332,
    1332,  1333,  1333,  1334,  1334,  1335,  1335,  1335,  1336,  1336,
    1337,  1337,  1337,  1338,  1338,  1338,  1339,  1339,  1339,  1340,
    1340,  1341,  1341,  1342,  1342,  1343,  1343,  1343,  1344,  1344,
    1345,  1345,  1346,  1346,  1346,  1346,  1347,  1347,  1348,  1348,
    1349,  1349,  1350,  1350,  1351,  1351,  1351,  1352,  1352,  1353,
    1353,  1354,  1354,  1355,  1355,  1355,  1356,  1356,  1357,  1357,
    1358,  1358,  1359,  1359,  1360,  1360,  1361,  1361,  1362,  1362,
    1363,  1363,  1363,  1364,  1364,  1365,  1365,  1366,  1366,  1367,
    1367,  1368,  1368,  1369,  1369,  1370,  1370,  1371,  1371,  1372,
    1372,  1373,  1373,  1374,  1374,  1375,  1375,  1376,  1376,  1377,
    1377,  1378,  1378,  1379,  1379,  1380,  1380,  1381,  1381,  1382,
    1382,  1382,  1383,  1383,  1384,  1384,  1385,  1385,  1386,  1386,
    1387,  1387,  1388,  1388,  1389,  1389,  1390,  1390
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
       1,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     1,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     2,     2,     1,     3,     1,     1,     3,     1,     3,
       1,     3,     1,     2,     2,     1,     1,     1,     2,     1,
       1,     1,     2,     1,     0,     2,     1,     1,     1,     3,
       1,     1,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     2,     2,     2,     4,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     2,     2,     1,     1,     3,     2,     2,
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
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
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
#line 2068 "parser.y" /* yacc.c:1646  */
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
#line 7427 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 2080 "parser.y" /* yacc.c:1646  */
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
#line 7450 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 2116 "parser.y" /* yacc.c:1646  */
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
#line 7474 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 2167 "parser.y" /* yacc.c:1646  */
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[-1]), CB_PROGRAM_TYPE);
  }
#line 7483 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 2175 "parser.y" /* yacc.c:1646  */
    {
	  clean_up_program ((yyvsp[-1]), CB_FUNCTION_TYPE);
  }
#line 7491 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 2198 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 7499 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 2202 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}
	
	set_up_prototype ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE, 1);
  }
#line 7511 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 2210 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 7520 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 2218 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 7528 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 2222 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	set_up_prototype ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE, 1);
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 7541 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 2234 "parser.y" /* yacc.c:1646  */
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
#line 7556 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 2253 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7562 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 2254 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7568 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 2263 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7581 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 2272 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7594 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 2282 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING (_("CALL prototypes"));
  }
#line 7602 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 2294 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 7610 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 2298 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 7618 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 2314 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 7626 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 2331 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 7638 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 2345 "parser.y" /* yacc.c:1646  */
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("phrases in non-standard order"));
	}
  }
#line 7648 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 2357 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
#line 7658 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 2372 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 7670 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 2385 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 7680 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2414 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 7688 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2422 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 7696 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2429 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 7704 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 2436 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 7716 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 2447 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7724 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 2451 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7732 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 2455 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7740 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2459 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7748 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 2473 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 7757 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2478 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 7765 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 2486 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7773 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2498 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 7781 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 2502 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) != cb_error_node) {
		set_up_prototype ((yyvsp[-1]), (yyvsp[0]), CB_FUNCTION_TYPE, 0);
	}
  }
#line 7791 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2509 "parser.y" /* yacc.c:1646  */
    {
	  if ((yyvsp[-1]) != cb_error_node
	      && cb_verify (cb_program_prototypes, _("PROGRAM phrase"))) {
		set_up_prototype ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE, 0);
	}
  }
#line 7802 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 2519 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7811 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2524 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7820 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 2535 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 7834 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2580 "parser.y" /* yacc.c:1646  */
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
#line 7862 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 2608 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("invalid %s clause"), "");
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 7876 "parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 2618 "parser.y" /* yacc.c:1646  */
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
#line 7893 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2631 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 7905 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2647 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 7913 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2654 "parser.y" /* yacc.c:1646  */
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
#line 7932 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2669 "parser.y" /* yacc.c:1646  */
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
#line 7951 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2689 "parser.y" /* yacc.c:1646  */
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
#line 7968 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2702 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 7980 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2713 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 7990 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2719 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 8000 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2725 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 8010 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2731 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 8020 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2737 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 8030 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2743 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 8041 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2753 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 8049 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2757 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 8057 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2764 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8065 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2768 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 8073 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2772 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 8081 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2776 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 8089 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2783 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 8097 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2787 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 8105 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2793 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8111 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2794 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 8117 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2795 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 8123 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2796 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 8129 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2797 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 8135 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2798 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 8141 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2802 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 8147 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2803 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 8153 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2811 "parser.y" /* yacc.c:1646  */
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
#line 8168 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2825 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8176 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2829 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8184 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2837 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8192 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2844 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8200 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2848 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 8212 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2859 "parser.y" /* yacc.c:1646  */
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
#line 8233 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2879 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 8245 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2887 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 8257 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2897 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 8263 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2898 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 8269 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2905 "parser.y" /* yacc.c:1646  */
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
#line 8291 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2925 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 8297 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2926 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 8303 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2931 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8311 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2935 "parser.y" /* yacc.c:1646  */
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
#line 8331 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2956 "parser.y" /* yacc.c:1646  */
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
#line 8353 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2979 "parser.y" /* yacc.c:1646  */
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
		CB_PENDING ("PICTURE SYMBOL");
	}
	if (CB_LITERAL ((yyvsp[-1]))->size != 1) {
		cb_error_x ((yyvsp[-1]), _("invalid currency sign '%s'"), (char *)s);
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
		cb_error_x ((yyvsp[-1]), _("invalid currency sign '%s'"), (char *)s);
		break;
	default:
		if (!error_ind) {
			current_program->currency_symbol = s[0];
		}
		break;
	}
  }
#line 8434 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 3060 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8442 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 3064 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8450 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 3073 "parser.y" /* yacc.c:1646  */
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
#line 8467 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 3092 "parser.y" /* yacc.c:1646  */
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
#line 8482 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 3108 "parser.y" /* yacc.c:1646  */
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
#line 8498 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 3126 "parser.y" /* yacc.c:1646  */
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
#line 8514 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 3144 "parser.y" /* yacc.c:1646  */
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
#line 8530 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 3161 "parser.y" /* yacc.c:1646  */
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
#line 8546 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 3182 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 8554 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 3189 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 8563 "parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 3197 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 8573 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 3206 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 8583 "parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 3221 "parser.y" /* yacc.c:1646  */
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
#line 8609 "parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 3243 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-3]))) {
		validate_file (current_file, (yyvsp[-3]));
	}
  }
#line 8619 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 3275 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 8629 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 3281 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 8643 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 3291 "parser.y" /* yacc.c:1646  */
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
#line 8660 "parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 3304 "parser.y" /* yacc.c:1646  */
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
#line 8677 "parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 3317 "parser.y" /* yacc.c:1646  */
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
#line 8705 "parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 3343 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8711 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 3344 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8717 "parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 3345 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int4; }
#line 8723 "parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 3357 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 8731 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 3364 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 8739 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 3377 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8747 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 3389 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 8756 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3396 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 8762 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3397 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 8768 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3398 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 8774 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 3406 "parser.y" /* yacc.c:1646  */
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
#line 8799 "parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 3429 "parser.y" /* yacc.c:1646  */
    { }
#line 8805 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 3432 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN ALL");
  }
#line 8813 "parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 3437 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 8821 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 3447 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	CB_PENDING ("COLLATING SEQUENCE");
  }
#line 8830 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 3455 "parser.y" /* yacc.c:1646  */
    {
	  if (CB_ALPHABET_NAME_P (cb_ref ((yyvsp[0])))) {
		  (yyval) = (yyvsp[0]);
	  } else {
		  cb_error_x ((yyvsp[0]), _("'%s' is not an alphabet-name"),
			      cb_name ((yyvsp[0])));
		  (yyval) = cb_error_node;
	  }
  }
#line 8844 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 3470 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 8853 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 3485 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 8861 "parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 3493 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 8870 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 3498 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 8879 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 3503 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 8888 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 3512 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 8896 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 3516 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	CB_PENDING ("WITH ROLLBACK");
  }
#line 8905 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 3532 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 8914 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3537 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 8923 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3542 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 8932 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3547 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 8941 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3558 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 8950 "parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 3569 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 8958 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 3579 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8967 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3586 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8973 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 3587 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8979 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3588 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8985 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 3595 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8994 "parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 3606 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 9002 "parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 3620 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 9011 "parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 3627 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9017 "parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 3628 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 9023 "parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 3629 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9029 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 3638 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9037 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3657 "parser.y" /* yacc.c:1646  */
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
#line 9066 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3684 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 9072 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3685 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 9078 "parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 3686 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 9084 "parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 3687 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 9090 "parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 3694 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 9099 "parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 3699 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 9111 "parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 3728 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 9119 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3736 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 9127 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3743 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 9135 "parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 3752 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 9145 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3766 "parser.y" /* yacc.c:1646  */
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
#line 9163 "parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 3785 "parser.y" /* yacc.c:1646  */
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
#line 9183 "parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 3802 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9191 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 3809 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9199 "parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 3813 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 9207 "parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 3824 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("file cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 9221 "parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 3834 "parser.y" /* yacc.c:1646  */
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
#line 9240 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3864 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 9249 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3877 "parser.y" /* yacc.c:1646  */
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
#line 9273 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3897 "parser.y" /* yacc.c:1646  */
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
#line 9311 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 3932 "parser.y" /* yacc.c:1646  */
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
#line 9343 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 3963 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 9351 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 3969 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9357 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 3970 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9363 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 3974 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9369 "parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 3975 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9375 "parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 3983 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 9384 "parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 3994 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 9393 "parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 3999 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 9405 "parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 4022 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 9414 "parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 4034 "parser.y" /* yacc.c:1646  */
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
#line 9433 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 4062 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 9441 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 4069 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 9449 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 4076 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 9457 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 4085 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 9467 "parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 4098 "parser.y" /* yacc.c:1646  */
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("RECORDING MODE U or S can only be used with RECORD SEQUENTIAL files"));
	}
  }
#line 9477 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 4114 "parser.y" /* yacc.c:1646  */
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
#line 9514 "parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 4150 "parser.y" /* yacc.c:1646  */
    {
	  if (warningopt) {
		  CB_PENDING ("FOR sub-records");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[0]));
  }
#line 9526 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 4163 "parser.y" /* yacc.c:1646  */
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
#line 9542 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 4183 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9556 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 4193 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9569 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 4208 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 9579 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 4214 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 9589 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 4223 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9597 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 4226 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 9607 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 4232 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 9620 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 4252 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9630 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 4258 "parser.y" /* yacc.c:1646  */
    {
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
#line 9643 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 4267 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9657 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 4280 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9665 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 4287 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9675 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 4293 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9685 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 4303 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 9695 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 4312 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 9703 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 4316 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 9716 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 4327 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9722 "parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 4328 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9728 "parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 4329 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9734 "parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 4330 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9740 "parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 4335 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9748 "parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 4339 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 9756 "parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 4343 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 9764 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 4347 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 9772 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 4351 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9780 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 4355 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 9788 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 4359 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 9796 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 4363 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 9804 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 4367 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 9812 "parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 4371 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 9820 "parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 4375 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9828 "parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 4379 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 9836 "parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 4383 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9848 "parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4415 "parser.y" /* yacc.c:1646  */
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
#line 9873 "parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4439 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9881 "parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4443 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]) == cb_error_node ? NULL : (yyvsp[0]);
  }
#line 9889 "parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4450 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9899 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4456 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_88_item (current_field);
  }
#line 9907 "parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4463 "parser.y" /* yacc.c:1646  */
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
#line 9934 "parser.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4486 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9944 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4492 "parser.y" /* yacc.c:1646  */
    {
	/* Reset to last non-78 item */
	current_field = cb_validate_78_item (current_field, 0);
  }
#line 9953 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4500 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9961 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4504 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("CONSTANT FROM");
	(yyval) = NULL;
  }
#line 9970 "parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4512 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 9979 "parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 4518 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 9988 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4545 "parser.y" /* yacc.c:1646  */
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
#line 10010 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4569 "parser.y" /* yacc.c:1646  */
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
#line 10038 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4596 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 10046 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4600 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 10054 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4613 "parser.y" /* yacc.c:1646  */
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
#line 10077 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4638 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 10086 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4654 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 10094 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4658 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 10102 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4662 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 10110 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4666 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 10118 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4670 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 10126 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4674 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 10134 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4678 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 10142 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4682 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 10150 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4686 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 10158 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4690 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 10166 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4694 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 10174 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4698 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 10182 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4702 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 10191 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4707 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 10200 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4712 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 10208 "parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4716 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 10216 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4720 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 10228 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4728 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 10236 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4732 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 10244 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4736 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 10256 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4744 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 10264 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4748 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 10272 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4752 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 10280 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4756 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 10288 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4760 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 10296 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4764 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 10304 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4768 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 10312 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4772 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 10320 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4776 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 10332 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4784 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 10344 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4792 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 10352 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4796 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 10360 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4800 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 10368 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4804 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 10376 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4808 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 10384 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4812 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	CB_PENDING ("USAGE NATIONAL");
  }
#line 10393 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4832 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 10403 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4838 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 10413 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4851 "parser.y" /* yacc.c:1646  */
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
#line 10432 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4869 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 10440 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4879 "parser.y" /* yacc.c:1646  */
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
#line 10475 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4911 "parser.y" /* yacc.c:1646  */
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
#line 10505 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4939 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10511 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4940 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10517 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4944 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10523 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4945 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10529 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4950 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 10537 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4957 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 10546 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4965 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 10554 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4972 "parser.y" /* yacc.c:1646  */
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
#line 10579 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4995 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10585 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4998 "parser.y" /* yacc.c:1646  */
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
#line 10602 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 5013 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 10608 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 5014 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 10614 "parser.c" /* yacc.c:1646  */
    break;

  case 507:
#line 5019 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 10622 "parser.c" /* yacc.c:1646  */
    break;

  case 508:
#line 5025 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10628 "parser.c" /* yacc.c:1646  */
    break;

  case 509:
#line 5027 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10634 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 5032 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 10643 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 5043 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 10652 "parser.c" /* yacc.c:1646  */
    break;

  case 512:
#line 5054 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 10661 "parser.c" /* yacc.c:1646  */
    break;

  case 513:
#line 5065 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 10670 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 5076 "parser.y" /* yacc.c:1646  */
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
#line 10697 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 5104 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 10706 "parser.c" /* yacc.c:1646  */
    break;

  case 517:
#line 5112 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10712 "parser.c" /* yacc.c:1646  */
    break;

  case 518:
#line 5113 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10718 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5117 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10724 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5118 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 10730 "parser.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5123 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 10741 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5135 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 10754 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5144 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY NUMERIC");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 10768 "parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5159 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 10781 "parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 5168 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10791 "parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5180 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 10801 "parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5186 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10811 "parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5197 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 10821 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5213 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 10834 "parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5228 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 10842 "parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5235 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 10851 "parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5240 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 10859 "parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5251 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 10867 "parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5270 "parser.y" /* yacc.c:1646  */
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
#line 10904 "parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5306 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 10912 "parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5310 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 10921 "parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5315 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 10929 "parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5335 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 10937 "parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5342 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 10945 "parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5349 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 10953 "parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5356 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 10961 "parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5363 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 10969 "parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 5374 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 10977 "parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 5405 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 10985 "parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5431 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10993 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5438 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 11001 "parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5454 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 11009 "parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5465 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 11017 "parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5477 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 11025 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5510 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 11033 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5517 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 11041 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5524 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 11049 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5533 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 11060 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5540 "parser.y" /* yacc.c:1646  */
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
#line 11076 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5565 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

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
		current_field->screen_foreg = current_field->parent->screen_foreg;
		current_field->screen_backg = current_field->parent->screen_backg;
		current_field->screen_prompt = current_field->parent->screen_prompt;
	}
  }
#line 11100 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5585 "parser.y" /* yacc.c:1646  */
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
#line 11144 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5625 "parser.y" /* yacc.c:1646  */
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
#line 11164 "parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 5648 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
					 "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 11173 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5653 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
					 "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 11182 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5658 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 11190 "parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 5662 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 11198 "parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 5666 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
					 "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 11207 "parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 5671 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
					 "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 11216 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5676 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
					 "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 11225 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5681 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
					 "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 11234 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5686 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 11242 "parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 5690 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 11250 "parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 5694 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	CB_PENDING ("OVERLINE");
  }
#line 11259 "parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 5699 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	CB_PENDING ("GRID");
  }
#line 11268 "parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 5704 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	CB_PENDING ("LEFTLINE");
  }
#line 11277 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5709 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 11285 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5713 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 11293 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5717 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 11301 "parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 5721 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 11309 "parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 5725 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 11318 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5730 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 11326 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5734 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 11334 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5738 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 11343 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5743 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 11352 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5748 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 11361 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5753 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 11370 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5766 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 11383 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5775 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 11392 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5780 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 11404 "parser.c" /* yacc.c:1646  */
    break;

  case 682:
#line 5811 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 11412 "parser.c" /* yacc.c:1646  */
    break;

  case 683:
#line 5815 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 11420 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5819 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 11428 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5826 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 11436 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5830 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 11444 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5834 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 11452 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5842 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 11464 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5853 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 11472 "parser.c" /* yacc.c:1646  */
    break;

  case 691:
#line 5862 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 11486 "parser.c" /* yacc.c:1646  */
    break;

  case 692:
#line 5872 "parser.y" /* yacc.c:1646  */
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
#line 11502 "parser.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5884 "parser.y" /* yacc.c:1646  */
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
#line 11521 "parser.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5899 "parser.y" /* yacc.c:1646  */
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
#line 11554 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5932 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11562 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 5936 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11571 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 5941 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11583 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 5949 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 11596 "parser.c" /* yacc.c:1646  */
    break;

  case 700:
#line 5958 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11608 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 5968 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11614 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5970 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11620 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 5975 "parser.y" /* yacc.c:1646  */
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
#line 11644 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5999 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11652 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 6003 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		CB_PENDING (_("parameters passed BY VALUE"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11665 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 6016 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 11677 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 6024 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 11689 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 6032 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 11701 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 6040 "parser.y" /* yacc.c:1646  */
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
#line 11734 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 6069 "parser.y" /* yacc.c:1646  */
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
#line 11767 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 6101 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 11775 "parser.c" /* yacc.c:1646  */
    break;

  case 714:
#line 6105 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 11788 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 6117 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11798 "parser.c" /* yacc.c:1646  */
    break;

  case 716:
#line 6123 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main) {
		cb_error (_("RETURNING clause cannot be OMITTED for main program"));
	}
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause cannot be OMITTED for a FUNCTION"));
	}
	current_program->flag_void = 1;
  }
#line 11812 "parser.c" /* yacc.c:1646  */
    break;

  case 717:
#line 6133 "parser.y" /* yacc.c:1646  */
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
				if (f->flag_any_length) {
					cb_error (_("function RETURNING item may not be ANY LENGTH"));
				}

				f->flag_is_returning = 1;
			}
			current_program->returning = (yyvsp[0]);
		}
	}
  }
#line 11845 "parser.c" /* yacc.c:1646  */
    break;

  case 719:
#line 6165 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11854 "parser.c" /* yacc.c:1646  */
    break;

  case 720:
#line 6171 "parser.y" /* yacc.c:1646  */
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
#line 11884 "parser.c" /* yacc.c:1646  */
    break;

  case 725:
#line 6209 "parser.y" /* yacc.c:1646  */
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
#line 11905 "parser.c" /* yacc.c:1646  */
    break;

  case 727:
#line 6227 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11913 "parser.c" /* yacc.c:1646  */
    break;

  case 728:
#line 6237 "parser.y" /* yacc.c:1646  */
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
#line 11961 "parser.c" /* yacc.c:1646  */
    break;

  case 729:
#line 6281 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11969 "parser.c" /* yacc.c:1646  */
    break;

  case 732:
#line 6292 "parser.y" /* yacc.c:1646  */
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
#line 12018 "parser.c" /* yacc.c:1646  */
    break;

  case 733:
#line 6340 "parser.y" /* yacc.c:1646  */
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
#line 12038 "parser.c" /* yacc.c:1646  */
    break;

  case 734:
#line 6359 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12046 "parser.c" /* yacc.c:1646  */
    break;

  case 735:
#line 6363 "parser.y" /* yacc.c:1646  */
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
#line 12062 "parser.c" /* yacc.c:1646  */
    break;

  case 736:
#line 6381 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 12072 "parser.c" /* yacc.c:1646  */
    break;

  case 737:
#line 6386 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 12081 "parser.c" /* yacc.c:1646  */
    break;

  case 738:
#line 6391 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 12091 "parser.c" /* yacc.c:1646  */
    break;

  case 739:
#line 6399 "parser.y" /* yacc.c:1646  */
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
#line 12122 "parser.c" /* yacc.c:1646  */
    break;

  case 740:
#line 6426 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12130 "parser.c" /* yacc.c:1646  */
    break;

  case 741:
#line 6430 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12138 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 6486 "parser.y" /* yacc.c:1646  */
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
#line 12156 "parser.c" /* yacc.c:1646  */
    break;

  case 792:
#line 6500 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 12165 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 6511 "parser.y" /* yacc.c:1646  */
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
#line 12180 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 6527 "parser.y" /* yacc.c:1646  */
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
#line 12190 "parser.c" /* yacc.c:1646  */
    break;

  case 796:
#line 6533 "parser.y" /* yacc.c:1646  */
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
#line 12206 "parser.c" /* yacc.c:1646  */
    break;

  case 797:
#line 6545 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 12214 "parser.c" /* yacc.c:1646  */
    break;

  case 798:
#line 6549 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 12222 "parser.c" /* yacc.c:1646  */
    break;

  case 799:
#line 6553 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 12231 "parser.c" /* yacc.c:1646  */
    break;

  case 800:
#line 6558 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 12240 "parser.c" /* yacc.c:1646  */
    break;

  case 801:
#line 6563 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 12249 "parser.c" /* yacc.c:1646  */
    break;

  case 802:
#line 6568 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 12258 "parser.c" /* yacc.c:1646  */
    break;

  case 803:
#line 6573 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 12266 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6577 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 12274 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 6581 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 12282 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6585 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 12290 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6589 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 12299 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6594 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 12307 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6598 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 12315 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6602 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 12323 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6606 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 12331 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6610 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 12339 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6614 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12347 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6618 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12355 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6626 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12363 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6644 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_1, &check_duplicate);
  }
#line 12371 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6648 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_2, &check_duplicate);
  }
#line 12379 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6661 "parser.y" /* yacc.c:1646  */
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
#line 12399 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6677 "parser.y" /* yacc.c:1646  */
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
#line 12419 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6693 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				  _("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				  &check_line_col_duplicate);

	cb_verify (cb_accept_display_extensions, "AT clause");

	line_column = (yyvsp[0]);
  }
#line 12433 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6705 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12439 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6709 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12445 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6710 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12451 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6715 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12459 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6722 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 12467 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6726 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 12477 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6732 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12485 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6736 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12493 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6740 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("ACCEPT CONVERSION");
  }
#line 12501 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6744 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 12509 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6748 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 12519 "parser.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6754 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 12527 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6758 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 12535 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6762 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 12545 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6768 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 12553 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6772 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12561 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6776 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 12569 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6780 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 12577 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6784 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 12585 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6788 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12593 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6792 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 12601 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6796 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12609 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6800 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12617 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6804 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12625 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6808 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 12635 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6814 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 12643 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6818 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 12651 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6822 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12659 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6826 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12667 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6830 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12675 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6834 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12683 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6838 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12691 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6850 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 12699 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6854 "parser.y" /* yacc.c:1646  */
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
#line 12714 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6871 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 12722 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6880 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 12730 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6884 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 12738 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6888 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 12746 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6895 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12754 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6902 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 12762 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 6906 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 12770 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6916 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12779 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6925 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 12787 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6929 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12800 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 6940 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12806 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6941 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12812 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 6949 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER");
  }
#line 12821 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6963 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12829 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6975 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
	cobc_allow_program_name = 1;
  }
#line 12840 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6987 "parser.y" /* yacc.c:1646  */
    {
	cobc_allow_program_name = 0;
  }
#line 12848 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6993 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_PROGRAM_TYPE
	    && !current_program->flag_recursive
	    && is_recursive_call ((yyvsp[-4]))) {
		cb_warning_x ((yyvsp[-4]), _("recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	/* For CALL ... RETURNING NOTHING, set the call convention bit */
	if (call_nothing) {
		if ((yyvsp[-5]) && CB_INTEGER_P ((yyvsp[-5]))) {
			(yyvsp[-5]) = cb_int ((CB_INTEGER ((yyvsp[-5]))->val) | CB_CONV_NO_RET_UPD);
		} else {
			(yyvsp[-5]) = cb_int (CB_CONV_NO_RET_UPD);
		}
	}
	cb_emit_call ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]), CB_PAIR_X ((yyvsp[0])), CB_PAIR_Y ((yyvsp[0])), (yyvsp[-5]));
  }
#line 12870 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 7014 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12879 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 7019 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12888 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 7024 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12897 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 7029 "parser.y" /* yacc.c:1646  */
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
#line 12918 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 7050 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
#line 12926 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 7057 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12934 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 7061 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12943 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 7066 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12956 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 7077 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12962 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 7079 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12968 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 7084 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed when parameters are passed BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12980 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 7092 "parser.y" /* yacc.c:1646  */
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
#line 13006 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 7118 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 13014 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 7122 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 13027 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 7131 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 13040 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 7143 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13048 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 7147 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13056 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 7151 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 13064 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 7155 "parser.y" /* yacc.c:1646  */
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
#line 13073 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 7160 "parser.y" /* yacc.c:1646  */
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
#line 13097 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 7193 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR (NULL, NULL);
  }
#line 13105 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 7197 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13113 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 7201 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 13125 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 7212 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13133 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 7216 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13141 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 7223 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13149 "parser.c" /* yacc.c:1646  */
    break;

  case 924:
#line 7227 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW");
	(yyval) = (yyvsp[0]);
  }
#line 13158 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 7235 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13166 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 7239 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13174 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 7246 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13182 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 7253 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 13190 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 7257 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 13198 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 7267 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
	cobc_allow_program_name = 1;
  }
#line 13207 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 7272 "parser.y" /* yacc.c:1646  */
    {
	cobc_allow_program_name = 0;
  }
#line 13215 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 7279 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 13223 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 7283 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 13231 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 7291 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
#line 13239 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 7300 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 13247 "parser.c" /* yacc.c:1646  */
    break;

  case 938:
#line 7308 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13256 "parser.c" /* yacc.c:1646  */
    break;

  case 939:
#line 7313 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13265 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 7320 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 13271 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 7321 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 13277 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 7322 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 13283 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 7323 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 13289 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 7324 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 13295 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 7332 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 13303 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 7341 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 13311 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 7348 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 13319 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 7352 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 13327 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 7362 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 13336 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 7373 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 13351 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 7390 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 13359 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 7399 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 13367 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 7407 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 13376 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7412 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 13385 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7420 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 13393 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7424 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 13401 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7434 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
	display_type = UNKNOWN_DISPLAY;
	is_first_display_item = 1;
  }
#line 13412 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7446 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 13420 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7450 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 13428 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 7454 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 13436 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7458 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 13444 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 7466 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) != NULL) {
		error_if_different_display_type ((yyvsp[0]), NULL, NULL, NULL);
		cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 0,
				 display_type);
	}
  }
#line 13456 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 7474 "parser.y" /* yacc.c:1646  */
    {
	set_display_type ((yyvsp[0]), NULL, NULL, NULL);
	cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 1,
			 display_type);
  }
#line 13466 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 7488 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 13478 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7496 "parser.y" /* yacc.c:1646  */
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
#line 13516 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7533 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13524 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7537 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
#line 13533 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 7550 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 13541 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 7554 "parser.y" /* yacc.c:1646  */
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 13550 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 7559 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 13558 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 7568 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 13566 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 7572 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_name ((yyvsp[0]));
  }
#line 13574 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7576 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_int0;
  }
#line 13582 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7580 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_null;
  }
#line 13590 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7592 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 13598 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7596 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 13608 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7602 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 13618 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7608 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 13626 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7612 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("ignoring CONVERSION"));
  }
#line 13634 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7616 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 13644 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7622 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 13654 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7628 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 13664 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7634 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 13674 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7640 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 13682 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7644 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 13690 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7648 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 13698 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7652 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 13706 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7656 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 13714 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7660 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 13722 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7664 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 13730 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7668 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 13738 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7675 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 13746 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7679 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 13754 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7689 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 13762 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7698 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 13770 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7702 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 13778 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7706 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 13786 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7710 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13794 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7714 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13802 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7721 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 13810 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7725 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 13818 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7735 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 13827 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7744 "parser.y" /* yacc.c:1646  */
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
#line 13843 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7762 "parser.y" /* yacc.c:1646  */
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
#line 13866 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7786 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 13875 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7793 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13881 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7795 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13887 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7800 "parser.y" /* yacc.c:1646  */
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
#line 13902 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7811 "parser.y" /* yacc.c:1646  */
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
#line 13917 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7822 "parser.y" /* yacc.c:1646  */
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
#line 13932 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7836 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13940 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7840 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13948 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7846 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13954 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7848 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13960 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7854 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13969 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7863 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13978 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7871 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13987 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7877 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13996 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7884 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14002 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7886 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14008 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7891 "parser.y" /* yacc.c:1646  */
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
#line 14074 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7952 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 14080 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7953 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 14086 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7954 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 14092 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7958 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14098 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 7959 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14104 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7964 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 14112 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7968 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 14120 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 7978 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 14129 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 7983 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14137 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7991 "parser.y" /* yacc.c:1646  */
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
#line 14162 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 8012 "parser.y" /* yacc.c:1646  */
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
#line 14180 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 8026 "parser.y" /* yacc.c:1646  */
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
#line 14206 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 8048 "parser.y" /* yacc.c:1646  */
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
#line 14232 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 8070 "parser.y" /* yacc.c:1646  */
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
#line 14256 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 8090 "parser.y" /* yacc.c:1646  */
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
#line 14280 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 8112 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14286 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 8113 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14292 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 8121 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 14301 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 8130 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 14309 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 8140 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	CB_PENDING("GENERATE");
  }
#line 14318 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 8156 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14331 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 8169 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 14340 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 8177 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 14349 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 8182 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 14358 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 8193 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 14371 "parser.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 8208 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 14379 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 8217 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14387 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 8221 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 14395 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 8225 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 14403 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 8232 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 14411 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 8236 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 14419 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 8246 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 14427 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 8255 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14435 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 8261 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14441 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 8262 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 14447 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 8266 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14453 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 8267 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 14459 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 8268 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 14465 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 8273 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14473 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 8277 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14481 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 8284 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14489 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 8289 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14497 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 8296 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 14505 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 8302 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 14511 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 8303 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 14517 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 8304 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 14523 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 8305 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 14529 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 8306 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 14535 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 8307 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 14541 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 8308 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 14547 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 8313 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14555 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 8317 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 14563 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 8326 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	CB_PENDING("INITIATE");
  }
#line 14572 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 8335 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14582 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 8341 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14592 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 8352 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 14601 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 8365 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14609 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 8369 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14617 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 8373 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14625 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 8389 "parser.y" /* yacc.c:1646  */
    {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
#line 14634 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 8394 "parser.y" /* yacc.c:1646  */
    {
	if (!(previous_tallying_phrase == CHARACTERS_PHRASE
	      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
		cb_error (_("TALLYING clause is incomplete"));
	} else {
		cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	}

	(yyval) = (yyvsp[-3]);
  }
#line 14649 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 8410 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 14658 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 8420 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 14668 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 8429 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14676 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 8433 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14684 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 8440 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (FOR_PHRASE);
	(yyval) = cb_build_tallying_data ((yyvsp[-1]));
  }
#line 14693 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 8445 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	(yyval) = cb_build_tallying_characters ((yyvsp[0]));
  }
#line 14702 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 8450 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_all ();
  }
#line 14711 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 8455 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_leading ();
  }
#line 14720 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 8460 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_trailing ();
  }
#line 14729 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 8465 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	(yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14738 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 8472 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14744 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 8473 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 14750 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 8478 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 14759 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 8483 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14767 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 8490 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 14773 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 8491 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 14779 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 8492 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 14785 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 8493 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 14791 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8498 "parser.y" /* yacc.c:1646  */
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
#line 14817 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8525 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 14825 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8529 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14833 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8533 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14841 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8537 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14849 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8541 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14857 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8548 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0]));
  }
#line 14865 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8555 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0]));
  }
#line 14873 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8564 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 14882 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 8576 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 14890 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8584 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14898 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8588 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14906 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8598 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 14914 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8607 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 14922 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 8611 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 14930 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8618 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 14938 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8622 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 14946 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8632 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 14954 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8640 "parser.y" /* yacc.c:1646  */
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
#line 14979 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8661 "parser.y" /* yacc.c:1646  */
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
#line 15004 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8684 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 15010 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8685 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 15016 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8686 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 15022 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8687 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 15028 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8691 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15034 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8692 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15040 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8696 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15046 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8697 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15052 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8698 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 15058 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8700 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 15067 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8711 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15078 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8722 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 15087 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8727 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 15097 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8733 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15106 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8738 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 15115 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8746 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 15127 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8754 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 15135 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8761 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 15143 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8765 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 15157 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8778 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 15168 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8785 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15180 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8796 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 15188 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8800 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 15197 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8805 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 15205 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8809 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 15220 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8820 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15228 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8826 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 15234 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8827 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15240 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8831 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15246 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8832 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15252 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8835 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15258 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8837 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15264 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8842 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 15272 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8852 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 15280 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8861 "parser.y" /* yacc.c:1646  */
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
#line 15308 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8887 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15314 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8888 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15320 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8893 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15328 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8897 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 15336 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8901 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 15344 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8905 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 15352 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 8909 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 15360 "parser.c" /* yacc.c:1646  */
    break;

  case 1200:
#line 8913 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 15368 "parser.c" /* yacc.c:1646  */
    break;

  case 1201:
#line 8917 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 15376 "parser.c" /* yacc.c:1646  */
    break;

  case 1202:
#line 8923 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15382 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 8924 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15388 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 8934 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 15396 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 8938 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 15404 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8948 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 15413 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 8958 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 15421 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 8966 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15429 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 8976 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 15438 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 8986 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 15446 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8995 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15454 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 9002 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 15462 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 9006 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 15470 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 9016 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15481 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 9028 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 15490 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 9036 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15498 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 9040 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 15506 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 9044 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 15514 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 9051 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 15522 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 9055 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 15530 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 9065 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 15539 "parser.c" /* yacc.c:1646  */
    break;

  case 1227:
#line 9076 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 15547 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 9085 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15555 "parser.c" /* yacc.c:1646  */
    break;

  case 1230:
#line 9090 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15564 "parser.c" /* yacc.c:1646  */
    break;

  case 1231:
#line 9097 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15570 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 9098 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15576 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 9103 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15584 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 9108 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15592 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 9115 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15600 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 9119 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 15608 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 9127 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15616 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 9134 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 15624 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 9138 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 15632 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 9148 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 15643 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 9155 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 15651 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 9171 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15657 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 9172 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15663 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 9176 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15669 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 9177 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15675 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 9184 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15683 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 9193 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 15691 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 9205 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 15699 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 9209 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 15707 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 9213 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 15717 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 9219 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 15727 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 9225 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 15735 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 9229 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 15743 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 9233 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 15751 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 9237 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 15759 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 9246 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 15767 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 9250 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15775 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 9259 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 15783 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 9273 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15791 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 9287 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 15799 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 9291 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 15807 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 9300 "parser.y" /* yacc.c:1646  */
    {
	  cb_emit_set_last_exception_to_off ();
  }
#line 15815 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 9309 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 15823 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 9317 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[-3]));
	if (CB_VALID_TREE (x)) {
		if (CB_INVALID_TREE ((yyvsp[-2]))) {
			if (CB_FILE_P (x)) {
				cb_error (_("file sort requires KEY phrase"));
			} else {
				/* FIXME: use key definition from OCCURS */
				cb_error (_("table sort without keys not implemented yet"));
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
#line 15849 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 9339 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 15859 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 9348 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15867 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 9353 "parser.y" /* yacc.c:1646  */
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
#line 15887 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 9371 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15893 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 9372 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15899 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 9377 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 15908 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 9384 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 15914 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 9385 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 15920 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 9390 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("file sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 15930 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 9396 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 15944 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 9406 "parser.y" /* yacc.c:1646  */
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
#line 15960 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 9421 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("file sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 15970 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 9427 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15984 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9437 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15998 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 9453 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 16007 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9463 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 16020 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9475 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16028 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 9479 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16036 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 9486 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16044 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9490 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 16053 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9495 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 16062 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9500 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 16071 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9507 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 16077 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 9508 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 16083 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 9509 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 16089 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9510 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 16095 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9511 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 16101 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 9512 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 16107 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9517 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition not allowed on START statement"));
  }
#line 16116 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9530 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 16124 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9534 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 16132 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9544 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 16140 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9548 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 16150 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9554 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL, 1, DEVICE_DISPLAY);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 16163 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 9566 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 16171 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 9570 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16179 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9574 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16187 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 9578 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 16199 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 9586 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 16211 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9597 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16219 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9601 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16227 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9607 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16233 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9608 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16239 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 9609 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16245 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9610 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16251 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9617 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
	save_tree = NULL;
  }
#line 16260 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9627 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string (save_tree, (yyvsp[-2]), (yyvsp[-1]));
  }
#line 16268 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 9639 "parser.y" /* yacc.c:1646  */
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
#line 16283 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 9653 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16289 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9655 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16295 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 9659 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 16301 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9660 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 16307 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9664 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16313 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9665 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16319 "parser.c" /* yacc.c:1646  */
    break;

  case 1340:
#line 9670 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 16327 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 9674 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 16335 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9684 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 16343 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 9693 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 16351 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 9697 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 16359 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 9701 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 16367 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 9708 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 16375 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9712 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 16383 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9722 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	CB_PENDING("SUPPRESS");
  }
#line 16396 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9740 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	CB_PENDING("TERMINATE");
  }
#line 16405 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9749 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 16415 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9755 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 16425 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9766 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 16433 "parser.c" /* yacc.c:1646  */
    break;

  case 1358:
#line 9774 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 16444 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9787 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 16452 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9795 "parser.y" /* yacc.c:1646  */
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
#line 16467 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9811 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 16475 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9821 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 16483 "parser.c" /* yacc.c:1646  */
    break;

  case 1365:
#line 9827 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16489 "parser.c" /* yacc.c:1646  */
    break;

  case 1366:
#line 9829 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16495 "parser.c" /* yacc.c:1646  */
    break;

  case 1367:
#line 9833 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16501 "parser.c" /* yacc.c:1646  */
    break;

  case 1368:
#line 9835 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 16507 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9840 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16515 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9846 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16521 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9848 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16527 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9853 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 16535 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9859 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16541 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9860 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16547 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9864 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16553 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9865 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16559 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9869 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16565 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9870 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16571 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9875 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 16579 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9879 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 16587 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9889 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 16596 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 9907 "parser.y" /* yacc.c:1646  */
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
#line 16622 "parser.c" /* yacc.c:1646  */
    break;

  case 1389:
#line 9932 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 16630 "parser.c" /* yacc.c:1646  */
    break;

  case 1390:
#line 9936 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 16643 "parser.c" /* yacc.c:1646  */
    break;

  case 1391:
#line 9948 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			set_up_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 16657 "parser.c" /* yacc.c:1646  */
    break;

  case 1392:
#line 9958 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 16666 "parser.c" /* yacc.c:1646  */
    break;

  case 1393:
#line 9963 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 16675 "parser.c" /* yacc.c:1646  */
    break;

  case 1394:
#line 9968 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 16684 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 9973 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 16693 "parser.c" /* yacc.c:1646  */
    break;

  case 1396:
#line 9981 "parser.y" /* yacc.c:1646  */
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
#line 16732 "parser.c" /* yacc.c:1646  */
    break;

  case 1399:
#line 10024 "parser.y" /* yacc.c:1646  */
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
#line 16776 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 10064 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 16790 "parser.c" /* yacc.c:1646  */
    break;

  case 1401:
#line 10074 "parser.y" /* yacc.c:1646  */
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
#line 16815 "parser.c" /* yacc.c:1646  */
    break;

  case 1406:
#line 10104 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 16825 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 10113 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM START");
  }
#line 16835 "parser.c" /* yacc.c:1646  */
    break;

  case 1408:
#line 10119 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM END");
  }
#line 16845 "parser.c" /* yacc.c:1646  */
    break;

  case 1409:
#line 10129 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	CB_PENDING ("USE BEFORE REPORTING");
  }
#line 16855 "parser.c" /* yacc.c:1646  */
    break;

  case 1410:
#line 10138 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 16865 "parser.c" /* yacc.c:1646  */
    break;

  case 1413:
#line 10154 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 16876 "parser.c" /* yacc.c:1646  */
    break;

  case 1415:
#line 10166 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 16887 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 10175 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16893 "parser.c" /* yacc.c:1646  */
    break;

  case 1417:
#line 10176 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16899 "parser.c" /* yacc.c:1646  */
    break;

  case 1418:
#line 10181 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 16907 "parser.c" /* yacc.c:1646  */
    break;

  case 1419:
#line 10185 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16915 "parser.c" /* yacc.c:1646  */
    break;

  case 1420:
#line 10189 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16923 "parser.c" /* yacc.c:1646  */
    break;

  case 1421:
#line 10193 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 16931 "parser.c" /* yacc.c:1646  */
    break;

  case 1422:
#line 10199 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 16937 "parser.c" /* yacc.c:1646  */
    break;

  case 1423:
#line 10200 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 16943 "parser.c" /* yacc.c:1646  */
    break;

  case 1427:
#line 10211 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 16951 "parser.c" /* yacc.c:1646  */
    break;

  case 1428:
#line 10215 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 16959 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 10229 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 16970 "parser.c" /* yacc.c:1646  */
    break;

  case 1432:
#line 10239 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16978 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 10243 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16986 "parser.c" /* yacc.c:1646  */
    break;

  case 1434:
#line 10250 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16995 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 10268 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17004 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 10284 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 17015 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 10294 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17023 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 10298 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17031 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 10305 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17040 "parser.c" /* yacc.c:1646  */
    break;

  case 1450:
#line 10318 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17049 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 10330 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT SIZE ERROR before SIZE ERROR"));
	}
  }
#line 17060 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 10340 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17068 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 10344 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17076 "parser.c" /* yacc.c:1646  */
    break;

  case 1456:
#line 10351 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17085 "parser.c" /* yacc.c:1646  */
    break;

  case 1459:
#line 10364 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17094 "parser.c" /* yacc.c:1646  */
    break;

  case 1462:
#line 10376 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT OVERFLOW before OVERFLOW"));
	}
  }
#line 17105 "parser.c" /* yacc.c:1646  */
    break;

  case 1463:
#line 10386 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17113 "parser.c" /* yacc.c:1646  */
    break;

  case 1464:
#line 10390 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17121 "parser.c" /* yacc.c:1646  */
    break;

  case 1465:
#line 10397 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17130 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 10410 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17139 "parser.c" /* yacc.c:1646  */
    break;

  case 1470:
#line 10422 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
  }
#line 17147 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 10431 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
	}
  }
#line 17157 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 10440 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17165 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 10444 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17173 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 10451 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17182 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 10464 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17191 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 10475 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT AT END-OF-PAGE before AT END-OF-PAGE"));
	}
  }
#line 17202 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 10485 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17210 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 10489 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17218 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 10496 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17227 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 10509 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17236 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 10525 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT INVALID KEY before INVALID KEY"));
	}
  }
#line 17247 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 10535 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17255 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 10539 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17263 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 10546 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17272 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 10559 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17281 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 10569 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 17289 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10573 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17297 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 10583 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 17305 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10590 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 17313 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10596 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 17322 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 10601 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 17330 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10614 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 17342 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 10622 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 17348 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 10623 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 17354 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10625 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 17360 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 10626 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 17366 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 10627 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 17372 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 10628 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 17378 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 10629 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 17384 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10631 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 17390 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 10632 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 17396 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 10633 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 17402 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 10634 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 17408 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 10635 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 17414 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 10636 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 17420 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 10638 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 17426 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 10639 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 17432 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 10640 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 17438 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 10642 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 17444 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 10643 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 17450 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 10644 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 17456 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10645 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 17462 "parser.c" /* yacc.c:1646  */
    break;

  case 1527:
#line 10646 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 17468 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10649 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 17474 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10650 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 17480 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10680 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17488 "parser.c" /* yacc.c:1646  */
    break;

  case 1539:
#line 10684 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17496 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10695 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 17502 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10696 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 17508 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10697 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17514 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10701 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 17520 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10702 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 17526 "parser.c" /* yacc.c:1646  */
    break;

  case 1548:
#line 10703 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17532 "parser.c" /* yacc.c:1646  */
    break;

  case 1549:
#line 10708 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 17540 "parser.c" /* yacc.c:1646  */
    break;

  case 1550:
#line 10711 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17546 "parser.c" /* yacc.c:1646  */
    break;

  case 1551:
#line 10715 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17552 "parser.c" /* yacc.c:1646  */
    break;

  case 1552:
#line 10716 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 17558 "parser.c" /* yacc.c:1646  */
    break;

  case 1553:
#line 10717 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17564 "parser.c" /* yacc.c:1646  */
    break;

  case 1554:
#line 10720 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17570 "parser.c" /* yacc.c:1646  */
    break;

  case 1555:
#line 10721 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17576 "parser.c" /* yacc.c:1646  */
    break;

  case 1556:
#line 10732 "parser.y" /* yacc.c:1646  */
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
#line 17592 "parser.c" /* yacc.c:1646  */
    break;

  case 1557:
#line 10744 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17605 "parser.c" /* yacc.c:1646  */
    break;

  case 1558:
#line 10753 "parser.y" /* yacc.c:1646  */
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
#line 17621 "parser.c" /* yacc.c:1646  */
    break;

  case 1559:
#line 10765 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17634 "parser.c" /* yacc.c:1646  */
    break;

  case 1560:
#line 10774 "parser.y" /* yacc.c:1646  */
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
#line 17650 "parser.c" /* yacc.c:1646  */
    break;

  case 1561:
#line 10786 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17663 "parser.c" /* yacc.c:1646  */
    break;

  case 1562:
#line 10800 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17669 "parser.c" /* yacc.c:1646  */
    break;

  case 1563:
#line 10802 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 17675 "parser.c" /* yacc.c:1646  */
    break;

  case 1564:
#line 10807 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 17683 "parser.c" /* yacc.c:1646  */
    break;

  case 1565:
#line 10815 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 17689 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10822 "parser.y" /* yacc.c:1646  */
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
#line 17710 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10844 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17718 "parser.c" /* yacc.c:1646  */
    break;

  case 1568:
#line 10848 "parser.y" /* yacc.c:1646  */
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
#line 17740 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10869 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17753 "parser.c" /* yacc.c:1646  */
    break;

  case 1570:
#line 10910 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17766 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10923 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17772 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10925 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17778 "parser.c" /* yacc.c:1646  */
    break;

  case 1573:
#line 10929 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17784 "parser.c" /* yacc.c:1646  */
    break;

  case 1574:
#line 10935 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17790 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 10937 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17796 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10942 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 17809 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10956 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17817 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10963 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 17827 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10973 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17833 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10974 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17839 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10979 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17848 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10987 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17857 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10995 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17865 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 10999 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17873 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 11006 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17883 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 11022 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 17896 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 11031 "parser.y" /* yacc.c:1646  */
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
#line 17906 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 11042 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 17920 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 11059 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17928 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 11063 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17936 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 11072 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17944 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 11078 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17950 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 11079 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17956 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 11084 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17964 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 11088 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17972 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 11099 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17980 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 11103 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17988 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 11107 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17996 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 11111 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 18004 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 11115 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 18012 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 11119 "parser.y" /* yacc.c:1646  */
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
#line 18034 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 11140 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 18042 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 11144 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 18050 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 11161 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 18058 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 11165 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 18066 "parser.c" /* yacc.c:1646  */
    break;

  case 1623:
#line 11169 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 18074 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 11203 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18082 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 11211 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18090 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 11220 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18098 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 11225 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 18106 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 11232 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18114 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 11240 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18122 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 11248 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18130 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 11258 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 18136 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 11262 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 18142 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 11266 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 18148 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 11267 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 18154 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 11271 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 18160 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 11276 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 18171 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 11283 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18182 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 11290 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18193 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 11297 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 18204 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 11307 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 18212 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 11314 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 18226 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 11324 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18240 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 11334 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18254 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 11344 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 18268 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 11357 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18276 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 11361 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 18285 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 11369 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 18294 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 11377 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 18302 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 11381 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 18311 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 11391 "parser.y" /* yacc.c:1646  */
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
#line 18326 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 11405 "parser.y" /* yacc.c:1646  */
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
#line 18350 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 11428 "parser.y" /* yacc.c:1646  */
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
#line 18373 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 11450 "parser.y" /* yacc.c:1646  */
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
#line 18393 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 11465 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 18399 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 11466 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 18405 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 11467 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 18411 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 11468 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 18417 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 11469 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 18423 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 11470 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 18429 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 11475 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18437 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 11479 "parser.y" /* yacc.c:1646  */
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
#line 18455 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 11496 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18463 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 11500 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 18471 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11506 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 18477 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 11507 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 18483 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 11508 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 18489 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11509 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 18495 "parser.c" /* yacc.c:1646  */
    break;

  case 1684:
#line 11510 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 18501 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11511 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 18507 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11512 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 18513 "parser.c" /* yacc.c:1646  */
    break;

  case 1687:
#line 11519 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 18521 "parser.c" /* yacc.c:1646  */
    break;

  case 1688:
#line 11523 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 18529 "parser.c" /* yacc.c:1646  */
    break;

  case 1689:
#line 11527 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18537 "parser.c" /* yacc.c:1646  */
    break;

  case 1690:
#line 11531 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18545 "parser.c" /* yacc.c:1646  */
    break;

  case 1691:
#line 11535 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 18553 "parser.c" /* yacc.c:1646  */
    break;

  case 1692:
#line 11539 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18561 "parser.c" /* yacc.c:1646  */
    break;

  case 1693:
#line 11543 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18569 "parser.c" /* yacc.c:1646  */
    break;

  case 1694:
#line 11547 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18577 "parser.c" /* yacc.c:1646  */
    break;

  case 1695:
#line 11551 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18585 "parser.c" /* yacc.c:1646  */
    break;

  case 1696:
#line 11555 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18593 "parser.c" /* yacc.c:1646  */
    break;

  case 1697:
#line 11559 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 18601 "parser.c" /* yacc.c:1646  */
    break;

  case 1698:
#line 11563 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 18609 "parser.c" /* yacc.c:1646  */
    break;

  case 1708:
#line 11588 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18617 "parser.c" /* yacc.c:1646  */
    break;

  case 1709:
#line 11592 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 18625 "parser.c" /* yacc.c:1646  */
    break;

  case 1710:
#line 11596 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 18633 "parser.c" /* yacc.c:1646  */
    break;

  case 1711:
#line 11603 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18641 "parser.c" /* yacc.c:1646  */
    break;

  case 1712:
#line 11607 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 18649 "parser.c" /* yacc.c:1646  */
    break;

  case 1713:
#line 11611 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18657 "parser.c" /* yacc.c:1646  */
    break;

  case 1714:
#line 11618 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 18668 "parser.c" /* yacc.c:1646  */
    break;

  case 1715:
#line 11625 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 18679 "parser.c" /* yacc.c:1646  */
    break;

  case 1716:
#line 11632 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 18690 "parser.c" /* yacc.c:1646  */
    break;

  case 1717:
#line 11642 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18701 "parser.c" /* yacc.c:1646  */
    break;

  case 1718:
#line 11649 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 18712 "parser.c" /* yacc.c:1646  */
    break;

  case 1719:
#line 11659 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18723 "parser.c" /* yacc.c:1646  */
    break;

  case 1720:
#line 11666 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 18734 "parser.c" /* yacc.c:1646  */
    break;

  case 1721:
#line 11676 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18742 "parser.c" /* yacc.c:1646  */
    break;

  case 1722:
#line 11680 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18756 "parser.c" /* yacc.c:1646  */
    break;

  case 1723:
#line 11693 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18764 "parser.c" /* yacc.c:1646  */
    break;

  case 1724:
#line 11697 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18778 "parser.c" /* yacc.c:1646  */
    break;

  case 1725:
#line 11711 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 18786 "parser.c" /* yacc.c:1646  */
    break;

  case 1726:
#line 11719 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18792 "parser.c" /* yacc.c:1646  */
    break;

  case 1727:
#line 11720 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18798 "parser.c" /* yacc.c:1646  */
    break;

  case 1728:
#line 11724 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18804 "parser.c" /* yacc.c:1646  */
    break;

  case 1729:
#line 11725 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18810 "parser.c" /* yacc.c:1646  */
    break;

  case 1730:
#line 11729 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18816 "parser.c" /* yacc.c:1646  */
    break;

  case 1731:
#line 11730 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18822 "parser.c" /* yacc.c:1646  */
    break;

  case 1732:
#line 11735 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18830 "parser.c" /* yacc.c:1646  */
    break;

  case 1733:
#line 11739 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18838 "parser.c" /* yacc.c:1646  */
    break;

  case 1734:
#line 11746 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18846 "parser.c" /* yacc.c:1646  */
    break;

  case 1735:
#line 11750 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18854 "parser.c" /* yacc.c:1646  */
    break;

  case 1736:
#line 11757 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18860 "parser.c" /* yacc.c:1646  */
    break;

  case 1737:
#line 11758 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18866 "parser.c" /* yacc.c:1646  */
    break;

  case 1738:
#line 11759 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 18872 "parser.c" /* yacc.c:1646  */
    break;

  case 1739:
#line 11763 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18878 "parser.c" /* yacc.c:1646  */
    break;

  case 1740:
#line 11764 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 18884 "parser.c" /* yacc.c:1646  */
    break;

  case 1741:
#line 11768 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 18890 "parser.c" /* yacc.c:1646  */
    break;

  case 1742:
#line 11769 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18896 "parser.c" /* yacc.c:1646  */
    break;

  case 1743:
#line 11770 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18902 "parser.c" /* yacc.c:1646  */
    break;

  case 1744:
#line 11775 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 18910 "parser.c" /* yacc.c:1646  */
    break;

  case 1745:
#line 11779 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 18923 "parser.c" /* yacc.c:1646  */
    break;

  case 1746:
#line 11791 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 18932 "parser.c" /* yacc.c:1646  */
    break;

  case 1747:
#line 11796 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 18941 "parser.c" /* yacc.c:1646  */
    break;

  case 1748:
#line 11804 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 18949 "parser.c" /* yacc.c:1646  */
    break;

  case 1749:
#line 11808 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 18957 "parser.c" /* yacc.c:1646  */
    break;

  case 1750:
#line 11812 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 18965 "parser.c" /* yacc.c:1646  */
    break;

  case 1751:
#line 11816 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 18973 "parser.c" /* yacc.c:1646  */
    break;

  case 1752:
#line 11820 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 18981 "parser.c" /* yacc.c:1646  */
    break;

  case 1753:
#line 11824 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 18989 "parser.c" /* yacc.c:1646  */
    break;

  case 1754:
#line 11828 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 18997 "parser.c" /* yacc.c:1646  */
    break;

  case 1755:
#line 11832 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 19005 "parser.c" /* yacc.c:1646  */
    break;

  case 1756:
#line 11838 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 19011 "parser.c" /* yacc.c:1646  */
    break;

  case 1757:
#line 11839 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 19017 "parser.c" /* yacc.c:1646  */
    break;


#line 19021 "parser.c" /* yacc.c:1646  */
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
#line 12011 "parser.y" /* yacc.c:1906  */

