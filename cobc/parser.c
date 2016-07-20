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
				    _("Redefinition of program name '%s'"),
				    elt_name);
		} else if (strcmp (prog_id, elt_id) == 0) {
		        cb_error_x ((cb_tree) program,
				    _("Redefinition of program ID '%s'"),
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
			cb_error ("Functions may not be defined within a program/function");
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
		cb_error (_("END FUNCTION '%s' is different to FUNCTION-ID '%s'"),
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
		cb_error (_("END PROGRAM '%s' is different to PROGRAM-ID '%s'"),
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
check_prototype_redefines_current_func (const cb_tree prototype_name)
{
	const char	*name = get_literal_or_word_name (prototype_name);

	if (strcasecmp (name, current_program->program_name) == 0) {
		cb_warning_x (prototype_name, _("Prototype has same name as current function and will be ignored"));
		return 1;
	}

	return 0;
}

/* Returns 1 if the prototype has been duplicated. */
static int
check_for_duplicate_prototype (const cb_tree prototype_name,
			       const cb_tree func_prototype)
{
	cb_tree	dup;

	if (CB_WORD_COUNT (prototype_name) > 0) {
		/* Make sure the duplicate is a prototype */
		dup = cb_ref (prototype_name);
		if (!CB_FUNC_PROTOTYPE_P (dup)) {
			redefinition_error (prototype_name);
			return 1;
		}

		/* Check the duplicate prototypes match */
		if (strcmp (CB_FUNC_PROTOTYPE (func_prototype)->ext_name,
			    CB_FUNC_PROTOTYPE (dup)->ext_name)) {
			cb_error_x (prototype_name,
				    _("Duplicate REPOSITORY entries for '%s' do not match"),
				    get_literal_or_word_name (prototype_name));
		} else {
			cb_warning_x (prototype_name,
				      _("Duplicate REPOSITORY entry for '%s'"),
				      get_literal_or_word_name (prototype_name));
		}
		return 1;
	}

	return 0;
}

static void
set_up_func_prototype (cb_tree prototype_name, cb_tree ext_name, const int is_current_func)
{
	cb_tree 	func_prototype;

	if (!is_current_func
	    && check_prototype_redefines_current_func (prototype_name)) {
		return;
	}

	func_prototype = cb_build_func_prototype (prototype_name, ext_name);

	if (!is_current_func
	    && check_for_duplicate_prototype (prototype_name, func_prototype)) {
		return;
	}

	if (CB_REFERENCE_P (prototype_name)) {
		cb_define (prototype_name, func_prototype);
	} else { /* CB_LITERAL_P (prototype_name) */
		cb_define (cb_build_reference ((const char *) CB_LITERAL (prototype_name)->data),
			   func_prototype);
	}
	current_program->user_spec_list =
		cb_list_add (current_program->user_spec_list, func_prototype);
}

static void
emit_duplicate_clause_message (const char *clause)
{
	if (cb_relaxed_syntax_check) {
		cb_warning (_("Duplicate %s clause"), clause);
	} else {
		cb_error (_("Duplicate %s clause"), clause);
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
		cb_error (_("Cannot specify both %s and %s"),
			  flag1_name, flag2_name);
	} else if (flag_to_set == flag2 && (flags & flag1)) {
		cb_error (_("Cannot specify both %s and %s"),
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
	if (cb_relaxed_syntax_check) {
		cb_warning (_("Cannot specify both %s and %s, %s ignored"),
			    clause, conflicting, clause);
	} else {
		cb_error (_("Cannot specify both %s and %s"),
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
			cb_error (_("Missing CHARACTERS/ALL/LEADING/TRAILING phrase after FOR phrase"));
		}
		break;

	case CHARACTERS_PHRASE:
	case ALL_LEADING_TRAILING_PHRASES:
		if (previous_tallying_phrase == NO_PHRASE) {
			cb_error (_("Missing FOR phrase before CHARACTERS/ALL/LEADING/TRAILING phrase"));
		} else if (previous_tallying_phrase == CHARACTERS_PHRASE
			   || previous_tallying_phrase == ALL_LEADING_TRAILING_PHRASES) {
			cb_error (_("Missing value between CHARACTERS/ALL/LEADING/TRAILING words"));
		}
		break;

	case VALUE_REGION_PHRASE:
		if (!(previous_tallying_phrase == ALL_LEADING_TRAILING_PHRASES
		      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
			cb_error (_("Missing ALL/LEADING/TRAILING before value"));
		}
		break;

	default:
		/* This should never happen */
		cb_error (_("Unexpected tallying phrase"));
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
	if (advancing_value != cb_int1) {
		cb_error (_("Cannot specify NO ADVANCING in screen DISPLAY"));
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
			cb_error_x (x_list, _("Each screen must have its own DISPLAY statement"));
		}

		if (upon_value != NULL && upon_value != cb_null) {
			cb_error_x (x_list, _("Screens may only be displayed on CRT"));
		}

		if (attr_ptr) {
			cb_verify_x (x_list, cb_accept_display_extensions,
				     _("Non-standard DISPLAY"));
		}

		return SCREEN_DISPLAY;
	} else if (contains_fields_and_screens ((struct cb_list *) x_list)) {
		cb_error_x (x_list, _("Cannot mix screens and fields in the same DISPLAY statement"));
		return MIXED_DISPLAY;
	} else if (line_column || attr_ptr) {
		if (upon_value != NULL && upon_value != cb_null) {
			cb_error_x (x_list, _("Screen clauses may only be used for DISPLAY on CRT"));
		}

		cb_verify_x (x_list, cb_accept_display_extensions,
			     _("Non-standard DISPLAY"));

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
			cb_error_x (x_list, _("A screen must be displayed in its own DISPLAY statement"));
		} else {
			/*
			  The only other option is that there is a mix of
			  FIELD_ON_SCREEN_DISPLAY and DEVICE_DISPLAY.
			*/
			cb_error_x (x_list, _("Ambiguous DISPLAY; put items to display on device in separate DISPLAY"));
		}
	}

	display_type = MIXED_DISPLAY;
}


#line 1415 "parser.c" /* yacc.c:339  */

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
    F = 428,
    FD = 429,
    FILE_CONTROL = 430,
    FILE_ID = 431,
    FILLER = 432,
    FINAL = 433,
    FIRST = 434,
    FIXED = 435,
    FLOAT_BINARY_128 = 436,
    FLOAT_BINARY_32 = 437,
    FLOAT_BINARY_64 = 438,
    FLOAT_DECIMAL_16 = 439,
    FLOAT_DECIMAL_34 = 440,
    FLOAT_DECIMAL_7 = 441,
    FLOAT_EXTENDED = 442,
    FLOAT_LONG = 443,
    FLOAT_SHORT = 444,
    FOOTING = 445,
    FOR = 446,
    FOREGROUND_COLOR = 447,
    FOREVER = 448,
    FORMATTED_DATE_FUNC = 449,
    FORMATTED_DATETIME_FUNC = 450,
    FORMATTED_TIME_FUNC = 451,
    FREE = 452,
    FROM = 453,
    FROM_CRT = 454,
    FULL = 455,
    FUNCTION = 456,
    FUNCTION_ID = 457,
    FUNCTION_NAME = 458,
    GENERATE = 459,
    GIVING = 460,
    GLOBAL = 461,
    GO = 462,
    GOBACK = 463,
    GREATER = 464,
    GREATER_OR_EQUAL = 465,
    GRID = 466,
    GROUP = 467,
    HEADING = 468,
    HIGHLIGHT = 469,
    HIGH_VALUE = 470,
    ID = 471,
    IDENTIFICATION = 472,
    IF = 473,
    IGNORE = 474,
    IGNORING = 475,
    IN = 476,
    INDEX = 477,
    INDEXED = 478,
    INDICATE = 479,
    INITIALIZE = 480,
    INITIALIZED = 481,
    INITIATE = 482,
    INPUT = 483,
    INPUT_OUTPUT = 484,
    INSPECT = 485,
    INTO = 486,
    INTRINSIC = 487,
    INVALID = 488,
    INVALID_KEY = 489,
    IS = 490,
    I_O = 491,
    I_O_CONTROL = 492,
    JUSTIFIED = 493,
    KEPT = 494,
    KEY = 495,
    KEYBOARD = 496,
    LABEL = 497,
    LAST = 498,
    LEADING = 499,
    LEFT = 500,
    LEFTLINE = 501,
    LENGTH = 502,
    LENGTH_OF = 503,
    LESS = 504,
    LESS_OR_EQUAL = 505,
    LIMIT = 506,
    LIMITS = 507,
    LINAGE = 508,
    LINAGE_COUNTER = 509,
    LINE = 510,
    LINE_COUNTER = 511,
    LINES = 512,
    LINKAGE = 513,
    LITERAL = 514,
    LOCALE = 515,
    LOCALE_DATE_FUNC = 516,
    LOCALE_TIME_FUNC = 517,
    LOCALE_TIME_FROM_FUNC = 518,
    LOCAL_STORAGE = 519,
    LOCK = 520,
    LOWER = 521,
    LOWER_CASE_FUNC = 522,
    LOWLIGHT = 523,
    LOW_VALUE = 524,
    MANUAL = 525,
    MEMORY = 526,
    MERGE = 527,
    MINUS = 528,
    MNEMONIC_NAME = 529,
    MODE = 530,
    MOVE = 531,
    MULTIPLE = 532,
    MULTIPLY = 533,
    NAME = 534,
    NATIONAL = 535,
    NATIONAL_EDITED = 536,
    NATIONAL_OF_FUNC = 537,
    NATIVE = 538,
    NEAREST_AWAY_FROM_ZERO = 539,
    NEAREST_EVEN = 540,
    NEAREST_TOWARD_ZERO = 541,
    NEGATIVE = 542,
    NEXT = 543,
    NEXT_PAGE = 544,
    NO = 545,
    NO_ECHO = 546,
    NORMAL = 547,
    NOT = 548,
    NOTHING = 549,
    NOT_END = 550,
    NOT_EOP = 551,
    NOT_ESCAPE = 552,
    NOT_EQUAL = 553,
    NOT_EXCEPTION = 554,
    NOT_INVALID_KEY = 555,
    NOT_OVERFLOW = 556,
    NOT_SIZE_ERROR = 557,
    NO_ADVANCING = 558,
    NUMBER = 559,
    NUMBERS = 560,
    NUMERIC = 561,
    NUMERIC_EDITED = 562,
    NUMVALC_FUNC = 563,
    OBJECT_COMPUTER = 564,
    OCCURS = 565,
    OF = 566,
    OFF = 567,
    OMITTED = 568,
    ON = 569,
    ONLY = 570,
    OPEN = 571,
    OPTIONAL = 572,
    OR = 573,
    ORDER = 574,
    ORGANIZATION = 575,
    OTHER = 576,
    OUTPUT = 577,
    OVERLINE = 578,
    PACKED_DECIMAL = 579,
    PADDING = 580,
    PAGE = 581,
    PAGE_COUNTER = 582,
    PARAGRAPH = 583,
    PERFORM = 584,
    PH = 585,
    PF = 586,
    PICTURE = 587,
    PICTURE_SYMBOL = 588,
    PLUS = 589,
    POINTER = 590,
    POSITION = 591,
    POSITIVE = 592,
    PRESENT = 593,
    PREVIOUS = 594,
    PRINT = 595,
    PRINTER = 596,
    PRINTER_1 = 597,
    PRINTING = 598,
    PROCEDURE = 599,
    PROCEDURES = 600,
    PROCEED = 601,
    PROGRAM = 602,
    PROGRAM_ID = 603,
    PROGRAM_NAME = 604,
    PROGRAM_POINTER = 605,
    PROHIBITED = 606,
    PROMPT = 607,
    PROTECTED = 608,
    QUOTE = 609,
    RANDOM = 610,
    RD = 611,
    READ = 612,
    READY_TRACE = 613,
    RECORD = 614,
    RECORDING = 615,
    RECORDS = 616,
    RECURSIVE = 617,
    REDEFINES = 618,
    REEL = 619,
    REFERENCE = 620,
    REFERENCES = 621,
    RELATIVE = 622,
    RELEASE = 623,
    REMAINDER = 624,
    REMOVAL = 625,
    RENAMES = 626,
    REPLACE = 627,
    REPLACING = 628,
    REPORT = 629,
    REPORTING = 630,
    REPORTS = 631,
    REPOSITORY = 632,
    REQUIRED = 633,
    RESERVE = 634,
    RESET = 635,
    RESET_TRACE = 636,
    RETURN = 637,
    RETURNING = 638,
    REVERSE_FUNC = 639,
    REVERSE_VIDEO = 640,
    REVERSED = 641,
    REWIND = 642,
    REWRITE = 643,
    RF = 644,
    RH = 645,
    RIGHT = 646,
    ROLLBACK = 647,
    ROUNDED = 648,
    RUN = 649,
    S = 650,
    SAME = 651,
    SCREEN = 652,
    SCREEN_CONTROL = 653,
    SCROLL = 654,
    SD = 655,
    SEARCH = 656,
    SECTION = 657,
    SECURE = 658,
    SEGMENT_LIMIT = 659,
    SELECT = 660,
    SEMI_COLON = 661,
    SENTENCE = 662,
    SEPARATE = 663,
    SEQUENCE = 664,
    SEQUENTIAL = 665,
    SET = 666,
    SHARING = 667,
    SIGN = 668,
    SIGNED = 669,
    SIGNED_INT = 670,
    SIGNED_LONG = 671,
    SIGNED_SHORT = 672,
    SIZE = 673,
    SIZE_ERROR = 674,
    SORT = 675,
    SORT_MERGE = 676,
    SOURCE = 677,
    SOURCE_COMPUTER = 678,
    SPACE = 679,
    SPECIAL_NAMES = 680,
    STANDARD = 681,
    STANDARD_1 = 682,
    STANDARD_2 = 683,
    START = 684,
    STATIC = 685,
    STATUS = 686,
    STDCALL = 687,
    STEP = 688,
    STOP = 689,
    STRING = 690,
    SUBSTITUTE_FUNC = 691,
    SUBSTITUTE_CASE_FUNC = 692,
    SUBTRACT = 693,
    SUM = 694,
    SUPPRESS = 695,
    SYMBOLIC = 696,
    SYNCHRONIZED = 697,
    SYSTEM_DEFAULT = 698,
    SYSTEM_OFFSET = 699,
    TAB = 700,
    TALLYING = 701,
    TAPE = 702,
    TERMINATE = 703,
    TEST = 704,
    THAN = 705,
    THEN = 706,
    THRU = 707,
    TIME = 708,
    TIME_OUT = 709,
    TIMES = 710,
    TO = 711,
    TOK_AMPER = 712,
    TOK_CLOSE_PAREN = 713,
    TOK_COLON = 714,
    TOK_DIV = 715,
    TOK_DOT = 716,
    TOK_EQUAL = 717,
    TOK_FALSE = 718,
    TOK_FILE = 719,
    TOK_GREATER = 720,
    TOK_INITIAL = 721,
    TOK_LESS = 722,
    TOK_MINUS = 723,
    TOK_MUL = 724,
    TOK_NULL = 725,
    TOK_OVERFLOW = 726,
    TOK_OPEN_PAREN = 727,
    TOK_PLUS = 728,
    TOK_TRUE = 729,
    TOP = 730,
    TOWARD_GREATER = 731,
    TOWARD_LESSER = 732,
    TRAILING = 733,
    TRANSFORM = 734,
    TRIM_FUNC = 735,
    TRUNCATION = 736,
    TYPE = 737,
    U = 738,
    UNDERLINE = 739,
    UNIT = 740,
    UNLOCK = 741,
    UNSIGNED = 742,
    UNSIGNED_INT = 743,
    UNSIGNED_LONG = 744,
    UNSIGNED_SHORT = 745,
    UNSTRING = 746,
    UNTIL = 747,
    UP = 748,
    UPDATE = 749,
    UPON = 750,
    UPON_ARGUMENT_NUMBER = 751,
    UPON_COMMAND_LINE = 752,
    UPON_ENVIRONMENT_NAME = 753,
    UPON_ENVIRONMENT_VALUE = 754,
    UPPER = 755,
    UPPER_CASE_FUNC = 756,
    USAGE = 757,
    USE = 758,
    USER = 759,
    USER_DEFAULT = 760,
    USER_FUNCTION_NAME = 761,
    USING = 762,
    V = 763,
    VALUE = 764,
    VARIABLE = 765,
    VARYING = 766,
    WAIT = 767,
    WHEN = 768,
    WHEN_COMPILED_FUNC = 769,
    WITH = 770,
    WORD = 771,
    WORDS = 772,
    WORKING_STORAGE = 773,
    WRITE = 774,
    YYYYDDD = 775,
    YYYYMMDD = 776,
    ZERO = 777,
    SHIFT_PREFER = 778,
    OVERFLOW = 779
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

#line 1992 "parser.c" /* yacc.c:358  */

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
#define YYLAST   8910

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  525
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  854
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1982
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2820

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   779

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
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  2005,  2005,  2005,  2038,  2039,  2043,  2044,  2048,  2049,
    2053,  2053,  2076,  2087,  2093,  2094,  2098,  2099,  2103,  2111,
    2120,  2128,  2129,  2130,  2135,  2139,  2134,  2153,  2152,  2168,
    2179,  2183,  2184,  2188,  2189,  2192,  2193,  2197,  2206,  2215,
    2216,  2220,  2221,  2225,  2229,  2239,  2244,  2245,  2254,  2261,
    2262,  2272,  2273,  2274,  2275,  2276,  2289,  2288,  2298,  2299,
    2302,  2303,  2317,  2316,  2326,  2327,  2328,  2329,  2333,  2334,
    2338,  2339,  2340,  2341,  2345,  2353,  2360,  2367,  2378,  2382,
    2386,  2390,  2397,  2398,  2403,  2405,  2404,  2415,  2416,  2417,
    2424,  2425,  2429,  2433,  2439,  2444,  2447,  2454,  2459,  2469,
    2470,  2482,  2483,  2487,  2488,  2492,  2493,  2497,  2498,  2499,
    2500,  2501,  2502,  2503,  2504,  2505,  2506,  2507,  2508,  2516,
    2515,  2543,  2553,  2566,  2574,  2577,  2578,  2582,  2589,  2604,
    2625,  2624,  2648,  2654,  2660,  2666,  2672,  2678,  2688,  2692,
    2699,  2703,  2708,  2707,  2718,  2722,  2729,  2730,  2731,  2732,
    2733,  2734,  2738,  2739,  2746,  2761,  2764,  2771,  2779,  2783,
    2794,  2814,  2822,  2833,  2834,  2840,  2861,  2862,  2866,  2870,
    2891,  2914,  2996,  2999,  3008,  3027,  3043,  3061,  3079,  3096,
    3113,  3123,  3124,  3131,  3132,  3140,  3141,  3151,  3152,  3157,
    3156,  3186,  3187,  3191,  3192,  3193,  3194,  3195,  3196,  3197,
    3198,  3199,  3200,  3201,  3202,  3203,  3210,  3216,  3226,  3239,
    3252,  3279,  3280,  3281,  3285,  3286,  3287,  3288,  3291,  3292,
    3298,  3299,  3303,  3307,  3308,  3313,  3316,  3317,  3324,  3332,
    3333,  3334,  3341,  3365,  3367,  3372,  3382,  3390,  3405,  3412,
    3414,  3415,  3421,  3421,  3428,  3433,  3438,  3445,  3446,  3447,
    3451,  3462,  3463,  3467,  3472,  3477,  3482,  3493,  3504,  3514,
    3522,  3523,  3524,  3530,  3541,  3548,  3549,  3555,  3563,  3564,
    3565,  3571,  3572,  3573,  3580,  3581,  3585,  3586,  3592,  3620,
    3621,  3622,  3623,  3630,  3629,  3645,  3646,  3650,  3653,  3654,
    3664,  3661,  3677,  3678,  3686,  3687,  3695,  3696,  3700,  3721,
    3720,  3737,  3744,  3748,  3754,  3755,  3759,  3769,  3784,  3785,
    3786,  3787,  3788,  3789,  3790,  3791,  3792,  3799,  3806,  3806,
    3806,  3812,  3832,  3866,  3897,  3898,  3905,  3906,  3910,  3911,
    3918,  3929,  3934,  3945,  3946,  3950,  3951,  3957,  3968,  3986,
    3987,  3991,  3992,  3993,  3997,  4004,  4011,  4020,  4029,  4030,
    4031,  4032,  4033,  4042,  4043,  4049,  4084,  4085,  4098,  4113,
    4114,  4118,  4128,  4142,  4144,  4143,  4159,  4162,  4162,  4179,
    4180,  4184,  4186,  4185,  4220,  4233,  4241,  4246,  4252,  4261,
    4271,  4274,  4286,  4287,  4288,  4289,  4293,  4297,  4301,  4305,
    4309,  4313,  4317,  4321,  4325,  4329,  4333,  4337,  4341,  4352,
    4353,  4357,  4358,  4362,  4363,  4364,  4368,  4369,  4373,  4399,
    4403,  4412,  4416,  4425,  4426,  4427,  4428,  4429,  4430,  4431,
    4432,  4433,  4434,  4435,  4436,  4437,  4438,  4445,  4469,  4497,
    4500,  4509,  4534,  4545,  4546,  4550,  4554,  4558,  4562,  4566,
    4570,  4574,  4578,  4582,  4586,  4590,  4594,  4598,  4603,  4608,
    4612,  4616,  4624,  4628,  4632,  4640,  4644,  4648,  4652,  4656,
    4660,  4664,  4668,  4672,  4680,  4688,  4692,  4696,  4700,  4704,
    4708,  4716,  4717,  4721,  4722,  4728,  4734,  4746,  4764,  4765,
    4774,  4806,  4836,  4837,  4841,  4842,  4845,  4846,  4852,  4853,
    4860,  4861,  4868,  4892,  4893,  4910,  4911,  4914,  4915,  4922,
    4923,  4928,  4939,  4950,  4961,  4972,  5001,  5000,  5009,  5010,
    5014,  5015,  5018,  5019,  5032,  5045,  5066,  5075,  5089,  5091,
    5090,  5110,  5112,  5111,  5127,  5129,  5128,  5137,  5138,  5145,
    5144,  5157,  5158,  5159,  5166,  5171,  5175,  5176,  5182,  5189,
    5193,  5194,  5200,  5237,  5241,  5246,  5252,  5253,  5258,  5259,
    5260,  5261,  5262,  5266,  5273,  5280,  5287,  5294,  5300,  5301,
    5306,  5305,  5312,  5313,  5317,  5318,  5319,  5320,  5321,  5322,
    5323,  5324,  5325,  5326,  5327,  5328,  5329,  5330,  5331,  5332,
    5336,  5343,  5344,  5345,  5346,  5347,  5348,  5349,  5352,  5353,
    5354,  5357,  5358,  5362,  5369,  5375,  5376,  5380,  5381,  5385,
    5392,  5396,  5403,  5404,  5408,  5415,  5416,  5420,  5421,  5425,
    5426,  5427,  5431,  5432,  5436,  5437,  5441,  5448,  5455,  5463,
    5465,  5464,  5485,  5486,  5490,  5491,  5495,  5497,  5496,  5567,
    5585,  5586,  5590,  5595,  5600,  5604,  5608,  5613,  5618,  5623,
    5628,  5632,  5636,  5641,  5646,  5651,  5655,  5659,  5663,  5667,
    5672,  5676,  5680,  5685,  5690,  5695,  5700,  5701,  5702,  5703,
    5704,  5705,  5706,  5707,  5708,  5717,  5722,  5733,  5734,  5738,
    5739,  5743,  5744,  5748,  5749,  5754,  5757,  5761,  5769,  5772,
    5776,  5784,  5795,  5803,  5805,  5815,  5804,  5842,  5842,  5875,
    5879,  5878,  5892,  5891,  5911,  5912,  5917,  5939,  5941,  5945,
    5956,  5958,  5966,  5974,  5982,  6011,  6044,  6047,  6060,  6065,
    6075,  6106,  6108,  6107,  6144,  6145,  6149,  6150,  6151,  6168,
    6169,  6180,  6179,  6229,  6230,  6234,  6282,  6302,  6305,  6324,
    6329,  6323,  6342,  6342,  6372,  6379,  6380,  6381,  6382,  6383,
    6384,  6385,  6386,  6387,  6388,  6389,  6390,  6391,  6392,  6393,
    6394,  6395,  6396,  6397,  6398,  6399,  6400,  6401,  6402,  6403,
    6404,  6405,  6406,  6407,  6408,  6409,  6410,  6411,  6412,  6413,
    6414,  6415,  6416,  6417,  6418,  6419,  6420,  6421,  6422,  6423,
    6424,  6425,  6426,  6427,  6428,  6442,  6454,  6453,  6470,  6469,
    6487,  6491,  6495,  6500,  6505,  6510,  6515,  6519,  6523,  6527,
    6531,  6536,  6540,  6544,  6548,  6552,  6556,  6560,  6567,  6568,
    6574,  6576,  6580,  6581,  6585,  6586,  6590,  6594,  6598,  6599,
    6603,  6619,  6635,  6648,  6652,  6653,  6657,  6664,  6668,  6674,
    6678,  6682,  6686,  6690,  6696,  6700,  6704,  6710,  6714,  6718,
    6722,  6726,  6730,  6734,  6738,  6742,  6746,  6750,  6756,  6760,
    6764,  6768,  6772,  6776,  6780,  6787,  6788,  6792,  6796,  6814,
    6813,  6822,  6826,  6830,  6836,  6837,  6844,  6848,  6859,  6858,
    6867,  6871,  6883,  6884,  6892,  6891,  6900,  6901,  6905,  6911,
    6911,  6918,  6917,  6928,  6955,  6959,  6964,  6969,  6990,  6994,
    6993,  7010,  7011,  7016,  7024,  7048,  7050,  7054,  7063,  7076,
    7079,  7083,  7087,  7092,  7115,  7116,  7120,  7121,  7125,  7129,
    7133,  7143,  7147,  7154,  7158,  7166,  7170,  7177,  7184,  7188,
    7199,  7198,  7206,  7210,  7221,  7220,  7228,  7233,  7241,  7242,
    7243,  7244,  7245,  7253,  7252,  7261,  7268,  7272,  7282,  7293,
    7311,  7310,  7319,  7323,  7327,  7332,  7340,  7344,  7355,  7354,
    7366,  7370,  7374,  7378,  7382,  7386,  7394,  7403,  7404,  7409,
    7408,  7453,  7457,  7465,  7466,  7470,  7474,  7479,  7483,  7484,
    7488,  7492,  7496,  7500,  7507,  7508,  7512,  7516,  7522,  7528,
    7532,  7536,  7542,  7548,  7554,  7560,  7564,  7568,  7572,  7576,
    7580,  7584,  7588,  7595,  7599,  7610,  7609,  7618,  7622,  7626,
    7630,  7634,  7641,  7645,  7656,  7655,  7664,  7683,  7682,  7706,
    7714,  7715,  7720,  7731,  7742,  7756,  7760,  7767,  7768,  7773,
    7782,  7791,  7796,  7805,  7806,  7811,  7873,  7874,  7875,  7879,
    7880,  7884,  7888,  7899,  7898,  7910,  7911,  7932,  7946,  7968,
    7990,  8010,  8033,  8034,  8042,  8041,  8050,  8061,  8060,  8070,
    8077,  8076,  8089,  8098,  8102,  8113,  8129,  8128,  8137,  8141,
    8145,  8152,  8156,  8167,  8166,  8174,  8182,  8183,  8187,  8188,
    8189,  8194,  8197,  8204,  8208,  8216,  8223,  8224,  8225,  8226,
    8227,  8228,  8229,  8234,  8237,  8247,  8246,  8255,  8261,  8273,
    8272,  8281,  8285,  8289,  8293,  8300,  8301,  8302,  8303,  8310,
    8309,  8330,  8340,  8349,  8353,  8360,  8365,  8370,  8375,  8380,
    8385,  8393,  8394,  8398,  8403,  8409,  8411,  8412,  8413,  8414,
    8418,  8446,  8449,  8453,  8457,  8461,  8468,  8475,  8485,  8484,
    8497,  8496,  8504,  8508,  8519,  8518,  8527,  8531,  8538,  8542,
    8553,  8552,  8560,  8581,  8605,  8606,  8607,  8608,  8612,  8613,
    8617,  8618,  8619,  8620,  8632,  8631,  8642,  8648,  8647,  8658,
    8666,  8674,  8681,  8685,  8698,  8705,  8717,  8720,  8725,  8729,
    8740,  8747,  8748,  8752,  8753,  8756,  8757,  8762,  8773,  8772,
    8781,  8808,  8809,  8814,  8817,  8821,  8825,  8829,  8833,  8837,
    8844,  8845,  8849,  8850,  8854,  8858,  8868,  8879,  8878,  8886,
    8896,  8907,  8906,  8915,  8922,  8926,  8937,  8936,  8948,  8957,
    8960,  8964,  8971,  8975,  8985,  8997,  8996,  9005,  9009,  9018,
    9019,  9024,  9027,  9035,  9039,  9046,  9054,  9058,  9069,  9068,
    9082,  9083,  9084,  9085,  9086,  9087,  9088,  9092,  9093,  9097,
    9098,  9104,  9113,  9120,  9121,  9125,  9129,  9133,  9139,  9145,
    9149,  9153,  9157,  9166,  9170,  9179,  9188,  9189,  9193,  9202,
    9203,  9207,  9211,  9220,  9230,  9229,  9238,  9237,  9268,  9271,
    9291,  9292,  9295,  9296,  9304,  9305,  9310,  9315,  9325,  9341,
    9346,  9356,  9373,  9372,  9382,  9395,  9398,  9406,  9409,  9414,
    9419,  9427,  9428,  9429,  9430,  9431,  9432,  9436,  9444,  9445,
    9449,  9453,  9464,  9463,  9473,  9486,  9489,  9493,  9497,  9505,
    9517,  9520,  9527,  9528,  9529,  9530,  9537,  9536,  9545,  9552,
    9553,  9557,  9558,  9559,  9563,  9564,  9568,  9572,  9583,  9582,
    9591,  9595,  9599,  9606,  9610,  9620,  9631,  9632,  9639,  9638,
    9647,  9653,  9665,  9664,  9672,  9686,  9685,  9693,  9710,  9709,
    9718,  9726,  9727,  9732,  9733,  9738,  9745,  9746,  9751,  9758,
    9759,  9763,  9764,  9768,  9769,  9773,  9777,  9788,  9787,  9796,
    9797,  9798,  9799,  9800,  9804,  9831,  9834,  9846,  9856,  9861,
    9866,  9871,  9879,  9917,  9918,  9922,  9962,  9972,  9995,  9996,
    9997,  9998, 10002, 10011, 10017, 10027, 10036, 10045, 10046, 10053,
   10052, 10064, 10074, 10075, 10080, 10083, 10087, 10091, 10098, 10099,
   10103, 10104, 10105, 10109, 10113, 10125, 10126, 10127, 10136, 10138,
   10143, 10151, 10152, 10156, 10157, 10161, 10169, 10170, 10175, 10176,
   10177, 10186, 10188, 10193, 10201, 10202, 10206, 10216, 10217, 10218,
   10227, 10229, 10234, 10242, 10243, 10247, 10257, 10258, 10259, 10268,
   10270, 10275, 10283, 10284, 10288, 10299, 10303, 10305, 10309, 10310,
   10314, 10322, 10323, 10327, 10337, 10338, 10347, 10349, 10354, 10362,
   10363, 10367, 10377, 10378, 10382, 10383, 10392, 10394, 10399, 10407,
   10408, 10412, 10422, 10426, 10436, 10443, 10450, 10450, 10461, 10462,
   10463, 10467, 10476, 10477, 10479, 10480, 10481, 10482, 10483, 10485,
   10486, 10487, 10488, 10489, 10490, 10492, 10493, 10494, 10496, 10497,
   10498, 10499, 10500, 10503, 10504, 10508, 10509, 10513, 10514, 10518,
   10519, 10523, 10527, 10533, 10537, 10543, 10544, 10545, 10549, 10550,
   10551, 10555, 10556, 10557, 10561, 10565, 10569, 10570, 10571, 10574,
   10575, 10585, 10597, 10606, 10618, 10627, 10639, 10654, 10655, 10660,
   10669, 10675, 10695, 10699, 10720, 10761, 10775, 10776, 10781, 10787,
   10788, 10793, 10805, 10806, 10807, 10814, 10825, 10826, 10830, 10838,
   10846, 10850, 10857, 10866, 10867, 10873, 10882, 10893, 10910, 10914,
   10921, 10922, 10923, 10930, 10931, 10935, 10939, 10946, 10947, 10948,
   10949, 10950, 10954, 10958, 10962, 10966, 10970, 10991, 10995, 11002,
   11003, 11004, 11008, 11009, 11010, 11011, 11012, 11016, 11020, 11027,
   11028, 11032, 11033, 11037, 11038, 11042, 11043, 11054, 11058, 11062,
   11066, 11067, 11071, 11075, 11076, 11083, 11087, 11091, 11095, 11099,
   11103, 11104, 11110, 11114, 11118, 11119, 11123, 11127, 11134, 11141,
   11148, 11158, 11165, 11175, 11185, 11195, 11208, 11212, 11220, 11228,
   11232, 11242, 11256, 11279, 11301, 11317, 11318, 11319, 11320, 11321,
   11322, 11326, 11330, 11347, 11351, 11358, 11359, 11360, 11361, 11362,
   11363, 11364, 11370, 11374, 11378, 11382, 11386, 11390, 11394, 11398,
   11402, 11406, 11410, 11414, 11421, 11422, 11426, 11427, 11428, 11432,
   11433, 11434, 11435, 11439, 11443, 11447, 11454, 11458, 11462, 11469,
   11476, 11483, 11493, 11500, 11510, 11517, 11527, 11531, 11544, 11548,
   11563, 11571, 11572, 11576, 11577, 11581, 11582, 11587, 11590, 11598,
   11601, 11608, 11610, 11611, 11615, 11616, 11620, 11621, 11622, 11627,
   11630, 11643, 11647, 11655, 11659, 11663, 11667, 11671, 11675, 11679,
   11683, 11690, 11691, 11697, 11698, 11699, 11700, 11701, 11702, 11703,
   11704, 11705, 11706, 11707, 11708, 11709, 11710, 11711, 11712, 11713,
   11714, 11715, 11716, 11717, 11718, 11719, 11720, 11721, 11722, 11723,
   11724, 11725, 11726, 11727, 11728, 11729, 11730, 11731, 11732, 11733,
   11734, 11735, 11736, 11737, 11738, 11739, 11740, 11741, 11742, 11743,
   11744, 11745, 11746, 11747, 11748, 11749, 11750, 11751, 11752, 11753,
   11754, 11755, 11756, 11757, 11758, 11759, 11760, 11761, 11762, 11763,
   11764, 11765, 11766, 11773, 11773, 11774, 11774, 11775, 11775, 11776,
   11776, 11777, 11777, 11778, 11778, 11779, 11779, 11780, 11780, 11781,
   11781, 11782, 11782, 11783, 11783, 11784, 11784, 11785, 11785, 11786,
   11786, 11787, 11787, 11788, 11788, 11789, 11789, 11790, 11790, 11791,
   11791, 11791, 11792, 11792, 11793, 11793, 11794, 11794, 11795, 11795,
   11796, 11796, 11796, 11797, 11797, 11798, 11798, 11798, 11799, 11799,
   11799, 11800, 11800, 11800, 11801, 11801, 11802, 11802, 11803, 11803,
   11804, 11804, 11804, 11805, 11805, 11806, 11806, 11807, 11807, 11807,
   11807, 11808, 11808, 11809, 11809, 11810, 11810, 11811, 11811, 11812,
   11812, 11812, 11813, 11813, 11814, 11814, 11815, 11815, 11816, 11816,
   11816, 11817, 11817, 11818, 11818, 11819, 11819, 11820, 11820, 11821,
   11821, 11822, 11822, 11823, 11823, 11824, 11824, 11824, 11825, 11825,
   11826, 11826, 11827, 11827, 11831, 11831, 11832, 11832, 11833, 11833,
   11834, 11834, 11835, 11835, 11836, 11836, 11837, 11837, 11838, 11838,
   11839, 11839, 11840, 11840, 11841, 11841, 11842, 11842, 11843, 11843,
   11844, 11844, 11845, 11845, 11848, 11849, 11850, 11854, 11854, 11855,
   11855, 11856, 11856, 11857, 11857, 11858, 11858, 11859, 11859, 11860,
   11860, 11861, 11861
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
  "SEQUENCE", "SEQUENTIAL", "SET", "SHARING", "SIGN", "SIGNED",
  "\"SIGNED-INT\"", "\"SIGNED-LONG\"", "\"SIGNED-SHORT\"", "SIZE",
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
  "repository_name", "_as_literal_intrinsic", "repository_name_list",
  "_special_names_paragraph", "_special_names_sentence_list",
  "special_names_sentence_list", "special_name_list", "special_name",
  "mnemonic_name_clause", "$@9", "mnemonic_choices",
  "_special_name_mnemonic_on_off", "on_off_clauses", "on_off_clauses_1",
  "alphabet_name_clause", "@10", "alphabet_definition",
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
  "data_description", "$@19", "level_number", "_entry_name", "const_name",
  "const_global", "lit_or_length", "con_identifier", "fp32_usage",
  "fp64_usage", "fp128_usage", "pointer_len", "constant_entry",
  "constant_source", "_data_description_clause_sequence",
  "data_description_clause", "redefines_clause", "external_clause",
  "_as_extname", "global_clause", "picture_clause", "usage_clause",
  "usage", "float_usage", "double_usage", "sign_clause",
  "report_occurs_clause", "_occurs_step", "occurs_clause",
  "_occurs_to_integer", "_occurs_from_integer", "_occurs_depending",
  "_capacity_in", "_occurs_initialized", "occurs_keys", "_occurs_key_list",
  "ascending_or_descending", "_occurs_indexed", "occurs_index_list",
  "occurs_index", "justified_clause", "synchronized_clause",
  "blank_clause", "based_clause", "value_clause", "$@20",
  "value_item_list", "value_item", "_false_is", "renames_clause",
  "any_length_clause", "_local_storage_section", "$@21",
  "_linkage_section", "$@22", "_report_section", "$@23",
  "_report_description_sequence", "report_description", "$@24",
  "_report_description_options", "report_description_option",
  "control_clause", "control_field_list", "identifier_list",
  "page_limit_clause", "page_line_column", "_page_heading_list",
  "page_detail", "heading_clause", "first_detail", "last_heading",
  "last_detail", "footing_clause", "_report_group_description_list",
  "report_group_description_entry", "$@25", "_report_group_options",
  "report_group_option", "type_clause", "type_option", "_control_final",
  "_or_page", "next_group_clause", "sum_clause_list", "_reset_clause",
  "data_or_final", "present_when_condition", "varying_clause",
  "line_clause", "line_keyword_clause", "column_clause",
  "col_keyword_clause", "report_line_integer_list", "line_or_plus",
  "report_col_integer_list", "col_or_plus", "source_clause",
  "group_indicate_clause", "report_usage_clause", "_screen_section",
  "$@26", "_screen_description_list", "screen_description_list",
  "screen_description", "$@27", "_screen_options", "screen_option", "eol",
  "eos", "plus_plus", "minus_minus", "_screen_line_plus_minus",
  "_screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "_procedure_division", "$@28", "$@29", "$@30",
  "_procedure_using_chaining", "$@31", "$@32", "procedure_param_list",
  "procedure_param", "_procedure_type", "_size_optional",
  "_procedure_optional", "_procedure_returning", "_procedure_declaratives",
  "$@33", "_procedure_list", "procedure", "section_header", "$@34",
  "_use_statement", "paragraph_header", "invalid_statement", "_segment",
  "statement_list", "@35", "@36", "statements", "$@37", "statement",
  "accept_statement", "$@38", "accept_body", "$@39", "accp_identifier",
  "_accept_clauses", "accept_clauses", "accept_clause", "lines_or_number",
  "at_line_column", "line_number", "column_number", "mode_is_block",
  "accp_attr", "update_default", "end_accept", "add_statement", "$@40",
  "add_body", "_add_to", "end_add", "allocate_statement", "$@41",
  "allocate_body", "allocate_returning", "alter_statement", "$@42",
  "alter_body", "alter_entry", "_proceed_to", "call_statement", "$@43",
  "call_body", "mnemonic_conv", "call_using", "$@44", "call_param_list",
  "call_param", "call_type", "call_returning", "return_give",
  "null_or_omitted", "call_exception_phrases", "_call_on_exception",
  "call_on_exception", "_call_not_on_exception", "call_not_on_exception",
  "end_call", "cancel_statement", "$@45", "cancel_body", "close_statement",
  "$@46", "close_body", "close_option", "compute_statement", "$@47",
  "compute_body", "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "$@48", "delete_body", "delete_file_list",
  "end_delete", "display_statement", "$@49", "display_body",
  "screen_or_device_display", "display_list", "display_atom", "$@50",
  "disp_list", "display_clauses", "display_clause", "display_upon",
  "crt_under", "disp_attr", "end_display", "divide_statement", "$@51",
  "divide_body", "end_divide", "entry_statement", "$@52", "entry_body",
  "evaluate_statement", "$@53", "evaluate_body", "evaluate_subject_list",
  "evaluate_subject", "evaluate_condition_list", "evaluate_case_list",
  "evaluate_case", "evaluate_other", "evaluate_when_list",
  "evaluate_object_list", "evaluate_object", "_evaluate_thru_expr",
  "end_evaluate", "exit_statement", "$@54", "exit_body",
  "exit_program_returning", "free_statement", "$@55", "free_body",
  "generate_statement", "$@56", "generate_body", "goto_statement", "$@57",
  "go_body", "goto_depending", "goback_statement", "if_statement", "$@58",
  "if_else_statements", "end_if", "initialize_statement", "$@59",
  "initialize_body", "initialize_filler", "initialize_value",
  "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "$@60", "initiate_body", "inspect_statement",
  "$@61", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@62", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region", "inspect_before",
  "inspect_after", "merge_statement", "$@63", "move_statement", "$@64",
  "move_body", "multiply_statement", "$@65", "multiply_body",
  "end_multiply", "open_statement", "$@66", "open_body", "open_mode",
  "open_sharing", "open_option", "perform_statement", "$@67",
  "perform_body", "$@68", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "read_statement", "$@69",
  "read_body", "read_into", "with_lock", "read_key", "read_handler",
  "end_read", "ready_statement", "release_statement", "$@70",
  "release_body", "reset_statement", "return_statement", "$@71",
  "return_body", "end_return", "rewrite_statement", "$@72", "rewrite_body",
  "write_lock", "end_rewrite", "rollback_statement", "search_statement",
  "$@73", "search_body", "search_varying", "search_at_end", "search_whens",
  "search_when", "end_search", "set_statement", "$@74", "set_body",
  "on_or_off", "up_or_down", "set_environment", "set_attr",
  "set_attr_clause", "set_attr_one", "set_to", "set_up_down",
  "set_to_on_off_sequence", "set_to_on_off", "set_to_true_false_sequence",
  "set_to_true_false", "set_last_exception_to_off", "sort_statement",
  "$@75", "sort_body", "@76", "sort_key_list", "_key_list",
  "_sort_duplicates", "sort_collating", "sort_input", "sort_output",
  "start_statement", "$@77", "start_body", "sizelen_clause", "start_key",
  "start_op", "disallowed_op", "not_equal_op", "end_start",
  "stop_statement", "$@78", "stop_returning", "_status_x", "stop_literal",
  "string_statement", "$@79", "string_body", "string_item_list",
  "string_item", "_with_pointer", "end_string", "subtract_statement",
  "$@80", "subtract_body", "end_subtract", "suppress_statement",
  "_printing", "terminate_statement", "$@81", "terminate_body",
  "transform_statement", "$@82", "transform_body", "unlock_statement",
  "$@83", "unlock_body", "unstring_statement", "$@84", "unstring_body",
  "_unstring_delimited", "unstring_delimited_list",
  "unstring_delimited_item", "unstring_into", "unstring_into_item",
  "_unstring_into_delimiter", "_unstring_into_count", "_unstring_tallying",
  "end_unstring", "use_statement", "$@85", "use_phrase",
  "use_file_exception", "use_global", "use_file_exception_target",
  "use_debugging", "debugging_list", "debugging_target", "_all_refs",
  "use_start_end", "program_start_end", "use_reporting", "use_exception",
  "use_ex_keyw", "write_statement", "$@86", "write_body", "from_option",
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
  "condition", "expr", "partial_expr", "$@87", "expr_tokens", "expr_token",
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
     775,   776,   777,   778,   779
};
# endif

#define YYPACT_NINF -2437

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2437)))

#define YYTABLE_NINF -1933

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2437,   294,   922, -2437,   212,   653, -2437,   892, -2437, -2437,
     667, -2437, -2437,   826,   408,   423, -2437,   935, -2437,  1037,
    1083, -2437, -2437,   667,   667, -2437, -2437,   896,  1057,  1291,
     971,  1060,  1239,  -106,  1020,  1065,  1355,  1367, -2437,  1073,
    1459, -2437, -2437,  1181, -2437,  1145,  1221, -2437,  1451,  1166,
    1169,  1213,  1353,  1231,   -18,   -18,   570, -2437,  1355, -2437,
     570, -2437, -2437,    32,  2977,  3599,  1184,   -20, -2437,  1212,
    1216, -2437, -2437, -2437,  1240,  1543, -2437, -2437, -2437, -2437,
    1668,  1668, -2437, -2437,  1245, -2437,  1249, -2437, -2437,  1319,
    3924, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
     -33, -2437, -2437, -2437, -2437, -2437, -2437, -2437,  1329, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437,  -124, -2437, -2437,  1394, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437,  1225, -2437,  1228,    46,
   -2437, -2437,   494,   382,  1232, -2437,    69,    69,  1309,  1334,
    1514,  1514,  1514,    69,  1338,  1514,  1695, -2437,  1382,  1543,
    1421, -2437, -2437, -2437, -2437,  1548, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437,  1512,  1312, -2437, -2437, -2437,
     103,   103,  -130,  1314, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437,   435,  5057,  8152,  -127,   721,
     -88,  1260,   787,  -212,  5321,  6207,  1527,   577,   785,   787,
    1273,  1340, -2437, -2437,  6207, -2437, -2437,   787,  1274,  1652,
    1273,  5409,  6207, -2437,  1149,  4293,  1260,  1273,  1260,  1273,
      72,   719,  1273,  1260, -2437, -2437, -2437, -2437, -2437, -2437,
    5536,  5655, -2437, -2437,  1274,   122,  1273,  1260,  1273,  1273,
    1399,  1538, -2437, -2437,  1343, -2437, -2437,  1344,   869,   -55,
   -2437, -2437,  1398,  1390,  1745,  1514, -2437, -2437, -2437,   760,
   -2437, -2437, -2437, -2437, -2437,   860,  1750,  1514, -2437,    -2,
   -2437, -2437, -2437,  1514,  1514, -2437,  1514, -2437,  1273,  1742,
    1273,  1514,  1514,  1273, -2437,  1299,  1105,  1356, -2437,  1494,
   -2437, -2437,  1300, -2437, -2437, -2437,   502, -2437,   256, -2437,
    -173,  -163,   387, -2437, -2437, -2437, -2437,     7,  1687, -2437,
    1623, -2437,  1354,  1511,   902, -2437,  1273, -2437, -2437,  1357,
    1358,  1364, -2437,  3437,     7,     7, -2437,  1366,  1370,  1372,
   -2437, -2437, -2437,  1378,     7, -2437, -2437, -2437, -2437, -2437,
   -2437,  1379, -2437,  1364, -2437, -2437,  1693, -2437,  5678, -2437,
   -2437, -2437,  1376, -2437, -2437,  1380,  1381,  1386,  3437,  8251,
    8152,  8251, -2437,    38,  -205, -2437,  1657, -2437, -2437, -2437,
     186,  1376, -2437, -2437,  -127, -2437,  1389, -2437,     7, -2437,
   -2437, -2437, -2437,  1726,  2571, -2437,   -88, -2437, -2437,  1260,
     548,  1511,  1727,   361, -2437,  1467, -2437, -2437,  1354,  1376,
    1260,  1728,  1505,  1194, -2437,  1729,   626,  5759, -2437, -2437,
    4644,  1217,  1222,  1731,   133,  1368, -2437, -2437, -2437,  1732,
      54, -2437, -2437, -2437,  4354, -2437, -2437,  1767,   -33, -2437,
   -2437, -2437,   787, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
    1422, -2437, -2437,   613, -2437,  1274, -2437, -2437,   230, -2437,
   -2437, -2437, -2437, -2437, -2437,  1404,  6207, -2437,  1423,  1737,
    1831, -2437, -2437, -2437, -2437,  1149,  1469, -2437,  1428, -2437,
   -2437,  7475,   150,   889,  1432,  1430, -2437,   712, -2437,  1437,
    1743,   -51, -2437,  1691, -2437,  1746,  1505,  1748,  1691,  1273,
    1749,  1384, -2437,  1201,  1733, -2437, -2437, -2437, -2437, -2437,
   -2437,  1624, -2437,   787, -2437, -2437,   476, -2437,   720,  1866,
   -2437,    33, -2437,  1752,  1345,  4778,  1853,  1754,  5086, -2437,
   -2437,  1273,  1755,  5995,  1274, -2437, -2437,   455, -2437, -2437,
   -2437, -2437,  3309, -2437,  1708, -2437,  1128,  1757,  1796,  1760,
    1691,  1455,  1515,  1660,  1406,  1462,  6910, -2437,  1408, -2437,
   -2437, -2437,  1603, -2437,    69, -2437,   778, -2437,   136, -2437,
   -2437, -2437, -2437,  1514,  1516,  1669, -2437, -2437, -2437, -2437,
    1224,  1514,  1413,  1473,  1828,  1514,  1233,  1273,  1679, -2437,
   -2437, -2437, -2437,  1680,  1464, -2437, -2437,  1299, -2437,    77,
   -2437, -2437, -2437, -2437, -2437, -2437,  1250,   -66,  1514,    68,
   -2437, -2437, -2437,  1479,   272, -2437,  1514,  1525,  1627, -2437,
   -2437,  1835, -2437, -2437,  1273, -2437, -2437,  2249,  1961,  8152,
    1474, -2437, -2437,   -45, -2437,  1492,  8152,  8152,  6924, -2437,
   -2437,  1376, -2437,  1433,  1434,  8152,  8152,  8152,  3437,  1435,
    3437, -2437, -2437, -2437,  6288,  1747, -2437,   902,  8152, -2437,
    3437,  8152, -2437,  1376, -2437, -2437, -2437,  1093, -2437,  1730,
    8152,  8152,  8152,  8152,  8152, -2437,  1571, -2437,  1613,  1702,
   -2437, -2437, -2437,  1368, -2437,   548, -2437, -2437, -2437,   782,
     584,  1273, -2437, -2437, -2437, -2437, -2437,  8152,  1688, -2437,
    1474, -2437,  1260, -2437, -2437, -2437, -2437,   848, -2437, -2437,
   -2437, -2437, -2437,  1666,  1801, -2437, -2437,  4644,   147,   626,
     626,   626,   626, -2437, -2437,  6207,  6288, -2437, -2437, -2437,
   -2437,   577,   142, -2437,  1456, -2437,  1458, -2437, -2437, -2437,
   -2437,  1340, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437,  4011, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437,   -13, -2437,  1839,  1651,  1793, -2437,
    1201,    59, -2437, -2437,  1599, -2437, -2437,    65,  8152, -2437,
    1518,   787, -2437, -2437,  6288,  1469,  1460,  1260, -2437, -2437,
   -2437, -2437, -2437,  1807,  1273,  -127, -2437,   245, -2437, -2437,
   -2437, -2437,  1505,  1652, -2437, -2437, -2437,  1751, -2437, -2437,
     449,  1847, -2437, -2437,  1273,  1847,  1522, -2437,  1376,  1523,
   -2437, -2437,   513,  1250, -2437, -2437,  4922, -2437,  1931,   395,
      58, -2437, -2437, -2437,  1514, -2437,   -97,  6207, -2437, -2437,
      56,  5971, -2437, -2437,  1273, -2437,  1783, -2437, -2437,  6288,
   -2437,  1669, -2437, -2437,  1201, -2437, -2437, -2437, -2437, -2437,
    1853,  1756, -2437, -2437,   245, -2437,  1528,  1581,  1616,  1530,
   -2437,  1531, -2437,  1907, -2437,  1908, -2437,   818, -2437, -2437,
    1537, -2437, -2437, -2437,  1981,  1544, -2437, -2437,  1669, -2437,
   -2437, -2437,   480, -2437, -2437, -2437,  1734,  1301, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437,  1233, -2437,  1556, -2437,   421,
   -2437,  1604, -2437, -2437, -2437, -2437,  1758,   -66, -2437,  1776,
      69,    69, -2437,  1250,  1812, -2437,   -89, -2437, -2437, -2437,
    1667, -2437,  1943,   132,  1514, -2437,  1502,  1559, -2437, -2437,
     384, -2437,  1514,  1147,  2249, -2437, -2437, -2437,   706,  6883,
   -2437,  1147, -2437, -2437, -2437,  1501,  1503, -2437,  1201,  1147,
    1785,  1595,  1735, -2437, -2437,  1761, -2437, -2437, -2437, -2437,
      52,  1142,  8152, -2437, -2437, -2437,    26, -2437,  1273,    89,
     982,  1572,   155,  1575, -2437,   255, -2437, -2437,   420,  1576,
    1577,  1579,   326, -2437,  1376, -2437,  1584, -2437,   350,  1585,
    1511,   573, -2437,   -57,   451,   787, -2437,  1210,  1587,   354,
   -2437,  1590,  1571,  -205,  -205, -2437, -2437, -2437,   787, -2437,
    1591,  -127, -2437,   -33, -2437, -2437,  1661, -2437,  1681, -2437,
     386,  1514, -2437, -2437, -2437, -2437, -2437, -2437, -2437,  1762,
    1815, -2437, -2437, -2437, -2437, -2437, -2437, -2437,    78, -2437,
   -2437,  2912, -2437, -2437,  1696, -2437, -2437, -2437, -2437,  1845,
     573,  1851,    17, -2437, -2437, -2437, -2437,  2040, -2437,  1606,
      66, -2437, -2437,   142, -2437, -2437, -2437, -2437,  1759, -2437,
   -2437, -2437,  1932,  1920,  1340, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437,  1690,  1340, -2437,  1612, -2437,  2020, -2437, -2437,
   -2437,  1350, -2437,  1201,   687, -2437, -2437, -2437,  1945,    39,
     739,    15,   787,   787,   573,  1867,  1260,   105,   680, -2437,
    1929, -2437, -2437, -2437,  2066, -2437,  1877, -2437, -2437, -2437,
   -2437,  1751, -2437, -2437, -2437, -2437,  1273,  1947,   848,   996,
   -2437,  1565, -2437,  1567,  1201,  1770,   979, -2437,    26, -2437,
   -2437, -2437,  6207,  1250,  1250,  1250,  1250,  1250,  1250,  1250,
    1250,   395, -2437,   -22,   848,   486, -2437,  1653,  1653, -2437,
   -2437,   521,  1273,   573,  1880,  1625, -2437,  1631,  2081,  1273,
     459,   449,  2084,  1228, -2437,  1635,  1697,  1700, -2437, -2437,
   -2437,    51,  2005,  1514,  1253,  1253,  1514,    -3,  1823,  1514,
    2078, -2437,  1790, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437,    69,   109, -2437, -2437,  1655, -2437,  1912,
   -2437,    16, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
    1244, -2437,    41, -2437,  1233, -2437,  1771, -2437, -2437,  1758,
   -2437,    69, -2437, -2437, -2437, -2437, -2437,    76, -2437,    62,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,   110, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437,  2058, -2437, -2437, -2437,
   -2437, -2437,  1373, -2437,  1362, -2437, -2437, -2437, -2437,  1804,
    1804, -2437, -2437,  1804, -2437,  1514, -2437, -2437, -2437, -2437,
    1514, -2437, -2437, -2437, -2437, -2437,   -14, -2437, -2437,  2052,
    1692, -2437, -2437,     9, -2437,  1514, -2437,  2103, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437,  1147, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437,  8152,  7623,  1142, -2437, -2437,
   -2437,  1467,  7758,  1380,  7859,  1380, -2437,  1273,  1380,  1380,
    1380,  3437, -2437,   392,  1380,   -45, -2437, -2437, -2437,  1810,
    1694,   154,  1911,   573,  7958,  1380,  1380,   696, -2437, -2437,
   -2437, -2437, -2437,   -39,   140, -2437, -2437, -2437,   729, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437,  1514, -2437,   590, -2437, -2437,  1070,  1514,
   -2437, -2437, -2437, -2437, -2437,    27,  1514, -2437, -2437,   787,
   -2437,   787,  4498, -2437,   669,    13,   142, -2437, -2437, -2437,
    2040,  1273, -2437, -2437, -2437, -2437,  1609,   795,   214,  1610,
     696,  1201, -2437, -2437,  2074, -2437,  1041, -2437, -2437,   687,
   -2437,   781, -2437,  1716, -2437, -2437,  1514, -2437, -2437,  1886,
    1809, -2437, -2437,   787, -2437,   787,   680,  1808,  1808,  1816,
   -2437, -2437, -2437, -2437,  1025, -2437, -2437,  1273,  6207,   880,
   -2437, -2437, -2437,  1840, -2437, -2437,  1865, -2437, -2437, -2437,
   -2437,  1567, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437,   -36, -2437,  1273, -2437, -2437,
   -2437,  1056, -2437, -2437, -2437,  8152, -2437,  6207,  6207,   536,
    1799,  1467, -2437,   787, -2437,   696, -2437,  1818, -2437,  1201,
   -2437,  2023,  1698, -2437,  1050, -2437,   575, -2437,  1228, -2437,
    1677,  1738, -2437,  7121,   162,  1933, -2437,  1669,  1629,  1514,
    2078,  1630,   -93,   102,  1669,  1632, -2437,  1514, -2437, -2437,
   -2437,   -37,  1248, -2437, -2437, -2437,  2209, -2437,  2005,  1260,
   -2437, -2437, -2437, -2437, -2437,  1244, -2437,  1882, -2437, -2437,
    1915, -2437,  2122,  1019,  1689, -2437, -2437, -2437, -2437, -2437,
     233, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,   384,
     384,   384,   384,   384, -2437,  1514,  1514,   107,   107,   384,
   -2437,   373, -2437,   982, -2437,  1131,   541, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,  1944,
   -2437, -2437, -2437, -2437, -2437, -2437,  1946, -2437, -2437,  1178,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,  1855,
      21,  1511, -2437, -2437, -2437, -2437, -2437,  1273, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437,  2673,   384, -2437,
   -2437,  1511, -2437, -2437, -2437, -2437,   635,   384,   107,   107,
     384,   573,  1786,   573,  1788, -2437, -2437,  6207, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437,   795, -2437,  2049,
   -2437,  1340, -2437,  1041,  1041,   696,  1701,  1701, -2437,  2151,
    2123, -2437, -2437, -2437, -2437,   -84,  1273, -2437, -2437, -2437,
     573, -2437, -2437, -2437, -2437, -2437, -2437,  1774, -2437,  2120,
    1905,  1935,   963, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437,   982, -2437, -2437,
   -2437, -2437, -2437, -2437,  1870,  1711,  1514,   541,   573,  1670,
   -2437,  2081, -2437,  1951,  2083,  1951,   536, -2437, -2437, -2437,
   -2437,  1888,  2027, -2437, -2437, -2437,  1419, -2437,  1228, -2437,
    1725,   763, -2437, -2437,   643,   733,   954,   960,   976,  1674,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437,  1797, -2437,   759,
   -2437, -2437, -2437, -2437,  1273,  1273,  1954, -2437, -2437, -2437,
     841, -2437, -2437, -2437,  1514,   127, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437,   873,   499, -2437,  1675, -2437,  1321,
   -2437,  1736, -2437,  2002, -2437, -2437, -2437,  1630, -2437, -2437,
   -2437, -2437, -2437, -2437,  1937,    22,  1951,   850,  1514, -2437,
   -2437,  1514, -2437,  1823,  1505,   390, -2437,  1789,  1514,  2138,
      71,   -78,   -10,  1460, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437,  1765, -2437,  1936, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437,  2159,  1514,  1260,  1260,  1244, -2437,
   -2437, -2437,  1941, -2437, -2437, -2437, -2437,   -47, -2437, -2437,
   -2437, -2437, -2437,   -88,   384, -2437,  1427, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437,  1273, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437,   787, -2437,   787, -2437,
   -2437, -2437,  2153,  2092, -2437, -2437,  1041, -2437,  6207,  6207,
   -2437, -2437,  1860,  1260,   803, -2437,  1273, -2437, -2437,  6207,
   -2437,  1514,  1053,  1940,  1942, -2437,  1949, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437,  1273, -2437, -2437,
   -2437, -2437,  1764, -2437, -2437,  1273,  1951, -2437,  1273, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437,  1684, -2437, -2437,  2155,
    1753, -2437,  1768, -2437, -2437, -2437, -2437,  7621,   158,  2184,
   -2437,  1803,  1803, -2437,  1511,  1361,  1361, -2437, -2437,  1669,
     167,  1273, -2437, -2437, -2437, -2437,  1669, -2437,  1805, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437,   391,   391,  1514,
    1886, -2437, -2437,   121, -2437,   871,  1514,  1514,  1514,  1514,
   -2437,  1981, -2437,   105,  1514,  1823, -2437,  1811,  1629,  1260,
   -2437,  1881,  2202, -2437, -2437,  2112, -2437, -2437, -2437, -2437,
   -2437, -2437,   541,   541,  6207, -2437, -2437, -2437, -2437,  1514,
    1260,  1260,  1883, -2437, -2437,  1739,  1273, -2437, -2437,  1840,
    1947, -2437, -2437, -2437, -2437, -2437,   936, -2437, -2437,  1273,
   -2437,  1873,  1406, -2437,  1951,  2028,  1669,  1775,  1273, -2437,
     158, -2437,  1780,  1974, -2437,  2138, -2437, -2437,  1361,  1773,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437,  1273, -2437,    34,
    1695, -2437,    50, -2437, -2437, -2437, -2437,   574,  1514, -2437,
   -2437,  1457, -2437, -2437,   102,  1813,  1273,  1273, -2437, -2437,
    1273,  1514, -2437, -2437, -2437,  1669, -2437,  1244,  1778, -2437,
   -2437, -2437,  -127,  1260,  1514, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437,  1252, -2437, -2437, -2437,
   -2437, -2437,  1889,  2129, -2437,  1274, -2437,  6624, -2437, -2437,
    1406,  1781,  1741,  1669,  1753, -2437, -2437,  2126, -2437,   815,
   -2437,   158, -2437, -2437, -2437, -2437, -2437,   102,   102, -2437,
   -2437, -2437, -2437,  2053, -2437, -2437,  1736,  1669, -2437, -2437,
   -2437, -2437,  1273, -2437, -2437,   398,   398,  2237, -2437, -2437,
   -2437, -2437, -2437,   398,   398,   399, -2437, -2437, -2437,  -171,
   -2437, -2437,   668, -2437, -2437, -2437, -2437,  -127, -2437,  1871,
    1819,     1,  1759, -2437,  1787, -2437,  1792, -2437, -2437, -2437,
    2024,  1759, -2437,  1838, -2437,  1791, -2437, -2437, -2437,  2221,
    1695, -2437,   -31, -2437, -2437, -2437, -2437,  1537, -2437, -2437,
   -2437, -2437, -2437,  1514,  1273,  1740, -2437,  1740, -2437, -2437,
    1273, -2437,  1307, -2437, -2437, -2437,    47,  1135, -2437, -2437,
   -2437, -2437, -2437,  1273,  2036,   739,  1821,  1514,   102,  2145,
    1824, -2437, -2437,  1273,  1273,   555, -2437, -2437, -2437, -2437,
   -2437,  1917,  1067,    47, -2437, -2437,  1802,   914,  7437,  2036,
   -2437,  1853, -2437,  1886, -2437,   158, -2437,  1759, -2437,  1769,
   -2437,  1273,  1952, -2437, -2437,  1759, -2437, -2437,  1956,  1273,
   -2437, -2437,  1514,  1514,  2078,  1045, -2437, -2437, -2437, -2437,
    2059,  2090, -2437,  1514, -2437,   409, -2437,  1070,  1514,  1652,
   -2437, -2437, -2437, -2437,  1804, -2437,  1669, -2437,  2214, -2437,
   -2437, -2437,  1273, -2437, -2437,  1273, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437,  2068,  1804, -2437,  1772,  1514,
   -2437,  1273,    31,  1008,   508, -2437, -2437,   -88, -2437, -2437,
    1514,  2078,  2021,  1406, -2437, -2437, -2437,  1273,   384, -2437,
   -2437, -2437, -2437,   384, -2437,  1514,  1775,  1514, -2437, -2437,
   -2437,  1514, -2437,  1772, -2437,  1273, -2437,   902, -2437, -2437,
   -2437,  1336, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
    1260, -2437, -2437, -2437, -2437,  1450,   -59, -2437,  1273, -2437,
   -2437, -2437,   825, -2437,   -88,   825, -2437,  1273, -2437, -2437,
    1320, -2437, -2437,  2021, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437,   384, -2437, -2437, -2437,   384,  1402,  1514,
    1514,  1410, -2437, -2437, -2437, -2437, -2437, -2437,  1656, -2437,
   -2437, -2437, -2437, -2437,  1514,  2021,  2021, -2437,  2070,  1514,
    1514, -2437,  2097,  2021, -2437, -2437, -2437,  2021,  2021,  2061,
     -46,  2078,  2077,  1669,  1777,  1514,  1511, -2437,  1514,  1514,
    1273, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437,   958, -2437,   488, -2437, -2437, -2437,
     -46,  2078, -2437, -2437, -2437, -2437, -2437, -2437, -2437,   127,
   -2437,  1514,  1753, -2437,  8388,  8388,  1290,  2166,  2093, -2437,
    1669,   958, -2437, -2437,  1669,   488, -2437, -2437,   127, -2437,
   -2437,   958,  1775, -2437,  1467,  8289, -2437, -2437,    82,   100,
   -2437, -2437,  1153, -2437, -2437, -2437, -2437,   -65,   -65, -2437,
   -2437, -2437, -2437, -2437,  8388, -2437, -2437, -2437, -2437, -2437,
   -2437,  2126, -2437,  1759, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437,  1975, -2437,  1975, -2437,  2243,  1868,     0,  1972, -2437,
   -2437,  8388,  1669, -2437, -2437, -2437, -2437, -2437, -2437, -2437
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,    21,     6,     4,
      46,     8,     9,     0,     0,     0,     7,     0,    11,   292,
      49,    27,    24,    46,    46,    23,    22,     0,     0,   687,
     294,     0,   181,    51,     0,     0,    14,     0,    47,     0,
       0,    20,   732,     0,   296,     0,     0,    45,   183,     0,
       0,    99,    52,    53,     0,     0,     0,    12,    15,    16,
       0,    13,   293,   689,     0,     0,     0,   290,    50,     0,
       0,   187,    62,    56,     0,   101,    54,    55,    30,    29,
      33,    33,    32,    31,     0,    17,     0,   692,   690,   708,
       0,   786,   859,   868,   874,   881,   920,   924,   938,   933,
     939,   940,   948,   995,  1004,  1007,  1033,  1044,  1047,  1050,
    1042,  1056,  1063,  1085,  1089,  1128,  1130,  1134,     0,  1140,
    1154,  1178,  1196,  1197,  1200,  1201,  1206,  1214,  1215,  1228,
    1264,  1282,     0,  1316,  1328,  1336,  1338,   714,  1342,  1345,
    1348,  1399,   734,   735,   736,   737,   738,   739,   740,   741,
     743,   742,   744,   745,   746,   747,   748,   749,   750,   751,
     752,   753,   754,   755,   756,   757,   758,   759,   760,   761,
     762,   763,   764,   765,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   781,
     782,   783,   733,   295,   302,   303,   363,   297,   366,     0,
     182,   184,   185,    64,    58,   100,     0,     0,     0,  1904,
    1858,  1858,  1858,     0,     0,  1858,  1831,   119,    84,   102,
       0,   105,   107,   108,   109,   155,   111,   110,   112,   113,
     114,   115,   116,   117,   118,     0,     0,    25,    18,    19,
     697,   697,     0,     0,  1744,  1745,  1746,  1747,  1748,  1749,
    1750,  1751,  1752,  1753,  1754,  1755,  1756,  1757,  1793,  1794,
    1795,  1796,  1797,  1798,  1799,  1800,  1801,  1802,  1803,  1804,
    1805,  1806,  1807,  1808,  1809,  1810,  1811,  1812,  1758,  1759,
    1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,  1769,
    1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,  1779,
    1780,  1781,  1782,  1783,  1784,  1785,  1786,  1787,  1788,  1743,
    1789,  1790,  1791,  1792,   785,     0,     0,     0,     0,   884,
       0,     0,     0,     0,     0,     0,     0,  1486,  1035,     0,
       0,  1923,   905,   904,     0,  1055,  1486,     0,     0,     0,
       0,     0,     0,   784,     0,  1166,     0,     0,     0,     0,
       0,     0,     0,     0,  1312,  1315,  1302,  1313,  1314,  1304,
       0,     0,  1337,  1335,     0,   732,     0,     0,     0,     0,
       0,   518,   298,  1710,     0,  1554,   299,     0,  1726,   271,
     188,  1830,     0,     0,     0,  1858,  1966,    82,    63,  1829,
      68,    70,    71,    72,    73,  1829,     0,  1858,    57,    60,
    1576,  1575,   130,  1858,  1858,  1905,  1858,  1859,     0,     0,
       0,  1858,  1858,     0,  1832,     0,  1858,     0,    48,     0,
     103,   106,     0,   154,    34,    28,  1858,  1828,   697,   694,
     700,     0,   697,   709,   710,   684,   809,  1646,   857,   788,
     808,  1636,  1640,  1883,     0,  1689,     0,  1684,  1690,     0,
       0,  1696,  1669,     0,  1541,  1543,  1665,     0,     0,     0,
    1687,  1670,  1596,     0,  1545,  1668,  1688,  1666,  1691,  1692,
    1671,     0,  1686,  1696,  1685,  1667,   866,  1590,   864,  1585,
    1587,  1588,  1661,  1663,  1589,  1693,     0,     0,     0,     0,
       0,     0,   869,     0,  1530,  1533,  1535,  1538,  1605,  1540,
    1715,  1603,  1604,  1565,   875,   876,     0,  1561,  1563,  1562,
     887,   885,   886,   918,     0,  1618,   921,   922,  1617,   925,
     928,  1883,   936,     0,  1547,  1729,  1580,  1641,  1645,  1581,
       0,   946,  1897,  1665,   962,   993,  1428,  1583,   957,   959,
     956,     0,  1587,  1002,     0,   888,  1005,  1014,  1013,  1031,
       0,  1010,  1012,  1485,     0,  1037,  1041,  1039,  1042,  1040,
    1034,  1045,  1046,  1578,  1048,  1049,  1924,  1051,  1559,  1043,
    1919,  1484,  1064,  1066,  1555,  1086,  1087,  1090,     0,  1092,
    1093,  1094,  1129,  1268,  1633,  1634,     0,  1131,     0,  1138,
       0,  1147,  1144,  1146,  1145,  1141,  1148,  1168,  1565,  1933,
    1155,  1166,  1157,     0,  1164,     0,  1619,  1562,  1621,     0,
    1194,  1721,  1198,  1402,  1550,  1204,  1897,  1212,  1402,     0,
    1226,  1219,  1551,     0,     0,  1558,  1229,  1230,  1231,  1232,
    1233,  1234,  1256,  1235,  1259,  1236,     0,  1556,     0,     0,
    1632,  1645,  1265,  1300,  1287,  1305,  1827,  1326,     0,  1319,
    1321,     0,  1333,     0,  1339,  1340,   720,   726,   715,   716,
     717,   719,     0,  1343,     0,  1346,  1899,  1365,  1351,  1413,
    1402,     0,     0,   521,   368,     0,     0,   371,     0,   301,
     304,   186,     0,  1727,     0,   283,   279,   180,     0,   274,
     276,   277,  1965,  1858,     0,     0,    67,    69,    65,    83,
    1829,  1858,     0,     0,     0,  1858,     0,     0,     0,   176,
    1568,   174,   179,     0,     0,   178,  1577,   157,   158,  1860,
     161,  1651,  1238,  1237,   120,   124,   127,  1887,  1858,     0,
      85,   104,   156,     0,     0,   695,  1858,     0,   706,   698,
     699,   711,  1944,  1945,     0,   858,   787,   810,     0,     0,
    1638,  1639,  1884,     0,  1662,     0,     0,     0,     0,  1682,
    1591,  1592,  1593,     0,     0,     0,     0,     0,     0,     0,
       0,  1683,   867,   860,     0,     0,  1586,     0,     0,  1672,
       0,     0,  1606,  1607,  1608,  1537,  1602,     0,  1536,  1717,
       0,     0,     0,     0,     0,  1716,   872,   877,   879,     0,
     919,   882,  1620,   888,   923,   928,  1956,  1957,   926,     0,
     929,     0,   937,   934,  1941,  1940,  1548,     0,  1731,  1549,
    1643,  1644,   943,   944,   947,   941,  1898,  1472,   994,   949,
     729,   729,   954,  1434,  1431,   958,   955,  1584,  1932,  1428,
    1428,  1428,  1428,  1003,   996,     0,     0,   889,  1006,  1032,
    1008,  1486,  1486,  1009,  1016,  1017,   729,  1510,  1511,  1512,
    1506,  1923,  1498,  1518,  1521,  1520,  1522,  1514,  1505,  1504,
    1509,  1508,  1507,  1513,  1493,  1497,  1515,  1517,  1519,  1495,
    1496,  1492,  1494,  1487,  1488,  1499,  1500,  1501,  1502,  1503,
    1491,  1038,  1036,  1579,  1053,  1920,   729,  1068,     0,  1088,
       0,  1115,  1099,  1091,  1096,  1097,  1098,  1272,     0,  1635,
       0,     0,  1139,  1135,     0,  1148,  1932,     0,  1156,  1162,
    1163,   729,  1159,  1486,     0,     0,  1167,     0,  1195,  1179,
    1722,  1723,  1897,     0,  1199,  1205,  1202,  1181,  1213,  1207,
    1209,  1221,  1227,  1216,     0,  1221,     0,  1613,  1614,     0,
    1257,  1260,     0,     0,  1557,  1240,     0,  1239,     0,     0,
    1643,  1301,  1283,  1289,  1858,  1290,  1285,     0,  1303,  1307,
       0,     0,  1327,  1317,     0,  1320,     0,  1334,  1329,     0,
    1341,   727,   725,   718,     0,  1900,  1901,  1347,  1366,  1349,
    1827,     0,  1414,  1400,  1404,   364,     0,     0,   524,     0,
     369,     0,   377,   378,   372,     0,   375,  1858,  1728,   189,
    1839,   280,   281,   282,  1819,     0,   272,   275,     0,  1964,
      76,    66,     0,  1569,    75,    59,     0,     0,  1658,  1654,
    1659,  1657,  1655,  1660,  1656,   165,   166,   168,   177,   172,
     170,     0,   159,  1862,  1861,   162,     0,  1887,  1890,  1889,
       0,     0,   121,   125,    87,    26,    37,    40,    44,    43,
    1895,    38,    39,     0,  1858,   707,     0,     0,   685,  1647,
    1824,   815,  1858,  1415,   811,   812,   814,   816,     0,     0,
     804,  1415,  1939,  1938,   801,   793,   795,   796,     0,  1415,
       0,     0,     0,   818,   799,     0,   807,   790,   806,   791,
    1525,  1523,     0,  1637,  1610,  1609,     0,  1595,     0,  1525,
    1523,     0,  1525,     0,  1698,  1525,  1542,  1544,  1525,     0,
       0,     0,  1525,  1599,  1600,  1601,     0,  1546,  1525,     0,
    1883,  1437,   865,  1645,  1581,     0,  1664,     0,     0,  1525,
    1539,  1719,   872,  1529,  1528,  1532,  1531,  1534,     0,   870,
       0,     0,  1564,   899,   927,   932,     0,  1844,     0,  1582,
    1437,  1858,  1730,  1642,   945,   729,   729,   942,  1473,  1479,
    1476,  1433,   730,  1436,  1429,  1435,  1430,  1432,     0,   968,
     967,   960,   963,   965,     0,   952,   953,   950,   951,     0,
    1437,     0,   895,  1011,  1026,  1028,  1027,  1021,  1023,  1029,
    1486,  1018,  1015,  1486,  1019,  1516,  1489,  1490,  1885,  1052,
    1560,   729,  1060,  1061,  1923,  1076,  1077,  1079,  1081,  1082,
    1078,  1080,  1071,  1923,  1067,     0,  1116,     0,  1118,  1117,
    1119,  1101,  1111,     0,     0,  1095,  1963,  1886,     0,  1274,
       0,  1849,     0,  1132,  1437,     0,     0,     0,  1150,  1552,
    1160,  1173,  1169,  1174,  1170,  1175,     0,  1165,  1409,  1408,
    1172,  1181,  1403,  1629,  1630,  1631,     0,     0,  1472,     0,
     729,     0,  1220,     0,     0,     0,     0,  1258,     0,  1262,
    1261,  1254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1242,  1243,  1724,  1472,     0,  1306,  1915,  1915,  1322,
    1323,  1324,     0,  1437,     0,     0,   728,     0,  1711,     0,
    1324,  1209,  1813,   366,   519,     0,     0,   619,   370,   374,
     411,   380,  1833,  1858,     0,     0,  1858,  1833,  1876,  1858,
    1817,   300,     0,   305,   308,   309,   310,   311,   312,   313,
     314,   315,   316,     0,     0,   191,  1840,  1917,  1820,  1843,
     273,     0,    79,    81,    80,    77,    78,    61,   136,   135,
     150,   146,   151,   132,   149,   147,   133,   134,   148,   131,
     137,   138,   140,   167,     0,   171,     0,   175,  1652,   160,
     163,     0,  1888,   128,   122,   123,   126,     0,    86,     0,
      90,    42,  1896,    36,    41,   701,   702,   705,     0,   696,
     712,   714,  1624,   822,  1622,  1623,     0,  1421,  1422,  1426,
    1427,   789,  1423,   729,  1418,   729,   813,  1937,  1936,  1878,
    1878,   820,   821,  1878,   827,  1858,   829,   830,   831,   856,
    1858,   832,   833,   834,   835,   836,     0,   837,   838,   840,
       0,   841,   842,     0,   843,  1858,   828,  1815,   846,   855,
     849,   817,   848,   805,   792,   794,  1415,   802,   797,   798,
     819,   800,  1526,  1527,  1648,     0,     0,     0,  1612,  1594,
    1611,  1729,     0,  1693,     0,  1693,  1697,     0,  1693,  1693,
    1693,     0,  1676,     0,  1693,     0,   729,   729,   861,  1443,
    1440,  1643,  1644,  1437,     0,  1693,  1693,     0,  1718,   871,
     873,   880,   878,   908,  1856,   931,   930,   935,     0,  1478,
    1481,  1474,  1480,  1475,  1477,   732,   974,   975,   972,   971,
     973,   970,   964,  1858,   976,     0,   979,   980,  1837,  1858,
     983,   984,   966,   985,   986,     0,  1858,   988,   969,     0,
     997,     0,   890,   891,   700,     0,  1486,  1486,  1025,   729,
    1022,     0,  1059,   729,  1062,  1057,     0,     0,  1083,     0,
       0,     0,  1112,  1114,     0,  1107,  1121,  1108,  1109,  1100,
    1103,  1121,  1962,     0,  1935,  1266,  1858,   495,   496,  1863,
       0,  1850,  1273,  1133,  1136,     0,  1150,  1891,  1891,     0,
    1149,  1153,  1142,  1553,     0,  1161,  1158,     0,     0,  1183,
    1182,   729,  1203,  1461,  1208,  1210,     0,  1222,  1486,  1486,
    1217,  1223,  1241,  1263,  1253,  1255,  1245,  1246,  1247,  1251,
    1248,  1252,  1249,  1250,  1244,  1725,  1299,     0,  1296,  1297,
    1291,     0,  1284,  1961,  1960,     0,  1916,  1310,  1310,  1446,
       0,  1729,  1330,     0,   721,     0,  1712,  1352,  1353,     0,
    1356,  1359,  1363,  1357,  1410,  1814,     0,   365,   366,   522,
       0,     0,   291,  1858,  1821,     0,  1834,     0,     0,  1858,
    1817,     0,     0,     0,     0,     0,  1877,  1858,   359,  1818,
     360,     0,     0,   361,   306,   307,  1897,  1918,  1833,     0,
    1952,  1953,    74,   139,   142,     0,   169,     0,   164,   129,
       0,    97,    95,     0,     0,    88,    91,   703,   704,   714,
     732,   826,  1416,  1424,  1420,  1417,  1419,  1425,  1879,     0,
       0,     0,     0,     0,   847,  1858,  1858,  1482,  1482,     0,
    1816,     0,   803,  1524,  1649,     0,  1437,  1707,  1680,  1709,
    1681,  1705,  1677,  1678,  1679,  1703,  1700,  1701,  1675,  1582,
    1445,  1442,  1438,  1444,  1439,  1441,  1642,   862,  1694,     0,
    1673,  1674,  1720,  1615,  1616,   729,   729,   729,   883,   915,
     911,  1883,  1857,   902,   907,   906,   901,     0,  1733,  1734,
    1735,  1736,  1737,  1738,  1739,  1740,  1732,     0,     0,   977,
     978,  1883,   667,   669,   981,   982,     0,     0,  1482,  1482,
       0,  1437,  1547,  1437,  1547,   892,   893,     0,   897,   896,
     898,  1024,  1030,  1020,  1054,  1058,  1069,  1072,  1073,  1835,
    1065,  1923,  1070,  1121,  1121,     0,  1854,  1854,  1106,  1122,
    1123,  1104,  1105,  1110,  1934,  1276,     0,  1864,  1270,  1851,
    1437,  1143,  1892,   268,   269,   270,  1152,     0,  1176,     0,
       0,  1190,     0,  1460,   729,  1455,  1462,  1211,   729,   729,
    1224,  1298,  1288,  1292,  1293,  1294,  1295,  1286,  1308,  1311,
    1309,   729,   729,  1318,  1452,  1449,  1858,  1437,  1437,   723,
    1344,  1711,  1355,  1847,  1361,  1847,  1446,   729,   729,  1401,
    1412,  1469,  1466,  1411,  1407,  1406,  1868,   520,   366,   525,
       0,     0,   505,   435,  1906,  1906,  1906,  1906,  1906,  1928,
     436,   471,   473,   439,   440,   441,   442,   443,   444,   467,
     465,   466,   468,   469,   474,   472,   445,  1902,   470,     0,
     446,   432,   447,   448,     0,     0,  1909,   450,   451,   449,
    1865,   453,   454,   452,  1858,  1860,   412,   413,   414,   415,
     416,   417,   433,   437,   438,   418,   419,   420,   421,   422,
     423,   424,   425,   426,     0,     0,  1822,     0,   408,     0,
     381,   328,   237,   356,  1954,  1955,  1572,   337,  1570,  1947,
    1946,   330,  1574,  1573,  1874,  1831,  1847,     0,  1858,   334,
     333,  1858,   362,  1876,  1897,  1925,   253,     0,  1858,  1829,
    1863,   255,     0,  1932,   241,   190,   240,   192,   193,   194,
     195,   196,   197,     0,   198,     0,   199,   252,   200,   201,
     202,   203,   204,   205,  1825,  1858,     0,   278,     0,   141,
     173,    92,     0,    93,    98,    94,    89,   732,   823,   825,
     824,   851,   850,     0,     0,   853,     0,  1627,  1628,   852,
     845,  1653,   854,  1625,  1626,  1650,   863,  1695,   913,   917,
     914,   909,   916,   910,   912,     0,   900,   990,  1838,   668,
     670,   989,   992,   991,   987,   999,     0,   998,     0,   894,
    1074,  1836,     0,     0,  1102,  1113,  1121,  1855,     0,     0,
    1124,  1125,     0,     0,  1279,  1275,  1269,  1137,  1151,     0,
    1184,  1858,  1472,     0,     0,  1185,     0,  1189,  1463,  1218,
    1225,  1454,  1451,  1447,  1453,  1448,  1450,     0,  1332,  1331,
    1367,   722,     0,  1354,  1848,     0,  1847,  1358,     0,  1350,
    1468,  1471,  1464,  1470,  1465,  1467,  1869,  1870,  1405,   523,
     527,   620,   516,   517,  1907,   464,   463,   456,   455,   462,
     461,   460,   459,   458,   457,  1929,     0,  1903,   502,   488,
     482,   427,   514,  1910,  1866,  1867,   503,     0,     0,   429,
     431,  1741,  1741,   410,  1883,     0,     0,   409,   382,     0,
     318,     0,   355,  1571,  1875,   339,     0,   321,  1911,   348,
     350,   354,   353,   349,   351,   347,   352,     0,     0,  1858,
    1863,  1926,  1927,   220,   256,  1897,  1858,  1858,  1858,  1858,
     265,  1819,   266,     0,  1858,  1876,  1826,     0,     0,   284,
     285,   288,   143,   144,    96,     0,   839,   844,  1958,  1959,
    1483,   903,  1437,  1437,     0,  1084,  1120,  1127,  1126,  1858,
    1277,     0,     0,  1267,  1271,     0,     0,  1180,  1193,  1461,
    1458,  1192,  1188,  1186,  1187,  1325,  1375,   724,  1360,     0,
    1364,   526,   622,   504,  1847,   484,     0,  1921,     0,   434,
     506,   508,   510,     0,   428,  1829,   475,   476,     0,     0,
     391,   387,   390,   389,   388,   403,   399,   401,   402,   404,
     400,   405,   406,   407,   384,   395,   396,   397,   392,   393,
     394,   386,   383,   329,   320,   319,   317,   357,  1566,   338,
    1831,  1912,   326,   335,   332,   336,   331,     0,  1858,   222,
     221,   218,   255,   251,     0,     0,     0,     0,   264,   267,
       0,  1858,   254,   236,   286,     0,   287,     0,     0,  1001,
    1000,  1075,     0,  1280,  1858,  1486,  1191,  1456,  1457,  1459,
    1824,  1398,  1397,  1376,  1368,  1369,  1815,  1370,  1371,  1372,
    1373,  1396,     0,     0,  1362,     0,   528,     0,   626,   621,
     623,     0,     0,     0,   482,   483,  1922,   486,   515,   512,
     509,     0,   430,  1742,   385,   398,  1567,     0,     0,   340,
     341,   342,   343,     0,   322,  1846,   328,     0,   230,   231,
     229,   228,     0,   214,   215,   225,   225,     0,   213,   211,
     212,   217,   216,   225,   225,     0,   257,   258,   259,   260,
     263,   238,     0,   289,   145,   713,  1278,     0,  1177,     0,
    1913,     0,  1885,   529,     0,   627,     0,   624,   489,   485,
     490,  1885,   493,     0,   507,     0,   511,   346,   345,  1823,
    1831,   327,  1713,   226,   208,   227,   209,  1839,   210,   207,
     223,   206,   224,  1858,     0,   247,   246,   247,   243,  1281,
       0,  1914,     0,  1394,  1393,  1392,     0,     0,   629,   630,
     625,   491,   493,     0,   497,   492,     0,  1858,     0,   324,
     233,  1714,   219,     0,   261,     0,   245,   244,  1395,  1943,
    1942,  1893,  1388,  1382,  1383,  1385,     0,  1858,  1908,   497,
     487,  1827,   480,  1863,  1931,     0,   344,  1885,   323,     0,
     232,   262,     0,   250,  1894,  1885,  1391,  1386,  1389,     0,
    1384,   533,  1858,  1858,  1817,  1871,   558,   532,   536,   537,
       0,  1841,   645,  1858,   634,  1928,   635,  1837,  1858,     0,
     648,   643,   638,   644,  1878,   639,     0,   642,   650,   647,
     640,   646,     0,   651,   641,     0,   662,   656,   660,   659,
     657,   661,   631,   663,   658,     0,  1878,   481,     0,  1858,
     513,     0,     0,     0,     0,  1390,  1387,     0,  1981,  1982,
    1858,  1817,     0,   530,   534,  1842,   538,     0,     0,   632,
     633,   636,   637,     0,   665,  1858,  1921,  1858,   666,   664,
     682,  1858,   501,   498,   499,     0,   325,     0,   152,   153,
     235,     0,  1950,  1951,   248,  1381,  1378,  1380,  1379,  1374,
    1377,   535,  1872,  1873,   546,   543,   376,   559,   539,   540,
     655,   654,   675,   681,     0,   678,   500,   494,   234,   249,
     542,  1948,  1949,   545,   378,   560,   541,   673,   671,   674,
     672,   676,   677,     0,   649,   679,   680,     0,     0,  1858,
    1858,     0,   547,   548,   549,   550,   551,   552,     0,   562,
     652,   653,  1968,  1967,  1858,     0,     0,  1970,     0,  1858,
    1858,   544,  1908,     0,   557,   553,  1969,     0,     0,  1852,
    1880,  1817,     0,     0,     0,  1858,  1883,   561,  1858,  1858,
       0,   567,   569,   578,   570,   572,   575,   563,   564,   565,
     574,   576,   579,   566,     0,   571,     0,   573,   577,   568,
    1880,  1817,   554,   556,   555,  1853,   617,  1881,  1882,  1860,
     603,  1858,   482,  1486,     0,     0,     0,     0,     0,   611,
       0,   601,   607,   610,     0,   604,   612,   615,  1860,   606,
     602,     0,  1921,   599,  1729,   595,  1597,  1972,     0,     0,
    1974,  1976,     0,  1980,  1978,   580,   584,   588,   588,   582,
     586,   581,   587,   618,     0,   609,   608,   614,   613,   605,
     593,   486,   616,  1885,   594,  1598,  1971,  1975,  1973,  1979,
    1977,   591,   583,   591,   585,     0,   478,     0,     0,   590,
     589,     0,     0,   477,   598,   596,   597,   592,   600,   479
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2437, -2437, -2437, -2437, -2437,  2292, -2437, -2437, -2437, -2437,
   -2437, -2437,  2242, -2437,  1363, -2437, -2437, -2437, -2437, -2437,
   -2437,  2247,  2245,  2222, -2437, -2437, -2437,  1251, -2437, -2437,
   -2437, -2437, -2437,  2253, -2437, -2437, -2437,  2256, -2437, -2437,
    1916,  -263, -2437, -2437, -2437, -2437, -2437,  2106, -2437, -2437,
   -2437, -2437,   923, -2437, -2437, -2437, -2437, -2437,  2094,   -64,
   -2437, -2437, -2437, -2437,  1262, -2437, -2437, -2437, -2437, -2437,
     948, -2437, -2437, -1638, -2437, -2437, -2437, -2437, -2437,  1602,
   -2437, -2437, -2437, -2437,  1285, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,  -902,
   -2437, -2437, -2437, -2437, -2437,   106, -2437, -2437, -2437, -2437,
   -2437,  -144, -2437,   120, -2437, -2437, -2437,   -76, -2437, -2437,
   -2437, -2437,   115, -2437, -2437,  1641, -2437, -2437, -2437, -2437,
   -2437,   112, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,   -63,
   -2437, -2437, -2437,   138, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -1254, -2437, -2437,  1664, -2437, -2033, -2227, -2437, -2437,
   -2437, -1407, -2437, -2437, -2437, -2437, -2023, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2335,  -174,   172, -1336,  -838, -2324,
   -2437, -2437, -2437, -2281, -2437,  -451, -2437, -2437,  -140, -2437,
    -142,  -165, -2437,  -267, -1841, -2437, -1789, -2437, -1762, -2437,
   -2437,    79, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437,  -431,  -455, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -1220, -2437,
    -402, -2437, -2437, -2437, -2437, -2437, -2437, -2437,   -15, -2437,
   -2437, -2437,  -197,  -191,  -288,  -287, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437,  2118,  1185, -2437,
     817, -2437, -2437, -2437, -2437, -1285, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437,  -766, -2437, -2437,   -24, -2437,  2297, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437,  1289, -2437,  -752, -2437,
   -2437,  -729, -2437,   928, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437,  1223, -2437, -2437, -2437,  1862, -2437, -2437,
   -2437, -2437, -2437,  1564, -2437, -2437,   830, -2437, -2437,  -566,
   -2437, -2437, -2437,   603, -2437,   605, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437,  1570, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
    1841, -2437, -2437, -2437,  1195, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
    1529, -2437, -2437,  1532, -2437, -2437,  1179,   837, -2437, -2437,
   -2437, -2437, -2437,  1826, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437,   571,  1490, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,  1485,
   -2437, -2437,   821, -2437,  1160, -2437, -2437, -1495,   562,   564,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437,  1800,  1482,   812, -2437, -2437, -2437, -2437, -2437,
   -2437, -2100,  1798, -2437, -2437, -2437,   804, -2437, -2437, -2437,
    1141, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437,  1092, -2437, -2437,
   -2437, -2437, -2437, -2437,  1461,   793, -2437, -2437, -2437, -2437,
   -2437,  -486, -2437, -2437, -2437, -2437,  1114, -2437, -2437, -2437,
    1779, -2437,  1782, -2437, -2437, -2437,  2056, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437,   771, -2437, -2437, -2437,
   -2437, -2437,  1763,  1102, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437,   532, -2437,  1106, -2437, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
     -85, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
     505, -2437,  1425, -2437, -2437,  -970, -2437,  1006, -2437, -2437,
    1009, -2437,   943, -2437,  1588, -2437,  1592, -1099, -2437,   933,
   -2437,   937,   538, -2437,   552, -2437,   554, -2437, -2437, -2437,
   -1908,   182,   331, -2437, -2437,   542, -2437,   545, -1234,   783,
   -2437,  1268, -2437,  1271,  -405,  -906,  -301,  -819, -2437, -2437,
    1561, -1074,   811,   814,   819,   822,   816,   525,   -43,   619,
     894, -2437,  1241,  -192,  -725,  -308,   412,  1827, -1235,  -187,
    -358, -2437,  -601, -2437,  -277, -1097,  1648, -1617,  -400,  1438,
   -2437,   477, -1172,  -188,  1784,  -289,  -284, -2437,   567,   417,
   -2437,  -726, -1206, -2437,  1177,  -581, -1432,  -317,  1948, -1513,
   -2437, -2437,   -92,  -313, -2437,   806,  -293,  -437, -2437, -2437,
    1127,  -473,  -500,  -373,  1077, -1659,  1087,  -337,  -222,  -441,
     -83, -2437, -2437, -2437,   283,  1994, -2437, -2437,   882, -2437,
   -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437, -2437,
   -1450, -2437, -2437,   296, -2437, -2437,   113, -1647,   259, -2437,
   -2086, -2437,  -637, -1879, -1935, -1229, -2437, -2437,    14, -2437,
   -1313, -2437, -1497, -2437, -2437,   648, -2437,  -211, -1906, -1923,
   -2437, -2437, -2437, -2437, -1321, -1391,  -254,  -516, -1193,  1436,
     893, -2437, -2437,  -512, -2437, -2437, -2437,  -113, -2437, -2437,
   -2437,  1182, -2437,   924, -1842,  -831, -2437, -2437, -2437,  -362,
     800, -1740, -1356, -2437, -2437,  1103, -2437, -2437,  -134, -2437,
    1163, -2437, -2437, -2437,    37, -2437, -2436,  -256, -2437, -2437,
   -2437, -2437, -2437, -2437
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    12,
      57,    58,    59,    61,    18,    13,    23,    35,   426,    24,
      34,    80,    84,   236,   733,  1060,  1061,  1062,    19,    20,
      32,    33,    51,    52,   204,   398,   703,    53,   203,   388,
     389,   390,   391,   392,   393,   394,  1355,   395,   418,  1054,
    1388,  1389,  1390,  2033,  1703,    75,   218,   219,   220,   221,
     222,   416,   724,  1385,   725,   726,   223,   705,  1369,  1370,
    1371,  2028,  2222,  1372,  2620,   224,   423,   225,   717,   718,
     719,  1379,   226,  1035,  1036,   227,   228,  1375,   229,   230,
     231,   232,   233,   234,    47,    48,    71,   379,   202,   380,
    1345,  1686,  2007,  2008,  2413,  2414,  2415,  2321,  2461,  2454,
    2009,  2401,  2010,  2520,  2011,  1973,  2012,  2013,  2014,  2015,
    2468,  2496,  2016,  2017,  2018,  2019,  2020,  2418,  2021,  2022,
    2211,  2023,  1590,   687,   688,   689,   690,  1014,   691,  1010,
    2219,  2220,  2336,    29,   196,    30,    44,    67,   197,   198,
     680,   199,  1007,  1333,  1334,  2306,  1335,  2518,  2396,  2180,
    1336,  1337,  1991,  2314,  1338,  1339,  2309,  2389,  2390,  2391,
    2392,  1340,  2195,  2196,  1341,  2182,  1342,  1343,  1682,   371,
    1313,   372,   373,   674,   675,  1320,   676,  1004,  1005,  1664,
    2177,  2294,  2295,  2296,  2297,  2298,   677,  1968,  1663,  1946,
    1947,  1948,  2274,  1949,  1950,  1951,  1952,  1953,  1954,  1955,
    2713,  2813,  1956,  2267,  2374,  2442,  2265,  2482,  2484,  2485,
    1579,  2512,  2613,  2614,  1957,  1958,  1959,  1960,  1961,  2379,
    2270,  2271,  2444,  1962,  1963,   673,  1658,   998,  1898,  1317,
    2140,  2261,  2366,  2477,  2507,  2537,  2538,  2596,  2638,  2539,
    2634,  2650,  2672,  2673,  2674,  2675,  2676,  2677,  2593,  2637,
    2679,  2692,  2717,  2718,  2775,  2802,  2809,  2719,  2720,  2794,
    2815,  2721,  2722,  2723,  2724,  2725,  2726,  2751,  2752,  2755,
    2756,  2727,  2728,  2729,  1662,  2262,  2369,  2370,  2371,  2479,
    2508,  2572,  1794,  1795,  2661,  2662,  2663,  2667,  2573,  2574,
      41,   741,  1401,    42,    89,   241,   240,   428,   429,   430,
     738,  1066,   243,  1068,  1709,   365,   658,   659,  1879,  2121,
     660,   661,  1305,  1171,  1172,  1515,   662,    65,   142,   143,
     315,   438,   747,   439,  1073,  1074,  1075,  1097,  1076,  1421,
    1422,  1077,  1451,  1452,   746,   144,   316,   476,   775,   773,
     145,   317,   492,  1149,   146,   318,   504,   505,  1151,   147,
     319,   513,   514,   848,  1192,  1542,  1543,  1544,  1503,   334,
    1776,  1768,  2063,  1769,  2061,  1770,   801,   148,   320,   516,
     149,   321,   519,   808,   150,   322,   522,   813,   151,   152,
     153,   323,   531,   822,   825,   154,   324,   535,   536,   537,
     538,   838,   539,  1181,  1182,  1183,  1520,  1538,   829,   155,
     325,   543,   844,   156,   326,   546,   157,   327,   549,   550,
     551,   853,   854,   855,  1202,   856,  1197,  1198,  1548,   850,
     158,   328,   560,   335,   159,   329,   561,   160,   330,   564,
     161,   331,   567,  1209,   162,   163,   336,  1213,  1555,   164,
     337,   572,   897,  1222,  1558,  1817,  1818,  1819,  1820,   165,
     338,   575,   166,   339,   577,   578,   903,   904,  1234,   905,
     906,  1569,  1570,  1231,  1232,  1233,  1563,  1828,  1829,  1830,
     167,   340,   168,   341,   587,   169,   342,   589,   913,   170,
     344,   595,   596,   917,  1592,   171,   345,   600,   921,  1596,
     922,   601,   602,   603,  1252,  1254,  1255,   172,   346,   610,
    1267,  1851,  2102,  2247,   929,   173,   174,   347,   612,   175,
     176,   348,   615,   936,   177,   349,   617,  1268,   939,   178,
     179,   350,   620,   945,  1271,  1610,  1611,   943,   180,   351,
     626,   727,   958,   627,   628,  1291,  1292,   629,   630,   631,
     632,   633,   634,   635,   181,   352,   582,  1835,   907,  2096,
    1239,  1575,  2094,  2243,   182,   353,   643,  1294,   966,  1627,
    1628,  1629,   962,   183,   645,   968,  1868,   359,   184,   360,
     647,   648,   649,  1639,   973,   185,   361,   652,   978,   186,
     363,   187,   364,   654,   188,   366,   663,   189,   367,   665,
     190,   368,   667,   991,  1647,  1648,  1310,  1650,  1884,  2127,
    1886,   989,  2122,  2256,  2354,  2355,  2356,  2629,  2357,  2503,
    2504,  2529,  2358,  2475,  2359,  2360,  2361,   191,   369,   669,
     934,  1311,  1260,  1889,   993,  1411,  1715,  1412,  1413,  1712,
    1414,  1415,   832,  1176,   833,  1174,   834,  1488,  1754,  1489,
    1752,  1490,  1873,  2115,  1874,  2113,  1875,  1602,  2248,  2348,
    1603,  1855,  1856,  1890,  2134,  1891,  2132,  1892,  1167,  1168,
    1513,  1169,  1511,  1170,  2045,   570,   571,   553,   554,   883,
     884,   885,   886,   887,   888,   889,  1100,  1465,  1110,   494,
     495,   496,   497,   477,   523,   816,   613,   621,  1248,  1249,
     576,   636,   637,   894,   604,   507,   508,  2307,  1983,  1024,
    1977,  1978,  1984,   402,   720,   562,   525,   836,   478,   479,
    2765,  1122,   499,  1106,  1469,  1571,  1762,   517,   605,  1403,
    2052,  2046,  1262,  1404,   583,   640,   480,   441,   526,   527,
     442,   750,   751,  1405,  1380,  2753,  1037,   481,   482,   483,
     484,   485,   486,   487,   779,   759,  1129,  1126,  1119,  1111,
    1113,   678,  1649,  2490,   796,  1142,  1498,   932,  1631,   684,
     819,  1162,  1786,  2276,   314,  1656,  1731,  1680,  1349,  1969,
    1078,  2217,   431,   396,   415,  1667,  2082,  1796,  1347,  2597,
    1158,  2397,  2125,  1582,  2736,  2088,  1777,   408,  1046,  1838,
    2166,  2138,  2592,  2185,  1677,  1719,  2739,   753,  1240,  1050,
    1843,  2525,  1393,  2024,   987,  2158,   406,  2146,  1965,  2312,
    2472,  1637,  1688,   896,  2377,   568,  2203,  2156,  2445,   609,
    1576,  1423,  1099,   817,  2501,   744,  1981,  2653,  2624,  1692,
    1671,   810,  2230,  1635,  1241,   397,  2684,  2690,  2778,  2779,
    2780,  2781,  2782,  2541
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     409,   410,   580,   754,   413,   811,   655,   541,   709,   971,
     712,  1586,   376,   715,   524,  1551,   760,  1253,    64,   403,
     827,  1736,   440,  1975,   500,   411,   552,   518,   821,  1720,
    1205,   542,  1721,  1199,  1604,   954,  1689,   704,   639,  2168,
    2617,   506,   946,   728,  1128,   563,   579,   374,   573,  1131,
    2187,   782,   606,   563,  1138,   820,  2502,  2029,  1694,  1657,
    1632,  1507,   638,  1704, -1634,  1173,   427,   563,  1226,   400,
     400,   851,  2054,   664,  1690,   668,  1833,  2208,  2209,   967,
     414,   619,  2387,  2225,  1666,  1700,  1179,  1194,    87, -1635,
    1204,  1540, -1885,  2440,  1236,   501,   789,  1429,  1674,  1043,
     529,  1808,  1208,  1573,   937, -1827, -1932,   529,  1104,  1180,
   -1898,  1453,   909,  2801,  1587,   529,  1710,  1227,  1002,  1457,
    2206,  1190,  -688,  1462,   861,   498,   697,  1765,  1823,   529,
    1212,  2473,   503,  1727,   520,   354,   532,  1015,   861,  1988,
    2435,   821,  1707,  1896,  2092,  1584,  1771,  1098, -1640,  1043,
   -1932,  1798,   427,   755,   194,  1250,   421, -1863,   809,   611,
    1462,   616,  1837,  1194,  1395,  1052,   644,   444,   960,  1048,
    2362,   515,   332,  2566,   695,  1516,  1517,  1070,  2814,  1989,
     666, -1885,   845,   433,  2568,  2207,   702,  1765,  1966,  1244,
    1236,  1877,   706,   707,  2249,   708,   786,   786,   786,   804,
     713,   714,   739,    49,  1642,   729,  2038,  2039,  2040,  2041,
    2042,   898, -1823,  1880, -1823,   734,  2050,   899,  1297,  1630,
    1979,   606,   685,   518, -1932,  2304,  1462,   506,   742,  2367,
     355,   761,   407,  -686,   502,  2689,  1580,   930,  1228,  2368,
    1047,    78,  2426,  1396, -1602,   736,   503,  2319,  2395,   721,
    1103,  2463,   530,  1258,  1303,   792,   581, -1858,  2737,  2738,
    1766,  -688,   608,  1387,   793,  -688,   783,   501,   501,   501,
     356,  1625,  2796,  1058,   493,  2067,  1626,  2318,   893,  1701,
    2210,  1684,  1259,   970,  2071,  1468,   407,  2074,   931,   893,
    2797,  2464,   919,  2320,     3,  2696,   980,   498,   498,   498,
     357,   529,  1105,  1229,   375,   427,   503,  1038,   606, -1845,
    2776,  1837,  1044,  2798,   737,  1685,  1107,    50,   743,  1225,
    1163, -1932,  1020,   900,  -688, -1919,  1462,  2469,  2084,  2085,
     947,    79,   805,  1980,  1581,    14,  1136,  2367,  -688,  -688,
     529,   686,  2349,   823,   952,  1056,   740,  2368,  1298,   563,
     333,   529,   625,  1308,   893,   421, -1602,  2711,   976, -1638,
    1967,  1982,  1044,  2488,   846,  1049,   721,   521,  2712,   721,
     762,  1772,  -686,   452,  1159,  2394,  -686,  1059,  1809,  1237,
     195,  1199, -1827,  1556,  1199,  1079,   434,  1549,  2128,   437,
    2223,   721,  1559,  2086,  1757,  1588,  2383,  1462,   358,  1509,
    1510,   948, -1823,  1307,  1897,   784,   502,   502,   502,  2655,
    1493,   529,   795,   685,   656,   749,   529,   456,   599,  1518,
    1261,  1462,  1072,  2093,  2037,  1462,   876,   461,   437,  1179,
    2474,   608,  1767,  1283,  1773,  -686,   427,   697, -1863,   381,
     876,  1284, -1829,   809,  1057,  1552,   382,   787,  1574,  -686,
    -686,   437,  1180,  1774,  2027,  2618,   786,  2654,  1463,  2026,
    1163,  2762,  1589,   786,   786,   786,   524,  1277, -1827,   657,
    -688,   437,   786,   786,   786,  1123,  1184,  1123,  2186,  1990,
    1449, -1898,  1018, -1823,  1238,   786,  1732,  1123,   786,  2188,
    1022,  1462,  1767,  1695,  1027,  1463,  1009,   786,   786,   786,
     786,   786,  1728,   437,  1607,   749,   790,  1456, -1858,  2388,
    1464,   791,   465,   599,   699,  2489,   437,  1051,   608,   521,
    1799,   814,  1810,  1705,   786,  1063, -1827,   501,  2305,  1195,
    1102,  2227,   686,  1691,   501,   501,   501,  1230,   524,    88,
    1196,  1053,   437,   501,   501,   501,  1124, -1706,  1124,   599,
     552,  1861,  1134,  2619,  1247,  1545,   501,   498,  1124,   501,
    2636,  1463,   375,   437,   498,   498,   498,   852,   501,   501,
     501,   501,   501,   498,   498,   498,   452,  1521,  1269,   521,
    1238,  -686,   467,   656,   401,   401,   498,  1504,   437,   498,
    2579,  2236,  1702,   716,  1519,   501,  1264,  1016,   498,   498,
     498,   498,   498,   901,  1295,  1195,   524,   947,  1306,  1285,
    1775,   920, -1827, -1708,  1485,   786,  1196,  1210,   437,   521,
     456, -1827,  1243,   437,  1134,   498,  1102,   563,   470,  2259,
     461,  1256,  2051,  1492,  1058,  1164,  1746,  2056,   657,  -693,
    1263,  1286,  1178,   721,  2139,  1351, -1602,  1714,  1257,  1717,
    2313,  1272,  1564,   383, -1602, -1602, -1661,  2453,  2460, -1602,
    1491,  1463,   599,  1287,  2599,   895,   502,  2569,   893,  1470,
   -1919,   524,  2199,   502,   502,   502,   902,  1376,   948,  2625,
     475,  1301,   502,   502,   502,  1125,   501,  1125,  1486,   529,
    1397,   947,  1134,  1612,   656,   502,  1565,  1125,   502,  2424,
    2398,  2465,  2075,  1859,  2077,   444,  1101,   502,   502,   502,
     502,   502,  1079,  1476, -1932,   465,   498,  -693,  1288,  2570,
    1750,  1751,  1118,  1118,  1118,   521,   521,  1199,   452,   384,
     529,   377,  1463,  1633,   502,  1137,  2626,   407,  1059, -1932,
    1352,  2097,   544,  2171,  2627,  1566,  2571,  2051,   436,   657,
     625,   569, -1827,  1293, -1932,  1745,  1463,  1134,   588,   590,
    1463,   618,   948,  1778,  2643, -1827,  1577,  2372,  2576,  2302,
    -691,  1417,   456,  1418,  1160,  1157,    15,   650,  2118,  2119,
    1289,   670,   461,  1813, -1702,   467,   385,  1815,   452,  1826,
   -1932,   386,   830,   521, -1932,   947,  1344,  1616,  1617,  1618,
    1619,  1620,  1621,  1622,  1623,  1487,  2600,  1215, -1699,   786,
    1216,  1217,  1496, -1932,  1801,  1471,  1803,   381,  1827,  1184,
    2522,    17,  2754,   815,   382,   502,  1463,   524,   452,    82,
    2628,   470,   456,  2760,   721,  1853,  2466,  1871, -1932,  2299,
    2299,  1470,   461,  1486,   955,  1789,  2201,  2494,  -691,   625,
    1265,  2714,  2789,  1398,   790,  1578, -1932,   981,  2240,   791,
    1840,  1406,  1383,  1384,  1500,  1322,   948,   465,  2251,    25,
    1747,  2384,   456,   623,  1502,  1486,  2521,   437, -1704,  1290,
     501,  1323,   461,   475,    26,  2159,  1594,  2589,   790,   437,
    2069,   540,    -5,   791,  2331,   776, -1827,  2202,   387,   378,
     437,  1894,   452,  2715,  1634,  1545,  1402,   437,   777,   529,
     498,   452,   806,   529,   437,   437,   982,   381,  1878,    83,
    2791,  1324,  2155,  1353,   382,   831,   529,   465,   653,  2399,
    2716,  1567,   953,  2635,   452,   452,   599,   467,  2467,  1640,
     947,   947,  2299,  2363,  2633, -1932,   456,  2523,  1640,  1269,
    1508,   437,  2730,  1583, -1843,   456,   461,   776,   563,   893,
    1487,  1419,   624,   -35,   599,   461,  2350,   465,   529,  1276,
   -1932,   890,  1832,  1600,   599,   437,  2532,  2172,   456,   456,
    1824,   947,  1806,   470,  2400,  1354,   555,  1790,   461,   461,
    2083,  1756,  1487,   625,  2678,   510,  1023,   467,  2647,  2058,
    2059,  2060,   452,   910,  2533,  2534,  2343,  1872,  2241,  1641,
    2142,   948,   948,  1779,  1780,  1781,  1651,  1651,   721,   502,
     529,   529,   529,  2189,   375,  1708,  2694,  2695,    21,   437,
    2190,   383,  2070,   807,  2732,   475,   599,   467,  2733,  2734,
     547,   465,  1420,   470, -1843,  2169,   456,  1155,  1749,  1826,
     465,   548,   948,   407,  2740,  1895,   461,  2144,    27,  1467,
    1325,  1593,   969,   599,  2351,   650,  1591,  2757,  1882,  2143,
     776,  1326,  1156,   465,   465,  1218,  1219,  1741,  1827,  2170,
    1782,   529,  1165,   470,  2759,  2640,  2164,   736,  2108,   437,
    2641,   437,  2109,  2110,  1996,   475,  2757,  1402,  2657, -1932,
    1850,  1220,  1221,  2352,   837,  2111,  2112,   384,     4,     5,
    1665,   467,  1668,   556,   557,  1673,  1675,   452,  1678, -1932,
     467,  2130,  2131,   940,   -21,  2242,  1997,  1157,   599,   437,
    2145,   383,   558,  2339,  2340,   475,  2506,  1011,     4,     5,
      28,   465,  2353,   467,   467, -1932,   584,  2144,  1166,   407,
    2680,   511,  2416,   512,  2681,  1683,   737,   470,   584,  2658,
    1764,   456,   682,  2605,   385,  1568,   470, -1640,    31,   386,
   -1932,   461,   786,   786,    22,   994,   956,  1327,  1328,   786,
      39,   786,  2103,  1601,   749,  2611,   683,   559,  1123,   470,
     470,  1132,  1329,  1699,  1330,   599,   375,  -531,  1012,  1013,
    1791,   786,  2104,   437,  1763,  1783,  1784,   384,  1887,   475,
    1785,   467,   437,   957,  1722,  2447,  2448,  2051,   475,  1723,
    2147,   696,  2034,  1764,  1594,  -531,  -531,  1792,  2105,  1793,
     826,  1802,  2165,  1804,  1729,   437,   437,  1852,  2322,  2476,
    2535,   475,   475,   501,   501,  2191,  1812,  2749,  2483,   400,
     501,  2035,   501,  2106,   776,  2065,   465,   470,  1814,  1124,
    1730,  1605,  1189,  1191,   385,   863,   864,  1763,   947,   386,
     -21,   529,   501,   498,   498,  2068,   947,   524, -1930,  1331,
     498,   381,   498, -1823,  1165,  2621,  1606,  1165,   382,  2429,
    1846,  -683,  2750,  2659,  1971,  -358,  2590,  2591,  2660,   893,
     890,  1985,   498,   437,  1256,   865,   866,  1858,  1764,   475,
    1407,  -358,  1788,  1408,  2792,  1847,  2516,   529,  1797,   529,
     591,   698,  2691,  2049,  2581,  1800,   467,  1332,  2443,  1358,
     444,  1245,  2584,  2192,  1862,   524,  2731,  2300,  2300,   948,
     407,  -531,   786,  2799,  2767,  2687,  1888,   948,  1854,  2630,
    1166,  -358,  1763,  1166,  2048,  2048,   947,    38,  2193,  1226,
    2194,   529,  2279,   529,   721,  1836,  2800,  2622,  2144,  2623,
    -531,  2174,   470,  1281,  2144,  2536,   699,   592,  2526,  2505,
    2768,   923,   502,   502,  1296,   593,    36,    37,  1300,   502,
    2144,   502, -1932,  2072,  2073,   599,  1304,  2682,  1125,  1593,
     924,  2280,  2281,  2282,  2283,  2284,  2505,  2683,  1227,  1143,
    1144,   502,  2527,   501,  2047,  2047,   452,   722,  2053,   723,
    -358,   529,  1733,  1735,   475,  2048,  2048,   948,  1359,  1733,
    -683,  1733,   206,  2528,  -683,    43,  2095,  1911,  1912,  2428,
    2300,  2149,  1279,   498,  1409,   509,  1410,  2151,  1028,   528,
     790,  1759,  1964,  1280,  -358,   791,   528,   565,  1974,  1360,
     456,  -531,    45,  2153,   528,  2687,  1987,   585,    46,  2499,
     461,   594,   607,  2500,   614,  2107,   614,   622,   641,   585,
     207,    54,  2200,  -358,  2066,  2047,  2047,   985,  1764,   986,
    -358,  1787,  1029,  -683,  1992,   383,   614,  2161,    56,  2668,
    2688,  -358,  1030,  1361,  2456,   206,    60,  -683,  -683,  2682,
    2669,  2458,  2459,  1362,  2043,  2044,  1360,  2682,   208,  2683,
     209,   877,   210,   878,   963,  1407,    55,  2683,  1408,  1228,
     211,  2786,  1763,  2670,    62,   710,   452,   710,  2764,  2766,
     710,  2790,  2285,  2286,  2287,  2288,  2289,  2290,  2291,  1924,
    1925,  1140,   502,   207,   206,   465,  2160,   763,   764,  2795,
    1361,   790,   722,  2671,   723, -1115,   791,   769,  2175,  2176,
    1362,   384,  1109,  1112,  1115,  2403,  2404,  2405,  2805,   529,
     456,   529,    63,    66,  1363,   964,   212,  1031,   965,  2055,
     461,   208,  1867,   209,  1229,   210,  -531,  1139,  1364,   790,
    2807,  1466,   207,   211,   791,  2818,    68,  -358,  -358, -1115,
     790,   799,  1669,   735,  1670,   791,  2769,   735,   529, -1115,
    2770,  2771,  -358,    69,  -358,   467,    70,    72,   385,  2212,
      73,   509,  2178,   386,  1472,    40,  2057,  1474,    74,  -683,
     208,  2213,   209,  1477,   210,   193,   790,  1481,  1120,  1121,
     528,   791,   211,  1483,    50,  1364,   529,  1032,  2278,   212,
    1214,   444,    49,  1215,  2772,  2117,  1216,  1217,  1365,  1494,
    1409,   470,  1410,   200,  2136,   465,  2137,   201,   790,  2773,
    2774,   213,  2228,   791,  2229,  1021,  1145,  1146,  1147,   528,
   -1618, -1618, -1618, -1618,   235,  2622,  2292,  2623,  2406,  1615,
     528,   205,   242,  1033, -1115,  2651,   238,  2652,   212,  -358,
     239,  2293,  2407,   839,   840,   841,   842,   437, -1617, -1617,
   -1617, -1617,  1082,   475,  1083,  1365,  2226,   214,  1366,  1367,
     785,  1523,   788,  2167,  1524,   445,   343,   362,  2301,  2301,
     404,  1525,  1526,   370,  -367,   467,   622,   405,   387,   407,
     518,   412,   447,   414,   213,  1034,  1738,  -358,  1740,   417,
     528,  1742,  1743,  1744,   401,   528,  1368,  1748,  2232,   422,
    2233,   424,  2231,   425, -1115,   435,   375,  2197,  1760,  1761,
    2198,  2308,  1185,  1186,  1187,  1188,   545,  2205,  1527,   437,
     574,   470,  2148,  2150,  2152,  2154,   566,  2408,  2409,  2410,
     214,   671,   672,   213,   679,   681,  2303,   692,   693,   694,
     701,   711,  2411,  2310,  2218,   716,   732,   730,   745,   215,
   -1115,   748,   752,  1368,  2255,   772,   749,   794,  1230,   756,
     757,  2272,  2258,   777,   710,  2260,   758,  2763,   765,  2221,
    1593,  2301,   766,   475,   767,   798,   448,   449,   450,   214,
     768,   770,   778,   780,   529,   451,   529,  1528,   781,   800,
     818,   812,   216,   824,   826,   828, -1115,   452,   843,   891,
     849,  1069, -1115,   895,  2578,   847,   908,   437,   912,   911,
     914,   916,   420, -1620,   925,   926,   927,   928,  1529,   933,
    2246,   935,   215,  2375,   938,   944,   942,   959,   625,   949,
     961,  1133,   427,   972,  2412,   977,   984,  2386,   988,   990,
    1530,   456,   992,   457,   458,   459,   995,   996,   997,   460,
    1008,   461, -1710,  1000,  1006,  1019,  2419,  2420,   721,  1023,
    2421,  1218,  1219,  2272,  1025,   216,  1026,   217,  1039,  1040,
    1055,   215,  1041,  1064,  1065,  1067,  1102,  2393,  1108,  1116,
    1117,  1127,  1135,  2346,  1148,   731,  1141,  1220,  1221,  1150,
     463,   503,  2423,  1161,  1531,   831,  2364,   830,  1211,  1200,
    1224,  1203,   901,  1133,  1242,   599,  1251,  1270,  1274,  1275,
    1282,  1302,  1266,  1315,   216,  1080,  1081,  1309,  2317,  1314,
    1316,  1318,  1319,  -379,  1321,  2324,  2325,  2326,  2327,  1532,
    2439,  1346,  2419,  2330,  1348,  1350,   465,  2433,  1374,  1357,
     217,  1382,  1377,  1387,  1392,  1849,  1394,  1378,  1399,  1533,
    1400,   509,  1454,  1455,  2451,  1458,  1459,  1082,  2342,  1083,
    1473,  1084,  2221,  1475,  1478,  1479,   466,  1480,   528,  1460,
    1461,  1133,  1482,  1484,  2446,  1495,  1497,  1501,  1505,  1165,
    1539,  1506,   509,  1593,  1869,  1869,  1541,  1546,  1547,   217,
    1554,  1553,  1166,  1557,  2308,  1085,  1086,  1087,  1560,  1561,
    1572,  1595,  1585,  1237,  1597,  1598,   467,  1601,  1608,   528,
    1609,  1534,  1613,  2510,  1636,  1643,  1644,  1645,   468,   469,
    1646,  1655,  1666,  2308,  2386,  1535,  1659,  1661,  1676,  1660,
    1679,  1681,  1687,  1157,  1697,  1711,  1133,  2402,  1718,  1725,
    1726,  1730,  1486,  1487,  1536,  1088, -1639,  1089,  1816,  1822,
    2422,  2386,   470,  1825,  1090,  1834,  1837,  1091,  1839,  1842,
    1857,  1845,   471,  2427,  1876,  1854,  1881,  1883,  1899,  1970,
    1900,  2030,  1909,  1986,  1885,  1972,  1976,  2031,  2032, -1595,
    2036, -1637,  2081,   472,  1766,  2076,  1593,  2078,   473,  1826,
    1827,  2098,  1417,  1082,  1418,  1083,   474,  2087,   437,  2099,
    2100,  1871,  2124,  2120,   475,  2101,  2648,  2498,  2580,  2126,
    1537,  2616,  1872,  2606,  1888,  1887,  2141,  2155,  2157,  2163,
    2745,  2173,  2179,  2181,  2184,   381,  2214,   585,  2216,  2204,
    2224,  2215,  2234,  2235,  2239,  2252,  2263,  2253,  2264,  2266,
    2273,  2275,  1264,  1993,  2254,  2308,  1092,  2335,  1093,  2337,
    2268,  2332,  2338,  2311,  2079,  2257,  2373,  2344,  1994,  2365,
    2376,  2345,  2381,  2382,  2385,   625,  2431,  2432,  1995,  2425,
    2417,  2441,  2437,  2449,  2457,  2471,  2470,  2386,  2478,  2486,
    2481,  2350,  2493,  2480,  2487,  2495,  1263,  2438,   528,  2511,
    2517,  2524,   528,  2531,  2519,  2594,  2583,  2585,  2595,  2608,
    2631,  2607,  2609,  1573,  2610,   528,  2515,  2514,   509,  1070,
    2051, -1932,  2582,  2696, -1932,  2735,  2783, -1932,  2612,  2741,
    2743,  2784,  2811,  2808,   518, -1932,  2540,  2575,  2817,    16,
      85,  2812,    81,   237,  2639,    86,    77,  1391,    76,  2699,
     399,   700,  1706,   419, -1823,  1386, -1823,   528,  1693,  1042,
    1373,  2587,  2588,  2497,  2333,  2323,  2452,  2664,  2329,  1017,
    2742,  2334,  2598,  2450,  2567,  1927,  2316,  2603,   999,  2269,
    2806, -1932,  2509,  2513,  2577,  2656,  2646,  2804,  2810,  2380,
    2601,   518,  2700,  2788,  2701,  2436,  2602,  2665,  2666,   432,
   -1932,  1807,   192,  1416,  1724,  1499,   797,  1153,  2615,   528,
     528,   528,  1805,  2064,  2062,  1154,  1522,  2785,   835,  2632,
    1193,  2787,  1550,  1811,   892,  2702,  1201,  1223,  2080,  1235,
    1831,  1562,  2091,  2090,  2642,   915,  2644,  1246,  1841,   918,
    2645,  1848,  1599,  1654,  1860,  1624,  1273,  2703,   642,  1870,
     950,   975,  1652,  2123,  1094,   951,  1653,  2748,  2530,  1312,
    1716,  1713,  1177,  1755,  2129,  1175,  1753,  2116,  2114,  1931,
     528,  2347,  1996,  2250,  2135,  2704,  2133,  1893,  1514,  2819,
    1512, -1932,  1863,  1593,  1207,  1864,   941,  1152,  1071, -1932,
    1865,   786,   786,  1866,  2183,  1614,  1698,  2604,  2685,  2686,
    1356,  1696,   803, -1932,  1997,  1095,  1265,   771,  2277,  2430,
    2328,  2492,   786,  2693,  -242,  2089,  2758,  1096,  2697,  2698,
    1638,  1844,  1821,  1381,  2803,  2803,  2025,  2649,  1672,  2491,
    2777,   786,     0,     0,  2744, -1932,     0,  2746,  2747,     0,
       0,     0,     0,  1045, -1823,  2237,  2238,     0,     0,     0,
    1936,     0,     0,     0,  2816, -1932,  2245, -1932,   786,  2705,
       0,     0,   501,   501,  1072,     0,     0,     0,     0,  1998,
    2761,     0,     0,     0,  1999,     0,  2706,     0,     0, -1932,
   -1932,     0,     0,   501,     0,     0,     0,     0,     0,     0,
       0,     0,   498,   498,     0,     0,     0,     0,  2707,     0,
       0,     0,   501,     0,     0,     0,     0,     0,  2000,     0,
       0,     0, -1932,   498,     0,     0,  2001,     0,     0,  2708,
       0,     0,     0,     0,     0, -1823,     0,     0,  2002,   501,
       0,     0,   498,     0,     0,     0,     0,     0,     0,  2709,
       0, -1932, -1932,     0,   710,     0,  1945,     0,  2710,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1574,   498,
     528,  2003,     0,     0,     0,     0,     0, -1932,     0,  2004,
       0,     0,     0,     0, -1932,     0,     0,     0,     0,     0,
    -239,     0,     0,     0,     0,     0,     0,     0, -1932,     0,
       0,  2341, -1932,     0,   445,     0,     0,     0,     0,     0,
       0,   502,   502,     0,     0,     0,   528, -1932,   528,     0,
    2005,   447,     0,  2006,    90,     0,    91,     0,    92,     0,
       0,     0,   502,    93,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0, -1932,     0,     0,     0,     0,     0,
       0,   502,     0, -1932,     0,     0,     0,     0,     0,     0,
     528,     0,   528,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,     0,     0,   502,     0,
       0,     0,     0, -1932,    97,     0,     0,     0,     0,     0,
       0,     0,     0, -1932,     0,    98,     0,     0,    99, -1932,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,   599,   448,   449,   450,     0,     0,
     528,     0,     0,     0,   451,     0,     0,     0,     0,     0,
       0,     0,     0,   585,     0,   101,     0,     0,     0,     0,
       0,     0,     0,   102,     0,   103,     0,     0,     0,     0,
     710,     0,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,
    -731,  -731,     0,  -731,  -731,  -731,     0,  -731,  -731,  -731,
    -731,  -731,  -731,  -731,  -731,  -731,   104,     0,     0,     0,
     802,  -731,   457,   458,   459,     0,  -731,   105,   460,  -731,
       0,     0,   106,     0,     0,     0,   585,   585,   585,   585,
     585,     0,     0,     0,   585,   585,   585,     0,   585,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,   108,     0,   463,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,     0,     0,     0,     0,     0,   112,     0,
     113,     0,     0,   114,     0,     0,     0,  -731,     0,     0,
       0,     0,     0,     0,     0,   585,     0,     0,     0,     0,
       0,     0,     0,     0,   585,   585,   585,   585,   528,     0,
     528,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1070,     0,     0,   115,     0, -1932,     0,   116,
   -1932,   117,     0,     0,     0,   466,     0, -1932, -1932,     0,
       0,   118,     0,   710,     0,     0,     0,   528,  -731,  -731,
    -731,     0,  -731,  -731,  -731,  -731,     0, -1823,    90, -1823,
      91,     0,    92,     0,     0,     0,     0,    93,     0,   119,
       0,     0,     0,     0,     0,    94,     0,     0,     0,     0,
       0,     0,   120,     0, -1932,   528,     0,   468,   469,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
     121,   122,     0,     0,     0,     0,     0,     0,    97,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,    98,
       0,   471,    99,     0,   124,   125,     0,     0,     0,     0,
       0,   126,  2162,     0,     0,   127,   100,     0,     0,     0,
       0,     0,   472, -1932,   128,     0,     0,   473,     0,     0,
       0,     0,     0,     0,   129,   474,     0,   437,     0,   101,
       0,     0,  -731,   130,     0,     0,     0,   102,     0,   103,
       0,     0,   131,     0, -1932,     0,     0,   132,   133,     0,
       0,   134,     0,   135,     0,     0,     0,     0,     0,     0,
       0,   136,     0,     0,     0,     0, -1932,     0,     0,     0,
     104,     0,     0,     0,  -731,     0,     0,     0,     0,     0,
       0,   105,     0,     0,  -731,     0,   106,     0,     0,     0,
       0,     0,   138,     0,     0,     0,     0,     0,     0,   139,
       0,     0,     0,     0,   140,     0,     0, -1823,     0,     0,
       0,   585,     0,     0,   107,     0,     0,     0,     0,     0,
   -1932,   108,     0,     0,   109,   110,  -731,  1072,     0,     0,
       0,     0,   141,     0,     0,   111,     0,     0,     0,     0,
       0,     0,   112,   528,   113,   528,     0,   114,     0,     0,
       0,     0,     0,     0,     0, -1932,     0,     0,     0,     0,
       0,     0,     0,  2244,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1932,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1823,   115,
       0,     0,     0,   116,     0,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0, -1932,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,   710,     0,
      90, -1932,    91,     0,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,  2315,  2315,     0,    94,     0,     0,
   -1932,     0,     0,     0,   121,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,   125,
      95,    96,     0,     0,     0,   126,     0,     0,     0,   127,
      97,     0,     0,     0,     0,     0,     0,     0,   128,     0,
       0,    98,     0,     0,    99,     0,     0,     0,   129,     0,
       0,     0,     0,     0,     0,  2378, -1932,   130,   100,     0,
       0,     0,     0,     0,     0,     0,   131,  1178,     0,     0,
       0,   132,   133,     0,     0,   134,     0,   135,     0,     0,
       0,   101,     0,     0,     0,   136,     0,   599,     0,   102,
       0,   103,     0,     0,   710,     0,     0,     0,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   710,     0,   710,   710,     0,   138,   710,     0,     0,
       0,     0,   104,   139,     0,     0,     0,     0,   140,   509,
       0,     0,     0,   105,     0,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,   108,   710,   710,   109,   110,     0,     0,
     445,     0,     0,     0,     0,     0,     0,   111,     0,   710,
       0,     0,  2455,  2455,   112,     0,   113,   447,     0,   114,
    2455,  2455,  2462,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   509,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,   117,     0,     0,
       0,   710,     0,     0,     0,     0,     0,   118,     0,     0,
      90,     0,    91,   509,    92,     0,     0,     0,     0,    93,
     710,     0,     0,     0,     0,   710,     0,    94,     0,     0,
     710,   710,     0,     0,     0,   119,     0,     0,     0,     0,
     509,   448,   449,   450,     0,     0,     0,     0,   120,     0,
     451,     0,     0,     0,     0,     0,     0,     0,   710,     0,
      95,    96,   452,     0,     0,     0,  2586,     0,     0,     0,
      97,     0,     0,     0,     0,     0,   121,   122,     0,     0,
       0,    98,     0,     0,    99,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
     124,   125,     0,     0,     0,     0,   456,   126,   457,   458,
     459,   127,     0,     0,   460,     0,   461,     0,   710,     0,
     128,   101,     0,     0,     0,     0,     0,     0,     0,   102,
     129,   103,     0,     0,     0,   585,     0,     0,     0,   130,
     585,     0,     0,     0,     0,     0,     0,     0,   131,     0,
       0,     0,   710,   132,   133,   463,     0,   134,     0,   135,
       0,     0,   104,     0,     0,     0,     0,   136,     0,     0,
       0,     0,     0,   105,     0,     0,     0,     0,   106,     0,
     983,     0,     0,     0,   710,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,     0,
     585,   465,     0,     0,   585,   139,   107,     0,     0,     0,
     140,     0,     0,   108,     0,     0,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   466,     0,     0,   112,     0,   113,     0,   141,   114,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,     0,   468,   469,   116,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   470,     0,     0,
       0,     0,     0,     0,     0,   119,     0,   471,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   244,   120,   245,
       0,     0,     0,     0,   246,     0,     0,     0,   472,     0,
       0,     0,   247,   473,     0,     0,     0,     0,     0,     0,
       0,   474,     0,   437,     0,     0,   121,   122,     0,   475,
       0,     0,     0,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,   248,   249,     0,     0,     0,
     124,   125,     0,     0,     0,   250,     0,   126,     0,     0,
       0,   127,     0,     0,     0,     0,   251,     0,     0,   252,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,     0,     0,   253,     0,     0,     0,   443,     0,   130,
     444,     0,     0,   857,   858,   859,     0,     0,   131,     0,
       0,   860,     0,   132,   133,     0,   254,   134,     0,   135,
       0,     0,     0,     0,   255,     0,   256,   136,     0,     0,
       0,     0,     0,   257,     0,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,   267,   268,     0,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   138,     0,
       0,     0,     0,     0,     0,   139,     0,     0,   279,     0,
     140,     0,     0,   280,   445,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   447,     0,     0,     0,     0,     0,     0,   141,     0,
       0,   281,     0,     0,     0,     0,     0,     0,   282,     0,
       0,   283,   284,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   285,     0,     0,     0,     0,     0,     0,   286,
       0,   287,     0,     0,   288,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   861,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   862,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   289,     0,     0,     0,
     290,     0,   291,     0,     0,   448,   449,   450,     0,     0,
       0,     0,   292,     0,   451,     0,     0,     0,     0,     0,
     863,   864,     0,     0,     0,     0,   452,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     293,     0,     0,     0,     0,     0,  1206,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,   453,
     865,   866,     0,     0,     0,   454,     0,   455,     0,     0,
     456,     0,   457,   458,   459,     0,     0,     0,   460,     0,
     461,   295,     0,     0,     0,   462,     0,     0,     0,     0,
       0,     0,   296,     0,     0,     0,     0,     0,   867,     0,
       0,     0,     0,     0,   868,     0,   297,     0,     0,   869,
       0,     0,   298,     0,     0,     0,   299,   870,     0,   463,
       0,     0,     0,     0,   871,   300,     0,     0,     0,   872,
       0,     0,     0,     0,     0,   301,     0,     0,   464,     0,
       0,     0,     0,     0,   302,     0,     0,     0,   873,     0,
       0,     0,     0,   303,     0,     0,     0,     0,   304,   305,
     443,     0,   306,   444,   307,   465,   857,   858,   859,     0,
       0,     0,   308,     0,   860,     0,   445,     0,     0,     0,
       0,     0,     0,     0,     0,   309,     0,     0,     0,     0,
       0,     0,     0,   447,     0,   466,     0,     0,     0,     0,
       0,     0,     0,   310,     0,     0,     0,     0,     0,     0,
     311,     0,     0,     0,     0,   312,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   467,     0,   445,     0,     0,
       0,     0,     0,   313,     0,     0,     0,   468,   469,     0,
       0,     0,     0,     0,   447,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   874,
       0,   875,     0,   876,     0,     0,   877,     0,   878,   879,
     880,   470,     0,   881,   882,     0,   597,   448,   449,   450,
       0,   471,     0,     0,     0,     0,   451,     0,     0,     0,
       0,     0,     0,     0,  -895,     0,     0,  -895,     0,     0,
       0,     0,   472,     0,   861,     0,     0,   473,     0,     0,
       0,     0,     0,     0,   862,   474,     0,   437,     0,     0,
       0,     0,     0,   475,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   427,   448,   449,
     450,     0,   598,     0,   457,   458,   459,   451,     0,     0,
     460,     0,     0,   863,   864,     0,     0,     0,     0,   452,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -895,     0,     0,     0,     0, -1827,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -895,     0,
       0,   463,   453,   865,   866,     0,     0,     0,   454,     0,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
       0,   460,     0,   461,     0,     0,     0,     0,   462,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   867,     0,     0,     0,     0,     0,   868,     0,     0,
     443,     0,   869,   444,     0,     0,     0,     0,     0,     0,
     870,     0,   463,     0,     0,     0,     0,   871,     0,     0,
       0,     0,   872,     0,  -961,     0,     0,   466,     0,  -961,
       0,   464,  -961,     0,     0,     0,     0,     0,     0,  -961,
    -961,   873,  -895,  -895,  -895,     0,     0,     0,     0,     0,
       0,  -895,     0,     0,     0,     0,     0,     0,   465,  -961,
       0,  -961,     0,  -895,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   445,     0,   468,
     469,     0,     0,     0,     0,     0,  -961,     0,   466,     0,
       0,     0, -1932,     0,   447,     0,  -895,     0,     0,     0,
       0,     0,  -895,     0,  -895,     0,     0,  -895,     0,  -895,
    -895,  -895,     0,     0,     0,  -895,     0,  -895,     0,     0,
       0,     0,  -895,   471,     0,     0,     0,     0,   467,     0,
       0,     0,     0,     0,   443, -1171,     0,   444,     0,     0,
     468,   469,     0,     0,   472,     0,     0,     0,     0,   473,
       0,     0,     0,     0, -1171,  -961,  -895,   474,   599,   437,
       0,  -895,   874,     0,   875,     0,   876,     0,     0,   877,
       0,   878,   879,   880,   470,  -895,   881,   882,     0,     0,
       0,     0,     0,     0,   471,     0,  -961,     0,   448,   449,
     450,     0,     0,     0,     0,     0,     0,   451,     0,     0,
       0,     0,  -895,     0,     0,   472,     0,     0,  -961,   452,
     473,   445,     0, -1827,     0,     0,     0,     0,   474,     0,
     437,     0,     0,     0,     0,     0,   475,     0,   447,     0,
       0,     0,  -895,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   453,     0,     0,     0,     0,     0,   454,  -961,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
       0,   460,  -961,   461,     0,     0,  -895,     0,   462,  -961,
       0,     0,  -895,     0,     0,     0,     0,     0,   443,     0,
       0,   444,     0,     0,  -895,  -895,     0,     0,     0,     0,
   -1932,     0,     0,     0,     0,     0,     0,  -961,     0,     0,
       0,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -961,  -895,     0,
       0,   464,   448,   449,   450,     0,     0,     0,  -895,     0,
    -961,   451,     0,   332,     0,  -895,     0,     0,     0,     0,
       0,     0,     0,   452,     0,     0,     0,     0,   465,  -895,
       0,     0,     0,     0,  -895,   445,     0, -1827,     0,     0,
       0,     0,  -895,     0,  -895,     0,     0,     0,     0,     0,
    -895,     0,   447,     0,     0,     0,   453,     0,   466,  -961,
       0,     0,   454,     0,   455,     0,     0,   456,     0,   457,
     458,   459,     0,  -961,     0,   460,     0,   461,     0,     0,
       0,     0,   462,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -961,   443,     0,     0,   444,     0,   467,     0,
   -1932,     0,     0,     0,     0,  1278,     0,     0,     0,     0,
     468,   469,     0,     0,     0,     0,   463,     0,     0,     0,
       0,     0,   443,     0,     0,   444,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,   470,     0,   448,   449,   450,     0,
       0,     0,     0,     0,   471,   451,     0,     0,  -961,     0,
       0,     0,   465,     0,     0,     0,     0,   452,     0,  -961,
     445,     0,     0,     0,     0,   472,     0,     0,     0,     0,
     473,     0,   446,     0,     0,     0,     0,   447,   474,  -961,
     437,   333,   466,     0,     0,     0,   475,     0,     0,   445,
     453,     0,     0,     0,     0,     0,   454,     0,   455,     0,
       0,   456,     0,   457,   458,   459,   447,     0,     0,   460,
       0,   461,     0,     0,     0,     0,   462,     0,     0,   646,
       0,     0,   467,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   468,   469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     463,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   470,   464,
       0,   448,   449,   450,     0,     0,     0,     0,   471,     0,
     451,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   452,     0,     0,     0,   465,     0,     0,   472,
     448,   449,   450,     0,   473,     0,     0,     0,     0,   451,
       0,     0,   474,   599,   437,     0,     0,     0,     0,     0,
     475,   452,     0,     0,     0,   453,   466,     0,     0,     0,
       0,   454,     0,   455,     0,     0,   456,   974,   457,   458,
     459,     0,     0,     0,   460,     0,   461,   443,     0,     0,
     444,   462,     0,     0,   453,     0,     0,     0,     0,     0,
     454,     0,   455,     0,     0,   456,   467,   457,   458,   459,
       0,     0,     0,   460,     0,   461,     0,     0,   468,   469,
     462,     0,     0,     0,     0,   463,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,  1279,     0,     0,     0,     0,
       0,     0,   470,     0,   463,     0,  1280,     0,     0,     0,
       0,     0,   471,     0,   445,     0,     0,     0,     0,     0,
       0,   465,     0,   464,     0,   443,     0,     0,   444,     0,
       0,   447,     0,   472,     0,     0,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,   474,     0,   437,     0,
     465,   466,     0,     0,   475,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     466,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   445,   468,   469,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   586,     0,     0,     0,     0,   447,
     467,     0,     0,     0,     0,   448,   449,   450,     0,     0,
       0,     0,   468,   469,   451,     0,     0,   470,     0,     0,
       0,     0,     0,     0,     0,     0,   452,   471,     0,     0,
       0,     0,   443,     0,     0,   444,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,   472,     0,
       0,     0,     0,   473,     0,     0,   471,     0,     0,   453,
       0,   474,     0,   437,     0,   454,     0,   455,     0,   475,
     533,     0,   457,   458,   459,     0,     0,   472,   460,     0,
     461,     0,   473,     0,     0,   462,     0,     0,     0,     0,
     474,     0,   437,   448,   449,   450,     0,     0,   475,     0,
       0,     0,   451,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,   452,     0,     0,     0,     0,   463,
       0,     0,     0,     0,   534,     0,   447,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   464,   646,
       0,     0,     0,     0,     0,     0,     0,   453,     0,     0,
       0,   443,     0,   454,   444,   455,     0,     0,   456,     0,
     457,   458,   459,     0,     0,   465,   460,     0,   461,     0,
       0,     0,     0,   462,   443,     0,     0,   444,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   466,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     448,   449,   450,     0,     0,     0,   464,     0,   445,   451,
       0,     0,     0,     0,     0,   467,     0,     0,     0,     0,
     651,   452,     0,     0,     0,   447,     0,   468,   469,     0,
       0,   445,     0,   465,     0,   443,     0,     0,   444,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,     0,
       0,     0,     0,     0,   453,     0,     0,     0,     0,     0,
     454,   470,   455,   466,     0,   456,     0,   457,   458,   459,
       0,   471,     0,   460,     0,   461,     0,     0,     0,     0,
     462,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   472,     0,     0,     0,     0,   473,     0,     0,
       0,     0,     0,   467,     0,   474,     0,   437,     0,     0,
       0,     0,   445,   475,   463,   468,   469,     0,     0,   448,
     449,   450,     0,     0,     0,     0,     0,     0,   451,   447,
       0,     0,     0,   464,     0,     0,     0,     0,     0,     0,
     452,     0,   448,   449,   450,     0,     0,     0,     0,   470,
       0,   451,     0,     0,     0,     0,     0,     0,     0,   471,
     465,     0,     0,   452,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   453,     0,     0,     0,     0,     0,   454,
     472,   455,     0,     0,   456,   473,   457,   458,   459,     0,
     466,     0,   460,   474,   461,   437,   453,     0,     0,   462,
       0,   475,   454,     0,   455,     0,     0,   456,     0,   457,
     458,   459,     0,     0,     0,   460,     0,   461,     0,     0,
       0,     0,   462,   448,   449,   450,     0,     0,     0,     0,
     467,     0,   451,   463,     0,     0,     0,     0,     0,     0,
       0,     0,   468,   469,   452,     0,     0,   443,     0,     0,
     444,     0,   464,     0,     0,     0,   463,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,   444,   464,   470,   453,     0,   465,
       0,     0,     0,   454,     0,   455,   471,     0,   456,     0,
     457,   458,   459,     0,     0,     0,   460,     0,   461,     0,
       0,     0,   465,   462,     0,     0,     0,   472,     0,   466,
       0,     0,   473,     0,     0,     0,     0,     0,     0,     0,
     474,     0,   437,     0,   445,     0,     0,     0,   475,     0,
       0,     0,   466,     0,     0,     0,     0,   463,     0,     0,
       0,   447,   534,     0,     0,     0,     0,     0,   445,   467,
       0,     0,     0,     0,     0,     0,   464,     0,     0,     0,
       0,   468,   469,     0,     0,   447,     0,     0,     0,     0,
       0,     0,   467,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   465,   468,   469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   470,     0,     0,     0,     0,
       0,     0,     0,     0,   774,   471,     0,     0,     0,     0,
       0,     0,     0,   466,     0,     0,     0,     0,   470,     0,
       0,     0,     0,     0,     0,     0,   472,     0,   471,     0,
       0,   473,     0,     0,     0,   448,   449,   450,     0,   474,
       0,   437,     0,     0,   451,     0,     0,   475,     0,   472,
       0,     0,     0,   467,   473,     0,   452,     0,     0,   448,
     449,   450,   474,   979,   437,   468,   469,     0,   451,     0,
     475,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     452,     0,     0,   443,     0,     0,   444,     0,     0,   453,
       0,     0,     0,     0,     0,   454,     0,   455,     0,   470,
     456,     0,   457,   458,   459,     0,     0,     0,   460,   471,
     461,     0,     0,   453,     0,   462,     0,     0,     0,   454,
       0,   455,     0,     0,   456,     0,   457,   458,   459,     0,
     472,     0,   460,     0,   461,   473,     0,     0,     0,   462,
       0,     0,     0,   474,     0,   437,     0,     0,     0,   463,
       0,   475,     0,     0,     0,     0,     0,     0,     0,     0,
     445,     0,     0,     0,  1130,     0,     0,   444,   464,     0,
       0,     0,     0,   463,     0,     0,     0,   447,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   464,     0,     0,   465,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   465,
       0,     0,     0,     0,     0,   466,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,   466,
       0,     0,     0,     0,     0,     0,     0,     0,   447,  1299,
       0,     0,     0,     0,     0,   467,     0,     0,     0,     0,
       0,   448,   449,   450,     0,     0,     0,   468,   469,     0,
     451,     0,     0,     0,     0,     0,     0,     0,     0,   467,
       0,     0,   452,     0,     0,     0,     0,     0,     0,     0,
       0,   468,   469,     0,     0,     0,     0,     0,     0,     0,
       0,   470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   471,     0,     0,     0,   453,     0,     0,     0,     0,
       0,   454,     0,   455,     0,   470,   456,     0,   457,   458,
     459,     0,   472,     0,   460,   471,   461,   473,     0,     0,
       0,   462,   448,   449,   450,   474,     0,   437,     0,     0,
       0,   451,     0,   475,     0,     0,   472,     0,     0,     0,
       0,   473,     0,   452,     0,     0,     0,     0,     0,   474,
       0,   437,     0,     0,     0,   463,     0,   475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,     0,   453,     0,     0,     0,
       0,     0,   454,     0,   455,     0,     0,   456,     0,   457,
     458,   459,     0,     0,     0,   460,     0,   461,     0,     0,
       0,   465,   462,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   466,     0,     0,     0,     0,   463,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2434,     0,     0,     0,     0,
       0,   467,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   465,   468,   469,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -376,     0,     0,  -376,
       0,     0,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,     0,   466,     0,     0,     0,     0,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   471,     0,  -376,
       0,  -376,     0,     0,     0,     0,     0,     0,  -376,     0,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,     0,   472,     0,
       0,     0,   467,   473,     0,     0,     0,     0,     0,     0,
       0,   474,     0,   437,   468,   469,     0,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -376,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   470,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -376,     0,     0,     0,   472,
       0,     0,     0,     0,   473,     0,     0,     0,     0,     0,
       0,  1002,   474,     0,   437,  -376,  -376,  -376,  -376,  -376,
     475,     0,  -376,  -376,     0,     0,  -376,     0,     0,     0,
       0,     0,  -376,     0,  -376,     0,     0,     0,     0,     0,
    -376,     0,     0,     0,     0,  -376,     0,     0,  -376,     0,
       0,     0,     0,     0,     0,     0,  -376,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -376,
       0,     0,  -376,     0,     0,     0,     0,     0,  -376,     0,
    -376,     0,     0,     0,     0,     0,     0,     0,     0,  -376,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -376,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -376,     0,     0,     0,     0,     0,
       0,  1001,     0,     0,     0,  1424,     0,     0,  1425,     0,
       0,  1426,     0,     0,     0,     0,     0,     0,     0,  1427,
       0,  -376,     0,     0,  -376,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,     0,     0,  -376,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -376,  1428,  -376,     0,     0,     0,
       0,     0,     0,     0,  -376,     0,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,     0,  1429,     0,     0,     0,     0,     0,
       0,     0,  -376,     0,     0,     0,     0,   445,     0,  -376,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,     0,     0,  -376,     0,     0,
    -376,     0,     0,     0,     0,     0,     0,  -376,     0,  -376,
    -376,  -376,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1430,     0,     0,     0,     0,
    -376,     0,  -376,  1431,     0,  -376,     0,  1002,     0,     0,
    -376,  -376,  -376,  -376,  -376,  -376,     0,  1432,  -376,  -376,
       0,     0,  -376,     0,     0,     0,     0,     0,  -376,     0,
       0,     0,  -376,  -376,  -376,     0,  -376,     0,   448,   449,
     450,     0,     0,     0,     0,     0,  -376,   451,     0,  1433,
       0,  -376,  -376,  -376,     0,     0,     0,     0,     0,   452,
    1003,     0,  1901,     0,     0,  -376,     0,     0,  -376,  1434,
       0,  1435,     0,     0,  -376,     0,     0,  1902,     0,     0,
    1903,  1904,  1905,  1906,  1907,  1908,  1909,     0,     0,     0,
       0,     0,   488,  1436,  1437,     0,     0,     0,   454,     0,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
    -376,   460,     0,   461,     0,  1910,     0,  1911,  1912,  1913,
    1914,  1915,  1916,  1917,     0,     0,  1438,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -376,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   463,     0,  -376,  1439,  1440,     0,     0,     0,
       0,  1918,  -376,     0,     0,  -376,     0,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
    -376,  1441,     0,     0,     0,     0,     0,     0,  1442,     0,
       0,     0,     0,  -376,     0,     0,     0,     0,   465,     0,
       0,  -376,  1443,     0,     0,     0,  1444,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1445,  1919,  1920,  1921,  1922,  1923,     0,   466,  1924,
    1925,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -376,     0,  -376,  -376,  -376,  1446,     0,
       0,     0,     0,     0,     0,     0,     0,  1447,     0,     0,
       0,     0,     0,  1926,     0,     0,     0,     0,   467,     0,
       0,     0,  -376,     0,     0,     0,   407,     0,     0,  1927,
     468,   469,     0,     0,     0, -1908,     0,  1448,     0,     0,
       0,  -376,     0,     0,     0,     0,     0,  1449,     0,     0,
       0,     0,  1114,  1450,     0,     0,     0,     0,  -376,     0,
       0,     0,   489,     0,   470,     0,   490,   491,  -376,  -376,
    -376,  1928,     0,     0,   471,     0,     0,     0,     0,     0,
       0,     0,  -376,     0,     0,     0,     0,     0,     0,  -376,
       0,     0,     0,     0,     0,   472,  1003,     0,     0,     0,
     473,  1929,     0,     0,     0,     0,     0,     0,   474,     0,
     437,     0,     0,     0,     0,  1930,   475,     0,     0,     0,
       0,     0,     0,  1931,     0,     0,  1932,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2542,
       0,  1933,  2543,     0,     0,  2544,  1903,  1904,  1905,  1906,
    1907,  1908,  2545,  2546,  1934,     0,     0,     0,     0,     0,
       0,     0,  1935,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1417,     0,  1418,     0,     0,     0,     0,     0,
       0,  1910,     0,  1911,  1912,  1913,  1914,  1915,  1916,  1917,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1936,     0,  1937,  1938,  1939,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1918,   445,     0,
       0,     0,     0,  1940,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,     0,     0,     0,     0,
       0,     0,  -373,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2547, -1908,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1941,
    1942,  1943,     0,     0,     0,     0,     0,     0,  1919,  1920,
    1921,  1922,  1923,  1944,     0,  1924,  1925,     0,     0,  2548,
    1945,     0,     0,     0,     0,  2549,     0,  2550,     0,     0,
       0,     0,     0, -1858,     0,     0,     0,     0,  2551,     0,
       0,  2552,     0,     0,     0,     0,     0,     0,     0,  1926,
    1903,  1904,  1905,  1906,  1907,  1908,     0,     0,   597,   448,
     449,   450,   407,     0,     0,  1927,     0,     0,   451,     0,
       0,     0,     0,  2553,     0,     0,     0,     0,     0,     0,
       0,     0,  2554,     0,     0,  1910,     0,  1911,  1912,  1913,
    1914,  1915,  1916,  1917,     0,  2555,   445,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1928,     0,     0,
       0,     0,     0,   447,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   802,     0,   457,   458,   459,     0,
       0,  1918,   460,     0,     0,     0,     0,  2556,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2557,  1930,     0,     0,     0,     0,     0,     0,     0,  1931,
       0,     0,  1932,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   463,     0,     0,     0,  1933,     0,  2558,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1919,  1920,  1921,  1922,  1923,     0,     0,  1924,
    1925,     0,     0,     0,     0,  2559,     0,   448,   449,   450,
       0,     0,  2560,     0,     0,     0,   451,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   452,     0,
    2561,   445,     0,  1926,     0,     0,     0,     0,     0,     0,
    1936,     0,  1937,  1938,  1939,     0,     0,     0,   447,   466,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   488,     0,     0,     0,     0,     0,   454,     0,   455,
       0,     0,   456,     0,   457,   458,   459,     0,     0,     0,
     460,     0,   461,  2562,     0,     0,     0,     0,  -628,     0,
       0,  1928,     0,  2563,     0,     0,     0,     0,     0,     0,
       0,   468,   469,     0,     0,     0,     0,     0,     0,     0,
       0,  2564,     0,     0, -1932,  1941,  1942,  1943,     0,     0,
       0,   463,     0,     0,     0,     0,     0,     0,     0,  1944,
       0,     0,   445,     0,  2565,  1930,  1945,     0,     0,     0,
     464,     0,   448,   449,   450,   471,  1932,     0,     0,   447,
       0,   451,     0,     0,     0,     0,     0, -1171,     0,     0,
       0,  1933,     0,   452,     0,     0,   472,   465,     0,     0,
       0,   473,     0,     0,     0,     0, -1171,     0,     0,   474,
     599,   437,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   488,   466,     0,     0,
       0,     0,   454,     0,   455,     0,     0,   456,     0,   457,
     458,   459,     0,     0,     0,   460,     0,   461,     0,     0,
       0,     0,     0,     0,     0,     0,  1937,  1938,  1939,     0,
       0,   445,     0,     0,     0,     0,     0,   467,     0,     0,
       0,     0,     0,   448,   449,   450,     0,     0,   447,   468,
     469,     0,   451,     0,     0,     0,   463,     0,     0,     0,
       0,     0,     0,     0,   452,     0,     0,     0,     0,     0,
       0,  1734,     0,     0,     0,   464,     0,     0,     0,     0,
       0,   489,     0,   470,     0,   490,   491,     0,     0,     0,
       0,     0,     0,   471,     0,     0,     0,   488,     0,  1941,
    1942,  1943,   465,   454,     0,   455,     0,     0,   456,     0,
     457,   458,   459,     0,   472,     0,   460,     0,   461,   473,
       0,     0,     0,     0,     0,     0,     0,   474,     0,   437,
       0,     0,   466,     0,     0,   475,     0,     0,     0,     0,
       0,     0,   448,   449,   450,     0,     0,     0,     0,     0,
       0,   451,     0,     0,     0,     0,     0,   463,     0,     0,
       0,     0,     0,   452,     0,     0,     0,     0,     0,     0,
       0,     0,   467,     0,     0,     0,   464,     0,     0,     0,
       0,     0,     0,     0,   468,   469,     0,     0,     0,     0,
       0,     0,  1737,     0,     0,     0,   488,     0,     0,     0,
       0,     0,   454,   465,   455,     0,     0,   456,     0,   457,
     458,   459,     0,     0,     0,   460,   489,   461,   470,     0,
     490,   491,     0,     0,     0,   445,     0,     0,   471,     0,
       0,     0,     0,   466,     0,     0,     0,     0,     0,     0,
       0,     0,   447,     0,     0,     0,     0,     0,     0,   472,
       0,     0,     0,     0,   473,     0,   463,     0,     0,     0,
       0,     0,   474,     0,   437,     0,     0,     0,     0,     0,
     475,     0,     0,   467,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   468,   469,     0,     0,     0,
       0,     0,     0,  1739,     0,     0,     0,     0,     0,     0,
       0,     0,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   489,     0,   470,
       0,   490,   491,     0,   445,     0,     0,     0,     0,   471,
       0,     0,   466,     0,     0,     0,   448,   449,   450,     0,
       0,   447,     0,     0,     0,   451,     0,     0,     0,     0,
     472,     0,     0,     0,     0,   473,     0,   452,     0,     0,
       0,     0,   445,   474,     0,   437,     0,     0,     0,     0,
       0,   475,   467,     0,     0,     0,     0,     0,     0,   447,
       0,     0,     0,     0,   468,   469,     0,     0,     0,     0,
     488,     0,     0,     0,     0,     0,   454,     0,   455,     0,
       0,   456,     0,   457,   458,   459,  1758,     0,     0,   460,
       0,   461,     0,     0,     0,     0,   489,     0,   470,     0,
     490,   491,     0,     0,     0,     0,     0,     0,   471,     0,
       0,     0,     0,     0,     0,   448,   449,   450,     0,     0,
       0,     0,     0,     0,   451,     0,     0,     0,     0,   472,
     463,     0,     0,     0,   473,     0,   452,     0,     0,     0,
       0,   445,   474,     0,   437,     0,     0,     0,     0,   464,
     475,     0,     0,   448,   449,   450,     0,     0,   447,     0,
       0,     0,   451,     0,     0,     0,     0,     0,     0,   488,
       0,     0,     0,     0,   452,   454,   465,   455,     0,     0,
     456,     0,   457,   458,   459,     0,     0,     0,   460,     0,
     461,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   466,   488,     0,     0,
       0,     0,     0,   454,     0,   455,     0,     0,   456,     0,
     457,   458,   459,     0,     0,     0,   460,     0,   461,   463,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   467,     0,   464,     0,
       0,     0,   448,   449,   450,     0,     0,     0,   468,   469,
       0,   451,     0,     0,     0,     0,     0,   463,     0,     0,
       0,     0,     0,   452,     0,   465,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   464,     0,     0,     0,
     489,     0,   470,     0,   490,   491,     0,     0,     0,     0,
       0,     0,   471,     0,     0,   466,   488,     0,     0,     0,
       0,     0,   454,   465,   455,     0,     0,   456,     0,   457,
     458,   459,     0,   472,     0,   460,     0,   461,   473,     0,
       0,     0,     0,     0,     0,     0,   474,     0,   437,  2793,
       0,     0,     0,   466,   475,   467,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   468,   469,     0,
       0,     0,     0,     0,     0,     0,   463,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   467,     0,   464,     0,     0,     0,     0,
       0,   470,     0,   490,     0,   468,   469,     0,     0,     0,
       0,   471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   472,     0,     0,     0,     0,   473,     0,   470,
       0,     0,     0,     0,     0,   474,     0,   437,     0,   471,
       0,     0,   466,   475,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     472,     0,     0,     0,     0,   473,     0,     0,     0,     0,
       0,     0,     0,   474,     0,   437,     0,     0,     0,     0,
       0,   475,   467,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   468,   469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   470,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   472,
       0,     0,     0,     0,   473,     0,     0,     0,     0,     0,
       0,     0,   474,     0,   437,     0,     0,     0,     0,     0,
     475
};

static const yytype_int16 yycheck[] =
{
     211,   212,   339,   444,   215,   521,   364,   324,   408,   646,
     410,  1246,   199,   413,   322,  1208,   453,   923,    42,   207,
     532,  1471,   315,  1670,   317,   213,   327,   320,   528,  1420,
     861,   324,  1423,   852,  1268,   636,  1349,   399,   351,  1945,
       9,   318,   623,   416,   770,   329,   339,     1,   337,   774,
    1985,   488,   345,   337,   780,   528,     9,  1695,    17,  1313,
    1294,  1160,   351,     1,    31,   831,    49,   351,     9,     1,
       1,    17,  1731,   366,    58,   368,  1571,  2000,  2001,   645,
      58,     9,    48,   130,    87,     9,   838,    21,    56,    31,
     856,  1190,    27,  2374,   125,   317,    58,   111,  1327,    22,
     322,    88,   115,    64,   616,    88,   108,   329,   153,   838,
      39,  1081,   585,   178,     9,   337,  1401,    58,   177,  1089,
    1999,   846,     0,    71,   160,   317,   389,   166,  1560,   351,
     896,   130,   259,   124,   321,   259,   323,     1,   160,   176,
    2367,   641,    32,  1656,   228,  1244,     6,   748,   205,    22,
     247,   124,    49,   446,   174,   921,   220,   235,   520,   346,
      71,   348,   240,    21,    32,    97,   353,     9,   641,   235,
    2256,   259,   205,  2508,   385,    97,    98,    30,   178,   216,
     367,   116,    49,   313,  2508,   114,   397,   166,    26,   914,
     125,  1641,   403,   404,  2102,   406,   489,   490,   491,   516,
     411,   412,   365,   309,  1303,   416,  1719,  1720,  1721,  1722,
    1723,   573,    65,  1645,    67,   426,  1729,   575,   162,  1293,
     313,   514,   277,   516,   190,    58,    71,   504,   221,  2262,
     354,   453,   235,     0,   317,  2671,   221,   288,   179,  2262,
     726,   259,  2342,   111,    58,   418,   259,   126,   198,   259,
     750,   422,   464,     8,   979,   460,   339,   206,   304,   305,
     299,   139,   345,   201,   469,   143,   488,   489,   490,   491,
     394,   293,   190,   362,   317,  1788,   298,  2200,   562,   203,
     290,   172,    37,   645,  1797,   259,   235,  1800,   339,   573,
     190,   462,   142,   172,     0,   213,   654,   489,   490,   491,
     424,   523,   347,   244,   516,    49,   259,   707,   601,   259,
    2746,   240,   235,   213,   487,   206,   753,   423,   311,   900,
     820,   418,   695,    93,   202,   111,    71,  2427,  1823,  1824,
     623,   349,   519,   426,   319,   123,   777,  2370,   216,   217,
     562,   396,  2250,   530,   633,    73,   509,  2370,   292,   633,
     383,   573,   274,   990,   638,   419,   170,  2692,   651,   205,
     198,   259,   235,  2449,   231,   431,   259,     6,  2692,   259,
     453,   231,   139,   215,   811,  2310,   143,   466,   365,   314,
     400,  1200,   365,  1214,  1203,   747,   516,   321,  1885,   516,
    2028,   259,  1223,  1825,  1493,   290,  2275,    71,   522,  1165,
    1166,   623,   255,   984,  1658,   488,   489,   490,   491,  2636,
    1135,   633,   226,   277,   461,   472,   638,   259,   515,   341,
     932,    71,   275,   507,  1709,    71,   462,   269,   516,  1181,
     429,   514,   471,    38,   294,   202,    49,   700,   516,    57,
     462,    46,    60,   805,   172,  1211,    64,   490,   409,   216,
     217,   516,  1181,   313,  1689,   424,   749,   516,   406,  1688,
     960,  2742,   357,   756,   757,   758,   774,   953,   365,   516,
     348,   516,   765,   766,   767,   768,   838,   770,   456,   516,
     494,   410,   693,   336,   515,   778,  1456,   780,   781,  1986,
     701,    71,   471,   452,   705,   406,   684,   790,   791,   792,
     793,   794,   493,   516,  1270,   472,   468,  1088,   511,   475,
     458,   473,   354,   515,   516,  2450,   516,   728,   601,     6,
     493,   160,   509,   461,   817,   736,   509,   749,   361,   463,
     472,  2044,   396,   517,   756,   757,   758,   478,   846,   507,
     474,   729,   516,   765,   766,   767,   768,   458,   770,   515,
     851,  1625,   774,   522,   916,  1192,   778,   749,   780,   781,
    2593,   406,   516,   516,   756,   757,   758,   513,   790,   791,
     792,   793,   794,   765,   766,   767,   215,  1178,   940,     6,
     515,   348,   424,   461,   516,   516,   778,  1153,   516,   781,
    2513,  2086,   516,   516,   516,   817,   933,   461,   790,   791,
     792,   793,   794,   373,   966,   463,   914,   900,   981,   214,
     470,   461,   509,   458,  1130,   908,   474,   894,   516,     6,
     259,   365,   911,   516,   846,   817,   472,   911,   470,  2126,
     269,   924,   259,  1133,   362,   822,   244,  1736,   516,   383,
     933,   246,   495,   259,  1898,  1018,   460,  1413,   925,  1415,
     259,   944,  1233,   271,   468,   469,   205,   259,   259,   473,
    1133,   406,   515,   268,   255,   451,   749,  2508,   952,  1106,
     456,   979,  1993,   756,   757,   758,   446,  1039,   900,   171,
     522,   974,   765,   766,   767,   768,   908,   770,   302,   911,
    1063,   984,   914,  1274,   461,   778,     9,   780,   781,  2337,
     126,    33,  1801,  1609,  1803,     9,   749,   790,   791,   792,
     793,   794,  1074,   458,   265,   354,   908,   461,   323,  2508,
    1486,  1487,   765,   766,   767,     6,     6,  1546,   215,   347,
     952,   237,   406,   247,   817,   778,   228,   235,   466,   290,
     260,  1840,   325,   244,   236,    58,  2508,   259,   313,   516,
     274,   334,   365,   964,   333,  1481,   406,   979,   341,   342,
     406,   349,   984,    34,  2606,   509,    27,  2264,  2508,  2176,
     383,    65,   259,    67,   817,   191,   123,   360,  1877,  1878,
     385,   369,   269,  1549,   458,   424,   404,  1553,   215,     8,
     177,   409,   166,     6,   335,  1088,  1007,  1283,  1284,  1285,
    1286,  1287,  1288,  1289,  1290,   419,   397,    12,   458,  1102,
      15,    16,   458,   265,  1539,  1108,  1541,    57,    37,  1181,
     265,   154,   334,   462,    64,   908,   406,  1135,   215,   259,
     322,   470,   259,  2739,   259,  1601,   168,   301,   290,  2175,
    2176,  1278,   269,   302,   124,   255,   456,  2464,   461,   274,
     933,  2692,  2758,  1064,   468,   116,   335,   402,  2093,   473,
    1585,  1072,  1050,  1051,  1148,    47,  1088,   354,  2102,   461,
     478,  2278,   259,   154,  1151,   302,  2493,   516,   458,   484,
    1102,    63,   269,   522,   461,   126,  1248,  2534,   468,   516,
     255,   324,     0,   473,  2215,   478,   509,   507,   516,   405,
     516,   326,   215,  2692,   418,  1542,   522,   516,   457,  1131,
    1102,   215,   364,  1135,   516,   516,   461,    57,  1643,   349,
    2762,   103,   513,   443,    64,   299,  1148,   354,   361,   355,
    2692,   244,   456,  2592,   215,   215,   515,   424,   270,  1301,
    1233,  1234,  2278,  2256,  2591,   265,   259,   392,  1310,  1311,
    1161,   516,  2692,  1242,   370,   259,   269,   540,  1242,  1243,
     419,   255,   243,   461,   515,   269,    30,   354,  1190,   456,
     290,   554,   191,  1266,   515,   516,    62,   478,   259,   259,
    1561,  1274,   313,   470,   410,   505,   201,   397,   269,   269,
    1821,  1491,   419,   274,  2653,   274,   516,   424,  2615,  1765,
    1766,  1767,   215,   586,    90,    91,  2241,   471,   205,  1302,
     247,  1233,  1234,   284,   285,   286,  1309,  1310,   259,  1102,
    1242,  1243,  1244,   173,   516,  1398,  2685,  2686,   202,   516,
     180,   271,   397,   485,  2693,   522,   515,   424,  2697,  2698,
     463,   354,   336,   470,   108,   172,   259,   265,  1485,     8,
     354,   474,  1274,   235,  2701,  1656,   269,   414,   123,  1102,
     242,  1248,   645,   515,   128,   648,   386,  2726,  1649,   306,
     653,   253,   290,   354,   354,   280,   281,  1477,    37,   206,
     351,  1303,   234,   470,  2731,  2598,   245,   418,  1854,   516,
    2603,   516,  1858,  1859,   223,   522,  2755,   522,   273,   219,
     220,   306,   307,   167,   537,  1871,  1872,   347,   216,   217,
    1321,   424,  1323,   328,   329,  1326,  1327,   215,  1329,   239,
     424,  1887,  1888,   618,   202,   322,   255,   191,   515,   516,
     487,   271,   347,  2232,  2233,   522,     1,   359,   216,   217,
     103,   354,   206,   424,   424,   265,   340,   414,   300,   235,
    2663,   430,  2324,   432,  2667,  1343,   487,   470,   352,   334,
    1497,   259,   293,  2554,   404,   478,   470,   455,    85,   409,
     290,   269,  1465,  1466,   348,   670,   456,   359,   360,  1472,
     123,  1474,   219,   130,   472,  2576,   317,   402,  1481,   470,
     470,   774,   374,  1381,   376,   515,   516,    62,   420,   421,
     130,  1494,   239,   516,  1497,   476,   477,   347,   158,   522,
     481,   424,   516,   493,  1425,  2387,  2388,   259,   522,  1430,
     487,   461,   203,  1560,  1586,    90,    91,   157,   265,   159,
     359,  1539,   391,  1541,  1445,   516,   516,  1599,   367,  2432,
     326,   522,   522,  1465,  1466,   395,  1547,   289,  2441,     1,
    1472,   232,  1474,   290,   837,  1771,   354,   470,  1551,  1481,
       8,   265,   845,   846,   404,   209,   210,  1560,  1561,   409,
     348,  1493,  1494,  1465,  1466,  1791,  1569,  1585,   463,   461,
    1472,    57,  1474,   347,   234,   277,   290,   234,    64,    37,
     265,     0,   334,   468,  1667,    47,   251,   252,   473,  1583,
     883,  1674,  1494,   516,  1597,   249,   250,  1608,  1645,   522,
     163,    63,  1523,   166,  2764,   290,  2488,  1539,  1529,  1541,
     171,   461,  2678,  1728,  2517,  1536,   424,   509,   513,    28,
       9,   914,  2525,   483,  1627,  1643,  2692,  2175,  2176,  1561,
     235,   206,  1635,   190,    54,    55,   296,  1569,   295,  2584,
     300,   103,  1645,   300,  1727,  1728,  1649,   461,   508,     9,
     510,  1583,     1,  1585,   259,  1576,   213,   359,   414,   361,
     235,    50,   470,   956,   414,   461,   516,   228,   311,  2476,
      90,   492,  1465,  1466,   967,   236,    23,    24,   971,  1472,
     414,  1474,   512,  1798,  1799,   515,   979,   107,  1481,  1586,
     511,    40,    41,    42,    43,    44,  2503,   117,    58,   790,
     791,  1494,   345,  1635,  1727,  1728,   215,   312,  1731,   314,
     172,  1643,  1465,  1466,   522,  1798,  1799,  1649,   127,  1472,
     139,  1474,    11,   366,   143,   464,  1836,    76,    77,  2345,
    2278,   487,   463,  1635,   297,   318,   299,   487,   215,   322,
     468,  1494,  1663,   474,   206,   473,   329,   330,  1669,   215,
     259,   326,   402,   487,   337,    55,  1677,   340,   229,   162,
     269,   322,   345,   166,   347,   512,   349,   350,   351,   352,
      59,   461,  1994,   235,  1777,  1798,  1799,   359,  1825,   361,
     242,  1515,   259,   202,  1682,   271,   369,  1934,   143,   179,
      90,   253,   269,   259,  2406,    11,   139,   216,   217,   107,
     190,  2413,  2414,   269,  1725,  1726,   215,   107,    97,   117,
      99,   465,   101,   467,   179,   163,   461,   117,   166,   179,
     109,  2751,  1825,   213,   461,   408,   215,   410,  2744,  2745,
     413,  2761,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   458,  1635,    59,    11,   354,  1929,   454,   455,  2765,
     259,   468,   312,   243,   314,   215,   473,   464,   247,   248,
     269,   347,   756,   757,   758,   118,   119,   120,  2784,  1801,
     259,  1803,   123,   402,   283,   240,   165,   354,   243,   458,
     269,    97,  1635,    99,   244,   101,   461,   781,   354,   468,
    2793,   459,    59,   109,   473,  2811,   461,   359,   360,   259,
     468,   508,   359,   428,   361,   473,   326,   432,  1840,   269,
     330,   331,   374,   402,   376,   424,   175,   461,   404,  2002,
     461,   504,  1969,   409,  1109,   344,   458,  1112,   425,   348,
      97,  2003,    99,  1118,   101,   461,   468,  1122,   766,   767,
     523,   473,   109,  1128,   423,   354,  1878,   424,  2174,   165,
       9,     9,   309,    12,   374,  1876,    15,    16,   424,   459,
     297,   470,   299,   461,   255,   354,   257,   461,   468,   389,
     390,   260,   255,   473,   257,   461,   792,   793,   794,   562,
     496,   497,   498,   499,    26,   359,   335,   361,   241,  1282,
     573,   461,   383,   470,   354,   255,   461,   257,   165,   461,
     461,   350,   255,   496,   497,   498,   499,   516,   496,   497,
     498,   499,    66,   522,    68,   424,  2043,   306,   427,   428,
     489,    35,   491,  1944,    38,    83,   407,   343,  2175,  2176,
     431,    45,    46,   518,   516,   424,   619,   413,   516,   235,
    2043,   413,   100,    58,   260,   522,  1473,   509,  1475,   377,
     633,  1478,  1479,  1480,   516,   638,   522,  1484,  2076,   221,
    2078,   259,  2065,   461,   424,   461,   516,  1988,  1495,  1496,
    1991,  2181,   839,   840,   841,   842,   259,  1998,    92,   516,
     516,   470,  1905,  1906,  1907,  1908,   456,   340,   341,   342,
     306,   402,   264,   260,   461,   461,  2179,   409,   418,    64,
      60,    69,   355,  2186,  2025,   516,   516,   461,   131,   398,
     470,   198,   311,   522,  2117,   132,   472,   170,   478,   472,
     472,  2168,  2125,   457,   707,  2128,   472,  2743,   472,  2026,
    2027,  2278,   472,   522,   472,   456,   194,   195,   196,   306,
     472,   472,   472,   472,  2076,   203,  2078,   161,   472,   133,
     393,   134,   441,   135,   359,   136,   516,   215,   137,   102,
     138,   744,   522,   451,  2511,   507,   472,   516,   141,   456,
      49,   412,   461,   455,   452,   455,   449,   144,   192,   198,
    2101,   145,   398,  2266,   146,   511,   147,    31,   274,   166,
     148,   774,    49,   149,   447,   150,   198,  2307,   151,   113,
     214,   259,   152,   261,   262,   263,   461,   402,   258,   267,
     317,   269,   516,   461,   516,   409,  2326,  2327,   259,   516,
    2330,   280,   281,  2270,   461,   441,   108,   516,   259,   259,
     461,   398,   478,   418,   317,   110,   472,  2309,   456,   516,
     516,   516,   205,  2246,   383,   461,   226,   306,   307,   346,
     308,   259,  2335,   275,   268,   299,  2259,   166,   129,   513,
     177,   513,   373,   846,   456,   515,   169,   130,   456,   456,
      49,   198,   231,   402,   441,    24,    25,   231,  2199,   461,
     374,   461,   461,    86,    86,  2206,  2207,  2208,  2209,   303,
    2373,   464,  2402,  2214,    23,   461,   354,  2365,   452,   275,
     516,   235,   408,   201,   347,  1598,    73,   259,   516,   323,
     461,   894,   521,   520,  2397,   240,   431,    66,  2239,    68,
     458,    70,  2219,   458,   458,   458,   384,   458,   911,   304,
     279,   914,   458,   458,  2381,   458,   456,   456,   387,   234,
     205,   370,   925,  2240,  1637,  1638,   205,    17,   452,   516,
     140,   129,   300,   373,  2464,   104,   105,   106,   456,    49,
     125,   142,   205,   314,     8,   198,   424,   130,   513,   952,
     513,   385,   312,  2483,   431,   205,   461,   456,   436,   437,
       9,     7,    87,  2493,  2494,   399,   461,   397,   275,   402,
      22,   311,   447,   191,   333,    47,   979,  2318,   304,    57,
     418,     8,   302,   419,   418,   154,   205,   156,   509,   509,
    2331,  2521,   470,    49,   163,   409,   240,   166,   319,   321,
     265,   315,   480,  2344,   335,   295,   318,   114,   461,   206,
     402,   259,    45,   511,   446,   516,   516,   232,    26,   205,
     461,   205,   103,   501,   299,   369,  2343,   369,   506,     8,
      37,   387,    65,    66,    67,    68,   514,   466,   516,    49,
     265,   301,   221,   503,   522,   240,  2617,  2470,  2515,    96,
     484,  2581,   471,  2556,   296,   158,   461,   513,   391,   235,
    2706,   516,   456,   191,   257,    57,   431,  1070,    39,   410,
     259,   265,    49,   111,   344,   265,   522,   265,    53,   456,
      26,   408,  2549,     4,   265,  2615,   255,   336,   257,    17,
     452,   410,   110,   418,  1807,   461,   198,   344,    19,   356,
     455,   492,   452,   259,   461,   274,   347,   108,    29,   461,
     427,   115,   461,   190,     7,   426,   375,  2647,   461,   411,
     226,    30,  2463,   461,   463,   515,  2549,   516,  1131,   223,
     115,   344,  1135,   461,   440,   206,   314,   311,   178,  2562,
    2587,    57,  2565,    64,   206,  1148,  2487,   456,  1151,    30,
     259,    32,   513,   213,    35,   224,   120,    38,   516,   212,
     513,   198,    49,   318,  2587,    46,  2507,  2508,   326,     7,
      58,   433,    55,    81,  2597,    60,    53,  1056,    52,   212,
     204,   395,  1389,   219,    65,  1053,    67,  1190,  1370,   717,
    1035,  2532,  2533,  2467,  2218,  2205,  2402,  2644,  2213,   688,
    2703,  2219,  2543,  2396,  2508,   238,  2198,  2548,   674,  2167,
    2791,    92,  2482,  2485,  2509,  2638,  2613,  2778,  2803,  2270,
    2547,  2644,   255,  2755,   257,  2370,  2547,  2645,  2645,   241,
     111,  1544,    65,  1074,  1436,  1142,   504,   803,  2579,  1242,
    1243,  1244,  1542,  1770,  1769,   805,  1181,  2750,   537,  2590,
     851,  2754,  1203,  1546,   558,   288,   854,   897,  1817,   904,
    1569,  1231,  1830,  1829,  2605,   595,  2607,   915,  1586,   601,
    2611,  1597,  1261,  1311,  1611,  1291,   945,   310,   352,  1638,
     631,   648,  1310,  1881,   453,   633,  1310,  2710,  2503,   994,
    1414,  1412,   834,  1490,  1886,   833,  1489,  1875,  1874,   332,
    1303,  2249,   223,  2102,  1892,   338,  1891,  1654,  1170,  2812,
    1169,   192,  1631,  2630,   883,  1631,   619,   799,   199,   200,
    1631,  2744,  2745,  1631,  1977,  1278,  1379,  2549,  2669,  2670,
    1022,  1374,   514,   214,   255,   504,  2549,   473,  2172,  2356,
    2211,  2457,  2765,  2684,   265,  1827,  2730,   516,  2689,  2690,
    1298,  1588,  1558,  1047,  2777,  2778,  1686,  2621,  1325,  2452,
    2746,  2784,    -1,    -1,  2705,   246,    -1,  2708,  2709,    -1,
      -1,    -1,    -1,   719,   255,  2088,  2089,    -1,    -1,    -1,
     413,    -1,    -1,    -1,  2807,   266,  2099,   268,  2811,   422,
      -1,    -1,  2744,  2745,   275,    -1,    -1,    -1,    -1,   320,
    2741,    -1,    -1,    -1,   325,    -1,   439,    -1,    -1,   290,
     291,    -1,    -1,  2765,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2744,  2745,    -1,    -1,    -1,    -1,   461,    -1,
      -1,    -1,  2784,    -1,    -1,    -1,    -1,    -1,   359,    -1,
      -1,    -1,   323,  2765,    -1,    -1,   367,    -1,    -1,   482,
      -1,    -1,    -1,    -1,    -1,   336,    -1,    -1,   379,  2811,
      -1,    -1,  2784,    -1,    -1,    -1,    -1,    -1,    -1,   502,
      -1,   352,   353,    -1,  1477,    -1,   509,    -1,   511,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   409,  2811,
    1493,   412,    -1,    -1,    -1,    -1,    -1,   378,    -1,   420,
      -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,    -1,
     431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,
      -1,  2234,   403,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,  2744,  2745,    -1,    -1,    -1,  1539,   418,  1541,    -1,
     461,   100,    -1,   464,     1,    -1,     3,    -1,     5,    -1,
      -1,    -1,  2765,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,   445,    -1,    -1,    -1,    -1,    -1,
      -1,  2784,    -1,   454,    -1,    -1,    -1,    -1,    -1,    -1,
    1583,    -1,  1585,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,  2811,    -1,
      -1,    -1,    -1,   484,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   494,    -1,    72,    -1,    -1,    75,   500,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,   515,   194,   195,   196,    -1,    -1,
    1643,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1656,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,   122,    -1,    -1,    -1,    -1,
    1673,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,
     259,   158,   261,   262,   263,    -1,   163,   164,   267,   166,
      -1,    -1,   169,    -1,    -1,    -1,  1719,  1720,  1721,  1722,
    1723,    -1,    -1,    -1,  1727,  1728,  1729,    -1,  1731,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,   308,
     207,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
     227,    -1,    -1,   230,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1788,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1797,  1798,  1799,  1800,  1801,    -1,
    1803,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,   272,    -1,    35,    -1,   276,
      38,   278,    -1,    -1,    -1,   384,    -1,    45,    46,    -1,
      -1,   288,    -1,  1836,    -1,    -1,    -1,  1840,   295,   296,
     297,    -1,   299,   300,   301,   302,    -1,    65,     1,    67,
       3,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,   316,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,   329,    -1,    92,  1878,    -1,   436,   437,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
     357,   358,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,   480,    75,    -1,   381,   382,    -1,    -1,    -1,    -1,
      -1,   388,  1935,    -1,    -1,   392,    89,    -1,    -1,    -1,
      -1,    -1,   501,   161,   401,    -1,    -1,   506,    -1,    -1,
      -1,    -1,    -1,    -1,   411,   514,    -1,   516,    -1,   112,
      -1,    -1,   419,   420,    -1,    -1,    -1,   120,    -1,   122,
      -1,    -1,   429,    -1,   192,    -1,    -1,   434,   435,    -1,
      -1,   438,    -1,   440,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   448,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,
     153,    -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,   471,    -1,   169,    -1,    -1,    -1,
      -1,    -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,   486,
      -1,    -1,    -1,    -1,   491,    -1,    -1,   255,    -1,    -1,
      -1,  2044,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,
     268,   204,    -1,    -1,   207,   208,   513,   275,    -1,    -1,
      -1,    -1,   519,    -1,    -1,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   225,  2076,   227,  2078,    -1,   230,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2096,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,   272,
      -1,    -1,    -1,   276,    -1,   278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    -1,    -1,    -1,   385,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,  2181,    -1,
       1,   399,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,  2197,  2198,    -1,    18,    -1,    -1,
     418,    -1,    -1,    -1,   357,   358,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   381,   382,
      51,    52,    -1,    -1,    -1,   388,    -1,    -1,    -1,   392,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   401,    -1,
      -1,    72,    -1,    -1,    75,    -1,    -1,    -1,   411,    -1,
      -1,    -1,    -1,    -1,    -1,  2268,   484,   420,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,   495,    -1,    -1,
      -1,   434,   435,    -1,    -1,   438,    -1,   440,    -1,    -1,
      -1,   112,    -1,    -1,    -1,   448,    -1,   515,    -1,   120,
      -1,   122,    -1,    -1,  2307,    -1,    -1,    -1,   461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2324,    -1,  2326,  2327,    -1,   479,  2330,    -1,    -1,
      -1,    -1,   153,   486,    -1,    -1,    -1,    -1,   491,  2342,
      -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,
      -1,    -1,    -1,   204,  2387,  2388,   207,   208,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,  2402,
      -1,    -1,  2405,  2406,   225,    -1,   227,   100,    -1,   230,
    2413,  2414,  2415,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2427,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,   276,    -1,   278,    -1,    -1,
      -1,  2464,    -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,
       1,    -1,     3,  2476,     5,    -1,    -1,    -1,    -1,    10,
    2483,    -1,    -1,    -1,    -1,  2488,    -1,    18,    -1,    -1,
    2493,  2494,    -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,
    2503,   194,   195,   196,    -1,    -1,    -1,    -1,   329,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2521,    -1,
      51,    52,   215,    -1,    -1,    -1,  2529,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,   357,   358,    -1,    -1,
      -1,    72,    -1,    -1,    75,    -1,    -1,   368,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
     381,   382,    -1,    -1,    -1,    -1,   259,   388,   261,   262,
     263,   392,    -1,    -1,   267,    -1,   269,    -1,  2581,    -1,
     401,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
     411,   122,    -1,    -1,    -1,  2598,    -1,    -1,    -1,   420,
    2603,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,
      -1,    -1,  2615,   434,   435,   308,    -1,   438,    -1,   440,
      -1,    -1,   153,    -1,    -1,    -1,    -1,   448,    -1,    -1,
      -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,   169,    -1,
     461,    -1,    -1,    -1,  2647,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,
    2663,   354,    -1,    -1,  2667,   486,   197,    -1,    -1,    -1,
     491,    -1,    -1,   204,    -1,    -1,   207,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,    -1,
      -1,   384,    -1,    -1,   225,    -1,   227,    -1,   519,   230,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,   436,   437,   276,    -1,   278,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   316,    -1,   480,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   329,     5,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,   501,    -1,
      -1,    -1,    18,   506,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   514,    -1,   516,    -1,    -1,   357,   358,    -1,   522,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
     381,   382,    -1,    -1,    -1,    61,    -1,   388,    -1,    -1,
      -1,   392,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
     401,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     411,    -1,    -1,    89,    -1,    -1,    -1,     6,    -1,   420,
       9,    -1,    -1,    12,    13,    14,    -1,    -1,   429,    -1,
      -1,    20,    -1,   434,   435,    -1,   112,   438,    -1,   440,
      -1,    -1,    -1,    -1,   120,    -1,   122,   448,    -1,    -1,
      -1,    -1,    -1,   129,    -1,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   479,    -1,
      -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,   164,    -1,
     491,    -1,    -1,   169,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   519,    -1,
      -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,
      -1,   207,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,   227,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
     276,    -1,   278,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,   288,    -1,   203,    -1,    -1,    -1,    -1,    -1,
     209,   210,    -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,    -1,    -1,   329,    -1,    -1,    -1,    -1,    -1,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,   357,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
      -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,   287,    -1,
      -1,    -1,    -1,    -1,   293,    -1,   382,    -1,    -1,   298,
      -1,    -1,   388,    -1,    -1,    -1,   392,   306,    -1,   308,
      -1,    -1,    -1,    -1,   313,   401,    -1,    -1,    -1,   318,
      -1,    -1,    -1,    -1,    -1,   411,    -1,    -1,   327,    -1,
      -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,   337,    -1,
      -1,    -1,    -1,   429,    -1,    -1,    -1,    -1,   434,   435,
       6,    -1,   438,     9,   440,   354,    12,    13,    14,    -1,
      -1,    -1,   448,    -1,    20,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   384,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,
     486,    -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   424,    -1,    83,    -1,    -1,
      -1,    -1,    -1,   519,    -1,    -1,    -1,   436,   437,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,
      -1,   460,    -1,   462,    -1,    -1,   465,    -1,   467,   468,
     469,   470,    -1,   472,   473,    -1,   193,   194,   195,   196,
      -1,   480,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,   501,    -1,   160,    -1,    -1,   506,    -1,    -1,
      -1,    -1,    -1,    -1,   170,   514,    -1,   516,    -1,    -1,
      -1,    -1,    -1,   522,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,   194,   195,
     196,    -1,   259,    -1,   261,   262,   263,   203,    -1,    -1,
     267,    -1,    -1,   209,   210,    -1,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,   308,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
     256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   287,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,
       6,    -1,   298,     9,    -1,    -1,    -1,    -1,    -1,    -1,
     306,    -1,   308,    -1,    -1,    -1,    -1,   313,    -1,    -1,
      -1,    -1,   318,    -1,    30,    -1,    -1,   384,    -1,    35,
      -1,   327,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,   337,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,   354,    65,
      -1,    67,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,   436,
     437,    -1,    -1,    -1,    -1,    -1,    92,    -1,   384,    -1,
      -1,    -1,   449,    -1,   100,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,    -1,   256,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,
      -1,    -1,   274,   480,    -1,    -1,    -1,    -1,   424,    -1,
      -1,    -1,    -1,    -1,     6,   492,    -1,     9,    -1,    -1,
     436,   437,    -1,    -1,   501,    -1,    -1,    -1,    -1,   506,
      -1,    -1,    -1,    -1,   511,   161,   308,   514,   515,   516,
      -1,   313,   458,    -1,   460,    -1,   462,    -1,    -1,   465,
      -1,   467,   468,   469,   470,   327,   472,   473,    -1,    -1,
      -1,    -1,    -1,    -1,   480,    -1,   192,    -1,   194,   195,
     196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,   354,    -1,    -1,   501,    -1,    -1,   214,   215,
     506,    83,    -1,   365,    -1,    -1,    -1,    -1,   514,    -1,
     516,    -1,    -1,    -1,    -1,    -1,   522,    -1,   100,    -1,
      -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,   255,
     256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,   268,   269,    -1,    -1,   418,    -1,   274,   275,
      -1,    -1,   424,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,   470,    -1,
      -1,   327,   194,   195,   196,    -1,    -1,    -1,   480,    -1,
     336,   203,    -1,   205,    -1,   487,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,   354,   501,
      -1,    -1,    -1,    -1,   506,    83,    -1,   509,    -1,    -1,
      -1,    -1,   514,    -1,   516,    -1,    -1,    -1,    -1,    -1,
     522,    -1,   100,    -1,    -1,    -1,   248,    -1,   384,   385,
      -1,    -1,   254,    -1,   256,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,   399,    -1,   267,    -1,   269,    -1,    -1,
      -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   418,     6,    -1,    -1,     9,    -1,   424,    -1,
     292,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
     436,   437,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,   480,   203,    -1,    -1,   484,    -1,
      -1,    -1,   354,    -1,    -1,    -1,    -1,   215,    -1,   495,
      83,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,
     506,    -1,    95,    -1,    -1,    -1,    -1,   100,   514,   515,
     516,   383,   384,    -1,    -1,    -1,   522,    -1,    -1,    83,
     248,    -1,    -1,    -1,    -1,    -1,   254,    -1,   256,    -1,
      -1,   259,    -1,   261,   262,   263,   100,    -1,    -1,   267,
      -1,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,   113,
      -1,    -1,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,   327,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,   480,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,    -1,    -1,    -1,   354,    -1,    -1,   501,
     194,   195,   196,    -1,   506,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   514,   515,   516,    -1,    -1,    -1,    -1,    -1,
     522,   215,    -1,    -1,    -1,   248,   384,    -1,    -1,    -1,
      -1,   254,    -1,   256,    -1,    -1,   259,   231,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,     6,    -1,    -1,
       9,   274,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,    -1,   256,    -1,    -1,   259,   424,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,    -1,    -1,   436,   437,
     274,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   327,   463,    -1,    -1,    -1,    -1,
      -1,    -1,   470,    -1,   308,    -1,   474,    -1,    -1,    -1,
      -1,    -1,   480,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,   354,    -1,   327,    -1,     6,    -1,    -1,     9,    -1,
      -1,   100,    -1,   501,    -1,    -1,    -1,    -1,   506,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,   516,    -1,
     354,   384,    -1,    -1,   522,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,   436,   437,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,   100,
     424,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,   436,   437,   203,    -1,    -1,   470,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,   480,    -1,    -1,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,   501,    -1,
      -1,    -1,    -1,   506,    -1,    -1,   480,    -1,    -1,   248,
      -1,   514,    -1,   516,    -1,   254,    -1,   256,    -1,   522,
     259,    -1,   261,   262,   263,    -1,    -1,   501,   267,    -1,
     269,    -1,   506,    -1,    -1,   274,    -1,    -1,    -1,    -1,
     514,    -1,   516,   194,   195,   196,    -1,    -1,   522,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,   313,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,
      -1,     6,    -1,   254,     9,   256,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,   354,   267,    -1,   269,    -1,
      -1,    -1,    -1,   274,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,   196,    -1,    -1,    -1,   327,    -1,    83,   203,
      -1,    -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,
      95,   215,    -1,    -1,    -1,   100,    -1,   436,   437,    -1,
      -1,    83,    -1,   354,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,   470,   256,   384,    -1,   259,    -1,   261,   262,   263,
      -1,   480,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,
     274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   501,    -1,    -1,    -1,    -1,   506,    -1,    -1,
      -1,    -1,    -1,   424,    -1,   514,    -1,   516,    -1,    -1,
      -1,    -1,    83,   522,   308,   436,   437,    -1,    -1,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,   100,
      -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,
     215,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,   470,
      -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   480,
     354,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,
     501,   256,    -1,    -1,   259,   506,   261,   262,   263,    -1,
     384,    -1,   267,   514,   269,   516,   248,    -1,    -1,   274,
      -1,   522,   254,    -1,   256,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,
      -1,    -1,   274,   194,   195,   196,    -1,    -1,    -1,    -1,
     424,    -1,   203,   308,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   436,   437,   215,    -1,    -1,     6,    -1,    -1,
       9,    -1,   327,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,   327,   470,   248,    -1,   354,
      -1,    -1,    -1,   254,    -1,   256,   480,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,
      -1,    -1,   354,   274,    -1,    -1,    -1,   501,    -1,   384,
      -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     514,    -1,   516,    -1,    83,    -1,    -1,    -1,   522,    -1,
      -1,    -1,   384,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,   100,   313,    -1,    -1,    -1,    -1,    -1,    83,   424,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,
      -1,   436,   437,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   354,   436,   437,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   456,   480,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,   470,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   501,    -1,   480,    -1,
      -1,   506,    -1,    -1,    -1,   194,   195,   196,    -1,   514,
      -1,   516,    -1,    -1,   203,    -1,    -1,   522,    -1,   501,
      -1,    -1,    -1,   424,   506,    -1,   215,    -1,    -1,   194,
     195,   196,   514,   198,   516,   436,   437,    -1,   203,    -1,
     522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   254,    -1,   256,    -1,   470,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,   480,
     269,    -1,    -1,   248,    -1,   274,    -1,    -1,    -1,   254,
      -1,   256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,
     501,    -1,   267,    -1,   269,   506,    -1,    -1,    -1,   274,
      -1,    -1,    -1,   514,    -1,   516,    -1,    -1,    -1,   308,
      -1,   522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,     6,    -1,    -1,     9,   327,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,    -1,   354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,
      -1,    -1,    -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   418,
      -1,    -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,   436,   437,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,
      -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   436,   437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   470,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   480,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,
      -1,   254,    -1,   256,    -1,   470,   259,    -1,   261,   262,
     263,    -1,   501,    -1,   267,   480,   269,   506,    -1,    -1,
      -1,   274,   194,   195,   196,   514,    -1,   516,    -1,    -1,
      -1,   203,    -1,   522,    -1,    -1,   501,    -1,    -1,    -1,
      -1,   506,    -1,   215,    -1,    -1,    -1,    -1,    -1,   514,
      -1,   516,    -1,    -1,    -1,   308,    -1,   522,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   327,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,    -1,   256,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,
      -1,   354,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   384,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   354,   436,   437,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,   384,    -1,    -1,    -1,    -1,   470,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   480,    -1,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,   501,    -1,
      -1,    -1,   424,   506,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   514,    -1,   516,   436,   437,    -1,    -1,    -1,   522,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   480,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,   501,
      -1,    -1,    -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,
      -1,   177,   514,    -1,   516,   181,   182,   183,   184,   185,
     522,    -1,   188,   189,    -1,    -1,   192,    -1,    -1,    -1,
      -1,    -1,   198,    -1,   200,    -1,    -1,    -1,    -1,    -1,
     206,    -1,    -1,    -1,    -1,   211,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,   244,    -1,
     246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    21,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,   323,   324,    39,
      40,    41,    42,    43,    44,    45,   332,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   350,    92,   352,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   378,    -1,    -1,    -1,    -1,    83,    -1,   385,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,   403,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,   413,    -1,   415,
     416,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,
     456,    -1,   172,   200,    -1,   461,    -1,   177,    -1,    -1,
     466,   181,   182,   183,   184,   185,    -1,   214,   188,   189,
      -1,    -1,   478,    -1,    -1,    -1,    -1,    -1,   484,    -1,
      -1,    -1,   488,   489,   490,    -1,   206,    -1,   194,   195,
     196,    -1,    -1,    -1,    -1,    -1,   502,   203,    -1,   246,
      -1,   507,   222,   509,    -1,    -1,    -1,    -1,    -1,   215,
     516,    -1,    21,    -1,    -1,   235,    -1,    -1,   238,   266,
      -1,   268,    -1,    -1,   244,    -1,    -1,    36,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,   248,   290,   291,    -1,    -1,    -1,   254,    -1,
     256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
     280,   267,    -1,   269,    -1,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,   324,   352,   353,    -1,    -1,    -1,
      -1,   120,   332,    -1,    -1,   335,    -1,    -1,    -1,    -1,
      -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     350,   378,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,
      -1,    -1,    -1,   363,    -1,    -1,    -1,    -1,   354,    -1,
      -1,   371,   399,    -1,    -1,    -1,   403,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   418,   181,   182,   183,   184,   185,    -1,   384,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   413,    -1,   415,   416,   417,   445,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   454,    -1,    -1,
      -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,   424,    -1,
      -1,    -1,   442,    -1,    -1,    -1,   235,    -1,    -1,   238,
     436,   437,    -1,    -1,    -1,   244,    -1,   484,    -1,    -1,
      -1,   461,    -1,    -1,    -1,    -1,    -1,   494,    -1,    -1,
      -1,    -1,   458,   500,    -1,    -1,    -1,    -1,   478,    -1,
      -1,    -1,   468,    -1,   470,    -1,   472,   473,   488,   489,
     490,   280,    -1,    -1,   480,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,   509,
      -1,    -1,    -1,    -1,    -1,   501,   516,    -1,    -1,    -1,
     506,   310,    -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,
     516,    -1,    -1,    -1,    -1,   324,   522,    -1,    -1,    -1,
      -1,    -1,    -1,   332,    -1,    -1,   335,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,   350,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,   363,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   413,    -1,   415,   416,   417,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    83,    -1,
      -1,    -1,    -1,   442,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,   478,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   488,
     489,   490,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,
     183,   184,   185,   502,    -1,   188,   189,    -1,    -1,   192,
     509,    -1,    -1,    -1,    -1,   198,    -1,   200,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,   211,    -1,
      -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      39,    40,    41,    42,    43,    44,    -1,    -1,   193,   194,
     195,   196,   235,    -1,    -1,   238,    -1,    -1,   203,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    -1,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    -1,   268,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,
      -1,   120,   267,    -1,    -1,    -1,    -1,   310,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     323,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   332,
      -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,   350,    -1,   352,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   181,   182,   183,   184,   185,    -1,    -1,   188,
     189,    -1,    -1,    -1,    -1,   378,    -1,   194,   195,   196,
      -1,    -1,   385,    -1,    -1,    -1,   203,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,
     403,    83,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
     413,    -1,   415,   416,   417,    -1,    -1,    -1,   100,   384,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,   256,
      -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,
     267,    -1,   269,   456,    -1,    -1,    -1,    -1,   461,    -1,
      -1,   280,    -1,   466,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   436,   437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   484,    -1,    -1,   449,   488,   489,   490,    -1,    -1,
      -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   502,
      -1,    -1,    83,    -1,   507,   324,   509,    -1,    -1,    -1,
     327,    -1,   194,   195,   196,   480,   335,    -1,    -1,   100,
      -1,   203,    -1,    -1,    -1,    -1,    -1,   492,    -1,    -1,
      -1,   350,    -1,   215,    -1,    -1,   501,   354,    -1,    -1,
      -1,   506,    -1,    -1,    -1,    -1,   511,    -1,    -1,   514,
     515,   516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   248,   384,    -1,    -1,
      -1,    -1,   254,    -1,   256,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   415,   416,   417,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,   424,    -1,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,   100,   436,
     437,    -1,   203,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,
      -1,   458,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,
      -1,   468,    -1,   470,    -1,   472,   473,    -1,    -1,    -1,
      -1,    -1,    -1,   480,    -1,    -1,    -1,   248,    -1,   488,
     489,   490,   354,   254,    -1,   256,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,   501,    -1,   267,    -1,   269,   506,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,   516,
      -1,    -1,   384,    -1,    -1,   522,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   424,    -1,    -1,    -1,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,
      -1,    -1,   444,    -1,    -1,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,   354,   256,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,   468,   269,   470,    -1,
     472,   473,    -1,    -1,    -1,    83,    -1,    -1,   480,    -1,
      -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   501,
      -1,    -1,    -1,    -1,   506,    -1,   308,    -1,    -1,    -1,
      -1,    -1,   514,    -1,   516,    -1,    -1,    -1,    -1,    -1,
     522,    -1,    -1,   424,    -1,   327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   436,   437,    -1,    -1,    -1,
      -1,    -1,    -1,   444,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   468,    -1,   470,
      -1,   472,   473,    -1,    83,    -1,    -1,    -1,    -1,   480,
      -1,    -1,   384,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,   100,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
     501,    -1,    -1,    -1,    -1,   506,    -1,   215,    -1,    -1,
      -1,    -1,    83,   514,    -1,   516,    -1,    -1,    -1,    -1,
      -1,   522,   424,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,    -1,   256,    -1,
      -1,   259,    -1,   261,   262,   263,   458,    -1,    -1,   267,
      -1,   269,    -1,    -1,    -1,    -1,   468,    -1,   470,    -1,
     472,   473,    -1,    -1,    -1,    -1,    -1,    -1,   480,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,   501,
     308,    -1,    -1,    -1,   506,    -1,   215,    -1,    -1,    -1,
      -1,    83,   514,    -1,   516,    -1,    -1,    -1,    -1,   327,
     522,    -1,    -1,   194,   195,   196,    -1,    -1,   100,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,   248,
      -1,    -1,    -1,    -1,   215,   254,   354,   256,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   384,   248,    -1,    -1,
      -1,    -1,    -1,   254,    -1,   256,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   424,    -1,   327,    -1,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,   436,   437,
      -1,   203,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,   215,    -1,   354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,
     468,    -1,   470,    -1,   472,   473,    -1,    -1,    -1,    -1,
      -1,    -1,   480,    -1,    -1,   384,   248,    -1,    -1,    -1,
      -1,    -1,   254,   354,   256,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,   501,    -1,   267,    -1,   269,   506,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,   516,   380,
      -1,    -1,    -1,   384,   522,   424,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   436,   437,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   424,    -1,   327,    -1,    -1,    -1,    -1,
      -1,   470,    -1,   472,    -1,   436,   437,    -1,    -1,    -1,
      -1,   480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   501,    -1,    -1,    -1,    -1,   506,    -1,   470,
      -1,    -1,    -1,    -1,    -1,   514,    -1,   516,    -1,   480,
      -1,    -1,   384,   522,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     501,    -1,    -1,    -1,    -1,   506,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   514,    -1,   516,    -1,    -1,    -1,    -1,
      -1,   522,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   480,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   501,
      -1,    -1,    -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   514,    -1,   516,    -1,    -1,    -1,    -1,    -1,
     522
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   526,   527,     0,   216,   217,   528,   529,   530,   531,
     532,   533,   534,   540,   123,   123,   530,   154,   539,   553,
     554,   202,   348,   541,   544,   461,   461,   123,   103,   668,
     670,    85,   555,   556,   545,   542,   539,   539,   461,   123,
     344,   825,   828,   464,   671,   402,   229,   619,   620,   309,
     423,   557,   558,   562,   461,   461,   143,   535,   536,   537,
     139,   538,   461,   123,   851,   852,   402,   672,   461,   402,
     175,   621,   461,   461,   425,   580,   562,   558,   259,   349,
     546,   546,   259,   349,   547,   537,   547,    56,   507,   829,
       1,     3,     5,    10,    18,    51,    52,    61,    72,    75,
      89,   112,   120,   122,   153,   164,   169,   197,   204,   207,
     208,   218,   225,   227,   230,   272,   276,   278,   288,   316,
     329,   357,   358,   368,   381,   382,   388,   392,   401,   411,
     420,   429,   434,   435,   438,   440,   448,   461,   479,   486,
     491,   519,   853,   854,   870,   875,   879,   884,   902,   905,
     909,   913,   914,   915,   920,   934,   938,   941,   955,   959,
     962,   965,   969,   970,   974,   984,   987,  1005,  1007,  1010,
    1014,  1020,  1032,  1040,  1041,  1044,  1045,  1049,  1054,  1055,
    1063,  1079,  1089,  1098,  1103,  1110,  1114,  1116,  1119,  1122,
    1125,  1152,   853,   461,   174,   400,   669,   673,   674,   676,
     461,   461,   623,   563,   559,   461,    11,    59,    97,    99,
     101,   109,   165,   260,   306,   398,   441,   516,   581,   582,
     583,   584,   585,   591,   600,   602,   607,   610,   611,   613,
     614,   615,   616,   617,   618,    26,   548,   548,   461,   461,
     831,   830,   383,   837,     3,     5,    10,    18,    51,    52,
      61,    72,    75,    89,   112,   120,   122,   129,   131,   132,
     133,   134,   135,   136,   137,   138,   140,   141,   142,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   164,
     169,   197,   204,   207,   208,   218,   225,   227,   230,   272,
     276,   278,   288,   316,   329,   357,   368,   382,   388,   392,
     401,   411,   420,   429,   434,   435,   438,   440,   448,   461,
     479,   486,   491,   519,  1299,   855,   871,   876,   880,   885,
     903,   906,   910,   916,   921,   935,   939,   942,   956,   960,
     963,   966,   205,   383,   894,   958,   971,   975,   985,   988,
    1006,  1008,  1011,   407,  1015,  1021,  1033,  1042,  1046,  1050,
    1056,  1064,  1080,  1090,   259,   354,   394,   424,   522,  1102,
    1104,  1111,   343,  1115,  1117,   840,  1120,  1123,  1126,  1153,
     518,   704,   706,   707,     1,   516,  1224,   237,   405,   622,
     624,    57,    64,   271,   347,   404,   409,   516,   564,   565,
     566,   567,   568,   569,   570,   572,  1308,  1370,   560,   572,
       1,   516,  1238,  1238,   431,   413,  1341,   235,  1322,  1322,
    1322,  1238,   413,  1322,    58,  1309,   586,   377,   573,   583,
     461,   584,   221,   601,   259,   461,   543,    49,   832,   833,
     834,  1307,   832,   313,   516,   461,   313,   516,   856,   858,
    1261,  1262,  1265,     6,     9,    83,    95,   100,   194,   195,
     196,   203,   215,   248,   254,   256,   259,   261,   262,   263,
     267,   269,   274,   308,   327,   354,   384,   424,   436,   437,
     470,   480,   501,   506,   514,   522,   872,  1218,  1243,  1244,
    1261,  1272,  1273,  1274,  1275,  1276,  1277,  1278,   248,   468,
     472,   473,   877,  1213,  1214,  1215,  1216,  1217,  1218,  1247,
    1261,  1273,  1275,   259,   881,   882,  1229,  1230,  1231,  1265,
     274,   430,   432,   886,   887,   259,   904,  1252,  1261,   907,
    1224,     6,   911,  1219,  1220,  1241,  1263,  1264,  1265,  1273,
     464,   917,  1224,   259,   313,   922,   923,   924,   925,   927,
    1243,  1252,  1261,   936,  1244,   259,   940,   463,   474,   943,
     944,   945,  1201,  1202,  1203,   201,   328,   329,   347,   402,
     957,   961,  1240,  1241,   964,  1265,   456,   967,  1350,  1244,
    1200,  1201,   976,  1240,   516,   986,  1225,   989,   990,  1261,
    1272,  1275,  1081,  1259,  1260,  1265,    95,  1009,  1244,  1012,
    1244,   171,   228,   236,   322,  1016,  1017,   193,   259,   515,
    1022,  1026,  1027,  1028,  1229,  1253,  1261,  1265,  1275,  1354,
    1034,  1224,  1043,  1221,  1265,  1047,  1224,  1051,  1221,     9,
    1057,  1222,  1265,   154,   243,   274,  1065,  1068,  1069,  1072,
    1073,  1074,  1075,  1076,  1077,  1078,  1226,  1227,  1240,  1258,
    1260,  1265,  1081,  1091,  1224,  1099,   113,  1105,  1106,  1107,
    1244,    95,  1112,  1243,  1118,  1225,   461,   516,   841,   842,
     845,   846,   851,  1121,  1261,  1124,  1224,  1127,  1261,  1154,
    1221,   402,   264,   760,   708,   709,   711,   721,  1286,   461,
     675,   461,   293,   317,  1294,   277,   396,   658,   659,   660,
     661,   663,   409,   418,    64,  1322,   461,   566,   461,   516,
     565,    60,  1322,   561,  1354,   592,  1322,  1322,  1322,  1233,
    1265,    69,  1233,  1322,  1322,  1233,   516,   603,   604,   605,
    1239,   259,   312,   314,   587,   589,   590,  1066,  1268,  1322,
     461,   461,   516,   549,  1322,   833,   418,   487,   835,   365,
     509,   826,   221,   311,  1360,   131,   869,   857,   198,   472,
    1266,  1267,   311,  1332,  1274,  1261,   472,   472,   472,  1280,
    1262,  1273,  1275,  1360,  1360,   472,   472,   472,   472,  1360,
     472,  1280,   132,   874,   456,   873,  1244,   457,   472,  1279,
     472,   472,  1262,  1273,  1275,  1217,  1261,  1213,  1217,    58,
     468,   473,   460,   469,   170,   226,  1289,   882,   456,  1360,
     133,   901,   259,  1253,  1252,  1224,   364,   485,   908,  1354,
    1366,  1332,   134,   912,   160,   462,  1220,  1358,   393,  1295,
    1266,  1267,   918,  1224,   135,   919,   359,  1338,   136,   933,
     166,   299,  1167,  1169,  1171,   925,  1242,  1243,   926,   496,
     497,   498,   499,   137,   937,    49,   231,   507,   888,   138,
     954,    17,   513,   946,   947,   948,   950,    12,    13,    14,
      20,   160,   170,   209,   210,   249,   250,   287,   293,   298,
     306,   313,   318,   337,   458,   460,   462,   465,   467,   468,
     469,   472,   473,  1204,  1205,  1206,  1207,  1208,  1209,  1210,
    1244,   102,   958,  1241,  1228,   451,  1348,   977,  1354,  1225,
      93,   373,   446,   991,   992,   994,   995,  1083,   472,  1266,
    1244,   456,   141,  1013,    49,  1017,   412,  1018,  1027,   142,
     461,  1023,  1025,   492,   511,   452,   455,   449,   144,  1039,
     288,   339,  1292,   198,  1155,   145,  1048,  1338,   146,  1053,
    1155,  1222,   147,  1062,   511,  1058,  1250,  1261,  1273,   166,
    1075,  1077,  1240,   456,  1227,   124,   456,   493,  1067,    31,
    1266,   148,  1097,   179,   240,   243,  1093,   894,  1100,  1244,
    1354,  1307,   149,  1109,   231,  1107,  1261,   150,  1113,   198,
    1225,   402,   461,   461,   198,   359,   361,  1339,   151,  1136,
     113,  1128,   152,  1159,  1155,   461,   402,   258,   762,   709,
     461,     1,   177,   516,   712,   713,   516,   677,   317,  1238,
     664,   359,   420,   421,   662,     1,   461,   660,  1322,   409,
    1268,   461,  1322,   516,  1234,   461,   108,  1322,   215,   259,
     269,   354,   424,   470,   522,   608,   609,  1271,  1233,   259,
     259,   478,   604,    22,   235,  1239,  1323,  1066,   235,   431,
    1334,  1322,    97,  1238,   574,   461,    73,   172,   362,   466,
     550,   551,   552,  1322,   418,   317,   836,   110,   838,  1265,
      30,   199,   275,   859,   860,   861,   863,   866,  1305,  1354,
      24,    25,    66,    68,    70,   104,   105,   106,   154,   156,
     163,   166,   255,   257,   453,   504,   516,   862,  1227,  1357,
    1211,  1213,   472,  1267,   153,   347,  1248,  1262,   456,  1211,
    1213,  1284,  1211,  1285,   458,  1211,   516,   516,  1213,  1283,
    1283,  1283,  1246,  1261,  1273,  1275,  1282,   516,  1246,  1281,
       6,  1219,  1244,  1265,  1273,   205,  1274,  1213,  1246,  1211,
     458,   226,  1290,  1214,  1214,  1215,  1215,  1215,   383,   878,
     346,   883,  1231,   888,   908,   265,   290,   191,  1315,  1262,
    1213,   275,  1296,  1267,  1224,   234,   300,  1193,  1194,  1196,
    1198,   848,   849,   848,  1170,  1171,  1168,  1169,   495,   863,
     866,   928,   929,   930,  1354,  1167,  1167,  1167,  1167,  1244,
    1219,  1244,   889,   945,    21,   463,   474,   951,   952,  1202,
     513,   948,   949,   513,   848,  1350,   235,  1205,   115,   968,
    1229,   129,   848,   972,     9,    12,    15,    16,   280,   281,
     306,   307,   978,   982,   177,  1250,     9,    58,   179,   244,
     478,   998,   999,  1000,   993,   994,   125,   314,   515,  1085,
    1333,  1369,   456,  1240,  1219,  1244,  1018,  1354,  1223,  1224,
     848,   169,  1029,  1200,  1030,  1031,  1261,  1229,     8,    37,
    1157,  1338,  1257,  1261,  1272,  1275,   231,  1035,  1052,  1354,
     130,  1059,  1261,  1059,   456,   456,   456,  1066,   153,   463,
     474,  1244,    49,    38,    46,   214,   246,   268,   323,   385,
     484,  1070,  1071,  1322,  1092,  1354,  1244,   162,   292,   418,
    1244,  1261,   198,  1219,  1244,   847,  1268,  1250,  1307,   231,
    1131,  1156,  1157,   705,   461,   402,   374,   764,   461,   461,
     710,    86,    47,    63,   103,   242,   253,   359,   360,   374,
     376,   461,   509,   678,   679,   681,   685,   686,   689,   690,
     696,   699,   701,   702,  1322,   625,   464,  1313,    23,  1303,
     461,  1268,   260,   443,   505,   571,  1234,   275,    28,   127,
     215,   259,   269,   283,   354,   424,   427,   428,   522,   593,
     594,   595,   598,   609,   452,   612,  1354,   408,   259,   606,
    1269,  1334,   235,  1238,  1238,   588,   589,   201,   575,   576,
     577,   552,   347,  1337,    73,    32,   111,  1268,  1322,   516,
     461,   827,   522,  1254,  1258,  1268,  1322,   163,   166,   297,
     299,  1160,  1162,  1163,  1165,  1166,   861,    65,    67,   255,
     336,   864,   865,  1356,    32,    35,    38,    46,    92,   111,
     192,   200,   214,   246,   266,   268,   290,   291,   323,   352,
     353,   378,   385,   399,   403,   418,   445,   454,   484,   494,
     500,   867,   868,  1160,   521,   520,  1250,  1160,   240,   431,
     304,   279,    71,   406,   458,  1212,   459,  1213,   259,  1249,
    1262,  1261,  1212,   458,  1212,   458,   458,  1212,   458,   458,
     458,  1212,   458,  1212,   458,  1332,   302,   419,  1172,  1174,
    1176,  1266,  1267,  1219,   459,   458,   458,   456,  1291,   878,
    1241,   456,  1229,   893,   894,   387,   370,  1172,  1322,   848,
     848,  1197,  1198,  1195,  1196,   850,    97,    98,   341,   516,
     931,  1227,   929,    35,    38,    45,    46,    92,   161,   192,
     214,   268,   303,   323,   385,   399,   418,   484,   932,   205,
    1172,   205,   890,   891,   892,  1307,    17,   452,   953,   321,
     951,  1333,   848,   129,   140,   973,  1350,   373,   979,  1350,
     456,    49,   999,  1001,  1250,     9,    58,   244,   478,   996,
     997,  1250,   125,    64,   409,  1086,  1355,    27,   116,   745,
     221,   319,  1318,  1240,  1172,   205,  1223,     9,   290,   357,
     657,   386,  1019,  1224,  1354,   142,  1024,     8,   198,  1035,
    1261,   130,  1182,  1185,  1193,   265,   290,   848,   513,   513,
    1060,  1061,  1250,   312,  1249,  1244,  1066,  1066,  1066,  1066,
    1066,  1066,  1066,  1066,  1071,   293,   298,  1094,  1095,  1096,
    1206,  1293,  1193,   247,   418,  1368,   431,  1346,  1346,  1108,
    1354,  1261,  1172,   205,   461,   456,     9,  1129,  1130,  1287,
    1132,  1261,  1108,  1132,  1052,     7,  1300,   706,   761,   461,
     402,   397,   809,   723,   714,  1322,    87,  1310,  1322,   359,
     361,  1365,  1365,  1322,  1310,  1322,   275,  1329,  1322,    22,
    1302,   311,   703,  1238,   172,   206,   626,   447,  1347,  1315,
      58,   517,  1364,   595,    17,   452,  1271,   333,  1269,  1238,
       9,   203,   516,   579,     1,   461,   577,    32,  1268,   839,
     840,    47,  1164,  1165,   848,  1161,  1162,   848,   304,  1330,
    1330,  1330,  1322,  1322,   868,    57,   418,   124,   493,  1322,
       8,  1301,  1160,  1213,   458,  1213,  1295,   444,  1279,   444,
    1279,  1233,  1279,  1279,  1279,  1246,   244,   478,  1279,  1262,
     848,   848,  1175,  1176,  1173,  1174,  1267,  1172,   458,  1213,
    1279,  1279,  1251,  1261,  1272,   166,   299,   471,   896,   898,
     900,     6,   231,   294,   313,   470,   895,  1321,    34,   284,
     285,   286,   351,   476,   477,   481,  1297,   851,  1322,   255,
     397,   130,   157,   159,   817,   818,  1312,  1322,   124,   493,
    1322,  1219,  1220,  1219,  1220,   891,   313,   835,    88,   365,
     509,   952,  1201,   848,  1261,   848,   509,   980,   981,   982,
     983,  1348,   509,  1251,  1250,    49,     8,    37,  1002,  1003,
    1004,   997,   191,  1002,   409,  1082,  1322,   240,  1324,   319,
    1219,  1019,   321,  1335,  1335,   315,   265,   290,  1031,  1244,
     220,  1036,  1354,   848,   295,  1186,  1187,   265,  1201,  1200,
    1060,  1206,  1261,  1207,  1208,  1209,  1210,  1213,  1101,  1244,
    1101,   301,   471,  1177,  1179,  1181,   335,  1295,  1219,   843,
    1251,   318,  1250,   114,  1133,   446,  1135,   158,   296,  1158,
    1188,  1190,  1192,  1194,   326,  1227,  1254,   706,   763,   461,
     402,    21,    36,    39,    40,    41,    42,    43,    44,    45,
      74,    76,    77,    78,    79,    80,    81,    82,   120,   181,
     182,   183,   184,   185,   188,   189,   222,   238,   280,   310,
     324,   332,   335,   350,   363,   371,   413,   415,   416,   417,
     442,   488,   489,   490,   502,   509,   724,   725,   726,   728,
     729,   730,   731,   732,   733,   734,   737,   749,   750,   751,
     752,   753,   758,   759,  1322,  1343,    26,   198,   722,  1304,
     206,  1268,   516,   640,  1322,  1302,   516,  1235,  1236,   313,
     426,  1361,   259,  1233,  1237,  1268,   511,  1322,   176,   216,
     516,   687,  1238,     4,    19,    29,   223,   255,   320,   325,
     359,   367,   379,   412,   420,   461,   464,   627,   628,   635,
     637,   639,   641,   642,   643,   644,   647,   648,   649,   650,
     651,   653,   654,   656,  1338,  1355,  1310,  1223,   596,   598,
     259,   232,    26,   578,   203,   232,   461,   840,  1254,  1254,
    1254,  1254,  1254,  1322,  1322,  1199,  1256,  1258,  1268,  1199,
    1254,   259,  1255,  1258,  1270,   458,  1172,   458,   848,   848,
     848,   899,   900,   897,   898,  1332,  1261,  1254,  1332,   255,
     397,  1254,  1199,  1199,  1254,  1172,   369,  1172,   369,  1244,
     981,   103,  1311,  1350,  1002,  1002,  1251,   466,  1320,  1320,
    1004,  1003,   228,   507,  1087,  1233,  1084,  1172,   387,    49,
     265,   240,  1037,   219,   239,   265,   290,   512,   848,   848,
     848,   848,   848,  1180,  1181,  1178,  1179,  1322,  1172,  1172,
     503,   844,  1137,  1130,   221,  1317,    96,  1134,  1317,  1177,
     848,   848,  1191,  1192,  1189,  1190,   255,   257,  1326,   706,
     765,   461,   247,   306,   414,   487,  1342,   487,  1342,   487,
    1342,   487,  1342,   487,  1342,   513,  1352,   391,  1340,   126,
    1268,  1262,  1265,   235,   245,   391,  1325,  1322,  1323,   172,
     206,   244,   478,   516,    50,   247,   248,   715,  1272,   456,
     684,   191,   700,  1236,   257,  1328,   456,  1309,  1317,   173,
     180,   395,   483,   508,   510,   697,   698,  1322,  1322,  1329,
    1338,   456,   507,  1351,   410,  1322,  1308,   114,  1324,  1324,
     290,   655,  1268,  1354,   431,   265,    39,  1306,  1322,   665,
     666,  1224,   597,   598,   259,   130,  1252,  1254,   255,   257,
    1367,  1261,  1220,  1220,    49,   111,  1002,  1244,  1244,   344,
    1223,   205,   322,  1088,  1265,  1244,  1322,  1038,  1183,  1185,
    1187,  1193,   265,   265,   265,  1261,  1138,   461,  1261,  1317,
    1261,   766,   810,   522,    53,   741,   456,   738,   452,   731,
     755,   756,  1272,    26,   727,   408,  1298,  1298,  1332,     1,
      40,    41,    42,    43,    44,   181,   182,   183,   184,   185,
     186,   187,   335,   350,   716,   717,   718,   719,   720,   732,
     733,  1262,   716,  1268,    58,   361,   680,  1232,  1233,   691,
    1268,   418,  1344,   259,   688,  1265,   688,  1322,  1324,   126,
     172,   632,   367,   648,  1322,  1322,  1322,  1322,  1303,   657,
    1322,  1329,   410,   640,   666,   336,   667,    17,   110,  1172,
    1172,  1244,  1322,  1223,   344,   492,  1261,  1186,  1184,  1185,
      30,   128,   167,   206,  1139,  1140,  1141,  1143,  1147,  1149,
    1150,  1151,  1305,  1315,  1261,   356,   767,   711,   721,   811,
     812,   813,  1317,   198,   739,  1268,   455,  1349,  1265,   754,
     756,   452,   259,  1308,   716,   461,  1233,    48,   475,   692,
     693,   694,   695,  1354,  1309,   198,   683,  1316,   126,   355,
     410,   636,  1322,   118,   119,   120,   241,   255,   340,   341,
     342,   355,   447,   629,   630,   631,  1237,   427,   652,  1233,
    1233,  1233,  1322,  1268,   598,   461,  1026,  1322,  1200,    37,
    1301,   347,   108,  1225,     1,   712,   813,   461,   516,  1268,
     738,   115,   740,   513,   757,  1353,  1272,  1237,  1237,   190,
     684,  1268,   652,   259,   634,  1265,   634,     7,   634,   634,
     259,   633,  1265,   422,   462,    33,   168,   270,   645,  1026,
     375,   426,  1345,   130,   429,  1148,  1333,   768,   461,   814,
     461,   226,   742,  1333,   743,   744,   411,   463,  1305,  1309,
    1288,  1369,  1313,  1322,  1232,   515,   646,   646,  1261,   162,
     166,  1359,     9,  1144,  1145,  1230,     1,   769,   815,   743,
    1233,   223,   746,   745,   456,  1322,  1237,   115,   682,   440,
     638,  1232,   265,   392,   344,  1336,   311,   345,   366,  1146,
    1145,   461,    62,    90,    91,   326,   461,   770,   771,   774,
    1322,  1378,    32,    35,    38,    45,    46,   161,   192,   198,
     200,   211,   214,   246,   255,   268,   310,   323,   352,   378,
     385,   403,   456,   466,   484,   507,   729,   730,   734,   749,
     751,   753,   816,   823,   824,  1322,  1356,   746,  1307,  1324,
    1272,  1333,   513,   314,  1333,   311,  1265,  1322,  1322,  1302,
     251,   252,  1327,   783,   206,   178,   772,  1314,  1322,   255,
     397,   817,   818,  1322,  1257,  1330,  1268,    57,  1261,  1261,
     206,  1330,   516,   747,   748,  1322,  1233,     9,   424,   522,
     599,   277,   359,   361,  1363,   171,   228,   236,   322,  1142,
    1223,  1252,  1322,  1302,   775,  1270,   711,   784,   773,  1261,
    1254,  1254,  1322,  1349,  1322,  1322,   748,  1232,  1274,  1363,
     776,   255,   257,  1362,   516,   712,  1261,   273,   334,   468,
     473,   819,   820,   821,  1252,   819,   820,   822,   179,   190,
     213,   243,   777,   778,   779,   780,   781,   782,  1270,   785,
    1254,  1254,   107,   117,  1371,  1322,  1322,    55,    90,  1371,
    1372,  1357,   786,  1322,  1270,  1270,   213,  1322,  1322,   212,
     255,   257,   288,   310,   338,   422,   439,   461,   482,   502,
     511,   729,   734,   735,   749,   751,   753,   787,   788,   792,
     793,   796,   797,   798,   799,   800,   801,   806,   807,   808,
    1356,  1357,  1270,  1270,  1270,   224,  1319,   304,   305,  1331,
    1302,   212,  1268,   513,  1322,  1332,  1322,  1322,  1261,   289,
     334,   802,   803,  1270,   334,   804,   805,  1270,  1331,  1302,
    1323,  1322,   738,  1200,  1247,  1245,  1247,    54,    90,   326,
     330,   331,   374,   389,   390,   789,  1371,  1372,  1373,  1374,
    1375,  1376,  1377,   120,   198,  1268,   803,  1268,   805,  1323,
     803,  1349,  1295,   380,   794,  1247,   190,   190,   213,   190,
     213,   178,   790,  1261,   790,  1247,   740,  1333,   318,   791,
     791,    49,   433,   736,   178,   795,  1261,   326,  1247,  1268
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   525,   527,   526,   528,   528,   529,   529,   530,   530,
     532,   531,   533,   534,   535,   535,   536,   536,   537,   538,
     539,   540,   540,   540,   542,   543,   541,   545,   544,   546,
     546,   547,   547,   548,   548,   549,   549,   550,   550,   550,
     550,   551,   551,   552,   552,   553,   554,   554,   555,   556,
     556,   557,   557,   557,   557,   557,   559,   558,   560,   560,
     561,   561,   563,   562,   564,   564,   564,   564,   565,   565,
     566,   566,   566,   566,   567,   568,   569,   570,   571,   571,
     571,   571,   572,   572,   573,   574,   573,   575,   575,   575,
     576,   576,   577,   577,   577,   578,   578,   579,   579,   580,
     580,   581,   581,   582,   582,   583,   583,   584,   584,   584,
     584,   584,   584,   584,   584,   584,   584,   584,   584,   586,
     585,   587,   587,   587,   587,   588,   588,   589,   590,   590,
     592,   591,   593,   593,   593,   593,   593,   593,   594,   594,
     595,   595,   596,   595,   597,   597,   598,   598,   598,   598,
     598,   598,   599,   599,   600,   601,   601,   602,   603,   603,
     604,   605,   605,   606,   606,   607,   608,   608,   609,   609,
     610,   611,   612,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   620,   621,   621,   622,   622,   623,   623,   625,
     624,   626,   626,   627,   627,   627,   627,   627,   627,   627,
     627,   627,   627,   627,   627,   627,   628,   628,   628,   628,
     628,   629,   629,   629,   630,   630,   630,   630,   631,   631,
     632,   632,   632,   633,   633,   634,   634,   634,   635,   636,
     636,   636,   637,   638,   638,   638,   639,   640,   641,   642,
     642,   642,   644,   643,   645,   645,   645,   646,   646,   646,
     646,   647,   647,   648,   648,   648,   648,   649,   650,   651,
     652,   652,   652,   653,   654,   655,   655,   656,   657,   657,
     657,   658,   658,   658,   659,   659,   660,   660,   661,   662,
     662,   662,   662,   664,   663,   665,   665,   666,   667,   667,
     669,   668,   670,   670,   671,   671,   672,   672,   673,   675,
     674,   674,   676,   676,   677,   677,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   679,   680,   680,
     680,   681,   681,   681,   682,   682,   683,   683,   684,   684,
     685,   686,   686,   687,   687,   688,   688,   689,   690,   691,
     691,   692,   692,   692,   693,   694,   695,   696,   697,   697,
     697,   697,   697,   698,   698,   699,   700,   700,   701,   702,
     702,   703,   703,   704,   705,   704,   706,   707,   706,   708,
     708,   709,   710,   709,   709,   711,   712,   712,   712,   713,
     714,   714,   715,   715,   715,   715,   716,   716,   716,   716,
     716,   716,   716,   716,   716,   716,   716,   716,   716,   717,
     717,   718,   718,   719,   719,   719,   720,   720,   721,   722,
     722,   723,   723,   724,   724,   724,   724,   724,   724,   724,
     724,   724,   724,   724,   724,   724,   724,   725,   726,   727,
     727,   728,   729,   730,   730,   731,   731,   731,   731,   731,
     731,   731,   731,   731,   731,   731,   731,   731,   731,   731,
     731,   731,   731,   731,   731,   731,   731,   731,   731,   731,
     731,   731,   731,   731,   731,   731,   731,   731,   731,   731,
     731,   732,   732,   733,   733,   734,   734,   735,   736,   736,
     737,   737,   738,   738,   739,   739,   740,   740,   741,   741,
     742,   742,   743,   744,   744,   745,   745,   746,   746,   747,
     747,   748,   749,   750,   751,   752,   754,   753,   755,   755,
     756,   756,   757,   757,   758,   758,   759,   759,   760,   761,
     760,   762,   763,   762,   764,   765,   764,   766,   766,   768,
     767,   769,   769,   769,   770,   770,   770,   770,   771,   772,
     773,   773,   774,   775,   775,   775,   776,   776,   777,   777,
     777,   777,   777,   778,   779,   780,   781,   782,   783,   783,
     785,   784,   786,   786,   787,   787,   787,   787,   787,   787,
     787,   787,   787,   787,   787,   787,   787,   787,   787,   787,
     788,   789,   789,   789,   789,   789,   789,   789,   790,   790,
     790,   791,   791,   792,   793,   794,   794,   795,   795,   796,
     797,   798,   799,   799,   800,   801,   801,   802,   802,   803,
     803,   803,   804,   804,   805,   805,   806,   807,   808,   809,
     810,   809,   811,   811,   812,   812,   813,   814,   813,   813,
     815,   815,   816,   816,   816,   816,   816,   816,   816,   816,
     816,   816,   816,   816,   816,   816,   816,   816,   816,   816,
     816,   816,   816,   816,   816,   816,   816,   816,   816,   816,
     816,   816,   816,   816,   816,   816,   816,   817,   817,   818,
     818,   819,   819,   820,   820,   821,   821,   821,   822,   822,
     822,   823,   824,   825,   826,   827,   825,   828,   825,   829,
     830,   829,   831,   829,   832,   832,   833,   834,   834,   834,
     835,   835,   835,   835,   835,   835,   836,   836,   837,   837,
     837,   838,   839,   838,   840,   840,   841,   841,   841,   841,
     841,   843,   842,   844,   844,   845,   846,   847,   847,   849,
     850,   848,   852,   851,   851,   853,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   855,   854,   857,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   858,   858,
     859,   859,   860,   860,   861,   861,   861,   861,   862,   862,
     863,   863,   863,   864,   865,   865,   866,   867,   867,   867,
     867,   867,   867,   867,   867,   867,   867,   867,   867,   867,
     867,   867,   867,   867,   867,   867,   867,   867,   867,   867,
     867,   867,   867,   867,   867,   868,   868,   869,   869,   871,
     870,   872,   872,   872,   873,   873,   874,   874,   876,   875,
     877,   877,   878,   878,   880,   879,   881,   881,   882,   883,
     883,   885,   884,   886,   887,   887,   887,   887,   888,   889,
     888,   890,   890,   891,   891,   892,   892,   892,   892,   893,
     893,   893,   893,   893,   894,   894,   895,   895,   896,   896,
     896,   897,   897,   898,   898,   899,   899,   900,   901,   901,
     903,   902,   904,   904,   906,   905,   907,   907,   908,   908,
     908,   908,   908,   910,   909,   911,   912,   912,   913,   914,
     916,   915,   917,   917,   918,   918,   919,   919,   921,   920,
     922,   922,   922,   922,   922,   923,   923,   924,   924,   926,
     925,   927,   927,   928,   928,   929,   929,   929,   929,   929,
     930,   930,   930,   930,   931,   931,   932,   932,   932,   932,
     932,   932,   932,   932,   932,   932,   932,   932,   932,   932,
     932,   932,   932,   933,   933,   935,   934,   936,   936,   936,
     936,   936,   937,   937,   939,   938,   940,   942,   941,   943,
     944,   944,   945,   945,   945,   946,   946,   947,   947,   948,
     949,   950,   950,   951,   951,   952,   952,   952,   952,   953,
     953,   954,   954,   956,   955,   957,   957,   957,   957,   957,
     957,   957,   958,   958,   960,   959,   961,   963,   962,   964,
     966,   965,   967,   968,   968,   969,   971,   970,   972,   972,
     972,   973,   973,   975,   974,   976,   977,   977,   978,   978,
     978,   979,   979,   980,   980,   981,   982,   982,   982,   982,
     982,   982,   982,   983,   983,   985,   984,   986,   986,   988,
     987,   989,   990,   990,   990,   991,   991,   991,   991,   993,
     992,   994,   995,   996,   996,   997,   997,   997,   997,   997,
     997,   998,   998,   999,   999,  1000,  1000,  1000,  1000,  1000,
    1001,  1002,  1002,  1002,  1002,  1002,  1003,  1004,  1006,  1005,
    1008,  1007,  1009,  1009,  1011,  1010,  1012,  1012,  1013,  1013,
    1015,  1014,  1016,  1016,  1017,  1017,  1017,  1017,  1018,  1018,
    1019,  1019,  1019,  1019,  1021,  1020,  1022,  1023,  1022,  1022,
    1024,  1024,  1025,  1025,  1026,  1026,  1027,  1027,  1027,  1027,
    1027,  1028,  1028,  1029,  1029,  1030,  1030,  1031,  1033,  1032,
    1034,  1035,  1035,  1036,  1036,  1036,  1036,  1036,  1036,  1036,
    1037,  1037,  1038,  1038,  1039,  1039,  1040,  1042,  1041,  1043,
    1044,  1046,  1045,  1047,  1048,  1048,  1050,  1049,  1051,  1052,
    1052,  1052,  1053,  1053,  1054,  1056,  1055,  1057,  1057,  1058,
    1058,  1059,  1059,  1060,  1060,  1061,  1062,  1062,  1064,  1063,
    1065,  1065,  1065,  1065,  1065,  1065,  1065,  1066,  1066,  1067,
    1067,  1068,  1069,  1070,  1070,  1071,  1071,  1071,  1071,  1071,
    1071,  1071,  1071,  1072,  1072,  1073,  1074,  1074,  1075,  1076,
    1076,  1077,  1077,  1078,  1080,  1079,  1082,  1081,  1083,  1083,
    1084,  1084,  1085,  1085,  1086,  1086,  1087,  1087,  1087,  1088,
    1088,  1088,  1090,  1089,  1091,  1092,  1092,  1093,  1093,  1093,
    1093,  1094,  1094,  1094,  1094,  1094,  1094,  1095,  1096,  1096,
    1097,  1097,  1099,  1098,  1098,  1100,  1100,  1100,  1100,  1100,
    1101,  1101,  1102,  1102,  1102,  1102,  1104,  1103,  1105,  1106,
    1106,  1107,  1107,  1107,  1108,  1108,  1109,  1109,  1111,  1110,
    1112,  1112,  1112,  1113,  1113,  1114,  1115,  1115,  1117,  1116,
    1118,  1118,  1120,  1119,  1121,  1123,  1122,  1124,  1126,  1125,
    1127,  1128,  1128,  1129,  1129,  1130,  1131,  1131,  1132,  1133,
    1133,  1134,  1134,  1135,  1135,  1136,  1136,  1138,  1137,  1139,
    1139,  1139,  1139,  1139,  1140,  1141,  1141,  1142,  1142,  1142,
    1142,  1142,  1143,  1144,  1144,  1145,  1145,  1145,  1146,  1146,
    1146,  1146,  1147,  1148,  1148,  1149,  1150,  1151,  1151,  1153,
    1152,  1154,  1155,  1155,  1156,  1156,  1156,  1156,  1157,  1157,
    1158,  1158,  1158,  1159,  1159,  1160,  1160,  1160,  1161,  1161,
    1162,  1163,  1163,  1164,  1164,  1165,  1166,  1166,  1167,  1167,
    1167,  1168,  1168,  1169,  1170,  1170,  1171,  1172,  1172,  1172,
    1173,  1173,  1174,  1175,  1175,  1176,  1177,  1177,  1177,  1178,
    1178,  1179,  1180,  1180,  1181,  1182,  1183,  1183,  1184,  1184,
    1185,  1186,  1186,  1187,  1188,  1188,  1189,  1189,  1190,  1191,
    1191,  1192,  1193,  1193,  1194,  1194,  1195,  1195,  1196,  1197,
    1197,  1198,  1199,  1199,  1200,  1201,  1203,  1202,  1204,  1204,
    1204,  1205,  1205,  1205,  1205,  1205,  1205,  1205,  1205,  1205,
    1205,  1205,  1205,  1205,  1205,  1205,  1205,  1205,  1205,  1205,
    1205,  1205,  1205,  1205,  1205,  1206,  1206,  1207,  1207,  1208,
    1208,  1209,  1210,  1211,  1211,  1212,  1212,  1212,  1213,  1213,
    1213,  1214,  1214,  1214,  1215,  1215,  1216,  1216,  1216,  1217,
    1217,  1218,  1218,  1218,  1218,  1218,  1218,  1219,  1219,  1220,
    1221,  1222,  1223,  1223,  1224,  1225,  1226,  1226,  1227,  1228,
    1228,  1229,  1230,  1230,  1230,  1231,  1232,  1232,  1233,  1234,
    1235,  1235,  1236,  1237,  1237,  1238,  1238,  1239,  1240,  1240,
    1241,  1241,  1241,  1242,  1242,  1243,  1243,  1244,  1244,  1244,
    1244,  1244,  1244,  1244,  1244,  1244,  1244,  1245,  1245,  1246,
    1246,  1246,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1248,
    1248,  1249,  1249,  1250,  1250,  1251,  1251,  1252,  1252,  1253,
    1253,  1253,  1254,  1254,  1254,  1255,  1255,  1256,  1256,  1257,
    1257,  1257,  1258,  1259,  1260,  1260,  1261,  1262,  1262,  1262,
    1262,  1263,  1264,  1264,  1264,  1264,  1265,  1265,  1266,  1267,
    1267,  1268,  1269,  1270,  1271,  1271,  1271,  1271,  1271,  1271,
    1271,  1272,  1272,  1273,  1273,  1274,  1274,  1274,  1274,  1274,
    1274,  1274,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,
    1275,  1275,  1275,  1275,  1276,  1276,  1277,  1277,  1277,  1278,
    1278,  1278,  1278,  1279,  1279,  1279,  1280,  1280,  1280,  1281,
    1281,  1281,  1282,  1282,  1283,  1283,  1284,  1284,  1285,  1285,
    1286,  1287,  1287,  1288,  1288,  1289,  1289,  1290,  1290,  1291,
    1291,  1292,  1292,  1292,  1293,  1293,  1294,  1294,  1294,  1295,
    1295,  1296,  1296,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1298,  1298,  1299,  1299,  1299,  1299,  1299,  1299,  1299,
    1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,
    1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,
    1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,
    1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,
    1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,
    1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,  1299,
    1299,  1299,  1299,  1300,  1300,  1301,  1301,  1302,  1302,  1303,
    1303,  1304,  1304,  1305,  1305,  1306,  1306,  1307,  1307,  1308,
    1308,  1309,  1309,  1310,  1310,  1311,  1311,  1312,  1312,  1313,
    1313,  1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,  1318,
    1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,  1322,  1322,
    1323,  1323,  1323,  1324,  1324,  1325,  1325,  1325,  1326,  1326,
    1326,  1327,  1327,  1327,  1328,  1328,  1329,  1329,  1330,  1330,
    1331,  1331,  1331,  1332,  1332,  1333,  1333,  1334,  1334,  1334,
    1334,  1335,  1335,  1336,  1336,  1337,  1337,  1338,  1338,  1339,
    1339,  1339,  1340,  1340,  1341,  1341,  1342,  1342,  1343,  1343,
    1343,  1344,  1344,  1345,  1345,  1346,  1346,  1347,  1347,  1348,
    1348,  1349,  1349,  1350,  1350,  1351,  1351,  1351,  1352,  1352,
    1353,  1353,  1354,  1354,  1355,  1355,  1356,  1356,  1357,  1357,
    1358,  1358,  1359,  1359,  1360,  1360,  1361,  1361,  1362,  1362,
    1363,  1363,  1364,  1364,  1365,  1365,  1366,  1366,  1367,  1367,
    1368,  1368,  1369,  1369,  1370,  1370,  1370,  1371,  1371,  1372,
    1372,  1373,  1373,  1374,  1374,  1375,  1375,  1376,  1376,  1377,
    1377,  1378,  1378
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
       1,     2,     3,     3,     3,     0,     2,     1,     2,     0,
       2,     0,     1,     2,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     2,     3,     3,     1,     0,     1,     1,     3,     4,
       0,     5,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     0,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     2,     3,     1,     2,
       3,     1,     2,     1,     2,     4,     1,     2,     1,     3,
       4,     5,     0,     3,     3,     5,     3,     4,     3,     3,
       5,     0,     3,     0,     2,     0,     2,     0,     2,     0,
       6,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     5,     5,     5,
       5,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       0,     1,     1,     1,     1,     0,     1,     1,     4,     1,
       1,     1,     7,     0,     4,     3,     3,     1,     4,     0,
       1,     1,     0,     5,     2,     2,     1,     0,     4,     5,
       2,     3,     1,     1,     3,     1,     2,     4,     4,     4,
       1,     3,     4,     4,     3,     1,     1,     3,     2,     2,
       2,     0,     2,     3,     1,     2,     1,     1,     5,     0,
       1,     1,     1,     0,     6,     1,     2,     2,     0,     2,
       0,     9,     0,     3,     0,     3,     0,     2,     2,     0,
       5,     3,     1,     1,     0,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       1,     4,     6,     9,     0,     3,     0,     2,     0,     2,
       3,     5,     5,     1,     1,     1,     1,     3,     5,     0,
       2,     1,     1,     1,     4,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     0,     2,     2,     2,
       2,     1,     2,     0,     0,     5,     0,     0,     2,     2,
       3,     1,     0,     4,     3,     2,     0,     1,     1,     1,
       0,     2,     1,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     2,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     0,
       2,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     6,     0,     2,
       7,     8,     0,     2,     0,     2,     0,     3,     0,     3,
       0,     1,     1,     0,     5,     1,     1,     0,     3,     1,
       2,     1,     2,     2,     3,     1,     0,     5,     1,     2,
       1,     3,     0,     4,     2,     4,     2,     2,     0,     0,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     5,     5,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     2,     1,
       2,     1,     1,     1,     1,     0,     1,     1,     0,     1,
       1,     3,     2,     0,     0,     0,     9,     0,     4,     0,
       0,     3,     0,     3,     1,     2,     4,     0,     2,     2,
       0,     3,     3,     4,     4,     3,     0,     1,     0,     2,
       2,     0,     0,     7,     0,     2,     1,     1,     2,     1,
       1,     0,     6,     0,     2,     2,     1,     0,     1,     0,
       0,     3,     0,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     4,     0,     4,
       3,     3,     4,     3,     4,     3,     3,     4,     4,     3,
       4,     3,     4,     5,     3,     4,     3,     3,     1,     1,
       0,     1,     1,     2,     1,     1,     1,     2,     1,     2,
       2,     2,     2,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     4,     3,     1,     2,     1,     1,
       3,     3,     3,     3,     3,     1,     1,     0,     1,     0,
       4,     4,     5,     6,     0,     2,     0,     1,     0,     3,
       3,     4,     0,     2,     0,     3,     1,     2,     4,     0,
       2,     0,     4,     5,     0,     1,     1,     1,     0,     0,
       3,     1,     2,     2,     3,     0,     2,     2,     2,     0,
       3,     2,     2,     4,     1,     1,     1,     1,     0,     2,
       2,     0,     1,     2,     2,     0,     1,     2,     0,     1,
       0,     3,     1,     2,     0,     3,     2,     3,     0,     1,
       3,     3,     2,     0,     4,     4,     0,     1,     1,     1,
       0,     4,     3,     2,     1,     2,     0,     1,     0,     4,
       3,     3,     3,     3,     2,     2,     1,     1,     2,     0,
       3,     1,     1,     1,     2,     1,     2,     1,     1,     2,
       2,     2,     2,     2,     1,     1,     1,     2,     2,     1,
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
       4,     0,     1,     1,     2,     2,     3,     3,     0,     3,
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
       1,     4,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     3,     4,     1,     2,     3,     1,
       2,     3,     3,     4,     0,     3,     0,     7,     0,     5,
       0,     2,     0,     2,     0,     3,     0,     2,     4,     0,
       2,     4,     0,     4,     4,     0,     3,     0,     4,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     2,     1,
       0,     1,     0,     4,     2,     0,     2,     1,     4,     4,
       0,     1,     1,     1,     1,     1,     0,     4,     5,     1,
       2,     1,     3,     3,     0,     4,     0,     1,     0,     4,
       4,     6,     6,     0,     1,     2,     0,     1,     0,     3,
       1,     2,     0,     3,     5,     0,     3,     2,     0,     4,
       6,     0,     3,     1,     3,     2,     2,     2,     3,     0,
       3,     0,     3,     0,     3,     0,     1,     0,     3,     1,
       1,     1,     1,     1,     7,     0,     1,     1,     1,     1,
       1,     1,     4,     1,     2,     1,     2,     3,     0,     1,
       2,     1,     3,     1,     1,     4,     1,     1,     1,     0,
       4,     5,     0,     2,     0,     4,     3,     3,     1,     1,
       0,     1,     1,     0,     1,     0,     2,     2,     0,     1,
       2,     1,     1,     0,     1,     2,     1,     1,     0,     2,
       2,     0,     1,     2,     0,     1,     2,     0,     2,     2,
       0,     1,     2,     0,     1,     2,     0,     2,     2,     0,
       1,     2,     0,     1,     2,     2,     2,     2,     0,     1,
       2,     0,     1,     2,     2,     2,     0,     1,     2,     0,
       1,     2,     0,     1,     2,     2,     0,     1,     2,     0,
       1,     2,     0,     2,     1,     1,     0,     2,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     1,     1,     3,     3,
       1,     3,     3,     1,     3,     1,     2,     2,     1,     3,
       1,     1,     3,     1,     3,     1,     3,     1,     2,     2,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     0,
       2,     1,     1,     1,     3,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     0,     1,     1,     2,     1,     1,     1,
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
       1,     0,     1,     0,     1,     0,     1,     0,     2,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     0,     1,     0,     1,     1,     0,     1,
       1,     0,     2,     2,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     0,     1,     0,     1,     0,     2,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     1,
       0,     3,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     1,     1,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     2
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
#line 2005 "parser.y" /* yacc.c:1646  */
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
#line 6888 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 2017 "parser.y" /* yacc.c:1646  */
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
#line 6911 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 2053 "parser.y" /* yacc.c:1646  */
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
#line 6935 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 2104 "parser.y" /* yacc.c:1646  */
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[-1]), CB_PROGRAM_TYPE);
  }
#line 6944 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 2112 "parser.y" /* yacc.c:1646  */
    {
	  clean_up_program ((yyvsp[-1]), CB_FUNCTION_TYPE);
  }
#line 6952 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 2135 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 6960 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 2139 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}
  }
#line 6970 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 2145 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 6979 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 2153 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 6987 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 2157 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	set_up_func_prototype ((yyvsp[-2]), (yyvsp[-1]), 1);
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 7000 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 2169 "parser.y" /* yacc.c:1646  */
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
#line 7015 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 2188 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7021 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 2189 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7027 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 2198 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7040 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 2207 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7053 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 2226 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 7061 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 2230 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 7069 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 2246 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 7077 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 2263 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 7089 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 2277 "parser.y" /* yacc.c:1646  */
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 7099 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 2289 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
#line 7109 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 2304 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 7121 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 2317 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 7131 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2346 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 7139 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2354 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 7147 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2361 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 7155 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 2368 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 7167 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 2379 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7175 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 2383 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7183 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 2387 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7191 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2391 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7199 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 2405 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 7208 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2410 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 7216 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 2418 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7224 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2430 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 7232 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 2434 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) != cb_error_node) {
		set_up_func_prototype ((yyvsp[-1]), (yyvsp[0]), 0);
	}
  }
#line 7242 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2444 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7250 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 2448 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7258 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2455 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7267 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 2460 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7276 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 2471 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 7290 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2516 "parser.y" /* yacc.c:1646  */
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
#line 7318 "parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 2544 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 7332 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2554 "parser.y" /* yacc.c:1646  */
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
#line 7349 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2567 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 7361 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2583 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 7369 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2590 "parser.y" /* yacc.c:1646  */
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
#line 7388 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2605 "parser.y" /* yacc.c:1646  */
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
#line 7407 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2625 "parser.y" /* yacc.c:1646  */
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
#line 7424 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2638 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 7436 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2649 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 7446 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2655 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7456 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2661 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7466 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2667 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 7476 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2673 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7486 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2679 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 7497 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2689 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 7505 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2693 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7513 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2700 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7521 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2704 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 7529 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2708 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 7537 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2712 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 7545 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2719 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7553 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2723 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 7561 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2729 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7567 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2730 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7573 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2731 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7579 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2732 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 7585 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2733 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 7591 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2734 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 7597 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2738 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7603 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2739 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7609 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2747 "parser.y" /* yacc.c:1646  */
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
#line 7624 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2761 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7632 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2765 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7640 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2773 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7648 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2780 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7656 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2784 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7668 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2795 "parser.y" /* yacc.c:1646  */
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
#line 7689 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2815 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7701 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2823 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7713 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2833 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7719 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2834 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7725 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2841 "parser.y" /* yacc.c:1646  */
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
#line 7747 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2861 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7753 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2862 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7759 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2867 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7767 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2871 "parser.y" /* yacc.c:1646  */
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
#line 7787 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2892 "parser.y" /* yacc.c:1646  */
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
#line 7809 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2915 "parser.y" /* yacc.c:1646  */
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
#line 7890 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2996 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7898 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 3000 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7906 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 3009 "parser.y" /* yacc.c:1646  */
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
#line 7923 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 3028 "parser.y" /* yacc.c:1646  */
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
#line 7938 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 3044 "parser.y" /* yacc.c:1646  */
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
#line 7954 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 3062 "parser.y" /* yacc.c:1646  */
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
#line 7970 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 3080 "parser.y" /* yacc.c:1646  */
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
#line 7986 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 3097 "parser.y" /* yacc.c:1646  */
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
#line 8002 "parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 3118 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 8010 "parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 3125 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 8019 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 3133 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 8029 "parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 3142 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 8039 "parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 3157 "parser.y" /* yacc.c:1646  */
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
#line 8065 "parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 3179 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-3]))) {
		validate_file (current_file, (yyvsp[-3]));
	}
  }
#line 8075 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 3211 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 8085 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 3217 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 8099 "parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 3227 "parser.y" /* yacc.c:1646  */
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
#line 8116 "parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 3240 "parser.y" /* yacc.c:1646  */
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
#line 8133 "parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 3253 "parser.y" /* yacc.c:1646  */
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
#line 8161 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 3279 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8167 "parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 3280 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8173 "parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 3281 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int4; }
#line 8179 "parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 3293 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 8187 "parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 3300 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 8195 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 3313 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8203 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3325 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 8212 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3332 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 8218 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3333 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 8224 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 3334 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 8230 "parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 3342 "parser.y" /* yacc.c:1646  */
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
#line 8255 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 3365 "parser.y" /* yacc.c:1646  */
    { }
#line 8261 "parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 3368 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN ALL");
  }
#line 8269 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 3373 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 8277 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 3383 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	CB_PENDING ("COLLATING SEQUENCE");
  }
#line 8286 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 3391 "parser.y" /* yacc.c:1646  */
    {
	  if (CB_ALPHABET_NAME_P (cb_ref ((yyvsp[0])))) {
		  (yyval) = (yyvsp[0]);
	  } else {
		  cb_error_x ((yyvsp[0]), _("'%s' is not an alphabet-name"),
			      cb_name ((yyvsp[0])));
		  (yyval) = cb_error_node;
	  }
  }
#line 8300 "parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 3406 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 8309 "parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 3421 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 8317 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 3429 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 8326 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 3434 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 8335 "parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 3439 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 8344 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 3448 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 8352 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 3452 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	CB_PENDING ("WITH ROLLBACK");
  }
#line 8361 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3468 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 8370 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3473 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 8379 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3478 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 8388 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3483 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 8397 "parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 3494 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 8406 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 3505 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 8414 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3515 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8423 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 3522 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8429 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3523 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8435 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 3524 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8441 "parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 3531 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8450 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 3542 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 8458 "parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 3556 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 8467 "parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 3563 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8473 "parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 3564 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 8479 "parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 3565 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8485 "parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 3574 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8493 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3593 "parser.y" /* yacc.c:1646  */
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
#line 8522 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3620 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8528 "parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 3621 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8534 "parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 3622 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8540 "parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 3623 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8546 "parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 3630 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 8555 "parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 3635 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 8567 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3664 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 8575 "parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 3672 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 8583 "parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 3679 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 8591 "parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 3688 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 8601 "parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 3702 "parser.y" /* yacc.c:1646  */
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
#line 8619 "parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 3721 "parser.y" /* yacc.c:1646  */
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
#line 8639 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 3738 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8647 "parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 3745 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8655 "parser.c" /* yacc.c:1646  */
    break;

  case 303:
#line 3749 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8663 "parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 3760 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8677 "parser.c" /* yacc.c:1646  */
    break;

  case 307:
#line 3770 "parser.y" /* yacc.c:1646  */
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
#line 8696 "parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 3800 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 8705 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3813 "parser.y" /* yacc.c:1646  */
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
#line 8729 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 3833 "parser.y" /* yacc.c:1646  */
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
#line 8767 "parser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 3868 "parser.y" /* yacc.c:1646  */
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
#line 8799 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 3899 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8807 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 3905 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8813 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 3906 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8819 "parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 3910 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8825 "parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 3911 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8831 "parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 3919 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8840 "parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 3930 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8849 "parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 3935 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8861 "parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 3958 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8870 "parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3970 "parser.y" /* yacc.c:1646  */
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
#line 8889 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3998 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8897 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 4005 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8905 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 4012 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8913 "parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 4021 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 8923 "parser.c" /* yacc.c:1646  */
    break;

  case 352:
#line 4034 "parser.y" /* yacc.c:1646  */
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("Can only use U or S mode with RECORD SEQUENTIAL files"));
	}
  }
#line 8933 "parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 4050 "parser.y" /* yacc.c:1646  */
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
			cb_warning_x ((yyvsp[-1]), _("Ignoring CODE-SET '%s'"),
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
#line 8970 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 4086 "parser.y" /* yacc.c:1646  */
    {
	  if (warningopt) {
		  CB_PENDING ("FOR sub-records clause");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[0]));
  }
#line 8982 "parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 4099 "parser.y" /* yacc.c:1646  */
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
#line 8998 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 4119 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9012 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 4129 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9025 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 4144 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 9035 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 4150 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 9045 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 4159 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9053 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 4162 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 9063 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 4168 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 9076 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 4186 "parser.y" /* yacc.c:1646  */
    {
	cb_tree x;

	x = cb_build_field_tree ((yyvsp[-1]), (yyvsp[0]), current_field, current_storage,
				 current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-1]));
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	} else {
		current_field = CB_FIELD (x);
		check_pic_duplicate = 0;
	}
  }
#line 9095 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 4201 "parser.y" /* yacc.c:1646  */
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
#line 9119 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 4221 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9133 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 4234 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9141 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 4241 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9151 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 4247 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9161 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 4253 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 9171 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 4262 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 9181 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 4271 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 9189 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 4275 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 9202 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 4286 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9208 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 4287 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9214 "parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 4288 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9220 "parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 4289 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9226 "parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 4294 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9234 "parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 4298 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 9242 "parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 4302 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 9250 "parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 4306 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 9258 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 4310 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9266 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 4314 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 9274 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 4318 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 9282 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 4322 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 9290 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 4326 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 9298 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 4330 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 9306 "parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 4334 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9314 "parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 4338 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 9322 "parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 4342 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9334 "parser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 4374 "parser.y" /* yacc.c:1646  */
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
#line 9361 "parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4400 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9369 "parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4404 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 9378 "parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4412 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 9387 "parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4418 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 9396 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4446 "parser.y" /* yacc.c:1646  */
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
#line 9418 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4470 "parser.y" /* yacc.c:1646  */
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
#line 9446 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4497 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 9454 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4501 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 9462 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4510 "parser.y" /* yacc.c:1646  */
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
#line 9485 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4535 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 9494 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4551 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9502 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4555 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9510 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4559 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 9518 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4563 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 9526 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4567 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9534 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4571 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9542 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4575 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 9550 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4579 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 9558 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4583 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 9566 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4587 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 9574 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4591 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 9582 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4595 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9590 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4599 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9599 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4604 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9608 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4609 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9616 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4613 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9624 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4617 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9636 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4625 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9644 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4629 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9652 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4633 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9664 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4641 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 9672 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4645 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9680 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4649 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9688 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4653 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9696 "parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4657 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9704 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4661 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9712 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4665 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9720 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4669 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9728 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4673 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9740 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4681 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9752 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4689 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9760 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4693 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9768 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4697 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9776 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4701 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9784 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4705 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9792 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4709 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	CB_PENDING ("USAGE NATIONAL");
  }
#line 9801 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4729 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9811 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4735 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9821 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4748 "parser.y" /* yacc.c:1646  */
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
#line 9840 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4766 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9848 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4776 "parser.y" /* yacc.c:1646  */
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
#line 9883 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4808 "parser.y" /* yacc.c:1646  */
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
	CB_PENDING("OCCURS with DYNAMIC capacity");
	current_field->flag_occurs = 1;
  }
#line 9913 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4836 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9919 "parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4837 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9925 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4841 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9931 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4842 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9937 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4847 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9945 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4854 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9954 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4862 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9962 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4869 "parser.y" /* yacc.c:1646  */
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
#line 9987 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4892 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9993 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4895 "parser.y" /* yacc.c:1646  */
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
#line 10010 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4910 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 10016 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4911 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 10022 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4916 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 10030 "parser.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4922 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10036 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4924 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10042 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4929 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 10051 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4940 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 10060 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4951 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 10069 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4962 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 10078 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4973 "parser.y" /* yacc.c:1646  */
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
#line 10105 "parser.c" /* yacc.c:1646  */
    break;

  case 506:
#line 5001 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 10114 "parser.c" /* yacc.c:1646  */
    break;

  case 508:
#line 5009 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10120 "parser.c" /* yacc.c:1646  */
    break;

  case 509:
#line 5010 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10126 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 5014 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10132 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 5015 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 10138 "parser.c" /* yacc.c:1646  */
    break;

  case 513:
#line 5020 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 10149 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 5033 "parser.y" /* yacc.c:1646  */
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
#line 10166 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 5046 "parser.y" /* yacc.c:1646  */
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
#line 10186 "parser.c" /* yacc.c:1646  */
    break;

  case 516:
#line 5067 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 10199 "parser.c" /* yacc.c:1646  */
    break;

  case 517:
#line 5076 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 10213 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5091 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 10226 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5100 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10236 "parser.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5112 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 10246 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5118 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10256 "parser.c" /* yacc.c:1646  */
    break;

  case 525:
#line 5129 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 10266 "parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5145 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 10279 "parser.c" /* yacc.c:1646  */
    break;

  case 533:
#line 5160 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 10287 "parser.c" /* yacc.c:1646  */
    break;

  case 534:
#line 5167 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 10296 "parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5172 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 10304 "parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5183 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 10312 "parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5202 "parser.y" /* yacc.c:1646  */
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
#line 10349 "parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 5238 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 10357 "parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 5242 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 10366 "parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5247 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 10374 "parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 5267 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 10382 "parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5274 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 10390 "parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 5281 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 10398 "parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 5288 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 10406 "parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 5295 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 10414 "parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5306 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 10422 "parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5337 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 10430 "parser.c" /* yacc.c:1646  */
    break;

  case 593:
#line 5363 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10438 "parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 5370 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 10446 "parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5386 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 10454 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5397 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 10462 "parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5409 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 10470 "parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5442 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 10478 "parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5449 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 10486 "parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5456 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10494 "parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 5465 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10505 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5472 "parser.y" /* yacc.c:1646  */
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
#line 10521 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5497 "parser.y" /* yacc.c:1646  */
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
#line 10545 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5517 "parser.y" /* yacc.c:1646  */
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
		/* Reset to last non-78 item - may set current_field to NULL */
		current_field = cb_validate_78_item (current_field, 0);
	}
	if (likely (current_field)) {
		if (!description_field) {
			description_field = current_field;
		}
		if (current_field->flag_occurs
		    && !has_relative_pos (current_field)) {
			cb_error (_("Relative LINE/COLUMN clause required with OCCURS"));
		}
	}
  }
#line 10600 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5568 "parser.y" /* yacc.c:1646  */
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
#line 10620 "parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 5591 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
					 "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10629 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5596 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
					 "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10638 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5601 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10646 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5605 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10654 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5609 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
					 "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10663 "parser.c" /* yacc.c:1646  */
    break;

  case 637:
#line 5614 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
					 "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10672 "parser.c" /* yacc.c:1646  */
    break;

  case 638:
#line 5619 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
					 "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10681 "parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 5624 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
					 "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10690 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5629 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10698 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5633 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10706 "parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 5637 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	CB_PENDING ("OVERLINE");
  }
#line 10715 "parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 5642 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	CB_PENDING ("GRID");
  }
#line 10724 "parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 5647 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	CB_PENDING ("LEFTLINE");
  }
#line 10733 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5652 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10741 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5656 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10749 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5660 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10757 "parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 5664 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10765 "parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 5668 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10774 "parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 5673 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10782 "parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 5677 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10790 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5681 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10799 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5686 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10808 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5691 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10817 "parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 5696 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10826 "parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5709 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10839 "parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 5718 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10848 "parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5723 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10860 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5754 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10868 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5758 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10876 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5762 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10884 "parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 5769 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10892 "parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 5773 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10900 "parser.c" /* yacc.c:1646  */
    break;

  case 680:
#line 5777 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10908 "parser.c" /* yacc.c:1646  */
    break;

  case 681:
#line 5785 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10920 "parser.c" /* yacc.c:1646  */
    break;

  case 682:
#line 5796 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10928 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5805 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10942 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5815 "parser.y" /* yacc.c:1646  */
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
#line 10958 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5827 "parser.y" /* yacc.c:1646  */
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
#line 10977 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5842 "parser.y" /* yacc.c:1646  */
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
#line 11010 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5875 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11018 "parser.c" /* yacc.c:1646  */
    break;

  case 690:
#line 5879 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11027 "parser.c" /* yacc.c:1646  */
    break;

  case 691:
#line 5884 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11039 "parser.c" /* yacc.c:1646  */
    break;

  case 692:
#line 5892 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 11052 "parser.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5901 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11064 "parser.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5911 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11070 "parser.c" /* yacc.c:1646  */
    break;

  case 695:
#line 5913 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11076 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5918 "parser.y" /* yacc.c:1646  */
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
#line 11100 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 5942 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11108 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 5946 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		CB_PENDING (_("BY VALUE parameters"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11121 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 5959 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 11133 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5967 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 11145 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 5975 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 11157 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 5983 "parser.y" /* yacc.c:1646  */
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
#line 11190 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 6012 "parser.y" /* yacc.c:1646  */
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
#line 11223 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 6044 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 11231 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 6048 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 11244 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 6060 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11254 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 6066 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main) {
		cb_error (_("RETURNING clause cannot be OMITTED for main program"));
	}
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause cannot be OMITTED for a FUNCTION"));
	}
	current_program->flag_void = 1;
  }
#line 11268 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 6076 "parser.y" /* yacc.c:1646  */
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
					cb_error (_("Function RETURNING item may not be ANY LENGTH"));
				}

				f->flag_is_returning = 1;
			}
			current_program->returning = (yyvsp[0]);
		}
	}
  }
#line 11301 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 6108 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11310 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 6114 "parser.y" /* yacc.c:1646  */
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
#line 11340 "parser.c" /* yacc.c:1646  */
    break;

  case 718:
#line 6152 "parser.y" /* yacc.c:1646  */
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
#line 11361 "parser.c" /* yacc.c:1646  */
    break;

  case 720:
#line 6170 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11369 "parser.c" /* yacc.c:1646  */
    break;

  case 721:
#line 6180 "parser.y" /* yacc.c:1646  */
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
#line 11417 "parser.c" /* yacc.c:1646  */
    break;

  case 722:
#line 6224 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11425 "parser.c" /* yacc.c:1646  */
    break;

  case 725:
#line 6235 "parser.y" /* yacc.c:1646  */
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
#line 11474 "parser.c" /* yacc.c:1646  */
    break;

  case 726:
#line 6283 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		if (is_reserved_word (CB_NAME ((yyvsp[0])))) {
			cb_error_x ((yyvsp[0]), _("'%s' is not a statement"), CB_NAME ((yyvsp[0])));
		} else if (is_default_reserved_word (CB_NAME ((yyvsp[0])))) {
			cb_error_x ((yyvsp[0]), _("Unknown statement '%s'; it may exist in another dialect"),
				    CB_NAME ((yyvsp[0])));
		} else {
			cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
		}
	}
	YYERROR;
  }
#line 11494 "parser.c" /* yacc.c:1646  */
    break;

  case 727:
#line 6302 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11502 "parser.c" /* yacc.c:1646  */
    break;

  case 728:
#line 6306 "parser.y" /* yacc.c:1646  */
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
#line 11518 "parser.c" /* yacc.c:1646  */
    break;

  case 729:
#line 6324 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11528 "parser.c" /* yacc.c:1646  */
    break;

  case 730:
#line 6329 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11537 "parser.c" /* yacc.c:1646  */
    break;

  case 731:
#line 6334 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11547 "parser.c" /* yacc.c:1646  */
    break;

  case 732:
#line 6342 "parser.y" /* yacc.c:1646  */
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
#line 11578 "parser.c" /* yacc.c:1646  */
    break;

  case 733:
#line 6369 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11586 "parser.c" /* yacc.c:1646  */
    break;

  case 734:
#line 6373 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11594 "parser.c" /* yacc.c:1646  */
    break;

  case 784:
#line 6429 "parser.y" /* yacc.c:1646  */
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
#line 11612 "parser.c" /* yacc.c:1646  */
    break;

  case 785:
#line 6443 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11621 "parser.c" /* yacc.c:1646  */
    break;

  case 786:
#line 6454 "parser.y" /* yacc.c:1646  */
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
#line 11636 "parser.c" /* yacc.c:1646  */
    break;

  case 788:
#line 6470 "parser.y" /* yacc.c:1646  */
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
#line 11646 "parser.c" /* yacc.c:1646  */
    break;

  case 789:
#line 6476 "parser.y" /* yacc.c:1646  */
    {
	/* Check for invalid use of screen clauses */
	  if (current_statement->attr_ptr
	      || (!is_screen_field ((yyvsp[-3])) && line_column)) {
		  cb_verify_x ((yyvsp[-3]), cb_accept_display_extensions,
			       _("Non-standard ACCEPT"));
	  }

	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-3]), line_column, current_statement->attr_ptr);
  }
#line 11662 "parser.c" /* yacc.c:1646  */
    break;

  case 790:
#line 6488 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11670 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 6492 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11678 "parser.c" /* yacc.c:1646  */
    break;

  case 792:
#line 6496 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11687 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 6501 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11696 "parser.c" /* yacc.c:1646  */
    break;

  case 794:
#line 6506 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 11705 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 6511 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 11714 "parser.c" /* yacc.c:1646  */
    break;

  case 796:
#line 6516 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 11722 "parser.c" /* yacc.c:1646  */
    break;

  case 797:
#line 6520 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 11730 "parser.c" /* yacc.c:1646  */
    break;

  case 798:
#line 6524 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 11738 "parser.c" /* yacc.c:1646  */
    break;

  case 799:
#line 6528 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 11746 "parser.c" /* yacc.c:1646  */
    break;

  case 800:
#line 6532 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11755 "parser.c" /* yacc.c:1646  */
    break;

  case 801:
#line 6537 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11763 "parser.c" /* yacc.c:1646  */
    break;

  case 802:
#line 6541 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11771 "parser.c" /* yacc.c:1646  */
    break;

  case 803:
#line 6545 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 11779 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6549 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 11787 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 6553 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11795 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6557 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11803 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6561 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11811 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6569 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11819 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6587 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_1, &check_duplicate);
  }
#line 11827 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6591 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_2, &check_duplicate);
  }
#line 11835 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6604 "parser.y" /* yacc.c:1646  */
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
#line 11855 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6620 "parser.y" /* yacc.c:1646  */
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
#line 11875 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6636 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				  _("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				  &check_line_col_duplicate);

	cb_verify (cb_accept_display_extensions, "AT clause");

	line_column = (yyvsp[0]);
  }
#line 11889 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6648 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11895 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6652 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11901 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6653 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11907 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6658 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11915 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6665 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11923 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6669 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11933 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6675 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11941 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6679 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11949 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6683 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11957 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6687 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11965 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6691 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 11975 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6697 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11983 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6701 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11991 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6705 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 12001 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6711 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 12009 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6715 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12017 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6719 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 12025 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6723 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 12033 "parser.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6727 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 12041 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6731 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12049 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6735 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 12057 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6739 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12065 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6743 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12073 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6747 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12081 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6751 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 12091 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6757 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 12099 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6761 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 12107 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6765 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12115 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6769 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12123 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6773 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12131 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6777 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12139 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6781 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12147 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6793 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 12155 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6797 "parser.y" /* yacc.c:1646  */
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
#line 12170 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6814 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 12178 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6823 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 12186 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6827 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 12194 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 6831 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 12202 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6838 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12210 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6845 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 12218 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6849 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 12226 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6859 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12235 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6868 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 12243 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6872 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12256 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6883 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12262 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6884 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12268 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 6892 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 12277 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6906 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12285 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 6918 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
  }
#line 12295 "parser.c" /* yacc.c:1646  */
    break;

  case 883:
#line 6933 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[-3])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[-3]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[-3]), _("Recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	/* For CALL ... RETURNING NOTHING, set the call convention bit */
	if (call_nothing) {
		if ((yyvsp[-4]) && CB_INTEGER_P ((yyvsp[-4]))) {
			(yyvsp[-4]) = cb_int ((CB_INTEGER ((yyvsp[-4]))->val) | CB_CONV_NO_RET_UPD);
		} else {
			(yyvsp[-4]) = cb_int (CB_CONV_NO_RET_UPD);
		}
	}
	cb_emit_call ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), CB_PAIR_X ((yyvsp[0])), CB_PAIR_Y ((yyvsp[0])), (yyvsp[-4]));
  }
#line 12318 "parser.c" /* yacc.c:1646  */
    break;

  case 884:
#line 6955 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12327 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6960 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12336 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6965 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12345 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 6970 "parser.y" /* yacc.c:1646  */
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
#line 12366 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6990 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12374 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6994 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12383 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6999 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12396 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 7010 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12402 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 7012 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12408 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 7017 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12420 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 7025 "parser.y" /* yacc.c:1646  */
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
#line 12446 "parser.c" /* yacc.c:1646  */
    break;

  case 896:
#line 7051 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 12454 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 7055 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 12467 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 7064 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 12480 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 7076 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12488 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 7080 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12496 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 7084 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12504 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 7088 "parser.y" /* yacc.c:1646  */
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
#line 12513 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 7093 "parser.y" /* yacc.c:1646  */
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
#line 12537 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 7126 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR (NULL, NULL);
  }
#line 12545 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 7130 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12553 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 7134 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT EXCEPTION before EXCEPTION");
	}
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 12564 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 7144 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12572 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 7148 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12580 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 7155 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12588 "parser.c" /* yacc.c:1646  */
    break;

  case 914:
#line 7159 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW clause");
	(yyval) = (yyvsp[0]);
  }
#line 12597 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 7167 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12605 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 7171 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12613 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 7178 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12621 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 7185 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 12629 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 7189 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 12637 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 7199 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 12645 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 7207 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12653 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 7211 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12661 "parser.c" /* yacc.c:1646  */
    break;

  case 924:
#line 7221 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 12669 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 7229 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12678 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 7234 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12687 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 7241 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 12693 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 7242 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 12699 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 7243 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 12705 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 7244 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 12711 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 7245 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 12717 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 7253 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 12725 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 7262 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 12733 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 7269 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 12741 "parser.c" /* yacc.c:1646  */
    break;

  case 937:
#line 7273 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 12749 "parser.c" /* yacc.c:1646  */
    break;

  case 938:
#line 7283 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 12758 "parser.c" /* yacc.c:1646  */
    break;

  case 939:
#line 7294 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 12773 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 7311 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 12781 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 7320 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 12789 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 7328 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12798 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 7333 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12807 "parser.c" /* yacc.c:1646  */
    break;

  case 946:
#line 7341 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 12815 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 7345 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 12823 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 7355 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
	display_type = UNKNOWN_DISPLAY;
	is_first_display_item = 1;
  }
#line 12834 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 7367 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 12842 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 7371 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 12850 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 7375 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 12858 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 7379 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 12866 "parser.c" /* yacc.c:1646  */
    break;

  case 955:
#line 7387 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) != NULL) {
		error_if_different_display_type ((yyvsp[0]), NULL, NULL, NULL);
		cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 0,
				 display_type);
	}
  }
#line 12878 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 7395 "parser.y" /* yacc.c:1646  */
    {
	set_display_type ((yyvsp[0]), NULL, NULL, NULL);
	cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 1,
			 display_type);
  }
#line 12888 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7409 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 12900 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7417 "parser.y" /* yacc.c:1646  */
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
#line 12938 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 7454 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12946 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7458 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
#line 12955 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7471 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 12963 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 7475 "parser.y" /* yacc.c:1646  */
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 12972 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 7480 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 12980 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 7489 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12988 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 7493 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_name ((yyvsp[0]));
  }
#line 12996 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7497 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_int0;
  }
#line 13004 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7501 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_null;
  }
#line 13012 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 7513 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 13020 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 7517 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 13030 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 7523 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 13040 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 7529 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 13048 "parser.c" /* yacc.c:1646  */
    break;

  case 980:
#line 7533 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 13056 "parser.c" /* yacc.c:1646  */
    break;

  case 981:
#line 7537 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 13066 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 7543 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 13076 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 7549 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 13086 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7555 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 13096 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7561 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 13104 "parser.c" /* yacc.c:1646  */
    break;

  case 986:
#line 7565 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 13112 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 7569 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 13120 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7573 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 13128 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7577 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 13136 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7581 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 13144 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7585 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 13152 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7589 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 13160 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7596 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 13168 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7600 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 13176 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7610 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 13184 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7619 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 13192 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7623 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 13200 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7627 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 13208 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7631 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13216 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7635 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13224 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7642 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 13232 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7646 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 13240 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7656 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 13249 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7665 "parser.y" /* yacc.c:1646  */
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
#line 13265 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7683 "parser.y" /* yacc.c:1646  */
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
#line 13288 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7707 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 13297 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7714 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13303 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7716 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13309 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7721 "parser.y" /* yacc.c:1646  */
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
#line 13324 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7732 "parser.y" /* yacc.c:1646  */
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
#line 13339 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7743 "parser.y" /* yacc.c:1646  */
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
#line 13354 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7757 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13362 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7761 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13370 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7767 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13376 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7769 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13382 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7775 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13391 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7784 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13400 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7792 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13409 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7798 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13418 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7805 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13424 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7807 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13430 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7812 "parser.y" /* yacc.c:1646  */
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
#line 13496 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7873 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 13502 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7874 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 13508 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7875 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 13514 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7879 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13520 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7880 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13526 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7885 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 13534 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7889 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 13542 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7899 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 13551 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7904 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13559 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7912 "parser.y" /* yacc.c:1646  */
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
#line 13584 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7933 "parser.y" /* yacc.c:1646  */
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
#line 13602 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7947 "parser.y" /* yacc.c:1646  */
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
#line 13628 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7969 "parser.y" /* yacc.c:1646  */
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
#line 13654 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7991 "parser.y" /* yacc.c:1646  */
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
#line 13678 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 8011 "parser.y" /* yacc.c:1646  */
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
#line 13702 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 8033 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13708 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 8034 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13714 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 8042 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 13723 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 8051 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 13731 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 8061 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	CB_PENDING("GENERATE");
  }
#line 13740 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 8077 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13753 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 8090 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 13762 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 8098 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 13771 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 8103 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 13780 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 8114 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 13793 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 8129 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 13801 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 8138 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13809 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 8142 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 13817 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 8146 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 13825 "parser.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 8153 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 13833 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 8157 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 13841 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 8167 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 13849 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 8176 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13857 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 8182 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13863 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 8183 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13869 "parser.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 8187 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13875 "parser.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 8188 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13881 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 8189 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 13887 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 8194 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13895 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 8198 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13903 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 8205 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13911 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 8210 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13919 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 8217 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 13927 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 8223 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 13933 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 8224 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 13939 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 8225 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 13945 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 8226 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 13951 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 8227 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13957 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 8228 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13963 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 8229 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13969 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 8234 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13977 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 8238 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13985 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 8247 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	CB_PENDING("INITIATE");
  }
#line 13994 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 8256 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14004 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 8262 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14014 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 8273 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 14023 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 8286 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14031 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 8290 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14039 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 8294 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14047 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 8310 "parser.y" /* yacc.c:1646  */
    {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
#line 14056 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 8315 "parser.y" /* yacc.c:1646  */
    {
	if (!(previous_tallying_phrase == CHARACTERS_PHRASE
	      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
		cb_error (_("TALLYING clause is incomplete"));
	} else {
		cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	}

	(yyval) = (yyvsp[-3]);
  }
#line 14071 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 8331 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 14080 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 8341 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 14090 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 8350 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14098 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 8354 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14106 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 8361 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (FOR_PHRASE);
	(yyval) = cb_build_tallying_data ((yyvsp[-1]));
  }
#line 14115 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 8366 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	(yyval) = cb_build_tallying_characters ((yyvsp[0]));
  }
#line 14124 "parser.c" /* yacc.c:1646  */
    break;

  case 1107:
#line 8371 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_all ();
  }
#line 14133 "parser.c" /* yacc.c:1646  */
    break;

  case 1108:
#line 8376 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_leading ();
  }
#line 14142 "parser.c" /* yacc.c:1646  */
    break;

  case 1109:
#line 8381 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_trailing ();
  }
#line 14151 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 8386 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	(yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14160 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 8393 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14166 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 8394 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 14172 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 8399 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 14181 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 8404 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14189 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 8411 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 14195 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 8412 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 14201 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 8413 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 14207 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 8414 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 14213 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 8419 "parser.y" /* yacc.c:1646  */
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
#line 14239 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 8446 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 14247 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 8450 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14255 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 8454 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14263 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 8458 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14271 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 8462 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14279 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 8469 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0]));
  }
#line 14287 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 8476 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0]));
  }
#line 14295 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 8485 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 14304 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 8497 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 14312 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8505 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14320 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8509 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14328 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8519 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 14336 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8528 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 14344 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8532 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 14352 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8539 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 14360 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8543 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 14368 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8553 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 14376 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 8561 "parser.y" /* yacc.c:1646  */
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
#line 14401 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 8582 "parser.y" /* yacc.c:1646  */
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
#line 14426 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8605 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 14432 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8606 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 14438 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8607 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 14444 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8608 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 14450 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8612 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14456 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 8613 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14462 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8617 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14468 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8618 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14474 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8619 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14480 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8621 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 14489 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8632 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14500 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8643 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14509 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8648 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 14519 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8654 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14528 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8659 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 14537 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8667 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 14549 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8675 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 14557 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8682 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 14565 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8686 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 14579 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8699 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 14590 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8706 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14602 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8717 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14610 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8721 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14619 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8726 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14627 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8730 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 14642 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8741 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14650 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8747 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 14656 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8748 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14662 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8752 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14668 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8753 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14674 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8756 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14680 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8758 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14686 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8763 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14694 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8773 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 14702 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8782 "parser.y" /* yacc.c:1646  */
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
#line 14730 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8808 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14736 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8809 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14742 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8814 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14750 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8818 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14758 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8822 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14766 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8826 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14774 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8830 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14782 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8834 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14790 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8838 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 14798 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8844 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14804 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8845 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14810 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8855 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 14818 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8859 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 14826 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8869 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 14835 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8879 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 14843 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 8887 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14851 "parser.c" /* yacc.c:1646  */
    break;

  case 1200:
#line 8897 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 14860 "parser.c" /* yacc.c:1646  */
    break;

  case 1201:
#line 8907 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 14868 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 8916 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14876 "parser.c" /* yacc.c:1646  */
    break;

  case 1204:
#line 8923 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 14884 "parser.c" /* yacc.c:1646  */
    break;

  case 1205:
#line 8927 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 14892 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 8937 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14903 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8949 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14912 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 8957 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14920 "parser.c" /* yacc.c:1646  */
    break;

  case 1210:
#line 8961 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14928 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 8965 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14936 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 8972 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 14944 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 8976 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 14952 "parser.c" /* yacc.c:1646  */
    break;

  case 1214:
#line 8986 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 14961 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8997 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 14969 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 9006 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14977 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 9011 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14986 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 9018 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14992 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 9019 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14998 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 9024 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15006 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 9029 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15014 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 9036 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15022 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 9040 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 15030 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 9048 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15038 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 9055 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 15046 "parser.c" /* yacc.c:1646  */
    break;

  case 1227:
#line 9059 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 15054 "parser.c" /* yacc.c:1646  */
    break;

  case 1228:
#line 9069 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 15065 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 9076 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 15073 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 9092 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15079 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 9093 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15085 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 9097 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15091 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 9098 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15097 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 9105 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15105 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 9114 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 15113 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 9126 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 15121 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 9130 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 15129 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 9134 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 15139 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 9140 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 15149 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 9146 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 15157 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 9150 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 15165 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 9154 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 15173 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 9158 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 15181 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 9167 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 15189 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 9171 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15197 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 9180 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 15205 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 9194 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15213 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 9208 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 15221 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 9212 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 15229 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 9221 "parser.y" /* yacc.c:1646  */
    {
	  cb_emit_set_last_exception_to_off ();
  }
#line 15237 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 9230 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 15245 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 9238 "parser.y" /* yacc.c:1646  */
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
#line 15270 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 9259 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 15280 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 9268 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15288 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 9273 "parser.y" /* yacc.c:1646  */
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
#line 15308 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 9291 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15314 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 9292 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15320 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 9297 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 15329 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 9304 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 15335 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 9305 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 15341 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 9310 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 15351 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 9316 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 15365 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 9326 "parser.y" /* yacc.c:1646  */
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
#line 15381 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 9341 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 15391 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 9347 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15405 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 9357 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15419 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 9373 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 15428 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 9383 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 15441 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 9395 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15449 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 9399 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15457 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 9406 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15465 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 9410 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 15474 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 9415 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 15483 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 9420 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 15492 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 9427 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 15498 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 9428 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 15504 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9429 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 15510 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 9430 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 15516 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 9431 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 15522 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9432 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 15528 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9437 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 15537 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9450 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 15545 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9454 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 15553 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9464 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 15561 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9468 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 15571 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 9474 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL, 1, DEVICE_DISPLAY);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 15584 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 9486 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 15592 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9490 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15600 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9494 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15608 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 9498 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15620 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9506 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 15632 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 9517 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15640 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 9521 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15648 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9527 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15654 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9528 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 15660 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9529 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 15666 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9530 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 15672 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9537 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 15680 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 9546 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15688 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9552 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15694 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 9553 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15700 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 9557 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15706 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9558 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 15712 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9559 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 15718 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9563 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15724 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9564 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15730 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 9569 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 15738 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9573 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 15746 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9583 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 15754 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9592 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 15762 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 9596 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 15770 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9600 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 15778 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 9607 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 15786 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 9611 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 15794 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9621 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	CB_PENDING("SUPPRESS");
  }
#line 15807 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9639 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	CB_PENDING("TERMINATE");
  }
#line 15816 "parser.c" /* yacc.c:1646  */
    break;

  case 1340:
#line 9648 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15826 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 9654 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15836 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9665 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 15844 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 9673 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 15855 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 9686 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 15863 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 9694 "parser.y" /* yacc.c:1646  */
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
#line 15878 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9710 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 15886 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9720 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15894 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9726 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15900 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9728 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15906 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9732 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15912 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9734 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15918 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9739 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15926 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9745 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15932 "parser.c" /* yacc.c:1646  */
    break;

  case 1357:
#line 9747 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15938 "parser.c" /* yacc.c:1646  */
    break;

  case 1358:
#line 9752 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15946 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9758 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15952 "parser.c" /* yacc.c:1646  */
    break;

  case 1360:
#line 9759 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15958 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9763 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15964 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9764 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15970 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9768 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15976 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9769 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15982 "parser.c" /* yacc.c:1646  */
    break;

  case 1365:
#line 9774 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 15990 "parser.c" /* yacc.c:1646  */
    break;

  case 1366:
#line 9778 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 15998 "parser.c" /* yacc.c:1646  */
    break;

  case 1367:
#line 9788 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 16007 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9806 "parser.y" /* yacc.c:1646  */
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
#line 16033 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9831 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 16041 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9835 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 16054 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9847 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			set_up_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 16068 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9857 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 16077 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9862 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 16086 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9867 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 16095 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9872 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 16104 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9880 "parser.y" /* yacc.c:1646  */
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
#line 16143 "parser.c" /* yacc.c:1646  */
    break;

  case 1385:
#line 9923 "parser.y" /* yacc.c:1646  */
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
#line 16187 "parser.c" /* yacc.c:1646  */
    break;

  case 1386:
#line 9963 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 16201 "parser.c" /* yacc.c:1646  */
    break;

  case 1387:
#line 9973 "parser.y" /* yacc.c:1646  */
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
#line 16226 "parser.c" /* yacc.c:1646  */
    break;

  case 1392:
#line 10003 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 16236 "parser.c" /* yacc.c:1646  */
    break;

  case 1393:
#line 10012 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM START");
  }
#line 16246 "parser.c" /* yacc.c:1646  */
    break;

  case 1394:
#line 10018 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM END");
  }
#line 16256 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 10028 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	CB_PENDING ("USE BEFORE REPORTING");
  }
#line 16266 "parser.c" /* yacc.c:1646  */
    break;

  case 1396:
#line 10037 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 16276 "parser.c" /* yacc.c:1646  */
    break;

  case 1399:
#line 10053 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 16287 "parser.c" /* yacc.c:1646  */
    break;

  case 1401:
#line 10065 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 16298 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 10074 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16304 "parser.c" /* yacc.c:1646  */
    break;

  case 1403:
#line 10075 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16310 "parser.c" /* yacc.c:1646  */
    break;

  case 1404:
#line 10080 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 16318 "parser.c" /* yacc.c:1646  */
    break;

  case 1405:
#line 10084 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16326 "parser.c" /* yacc.c:1646  */
    break;

  case 1406:
#line 10088 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16334 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 10092 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 16342 "parser.c" /* yacc.c:1646  */
    break;

  case 1408:
#line 10098 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 16348 "parser.c" /* yacc.c:1646  */
    break;

  case 1409:
#line 10099 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 16354 "parser.c" /* yacc.c:1646  */
    break;

  case 1413:
#line 10110 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 16362 "parser.c" /* yacc.c:1646  */
    break;

  case 1414:
#line 10114 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 16370 "parser.c" /* yacc.c:1646  */
    break;

  case 1417:
#line 10128 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT EXCEPTION before EXCEPTION");
	}
  }
#line 16380 "parser.c" /* yacc.c:1646  */
    break;

  case 1418:
#line 10137 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16386 "parser.c" /* yacc.c:1646  */
    break;

  case 1419:
#line 10139 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16392 "parser.c" /* yacc.c:1646  */
    break;

  case 1420:
#line 10144 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16401 "parser.c" /* yacc.c:1646  */
    break;

  case 1425:
#line 10162 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16410 "parser.c" /* yacc.c:1646  */
    break;

  case 1430:
#line 10178 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT EXCEPTION before EXCEPTION");
	}
  }
#line 16420 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 10187 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16426 "parser.c" /* yacc.c:1646  */
    break;

  case 1432:
#line 10189 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16432 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 10194 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16441 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 10207 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16450 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 10219 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT SIZE ERROR before SIZE ERROR");
	}
  }
#line 16460 "parser.c" /* yacc.c:1646  */
    break;

  case 1440:
#line 10228 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16466 "parser.c" /* yacc.c:1646  */
    break;

  case 1441:
#line 10230 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16472 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 10235 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16481 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 10248 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16490 "parser.c" /* yacc.c:1646  */
    break;

  case 1448:
#line 10260 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT OVERFLOW before OVERFLOW");
	}
  }
#line 16500 "parser.c" /* yacc.c:1646  */
    break;

  case 1449:
#line 10269 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16506 "parser.c" /* yacc.c:1646  */
    break;

  case 1450:
#line 10271 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16512 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 10276 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16521 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 10289 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16530 "parser.c" /* yacc.c:1646  */
    break;

  case 1460:
#line 10315 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16539 "parser.c" /* yacc.c:1646  */
    break;

  case 1463:
#line 10328 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16548 "parser.c" /* yacc.c:1646  */
    break;

  case 1465:
#line 10339 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END-OF-PAGE before AT END-OF-PAGE");
	}
  }
#line 16558 "parser.c" /* yacc.c:1646  */
    break;

  case 1466:
#line 10348 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16564 "parser.c" /* yacc.c:1646  */
    break;

  case 1467:
#line 10350 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16570 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 10355 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16579 "parser.c" /* yacc.c:1646  */
    break;

  case 1471:
#line 10368 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16588 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 10384 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT INVALID KEY before INVALID KEY");
	}
  }
#line 16598 "parser.c" /* yacc.c:1646  */
    break;

  case 1476:
#line 10393 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16604 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 10395 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16610 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 10400 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16619 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 10413 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16628 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 10423 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 16636 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 10427 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16644 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 10437 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 16652 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 10444 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 16660 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 10450 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 16669 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 10455 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 16677 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 10468 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 16689 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 10476 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 16695 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 10477 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 16701 "parser.c" /* yacc.c:1646  */
    break;

  case 1494:
#line 10479 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 16707 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 10480 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 16713 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 10481 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 16719 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 10482 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 16725 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10483 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 16731 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 10485 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 16737 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10486 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 16743 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10487 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 16749 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 10488 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 16755 "parser.c" /* yacc.c:1646  */
    break;

  case 1503:
#line 10489 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 16761 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 10490 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 16767 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 10492 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 16773 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10493 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 16779 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 10494 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 16785 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 10496 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 16791 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10497 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 16797 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 10498 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 16803 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 10499 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 16809 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 10500 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 16815 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 10503 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 16821 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10504 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 16827 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 10534 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16835 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 10538 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16843 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10549 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 16849 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10550 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 16855 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 10551 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16861 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 10555 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 16867 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10556 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 16873 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 10557 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16879 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 10562 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 16887 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10565 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16893 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10569 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16899 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10570 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 16905 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10571 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16911 "parser.c" /* yacc.c:1646  */
    break;

  case 1539:
#line 10574 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16917 "parser.c" /* yacc.c:1646  */
    break;

  case 1540:
#line 10575 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16923 "parser.c" /* yacc.c:1646  */
    break;

  case 1541:
#line 10586 "parser.y" /* yacc.c:1646  */
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
#line 16939 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10598 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16952 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10607 "parser.y" /* yacc.c:1646  */
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
#line 16968 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10619 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16981 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10628 "parser.y" /* yacc.c:1646  */
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
#line 16997 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10640 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17010 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10654 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17016 "parser.c" /* yacc.c:1646  */
    break;

  case 1548:
#line 10656 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 17022 "parser.c" /* yacc.c:1646  */
    break;

  case 1549:
#line 10661 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 17030 "parser.c" /* yacc.c:1646  */
    break;

  case 1550:
#line 10669 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 17036 "parser.c" /* yacc.c:1646  */
    break;

  case 1551:
#line 10676 "parser.y" /* yacc.c:1646  */
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
#line 17055 "parser.c" /* yacc.c:1646  */
    break;

  case 1552:
#line 10696 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17063 "parser.c" /* yacc.c:1646  */
    break;

  case 1553:
#line 10700 "parser.y" /* yacc.c:1646  */
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
#line 17085 "parser.c" /* yacc.c:1646  */
    break;

  case 1554:
#line 10721 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17098 "parser.c" /* yacc.c:1646  */
    break;

  case 1555:
#line 10762 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17111 "parser.c" /* yacc.c:1646  */
    break;

  case 1556:
#line 10775 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17117 "parser.c" /* yacc.c:1646  */
    break;

  case 1557:
#line 10777 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17123 "parser.c" /* yacc.c:1646  */
    break;

  case 1558:
#line 10781 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17129 "parser.c" /* yacc.c:1646  */
    break;

  case 1559:
#line 10787 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17135 "parser.c" /* yacc.c:1646  */
    break;

  case 1560:
#line 10789 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17141 "parser.c" /* yacc.c:1646  */
    break;

  case 1561:
#line 10794 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 17154 "parser.c" /* yacc.c:1646  */
    break;

  case 1564:
#line 10808 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17162 "parser.c" /* yacc.c:1646  */
    break;

  case 1565:
#line 10815 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 17172 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10825 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17178 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10826 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17184 "parser.c" /* yacc.c:1646  */
    break;

  case 1568:
#line 10831 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17193 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10839 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17202 "parser.c" /* yacc.c:1646  */
    break;

  case 1570:
#line 10847 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17210 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10851 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17218 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10858 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17228 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 10874 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 17241 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10883 "parser.y" /* yacc.c:1646  */
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
#line 17251 "parser.c" /* yacc.c:1646  */
    break;

  case 1577:
#line 10894 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 17265 "parser.c" /* yacc.c:1646  */
    break;

  case 1578:
#line 10911 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17273 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10915 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17281 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10924 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17289 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10930 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17295 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10931 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17301 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10936 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17309 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 10940 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17317 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 10951 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17325 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 10955 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17333 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 10959 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17341 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 10963 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 17349 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 10967 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17357 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 10971 "parser.y" /* yacc.c:1646  */
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
#line 17379 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 10992 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17387 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 10996 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17395 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 11013 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17403 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 11017 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17411 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 11021 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17419 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 11055 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17427 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 11063 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17435 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 11072 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17443 "parser.c" /* yacc.c:1646  */
    break;

  case 1624:
#line 11077 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 17451 "parser.c" /* yacc.c:1646  */
    break;

  case 1625:
#line 11084 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17459 "parser.c" /* yacc.c:1646  */
    break;

  case 1627:
#line 11092 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17467 "parser.c" /* yacc.c:1646  */
    break;

  case 1629:
#line 11100 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17475 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 11110 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17481 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 11114 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 17487 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 11118 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17493 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 11119 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17499 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 11123 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17505 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 11128 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17516 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 11135 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17527 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 11142 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17538 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 11149 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17549 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 11159 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 17557 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 11166 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17571 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 11176 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17585 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 11186 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17599 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 11196 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17613 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 11209 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17621 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 11213 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17630 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 11221 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 17639 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 11229 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 17647 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 11233 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 17656 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 11243 "parser.y" /* yacc.c:1646  */
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
#line 17671 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 11257 "parser.y" /* yacc.c:1646  */
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
#line 17695 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 11280 "parser.y" /* yacc.c:1646  */
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
#line 17718 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 11302 "parser.y" /* yacc.c:1646  */
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
#line 17738 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 11317 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17744 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 11318 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17750 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 11319 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17756 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 11320 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17762 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 11321 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17768 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 11322 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17774 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 11327 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17782 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 11331 "parser.y" /* yacc.c:1646  */
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
#line 17800 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 11348 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17808 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 11352 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17816 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 11358 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17822 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 11359 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17828 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 11360 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17834 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 11361 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17840 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 11362 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17846 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 11363 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17852 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 11364 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17858 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 11371 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 17866 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 11375 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 17874 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 11379 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17882 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 11383 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17890 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 11387 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 17898 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 11391 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17906 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 11395 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17914 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 11399 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17922 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11403 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17930 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 11407 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17938 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 11411 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 17946 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11415 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 17954 "parser.c" /* yacc.c:1646  */
    break;

  case 1693:
#line 11440 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17962 "parser.c" /* yacc.c:1646  */
    break;

  case 1694:
#line 11444 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 17970 "parser.c" /* yacc.c:1646  */
    break;

  case 1695:
#line 11448 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 17978 "parser.c" /* yacc.c:1646  */
    break;

  case 1696:
#line 11455 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17986 "parser.c" /* yacc.c:1646  */
    break;

  case 1697:
#line 11459 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17994 "parser.c" /* yacc.c:1646  */
    break;

  case 1698:
#line 11463 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18002 "parser.c" /* yacc.c:1646  */
    break;

  case 1699:
#line 11470 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 18013 "parser.c" /* yacc.c:1646  */
    break;

  case 1700:
#line 11477 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 18024 "parser.c" /* yacc.c:1646  */
    break;

  case 1701:
#line 11484 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 18035 "parser.c" /* yacc.c:1646  */
    break;

  case 1702:
#line 11494 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18046 "parser.c" /* yacc.c:1646  */
    break;

  case 1703:
#line 11501 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 18057 "parser.c" /* yacc.c:1646  */
    break;

  case 1704:
#line 11511 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18068 "parser.c" /* yacc.c:1646  */
    break;

  case 1705:
#line 11518 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 18079 "parser.c" /* yacc.c:1646  */
    break;

  case 1706:
#line 11528 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18087 "parser.c" /* yacc.c:1646  */
    break;

  case 1707:
#line 11532 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18101 "parser.c" /* yacc.c:1646  */
    break;

  case 1708:
#line 11545 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18109 "parser.c" /* yacc.c:1646  */
    break;

  case 1709:
#line 11549 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18123 "parser.c" /* yacc.c:1646  */
    break;

  case 1710:
#line 11563 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 18131 "parser.c" /* yacc.c:1646  */
    break;

  case 1711:
#line 11571 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18137 "parser.c" /* yacc.c:1646  */
    break;

  case 1712:
#line 11572 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18143 "parser.c" /* yacc.c:1646  */
    break;

  case 1713:
#line 11576 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18149 "parser.c" /* yacc.c:1646  */
    break;

  case 1714:
#line 11577 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18155 "parser.c" /* yacc.c:1646  */
    break;

  case 1715:
#line 11581 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18161 "parser.c" /* yacc.c:1646  */
    break;

  case 1716:
#line 11582 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18167 "parser.c" /* yacc.c:1646  */
    break;

  case 1717:
#line 11587 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18175 "parser.c" /* yacc.c:1646  */
    break;

  case 1718:
#line 11591 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18183 "parser.c" /* yacc.c:1646  */
    break;

  case 1719:
#line 11598 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18191 "parser.c" /* yacc.c:1646  */
    break;

  case 1720:
#line 11602 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18199 "parser.c" /* yacc.c:1646  */
    break;

  case 1721:
#line 11609 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18205 "parser.c" /* yacc.c:1646  */
    break;

  case 1722:
#line 11610 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18211 "parser.c" /* yacc.c:1646  */
    break;

  case 1723:
#line 11611 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 18217 "parser.c" /* yacc.c:1646  */
    break;

  case 1724:
#line 11615 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18223 "parser.c" /* yacc.c:1646  */
    break;

  case 1725:
#line 11616 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 18229 "parser.c" /* yacc.c:1646  */
    break;

  case 1726:
#line 11620 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 18235 "parser.c" /* yacc.c:1646  */
    break;

  case 1727:
#line 11621 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18241 "parser.c" /* yacc.c:1646  */
    break;

  case 1728:
#line 11622 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18247 "parser.c" /* yacc.c:1646  */
    break;

  case 1729:
#line 11627 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 18255 "parser.c" /* yacc.c:1646  */
    break;

  case 1730:
#line 11631 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 18268 "parser.c" /* yacc.c:1646  */
    break;

  case 1731:
#line 11643 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 18277 "parser.c" /* yacc.c:1646  */
    break;

  case 1732:
#line 11648 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 18286 "parser.c" /* yacc.c:1646  */
    break;

  case 1733:
#line 11656 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 18294 "parser.c" /* yacc.c:1646  */
    break;

  case 1734:
#line 11660 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 18302 "parser.c" /* yacc.c:1646  */
    break;

  case 1735:
#line 11664 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 18310 "parser.c" /* yacc.c:1646  */
    break;

  case 1736:
#line 11668 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 18318 "parser.c" /* yacc.c:1646  */
    break;

  case 1737:
#line 11672 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 18326 "parser.c" /* yacc.c:1646  */
    break;

  case 1738:
#line 11676 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 18334 "parser.c" /* yacc.c:1646  */
    break;

  case 1739:
#line 11680 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 18342 "parser.c" /* yacc.c:1646  */
    break;

  case 1740:
#line 11684 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 18350 "parser.c" /* yacc.c:1646  */
    break;

  case 1741:
#line 11690 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18356 "parser.c" /* yacc.c:1646  */
    break;

  case 1742:
#line 11691 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18362 "parser.c" /* yacc.c:1646  */
    break;


#line 18366 "parser.c" /* yacc.c:1646  */
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
#line 11863 "parser.y" /* yacc.c:1906  */

