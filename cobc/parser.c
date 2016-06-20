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

#define PENDING(x)		cb_warning (_("'%s' not implemented"), x)

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

	if (depth > 0 && first_nested_program) {
		check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0);
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

static /* COB_INLINE COB_A_INLINE */ int
contains_only_screen_field (struct cb_list *x_list)
{
	return (cb_tree) x_list != cb_null
		&& cb_list_length ((cb_tree) x_list) == 1
		&& is_screen_field (x_list->value);
}

static COB_INLINE COB_A_INLINE void
emit_default_screen_display (cb_tree x_list)
{
	cb_emit_display (x_list, cb_null, cb_int1, NULL, NULL);
}

static cb_tree
get_default_display_device ()
{
	if (current_program->flag_console_is_crt) {
		return cb_null;
	} else {
		return cb_int0;
	}
}

static void
emit_default_device_display (cb_tree x_list)
{
	cb_emit_display (x_list, get_default_display_device (), cb_int1, NULL,
			 NULL);
}

static void
emit_default_displays_for_x_list (struct cb_list *x_list)
{
	struct cb_list	*elt;
	cb_tree	        value;
	cb_tree		device_display_x_list = NULL;
	int	        display_on_crt = current_program->flag_console_is_crt;

	for (elt = x_list; elt; elt = (struct cb_list *) elt->chain) {
		/* Get the list element value */
		if (CB_REFERENCE_P (elt->value)) {
			value = cb_ref (elt->value);
		} else {
			value = elt->value;
		}

		if (is_screen_field (value)) {
			/*
			  Emit DISPLAY for previous values before emitting
			  screen DISPLAY
			*/
			if (device_display_x_list != NULL) {
				emit_default_device_display (device_display_x_list);
				begin_implicit_statement ();

				device_display_x_list = NULL;
			}

			emit_default_screen_display (CB_LIST_INIT (elt->value));
			begin_implicit_statement ();
		} else {
			if (display_on_crt) {
				cb_error ("Cannot display item upon CRT without LINE or COLUMN");
				return;
			}

			/* Add value to list for screen DISPLAY */
			if (device_display_x_list == NULL) {
				device_display_x_list = CB_LIST_INIT (elt->value);
			} else {
				cb_list_add (device_display_x_list, elt->value);
			}
		}
	}

	/* Emit screen DISPLAY for remaining values */
	if (device_display_x_list != NULL) {
		emit_default_device_display (device_display_x_list);
		begin_implicit_statement ();
	}
}

static void
error_if_no_advancing_in_screen_display (cb_tree advancing)
{
	if (advancing_value != cb_int1) {
		cb_error (_("Cannot specify NO ADVANCING in screen DISPLAY"));
	}
}


#line 1354 "parser.c" /* yacc.c:339  */

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

#line 1931 "parser.c" /* yacc.c:358  */

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
#define YYLAST   8908

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  525
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  852
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1979
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2815

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
       0,  1944,  1944,  1944,  1977,  1978,  1982,  1983,  1987,  1988,
    1992,  1992,  2015,  2026,  2032,  2033,  2037,  2038,  2042,  2050,
    2059,  2067,  2068,  2073,  2072,  2085,  2096,  2107,  2111,  2112,
    2116,  2117,  2120,  2121,  2125,  2134,  2143,  2144,  2148,  2149,
    2153,  2157,  2167,  2172,  2173,  2182,  2189,  2190,  2200,  2201,
    2202,  2203,  2204,  2217,  2216,  2226,  2227,  2230,  2231,  2245,
    2244,  2254,  2255,  2256,  2257,  2261,  2262,  2266,  2267,  2268,
    2269,  2273,  2281,  2288,  2295,  2306,  2310,  2314,  2318,  2325,
    2326,  2331,  2333,  2332,  2343,  2344,  2345,  2352,  2353,  2357,
    2361,  2367,  2372,  2375,  2382,  2387,  2397,  2398,  2410,  2411,
    2415,  2416,  2420,  2421,  2425,  2426,  2427,  2428,  2429,  2430,
    2431,  2432,  2433,  2434,  2435,  2436,  2444,  2443,  2471,  2481,
    2494,  2502,  2505,  2506,  2510,  2517,  2532,  2553,  2552,  2576,
    2582,  2588,  2594,  2600,  2606,  2616,  2620,  2627,  2631,  2636,
    2635,  2646,  2650,  2657,  2658,  2659,  2660,  2661,  2662,  2666,
    2667,  2674,  2689,  2692,  2699,  2707,  2711,  2722,  2742,  2750,
    2761,  2762,  2768,  2789,  2790,  2794,  2798,  2819,  2842,  2924,
    2927,  2936,  2955,  2971,  2989,  3007,  3024,  3041,  3051,  3052,
    3059,  3060,  3068,  3069,  3079,  3080,  3085,  3084,  3114,  3115,
    3119,  3120,  3121,  3122,  3123,  3124,  3125,  3126,  3127,  3128,
    3129,  3130,  3131,  3138,  3144,  3154,  3167,  3180,  3207,  3208,
    3209,  3213,  3214,  3215,  3216,  3219,  3220,  3226,  3227,  3231,
    3235,  3236,  3241,  3244,  3245,  3252,  3260,  3261,  3262,  3269,
    3293,  3295,  3300,  3310,  3318,  3333,  3340,  3342,  3343,  3349,
    3349,  3356,  3361,  3366,  3373,  3374,  3375,  3379,  3390,  3391,
    3395,  3400,  3405,  3410,  3421,  3432,  3442,  3450,  3451,  3452,
    3458,  3469,  3476,  3477,  3483,  3491,  3492,  3493,  3499,  3500,
    3501,  3508,  3509,  3513,  3514,  3520,  3548,  3549,  3550,  3551,
    3558,  3557,  3573,  3574,  3578,  3581,  3582,  3592,  3589,  3605,
    3606,  3614,  3615,  3623,  3624,  3628,  3649,  3648,  3665,  3672,
    3676,  3682,  3683,  3687,  3697,  3712,  3713,  3714,  3715,  3716,
    3717,  3718,  3719,  3720,  3727,  3734,  3734,  3734,  3740,  3760,
    3794,  3825,  3826,  3833,  3834,  3838,  3839,  3846,  3857,  3862,
    3873,  3874,  3878,  3879,  3885,  3896,  3914,  3915,  3919,  3920,
    3921,  3925,  3932,  3939,  3948,  3957,  3958,  3959,  3960,  3961,
    3970,  3971,  3977,  4012,  4013,  4026,  4041,  4042,  4046,  4056,
    4070,  4072,  4071,  4087,  4090,  4090,  4107,  4108,  4112,  4114,
    4113,  4148,  4161,  4169,  4174,  4180,  4189,  4199,  4202,  4214,
    4215,  4216,  4217,  4221,  4225,  4229,  4233,  4237,  4241,  4245,
    4249,  4253,  4257,  4261,  4265,  4269,  4280,  4281,  4285,  4286,
    4290,  4291,  4292,  4296,  4297,  4301,  4327,  4331,  4340,  4344,
    4353,  4354,  4355,  4356,  4357,  4358,  4359,  4360,  4361,  4362,
    4363,  4364,  4365,  4366,  4373,  4397,  4425,  4428,  4437,  4462,
    4473,  4474,  4478,  4482,  4486,  4490,  4494,  4498,  4502,  4506,
    4510,  4514,  4518,  4522,  4526,  4531,  4536,  4540,  4544,  4552,
    4556,  4560,  4568,  4572,  4576,  4580,  4584,  4588,  4592,  4596,
    4600,  4608,  4616,  4620,  4624,  4628,  4632,  4636,  4644,  4645,
    4649,  4650,  4656,  4662,  4674,  4692,  4693,  4702,  4734,  4764,
    4765,  4769,  4770,  4773,  4774,  4780,  4781,  4788,  4789,  4796,
    4820,  4821,  4838,  4839,  4842,  4843,  4850,  4851,  4856,  4867,
    4878,  4889,  4900,  4929,  4928,  4937,  4938,  4942,  4943,  4946,
    4947,  4960,  4973,  4994,  5003,  5017,  5019,  5018,  5038,  5040,
    5039,  5055,  5057,  5056,  5065,  5066,  5073,  5072,  5085,  5086,
    5087,  5094,  5099,  5103,  5104,  5110,  5117,  5121,  5122,  5128,
    5165,  5169,  5174,  5180,  5181,  5186,  5187,  5188,  5189,  5190,
    5194,  5201,  5208,  5215,  5222,  5228,  5229,  5234,  5233,  5240,
    5241,  5245,  5246,  5247,  5248,  5249,  5250,  5251,  5252,  5253,
    5254,  5255,  5256,  5257,  5258,  5259,  5260,  5264,  5271,  5272,
    5273,  5274,  5275,  5276,  5277,  5280,  5281,  5282,  5285,  5286,
    5290,  5297,  5303,  5304,  5308,  5309,  5313,  5320,  5324,  5331,
    5332,  5336,  5343,  5344,  5348,  5349,  5353,  5354,  5355,  5359,
    5360,  5364,  5365,  5369,  5376,  5383,  5391,  5393,  5392,  5413,
    5414,  5418,  5419,  5423,  5425,  5424,  5495,  5513,  5514,  5518,
    5523,  5528,  5532,  5536,  5541,  5546,  5551,  5556,  5560,  5564,
    5569,  5574,  5579,  5583,  5587,  5591,  5595,  5600,  5604,  5608,
    5613,  5618,  5623,  5628,  5629,  5630,  5631,  5632,  5633,  5634,
    5635,  5636,  5645,  5650,  5661,  5662,  5666,  5667,  5671,  5672,
    5676,  5677,  5682,  5685,  5689,  5697,  5700,  5704,  5712,  5723,
    5731,  5733,  5743,  5732,  5770,  5770,  5803,  5807,  5806,  5820,
    5819,  5839,  5840,  5845,  5867,  5869,  5873,  5884,  5886,  5894,
    5902,  5910,  5939,  5972,  5975,  5988,  5993,  6003,  6034,  6036,
    6035,  6072,  6073,  6077,  6078,  6079,  6096,  6097,  6108,  6107,
    6157,  6158,  6162,  6210,  6223,  6226,  6245,  6250,  6244,  6263,
    6263,  6293,  6300,  6301,  6302,  6303,  6304,  6305,  6306,  6307,
    6308,  6309,  6310,  6311,  6312,  6313,  6314,  6315,  6316,  6317,
    6318,  6319,  6320,  6321,  6322,  6323,  6324,  6325,  6326,  6327,
    6328,  6329,  6330,  6331,  6332,  6333,  6334,  6335,  6336,  6337,
    6338,  6339,  6340,  6341,  6342,  6343,  6344,  6345,  6346,  6347,
    6348,  6349,  6363,  6375,  6374,  6390,  6389,  6400,  6404,  6408,
    6413,  6418,  6423,  6428,  6432,  6436,  6440,  6444,  6449,  6453,
    6457,  6461,  6465,  6469,  6473,  6480,  6481,  6487,  6489,  6493,
    6494,  6498,  6499,  6503,  6507,  6511,  6512,  6516,  6528,  6540,
    6551,  6555,  6556,  6560,  6567,  6571,  6577,  6581,  6585,  6589,
    6593,  6599,  6603,  6607,  6613,  6617,  6621,  6625,  6629,  6633,
    6637,  6641,  6645,  6649,  6653,  6659,  6663,  6667,  6671,  6675,
    6679,  6683,  6690,  6691,  6695,  6699,  6717,  6716,  6725,  6729,
    6733,  6739,  6740,  6747,  6751,  6762,  6761,  6770,  6774,  6786,
    6787,  6795,  6794,  6803,  6804,  6808,  6814,  6814,  6821,  6820,
    6831,  6858,  6862,  6867,  6872,  6893,  6897,  6896,  6913,  6914,
    6919,  6927,  6951,  6953,  6957,  6966,  6979,  6982,  6986,  6990,
    6995,  7018,  7019,  7023,  7024,  7028,  7032,  7036,  7046,  7050,
    7057,  7061,  7069,  7073,  7080,  7087,  7091,  7102,  7101,  7109,
    7113,  7124,  7123,  7131,  7136,  7144,  7145,  7146,  7147,  7148,
    7156,  7155,  7164,  7171,  7175,  7185,  7196,  7214,  7213,  7222,
    7226,  7230,  7235,  7243,  7247,  7258,  7257,  7267,  7271,  7275,
    7279,  7283,  7287,  7292,  7299,  7300,  7305,  7304,  7363,  7367,
    7375,  7376,  7380,  7384,  7389,  7393,  7394,  7398,  7402,  7406,
    7410,  7414,  7415,  7419,  7423,  7429,  7435,  7439,  7443,  7449,
    7455,  7461,  7467,  7471,  7475,  7479,  7483,  7487,  7491,  7495,
    7502,  7506,  7517,  7516,  7525,  7529,  7533,  7537,  7541,  7548,
    7552,  7563,  7562,  7571,  7590,  7589,  7613,  7621,  7622,  7627,
    7638,  7649,  7663,  7667,  7674,  7675,  7680,  7689,  7698,  7703,
    7712,  7713,  7718,  7780,  7781,  7782,  7786,  7787,  7791,  7795,
    7806,  7805,  7817,  7818,  7839,  7853,  7875,  7897,  7917,  7940,
    7941,  7949,  7948,  7957,  7968,  7967,  7977,  7984,  7983,  7996,
    8005,  8009,  8020,  8036,  8035,  8044,  8048,  8052,  8059,  8063,
    8074,  8073,  8081,  8089,  8090,  8094,  8095,  8096,  8101,  8104,
    8111,  8115,  8123,  8130,  8131,  8132,  8133,  8134,  8135,  8136,
    8141,  8144,  8154,  8153,  8162,  8168,  8180,  8179,  8188,  8192,
    8196,  8200,  8207,  8208,  8209,  8210,  8217,  8216,  8237,  8247,
    8256,  8260,  8267,  8272,  8277,  8282,  8287,  8292,  8300,  8301,
    8305,  8310,  8316,  8318,  8319,  8320,  8321,  8325,  8353,  8356,
    8360,  8364,  8368,  8375,  8382,  8392,  8391,  8404,  8403,  8411,
    8415,  8426,  8425,  8434,  8438,  8445,  8449,  8460,  8459,  8467,
    8488,  8512,  8513,  8514,  8515,  8519,  8520,  8524,  8525,  8526,
    8527,  8539,  8538,  8549,  8555,  8554,  8565,  8573,  8581,  8588,
    8592,  8605,  8612,  8624,  8627,  8632,  8636,  8647,  8654,  8655,
    8659,  8660,  8663,  8664,  8669,  8680,  8679,  8688,  8715,  8716,
    8721,  8724,  8728,  8732,  8736,  8740,  8744,  8751,  8752,  8756,
    8757,  8761,  8765,  8775,  8786,  8785,  8793,  8803,  8814,  8813,
    8822,  8829,  8833,  8844,  8843,  8855,  8864,  8867,  8871,  8878,
    8882,  8892,  8904,  8903,  8912,  8916,  8925,  8926,  8931,  8934,
    8942,  8946,  8953,  8961,  8965,  8976,  8975,  8989,  8990,  8991,
    8992,  8993,  8994,  8995,  8999,  9000,  9004,  9005,  9011,  9020,
    9027,  9028,  9032,  9036,  9040,  9046,  9052,  9056,  9060,  9064,
    9073,  9077,  9086,  9095,  9096,  9100,  9109,  9110,  9114,  9118,
    9127,  9137,  9136,  9145,  9144,  9175,  9178,  9198,  9199,  9202,
    9203,  9211,  9212,  9217,  9222,  9232,  9248,  9253,  9263,  9280,
    9279,  9289,  9302,  9305,  9313,  9316,  9321,  9326,  9334,  9335,
    9336,  9337,  9338,  9339,  9343,  9351,  9352,  9356,  9360,  9371,
    9370,  9380,  9393,  9396,  9400,  9404,  9412,  9424,  9427,  9434,
    9435,  9436,  9437,  9444,  9443,  9452,  9459,  9460,  9464,  9465,
    9466,  9470,  9471,  9475,  9479,  9490,  9489,  9498,  9502,  9506,
    9513,  9517,  9527,  9538,  9539,  9546,  9545,  9554,  9560,  9572,
    9571,  9579,  9593,  9592,  9600,  9617,  9616,  9625,  9633,  9634,
    9639,  9640,  9645,  9652,  9653,  9658,  9665,  9666,  9670,  9671,
    9675,  9676,  9680,  9684,  9695,  9694,  9703,  9704,  9705,  9706,
    9707,  9711,  9738,  9741,  9753,  9763,  9768,  9773,  9778,  9786,
    9824,  9825,  9829,  9869,  9879,  9902,  9903,  9904,  9905,  9909,
    9918,  9924,  9934,  9943,  9952,  9953,  9960,  9959,  9971,  9981,
    9982,  9987,  9990,  9994,  9998, 10005, 10006, 10010, 10011, 10012,
   10016, 10020, 10032, 10033, 10034, 10043, 10045, 10050, 10058, 10059,
   10063, 10064, 10068, 10076, 10077, 10082, 10083, 10084, 10093, 10095,
   10100, 10108, 10109, 10113, 10123, 10124, 10125, 10134, 10136, 10141,
   10149, 10150, 10154, 10164, 10165, 10166, 10175, 10177, 10182, 10190,
   10191, 10195, 10206, 10210, 10212, 10216, 10217, 10221, 10229, 10230,
   10234, 10244, 10245, 10254, 10256, 10261, 10269, 10270, 10274, 10284,
   10285, 10289, 10290, 10299, 10301, 10306, 10314, 10315, 10319, 10329,
   10333, 10343, 10350, 10357, 10357, 10368, 10369, 10370, 10374, 10383,
   10384, 10386, 10387, 10388, 10389, 10390, 10392, 10393, 10394, 10395,
   10396, 10397, 10399, 10400, 10401, 10403, 10404, 10405, 10406, 10407,
   10410, 10411, 10415, 10416, 10420, 10421, 10425, 10426, 10430, 10434,
   10440, 10444, 10450, 10451, 10452, 10456, 10457, 10458, 10462, 10463,
   10464, 10468, 10472, 10476, 10477, 10478, 10481, 10482, 10492, 10504,
   10513, 10525, 10534, 10546, 10561, 10562, 10567, 10576, 10582, 10602,
   10606, 10627, 10668, 10682, 10683, 10688, 10694, 10695, 10700, 10712,
   10713, 10714, 10721, 10732, 10733, 10737, 10745, 10753, 10757, 10764,
   10773, 10774, 10780, 10789, 10800, 10817, 10821, 10828, 10829, 10830,
   10837, 10838, 10842, 10846, 10853, 10854, 10855, 10856, 10857, 10861,
   10865, 10869, 10873, 10877, 10898, 10902, 10909, 10910, 10911, 10915,
   10916, 10917, 10918, 10919, 10923, 10927, 10934, 10935, 10939, 10940,
   10944, 10945, 10949, 10950, 10961, 10965, 10969, 10973, 10974, 10978,
   10982, 10983, 10990, 10994, 10998, 11002, 11006, 11010, 11011, 11017,
   11021, 11025, 11026, 11030, 11034, 11041, 11048, 11055, 11065, 11072,
   11082, 11092, 11102, 11115, 11119, 11127, 11135, 11139, 11149, 11163,
   11186, 11208, 11224, 11225, 11226, 11227, 11228, 11229, 11233, 11237,
   11254, 11258, 11265, 11266, 11267, 11268, 11269, 11270, 11271, 11277,
   11281, 11285, 11289, 11293, 11297, 11301, 11305, 11309, 11313, 11317,
   11321, 11328, 11329, 11333, 11334, 11335, 11339, 11340, 11341, 11342,
   11346, 11350, 11354, 11361, 11365, 11369, 11376, 11383, 11390, 11400,
   11407, 11417, 11424, 11434, 11438, 11451, 11455, 11470, 11478, 11479,
   11483, 11484, 11488, 11489, 11494, 11497, 11505, 11508, 11515, 11517,
   11518, 11522, 11523, 11527, 11528, 11529, 11534, 11537, 11550, 11554,
   11562, 11566, 11570, 11574, 11578, 11582, 11586, 11590, 11597, 11598,
   11604, 11605, 11606, 11607, 11608, 11609, 11610, 11611, 11612, 11613,
   11614, 11615, 11616, 11617, 11618, 11619, 11620, 11621, 11622, 11623,
   11624, 11625, 11626, 11627, 11628, 11629, 11630, 11631, 11632, 11633,
   11634, 11635, 11636, 11637, 11638, 11639, 11640, 11641, 11642, 11643,
   11644, 11645, 11646, 11647, 11648, 11649, 11650, 11651, 11652, 11653,
   11654, 11655, 11656, 11657, 11658, 11659, 11660, 11661, 11662, 11663,
   11664, 11665, 11666, 11667, 11668, 11669, 11670, 11671, 11672, 11673,
   11680, 11680, 11681, 11681, 11682, 11682, 11683, 11683, 11684, 11684,
   11685, 11685, 11686, 11686, 11687, 11687, 11688, 11688, 11689, 11689,
   11690, 11690, 11691, 11691, 11692, 11692, 11693, 11693, 11694, 11694,
   11695, 11695, 11696, 11696, 11697, 11697, 11698, 11698, 11698, 11699,
   11699, 11700, 11700, 11701, 11701, 11702, 11702, 11703, 11703, 11703,
   11704, 11704, 11705, 11705, 11705, 11706, 11706, 11706, 11707, 11707,
   11707, 11708, 11708, 11709, 11709, 11710, 11710, 11711, 11711, 11711,
   11712, 11712, 11713, 11713, 11714, 11714, 11714, 11714, 11715, 11715,
   11716, 11716, 11717, 11717, 11718, 11718, 11719, 11719, 11719, 11720,
   11720, 11721, 11721, 11722, 11722, 11723, 11723, 11723, 11724, 11724,
   11725, 11725, 11726, 11726, 11727, 11727, 11728, 11728, 11729, 11729,
   11730, 11730, 11731, 11731, 11731, 11732, 11732, 11733, 11733, 11734,
   11734, 11738, 11738, 11739, 11739, 11740, 11740, 11741, 11741, 11742,
   11742, 11743, 11743, 11744, 11744, 11745, 11745, 11746, 11746, 11747,
   11747, 11748, 11748, 11749, 11749, 11750, 11750, 11751, 11751, 11752,
   11752, 11755, 11756, 11757, 11761, 11761, 11762, 11762, 11763, 11763,
   11764, 11764, 11765, 11765, 11766, 11766, 11767, 11767, 11768, 11768
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
  "_identification_header", "program_id_paragraph", "$@3",
  "function_id_paragraph", "program_id_name", "end_program_name",
  "_as_literal", "_program_type", "program_type_clause",
  "init_or_recurse_and_common", "init_or_recurse", "_environment_division",
  "_environment_header", "_configuration_section", "_configuration_header",
  "_source_object_computer_paragraphs", "source_computer_paragraph", "$@4",
  "_source_computer_entry", "_with_debugging_mode",
  "object_computer_paragraph", "$@5", "_object_computer_entry",
  "object_clauses_list", "object_clauses", "object_computer_memory",
  "object_computer_sequence", "object_computer_segment",
  "object_computer_class", "locale_class", "computer_words",
  "_repository_paragraph", "$@6", "_repository_entry", "repository_list",
  "repository_name", "_as_literal_intrinsic", "repository_name_list",
  "_special_names_paragraph", "_special_names_sentence_list",
  "special_names_sentence_list", "special_name_list", "special_name",
  "mnemonic_name_clause", "$@7", "mnemonic_choices",
  "_special_name_mnemonic_on_off", "on_off_clauses", "on_off_clauses_1",
  "alphabet_name_clause", "@8", "alphabet_definition",
  "alphabet_literal_list", "alphabet_literal", "@9",
  "alphabet_also_sequence", "alphabet_lits", "space_or_zero",
  "symbolic_characters_clause", "_sym_in_word", "_symbolic_collection",
  "symbolic_chars_list", "symbolic_chars_phrase", "char_list",
  "integer_list", "class_name_clause", "class_item_list", "class_item",
  "locale_clause", "currency_sign_clause", "_with_pic_symbol",
  "decimal_point_clause", "numeric_sign_clause", "cursor_clause",
  "crt_status_clause", "screen_control", "event_status",
  "_input_output_section", "_input_output_header", "_file_control_header",
  "_i_o_control_header", "_file_control_sequence", "file_control_entry",
  "$@10", "_select_clause_sequence", "select_clause", "assign_clause",
  "printer_name", "device_name", "_line_adv_file", "_ext_clause",
  "assignment_name", "_assignment_name", "access_mode_clause",
  "access_mode", "alternative_record_key_clause", "_suppress_clause",
  "collating_sequence_clause", "alphabet_name", "file_status_clause",
  "_file_or_sort", "lock_mode_clause", "$@11", "lock_mode", "_lock_with",
  "organization_clause", "organization", "padding_character_clause",
  "record_delimiter_clause", "record_key_clause", "key_or_split_keys",
  "relative_key_clause", "reserve_clause", "no_or_integer",
  "sharing_clause", "sharing_option", "_i_o_control", "i_o_control_list",
  "i_o_control_clause", "same_clause", "_same_option",
  "multiple_file_tape_clause", "$@12", "multiple_file_list",
  "multiple_file", "_multiple_file_position", "_data_division", "$@13",
  "_data_division_header", "_file_section_header",
  "_file_description_sequence", "file_description",
  "file_description_entry", "$@14", "file_type",
  "_file_description_clause_sequence", "file_description_clause",
  "block_contains_clause", "_records_or_characters", "record_clause",
  "_record_depending", "_from_integer", "_to_integer",
  "label_records_clause", "value_of_clause", "file_id", "valueof_name",
  "data_records_clause", "linage_clause", "_linage_sequence",
  "linage_lines", "linage_footing", "linage_top", "linage_bottom",
  "recording_mode_clause", "recording_mode", "u_or_s", "code_set_clause",
  "_for_sub_records_clause", "report_clause", "report_keyword",
  "rep_name_list", "_working_storage_section", "$@15",
  "_record_description_list", "$@16", "record_description_list_2",
  "data_description", "$@17", "level_number", "_entry_name", "const_name",
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
  "blank_clause", "based_clause", "value_clause", "$@18",
  "value_item_list", "value_item", "_false_is", "renames_clause",
  "any_length_clause", "_local_storage_section", "$@19",
  "_linkage_section", "$@20", "_report_section", "$@21",
  "_report_description_sequence", "report_description", "$@22",
  "_report_description_options", "report_description_option",
  "control_clause", "control_field_list", "identifier_list",
  "page_limit_clause", "page_line_column", "_page_heading_list",
  "page_detail", "heading_clause", "first_detail", "last_heading",
  "last_detail", "footing_clause", "_report_group_description_list",
  "report_group_description_entry", "$@23", "_report_group_options",
  "report_group_option", "type_clause", "type_option", "_control_final",
  "_or_page", "next_group_clause", "sum_clause_list", "_reset_clause",
  "data_or_final", "present_when_condition", "varying_clause",
  "line_clause", "line_keyword_clause", "column_clause",
  "col_keyword_clause", "report_line_integer_list", "line_or_plus",
  "report_col_integer_list", "col_or_plus", "source_clause",
  "group_indicate_clause", "report_usage_clause", "_screen_section",
  "$@24", "_screen_description_list", "screen_description_list",
  "screen_description", "$@25", "_screen_options", "screen_option", "eol",
  "eos", "plus_plus", "minus_minus", "_screen_line_plus_minus",
  "_screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "_procedure_division", "$@26", "$@27", "$@28",
  "_procedure_using_chaining", "$@29", "$@30", "procedure_param_list",
  "procedure_param", "_procedure_type", "_size_optional",
  "_procedure_optional", "_procedure_returning", "_procedure_declaratives",
  "$@31", "_procedure_list", "procedure", "section_header", "$@32",
  "_use_statement", "paragraph_header", "invalid_statement", "_segment",
  "statement_list", "@33", "@34", "statements", "$@35", "statement",
  "accept_statement", "$@36", "accept_body", "$@37", "accp_identifier",
  "_accept_clauses", "accept_clauses", "accept_clause", "lines_or_number",
  "at_line_column", "line_number", "column_number", "mode_is_block",
  "accp_attr", "update_default", "end_accept", "add_statement", "$@38",
  "add_body", "_add_to", "end_add", "allocate_statement", "$@39",
  "allocate_body", "allocate_returning", "alter_statement", "$@40",
  "alter_body", "alter_entry", "_proceed_to", "call_statement", "$@41",
  "call_body", "mnemonic_conv", "call_using", "$@42", "call_param_list",
  "call_param", "call_type", "call_returning", "return_give",
  "null_or_omitted", "call_exception_phrases", "_call_on_exception",
  "call_on_exception", "_call_not_on_exception", "call_not_on_exception",
  "end_call", "cancel_statement", "$@43", "cancel_body", "close_statement",
  "$@44", "close_body", "close_option", "compute_statement", "$@45",
  "compute_body", "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "$@46", "delete_body", "delete_file_list",
  "end_delete", "display_statement", "$@47", "display_body",
  "screen_or_device_display", "display_list", "display_atom", "$@48",
  "disp_list", "display_clauses", "display_clause", "display_upon",
  "crt_under", "disp_attr", "end_display", "divide_statement", "$@49",
  "divide_body", "end_divide", "entry_statement", "$@50", "entry_body",
  "evaluate_statement", "$@51", "evaluate_body", "evaluate_subject_list",
  "evaluate_subject", "evaluate_condition_list", "evaluate_case_list",
  "evaluate_case", "evaluate_other", "evaluate_when_list",
  "evaluate_object_list", "evaluate_object", "_evaluate_thru_expr",
  "end_evaluate", "exit_statement", "$@52", "exit_body",
  "exit_program_returning", "free_statement", "$@53", "free_body",
  "generate_statement", "$@54", "generate_body", "goto_statement", "$@55",
  "go_body", "goto_depending", "goback_statement", "if_statement", "$@56",
  "if_else_statements", "end_if", "initialize_statement", "$@57",
  "initialize_body", "initialize_filler", "initialize_value",
  "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "$@58", "initiate_body", "inspect_statement",
  "$@59", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@60", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region", "inspect_before",
  "inspect_after", "merge_statement", "$@61", "move_statement", "$@62",
  "move_body", "multiply_statement", "$@63", "multiply_body",
  "end_multiply", "open_statement", "$@64", "open_body", "open_mode",
  "open_sharing", "open_option", "perform_statement", "$@65",
  "perform_body", "$@66", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "read_statement", "$@67",
  "read_body", "read_into", "with_lock", "read_key", "read_handler",
  "end_read", "ready_statement", "release_statement", "$@68",
  "release_body", "reset_statement", "return_statement", "$@69",
  "return_body", "end_return", "rewrite_statement", "$@70", "rewrite_body",
  "write_lock", "end_rewrite", "rollback_statement", "search_statement",
  "$@71", "search_body", "search_varying", "search_at_end", "search_whens",
  "search_when", "end_search", "set_statement", "$@72", "set_body",
  "on_or_off", "up_or_down", "set_environment", "set_attr",
  "set_attr_clause", "set_attr_one", "set_to", "set_up_down",
  "set_to_on_off_sequence", "set_to_on_off", "set_to_true_false_sequence",
  "set_to_true_false", "set_last_exception_to_off", "sort_statement",
  "$@73", "sort_body", "@74", "sort_key_list", "_key_list",
  "_sort_duplicates", "sort_collating", "sort_input", "sort_output",
  "start_statement", "$@75", "start_body", "sizelen_clause", "start_key",
  "start_op", "disallowed_op", "not_equal_op", "end_start",
  "stop_statement", "$@76", "stop_returning", "_status_x", "stop_literal",
  "string_statement", "$@77", "string_body", "string_item_list",
  "string_item", "_with_pointer", "end_string", "subtract_statement",
  "$@78", "subtract_body", "end_subtract", "suppress_statement",
  "_printing", "terminate_statement", "$@79", "terminate_body",
  "transform_statement", "$@80", "transform_body", "unlock_statement",
  "$@81", "unlock_body", "unstring_statement", "$@82", "unstring_body",
  "_unstring_delimited", "unstring_delimited_list",
  "unstring_delimited_item", "unstring_into", "unstring_into_item",
  "_unstring_into_delimiter", "_unstring_into_count", "_unstring_tallying",
  "end_unstring", "use_statement", "$@83", "use_phrase",
  "use_file_exception", "use_global", "use_file_exception_target",
  "use_debugging", "debugging_list", "debugging_target", "_all_refs",
  "use_start_end", "program_start_end", "use_reporting", "use_exception",
  "use_ex_keyw", "write_statement", "$@84", "write_body", "from_option",
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
  "condition", "expr", "partial_expr", "$@85", "expr_tokens", "expr_token",
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

#define YYPACT_NINF -2384

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2384)))

#define YYTABLE_NINF -1930

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2384,   649,   774, -2384,   645, -2384,   678, -2384, -2384,   658,
   -2384, -2384,   647,   416, -2384,   770, -2384,   805,   840,   536,
     553,   658,   658, -2384,   657,  1055,   809,   836,   812,  1033,
     394,   495,   495,  1176,  1222, -2384,   917,  1308, -2384, -2384,
    1066, -2384,  1023,  1085, -2384,  1316,  1038,  1057,  1111,  1255,
    1123, -2384, -2384,  1552,  1552,   849, -2384,  1176, -2384,   849,
   -2384, -2384,    -2,  3044,  3675,  1118,   -47, -2384,  1135,  1138,
   -2384, -2384, -2384,  1139,  1564, -2384, -2384,  1347,  1174, -2384,
   -2384, -2384,  1188, -2384,  1198, -2384, -2384,  1260,  4000, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,   598, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384,  1253, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
     831, -2384, -2384,  1325, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384,  1154, -2384,  1158,    57, -2384, -2384,
     -55,   360,  1159, -2384,    64,    64,  1245,  1271,  1456,  1456,
    1456,    64,  1279,  1456,  1639, -2384,  1321,  1564,  1485, -2384,
   -2384, -2384, -2384,  1478, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384,   458, -2384, -2384,    39,    39,
    -171,  1242, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384,   345,  5089,  8044,   -79,   -93,   128,  1189,
     756,  -245,  5054,  6084,  1457,   377,   822,   756,  1199,  1268,
   -2384, -2384,  6084, -2384, -2384,   756,  1209,  3180,  1199,  5289,
    6084, -2384,  1059,  3472,  1189,  1199,  1189,  1199,    62,   300,
    1199,  1189, -2384, -2384, -2384, -2384, -2384, -2384,  5324,  5524,
   -2384, -2384,  1209,    70,  1199,  1189,  1199,  1199,  1336,  1463,
   -2384, -2384,  1280, -2384, -2384,  1281,  1096,   -94, -2384, -2384,
    1334,  1326,  1682,  1456, -2384, -2384, -2384,   426, -2384, -2384,
   -2384, -2384, -2384,   384,  1692,  1456, -2384,    40, -2384, -2384,
   -2384,  1456,  1456, -2384,  1456, -2384,  1199,  1684,  1199,  1456,
    1456,  1199, -2384,  1238,  1129,  1296, -2384,  1530, -2384, -2384,
    1244, -2384,  1297,    52, -2384,   299, -2384,  -201,   407,   305,
   -2384, -2384, -2384, -2384,   894,  1628, -2384,  1565, -2384,  1292,
    1458,   560, -2384,  1199, -2384, -2384,  1299,  1300,  1301, -2384,
    2876,   894,   894, -2384,  1307,  1309,  1311, -2384, -2384, -2384,
    1313,   894, -2384, -2384, -2384, -2384, -2384, -2384,  1323, -2384,
    1301, -2384, -2384,  1636, -2384,  5612, -2384, -2384, -2384,  1342,
   -2384, -2384,  1329,  1330,  1331,  2876,  8186,  8044,  8186, -2384,
      51,  1035, -2384,  1612, -2384, -2384, -2384,   686,  1342, -2384,
   -2384,   -79, -2384,  1344, -2384,   894, -2384, -2384, -2384, -2384,
    1671,  3324, -2384,   128, -2384, -2384,  1189,   656,  1458,  1673,
     583, -2384,  1415, -2384, -2384,  1292,  1342,  1189,  1674,  1451,
    1094, -2384,  1676,   630,  5804, -2384, -2384,  4720,  1149,  1184,
    1683,   710,  1306, -2384, -2384, -2384,  1693,    34, -2384, -2384,
   -2384,  4430, -2384, -2384,  1719,   598, -2384, -2384, -2384,   756,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384,  1371, -2384, -2384,
     579, -2384,  1209, -2384, -2384,    42, -2384, -2384, -2384, -2384,
   -2384, -2384,  1358,  6084, -2384,  1377,  1697,  1790, -2384, -2384,
   -2384, -2384,  1059,  1428, -2384,  1386, -2384, -2384,  4369,   -12,
     753,  1390,  1392, -2384,  -205, -2384,  1397,  1704,   486, -2384,
    1651, -2384,  1706,  1451,  1707,  1651,  1199,  1708,  1343, -2384,
    1346,  1691, -2384, -2384, -2384, -2384, -2384, -2384,  1585, -2384,
     756, -2384, -2384,   493, -2384,   526,  1835, -2384,    37, -2384,
    1725,  1167,  4854,  1825,  1728,  4955, -2384, -2384,  1199,  1729,
    5885,  1209, -2384, -2384,   444, -2384, -2384, -2384, -2384,  3493,
   -2384,  1686, -2384,  1173,  1731,  1776,  1738,  1651,  1431,  1491,
    1637,  1381,  1441,  6743, -2384,  1387, -2384, -2384, -2384,  1588,
   -2384,    64, -2384,  1036, -2384,    72, -2384, -2384, -2384, -2384,
    1456,  1495,  1647, -2384, -2384, -2384, -2384,   786,  1456,  1393,
    1450,  1804,  1456,  1061,  1199,  1657, -2384, -2384, -2384, -2384,
    1660,  1444, -2384, -2384,  1238, -2384,    30, -2384, -2384, -2384,
   -2384, -2384, -2384,  1237,   -51,  1456,    63, -2384, -2384, -2384,
   -2384,   672, -2384, -2384, -2384,  1576, -2384,  1852, -2384,  1456,
    1512,  1615, -2384, -2384,  1823, -2384, -2384,  1199, -2384, -2384,
    6980,  1965,  8044,  1462, -2384, -2384,   -59, -2384,  1479,  8044,
    8044,  7494, -2384, -2384,  1342, -2384,  1421,  1422,  8044,  8044,
    8044,  2876,  1423,  2876, -2384, -2384, -2384,  6121,  1735, -2384,
     560,  8044, -2384,  2876,  8044, -2384,  1342, -2384, -2384, -2384,
     964, -2384,  1715,  8044,  8044,  8044,  8044,  8044, -2384,  1560,
   -2384,  1598,  1688, -2384, -2384, -2384,  1306, -2384,   656, -2384,
   -2384, -2384,   -21,   -26,  1199, -2384, -2384, -2384, -2384, -2384,
    8044,  1670, -2384,  1462, -2384,  1189, -2384, -2384, -2384, -2384,
      -3, -2384, -2384, -2384, -2384, -2384,  1649,  1785, -2384, -2384,
    4720,   110,   630,   630,   630,   630, -2384, -2384,  6084,  6121,
   -2384, -2384, -2384, -2384,   377,    97, -2384,  1440, -2384,  1442,
   -2384, -2384, -2384, -2384,  1268, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384,  4087, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384,   -38, -2384,  1828,
    1508,  1777, -2384,  1346,    48, -2384, -2384,  1592, -2384, -2384,
      83,  8044, -2384,  1502,   756, -2384, -2384,  6121,  1428,  1445,
    1189, -2384, -2384, -2384, -2384, -2384,  1794,  1199,   -79, -2384,
    1328, -2384, -2384, -2384, -2384,  1451,  3180, -2384, -2384, -2384,
    1736, -2384, -2384,   588,  1829, -2384, -2384,  1199,  1829,  1513,
   -2384,  1342,  1514, -2384, -2384,   538,  1237, -2384, -2384,  1602,
   -2384,  1919,   884,    45, -2384, -2384, -2384,  1456, -2384,  -106,
    6084, -2384, -2384,   706,  6003, -2384, -2384,  1199, -2384,  1774,
   -2384, -2384,  6121, -2384,  1647, -2384, -2384,  1346, -2384, -2384,
   -2384, -2384, -2384,  1825,  1742, -2384, -2384,  1328, -2384,  1517,
    1573,  1605,  1520, -2384,  1521, -2384,  1897, -2384,  1898, -2384,
    1590, -2384, -2384,  1524, -2384, -2384, -2384,  1974,  1541, -2384,
   -2384,  1647, -2384, -2384, -2384,   567, -2384, -2384, -2384,  1724,
    1312, -2384, -2384, -2384, -2384, -2384, -2384, -2384,  1061, -2384,
    1551, -2384,   566, -2384,  1596, -2384, -2384, -2384, -2384,  1747,
     -51, -2384,  1772,    64,    64, -2384,  1237,  1807, -2384, -2384,
   -2384, -2384,    99,  1456, -2384,  1494,  1550, -2384, -2384,  -139,
   -2384,  1456,  1130,  6980, -2384, -2384, -2384,    96,  6716, -2384,
    1130, -2384, -2384, -2384,  1493,  1492, -2384,  1346,  1130,  1775,
    1589,  1712, -2384, -2384,  1739, -2384, -2384, -2384, -2384,    36,
    1042,  8044, -2384, -2384, -2384,   439, -2384,  1199,   207,  1065,
    1559,   247,  1563, -2384,   255, -2384, -2384,   189,  1566,  1569,
    1571,   267, -2384,  1342, -2384,  1572, -2384,   284,  1574,  1458,
     605, -2384,   -88,   461,   756, -2384,  1089,  1578,   323, -2384,
    1567,  1560,  1035,  1035, -2384, -2384, -2384,   756, -2384,  1581,
     -79, -2384,   598, -2384, -2384,  1656, -2384,  1664, -2384,   798,
    1456, -2384, -2384, -2384, -2384, -2384, -2384, -2384,  1744,  1813,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384,   125, -2384, -2384,
    2103, -2384, -2384,  2465, -2384, -2384, -2384, -2384,  1844,   605,
    1845,    33, -2384, -2384, -2384, -2384,  2035, -2384,  1601,   158,
   -2384, -2384,    97, -2384, -2384, -2384, -2384,  1740, -2384, -2384,
   -2384,  1926,  1916,  1268, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384,  1687,  1268, -2384,  1607, -2384,  2008, -2384, -2384, -2384,
    1201, -2384,  1346,  1082, -2384, -2384, -2384,  1936,   102,   763,
     -14,   756,   756,   605,  1859,  1189,   531,   546, -2384,  1924,
   -2384, -2384, -2384,  2065, -2384,  1876, -2384, -2384, -2384, -2384,
    1736, -2384, -2384, -2384, -2384,  1199,  1945,    -3,  1104, -2384,
    1568, -2384,  1570,  1346,  1767,   999, -2384,   439, -2384, -2384,
   -2384,  6084,  1237,  1237,  1237,  1237,  1237,  1237,  1237,  1237,
     884, -2384,   611,    -3,   -45, -2384,  1653,  1653, -2384, -2384,
     398,  1199,   605,  1880,  1629, -2384,  1633,  2082,  1199,   356,
     588,  2085,  1158, -2384,  1632,  1694,  1698, -2384, -2384, -2384,
     914,  2007,  1456,  1226,  1226,  1456,   -20,  1822,  1456,  2076,
   -2384,  1789, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384,    64,    76, -2384, -2384,  1654, -2384,  1911, -2384,
       8, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,   724,
   -2384,    98, -2384,  1061, -2384,  1773, -2384, -2384,  1747, -2384,
      64, -2384, -2384, -2384, -2384, -2384,    60, -2384,    73, -2384,
   -2384, -2384, -2384,   146, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384,  2058, -2384, -2384, -2384, -2384, -2384,  1310, -2384,  1243,
   -2384, -2384, -2384, -2384,  1803,  1803, -2384, -2384,  1803, -2384,
    1456, -2384, -2384, -2384, -2384,  1456, -2384, -2384, -2384, -2384,
   -2384,   -19, -2384, -2384,  2052,  1696, -2384, -2384,   -46, -2384,
    1456, -2384,  2102, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384,  1130, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
    8044,  7629,  1042, -2384, -2384, -2384,  1415,  7730,  1329,  7829,
    1329, -2384,  1199,  1329,  1329,  1329,  2876, -2384,  -111,  1329,
     -59, -2384, -2384, -2384,  1809,  1701,   -34,  1907,   605,  8020,
    1329,  1329,   828, -2384, -2384, -2384, -2384, -2384,   -52,   131,
   -2384, -2384, -2384,   612, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,  1456, -2384,
     497, -2384, -2384,   111,  1456, -2384, -2384, -2384, -2384, -2384,
     -37,  1456, -2384, -2384,   756, -2384,   756,  4574, -2384,   652,
       3,    97, -2384, -2384, -2384,  2035,  1199, -2384, -2384, -2384,
   -2384,  1613,  1538,   -11,  1614,   828,  1346, -2384, -2384,  2077,
   -2384,  1365, -2384, -2384,  1082, -2384,   781, -2384,  1716, -2384,
   -2384,  1456, -2384, -2384,  1887,  1810, -2384, -2384,   756, -2384,
     756,   546,  1811,  1811,  1819, -2384, -2384, -2384, -2384,  1106,
   -2384, -2384,  1199,  6084,   741, -2384, -2384, -2384,  1840, -2384,
   -2384,  1871, -2384, -2384, -2384, -2384,  1570, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
     180, -2384,  1199, -2384, -2384, -2384,   537, -2384, -2384, -2384,
    8044, -2384,  6084,  6084,  -125,  1802,  1415, -2384,   756, -2384,
     828, -2384,  1821, -2384,  1346, -2384,  2026,  1699, -2384,  1124,
   -2384,   758, -2384,  1158, -2384,  1681,  1745, -2384,  6954,   143,
    1938, -2384,  1647,  1634,  1456,  2076,  1635,  -109,   471,  1647,
    1641, -2384,  1456, -2384, -2384, -2384,   -77,  1391, -2384, -2384,
   -2384,  1923, -2384,  2007,  1189, -2384, -2384, -2384, -2384, -2384,
     724, -2384,  1894, -2384, -2384,  1922, -2384,  2129,  1182,  1695,
   -2384, -2384, -2384, -2384, -2384,   233, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384,  -139,  -139,  -139,  -139,  -139, -2384,
    1456,  1456,   506,   506,  -139, -2384,   520, -2384,  1065, -2384,
    1024,   -86, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384,  1953, -2384, -2384, -2384, -2384, -2384,
   -2384,  1954, -2384, -2384,  1032, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384,  1861,   -50,  1458, -2384, -2384, -2384,
   -2384, -2384,  1199, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384,  2740,  -139, -2384, -2384,  1458, -2384, -2384, -2384,
   -2384,   529,  -139,   506,   506,  -139,   605,  1792,   605,  1793,
   -2384, -2384,  6084, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384,  1538, -2384,  2060, -2384,  1268, -2384,  1365,  1365,
     828,  1700,  1700, -2384,  2156,  2128, -2384, -2384, -2384, -2384,
     -99,  1199, -2384, -2384, -2384,   605, -2384, -2384, -2384, -2384,
   -2384, -2384,  1780, -2384,  2120,  1906,  1932,   467, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384,  1065, -2384, -2384, -2384, -2384, -2384, -2384,  1872,
    1703,  1456,   -86,   605,  1677, -2384,  2082, -2384,  1956,  2086,
    1956,  -125, -2384, -2384, -2384, -2384,  1885,  2025, -2384, -2384,
   -2384,  1363, -2384,  1158, -2384,  1723,   913, -2384, -2384,  -188,
     714,   721,   733,   767,  1672, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384,  1795, -2384,    77, -2384, -2384, -2384, -2384,  1199,
    1199,  1952, -2384, -2384, -2384,   491, -2384, -2384, -2384,  1456,
     140, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,  1141,
     379, -2384,  1675, -2384,   897, -2384,  1733, -2384,  1999, -2384,
   -2384, -2384,  1635, -2384, -2384, -2384, -2384, -2384, -2384,  1935,
      21,  1956,   626,  1456, -2384, -2384,  1456, -2384,  1822,  1451,
    -214, -2384,  1783,  1456,  2137,    50,   129,   -10,  1445, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,  1766, -2384,
    1933, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,  2160,
    1456,  1189,  1189,   724, -2384, -2384, -2384,  1942, -2384, -2384,
   -2384, -2384,     6, -2384, -2384, -2384, -2384, -2384,   128,  -139,
   -2384,  1367, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
    1199, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384,   756, -2384,   756, -2384, -2384, -2384,  2153,  2092, -2384,
   -2384,  1365, -2384,  6084,  6084, -2384, -2384,  1860,  1189,    35,
   -2384,  1199, -2384, -2384,  6084, -2384,  1456,  1054,  1940,  1941,
   -2384,  1943, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384,  1199, -2384, -2384, -2384, -2384,  1746, -2384, -2384,
    1199,  1956, -2384,  1199, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384,  1689, -2384, -2384,  2159,  1758, -2384,  1763, -2384, -2384,
   -2384, -2384,  7492,   705,  2190, -2384,  1815,  1815, -2384,  1458,
    1525,  1525, -2384, -2384,  1647,   276,  1199, -2384, -2384, -2384,
   -2384,  1647, -2384,  1799, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384,   521,   521,  1456,  1887, -2384, -2384,  1114, -2384,
     968,  1456,  1456,  1456,  1456, -2384,  1974, -2384,   531,  1456,
    1822, -2384,  1808,  1634,  1189, -2384,  1883,  2204, -2384, -2384,
    2114, -2384, -2384, -2384, -2384, -2384, -2384,   -86,   -86,  6084,
   -2384, -2384, -2384, -2384,  1456,  1189,  1189,  1881, -2384, -2384,
    1734,  1199, -2384, -2384,  1840,  1945, -2384, -2384, -2384, -2384,
   -2384,   998, -2384, -2384,  1199, -2384,  1873,  1381, -2384,  1956,
    2029,  1647,  1779,  1199, -2384,   705, -2384,  1778,  1969, -2384,
    2137, -2384, -2384,  1525,  1770, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384,  1199, -2384,   137,  1639, -2384,   729, -2384, -2384,
   -2384, -2384,   534,  1456, -2384, -2384,  1315, -2384, -2384,   471,
    1805,  1199,  1199, -2384, -2384,  1199,  1456, -2384, -2384, -2384,
    1647, -2384,   724,  1781, -2384, -2384, -2384,   -79,  1189,  1456,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384,  1389, -2384, -2384, -2384, -2384, -2384,  1888,  2130, -2384,
    1209, -2384,  6457, -2384, -2384,  1381,  1784,  1721,  1647,  1758,
   -2384, -2384,  2125, -2384,   750, -2384,   705, -2384, -2384, -2384,
   -2384, -2384,   471,   471, -2384, -2384, -2384, -2384,  2054, -2384,
   -2384,  1733,  1647, -2384, -2384, -2384, -2384,  1199, -2384, -2384,
     523,   523,  2239, -2384, -2384, -2384, -2384, -2384,   523,   523,
     524, -2384, -2384, -2384,  -185, -2384, -2384,   936, -2384, -2384,
   -2384, -2384,   -79, -2384,  1875,  1826,   -22,  1740, -2384,  1801,
   -2384,  1806, -2384, -2384, -2384,  2027,  1740, -2384,  1843, -2384,
    1788, -2384, -2384, -2384,  2225,  1639, -2384,   -23, -2384, -2384,
   -2384, -2384,  1524, -2384, -2384, -2384, -2384, -2384,  1456,  1199,
    1748, -2384,  1748, -2384, -2384,  1199, -2384,  1282, -2384, -2384,
   -2384,    71,  1217, -2384, -2384, -2384, -2384, -2384,  1199,  2037,
     763,  1812,  1456,   471,  2154,  1830, -2384, -2384,  1199,  1199,
     646, -2384, -2384, -2384, -2384, -2384,  1927,   -83,    71, -2384,
   -2384,  1814,   701,  7308,  2037, -2384,  1825, -2384,  1887, -2384,
     705, -2384,  1740, -2384,  1759, -2384,  1199,  1960, -2384, -2384,
    1740, -2384, -2384,  1966,  1199, -2384, -2384,  1456,  1456,  2076,
    1251, -2384, -2384, -2384, -2384,  2070,  2101, -2384,  1456, -2384,
    -103, -2384,   111,  1456,  3180, -2384, -2384, -2384, -2384,  1803,
   -2384,  1647, -2384,  2223, -2384, -2384, -2384,  1199, -2384, -2384,
    1199, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
    2078,  1803, -2384,  1769,  1456, -2384,  1199,    86,   957,   687,
   -2384, -2384,   128, -2384, -2384,  1456,  2076,  2024,  1381, -2384,
   -2384, -2384,  1199,  -139, -2384, -2384, -2384, -2384,  -139, -2384,
    1456,  1779,  1456, -2384, -2384, -2384,  1456, -2384,  1769, -2384,
    1199, -2384,   560, -2384, -2384, -2384,  1275, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384,  1189, -2384, -2384, -2384, -2384,
    1383,   -64, -2384,  1199, -2384, -2384, -2384,   904, -2384,   128,
     904, -2384,  1199, -2384, -2384,  1112, -2384, -2384,  2024, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,  -139, -2384,
   -2384, -2384,  -139,   985,  1456,  1456,  1276, -2384, -2384, -2384,
   -2384, -2384, -2384,  1586, -2384, -2384, -2384, -2384, -2384,  1456,
    2024,  2024, -2384,  2073,  1456,  1456, -2384,  2191,  2024, -2384,
   -2384, -2384,  2024,  2024,  2063,  1254,  2076,  2079,  1647,  1786,
    1456,  1458, -2384,  1456,  1456,  1199, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,  1014,
   -2384,   865, -2384, -2384, -2384,  1254,  2076, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384,   140, -2384,  1456,  1758, -2384,  8386,
    8386,  1587,  2168,  2091, -2384,  1647,  1014, -2384, -2384,  1647,
     865, -2384, -2384,   140, -2384, -2384,  1014,  1779, -2384,  1415,
    8336, -2384, -2384,    53,  1019, -2384, -2384,  1215, -2384, -2384,
   -2384, -2384,   -82,   -82, -2384, -2384, -2384, -2384, -2384,  8386,
   -2384, -2384, -2384, -2384, -2384, -2384,  2125, -2384,  1740, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384,  1978, -2384,  1978, -2384,
    2243,  1864,   117,  1972, -2384, -2384,  8386,  1647, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     3,    21,     6,     4,    43,
       8,     9,     0,     0,     7,     0,    11,   289,    46,     0,
       0,    43,    43,    22,     0,     0,   684,   291,     0,   178,
      48,     0,     0,    14,     0,    44,     0,     0,    20,   729,
       0,   293,     0,     0,    42,   180,     0,     0,    96,    49,
      50,    27,    26,    30,    30,     0,    12,    15,    16,     0,
      13,   290,   686,     0,     0,     0,   287,    47,     0,     0,
     184,    59,    53,     0,    98,    51,    52,     0,     0,    23,
      29,    28,     0,    17,     0,   689,   687,   705,     0,   783,
     856,   865,   871,   878,   917,   921,   935,   930,   936,   937,
     945,   992,  1001,  1004,  1030,  1041,  1044,  1047,  1039,  1053,
    1060,  1082,  1086,  1125,  1127,  1131,     0,  1137,  1151,  1175,
    1193,  1194,  1197,  1198,  1203,  1211,  1212,  1225,  1261,  1279,
       0,  1313,  1325,  1333,  1335,   711,  1339,  1342,  1345,  1396,
     731,   732,   733,   734,   735,   736,   737,   738,   740,   739,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
     771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     730,   292,   299,   300,   360,   294,   363,     0,   179,   181,
     182,    61,    55,    97,     0,     0,     0,  1901,  1855,  1855,
    1855,     0,     0,  1855,  1828,   116,    81,    99,     0,   102,
     104,   105,   106,   152,   108,   107,   109,   110,   111,   112,
     113,   114,   115,    31,    25,  1855,    18,    19,   694,   694,
       0,     0,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,
    1749,  1750,  1751,  1752,  1753,  1754,  1790,  1791,  1792,  1793,
    1794,  1795,  1796,  1797,  1798,  1799,  1800,  1801,  1802,  1803,
    1804,  1805,  1806,  1807,  1808,  1809,  1755,  1756,  1757,  1758,
    1759,  1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,
    1769,  1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,
    1779,  1780,  1781,  1782,  1783,  1784,  1785,  1740,  1786,  1787,
    1788,  1789,   782,     0,     0,     0,     0,   881,     0,     0,
       0,     0,     0,     0,     0,  1483,  1032,     0,     0,  1920,
     902,   901,     0,  1052,  1483,     0,     0,     0,     0,     0,
       0,   781,     0,  1163,     0,     0,     0,     0,     0,     0,
       0,     0,  1309,  1312,  1299,  1310,  1311,  1301,     0,     0,
    1334,  1332,     0,   729,     0,     0,     0,     0,     0,   515,
     295,  1707,     0,  1551,   296,     0,  1723,   268,   185,  1827,
       0,     0,     0,  1855,  1963,    79,    60,  1826,    65,    67,
      68,    69,    70,  1826,     0,  1855,    54,    57,  1573,  1572,
     127,  1855,  1855,  1902,  1855,  1856,     0,     0,     0,  1855,
    1855,     0,  1829,     0,  1855,     0,    45,     0,   100,   103,
       0,   151,     0,     0,  1825,   694,   691,   697,     0,   694,
     706,   707,   681,   806,  1643,   854,   785,   805,  1633,  1637,
    1880,     0,  1686,     0,  1681,  1687,     0,     0,  1693,  1666,
       0,  1538,  1540,  1662,     0,     0,     0,  1684,  1667,  1593,
       0,  1542,  1665,  1685,  1663,  1688,  1689,  1668,     0,  1683,
    1693,  1682,  1664,   863,  1587,   861,  1582,  1584,  1585,  1658,
    1660,  1586,  1690,     0,     0,     0,     0,     0,     0,   866,
       0,  1527,  1530,  1532,  1535,  1602,  1537,  1712,  1600,  1601,
    1562,   872,   873,     0,  1558,  1560,  1559,   884,   882,   883,
     915,     0,  1615,   918,   919,  1614,   922,   925,  1880,   933,
       0,  1544,  1726,  1577,  1638,  1642,  1578,     0,   943,  1894,
    1662,   959,   990,  1425,  1580,   954,   956,   953,     0,  1584,
     999,     0,   885,  1002,  1011,  1010,  1028,     0,  1007,  1009,
    1482,     0,  1034,  1038,  1036,  1039,  1037,  1031,  1042,  1043,
    1575,  1045,  1046,  1921,  1048,  1556,  1040,  1916,  1481,  1061,
    1063,  1552,  1083,  1084,  1087,     0,  1089,  1090,  1091,  1126,
    1265,  1630,  1631,     0,  1128,     0,  1135,     0,  1144,  1141,
    1143,  1142,  1138,  1145,  1165,  1562,  1930,  1152,  1163,  1154,
       0,  1161,     0,  1616,  1559,  1618,     0,  1191,  1718,  1195,
    1399,  1547,  1201,  1894,  1209,  1399,     0,  1223,  1216,  1548,
       0,     0,  1555,  1226,  1227,  1228,  1229,  1230,  1231,  1253,
    1232,  1256,  1233,     0,  1553,     0,     0,  1629,  1642,  1262,
    1297,  1284,  1302,  1824,  1323,     0,  1316,  1318,     0,  1330,
       0,  1336,  1337,   717,   723,   712,   713,   714,   716,     0,
    1340,     0,  1343,  1896,  1362,  1348,  1410,  1399,     0,     0,
     518,   365,     0,     0,   368,     0,   298,   301,   183,     0,
    1724,     0,   280,   276,   177,     0,   271,   273,   274,  1962,
    1855,     0,     0,    64,    66,    62,    80,  1826,  1855,     0,
       0,     0,  1855,     0,     0,     0,   173,  1565,   171,   176,
       0,     0,   175,  1574,   154,   155,  1857,   158,  1648,  1235,
    1234,   117,   121,   124,  1884,  1855,     0,    82,   101,   153,
      24,    34,    37,    41,    40,  1892,    35,    36,   692,  1855,
       0,   703,   695,   696,   708,  1941,  1942,     0,   855,   784,
     807,     0,     0,  1635,  1636,  1881,     0,  1659,     0,     0,
       0,     0,  1679,  1588,  1589,  1590,     0,     0,     0,     0,
       0,     0,     0,     0,  1680,   864,   857,     0,     0,  1583,
       0,     0,  1669,     0,     0,  1603,  1604,  1605,  1534,  1599,
       0,  1533,  1714,     0,     0,     0,     0,     0,  1713,   869,
     874,   876,     0,   916,   879,  1617,   885,   920,   925,  1953,
    1954,   923,     0,   926,     0,   934,   931,  1938,  1937,  1545,
       0,  1728,  1546,  1640,  1641,   940,   941,   944,   938,  1895,
    1469,   991,   946,   726,   726,   951,  1431,  1428,   955,   952,
    1581,  1929,  1425,  1425,  1425,  1425,  1000,   993,     0,     0,
     886,  1003,  1029,  1005,  1483,  1483,  1006,  1013,  1014,   726,
    1507,  1508,  1509,  1503,  1920,  1495,  1515,  1518,  1517,  1519,
    1511,  1502,  1501,  1506,  1505,  1504,  1510,  1490,  1494,  1512,
    1514,  1516,  1492,  1493,  1489,  1491,  1484,  1485,  1496,  1497,
    1498,  1499,  1500,  1488,  1035,  1033,  1576,  1050,  1917,   726,
    1065,     0,  1085,     0,  1112,  1096,  1088,  1093,  1094,  1095,
    1269,     0,  1632,     0,     0,  1136,  1132,     0,  1145,  1929,
       0,  1153,  1159,  1160,   726,  1156,  1483,     0,     0,  1164,
       0,  1192,  1176,  1719,  1720,  1894,     0,  1196,  1202,  1199,
    1178,  1210,  1204,  1206,  1218,  1224,  1213,     0,  1218,     0,
    1610,  1611,     0,  1254,  1257,     0,     0,  1554,  1237,     0,
    1236,     0,     0,  1640,  1298,  1280,  1286,  1855,  1287,  1282,
       0,  1300,  1304,     0,     0,  1324,  1314,     0,  1317,     0,
    1331,  1326,     0,  1338,   724,   722,   715,     0,  1897,  1898,
    1344,  1363,  1346,  1824,     0,  1411,  1397,  1401,   361,     0,
       0,   521,     0,   366,     0,   374,   375,   369,     0,   372,
    1855,  1725,   186,  1836,   277,   278,   279,  1816,     0,   269,
     272,     0,  1961,    73,    63,     0,  1566,    72,    56,     0,
       0,  1655,  1651,  1656,  1654,  1652,  1657,  1653,   162,   163,
     165,   174,   169,   167,     0,   156,  1859,  1858,   159,     0,
    1884,  1887,  1886,     0,     0,   118,   122,    84,    39,  1893,
      33,    38,     0,  1855,   704,     0,     0,   682,  1644,  1821,
     812,  1855,  1412,   808,   809,   811,   813,     0,     0,   801,
    1412,  1936,  1935,   798,   790,   792,   793,     0,  1412,     0,
       0,     0,   815,   796,     0,   804,   787,   803,   788,  1522,
    1520,     0,  1634,  1607,  1606,     0,  1592,     0,  1522,  1520,
       0,  1522,     0,  1695,  1522,  1539,  1541,  1522,     0,     0,
       0,  1522,  1596,  1597,  1598,     0,  1543,  1522,     0,  1880,
    1434,   862,  1642,  1578,     0,  1661,     0,     0,  1522,  1536,
    1716,   869,  1526,  1525,  1529,  1528,  1531,     0,   867,     0,
       0,  1561,   896,   924,   929,     0,  1841,     0,  1579,  1434,
    1855,  1727,  1639,   942,   726,   726,   939,  1470,  1476,  1473,
    1430,   727,  1433,  1426,  1432,  1427,  1429,     0,   965,   964,
     957,   960,   962,     0,   949,   950,   947,   948,     0,  1434,
       0,   892,  1008,  1023,  1025,  1024,  1018,  1020,  1026,  1483,
    1015,  1012,  1483,  1016,  1513,  1486,  1487,  1882,  1049,  1557,
     726,  1057,  1058,  1920,  1073,  1074,  1076,  1078,  1079,  1075,
    1077,  1068,  1920,  1064,     0,  1113,     0,  1115,  1114,  1116,
    1098,  1108,     0,     0,  1092,  1960,  1883,     0,  1271,     0,
    1846,     0,  1129,  1434,     0,     0,     0,  1147,  1549,  1157,
    1170,  1166,  1171,  1167,  1172,     0,  1162,  1406,  1405,  1169,
    1178,  1400,  1626,  1627,  1628,     0,     0,  1469,     0,   726,
       0,  1217,     0,     0,     0,     0,  1255,     0,  1259,  1258,
    1251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1239,  1240,  1721,  1469,     0,  1303,  1912,  1912,  1319,  1320,
    1321,     0,  1434,     0,     0,   725,     0,  1708,     0,  1321,
    1206,  1810,   363,   516,     0,     0,   616,   367,   371,   408,
     377,  1830,  1855,     0,     0,  1855,  1830,  1873,  1855,  1814,
     297,     0,   302,   305,   306,   307,   308,   309,   310,   311,
     312,   313,     0,     0,   188,  1837,  1914,  1817,  1840,   270,
       0,    76,    78,    77,    74,    75,    58,   133,   132,   147,
     143,   148,   129,   146,   144,   130,   131,   145,   128,   134,
     135,   137,   164,     0,   168,     0,   172,  1649,   157,   160,
       0,  1885,   125,   119,   120,   123,     0,    83,     0,    87,
     698,   699,   702,     0,   693,   709,   711,  1621,   819,  1619,
    1620,     0,  1418,  1419,  1423,  1424,   786,  1420,   726,  1415,
     726,   810,  1934,  1933,  1875,  1875,   817,   818,  1875,   824,
    1855,   826,   827,   828,   853,  1855,   829,   830,   831,   832,
     833,     0,   834,   835,   837,     0,   838,   839,     0,   840,
    1855,   825,  1812,   843,   852,   846,   814,   845,   802,   789,
     791,  1412,   799,   794,   795,   816,   797,  1523,  1524,  1645,
       0,     0,     0,  1609,  1591,  1608,  1726,     0,  1690,     0,
    1690,  1694,     0,  1690,  1690,  1690,     0,  1673,     0,  1690,
       0,   726,   726,   858,  1440,  1437,  1640,  1641,  1434,     0,
    1690,  1690,     0,  1715,   868,   870,   877,   875,   905,  1853,
     928,   927,   932,     0,  1475,  1478,  1471,  1477,  1472,  1474,
     729,   971,   972,   969,   968,   970,   967,   961,  1855,   973,
       0,   976,   977,  1834,  1855,   980,   981,   963,   982,   983,
       0,  1855,   985,   966,     0,   994,     0,   887,   888,   697,
       0,  1483,  1483,  1022,   726,  1019,     0,  1056,   726,  1059,
    1054,     0,     0,  1080,     0,     0,     0,  1109,  1111,     0,
    1104,  1118,  1105,  1106,  1097,  1100,  1118,  1959,     0,  1932,
    1263,  1855,   492,   493,  1860,     0,  1847,  1270,  1130,  1133,
       0,  1147,  1888,  1888,     0,  1146,  1150,  1139,  1550,     0,
    1158,  1155,     0,     0,  1180,  1179,   726,  1200,  1458,  1205,
    1207,     0,  1219,  1483,  1483,  1214,  1220,  1238,  1260,  1250,
    1252,  1242,  1243,  1244,  1248,  1245,  1249,  1246,  1247,  1241,
    1722,  1296,     0,  1293,  1294,  1288,     0,  1281,  1958,  1957,
       0,  1913,  1307,  1307,  1443,     0,  1726,  1327,     0,   718,
       0,  1709,  1349,  1350,     0,  1353,  1356,  1360,  1354,  1407,
    1811,     0,   362,   363,   519,     0,     0,   288,  1855,  1818,
       0,  1831,     0,     0,  1855,  1814,     0,     0,     0,     0,
       0,  1874,  1855,   356,  1815,   357,     0,     0,   358,   303,
     304,  1894,  1915,  1830,     0,  1949,  1950,    71,   136,   139,
       0,   166,     0,   161,   126,     0,    94,    92,     0,     0,
      85,    88,   700,   701,   711,   729,   823,  1413,  1421,  1417,
    1414,  1416,  1422,  1876,     0,     0,     0,     0,     0,   844,
    1855,  1855,  1479,  1479,     0,  1813,     0,   800,  1521,  1646,
       0,  1434,  1704,  1677,  1706,  1678,  1702,  1674,  1675,  1676,
    1700,  1697,  1698,  1672,  1579,  1442,  1439,  1435,  1441,  1436,
    1438,  1639,   859,  1691,     0,  1670,  1671,  1717,  1612,  1613,
     726,   726,   726,   880,   912,   908,  1880,  1854,   899,   904,
     903,   898,     0,  1730,  1731,  1732,  1733,  1734,  1735,  1736,
    1737,  1729,     0,     0,   974,   975,  1880,   664,   666,   978,
     979,     0,     0,  1479,  1479,     0,  1434,  1544,  1434,  1544,
     889,   890,     0,   894,   893,   895,  1021,  1027,  1017,  1051,
    1055,  1066,  1069,  1070,  1832,  1062,  1920,  1067,  1118,  1118,
       0,  1851,  1851,  1103,  1119,  1120,  1101,  1102,  1107,  1931,
    1273,     0,  1861,  1267,  1848,  1434,  1140,  1889,   265,   266,
     267,  1149,     0,  1173,     0,     0,  1187,     0,  1457,   726,
    1452,  1459,  1208,   726,   726,  1221,  1295,  1285,  1289,  1290,
    1291,  1292,  1283,  1305,  1308,  1306,   726,   726,  1315,  1449,
    1446,  1855,  1434,  1434,   720,  1341,  1708,  1352,  1844,  1358,
    1844,  1443,   726,   726,  1398,  1409,  1466,  1463,  1408,  1404,
    1403,  1865,   517,   363,   522,     0,     0,   502,   432,  1903,
    1903,  1903,  1903,  1903,  1925,   433,   468,   470,   436,   437,
     438,   439,   440,   441,   464,   462,   463,   465,   466,   471,
     469,   442,  1899,   467,     0,   443,   429,   444,   445,     0,
       0,  1906,   447,   448,   446,  1862,   450,   451,   449,  1855,
    1857,   409,   410,   411,   412,   413,   414,   430,   434,   435,
     415,   416,   417,   418,   419,   420,   421,   422,   423,     0,
       0,  1819,     0,   405,     0,   378,   325,   234,   353,  1951,
    1952,  1569,   334,  1567,  1944,  1943,   327,  1571,  1570,  1871,
    1828,  1844,     0,  1855,   331,   330,  1855,   359,  1873,  1894,
    1922,   250,     0,  1855,  1826,  1860,   252,     0,  1929,   238,
     187,   237,   189,   190,   191,   192,   193,   194,     0,   195,
       0,   196,   249,   197,   198,   199,   200,   201,   202,  1822,
    1855,     0,   275,     0,   138,   170,    89,     0,    90,    95,
      91,    86,   729,   820,   822,   821,   848,   847,     0,     0,
     850,     0,  1624,  1625,   849,   842,  1650,   851,  1622,  1623,
    1647,   860,  1692,   910,   914,   911,   906,   913,   907,   909,
       0,   897,   987,  1835,   665,   667,   986,   989,   988,   984,
     996,     0,   995,     0,   891,  1071,  1833,     0,     0,  1099,
    1110,  1118,  1852,     0,     0,  1121,  1122,     0,     0,  1276,
    1272,  1266,  1134,  1148,     0,  1181,  1855,  1469,     0,     0,
    1182,     0,  1186,  1460,  1215,  1222,  1451,  1448,  1444,  1450,
    1445,  1447,     0,  1329,  1328,  1364,   719,     0,  1351,  1845,
       0,  1844,  1355,     0,  1347,  1465,  1468,  1461,  1467,  1462,
    1464,  1866,  1867,  1402,   520,   524,   617,   513,   514,  1904,
     461,   460,   453,   452,   459,   458,   457,   456,   455,   454,
    1926,     0,  1900,   499,   485,   479,   424,   511,  1907,  1863,
    1864,   500,     0,     0,   426,   428,  1738,  1738,   407,  1880,
       0,     0,   406,   379,     0,   315,     0,   352,  1568,  1872,
     336,     0,   318,  1908,   345,   347,   351,   350,   346,   348,
     344,   349,     0,     0,  1855,  1860,  1923,  1924,   217,   253,
    1894,  1855,  1855,  1855,  1855,   262,  1816,   263,     0,  1855,
    1873,  1823,     0,     0,   281,   282,   285,   140,   141,    93,
       0,   836,   841,  1955,  1956,  1480,   900,  1434,  1434,     0,
    1081,  1117,  1124,  1123,  1855,  1274,     0,     0,  1264,  1268,
       0,     0,  1177,  1190,  1458,  1455,  1189,  1185,  1183,  1184,
    1322,  1372,   721,  1357,     0,  1361,   523,   619,   501,  1844,
     481,     0,  1918,     0,   431,   503,   505,   507,     0,   425,
    1826,   472,   473,     0,     0,   388,   384,   387,   386,   385,
     400,   396,   398,   399,   401,   397,   402,   403,   404,   381,
     392,   393,   394,   389,   390,   391,   383,   380,   326,   317,
     316,   314,   354,  1563,   335,  1828,  1909,   323,   332,   329,
     333,   328,     0,  1855,   219,   218,   215,   252,   248,     0,
       0,     0,     0,   261,   264,     0,  1855,   251,   233,   283,
       0,   284,     0,     0,   998,   997,  1072,     0,  1277,  1855,
    1483,  1188,  1453,  1454,  1456,  1821,  1395,  1394,  1373,  1365,
    1366,  1812,  1367,  1368,  1369,  1370,  1393,     0,     0,  1359,
       0,   525,     0,   623,   618,   620,     0,     0,     0,   479,
     480,  1919,   483,   512,   509,   506,     0,   427,  1739,   382,
     395,  1564,     0,     0,   337,   338,   339,   340,     0,   319,
    1843,   325,     0,   227,   228,   226,   225,     0,   211,   212,
     222,   222,     0,   210,   208,   209,   214,   213,   222,   222,
       0,   254,   255,   256,   257,   260,   235,     0,   286,   142,
     710,  1275,     0,  1174,     0,  1910,     0,  1882,   526,     0,
     624,     0,   621,   486,   482,   487,  1882,   490,     0,   504,
       0,   508,   343,   342,  1820,  1828,   324,  1710,   223,   205,
     224,   206,  1836,   207,   204,   220,   203,   221,  1855,     0,
     244,   243,   244,   240,  1278,     0,  1911,     0,  1391,  1390,
    1389,     0,     0,   626,   627,   622,   488,   490,     0,   494,
     489,     0,  1855,     0,   321,   230,  1711,   216,     0,   258,
       0,   242,   241,  1392,  1940,  1939,  1890,  1385,  1379,  1380,
    1382,     0,  1855,  1905,   494,   484,  1824,   477,  1860,  1928,
       0,   341,  1882,   320,     0,   229,   259,     0,   247,  1891,
    1882,  1388,  1383,  1386,     0,  1381,   530,  1855,  1855,  1814,
    1868,   555,   529,   533,   534,     0,  1838,   642,  1855,   631,
    1925,   632,  1834,  1855,     0,   645,   640,   635,   641,  1875,
     636,     0,   639,   647,   644,   637,   643,     0,   648,   638,
       0,   659,   653,   657,   656,   654,   658,   628,   660,   655,
       0,  1875,   478,     0,  1855,   510,     0,     0,     0,     0,
    1387,  1384,     0,  1978,  1979,  1855,  1814,     0,   527,   531,
    1839,   535,     0,     0,   629,   630,   633,   634,     0,   662,
    1855,  1918,  1855,   663,   661,   679,  1855,   498,   495,   496,
       0,   322,     0,   149,   150,   232,     0,  1947,  1948,   245,
    1378,  1375,  1377,  1376,  1371,  1374,   532,  1869,  1870,   543,
     540,   373,   556,   536,   537,   652,   651,   672,   678,     0,
     675,   497,   491,   231,   246,   539,  1945,  1946,   542,   375,
     557,   538,   670,   668,   671,   669,   673,   674,     0,   646,
     676,   677,     0,     0,  1855,  1855,     0,   544,   545,   546,
     547,   548,   549,     0,   559,   649,   650,  1965,  1964,  1855,
       0,     0,  1967,     0,  1855,  1855,   541,  1905,     0,   554,
     550,  1966,     0,     0,  1849,  1877,  1814,     0,     0,     0,
    1855,  1880,   558,  1855,  1855,     0,   564,   566,   575,   567,
     569,   572,   560,   561,   562,   571,   573,   576,   563,     0,
     568,     0,   570,   574,   565,  1877,  1814,   551,   553,   552,
    1850,   614,  1878,  1879,  1857,   600,  1855,   479,  1483,     0,
       0,     0,     0,     0,   608,     0,   598,   604,   607,     0,
     601,   609,   612,  1857,   603,   599,     0,  1918,   596,  1726,
     592,  1594,  1969,     0,     0,  1971,  1973,     0,  1977,  1975,
     577,   581,   585,   585,   579,   583,   578,   584,   615,     0,
     606,   605,   611,   610,   602,   590,   483,   613,  1882,   591,
    1595,  1968,  1972,  1970,  1976,  1974,   588,   580,   588,   582,
       0,   475,     0,     0,   587,   586,     0,     0,   474,   595,
     593,   594,   589,   597,   476
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2384, -2384, -2384, -2384, -2384,  2294, -2384, -2384, -2384, -2384,
   -2384, -2384,  2244, -2384,   236, -2384, -2384, -2384, -2384,  2271,
    2246,  2252, -2384, -2384, -2384,  1577, -2384, -2384, -2384, -2384,
   -2384,  2257, -2384, -2384, -2384,  2260, -2384, -2384,  1917,  -275,
   -2384, -2384, -2384, -2384, -2384,  2109, -2384, -2384, -2384, -2384,
     925, -2384, -2384, -2384, -2384, -2384,  2097,    -6, -2384, -2384,
   -2384, -2384,  1259, -2384, -2384, -2384, -2384, -2384,   947, -2384,
   -2384, -1652, -2384, -2384, -2384, -2384, -2384,  1608, -2384, -2384,
   -2384, -2384,  1283, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384,  -937, -2384, -2384,
   -2384, -2384, -2384,   113, -2384, -2384, -2384, -2384, -2384,  -138,
   -2384,   127, -2384, -2384, -2384,   -67, -2384, -2384, -2384, -2384,
     123, -2384, -2384,  1648, -2384, -2384, -2384, -2384, -2384,   122,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384,   -54, -2384, -2384,
   -2384,   145, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -1257,
   -2384, -2384,  1668, -2384, -1932, -2240, -2384, -2384, -2384, -1973,
   -2384, -2384, -2384, -2384, -1150, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2335,  -163,   179, -1003,  -984, -1753, -2384, -2384,
   -2384, -2272, -2384,  -444, -2384, -2384,  -133, -2384,  -135,  -158,
   -2384,  -261, -1701, -2384, -1636, -2384, -1613, -2384, -2384,    84,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384,  -425,  -446, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -1281, -2384,  -397, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384,    -9, -2384, -2384, -2384,
    -183,  -181,  -283,  -278, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384,  2124,  1021, -2384,   825, -2384,
   -2384, -2384, -2384, -1292, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384,    32, -2384, -2384,   -27, -2384,  2302, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384,  1294, -2384,  -612, -2384, -2384,  -577,
   -2384,   937, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384,  1228, -2384, -2384, -2384,  1869, -2384, -2384, -2384, -2384,
   -2384,  1575, -2384, -2384,   842, -2384, -2384,  -582, -2384, -2384,
   -2384,   610, -2384,   613, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384,  1580, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,  1846, -2384,
   -2384, -2384,  1202, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,  1529, -2384,
   -2384,  1528, -2384, -2384,  1187,   845, -2384, -2384, -2384, -2384,
   -2384,  1837, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384,   578,  1496, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384,  1487, -2384, -2384,
     834, -2384,  1165, -2384, -2384, -1504,   574,   576, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
    1816,  1484,   823, -2384, -2384, -2384, -2384, -2384, -2384, -2103,
    1817, -2384, -2384, -2384,   813, -2384, -2384, -2384,  1150, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384,  1099, -2384, -2384, -2384, -2384,
   -2384, -2384,  1464,   808, -2384, -2384, -2384, -2384, -2384,  -566,
   -2384, -2384, -2384, -2384,  1121, -2384, -2384, -2384,  1791, -2384,
    1787, -2384, -2384, -2384,  2066, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384,   787, -2384, -2384, -2384, -2384, -2384,
    1782,  1113, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384,   545, -2384,  1115, -2384, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,   -75, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384,  -376, -2384,
    1434, -2384, -2384,  -842, -2384,  1016, -2384, -2384,  1025, -2384,
     844, -2384,  1591, -2384,  1599, -1096, -2384,   949, -2384,   952,
     556, -2384,   568, -2384,   571, -2384, -2384, -2384, -1910,   197,
     347, -2384, -2384,   558, -2384,   561, -1234,   800, -2384,  1284,
   -2384,  1286,  -456,  -915,  -309,  -813, -2384, -2384,  1579, -1189,
     824,   826,   832,   833,  -508,   408,  -267,   728,   817, -2384,
    1181,   -85,  -721,  -295,  1044,  1841, -1223,  -195,  -347, -2384,
    -605, -2384,  -269, -1221,  1658, -1374,  -401,  1426, -2384,   489,
   -1240,  -168,  1750,  -299,  -274, -2384,   501,   -16, -2384,  -738,
   -1232, -2384,  1185,  -581,  -892,  -316,  1957, -1288, -2384, -2384,
     -80,  -305, -2384,   838,  -232,  -436, -2384, -2384,  1131,  -484,
    -494,  -394,  1093, -1703,  1101,  -334,  -177,  -433,  -297, -2384,
   -2384, -2384,   258,  1997, -2384, -2384,   803, -2384, -2384, -2384,
   -2384, -2384, -2384, -2384, -2384, -2384, -2384, -2384, -1442, -2384,
   -2384,   310, -2384, -2384,   121, -1646,   272, -2384, -2084, -2384,
    -634, -1875, -1835, -1203, -2384, -2384,    28, -2384, -1316, -2384,
   -1808, -2384, -2384,   661, -2384,  -209, -1906, -1911, -2384, -2384,
   -2384, -2384, -1829, -1388,  -241,  -505, -1178,  1435,   903, -2384,
   -2384,  -512, -2384, -2384, -2384,  -182, -2384, -2384, -2384,  1190,
   -2384,   939, -2383,  -843, -2384, -2384, -2384,  -242,   815, -1601,
   -1550, -2384, -2384,  -216, -2384, -2384,  -127, -2384,  1166, -2384,
   -2384, -2384,    46, -2384, -1493,  -244, -2384, -2384, -2384, -2384,
   -2384, -2384
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,     7,     8,     9,    10,    11,
      56,    57,    58,    60,    16,    12,    21,   235,    22,    53,
      82,    78,   422,   735,   736,   737,    17,    18,    29,    30,
      48,    49,   202,   396,   700,    50,   201,   386,   387,   388,
     389,   390,   391,   392,  1354,   393,   416,  1057,  1387,  1388,
    1389,  2028,  1698,    74,   216,   217,   218,   219,   220,   414,
     721,  1384,   722,   723,   221,   702,  1368,  1369,  1370,  2023,
    2217,  1371,  2615,   222,   421,   223,   714,   715,   716,  1378,
     224,  1038,  1039,   225,   226,  1374,   227,   228,   229,   230,
     231,   232,    44,    45,    70,   377,   200,   378,  1344,  1681,
    2002,  2003,  2408,  2409,  2410,  2316,  2456,  2449,  2004,  2396,
    2005,  2515,  2006,  1968,  2007,  2008,  2009,  2010,  2463,  2491,
    2011,  2012,  2013,  2014,  2015,  2413,  2016,  2017,  2206,  2018,
    1585,   684,   685,   686,   687,  1017,   688,  1013,  2214,  2215,
    2331,    26,   194,    27,    41,    66,   195,   196,   677,   197,
    1010,  1332,  1333,  2301,  1334,  2513,  2391,  2175,  1335,  1336,
    1986,  2309,  1337,  1338,  2304,  2384,  2385,  2386,  2387,  1339,
    2190,  2191,  1340,  2177,  1341,  1342,  1677,   369,  1312,   370,
     371,   671,   672,  1319,   673,  1007,  1008,  1659,  2172,  2289,
    2290,  2291,  2292,  2293,   674,  1963,  1658,  1941,  1942,  1943,
    2269,  1944,  1945,  1946,  1947,  1948,  1949,  1950,  2708,  2808,
    1951,  2262,  2369,  2437,  2260,  2477,  2479,  2480,  1574,  2507,
    2608,  2609,  1952,  1953,  1954,  1955,  1956,  2374,  2265,  2266,
    2439,  1957,  1958,   670,  1653,  1001,  1893,  1316,  2135,  2256,
    2361,  2472,  2502,  2532,  2533,  2591,  2633,  2534,  2629,  2645,
    2667,  2668,  2669,  2670,  2671,  2672,  2588,  2632,  2674,  2687,
    2712,  2713,  2770,  2797,  2804,  2714,  2715,  2789,  2810,  2716,
    2717,  2718,  2719,  2720,  2721,  2746,  2747,  2750,  2751,  2722,
    2723,  2724,  1657,  2257,  2364,  2365,  2366,  2474,  2503,  2567,
    1789,  1790,  2656,  2657,  2658,  2662,  2568,  2569,    38,   744,
    1396,    39,    87,   239,   238,   425,   426,   427,   741,  1065,
     241,  1067,  1704,   363,   655,   656,  1874,  2116,   657,   658,
    1304,  1170,  1171,  1510,   659,    64,   140,   141,   313,   435,
     750,   436,  1072,  1073,  1074,  1096,  1075,  1416,  1417,  1076,
    1446,  1447,   749,   142,   314,   473,   778,   776,   143,   315,
     489,  1148,   144,   316,   501,   502,  1150,   145,   317,   510,
     511,   851,  1191,  1537,  1538,  1539,  1498,   332,  1771,  1763,
    2058,  1764,  2056,  1765,   804,   146,   318,   513,   147,   319,
     516,   811,   148,   320,   519,   816,   149,   150,   151,   321,
     528,   825,   828,   152,   322,   532,   533,   534,   535,   841,
     536,  1180,  1181,  1182,  1515,  1533,   832,   153,   323,   540,
     847,   154,   324,   543,   155,   325,   546,   547,   548,   856,
     857,   858,  1201,   859,  1196,  1197,  1543,   853,   156,   326,
     557,   333,   157,   327,   558,   158,   328,   561,   159,   329,
     564,  1208,   160,   161,   334,  1212,  1550,   162,   335,   569,
     900,  1221,  1553,  1812,  1813,  1814,  1815,   163,   336,   572,
     164,   337,   574,   575,   906,   907,  1233,   908,   909,  1564,
    1565,  1230,  1231,  1232,  1558,  1823,  1824,  1825,   165,   338,
     166,   339,   584,   167,   340,   586,   916,   168,   342,   592,
     593,   920,  1587,   169,   343,   597,   924,  1591,   925,   598,
     599,   600,  1251,  1253,  1254,   170,   344,   607,  1266,  1846,
    2097,  2242,   932,   171,   172,   345,   609,   173,   174,   346,
     612,   939,   175,   347,   614,  1267,   942,   176,   177,   348,
     617,   948,  1270,  1605,  1606,   946,   178,   349,   623,   724,
     961,   624,   625,  1290,  1291,   626,   627,   628,   629,   630,
     631,   632,   179,   350,   579,  1830,   910,  2091,  1238,  1570,
    2089,  2238,   180,   351,   640,  1293,   969,  1622,  1623,  1624,
     965,   181,   642,   971,  1863,   357,   182,   358,   644,   645,
     646,  1634,   976,   183,   359,   649,   981,   184,   361,   185,
     362,   651,   186,   364,   660,   187,   365,   662,   188,   366,
     664,   994,  1642,  1643,  1309,  1645,  1879,  2122,  1881,   992,
    2117,  2251,  2349,  2350,  2351,  2624,  2352,  2498,  2499,  2524,
    2353,  2470,  2354,  2355,  2356,   189,   367,   666,   937,  1310,
    1259,  1884,   996,  1406,  1710,  1407,  1408,  1707,  1409,  1410,
     835,  1175,   836,  1173,   837,  1483,  1749,  1484,  1747,  1485,
    1868,  2110,  1869,  2108,  1870,  1597,  2243,  2343,  1598,  1850,
    1851,  1885,  2129,  1886,  2127,  1887,  1166,  1167,  1508,  1168,
    1506,  1169,  2040,   567,   568,   550,   551,   886,   887,   888,
     889,   890,   891,   892,  1099,  1460,  1109,   491,   492,   493,
     494,   474,   520,   819,   610,   618,  1247,  1248,   573,   633,
     634,   897,   601,   504,   505,  2302,  1978,  1027,  1972,  1973,
    1979,   400,   717,   559,   522,   839,   475,   476,  2760,  1121,
     496,  1105,  1464,  1566,  1757,   514,   602,  1398,  2047,  2041,
    1261,  1399,   580,   637,   477,   438,   523,   524,   439,   753,
     754,  1400,  1379,  2748,  1040,   478,   479,   480,   481,   482,
     483,   484,   782,   762,  1128,  1125,  1118,  1110,  1112,   675,
    1644,  2485,   799,  1141,  1493,   935,  1626,   681,   822,  1161,
    1781,  2271,   312,  1651,  1726,  1675,  1348,  1964,  1077,  2212,
     428,   394,   413,  1662,  2077,  1791,  1346,  2592,  1157,  2392,
    2120,  1577,  2731,  2083,  1772,   406,  1049,  1833,  2161,  2133,
    2587,  2180,  1672,  1714,  2734,   756,  1239,  1053,  1838,  2520,
    1060,  2019,   990,  2153,   404,  2141,  1960,  2307,  2467,  1632,
    1683,   899,  2372,   565,  2198,  2151,  2440,   606,  1571,  1418,
    1098,   820,  2496,   747,  1976,  2648,  2619,  1687,  1666,   813,
    2225,  1630,  1240,   395,  2679,  2685,  2773,  2774,  2775,  2776,
    2777,  2536
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     407,   408,   374,   577,   411,   706,   538,   709,   757,   974,
     712,  1252,    63,   814,   763,   652,   549,   830,   499,  1970,
     725,  1204,  1581,  2049,  1731,   521,   423,  1715,   957,  1546,
    1716,   824,  1684,  1599,  2163,  1127,   570,   401,  2024,   949,
     578,   823,  1198,   409,   636,  1137,   605,   503,   490,   785,
     635,   854,  1046,   560,    85,  1652,  1130,  1225,   372,  1627,
     970,   560,  1828,  1502,   398,   398,  1685,  1661, -1631,  1695,
    -685,   616,  2123,  1018,  1699,   560, -1632,  1207,  1722,   412,
    2497,   437,   424,   497,  2203,  2204,   515,  1793,   424, -1895,
     539,  1803,  1424,  1535,  1103,  2612,  2796,  2435,   912,  1983,
   -1916,   940,  1235,  1625,  1705,   576,  1226,  1457,  2468,   792,
   -1882,   603,   694,  1005,  1760,  1689,  1760, -1637,  1193,  2201,
     718, -1824,  2430,  1669,   517,   731,   529,   192,  1189,  2087,
     922,  1390,   661,  1741,   665,   903,  2220,  1766,   498,  1984,
    1069, -1929,   430,   526,   824,  2182,  1097,  1579, -1929,   608,
     526,   613,  2594,   765,   963,   701,   641,  1050,   526,  2194,
    1055,  1412,  1046,  1413,  2202,  1156,  1568,  2357,  2561,  1961,
     663, -1635,   526,  2183,   692, -1820,  1866, -1820,  1702,  1193,
     500,   507,   375,   682,  1051,  2382,   699,  2244,   787,   499,
     499,   499,   703,   704,  1872,   705,  1243,   807,  2297, -1882,
     710,   711,  1628,  2154,  1974,   726,  1637,  1575,  1235,  -685,
    1391,   758,   419,  -685,   605,   405,  1481,   739,  2638,   527,
     790,   500,  1511,  1512,   732,   902,  2139,  1227,  2521,  1178,
     495,  1164,   503,  -683,  2421,   766,   767,  2458,  1448,   943,
    2236,  1786,  2196,  2791,  1154,   772,  1452,  1761,  1679,   718,
   -1637,  1108,  1111,  1114,   789,   789,   789,    33,    34,  1102,
    1457,  1302,  2522,  1696,  1179,  1047,  2691,   752,  1787,  1155,
    1788,   373,  -685,   764,  1386,   812,  1138,  2459,  1457,   603,
    2205,   515,  1680,  2523,  2313,   896,   740,  -685,  1104,   802,
    1832,   997,  1228,  2197,  2595,  2809,   896,  1165,  1023,  2140,
    2379,   605,   683,  1041,   983,  1576,   518,   541,   786,   498,
     498,   498, -1929,  2254,  2079,  2080,   566,  1975,  1457,  2464,
    1106,   808,  1224,   585,   587,  2362,  1457, -1929,   901,  1162,
     500,   955,   826,  1482,  2299,  2344,   718,   508,  1457,   509,
     864,  1962,   647,   526, -1840,   431,  1867,  1135,   424,   682,
     376,  1414,  2706,   193,   424,  1457,   560,  2237,   718,  1307,
    2483,   896,  1767,  1891, -1860, -1820,   603,  1742,  1804,  1832,
    1551,  2218,  -683,  1629,  2786,  1047,  -683,   434,  1158,  1554,
    1052,  2326,   526,  1397,   752,  1071,  1198,   512,   950,  1198,
    1276,  2650,  1752,   526,  1457,  2378,  1892,  1236, -1824,   622,
     973,   495,   495,   495, -1824,   718,  1306,  2469,  2088,   596,
    2150,   419,  2032,  1488,   733,   904,   979,   379,  -685,  1762,
   -1826,  1762,   694,  1260,   380,  1768,  2033,  2034,  2035,  2036,
    2037,  1856,  1415,  2362,   434,  -683,  2045,   434,  1101,  1985,
     898,   379,  1458,   951,  1769, -1916, -1820,  1723,   380,   923,
    -683,  2367,  2649,   526,   620,   499,  1794,   434,   526,   779,
   -1895,  2022,   499,   499,   499,  2757,  1513,   653,   683,  1162,
    2389,   499,   499,   499,  1124,  1444,  1124,  2181,   434,  1544,
    2021,  1021,   521,   379,   499,  1100,  1124,   499,   905,  1025,
     380, -1855,  1237,  1030,  1459,  2062,   499,   499,   499,   499,
     499,  1117,  1117,  1117,  2066,    86,  1451,  2069,  1078,   752,
    2613,  1569,  1805,  1012,  1136,   449,  1054,  1101,   734,   793,
     789,   779,   654,   499,   794,  1686,  1229,   789,   789,   789,
    1062,   653,   518,  1019,  1700,   893,   789,   789,   789,  1122,
    1582,  1122, -1824,   621,   518,   549,   713,   855, -1824,   789,
    1690,  1122,   789,  1159,   521,   596,   696,  1540,  1056,   453,
    1194,   789,   789,   789,   789,   789,   812,   913,  1178,   458,
    1499,  1195,  1516,   373,   622,   498,  1697,  2231,   434,   399,
     399,  -683,   498,   498,   498,   518,   654,   434,   789,   518,
    1305,   498,   498,   498,  1123,  1458,  1123,  2574,  1237,  1183,
    1133,  1770,  1263,  1179,   498,  1177,  1123,   498,  2614,  1727,
    2484,   518,  2383,  1458,   499,  1242,   498,   498,   498,   498,
     498,  1194,   521,  2166,  1480,   596,   972,  1350,  1209,   647,
    1163,   381,  1195,   434,   779,  2051,  2134,  2300,  1487,  1264,
     560,  1514,   879,   498,   434, -1860,  1773, -1701,  1486,     3,
     958,  1559,   596,  1458,   462,   381,  2631,   793,   433,  1256,
    2393,  1458,   794,  1818, -1824, -1703, -1658,   495,  1392,  1465,
   -1824,   950,  1133,  1458,   495,   495,   495,  1246,    -5,   789,
    2419,   896,  -690,   495,   495,   495,  2098,   521,  -688,  1854,
    1458, -1929,  1607,   405,   653,  1255,   495,   381,  1463,   495,
    2070,  1268,  2072,    46,  1262, -1705,  2099,   382,   495,   495,
     495,   495,   495,  1471,   441,  1271,  1611,  1612,  1613,  1614,
    1615,  1616,  1617,  1618,   464, -1699,   951,  1294,  1198,  1458,
    1977,   382,  2100, -1929,   498,   495,  2159,   526,  1740,  2092,
    1133,   449, -1696,   817, -1599,  1300,   866,   867,  1875,   654,
    2563,  2222,  1784,   449,    51,   950, -1929,  2101,  1292,   848,
    -690,  1131,   518,  2527,   383,   718,  -688,   622,    13,   384,
     467,   864,   742,   382,   933,   449,  2113,  2114,   526,  2046,
    2308,  1491,  2448,  2455,  2064,   453,   868,   869,   383,  1821,
    1572,  2528,  2529,   384,   449,   458,   833,   453,   449,  2184,
    1375,  1343,  2564,   330,   499,  1133,  2185,   458, -1824,  -680,
     951, -1929,    15,  1796, -1824,  1798,   434,    47,  1822,   453,
     449,  1583,   472,   537,   779,   934,   495,  1351,  2755,   458,
     383,  1078,  1188,  1190,  1462,   384, -1929,   441,   453,   521,
     544,  1465,   453,   379,    52,   695,   984,  2784,   458,    19,
     380,   545,   458, -1929,  1393,   950, -1599,  2167,  2620,  1835,
     650,   434,  1401,  2246,   453,  2235,  1172,  2565,  1296,   789,
     893,   596,   434,  1495,   458,  1466,   385,    23, -1929,  1573,
     462,  1497,  2160,  2584,  2630,  1382,  1383,   693,  1584,  2394,
    2566,  1203,   462,    24,  1785,     4,  1774,  1775,  1776, -1929,
     696,  1244,  2571,  1540,  1620,   985,   441,  1481,    25,  1621,
     951,  2517,   798,   596,   462,  2621,   743,  1873,   780,   -32,
     449, -1929,  1282,  2622,   498,    28,  2065,  2390,  2081,   834,
    1283,  1211,  1586,   462,  2707,  2358,   405,   462,  1183,  1359,
    2628,   849,  1578,  1280,  2395,  2673, -1929,  2169,  -680,   956,
     464,  1503,  -680,   526,  1295,   434,  1249,   526,  1299,   462,
   -1929,  1845,   464,  1777,   453,  1801,  1303,   560,   896,  2460,
     526,   449,  1827,  2078,   458,  1819,   -21,  2689,  2690,  2102,
   -1929,   331,   959,  1360,   464,  2727,  2709,   434, -1842,  2728,
    2729,     4,  1751,  1361,  1275,    20,   467,    31,  1297,  1703,
     950,   950,   880,   464,   881,  1589, -1929,   464,   467,  2623,
    1352,  -680,   526,  2338,    32,   453,   495,   718,  2752,   960,
     809,  2186,   434,   552,  1482,   458,  -680,  2530,  2345,   464,
     467, -1929,   622,  1595,   733,   840,   434,   434,  2518,   434,
     434,   950,   434,   449,  1744,   818,  1890,  2752,   472,   467,
    2735,  2710,  1588,   467,   434,   951,   951,   381,  1635,   462,
     472,   596,   373,  1877,   526,   526,   526,  1635,  1268,  1636,
     739,  1736,  1353,   879,  2711,   467,  1646,  1646,  1363,  2411,
    2754,   596,   472,  1026,  1889,  2489,  2725,   453,  1778,  1779,
     352,  1560,  2677,  1780,   596,   434,   951,   458,  1284,   434,
    1481,   472,  2678,   596,  2461,   472, -1840,  2363,    80,  2187,
     462,  1660,   449,  1663,  2516,   745,  1668,  1670,    35,  1673,
   -1855,   434,   -21,  2686,  2046,   526,  2346,   472,  2139,   464,
    1285,  2334,  2335,   382,  2188,  2139,  2189,  2726,   734,   740,
    1561,   810,  2442,  2443,  2170,  2171, -1599,  2139,  1364,   405,
     553,   554,  1286,    37, -1599, -1599,   453,  -680,  1759, -1599,
    2137,  2600,  2531,   499,   499,  2347,   458,  2294,  2294,   555,
     499,   596,   499,  2684,  1678,   467,   581,  2652,    36,  1124,
     464,  2139,   462,  2606,  1596,   353,  2295,  2295,   581,  1156,
     383,  1991,   499,  1728,  1730,   384,  1504,  1505,    81,  2749,
    1728,  2142,  1728,   373,  2348,   746,  2462,  1287,  2144,  2792,
    1225,  1717,  1694, -1927,    42,  2363,  1718,  1482,  2501,  2138,
    2146,  1759,  1754,  1992,   556,   354,   467,   472,   789,   789,
     588,  1724,  2793,  1807,  2616,   789,  2642,   789,  2653,  1797,
    2314,  1799,  1547,  2511,  1122,   926,  1367,  1024,  2771,  2471,
    2500,   462,   464, -1929,  2148,   355,   596,   789,  2478,  1226,
    1758,  2060,    43,  2438,   927,  1610,   793,  2044,  1966,  1288,
    2294,   794,   434,  2046,   434,  1980,  1031,  2500,   472,  -528,
    1397,  2063,  1882,   498,   498,   521,  2315,   589,  1164,  2295,
     498,  2663,   498,  1402,  1853,   590,  1403,   449,   467,  1123,
      40,  1602,  2664,  2744,   896,  2635,  1759,  -528,  -528,  1783,
    2636,   526,   498,  2164,  1809,  1792,  2617,  2787,  2618,    55,
    1032,   464,  1795,  1758,   950,  2665,  1562,   829,  2043,  2043,
    1033,  2682,   950,   499,  2576,  2317,  1257,  2067,  2068,  1589,
    1357,   453,  2579,   521,   434, -1820,   966,  2165,  2745,  1849,
     472,   458,  1847,   356,  1165,  2666,  2625,   526,  1164,   526,
    1255,    59,  1831,  1862,   405,  1258,  2683,   467,  1289,  1600,
    2675,  1841,  2654,  1821,  2676,   495,   495,  2655,    61,   951,
    1227,   591,   495,  2677,   495,  2029,  1588,   951,   718,   679,
    1857,   615,   398,  2678,  1601,  1014,  1842,  1725,   789,  2043,
    2043,   526,  1822,   526,   495,  2794,  1402,   967,  1758,  1403,
     968,   667,   950,   680,  2030,  1034, -1112,  2042,  2042,   472,
    1883,  2048,  1139,  -528,  1165,  2423,  2424,  1404,  2795,  1405,
    2090,    62,   793,  2398,  2399,  2400,   462,   794,  -355,  1358,
    1709,   719,  1712,   720,  2494,  1228,   738,   506,  2495,  1959,
     738,   525,  -528,   498,  -355,  1969,  1015,  1016,   525,   562,
   -1112,   526,  1278,  1982,  2451,  2781,   525,   951,    65,   582,
   -1112,  2453,  2454,  1279,   604,  2785,   611,  2195,   611,   619,
     638,   582,  2050,  1782,    67,  1035,  1759,    68,  2042,  2042,
    2052,    69,   793,  2156,  -355,   795,   204,   794,   611,    71,
     793,  1461,  2585,  2586,   796,   794,   464,  2759,  2761,  1987,
     793,  2038,  2039,  1745,  1746,   794,  1467,  1213,    72,  1469,
    1214,  1142,  1143,  1215,  1216,  1472,  2274,  1359,  2790,  1476,
    2155,  1036,   988,   793,   989,  1478,    73,   707,   794,   707,
    2061,   204,   707,  -528,   205,   495,    47,  2800,  1489,   719,
    1214,   720,   467,  1215,  1216, -1112,  2401,   793,  2732,  2733,
    1563,   449,   794,  -355,    46,  2275,  2276,  2277,  2278,  2279,
    2402,  1360,  1119,  1120,  2813,   204,  1808,  1844,    77,   191,
    1810,  1361,   206,  1037,   207,  1664,   208,  1665,  1758,   205,
   -1615, -1615, -1615, -1615,   209,  1362,   198,  -355,   434,   199,
     203,  1906,  1907,  2207,   472,   453,   233,  1404,   440,  1405,
    2802,   441,  1144,  1145,  1146,   458,  1864,  1864,  2131,   526,
    2132,   526,  2223,   205,  2224, -1112,  -355,   206,  1848,   207,
    2173,   208,   506,  -355,  2617,   234,  2618,  1321,  2646,   209,
    2647,  2762,  2682,   240,  -355,   842,   843,   844,   845,   236,
     210,   525,  1081,  1322,  1082,  2403,  2404,  2405,   526,   237,
     341,   206,  2112,   207,  2273,   208,  1363,   788,   360,   791,
    2406, -1112,   368,   209,  -364,   385,   402,  2763,  -528,  1229,
   -1614, -1614, -1614, -1614,   403,   442,  1184,  1185,  1186,  1187,
     525,   405,   410,  1323,  2677,   210,   526,   412,   415,   420,
     462,   525,   444,   432,  2678,   373,  2280,  2281,  2282,  2283,
    2284,  2285,  2286,  1919,  1920,   434,   542, -1112,  2143,  2145,
    2147,  2149,  2221, -1112,   563,   571,  1733,   669,  1735,   210,
    2162,  1737,  1738,  1739,  2296,  2296,  1364,  1743,   668,  1365,
    1366,   676,   678,   689,   690,   211,   691,   619,  1755,  1756,
    -355,  -355,   698,   708,   713,  1277,  2208,   727,   730,   748,
     729,   525,  2407,   751,   752,  -355,   525,  -355,   775,   755,
     464,   759,   760,   761,  2192,  2303,  2227,  2193,  2228,   768,
    2298,   769,   797,   770,  2200,   771,  2074,  2305,  1217,  1218,
     211,   212,  2053,  2054,  2055,   773,   445,   446,   447,   780,
     801,   781,   783,   784,   803,   448,   515,   815,   821,   827,
     829,  2213,   831,   850,  1219,  1220,   467,   449,  1217,  1218,
     846,   894,   898,  2758,   211,   405,  2216,  1588,  2226,  2267,
     911,   852,  1324,   914,  1367,   707,   212,  2296,   915,   917,
     919, -1617,   928,  1325,  1219,  1220,   930,   929,   931,   936,
     450,   938,  -355,   941,   947,   945,   451,   952,   452,   622,
    2287,   453,   434,   454,   455,   456,   962,  2370,   472,   457,
     212,   458,  2573,   964,   424,  2288,   459,   975,  1068,   980,
    2250,  2103,   991,   213,   987,  2104,  2105,  2241,  2253,   993,
     995,  2255,   998,   999,   526,  1000,   526, -1707,  2106,  2107,
    -355,  2381,  1003,  1009,  1022,  1011,   718,   399,  1132,  1026,
     460,  1028,  1029,  2764,  2125,  2126,  1042,  2765,  2766,  1043,
    2414,  2415,  1044,  1059,  2416,  1061,   214,  1988,   213,   461,
    1063,  2267,  1064,  1066,  1101,  1107,  2418,  1115,  1116,  1126,
    1134,  1140,  1989,  1147,  1149,  1160,   418,   500,   834,  1326,
    1327,   833,  1990,  1199,  1223,  1202,   462,  1210,  1241,  1269,
     596,  2767,   213,  1250,  1328,   904,  1329,  1265,  1281,  1273,
    1274,   214,  1301,  1308,  2434,  1314,  2768,  2769,  1313,  1315,
    1132,  1317,  1318,  -376,  1320,  2312,   463,  1568,  1345,  1079,
    1080,   728,  2319,  2320,  2321,  2322,  2414,  1347,  2446,  1356,
    2325,   215,  1349,  1373,  1376,   214,  1377,  1381,  1386,  2341,
    1394,  1395,  1450,  2428,  1449,  1453,  1455,  1468,  1456,  2216,
    1454,  1470,  2359,  1492,  1473,  2337,   464,  1474,   506,  1475,
    1477,  1081,  1479,  1082,  1501,  1083,  1490,  1496,   465,   466,
    1588,   434,  2441,  1500,  1165,   525,   215,  1164,  1132,  1534,
    1536,  1330,  1541,  1542,  1236,  1548,  1549,  1556,  2303,   506,
    1552,  1567,  2388,  1555,  1580,  1278,  1590,  2232,  2233,  1084,
    1085,  1086,   467,  1592,  1593,  1596,  1279,  2505,  2240,  1608,
     215,  1603,   468,  1604,  1631,  1638,   525,  2303,  2381,  1640,
    1639,  1641,  1650,  1654,  1661,  1656,  1655,  1671,  1674,  1331,
    1676,  1682,  1156,   469,  2397,  1706,  1692,  1713,   470,  1720,
    1725,  1481, -1636,  1132,  1721,  2381,   471,  2417,   434,  1087,
    1482,  1088,  1811,  1817,   472,  1829,  1820,  1832,  1089,  1834,
    2422,  1090,  1837,  1069,  1840,  1849,  1852,  1871, -1929,  1876,
    1878, -1929,  1894,  1588,  1965,  1880,  1991,  1895, -1929, -1929,
    1967,  1971,  1981,  2025,  2026,  2027,  2031,  2601, -1592, -1634,
    1761,  2071,  2073,  2076,  1821,  1822,  2082,  2093, -1820,  2094,
   -1820,  2095,  2096,  1866,  1867,  2611,  2575,  2119,  1992,  2643,
    2115,  1883,  2121,  1882,  2136,  2150,  2152,  2158,  -239,  2174,
    2176,  2168,  2179,  2199,   379, -1929,  2740,  2209,  2210,  2211,
     582,  2219,  2229,  2230,  2234,  2247,  2248,  2252,  2249,  2303,
    1263,  2258,  2259,  2336,  2261,  2263,  2268,  2306,  2327,  2330,
    1091,  2332,  1092,  2270,  2333,  2339,  2340,  2368,  2377,  2360,
    2376,  2380,  2412,  2493,  2371,  2426,  1904,  2433,  2427,   622,
    2436,  2381,  2420,  1993,  2444,  2432,  2452,  1264,  1994,  2488,
    2465,  2482,  2466,  2476,  2481,  2345,  1412,  1081,  1413,  1082,
    2506,   525,  2473,  2490, -1929,   525,  2626,  2475,  2509,  2512,
    2514,  2519,  2577,  2510,  2578,  2526,  2589,  2580,   525,  2590,
    2602,   506,  1995,  2046,  2605,  2607,  2691,  2730,  2778,  2779,
    1996,  2736,  2806,  2535,  2570, -1929,  2803,  2807,  2812,  2738,
      14,    83,  1997,    54,  2737,    84,    79,    76,  1058,    75,
     697,   397,  1262,  1701,   417,  1385,  1688, -1929,  2582,  2583,
     525,  1372,  1045,  2659,  2492,  2603,  2328,  2318,  2604,  2593,
    2447,  2324,  1569,  1020,  2598,  1998,  2329,  2445,  2311,  1002,
    2562,  2264,  2801,  1999,  2504,  2508,  2572,  2641,  2799,  2375,
     515,  2780,  2805,  2783,  -236,  2782,  2431,  2660, -1820,  2596,
    2634,  2597,  2661,   429,  1802,  2610,   190,  1411,  1719,  1494,
     800, -1929,   525,   525,   525,  2059,  2627,  2057,  1071,  1800,
     838,  1152,  1517,  1192,  2000,  1200,  1806,  2001,  1153,  1545,
    2075,  2637,   895,  2639,  1234,  1557,  1222,  2640,  1826,  2086,
    2085,  2651,  1245,  2694,  1836,  1843, -1929,   515,   918,  1649,
    1594,  1619,  1272,  2814,  1855,   921,   639,   954,  1093,   953,
    1865,  2118,  1647,  2525,  1648,  1711, -1929,   978,  1176,  1922,
    1588,  1311,  1708,   525,  1750,  1174,  1748,  2124,  2111, -1820,
    2109,  2342,   499,   499,  2245,  2130,  2695,  2128,  2696,  1888,
    1858,  1355,  1859,  1509,  1507,  2680,  2681,   944,  1860,  1861,
    1151,  2178,  1609,   499,  2599,  1206,  1048,   774,   806,  1094,
    2688,  1693,  2425,  2743,  1691,  2692,  2693,  2272,  2323,  2697,
    2487,  1095,   499,  2084,  2753,  1380,  1839,  1633, -1929,  2644,
    1667,  2739,  1816,  2486,  2741,  2742,  2020,  2772,     0,     0,
    1518,  2698, -1929,  1519,     0,     0,     0,   789,   789,   499,
    1520,  1521,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1929,     0,  1926,     0,     0,     0,  2756,   789,  2699,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2798,  2798,     0,     0,     0,     0,     0,   789,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1522,     0,     0,
       0,     0,   498,   498,     0,     0,     0,     0,     0,     0,
    2811,     0,     0,     0,   789,     0,     0,     0,     0,     0,
       0,     0,     0,   498,     0,     0,     0, -1929,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1177,     0,
       0,     0,   498,   707,  1931,     0,     0,     0,     0,     0,
       0,     0,     0,  2700,     0,     0,     0,     0,   596,   525,
       0,     0,     0,     0,     0,     0,  1523,     0,     0,   498,
    2701,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2702,     0,   495,   495,     0,  1524,     0,     0,
       0,     0,     0,     0,     0,   525,     0,   525,     0,     0,
       0,     0,     0,  2703,     0,   495,     0,     0,     0,  1525,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2704,   495,     0,     0,     0,     0,     0,
    1940,     0,  2705,     0,     0,     0,     0,     0,     0,   525,
       0,   525,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   495,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1526,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,    90,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1527,   525,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   582,     0,     0,     0,     0,     0,  1528,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,   707,
       0,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   582,   582,   582,   582,   582,
    1529,     0,    99,   582,   582,   582,     0,   582,     0,     0,
     100,     0,   101,     0,  1530,     0,     0,     0,     0,  -728,
    -728,  -728,  -728,  -728,  -728,  -728,  -728,  -728,  -728,     0,
    -728,  -728,  -728,  1531,  -728,  -728,  -728,  -728,  -728,  -728,
    -728,  -728,  -728,   102,     0,     0,     0,     0,  -728,     0,
       0,     0,     0,  -728,   103,     0,  -728,     0,     0,   104,
       0,     0,     0,     0,   582,     0,     0,     0,     0,     0,
       0,     0,     0,   582,   582,   582,   582,   525,     0,   525,
       0,     0,     0,     0,     0,     0,     0,   105,     0,     0,
       0,     0,     0,     0,   106,     0,     0,   107,   108,  1532,
       0,     0,     0,     0,     0,     0,     0,     0,   109,   442,
       0,     0,   707,     0,     0,   110,   525,   111,     0,     0,
     112,     0,     0,     0,  -728,     0,   444,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   525,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,   114,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,     0,     0,     0,  -728,  -728,  -728,     0,  -728,
    -728,  -728,  -728,     0,     0,    88,     0,    89,     0,    90,
       0,     0,     0,     0,    91,     0,   117,     0,     0,     0,
       0,  2157,    92,     0,     0,     0,     0,     0,     0,   118,
     445,   446,   447,     0,     0,     0,     0,     0,     0,   448,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,     0,     0,     0,    93,    94,   119,   120,     0,
       0,     0,     0,     0,     0,    95,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,    96,     0,     0,    97,
       0,   122,   123,     0,     0,     0,     0,     0,   124,     0,
       0,     0,   125,    98,     0,   453,     0,   454,   455,   456,
       0,   126,     0,   457,     0,   458,     0,     0,     0,     0,
       0,   127,     0,     0,     0,     0,    99,     0,     0,  -728,
     128,     0,     0,     0,   100,     0,   101,     0,     0,   129,
     582,     0,     0,     0,   130,   131,     0,     0,   132,     0,
     133,     0,     0,     0,   460,     0,     0,     0,   134,   441,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,  -728,   525,     0,   525,     0,     0,     0,   103,     0,
       0,  -728,     0,   104,     0,     0,     0,     0,     0,   136,
       0,     0,  2239,     0,     0,     0,   137,     0,     0,     0,
     462,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,     0,     0,     0,     0,     0,     0,   106,     0,
       0,   107,   108,  -728,     0,     0,     0,     0,     0,   139,
     463,     0,   109,   442,     0,     0,     0,     0,     0,   110,
       0,   111,     0,     0,   112,     0,     0,     0,     0,     0,
     444,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     464,     0,     0,     0,     0,     0,     0,   707,     0,     0,
       0,     0,   465,   466,     0,     0,   113,     0,     0,     0,
     114,     0,   115,  2310,  2310,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   467,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   468,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   445,   446,   447,   469,     0,     0,
       0,     0,   470,   448,     0,     0,     0,     0,     0,     0,
     471,     0,   434,     0,  2373,   449,     0,     0,   472,     0,
       0,   119,   120,     0,     0,     0,     0,   442,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   444,   122,   123,     0,     0,     0,
       0,     0,   124,   707,     0,     0,   125,     0,     0,   453,
       0,   454,   455,   456,     0,   126,     0,   457,     0,   458,
     707,     0,   707,   707,     0,   127,   707,     0,     0,     0,
       0,     0,     0,     0,   128,     0,     0,     0,   506,     0,
       0,     0,     0,   129,     0,     0,     0,     0,   130,   131,
       0,     0,   132,     0,   133,     0,     0,     0,   460,     0,
       0,     0,   134,     0,    88,     0,    89,     0,    90,     0,
       0,     0,     0,    91,     0,   135,     0,     0,     0,     0,
       0,    92,     0,   707,   707,     0,     0,     0,   445,   446,
     447,     0,     0,   136,     0,     0,     0,   448,   707,     0,
     137,  2450,  2450,     0,   462,   138,     0,     0,     0,  2450,
    2450,  2457,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,   506,    95,   442,     0,     0,     0,     0,
       0,     0,     0,   139,   463,    96,     0,     0,    97,     0,
       0,     0,   444,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,   805,     0,   454,   455,   456,     0,     0,
     707,   457,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   506,     0,   464,    99,     0,     0,     0,   707,
       0,     0,     0,   100,   707,   101,   465,   466,     0,   707,
     707,     0,     0,     0,     0,     0,     0,     0,     0,   506,
       0,     0,   460,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   707,     0,     0,
     467,     0,     0,     0,     0,  2581,     0,   103,     0,     0,
     468,     0,   104,     0,     0,   594,   445,   446,   447,     0,
       0,     0,     0,     0,     0,   448,    88,     0,    89,     0,
      90,   469,     0,     0,     0,    91,   470,     0,     0,     0,
     105,     0,     0,    92,   471,     0,   434,   106,     0,     0,
     107,   108,   472,     0,     0,     0,     0,   707,   463,     0,
       0,   109,     0,     0,     0,     0,     0,     0,   110,     0,
     111,     0,     0,   112,   582,     0,    93,    94,     0,   582,
       0,   595,     0,   454,   455,   456,    95,     0,     0,   457,
       0,   707,     0,     0,     0,     0,     0,    96,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     465,   466,     0,     0,    98,   113,     0,     0,     0,   114,
       0,   115,     0,   707,     0,     0,     0,     0,     0,     0,
     460,   116,     0,     0,     0,     0,     0,    99,     0,   582,
       0,     0,     0,   582,     0,   100,     0,   101,     0,     0,
       0,     0,     0,     0,   468,     0,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,   469,     0,     0,   102,     0,
     470,     0,     0,     0,     0,     0,     0,     0,   471,   103,
     434,     0,     0,     0,   104,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,   463,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,     0,   122,   123,     0,     0,     0,   106,
       0,   124,   107,   108,     0,   125,     0,     0,     0,     0,
       0,     0,     0,   109,   126,     0,     0,     0,     0,     0,
     110,     0,   111,     0,   127,   112,     0,     0,   465,   466,
       0,     0,     0,   128,     0,     0,     0,     0,     0,     0,
       0, -1929,   129,     0,     0,     0,     0,   130,   131,     0,
       0,   132,     0,   133,     0,     0,     0,     0,     0,     0,
       0,   134,     0,     0,     0,     0,     0,   113,     0,     0,
       0,   114,   468,   115,   986,     0,     0,     0,     0,     0,
       0,     0,     0,   116, -1168,     0,     0,     0,     0,     0,
       0,     0,   136,   469,     0,     0,     0,     0,   470,   137,
       0,     0,     0, -1168,   138,     0,   471,   596,   434,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   242,   118,   243,     0,     0,     0,     0,
     244,     0,   139,     0,     0,     0,     0,     0,   245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,   246,   247,     0,     0,     0,   122,   123,     0,     0,
       0,   248,     0,   124,     0,     0,     0,   125,     0,     0,
       0,     0,   249,     0,     0,   250,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   127,     0,     0,   251,
       0,     0,     0,   440,     0,   128,   441,     0,     0,   860,
     861,   862,     0,     0,   129,     0,     0,   863,     0,   130,
     131,     0,   252,   132,     0,   133,     0,     0,     0,     0,
     253,     0,   254,   134,     0,     0,     0,     0,     0,   255,
       0,   256,   257,   258,   259,   260,   261,   262,   263,     0,
     264,   265,   266,     0,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   136,     0,     0,     0,     0,     0,
       0,   137,     0,     0,   277,     0,   138,     0,     0,   278,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   444,     0,     0,
       0,     0,     0,     0,   139,     0,     0,   279,     0,     0,
       0,     0,     0,     0,   280,     0,     0,   281,   282,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   283,     0,
       0,     0,     0,     0,     0,   284,     0,   285,     0,     0,
     286,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   864,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   865,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   287,     0,     0,     0,   288,     0,   289,     0,
       0,   445,   446,   447,     0,     0,     0,     0,   290,     0,
     448,     0,     0,     0,     0,     0,   866,   867,     0,     0,
       0,     0,   449,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   291,     0,     0,     0,
       0,     0,  1205,     0,     0,     0,     0,     0,     0,   292,
       0,     0,     0,     0,     0,   450,   868,   869,     0,     0,
       0,   451,     0,   452,     0,     0,   453,     0,   454,   455,
     456,     0,     0,     0,   457,     0,   458,   293,     0,     0,
       0,   459,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,   870,     0,     0,     0,     0,     0,
     871,     0,   295,     0,     0,   872,     0,     0,   296,     0,
       0,     0,   297,   873,     0,   460,     0,     0,     0,     0,
     874,   298,     0,     0,     0,   875,     0,     0,     0,     0,
       0,   299,     0,     0,   461,     0,     0,     0,     0,     0,
     300,     0,     0,     0,   876,     0,     0,     0,     0,   301,
       0,     0,     0,     0,   302,   303,   440,     0,   304,   441,
     305,   462,   860,   861,   862,     0,     0,     0,   306,     0,
     863,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,   307,     0,     0,     0,     0,     0,     0,     0,   444,
       0,   463,     0,     0,     0,     0,     0,     0,     0,   308,
       0,     0,     0,     0,     0,     0,   309,     0,     0,     0,
       0,   310,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,   442,     0,     0,     0,     0,     0,   311,
       0,     0,     0,   465,   466,     0,     0,     0,     0,     0,
     444,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   877,     0,   878,     0,   879,
       0,     0,   880,     0,   881,   882,   883,   467,     0,   884,
     885,     0,   594,   445,   446,   447,     0,   468,     0,     0,
       0,     0,   448,     0,     0,     0,     0,     0,     0,     0,
    -892,     0,     0,  -892,     0,     0,     0,     0,   469,     0,
     864,     0,     0,   470,     0,     0,     0,     0,     0,     0,
     865,   471,     0,   434,     0,     0,     0,     0,     0,   472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   424,   445,   446,   447,     0,   805,     0,
     454,   455,   456,   448,     0,     0,   457,     0,     0,   866,
     867,     0,     0,     0,     0,   449,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -892,     0,     0,
       0,     0, -1824,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -892,     0,     0,   460,   450,   868,
     869,     0,     0,     0,   451,     0,   452,     0,     0,   453,
       0,   454,   455,   456,     0,     0,     0,   457,     0,   458,
       0,     0,     0,     0,   459,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   870,     0,     0,
       0,     0,     0,   871,     0,     0,   440,     0,   872,   441,
       0,     0,     0,     0,     0,     0,   873,     0,   460,     0,
       0,     0,     0,   874,     0,     0,     0,     0,   875,     0,
    -958,     0,     0,   463,     0,  -958,     0,   461,  -958,     0,
       0,     0,     0,     0,     0,  -958,  -958,   876,  -892,  -892,
    -892,     0,     0,     0,     0,     0,     0,  -892,     0,     0,
       0,     0,     0,     0,   462,  -958,     0,  -958,     0,  -892,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   442,     0,   465,   466,     0,     0,     0,
       0,     0,  -958,     0,   463,     0,     0,     0, -1929,     0,
     444,     0,  -892,     0,     0,     0,     0,     0,  -892,     0,
    -892,     0,     0,  -892,     0,  -892,  -892,  -892,     0,     0,
       0,  -892,     0,  -892,     0,     0,     0,     0,  -892,   468,
       0,     0,     0,     0,   464,     0,     0,     0,     0,     0,
     440, -1168,     0,   441,     0,     0,   465,   466,     0,     0,
     469,     0,     0,     0,     0,   470,     0,     0,     0,     0,
   -1168,  -958,  -892,   471,   596,   434,     0,  -892,   877,     0,
     878,     0,   879,     0,     0,   880,     0,   881,   882,   883,
     467,  -892,   884,   885,     0,     0,     0,     0,     0,     0,
     468,     0,  -958,     0,   445,   446,   447,     0,     0,     0,
       0,     0,     0,   448,     0,     0,     0,     0,  -892,     0,
       0,   469,     0,     0,  -958,   449,   470,   442,     0, -1824,
       0,     0,     0,     0,   471,     0,   434,     0,     0,     0,
       0,     0,   472,     0,   444,     0,     0,     0,  -892,     0,
       0,   440,     0,     0,   441,     0,     0,     0,   450,     0,
       0,     0,     0,     0,   451,  -958,   452,     0,     0,   453,
       0,   454,   455,   456,     0,     0,     0,   457,  -958,   458,
       0,     0,  -892,     0,   459,  -958,     0,     0,  -892,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -892,  -892,     0,     0,     0,     0, -1929,     0,     0,     0,
       0,     0,     0,  -958,     0,     0,     0,     0,   460,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,  -958,  -892,     0,     0,   461,   445,   446,
     447,     0,     0,     0,  -892,   444,  -958,   448,     0,   330,
     440,  -892,     0,   441,     0,     0,     0,     0,   643,   449,
       0,     0,     0,     0,   462,  -892,     0,     0,     0,     0,
    -892,     0,     0, -1824,     0,     0,     0,     0,  -892,     0,
    -892,     0,     0,     0,     0,   440,  -892,     0,   441,     0,
       0,     0,   450,     0,   463,  -958,     0,     0,   451,     0,
     452,     0,     0,   453,     0,   454,   455,   456,     0,  -958,
       0,   457,     0,   458,     0,     0,     0,     0,   459,     0,
       0,     0,     0,     0,     0,     0,     0,   442,  -958,     0,
       0,     0,     0,     0,   464,     0, -1929,     0,     0,   445,
     446,   447,     0,     0,   444,     0,   465,   466,   448,     0,
       0,     0,   460,     0,     0,     0,     0,     0,     0,     0,
     449,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,   461,     0,     0,   443,     0,   977,     0,     0,   444,
     467,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     468,     0,     0,   450,  -958,     0,     0,     0,   462,   451,
       0,   452,     0,     0,   453,  -958,   454,   455,   456,     0,
       0,   469,   457,     0,   458,     0,   470,     0,     0,   459,
       0,     0,     0,     0,   471,  -958,   434,   331,   463,     0,
       0,     0,   472,     0,     0,     0,     0,     0,   445,   446,
     447,     0,     0,     0,     0,     0,     0,   448,     0,     0,
       0,     0,     0,   460,     0,     0,     0,     0,     0,   449,
       0,     0,     0,     0,     0,     0,     0,     0,   464,     0,
       0,     0,   461,   445,   446,   447,     0,     0,     0,     0,
     465,   466,   448,     0,     0,   440,     0,     0,   441,     0,
       0,     0,   450,     0,   449,     0,     0,     0,   451,   462,
     452,     0,     0,   530,     0,   454,   455,   456,     0,     0,
       0,   457,     0,   458,   467,     0,     0,     0,   459,     0,
     440,     0,     0,   441,   468,     0,     0,   450,     0,   463,
       0,     0,     0,   451,     0,   452,     0,     0,   453,     0,
     454,   455,   456,     0,     0,   469,   457,     0,   458,     0,
     470,     0,   460,   459,     0,     0,     0,   531,   471,   596,
     434,     0,   442,     0,     0,     0,   472,     0,     0,   464,
       0,   461,     0,     0,   583,     0,     0,     0,     0,   444,
       0,   465,   466,     0,     0,     0,     0,   460,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   442,   462,     0,
       0,     0,     0,     0,     0,     0,   461,     0,     0,     0,
       0,     0,     0,     0,   444,   467,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   468,     0,   643,   463,     0,
       0,     0,     0,   462,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   469,     0,     0,     0,
       0,   470,     0,     0,     0,     0,     0,     0,     0,   471,
       0,   434,     0,   463,     0,     0,     0,   472,   464,     0,
       0,     0,     0,   445,   446,   447,     0,     0,     0,     0,
     465,   466,   448,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   449,     0,     0,     0,     0,     0,
       0,     0,     0,   464,     0,     0,     0,     0,   445,   446,
     447,     0,     0,     0,   467,   465,   466,   448,     0,     0,
     440,     0,     0,   441,   468,     0,     0,   450,     0,   449,
       0,     0,     0,   451,     0,   452,     0,     0,   453,     0,
     454,   455,   456,     0,     0,   469,   457,     0,   458,   467,
     470,     0,     0,   459,     0,     0,     0,     0,   471,   468,
     434,     0,   450,     0,     0,     0,   472,     0,   451,     0,
     452,     0,     0,   453,     0,   454,   455,   456,     0,     0,
     469,   457,     0,   458,     0,   470,     0,   460,   459,     0,
       0,     0,     0,   471,     0,   434,     0,   442,     0,     0,
       0,   472,     0,     0,     0,     0,   461,     0,   440,   648,
       0,   441,     0,     0,   444,     0,     0,     0,     0,     0,
       0,     0,   460,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   462,     0,     0,     0,     0,     0,     0,
       0,   461,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   463,     0,     0,     0,     0,   462,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   442,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   463,     0,
       0,     0,   444,   464,     0,     0,     0,     0,   445,   446,
     447,     0,     0,     0,     0,   465,   466,   448,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   449,
       0,     0,     0,     0,     0,     0,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   467,
     465,   466,     0,     0,     0,     0,     0,     0,     0,   468,
       0,     0,   450,     0,     0,     0,     0,     0,   451,     0,
     452,     0,     0,   453,     0,   454,   455,   456,     0,     0,
     469,   457,     0,   458,   467,   470,     0,     0,   459,     0,
       0,     0,     0,   471,   468,   434,   445,   446,   447,     0,
     440,   472,     0,   441,     0,   448,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   469,     0,   449,     0,     0,
     470,     0,   460,     0,     0,     0,     0,     0,   471,     0,
     434,     0,     0,     0,     0,     0,   472,     0,     0,     0,
       0,   461,     0,     0,     0,     0,     0,     0,     0,     0,
     450,     0,     0,     0,     0,     0,   451,     0,   452,     0,
       0,   453,     0,   454,   455,   456,     0,     0,   462,   457,
       0,   458,     0,     0,     0,     0,   459,   442,     0,     0,
       0,   440,     0,     0,   441,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   444,     0,     0,     0,   463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     460,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   461,
       0,     0,     0,     0,     0,     0,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     465,   466,     0,     0,     0,     0,   462,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   444,     0,     0,     0,     0,
       0,     0,     0,     0,   467,     0,   463,     0,   445,   446,
     447,     0,     0,     0,   468,     0,     0,   448,     0,   440,
       0,     0,   441,     0,     0,     0,     0,     0,     0,   449,
       0,     0,     0,     0,     0,   469,     0,     0,     0,     0,
     470,     0,     0,     0,     0,     0,   464,     0,   471,     0,
     434,     0,     0,     0,     0,     0,   472,     0,   465,   466,
       0,     0,   450,     0,     0,     0,     0,     0,   451,     0,
     452,     0,     0,   453,     0,   454,   455,   456,   777,     0,
       0,   457,     0,   458,     0,     0,     0,     0,   459,   445,
     446,   447,   467,   982,     0,     0,   442,     0,   448,     0,
     440,     0,   468,   441,     0,     0,     0,     0,     0,     0,
     449,     0,     0,   444,     0,     0,     0,     0,     0,     0,
       0,     0,   460,   469,     0,     0,     0,   531,   470,     0,
       0,     0,     0,     0,     0,     0,   471,  1129,   434,     0,
     441,   461,     0,   450,   472,     0,     0,     0,     0,   451,
       0,   452,     0,     0,   453,     0,   454,   455,   456,     0,
       0,     0,   457,     0,   458,     0,     0,     0,   462,   459,
       0,     0,     0,     0,     0,     0,     0,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   444,     0,     0,     0,   463,     0,
       0,     0,     0,   460,     0,     0,     0,   445,   446,   447,
       0,     0,     0,     0,   442,     0,   448,     0,     0,     0,
       0,     0,   461,     0,     0,     0,     0,     0,   449,     0,
       0,   444,     0,     0,     0,     0,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   462,
     465,   466,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   450,     0,     0,     0,     0,     0,   451,     0,   452,
       0,     0,   453,     0,   454,   455,   456,     0,     0,   463,
     457,     0,   458,     0,   467,     0,     0,   459,   445,   446,
     447,     0,     0,     0,   468,     0,     0,   448,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   449,
       0,     0,     0,     0,     0,   469,     0,     0,     0,   464,
     470,   460,     0,     0,     0,   445,   446,   447,   471,     0,
     434,   465,   466,     0,   448,     0,   472,     0,     0,     0,
     461,     0,   450,     0,     0,     0,   449,     0,   451,     0,
     452,     0,     0,   453,     0,   454,   455,   456,     0,     0,
       0,   457,     0,   458,     0,   467,     0,   462,   459,     0,
       0,     0,     0,     0,     0,   468,     0,     0,     0,   450,
       0,     0,     0,     0,     0,   451,     0,   452,     0,     0,
     453,     0,   454,   455,   456,     0,   469,   463,   457,     0,
     458,   470,   460,     0,     0,   459,     0,     0,     0,   471,
       0,   434,     0,     0,     0,     0,     0,   472,     0,     0,
       0,   461,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1298,     0,     0,     0,     0,     0,   464,     0,   460,
       0,     0,     0,     0,     0,     0,     0,     0,   462,   465,
     466,     0,     0,     0,     0,     0,     0,     0,   461,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2429,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   463,     0,
       0,     0,     0,   467,     0,   462,     0,     0,     0,     0,
       0,     0,     0,   468,     0,     0,     0,     0,     0,  -373,
       0,     0,  -373,     0,     0,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,   469,   463,     0,     0,   464,   470,
       0,     0,     0,     0,     0,     0,     0,   471,     0,   434,
     465,   466,  -373,     0,  -373,   472,     0,     0,     0,     0,
       0,  -373,     0,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
       0,     0,     0,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,   467,     0,     0,   465,   466,     0,
       0,     0,     0,     0,   468,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -373,     0,     0,
       0,     0,     0,     0,     0,   469,     0,     0,     0,     0,
     470,   467,     0,     0,     0,     0,     0,     0,   471,     0,
     434,   468,     0,     0,     0,     0,   472,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -373,     0,
       0,     0,   469,     0,     0,     0,     0,   470,     0,     0,
       0,     0,     0,     0,  1005,   471,     0,   434,  -373,  -373,
    -373,  -373,  -373,   472,     0,  -373,  -373,     0,     0,  -373,
       0,     0,     0,     0,     0,  -373,     0,  -373,     0,     0,
       0,     0,     0,  -373,     0,     0,     0,     0,  -373,     0,
       0,  -373,     0,     0,     0,     0,     0,     0,     0,  -373,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -373,     0,     0,  -373,     0,     0,     0,     0,
       0,  -373,     0,  -373,     0,     0,     0,     0,     0,     0,
       0,     0,  -373,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -373,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -373,     0,     0,
       0,     0,     0,     0,  1004,     0,     0,     0,  1419,     0,
       0,  1420,     0,     0,  1421,     0,     0,     0,     0,     0,
       0,     0,  1422,     0,  -373,     0,     0,  -373,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
       0,     0,  -373,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -373,  1423,  -373,
       0,     0,     0,     0,     0,     0,     0,  -373,     0,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,     0,  1424,     0,     0,
       0,     0,     0,     0,     0,  -373,     0,     0,     0,     0,
       0,     0,  -373,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -373,     0,     0,  -373,     0,     0,     0,     0,     0,     0,
    -373,     0,  -373,  -373,  -373,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1425,     0,
       0,     0,     0,  -373,     0,  -373,  1426,     0,  -373,     0,
    1005,     0,     0,  -373,  -373,  -373,  -373,  -373,  -373,     0,
    1427,  -373,  -373,     0,     0,  -373,     0,     0,     0,     0,
       0,  -373,     0,     0,     0,  -373,  -373,  -373,     0,  -373,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -373,
       0,     0,  1428,     0,  -373,  -373,  -373,     0,     0,     0,
       0,     0,     0,  1006,     0,  1896,     0,     0,  -373,     0,
       0,  -373,  1429,     0,  1430,     0,     0,  -373,     0,     0,
    1897,     0,     0,  1898,  1899,  1900,  1901,  1902,  1903,  1904,
       0,     0,     0,     0,     0,     0,  1431,  1432,     0,     0,
    1069,     0, -1929,     0,     0, -1929,     0,     0, -1929,     0,
       0,     0,     0,  -373,     0,     0, -1929,     0,  1905,     0,
    1906,  1907,  1908,  1909,  1910,  1911,  1912,     0,     0,  1433,
       0,     0,     0,     0,     0, -1820,     0, -1820,     0,     0,
       0,     0,     0,  -373,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -373,  1434,  1435,
       0,     0, -1929,     0,  1913,  -373,     0,     0,  -373,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1929,     0,  -373,  1436,     0,     0,     0,     0,     0,
       0,  1437,     0,     0,     0,     0,  -373,     0,     0,     0,
       0,     0,     0,     0,  -373,  1438,     0,     0,     0,  1439,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1440,  1914,  1915,  1916,  1917,  1918,
       0,     0,  1919,  1920,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -373,     0,  -373,  -373,
    -373,  1441,     0,     0,     0,     0,     0,     0,     0,     0,
    1442,     0, -1929,     0,     0,     0,  1921,     0,     0,  1070,
   -1929,     0,     0,     0,     0,  -373,     0,     0,     0,   405,
       0,     0,  1922,     0, -1929,     0,     0,     0, -1905,     0,
    1443,     0,     0,     0,  -373,     0,     0,     0,     0,     0,
    1444,     0,     0,     0,     0,     0,  1445,     0,     0,     0,
       0,  -373,     0,     0,     0,     0, -1929,     0,     0,     0,
       0,  -373,  -373,  -373,  1923, -1820,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -373, -1929,     0, -1929,     0,
       0,     0,  -373,     0,     0,  1071,     0,     0,     0,  1006,
       0,     0,     0,     0,  1924,     0,     0,     0,     0,     0,
   -1929, -1929,     0,     0,     0,     0,     0,     0,  1925,     0,
       0,     0,     0,     0,     0,     0,  1926,     0,     0,  1927,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1929,  1928,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1820,  1929,     0,     0,
       0,     0,     0,     0,     0,  1930,     0,     0,     0,     0,
       0,     0, -1929, -1929,     0,     0,     0,     0,     0,     0,
    2537,     0,     0,  2538,     0,     0,  2539,  1898,  1899,  1900,
    1901,  1902,  1903,  2540,  2541,     0,     0,     0, -1929,     0,
       0,     0,     0,     0,     0, -1929,     0,  1931,     0,  1932,
    1933,  1934,     0,  1412,     0,  1413,     0,     0,     0, -1929,
       0,     0,  1905, -1929,  1906,  1907,  1908,  1909,  1910,  1911,
    1912,     0,     0,     0,     0,     0,  1935,     0, -1929,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -370,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1929,     0,     0,  1913,     0,
       0,     0, -1905,     0, -1929,     0,     0,     0,     0,     0,
       0,     0,  1936,  1937,  1938,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1939,     0,     0,     0,
       0,     0,     0,  1940, -1929,     0,     0,     0,     0,  2542,
       0,     0,     0,     0, -1929,     0,     0,     0,     0,     0,
   -1929,     0,     0,     0,     0,     0,     0,     0,     0,  1914,
    1915,  1916,  1917,  1918,     0,   596,  1919,  1920,     0,     0,
    2543,     0,     0,     0,     0,     0,  2544,     0,  2545,     0,
       0,     0,     0,     0, -1855,     0,     0,     0,     0,  2546,
       0,     0,  2547,     0,     0,     0,     0,     0,     0,     0,
    1921,  1898,  1899,  1900,  1901,  1902,  1903,     0,     0,     0,
       0,     0,     0,   405,     0,     0,  1922,     0,     0,     0,
       0,     0,     0,     0,  2548,     0,     0,     0,     0,     0,
       0,     0,     0,  2549,     0,     0,  1905,     0,  1906,  1907,
    1908,  1909,  1910,  1911,  1912,     0,  2550,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1923,     0,
       0,     0,     0,     0,   444,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1913,     0,     0,     0,     0,     0,  2551,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2552,  1925,     0,     0,     0,     0,     0,     0,     0,
    1926,     0,     0,  1927,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1928,     0,
    2553,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1914,  1915,  1916,  1917,  1918,     0,     0,
    1919,  1920,     0,     0,     0,     0,  2554,     0,   445,   446,
     447,     0,     0,  2555,     0,     0,     0,   448,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   449,
       0,  2556,   442,     0,  1921,     0,     0,     0,     0,     0,
       0,  1931,     0,  1932,  1933,  1934,     0,     0,     0,   444,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   485,     0,     0,     0,     0,     0,   451,     0,
     452,     0,     0,   453,     0,   454,   455,   456,     0,     0,
       0,   457,     0,   458,  2557,     0,     0,     0,     0,  -625,
       0,     0,  1923,     0,  2558,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2559,     0,     0,     0,  1936,  1937,  1938,     0,
       0,     0,   460,     0,     0,     0,     0,     0,     0,     0,
    1939,     0,     0,   442,     0,  2560,  1925,  1940,     0,     0,
       0,   461,     0,   445,   446,   447,     0,  1927,     0,     0,
     444,     0,   448,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1928,     0,   449,     0,     0,     0,   462,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   485,   463,     0,
       0,     0,     0,   451,     0,   452,     0,     0,   453,     0,
     454,   455,   456,     0,     0,     0,   457,     0,   458,     0,
       0,     0,     0,     0,     0,     0,     0,  1932,  1933,  1934,
       0,     0,   442,     0,     0,     0,     0,     0,   464,     0,
       0,     0,     0,     0,   445,   446,   447,     0,     0,   444,
     465,   466,     0,   448,     0,     0,     0,   460,     0,     0,
       0,     0,     0,     0,     0,   449,     0,     0,     0,     0,
       0,     0,  1113,     0,     0,     0,   461,     0,     0,     0,
       0,     0,   486,     0,   467,     0,   487,   488,     0,     0,
       0,     0,     0,     0,   468,     0,     0,     0,   485,     0,
    1936,  1937,  1938,   462,   451,     0,   452,     0,     0,   453,
       0,   454,   455,   456,     0,   469,     0,   457,     0,   458,
     470,     0,     0,     0,     0,     0,     0,     0,   471,     0,
     434,     0,     0,   463,     0,     0,   472,     0,     0,     0,
       0,     0,     0,   445,   446,   447,     0,     0,     0,     0,
       0,     0,   448,     0,     0,     0,     0,     0,   460,     0,
       0,     0,     0,     0,   449,     0,     0,     0,     0,     0,
       0,     0,     0,   464,     0,     0,     0,   461,     0,     0,
       0,     0,     0,     0,     0,   465,   466,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   485,     0,     0,
       0,     0,     0,   451,   462,   452,     0,  1729,   453,     0,
     454,   455,   456,     0,     0,     0,   457,   486,   458,   467,
       0,   487,   488,   442,     0,     0,     0,     0,     0,   468,
       0,     0,     0,     0,   463,     0,     0,     0,     0,     0,
     444,     0,     0,     0,     0,     0,     0,   442,     0,     0,
     469,     0,     0,     0,     0,   470,     0,   460,     0,     0,
       0,     0,     0,   471,   444,   434,     0,     0,     0,     0,
       0,   472,     0,     0,   464,     0,   461,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   465,   466,     0,     0,
       0,     0,     0,     0,  1732,     0,     0,     0,     0,     0,
       0,     0,     0,   462,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   486,     0,
     467,     0,   487,   488,     0,     0,     0,     0,     0,     0,
     468,     0,     0,   463,   445,   446,   447,     0,     0,     0,
       0,     0,     0,   448,     0,     0,     0,     0,     0,     0,
       0,   469,     0,     0,     0,   449,   470,     0,   445,   446,
     447,     0,     0,     0,   471,     0,   434,   448,     0,     0,
       0,     0,   472,   464,     0,     0,     0,     0,     0,   449,
       0,     0,     0,     0,     0,   465,   466,     0,   485,   442,
       0,     0,     0,  1734,   451,     0,   452,     0,     0,   453,
       0,   454,   455,   456,     0,     0,   444,   457,     0,   458,
       0,     0,   485,     0,     0,     0,     0,   486,   451,   467,
     452,   487,   488,   453,     0,   454,   455,   456,     0,   468,
       0,   457,     0,   458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   460,     0,
     469,     0,     0,     0,     0,   470,     0,     0,     0,     0,
       0,     0,     0,   471,     0,   434,     0,   461,     0,     0,
       0,   472,   460,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   461,     0,     0,   462,     0,     0,     0,     0,     0,
     445,   446,   447,     0,     0,     0,     0,     0,     0,   448,
       0,     0,     0,     0,     0,     0,     0,     0,   462,     0,
       0,   449,     0,     0,   463,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   442,
       0,     0,     0,     0,     0,     0,     0,     0,   463,     0,
       0,     0,     0,     0,   485,     0,   444,     0,     0,     0,
     451,     0,   452,     0,   464,   453,     0,   454,   455,   456,
       0,     0,     0,   457,     0,   458,   465,   466,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   464,   442,
       0,     0,     0,     0,     0,     0,     0,     0,  1753,     0,
     465,   466,     0,     0,     0,     0,   444,     0,   486,     0,
     467,     0,   487,   488,   460,     0,     0,     0,     0,     0,
     468,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   486,   461,   467,     0,   487,   488,     0,     0,
       0,   469,     0,     0,   468,     0,   470,     0,     0,     0,
     445,   446,   447,     0,   471,     0,   434,     0,     0,   448,
     462,     0,   472,     0,     0,   469,     0,     0,     0,     0,
     470,   449,     0,     0,     0,     0,     0,     0,   471,     0,
     434,     0,     0,     0,     0,     0,   472,     0,     0,     0,
     463,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     445,   446,   447,     0,   485,     0,     0,     0,     0,   448,
     451,     0,   452,     0,     0,   453,     0,   454,   455,   456,
       0,   449,     0,   457,     0,   458,     0,     0,     0,     0,
     464,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   465,   466,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   485,     0,     0,     0,     0,     0,
     451,     0,   452,     0,   460,   453,     0,   454,   455,   456,
       0,     0,     0,   457,     0,   458,   467,     0,   487,     0,
       0,     0,     0,   461,     0,     0,   468,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   469,     0,     0,
     462,     0,   470,     0,   460,     0,     0,     0,     0,     0,
     471,     0,   434,     0,     0,     0,     0,     0,   472,     0,
       0,     0,     0,   461,     0,     0,  2788,     0,     0,     0,
     463,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     462,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     464,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     463,     0,   465,   466,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   467,     0,     0,     0,
     464,     0,     0,     0,     0,     0,   468,     0,     0,     0,
       0,     0,   465,   466,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   469,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,     0,     0,
     471,     0,   434,     0,     0,     0,   467,     0,   472,     0,
       0,     0,     0,     0,     0,     0,   468,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   469,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,     0,     0,
     471,     0,   434,     0,     0,     0,     0,     0,   472
};

static const yytype_int16 yycheck[] =
{
     209,   210,   197,   337,   213,   406,   322,   408,   441,   643,
     411,   926,    39,   518,   450,   362,   325,   529,   315,  1665,
     414,   864,  1245,  1726,  1466,   320,   235,  1415,   633,  1207,
    1418,   525,  1348,  1267,  1940,   773,   335,   205,  1690,   620,
     337,   525,   855,   211,   349,   783,   343,   316,   315,   485,
     349,    17,    22,   327,    56,  1312,   777,     9,     1,  1293,
     642,   335,  1566,  1159,     1,     1,    58,    87,    31,     9,
       0,     9,  1880,     1,     1,   349,    31,   115,   124,    58,
       9,   313,    49,   315,  1995,  1996,   318,   124,    49,    39,
     322,    88,   111,  1189,   153,     9,   178,  2369,   582,   176,
     111,   613,   125,  1292,  1396,   337,    58,    71,   130,    58,
      27,   343,   387,   177,   166,    17,   166,   205,    21,  1994,
     259,    88,  2362,  1326,   319,    73,   321,   174,   849,   228,
     142,    32,   364,   244,   366,    93,   130,     6,   315,   216,
      30,   247,   313,   320,   638,  1980,   751,  1243,   108,   344,
     327,   346,   255,   450,   638,   397,   351,   723,   335,  1988,
      97,    65,    22,    67,   114,   191,    64,  2251,  2503,    26,
     365,   205,   349,  1981,   383,    65,   301,    67,    32,    21,
     259,   274,   237,   277,   235,    48,   395,  2097,   485,   486,
     487,   488,   401,   402,  1636,   404,   917,   513,  2171,   116,
     409,   410,   247,   126,   313,   414,  1302,   221,   125,   139,
     111,   443,   218,   143,   511,   235,   302,   418,  2601,   464,
     487,   259,    97,    98,   172,   572,   414,   179,   311,   841,
     315,   234,   501,     0,  2337,   451,   452,   422,  1080,   615,
     205,   130,   456,   190,   265,   461,  1088,   299,   172,   259,
     455,   759,   760,   761,   486,   487,   488,    21,    22,   753,
      71,   982,   345,   203,   841,   235,   213,   472,   157,   290,
     159,   516,   202,   450,   201,   517,   784,   462,    71,   511,
     290,   513,   206,   366,  2195,   559,   487,   217,   347,   505,
     240,   667,   244,   507,   397,   178,   570,   300,   692,   487,
    2273,   598,   396,   704,   651,   319,     6,   323,   485,   486,
     487,   488,   418,  2121,  1818,  1819,   332,   426,    71,  2422,
     756,   516,   903,   339,   340,  2257,    71,   190,   570,   823,
     259,   630,   527,   419,    58,  2245,   259,   430,    71,   432,
     160,   198,   358,   520,   370,   516,   471,   780,    49,   277,
     405,   255,  2687,   400,    49,    71,   630,   322,   259,   993,
    2444,   635,   231,  1651,   235,   255,   598,   478,   365,   240,
    1213,  2023,   139,   418,  2757,   235,   143,   516,   814,  1222,
     431,  2210,   559,   522,   472,   275,  1199,   259,   620,  1202,
     956,  2631,  1488,   570,    71,  2270,  1653,   314,   365,   274,
     642,   486,   487,   488,   365,   259,   987,   429,   507,   515,
     513,   417,  1704,  1134,   362,   373,   648,    57,   348,   471,
      60,   471,   697,   935,    64,   294,  1714,  1715,  1716,  1717,
    1718,  1620,   336,  2365,   516,   202,  1724,   516,   472,   516,
     451,    57,   406,   620,   313,   456,   336,   493,    64,   461,
     217,  2259,   516,   630,   154,   752,   493,   516,   635,   475,
     410,  1684,   759,   760,   761,  2737,   341,   461,   396,   963,
    2305,   768,   769,   770,   771,   494,   773,   456,   516,   321,
    1683,   690,   777,    57,   781,   752,   783,   784,   446,   698,
      64,   511,   515,   702,   458,  1783,   793,   794,   795,   796,
     797,   768,   769,   770,  1792,   507,  1087,  1795,   750,   472,
     424,   409,   509,   681,   781,   215,   725,   472,   466,   468,
     752,   537,   516,   820,   473,   517,   478,   759,   760,   761,
     739,   461,     6,   461,   461,   551,   768,   769,   770,   771,
       9,   773,   509,   243,     6,   854,   516,   513,   509,   781,
     452,   783,   784,   820,   849,   515,   516,  1191,   726,   259,
     463,   793,   794,   795,   796,   797,   808,   583,  1180,   269,
    1152,   474,  1177,   516,   274,   752,   516,  2081,   516,   516,
     516,   348,   759,   760,   761,     6,   516,   516,   820,     6,
     984,   768,   769,   770,   771,   406,   773,  2508,   515,   841,
     777,   470,   936,  1180,   781,   495,   783,   784,   522,  1451,
    2445,     6,   475,   406,   911,   914,   793,   794,   795,   796,
     797,   463,   917,   244,  1129,   515,   642,  1021,   897,   645,
     825,   271,   474,   516,   650,  1731,  1893,   361,  1132,   936,
     914,   516,   462,   820,   516,   516,    34,   458,  1132,     0,
     124,  1232,   515,   406,   354,   271,  2588,   468,   313,   928,
     126,   406,   473,  1555,   365,   458,   205,   752,  1062,  1105,
     365,   903,   849,   406,   759,   760,   761,   919,     0,   911,
    2332,   955,   383,   768,   769,   770,   219,   982,   383,  1604,
     406,   335,  1273,   235,   461,   927,   781,   271,   259,   784,
    1796,   943,  1798,   309,   936,   458,   239,   347,   793,   794,
     795,   796,   797,   458,     9,   947,  1282,  1283,  1284,  1285,
    1286,  1287,  1288,  1289,   424,   458,   903,   969,  1541,   406,
     259,   347,   265,   335,   911,   820,   245,   914,  1476,  1835,
     917,   215,   458,   160,    58,   977,   209,   210,  1640,   516,
    2503,  2039,   255,   215,   259,   987,   177,   290,   967,    49,
     461,   777,     6,    62,   404,   259,   461,   274,   123,   409,
     470,   160,   365,   347,   288,   215,  1872,  1873,   955,   259,
     259,   458,   259,   259,   255,   259,   249,   250,   404,     8,
      27,    90,    91,   409,   215,   269,   166,   259,   215,   173,
    1042,  1010,  2503,   205,  1101,   982,   180,   269,   509,     0,
     987,   265,   154,  1534,   509,  1536,   516,   423,    37,   259,
     215,   290,   522,   322,   840,   339,   911,   260,  2734,   269,
     404,  1073,   848,   849,  1101,   409,   290,     9,   259,  1134,
     463,  1277,   259,    57,   349,   461,   402,  2753,   269,   202,
      64,   474,   269,   265,  1063,  1087,   170,   478,   171,  1580,
     359,   516,  1071,  2097,   259,  2088,   834,  2503,   162,  1101,
     886,   515,   516,  1147,   269,  1107,   516,   461,   290,   116,
     354,  1150,   391,  2529,  2587,  1053,  1054,   461,   357,   355,
    2503,   859,   354,   123,   397,   217,   284,   285,   286,   333,
     516,   917,  2503,  1537,   293,   461,     9,   302,   103,   298,
    1087,   265,   226,   515,   354,   228,   509,  1638,   457,   461,
     215,   265,    38,   236,  1101,    85,   397,   198,  1820,   299,
      46,   899,   386,   354,  2687,  2251,   235,   354,  1180,   215,
    2586,   231,  1241,   959,   410,  2648,   290,    50,   139,   456,
     424,  1160,   143,  1130,   970,   516,   924,  1134,   974,   354,
     219,   220,   424,   351,   259,   313,   982,  1241,  1242,    33,
    1147,   215,   191,  1816,   269,  1556,   202,  2680,  2681,   512,
     239,   383,   456,   259,   424,  2688,  2687,   516,   259,  2692,
    2693,   217,  1486,   269,   456,   348,   470,   461,   292,  1393,
    1232,  1233,   465,   424,   467,  1247,   265,   424,   470,   322,
     443,   202,  1189,  2236,   461,   259,  1101,   259,  2721,   493,
     364,   395,   516,   201,   419,   269,   217,   326,    30,   424,
     470,   290,   274,  1265,   362,   534,   516,   516,   392,   516,
     516,  1273,   516,   215,  1480,   462,  1651,  2750,   522,   470,
    2696,  2687,  1247,   470,   516,  1232,  1233,   271,  1300,   354,
     522,   515,   516,  1644,  1241,  1242,  1243,  1309,  1310,  1301,
     418,  1472,   505,   462,  2687,   470,  1308,  1309,   354,  2319,
    2726,   515,   522,   516,   326,  2459,  2687,   259,   476,   477,
     259,     9,   107,   481,   515,   516,  1273,   269,   214,   516,
     302,   522,   117,   515,   168,   522,   108,  2257,   259,   483,
     354,  1320,   215,  1322,  2488,   221,  1325,  1326,   461,  1328,
     206,   516,   348,  2673,   259,  1302,   128,   522,   414,   424,
     246,  2227,  2228,   347,   508,   414,   510,  2687,   466,   487,
      58,   485,  2382,  2383,   247,   248,   460,   414,   424,   235,
     328,   329,   268,   344,   468,   469,   259,   348,  1492,   473,
     247,  2549,   461,  1460,  1461,   167,   269,  2170,  2171,   347,
    1467,   515,  1469,  2666,  1342,   470,   338,   273,   123,  1476,
     424,   414,   354,  2571,   130,   354,  2170,  2171,   350,   191,
     404,   223,  1489,  1460,  1461,   409,  1164,  1165,   349,   334,
    1467,   487,  1469,   516,   206,   311,   270,   323,   487,   190,
       9,  1420,  1380,   463,   402,  2365,  1425,   419,     1,   306,
     487,  1555,  1489,   255,   402,   394,   470,   522,  1460,  1461,
     171,  1440,   213,  1542,   277,  1467,  2610,  1469,   334,  1534,
     126,  1536,  1210,  2483,  1476,   492,   522,   461,  2741,  2427,
    2471,   354,   424,   512,   487,   424,   515,  1489,  2436,    58,
    1492,  1766,   229,   513,   511,  1281,   468,  1723,  1662,   385,
    2273,   473,   516,   259,   516,  1669,   215,  2498,   522,    62,
     522,  1786,   158,  1460,  1461,  1580,   172,   228,   234,  2273,
    1467,   179,  1469,   163,  1603,   236,   166,   215,   470,  1476,
     464,  1269,   190,   289,  1578,  2593,  1640,    90,    91,  1518,
    2598,  1488,  1489,   172,  1546,  1524,   359,  2759,   361,   143,
     259,   424,  1531,  1555,  1556,   213,   244,   359,  1722,  1723,
     269,    55,  1564,  1630,  2512,   367,     8,  1793,  1794,  1581,
      28,   259,  2520,  1638,   516,   347,   179,   206,   334,   295,
     522,   269,  1594,   522,   300,   243,  2579,  1534,   234,  1536,
    1592,   139,  1571,  1630,   235,    37,    90,   470,   484,   265,
    2658,   265,   468,     8,  2662,  1460,  1461,   473,   461,  1556,
     179,   322,  1467,   107,  1469,   203,  1581,  1564,   259,   293,
    1622,   347,     1,   117,   290,   359,   290,     8,  1630,  1793,
    1794,  1578,    37,  1580,  1489,   190,   163,   240,  1640,   166,
     243,   367,  1644,   317,   232,   354,   215,  1722,  1723,   522,
     296,  1726,   458,   206,   300,  2340,    37,   297,   213,   299,
    1831,   123,   468,   118,   119,   120,   354,   473,    47,   127,
    1408,   312,  1410,   314,   162,   244,   425,   316,   166,  1658,
     429,   320,   235,  1630,    63,  1664,   420,   421,   327,   328,
     259,  1638,   463,  1672,  2401,  2746,   335,  1644,   402,   338,
     269,  2408,  2409,   474,   343,  2756,   345,  1989,   347,   348,
     349,   350,   458,  1510,   461,   424,  1820,   402,  1793,  1794,
     458,   175,   468,  1929,   103,   460,    11,   473,   367,   461,
     468,   459,   251,   252,   469,   473,   424,  2739,  2740,  1677,
     468,  1720,  1721,  1481,  1482,   473,  1108,     9,   461,  1111,
      12,   793,   794,    15,    16,  1117,     1,   215,  2760,  1121,
    1924,   470,   359,   468,   361,  1127,   425,   406,   473,   408,
    1772,    11,   411,   326,    59,  1630,   423,  2779,   459,   312,
      12,   314,   470,    15,    16,   354,   241,   468,   304,   305,
     478,   215,   473,   172,   309,    40,    41,    42,    43,    44,
     255,   259,   769,   770,  2806,    11,  1544,  1593,    26,   461,
    1548,   269,    97,   522,    99,   359,   101,   361,  1820,    59,
     496,   497,   498,   499,   109,   283,   461,   206,   516,   461,
     461,    76,    77,  1997,   522,   259,   259,   297,     6,   299,
    2788,     9,   795,   796,   797,   269,  1632,  1633,   255,  1796,
     257,  1798,   255,    59,   257,   424,   235,    97,  1596,    99,
    1964,   101,   501,   242,   359,   461,   361,    47,   255,   109,
     257,    54,    55,   383,   253,   496,   497,   498,   499,   461,
     165,   520,    66,    63,    68,   340,   341,   342,  1835,   461,
     407,    97,  1871,    99,  2169,   101,   354,   486,   343,   488,
     355,   470,   518,   109,   516,   516,   431,    90,   461,   478,
     496,   497,   498,   499,   413,    83,   842,   843,   844,   845,
     559,   235,   413,   103,   107,   165,  1873,    58,   377,   221,
     354,   570,   100,   461,   117,   516,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   516,   259,   516,  1900,  1901,
    1902,  1903,  2038,   522,   456,   516,  1468,   264,  1470,   165,
    1939,  1473,  1474,  1475,  2170,  2171,   424,  1479,   402,   427,
     428,   461,   461,   409,   418,   260,    64,   616,  1490,  1491,
     359,   360,    60,    69,   516,   153,  1998,   461,   461,   131,
     516,   630,   447,   198,   472,   374,   635,   376,   132,   311,
     424,   472,   472,   472,  1983,  2176,  2071,  1986,  2073,   472,
    2174,   472,   170,   472,  1993,   472,  1802,  2181,   280,   281,
     260,   306,  1760,  1761,  1762,   472,   194,   195,   196,   457,
     456,   472,   472,   472,   133,   203,  2038,   134,   393,   135,
     359,  2020,   136,   507,   306,   307,   470,   215,   280,   281,
     137,   102,   451,  2738,   260,   235,  2021,  2022,  2060,  2163,
     472,   138,   242,   456,   522,   704,   306,  2273,   141,    49,
     412,   455,   452,   253,   306,   307,   449,   455,   144,   198,
     248,   145,   461,   146,   511,   147,   254,   166,   256,   274,
     335,   259,   516,   261,   262,   263,    31,  2261,   522,   267,
     306,   269,  2506,   148,    49,   350,   274,   149,   747,   150,
    2112,  1849,   151,   398,   198,  1853,  1854,  2096,  2120,   113,
     152,  2123,   461,   402,  2071,   258,  2073,   516,  1866,  1867,
     509,  2302,   461,   516,   409,   317,   259,   516,   777,   516,
     308,   461,   108,   326,  1882,  1883,   259,   330,   331,   259,
    2321,  2322,   478,   347,  2325,    73,   441,     4,   398,   327,
     418,  2265,   317,   110,   472,   456,  2330,   516,   516,   516,
     205,   226,    19,   383,   346,   275,   461,   259,   299,   359,
     360,   166,    29,   513,   177,   513,   354,   129,   456,   130,
     515,   374,   398,   169,   374,   373,   376,   231,    49,   456,
     456,   441,   198,   231,  2368,   402,   389,   390,   461,   374,
     849,   461,   461,    86,    86,  2194,   384,    64,   464,    24,
      25,   461,  2201,  2202,  2203,  2204,  2397,    23,  2392,   275,
    2209,   516,   461,   452,   408,   441,   259,   235,   201,  2241,
     516,   461,   520,  2360,   521,   240,   304,   458,   279,  2214,
     431,   458,  2254,   456,   458,  2234,   424,   458,   897,   458,
     458,    66,   458,    68,   370,    70,   458,   456,   436,   437,
    2235,   516,  2376,   387,   300,   914,   516,   234,   917,   205,
     205,   461,    17,   452,   314,   129,   140,    49,  2459,   928,
     373,   125,  2304,   456,   205,   463,   142,  2083,  2084,   104,
     105,   106,   470,     8,   198,   130,   474,  2478,  2094,   312,
     516,   513,   480,   513,   431,   205,   955,  2488,  2489,   456,
     461,     9,     7,   461,    87,   397,   402,   275,    22,   509,
     311,   447,   191,   501,  2313,    47,   333,   304,   506,    57,
       8,   302,   205,   982,   418,  2516,   514,  2326,   516,   154,
     419,   156,   509,   509,   522,   409,    49,   240,   163,   319,
    2339,   166,   321,    30,   315,   295,   265,   335,    35,   318,
     114,    38,   461,  2338,   206,   446,   223,   402,    45,    46,
     516,   516,   511,   259,   232,    26,   461,  2551,   205,   205,
     299,   369,   369,   103,     8,    37,   466,   387,    65,    49,
      67,   265,   240,   301,   471,  2576,  2510,   221,   255,  2612,
     503,   296,    96,   158,   461,   513,   391,   235,   265,   456,
     191,   516,   257,   410,    57,    92,  2701,   431,   265,    39,
    1069,   259,    49,   111,   344,   265,   265,   461,   265,  2610,
    2544,   522,    53,  2229,   456,   452,    26,   418,   410,   336,
     255,    17,   257,   408,   110,   344,   492,   198,   259,   356,
     452,   461,   427,  2465,   455,   347,    45,   516,   108,   274,
     115,  2642,   461,   320,   190,   461,     7,  2544,   325,  2458,
     375,   463,   426,   226,   411,    30,    65,    66,    67,    68,
     223,  1130,   461,   515,   161,  1134,  2582,   461,   456,   115,
     440,   344,   513,  2482,   314,   461,   206,   311,  1147,   178,
      57,  1150,   359,   259,   206,   516,   213,   224,   120,   198,
     367,   212,    49,  2502,  2503,   192,   318,   433,   326,   513,
       6,    57,   379,    32,  2698,    59,    54,    50,   731,    49,
     393,   202,  2544,  1388,   217,  1056,  1369,   214,  2527,  2528,
    1189,  1038,   714,  2639,  2462,  2557,  2213,  2200,  2560,  2538,
    2397,  2208,   409,   685,  2543,   412,  2214,  2391,  2193,   671,
    2503,  2162,  2786,   420,  2477,  2480,  2504,  2608,  2773,  2265,
    2582,  2745,  2798,  2750,   431,  2749,  2365,  2640,   255,  2542,
    2592,  2542,  2640,   239,  1539,  2574,    64,  1073,  1431,  1141,
     501,   268,  1241,  1242,  1243,  1765,  2585,  1764,   275,  1537,
     534,   806,  1180,   854,   461,   857,  1541,   464,   808,  1202,
    1812,  2600,   555,  2602,   907,  1230,   900,  2606,  1564,  1825,
    1824,  2633,   918,   212,  1581,  1592,   303,  2639,   592,  1310,
    1260,  1290,   948,  2807,  1606,   598,   350,   630,   453,   628,
    1633,  1876,  1309,  2498,  1309,  1409,   323,   645,   837,   238,
    2625,   997,  1407,  1302,  1485,   836,  1484,  1881,  1870,   336,
    1869,  2244,  2739,  2740,  2097,  1887,   255,  1886,   257,  1649,
    1626,  1025,  1626,  1169,  1168,  2664,  2665,   616,  1626,  1626,
     802,  1972,  1277,  2760,  2544,   886,   716,   470,   511,   504,
    2679,  1378,  2351,  2705,  1373,  2684,  2685,  2167,  2206,   288,
    2452,   516,  2779,  1822,  2725,  1050,  1583,  1297,   385,  2616,
    1324,  2700,  1553,  2447,  2703,  2704,  1681,  2741,    -1,    -1,
      35,   310,   399,    38,    -1,    -1,    -1,  2739,  2740,  2806,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   418,    -1,   332,    -1,    -1,    -1,  2736,  2760,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2772,  2773,    -1,    -1,    -1,    -1,    -1,  2779,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,  2739,  2740,    -1,    -1,    -1,    -1,    -1,    -1,
    2802,    -1,    -1,    -1,  2806,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2760,    -1,    -1,    -1,   484,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,
      -1,    -1,  2779,  1472,   413,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   422,    -1,    -1,    -1,    -1,   515,  1488,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,  2806,
     439,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   461,    -1,  2739,  2740,    -1,   192,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1534,    -1,  1536,    -1,    -1,
      -1,    -1,    -1,   482,    -1,  2760,    -1,    -1,    -1,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   502,  2779,    -1,    -1,    -1,    -1,    -1,
     509,    -1,   511,    -1,    -1,    -1,    -1,    -1,    -1,  1578,
      -1,  1580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2806,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,  1638,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1651,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,  1668,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1714,  1715,  1716,  1717,  1718,
     385,    -1,   112,  1722,  1723,  1724,    -1,  1726,    -1,    -1,
     120,    -1,   122,    -1,   399,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,   418,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    -1,    -1,   163,   164,    -1,   166,    -1,    -1,   169,
      -1,    -1,    -1,    -1,  1783,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1792,  1793,  1794,  1795,  1796,    -1,  1798,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    -1,    -1,    -1,   204,    -1,    -1,   207,   208,   484,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,    83,
      -1,    -1,  1831,    -1,    -1,   225,  1835,   227,    -1,    -1,
     230,    -1,    -1,    -1,   234,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1873,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,   276,    -1,   278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,
      -1,    -1,    -1,    -1,    -1,   295,   296,   297,    -1,   299,
     300,   301,   302,    -1,    -1,     1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    10,    -1,   316,    -1,    -1,    -1,
      -1,  1930,    18,    -1,    -1,    -1,    -1,    -1,    -1,   329,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,    -1,    -1,    -1,    51,    52,   357,   358,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,   368,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      -1,   381,   382,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,    -1,   392,    89,    -1,   259,    -1,   261,   262,   263,
      -1,   401,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,
      -1,   411,    -1,    -1,    -1,    -1,   112,    -1,    -1,   419,
     420,    -1,    -1,    -1,   120,    -1,   122,    -1,    -1,   429,
    2039,    -1,    -1,    -1,   434,   435,    -1,    -1,   438,    -1,
     440,    -1,    -1,    -1,   308,    -1,    -1,    -1,   448,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,   461,  2071,    -1,  2073,    -1,    -1,    -1,   164,    -1,
      -1,   471,    -1,   169,    -1,    -1,    -1,    -1,    -1,   479,
      -1,    -1,  2091,    -1,    -1,    -1,   486,    -1,    -1,    -1,
     354,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,
      -1,   207,   208,   513,    -1,    -1,    -1,    -1,    -1,   519,
     384,    -1,   218,    83,    -1,    -1,    -1,    -1,    -1,   225,
      -1,   227,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     424,    -1,    -1,    -1,    -1,    -1,    -1,  2176,    -1,    -1,
      -1,    -1,   436,   437,    -1,    -1,   272,    -1,    -1,    -1,
     276,    -1,   278,  2192,  2193,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,
     316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   329,   194,   195,   196,   501,    -1,    -1,
      -1,    -1,   506,   203,    -1,    -1,    -1,    -1,    -1,    -1,
     514,    -1,   516,    -1,  2263,   215,    -1,    -1,   522,    -1,
      -1,   357,   358,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   381,   382,    -1,    -1,    -1,
      -1,    -1,   388,  2302,    -1,    -1,   392,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,   401,    -1,   267,    -1,   269,
    2319,    -1,  2321,  2322,    -1,   411,  2325,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,  2337,    -1,
      -1,    -1,    -1,   429,    -1,    -1,    -1,    -1,   434,   435,
      -1,    -1,   438,    -1,   440,    -1,    -1,    -1,   308,    -1,
      -1,    -1,   448,    -1,     1,    -1,     3,    -1,     5,    -1,
      -1,    -1,    -1,    10,    -1,   461,    -1,    -1,    -1,    -1,
      -1,    18,    -1,  2382,  2383,    -1,    -1,    -1,   194,   195,
     196,    -1,    -1,   479,    -1,    -1,    -1,   203,  2397,    -1,
     486,  2400,  2401,    -1,   354,   491,    -1,    -1,    -1,  2408,
    2409,  2410,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2422,    61,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   519,   384,    72,    -1,    -1,    75,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,   259,    -1,   261,   262,   263,    -1,    -1,
    2459,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2471,    -1,   424,   112,    -1,    -1,    -1,  2478,
      -1,    -1,    -1,   120,  2483,   122,   436,   437,    -1,  2488,
    2489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2498,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,  2516,    -1,    -1,
     470,    -1,    -1,    -1,    -1,  2524,    -1,   164,    -1,    -1,
     480,    -1,   169,    -1,    -1,   193,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   203,     1,    -1,     3,    -1,
       5,   501,    -1,    -1,    -1,    10,   506,    -1,    -1,    -1,
     197,    -1,    -1,    18,   514,    -1,   516,   204,    -1,    -1,
     207,   208,   522,    -1,    -1,    -1,    -1,  2576,   384,    -1,
      -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
     227,    -1,    -1,   230,  2593,    -1,    51,    52,    -1,  2598,
      -1,   259,    -1,   261,   262,   263,    61,    -1,    -1,   267,
      -1,  2610,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     436,   437,    -1,    -1,    89,   272,    -1,    -1,    -1,   276,
      -1,   278,    -1,  2642,    -1,    -1,    -1,    -1,    -1,    -1,
     308,   288,    -1,    -1,    -1,    -1,    -1,   112,    -1,  2658,
      -1,    -1,    -1,  2662,    -1,   120,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,    -1,   316,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   329,    -1,    -1,   501,    -1,    -1,   153,    -1,
     506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   514,   164,
     516,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,
     357,   358,    -1,    -1,    -1,    -1,   384,    -1,    -1,    -1,
      -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,    -1,   381,   382,    -1,    -1,    -1,   204,
      -1,   388,   207,   208,    -1,   392,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   218,   401,    -1,    -1,    -1,    -1,    -1,
     225,    -1,   227,    -1,   411,   230,    -1,    -1,   436,   437,
      -1,    -1,    -1,   420,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   449,   429,    -1,    -1,    -1,    -1,   434,   435,    -1,
      -1,   438,    -1,   440,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   448,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,   276,   480,   278,   461,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   288,   492,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   479,   501,    -1,    -1,    -1,    -1,   506,   486,
      -1,    -1,    -1,   511,   491,    -1,   514,   515,   516,    -1,
      -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,   329,     5,    -1,    -1,    -1,    -1,
      10,    -1,   519,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   357,   358,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,   381,   382,    -1,    -1,
      -1,    61,    -1,   388,    -1,    -1,    -1,   392,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,   401,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   411,    -1,    -1,    89,
      -1,    -1,    -1,     6,    -1,   420,     9,    -1,    -1,    12,
      13,    14,    -1,    -1,   429,    -1,    -1,    20,    -1,   434,
     435,    -1,   112,   438,    -1,   440,    -1,    -1,    -1,    -1,
     120,    -1,   122,   448,    -1,    -1,    -1,    -1,    -1,   129,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   479,    -1,    -1,    -1,    -1,    -1,
      -1,   486,    -1,    -1,   164,    -1,   491,    -1,    -1,   169,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,   519,    -1,    -1,   197,    -1,    -1,
      -1,    -1,    -1,    -1,   204,    -1,    -1,   207,   208,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,   227,    -1,    -1,
     230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,   276,    -1,   278,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,   288,    -1,
     203,    -1,    -1,    -1,    -1,    -1,   209,   210,    -1,    -1,
      -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,   329,
      -1,    -1,    -1,    -1,    -1,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,   256,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,   357,    -1,    -1,
      -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,   368,    -1,
      -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,    -1,    -1,
     293,    -1,   382,    -1,    -1,   298,    -1,    -1,   388,    -1,
      -1,    -1,   392,   306,    -1,   308,    -1,    -1,    -1,    -1,
     313,   401,    -1,    -1,    -1,   318,    -1,    -1,    -1,    -1,
      -1,   411,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,
     420,    -1,    -1,    -1,   337,    -1,    -1,    -1,    -1,   429,
      -1,    -1,    -1,    -1,   434,   435,     6,    -1,   438,     9,
     440,   354,    12,    13,    14,    -1,    -1,    -1,   448,    -1,
      20,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,
      -1,    -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,
      -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   424,    -1,    83,    -1,    -1,    -1,    -1,    -1,   519,
      -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   458,    -1,   460,    -1,   462,
      -1,    -1,   465,    -1,   467,   468,   469,   470,    -1,   472,
     473,    -1,   193,   194,   195,   196,    -1,   480,    -1,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,   501,    -1,
     160,    -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   514,    -1,   516,    -1,    -1,    -1,    -1,    -1,   522,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,   194,   195,   196,    -1,   259,    -1,
     261,   262,   263,   203,    -1,    -1,   267,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,   308,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
      -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,     6,    -1,   298,     9,
      -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,   308,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,   318,    -1,
      30,    -1,    -1,   384,    -1,    35,    -1,   327,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,   337,   194,   195,
     196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,   354,    65,    -1,    67,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,   436,   437,    -1,    -1,    -1,
      -1,    -1,    92,    -1,   384,    -1,    -1,    -1,   449,    -1,
     100,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
     256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,   480,
      -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,    -1,
       6,   492,    -1,     9,    -1,    -1,   436,   437,    -1,    -1,
     501,    -1,    -1,    -1,    -1,   506,    -1,    -1,    -1,    -1,
     511,   161,   308,   514,   515,   516,    -1,   313,   458,    -1,
     460,    -1,   462,    -1,    -1,   465,    -1,   467,   468,   469,
     470,   327,   472,   473,    -1,    -1,    -1,    -1,    -1,    -1,
     480,    -1,   192,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,   354,    -1,
      -1,   501,    -1,    -1,   214,   215,   506,    83,    -1,   365,
      -1,    -1,    -1,    -1,   514,    -1,   516,    -1,    -1,    -1,
      -1,    -1,   522,    -1,   100,    -1,    -1,    -1,   384,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,   255,   256,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,    -1,    -1,   267,   268,   269,
      -1,    -1,   418,    -1,   274,   275,    -1,    -1,   424,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     436,   437,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,   323,   470,    -1,    -1,   327,   194,   195,
     196,    -1,    -1,    -1,   480,   100,   336,   203,    -1,   205,
       6,   487,    -1,     9,    -1,    -1,    -1,    -1,   113,   215,
      -1,    -1,    -1,    -1,   354,   501,    -1,    -1,    -1,    -1,
     506,    -1,    -1,   509,    -1,    -1,    -1,    -1,   514,    -1,
     516,    -1,    -1,    -1,    -1,     6,   522,    -1,     9,    -1,
      -1,    -1,   248,    -1,   384,   385,    -1,    -1,   254,    -1,
     256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,   399,
      -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,   418,    -1,
      -1,    -1,    -1,    -1,   424,    -1,   292,    -1,    -1,   194,
     195,   196,    -1,    -1,   100,    -1,   436,   437,   203,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,    -1,    -1,    95,    -1,   231,    -1,    -1,   100,
     470,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     480,    -1,    -1,   248,   484,    -1,    -1,    -1,   354,   254,
      -1,   256,    -1,    -1,   259,   495,   261,   262,   263,    -1,
      -1,   501,   267,    -1,   269,    -1,   506,    -1,    -1,   274,
      -1,    -1,    -1,    -1,   514,   515,   516,   383,   384,    -1,
      -1,    -1,   522,    -1,    -1,    -1,    -1,    -1,   194,   195,
     196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,    -1,
      -1,    -1,   327,   194,   195,   196,    -1,    -1,    -1,    -1,
     436,   437,   203,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,   248,    -1,   215,    -1,    -1,    -1,   254,   354,
     256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,   470,    -1,    -1,    -1,   274,    -1,
       6,    -1,    -1,     9,   480,    -1,    -1,   248,    -1,   384,
      -1,    -1,    -1,   254,    -1,   256,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,   501,   267,    -1,   269,    -1,
     506,    -1,   308,   274,    -1,    -1,    -1,   313,   514,   515,
     516,    -1,    83,    -1,    -1,    -1,   522,    -1,    -1,   424,
      -1,   327,    -1,    -1,    95,    -1,    -1,    -1,    -1,   100,
      -1,   436,   437,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,   354,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   470,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   480,    -1,   113,   384,    -1,
      -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,
      -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   514,
      -1,   516,    -1,   384,    -1,    -1,    -1,   522,   424,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
     436,   437,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,   194,   195,
     196,    -1,    -1,    -1,   470,   436,   437,   203,    -1,    -1,
       6,    -1,    -1,     9,   480,    -1,    -1,   248,    -1,   215,
      -1,    -1,    -1,   254,    -1,   256,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,   501,   267,    -1,   269,   470,
     506,    -1,    -1,   274,    -1,    -1,    -1,    -1,   514,   480,
     516,    -1,   248,    -1,    -1,    -1,   522,    -1,   254,    -1,
     256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
     501,   267,    -1,   269,    -1,   506,    -1,   308,   274,    -1,
      -1,    -1,    -1,   514,    -1,   516,    -1,    83,    -1,    -1,
      -1,   522,    -1,    -1,    -1,    -1,   327,    -1,     6,    95,
      -1,     9,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,   354,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      -1,    -1,   100,   424,    -1,    -1,    -1,    -1,   194,   195,
     196,    -1,    -1,    -1,    -1,   436,   437,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,
     436,   437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   480,
      -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
     256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
     501,   267,    -1,   269,   470,   506,    -1,    -1,   274,    -1,
      -1,    -1,    -1,   514,   480,   516,   194,   195,   196,    -1,
       6,   522,    -1,     9,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   501,    -1,   215,    -1,    -1,
     506,    -1,   308,    -1,    -1,    -1,    -1,    -1,   514,    -1,
     516,    -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,    -1,
      -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,    -1,   256,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,   354,   267,
      -1,   269,    -1,    -1,    -1,    -1,   274,    83,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,   384,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     436,   437,    -1,    -1,    -1,    -1,   354,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,    -1,   384,    -1,   194,   195,
     196,    -1,    -1,    -1,   480,    -1,    -1,   203,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,
     506,    -1,    -1,    -1,    -1,    -1,   424,    -1,   514,    -1,
     516,    -1,    -1,    -1,    -1,    -1,   522,    -1,   436,   437,
      -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
     256,    -1,    -1,   259,    -1,   261,   262,   263,   456,    -1,
      -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,   194,
     195,   196,   470,   198,    -1,    -1,    83,    -1,   203,    -1,
       6,    -1,   480,     9,    -1,    -1,    -1,    -1,    -1,    -1,
     215,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,   501,    -1,    -1,    -1,   313,   506,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   514,     6,   516,    -1,
       9,   327,    -1,   248,   522,    -1,    -1,    -1,    -1,   254,
      -1,   256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,
      -1,    -1,   267,    -1,   269,    -1,    -1,    -1,   354,   274,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,   384,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,   194,   195,   196,
      -1,    -1,    -1,    -1,    83,    -1,   203,    -1,    -1,    -1,
      -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,   215,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   424,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,
     436,   437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,   256,
      -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,   384,
     267,    -1,   269,    -1,   470,    -1,    -1,   274,   194,   195,
     196,    -1,    -1,    -1,   480,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,   424,
     506,   308,    -1,    -1,    -1,   194,   195,   196,   514,    -1,
     516,   436,   437,    -1,   203,    -1,   522,    -1,    -1,    -1,
     327,    -1,   248,    -1,    -1,    -1,   215,    -1,   254,    -1,
     256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,    -1,   470,    -1,   354,   274,    -1,
      -1,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,   501,   384,   267,    -1,
     269,   506,   308,    -1,    -1,   274,    -1,    -1,    -1,   514,
      -1,   516,    -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,
      -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   418,    -1,    -1,    -1,    -1,    -1,   424,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,   436,
     437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      -1,    -1,    -1,   470,    -1,   354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   480,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,   501,   384,    -1,    -1,   424,   506,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,   516,
     436,   437,    65,    -1,    67,   522,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,    -1,    -1,   436,   437,    -1,
      -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,
     506,   470,    -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,
     516,   480,    -1,    -1,    -1,    -1,   522,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,
      -1,    -1,   501,    -1,    -1,    -1,    -1,   506,    -1,    -1,
      -1,    -1,    -1,    -1,   177,   514,    -1,   516,   181,   182,
     183,   184,   185,   522,    -1,   188,   189,    -1,    -1,   192,
      -1,    -1,    -1,    -1,    -1,   198,    -1,   200,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,   211,    -1,
      -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,   244,    -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    21,    -1,    -1,   310,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
     323,   324,    39,    40,    41,    42,    43,    44,    45,   332,
      -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   350,    92,   352,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,
      -1,    -1,   385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     403,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
     413,    -1,   415,   416,   417,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
      -1,    -1,    -1,   456,    -1,   172,   200,    -1,   461,    -1,
     177,    -1,    -1,   466,   181,   182,   183,   184,   185,    -1,
     214,   188,   189,    -1,    -1,   478,    -1,    -1,    -1,    -1,
      -1,   484,    -1,    -1,    -1,   488,   489,   490,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   502,
      -1,    -1,   246,    -1,   507,   222,   509,    -1,    -1,    -1,
      -1,    -1,    -1,   516,    -1,    21,    -1,    -1,   235,    -1,
      -1,   238,   266,    -1,   268,    -1,    -1,   244,    -1,    -1,
      36,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,   290,   291,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    -1,   280,    -1,    -1,    46,    -1,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,   323,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,   352,   353,
      -1,    -1,    92,    -1,   120,   332,    -1,    -1,   335,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,   350,   378,    -1,    -1,    -1,    -1,    -1,
      -1,   385,    -1,    -1,    -1,    -1,   363,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   371,   399,    -1,    -1,    -1,   403,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   418,   181,   182,   183,   184,   185,
      -1,    -1,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   413,    -1,   415,   416,
     417,   445,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     454,    -1,   192,    -1,    -1,    -1,   222,    -1,    -1,   199,
     200,    -1,    -1,    -1,    -1,   442,    -1,    -1,    -1,   235,
      -1,    -1,   238,    -1,   214,    -1,    -1,    -1,   244,    -1,
     484,    -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,    -1,
     494,    -1,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,
      -1,   478,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,
      -1,   488,   489,   490,   280,   255,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   502,   266,    -1,   268,    -1,
      -1,    -1,   509,    -1,    -1,   275,    -1,    -1,    -1,   516,
      -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,
     290,   291,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   323,   350,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,   363,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,
      -1,    -1,   352,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,   378,    -1,
      -1,    -1,    -1,    -1,    -1,   385,    -1,   413,    -1,   415,
     416,   417,    -1,    65,    -1,    67,    -1,    -1,    -1,   399,
      -1,    -1,    74,   403,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,   442,    -1,   418,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   445,    -1,    -1,   120,    -1,
      -1,    -1,   478,    -1,   454,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   488,   489,   490,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,
      -1,    -1,    -1,   509,   484,    -1,    -1,    -1,    -1,   161,
      -1,    -1,    -1,    -1,   494,    -1,    -1,    -1,    -1,    -1,
     500,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
     182,   183,   184,   185,    -1,   515,   188,   189,    -1,    -1,
     192,    -1,    -1,    -1,    -1,    -1,   198,    -1,   200,    -1,
      -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,   211,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     222,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   255,    -1,    -1,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,   268,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,   310,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     332,    -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   350,    -1,
     352,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   181,   182,   183,   184,   185,    -1,    -1,
     188,   189,    -1,    -1,    -1,    -1,   378,    -1,   194,   195,
     196,    -1,    -1,   385,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,   403,    83,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,   413,    -1,   415,   416,   417,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
     256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,   456,    -1,    -1,    -1,    -1,   461,
      -1,    -1,   280,    -1,   466,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   484,    -1,    -1,    -1,   488,   489,   490,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     502,    -1,    -1,    83,    -1,   507,   324,   509,    -1,    -1,
      -1,   327,    -1,   194,   195,   196,    -1,   335,    -1,    -1,
     100,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   350,    -1,   215,    -1,    -1,    -1,   354,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,   384,    -1,
      -1,    -1,    -1,   254,    -1,   256,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,   416,   417,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,   424,    -1,
      -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,   100,
     436,   437,    -1,   203,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,
      -1,    -1,   458,    -1,    -1,    -1,   327,    -1,    -1,    -1,
      -1,    -1,   468,    -1,   470,    -1,   472,   473,    -1,    -1,
      -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,   248,    -1,
     488,   489,   490,   354,   254,    -1,   256,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,   501,    -1,   267,    -1,   269,
     506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,
     516,    -1,    -1,   384,    -1,    -1,   522,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   424,    -1,    -1,    -1,   327,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   436,   437,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,   254,   354,   256,    -1,   458,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,   468,   269,   470,
      -1,   472,   473,    83,    -1,    -1,    -1,    -1,    -1,   480,
      -1,    -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
     501,    -1,    -1,    -1,    -1,   506,    -1,   308,    -1,    -1,
      -1,    -1,    -1,   514,   100,   516,    -1,    -1,    -1,    -1,
      -1,   522,    -1,    -1,   424,    -1,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   436,   437,    -1,    -1,
      -1,    -1,    -1,    -1,   444,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   468,    -1,
     470,    -1,   472,   473,    -1,    -1,    -1,    -1,    -1,    -1,
     480,    -1,    -1,   384,   194,   195,   196,    -1,    -1,    -1,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   501,    -1,    -1,    -1,   215,   506,    -1,   194,   195,
     196,    -1,    -1,    -1,   514,    -1,   516,   203,    -1,    -1,
      -1,    -1,   522,   424,    -1,    -1,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,   436,   437,    -1,   248,    83,
      -1,    -1,    -1,   444,   254,    -1,   256,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,    -1,   100,   267,    -1,   269,
      -1,    -1,   248,    -1,    -1,    -1,    -1,   468,   254,   470,
     256,   472,   473,   259,    -1,   261,   262,   263,    -1,   480,
      -1,   267,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,
     501,    -1,    -1,    -1,    -1,   506,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   514,    -1,   516,    -1,   327,    -1,    -1,
      -1,   522,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,    -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,    -1,
      -1,   215,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      -1,    -1,    -1,    -1,   248,    -1,   100,    -1,    -1,    -1,
     254,    -1,   256,    -1,   424,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,   436,   437,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,    -1,
     436,   437,    -1,    -1,    -1,    -1,   100,    -1,   468,    -1,
     470,    -1,   472,   473,   308,    -1,    -1,    -1,    -1,    -1,
     480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   468,   327,   470,    -1,   472,   473,    -1,    -1,
      -1,   501,    -1,    -1,   480,    -1,   506,    -1,    -1,    -1,
     194,   195,   196,    -1,   514,    -1,   516,    -1,    -1,   203,
     354,    -1,   522,    -1,    -1,   501,    -1,    -1,    -1,    -1,
     506,   215,    -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,
     516,    -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,    -1,
     384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,   196,    -1,   248,    -1,    -1,    -1,    -1,   203,
     254,    -1,   256,    -1,    -1,   259,    -1,   261,   262,   263,
      -1,   215,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,
     424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   436,   437,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,    -1,   256,    -1,   308,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,   470,    -1,   472,    -1,
      -1,    -1,    -1,   327,    -1,    -1,   480,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,
     354,    -1,   506,    -1,   308,    -1,    -1,    -1,    -1,    -1,
     514,    -1,   516,    -1,    -1,    -1,    -1,    -1,   522,    -1,
      -1,    -1,    -1,   327,    -1,    -1,   380,    -1,    -1,    -1,
     384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     384,    -1,   436,   437,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,
     424,    -1,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,
      -1,    -1,   436,   437,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,
      -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     514,    -1,   516,    -1,    -1,    -1,   470,    -1,   522,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,
      -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     514,    -1,   516,    -1,    -1,    -1,    -1,    -1,   522
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   526,   527,     0,   217,   528,   529,   530,   531,   532,
     533,   534,   540,   123,   530,   154,   539,   551,   552,   202,
     348,   541,   543,   461,   123,   103,   666,   668,    85,   553,
     554,   461,   461,   539,   539,   461,   123,   344,   823,   826,
     464,   669,   402,   229,   617,   618,   309,   423,   555,   556,
     560,   259,   349,   544,   544,   143,   535,   536,   537,   139,
     538,   461,   123,   849,   850,   402,   670,   461,   402,   175,
     619,   461,   461,   425,   578,   560,   556,    26,   546,   546,
     259,   349,   545,   537,   545,    56,   507,   827,     1,     3,
       5,    10,    18,    51,    52,    61,    72,    75,    89,   112,
     120,   122,   153,   164,   169,   197,   204,   207,   208,   218,
     225,   227,   230,   272,   276,   278,   288,   316,   329,   357,
     358,   368,   381,   382,   388,   392,   401,   411,   420,   429,
     434,   435,   438,   440,   448,   461,   479,   486,   491,   519,
     851,   852,   868,   873,   877,   882,   900,   903,   907,   911,
     912,   913,   918,   932,   936,   939,   953,   957,   960,   963,
     967,   968,   972,   982,   985,  1003,  1005,  1008,  1012,  1018,
    1030,  1038,  1039,  1042,  1043,  1047,  1052,  1053,  1061,  1077,
    1087,  1096,  1101,  1108,  1112,  1114,  1117,  1120,  1123,  1150,
     851,   461,   174,   400,   667,   671,   672,   674,   461,   461,
     621,   561,   557,   461,    11,    59,    97,    99,   101,   109,
     165,   260,   306,   398,   441,   516,   579,   580,   581,   582,
     583,   589,   598,   600,   605,   608,   609,   611,   612,   613,
     614,   615,   616,   259,   461,   542,   461,   461,   829,   828,
     383,   835,     3,     5,    10,    18,    51,    52,    61,    72,
      75,    89,   112,   120,   122,   129,   131,   132,   133,   134,
     135,   136,   137,   138,   140,   141,   142,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   164,   169,   197,
     204,   207,   208,   218,   225,   227,   230,   272,   276,   278,
     288,   316,   329,   357,   368,   382,   388,   392,   401,   411,
     420,   429,   434,   435,   438,   440,   448,   461,   479,   486,
     491,   519,  1297,   853,   869,   874,   878,   883,   901,   904,
     908,   914,   919,   933,   937,   940,   954,   958,   961,   964,
     205,   383,   892,   956,   969,   973,   983,   986,  1004,  1006,
    1009,   407,  1013,  1019,  1031,  1040,  1044,  1048,  1054,  1062,
    1078,  1088,   259,   354,   394,   424,   522,  1100,  1102,  1109,
     343,  1113,  1115,   838,  1118,  1121,  1124,  1151,   518,   702,
     704,   705,     1,   516,  1222,   237,   405,   620,   622,    57,
      64,   271,   347,   404,   409,   516,   562,   563,   564,   565,
     566,   567,   568,   570,  1306,  1368,   558,   570,     1,   516,
    1236,  1236,   431,   413,  1339,   235,  1320,  1320,  1320,  1236,
     413,  1320,    58,  1307,   584,   377,   571,   581,   461,   582,
     221,   599,   547,  1320,    49,   830,   831,   832,  1305,   830,
     313,   516,   461,   313,   516,   854,   856,  1259,  1260,  1263,
       6,     9,    83,    95,   100,   194,   195,   196,   203,   215,
     248,   254,   256,   259,   261,   262,   263,   267,   269,   274,
     308,   327,   354,   384,   424,   436,   437,   470,   480,   501,
     506,   514,   522,   870,  1216,  1241,  1242,  1259,  1270,  1271,
    1272,  1273,  1274,  1275,  1276,   248,   468,   472,   473,   875,
    1211,  1212,  1213,  1214,  1215,  1216,  1245,  1259,  1271,  1273,
     259,   879,   880,  1227,  1228,  1229,  1263,   274,   430,   432,
     884,   885,   259,   902,  1250,  1259,   905,  1222,     6,   909,
    1217,  1218,  1239,  1261,  1262,  1263,  1271,   464,   915,  1222,
     259,   313,   920,   921,   922,   923,   925,  1241,  1250,  1259,
     934,  1242,   259,   938,   463,   474,   941,   942,   943,  1199,
    1200,  1201,   201,   328,   329,   347,   402,   955,   959,  1238,
    1239,   962,  1263,   456,   965,  1348,  1242,  1198,  1199,   974,
    1238,   516,   984,  1223,   987,   988,  1259,  1270,  1273,  1079,
    1257,  1258,  1263,    95,  1007,  1242,  1010,  1242,   171,   228,
     236,   322,  1014,  1015,   193,   259,   515,  1020,  1024,  1025,
    1026,  1227,  1251,  1259,  1263,  1273,  1352,  1032,  1222,  1041,
    1219,  1263,  1045,  1222,  1049,  1219,     9,  1055,  1220,  1263,
     154,   243,   274,  1063,  1066,  1067,  1070,  1071,  1072,  1073,
    1074,  1075,  1076,  1224,  1225,  1238,  1256,  1258,  1263,  1079,
    1089,  1222,  1097,   113,  1103,  1104,  1105,  1242,    95,  1110,
    1241,  1116,  1223,   461,   516,   839,   840,   843,   844,   849,
    1119,  1259,  1122,  1222,  1125,  1259,  1152,  1219,   402,   264,
     758,   706,   707,   709,   719,  1284,   461,   673,   461,   293,
     317,  1292,   277,   396,   656,   657,   658,   659,   661,   409,
     418,    64,  1320,   461,   564,   461,   516,   563,    60,  1320,
     559,  1352,   590,  1320,  1320,  1320,  1231,  1263,    69,  1231,
    1320,  1320,  1231,   516,   601,   602,   603,  1237,   259,   312,
     314,   585,   587,   588,  1064,  1266,  1320,   461,   461,   516,
     461,    73,   172,   362,   466,   548,   549,   550,   831,   418,
     487,   833,   365,   509,   824,   221,   311,  1358,   131,   867,
     855,   198,   472,  1264,  1265,   311,  1330,  1272,  1259,   472,
     472,   472,  1278,  1260,  1271,  1273,  1358,  1358,   472,   472,
     472,   472,  1358,   472,  1278,   132,   872,   456,   871,  1242,
     457,   472,  1277,   472,   472,  1260,  1271,  1273,  1215,  1259,
    1211,  1215,    58,   468,   473,   460,   469,   170,   226,  1287,
     880,   456,  1358,   133,   899,   259,  1251,  1250,  1222,   364,
     485,   906,  1352,  1364,  1330,   134,   910,   160,   462,  1218,
    1356,   393,  1293,  1264,  1265,   916,  1222,   135,   917,   359,
    1336,   136,   931,   166,   299,  1165,  1167,  1169,   923,  1240,
    1241,   924,   496,   497,   498,   499,   137,   935,    49,   231,
     507,   886,   138,   952,    17,   513,   944,   945,   946,   948,
      12,    13,    14,    20,   160,   170,   209,   210,   249,   250,
     287,   293,   298,   306,   313,   318,   337,   458,   460,   462,
     465,   467,   468,   469,   472,   473,  1202,  1203,  1204,  1205,
    1206,  1207,  1208,  1242,   102,   956,  1239,  1226,   451,  1346,
     975,  1352,  1223,    93,   373,   446,   989,   990,   992,   993,
    1081,   472,  1264,  1242,   456,   141,  1011,    49,  1015,   412,
    1016,  1025,   142,   461,  1021,  1023,   492,   511,   452,   455,
     449,   144,  1037,   288,   339,  1290,   198,  1153,   145,  1046,
    1336,   146,  1051,  1153,  1220,   147,  1060,   511,  1056,  1248,
    1259,  1271,   166,  1073,  1075,  1238,   456,  1225,   124,   456,
     493,  1065,    31,  1264,   148,  1095,   179,   240,   243,  1091,
     892,  1098,  1242,  1352,  1305,   149,  1107,   231,  1105,  1259,
     150,  1111,   198,  1223,   402,   461,   461,   198,   359,   361,
    1337,   151,  1134,   113,  1126,   152,  1157,  1153,   461,   402,
     258,   760,   707,   461,     1,   177,   516,   710,   711,   516,
     675,   317,  1236,   662,   359,   420,   421,   660,     1,   461,
     658,  1320,   409,  1266,   461,  1320,   516,  1232,   461,   108,
    1320,   215,   259,   269,   354,   424,   470,   522,   606,   607,
    1269,  1231,   259,   259,   478,   602,    22,   235,  1237,  1321,
    1064,   235,   431,  1332,  1320,    97,  1236,   572,   550,   347,
    1335,    73,  1320,   418,   317,   834,   110,   836,  1263,    30,
     199,   275,   857,   858,   859,   861,   864,  1303,  1352,    24,
      25,    66,    68,    70,   104,   105,   106,   154,   156,   163,
     166,   255,   257,   453,   504,   516,   860,  1225,  1355,  1209,
    1211,   472,  1265,   153,   347,  1246,  1260,   456,  1209,  1211,
    1282,  1209,  1283,   458,  1209,   516,   516,  1211,  1281,  1281,
    1281,  1244,  1259,  1271,  1273,  1280,   516,  1244,  1279,     6,
    1217,  1242,  1263,  1271,   205,  1272,  1211,  1244,  1209,   458,
     226,  1288,  1212,  1212,  1213,  1213,  1213,   383,   876,   346,
     881,  1229,   886,   906,   265,   290,   191,  1313,  1260,  1211,
     275,  1294,  1265,  1222,   234,   300,  1191,  1192,  1194,  1196,
     846,   847,   846,  1168,  1169,  1166,  1167,   495,   861,   864,
     926,   927,   928,  1352,  1165,  1165,  1165,  1165,  1242,  1217,
    1242,   887,   943,    21,   463,   474,   949,   950,  1200,   513,
     946,   947,   513,   846,  1348,   235,  1203,   115,   966,  1227,
     129,   846,   970,     9,    12,    15,    16,   280,   281,   306,
     307,   976,   980,   177,  1248,     9,    58,   179,   244,   478,
     996,   997,   998,   991,   992,   125,   314,   515,  1083,  1331,
    1367,   456,  1238,  1217,  1242,  1016,  1352,  1221,  1222,   846,
     169,  1027,  1198,  1028,  1029,  1259,  1227,     8,    37,  1155,
    1336,  1255,  1259,  1270,  1273,   231,  1033,  1050,  1352,   130,
    1057,  1259,  1057,   456,   456,   456,  1064,   153,   463,   474,
    1242,    49,    38,    46,   214,   246,   268,   323,   385,   484,
    1068,  1069,  1320,  1090,  1352,  1242,   162,   292,   418,  1242,
    1259,   198,  1217,  1242,   845,  1266,  1248,  1305,   231,  1129,
    1154,  1155,   703,   461,   402,   374,   762,   461,   461,   708,
      86,    47,    63,   103,   242,   253,   359,   360,   374,   376,
     461,   509,   676,   677,   679,   683,   684,   687,   688,   694,
     697,   699,   700,  1320,   623,   464,  1311,    23,  1301,   461,
    1266,   260,   443,   505,   569,  1232,   275,    28,   127,   215,
     259,   269,   283,   354,   424,   427,   428,   522,   591,   592,
     593,   596,   607,   452,   610,  1352,   408,   259,   604,  1267,
    1332,   235,  1236,  1236,   586,   587,   201,   573,   574,   575,
      32,   111,  1266,  1320,   516,   461,   825,   522,  1252,  1256,
    1266,  1320,   163,   166,   297,   299,  1158,  1160,  1161,  1163,
    1164,   859,    65,    67,   255,   336,   862,   863,  1354,    32,
      35,    38,    46,    92,   111,   192,   200,   214,   246,   266,
     268,   290,   291,   323,   352,   353,   378,   385,   399,   403,
     418,   445,   454,   484,   494,   500,   865,   866,  1158,   521,
     520,  1248,  1158,   240,   431,   304,   279,    71,   406,   458,
    1210,   459,  1211,   259,  1247,  1260,  1259,  1210,   458,  1210,
     458,   458,  1210,   458,   458,   458,  1210,   458,  1210,   458,
    1330,   302,   419,  1170,  1172,  1174,  1264,  1265,  1217,   459,
     458,   458,   456,  1289,   876,  1239,   456,  1227,   891,   892,
     387,   370,  1170,  1320,   846,   846,  1195,  1196,  1193,  1194,
     848,    97,    98,   341,   516,   929,  1225,   927,    35,    38,
      45,    46,    92,   161,   192,   214,   268,   303,   323,   385,
     399,   418,   484,   930,   205,  1170,   205,   888,   889,   890,
    1305,    17,   452,   951,   321,   949,  1331,   846,   129,   140,
     971,  1348,   373,   977,  1348,   456,    49,   997,   999,  1248,
       9,    58,   244,   478,   994,   995,  1248,   125,    64,   409,
    1084,  1353,    27,   116,   743,   221,   319,  1316,  1238,  1170,
     205,  1221,     9,   290,   357,   655,   386,  1017,  1222,  1352,
     142,  1022,     8,   198,  1033,  1259,   130,  1180,  1183,  1191,
     265,   290,   846,   513,   513,  1058,  1059,  1248,   312,  1247,
    1242,  1064,  1064,  1064,  1064,  1064,  1064,  1064,  1064,  1069,
     293,   298,  1092,  1093,  1094,  1204,  1291,  1191,   247,   418,
    1366,   431,  1344,  1344,  1106,  1352,  1259,  1170,   205,   461,
     456,     9,  1127,  1128,  1285,  1130,  1259,  1106,  1130,  1050,
       7,  1298,   704,   759,   461,   402,   397,   807,   721,   712,
    1320,    87,  1308,  1320,   359,   361,  1363,  1363,  1320,  1308,
    1320,   275,  1327,  1320,    22,  1300,   311,   701,  1236,   172,
     206,   624,   447,  1345,  1313,    58,   517,  1362,   593,    17,
     452,  1269,   333,  1267,  1236,     9,   203,   516,   577,     1,
     461,   575,    32,  1266,   837,   838,    47,  1162,  1163,   846,
    1159,  1160,   846,   304,  1328,  1328,  1328,  1320,  1320,   866,
      57,   418,   124,   493,  1320,     8,  1299,  1158,  1211,   458,
    1211,  1293,   444,  1277,   444,  1277,  1231,  1277,  1277,  1277,
    1244,   244,   478,  1277,  1260,   846,   846,  1173,  1174,  1171,
    1172,  1265,  1170,   458,  1211,  1277,  1277,  1249,  1259,  1270,
     166,   299,   471,   894,   896,   898,     6,   231,   294,   313,
     470,   893,  1319,    34,   284,   285,   286,   351,   476,   477,
     481,  1295,   849,  1320,   255,   397,   130,   157,   159,   815,
     816,  1310,  1320,   124,   493,  1320,  1217,  1218,  1217,  1218,
     889,   313,   833,    88,   365,   509,   950,  1199,   846,  1259,
     846,   509,   978,   979,   980,   981,  1346,   509,  1249,  1248,
      49,     8,    37,  1000,  1001,  1002,   995,   191,  1000,   409,
    1080,  1320,   240,  1322,   319,  1217,  1017,   321,  1333,  1333,
     315,   265,   290,  1029,  1242,   220,  1034,  1352,   846,   295,
    1184,  1185,   265,  1199,  1198,  1058,  1204,  1259,  1205,  1206,
    1207,  1208,  1211,  1099,  1242,  1099,   301,   471,  1175,  1177,
    1179,   335,  1293,  1217,   841,  1249,   318,  1248,   114,  1131,
     446,  1133,   158,   296,  1156,  1186,  1188,  1190,  1192,   326,
    1225,  1252,   704,   761,   461,   402,    21,    36,    39,    40,
      41,    42,    43,    44,    45,    74,    76,    77,    78,    79,
      80,    81,    82,   120,   181,   182,   183,   184,   185,   188,
     189,   222,   238,   280,   310,   324,   332,   335,   350,   363,
     371,   413,   415,   416,   417,   442,   488,   489,   490,   502,
     509,   722,   723,   724,   726,   727,   728,   729,   730,   731,
     732,   735,   747,   748,   749,   750,   751,   756,   757,  1320,
    1341,    26,   198,   720,  1302,   206,  1266,   516,   638,  1320,
    1300,   516,  1233,  1234,   313,   426,  1359,   259,  1231,  1235,
    1266,   511,  1320,   176,   216,   516,   685,  1236,     4,    19,
      29,   223,   255,   320,   325,   359,   367,   379,   412,   420,
     461,   464,   625,   626,   633,   635,   637,   639,   640,   641,
     642,   645,   646,   647,   648,   649,   651,   652,   654,  1336,
    1353,  1308,  1221,   594,   596,   259,   232,    26,   576,   203,
     232,   461,   838,  1252,  1252,  1252,  1252,  1252,  1320,  1320,
    1197,  1254,  1256,  1266,  1197,  1252,   259,  1253,  1256,  1268,
     458,  1170,   458,   846,   846,   846,   897,   898,   895,   896,
    1330,  1259,  1252,  1330,   255,   397,  1252,  1197,  1197,  1252,
    1170,   369,  1170,   369,  1242,   979,   103,  1309,  1348,  1000,
    1000,  1249,   466,  1318,  1318,  1002,  1001,   228,   507,  1085,
    1231,  1082,  1170,   387,    49,   265,   240,  1035,   219,   239,
     265,   290,   512,   846,   846,   846,   846,   846,  1178,  1179,
    1176,  1177,  1320,  1170,  1170,   503,   842,  1135,  1128,   221,
    1315,    96,  1132,  1315,  1175,   846,   846,  1189,  1190,  1187,
    1188,   255,   257,  1324,   704,   763,   461,   247,   306,   414,
     487,  1340,   487,  1340,   487,  1340,   487,  1340,   487,  1340,
     513,  1350,   391,  1338,   126,  1266,  1260,  1263,   235,   245,
     391,  1323,  1320,  1321,   172,   206,   244,   478,   516,    50,
     247,   248,   713,  1270,   456,   682,   191,   698,  1234,   257,
    1326,   456,  1307,  1315,   173,   180,   395,   483,   508,   510,
     695,   696,  1320,  1320,  1327,  1336,   456,   507,  1349,   410,
    1320,  1306,   114,  1322,  1322,   290,   653,  1266,  1352,   431,
     265,    39,  1304,  1320,   663,   664,  1222,   595,   596,   259,
     130,  1250,  1252,   255,   257,  1365,  1259,  1218,  1218,    49,
     111,  1000,  1242,  1242,   344,  1221,   205,   322,  1086,  1263,
    1242,  1320,  1036,  1181,  1183,  1185,  1191,   265,   265,   265,
    1259,  1136,   461,  1259,  1315,  1259,   764,   808,   522,    53,
     739,   456,   736,   452,   729,   753,   754,  1270,    26,   725,
     408,  1296,  1296,  1330,     1,    40,    41,    42,    43,    44,
     181,   182,   183,   184,   185,   186,   187,   335,   350,   714,
     715,   716,   717,   718,   730,   731,  1260,   714,  1266,    58,
     361,   678,  1230,  1231,   689,  1266,   418,  1342,   259,   686,
    1263,   686,  1320,  1322,   126,   172,   630,   367,   646,  1320,
    1320,  1320,  1320,  1301,   655,  1320,  1327,   410,   638,   664,
     336,   665,    17,   110,  1170,  1170,  1242,  1320,  1221,   344,
     492,  1259,  1184,  1182,  1183,    30,   128,   167,   206,  1137,
    1138,  1139,  1141,  1145,  1147,  1148,  1149,  1303,  1313,  1259,
     356,   765,   709,   719,   809,   810,   811,  1315,   198,   737,
    1266,   455,  1347,  1263,   752,   754,   452,   259,  1306,   714,
     461,  1231,    48,   475,   690,   691,   692,   693,  1352,  1307,
     198,   681,  1314,   126,   355,   410,   634,  1320,   118,   119,
     120,   241,   255,   340,   341,   342,   355,   447,   627,   628,
     629,  1235,   427,   650,  1231,  1231,  1231,  1320,  1266,   596,
     461,  1024,  1320,  1198,    37,  1299,   347,   108,  1223,     1,
     710,   811,   461,   516,  1266,   736,   115,   738,   513,   755,
    1351,  1270,  1235,  1235,   190,   682,  1266,   650,   259,   632,
    1263,   632,     7,   632,   632,   259,   631,  1263,   422,   462,
      33,   168,   270,   643,  1024,   375,   426,  1343,   130,   429,
    1146,  1331,   766,   461,   812,   461,   226,   740,  1331,   741,
     742,   411,   463,  1303,  1307,  1286,  1367,  1311,  1320,  1230,
     515,   644,   644,  1259,   162,   166,  1357,     9,  1142,  1143,
    1228,     1,   767,   813,   741,  1231,   223,   744,   743,   456,
    1320,  1235,   115,   680,   440,   636,  1230,   265,   392,   344,
    1334,   311,   345,   366,  1144,  1143,   461,    62,    90,    91,
     326,   461,   768,   769,   772,  1320,  1376,    32,    35,    38,
      45,    46,   161,   192,   198,   200,   211,   214,   246,   255,
     268,   310,   323,   352,   378,   385,   403,   456,   466,   484,
     507,   727,   728,   732,   747,   749,   751,   814,   821,   822,
    1320,  1354,   744,  1305,  1322,  1270,  1331,   513,   314,  1331,
     311,  1263,  1320,  1320,  1300,   251,   252,  1325,   781,   206,
     178,   770,  1312,  1320,   255,   397,   815,   816,  1320,  1255,
    1328,  1266,    57,  1259,  1259,   206,  1328,   516,   745,   746,
    1320,  1231,     9,   424,   522,   597,   277,   359,   361,  1361,
     171,   228,   236,   322,  1140,  1221,  1250,  1320,  1300,   773,
    1268,   709,   782,   771,  1259,  1252,  1252,  1320,  1347,  1320,
    1320,   746,  1230,  1272,  1361,   774,   255,   257,  1360,   516,
     710,  1259,   273,   334,   468,   473,   817,   818,   819,  1250,
     817,   818,   820,   179,   190,   213,   243,   775,   776,   777,
     778,   779,   780,  1268,   783,  1252,  1252,   107,   117,  1369,
    1320,  1320,    55,    90,  1369,  1370,  1355,   784,  1320,  1268,
    1268,   213,  1320,  1320,   212,   255,   257,   288,   310,   338,
     422,   439,   461,   482,   502,   511,   727,   732,   733,   747,
     749,   751,   785,   786,   790,   791,   794,   795,   796,   797,
     798,   799,   804,   805,   806,  1354,  1355,  1268,  1268,  1268,
     224,  1317,   304,   305,  1329,  1300,   212,  1266,   513,  1320,
    1330,  1320,  1320,  1259,   289,   334,   800,   801,  1268,   334,
     802,   803,  1268,  1329,  1300,  1321,  1320,   736,  1198,  1245,
    1243,  1245,    54,    90,   326,   330,   331,   374,   389,   390,
     787,  1369,  1370,  1371,  1372,  1373,  1374,  1375,   120,   198,
    1266,   801,  1266,   803,  1321,   801,  1347,  1293,   380,   792,
    1245,   190,   190,   213,   190,   213,   178,   788,  1259,   788,
    1245,   738,  1331,   318,   789,   789,    49,   433,   734,   178,
     793,  1259,   326,  1245,  1266
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   525,   527,   526,   528,   528,   529,   529,   530,   530,
     532,   531,   533,   534,   535,   535,   536,   536,   537,   538,
     539,   540,   540,   542,   541,   543,   544,   544,   545,   545,
     546,   546,   547,   547,   548,   548,   548,   548,   549,   549,
     550,   550,   551,   552,   552,   553,   554,   554,   555,   555,
     555,   555,   555,   557,   556,   558,   558,   559,   559,   561,
     560,   562,   562,   562,   562,   563,   563,   564,   564,   564,
     564,   565,   566,   567,   568,   569,   569,   569,   569,   570,
     570,   571,   572,   571,   573,   573,   573,   574,   574,   575,
     575,   575,   576,   576,   577,   577,   578,   578,   579,   579,
     580,   580,   581,   581,   582,   582,   582,   582,   582,   582,
     582,   582,   582,   582,   582,   582,   584,   583,   585,   585,
     585,   585,   586,   586,   587,   588,   588,   590,   589,   591,
     591,   591,   591,   591,   591,   592,   592,   593,   593,   594,
     593,   595,   595,   596,   596,   596,   596,   596,   596,   597,
     597,   598,   599,   599,   600,   601,   601,   602,   603,   603,
     604,   604,   605,   606,   606,   607,   607,   608,   609,   610,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   618,
     619,   619,   620,   620,   621,   621,   623,   622,   624,   624,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   626,   626,   626,   626,   626,   627,   627,
     627,   628,   628,   628,   628,   629,   629,   630,   630,   630,
     631,   631,   632,   632,   632,   633,   634,   634,   634,   635,
     636,   636,   636,   637,   638,   639,   640,   640,   640,   642,
     641,   643,   643,   643,   644,   644,   644,   644,   645,   645,
     646,   646,   646,   646,   647,   648,   649,   650,   650,   650,
     651,   652,   653,   653,   654,   655,   655,   655,   656,   656,
     656,   657,   657,   658,   658,   659,   660,   660,   660,   660,
     662,   661,   663,   663,   664,   665,   665,   667,   666,   668,
     668,   669,   669,   670,   670,   671,   673,   672,   672,   674,
     674,   675,   675,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   677,   678,   678,   678,   679,   679,
     679,   680,   680,   681,   681,   682,   682,   683,   684,   684,
     685,   685,   686,   686,   687,   688,   689,   689,   690,   690,
     690,   691,   692,   693,   694,   695,   695,   695,   695,   695,
     696,   696,   697,   698,   698,   699,   700,   700,   701,   701,
     702,   703,   702,   704,   705,   704,   706,   706,   707,   708,
     707,   707,   709,   710,   710,   710,   711,   712,   712,   713,
     713,   713,   713,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   715,   715,   716,   716,
     717,   717,   717,   718,   718,   719,   720,   720,   721,   721,
     722,   722,   722,   722,   722,   722,   722,   722,   722,   722,
     722,   722,   722,   722,   723,   724,   725,   725,   726,   727,
     728,   728,   729,   729,   729,   729,   729,   729,   729,   729,
     729,   729,   729,   729,   729,   729,   729,   729,   729,   729,
     729,   729,   729,   729,   729,   729,   729,   729,   729,   729,
     729,   729,   729,   729,   729,   729,   729,   729,   730,   730,
     731,   731,   732,   732,   733,   734,   734,   735,   735,   736,
     736,   737,   737,   738,   738,   739,   739,   740,   740,   741,
     742,   742,   743,   743,   744,   744,   745,   745,   746,   747,
     748,   749,   750,   752,   751,   753,   753,   754,   754,   755,
     755,   756,   756,   757,   757,   758,   759,   758,   760,   761,
     760,   762,   763,   762,   764,   764,   766,   765,   767,   767,
     767,   768,   768,   768,   768,   769,   770,   771,   771,   772,
     773,   773,   773,   774,   774,   775,   775,   775,   775,   775,
     776,   777,   778,   779,   780,   781,   781,   783,   782,   784,
     784,   785,   785,   785,   785,   785,   785,   785,   785,   785,
     785,   785,   785,   785,   785,   785,   785,   786,   787,   787,
     787,   787,   787,   787,   787,   788,   788,   788,   789,   789,
     790,   791,   792,   792,   793,   793,   794,   795,   796,   797,
     797,   798,   799,   799,   800,   800,   801,   801,   801,   802,
     802,   803,   803,   804,   805,   806,   807,   808,   807,   809,
     809,   810,   810,   811,   812,   811,   811,   813,   813,   814,
     814,   814,   814,   814,   814,   814,   814,   814,   814,   814,
     814,   814,   814,   814,   814,   814,   814,   814,   814,   814,
     814,   814,   814,   814,   814,   814,   814,   814,   814,   814,
     814,   814,   814,   814,   815,   815,   816,   816,   817,   817,
     818,   818,   819,   819,   819,   820,   820,   820,   821,   822,
     823,   824,   825,   823,   826,   823,   827,   828,   827,   829,
     827,   830,   830,   831,   832,   832,   832,   833,   833,   833,
     833,   833,   833,   834,   834,   835,   835,   835,   836,   837,
     836,   838,   838,   839,   839,   839,   839,   839,   841,   840,
     842,   842,   843,   844,   845,   845,   847,   848,   846,   850,
     849,   849,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   853,   852,   855,   854,   854,   854,   854,
     854,   854,   854,   854,   854,   854,   854,   854,   854,   854,
     854,   854,   854,   854,   854,   856,   856,   857,   857,   858,
     858,   859,   859,   859,   859,   860,   860,   861,   861,   861,
     862,   863,   863,   864,   865,   865,   865,   865,   865,   865,
     865,   865,   865,   865,   865,   865,   865,   865,   865,   865,
     865,   865,   865,   865,   865,   865,   865,   865,   865,   865,
     865,   865,   866,   866,   867,   867,   869,   868,   870,   870,
     870,   871,   871,   872,   872,   874,   873,   875,   875,   876,
     876,   878,   877,   879,   879,   880,   881,   881,   883,   882,
     884,   885,   885,   885,   885,   886,   887,   886,   888,   888,
     889,   889,   890,   890,   890,   890,   891,   891,   891,   891,
     891,   892,   892,   893,   893,   894,   894,   894,   895,   895,
     896,   896,   897,   897,   898,   899,   899,   901,   900,   902,
     902,   904,   903,   905,   905,   906,   906,   906,   906,   906,
     908,   907,   909,   910,   910,   911,   912,   914,   913,   915,
     915,   916,   916,   917,   917,   919,   918,   920,   920,   920,
     920,   920,   921,   921,   922,   922,   924,   923,   925,   925,
     926,   926,   927,   927,   927,   927,   927,   928,   928,   928,
     928,   929,   929,   930,   930,   930,   930,   930,   930,   930,
     930,   930,   930,   930,   930,   930,   930,   930,   930,   930,
     931,   931,   933,   932,   934,   934,   934,   934,   934,   935,
     935,   937,   936,   938,   940,   939,   941,   942,   942,   943,
     943,   943,   944,   944,   945,   945,   946,   947,   948,   948,
     949,   949,   950,   950,   950,   950,   951,   951,   952,   952,
     954,   953,   955,   955,   955,   955,   955,   955,   955,   956,
     956,   958,   957,   959,   961,   960,   962,   964,   963,   965,
     966,   966,   967,   969,   968,   970,   970,   970,   971,   971,
     973,   972,   974,   975,   975,   976,   976,   976,   977,   977,
     978,   978,   979,   980,   980,   980,   980,   980,   980,   980,
     981,   981,   983,   982,   984,   984,   986,   985,   987,   988,
     988,   988,   989,   989,   989,   989,   991,   990,   992,   993,
     994,   994,   995,   995,   995,   995,   995,   995,   996,   996,
     997,   997,   998,   998,   998,   998,   998,   999,  1000,  1000,
    1000,  1000,  1000,  1001,  1002,  1004,  1003,  1006,  1005,  1007,
    1007,  1009,  1008,  1010,  1010,  1011,  1011,  1013,  1012,  1014,
    1014,  1015,  1015,  1015,  1015,  1016,  1016,  1017,  1017,  1017,
    1017,  1019,  1018,  1020,  1021,  1020,  1020,  1022,  1022,  1023,
    1023,  1024,  1024,  1025,  1025,  1025,  1025,  1025,  1026,  1026,
    1027,  1027,  1028,  1028,  1029,  1031,  1030,  1032,  1033,  1033,
    1034,  1034,  1034,  1034,  1034,  1034,  1034,  1035,  1035,  1036,
    1036,  1037,  1037,  1038,  1040,  1039,  1041,  1042,  1044,  1043,
    1045,  1046,  1046,  1048,  1047,  1049,  1050,  1050,  1050,  1051,
    1051,  1052,  1054,  1053,  1055,  1055,  1056,  1056,  1057,  1057,
    1058,  1058,  1059,  1060,  1060,  1062,  1061,  1063,  1063,  1063,
    1063,  1063,  1063,  1063,  1064,  1064,  1065,  1065,  1066,  1067,
    1068,  1068,  1069,  1069,  1069,  1069,  1069,  1069,  1069,  1069,
    1070,  1070,  1071,  1072,  1072,  1073,  1074,  1074,  1075,  1075,
    1076,  1078,  1077,  1080,  1079,  1081,  1081,  1082,  1082,  1083,
    1083,  1084,  1084,  1085,  1085,  1085,  1086,  1086,  1086,  1088,
    1087,  1089,  1090,  1090,  1091,  1091,  1091,  1091,  1092,  1092,
    1092,  1092,  1092,  1092,  1093,  1094,  1094,  1095,  1095,  1097,
    1096,  1096,  1098,  1098,  1098,  1098,  1098,  1099,  1099,  1100,
    1100,  1100,  1100,  1102,  1101,  1103,  1104,  1104,  1105,  1105,
    1105,  1106,  1106,  1107,  1107,  1109,  1108,  1110,  1110,  1110,
    1111,  1111,  1112,  1113,  1113,  1115,  1114,  1116,  1116,  1118,
    1117,  1119,  1121,  1120,  1122,  1124,  1123,  1125,  1126,  1126,
    1127,  1127,  1128,  1129,  1129,  1130,  1131,  1131,  1132,  1132,
    1133,  1133,  1134,  1134,  1136,  1135,  1137,  1137,  1137,  1137,
    1137,  1138,  1139,  1139,  1140,  1140,  1140,  1140,  1140,  1141,
    1142,  1142,  1143,  1143,  1143,  1144,  1144,  1144,  1144,  1145,
    1146,  1146,  1147,  1148,  1149,  1149,  1151,  1150,  1152,  1153,
    1153,  1154,  1154,  1154,  1154,  1155,  1155,  1156,  1156,  1156,
    1157,  1157,  1158,  1158,  1158,  1159,  1159,  1160,  1161,  1161,
    1162,  1162,  1163,  1164,  1164,  1165,  1165,  1165,  1166,  1166,
    1167,  1168,  1168,  1169,  1170,  1170,  1170,  1171,  1171,  1172,
    1173,  1173,  1174,  1175,  1175,  1175,  1176,  1176,  1177,  1178,
    1178,  1179,  1180,  1181,  1181,  1182,  1182,  1183,  1184,  1184,
    1185,  1186,  1186,  1187,  1187,  1188,  1189,  1189,  1190,  1191,
    1191,  1192,  1192,  1193,  1193,  1194,  1195,  1195,  1196,  1197,
    1197,  1198,  1199,  1201,  1200,  1202,  1202,  1202,  1203,  1203,
    1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,
    1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,
    1203,  1203,  1204,  1204,  1205,  1205,  1206,  1206,  1207,  1208,
    1209,  1209,  1210,  1210,  1210,  1211,  1211,  1211,  1212,  1212,
    1212,  1213,  1213,  1214,  1214,  1214,  1215,  1215,  1216,  1216,
    1216,  1216,  1216,  1216,  1217,  1217,  1218,  1219,  1220,  1221,
    1221,  1222,  1223,  1224,  1224,  1225,  1226,  1226,  1227,  1228,
    1228,  1228,  1229,  1230,  1230,  1231,  1232,  1233,  1233,  1234,
    1235,  1235,  1236,  1236,  1237,  1238,  1238,  1239,  1239,  1239,
    1240,  1240,  1241,  1241,  1242,  1242,  1242,  1242,  1242,  1242,
    1242,  1242,  1242,  1242,  1243,  1243,  1244,  1244,  1244,  1245,
    1245,  1245,  1245,  1245,  1245,  1245,  1246,  1246,  1247,  1247,
    1248,  1248,  1249,  1249,  1250,  1250,  1251,  1251,  1251,  1252,
    1252,  1252,  1253,  1253,  1254,  1254,  1255,  1255,  1255,  1256,
    1257,  1258,  1258,  1259,  1260,  1260,  1260,  1260,  1261,  1262,
    1262,  1262,  1262,  1263,  1263,  1264,  1265,  1265,  1266,  1267,
    1268,  1269,  1269,  1269,  1269,  1269,  1269,  1269,  1270,  1270,
    1271,  1271,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1273,
    1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,
    1273,  1274,  1274,  1275,  1275,  1275,  1276,  1276,  1276,  1276,
    1277,  1277,  1277,  1278,  1278,  1278,  1279,  1279,  1279,  1280,
    1280,  1281,  1281,  1282,  1282,  1283,  1283,  1284,  1285,  1285,
    1286,  1286,  1287,  1287,  1288,  1288,  1289,  1289,  1290,  1290,
    1290,  1291,  1291,  1292,  1292,  1292,  1293,  1293,  1294,  1294,
    1295,  1295,  1295,  1295,  1295,  1295,  1295,  1295,  1296,  1296,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1298,  1298,  1299,  1299,  1300,  1300,  1301,  1301,  1302,  1302,
    1303,  1303,  1304,  1304,  1305,  1305,  1306,  1306,  1307,  1307,
    1308,  1308,  1309,  1309,  1310,  1310,  1311,  1311,  1312,  1312,
    1313,  1313,  1314,  1314,  1315,  1315,  1316,  1316,  1316,  1317,
    1317,  1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,  1321,
    1322,  1322,  1323,  1323,  1323,  1324,  1324,  1324,  1325,  1325,
    1325,  1326,  1326,  1327,  1327,  1328,  1328,  1329,  1329,  1329,
    1330,  1330,  1331,  1331,  1332,  1332,  1332,  1332,  1333,  1333,
    1334,  1334,  1335,  1335,  1336,  1336,  1337,  1337,  1337,  1338,
    1338,  1339,  1339,  1340,  1340,  1341,  1341,  1341,  1342,  1342,
    1343,  1343,  1344,  1344,  1345,  1345,  1346,  1346,  1347,  1347,
    1348,  1348,  1349,  1349,  1349,  1350,  1350,  1351,  1351,  1352,
    1352,  1353,  1353,  1354,  1354,  1355,  1355,  1356,  1356,  1357,
    1357,  1358,  1358,  1359,  1359,  1360,  1360,  1361,  1361,  1362,
    1362,  1363,  1363,  1364,  1364,  1365,  1365,  1366,  1366,  1367,
    1367,  1368,  1368,  1368,  1369,  1369,  1370,  1370,  1371,  1371,
    1372,  1372,  1373,  1373,  1374,  1374,  1375,  1375,  1376,  1376
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     1,     1,
       0,     2,     4,     4,     0,     1,     1,     2,     3,     3,
       3,     0,     3,     0,     7,     5,     1,     1,     1,     1,
       0,     2,     0,     3,     1,     1,     1,     1,     2,     2,
       1,     1,     3,     0,     3,     5,     0,     3,     0,     1,
       1,     2,     2,     0,     4,     0,     3,     0,     3,     0,
       4,     0,     2,     3,     2,     1,     2,     1,     1,     1,
       1,     5,     3,     3,     4,     1,     1,     1,     1,     1,
       2,     0,     0,     4,     0,     2,     3,     1,     2,     3,
       3,     3,     0,     2,     1,     2,     0,     2,     0,     1,
       2,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     2,     3,
       3,     1,     0,     1,     1,     3,     4,     0,     5,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     0,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     2,     3,     1,     2,     3,     1,     2,
       1,     2,     4,     1,     2,     1,     3,     4,     5,     0,
       3,     3,     5,     3,     4,     3,     3,     5,     0,     3,
       0,     2,     0,     2,     0,     2,     0,     6,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     5,     5,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     1,     1,
       1,     1,     0,     1,     1,     4,     1,     1,     1,     7,
       0,     4,     3,     3,     1,     4,     0,     1,     1,     0,
       5,     2,     2,     1,     0,     4,     5,     2,     3,     1,
       1,     3,     1,     2,     4,     4,     4,     1,     3,     4,
       4,     3,     1,     1,     3,     2,     2,     2,     0,     2,
       3,     1,     2,     1,     1,     5,     0,     1,     1,     1,
       0,     6,     1,     2,     2,     0,     2,     0,     9,     0,
       3,     0,     3,     0,     2,     2,     0,     5,     3,     1,
       1,     0,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     0,     1,     1,     4,     6,
       9,     0,     3,     0,     2,     0,     2,     3,     5,     5,
       1,     1,     1,     1,     3,     5,     0,     2,     1,     1,
       1,     4,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     0,     2,     2,     2,     2,     1,     2,
       0,     0,     5,     0,     0,     2,     2,     3,     1,     0,
       4,     3,     2,     0,     1,     1,     1,     0,     2,     1,
       2,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     2,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     0,     2,     2,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     6,     0,     2,     7,     8,     0,
       2,     0,     2,     0,     3,     0,     3,     0,     1,     1,
       0,     5,     1,     1,     0,     3,     1,     2,     1,     2,
       2,     3,     1,     0,     5,     1,     2,     1,     3,     0,
       4,     2,     4,     2,     2,     0,     0,     5,     0,     0,
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
       5,     0,     1,     1,     1,     0,     0,     3,     1,     2,
       2,     3,     0,     2,     2,     2,     0,     3,     2,     2,
       4,     1,     1,     1,     1,     0,     2,     2,     0,     1,
       2,     2,     0,     1,     2,     0,     1,     0,     3,     1,
       2,     0,     3,     2,     3,     0,     1,     3,     3,     2,
       0,     4,     4,     0,     1,     1,     1,     0,     4,     3,
       2,     1,     2,     0,     1,     0,     4,     3,     3,     3,
       3,     2,     2,     1,     1,     2,     0,     3,     1,     1,
       1,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     2,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     3,     1,     3,     3,     3,     3,
       0,     1,     0,     4,     4,     6,     6,     8,     8,     0,
       1,     0,     3,     2,     0,     4,     2,     1,     3,     1,
       1,     1,     2,     1,     1,     2,     2,     3,     2,     3,
       1,     3,     2,     1,     1,     1,     0,     2,     0,     1,
       0,     3,     0,     2,     1,     2,     1,     1,     1,     0,
       2,     0,     3,     1,     0,     3,     1,     0,     3,     3,
       0,     3,     2,     0,     6,     3,     2,     1,     0,     1,
       0,     3,     5,     0,     2,     0,     3,     3,     0,     2,
       1,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     3,     1,     2,     0,     3,     2,     1,
       1,     1,     2,     1,     1,     1,     0,     3,     2,     5,
       1,     2,     2,     2,     1,     1,     1,     2,     1,     2,
       4,     2,     0,     1,     1,     1,     1,     4,     0,     1,
       1,     2,     2,     3,     3,     0,     3,     0,     3,     3,
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
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     3,     4,     1,     2,     3,     1,     2,     3,     3,
       4,     0,     3,     0,     7,     0,     5,     0,     2,     0,
       2,     0,     3,     0,     2,     4,     0,     2,     4,     0,
       4,     4,     0,     3,     0,     4,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     1,     0,     1,     0,
       4,     2,     0,     2,     1,     4,     4,     0,     1,     1,
       1,     1,     1,     0,     4,     5,     1,     2,     1,     3,
       3,     0,     4,     0,     1,     0,     4,     4,     6,     6,
       0,     1,     2,     0,     1,     0,     3,     1,     2,     0,
       3,     5,     0,     3,     2,     0,     4,     6,     0,     3,
       1,     3,     2,     2,     2,     3,     0,     3,     0,     3,
       0,     3,     0,     1,     0,     3,     1,     1,     1,     1,
       1,     7,     0,     1,     1,     1,     1,     1,     1,     4,
       1,     2,     1,     2,     3,     0,     1,     2,     1,     3,
       1,     1,     4,     1,     1,     1,     0,     4,     5,     0,
       2,     0,     4,     3,     3,     1,     1,     0,     1,     1,
       0,     1,     0,     2,     2,     0,     1,     2,     1,     1,
       0,     1,     2,     1,     1,     0,     2,     2,     0,     1,
       2,     0,     1,     2,     0,     2,     2,     0,     1,     2,
       0,     1,     2,     0,     2,     2,     0,     1,     2,     0,
       1,     2,     2,     2,     2,     0,     1,     2,     0,     1,
       2,     2,     2,     0,     1,     2,     0,     1,     2,     0,
       1,     2,     2,     0,     1,     2,     0,     1,     2,     0,
       2,     1,     1,     0,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     1,     1,     3,     3,     1,     3,     3,
       1,     3,     1,     2,     2,     1,     3,     1,     1,     3,
       1,     3,     1,     3,     1,     2,     2,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     0,     2,     1,     1,
       1,     3,     1,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     4,     3,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     2,     1,     1,     3,
       2,     2,     1,     1,     3,     3,     4,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       5,     5,     5,     4,     5,     5,     5,     5,     5,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     5,     0,     3,     2,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     0,     0,     1,
       0,     1,     0,     1,     0,     2,     0,     2,     0,     1,
       1,     0,     1,     0,     1,     2,     0,     2,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
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
#line 1944 "parser.y" /* yacc.c:1646  */
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
#line 6822 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 1956 "parser.y" /* yacc.c:1646  */
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
#line 6845 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 1992 "parser.y" /* yacc.c:1646  */
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
#line 6869 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 2043 "parser.y" /* yacc.c:1646  */
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[-1]), CB_PROGRAM_TYPE);
  }
#line 6878 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 2051 "parser.y" /* yacc.c:1646  */
    {
	  clean_up_program ((yyvsp[-1]), CB_FUNCTION_TYPE);
  }
#line 6886 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 2073 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}
  }
#line 6896 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 2079 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6904 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 2086 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	set_up_func_prototype ((yyvsp[-2]), (yyvsp[-1]), 1);
	cobc_cs_check = 0;
  }
#line 6916 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 2097 "parser.y" /* yacc.c:1646  */
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
#line 6931 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 2116 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6937 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 2117 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6943 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 2126 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6956 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 2135 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6969 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 2154 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6977 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 2158 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6985 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 2174 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6993 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 2191 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 7005 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 2205 "parser.y" /* yacc.c:1646  */
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 7015 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 2217 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
#line 7025 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 2232 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 7037 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 2245 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 7047 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 2274 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 7055 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 2282 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 7063 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 2289 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 7071 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2296 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 7083 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2307 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7091 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2311 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7099 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 2315 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7107 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 2319 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7115 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 2333 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 7124 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 2338 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 7132 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2346 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7140 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 2358 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 7148 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 2362 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) != cb_error_node) {
		set_up_func_prototype ((yyvsp[-1]), (yyvsp[0]), 0);
	}
  }
#line 7158 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2372 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7166 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 2376 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7174 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 2383 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7183 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2388 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7192 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2399 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 7206 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 2444 "parser.y" /* yacc.c:1646  */
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
#line 7234 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2472 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 7248 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2482 "parser.y" /* yacc.c:1646  */
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
#line 7265 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 2495 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 7277 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2511 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 7285 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2518 "parser.y" /* yacc.c:1646  */
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
#line 7304 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2533 "parser.y" /* yacc.c:1646  */
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
#line 7323 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2553 "parser.y" /* yacc.c:1646  */
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
#line 7340 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2566 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 7352 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2577 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 7362 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2583 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7372 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2589 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7382 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2595 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 7392 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2601 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7402 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2607 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 7413 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2617 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 7421 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2621 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7429 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2628 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7437 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2632 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 7445 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2636 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 7453 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2640 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 7461 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2647 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7469 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2651 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 7477 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2657 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7483 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2658 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7489 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2659 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7495 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2660 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 7501 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2661 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 7507 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2662 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 7513 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2666 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7519 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2667 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7525 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2675 "parser.y" /* yacc.c:1646  */
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
#line 7540 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2689 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7548 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2693 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7556 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2701 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7564 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2708 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7572 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2712 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7584 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2723 "parser.y" /* yacc.c:1646  */
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
#line 7605 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2743 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7617 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2751 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7629 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2761 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7635 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2762 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7641 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2769 "parser.y" /* yacc.c:1646  */
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
#line 7663 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2789 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7669 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2790 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7675 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2795 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7683 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2799 "parser.y" /* yacc.c:1646  */
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
#line 7703 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2820 "parser.y" /* yacc.c:1646  */
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
#line 7725 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2843 "parser.y" /* yacc.c:1646  */
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
#line 7806 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2924 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7814 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2928 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7822 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2937 "parser.y" /* yacc.c:1646  */
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
#line 7839 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2956 "parser.y" /* yacc.c:1646  */
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
#line 7854 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2972 "parser.y" /* yacc.c:1646  */
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
#line 7870 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2990 "parser.y" /* yacc.c:1646  */
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
#line 7886 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 3008 "parser.y" /* yacc.c:1646  */
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
#line 7902 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 3025 "parser.y" /* yacc.c:1646  */
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
#line 7918 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 3046 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 7926 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 3053 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7935 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 3061 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7945 "parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 3070 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7955 "parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 3085 "parser.y" /* yacc.c:1646  */
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
#line 7981 "parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 3107 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-3]))) {
		validate_file (current_file, (yyvsp[-3]));
	}
  }
#line 7991 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 3139 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 8001 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 3145 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 8015 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 3155 "parser.y" /* yacc.c:1646  */
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
#line 8032 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 3168 "parser.y" /* yacc.c:1646  */
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
#line 8049 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 3181 "parser.y" /* yacc.c:1646  */
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
#line 8077 "parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 3207 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8083 "parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 3208 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8089 "parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 3209 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int4; }
#line 8095 "parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 3221 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 8103 "parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 3228 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 8111 "parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 3241 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8119 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 3253 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 8128 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 3260 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 8134 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 3261 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 8140 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3262 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 8146 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3270 "parser.y" /* yacc.c:1646  */
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
#line 8171 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3293 "parser.y" /* yacc.c:1646  */
    { }
#line 8177 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 3296 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
#line 8185 "parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 3301 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 8193 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 3311 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	PENDING ("COLLATING SEQUENCE");
  }
#line 8202 "parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 3319 "parser.y" /* yacc.c:1646  */
    {
	  if (CB_ALPHABET_NAME_P (cb_ref ((yyvsp[0])))) {
		  (yyval) = (yyvsp[0]);
	  } else {
		  cb_error_x ((yyvsp[0]), _("'%s' is not an alphabet-name"),
			      cb_name ((yyvsp[0])));
		  (yyval) = cb_error_node;
	  }
  }
#line 8216 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 3334 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 8225 "parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 3349 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 8233 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 3357 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 8242 "parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 3362 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 8251 "parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 3367 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 8260 "parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 3376 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 8268 "parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 3380 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 8277 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 3396 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 8286 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 3401 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 8295 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 3406 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 8304 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3411 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 8313 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3422 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 8322 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3433 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 8330 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3443 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8339 "parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 3450 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8345 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 3451 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 8351 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3452 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 8357 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 3459 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8366 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3470 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 8374 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 3484 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 8383 "parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 3491 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8389 "parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 3492 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 8395 "parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 3493 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8401 "parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 3502 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8409 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 3521 "parser.y" /* yacc.c:1646  */
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
#line 8438 "parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 3548 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8444 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3549 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8450 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3550 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8456 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3551 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8462 "parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 3558 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 8471 "parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 3563 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 8483 "parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 3592 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 8491 "parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 3600 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 8499 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3607 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 8507 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3616 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 8517 "parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 3630 "parser.y" /* yacc.c:1646  */
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
#line 8535 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 3649 "parser.y" /* yacc.c:1646  */
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
#line 8555 "parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 3666 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8563 "parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 3673 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8571 "parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 3677 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8579 "parser.c" /* yacc.c:1646  */
    break;

  case 303:
#line 3688 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8593 "parser.c" /* yacc.c:1646  */
    break;

  case 304:
#line 3698 "parser.y" /* yacc.c:1646  */
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
#line 8612 "parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 3728 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 8621 "parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 3741 "parser.y" /* yacc.c:1646  */
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
#line 8645 "parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 3761 "parser.y" /* yacc.c:1646  */
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
#line 8683 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3796 "parser.y" /* yacc.c:1646  */
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
#line 8715 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 3827 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8723 "parser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 3833 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8729 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 3834 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8735 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 3838 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8741 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 3839 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8747 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 3847 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8756 "parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 3858 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8765 "parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 3863 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8777 "parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 3886 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8786 "parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 3898 "parser.y" /* yacc.c:1646  */
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
#line 8805 "parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3926 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8813 "parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3933 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8821 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3940 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8829 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3949 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 8839 "parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3962 "parser.y" /* yacc.c:1646  */
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("Can only use U or S mode with RECORD SEQUENTIAL files"));
	}
  }
#line 8849 "parser.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3978 "parser.y" /* yacc.c:1646  */
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
		PENDING ("CODE-SET");
	}
  }
#line 8886 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 4014 "parser.y" /* yacc.c:1646  */
    {
	  if (warningopt) {
		  PENDING ("FOR sub-records clause");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[0]));
  }
#line 8898 "parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 4027 "parser.y" /* yacc.c:1646  */
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
#line 8914 "parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 4047 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8928 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 4057 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8941 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 4072 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8951 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 4078 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8961 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 4087 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8969 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 4090 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8979 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 4096 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 8992 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 4114 "parser.y" /* yacc.c:1646  */
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
#line 9011 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 4129 "parser.y" /* yacc.c:1646  */
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
#line 9035 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 4149 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9049 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 4162 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9057 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 4169 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9067 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 4175 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9077 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 4181 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 9087 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 4190 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 9097 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 4199 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 9105 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 4203 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 9118 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 4214 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9124 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 4215 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9130 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 4216 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9136 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 4217 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9142 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 4222 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9150 "parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 4226 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 9158 "parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 4230 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 9166 "parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 4234 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 9174 "parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 4238 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9182 "parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 4242 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 9190 "parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 4246 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 9198 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 4250 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 9206 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 4254 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 9214 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 4258 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 9222 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 4262 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9230 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 4266 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 9238 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 4270 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9250 "parser.c" /* yacc.c:1646  */
    break;

  case 405:
#line 4302 "parser.y" /* yacc.c:1646  */
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
#line 9277 "parser.c" /* yacc.c:1646  */
    break;

  case 406:
#line 4328 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9285 "parser.c" /* yacc.c:1646  */
    break;

  case 407:
#line 4332 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 9294 "parser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 4340 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 9303 "parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4346 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 9312 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4374 "parser.y" /* yacc.c:1646  */
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
#line 9334 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4398 "parser.y" /* yacc.c:1646  */
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
#line 9362 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4425 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 9370 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4429 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 9378 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4438 "parser.y" /* yacc.c:1646  */
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
#line 9401 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4463 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 9410 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4479 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9418 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4483 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9426 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4487 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 9434 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4491 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 9442 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4495 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9450 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4499 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9458 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4503 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 9466 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4507 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 9474 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4511 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 9482 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4515 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 9490 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4519 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 9498 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4523 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9506 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4527 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9515 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4532 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9524 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4537 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9532 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4541 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9540 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4545 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9552 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4553 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9560 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4557 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9568 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4561 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9580 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4569 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 9588 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4573 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9596 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4577 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9604 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4581 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9612 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4585 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9620 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4589 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9628 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4593 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9636 "parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4597 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9644 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4601 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9656 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4609 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9668 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4617 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9676 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4621 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9684 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4625 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9692 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4629 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9700 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4633 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9708 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4637 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	PENDING ("USAGE NATIONAL");
  }
#line 9717 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4657 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9727 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4663 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9737 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4676 "parser.y" /* yacc.c:1646  */
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
#line 9756 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4694 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9764 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4704 "parser.y" /* yacc.c:1646  */
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
#line 9799 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4736 "parser.y" /* yacc.c:1646  */
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
#line 9829 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4764 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9835 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4765 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9841 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4769 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9847 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4770 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9853 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4775 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9861 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4782 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9870 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4790 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9878 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4797 "parser.y" /* yacc.c:1646  */
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
#line 9903 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4820 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9909 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4823 "parser.y" /* yacc.c:1646  */
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
#line 9926 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4838 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9932 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4839 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9938 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4844 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9946 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4850 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9952 "parser.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4852 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9958 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4857 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9967 "parser.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4868 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 9976 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4879 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 9985 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4890 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 9994 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4901 "parser.y" /* yacc.c:1646  */
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
#line 10021 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4929 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 10030 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4937 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10036 "parser.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4938 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10042 "parser.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4942 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10048 "parser.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4943 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 10054 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4948 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 10065 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4961 "parser.y" /* yacc.c:1646  */
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
#line 10082 "parser.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4974 "parser.y" /* yacc.c:1646  */
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
#line 10102 "parser.c" /* yacc.c:1646  */
    break;

  case 513:
#line 4995 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 10115 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 5004 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 10129 "parser.c" /* yacc.c:1646  */
    break;

  case 516:
#line 5019 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 10142 "parser.c" /* yacc.c:1646  */
    break;

  case 517:
#line 5028 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10152 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5040 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 10162 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5046 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10172 "parser.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5057 "parser.y" /* yacc.c:1646  */
    {
	PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 10182 "parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5073 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 10195 "parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5088 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 10203 "parser.c" /* yacc.c:1646  */
    break;

  case 531:
#line 5095 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 10212 "parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5100 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 10220 "parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5111 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 10228 "parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5130 "parser.y" /* yacc.c:1646  */
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
#line 10265 "parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5166 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 10273 "parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5170 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 10282 "parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5175 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 10290 "parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5195 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 10298 "parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5202 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 10306 "parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5209 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 10314 "parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 5216 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 10322 "parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5223 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 10330 "parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 5234 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 10338 "parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 5265 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 10346 "parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 5291 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10354 "parser.c" /* yacc.c:1646  */
    break;

  case 591:
#line 5298 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 10362 "parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5314 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 10370 "parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5325 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 10378 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5337 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 10386 "parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5370 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 10394 "parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5377 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 10402 "parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5384 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10410 "parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5393 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10421 "parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5400 "parser.y" /* yacc.c:1646  */
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
#line 10437 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5425 "parser.y" /* yacc.c:1646  */
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
#line 10461 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5445 "parser.y" /* yacc.c:1646  */
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
#line 10516 "parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 5496 "parser.y" /* yacc.c:1646  */
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
#line 10536 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5519 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
					 "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10545 "parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 5524 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
					 "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10554 "parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 5529 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10562 "parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 5533 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10570 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5537 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
					 "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10579 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5542 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
					 "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10588 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5547 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
					 "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10597 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5552 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
					 "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10606 "parser.c" /* yacc.c:1646  */
    break;

  case 637:
#line 5557 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10614 "parser.c" /* yacc.c:1646  */
    break;

  case 638:
#line 5561 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10622 "parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 5565 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	PENDING ("OVERLINE");
  }
#line 10631 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5570 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	PENDING ("GRID");
  }
#line 10640 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5575 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	PENDING ("LEFTLINE");
  }
#line 10649 "parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 5580 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10657 "parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 5584 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10665 "parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 5588 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10673 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5592 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10681 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5596 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10690 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5601 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10698 "parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 5605 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10706 "parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 5609 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10715 "parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 5614 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10724 "parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 5619 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10733 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5624 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10742 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5637 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10755 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5646 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10764 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5651 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10776 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5682 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10784 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5686 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10792 "parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5690 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10800 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5697 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10808 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5701 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10816 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5705 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10824 "parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 5713 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10836 "parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 5724 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10844 "parser.c" /* yacc.c:1646  */
    break;

  case 681:
#line 5733 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10858 "parser.c" /* yacc.c:1646  */
    break;

  case 682:
#line 5743 "parser.y" /* yacc.c:1646  */
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
#line 10874 "parser.c" /* yacc.c:1646  */
    break;

  case 683:
#line 5755 "parser.y" /* yacc.c:1646  */
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
#line 10893 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5770 "parser.y" /* yacc.c:1646  */
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
#line 10926 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5803 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10934 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5807 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 10943 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5812 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10955 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5820 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 10968 "parser.c" /* yacc.c:1646  */
    break;

  case 690:
#line 5829 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10980 "parser.c" /* yacc.c:1646  */
    break;

  case 691:
#line 5839 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10986 "parser.c" /* yacc.c:1646  */
    break;

  case 692:
#line 5841 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 10992 "parser.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5846 "parser.y" /* yacc.c:1646  */
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
#line 11016 "parser.c" /* yacc.c:1646  */
    break;

  case 695:
#line 5870 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11024 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5874 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		PENDING (_("BY VALUE parameters"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11037 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 5887 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 11049 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 5895 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 11061 "parser.c" /* yacc.c:1646  */
    break;

  case 700:
#line 5903 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 11073 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 5911 "parser.y" /* yacc.c:1646  */
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
#line 11106 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5940 "parser.y" /* yacc.c:1646  */
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
#line 11139 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 5972 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 11147 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 5976 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 11160 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5988 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11170 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 5994 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main) {
		cb_error (_("RETURNING clause cannot be OMITTED for main program"));
	}
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause cannot be OMITTED for a FUNCTION"));
	}
	current_program->flag_void = 1;
  }
#line 11184 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 6004 "parser.y" /* yacc.c:1646  */
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
#line 11217 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 6036 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11226 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 6042 "parser.y" /* yacc.c:1646  */
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
#line 11256 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 6080 "parser.y" /* yacc.c:1646  */
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
#line 11277 "parser.c" /* yacc.c:1646  */
    break;

  case 717:
#line 6098 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11285 "parser.c" /* yacc.c:1646  */
    break;

  case 718:
#line 6108 "parser.y" /* yacc.c:1646  */
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
#line 11333 "parser.c" /* yacc.c:1646  */
    break;

  case 719:
#line 6152 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11341 "parser.c" /* yacc.c:1646  */
    break;

  case 722:
#line 6163 "parser.y" /* yacc.c:1646  */
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
#line 11390 "parser.c" /* yacc.c:1646  */
    break;

  case 723:
#line 6211 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	YYERROR;
  }
#line 11403 "parser.c" /* yacc.c:1646  */
    break;

  case 724:
#line 6223 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11411 "parser.c" /* yacc.c:1646  */
    break;

  case 725:
#line 6227 "parser.y" /* yacc.c:1646  */
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
#line 11427 "parser.c" /* yacc.c:1646  */
    break;

  case 726:
#line 6245 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11437 "parser.c" /* yacc.c:1646  */
    break;

  case 727:
#line 6250 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11446 "parser.c" /* yacc.c:1646  */
    break;

  case 728:
#line 6255 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11456 "parser.c" /* yacc.c:1646  */
    break;

  case 729:
#line 6263 "parser.y" /* yacc.c:1646  */
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
#line 11487 "parser.c" /* yacc.c:1646  */
    break;

  case 730:
#line 6290 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11495 "parser.c" /* yacc.c:1646  */
    break;

  case 731:
#line 6294 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11503 "parser.c" /* yacc.c:1646  */
    break;

  case 781:
#line 6350 "parser.y" /* yacc.c:1646  */
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
#line 11521 "parser.c" /* yacc.c:1646  */
    break;

  case 782:
#line 6364 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11530 "parser.c" /* yacc.c:1646  */
    break;

  case 783:
#line 6375 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}
  }
#line 11544 "parser.c" /* yacc.c:1646  */
    break;

  case 785:
#line 6390 "parser.y" /* yacc.c:1646  */
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
#line 11554 "parser.c" /* yacc.c:1646  */
    break;

  case 786:
#line 6396 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-3]), line_column, current_statement->attr_ptr);
  }
#line 11563 "parser.c" /* yacc.c:1646  */
    break;

  case 787:
#line 6401 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11571 "parser.c" /* yacc.c:1646  */
    break;

  case 788:
#line 6405 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11579 "parser.c" /* yacc.c:1646  */
    break;

  case 789:
#line 6409 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11588 "parser.c" /* yacc.c:1646  */
    break;

  case 790:
#line 6414 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11597 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 6419 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 11606 "parser.c" /* yacc.c:1646  */
    break;

  case 792:
#line 6424 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 11615 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 6429 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 11623 "parser.c" /* yacc.c:1646  */
    break;

  case 794:
#line 6433 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 11631 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 6437 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 11639 "parser.c" /* yacc.c:1646  */
    break;

  case 796:
#line 6441 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 11647 "parser.c" /* yacc.c:1646  */
    break;

  case 797:
#line 6445 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11656 "parser.c" /* yacc.c:1646  */
    break;

  case 798:
#line 6450 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11664 "parser.c" /* yacc.c:1646  */
    break;

  case 799:
#line 6454 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11672 "parser.c" /* yacc.c:1646  */
    break;

  case 800:
#line 6458 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 11680 "parser.c" /* yacc.c:1646  */
    break;

  case 801:
#line 6462 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 11688 "parser.c" /* yacc.c:1646  */
    break;

  case 802:
#line 6466 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11696 "parser.c" /* yacc.c:1646  */
    break;

  case 803:
#line 6470 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11704 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6474 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11712 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6482 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11720 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6500 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_1, &check_duplicate);
  }
#line 11728 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6504 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_2, &check_duplicate);
  }
#line 11736 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6517 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict ("LINE", SYN_CLAUSE_1,
				  _("AT screen-location"), SYN_CLAUSE_3,
				  &check_line_col_duplicate);

	if (!line_column) {
		line_column = CB_BUILD_PAIR ((yyvsp[0]), cb_int0);
	} else {
		CB_PAIR_X (line_column) = (yyvsp[0]);
	}
  }
#line 11752 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6529 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict ("COLUMN", SYN_CLAUSE_2,
				  _("AT screen-location"), SYN_CLAUSE_3,
				  &check_line_col_duplicate);

	if(!line_column) {
		line_column = CB_BUILD_PAIR (cb_int0, (yyvsp[0]));
	} else {
		CB_PAIR_Y (line_column) = (yyvsp[0]);
	}
  }
#line 11768 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6541 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				  _("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				  &check_line_col_duplicate);

	line_column = (yyvsp[0]);
  }
#line 11780 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6551 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11786 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6555 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11792 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6556 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11798 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6561 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11806 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6568 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11814 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6572 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11824 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6578 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11832 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6582 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11840 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6586 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11848 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6590 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11856 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6594 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 11866 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6600 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11874 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6604 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11882 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6608 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 11892 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6614 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11900 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6618 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11908 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6622 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 11916 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6626 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11924 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6630 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11932 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6634 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11940 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6638 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11948 "parser.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6642 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11956 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6646 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11964 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6650 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11972 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6654 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11982 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6660 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11990 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6664 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11998 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6668 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12006 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6672 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12014 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6676 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12022 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6680 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12030 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6684 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12038 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6696 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 12046 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6700 "parser.y" /* yacc.c:1646  */
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
#line 12061 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6717 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 12069 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6726 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 12077 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6730 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 12085 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6734 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 12093 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6741 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12101 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 6748 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 12109 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6752 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 12117 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6762 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12126 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6771 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 12134 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6775 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12147 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6786 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12153 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6787 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12159 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6795 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 12168 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6809 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12176 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6821 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
  }
#line 12186 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6836 "parser.y" /* yacc.c:1646  */
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
#line 12209 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 6858 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12218 "parser.c" /* yacc.c:1646  */
    break;

  case 882:
#line 6863 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12227 "parser.c" /* yacc.c:1646  */
    break;

  case 883:
#line 6868 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12236 "parser.c" /* yacc.c:1646  */
    break;

  case 884:
#line 6873 "parser.y" /* yacc.c:1646  */
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
#line 12257 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6893 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12265 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6897 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12274 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 6902 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12287 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6913 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12293 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6915 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12299 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6920 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12311 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6928 "parser.y" /* yacc.c:1646  */
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
#line 12337 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 6954 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 12345 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 6958 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 12358 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 6967 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 12371 "parser.c" /* yacc.c:1646  */
    break;

  case 896:
#line 6979 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12379 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 6983 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12387 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 6987 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12395 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 6991 "parser.y" /* yacc.c:1646  */
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
#line 12404 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 6996 "parser.y" /* yacc.c:1646  */
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
#line 12428 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 7029 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR (NULL, NULL);
  }
#line 12436 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 7033 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12444 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 7037 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT EXCEPTION before EXCEPTION");
	}
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 12455 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 7047 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12463 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 7051 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12471 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 7058 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12479 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 7062 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW clause");
	(yyval) = (yyvsp[0]);
  }
#line 12488 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 7070 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12496 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 7074 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12504 "parser.c" /* yacc.c:1646  */
    break;

  case 914:
#line 7081 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12512 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 7088 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 12520 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 7092 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 12528 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 7102 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 12536 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 7110 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12544 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 7114 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12552 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 7124 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 12560 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 7132 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12569 "parser.c" /* yacc.c:1646  */
    break;

  case 924:
#line 7137 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12578 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 7144 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 12584 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 7145 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 12590 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 7146 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 12596 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 7147 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 12602 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 7148 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 12608 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 7156 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 12616 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 7165 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 12624 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 7172 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 12632 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 7176 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 12640 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 7186 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 12649 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 7197 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 12664 "parser.c" /* yacc.c:1646  */
    break;

  case 937:
#line 7214 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 12672 "parser.c" /* yacc.c:1646  */
    break;

  case 939:
#line 7223 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 12680 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 7231 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12689 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 7236 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12698 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 7244 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 12706 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 7248 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 12714 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 7258 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 12723 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 7268 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 12731 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 7272 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 12739 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 7276 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 12747 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 7280 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 12755 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 7289 "parser.y" /* yacc.c:1646  */
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[0]));
  }
#line 12763 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 7293 "parser.y" /* yacc.c:1646  */
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[0]));
  }
#line 12771 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 7305 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 12783 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7313 "parser.y" /* yacc.c:1646  */
    {
	/* What if I want to allow implied LINE/COL? */
	int     is_screen_field =
		contains_only_screen_field ((struct cb_list *) (yyvsp[-2]));
	int	screen_display =
	        is_screen_field
		|| upon_value == cb_null
		|| line_column
		|| current_statement->attr_ptr;

	if ((yyvsp[-2]) == cb_null) {
		error_if_no_advancing_in_screen_display (advancing_value);

		cb_emit_display_omitted (line_column,
					 current_statement->attr_ptr);
	} else {
		if (cb_list_length ((yyvsp[-2])) > 1 && screen_display) {
			cb_error (_("Ambiguous DISPLAY; put clauseless items at end or in separate DISPLAY"));
		}

		if (screen_display) {
			if (upon_value != NULL) {
				if (is_screen_field) {
					cb_error (_("Screens cannot be displayed on a device"));
				} else { /* line_column || current_statement->attr_ptr */
					cb_error (_("Cannot use screen clauses with device DISPLAY"));
				}
			} else {
				upon_value = cb_null;
			}

			error_if_no_advancing_in_screen_display (advancing_value);

			if (!line_column && !is_screen_field) {
				cb_error (_("Screen DISPLAY does not have a LINE or COL clause"));
			}

			cb_emit_display ((yyvsp[-2]), cb_null, cb_int1, line_column,
					 current_statement->attr_ptr);
		} else { /* device display */
			if (upon_value == NULL) {
				upon_value = get_default_display_device ();
			}
			cb_emit_display ((yyvsp[-2]), upon_value, advancing_value, NULL, NULL);
		}
	}
  }
#line 12835 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7364 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12843 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7368 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
#line 12852 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7381 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 12860 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7385 "parser.y" /* yacc.c:1646  */
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 12869 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 7390 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 12877 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 7399 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12885 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 7403 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_name ((yyvsp[0]));
  }
#line 12893 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 7407 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_int0;
  }
#line 12901 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7420 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12909 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7424 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 12919 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 7430 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 12929 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 7436 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12937 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 7440 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12945 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 7444 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 12955 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 7450 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 12965 "parser.c" /* yacc.c:1646  */
    break;

  case 980:
#line 7456 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 12975 "parser.c" /* yacc.c:1646  */
    break;

  case 981:
#line 7462 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 12985 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 7468 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12993 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 7472 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 13001 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7476 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 13009 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7480 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 13017 "parser.c" /* yacc.c:1646  */
    break;

  case 986:
#line 7484 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 13025 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 7488 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 13033 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7492 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 13041 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7496 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 13049 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7503 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 13057 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7507 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 13065 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7517 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 13073 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7526 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 13081 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7530 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 13089 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7534 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 13097 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7538 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13105 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7542 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13113 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7549 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 13121 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7553 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 13129 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7563 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 13138 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7572 "parser.y" /* yacc.c:1646  */
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
#line 13154 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7590 "parser.y" /* yacc.c:1646  */
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
#line 13177 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7614 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 13186 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7621 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13192 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7623 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13198 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7628 "parser.y" /* yacc.c:1646  */
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
#line 13213 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7639 "parser.y" /* yacc.c:1646  */
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
#line 13228 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7650 "parser.y" /* yacc.c:1646  */
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
#line 13243 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7664 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13251 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7668 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13259 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7674 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13265 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7676 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13271 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7682 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13280 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7691 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13289 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7699 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13298 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7705 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13307 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7712 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13313 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7714 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13319 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7719 "parser.y" /* yacc.c:1646  */
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
#line 13385 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7780 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 13391 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7781 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 13397 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7782 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 13403 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7786 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13409 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7787 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13415 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7792 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 13423 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7796 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 13431 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7806 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 13440 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7811 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13448 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7819 "parser.y" /* yacc.c:1646  */
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
#line 13473 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7840 "parser.y" /* yacc.c:1646  */
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
#line 13491 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7854 "parser.y" /* yacc.c:1646  */
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
#line 13517 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7876 "parser.y" /* yacc.c:1646  */
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
#line 13543 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7898 "parser.y" /* yacc.c:1646  */
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
#line 13567 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7918 "parser.y" /* yacc.c:1646  */
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
#line 13591 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7940 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13597 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7941 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13603 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7949 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 13612 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7958 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 13620 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7968 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
#line 13629 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 7984 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13642 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7997 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 13651 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 8005 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 13660 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 8010 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 13669 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 8021 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 13682 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 8036 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 13690 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 8045 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13698 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 8049 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 13706 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 8053 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 13714 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 8060 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 13722 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 8064 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 13730 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 8074 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 13738 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 8083 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13746 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 8089 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13752 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 8090 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13758 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 8094 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13764 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 8095 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13770 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 8096 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 13776 "parser.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 8101 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13784 "parser.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 8105 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13792 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 8112 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13800 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 8117 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13808 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 8124 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 13816 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 8130 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 13822 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 8131 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 13828 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 8132 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 13834 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 8133 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 13840 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 8134 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13846 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 8135 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13852 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 8136 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13858 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 8141 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13866 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 8145 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13874 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 8154 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
#line 13883 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 8163 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13893 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 8169 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13903 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 8180 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13912 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 8193 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13920 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 8197 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13928 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 8201 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13936 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 8217 "parser.y" /* yacc.c:1646  */
    {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
#line 13945 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 8222 "parser.y" /* yacc.c:1646  */
    {
	if (!(previous_tallying_phrase == CHARACTERS_PHRASE
	      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
		cb_error (_("TALLYING clause is incomplete"));
	} else {
		cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	}
	
	(yyval) = (yyvsp[-3]);
  }
#line 13960 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 8238 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13969 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 8248 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13979 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 8257 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13987 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 8261 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13995 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 8268 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (FOR_PHRASE);
	(yyval) = cb_build_tallying_data ((yyvsp[-1]));
  }
#line 14004 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 8273 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	(yyval) = cb_build_tallying_characters ((yyvsp[0]));
  }
#line 14013 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 8278 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_all ();
  }
#line 14022 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 8283 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_leading ();
  }
#line 14031 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 8288 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_trailing ();
  }
#line 14040 "parser.c" /* yacc.c:1646  */
    break;

  case 1107:
#line 8293 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	(yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14049 "parser.c" /* yacc.c:1646  */
    break;

  case 1108:
#line 8300 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14055 "parser.c" /* yacc.c:1646  */
    break;

  case 1109:
#line 8301 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 14061 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 8306 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 14070 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 8311 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14078 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 8318 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 14084 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 8319 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 14090 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 8320 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 14096 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 8321 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 14102 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 8326 "parser.y" /* yacc.c:1646  */
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
#line 14128 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 8353 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 14136 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 8357 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14144 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 8361 "parser.y" /* yacc.c:1646  */
    {	
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));  
  }
#line 14152 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 8365 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14160 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 8369 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14168 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 8376 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0]));
  }
#line 14176 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 8383 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0]));
  }
#line 14184 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 8392 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 14193 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 8404 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 14201 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 8412 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14209 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 8416 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14217 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 8426 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 14225 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8435 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 14233 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8439 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 14241 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8446 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 14249 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8450 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 14257 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8460 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 14265 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8468 "parser.y" /* yacc.c:1646  */
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
#line 14290 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8489 "parser.y" /* yacc.c:1646  */
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
#line 14315 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 8512 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 14321 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 8513 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 14327 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 8514 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 14333 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8515 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 14339 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8519 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14345 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8520 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14351 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8524 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14357 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8525 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14363 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 8526 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14369 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8528 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 14378 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8539 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14389 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8550 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14398 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8555 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 14408 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8561 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14417 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8566 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 14426 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8574 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 14438 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8582 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 14446 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8589 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 14454 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8593 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 14468 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8606 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 14479 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8613 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14491 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8624 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14499 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8628 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14508 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8633 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14516 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8637 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 14531 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8648 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14539 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8654 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 14545 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8655 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14551 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8659 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14557 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8660 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14563 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8663 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14569 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8665 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14575 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8670 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14583 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8680 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 14591 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8689 "parser.y" /* yacc.c:1646  */
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
#line 14619 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8715 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14625 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8716 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14631 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8721 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14639 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8725 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14647 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8729 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14655 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8733 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14663 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8737 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14671 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8741 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14679 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8745 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 14687 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8751 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14693 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8752 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14699 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8762 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 14707 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8766 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 14715 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8776 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 14724 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8786 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 14732 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8794 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14740 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8804 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 14749 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8814 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 14757 "parser.c" /* yacc.c:1646  */
    break;

  case 1200:
#line 8823 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14765 "parser.c" /* yacc.c:1646  */
    break;

  case 1201:
#line 8830 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 14773 "parser.c" /* yacc.c:1646  */
    break;

  case 1202:
#line 8834 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 14781 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 8844 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14792 "parser.c" /* yacc.c:1646  */
    break;

  case 1205:
#line 8856 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14801 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 8864 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14809 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 8868 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14817 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8872 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14825 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 8879 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 14833 "parser.c" /* yacc.c:1646  */
    break;

  case 1210:
#line 8883 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 14841 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 8893 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 14850 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 8904 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 14858 "parser.c" /* yacc.c:1646  */
    break;

  case 1214:
#line 8913 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14866 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8918 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14875 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8925 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14881 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 8926 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14887 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 8931 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14895 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 8936 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14903 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 8943 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14911 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 8947 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14919 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 8955 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14927 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 8962 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14935 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 8966 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14943 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 8976 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14954 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 8983 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14962 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 8999 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14968 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 9000 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14974 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 9004 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14980 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 9005 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14986 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 9012 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14994 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 9021 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 15002 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 9033 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 15010 "parser.c" /* yacc.c:1646  */
    break;

  case 1243:
#line 9037 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 15018 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 9041 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 15028 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 9047 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 15038 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 9053 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 15046 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 9057 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 15054 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 9061 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 15062 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 9065 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 15070 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 9074 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 15078 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 9078 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15086 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 9087 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 15094 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 9101 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15102 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 9115 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 15110 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 9119 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 15118 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 9128 "parser.y" /* yacc.c:1646  */
    {
	  cb_emit_set_last_exception_to_off ();
  }
#line 15126 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 9137 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 15134 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 9145 "parser.y" /* yacc.c:1646  */
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
#line 15159 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 9166 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 15169 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 9175 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15177 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 9180 "parser.y" /* yacc.c:1646  */
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
#line 15197 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 9198 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15203 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 9199 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15209 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 9204 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 15218 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 9211 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 15224 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 9212 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 15230 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 9217 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 15240 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 9223 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 15254 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 9233 "parser.y" /* yacc.c:1646  */
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
#line 15270 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 9248 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 15280 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 9254 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15294 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 9264 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15308 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 9280 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 15317 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 9290 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 15330 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 9302 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15338 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 9306 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15346 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 9313 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15354 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 9317 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 15363 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 9322 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 15372 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 9327 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 15381 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 9334 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 15387 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 9335 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 15393 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 9336 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 15399 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 9337 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 15405 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 9338 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 15411 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9339 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 15417 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 9344 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 15426 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9357 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 15434 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 9361 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 15442 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 9371 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 15450 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9375 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 15460 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9381 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 15473 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9393 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 15481 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9397 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15489 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 9401 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15497 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 9405 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15509 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9413 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 15521 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9424 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15529 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 9428 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15537 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9434 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15543 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 9435 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 15549 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 9436 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 15555 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9437 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 15561 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9444 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 15569 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9453 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15577 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9459 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15583 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 9460 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15589 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 9464 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15595 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9465 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 15601 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 9466 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 15607 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 9470 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15613 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9471 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15619 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9476 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 15627 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9480 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 15635 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9490 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 15643 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9499 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 15651 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9503 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 15659 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 9507 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 15667 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9514 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 15675 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 9518 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 15683 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9528 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	PENDING("SUPPRESS");
  }
#line 15696 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9546 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
#line 15705 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9555 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15715 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9561 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15725 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9572 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 15733 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 9580 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 15744 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9593 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 15752 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 9601 "parser.y" /* yacc.c:1646  */
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
#line 15767 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 9617 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 15775 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 9627 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15783 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9633 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15789 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9635 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15795 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9639 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15801 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9641 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15807 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9646 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15815 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9652 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15821 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9654 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15827 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9659 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15835 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9665 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15841 "parser.c" /* yacc.c:1646  */
    break;

  case 1357:
#line 9666 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15847 "parser.c" /* yacc.c:1646  */
    break;

  case 1358:
#line 9670 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15853 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9671 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15859 "parser.c" /* yacc.c:1646  */
    break;

  case 1360:
#line 9675 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15865 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9676 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15871 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9681 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 15879 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9685 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 15887 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9695 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 15896 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9713 "parser.y" /* yacc.c:1646  */
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
#line 15922 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9738 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15930 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9742 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15943 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9754 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			set_up_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15957 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9764 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15966 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9769 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15975 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9774 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15984 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9779 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15993 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9787 "parser.y" /* yacc.c:1646  */
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
#line 16032 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9830 "parser.y" /* yacc.c:1646  */
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
#line 16076 "parser.c" /* yacc.c:1646  */
    break;

  case 1383:
#line 9870 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 16090 "parser.c" /* yacc.c:1646  */
    break;

  case 1384:
#line 9880 "parser.y" /* yacc.c:1646  */
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
#line 16115 "parser.c" /* yacc.c:1646  */
    break;

  case 1389:
#line 9910 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 16125 "parser.c" /* yacc.c:1646  */
    break;

  case 1390:
#line 9919 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 16135 "parser.c" /* yacc.c:1646  */
    break;

  case 1391:
#line 9925 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 16145 "parser.c" /* yacc.c:1646  */
    break;

  case 1392:
#line 9935 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
#line 16155 "parser.c" /* yacc.c:1646  */
    break;

  case 1393:
#line 9944 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 16165 "parser.c" /* yacc.c:1646  */
    break;

  case 1396:
#line 9960 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 16176 "parser.c" /* yacc.c:1646  */
    break;

  case 1398:
#line 9972 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 16187 "parser.c" /* yacc.c:1646  */
    break;

  case 1399:
#line 9981 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16193 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 9982 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16199 "parser.c" /* yacc.c:1646  */
    break;

  case 1401:
#line 9987 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 16207 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 9991 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16215 "parser.c" /* yacc.c:1646  */
    break;

  case 1403:
#line 9995 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16223 "parser.c" /* yacc.c:1646  */
    break;

  case 1404:
#line 9999 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 16231 "parser.c" /* yacc.c:1646  */
    break;

  case 1405:
#line 10005 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 16237 "parser.c" /* yacc.c:1646  */
    break;

  case 1406:
#line 10006 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 16243 "parser.c" /* yacc.c:1646  */
    break;

  case 1410:
#line 10017 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 16251 "parser.c" /* yacc.c:1646  */
    break;

  case 1411:
#line 10021 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 16259 "parser.c" /* yacc.c:1646  */
    break;

  case 1414:
#line 10035 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT EXCEPTION before EXCEPTION");
	}
  }
#line 16269 "parser.c" /* yacc.c:1646  */
    break;

  case 1415:
#line 10044 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16275 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 10046 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16281 "parser.c" /* yacc.c:1646  */
    break;

  case 1417:
#line 10051 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16290 "parser.c" /* yacc.c:1646  */
    break;

  case 1422:
#line 10069 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16299 "parser.c" /* yacc.c:1646  */
    break;

  case 1427:
#line 10085 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT EXCEPTION before EXCEPTION");
	}
  }
#line 16309 "parser.c" /* yacc.c:1646  */
    break;

  case 1428:
#line 10094 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16315 "parser.c" /* yacc.c:1646  */
    break;

  case 1429:
#line 10096 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16321 "parser.c" /* yacc.c:1646  */
    break;

  case 1430:
#line 10101 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16330 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 10114 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16339 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 10126 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT SIZE ERROR before SIZE ERROR");
	}
  }
#line 16349 "parser.c" /* yacc.c:1646  */
    break;

  case 1437:
#line 10135 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16355 "parser.c" /* yacc.c:1646  */
    break;

  case 1438:
#line 10137 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16361 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 10142 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16370 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 10155 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16379 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 10167 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT OVERFLOW before OVERFLOW");
	}
  }
#line 16389 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 10176 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16395 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 10178 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16401 "parser.c" /* yacc.c:1646  */
    break;

  case 1448:
#line 10183 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16410 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 10196 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16419 "parser.c" /* yacc.c:1646  */
    break;

  case 1457:
#line 10222 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16428 "parser.c" /* yacc.c:1646  */
    break;

  case 1460:
#line 10235 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16437 "parser.c" /* yacc.c:1646  */
    break;

  case 1462:
#line 10246 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END-OF-PAGE before AT END-OF-PAGE");
	}
  }
#line 16447 "parser.c" /* yacc.c:1646  */
    break;

  case 1463:
#line 10255 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16453 "parser.c" /* yacc.c:1646  */
    break;

  case 1464:
#line 10257 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16459 "parser.c" /* yacc.c:1646  */
    break;

  case 1465:
#line 10262 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16468 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 10275 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16477 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 10291 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT INVALID KEY before INVALID KEY");
	}
  }
#line 16487 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 10300 "parser.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 16493 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 10302 "parser.y" /* yacc.c:1646  */
    {(yyval) = cb_int1;}
#line 16499 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 10307 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16508 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 10320 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16517 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 10330 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 16525 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 10334 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16533 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 10344 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 16541 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 10351 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 16549 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 10357 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 16558 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 10362 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 16566 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 10375 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 16578 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 10383 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 16584 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 10384 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 16590 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 10386 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 16596 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 10387 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 16602 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 10388 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 16608 "parser.c" /* yacc.c:1646  */
    break;

  case 1494:
#line 10389 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 16614 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 10390 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 16620 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 10392 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 16626 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 10393 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 16632 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10394 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 16638 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 10395 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 16644 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10396 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 16650 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10397 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 16656 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 10399 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 16662 "parser.c" /* yacc.c:1646  */
    break;

  case 1503:
#line 10400 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 16668 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 10401 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 16674 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 10403 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 16680 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10404 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 16686 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 10405 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 16692 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 10406 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 16698 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10407 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 16704 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 10410 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 16710 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 10411 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 16716 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 10441 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16724 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 10445 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16732 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 10456 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 16738 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10457 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 16744 "parser.c" /* yacc.c:1646  */
    break;

  case 1527:
#line 10458 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16750 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10462 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 16756 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10463 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 16762 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 10464 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16768 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 10469 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 16776 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10472 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16782 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 10476 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16788 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 10477 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 16794 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10478 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16800 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10481 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16806 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10482 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16812 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10493 "parser.y" /* yacc.c:1646  */
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
#line 16828 "parser.c" /* yacc.c:1646  */
    break;

  case 1539:
#line 10505 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16841 "parser.c" /* yacc.c:1646  */
    break;

  case 1540:
#line 10514 "parser.y" /* yacc.c:1646  */
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
#line 16857 "parser.c" /* yacc.c:1646  */
    break;

  case 1541:
#line 10526 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16870 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10535 "parser.y" /* yacc.c:1646  */
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
#line 16886 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10547 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16899 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10561 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16905 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10563 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 16911 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10568 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 16919 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10576 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 16925 "parser.c" /* yacc.c:1646  */
    break;

  case 1548:
#line 10583 "parser.y" /* yacc.c:1646  */
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
#line 16944 "parser.c" /* yacc.c:1646  */
    break;

  case 1549:
#line 10603 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16952 "parser.c" /* yacc.c:1646  */
    break;

  case 1550:
#line 10607 "parser.y" /* yacc.c:1646  */
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
#line 16974 "parser.c" /* yacc.c:1646  */
    break;

  case 1551:
#line 10628 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16987 "parser.c" /* yacc.c:1646  */
    break;

  case 1552:
#line 10669 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17000 "parser.c" /* yacc.c:1646  */
    break;

  case 1553:
#line 10682 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17006 "parser.c" /* yacc.c:1646  */
    break;

  case 1554:
#line 10684 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17012 "parser.c" /* yacc.c:1646  */
    break;

  case 1555:
#line 10688 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17018 "parser.c" /* yacc.c:1646  */
    break;

  case 1556:
#line 10694 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17024 "parser.c" /* yacc.c:1646  */
    break;

  case 1557:
#line 10696 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17030 "parser.c" /* yacc.c:1646  */
    break;

  case 1558:
#line 10701 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 17043 "parser.c" /* yacc.c:1646  */
    break;

  case 1561:
#line 10715 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17051 "parser.c" /* yacc.c:1646  */
    break;

  case 1562:
#line 10722 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 17061 "parser.c" /* yacc.c:1646  */
    break;

  case 1563:
#line 10732 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17067 "parser.c" /* yacc.c:1646  */
    break;

  case 1564:
#line 10733 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17073 "parser.c" /* yacc.c:1646  */
    break;

  case 1565:
#line 10738 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17082 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10746 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17091 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10754 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17099 "parser.c" /* yacc.c:1646  */
    break;

  case 1568:
#line 10758 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17107 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10765 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17117 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10781 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 17130 "parser.c" /* yacc.c:1646  */
    break;

  case 1573:
#line 10790 "parser.y" /* yacc.c:1646  */
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
#line 17140 "parser.c" /* yacc.c:1646  */
    break;

  case 1574:
#line 10801 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 17154 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 10818 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17162 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10822 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17170 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10831 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17178 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10837 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17184 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10838 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17190 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10843 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17198 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10847 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17206 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 10858 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17214 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 10862 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17222 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 10866 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17230 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 10870 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 17238 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 10874 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17246 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 10878 "parser.y" /* yacc.c:1646  */
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
#line 17268 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 10899 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17276 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 10903 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17284 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 10920 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17292 "parser.c" /* yacc.c:1646  */
    break;

  case 1604:
#line 10924 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17300 "parser.c" /* yacc.c:1646  */
    break;

  case 1605:
#line 10928 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17308 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 10962 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17316 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 10970 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17324 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 10979 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17332 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 10984 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 17340 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 10991 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17348 "parser.c" /* yacc.c:1646  */
    break;

  case 1624:
#line 10999 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17356 "parser.c" /* yacc.c:1646  */
    break;

  case 1626:
#line 11007 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17364 "parser.c" /* yacc.c:1646  */
    break;

  case 1629:
#line 11017 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17370 "parser.c" /* yacc.c:1646  */
    break;

  case 1630:
#line 11021 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 17376 "parser.c" /* yacc.c:1646  */
    break;

  case 1631:
#line 11025 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17382 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 11026 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17388 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 11030 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17394 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 11035 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17405 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 11042 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17416 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 11049 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17427 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 11056 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17438 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 11066 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 17446 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 11073 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17460 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 11083 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17474 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 11093 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17488 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 11103 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17502 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 11116 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17510 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 11120 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17519 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 11128 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 17528 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 11136 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 17536 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 11140 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 17545 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 11150 "parser.y" /* yacc.c:1646  */
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
#line 17560 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 11164 "parser.y" /* yacc.c:1646  */
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
#line 17584 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 11187 "parser.y" /* yacc.c:1646  */
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
#line 17607 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 11209 "parser.y" /* yacc.c:1646  */
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
#line 17627 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 11224 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17633 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 11225 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17639 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 11226 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17645 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 11227 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17651 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 11228 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17657 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 11229 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17663 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 11234 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17671 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 11238 "parser.y" /* yacc.c:1646  */
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
#line 17689 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 11255 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17697 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 11259 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17705 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 11265 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17711 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 11266 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17717 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 11267 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17723 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 11268 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17729 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 11269 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17735 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 11270 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17741 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 11271 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17747 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 11278 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 17755 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 11282 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 17763 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 11286 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17771 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 11290 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17779 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 11294 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 17787 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 11298 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17795 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 11302 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17803 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 11306 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17811 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 11310 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17819 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 11314 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17827 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 11318 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 17835 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11322 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 17843 "parser.c" /* yacc.c:1646  */
    break;

  case 1690:
#line 11347 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17851 "parser.c" /* yacc.c:1646  */
    break;

  case 1691:
#line 11351 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 17859 "parser.c" /* yacc.c:1646  */
    break;

  case 1692:
#line 11355 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 17867 "parser.c" /* yacc.c:1646  */
    break;

  case 1693:
#line 11362 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17875 "parser.c" /* yacc.c:1646  */
    break;

  case 1694:
#line 11366 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17883 "parser.c" /* yacc.c:1646  */
    break;

  case 1695:
#line 11370 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17891 "parser.c" /* yacc.c:1646  */
    break;

  case 1696:
#line 11377 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 17902 "parser.c" /* yacc.c:1646  */
    break;

  case 1697:
#line 11384 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 17913 "parser.c" /* yacc.c:1646  */
    break;

  case 1698:
#line 11391 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 17924 "parser.c" /* yacc.c:1646  */
    break;

  case 1699:
#line 11401 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17935 "parser.c" /* yacc.c:1646  */
    break;

  case 1700:
#line 11408 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 17946 "parser.c" /* yacc.c:1646  */
    break;

  case 1701:
#line 11418 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17957 "parser.c" /* yacc.c:1646  */
    break;

  case 1702:
#line 11425 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 17968 "parser.c" /* yacc.c:1646  */
    break;

  case 1703:
#line 11435 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17976 "parser.c" /* yacc.c:1646  */
    break;

  case 1704:
#line 11439 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17990 "parser.c" /* yacc.c:1646  */
    break;

  case 1705:
#line 11452 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17998 "parser.c" /* yacc.c:1646  */
    break;

  case 1706:
#line 11456 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18012 "parser.c" /* yacc.c:1646  */
    break;

  case 1707:
#line 11470 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 18020 "parser.c" /* yacc.c:1646  */
    break;

  case 1708:
#line 11478 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18026 "parser.c" /* yacc.c:1646  */
    break;

  case 1709:
#line 11479 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18032 "parser.c" /* yacc.c:1646  */
    break;

  case 1710:
#line 11483 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18038 "parser.c" /* yacc.c:1646  */
    break;

  case 1711:
#line 11484 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18044 "parser.c" /* yacc.c:1646  */
    break;

  case 1712:
#line 11488 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18050 "parser.c" /* yacc.c:1646  */
    break;

  case 1713:
#line 11489 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18056 "parser.c" /* yacc.c:1646  */
    break;

  case 1714:
#line 11494 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18064 "parser.c" /* yacc.c:1646  */
    break;

  case 1715:
#line 11498 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18072 "parser.c" /* yacc.c:1646  */
    break;

  case 1716:
#line 11505 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18080 "parser.c" /* yacc.c:1646  */
    break;

  case 1717:
#line 11509 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18088 "parser.c" /* yacc.c:1646  */
    break;

  case 1718:
#line 11516 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18094 "parser.c" /* yacc.c:1646  */
    break;

  case 1719:
#line 11517 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18100 "parser.c" /* yacc.c:1646  */
    break;

  case 1720:
#line 11518 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 18106 "parser.c" /* yacc.c:1646  */
    break;

  case 1721:
#line 11522 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18112 "parser.c" /* yacc.c:1646  */
    break;

  case 1722:
#line 11523 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 18118 "parser.c" /* yacc.c:1646  */
    break;

  case 1723:
#line 11527 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 18124 "parser.c" /* yacc.c:1646  */
    break;

  case 1724:
#line 11528 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18130 "parser.c" /* yacc.c:1646  */
    break;

  case 1725:
#line 11529 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18136 "parser.c" /* yacc.c:1646  */
    break;

  case 1726:
#line 11534 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 18144 "parser.c" /* yacc.c:1646  */
    break;

  case 1727:
#line 11538 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 18157 "parser.c" /* yacc.c:1646  */
    break;

  case 1728:
#line 11550 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 18166 "parser.c" /* yacc.c:1646  */
    break;

  case 1729:
#line 11555 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 18175 "parser.c" /* yacc.c:1646  */
    break;

  case 1730:
#line 11563 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 18183 "parser.c" /* yacc.c:1646  */
    break;

  case 1731:
#line 11567 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 18191 "parser.c" /* yacc.c:1646  */
    break;

  case 1732:
#line 11571 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 18199 "parser.c" /* yacc.c:1646  */
    break;

  case 1733:
#line 11575 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 18207 "parser.c" /* yacc.c:1646  */
    break;

  case 1734:
#line 11579 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 18215 "parser.c" /* yacc.c:1646  */
    break;

  case 1735:
#line 11583 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 18223 "parser.c" /* yacc.c:1646  */
    break;

  case 1736:
#line 11587 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 18231 "parser.c" /* yacc.c:1646  */
    break;

  case 1737:
#line 11591 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 18239 "parser.c" /* yacc.c:1646  */
    break;

  case 1738:
#line 11597 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18245 "parser.c" /* yacc.c:1646  */
    break;

  case 1739:
#line 11598 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18251 "parser.c" /* yacc.c:1646  */
    break;


#line 18255 "parser.c" /* yacc.c:1646  */
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
#line 11770 "parser.y" /* yacc.c:1906  */

